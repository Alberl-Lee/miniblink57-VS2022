// Copyright (c) 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "ui/chromeos/network/network_icon_animation.h"

#include "ui/chromeos/network/network_icon_animation_observer.h"

namespace {
const int kThrobDurationMs = 750; // Animation cycle length.
}

namespace ui {
namespace network_icon {

    NetworkIconAnimation::NetworkIconAnimation()
        : animation_(this)
    {
        // Set up the animation throbber.
        animation_.SetThrobDuration(kThrobDurationMs);
        animation_.SetTweenType(gfx::Tween::LINEAR);
    }

    NetworkIconAnimation::~NetworkIconAnimation()
    {
    }

    void NetworkIconAnimation::AnimationProgressed(
        const gfx::Animation* animation)
    {
        if (animation != &animation_)
            return;
        FOR_EACH_OBSERVER(AnimationObserver, observers_, NetworkIconChanged());
    }

    double NetworkIconAnimation::GetAnimation()
    {
        if (!animation_.is_animating()) {
            animation_.Reset();
            animation_.StartThrobbing(-1 /*throb indefinitely*/);
            return 0;
        }
        return animation_.GetCurrentValue();
    }

    void NetworkIconAnimation::AddObserver(AnimationObserver* observer)
    {
        if (!observers_.HasObserver(observer))
            observers_.AddObserver(observer);
    }

    void NetworkIconAnimation::RemoveObserver(AnimationObserver* observer)
    {
        observers_.RemoveObserver(observer);
        if (!observers_.might_have_observers())
            animation_.Reset(); // Stops the animation and resets the current value.
    }

    // static
    NetworkIconAnimation* NetworkIconAnimation::GetInstance()
    {
        static NetworkIconAnimation* s_icon_animation = new NetworkIconAnimation();
        return s_icon_animation;
    }

} // namespace network_icon
} // namespace ui
