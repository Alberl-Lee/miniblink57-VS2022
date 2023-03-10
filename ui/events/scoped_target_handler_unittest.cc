// Copyright 2015 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "ui/events/scoped_target_handler.h"

#include <utility>

#include "base/macros.h"
#include "base/memory/scoped_ptr.h"
#include "testing/gtest/include/gtest/gtest.h"
#include "ui/events/event_handler.h"
#include "ui/events/event_target.h"
#include "ui/events/event_target_iterator.h"
#include "ui/events/event_utils.h"

namespace ui {

namespace {

    class TestEventTargetIterator : public EventTargetIterator {
    public:
        TestEventTargetIterator() { }

        // EventTargetIterator:
        EventTarget* GetNextTarget() override { return nullptr; }

    private:
        DISALLOW_COPY_AND_ASSIGN(TestEventTargetIterator);
    };

    // An EventTarget that holds ownership of its target and delegate EventHandlers.
    class TestEventTarget : public EventTarget {
    public:
        TestEventTarget() { }
        ~TestEventTarget() override { }

        void SetHandler(scoped_ptr<EventHandler> target_handler,
            scoped_ptr<EventHandler> delegate)
        {
            target_handler_ = std::move(target_handler);
            delegate_ = std::move(delegate);
        }

        // EventTarget:
        void DispatchEvent(Event* event) { target_handler()->OnEvent(event); }
        bool CanAcceptEvent(const Event& event) override { return true; }
        EventTarget* GetParentTarget() override { return nullptr; }
        scoped_ptr<EventTargetIterator> GetChildIterator() const override
        {
            return make_scoped_ptr(new TestEventTargetIterator);
        }
        EventTargeter* GetEventTargeter() override { return nullptr; }

    private:
        scoped_ptr<EventHandler> target_handler_;
        scoped_ptr<EventHandler> delegate_;

        DISALLOW_COPY_AND_ASSIGN(TestEventTarget);
    };

    // An EventHandler that sets itself as a target handler for an EventTarget and
    // can recursively dispatch an Event.
    class NestedEventHandler : public EventHandler {
    public:
        NestedEventHandler(TestEventTarget* target, int nesting)
            : target_(target)
            , nesting_(nesting)
        {
            original_handler_ = target_->SetTargetHandler(this);
        }
        ~NestedEventHandler() override
        {
            EventHandler* handler = target_->SetTargetHandler(original_handler_);
            DCHECK_EQ(this, handler);
        }

    protected:
        void OnEvent(Event* event) override
        {
            if (--nesting_ == 0)
                return;
            target_->DispatchEvent(event);
        }

    private:
        TestEventTarget* target_;
        int nesting_;
        EventHandler* original_handler_;

        DISALLOW_COPY_AND_ASSIGN(NestedEventHandler);
    };

    // An EventHandler that sets itself as a target handler for an EventTarget and
    // destroys that EventTarget when handling an Event, possibly after recursively
    // handling the Event.
    class TargetDestroyingEventHandler : public EventHandler {
    public:
        TargetDestroyingEventHandler(TestEventTarget* target, int nesting)
            : target_(target)
            , nesting_(nesting)
        {
            original_handler_ = target_->SetTargetHandler(this);
        }
        ~TargetDestroyingEventHandler() override
        {
            EventHandler* handler = target_->SetTargetHandler(original_handler_);
            DCHECK_EQ(this, handler);
        }

    protected:
        void OnEvent(Event* event) override
        {
            if (--nesting_ == 0) {
                delete target_;
                return;
            }
            target_->DispatchEvent(event);
        }

    private:
        TestEventTarget* target_;
        int nesting_;
        EventHandler* original_handler_;

        DISALLOW_COPY_AND_ASSIGN(TargetDestroyingEventHandler);
    };

    // An EventHandler that can be set to receive events in addition to the target
    // handler and counts the Events that it receives.
    class EventCountingEventHandler : public EventHandler {
    public:
        EventCountingEventHandler(EventTarget* target, int* count)
            : scoped_target_handler_(new ScopedTargetHandler(target, this))
            , count_(count)
        {
        }
        ~EventCountingEventHandler() override { }

    protected:
        void OnEvent(Event* event) override { (*count_)++; }

    private:
        scoped_ptr<ScopedTargetHandler> scoped_target_handler_;
        int* count_;

        DISALLOW_COPY_AND_ASSIGN(EventCountingEventHandler);
    };

} // namespace

// Tests that a ScopedTargetHandler invokes both the target and a delegate.
TEST(ScopedTargetHandlerTest, HandlerInvoked)
{
    int count = 0;
    TestEventTarget* target = new TestEventTarget;
    scoped_ptr<NestedEventHandler> target_handler(
        new NestedEventHandler(target, 1));
    scoped_ptr<EventCountingEventHandler> delegate(
        new EventCountingEventHandler(target, &count));
    target->SetHandler(std::move(target_handler), std::move(delegate));
    MouseEvent event(ET_MOUSE_PRESSED, gfx::Point(), gfx::Point(),
        EventTimeForNow(), EF_LEFT_MOUSE_BUTTON,
        EF_LEFT_MOUSE_BUTTON);
    target->DispatchEvent(&event);
    EXPECT_EQ(1, count);
    delete target;
}

// Tests that a ScopedTargetHandler invokes both the target and a delegate when
// an Event is dispatched recursively such as with synthetic events.
TEST(ScopedTargetHandlerTest, HandlerInvokedNested)
{
    int count = 0;
    TestEventTarget* target = new TestEventTarget;
    scoped_ptr<NestedEventHandler> target_handler(
        new NestedEventHandler(target, 2));
    scoped_ptr<EventCountingEventHandler> delegate(
        new EventCountingEventHandler(target, &count));
    target->SetHandler(std::move(target_handler), std::move(delegate));
    MouseEvent event(ET_MOUSE_PRESSED, gfx::Point(), gfx::Point(),
        EventTimeForNow(), EF_LEFT_MOUSE_BUTTON,
        EF_LEFT_MOUSE_BUTTON);
    target->DispatchEvent(&event);
    EXPECT_EQ(2, count);
    delete target;
}

// Tests that a it is safe to delete a ScopedTargetHandler while handling an
// event.
TEST(ScopedTargetHandlerTest, SafeToDestroy)
{
    int count = 0;
    TestEventTarget* target = new TestEventTarget;
    scoped_ptr<TargetDestroyingEventHandler> target_handler(
        new TargetDestroyingEventHandler(target, 1));
    scoped_ptr<EventCountingEventHandler> delegate(
        new EventCountingEventHandler(target, &count));
    target->SetHandler(std::move(target_handler), std::move(delegate));
    MouseEvent event(ET_MOUSE_PRESSED, gfx::Point(), gfx::Point(),
        EventTimeForNow(), EF_LEFT_MOUSE_BUTTON,
        EF_LEFT_MOUSE_BUTTON);
    target->DispatchEvent(&event);
    EXPECT_EQ(0, count);
}

// Tests that a it is safe to delete a ScopedTargetHandler while handling an
// event recursively.
TEST(ScopedTargetHandlerTest, SafeToDestroyNested)
{
    int count = 0;
    TestEventTarget* target = new TestEventTarget;
    scoped_ptr<TargetDestroyingEventHandler> target_handler(
        new TargetDestroyingEventHandler(target, 2));
    scoped_ptr<EventCountingEventHandler> delegate(
        new EventCountingEventHandler(target, &count));
    target->SetHandler(std::move(target_handler), std::move(delegate));
    MouseEvent event(ET_MOUSE_PRESSED, gfx::Point(), gfx::Point(),
        EventTimeForNow(), EF_LEFT_MOUSE_BUTTON,
        EF_LEFT_MOUSE_BUTTON);
    target->DispatchEvent(&event);
    EXPECT_EQ(0, count);
}

} // namespace ui
