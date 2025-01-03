// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_INDEXED_DB_INDEXED_DB_MOJOM_H_
#define CONTENT_COMMON_INDEXED_DB_INDEXED_DB_MOJOM_H_

#include <stdint.h>

#include <limits>
#include <type_traits>
#include <utility>

#include "base/callback.h"
#include "base/macros.h"
#include "base/optional.h"

#include "mojo/public/cpp/bindings/mojo_buildflags.h"
#if BUILDFLAG(MOJO_TRACE_ENABLED)
#include "base/trace_event/trace_event.h"
#endif
#include "mojo/public/cpp/bindings/clone_traits.h"
#include "mojo/public/cpp/bindings/equals_traits.h"
#include "mojo/public/cpp/bindings/lib/serialization.h"
#include "mojo/public/cpp/bindings/struct_ptr.h"
#include "mojo/public/cpp/bindings/struct_traits.h"
#include "mojo/public/cpp/bindings/union_traits.h"
#include "content/common/indexed_db/indexed_db.mojom-shared.h"
#include "mojo/public/mojom/base/file_path.mojom.h"
#include "mojo/public/mojom/base/string16.mojom.h"
#include "mojo/public/mojom/base/string16.mojom.h"
#include "mojo/public/mojom/base/time.mojom.h"
#include "third_party/blink/public/mojom/blob/blob.mojom.h"
#include "url/mojom/origin.mojom.h"
#include <string>
#include <vector>

#include "mojo/public/cpp/bindings/associated_interface_ptr.h"
#include "mojo/public/cpp/bindings/associated_interface_ptr_info.h"
#include "mojo/public/cpp/bindings/associated_interface_request.h"
#include "mojo/public/cpp/bindings/interface_ptr.h"
#include "mojo/public/cpp/bindings/interface_request.h"
#include "mojo/public/cpp/bindings/lib/control_message_handler.h"
#include "mojo/public/cpp/bindings/raw_ptr_impl_ref_traits.h"
#include "mojo/public/cpp/bindings/thread_safe_interface_ptr.h"


#include "mojo/public/cpp/bindings/lib/native_enum_serialization.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "content/common/indexed_db/indexed_db_key.h"
#include "content/common/indexed_db/indexed_db_key_path.h"
#include "content/common/indexed_db/indexed_db_key_range.h"
#include "content/common/indexed_db/indexed_db_metadata.h"
#include "third_party/blink/public/platform/modules/indexeddb/web_idb_types.h"
#include "content/common/content_export.h"


namespace indexed_db {
namespace mojom {
class Callbacks;
using CallbacksPtr = mojo::InterfacePtr<Callbacks>;
using CallbacksPtrInfo = mojo::InterfacePtrInfo<Callbacks>;
using ThreadSafeCallbacksPtr =
    mojo::ThreadSafeInterfacePtr<Callbacks>;
using CallbacksRequest = mojo::InterfaceRequest<Callbacks>;
using CallbacksAssociatedPtr =
    mojo::AssociatedInterfacePtr<Callbacks>;
using ThreadSafeCallbacksAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<Callbacks>;
using CallbacksAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<Callbacks>;
using CallbacksAssociatedRequest =
    mojo::AssociatedInterfaceRequest<Callbacks>;

class DatabaseCallbacks;
using DatabaseCallbacksPtr = mojo::InterfacePtr<DatabaseCallbacks>;
using DatabaseCallbacksPtrInfo = mojo::InterfacePtrInfo<DatabaseCallbacks>;
using ThreadSafeDatabaseCallbacksPtr =
    mojo::ThreadSafeInterfacePtr<DatabaseCallbacks>;
using DatabaseCallbacksRequest = mojo::InterfaceRequest<DatabaseCallbacks>;
using DatabaseCallbacksAssociatedPtr =
    mojo::AssociatedInterfacePtr<DatabaseCallbacks>;
using ThreadSafeDatabaseCallbacksAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<DatabaseCallbacks>;
using DatabaseCallbacksAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<DatabaseCallbacks>;
using DatabaseCallbacksAssociatedRequest =
    mojo::AssociatedInterfaceRequest<DatabaseCallbacks>;

class Cursor;
using CursorPtr = mojo::InterfacePtr<Cursor>;
using CursorPtrInfo = mojo::InterfacePtrInfo<Cursor>;
using ThreadSafeCursorPtr =
    mojo::ThreadSafeInterfacePtr<Cursor>;
using CursorRequest = mojo::InterfaceRequest<Cursor>;
using CursorAssociatedPtr =
    mojo::AssociatedInterfacePtr<Cursor>;
using ThreadSafeCursorAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<Cursor>;
using CursorAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<Cursor>;
using CursorAssociatedRequest =
    mojo::AssociatedInterfaceRequest<Cursor>;

class Database;
using DatabasePtr = mojo::InterfacePtr<Database>;
using DatabasePtrInfo = mojo::InterfacePtrInfo<Database>;
using ThreadSafeDatabasePtr =
    mojo::ThreadSafeInterfacePtr<Database>;
using DatabaseRequest = mojo::InterfaceRequest<Database>;
using DatabaseAssociatedPtr =
    mojo::AssociatedInterfacePtr<Database>;
using ThreadSafeDatabaseAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<Database>;
using DatabaseAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<Database>;
using DatabaseAssociatedRequest =
    mojo::AssociatedInterfaceRequest<Database>;

class Factory;
using FactoryPtr = mojo::InterfacePtr<Factory>;
using FactoryPtrInfo = mojo::InterfacePtrInfo<Factory>;
using ThreadSafeFactoryPtr =
    mojo::ThreadSafeInterfacePtr<Factory>;
using FactoryRequest = mojo::InterfaceRequest<Factory>;
using FactoryAssociatedPtr =
    mojo::AssociatedInterfacePtr<Factory>;
using ThreadSafeFactoryAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<Factory>;
using FactoryAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<Factory>;
using FactoryAssociatedRequest =
    mojo::AssociatedInterfaceRequest<Factory>;

class Key;
using KeyPtr = mojo::StructPtr<Key>;

class KeyPath;
using KeyPathPtr = mojo::StructPtr<KeyPath>;

class KeyRange;
using KeyRangePtr = mojo::StructPtr<KeyRange>;

class IndexMetadata;
using IndexMetadataPtr = mojo::StructPtr<IndexMetadata>;

class ObjectStoreMetadata;
using ObjectStoreMetadataPtr = mojo::StructPtr<ObjectStoreMetadata>;

class DatabaseMetadata;
using DatabaseMetadataPtr = mojo::StructPtr<DatabaseMetadata>;

class IndexKeys;
using IndexKeysPtr = mojo::StructPtr<IndexKeys>;

class FileInfo;
using FileInfoPtr = mojo::StructPtr<FileInfo>;

class BlobInfo;
using BlobInfoPtr = mojo::StructPtr<BlobInfo>;

class Value;
using ValuePtr = mojo::StructPtr<Value>;

class ReturnValue;
using ReturnValuePtr = mojo::StructPtr<ReturnValue>;

class Observation;
using ObservationPtr = mojo::StructPtr<Observation>;

class ObserverTransaction;
using ObserverTransactionPtr = mojo::StructPtr<ObserverTransaction>;

class ObserverChanges;
using ObserverChangesPtr = mojo::StructPtr<ObserverChanges>;

class KeyData;

typedef mojo::StructPtr<KeyData> KeyDataPtr;

class KeyPathData;

typedef mojo::StructPtr<KeyPathData> KeyPathDataPtr;


class CallbacksProxy;

template <typename ImplRefTraits>
class CallbacksStub;

class CallbacksRequestValidator;

class CONTENT_EXPORT Callbacks
    : public CallbacksInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = true;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = CallbacksProxy;

  template <typename ImplRefTraits>
  using Stub_ = CallbacksStub<ImplRefTraits>;

  using RequestValidator_ = CallbacksRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kErrorMinVersion = 0,
    kSuccessStringListMinVersion = 0,
    kBlockedMinVersion = 0,
    kUpgradeNeededMinVersion = 0,
    kSuccessDatabaseMinVersion = 0,
    kSuccessCursorMinVersion = 0,
    kSuccessValueMinVersion = 0,
    kSuccessCursorContinueMinVersion = 0,
    kSuccessCursorPrefetchMinVersion = 0,
    kSuccessArrayMinVersion = 0,
    kSuccessKeyMinVersion = 0,
    kSuccessIntegerMinVersion = 0,
    kSuccessMinVersion = 0,
  };
  virtual ~Callbacks() {}

  virtual void Error(int32_t code, const base::string16& message) = 0;

  virtual void SuccessStringList(const std::vector<base::string16>& value) = 0;

  virtual void Blocked(int64_t existing_version) = 0;

  virtual void UpgradeNeeded(DatabaseAssociatedPtrInfo database, int64_t old_version, blink::WebIDBDataLoss data_loss, const std::string& data_loss_message, const content::IndexedDBDatabaseMetadata& db_metadata) = 0;

  virtual void SuccessDatabase(DatabaseAssociatedPtrInfo database, const content::IndexedDBDatabaseMetadata& metadata) = 0;

  virtual void SuccessCursor(CursorAssociatedPtrInfo cursor, const content::IndexedDBKey& key, const content::IndexedDBKey& primary_key, ValuePtr value) = 0;

  virtual void SuccessValue(ReturnValuePtr value) = 0;

  virtual void SuccessCursorContinue(const content::IndexedDBKey& key, const content::IndexedDBKey& primary_key, ValuePtr value) = 0;

  virtual void SuccessCursorPrefetch(const std::vector<content::IndexedDBKey>& keys, const std::vector<content::IndexedDBKey>& primary_keys, std::vector<ValuePtr> values) = 0;

  virtual void SuccessArray(std::vector<ReturnValuePtr> values) = 0;

  virtual void SuccessKey(const content::IndexedDBKey& key) = 0;

  virtual void SuccessInteger(int64_t value) = 0;

  virtual void Success() = 0;
};
class CONTENT_EXPORT CallbacksInterceptorForTesting : public Callbacks {
  virtual Callbacks* GetForwardingInterface() = 0;
  void Error(int32_t code, const base::string16& message) override;
  void SuccessStringList(const std::vector<base::string16>& value) override;
  void Blocked(int64_t existing_version) override;
  void UpgradeNeeded(DatabaseAssociatedPtrInfo database, int64_t old_version, blink::WebIDBDataLoss data_loss, const std::string& data_loss_message, const content::IndexedDBDatabaseMetadata& db_metadata) override;
  void SuccessDatabase(DatabaseAssociatedPtrInfo database, const content::IndexedDBDatabaseMetadata& metadata) override;
  void SuccessCursor(CursorAssociatedPtrInfo cursor, const content::IndexedDBKey& key, const content::IndexedDBKey& primary_key, ValuePtr value) override;
  void SuccessValue(ReturnValuePtr value) override;
  void SuccessCursorContinue(const content::IndexedDBKey& key, const content::IndexedDBKey& primary_key, ValuePtr value) override;
  void SuccessCursorPrefetch(const std::vector<content::IndexedDBKey>& keys, const std::vector<content::IndexedDBKey>& primary_keys, std::vector<ValuePtr> values) override;
  void SuccessArray(std::vector<ReturnValuePtr> values) override;
  void SuccessKey(const content::IndexedDBKey& key) override;
  void SuccessInteger(int64_t value) override;
  void Success() override;
};
class CONTENT_EXPORT CallbacksAsyncWaiter {
 public:
  explicit CallbacksAsyncWaiter(Callbacks* proxy);
  ~CallbacksAsyncWaiter();

 private:
  Callbacks* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(CallbacksAsyncWaiter);
};

class DatabaseCallbacksProxy;

template <typename ImplRefTraits>
class DatabaseCallbacksStub;

class DatabaseCallbacksRequestValidator;

class CONTENT_EXPORT DatabaseCallbacks
    : public DatabaseCallbacksInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = DatabaseCallbacksProxy;

  template <typename ImplRefTraits>
  using Stub_ = DatabaseCallbacksStub<ImplRefTraits>;

  using RequestValidator_ = DatabaseCallbacksRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kForcedCloseMinVersion = 0,
    kVersionChangeMinVersion = 0,
    kAbortMinVersion = 0,
    kCompleteMinVersion = 0,
    kChangesMinVersion = 0,
  };
  virtual ~DatabaseCallbacks() {}

  virtual void ForcedClose() = 0;

  virtual void VersionChange(int64_t old_version, int64_t new_version) = 0;

  virtual void Abort(int64_t transaction_id, int32_t code, const base::string16& message) = 0;

  virtual void Complete(int64_t transaction_id) = 0;

  virtual void Changes(ObserverChangesPtr changes) = 0;
};
class CONTENT_EXPORT DatabaseCallbacksInterceptorForTesting : public DatabaseCallbacks {
  virtual DatabaseCallbacks* GetForwardingInterface() = 0;
  void ForcedClose() override;
  void VersionChange(int64_t old_version, int64_t new_version) override;
  void Abort(int64_t transaction_id, int32_t code, const base::string16& message) override;
  void Complete(int64_t transaction_id) override;
  void Changes(ObserverChangesPtr changes) override;
};
class CONTENT_EXPORT DatabaseCallbacksAsyncWaiter {
 public:
  explicit DatabaseCallbacksAsyncWaiter(DatabaseCallbacks* proxy);
  ~DatabaseCallbacksAsyncWaiter();

 private:
  DatabaseCallbacks* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(DatabaseCallbacksAsyncWaiter);
};

class CursorProxy;

template <typename ImplRefTraits>
class CursorStub;

class CursorRequestValidator;

class CONTENT_EXPORT Cursor
    : public CursorInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = true;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = CursorProxy;

  template <typename ImplRefTraits>
  using Stub_ = CursorStub<ImplRefTraits>;

  using RequestValidator_ = CursorRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kAdvanceMinVersion = 0,
    kContinueMinVersion = 0,
    kPrefetchMinVersion = 0,
    kPrefetchResetMinVersion = 0,
  };
  virtual ~Cursor() {}

  virtual void Advance(uint32_t count, CallbacksAssociatedPtrInfo callbacks) = 0;

  virtual void Continue(const content::IndexedDBKey& key, const content::IndexedDBKey& primary_key, CallbacksAssociatedPtrInfo callbacks) = 0;

  virtual void Prefetch(int32_t count, CallbacksAssociatedPtrInfo callbacks) = 0;

  virtual void PrefetchReset(int32_t used_prefetches, int32_t unused_prefetches) = 0;
};
class CONTENT_EXPORT CursorInterceptorForTesting : public Cursor {
  virtual Cursor* GetForwardingInterface() = 0;
  void Advance(uint32_t count, CallbacksAssociatedPtrInfo callbacks) override;
  void Continue(const content::IndexedDBKey& key, const content::IndexedDBKey& primary_key, CallbacksAssociatedPtrInfo callbacks) override;
  void Prefetch(int32_t count, CallbacksAssociatedPtrInfo callbacks) override;
  void PrefetchReset(int32_t used_prefetches, int32_t unused_prefetches) override;
};
class CONTENT_EXPORT CursorAsyncWaiter {
 public:
  explicit CursorAsyncWaiter(Cursor* proxy);
  ~CursorAsyncWaiter();

 private:
  Cursor* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(CursorAsyncWaiter);
};

class DatabaseProxy;

template <typename ImplRefTraits>
class DatabaseStub;

class DatabaseRequestValidator;

class CONTENT_EXPORT Database
    : public DatabaseInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = true;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = DatabaseProxy;

  template <typename ImplRefTraits>
  using Stub_ = DatabaseStub<ImplRefTraits>;

  using RequestValidator_ = DatabaseRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kCreateObjectStoreMinVersion = 0,
    kDeleteObjectStoreMinVersion = 0,
    kRenameObjectStoreMinVersion = 0,
    kCreateTransactionMinVersion = 0,
    kCloseMinVersion = 0,
    kVersionChangeIgnoredMinVersion = 0,
    kAddObserverMinVersion = 0,
    kRemoveObserversMinVersion = 0,
    kGetMinVersion = 0,
    kGetAllMinVersion = 0,
    kPutMinVersion = 0,
    kSetIndexKeysMinVersion = 0,
    kSetIndexesReadyMinVersion = 0,
    kOpenCursorMinVersion = 0,
    kCountMinVersion = 0,
    kDeleteRangeMinVersion = 0,
    kClearMinVersion = 0,
    kCreateIndexMinVersion = 0,
    kDeleteIndexMinVersion = 0,
    kRenameIndexMinVersion = 0,
    kAbortMinVersion = 0,
    kCommitMinVersion = 0,
  };
  virtual ~Database() {}

  virtual void CreateObjectStore(int64_t transaction_id, int64_t object_store_id, const base::string16& name, const content::IndexedDBKeyPath& key_path, bool auto_increment) = 0;

  virtual void DeleteObjectStore(int64_t transaction_id, int64_t object_store_id) = 0;

  virtual void RenameObjectStore(int64_t transaction_id, int64_t object_store_id, const base::string16& new_name) = 0;

  virtual void CreateTransaction(int64_t transaction_id, const std::vector<int64_t>& object_store_ids, blink::WebIDBTransactionMode mode) = 0;

  virtual void Close() = 0;

  virtual void VersionChangeIgnored() = 0;

  virtual void AddObserver(int64_t transaction_id, int32_t observer_id, bool include_transaction, bool no_records, bool values, uint16_t operation_types) = 0;

  virtual void RemoveObservers(const std::vector<int32_t>& observers) = 0;

  virtual void Get(int64_t transaction_id, int64_t object_store_id, int64_t index_id, const content::IndexedDBKeyRange& key_range, bool key_only, CallbacksAssociatedPtrInfo callbacks) = 0;

  virtual void GetAll(int64_t transaction_id, int64_t object_store_id, int64_t index_id, const content::IndexedDBKeyRange& key_range, bool key_only, int64_t max_count, CallbacksAssociatedPtrInfo callbacks) = 0;

  virtual void Put(int64_t transaction_id, int64_t object_store_id, ValuePtr value, const content::IndexedDBKey& key, blink::WebIDBPutMode mode, const std::vector<content::IndexedDBIndexKeys>& index_keys, CallbacksAssociatedPtrInfo callbacks) = 0;

  virtual void SetIndexKeys(int64_t transaction_id, int64_t object_store_id, const content::IndexedDBKey& primary_key, const std::vector<content::IndexedDBIndexKeys>& index_keys) = 0;

  virtual void SetIndexesReady(int64_t transaction_id, int64_t object_store_id, const std::vector<int64_t>& index_ids) = 0;

  virtual void OpenCursor(int64_t transaction_id, int64_t object_store_id, int64_t index_id, const content::IndexedDBKeyRange& key_range, blink::WebIDBCursorDirection direction, bool key_only, blink::WebIDBTaskType task_type, CallbacksAssociatedPtrInfo callbacks) = 0;

  virtual void Count(int64_t transaction_id, int64_t object_store_id, int64_t index_id, const content::IndexedDBKeyRange& key_range, CallbacksAssociatedPtrInfo callbacks) = 0;

  virtual void DeleteRange(int64_t transaction_id, int64_t object_store_id, const content::IndexedDBKeyRange& key_range, CallbacksAssociatedPtrInfo callbacks) = 0;

  virtual void Clear(int64_t transaction_id, int64_t object_store_id, CallbacksAssociatedPtrInfo callbacks) = 0;

  virtual void CreateIndex(int64_t transaction_id, int64_t object_store_id, int64_t index_id, const base::string16& name, const content::IndexedDBKeyPath& key_path, bool unique, bool multi_entry) = 0;

  virtual void DeleteIndex(int64_t transaction_id, int64_t object_store_id, int64_t index_id) = 0;

  virtual void RenameIndex(int64_t transaction_id, int64_t object_store_id, int64_t index_id, const base::string16& new_name) = 0;

  virtual void Abort(int64_t transaction_id) = 0;

  virtual void Commit(int64_t transaction_id) = 0;
};
class CONTENT_EXPORT DatabaseInterceptorForTesting : public Database {
  virtual Database* GetForwardingInterface() = 0;
  void CreateObjectStore(int64_t transaction_id, int64_t object_store_id, const base::string16& name, const content::IndexedDBKeyPath& key_path, bool auto_increment) override;
  void DeleteObjectStore(int64_t transaction_id, int64_t object_store_id) override;
  void RenameObjectStore(int64_t transaction_id, int64_t object_store_id, const base::string16& new_name) override;
  void CreateTransaction(int64_t transaction_id, const std::vector<int64_t>& object_store_ids, blink::WebIDBTransactionMode mode) override;
  void Close() override;
  void VersionChangeIgnored() override;
  void AddObserver(int64_t transaction_id, int32_t observer_id, bool include_transaction, bool no_records, bool values, uint16_t operation_types) override;
  void RemoveObservers(const std::vector<int32_t>& observers) override;
  void Get(int64_t transaction_id, int64_t object_store_id, int64_t index_id, const content::IndexedDBKeyRange& key_range, bool key_only, CallbacksAssociatedPtrInfo callbacks) override;
  void GetAll(int64_t transaction_id, int64_t object_store_id, int64_t index_id, const content::IndexedDBKeyRange& key_range, bool key_only, int64_t max_count, CallbacksAssociatedPtrInfo callbacks) override;
  void Put(int64_t transaction_id, int64_t object_store_id, ValuePtr value, const content::IndexedDBKey& key, blink::WebIDBPutMode mode, const std::vector<content::IndexedDBIndexKeys>& index_keys, CallbacksAssociatedPtrInfo callbacks) override;
  void SetIndexKeys(int64_t transaction_id, int64_t object_store_id, const content::IndexedDBKey& primary_key, const std::vector<content::IndexedDBIndexKeys>& index_keys) override;
  void SetIndexesReady(int64_t transaction_id, int64_t object_store_id, const std::vector<int64_t>& index_ids) override;
  void OpenCursor(int64_t transaction_id, int64_t object_store_id, int64_t index_id, const content::IndexedDBKeyRange& key_range, blink::WebIDBCursorDirection direction, bool key_only, blink::WebIDBTaskType task_type, CallbacksAssociatedPtrInfo callbacks) override;
  void Count(int64_t transaction_id, int64_t object_store_id, int64_t index_id, const content::IndexedDBKeyRange& key_range, CallbacksAssociatedPtrInfo callbacks) override;
  void DeleteRange(int64_t transaction_id, int64_t object_store_id, const content::IndexedDBKeyRange& key_range, CallbacksAssociatedPtrInfo callbacks) override;
  void Clear(int64_t transaction_id, int64_t object_store_id, CallbacksAssociatedPtrInfo callbacks) override;
  void CreateIndex(int64_t transaction_id, int64_t object_store_id, int64_t index_id, const base::string16& name, const content::IndexedDBKeyPath& key_path, bool unique, bool multi_entry) override;
  void DeleteIndex(int64_t transaction_id, int64_t object_store_id, int64_t index_id) override;
  void RenameIndex(int64_t transaction_id, int64_t object_store_id, int64_t index_id, const base::string16& new_name) override;
  void Abort(int64_t transaction_id) override;
  void Commit(int64_t transaction_id) override;
};
class CONTENT_EXPORT DatabaseAsyncWaiter {
 public:
  explicit DatabaseAsyncWaiter(Database* proxy);
  ~DatabaseAsyncWaiter();

 private:
  Database* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(DatabaseAsyncWaiter);
};

class FactoryProxy;

template <typename ImplRefTraits>
class FactoryStub;

class FactoryRequestValidator;
class FactoryResponseValidator;

class CONTENT_EXPORT Factory
    : public FactoryInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = true;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = FactoryProxy;

  template <typename ImplRefTraits>
  using Stub_ = FactoryStub<ImplRefTraits>;

  using RequestValidator_ = FactoryRequestValidator;
  using ResponseValidator_ = FactoryResponseValidator;
  enum MethodMinVersions : uint32_t {
    kGetDatabaseNamesMinVersion = 0,
    kOpenMinVersion = 0,
    kDeleteDatabaseMinVersion = 0,
    kAbortTransactionsAndCompactDatabaseMinVersion = 0,
    kAbortTransactionsForDatabaseMinVersion = 0,
  };
  virtual ~Factory() {}

  virtual void GetDatabaseNames(CallbacksAssociatedPtrInfo callbacks, const url::Origin& origin) = 0;

  virtual void Open(CallbacksAssociatedPtrInfo callbacks, DatabaseCallbacksAssociatedPtrInfo database_callbacks, const url::Origin& origin, const base::string16& name, int64_t version, int64_t transaction_id) = 0;

  virtual void DeleteDatabase(CallbacksAssociatedPtrInfo callbacks, const url::Origin& origin, const base::string16& name, bool force_close) = 0;


  using AbortTransactionsAndCompactDatabaseCallback = base::OnceCallback<void(Status)>;
  virtual void AbortTransactionsAndCompactDatabase(const url::Origin& origin, AbortTransactionsAndCompactDatabaseCallback callback) = 0;


  using AbortTransactionsForDatabaseCallback = base::OnceCallback<void(Status)>;
  virtual void AbortTransactionsForDatabase(const url::Origin& origin, AbortTransactionsForDatabaseCallback callback) = 0;
};
class CONTENT_EXPORT FactoryInterceptorForTesting : public Factory {
  virtual Factory* GetForwardingInterface() = 0;
  void GetDatabaseNames(CallbacksAssociatedPtrInfo callbacks, const url::Origin& origin) override;
  void Open(CallbacksAssociatedPtrInfo callbacks, DatabaseCallbacksAssociatedPtrInfo database_callbacks, const url::Origin& origin, const base::string16& name, int64_t version, int64_t transaction_id) override;
  void DeleteDatabase(CallbacksAssociatedPtrInfo callbacks, const url::Origin& origin, const base::string16& name, bool force_close) override;
  void AbortTransactionsAndCompactDatabase(const url::Origin& origin, AbortTransactionsAndCompactDatabaseCallback callback) override;
  void AbortTransactionsForDatabase(const url::Origin& origin, AbortTransactionsForDatabaseCallback callback) override;
};
class CONTENT_EXPORT FactoryAsyncWaiter {
 public:
  explicit FactoryAsyncWaiter(Factory* proxy);
  ~FactoryAsyncWaiter();
  void AbortTransactionsAndCompactDatabase(
      const url::Origin& origin, Status* out_status);
  void AbortTransactionsForDatabase(
      const url::Origin& origin, Status* out_status);

 private:
  Factory* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(FactoryAsyncWaiter);
};

class CONTENT_EXPORT CallbacksProxy
    : public Callbacks {
 public:
  explicit CallbacksProxy(mojo::MessageReceiverWithResponder* receiver);
  void Error(int32_t code, const base::string16& message) final;
  void SuccessStringList(const std::vector<base::string16>& value) final;
  void Blocked(int64_t existing_version) final;
  void UpgradeNeeded(DatabaseAssociatedPtrInfo database, int64_t old_version, blink::WebIDBDataLoss data_loss, const std::string& data_loss_message, const content::IndexedDBDatabaseMetadata& db_metadata) final;
  void SuccessDatabase(DatabaseAssociatedPtrInfo database, const content::IndexedDBDatabaseMetadata& metadata) final;
  void SuccessCursor(CursorAssociatedPtrInfo cursor, const content::IndexedDBKey& key, const content::IndexedDBKey& primary_key, ValuePtr value) final;
  void SuccessValue(ReturnValuePtr value) final;
  void SuccessCursorContinue(const content::IndexedDBKey& key, const content::IndexedDBKey& primary_key, ValuePtr value) final;
  void SuccessCursorPrefetch(const std::vector<content::IndexedDBKey>& keys, const std::vector<content::IndexedDBKey>& primary_keys, std::vector<ValuePtr> values) final;
  void SuccessArray(std::vector<ReturnValuePtr> values) final;
  void SuccessKey(const content::IndexedDBKey& key) final;
  void SuccessInteger(int64_t value) final;
  void Success() final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class CONTENT_EXPORT DatabaseCallbacksProxy
    : public DatabaseCallbacks {
 public:
  explicit DatabaseCallbacksProxy(mojo::MessageReceiverWithResponder* receiver);
  void ForcedClose() final;
  void VersionChange(int64_t old_version, int64_t new_version) final;
  void Abort(int64_t transaction_id, int32_t code, const base::string16& message) final;
  void Complete(int64_t transaction_id) final;
  void Changes(ObserverChangesPtr changes) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class CONTENT_EXPORT CursorProxy
    : public Cursor {
 public:
  explicit CursorProxy(mojo::MessageReceiverWithResponder* receiver);
  void Advance(uint32_t count, CallbacksAssociatedPtrInfo callbacks) final;
  void Continue(const content::IndexedDBKey& key, const content::IndexedDBKey& primary_key, CallbacksAssociatedPtrInfo callbacks) final;
  void Prefetch(int32_t count, CallbacksAssociatedPtrInfo callbacks) final;
  void PrefetchReset(int32_t used_prefetches, int32_t unused_prefetches) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class CONTENT_EXPORT DatabaseProxy
    : public Database {
 public:
  explicit DatabaseProxy(mojo::MessageReceiverWithResponder* receiver);
  void CreateObjectStore(int64_t transaction_id, int64_t object_store_id, const base::string16& name, const content::IndexedDBKeyPath& key_path, bool auto_increment) final;
  void DeleteObjectStore(int64_t transaction_id, int64_t object_store_id) final;
  void RenameObjectStore(int64_t transaction_id, int64_t object_store_id, const base::string16& new_name) final;
  void CreateTransaction(int64_t transaction_id, const std::vector<int64_t>& object_store_ids, blink::WebIDBTransactionMode mode) final;
  void Close() final;
  void VersionChangeIgnored() final;
  void AddObserver(int64_t transaction_id, int32_t observer_id, bool include_transaction, bool no_records, bool values, uint16_t operation_types) final;
  void RemoveObservers(const std::vector<int32_t>& observers) final;
  void Get(int64_t transaction_id, int64_t object_store_id, int64_t index_id, const content::IndexedDBKeyRange& key_range, bool key_only, CallbacksAssociatedPtrInfo callbacks) final;
  void GetAll(int64_t transaction_id, int64_t object_store_id, int64_t index_id, const content::IndexedDBKeyRange& key_range, bool key_only, int64_t max_count, CallbacksAssociatedPtrInfo callbacks) final;
  void Put(int64_t transaction_id, int64_t object_store_id, ValuePtr value, const content::IndexedDBKey& key, blink::WebIDBPutMode mode, const std::vector<content::IndexedDBIndexKeys>& index_keys, CallbacksAssociatedPtrInfo callbacks) final;
  void SetIndexKeys(int64_t transaction_id, int64_t object_store_id, const content::IndexedDBKey& primary_key, const std::vector<content::IndexedDBIndexKeys>& index_keys) final;
  void SetIndexesReady(int64_t transaction_id, int64_t object_store_id, const std::vector<int64_t>& index_ids) final;
  void OpenCursor(int64_t transaction_id, int64_t object_store_id, int64_t index_id, const content::IndexedDBKeyRange& key_range, blink::WebIDBCursorDirection direction, bool key_only, blink::WebIDBTaskType task_type, CallbacksAssociatedPtrInfo callbacks) final;
  void Count(int64_t transaction_id, int64_t object_store_id, int64_t index_id, const content::IndexedDBKeyRange& key_range, CallbacksAssociatedPtrInfo callbacks) final;
  void DeleteRange(int64_t transaction_id, int64_t object_store_id, const content::IndexedDBKeyRange& key_range, CallbacksAssociatedPtrInfo callbacks) final;
  void Clear(int64_t transaction_id, int64_t object_store_id, CallbacksAssociatedPtrInfo callbacks) final;
  void CreateIndex(int64_t transaction_id, int64_t object_store_id, int64_t index_id, const base::string16& name, const content::IndexedDBKeyPath& key_path, bool unique, bool multi_entry) final;
  void DeleteIndex(int64_t transaction_id, int64_t object_store_id, int64_t index_id) final;
  void RenameIndex(int64_t transaction_id, int64_t object_store_id, int64_t index_id, const base::string16& new_name) final;
  void Abort(int64_t transaction_id) final;
  void Commit(int64_t transaction_id) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class CONTENT_EXPORT FactoryProxy
    : public Factory {
 public:
  explicit FactoryProxy(mojo::MessageReceiverWithResponder* receiver);
  void GetDatabaseNames(CallbacksAssociatedPtrInfo callbacks, const url::Origin& origin) final;
  void Open(CallbacksAssociatedPtrInfo callbacks, DatabaseCallbacksAssociatedPtrInfo database_callbacks, const url::Origin& origin, const base::string16& name, int64_t version, int64_t transaction_id) final;
  void DeleteDatabase(CallbacksAssociatedPtrInfo callbacks, const url::Origin& origin, const base::string16& name, bool force_close) final;
  void AbortTransactionsAndCompactDatabase(const url::Origin& origin, AbortTransactionsAndCompactDatabaseCallback callback) final;
  void AbortTransactionsForDatabase(const url::Origin& origin, AbortTransactionsForDatabaseCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class CONTENT_EXPORT CallbacksStubDispatch {
 public:
  static bool Accept(Callbacks* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      Callbacks* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<Callbacks>>
class CallbacksStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  CallbacksStub() {}
  ~CallbacksStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return CallbacksStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return CallbacksStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class CONTENT_EXPORT DatabaseCallbacksStubDispatch {
 public:
  static bool Accept(DatabaseCallbacks* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      DatabaseCallbacks* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<DatabaseCallbacks>>
class DatabaseCallbacksStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  DatabaseCallbacksStub() {}
  ~DatabaseCallbacksStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return DatabaseCallbacksStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return DatabaseCallbacksStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class CONTENT_EXPORT CursorStubDispatch {
 public:
  static bool Accept(Cursor* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      Cursor* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<Cursor>>
class CursorStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  CursorStub() {}
  ~CursorStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return CursorStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return CursorStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class CONTENT_EXPORT DatabaseStubDispatch {
 public:
  static bool Accept(Database* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      Database* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<Database>>
class DatabaseStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  DatabaseStub() {}
  ~DatabaseStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return DatabaseStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return DatabaseStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class CONTENT_EXPORT FactoryStubDispatch {
 public:
  static bool Accept(Factory* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      Factory* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<Factory>>
class FactoryStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  FactoryStub() {}
  ~FactoryStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return FactoryStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return FactoryStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class CONTENT_EXPORT CallbacksRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class CONTENT_EXPORT DatabaseCallbacksRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class CONTENT_EXPORT CursorRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class CONTENT_EXPORT DatabaseRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class CONTENT_EXPORT FactoryRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class CONTENT_EXPORT FactoryResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
















class CONTENT_EXPORT KeyData {
 public:
  using DataView = KeyDataDataView;
  using Data_ = internal::KeyData_Data;
  using Tag = Data_::KeyData_Tag;

  static KeyDataPtr New() {
    return KeyDataPtr(base::in_place);
  }
  // Construct an instance holding |key_array|.
  static KeyDataPtr
  NewKeyArray(
      const std::vector<content::IndexedDBKey>& key_array) {
    auto result = KeyDataPtr(base::in_place);
    result->set_key_array(std::move(key_array));
    return result;
  }
  // Construct an instance holding |binary|.
  static KeyDataPtr
  NewBinary(
      const std::vector<uint8_t>& binary) {
    auto result = KeyDataPtr(base::in_place);
    result->set_binary(std::move(binary));
    return result;
  }
  // Construct an instance holding |string|.
  static KeyDataPtr
  NewString(
      const base::string16& string) {
    auto result = KeyDataPtr(base::in_place);
    result->set_string(std::move(string));
    return result;
  }
  // Construct an instance holding |date|.
  static KeyDataPtr
  NewDate(
      double date) {
    auto result = KeyDataPtr(base::in_place);
    result->set_date(std::move(date));
    return result;
  }
  // Construct an instance holding |number|.
  static KeyDataPtr
  NewNumber(
      double number) {
    auto result = KeyDataPtr(base::in_place);
    result->set_number(std::move(number));
    return result;
  }
  // Construct an instance holding |other|.
  static KeyDataPtr
  NewOther(
      DatalessKeyType other) {
    auto result = KeyDataPtr(base::in_place);
    result->set_other(std::move(other));
    return result;
  }

  template <typename U>
  static KeyDataPtr From(const U& u) {
    return mojo::TypeConverter<KeyDataPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, KeyData>::Convert(*this);
  }

  KeyData();
  ~KeyData();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename UnionPtrType = KeyDataPtr>
  KeyDataPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, KeyData>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  Tag which() const {
    return tag_;
  }


  bool is_key_array() const { return tag_ == Tag::KEY_ARRAY; }

  std::vector<content::IndexedDBKey>& get_key_array() const {
    DCHECK(tag_ == Tag::KEY_ARRAY);
    return *(data_.key_array);
  }

  void set_key_array(
      const std::vector<content::IndexedDBKey>& key_array);
  bool is_binary() const { return tag_ == Tag::BINARY; }

  std::vector<uint8_t>& get_binary() const {
    DCHECK(tag_ == Tag::BINARY);
    return *(data_.binary);
  }

  void set_binary(
      const std::vector<uint8_t>& binary);
  bool is_string() const { return tag_ == Tag::STRING; }

  base::string16& get_string() const {
    DCHECK(tag_ == Tag::STRING);
    return *(data_.string);
  }

  void set_string(
      const base::string16& string);
  bool is_date() const { return tag_ == Tag::DATE; }

  double get_date() const {
    DCHECK(tag_ == Tag::DATE);
    return data_.date;
  }

  void set_date(
      double date);
  bool is_number() const { return tag_ == Tag::NUMBER; }

  double get_number() const {
    DCHECK(tag_ == Tag::NUMBER);
    return data_.number;
  }

  void set_number(
      double number);
  bool is_other() const { return tag_ == Tag::OTHER; }

  DatalessKeyType get_other() const {
    DCHECK(tag_ == Tag::OTHER);
    return data_.other;
  }

  void set_other(
      DatalessKeyType other);

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        KeyData::DataView>(input);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    return mojo::internal::DeserializeImpl<KeyData::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

 private:
  union Union_ {
    Union_() {}
    ~Union_() {}
    std::vector<content::IndexedDBKey>* key_array;
    std::vector<uint8_t>* binary;
    base::string16* string;
    double date;
    double number;
    DatalessKeyType other;
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  void DestroyActive();
  Tag tag_;
  Union_ data_;
};
class CONTENT_EXPORT KeyPathData {
 public:
  using DataView = KeyPathDataDataView;
  using Data_ = internal::KeyPathData_Data;
  using Tag = Data_::KeyPathData_Tag;

  static KeyPathDataPtr New() {
    return KeyPathDataPtr(base::in_place);
  }
  // Construct an instance holding |string|.
  static KeyPathDataPtr
  NewString(
      const base::string16& string) {
    auto result = KeyPathDataPtr(base::in_place);
    result->set_string(std::move(string));
    return result;
  }
  // Construct an instance holding |string_array|.
  static KeyPathDataPtr
  NewStringArray(
      const std::vector<base::string16>& string_array) {
    auto result = KeyPathDataPtr(base::in_place);
    result->set_string_array(std::move(string_array));
    return result;
  }

  template <typename U>
  static KeyPathDataPtr From(const U& u) {
    return mojo::TypeConverter<KeyPathDataPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, KeyPathData>::Convert(*this);
  }

  KeyPathData();
  ~KeyPathData();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename UnionPtrType = KeyPathDataPtr>
  KeyPathDataPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, KeyPathData>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  Tag which() const {
    return tag_;
  }


  bool is_string() const { return tag_ == Tag::STRING; }

  base::string16& get_string() const {
    DCHECK(tag_ == Tag::STRING);
    return *(data_.string);
  }

  void set_string(
      const base::string16& string);
  bool is_string_array() const { return tag_ == Tag::STRING_ARRAY; }

  std::vector<base::string16>& get_string_array() const {
    DCHECK(tag_ == Tag::STRING_ARRAY);
    return *(data_.string_array);
  }

  void set_string_array(
      const std::vector<base::string16>& string_array);

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        KeyPathData::DataView>(input);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    return mojo::internal::DeserializeImpl<KeyPathData::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

 private:
  union Union_ {
    Union_() {}
    ~Union_() {}
    base::string16* string;
    std::vector<base::string16>* string_array;
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  void DestroyActive();
  Tag tag_;
  Union_ data_;
};


class CONTENT_EXPORT Key {
 public:
  using DataView = KeyDataView;
  using Data_ = internal::Key_Data;

  template <typename... Args>
  static KeyPtr New(Args&&... args) {
    return KeyPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static KeyPtr From(const U& u) {
    return mojo::TypeConverter<KeyPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, Key>::Convert(*this);
  }


  Key();

  explicit Key(
      KeyDataPtr data);

  ~Key();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = KeyPtr>
  KeyPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, Key>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        Key::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        Key::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::Key_UnserializedMessageContext<
            UserType, Key::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<Key::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return Key::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::Key_UnserializedMessageContext<
            UserType, Key::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<Key::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  KeyDataPtr data;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(Key);
};


class CONTENT_EXPORT KeyPath {
 public:
  using DataView = KeyPathDataView;
  using Data_ = internal::KeyPath_Data;

  template <typename... Args>
  static KeyPathPtr New(Args&&... args) {
    return KeyPathPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static KeyPathPtr From(const U& u) {
    return mojo::TypeConverter<KeyPathPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, KeyPath>::Convert(*this);
  }


  KeyPath();

  explicit KeyPath(
      KeyPathDataPtr data);

  ~KeyPath();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = KeyPathPtr>
  KeyPathPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, KeyPath>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        KeyPath::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        KeyPath::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::KeyPath_UnserializedMessageContext<
            UserType, KeyPath::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<KeyPath::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return KeyPath::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::KeyPath_UnserializedMessageContext<
            UserType, KeyPath::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<KeyPath::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  KeyPathDataPtr data;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(KeyPath);
};


class CONTENT_EXPORT KeyRange {
 public:
  using DataView = KeyRangeDataView;
  using Data_ = internal::KeyRange_Data;

  template <typename... Args>
  static KeyRangePtr New(Args&&... args) {
    return KeyRangePtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static KeyRangePtr From(const U& u) {
    return mojo::TypeConverter<KeyRangePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, KeyRange>::Convert(*this);
  }


  KeyRange();

  KeyRange(
      const content::IndexedDBKey& lower,
      const content::IndexedDBKey& upper,
      bool lower_open,
      bool upper_open);

  ~KeyRange();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = KeyRangePtr>
  KeyRangePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, KeyRange>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        KeyRange::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        KeyRange::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::KeyRange_UnserializedMessageContext<
            UserType, KeyRange::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<KeyRange::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return KeyRange::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::KeyRange_UnserializedMessageContext<
            UserType, KeyRange::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<KeyRange::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  content::IndexedDBKey lower;
  content::IndexedDBKey upper;
  bool lower_open;
  bool upper_open;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};


class CONTENT_EXPORT IndexMetadata {
 public:
  using DataView = IndexMetadataDataView;
  using Data_ = internal::IndexMetadata_Data;

  template <typename... Args>
  static IndexMetadataPtr New(Args&&... args) {
    return IndexMetadataPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static IndexMetadataPtr From(const U& u) {
    return mojo::TypeConverter<IndexMetadataPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, IndexMetadata>::Convert(*this);
  }


  IndexMetadata();

  IndexMetadata(
      int64_t id,
      const base::string16& name,
      const content::IndexedDBKeyPath& key_path,
      bool unique,
      bool multi_entry);

  ~IndexMetadata();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = IndexMetadataPtr>
  IndexMetadataPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, IndexMetadata>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        IndexMetadata::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        IndexMetadata::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::IndexMetadata_UnserializedMessageContext<
            UserType, IndexMetadata::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<IndexMetadata::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return IndexMetadata::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::IndexMetadata_UnserializedMessageContext<
            UserType, IndexMetadata::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<IndexMetadata::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  int64_t id;
  base::string16 name;
  content::IndexedDBKeyPath key_path;
  bool unique;
  bool multi_entry;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};


class CONTENT_EXPORT ObjectStoreMetadata {
 public:
  using DataView = ObjectStoreMetadataDataView;
  using Data_ = internal::ObjectStoreMetadata_Data;

  template <typename... Args>
  static ObjectStoreMetadataPtr New(Args&&... args) {
    return ObjectStoreMetadataPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static ObjectStoreMetadataPtr From(const U& u) {
    return mojo::TypeConverter<ObjectStoreMetadataPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, ObjectStoreMetadata>::Convert(*this);
  }


  ObjectStoreMetadata();

  ObjectStoreMetadata(
      int64_t id,
      const base::string16& name,
      const content::IndexedDBKeyPath& key_path,
      bool auto_increment,
      int64_t max_index_id,
      const std::vector<content::IndexedDBIndexMetadata>& indexes);

  ~ObjectStoreMetadata();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = ObjectStoreMetadataPtr>
  ObjectStoreMetadataPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, ObjectStoreMetadata>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        ObjectStoreMetadata::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        ObjectStoreMetadata::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::ObjectStoreMetadata_UnserializedMessageContext<
            UserType, ObjectStoreMetadata::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<ObjectStoreMetadata::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return ObjectStoreMetadata::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::ObjectStoreMetadata_UnserializedMessageContext<
            UserType, ObjectStoreMetadata::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<ObjectStoreMetadata::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  int64_t id;
  base::string16 name;
  content::IndexedDBKeyPath key_path;
  bool auto_increment;
  int64_t max_index_id;
  std::vector<content::IndexedDBIndexMetadata> indexes;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};


class CONTENT_EXPORT DatabaseMetadata {
 public:
  using DataView = DatabaseMetadataDataView;
  using Data_ = internal::DatabaseMetadata_Data;

  template <typename... Args>
  static DatabaseMetadataPtr New(Args&&... args) {
    return DatabaseMetadataPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static DatabaseMetadataPtr From(const U& u) {
    return mojo::TypeConverter<DatabaseMetadataPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, DatabaseMetadata>::Convert(*this);
  }


  DatabaseMetadata();

  DatabaseMetadata(
      int64_t id,
      const base::string16& name,
      int64_t version,
      int64_t max_object_store_id,
      const std::vector<content::IndexedDBObjectStoreMetadata>& object_stores);

  ~DatabaseMetadata();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = DatabaseMetadataPtr>
  DatabaseMetadataPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, DatabaseMetadata>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        DatabaseMetadata::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        DatabaseMetadata::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::DatabaseMetadata_UnserializedMessageContext<
            UserType, DatabaseMetadata::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<DatabaseMetadata::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return DatabaseMetadata::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::DatabaseMetadata_UnserializedMessageContext<
            UserType, DatabaseMetadata::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<DatabaseMetadata::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  int64_t id;
  base::string16 name;
  int64_t version;
  int64_t max_object_store_id;
  std::vector<content::IndexedDBObjectStoreMetadata> object_stores;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};


class CONTENT_EXPORT IndexKeys {
 public:
  using DataView = IndexKeysDataView;
  using Data_ = internal::IndexKeys_Data;

  template <typename... Args>
  static IndexKeysPtr New(Args&&... args) {
    return IndexKeysPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static IndexKeysPtr From(const U& u) {
    return mojo::TypeConverter<IndexKeysPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, IndexKeys>::Convert(*this);
  }


  IndexKeys();

  IndexKeys(
      int64_t index_id,
      const std::vector<content::IndexedDBKey>& index_keys);

  ~IndexKeys();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = IndexKeysPtr>
  IndexKeysPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, IndexKeys>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        IndexKeys::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        IndexKeys::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::IndexKeys_UnserializedMessageContext<
            UserType, IndexKeys::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<IndexKeys::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return IndexKeys::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::IndexKeys_UnserializedMessageContext<
            UserType, IndexKeys::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<IndexKeys::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  int64_t index_id;
  std::vector<content::IndexedDBKey> index_keys;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};


class CONTENT_EXPORT FileInfo {
 public:
  using DataView = FileInfoDataView;
  using Data_ = internal::FileInfo_Data;

  template <typename... Args>
  static FileInfoPtr New(Args&&... args) {
    return FileInfoPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static FileInfoPtr From(const U& u) {
    return mojo::TypeConverter<FileInfoPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, FileInfo>::Convert(*this);
  }


  FileInfo();

  FileInfo(
      const base::FilePath& path,
      const base::string16& name,
      base::Time last_modified);

  ~FileInfo();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = FileInfoPtr>
  FileInfoPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, FileInfo>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        FileInfo::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        FileInfo::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::FileInfo_UnserializedMessageContext<
            UserType, FileInfo::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<FileInfo::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return FileInfo::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::FileInfo_UnserializedMessageContext<
            UserType, FileInfo::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<FileInfo::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  base::FilePath path;
  base::string16 name;
  base::Time last_modified;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};


class CONTENT_EXPORT BlobInfo {
 public:
  using DataView = BlobInfoDataView;
  using Data_ = internal::BlobInfo_Data;

  template <typename... Args>
  static BlobInfoPtr New(Args&&... args) {
    return BlobInfoPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static BlobInfoPtr From(const U& u) {
    return mojo::TypeConverter<BlobInfoPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, BlobInfo>::Convert(*this);
  }


  BlobInfo();

  BlobInfo(
      ::blink::mojom::BlobPtrInfo blob,
      const std::string& uuid,
      const base::string16& mime_type,
      int64_t size,
      FileInfoPtr file);

  ~BlobInfo();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = BlobInfoPtr>
  BlobInfoPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, BlobInfo>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        BlobInfo::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        BlobInfo::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::BlobInfo_UnserializedMessageContext<
            UserType, BlobInfo::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<BlobInfo::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return BlobInfo::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::BlobInfo_UnserializedMessageContext<
            UserType, BlobInfo::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<BlobInfo::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  ::blink::mojom::BlobPtrInfo blob;
  std::string uuid;
  base::string16 mime_type;
  int64_t size;
  FileInfoPtr file;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(BlobInfo);
};


class CONTENT_EXPORT Value {
 public:
  using DataView = ValueDataView;
  using Data_ = internal::Value_Data;

  template <typename... Args>
  static ValuePtr New(Args&&... args) {
    return ValuePtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static ValuePtr From(const U& u) {
    return mojo::TypeConverter<ValuePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, Value>::Convert(*this);
  }


  Value();

  Value(
      const std::string& bits,
      std::vector<BlobInfoPtr> blob_or_file_info);

  ~Value();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = ValuePtr>
  ValuePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, Value>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        Value::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        Value::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::Value_UnserializedMessageContext<
            UserType, Value::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<Value::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return Value::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::Value_UnserializedMessageContext<
            UserType, Value::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<Value::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  std::string bits;
  std::vector<BlobInfoPtr> blob_or_file_info;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(Value);
};


class CONTENT_EXPORT ReturnValue {
 public:
  using DataView = ReturnValueDataView;
  using Data_ = internal::ReturnValue_Data;

  template <typename... Args>
  static ReturnValuePtr New(Args&&... args) {
    return ReturnValuePtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static ReturnValuePtr From(const U& u) {
    return mojo::TypeConverter<ReturnValuePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, ReturnValue>::Convert(*this);
  }


  ReturnValue();

  ReturnValue(
      ValuePtr value,
      const content::IndexedDBKey& primary_key,
      const content::IndexedDBKeyPath& key_path);

  ~ReturnValue();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = ReturnValuePtr>
  ReturnValuePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, ReturnValue>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        ReturnValue::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        ReturnValue::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::ReturnValue_UnserializedMessageContext<
            UserType, ReturnValue::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<ReturnValue::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return ReturnValue::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::ReturnValue_UnserializedMessageContext<
            UserType, ReturnValue::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<ReturnValue::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  ValuePtr value;
  content::IndexedDBKey primary_key;
  content::IndexedDBKeyPath key_path;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(ReturnValue);
};


class CONTENT_EXPORT Observation {
 public:
  using DataView = ObservationDataView;
  using Data_ = internal::Observation_Data;

  template <typename... Args>
  static ObservationPtr New(Args&&... args) {
    return ObservationPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static ObservationPtr From(const U& u) {
    return mojo::TypeConverter<ObservationPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, Observation>::Convert(*this);
  }


  Observation();

  Observation(
      int64_t object_store_id,
      blink::WebIDBOperationType type,
      const content::IndexedDBKeyRange& key_range,
      ValuePtr value);

  ~Observation();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = ObservationPtr>
  ObservationPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, Observation>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        Observation::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        Observation::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::Observation_UnserializedMessageContext<
            UserType, Observation::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<Observation::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return Observation::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::Observation_UnserializedMessageContext<
            UserType, Observation::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<Observation::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  int64_t object_store_id;
  blink::WebIDBOperationType type;
  content::IndexedDBKeyRange key_range;
  ValuePtr value;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(Observation);
};


class CONTENT_EXPORT ObserverTransaction {
 public:
  using DataView = ObserverTransactionDataView;
  using Data_ = internal::ObserverTransaction_Data;

  template <typename... Args>
  static ObserverTransactionPtr New(Args&&... args) {
    return ObserverTransactionPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static ObserverTransactionPtr From(const U& u) {
    return mojo::TypeConverter<ObserverTransactionPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, ObserverTransaction>::Convert(*this);
  }


  ObserverTransaction();

  ObserverTransaction(
      int64_t id,
      const std::vector<int64_t>& scope);

  ~ObserverTransaction();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = ObserverTransactionPtr>
  ObserverTransactionPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, ObserverTransaction>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        ObserverTransaction::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        ObserverTransaction::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::ObserverTransaction_UnserializedMessageContext<
            UserType, ObserverTransaction::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<ObserverTransaction::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return ObserverTransaction::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::ObserverTransaction_UnserializedMessageContext<
            UserType, ObserverTransaction::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<ObserverTransaction::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  int64_t id;
  std::vector<int64_t> scope;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};


class CONTENT_EXPORT ObserverChanges {
 public:
  using DataView = ObserverChangesDataView;
  using Data_ = internal::ObserverChanges_Data;

  template <typename... Args>
  static ObserverChangesPtr New(Args&&... args) {
    return ObserverChangesPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static ObserverChangesPtr From(const U& u) {
    return mojo::TypeConverter<ObserverChangesPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, ObserverChanges>::Convert(*this);
  }


  ObserverChanges();

  ObserverChanges(
      const base::flat_map<int32_t, std::vector<int32_t>>& observation_index_map,
      base::flat_map<int32_t, ObserverTransactionPtr> transaction_map,
      std::vector<ObservationPtr> observations);

  ~ObserverChanges();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = ObserverChangesPtr>
  ObserverChangesPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, ObserverChanges>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        ObserverChanges::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        ObserverChanges::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::ObserverChanges_UnserializedMessageContext<
            UserType, ObserverChanges::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<ObserverChanges::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return ObserverChanges::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::ObserverChanges_UnserializedMessageContext<
            UserType, ObserverChanges::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<ObserverChanges::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  base::flat_map<int32_t, std::vector<int32_t>> observation_index_map;
  base::flat_map<int32_t, ObserverTransactionPtr> transaction_map;
  std::vector<ObservationPtr> observations;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(ObserverChanges);
};

template <typename UnionPtrType>
KeyDataPtr KeyData::Clone() const {
  // Use UnionPtrType to prevent the compiler from trying to compile this
  // without being asked.
  UnionPtrType rv(New());
  switch (tag_) {
    case Tag::KEY_ARRAY:
      rv->set_key_array(mojo::Clone(*data_.key_array));
      break;
    case Tag::BINARY:
      rv->set_binary(mojo::Clone(*data_.binary));
      break;
    case Tag::STRING:
      rv->set_string(mojo::Clone(*data_.string));
      break;
    case Tag::DATE:
      rv->set_date(mojo::Clone(data_.date));
      break;
    case Tag::NUMBER:
      rv->set_number(mojo::Clone(data_.number));
      break;
    case Tag::OTHER:
      rv->set_other(mojo::Clone(data_.other));
      break;
  };
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, KeyData>::value>::type*>
bool KeyData::Equals(const T& other) const {
  if (tag_ != other.which())
    return false;

  switch (tag_) {
    case Tag::KEY_ARRAY:
      return mojo::Equals(*(data_.key_array), *(other.data_.key_array));
    case Tag::BINARY:
      return mojo::Equals(*(data_.binary), *(other.data_.binary));
    case Tag::STRING:
      return mojo::Equals(*(data_.string), *(other.data_.string));
    case Tag::DATE:
      return mojo::Equals(data_.date, other.data_.date);
    case Tag::NUMBER:
      return mojo::Equals(data_.number, other.data_.number);
    case Tag::OTHER:
      return mojo::Equals(data_.other, other.data_.other);
  };

  return false;
}
template <typename UnionPtrType>
KeyPathDataPtr KeyPathData::Clone() const {
  // Use UnionPtrType to prevent the compiler from trying to compile this
  // without being asked.
  UnionPtrType rv(New());
  switch (tag_) {
    case Tag::STRING:
      rv->set_string(mojo::Clone(*data_.string));
      break;
    case Tag::STRING_ARRAY:
      rv->set_string_array(mojo::Clone(*data_.string_array));
      break;
  };
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, KeyPathData>::value>::type*>
bool KeyPathData::Equals(const T& other) const {
  if (tag_ != other.which())
    return false;

  switch (tag_) {
    case Tag::STRING:
      return mojo::Equals(*(data_.string), *(other.data_.string));
    case Tag::STRING_ARRAY:
      return mojo::Equals(*(data_.string_array), *(other.data_.string_array));
  };

  return false;
}
template <typename StructPtrType>
KeyPtr Key::Clone() const {
  return New(
      mojo::Clone(data)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, Key>::value>::type*>
bool Key::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->data, other_struct.data))
    return false;
  return true;
}
template <typename StructPtrType>
KeyPathPtr KeyPath::Clone() const {
  return New(
      mojo::Clone(data)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, KeyPath>::value>::type*>
bool KeyPath::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->data, other_struct.data))
    return false;
  return true;
}
template <typename StructPtrType>
KeyRangePtr KeyRange::Clone() const {
  return New(
      mojo::Clone(lower),
      mojo::Clone(upper),
      mojo::Clone(lower_open),
      mojo::Clone(upper_open)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, KeyRange>::value>::type*>
bool KeyRange::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->lower, other_struct.lower))
    return false;
  if (!mojo::Equals(this->upper, other_struct.upper))
    return false;
  if (!mojo::Equals(this->lower_open, other_struct.lower_open))
    return false;
  if (!mojo::Equals(this->upper_open, other_struct.upper_open))
    return false;
  return true;
}
template <typename StructPtrType>
IndexMetadataPtr IndexMetadata::Clone() const {
  return New(
      mojo::Clone(id),
      mojo::Clone(name),
      mojo::Clone(key_path),
      mojo::Clone(unique),
      mojo::Clone(multi_entry)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, IndexMetadata>::value>::type*>
bool IndexMetadata::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->id, other_struct.id))
    return false;
  if (!mojo::Equals(this->name, other_struct.name))
    return false;
  if (!mojo::Equals(this->key_path, other_struct.key_path))
    return false;
  if (!mojo::Equals(this->unique, other_struct.unique))
    return false;
  if (!mojo::Equals(this->multi_entry, other_struct.multi_entry))
    return false;
  return true;
}
template <typename StructPtrType>
ObjectStoreMetadataPtr ObjectStoreMetadata::Clone() const {
  return New(
      mojo::Clone(id),
      mojo::Clone(name),
      mojo::Clone(key_path),
      mojo::Clone(auto_increment),
      mojo::Clone(max_index_id),
      mojo::Clone(indexes)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, ObjectStoreMetadata>::value>::type*>
bool ObjectStoreMetadata::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->id, other_struct.id))
    return false;
  if (!mojo::Equals(this->name, other_struct.name))
    return false;
  if (!mojo::Equals(this->key_path, other_struct.key_path))
    return false;
  if (!mojo::Equals(this->auto_increment, other_struct.auto_increment))
    return false;
  if (!mojo::Equals(this->max_index_id, other_struct.max_index_id))
    return false;
  if (!mojo::Equals(this->indexes, other_struct.indexes))
    return false;
  return true;
}
template <typename StructPtrType>
DatabaseMetadataPtr DatabaseMetadata::Clone() const {
  return New(
      mojo::Clone(id),
      mojo::Clone(name),
      mojo::Clone(version),
      mojo::Clone(max_object_store_id),
      mojo::Clone(object_stores)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, DatabaseMetadata>::value>::type*>
bool DatabaseMetadata::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->id, other_struct.id))
    return false;
  if (!mojo::Equals(this->name, other_struct.name))
    return false;
  if (!mojo::Equals(this->version, other_struct.version))
    return false;
  if (!mojo::Equals(this->max_object_store_id, other_struct.max_object_store_id))
    return false;
  if (!mojo::Equals(this->object_stores, other_struct.object_stores))
    return false;
  return true;
}
template <typename StructPtrType>
IndexKeysPtr IndexKeys::Clone() const {
  return New(
      mojo::Clone(index_id),
      mojo::Clone(index_keys)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, IndexKeys>::value>::type*>
bool IndexKeys::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->index_id, other_struct.index_id))
    return false;
  if (!mojo::Equals(this->index_keys, other_struct.index_keys))
    return false;
  return true;
}
template <typename StructPtrType>
FileInfoPtr FileInfo::Clone() const {
  return New(
      mojo::Clone(path),
      mojo::Clone(name),
      mojo::Clone(last_modified)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, FileInfo>::value>::type*>
bool FileInfo::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->path, other_struct.path))
    return false;
  if (!mojo::Equals(this->name, other_struct.name))
    return false;
  if (!mojo::Equals(this->last_modified, other_struct.last_modified))
    return false;
  return true;
}
template <typename StructPtrType>
BlobInfoPtr BlobInfo::Clone() const {
  return New(
      mojo::Clone(blob),
      mojo::Clone(uuid),
      mojo::Clone(mime_type),
      mojo::Clone(size),
      mojo::Clone(file)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, BlobInfo>::value>::type*>
bool BlobInfo::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->blob, other_struct.blob))
    return false;
  if (!mojo::Equals(this->uuid, other_struct.uuid))
    return false;
  if (!mojo::Equals(this->mime_type, other_struct.mime_type))
    return false;
  if (!mojo::Equals(this->size, other_struct.size))
    return false;
  if (!mojo::Equals(this->file, other_struct.file))
    return false;
  return true;
}
template <typename StructPtrType>
ValuePtr Value::Clone() const {
  return New(
      mojo::Clone(bits),
      mojo::Clone(blob_or_file_info)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, Value>::value>::type*>
bool Value::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->bits, other_struct.bits))
    return false;
  if (!mojo::Equals(this->blob_or_file_info, other_struct.blob_or_file_info))
    return false;
  return true;
}
template <typename StructPtrType>
ReturnValuePtr ReturnValue::Clone() const {
  return New(
      mojo::Clone(value),
      mojo::Clone(primary_key),
      mojo::Clone(key_path)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, ReturnValue>::value>::type*>
bool ReturnValue::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->value, other_struct.value))
    return false;
  if (!mojo::Equals(this->primary_key, other_struct.primary_key))
    return false;
  if (!mojo::Equals(this->key_path, other_struct.key_path))
    return false;
  return true;
}
template <typename StructPtrType>
ObservationPtr Observation::Clone() const {
  return New(
      mojo::Clone(object_store_id),
      mojo::Clone(type),
      mojo::Clone(key_range),
      mojo::Clone(value)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, Observation>::value>::type*>
bool Observation::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->object_store_id, other_struct.object_store_id))
    return false;
  if (!mojo::Equals(this->type, other_struct.type))
    return false;
  if (!mojo::Equals(this->key_range, other_struct.key_range))
    return false;
  if (!mojo::Equals(this->value, other_struct.value))
    return false;
  return true;
}
template <typename StructPtrType>
ObserverTransactionPtr ObserverTransaction::Clone() const {
  return New(
      mojo::Clone(id),
      mojo::Clone(scope)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, ObserverTransaction>::value>::type*>
bool ObserverTransaction::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->id, other_struct.id))
    return false;
  if (!mojo::Equals(this->scope, other_struct.scope))
    return false;
  return true;
}
template <typename StructPtrType>
ObserverChangesPtr ObserverChanges::Clone() const {
  return New(
      mojo::Clone(observation_index_map),
      mojo::Clone(transaction_map),
      mojo::Clone(observations)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, ObserverChanges>::value>::type*>
bool ObserverChanges::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->observation_index_map, other_struct.observation_index_map))
    return false;
  if (!mojo::Equals(this->transaction_map, other_struct.transaction_map))
    return false;
  if (!mojo::Equals(this->observations, other_struct.observations))
    return false;
  return true;
}


}  // namespace mojom
}  // namespace indexed_db

namespace mojo {


template <>
struct CONTENT_EXPORT StructTraits<::indexed_db::mojom::Key::DataView,
                                         ::indexed_db::mojom::KeyPtr> {
  static bool IsNull(const ::indexed_db::mojom::KeyPtr& input) { return !input; }
  static void SetToNull(::indexed_db::mojom::KeyPtr* output) { output->reset(); }

  static const decltype(::indexed_db::mojom::Key::data)& data(
      const ::indexed_db::mojom::KeyPtr& input) {
    return input->data;
  }

  static bool Read(::indexed_db::mojom::Key::DataView input, ::indexed_db::mojom::KeyPtr* output);
};


template <>
struct CONTENT_EXPORT StructTraits<::indexed_db::mojom::KeyPath::DataView,
                                         ::indexed_db::mojom::KeyPathPtr> {
  static bool IsNull(const ::indexed_db::mojom::KeyPathPtr& input) { return !input; }
  static void SetToNull(::indexed_db::mojom::KeyPathPtr* output) { output->reset(); }

  static const decltype(::indexed_db::mojom::KeyPath::data)& data(
      const ::indexed_db::mojom::KeyPathPtr& input) {
    return input->data;
  }

  static bool Read(::indexed_db::mojom::KeyPath::DataView input, ::indexed_db::mojom::KeyPathPtr* output);
};


template <>
struct CONTENT_EXPORT StructTraits<::indexed_db::mojom::KeyRange::DataView,
                                         ::indexed_db::mojom::KeyRangePtr> {
  static bool IsNull(const ::indexed_db::mojom::KeyRangePtr& input) { return !input; }
  static void SetToNull(::indexed_db::mojom::KeyRangePtr* output) { output->reset(); }

  static const decltype(::indexed_db::mojom::KeyRange::lower)& lower(
      const ::indexed_db::mojom::KeyRangePtr& input) {
    return input->lower;
  }

  static const decltype(::indexed_db::mojom::KeyRange::upper)& upper(
      const ::indexed_db::mojom::KeyRangePtr& input) {
    return input->upper;
  }

  static decltype(::indexed_db::mojom::KeyRange::lower_open) lower_open(
      const ::indexed_db::mojom::KeyRangePtr& input) {
    return input->lower_open;
  }

  static decltype(::indexed_db::mojom::KeyRange::upper_open) upper_open(
      const ::indexed_db::mojom::KeyRangePtr& input) {
    return input->upper_open;
  }

  static bool Read(::indexed_db::mojom::KeyRange::DataView input, ::indexed_db::mojom::KeyRangePtr* output);
};


template <>
struct CONTENT_EXPORT StructTraits<::indexed_db::mojom::IndexMetadata::DataView,
                                         ::indexed_db::mojom::IndexMetadataPtr> {
  static bool IsNull(const ::indexed_db::mojom::IndexMetadataPtr& input) { return !input; }
  static void SetToNull(::indexed_db::mojom::IndexMetadataPtr* output) { output->reset(); }

  static decltype(::indexed_db::mojom::IndexMetadata::id) id(
      const ::indexed_db::mojom::IndexMetadataPtr& input) {
    return input->id;
  }

  static const decltype(::indexed_db::mojom::IndexMetadata::name)& name(
      const ::indexed_db::mojom::IndexMetadataPtr& input) {
    return input->name;
  }

  static const decltype(::indexed_db::mojom::IndexMetadata::key_path)& key_path(
      const ::indexed_db::mojom::IndexMetadataPtr& input) {
    return input->key_path;
  }

  static decltype(::indexed_db::mojom::IndexMetadata::unique) unique(
      const ::indexed_db::mojom::IndexMetadataPtr& input) {
    return input->unique;
  }

  static decltype(::indexed_db::mojom::IndexMetadata::multi_entry) multi_entry(
      const ::indexed_db::mojom::IndexMetadataPtr& input) {
    return input->multi_entry;
  }

  static bool Read(::indexed_db::mojom::IndexMetadata::DataView input, ::indexed_db::mojom::IndexMetadataPtr* output);
};


template <>
struct CONTENT_EXPORT StructTraits<::indexed_db::mojom::ObjectStoreMetadata::DataView,
                                         ::indexed_db::mojom::ObjectStoreMetadataPtr> {
  static bool IsNull(const ::indexed_db::mojom::ObjectStoreMetadataPtr& input) { return !input; }
  static void SetToNull(::indexed_db::mojom::ObjectStoreMetadataPtr* output) { output->reset(); }

  static decltype(::indexed_db::mojom::ObjectStoreMetadata::id) id(
      const ::indexed_db::mojom::ObjectStoreMetadataPtr& input) {
    return input->id;
  }

  static const decltype(::indexed_db::mojom::ObjectStoreMetadata::name)& name(
      const ::indexed_db::mojom::ObjectStoreMetadataPtr& input) {
    return input->name;
  }

  static const decltype(::indexed_db::mojom::ObjectStoreMetadata::key_path)& key_path(
      const ::indexed_db::mojom::ObjectStoreMetadataPtr& input) {
    return input->key_path;
  }

  static decltype(::indexed_db::mojom::ObjectStoreMetadata::auto_increment) auto_increment(
      const ::indexed_db::mojom::ObjectStoreMetadataPtr& input) {
    return input->auto_increment;
  }

  static decltype(::indexed_db::mojom::ObjectStoreMetadata::max_index_id) max_index_id(
      const ::indexed_db::mojom::ObjectStoreMetadataPtr& input) {
    return input->max_index_id;
  }

  static const decltype(::indexed_db::mojom::ObjectStoreMetadata::indexes)& indexes(
      const ::indexed_db::mojom::ObjectStoreMetadataPtr& input) {
    return input->indexes;
  }

  static bool Read(::indexed_db::mojom::ObjectStoreMetadata::DataView input, ::indexed_db::mojom::ObjectStoreMetadataPtr* output);
};


template <>
struct CONTENT_EXPORT StructTraits<::indexed_db::mojom::DatabaseMetadata::DataView,
                                         ::indexed_db::mojom::DatabaseMetadataPtr> {
  static bool IsNull(const ::indexed_db::mojom::DatabaseMetadataPtr& input) { return !input; }
  static void SetToNull(::indexed_db::mojom::DatabaseMetadataPtr* output) { output->reset(); }

  static decltype(::indexed_db::mojom::DatabaseMetadata::id) id(
      const ::indexed_db::mojom::DatabaseMetadataPtr& input) {
    return input->id;
  }

  static const decltype(::indexed_db::mojom::DatabaseMetadata::name)& name(
      const ::indexed_db::mojom::DatabaseMetadataPtr& input) {
    return input->name;
  }

  static decltype(::indexed_db::mojom::DatabaseMetadata::version) version(
      const ::indexed_db::mojom::DatabaseMetadataPtr& input) {
    return input->version;
  }

  static decltype(::indexed_db::mojom::DatabaseMetadata::max_object_store_id) max_object_store_id(
      const ::indexed_db::mojom::DatabaseMetadataPtr& input) {
    return input->max_object_store_id;
  }

  static const decltype(::indexed_db::mojom::DatabaseMetadata::object_stores)& object_stores(
      const ::indexed_db::mojom::DatabaseMetadataPtr& input) {
    return input->object_stores;
  }

  static bool Read(::indexed_db::mojom::DatabaseMetadata::DataView input, ::indexed_db::mojom::DatabaseMetadataPtr* output);
};


template <>
struct CONTENT_EXPORT StructTraits<::indexed_db::mojom::IndexKeys::DataView,
                                         ::indexed_db::mojom::IndexKeysPtr> {
  static bool IsNull(const ::indexed_db::mojom::IndexKeysPtr& input) { return !input; }
  static void SetToNull(::indexed_db::mojom::IndexKeysPtr* output) { output->reset(); }

  static decltype(::indexed_db::mojom::IndexKeys::index_id) index_id(
      const ::indexed_db::mojom::IndexKeysPtr& input) {
    return input->index_id;
  }

  static const decltype(::indexed_db::mojom::IndexKeys::index_keys)& index_keys(
      const ::indexed_db::mojom::IndexKeysPtr& input) {
    return input->index_keys;
  }

  static bool Read(::indexed_db::mojom::IndexKeys::DataView input, ::indexed_db::mojom::IndexKeysPtr* output);
};


template <>
struct CONTENT_EXPORT StructTraits<::indexed_db::mojom::FileInfo::DataView,
                                         ::indexed_db::mojom::FileInfoPtr> {
  static bool IsNull(const ::indexed_db::mojom::FileInfoPtr& input) { return !input; }
  static void SetToNull(::indexed_db::mojom::FileInfoPtr* output) { output->reset(); }

  static const decltype(::indexed_db::mojom::FileInfo::path)& path(
      const ::indexed_db::mojom::FileInfoPtr& input) {
    return input->path;
  }

  static const decltype(::indexed_db::mojom::FileInfo::name)& name(
      const ::indexed_db::mojom::FileInfoPtr& input) {
    return input->name;
  }

  static const decltype(::indexed_db::mojom::FileInfo::last_modified)& last_modified(
      const ::indexed_db::mojom::FileInfoPtr& input) {
    return input->last_modified;
  }

  static bool Read(::indexed_db::mojom::FileInfo::DataView input, ::indexed_db::mojom::FileInfoPtr* output);
};


template <>
struct CONTENT_EXPORT StructTraits<::indexed_db::mojom::BlobInfo::DataView,
                                         ::indexed_db::mojom::BlobInfoPtr> {
  static bool IsNull(const ::indexed_db::mojom::BlobInfoPtr& input) { return !input; }
  static void SetToNull(::indexed_db::mojom::BlobInfoPtr* output) { output->reset(); }

  static  decltype(::indexed_db::mojom::BlobInfo::blob)& blob(
       ::indexed_db::mojom::BlobInfoPtr& input) {
    return input->blob;
  }

  static const decltype(::indexed_db::mojom::BlobInfo::uuid)& uuid(
      const ::indexed_db::mojom::BlobInfoPtr& input) {
    return input->uuid;
  }

  static const decltype(::indexed_db::mojom::BlobInfo::mime_type)& mime_type(
      const ::indexed_db::mojom::BlobInfoPtr& input) {
    return input->mime_type;
  }

  static decltype(::indexed_db::mojom::BlobInfo::size) size(
      const ::indexed_db::mojom::BlobInfoPtr& input) {
    return input->size;
  }

  static const decltype(::indexed_db::mojom::BlobInfo::file)& file(
      const ::indexed_db::mojom::BlobInfoPtr& input) {
    return input->file;
  }

  static bool Read(::indexed_db::mojom::BlobInfo::DataView input, ::indexed_db::mojom::BlobInfoPtr* output);
};


template <>
struct CONTENT_EXPORT StructTraits<::indexed_db::mojom::Value::DataView,
                                         ::indexed_db::mojom::ValuePtr> {
  static bool IsNull(const ::indexed_db::mojom::ValuePtr& input) { return !input; }
  static void SetToNull(::indexed_db::mojom::ValuePtr* output) { output->reset(); }

  static const decltype(::indexed_db::mojom::Value::bits)& bits(
      const ::indexed_db::mojom::ValuePtr& input) {
    return input->bits;
  }

  static  decltype(::indexed_db::mojom::Value::blob_or_file_info)& blob_or_file_info(
       ::indexed_db::mojom::ValuePtr& input) {
    return input->blob_or_file_info;
  }

  static bool Read(::indexed_db::mojom::Value::DataView input, ::indexed_db::mojom::ValuePtr* output);
};


template <>
struct CONTENT_EXPORT StructTraits<::indexed_db::mojom::ReturnValue::DataView,
                                         ::indexed_db::mojom::ReturnValuePtr> {
  static bool IsNull(const ::indexed_db::mojom::ReturnValuePtr& input) { return !input; }
  static void SetToNull(::indexed_db::mojom::ReturnValuePtr* output) { output->reset(); }

  static  decltype(::indexed_db::mojom::ReturnValue::value)& value(
       ::indexed_db::mojom::ReturnValuePtr& input) {
    return input->value;
  }

  static const decltype(::indexed_db::mojom::ReturnValue::primary_key)& primary_key(
      const ::indexed_db::mojom::ReturnValuePtr& input) {
    return input->primary_key;
  }

  static const decltype(::indexed_db::mojom::ReturnValue::key_path)& key_path(
      const ::indexed_db::mojom::ReturnValuePtr& input) {
    return input->key_path;
  }

  static bool Read(::indexed_db::mojom::ReturnValue::DataView input, ::indexed_db::mojom::ReturnValuePtr* output);
};


template <>
struct CONTENT_EXPORT StructTraits<::indexed_db::mojom::Observation::DataView,
                                         ::indexed_db::mojom::ObservationPtr> {
  static bool IsNull(const ::indexed_db::mojom::ObservationPtr& input) { return !input; }
  static void SetToNull(::indexed_db::mojom::ObservationPtr* output) { output->reset(); }

  static decltype(::indexed_db::mojom::Observation::object_store_id) object_store_id(
      const ::indexed_db::mojom::ObservationPtr& input) {
    return input->object_store_id;
  }

  static decltype(::indexed_db::mojom::Observation::type) type(
      const ::indexed_db::mojom::ObservationPtr& input) {
    return input->type;
  }

  static const decltype(::indexed_db::mojom::Observation::key_range)& key_range(
      const ::indexed_db::mojom::ObservationPtr& input) {
    return input->key_range;
  }

  static  decltype(::indexed_db::mojom::Observation::value)& value(
       ::indexed_db::mojom::ObservationPtr& input) {
    return input->value;
  }

  static bool Read(::indexed_db::mojom::Observation::DataView input, ::indexed_db::mojom::ObservationPtr* output);
};


template <>
struct CONTENT_EXPORT StructTraits<::indexed_db::mojom::ObserverTransaction::DataView,
                                         ::indexed_db::mojom::ObserverTransactionPtr> {
  static bool IsNull(const ::indexed_db::mojom::ObserverTransactionPtr& input) { return !input; }
  static void SetToNull(::indexed_db::mojom::ObserverTransactionPtr* output) { output->reset(); }

  static decltype(::indexed_db::mojom::ObserverTransaction::id) id(
      const ::indexed_db::mojom::ObserverTransactionPtr& input) {
    return input->id;
  }

  static const decltype(::indexed_db::mojom::ObserverTransaction::scope)& scope(
      const ::indexed_db::mojom::ObserverTransactionPtr& input) {
    return input->scope;
  }

  static bool Read(::indexed_db::mojom::ObserverTransaction::DataView input, ::indexed_db::mojom::ObserverTransactionPtr* output);
};


template <>
struct CONTENT_EXPORT StructTraits<::indexed_db::mojom::ObserverChanges::DataView,
                                         ::indexed_db::mojom::ObserverChangesPtr> {
  static bool IsNull(const ::indexed_db::mojom::ObserverChangesPtr& input) { return !input; }
  static void SetToNull(::indexed_db::mojom::ObserverChangesPtr* output) { output->reset(); }

  static const decltype(::indexed_db::mojom::ObserverChanges::observation_index_map)& observation_index_map(
      const ::indexed_db::mojom::ObserverChangesPtr& input) {
    return input->observation_index_map;
  }

  static const decltype(::indexed_db::mojom::ObserverChanges::transaction_map)& transaction_map(
      const ::indexed_db::mojom::ObserverChangesPtr& input) {
    return input->transaction_map;
  }

  static  decltype(::indexed_db::mojom::ObserverChanges::observations)& observations(
       ::indexed_db::mojom::ObserverChangesPtr& input) {
    return input->observations;
  }

  static bool Read(::indexed_db::mojom::ObserverChanges::DataView input, ::indexed_db::mojom::ObserverChangesPtr* output);
};


template <>
struct CONTENT_EXPORT UnionTraits<::indexed_db::mojom::KeyData::DataView,
                                        ::indexed_db::mojom::KeyDataPtr> {
  static bool IsNull(const ::indexed_db::mojom::KeyDataPtr& input) { return !input; }
  static void SetToNull(::indexed_db::mojom::KeyDataPtr* output) { output->reset(); }

  static ::indexed_db::mojom::KeyData::Tag GetTag(const ::indexed_db::mojom::KeyDataPtr& input) {
    return input->which();
  }

  static const std::vector<content::IndexedDBKey>& key_array(const ::indexed_db::mojom::KeyDataPtr& input) {
    return input->get_key_array();
  }

  static const std::vector<uint8_t>& binary(const ::indexed_db::mojom::KeyDataPtr& input) {
    return input->get_binary();
  }

  static const base::string16& string(const ::indexed_db::mojom::KeyDataPtr& input) {
    return input->get_string();
  }

  static  double date(const ::indexed_db::mojom::KeyDataPtr& input) {
    return input->get_date();
  }

  static  double number(const ::indexed_db::mojom::KeyDataPtr& input) {
    return input->get_number();
  }

  static  ::indexed_db::mojom::DatalessKeyType other(const ::indexed_db::mojom::KeyDataPtr& input) {
    return input->get_other();
  }

  static bool Read(::indexed_db::mojom::KeyData::DataView input, ::indexed_db::mojom::KeyDataPtr* output);
};


template <>
struct CONTENT_EXPORT UnionTraits<::indexed_db::mojom::KeyPathData::DataView,
                                        ::indexed_db::mojom::KeyPathDataPtr> {
  static bool IsNull(const ::indexed_db::mojom::KeyPathDataPtr& input) { return !input; }
  static void SetToNull(::indexed_db::mojom::KeyPathDataPtr* output) { output->reset(); }

  static ::indexed_db::mojom::KeyPathData::Tag GetTag(const ::indexed_db::mojom::KeyPathDataPtr& input) {
    return input->which();
  }

  static const base::string16& string(const ::indexed_db::mojom::KeyPathDataPtr& input) {
    return input->get_string();
  }

  static const std::vector<base::string16>& string_array(const ::indexed_db::mojom::KeyPathDataPtr& input) {
    return input->get_string_array();
  }

  static bool Read(::indexed_db::mojom::KeyPathData::DataView input, ::indexed_db::mojom::KeyPathDataPtr* output);
};

}  // namespace mojo

#endif  // CONTENT_COMMON_INDEXED_DB_INDEXED_DB_MOJOM_H_