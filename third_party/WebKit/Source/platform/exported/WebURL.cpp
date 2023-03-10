/*
 * Copyright (C) 2009 Google Inc. All rights reserved.
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

#include "public/platform/WebURL.h"

#include "platform/weborigin/KURL.h"
#include "wtf/text/StringView.h"
#include "url/gurl.h"

namespace blink {

bool WebURL::protocolIs(const char* protocol) const
{
    //   const url::Component& scheme = m_parsed.scheme;
    //   StringView urlView = m_string;
    //   // For subtlety why this works in all cases, see KURL::componentString.
    //   return m_isValid && StringView(urlView, scheme.begin, scheme.len) == protocol;
    KURL url(ParsedURLString, (String)m_string);
    return url.protocolIs(protocol);
}

WebURL::WebURL(const KURL& url)
    : m_string(url.getString())
    ,
    //m_parsed(url.parsed()),
    m_isValid(url.isValid())
{
}

WebURL& WebURL::operator=(const KURL& url)
{
    m_string = url.getString();
    //m_parsed = url.parsed();
    m_isValid = url.isValid();
    return *this;
}

WebURL::operator KURL() const
{
    //return KURL(m_string, /*m_parsed,*/ m_isValid);
    return KURL(ParsedURLString, (String)m_string);
}

WebURL::WebURL(const WebURL& url)
    : m_string(url.m_string)
    ,
    //m_parsed(url.m_parsed),
    m_isValid(url.m_isValid)
{
}

WebURL& WebURL::operator=(const WebURL& url)
{
    m_string = url.m_string;
    //m_parsed = url.m_parsed;
    m_isValid = url.m_isValid;
    return *this;
}

} // namespace blink
