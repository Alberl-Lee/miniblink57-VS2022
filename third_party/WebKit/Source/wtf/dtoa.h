/*
 *  Copyright (C) 2003, 2008, 2012 Apple Inc. All rights reserved.
 *
 *  This library is free software; you can redistribute it and/or
 *  modify it under the terms of the GNU Library General Public
 *  License as published by the Free Software Foundation; either
 *  version 2 of the License, or (at your option) any later version.
 *
 *  This library is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 *  Library General Public License for more details.
 *
 *  You should have received a copy of the GNU Library General Public License
 *  along with this library; see the file COPYING.LIB.  If not, write to
 *  the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
 *  Boston, MA 02110-1301, USA.
 *
 */

#ifndef WTF_dtoa_h
#define WTF_dtoa_h

#include "wtf/ASCIICType.h"
#include "wtf/WTFExport.h"
#include "wtf/dtoa/double-conversion.h"
#include "wtf/text/Unicode.h"

namespace WTF {

// Size = 80 for sizeof(DtoaBuffer) + some sign bits, decimal point, 'e',
// exponent digits.
const unsigned NumberToStringBufferLength = 96;
typedef char NumberToStringBuffer[NumberToStringBufferLength];

WTF_EXPORT const char* numberToString(double, NumberToStringBuffer);
WTF_EXPORT const char* numberToFixedPrecisionString(double,
    unsigned significantFigures,
    NumberToStringBuffer);
WTF_EXPORT const char* numberToFixedWidthString(double,
    unsigned decimalPlaces,
    NumberToStringBuffer);

WTF_EXPORT double parseDouble(const LChar* string,
    size_t length,
    size_t& parsedLength);
WTF_EXPORT double parseDouble(const UChar* string,
    size_t length,
    size_t& parsedLength);

namespace Internal {
    double parseDoubleFromLongString(const UChar* string,
        size_t length,
        size_t& parsedLength);
}

inline double parseDouble(const LChar* string,
    size_t length,
    size_t& parsedLength)
{
    return double_conversion::StringToDoubleConverter::StringToDouble(
        reinterpret_cast<const char*>(string), length, &parsedLength);
}

inline double parseDouble(const UChar* string,
    size_t length,
    size_t& parsedLength)
{
    const size_t conversionBufferSize = 64;
    if (length > conversionBufferSize)
        return Internal::parseDoubleFromLongString(string, length, parsedLength);
    LChar conversionBuffer[conversionBufferSize];
    for (size_t i = 0; i < length; ++i)
        conversionBuffer[i] = isASCII(string[i]) ? static_cast<LChar>(string[i]) : 0;
    return parseDouble(conversionBuffer, length, parsedLength);
}

} // namespace WTF

using WTF::numberToFixedPrecisionString;
using WTF::numberToFixedWidthString;
using WTF::numberToString;
using WTF::NumberToStringBuffer;
using WTF::parseDouble;

#endif // WTF_dtoa_h
