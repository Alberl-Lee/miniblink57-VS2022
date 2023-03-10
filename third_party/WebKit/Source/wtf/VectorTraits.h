/*
 * Copyright (C) 2006, 2007, 2008 Apple Inc. All rights reserved.
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Library General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Library General Public License for more details.
 *
 * You should have received a copy of the GNU Library General Public License
 * along with this library; see the file COPYING.LIB.  If not, write to
 * the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
 * Boston, MA 02110-1301, USA.
 *
 */

#ifndef WTF_VectorTraits_h
#define WTF_VectorTraits_h

#include "wtf/RefPtr.h"
#include "wtf/TypeTraits.h"
#include <memory>
#include <type_traits>
#include <utility>

namespace WTF {

template <typename T>
struct VectorTraitsBase {
    static const bool needsDestruction = !IsTriviallyDestructible<T>::value;

    static const bool canInitializeWithMemset = IsTriviallyDefaultConstructible<T>::value;
    // true iff memset(slot, 0, size) constructs an unused slot value that is
    // valid for Oilpan to trace and if the value needs destruction, its
    // destructor can be invoked over. The zero'ed value representing an unused
    // slot in the vector's backing storage; it does not have to be equal to
    // what its constructor(s) would create, only be valid for those two uses.
    static const bool canClearUnusedSlotsWithMemset = IsTriviallyDefaultConstructible<T>::value;

    static const bool canMoveWithMemcpy = IsTriviallyMoveAssignable<T>::value;
    static const bool canCopyWithMemcpy = IsTriviallyCopyAssignable<T>::value;
    static const bool canFillWithMemset = IsTriviallyDefaultConstructible<T>::value && (sizeof(T) == sizeof(char));
    static const bool canCompareWithMemcmp = std::is_scalar<T>::value; // Types without padding.

    // Supports swapping elements using regular std::swap semantics.
    static const bool canSwapUsingCopyOrMove = true;

    template <typename U = void>
    struct IsTraceableInCollection {
        static const bool value = IsTraceable<T>::value;
    };
    // We don't support weak handling in vectors.
    static const WeakHandlingFlag weakHandlingFlag = NoWeakHandlingInCollections;
};

template <typename T>
struct VectorTraits : VectorTraitsBase<T> {
};

// Classes marked with SimpleVectorTraits will use memmov, memcpy, memcmp
// instead of constructors, copy operators, etc for initialization, move and
// comparison.
template <typename T>
struct SimpleClassVectorTraits : VectorTraitsBase<T> {
    static const bool canInitializeWithMemset = true;
    static const bool canClearUnusedSlotsWithMemset = true;
    static const bool canMoveWithMemcpy = true;
    static const bool canCompareWithMemcmp = true;
};

// We know std::unique_ptr and RefPtr are simple enough that initializing to 0
// and moving with memcpy (and then not destructing the original) will totally
// work.
template <typename P>
struct VectorTraits<RefPtr<P>> : SimpleClassVectorTraits<RefPtr<P>> {
};

template <typename P>
struct VectorTraits<std::unique_ptr<P>>
    : SimpleClassVectorTraits<std::unique_ptr<P>> {
    // std::unique_ptr -> std::unique_ptr has a very particular structure that
    // tricks the normal type traits into thinking that the class is "trivially
    // copyable".
    static const bool canCopyWithMemcpy = false;
};
static_assert(VectorTraits<RefPtr<int>>::canInitializeWithMemset,
    "inefficient RefPtr Vector");
static_assert(VectorTraits<RefPtr<int>>::canMoveWithMemcpy,
    "inefficient RefPtr Vector");
static_assert(VectorTraits<RefPtr<int>>::canCompareWithMemcmp,
    "inefficient RefPtr Vector");
static_assert(VectorTraits<std::unique_ptr<int>>::canInitializeWithMemset,
    "inefficient std::unique_ptr Vector");
static_assert(VectorTraits<std::unique_ptr<int>>::canMoveWithMemcpy,
    "inefficient std::unique_ptr Vector");
static_assert(VectorTraits<std::unique_ptr<int>>::canCompareWithMemcmp,
    "inefficient std::unique_ptr Vector");

template <typename First, typename Second>
struct VectorTraits<std::pair<First, Second>> {
    typedef VectorTraits<First> FirstTraits;
    typedef VectorTraits<Second> SecondTraits;

    static const bool needsDestruction = FirstTraits::needsDestruction || SecondTraits::needsDestruction;
    static const bool canInitializeWithMemset = FirstTraits::canInitializeWithMemset && SecondTraits::canInitializeWithMemset;
    static const bool canMoveWithMemcpy = FirstTraits::canMoveWithMemcpy && SecondTraits::canMoveWithMemcpy;
    static const bool canCopyWithMemcpy = FirstTraits::canCopyWithMemcpy && SecondTraits::canCopyWithMemcpy;
    static const bool canFillWithMemset = false;
    static const bool canCompareWithMemcmp = FirstTraits::canCompareWithMemcmp && SecondTraits::canCompareWithMemcmp;
    static const bool canClearUnusedSlotsWithMemset = FirstTraits::canClearUnusedSlotsWithMemset && SecondTraits::canClearUnusedSlotsWithMemset;
    // Supports swapping elements using regular std::swap semantics.
    static const bool canSwapUsingCopyOrMove = true;
    template <typename U = void>
    struct IsTraceableInCollection {
        static const bool value = IsTraceableInCollectionTrait<FirstTraits>::value || IsTraceableInCollectionTrait<SecondTraits>::value;
    };
    // We don't support weak handling in vectors.
    static const WeakHandlingFlag weakHandlingFlag = NoWeakHandlingInCollections;
};

} // namespace WTF

#define WTF_ALLOW_MOVE_INIT_AND_COMPARE_WITH_MEM_FUNCTIONS(ClassName)                                                                                          \
    namespace WTF {                                                                                                                                            \
        static_assert(!IsTriviallyDefaultConstructible<ClassName>::value || !IsTriviallyMoveAssignable<ClassName>::value || !std::is_scalar<ClassName>::value, \
            "macro not needed");                                                                                                                               \
        template <>                                                                                                                                            \
        struct VectorTraits<ClassName> : SimpleClassVectorTraits<ClassName> {                                                                                  \
        };                                                                                                                                                     \
    }

#define WTF_ALLOW_MOVE_AND_INIT_WITH_MEM_FUNCTIONS(ClassName)                                                             \
    namespace WTF {                                                                                                       \
        static_assert(!IsTriviallyDefaultConstructible<ClassName>::value || !IsTriviallyMoveAssignable<ClassName>::value, \
            "macro not needed");                                                                                          \
        template <>                                                                                                       \
        struct VectorTraits<ClassName> : VectorTraitsBase<ClassName> {                                                    \
            static const bool canInitializeWithMemset = true;                                                             \
            static const bool canClearUnusedSlotsWithMemset = true;                                                       \
            static const bool canMoveWithMemcpy = true;                                                                   \
        };                                                                                                                \
    }

#define WTF_ALLOW_INIT_WITH_MEM_FUNCTIONS(ClassName)                      \
    namespace WTF {                                                       \
        static_assert(!IsTriviallyDefaultConstructible<ClassName>::value, \
            "macro not needed");                                          \
        template <>                                                       \
        struct VectorTraits<ClassName> : VectorTraitsBase<ClassName> {    \
            static const bool canInitializeWithMemset = true;             \
            static const bool canClearUnusedSlotsWithMemset = true;       \
        };                                                                \
    }

#define WTF_ALLOW_CLEAR_UNUSED_SLOTS_WITH_MEM_FUNCTIONS(ClassName)        \
    namespace WTF {                                                       \
        static_assert(!IsTriviallyDefaultConstructible<ClassName>::value, \
            "macro not needed");                                          \
        template <>                                                       \
        struct VectorTraits<ClassName> : VectorTraitsBase<ClassName> {    \
            static const bool canClearUnusedSlotsWithMemset = true;       \
        };                                                                \
    }

using WTF::SimpleClassVectorTraits;
using WTF::VectorTraits;

#endif // WTF_VectorTraits_h
