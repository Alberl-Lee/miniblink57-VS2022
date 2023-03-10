// Copyright 2012 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CC_ANIMATION_KEYFRAMED_ANIMATION_CURVE_H_
#define CC_ANIMATION_KEYFRAMED_ANIMATION_CURVE_H_

#include <vector>

#include "base/macros.h"
#include "base/time/time.h"
#include "cc/animation/animation_curve.h"
#include "cc/animation/animation_export.h"
#include "cc/animation/timing_function.h"
#include "cc/animation/transform_operations.h"

namespace cc {

class CC_ANIMATION_EXPORT Keyframe {
public:
    base::TimeDelta Time() const;
    const TimingFunction* timing_function() const
    {
        return timing_function_.get();
    }

protected:
    Keyframe(base::TimeDelta time,
        std::unique_ptr<TimingFunction> timing_function);
    virtual ~Keyframe();

private:
    base::TimeDelta time_;
    std::unique_ptr<TimingFunction> timing_function_;

    DISALLOW_COPY_AND_ASSIGN(Keyframe);
};

class CC_ANIMATION_EXPORT ColorKeyframe : public Keyframe {
public:
    static std::unique_ptr<ColorKeyframe> Create(
        base::TimeDelta time,
        SkColor value,
        std::unique_ptr<TimingFunction> timing_function);
    ~ColorKeyframe() override;

    SkColor Value() const;

    std::unique_ptr<ColorKeyframe> Clone() const;

private:
    ColorKeyframe(base::TimeDelta time,
        SkColor value,
        std::unique_ptr<TimingFunction> timing_function);

    SkColor value_;
};

class CC_ANIMATION_EXPORT FloatKeyframe : public Keyframe {
public:
    static std::unique_ptr<FloatKeyframe> Create(
        base::TimeDelta time,
        float value,
        std::unique_ptr<TimingFunction> timing_function);
    ~FloatKeyframe() override;

    float Value() const;

    std::unique_ptr<FloatKeyframe> Clone() const;

private:
    FloatKeyframe(base::TimeDelta time,
        float value,
        std::unique_ptr<TimingFunction> timing_function);

    float value_;
};

class CC_ANIMATION_EXPORT TransformKeyframe : public Keyframe {
public:
    static std::unique_ptr<TransformKeyframe> Create(
        base::TimeDelta time,
        const TransformOperations& value,
        std::unique_ptr<TimingFunction> timing_function);
    ~TransformKeyframe() override;

    const TransformOperations& Value() const;

    std::unique_ptr<TransformKeyframe> Clone() const;

private:
    TransformKeyframe(base::TimeDelta time,
        const TransformOperations& value,
        std::unique_ptr<TimingFunction> timing_function);

    TransformOperations value_;
};

class CC_ANIMATION_EXPORT FilterKeyframe : public Keyframe {
public:
    static std::unique_ptr<FilterKeyframe> Create(
        base::TimeDelta time,
        const FilterOperations& value,
        std::unique_ptr<TimingFunction> timing_function);
    ~FilterKeyframe() override;

    const FilterOperations& Value() const;

    std::unique_ptr<FilterKeyframe> Clone() const;

private:
    FilterKeyframe(base::TimeDelta time,
        const FilterOperations& value,
        std::unique_ptr<TimingFunction> timing_function);

    FilterOperations value_;
};

class CC_ANIMATION_EXPORT KeyframedColorAnimationCurve
    : public ColorAnimationCurve {
public:
    // It is required that the keyframes be sorted by time.
    static std::unique_ptr<KeyframedColorAnimationCurve> Create();

    ~KeyframedColorAnimationCurve() override;

    void AddKeyframe(std::unique_ptr<ColorKeyframe> keyframe);
    void SetTimingFunction(std::unique_ptr<TimingFunction> timing_function)
    {
        timing_function_ = std::move(timing_function);
    }
    double scaled_duration() const { return scaled_duration_; }
    void set_scaled_duration(double scaled_duration)
    {
        scaled_duration_ = scaled_duration;
    }

    // AnimationCurve implementation
    base::TimeDelta Duration() const override;
    std::unique_ptr<AnimationCurve> Clone() const override;

    // BackgrounColorAnimationCurve implementation
    SkColor GetValue(base::TimeDelta t) const override;

private:
    KeyframedColorAnimationCurve();

    // Always sorted in order of increasing time. No two keyframes have the
    // same time.
    std::vector<std::unique_ptr<ColorKeyframe>> keyframes_;
    std::unique_ptr<TimingFunction> timing_function_;
    double scaled_duration_;

    DISALLOW_COPY_AND_ASSIGN(KeyframedColorAnimationCurve);
};

class CC_ANIMATION_EXPORT KeyframedFloatAnimationCurve
    : public FloatAnimationCurve {
public:
    // It is required that the keyframes be sorted by time.
    static std::unique_ptr<KeyframedFloatAnimationCurve> Create();

    ~KeyframedFloatAnimationCurve() override;

    void AddKeyframe(std::unique_ptr<FloatKeyframe> keyframe);

    void SetTimingFunction(std::unique_ptr<TimingFunction> timing_function)
    {
        timing_function_ = std::move(timing_function);
    }
    TimingFunction* timing_function_for_testing() const
    {
        return timing_function_.get();
    }
    double scaled_duration() const { return scaled_duration_; }
    void set_scaled_duration(double scaled_duration)
    {
        scaled_duration_ = scaled_duration;
    }

    // AnimationCurve implementation
    base::TimeDelta Duration() const override;
    std::unique_ptr<AnimationCurve> Clone() const override;

    // FloatAnimationCurve implementation
    float GetValue(base::TimeDelta t) const override;

    using Keyframes = std::vector<std::unique_ptr<FloatKeyframe>>;
    const Keyframes& keyframes_for_testing() const { return keyframes_; }

private:
    KeyframedFloatAnimationCurve();

    // Always sorted in order of increasing time. No two keyframes have the
    // same time.
    Keyframes keyframes_;
    std::unique_ptr<TimingFunction> timing_function_;
    double scaled_duration_;

    DISALLOW_COPY_AND_ASSIGN(KeyframedFloatAnimationCurve);
};

class CC_ANIMATION_EXPORT KeyframedTransformAnimationCurve
    : public TransformAnimationCurve {
public:
    // It is required that the keyframes be sorted by time.
    static std::unique_ptr<KeyframedTransformAnimationCurve> Create();

    ~KeyframedTransformAnimationCurve() override;

    void AddKeyframe(std::unique_ptr<TransformKeyframe> keyframe);
    void SetTimingFunction(std::unique_ptr<TimingFunction> timing_function)
    {
        timing_function_ = std::move(timing_function);
    }
    double scaled_duration() const { return scaled_duration_; }
    void set_scaled_duration(double scaled_duration)
    {
        scaled_duration_ = scaled_duration;
    }

    // AnimationCurve implementation
    base::TimeDelta Duration() const override;
    std::unique_ptr<AnimationCurve> Clone() const override;

    // TransformAnimationCurve implementation
    gfx::Transform GetValue(base::TimeDelta t) const override;
    bool AnimatedBoundsForBox(const gfx::BoxF& box,
        gfx::BoxF* bounds) const override;
    bool PreservesAxisAlignment() const override;
    bool IsTranslation() const override;
    bool AnimationStartScale(bool forward_direction,
        float* start_scale) const override;
    bool MaximumTargetScale(bool forward_direction,
        float* max_scale) const override;

private:
    KeyframedTransformAnimationCurve();

    // Always sorted in order of increasing time. No two keyframes have the
    // same time.
    std::vector<std::unique_ptr<TransformKeyframe>> keyframes_;
    std::unique_ptr<TimingFunction> timing_function_;
    double scaled_duration_;

    DISALLOW_COPY_AND_ASSIGN(KeyframedTransformAnimationCurve);
};

class CC_ANIMATION_EXPORT KeyframedFilterAnimationCurve
    : public FilterAnimationCurve {
public:
    // It is required that the keyframes be sorted by time.
    static std::unique_ptr<KeyframedFilterAnimationCurve> Create();

    ~KeyframedFilterAnimationCurve() override;

    void AddKeyframe(std::unique_ptr<FilterKeyframe> keyframe);
    void SetTimingFunction(std::unique_ptr<TimingFunction> timing_function)
    {
        timing_function_ = std::move(timing_function);
    }
    double scaled_duration() const { return scaled_duration_; }
    void set_scaled_duration(double scaled_duration)
    {
        scaled_duration_ = scaled_duration;
    }

    // AnimationCurve implementation
    base::TimeDelta Duration() const override;
    std::unique_ptr<AnimationCurve> Clone() const override;

    // FilterAnimationCurve implementation
    FilterOperations GetValue(base::TimeDelta t) const override;
    bool HasFilterThatMovesPixels() const override;

private:
    KeyframedFilterAnimationCurve();

    // Always sorted in order of increasing time. No two keyframes have the
    // same time.
    std::vector<std::unique_ptr<FilterKeyframe>> keyframes_;
    std::unique_ptr<TimingFunction> timing_function_;
    double scaled_duration_;

    DISALLOW_COPY_AND_ASSIGN(KeyframedFilterAnimationCurve);
};

} // namespace cc

#endif // CC_ANIMATION_KEYFRAMED_ANIMATION_CURVE_H_
