// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "platform/scheduler/base/thread_load_tracker.h"

#include <algorithm>

namespace blink {
namespace scheduler {

    ThreadLoadTracker::ThreadLoadTracker(base::TimeTicks now,
        const Callback& callback,
        base::TimeDelta reporting_interval,
        base::TimeDelta waiting_period)
        : time_(now)
        , thread_state_(ThreadState::PAUSED)
        , last_state_change_time_(now)
        , waiting_period_(waiting_period)
        , reporting_interval_(reporting_interval)
        , callback_(callback)
    {
        next_reporting_time_ = now + waiting_period_;
    }

    ThreadLoadTracker::~ThreadLoadTracker() { }

    void ThreadLoadTracker::Pause(base::TimeTicks now)
    {
        Advance(now, TaskState::IDLE);
        thread_state_ = ThreadState::PAUSED;
        last_state_change_time_ = now;
    }

    void ThreadLoadTracker::Resume(base::TimeTicks now)
    {
        Advance(now, TaskState::IDLE);
        thread_state_ = ThreadState::ACTIVE;
        last_state_change_time_ = now;

        next_reporting_time_ = now + reporting_interval_;
        run_time_inside_window_ = base::TimeDelta();
    }

    void ThreadLoadTracker::RecordTaskTime(base::TimeTicks start_time,
        base::TimeTicks end_time)
    {
        start_time = std::max(last_state_change_time_, start_time);
        end_time = std::max(last_state_change_time_, end_time);

        Advance(start_time, TaskState::IDLE);
        Advance(end_time, TaskState::TASK_RUNNING);
    }

    void ThreadLoadTracker::RecordIdle(base::TimeTicks now)
    {
        Advance(now, TaskState::IDLE);
    }

    namespace {

        // Calculates length of intersection of two time intervals.
        base::TimeDelta Intersection(base::TimeTicks left1,
            base::TimeTicks right1,
            base::TimeTicks left2,
            base::TimeTicks right2)
        {
            DCHECK_LT(left1, right1);
            DCHECK_LT(left2, right2);
            base::TimeTicks left = std::max(left1, left2);
            base::TimeTicks right = std::min(right1, right2);

            if (left <= right)
                return right - left;

            return base::TimeDelta();
        }

    } // namespace

    void ThreadLoadTracker::Advance(base::TimeTicks now, TaskState task_state)
    {
        // This function advances |time_| to now and calls |callback_|
        // when appropriate.
        DCHECK_LE(time_, now);

        if (thread_state_ == ThreadState::PAUSED) {
            // If the load tracker is paused, bail out early.
            time_ = now;
            return;
        }

        while (time_ < now) {
            // Advance time_ to the earliest of following:
            // a) time to call |callback_|
            // b) requested time to forward (|now|).
            base::TimeTicks next_current_time = std::min(next_reporting_time_, now);

            base::TimeDelta delta = next_current_time - time_;

            // Keep a running total of the time spent running tasks within the window
            // and the total time.
            total_active_time_ += delta;
            if (task_state == TaskState::TASK_RUNNING) {
                run_time_inside_window_ += Intersection(next_reporting_time_ - reporting_interval_,
                    next_reporting_time_, time_, time_ + delta);
            }

            time_ = next_current_time;

            if (time_ == next_reporting_time_) {
                // Call |callback_| if need and update next callback time.
                if (thread_state_ == ThreadState::ACTIVE && total_active_time_ >= waiting_period_) {
                    callback_.Run(time_, Load());
                    DCHECK_EQ(thread_state_, ThreadState::ACTIVE);
                }
                next_reporting_time_ += reporting_interval_;
                run_time_inside_window_ = base::TimeDelta();
            }
        }
    }

    double ThreadLoadTracker::Load()
    {
        return run_time_inside_window_.InSecondsF() / reporting_interval_.InSecondsF();
    }

} // namespace scheduler
} // namespace blink
