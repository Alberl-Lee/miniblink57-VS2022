// Copyright 2016 the V8 project authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef V8_HEAP_CODE_STATS_H_
#define V8_HEAP_CODE_STATS_H_

namespace v8 {
namespace internal {

    class CodeCommentsIterator;
    class HeapObject;
    class Isolate;
    class LargeObjectSpace;
    class PagedSpace;

    class CodeStatistics {
    public:
        // Collect statistics related to code size.
        static void CollectCodeStatistics(PagedSpace* space, Isolate* isolate);

        // Collect statistics related to code size from large object space.
        static void CollectCodeStatistics(LargeObjectSpace* space, Isolate* isolate);

        // Reset code size related statistics
        static void ResetCodeAndMetadataStatistics(Isolate* isolate);

#ifdef DEBUG
        // Report statistics about code kind, code+metadata and code comments.
        static void ReportCodeStatistics(Isolate* isolate);
#endif

    private:
        static void RecordCodeAndMetadataStatistics(HeapObject object,
            Isolate* isolate);

#ifdef DEBUG
        static void CollectCommentStatistics(Isolate* isolate,
            CodeCommentsIterator* it);
        static void CollectCodeCommentStatistics(HeapObject obj, Isolate* isolate);
        static void EnterComment(Isolate* isolate, const char* comment, int delta);
        static void ResetCodeStatistics(Isolate* isolate);
#endif
    };

} // namespace internal
} // namespace v8

#endif // V8_HEAP_CODE_STATS_H_
