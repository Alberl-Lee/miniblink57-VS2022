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

bool InfoHandler::canHandle(const char* method, const char* url)
{
    const char* kBaseName = "/info";
    return 0 == strcmp(method, MHD_HTTP_METHOD_GET) && 0 == strncmp(url, kBaseName, strlen(kBaseName));
}

int InfoHandler::handle(Request* request, MHD_Connection* connection,
    const char* url, const char* method,
    const char* upload_data, size_t* upload_data_size)
{
    SkTArray<SkString> commands;
    SkStrSplit(url, "/", &commands);

    if (!request->hasPicture() || commands.count() > 2) {
        return MHD_NO;
    }

    int n;
    // /info or /info/N
    if (commands.count() == 1) {
        n = request->getLastOp();
    } else {
        sscanf(commands[1].c_str(), "%d", &n);
    }

    SkAutoTUnref<SkData> data(request->getJsonInfo(n));
    return SendData(connection, data, "application/json");
}
