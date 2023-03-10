// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/media/MediaPlayerBridge

#ifndef org_chromium_media_MediaPlayerBridge_JNI
#define org_chromium_media_MediaPlayerBridge_JNI

#include <jni.h>

#include "../../../../../../../../../base/android/jni_generator/jni_generator_helper.h"

#include "base/android/jni_int_wrapper.h"

// Step 1: forward declarations.
namespace {
const char kAllowedOperationsClassPath[] = "org/chromium/media/MediaPlayerBridge$AllowedOperations";
const char kMediaPlayerBridgeClassPath[] = "org/chromium/media/MediaPlayerBridge";
// Leaking this jclass as we cannot use LazyInstance from some threads.
base::subtle::AtomicWord g_AllowedOperations_clazz __attribute__((unused)) = 0;
#define AllowedOperations_clazz(env) base::android::LazyGetClass(env, kAllowedOperationsClassPath, &g_AllowedOperations_clazz)
// Leaking this jclass as we cannot use LazyInstance from some threads.
base::subtle::AtomicWord g_MediaPlayerBridge_clazz __attribute__((unused)) = 0;
#define MediaPlayerBridge_clazz(env) base::android::LazyGetClass(env, kMediaPlayerBridgeClassPath, &g_MediaPlayerBridge_clazz)

} // namespace

namespace media {

// Step 2: method stubs.
JNI_GENERATOR_EXPORT void
Java_org_chromium_media_MediaPlayerBridge_nativeOnDidSetDataUriDataSource(JNIEnv*
                                                                              env,
    jobject jcaller,
    jlong nativeMediaPlayerBridge,
    jboolean success)
{
    MediaPlayerBridge* native = reinterpret_cast<MediaPlayerBridge*>(nativeMediaPlayerBridge);
    CHECK_NATIVE_PTR(env, jcaller, native, "OnDidSetDataUriDataSource");
    return native->OnDidSetDataUriDataSource(env,
        base::android::JavaParamRef<jobject>(env, jcaller), success);
}

static base::subtle::AtomicWord g_MediaPlayerBridge_create = 0;
static base::android::ScopedJavaLocalRef<jobject>
Java_MediaPlayerBridge_create(JNIEnv* env, jlong nativeMediaPlayerBridge)
{
    CHECK_CLAZZ(env, MediaPlayerBridge_clazz(env),
        MediaPlayerBridge_clazz(env), NULL);
    jmethodID method_id = base::android::MethodID::LazyGet<
        base::android::MethodID::TYPE_STATIC>(
        env, MediaPlayerBridge_clazz(env),
        "create",
        "("
        "J"
        ")"
        "Lorg/chromium/media/MediaPlayerBridge;",
        &g_MediaPlayerBridge_create);

    jobject ret = env->CallStaticObjectMethod(MediaPlayerBridge_clazz(env),
        method_id, nativeMediaPlayerBridge);
    jni_generator::CheckException(env);
    return base::android::ScopedJavaLocalRef<jobject>(env, ret);
}

static base::subtle::AtomicWord g_MediaPlayerBridge_destroy = 0;
static void Java_MediaPlayerBridge_destroy(JNIEnv* env, const base::android::JavaRefOrBare<jobject>& obj)
{
    CHECK_CLAZZ(env, obj.obj(),
        MediaPlayerBridge_clazz(env));
    jmethodID method_id = base::android::MethodID::LazyGet<
        base::android::MethodID::TYPE_INSTANCE>(
        env, MediaPlayerBridge_clazz(env),
        "destroy",
        "("
        ")"
        "V",
        &g_MediaPlayerBridge_destroy);

    env->CallVoidMethod(obj.obj(),
        method_id);
    jni_generator::CheckException(env);
}

static base::subtle::AtomicWord g_MediaPlayerBridge_setSurface = 0;
static void Java_MediaPlayerBridge_setSurface(JNIEnv* env, const base::android::JavaRefOrBare<jobject>& obj, const base::android::JavaRefOrBare<jobject>& surface)
{
    CHECK_CLAZZ(env, obj.obj(),
        MediaPlayerBridge_clazz(env));
    jmethodID method_id = base::android::MethodID::LazyGet<
        base::android::MethodID::TYPE_INSTANCE>(
        env, MediaPlayerBridge_clazz(env),
        "setSurface",
        "("
        "Landroid/view/Surface;"
        ")"
        "V",
        &g_MediaPlayerBridge_setSurface);

    env->CallVoidMethod(obj.obj(),
        method_id, surface.obj());
    jni_generator::CheckException(env);
}

static base::subtle::AtomicWord g_MediaPlayerBridge_prepareAsync = 0;
static jboolean Java_MediaPlayerBridge_prepareAsync(JNIEnv* env, const base::android::JavaRefOrBare<jobject>& obj)
{
    CHECK_CLAZZ(env, obj.obj(),
        MediaPlayerBridge_clazz(env), false);
    jmethodID method_id = base::android::MethodID::LazyGet<
        base::android::MethodID::TYPE_INSTANCE>(
        env, MediaPlayerBridge_clazz(env),
        "prepareAsync",
        "("
        ")"
        "Z",
        &g_MediaPlayerBridge_prepareAsync);

    jboolean ret = env->CallBooleanMethod(obj.obj(),
        method_id);
    jni_generator::CheckException(env);
    return ret;
}

static base::subtle::AtomicWord g_MediaPlayerBridge_isPlaying = 0;
static jboolean Java_MediaPlayerBridge_isPlaying(JNIEnv* env, const base::android::JavaRefOrBare<jobject>& obj)
{
    CHECK_CLAZZ(env, obj.obj(),
        MediaPlayerBridge_clazz(env), false);
    jmethodID method_id = base::android::MethodID::LazyGet<
        base::android::MethodID::TYPE_INSTANCE>(
        env, MediaPlayerBridge_clazz(env),
        "isPlaying",
        "("
        ")"
        "Z",
        &g_MediaPlayerBridge_isPlaying);

    jboolean ret = env->CallBooleanMethod(obj.obj(),
        method_id);
    jni_generator::CheckException(env);
    return ret;
}

static base::subtle::AtomicWord g_MediaPlayerBridge_hasVideo = 0;
static jboolean Java_MediaPlayerBridge_hasVideo(JNIEnv* env, const base::android::JavaRefOrBare<jobject>& obj)
{
    CHECK_CLAZZ(env, obj.obj(),
        MediaPlayerBridge_clazz(env), false);
    jmethodID method_id = base::android::MethodID::LazyGet<
        base::android::MethodID::TYPE_INSTANCE>(
        env, MediaPlayerBridge_clazz(env),
        "hasVideo",
        "("
        ")"
        "Z",
        &g_MediaPlayerBridge_hasVideo);

    jboolean ret = env->CallBooleanMethod(obj.obj(),
        method_id);
    jni_generator::CheckException(env);
    return ret;
}

static base::subtle::AtomicWord g_MediaPlayerBridge_hasAudio = 0;
static jboolean Java_MediaPlayerBridge_hasAudio(JNIEnv* env, const base::android::JavaRefOrBare<jobject>& obj)
{
    CHECK_CLAZZ(env, obj.obj(),
        MediaPlayerBridge_clazz(env), false);
    jmethodID method_id = base::android::MethodID::LazyGet<
        base::android::MethodID::TYPE_INSTANCE>(
        env, MediaPlayerBridge_clazz(env),
        "hasAudio",
        "("
        ")"
        "Z",
        &g_MediaPlayerBridge_hasAudio);

    jboolean ret = env->CallBooleanMethod(obj.obj(),
        method_id);
    jni_generator::CheckException(env);
    return ret;
}

static base::subtle::AtomicWord g_MediaPlayerBridge_getVideoWidth = 0;
static jint Java_MediaPlayerBridge_getVideoWidth(JNIEnv* env, const base::android::JavaRefOrBare<jobject>& obj)
{
    CHECK_CLAZZ(env, obj.obj(),
        MediaPlayerBridge_clazz(env), 0);
    jmethodID method_id = base::android::MethodID::LazyGet<
        base::android::MethodID::TYPE_INSTANCE>(
        env, MediaPlayerBridge_clazz(env),
        "getVideoWidth",
        "("
        ")"
        "I",
        &g_MediaPlayerBridge_getVideoWidth);

    jint ret = env->CallIntMethod(obj.obj(),
        method_id);
    jni_generator::CheckException(env);
    return ret;
}

static base::subtle::AtomicWord g_MediaPlayerBridge_getVideoHeight = 0;
static jint Java_MediaPlayerBridge_getVideoHeight(JNIEnv* env, const base::android::JavaRefOrBare<jobject>& obj)
{
    CHECK_CLAZZ(env, obj.obj(),
        MediaPlayerBridge_clazz(env), 0);
    jmethodID method_id = base::android::MethodID::LazyGet<
        base::android::MethodID::TYPE_INSTANCE>(
        env, MediaPlayerBridge_clazz(env),
        "getVideoHeight",
        "("
        ")"
        "I",
        &g_MediaPlayerBridge_getVideoHeight);

    jint ret = env->CallIntMethod(obj.obj(),
        method_id);
    jni_generator::CheckException(env);
    return ret;
}

static base::subtle::AtomicWord g_MediaPlayerBridge_getCurrentPosition = 0;
static jint Java_MediaPlayerBridge_getCurrentPosition(JNIEnv* env, const base::android::JavaRefOrBare<jobject>& obj)
{
    CHECK_CLAZZ(env, obj.obj(),
        MediaPlayerBridge_clazz(env), 0);
    jmethodID method_id = base::android::MethodID::LazyGet<
        base::android::MethodID::TYPE_INSTANCE>(
        env, MediaPlayerBridge_clazz(env),
        "getCurrentPosition",
        "("
        ")"
        "I",
        &g_MediaPlayerBridge_getCurrentPosition);

    jint ret = env->CallIntMethod(obj.obj(),
        method_id);
    jni_generator::CheckException(env);
    return ret;
}

static base::subtle::AtomicWord g_MediaPlayerBridge_getDuration = 0;
static jint Java_MediaPlayerBridge_getDuration(JNIEnv* env, const base::android::JavaRefOrBare<jobject>& obj)
{
    CHECK_CLAZZ(env, obj.obj(),
        MediaPlayerBridge_clazz(env), 0);
    jmethodID method_id = base::android::MethodID::LazyGet<
        base::android::MethodID::TYPE_INSTANCE>(
        env, MediaPlayerBridge_clazz(env),
        "getDuration",
        "("
        ")"
        "I",
        &g_MediaPlayerBridge_getDuration);

    jint ret = env->CallIntMethod(obj.obj(),
        method_id);
    jni_generator::CheckException(env);
    return ret;
}

static base::subtle::AtomicWord g_MediaPlayerBridge_release = 0;
static void Java_MediaPlayerBridge_release(JNIEnv* env, const base::android::JavaRefOrBare<jobject>& obj)
{
    CHECK_CLAZZ(env, obj.obj(),
        MediaPlayerBridge_clazz(env));
    jmethodID method_id = base::android::MethodID::LazyGet<
        base::android::MethodID::TYPE_INSTANCE>(
        env, MediaPlayerBridge_clazz(env),
        "release",
        "("
        ")"
        "V",
        &g_MediaPlayerBridge_release);

    env->CallVoidMethod(obj.obj(),
        method_id);
    jni_generator::CheckException(env);
}

static base::subtle::AtomicWord g_MediaPlayerBridge_setVolume = 0;
static void Java_MediaPlayerBridge_setVolume(JNIEnv* env, const base::android::JavaRefOrBare<jobject>& obj, jdouble volume)
{
    CHECK_CLAZZ(env, obj.obj(),
        MediaPlayerBridge_clazz(env));
    jmethodID method_id = base::android::MethodID::LazyGet<
        base::android::MethodID::TYPE_INSTANCE>(
        env, MediaPlayerBridge_clazz(env),
        "setVolume",
        "("
        "D"
        ")"
        "V",
        &g_MediaPlayerBridge_setVolume);

    env->CallVoidMethod(obj.obj(),
        method_id, volume);
    jni_generator::CheckException(env);
}

static base::subtle::AtomicWord g_MediaPlayerBridge_start = 0;
static void Java_MediaPlayerBridge_start(JNIEnv* env, const base::android::JavaRefOrBare<jobject>& obj)
{
    CHECK_CLAZZ(env, obj.obj(),
        MediaPlayerBridge_clazz(env));
    jmethodID method_id = base::android::MethodID::LazyGet<
        base::android::MethodID::TYPE_INSTANCE>(
        env, MediaPlayerBridge_clazz(env),
        "start",
        "("
        ")"
        "V",
        &g_MediaPlayerBridge_start);

    env->CallVoidMethod(obj.obj(),
        method_id);
    jni_generator::CheckException(env);
}

static base::subtle::AtomicWord g_MediaPlayerBridge_pause = 0;
static void Java_MediaPlayerBridge_pause(JNIEnv* env, const base::android::JavaRefOrBare<jobject>& obj)
{
    CHECK_CLAZZ(env, obj.obj(),
        MediaPlayerBridge_clazz(env));
    jmethodID method_id = base::android::MethodID::LazyGet<
        base::android::MethodID::TYPE_INSTANCE>(
        env, MediaPlayerBridge_clazz(env),
        "pause",
        "("
        ")"
        "V",
        &g_MediaPlayerBridge_pause);

    env->CallVoidMethod(obj.obj(),
        method_id);
    jni_generator::CheckException(env);
}

static base::subtle::AtomicWord g_MediaPlayerBridge_seekTo = 0;
static void Java_MediaPlayerBridge_seekTo(JNIEnv* env, const base::android::JavaRefOrBare<jobject>& obj, JniIntWrapper msec)
{
    CHECK_CLAZZ(env, obj.obj(),
        MediaPlayerBridge_clazz(env));
    jmethodID method_id = base::android::MethodID::LazyGet<
        base::android::MethodID::TYPE_INSTANCE>(
        env, MediaPlayerBridge_clazz(env),
        "seekTo",
        "("
        "I"
        ")"
        "V",
        &g_MediaPlayerBridge_seekTo);

    env->CallVoidMethod(obj.obj(),
        method_id, as_jint(msec));
    jni_generator::CheckException(env);
}

static base::subtle::AtomicWord g_MediaPlayerBridge_setDataSource = 0;
static jboolean Java_MediaPlayerBridge_setDataSource(JNIEnv* env, const base::android::JavaRefOrBare<jobject>& obj, const base::android::JavaRefOrBare<jobject>& context,
    const base::android::JavaRefOrBare<jstring>& url,
    const base::android::JavaRefOrBare<jstring>& cookies,
    const base::android::JavaRefOrBare<jstring>& userAgent,
    jboolean hideUrlLog)
{
    CHECK_CLAZZ(env, obj.obj(),
        MediaPlayerBridge_clazz(env), false);
    jmethodID method_id = base::android::MethodID::LazyGet<
        base::android::MethodID::TYPE_INSTANCE>(
        env, MediaPlayerBridge_clazz(env),
        "setDataSource",
        "("
        "Landroid/content/Context;"
        "Ljava/lang/String;"
        "Ljava/lang/String;"
        "Ljava/lang/String;"
        "Z"
        ")"
        "Z",
        &g_MediaPlayerBridge_setDataSource);

    jboolean ret = env->CallBooleanMethod(obj.obj(),
        method_id, context.obj(), url.obj(), cookies.obj(), userAgent.obj(),
        hideUrlLog);
    jni_generator::CheckException(env);
    return ret;
}

static base::subtle::AtomicWord g_MediaPlayerBridge_setDataSourceFromFd = 0;
static jboolean Java_MediaPlayerBridge_setDataSourceFromFd(JNIEnv* env, const base::android::JavaRefOrBare<jobject>& obj, JniIntWrapper fd,
    jlong offset,
    jlong length)
{
    CHECK_CLAZZ(env, obj.obj(),
        MediaPlayerBridge_clazz(env), false);
    jmethodID method_id = base::android::MethodID::LazyGet<
        base::android::MethodID::TYPE_INSTANCE>(
        env, MediaPlayerBridge_clazz(env),
        "setDataSourceFromFd",
        "("
        "I"
        "J"
        "J"
        ")"
        "Z",
        &g_MediaPlayerBridge_setDataSourceFromFd);

    jboolean ret = env->CallBooleanMethod(obj.obj(),
        method_id, as_jint(fd), offset, length);
    jni_generator::CheckException(env);
    return ret;
}

static base::subtle::AtomicWord g_MediaPlayerBridge_setDataUriDataSource = 0;
static jboolean Java_MediaPlayerBridge_setDataUriDataSource(JNIEnv* env, const base::android::JavaRefOrBare<jobject>& obj, const base::android::JavaRefOrBare<jobject>& context,
    const base::android::JavaRefOrBare<jstring>& url)
{
    CHECK_CLAZZ(env, obj.obj(),
        MediaPlayerBridge_clazz(env), false);
    jmethodID method_id = base::android::MethodID::LazyGet<
        base::android::MethodID::TYPE_INSTANCE>(
        env, MediaPlayerBridge_clazz(env),
        "setDataUriDataSource",
        "("
        "Landroid/content/Context;"
        "Ljava/lang/String;"
        ")"
        "Z",
        &g_MediaPlayerBridge_setDataUriDataSource);

    jboolean ret = env->CallBooleanMethod(obj.obj(),
        method_id, context.obj(), url.obj());
    jni_generator::CheckException(env);
    return ret;
}

static base::subtle::AtomicWord g_AllowedOperations_canPause = 0;
static jboolean Java_AllowedOperations_canPause(JNIEnv* env, const base::android::JavaRefOrBare<jobject>& obj)
{
    CHECK_CLAZZ(env, obj.obj(),
        AllowedOperations_clazz(env), false);
    jmethodID method_id = base::android::MethodID::LazyGet<
        base::android::MethodID::TYPE_INSTANCE>(
        env, AllowedOperations_clazz(env),
        "canPause",
        "("
        ")"
        "Z",
        &g_AllowedOperations_canPause);

    jboolean ret = env->CallBooleanMethod(obj.obj(),
        method_id);
    jni_generator::CheckException(env);
    return ret;
}

static base::subtle::AtomicWord g_AllowedOperations_canSeekForward = 0;
static jboolean Java_AllowedOperations_canSeekForward(JNIEnv* env, const base::android::JavaRefOrBare<jobject>& obj)
{
    CHECK_CLAZZ(env, obj.obj(),
        AllowedOperations_clazz(env), false);
    jmethodID method_id = base::android::MethodID::LazyGet<
        base::android::MethodID::TYPE_INSTANCE>(
        env, AllowedOperations_clazz(env),
        "canSeekForward",
        "("
        ")"
        "Z",
        &g_AllowedOperations_canSeekForward);

    jboolean ret = env->CallBooleanMethod(obj.obj(),
        method_id);
    jni_generator::CheckException(env);
    return ret;
}

static base::subtle::AtomicWord g_AllowedOperations_canSeekBackward = 0;
static jboolean Java_AllowedOperations_canSeekBackward(JNIEnv* env, const base::android::JavaRefOrBare<jobject>& obj)
{
    CHECK_CLAZZ(env, obj.obj(),
        AllowedOperations_clazz(env), false);
    jmethodID method_id = base::android::MethodID::LazyGet<
        base::android::MethodID::TYPE_INSTANCE>(
        env, AllowedOperations_clazz(env),
        "canSeekBackward",
        "("
        ")"
        "Z",
        &g_AllowedOperations_canSeekBackward);

    jboolean ret = env->CallBooleanMethod(obj.obj(),
        method_id);
    jni_generator::CheckException(env);
    return ret;
}

static base::subtle::AtomicWord g_MediaPlayerBridge_getAllowedOperations = 0;
static base::android::ScopedJavaLocalRef<jobject>
Java_MediaPlayerBridge_getAllowedOperations(JNIEnv* env, const base::android::JavaRefOrBare<jobject>& obj)
{
    CHECK_CLAZZ(env, obj.obj(),
        MediaPlayerBridge_clazz(env), NULL);
    jmethodID method_id = base::android::MethodID::LazyGet<
        base::android::MethodID::TYPE_INSTANCE>(
        env, MediaPlayerBridge_clazz(env),
        "getAllowedOperations",
        "("
        ")"
        "Lorg/chromium/media/MediaPlayerBridge$AllowedOperations;",
        &g_MediaPlayerBridge_getAllowedOperations);

    jobject ret = env->CallObjectMethod(obj.obj(),
        method_id);
    jni_generator::CheckException(env);
    return base::android::ScopedJavaLocalRef<jobject>(env, ret);
}

// Step 3: RegisterNatives.

static const JNINativeMethod kMethodsMediaPlayerBridge[] = {
    { "nativeOnDidSetDataUriDataSource",
        "("
        "J"
        "Z"
        ")"
        "V",
        reinterpret_cast<void*>(Java_org_chromium_media_MediaPlayerBridge_nativeOnDidSetDataUriDataSource) },
};

static bool RegisterNativesImpl(JNIEnv* env)
{
    if (base::android::IsManualJniRegistrationDisabled())
        return true;

    const int kMethodsMediaPlayerBridgeSize = arraysize(kMethodsMediaPlayerBridge);

    if (env->RegisterNatives(MediaPlayerBridge_clazz(env),
            kMethodsMediaPlayerBridge,
            kMethodsMediaPlayerBridgeSize)
        < 0) {
        jni_generator::HandleRegistrationError(
            env, MediaPlayerBridge_clazz(env), __FILE__);
        return false;
    }

    return true;
}

} // namespace media

#endif // org_chromium_media_MediaPlayerBridge_JNI
