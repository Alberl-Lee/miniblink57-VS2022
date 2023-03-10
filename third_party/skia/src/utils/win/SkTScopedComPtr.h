/*
 * Copyright 2011 Google Inc.
 *
 * Use of this source code is governed by a BSD-style license that can be
 * found in the LICENSE file.
 */

#ifndef SkTScopedComPtr_DEFINED
#define SkTScopedComPtr_DEFINED

#include "SkLeanWindows.h"

#ifdef SK_BUILD_FOR_WIN

template <typename T>
class SkBlockComRef : public T {
private:
    virtual ULONG STDMETHODCALLTYPE AddRef(void) = 0;
    virtual ULONG STDMETHODCALLTYPE Release(void) = 0;
};

template <typename T>
T* SkRefComPtr(T* ptr)
{
    ptr->AddRef();
    return ptr;
}

template <typename T>
T* SkSafeRefComPtr(T* ptr)
{
    if (ptr) {
        ptr->AddRef();
    }
    return ptr;
}

template <typename T>
class SkTScopedComPtr : SkNoncopyable {
private:
    T* fPtr;

public:
    explicit SkTScopedComPtr(T* ptr = nullptr)
        : fPtr(ptr)
    {
    }

    ~SkTScopedComPtr() { this->reset(); }

    T& operator*() const
    {
        SkASSERT(fPtr != nullptr);
        return *fPtr;
    }

    explicit operator bool() const { return fPtr != nullptr; }

    SkBlockComRef<T>* operator->() const { return static_cast<SkBlockComRef<T>*>(fPtr); }

    /**
     * Returns the address of the underlying pointer.
     * This is dangerous -- it breaks encapsulation and the reference escapes.
     * Must only be used on instances currently pointing to NULL,
     * and only to initialize the instance.
     */
    T** operator&()
    {
        SkASSERT(fPtr == nullptr);
        return &fPtr;
    }

    T* get() const { return fPtr; }

    void reset()
    {
        if (this->fPtr) {
            this->fPtr->Release();
            this->fPtr = nullptr;
        }
    }

    void swap(SkTScopedComPtr<T>& that)
    {
        T* temp = this->fPtr;
        this->fPtr = that.fPtr;
        that.fPtr = temp;
    }

    T* release()
    {
        T* temp = this->fPtr;
        this->fPtr = nullptr;
        return temp;
    }
};

#endif // SK_BUILD_FOR_WIN
#endif // SkTScopedComPtr_DEFINED
