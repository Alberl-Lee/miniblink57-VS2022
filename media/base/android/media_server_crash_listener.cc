// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "media/base/android/media_server_crash_listener.h"

#include "base/android/context_utils.h"
#include "base/android/jni_android.h"
#include "base/memory/singleton.h"
#include "jni/MediaServerCrashListener_jni.h"

namespace media {

// static
bool MediaServerCrashListener::RegisterMediaServerCrashListener(JNIEnv* env)
{
    return RegisterNativesImpl(env);
}

MediaServerCrashListener::MediaServerCrashListener(
    const OnMediaServerCrashCB& on_server_crash_cb,
    scoped_refptr<base::SingleThreadTaskRunner> callback_thread)
    : on_server_crash_cb_(on_server_crash_cb)
    , callback_task_runner_(std::move(callback_thread))
{
    JNIEnv* env = base::android::AttachCurrentThread();
    CHECK(env);

    j_crash_listener_.Reset(Java_MediaServerCrashListener_create(
        env, base::android::GetApplicationContext(),
        reinterpret_cast<intptr_t>(this)));
    Java_MediaServerCrashListener_startListening(env, j_crash_listener_);
}

MediaServerCrashListener::~MediaServerCrashListener()
{
    ReleaseWatchdog();
}

void MediaServerCrashListener::ReleaseWatchdog()
{
    JNIEnv* env = base::android::AttachCurrentThread();
    Java_MediaServerCrashListener_releaseWatchdog(env, j_crash_listener_);
}

void MediaServerCrashListener::EnsureListening()
{
    JNIEnv* env = base::android::AttachCurrentThread();
    Java_MediaServerCrashListener_startListening(env, j_crash_listener_);
}

void MediaServerCrashListener::OnMediaServerCrashDetected(
    JNIEnv* env,
    const base::android::JavaParamRef<jobject>& obj,
    jboolean watchdog_needs_release)
{
    callback_task_runner_->PostTask(
        FROM_HERE, base::Bind(on_server_crash_cb_, watchdog_needs_release));
}

} // namespace media
