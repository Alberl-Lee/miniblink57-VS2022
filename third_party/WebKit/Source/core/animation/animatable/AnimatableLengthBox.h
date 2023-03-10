/*
 * Copyright (C) 2013 Google Inc. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are
 * met:
 *
 *     * Redistributions of source code must retain the above copyright
 * notice, this list of conditions and the following disclaimer.
 *     * Redistributions in binary form must reproduce the above
 * copyright notice, this list of conditions and the following disclaimer
 * in the documentation and/or other materials provided with the
 * distribution.
 *     * Neither the name of Google Inc. nor the names of its
 * contributors may be used to endorse or promote products derived from
 * this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 * A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
 * OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 * LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 * DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 * THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef AnimatableLengthBox_h
#define AnimatableLengthBox_h

#include "core/animation/animatable/AnimatableValue.h"

namespace blink {

class AnimatableLengthBox final : public AnimatableValue {
public:
    ~AnimatableLengthBox() override { }
    static PassRefPtr<AnimatableLengthBox> create(
        PassRefPtr<AnimatableValue> left,
        PassRefPtr<AnimatableValue> right,
        PassRefPtr<AnimatableValue> top,
        PassRefPtr<AnimatableValue> bottom)
    {
        return adoptRef(new AnimatableLengthBox(std::move(left), std::move(right),
            std::move(top), std::move(bottom)));
    }
    const AnimatableValue* left() const { return m_left.get(); }
    const AnimatableValue* right() const { return m_right.get(); }
    const AnimatableValue* top() const { return m_top.get(); }
    const AnimatableValue* bottom() const { return m_bottom.get(); }

protected:
    PassRefPtr<AnimatableValue> interpolateTo(const AnimatableValue*,
        double fraction) const override;
    bool usesDefaultInterpolationWith(const AnimatableValue*) const final;

private:
    AnimatableLengthBox(PassRefPtr<AnimatableValue> left,
        PassRefPtr<AnimatableValue> right,
        PassRefPtr<AnimatableValue> top,
        PassRefPtr<AnimatableValue> bottom)
        : m_left(left)
        , m_right(right)
        , m_top(top)
        , m_bottom(bottom)
    {
    }
    AnimatableType type() const override { return TypeLengthBox; }
    bool equalTo(const AnimatableValue*) const override;

    RefPtr<AnimatableValue> m_left;
    RefPtr<AnimatableValue> m_right;
    RefPtr<AnimatableValue> m_top;
    RefPtr<AnimatableValue> m_bottom;
};

DEFINE_ANIMATABLE_VALUE_TYPE_CASTS(AnimatableLengthBox, isLengthBox());

} // namespace blink

#endif // AnimatableLengthBox_h
