// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_BASE_ANDROID_MEDIA_SERVER_CRASH_LISTENER_H_
#define MEDIA_BASE_ANDROID_MEDIA_SERVER_CRASH_LISTENER_H_

#include <jni.h>

#include "base/android/scoped_java_ref.h"
#include "base/bind.h"
#include "base/callback.h"
#include "base/macros.h"
#include "base/single_thread_task_runner.h"

namespace media {

// Uses a watchdog Android MediaPlayer to listen for MediaServer crashes, and
// to notify clients when crashes occur.
// NOTE: The MediaServiceThrottler is the only client of this class, and it
// manages the MediaServerCrashListener's lifetime carefully. There should not
// be more than a single instance of this class per process.
class MediaServerCrashListener {
public:
    static bool RegisterMediaServerCrashListener(JNIEnv* env);

    using OnMediaServerCrashCB = base::Callback<void(bool)>;

    // Basic constructor. |on_server_crash_cb| will be posted to
    // |callback_task_runner| everytime the watchdog MediaPlayer detects a crash.
    MediaServerCrashListener(
        const OnMediaServerCrashCB& on_server_crash_cb,
        scoped_refptr<base::SingleThreadTaskRunner> callback_task_runner);
    ~MediaServerCrashListener();

    // Ensure the underlying watchdog MediaPlayer is created.
    // This needs to be called to restart listening after a MediaServer crash.
    void EnsureListening();

    // Called from JNI whenever a MEDIA_ERROR_SERVER_DIED is received.
    void OnMediaServerCrashDetected(
        JNIEnv* env,
        const base::android::JavaParamRef<jobject>& obj,
        jboolean watchdog_needs_release);

    void ReleaseWatchdog();

private:
    OnMediaServerCrashCB on_server_crash_cb_;

    // Task runner on which the |on_server_crash_cb_| will be posted.
    scoped_refptr<base::SingleThreadTaskRunner> callback_task_runner_;

    base::android::ScopedJavaGlobalRef<jobject> j_crash_listener_;
    DISALLOW_COPY_AND_ASSIGN(MediaServerCrashListener);
};

} // namespace media

#endif // MEDIA_BASE_ANDROID_MEDIA_SERVER_CRASH_LISTENER_H_
