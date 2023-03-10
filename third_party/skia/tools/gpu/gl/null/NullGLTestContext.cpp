
/*
 * Copyright 2011 Google Inc.
 *
 * Use of this source code is governed by a BSD-style license that can be
 * found in the LICENSE file.
 */

#include "NullGLTestContext.h"
#include "SkMutex.h"
#include "SkTDArray.h"
#include "gl/GrGLDefines.h"
#include "gl/GrGLInterface.h"
#include "gl/GrGLTestInterface.h"
#include "gl/GrGLTypes.h"

namespace {
class NullGLContext : public sk_gpu_test::GLTestContext {
public:
    NullGLContext(bool enableNVPR) { this->init(GrGLCreateNullInterface(enableNVPR)); }
    ~NullGLContext() override { this->teardown(); }

private:
    void onPlatformMakeCurrent() const override {};
    void onPlatformSwapBuffers() const override { }
    GrGLFuncPtr onPlatformGetProcAddress(const char*) const override { return nullptr; }
};

} // anonymous namespace

namespace sk_gpu_test {
GLTestContext* CreateNullGLTestContext(bool enableNVPR)
{
    GLTestContext* ctx = new NullGLContext(enableNVPR);
    if (ctx->isValid()) {
        return ctx;
    }
    delete ctx;
    return nullptr;
}
} // namespace sk_gpu_test
