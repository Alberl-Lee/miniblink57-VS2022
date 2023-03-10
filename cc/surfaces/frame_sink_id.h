// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CC_SURFACES_FRAME_SINK_ID_H_
#define CC_SURFACES_FRAME_SINK_ID_H_

#include <stdint.h>

#include <iosfwd>
#include <string>
#include <tuple>

#include "base/hash.h"

namespace cc {

class FrameSinkId {
public:
    /*const*/ FrameSinkId()
        : client_id_(0)
        , sink_id_(0)
    {
    }

    /*const*/ FrameSinkId(const FrameSinkId& other)
        : client_id_(other.client_id_)
        , sink_id_(other.sink_id_)
    {
    }

    /*const*/ FrameSinkId(uint32_t client_id, uint32_t sink_id)
        : client_id_(client_id)
        , sink_id_(sink_id)
    {
    }

    const bool is_valid() const { return client_id_ != 0 || sink_id_ != 0; }

    const uint32_t client_id() const { return client_id_; }

    const uint32_t sink_id() const { return sink_id_; }

    bool operator==(const FrameSinkId& other) const
    {
        return client_id_ == other.client_id_ && sink_id_ == other.sink_id_;
    }

    bool operator!=(const FrameSinkId& other) const { return !(*this == other); }

    bool operator<(const FrameSinkId& other) const
    {
        return std::tie(client_id_, sink_id_) < std::tie(other.client_id_, other.sink_id_);
    }

    size_t hash() const { return base::HashInts(client_id_, sink_id_); }

    std::string ToString() const;

private:
    uint32_t client_id_;
    uint32_t sink_id_;
};

std::ostream& operator<<(std::ostream& out, const FrameSinkId& frame_sink_id);

struct FrameSinkIdHash {
    size_t operator()(const FrameSinkId& key) const { return key.hash(); }
};

} // namespace cc

#endif // CC_SURFACES_FRAME_SINK_ID_H_
