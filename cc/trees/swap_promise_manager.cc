// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "cc/trees/swap_promise_manager.h"

#include "cc/output/swap_promise.h"
#include "cc/trees/swap_promise_monitor.h"

namespace cc {

SwapPromiseManager::SwapPromiseManager() { }

SwapPromiseManager::~SwapPromiseManager()
{
    DCHECK(swap_promise_monitors_.empty());
    BreakSwapPromises(SwapPromise::COMMIT_FAILS);
}

void SwapPromiseManager::QueueSwapPromise(
    std::unique_ptr<SwapPromise> swap_promise)
{
    DCHECK(swap_promise);
    swap_promise_list_.push_back(std::move(swap_promise));
}

void SwapPromiseManager::InsertSwapPromiseMonitor(SwapPromiseMonitor* monitor)
{
    swap_promise_monitors_.insert(monitor);
}

void SwapPromiseManager::RemoveSwapPromiseMonitor(SwapPromiseMonitor* monitor)
{
    swap_promise_monitors_.erase(monitor);
}

void SwapPromiseManager::NotifySwapPromiseMonitorsOfSetNeedsCommit()
{
    for (auto* swap_promise_monitor : swap_promise_monitors_) {
        swap_promise_monitor->OnSetNeedsCommitOnMain();
    }
}

void SwapPromiseManager::WillCommit()
{
    for (const auto& swap_promise : swap_promise_list_)
        swap_promise->OnCommit();
}

std::vector<std::unique_ptr<SwapPromise>>
SwapPromiseManager::TakeSwapPromises()
{
    std::vector<std::unique_ptr<SwapPromise>> result;
    result.swap(swap_promise_list_);
    return result;
}

void SwapPromiseManager::BreakSwapPromises(
    SwapPromise::DidNotSwapReason reason)
{
    for (const auto& swap_promise : swap_promise_list_)
        swap_promise->DidNotSwap(reason);
    swap_promise_list_.clear();
}

} // namespace cc
