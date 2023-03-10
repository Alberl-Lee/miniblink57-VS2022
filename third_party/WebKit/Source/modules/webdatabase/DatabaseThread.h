/*
 * Copyright (C) 2007, 2008 Apple Inc. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1.  Redistributions of source code must retain the above copyright
 *     notice, this list of conditions and the following disclaimer.
 * 2.  Redistributions in binary form must reproduce the above copyright
 *     notice, this list of conditions and the following disclaimer in the
 *     documentation and/or other materials provided with the distribution.
 * 3.  Neither the name of Apple Computer, Inc. ("Apple") nor the names of
 *     its contributors may be used to endorse or promote products derived
 *     from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY APPLE AND ITS CONTRIBUTORS "AS IS" AND ANY
 * EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL APPLE OR ITS CONTRIBUTORS BE LIABLE FOR ANY
 * DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
 * ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
 * THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */
#ifndef DatabaseThread_h
#define DatabaseThread_h

#include "platform/WebThreadSupportingGC.h"
#include "platform/heap/Handle.h"
#include "wtf/HashMap.h"
#include "wtf/ThreadingPrimitives.h"
#include <memory>

namespace blink {

class Database;
class DatabaseTask;
class SQLTransactionClient;
class SQLTransactionCoordinator;
class WaitableEvent;

class DatabaseThread : public GarbageCollectedFinalized<DatabaseThread> {
public:
    static DatabaseThread* create() { return new DatabaseThread; }
    ~DatabaseThread();
    DECLARE_TRACE();

    // Callable only from the main thread.
    void start();
    void terminate();

    // Callable from the main thread or the database thread.
    void scheduleTask(std::unique_ptr<DatabaseTask>);
    bool isDatabaseThread() const;

    // Callable only from the database thread.
    void recordDatabaseOpen(Database*);
    void recordDatabaseClosed(Database*);
    bool isDatabaseOpen(Database*);

    SQLTransactionClient* transactionClient()
    {
        return m_transactionClient.get();
    }
    SQLTransactionCoordinator* transactionCoordinator()
    {
        return m_transactionCoordinator.get();
    }

private:
    DatabaseThread();

    void setupDatabaseThread();
    void cleanupDatabaseThread();
    void cleanupDatabaseThreadCompleted();

    std::unique_ptr<WebThreadSupportingGC> m_thread;

    // This set keeps track of the open databases that have been used on this
    // thread.  This must be updated in the database thread though it is
    // constructed and destructed in the context thread.
    HashSet<CrossThreadPersistent<Database>> m_openDatabaseSet;

    std::unique_ptr<SQLTransactionClient> m_transactionClient;
    CrossThreadPersistent<SQLTransactionCoordinator> m_transactionCoordinator;
    WaitableEvent* m_cleanupSync;

    Mutex m_terminationRequestedMutex;
    bool m_terminationRequested;
};

} // namespace blink

#endif // DatabaseThread_h
