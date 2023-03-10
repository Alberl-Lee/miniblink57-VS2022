/*
 * Copyright 2016 Google Inc.
 *
 * Use of this source code is governed by a BSD-style license that can be
 * found in the LICENSE file.
 */

#include "UrlHandler.h"

#include "../Request.h"
#include "../Response.h"
#include "microhttpd.h"

using namespace Response;

static const size_t kBufferSize = 1024;

static int process_upload_data(void* cls, enum MHD_ValueKind kind,
    const char* key, const char* filename,
    const char* content_type, const char* transfer_encoding,
    const char* data, uint64_t off, size_t size)
{
    struct UploadContext* uc = reinterpret_cast<UploadContext*>(cls);

    if (0 != size) {
        uc->fStream.write(data, size);
    }
    return MHD_YES;
}

bool PostHandler::canHandle(const char* method, const char* url)
{
    return 0 == strcmp(method, MHD_HTTP_METHOD_POST) && 0 == strcmp(url, "/new");
}

int PostHandler::handle(Request* request, MHD_Connection* connection,
    const char* url, const char* method,
    const char* upload_data, size_t* upload_data_size)
{
    UploadContext* uc = request->fUploadContext;

    // New connection
    if (!uc) {
        // TODO make this a method on request
        uc = new UploadContext;
        uc->connection = connection;
        uc->fPostProcessor = MHD_create_post_processor(connection, kBufferSize,
            &process_upload_data, uc);
        SkASSERT(uc->fPostProcessor);

        request->fUploadContext = uc;
        return MHD_YES;
    }

    // in process upload
    if (0 != *upload_data_size) {
        SkASSERT(uc->fPostProcessor);
        MHD_post_process(uc->fPostProcessor, upload_data, *upload_data_size);
        *upload_data_size = 0;
        return MHD_YES;
    }

    // end of upload
    MHD_destroy_post_processor(uc->fPostProcessor);
    uc->fPostProcessor = nullptr;

    if (!request->initPictureFromStream(request->fUploadContext->fStream.detachAsStream())) {
        fprintf(stderr, "Could not create picture from stream.\n");
        return MHD_NO;
    }

    // clear upload context
    delete request->fUploadContext;
    request->fUploadContext = nullptr;

    return SendTemplate(connection, true, "/");
}
