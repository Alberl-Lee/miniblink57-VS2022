// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/android_webview/AndroidProtocolHandler

#ifndef org_chromium_android_webview_AndroidProtocolHandler_JNI
#define org_chromium_android_webview_AndroidProtocolHandler_JNI

#include <jni.h>

#include "../../../../../../../../base/android/jni_generator/jni_generator_helper.h"

#include "base/android/jni_int_wrapper.h"

// Step 1: forward declarations.
namespace {
const char kAndroidProtocolHandlerClassPath[] = "org/chromium/android_webview/AndroidProtocolHandler";
// Leaking this jclass as we cannot use LazyInstance from some threads.
base::subtle::AtomicWord g_AndroidProtocolHandler_clazz __attribute__((unused))
= 0;
#define AndroidProtocolHandler_clazz(env) base::android::LazyGetClass(env, kAndroidProtocolHandlerClassPath, &g_AndroidProtocolHandler_clazz)

} // namespace

namespace android_webview {

// Step 2: method stubs.

static void SetResourceContextForTesting(JNIEnv* env, const base::android::JavaParamRef<jclass>& jcaller,
    const base::android::JavaParamRef<jobject>& context);

JNI_GENERATOR_EXPORT void
Java_org_chromium_android_1webview_AndroidProtocolHandler_nativeSetResourceContextForTesting(JNIEnv*
                                                                                                 env,
    jclass jcaller,
    jobject context)
{
    return SetResourceContextForTesting(env,
        base::android::JavaParamRef<jclass>(env, jcaller),
        base::android::JavaParamRef<jobject>(env, context));
}

static base::android::ScopedJavaLocalRef<jstring> GetAndroidAssetPath(JNIEnv*
                                                                          env,
    const base::android::JavaParamRef<jclass>& jcaller);

JNI_GENERATOR_EXPORT jstring
Java_org_chromium_android_1webview_AndroidProtocolHandler_nativeGetAndroidAssetPath(JNIEnv*
                                                                                        env,
    jclass jcaller)
{
    return GetAndroidAssetPath(env, base::android::JavaParamRef<jclass>(env, jcaller)).Release();
}

static base::android::ScopedJavaLocalRef<jstring> GetAndroidResourcePath(JNIEnv*
                                                                             env,
    const base::android::JavaParamRef<jclass>& jcaller);

JNI_GENERATOR_EXPORT jstring
Java_org_chromium_android_1webview_AndroidProtocolHandler_nativeGetAndroidResourcePath(JNIEnv*
                                                                                           env,
    jclass jcaller)
{
    return GetAndroidResourcePath(env, base::android::JavaParamRef<jclass>(env, jcaller)).Release();
}

static base::subtle::AtomicWord g_AndroidProtocolHandler_open = 0;
static base::android::ScopedJavaLocalRef<jobject>
Java_AndroidProtocolHandler_open(JNIEnv* env, const base::android::JavaRefOrBare<jobject>& context,
    const base::android::JavaRefOrBare<jstring>& url)
{
    CHECK_CLAZZ(env, AndroidProtocolHandler_clazz(env),
        AndroidProtocolHandler_clazz(env), NULL);
    jmethodID method_id = base::android::MethodID::LazyGet<
        base::android::MethodID::TYPE_STATIC>(
        env, AndroidProtocolHandler_clazz(env),
        "open",
        "("
        "Landroid/content/Context;"
        "Ljava/lang/String;"
        ")"
        "Ljava/io/InputStream;",
        &g_AndroidProtocolHandler_open);

    jobject ret = env->CallStaticObjectMethod(AndroidProtocolHandler_clazz(env),
        method_id, context.obj(), url.obj());
    jni_generator::CheckException(env);
    return base::android::ScopedJavaLocalRef<jobject>(env, ret);
}

static base::subtle::AtomicWord g_AndroidProtocolHandler_getMimeType = 0;
static base::android::ScopedJavaLocalRef<jstring>
Java_AndroidProtocolHandler_getMimeType(JNIEnv* env, const base::android::JavaRefOrBare<jobject>& context,
    const base::android::JavaRefOrBare<jobject>& stream,
    const base::android::JavaRefOrBare<jstring>& url)
{
    CHECK_CLAZZ(env, AndroidProtocolHandler_clazz(env),
        AndroidProtocolHandler_clazz(env), NULL);
    jmethodID method_id = base::android::MethodID::LazyGet<
        base::android::MethodID::TYPE_STATIC>(
        env, AndroidProtocolHandler_clazz(env),
        "getMimeType",
        "("
        "Landroid/content/Context;"
        "Ljava/io/InputStream;"
        "Ljava/lang/String;"
        ")"
        "Ljava/lang/String;",
        &g_AndroidProtocolHandler_getMimeType);

    jstring ret = static_cast<jstring>(env->CallStaticObjectMethod(AndroidProtocolHandler_clazz(env),
        method_id, context.obj(), stream.obj(), url.obj()));
    jni_generator::CheckException(env);
    return base::android::ScopedJavaLocalRef<jstring>(env, ret);
}

// Step 3: RegisterNatives.

static const JNINativeMethod kMethodsAndroidProtocolHandler[] = {
    { "nativeSetResourceContextForTesting",
        "("
        "Landroid/content/Context;"
        ")"
        "V",
        reinterpret_cast<void*>(Java_org_chromium_android_1webview_AndroidProtocolHandler_nativeSetResourceContextForTesting) },
    { "nativeGetAndroidAssetPath",
        "("
        ")"
        "Ljava/lang/String;",
        reinterpret_cast<void*>(Java_org_chromium_android_1webview_AndroidProtocolHandler_nativeGetAndroidAssetPath) },
    { "nativeGetAndroidResourcePath",
        "("
        ")"
        "Ljava/lang/String;",
        reinterpret_cast<void*>(Java_org_chromium_android_1webview_AndroidProtocolHandler_nativeGetAndroidResourcePath) },
};

static bool RegisterNativesImpl(JNIEnv* env)
{
    if (base::android::IsManualJniRegistrationDisabled())
        return true;

    const int kMethodsAndroidProtocolHandlerSize = arraysize(kMethodsAndroidProtocolHandler);

    if (env->RegisterNatives(AndroidProtocolHandler_clazz(env),
            kMethodsAndroidProtocolHandler,
            kMethodsAndroidProtocolHandlerSize)
        < 0) {
        jni_generator::HandleRegistrationError(
            env, AndroidProtocolHandler_clazz(env), __FILE__);
        return false;
    }

    return true;
}

} // namespace android_webview

#endif // org_chromium_android_webview_AndroidProtocolHandler_JNI
