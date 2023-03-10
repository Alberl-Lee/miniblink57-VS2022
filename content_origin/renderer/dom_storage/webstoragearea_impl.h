// Copyright (c) 2012 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_RENDERER_DOM_STORAGE_WEBSTORAGEAREA_IMPL_H_
#define CONTENT_RENDERER_DOM_STORAGE_WEBSTORAGEAREA_IMPL_H_

#include <stddef.h>
#include <stdint.h>

#include "base/memory/ref_counted.h"
#include "third_party/WebKit/public/platform/WebStorageArea.h"
#include "third_party/WebKit/public/platform/WebString.h"

class GURL;

namespace content {

class DOMStorageCachedArea;

class WebStorageAreaImpl : public blink::WebStorageArea {
public:
    static WebStorageAreaImpl* FromConnectionId(int id);

    WebStorageAreaImpl(int64_t namespace_id, const GURL& origin);
    ~WebStorageAreaImpl() override;

    // See WebStorageArea.h for documentation on these functions.
    unsigned length() override;
    blink::WebString key(unsigned index) override;
    blink::WebString getItem(const blink::WebString& key) override;
    void setItem(const blink::WebString& key,
        const blink::WebString& value,
        const blink::WebURL& page_url,
        WebStorageArea::Result& result) override;
    void removeItem(const blink::WebString& key,
        const blink::WebURL& page_url) override;
    void clear(const blink::WebURL& url) override;

private:
    int connection_id_;
    scoped_refptr<DOMStorageCachedArea> cached_area_;
};

} // namespace content

#endif // CONTENT_RENDERER_DOM_STORAGE_WEBSTORAGEAREA_IMPL_H_
