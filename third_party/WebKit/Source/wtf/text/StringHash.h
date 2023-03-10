/*
 * Copyright (C) 2006, 2007, 2008, 2012, 2013 Apple Inc. All rights reserved
 * Copyright (C) Research In Motion Limited 2009. All rights reserved.
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

#ifndef StringHash_h
#define StringHash_h

#include "wtf/Allocator.h"
#include "wtf/HashTraits.h"
#include "wtf/StringHasher.h"
#include "wtf/text/AtomicString.h"

namespace WTF {

inline bool HashTraits<String>::isEmptyValue(const String& value)
{
    return value.isNull();
}

// The hash() functions on StringHash and CaseFoldingHash do not support null
// strings. get(), contains(), and add() on HashMap<String,..., StringHash>
// cause a null-pointer dereference when passed null strings.

// FIXME: We should really figure out a way to put the computeHash function
// that's currently a member function of StringImpl into this file so we can be
// a little closer to having all the nearly-identical hash functions in one
// place.

struct StringHash {
    STATIC_ONLY(StringHash);
    static unsigned hash(StringImpl* key) { return key->hash(); }
    static inline bool equal(const StringImpl* a, const StringImpl* b)
    {
        return equalNonNull(a, b);
    }

    static unsigned hash(const RefPtr<StringImpl>& key) { return key->hash(); }
    static bool equal(const RefPtr<StringImpl>& a, const RefPtr<StringImpl>& b)
    {
        return equal(a.get(), b.get());
    }

    static unsigned hash(const String& key) { return key.impl()->hash(); }
    static bool equal(const String& a, const String& b)
    {
        return equal(a.impl(), b.impl());
    }

    static const bool safeToCompareToEmptyOrDeleted = false;
};

class CaseFoldingHash {
    STATIC_ONLY(CaseFoldingHash);

public:
    static unsigned hash(const UChar* data, unsigned length)
    {
        return StringHasher::computeHashAndMaskTop8Bits<UChar, foldCase<UChar>>(
            data, length);
    }

    static unsigned hash(StringImpl* str)
    {
        if (str->is8Bit())
            return hash(str->characters8(), str->length());
        return hash(str->characters16(), str->length());
    }

    static unsigned hash(const LChar* data, unsigned length)
    {
        return StringHasher::computeHashAndMaskTop8Bits<LChar, foldCase<LChar>>(
            data, length);
    }

    static inline unsigned hash(const char* data, unsigned length)
    {
        return CaseFoldingHash::hash(reinterpret_cast<const LChar*>(data), length);
    }

    static inline unsigned hash(const char* data)
    {
        return CaseFoldingHash::hash(reinterpret_cast<const LChar*>(data),
            strlen(data));
    }

    static inline bool equal(const StringImpl* a, const StringImpl* b)
    {
        DCHECK(a);
        DCHECK(b);
        // Save one branch inside each StringView by derefing the StringImpl,
        // and another branch inside the compare function by skipping the null
        // checks.
        return equalIgnoringCaseAndNullity(*a, *b);
    }

    static unsigned hash(const RefPtr<StringImpl>& key)
    {
        return hash(key.get());
    }

    static bool equal(const RefPtr<StringImpl>& a, const RefPtr<StringImpl>& b)
    {
        return equal(a.get(), b.get());
    }

    static unsigned hash(const String& key) { return hash(key.impl()); }
    static unsigned hash(const AtomicString& key) { return hash(key.impl()); }
    static bool equal(const String& a, const String& b)
    {
        return equal(a.impl(), b.impl());
    }
    static bool equal(const AtomicString& a, const AtomicString& b)
    {
        return (a == b) || equal(a.impl(), b.impl());
    }

    static const bool safeToCompareToEmptyOrDeleted = false;

private:
    // Private so no one uses this in the belief that it will return the
    // correctly-folded code point in all cases (see comment below).
    template <typename T>
    static inline UChar foldCase(T ch)
    {
        if (std::is_same<T, LChar>::value)
            return StringImpl::latin1CaseFoldTable[ch];
        // It's possible for WTF::Unicode::foldCase() to return a 32-bit value
        // that's not representable as a UChar.  However, since this is rare and
        // deterministic, and the result of this is merely used for hashing, go
        // ahead and clamp the value.
        return static_cast<UChar>(WTF::Unicode::foldCase(ch));
    }
};

// This hash can be used in cases where the key is a hash of a string, but we
// don't want to store the string. It's not really specific to string hashing,
// but all our current uses of it are for strings.
struct AlreadyHashed : IntHash<unsigned> {
    STATIC_ONLY(AlreadyHashed);
    static unsigned hash(unsigned key) { return key; }

    // To use a hash value as a key for a hash table, we need to eliminate the
    // "deleted" value, which is negative one. That could be done by changing
    // the string hash function to never generate negative one, but this works
    // and is still relatively efficient.
    static unsigned avoidDeletedValue(unsigned hash)
    {
        DCHECK(hash);
        unsigned newHash = hash | (!(hash + 1) << 31);
        DCHECK(newHash);
        DCHECK_NE(newHash, 0xFFFFFFFF);
        return newHash;
    }
};

} // namespace WTF

using WTF::AlreadyHashed;
using WTF::CaseFoldingHash;
using WTF::StringHash;

#endif
