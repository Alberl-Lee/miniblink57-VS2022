// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "content/browser/fileapi/mock_url_request_delegate.h"

#include <stddef.h>

#include "base/run_loop.h"
#include "net/base/io_buffer.h"
#include "testing/gtest/include/gtest/gtest.h"

namespace {
const int kBufferSize = 1024;
}

namespace content {

MockURLRequestDelegate::MockURLRequestDelegate()
    : io_buffer_(new net::IOBuffer(kBufferSize))
    , request_status_(net::ERR_IO_PENDING)
{
}

MockURLRequestDelegate::~MockURLRequestDelegate()
{
}

void MockURLRequestDelegate::OnResponseStarted(net::URLRequest* request,
    int net_error)
{
    DCHECK_NE(net::ERR_IO_PENDING, net_error);

    request_status_ = net_error;

    if (net_error == net::OK) {
        EXPECT_TRUE(request->response_headers());
        metadata_ = request->response_info().metadata;
        ReadSome(request);
    } else {
        RequestComplete();
    }
}

void MockURLRequestDelegate::OnReadCompleted(net::URLRequest* request,
    int bytes_read)
{
    DCHECK_NE(net::ERR_IO_PENDING, bytes_read);

    if (bytes_read > 0) {
        request_status_ = net::OK;
        ReceiveData(request, bytes_read);
    } else {
        request_status_ = bytes_read;
        RequestComplete();
    }
}

void MockURLRequestDelegate::ReadSome(net::URLRequest* request)
{
    if (!request->is_pending()) {
        RequestComplete();
        return;
    }

    int bytes_read = request->Read(io_buffer_.get(), kBufferSize);
    if (bytes_read < 0) {
        request_status_ = bytes_read;
        if (bytes_read != net::ERR_IO_PENDING)
            RequestComplete();
        return;
    }

    ReceiveData(request, bytes_read);
}

void MockURLRequestDelegate::ReceiveData(net::URLRequest* request,
    int bytes_read)
{
    if (bytes_read > 0) {
        response_data_.append(io_buffer_->data(),
            static_cast<size_t>(bytes_read));
        ReadSome(request);
    } else {
        RequestComplete();
    }
}

void MockURLRequestDelegate::RequestComplete()
{
    base::MessageLoop::current()->QuitWhenIdle();
}

} // namespace
