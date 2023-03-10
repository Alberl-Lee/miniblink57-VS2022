// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/content/browser/input/ImeAdapter

#ifndef org_chromium_content_browser_input_ImeAdapter_JNI
#define org_chromium_content_browser_input_ImeAdapter_JNI

#include <jni.h>

#include "../../../../../../../../../base/android/jni_generator/jni_generator_helper.h"

#include "base/android/jni_int_wrapper.h"

// Step 1: forward declarations.
namespace {
const char kImeAdapterClassPath[] = "org/chromium/content/browser/input/ImeAdapter";
// Leaking this jclass as we cannot use LazyInstance from some threads.
base::subtle::AtomicWord g_ImeAdapter_clazz __attribute__((unused)) = 0;
#define ImeAdapter_clazz(env) base::android::LazyGetClass(env, kImeAdapterClassPath, &g_ImeAdapter_clazz)

} // namespace

namespace content {

// Step 2: method stubs.
JNI_GENERATOR_EXPORT jboolean
Java_org_chromium_content_browser_input_ImeAdapter_nativeSendKeyEvent(JNIEnv*
                                                                          env,
    jobject jcaller,
    jlong nativeImeAdapterAndroid,
    jobject event,
    jint type,
    jint modifiers,
    jlong timestampMs,
    jint keyCode,
    jint scanCode,
    jboolean isSystemKey,
    jint unicodeChar)
{
    ImeAdapterAndroid* native = reinterpret_cast<ImeAdapterAndroid*>(nativeImeAdapterAndroid);
    CHECK_NATIVE_PTR(env, jcaller, native, "SendKeyEvent", false);
    return native->SendKeyEvent(env, base::android::JavaParamRef<jobject>(env, jcaller), base::android::JavaParamRef<jobject>(env, event), type,
        modifiers, timestampMs, keyCode, scanCode, isSystemKey, unicodeChar);
}

static void AppendUnderlineSpan(JNIEnv* env, const base::android::JavaParamRef<jclass>& jcaller,
    jlong underlinePtr,
    jint start,
    jint end);

JNI_GENERATOR_EXPORT void
Java_org_chromium_content_browser_input_ImeAdapter_nativeAppendUnderlineSpan(JNIEnv*
                                                                                 env,
    jclass jcaller,
    jlong underlinePtr,
    jint start,
    jint end)
{
    return AppendUnderlineSpan(env, base::android::JavaParamRef<jclass>(env, jcaller), underlinePtr, start, end);
}

static void AppendBackgroundColorSpan(JNIEnv* env, const base::android::JavaParamRef<jclass>& jcaller,
    jlong underlinePtr,
    jint start,
    jint end,
    jint backgroundColor);

JNI_GENERATOR_EXPORT void
Java_org_chromium_content_browser_input_ImeAdapter_nativeAppendBackgroundColorSpan(JNIEnv*
                                                                                       env,
    jclass jcaller,
    jlong underlinePtr,
    jint start,
    jint end,
    jint backgroundColor)
{
    return AppendBackgroundColorSpan(env, base::android::JavaParamRef<jclass>(env, jcaller), underlinePtr, start, end, backgroundColor);
}

JNI_GENERATOR_EXPORT void
Java_org_chromium_content_browser_input_ImeAdapter_nativeSetComposingText(JNIEnv*
                                                                              env,
    jobject jcaller,
    jlong nativeImeAdapterAndroid,
    jobject text,
    jstring textStr,
    jint newCursorPosition)
{
    ImeAdapterAndroid* native = reinterpret_cast<ImeAdapterAndroid*>(nativeImeAdapterAndroid);
    CHECK_NATIVE_PTR(env, jcaller, native, "SetComposingText");
    return native->SetComposingText(env, base::android::JavaParamRef<jobject>(env, jcaller), base::android::JavaParamRef<jobject>(env, text),
        base::android::JavaParamRef<jstring>(env, textStr), newCursorPosition);
}

JNI_GENERATOR_EXPORT void
Java_org_chromium_content_browser_input_ImeAdapter_nativeCommitText(JNIEnv*
                                                                        env,
    jobject jcaller,
    jlong nativeImeAdapterAndroid,
    jobject text,
    jstring textStr,
    jint newCursorPosition)
{
    ImeAdapterAndroid* native = reinterpret_cast<ImeAdapterAndroid*>(nativeImeAdapterAndroid);
    CHECK_NATIVE_PTR(env, jcaller, native, "CommitText");
    return native->CommitText(env, base::android::JavaParamRef<jobject>(env, jcaller), base::android::JavaParamRef<jobject>(env, text),
        base::android::JavaParamRef<jstring>(env, textStr), newCursorPosition);
}

JNI_GENERATOR_EXPORT void
Java_org_chromium_content_browser_input_ImeAdapter_nativeFinishComposingText(JNIEnv*
                                                                                 env,
    jobject jcaller,
    jlong nativeImeAdapterAndroid)
{
    ImeAdapterAndroid* native = reinterpret_cast<ImeAdapterAndroid*>(nativeImeAdapterAndroid);
    CHECK_NATIVE_PTR(env, jcaller, native, "FinishComposingText");
    return native->FinishComposingText(env,
        base::android::JavaParamRef<jobject>(env, jcaller));
}

JNI_GENERATOR_EXPORT void
Java_org_chromium_content_browser_input_ImeAdapter_nativeAttachImeAdapter(JNIEnv*
                                                                              env,
    jobject jcaller,
    jlong nativeImeAdapterAndroid)
{
    ImeAdapterAndroid* native = reinterpret_cast<ImeAdapterAndroid*>(nativeImeAdapterAndroid);
    CHECK_NATIVE_PTR(env, jcaller, native, "AttachImeAdapter");
    return native->AttachImeAdapter(env, base::android::JavaParamRef<jobject>(env, jcaller));
}

JNI_GENERATOR_EXPORT void
Java_org_chromium_content_browser_input_ImeAdapter_nativeSetEditableSelectionOffsets(JNIEnv*
                                                                                         env,
    jobject jcaller,
    jlong nativeImeAdapterAndroid,
    jint start,
    jint end)
{
    ImeAdapterAndroid* native = reinterpret_cast<ImeAdapterAndroid*>(nativeImeAdapterAndroid);
    CHECK_NATIVE_PTR(env, jcaller, native, "SetEditableSelectionOffsets");
    return native->SetEditableSelectionOffsets(env,
        base::android::JavaParamRef<jobject>(env, jcaller), start, end);
}

JNI_GENERATOR_EXPORT void
Java_org_chromium_content_browser_input_ImeAdapter_nativeSetComposingRegion(JNIEnv*
                                                                                env,
    jobject jcaller,
    jlong nativeImeAdapterAndroid,
    jint start,
    jint end)
{
    ImeAdapterAndroid* native = reinterpret_cast<ImeAdapterAndroid*>(nativeImeAdapterAndroid);
    CHECK_NATIVE_PTR(env, jcaller, native, "SetComposingRegion");
    return native->SetComposingRegion(env,
        base::android::JavaParamRef<jobject>(env, jcaller), start, end);
}

JNI_GENERATOR_EXPORT void
Java_org_chromium_content_browser_input_ImeAdapter_nativeDeleteSurroundingText(JNIEnv*
                                                                                   env,
    jobject jcaller,
    jlong nativeImeAdapterAndroid,
    jint before,
    jint after)
{
    ImeAdapterAndroid* native = reinterpret_cast<ImeAdapterAndroid*>(nativeImeAdapterAndroid);
    CHECK_NATIVE_PTR(env, jcaller, native, "DeleteSurroundingText");
    return native->DeleteSurroundingText(env,
        base::android::JavaParamRef<jobject>(env, jcaller), before, after);
}

JNI_GENERATOR_EXPORT void
Java_org_chromium_content_browser_input_ImeAdapter_nativeResetImeAdapter(JNIEnv*
                                                                             env,
    jobject jcaller,
    jlong nativeImeAdapterAndroid)
{
    ImeAdapterAndroid* native = reinterpret_cast<ImeAdapterAndroid*>(nativeImeAdapterAndroid);
    CHECK_NATIVE_PTR(env, jcaller, native, "ResetImeAdapter");
    return native->ResetImeAdapter(env, base::android::JavaParamRef<jobject>(env, jcaller));
}

JNI_GENERATOR_EXPORT jboolean
Java_org_chromium_content_browser_input_ImeAdapter_nativeRequestTextInputStateUpdate(JNIEnv*
                                                                                         env,
    jobject jcaller,
    jlong nativeImeAdapterAndroid)
{
    ImeAdapterAndroid* native = reinterpret_cast<ImeAdapterAndroid*>(nativeImeAdapterAndroid);
    CHECK_NATIVE_PTR(env, jcaller, native, "RequestTextInputStateUpdate", false);
    return native->RequestTextInputStateUpdate(env,
        base::android::JavaParamRef<jobject>(env, jcaller));
}

JNI_GENERATOR_EXPORT void
Java_org_chromium_content_browser_input_ImeAdapter_nativeRequestCursorUpdate(JNIEnv*
                                                                                 env,
    jobject jcaller,
    jlong nativeImeAdapterAndroid,
    jboolean immediateRequest,
    jboolean monitorRequest)
{
    ImeAdapterAndroid* native = reinterpret_cast<ImeAdapterAndroid*>(nativeImeAdapterAndroid);
    CHECK_NATIVE_PTR(env, jcaller, native, "RequestCursorUpdate");
    return native->RequestCursorUpdate(env,
        base::android::JavaParamRef<jobject>(env, jcaller), immediateRequest,
        monitorRequest);
}

static base::subtle::AtomicWord g_ImeAdapter_focusedNodeChanged = 0;
static void Java_ImeAdapter_focusedNodeChanged(JNIEnv* env, const base::android::JavaRefOrBare<jobject>& obj, jboolean isEditable)
{
    CHECK_CLAZZ(env, obj.obj(),
        ImeAdapter_clazz(env));
    jmethodID method_id = base::android::MethodID::LazyGet<
        base::android::MethodID::TYPE_INSTANCE>(
        env, ImeAdapter_clazz(env),
        "focusedNodeChanged",
        "("
        "Z"
        ")"
        "V",
        &g_ImeAdapter_focusedNodeChanged);

    env->CallVoidMethod(obj.obj(),
        method_id, isEditable);
    jni_generator::CheckException(env);
}

static base::subtle::AtomicWord g_ImeAdapter_populateUnderlinesFromSpans = 0;
static void Java_ImeAdapter_populateUnderlinesFromSpans(JNIEnv* env, const base::android::JavaRefOrBare<jobject>& obj, const base::android::JavaRefOrBare<jobject>& text,
    jlong underlines)
{
    CHECK_CLAZZ(env, obj.obj(),
        ImeAdapter_clazz(env));
    jmethodID method_id = base::android::MethodID::LazyGet<
        base::android::MethodID::TYPE_INSTANCE>(
        env, ImeAdapter_clazz(env),
        "populateUnderlinesFromSpans",
        "("
        "Ljava/lang/CharSequence;"
        "J"
        ")"
        "V",
        &g_ImeAdapter_populateUnderlinesFromSpans);

    env->CallVoidMethod(obj.obj(),
        method_id, text.obj(), underlines);
    jni_generator::CheckException(env);
}

static base::subtle::AtomicWord g_ImeAdapter_cancelComposition = 0;
static void Java_ImeAdapter_cancelComposition(JNIEnv* env, const base::android::JavaRefOrBare<jobject>& obj)
{
    CHECK_CLAZZ(env, obj.obj(),
        ImeAdapter_clazz(env));
    jmethodID method_id = base::android::MethodID::LazyGet<
        base::android::MethodID::TYPE_INSTANCE>(
        env, ImeAdapter_clazz(env),
        "cancelComposition",
        "("
        ")"
        "V",
        &g_ImeAdapter_cancelComposition);

    env->CallVoidMethod(obj.obj(),
        method_id);
    jni_generator::CheckException(env);
}

static base::subtle::AtomicWord g_ImeAdapter_setCharacterBounds = 0;
static void Java_ImeAdapter_setCharacterBounds(JNIEnv* env, const base::android::JavaRefOrBare<jobject>& obj, const base::android::JavaRefOrBare<jfloatArray>& characterBounds)
{
    CHECK_CLAZZ(env, obj.obj(),
        ImeAdapter_clazz(env));
    jmethodID method_id = base::android::MethodID::LazyGet<
        base::android::MethodID::TYPE_INSTANCE>(
        env, ImeAdapter_clazz(env),
        "setCharacterBounds",
        "("
        "[F"
        ")"
        "V",
        &g_ImeAdapter_setCharacterBounds);

    env->CallVoidMethod(obj.obj(),
        method_id, characterBounds.obj());
    jni_generator::CheckException(env);
}

static base::subtle::AtomicWord g_ImeAdapter_detach = 0;
static void Java_ImeAdapter_detach(JNIEnv* env, const base::android::JavaRefOrBare<jobject>& obj)
{
    CHECK_CLAZZ(env, obj.obj(),
        ImeAdapter_clazz(env));
    jmethodID method_id = base::android::MethodID::LazyGet<
        base::android::MethodID::TYPE_INSTANCE>(
        env, ImeAdapter_clazz(env),
        "detach",
        "("
        ")"
        "V",
        &g_ImeAdapter_detach);

    env->CallVoidMethod(obj.obj(),
        method_id);
    jni_generator::CheckException(env);
}

// Step 3: RegisterNatives.

static const JNINativeMethod kMethodsImeAdapter[] = {
    { "nativeSendKeyEvent",
        "("
        "J"
        "Landroid/view/KeyEvent;"
        "I"
        "I"
        "J"
        "I"
        "I"
        "Z"
        "I"
        ")"
        "Z",
        reinterpret_cast<void*>(Java_org_chromium_content_browser_input_ImeAdapter_nativeSendKeyEvent) },
    { "nativeAppendUnderlineSpan",
        "("
        "J"
        "I"
        "I"
        ")"
        "V",
        reinterpret_cast<void*>(Java_org_chromium_content_browser_input_ImeAdapter_nativeAppendUnderlineSpan) },
    { "nativeAppendBackgroundColorSpan",
        "("
        "J"
        "I"
        "I"
        "I"
        ")"
        "V",
        reinterpret_cast<void*>(Java_org_chromium_content_browser_input_ImeAdapter_nativeAppendBackgroundColorSpan) },
    { "nativeSetComposingText",
        "("
        "J"
        "Ljava/lang/CharSequence;"
        "Ljava/lang/String;"
        "I"
        ")"
        "V",
        reinterpret_cast<void*>(Java_org_chromium_content_browser_input_ImeAdapter_nativeSetComposingText) },
    { "nativeCommitText",
        "("
        "J"
        "Ljava/lang/CharSequence;"
        "Ljava/lang/String;"
        "I"
        ")"
        "V",
        reinterpret_cast<void*>(Java_org_chromium_content_browser_input_ImeAdapter_nativeCommitText) },
    { "nativeFinishComposingText",
        "("
        "J"
        ")"
        "V",
        reinterpret_cast<void*>(Java_org_chromium_content_browser_input_ImeAdapter_nativeFinishComposingText) },
    { "nativeAttachImeAdapter",
        "("
        "J"
        ")"
        "V",
        reinterpret_cast<void*>(Java_org_chromium_content_browser_input_ImeAdapter_nativeAttachImeAdapter) },
    { "nativeSetEditableSelectionOffsets",
        "("
        "J"
        "I"
        "I"
        ")"
        "V",
        reinterpret_cast<void*>(Java_org_chromium_content_browser_input_ImeAdapter_nativeSetEditableSelectionOffsets) },
    { "nativeSetComposingRegion",
        "("
        "J"
        "I"
        "I"
        ")"
        "V",
        reinterpret_cast<void*>(Java_org_chromium_content_browser_input_ImeAdapter_nativeSetComposingRegion) },
    { "nativeDeleteSurroundingText",
        "("
        "J"
        "I"
        "I"
        ")"
        "V",
        reinterpret_cast<void*>(Java_org_chromium_content_browser_input_ImeAdapter_nativeDeleteSurroundingText) },
    { "nativeResetImeAdapter",
        "("
        "J"
        ")"
        "V",
        reinterpret_cast<void*>(Java_org_chromium_content_browser_input_ImeAdapter_nativeResetImeAdapter) },
    { "nativeRequestTextInputStateUpdate",
        "("
        "J"
        ")"
        "Z",
        reinterpret_cast<void*>(Java_org_chromium_content_browser_input_ImeAdapter_nativeRequestTextInputStateUpdate) },
    { "nativeRequestCursorUpdate",
        "("
        "J"
        "Z"
        "Z"
        ")"
        "V",
        reinterpret_cast<void*>(Java_org_chromium_content_browser_input_ImeAdapter_nativeRequestCursorUpdate) },
};

static bool RegisterNativesImpl(JNIEnv* env)
{
    if (base::android::IsManualJniRegistrationDisabled())
        return true;

    const int kMethodsImeAdapterSize = arraysize(kMethodsImeAdapter);

    if (env->RegisterNatives(ImeAdapter_clazz(env),
            kMethodsImeAdapter,
            kMethodsImeAdapterSize)
        < 0) {
        jni_generator::HandleRegistrationError(
            env, ImeAdapter_clazz(env), __FILE__);
        return false;
    }

    return true;
}

} // namespace content

#endif // org_chromium_content_browser_input_ImeAdapter_JNI
