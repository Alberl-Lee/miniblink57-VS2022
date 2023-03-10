// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/device/gamepad/GamepadList

#ifndef org_chromium_device_gamepad_GamepadList_JNI
#define org_chromium_device_gamepad_GamepadList_JNI

#include <jni.h>

#include "../../../../../../../../base/android/jni_generator/jni_generator_helper.h"

#include "base/android/jni_int_wrapper.h"

// Step 1: forward declarations.
namespace {
const char kGamepadListClassPath[] = "org/chromium/device/gamepad/GamepadList";
// Leaking this jclass as we cannot use LazyInstance from some threads.
base::subtle::AtomicWord g_GamepadList_clazz __attribute__((unused)) = 0;
#define GamepadList_clazz(env) base::android::LazyGetClass(env, kGamepadListClassPath, &g_GamepadList_clazz)

} // namespace

namespace device {

// Step 2: method stubs.

static void SetGamepadData(JNIEnv* env, const base::android::JavaParamRef<jobject>& jcaller,
    jlong webGamepadsPtr,
    jint index,
    jboolean mapping,
    jboolean connected,
    const base::android::JavaParamRef<jstring>& devicename,
    jlong timestamp,
    const base::android::JavaParamRef<jfloatArray>& axes,
    const base::android::JavaParamRef<jfloatArray>& buttons);

JNI_GENERATOR_EXPORT void
Java_org_chromium_device_gamepad_GamepadList_nativeSetGamepadData(JNIEnv*
                                                                      env,
    jobject jcaller,
    jlong webGamepadsPtr,
    jint index,
    jboolean mapping,
    jboolean connected,
    jstring devicename,
    jlong timestamp,
    jfloatArray axes,
    jfloatArray buttons)
{
    return SetGamepadData(env, base::android::JavaParamRef<jobject>(env, jcaller),
        webGamepadsPtr, index, mapping, connected,
        base::android::JavaParamRef<jstring>(env, devicename), timestamp,
        base::android::JavaParamRef<jfloatArray>(env, axes),
        base::android::JavaParamRef<jfloatArray>(env, buttons));
}

static base::subtle::AtomicWord g_GamepadList_updateGamepadData = 0;
static void Java_GamepadList_updateGamepadData(JNIEnv* env, jlong webGamepadsPtr)
{
    CHECK_CLAZZ(env, GamepadList_clazz(env),
        GamepadList_clazz(env));
    jmethodID method_id = base::android::MethodID::LazyGet<
        base::android::MethodID::TYPE_STATIC>(
        env, GamepadList_clazz(env),
        "updateGamepadData",
        "("
        "J"
        ")"
        "V",
        &g_GamepadList_updateGamepadData);

    env->CallStaticVoidMethod(GamepadList_clazz(env),
        method_id, webGamepadsPtr);
    jni_generator::CheckException(env);
}

static base::subtle::AtomicWord g_GamepadList_setGamepadAPIActive = 0;
static void Java_GamepadList_setGamepadAPIActive(JNIEnv* env, jboolean isActive)
{
    CHECK_CLAZZ(env, GamepadList_clazz(env),
        GamepadList_clazz(env));
    jmethodID method_id = base::android::MethodID::LazyGet<
        base::android::MethodID::TYPE_STATIC>(
        env, GamepadList_clazz(env),
        "setGamepadAPIActive",
        "("
        "Z"
        ")"
        "V",
        &g_GamepadList_setGamepadAPIActive);

    env->CallStaticVoidMethod(GamepadList_clazz(env),
        method_id, isActive);
    jni_generator::CheckException(env);
}

// Step 3: RegisterNatives.

static const JNINativeMethod kMethodsGamepadList[] = {
    { "nativeSetGamepadData",
        "("
        "J"
        "I"
        "Z"
        "Z"
        "Ljava/lang/String;"
        "J"
        "[F"
        "[F"
        ")"
        "V",
        reinterpret_cast<void*>(Java_org_chromium_device_gamepad_GamepadList_nativeSetGamepadData) },
};

static bool RegisterNativesImpl(JNIEnv* env)
{
    if (base::android::IsManualJniRegistrationDisabled())
        return true;

    const int kMethodsGamepadListSize = arraysize(kMethodsGamepadList);

    if (env->RegisterNatives(GamepadList_clazz(env),
            kMethodsGamepadList,
            kMethodsGamepadListSize)
        < 0) {
        jni_generator::HandleRegistrationError(
            env, GamepadList_clazz(env), __FILE__);
        return false;
    }

    return true;
}

} // namespace device

#endif // org_chromium_device_gamepad_GamepadList_JNI
