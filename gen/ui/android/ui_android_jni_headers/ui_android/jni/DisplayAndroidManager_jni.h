// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/ui/display/DisplayAndroidManager

#ifndef org_chromium_ui_display_DisplayAndroidManager_JNI
#define org_chromium_ui_display_DisplayAndroidManager_JNI

#include <jni.h>

#include "../../../../../../../../base/android/jni_generator/jni_generator_helper.h"

#include "base/android/jni_int_wrapper.h"

// Step 1: forward declarations.
namespace {
const char kDisplayAndroidManagerClassPath[] = "org/chromium/ui/display/DisplayAndroidManager";
// Leaking this jclass as we cannot use LazyInstance from some threads.
base::subtle::AtomicWord g_DisplayAndroidManager_clazz __attribute__((unused)) = 0;
#define DisplayAndroidManager_clazz(env) base::android::LazyGetClass(env, kDisplayAndroidManagerClassPath, &g_DisplayAndroidManager_clazz)

} // namespace

namespace ui {

// Step 2: method stubs.
JNI_GENERATOR_EXPORT void
Java_org_chromium_ui_display_DisplayAndroidManager_nativeUpdateDisplay(JNIEnv*
                                                                           env,
    jobject jcaller,
    jlong nativeDisplayAndroidManager,
    jint sdkDisplayId,
    jint physicalWidth,
    jint physicalHeight,
    jint width,
    jint height,
    jfloat dipScale,
    jint rotationDegrees,
    jint bitsPerPixel,
    jint bitsPerComponent)
{
    DisplayAndroidManager* native = reinterpret_cast<DisplayAndroidManager*>(nativeDisplayAndroidManager);
    CHECK_NATIVE_PTR(env, jcaller, native, "UpdateDisplay");
    return native->UpdateDisplay(env, base::android::JavaParamRef<jobject>(env, jcaller), sdkDisplayId, physicalWidth, physicalHeight, width, height,
        dipScale, rotationDegrees, bitsPerPixel, bitsPerComponent);
}

JNI_GENERATOR_EXPORT void
Java_org_chromium_ui_display_DisplayAndroidManager_nativeRemoveDisplay(JNIEnv*
                                                                           env,
    jobject jcaller,
    jlong nativeDisplayAndroidManager,
    jint sdkDisplayId)
{
    DisplayAndroidManager* native = reinterpret_cast<DisplayAndroidManager*>(nativeDisplayAndroidManager);
    CHECK_NATIVE_PTR(env, jcaller, native, "RemoveDisplay");
    return native->RemoveDisplay(env, base::android::JavaParamRef<jobject>(env, jcaller), sdkDisplayId);
}

JNI_GENERATOR_EXPORT void
Java_org_chromium_ui_display_DisplayAndroidManager_nativeSetPrimaryDisplayId(JNIEnv*
                                                                                 env,
    jobject jcaller,
    jlong nativeDisplayAndroidManager,
    jint sdkDisplayId)
{
    DisplayAndroidManager* native = reinterpret_cast<DisplayAndroidManager*>(nativeDisplayAndroidManager);
    CHECK_NATIVE_PTR(env, jcaller, native, "SetPrimaryDisplayId");
    return native->SetPrimaryDisplayId(env,
        base::android::JavaParamRef<jobject>(env, jcaller), sdkDisplayId);
}

static base::subtle::AtomicWord g_DisplayAndroidManager_onNativeSideCreated = 0;
static void Java_DisplayAndroidManager_onNativeSideCreated(JNIEnv* env, jlong nativePointer)
{
    CHECK_CLAZZ(env, DisplayAndroidManager_clazz(env),
        DisplayAndroidManager_clazz(env));
    jmethodID method_id = base::android::MethodID::LazyGet<
        base::android::MethodID::TYPE_STATIC>(
        env, DisplayAndroidManager_clazz(env),
        "onNativeSideCreated",
        "("
        "J"
        ")"
        "V",
        &g_DisplayAndroidManager_onNativeSideCreated);

    env->CallStaticVoidMethod(DisplayAndroidManager_clazz(env),
        method_id, nativePointer);
    jni_generator::CheckException(env);
}

// Step 3: RegisterNatives.

static const JNINativeMethod kMethodsDisplayAndroidManager[] = {
    { "nativeUpdateDisplay",
        "("
        "J"
        "I"
        "I"
        "I"
        "I"
        "I"
        "F"
        "I"
        "I"
        "I"
        ")"
        "V",
        reinterpret_cast<void*>(Java_org_chromium_ui_display_DisplayAndroidManager_nativeUpdateDisplay) },
    { "nativeRemoveDisplay",
        "("
        "J"
        "I"
        ")"
        "V",
        reinterpret_cast<void*>(Java_org_chromium_ui_display_DisplayAndroidManager_nativeRemoveDisplay) },
    { "nativeSetPrimaryDisplayId",
        "("
        "J"
        "I"
        ")"
        "V",
        reinterpret_cast<void*>(Java_org_chromium_ui_display_DisplayAndroidManager_nativeSetPrimaryDisplayId) },
};

static bool RegisterNativesImpl(JNIEnv* env)
{
    if (base::android::IsManualJniRegistrationDisabled())
        return true;

    const int kMethodsDisplayAndroidManagerSize = arraysize(kMethodsDisplayAndroidManager);

    if (env->RegisterNatives(DisplayAndroidManager_clazz(env),
            kMethodsDisplayAndroidManager,
            kMethodsDisplayAndroidManagerSize)
        < 0) {
        jni_generator::HandleRegistrationError(
            env, DisplayAndroidManager_clazz(env), __FILE__);
        return false;
    }

    return true;
}

} // namespace ui

#endif // org_chromium_ui_display_DisplayAndroidManager_JNI
