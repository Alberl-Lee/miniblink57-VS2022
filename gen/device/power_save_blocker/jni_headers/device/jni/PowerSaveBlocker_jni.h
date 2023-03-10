// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/device/power_save_blocker/PowerSaveBlocker

#ifndef org_chromium_device_power_save_blocker_PowerSaveBlocker_JNI
#define org_chromium_device_power_save_blocker_PowerSaveBlocker_JNI

#include <jni.h>

#include "../../../../../../../../base/android/jni_generator/jni_generator_helper.h"

#include "base/android/jni_int_wrapper.h"

// Step 1: forward declarations.
namespace {
const char kPowerSaveBlockerClassPath[] = "org/chromium/device/power_save_blocker/PowerSaveBlocker";
// Leaking this jclass as we cannot use LazyInstance from some threads.
base::subtle::AtomicWord g_PowerSaveBlocker_clazz __attribute__((unused)) = 0;
#define PowerSaveBlocker_clazz(env) base::android::LazyGetClass(env, kPowerSaveBlockerClassPath, &g_PowerSaveBlocker_clazz)

} // namespace

namespace device {

// Step 2: method stubs.

static base::subtle::AtomicWord g_PowerSaveBlocker_create = 0;
static base::android::ScopedJavaLocalRef<jobject>
Java_PowerSaveBlocker_create(JNIEnv* env)
{
    CHECK_CLAZZ(env, PowerSaveBlocker_clazz(env),
        PowerSaveBlocker_clazz(env), NULL);
    jmethodID method_id = base::android::MethodID::LazyGet<
        base::android::MethodID::TYPE_STATIC>(
        env, PowerSaveBlocker_clazz(env),
        "create",
        "("
        ")"
        "Lorg/chromium/device/power_save_blocker/PowerSaveBlocker;",
        &g_PowerSaveBlocker_create);

    jobject ret = env->CallStaticObjectMethod(PowerSaveBlocker_clazz(env),
        method_id);
    jni_generator::CheckException(env);
    return base::android::ScopedJavaLocalRef<jobject>(env, ret);
}

static base::subtle::AtomicWord g_PowerSaveBlocker_applyBlock = 0;
static void Java_PowerSaveBlocker_applyBlock(JNIEnv* env, const base::android::JavaRefOrBare<jobject>& obj, const base::android::JavaRefOrBare<jobject>& anchorView)
{
    CHECK_CLAZZ(env, obj.obj(),
        PowerSaveBlocker_clazz(env));
    jmethodID method_id = base::android::MethodID::LazyGet<
        base::android::MethodID::TYPE_INSTANCE>(
        env, PowerSaveBlocker_clazz(env),
        "applyBlock",
        "("
        "Landroid/view/View;"
        ")"
        "V",
        &g_PowerSaveBlocker_applyBlock);

    env->CallVoidMethod(obj.obj(),
        method_id, anchorView.obj());
    jni_generator::CheckException(env);
}

static base::subtle::AtomicWord g_PowerSaveBlocker_removeBlock = 0;
static void Java_PowerSaveBlocker_removeBlock(JNIEnv* env, const base::android::JavaRefOrBare<jobject>& obj)
{
    CHECK_CLAZZ(env, obj.obj(),
        PowerSaveBlocker_clazz(env));
    jmethodID method_id = base::android::MethodID::LazyGet<
        base::android::MethodID::TYPE_INSTANCE>(
        env, PowerSaveBlocker_clazz(env),
        "removeBlock",
        "("
        ")"
        "V",
        &g_PowerSaveBlocker_removeBlock);

    env->CallVoidMethod(obj.obj(),
        method_id);
    jni_generator::CheckException(env);
}

// Step 3: RegisterNatives.

} // namespace device

#endif // org_chromium_device_power_save_blocker_PowerSaveBlocker_JNI
