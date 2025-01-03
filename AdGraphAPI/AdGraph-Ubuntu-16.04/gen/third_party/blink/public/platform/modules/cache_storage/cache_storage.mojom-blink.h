// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_CACHE_STORAGE_CACHE_STORAGE_MOJOM_BLINK_H_
#define THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_CACHE_STORAGE_CACHE_STORAGE_MOJOM_BLINK_H_

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
#include "third_party/blink/public/platform/modules/cache_storage/cache_storage.mojom-shared.h"
#include "third_party/blink/public/platform/modules/fetch/fetch_api_request.mojom-blink.h"
#include "third_party/blink/public/platform/modules/fetch/fetch_api_response.mojom-blink.h"
#include "mojo/public/mojom/base/string16.mojom-blink.h"

#include "mojo/public/cpp/bindings/lib/wtf_clone_equals_util.h"
#include "mojo/public/cpp/bindings/lib/wtf_hash_util.h"
#include "third_party/blink/renderer/platform/mojo/revocable_interface_ptr.h"
#include "third_party/blink/renderer/platform/wtf/hash_functions.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

#include "mojo/public/cpp/bindings/associated_interface_ptr.h"
#include "mojo/public/cpp/bindings/associated_interface_ptr_info.h"
#include "mojo/public/cpp/bindings/associated_interface_request.h"
#include "mojo/public/cpp/bindings/interface_ptr.h"
#include "mojo/public/cpp/bindings/interface_request.h"
#include "mojo/public/cpp/bindings/lib/control_message_handler.h"
#include "mojo/public/cpp/bindings/raw_ptr_impl_ref_traits.h"
#include "mojo/public/cpp/bindings/thread_safe_interface_ptr.h"
#include "third_party/blink/renderer/platform/mojo/revocable_interface_ptr.h"


#include "mojo/public/cpp/bindings/lib/native_enum_serialization.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "third_party/blink/public/platform/web_common.h"


namespace WTF {
struct blink_mojom_internal_CacheStorageError_DataHashFn {
  static unsigned GetHash(const ::blink::mojom::CacheStorageError& value) {
    using utype = std::underlying_type<::blink::mojom::CacheStorageError>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::blink::mojom::CacheStorageError& left, const ::blink::mojom::CacheStorageError& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct DefaultHash<::blink::mojom::CacheStorageError> {
  using Hash = blink_mojom_internal_CacheStorageError_DataHashFn;
};

template <>
struct HashTraits<::blink::mojom::CacheStorageError>
    : public GenericHashTraits<::blink::mojom::CacheStorageError> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::blink::mojom::CacheStorageError& value) {
    return value == static_cast<::blink::mojom::CacheStorageError>(-1000000);
  }
  static void ConstructDeletedValue(::blink::mojom::CacheStorageError& slot, bool) {
    slot = static_cast<::blink::mojom::CacheStorageError>(-1000001);
  }
  static bool IsDeletedValue(const ::blink::mojom::CacheStorageError& value) {
    return value == static_cast<::blink::mojom::CacheStorageError>(-1000001);
  }
};
}  // namespace WTF


namespace WTF {
struct blink_mojom_internal_OperationType_DataHashFn {
  static unsigned GetHash(const ::blink::mojom::OperationType& value) {
    using utype = std::underlying_type<::blink::mojom::OperationType>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::blink::mojom::OperationType& left, const ::blink::mojom::OperationType& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct DefaultHash<::blink::mojom::OperationType> {
  using Hash = blink_mojom_internal_OperationType_DataHashFn;
};

template <>
struct HashTraits<::blink::mojom::OperationType>
    : public GenericHashTraits<::blink::mojom::OperationType> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::blink::mojom::OperationType& value) {
    return value == static_cast<::blink::mojom::OperationType>(-1000000);
  }
  static void ConstructDeletedValue(::blink::mojom::OperationType& slot, bool) {
    slot = static_cast<::blink::mojom::OperationType>(-1000001);
  }
  static bool IsDeletedValue(const ::blink::mojom::OperationType& value) {
    return value == static_cast<::blink::mojom::OperationType>(-1000001);
  }
};
}  // namespace WTF


namespace blink {
namespace mojom {
namespace blink {
using CacheStorageError = CacheStorageError;  // Alias for definition in the parent namespace.
using OperationType = OperationType;  // Alias for definition in the parent namespace.
class CacheStorageCache;
using CacheStorageCachePtr = mojo::InterfacePtr<CacheStorageCache>;
using RevocableCacheStorageCachePtr = ::blink::RevocableInterfacePtr<CacheStorageCache>;
using CacheStorageCachePtrInfo = mojo::InterfacePtrInfo<CacheStorageCache>;
using ThreadSafeCacheStorageCachePtr =
    mojo::ThreadSafeInterfacePtr<CacheStorageCache>;
using CacheStorageCacheRequest = mojo::InterfaceRequest<CacheStorageCache>;
using CacheStorageCacheAssociatedPtr =
    mojo::AssociatedInterfacePtr<CacheStorageCache>;
using ThreadSafeCacheStorageCacheAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<CacheStorageCache>;
using CacheStorageCacheAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<CacheStorageCache>;
using CacheStorageCacheAssociatedRequest =
    mojo::AssociatedInterfaceRequest<CacheStorageCache>;

class CacheStorage;
using CacheStoragePtr = mojo::InterfacePtr<CacheStorage>;
using RevocableCacheStoragePtr = ::blink::RevocableInterfacePtr<CacheStorage>;
using CacheStoragePtrInfo = mojo::InterfacePtrInfo<CacheStorage>;
using ThreadSafeCacheStoragePtr =
    mojo::ThreadSafeInterfacePtr<CacheStorage>;
using CacheStorageRequest = mojo::InterfaceRequest<CacheStorage>;
using CacheStorageAssociatedPtr =
    mojo::AssociatedInterfacePtr<CacheStorage>;
using ThreadSafeCacheStorageAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<CacheStorage>;
using CacheStorageAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<CacheStorage>;
using CacheStorageAssociatedRequest =
    mojo::AssociatedInterfaceRequest<CacheStorage>;

class QueryParams;
using QueryParamsPtr = mojo::StructPtr<QueryParams>;

class BatchOperation;
using BatchOperationPtr = mojo::StructPtr<BatchOperation>;

class OpenResult;

typedef mojo::StructPtr<OpenResult> OpenResultPtr;

class MatchResult;

typedef mojo::StructPtr<MatchResult> MatchResultPtr;

class MatchAllResult;

typedef mojo::StructPtr<MatchAllResult> MatchAllResultPtr;

class CacheKeysResult;

typedef mojo::StructPtr<CacheKeysResult> CacheKeysResultPtr;


class CacheStorageCacheProxy;

template <typename ImplRefTraits>
class CacheStorageCacheStub;

class CacheStorageCacheRequestValidator;
class CacheStorageCacheResponseValidator;

class BLINK_PLATFORM_EXPORT CacheStorageCache
    : public CacheStorageCacheInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = CacheStorageCacheProxy;

  template <typename ImplRefTraits>
  using Stub_ = CacheStorageCacheStub<ImplRefTraits>;

  using RequestValidator_ = CacheStorageCacheRequestValidator;
  using ResponseValidator_ = CacheStorageCacheResponseValidator;
  enum MethodMinVersions : uint32_t {
    kMatchMinVersion = 0,
    kMatchAllMinVersion = 0,
    kKeysMinVersion = 0,
    kBatchMinVersion = 0,
  };
  virtual ~CacheStorageCache() {}


  using MatchCallback = base::OnceCallback<void(MatchResultPtr)>;
  virtual void Match(const ::blink::WebServiceWorkerRequest& request, QueryParamsPtr query_params, MatchCallback callback) = 0;


  using MatchAllCallback = base::OnceCallback<void(MatchAllResultPtr)>;
  virtual void MatchAll(const base::Optional<::blink::WebServiceWorkerRequest>& request, QueryParamsPtr query_params, MatchAllCallback callback) = 0;


  using KeysCallback = base::OnceCallback<void(CacheKeysResultPtr)>;
  virtual void Keys(const base::Optional<::blink::WebServiceWorkerRequest>& request, QueryParamsPtr query_params, KeysCallback callback) = 0;


  using BatchCallback = base::OnceCallback<void(CacheStorageError)>;
  virtual void Batch(WTF::Vector<BatchOperationPtr> batch_operations, BatchCallback callback) = 0;
};
class BLINK_PLATFORM_EXPORT CacheStorageCacheInterceptorForTesting : public CacheStorageCache {
  virtual CacheStorageCache* GetForwardingInterface() = 0;
  void Match(const ::blink::WebServiceWorkerRequest& request, QueryParamsPtr query_params, MatchCallback callback) override;
  void MatchAll(const base::Optional<::blink::WebServiceWorkerRequest>& request, QueryParamsPtr query_params, MatchAllCallback callback) override;
  void Keys(const base::Optional<::blink::WebServiceWorkerRequest>& request, QueryParamsPtr query_params, KeysCallback callback) override;
  void Batch(WTF::Vector<BatchOperationPtr> batch_operations, BatchCallback callback) override;
};
class BLINK_PLATFORM_EXPORT CacheStorageCacheAsyncWaiter {
 public:
  explicit CacheStorageCacheAsyncWaiter(CacheStorageCache* proxy);
  ~CacheStorageCacheAsyncWaiter();
  void Match(
      const ::blink::WebServiceWorkerRequest& request, QueryParamsPtr query_params, MatchResultPtr* out_result);
  void MatchAll(
      const base::Optional<::blink::WebServiceWorkerRequest>& request, QueryParamsPtr query_params, MatchAllResultPtr* out_result);
  void Keys(
      const base::Optional<::blink::WebServiceWorkerRequest>& request, QueryParamsPtr query_params, CacheKeysResultPtr* out_result);
  void Batch(
      WTF::Vector<BatchOperationPtr> batch_operations, CacheStorageError* out_result);

 private:
  CacheStorageCache* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(CacheStorageCacheAsyncWaiter);
};

class CacheStorageProxy;

template <typename ImplRefTraits>
class CacheStorageStub;

class CacheStorageRequestValidator;
class CacheStorageResponseValidator;

class BLINK_PLATFORM_EXPORT CacheStorage
    : public CacheStorageInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = true;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = CacheStorageProxy;

  template <typename ImplRefTraits>
  using Stub_ = CacheStorageStub<ImplRefTraits>;

  using RequestValidator_ = CacheStorageRequestValidator;
  using ResponseValidator_ = CacheStorageResponseValidator;
  enum MethodMinVersions : uint32_t {
    kHasMinVersion = 0,
    kDeleteMinVersion = 0,
    kKeysMinVersion = 0,
    kMatchMinVersion = 0,
    kOpenMinVersion = 0,
  };
  virtual ~CacheStorage() {}


  using HasCallback = base::OnceCallback<void(CacheStorageError)>;
  virtual void Has(const WTF::String& cache_name, HasCallback callback) = 0;


  using DeleteCallback = base::OnceCallback<void(CacheStorageError)>;
  virtual void Delete(const WTF::String& cache_name, DeleteCallback callback) = 0;


  using KeysCallback = base::OnceCallback<void(const WTF::Vector<WTF::String>&)>;
  virtual void Keys(KeysCallback callback) = 0;


  using MatchCallback = base::OnceCallback<void(MatchResultPtr)>;
  virtual void Match(const ::blink::WebServiceWorkerRequest& request, QueryParamsPtr match_params, MatchCallback callback) = 0;


  using OpenCallback = base::OnceCallback<void(OpenResultPtr)>;
  virtual void Open(const WTF::String& cache_name, OpenCallback callback) = 0;
};
class BLINK_PLATFORM_EXPORT CacheStorageInterceptorForTesting : public CacheStorage {
  virtual CacheStorage* GetForwardingInterface() = 0;
  void Has(const WTF::String& cache_name, HasCallback callback) override;
  void Delete(const WTF::String& cache_name, DeleteCallback callback) override;
  void Keys(KeysCallback callback) override;
  void Match(const ::blink::WebServiceWorkerRequest& request, QueryParamsPtr match_params, MatchCallback callback) override;
  void Open(const WTF::String& cache_name, OpenCallback callback) override;
};
class BLINK_PLATFORM_EXPORT CacheStorageAsyncWaiter {
 public:
  explicit CacheStorageAsyncWaiter(CacheStorage* proxy);
  ~CacheStorageAsyncWaiter();
  void Has(
      const WTF::String& cache_name, CacheStorageError* out_result);
  void Delete(
      const WTF::String& cache_name, CacheStorageError* out_result);
  void Keys(
      WTF::Vector<WTF::String>* out_keys);
  void Match(
      const ::blink::WebServiceWorkerRequest& request, QueryParamsPtr match_params, MatchResultPtr* out_result);
  void Open(
      const WTF::String& cache_name, OpenResultPtr* out_result);

 private:
  CacheStorage* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(CacheStorageAsyncWaiter);
};

class BLINK_PLATFORM_EXPORT CacheStorageCacheProxy
    : public CacheStorageCache {
 public:
  explicit CacheStorageCacheProxy(mojo::MessageReceiverWithResponder* receiver);
  void Match(const ::blink::WebServiceWorkerRequest& request, QueryParamsPtr query_params, MatchCallback callback) final;
  void MatchAll(const base::Optional<::blink::WebServiceWorkerRequest>& request, QueryParamsPtr query_params, MatchAllCallback callback) final;
  void Keys(const base::Optional<::blink::WebServiceWorkerRequest>& request, QueryParamsPtr query_params, KeysCallback callback) final;
  void Batch(WTF::Vector<BatchOperationPtr> batch_operations, BatchCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class BLINK_PLATFORM_EXPORT CacheStorageProxy
    : public CacheStorage {
 public:
  explicit CacheStorageProxy(mojo::MessageReceiverWithResponder* receiver);
  void Has(const WTF::String& cache_name, HasCallback callback) final;
  void Delete(const WTF::String& cache_name, DeleteCallback callback) final;
  void Keys(KeysCallback callback) final;
  void Match(const ::blink::WebServiceWorkerRequest& request, QueryParamsPtr match_params, MatchCallback callback) final;
  void Open(const WTF::String& cache_name, OpenCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class BLINK_PLATFORM_EXPORT CacheStorageCacheStubDispatch {
 public:
  static bool Accept(CacheStorageCache* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      CacheStorageCache* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<CacheStorageCache>>
class CacheStorageCacheStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  CacheStorageCacheStub() {}
  ~CacheStorageCacheStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return CacheStorageCacheStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return CacheStorageCacheStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class BLINK_PLATFORM_EXPORT CacheStorageStubDispatch {
 public:
  static bool Accept(CacheStorage* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      CacheStorage* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<CacheStorage>>
class CacheStorageStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  CacheStorageStub() {}
  ~CacheStorageStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return CacheStorageStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return CacheStorageStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class BLINK_PLATFORM_EXPORT CacheStorageCacheRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class BLINK_PLATFORM_EXPORT CacheStorageRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class BLINK_PLATFORM_EXPORT CacheStorageCacheResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class BLINK_PLATFORM_EXPORT CacheStorageResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};




class BLINK_PLATFORM_EXPORT OpenResult {
 public:
  using DataView = OpenResultDataView;
  using Data_ = internal::OpenResult_Data;
  using Tag = Data_::OpenResult_Tag;

  static OpenResultPtr New() {
    return OpenResultPtr(base::in_place);
  }
  // Construct an instance holding |status|.
  static OpenResultPtr
  NewStatus(
      CacheStorageError status) {
    auto result = OpenResultPtr(base::in_place);
    result->set_status(std::move(status));
    return result;
  }
  // Construct an instance holding |cache|.
  static OpenResultPtr
  NewCache(
      CacheStorageCacheAssociatedPtrInfo cache) {
    auto result = OpenResultPtr(base::in_place);
    result->set_cache(std::move(cache));
    return result;
  }

  template <typename U>
  static OpenResultPtr From(const U& u) {
    return mojo::TypeConverter<OpenResultPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, OpenResult>::Convert(*this);
  }

  OpenResult();
  ~OpenResult();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename UnionPtrType = OpenResultPtr>
  OpenResultPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, OpenResult>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  Tag which() const {
    return tag_;
  }


  bool is_status() const { return tag_ == Tag::STATUS; }

  CacheStorageError get_status() const {
    DCHECK(tag_ == Tag::STATUS);
    return data_.status;
  }

  void set_status(
      CacheStorageError status);
  bool is_cache() const { return tag_ == Tag::CACHE; }

  CacheStorageCacheAssociatedPtrInfo& get_cache() const {
    DCHECK(tag_ == Tag::CACHE);
    return *(data_.cache);
  }

  void set_cache(
      CacheStorageCacheAssociatedPtrInfo cache);

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        OpenResult::DataView>(input);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    return mojo::internal::DeserializeImpl<OpenResult::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

 private:
  union Union_ {
    Union_() {}
    ~Union_() {}
    CacheStorageError status;
    CacheStorageCacheAssociatedPtrInfo* cache;
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  void DestroyActive();
  Tag tag_;
  Union_ data_;
};
class BLINK_PLATFORM_EXPORT MatchResult {
 public:
  using DataView = MatchResultDataView;
  using Data_ = internal::MatchResult_Data;
  using Tag = Data_::MatchResult_Tag;

  static MatchResultPtr New() {
    return MatchResultPtr(base::in_place);
  }
  // Construct an instance holding |status|.
  static MatchResultPtr
  NewStatus(
      CacheStorageError status) {
    auto result = MatchResultPtr(base::in_place);
    result->set_status(std::move(status));
    return result;
  }
  // Construct an instance holding |response|.
  static MatchResultPtr
  NewResponse(
      ::blink::mojom::blink::FetchAPIResponsePtr response) {
    auto result = MatchResultPtr(base::in_place);
    result->set_response(std::move(response));
    return result;
  }

  template <typename U>
  static MatchResultPtr From(const U& u) {
    return mojo::TypeConverter<MatchResultPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, MatchResult>::Convert(*this);
  }

  MatchResult();
  ~MatchResult();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename UnionPtrType = MatchResultPtr>
  MatchResultPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, MatchResult>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  Tag which() const {
    return tag_;
  }


  bool is_status() const { return tag_ == Tag::STATUS; }

  CacheStorageError get_status() const {
    DCHECK(tag_ == Tag::STATUS);
    return data_.status;
  }

  void set_status(
      CacheStorageError status);
  bool is_response() const { return tag_ == Tag::RESPONSE; }

  ::blink::mojom::blink::FetchAPIResponsePtr& get_response() const {
    DCHECK(tag_ == Tag::RESPONSE);
    return *(data_.response);
  }

  void set_response(
      ::blink::mojom::blink::FetchAPIResponsePtr response);

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        MatchResult::DataView>(input);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    return mojo::internal::DeserializeImpl<MatchResult::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

 private:
  union Union_ {
    Union_() {}
    ~Union_() {}
    CacheStorageError status;
    ::blink::mojom::blink::FetchAPIResponsePtr* response;
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  void DestroyActive();
  Tag tag_;
  Union_ data_;
};
class BLINK_PLATFORM_EXPORT MatchAllResult {
 public:
  using DataView = MatchAllResultDataView;
  using Data_ = internal::MatchAllResult_Data;
  using Tag = Data_::MatchAllResult_Tag;

  static MatchAllResultPtr New() {
    return MatchAllResultPtr(base::in_place);
  }
  // Construct an instance holding |status|.
  static MatchAllResultPtr
  NewStatus(
      CacheStorageError status) {
    auto result = MatchAllResultPtr(base::in_place);
    result->set_status(std::move(status));
    return result;
  }
  // Construct an instance holding |responses|.
  static MatchAllResultPtr
  NewResponses(
      WTF::Vector<::blink::mojom::blink::FetchAPIResponsePtr> responses) {
    auto result = MatchAllResultPtr(base::in_place);
    result->set_responses(std::move(responses));
    return result;
  }

  template <typename U>
  static MatchAllResultPtr From(const U& u) {
    return mojo::TypeConverter<MatchAllResultPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, MatchAllResult>::Convert(*this);
  }

  MatchAllResult();
  ~MatchAllResult();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename UnionPtrType = MatchAllResultPtr>
  MatchAllResultPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, MatchAllResult>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  Tag which() const {
    return tag_;
  }


  bool is_status() const { return tag_ == Tag::STATUS; }

  CacheStorageError get_status() const {
    DCHECK(tag_ == Tag::STATUS);
    return data_.status;
  }

  void set_status(
      CacheStorageError status);
  bool is_responses() const { return tag_ == Tag::RESPONSES; }

  WTF::Vector<::blink::mojom::blink::FetchAPIResponsePtr>& get_responses() const {
    DCHECK(tag_ == Tag::RESPONSES);
    return *(data_.responses);
  }

  void set_responses(
      WTF::Vector<::blink::mojom::blink::FetchAPIResponsePtr> responses);

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        MatchAllResult::DataView>(input);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    return mojo::internal::DeserializeImpl<MatchAllResult::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

 private:
  union Union_ {
    Union_() {}
    ~Union_() {}
    CacheStorageError status;
    WTF::Vector<::blink::mojom::blink::FetchAPIResponsePtr>* responses;
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  void DestroyActive();
  Tag tag_;
  Union_ data_;
};
class BLINK_PLATFORM_EXPORT CacheKeysResult {
 public:
  using DataView = CacheKeysResultDataView;
  using Data_ = internal::CacheKeysResult_Data;
  using Tag = Data_::CacheKeysResult_Tag;

  static CacheKeysResultPtr New() {
    return CacheKeysResultPtr(base::in_place);
  }
  // Construct an instance holding |status|.
  static CacheKeysResultPtr
  NewStatus(
      CacheStorageError status) {
    auto result = CacheKeysResultPtr(base::in_place);
    result->set_status(std::move(status));
    return result;
  }
  // Construct an instance holding |keys|.
  static CacheKeysResultPtr
  NewKeys(
      const WTF::Vector<::blink::WebServiceWorkerRequest>& keys) {
    auto result = CacheKeysResultPtr(base::in_place);
    result->set_keys(std::move(keys));
    return result;
  }

  template <typename U>
  static CacheKeysResultPtr From(const U& u) {
    return mojo::TypeConverter<CacheKeysResultPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, CacheKeysResult>::Convert(*this);
  }

  CacheKeysResult();
  ~CacheKeysResult();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename UnionPtrType = CacheKeysResultPtr>
  CacheKeysResultPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, CacheKeysResult>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  Tag which() const {
    return tag_;
  }


  bool is_status() const { return tag_ == Tag::STATUS; }

  CacheStorageError get_status() const {
    DCHECK(tag_ == Tag::STATUS);
    return data_.status;
  }

  void set_status(
      CacheStorageError status);
  bool is_keys() const { return tag_ == Tag::KEYS; }

  WTF::Vector<::blink::WebServiceWorkerRequest>& get_keys() const {
    DCHECK(tag_ == Tag::KEYS);
    return *(data_.keys);
  }

  void set_keys(
      const WTF::Vector<::blink::WebServiceWorkerRequest>& keys);

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        CacheKeysResult::DataView>(input);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    return mojo::internal::DeserializeImpl<CacheKeysResult::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

 private:
  union Union_ {
    Union_() {}
    ~Union_() {}
    CacheStorageError status;
    WTF::Vector<::blink::WebServiceWorkerRequest>* keys;
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  void DestroyActive();
  Tag tag_;
  Union_ data_;
};


class BLINK_PLATFORM_EXPORT QueryParams {
 public:
  using DataView = QueryParamsDataView;
  using Data_ = internal::QueryParams_Data;

  template <typename... Args>
  static QueryParamsPtr New(Args&&... args) {
    return QueryParamsPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static QueryParamsPtr From(const U& u) {
    return mojo::TypeConverter<QueryParamsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, QueryParams>::Convert(*this);
  }


  QueryParams();

  QueryParams(
      bool ignore_search,
      bool ignore_method,
      bool ignore_vary,
      const WTF::String& cache_name);

  ~QueryParams();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = QueryParamsPtr>
  QueryParamsPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, QueryParams>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        QueryParams::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        QueryParams::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::QueryParams_UnserializedMessageContext<
            UserType, QueryParams::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<QueryParams::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return QueryParams::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::QueryParams_UnserializedMessageContext<
            UserType, QueryParams::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<QueryParams::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  bool ignore_search;
  bool ignore_method;
  bool ignore_vary;
  WTF::String cache_name;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};


class BLINK_PLATFORM_EXPORT BatchOperation {
 public:
  using DataView = BatchOperationDataView;
  using Data_ = internal::BatchOperation_Data;

  template <typename... Args>
  static BatchOperationPtr New(Args&&... args) {
    return BatchOperationPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static BatchOperationPtr From(const U& u) {
    return mojo::TypeConverter<BatchOperationPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, BatchOperation>::Convert(*this);
  }


  BatchOperation();

  BatchOperation(
      OperationType operation_type,
      const ::blink::WebServiceWorkerRequest& request,
      ::blink::mojom::blink::FetchAPIResponsePtr response,
      QueryParamsPtr match_params);

  ~BatchOperation();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = BatchOperationPtr>
  BatchOperationPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, BatchOperation>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        BatchOperation::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        BatchOperation::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::BatchOperation_UnserializedMessageContext<
            UserType, BatchOperation::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<BatchOperation::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return BatchOperation::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::BatchOperation_UnserializedMessageContext<
            UserType, BatchOperation::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<BatchOperation::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  OperationType operation_type;
  ::blink::WebServiceWorkerRequest request;
  ::blink::mojom::blink::FetchAPIResponsePtr response;
  QueryParamsPtr match_params;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(BatchOperation);
};

template <typename UnionPtrType>
OpenResultPtr OpenResult::Clone() const {
  // Use UnionPtrType to prevent the compiler from trying to compile this
  // without being asked.
  UnionPtrType rv(New());
  switch (tag_) {
    case Tag::STATUS:
      rv->set_status(mojo::Clone(data_.status));
      break;
    case Tag::CACHE:
      rv->set_cache(mojo::Clone(*data_.cache));
      break;
  };
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, OpenResult>::value>::type*>
bool OpenResult::Equals(const T& other) const {
  if (tag_ != other.which())
    return false;

  switch (tag_) {
    case Tag::STATUS:
      return mojo::Equals(data_.status, other.data_.status);
    case Tag::CACHE:
      return mojo::Equals(*(data_.cache), *(other.data_.cache));
  };

  return false;
}
template <typename UnionPtrType>
MatchResultPtr MatchResult::Clone() const {
  // Use UnionPtrType to prevent the compiler from trying to compile this
  // without being asked.
  UnionPtrType rv(New());
  switch (tag_) {
    case Tag::STATUS:
      rv->set_status(mojo::Clone(data_.status));
      break;
    case Tag::RESPONSE:
      rv->set_response(mojo::Clone(*data_.response));
      break;
  };
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, MatchResult>::value>::type*>
bool MatchResult::Equals(const T& other) const {
  if (tag_ != other.which())
    return false;

  switch (tag_) {
    case Tag::STATUS:
      return mojo::Equals(data_.status, other.data_.status);
    case Tag::RESPONSE:
      return mojo::Equals(*(data_.response), *(other.data_.response));
  };

  return false;
}
template <typename UnionPtrType>
MatchAllResultPtr MatchAllResult::Clone() const {
  // Use UnionPtrType to prevent the compiler from trying to compile this
  // without being asked.
  UnionPtrType rv(New());
  switch (tag_) {
    case Tag::STATUS:
      rv->set_status(mojo::Clone(data_.status));
      break;
    case Tag::RESPONSES:
      rv->set_responses(mojo::Clone(*data_.responses));
      break;
  };
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, MatchAllResult>::value>::type*>
bool MatchAllResult::Equals(const T& other) const {
  if (tag_ != other.which())
    return false;

  switch (tag_) {
    case Tag::STATUS:
      return mojo::Equals(data_.status, other.data_.status);
    case Tag::RESPONSES:
      return mojo::Equals(*(data_.responses), *(other.data_.responses));
  };

  return false;
}
template <typename UnionPtrType>
CacheKeysResultPtr CacheKeysResult::Clone() const {
  // Use UnionPtrType to prevent the compiler from trying to compile this
  // without being asked.
  UnionPtrType rv(New());
  switch (tag_) {
    case Tag::STATUS:
      rv->set_status(mojo::Clone(data_.status));
      break;
    case Tag::KEYS:
      rv->set_keys(mojo::Clone(*data_.keys));
      break;
  };
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, CacheKeysResult>::value>::type*>
bool CacheKeysResult::Equals(const T& other) const {
  if (tag_ != other.which())
    return false;

  switch (tag_) {
    case Tag::STATUS:
      return mojo::Equals(data_.status, other.data_.status);
    case Tag::KEYS:
      return mojo::Equals(*(data_.keys), *(other.data_.keys));
  };

  return false;
}
template <typename StructPtrType>
QueryParamsPtr QueryParams::Clone() const {
  return New(
      mojo::Clone(ignore_search),
      mojo::Clone(ignore_method),
      mojo::Clone(ignore_vary),
      mojo::Clone(cache_name)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, QueryParams>::value>::type*>
bool QueryParams::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->ignore_search, other_struct.ignore_search))
    return false;
  if (!mojo::Equals(this->ignore_method, other_struct.ignore_method))
    return false;
  if (!mojo::Equals(this->ignore_vary, other_struct.ignore_vary))
    return false;
  if (!mojo::Equals(this->cache_name, other_struct.cache_name))
    return false;
  return true;
}
template <typename StructPtrType>
BatchOperationPtr BatchOperation::Clone() const {
  return New(
      mojo::Clone(operation_type),
      mojo::Clone(request),
      mojo::Clone(response),
      mojo::Clone(match_params)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, BatchOperation>::value>::type*>
bool BatchOperation::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->operation_type, other_struct.operation_type))
    return false;
  if (!mojo::Equals(this->request, other_struct.request))
    return false;
  if (!mojo::Equals(this->response, other_struct.response))
    return false;
  if (!mojo::Equals(this->match_params, other_struct.match_params))
    return false;
  return true;
}


}  // namespace blink
}  // namespace mojom
}  // namespace blink

namespace mojo {


template <>
struct BLINK_PLATFORM_EXPORT StructTraits<::blink::mojom::blink::QueryParams::DataView,
                                         ::blink::mojom::blink::QueryParamsPtr> {
  static bool IsNull(const ::blink::mojom::blink::QueryParamsPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::blink::QueryParamsPtr* output) { output->reset(); }

  static decltype(::blink::mojom::blink::QueryParams::ignore_search) ignore_search(
      const ::blink::mojom::blink::QueryParamsPtr& input) {
    return input->ignore_search;
  }

  static decltype(::blink::mojom::blink::QueryParams::ignore_method) ignore_method(
      const ::blink::mojom::blink::QueryParamsPtr& input) {
    return input->ignore_method;
  }

  static decltype(::blink::mojom::blink::QueryParams::ignore_vary) ignore_vary(
      const ::blink::mojom::blink::QueryParamsPtr& input) {
    return input->ignore_vary;
  }

  static const decltype(::blink::mojom::blink::QueryParams::cache_name)& cache_name(
      const ::blink::mojom::blink::QueryParamsPtr& input) {
    return input->cache_name;
  }

  static bool Read(::blink::mojom::blink::QueryParams::DataView input, ::blink::mojom::blink::QueryParamsPtr* output);
};


template <>
struct BLINK_PLATFORM_EXPORT StructTraits<::blink::mojom::blink::BatchOperation::DataView,
                                         ::blink::mojom::blink::BatchOperationPtr> {
  static bool IsNull(const ::blink::mojom::blink::BatchOperationPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::blink::BatchOperationPtr* output) { output->reset(); }

  static decltype(::blink::mojom::blink::BatchOperation::operation_type) operation_type(
      const ::blink::mojom::blink::BatchOperationPtr& input) {
    return input->operation_type;
  }

  static  decltype(::blink::mojom::blink::BatchOperation::request)& request(
       ::blink::mojom::blink::BatchOperationPtr& input) {
    return input->request;
  }

  static  decltype(::blink::mojom::blink::BatchOperation::response)& response(
       ::blink::mojom::blink::BatchOperationPtr& input) {
    return input->response;
  }

  static const decltype(::blink::mojom::blink::BatchOperation::match_params)& match_params(
      const ::blink::mojom::blink::BatchOperationPtr& input) {
    return input->match_params;
  }

  static bool Read(::blink::mojom::blink::BatchOperation::DataView input, ::blink::mojom::blink::BatchOperationPtr* output);
};


template <>
struct BLINK_PLATFORM_EXPORT UnionTraits<::blink::mojom::blink::OpenResult::DataView,
                                        ::blink::mojom::blink::OpenResultPtr> {
  static bool IsNull(const ::blink::mojom::blink::OpenResultPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::blink::OpenResultPtr* output) { output->reset(); }

  static ::blink::mojom::blink::OpenResult::Tag GetTag(const ::blink::mojom::blink::OpenResultPtr& input) {
    return input->which();
  }

  static  ::blink::mojom::blink::CacheStorageError status(const ::blink::mojom::blink::OpenResultPtr& input) {
    return input->get_status();
  }

  static  ::blink::mojom::blink::CacheStorageCacheAssociatedPtrInfo& cache( ::blink::mojom::blink::OpenResultPtr& input) {
    return input->get_cache();
  }

  static bool Read(::blink::mojom::blink::OpenResult::DataView input, ::blink::mojom::blink::OpenResultPtr* output);
};


template <>
struct BLINK_PLATFORM_EXPORT UnionTraits<::blink::mojom::blink::MatchResult::DataView,
                                        ::blink::mojom::blink::MatchResultPtr> {
  static bool IsNull(const ::blink::mojom::blink::MatchResultPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::blink::MatchResultPtr* output) { output->reset(); }

  static ::blink::mojom::blink::MatchResult::Tag GetTag(const ::blink::mojom::blink::MatchResultPtr& input) {
    return input->which();
  }

  static  ::blink::mojom::blink::CacheStorageError status(const ::blink::mojom::blink::MatchResultPtr& input) {
    return input->get_status();
  }

  static  ::blink::mojom::blink::FetchAPIResponsePtr& response( ::blink::mojom::blink::MatchResultPtr& input) {
    return input->get_response();
  }

  static bool Read(::blink::mojom::blink::MatchResult::DataView input, ::blink::mojom::blink::MatchResultPtr* output);
};


template <>
struct BLINK_PLATFORM_EXPORT UnionTraits<::blink::mojom::blink::MatchAllResult::DataView,
                                        ::blink::mojom::blink::MatchAllResultPtr> {
  static bool IsNull(const ::blink::mojom::blink::MatchAllResultPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::blink::MatchAllResultPtr* output) { output->reset(); }

  static ::blink::mojom::blink::MatchAllResult::Tag GetTag(const ::blink::mojom::blink::MatchAllResultPtr& input) {
    return input->which();
  }

  static  ::blink::mojom::blink::CacheStorageError status(const ::blink::mojom::blink::MatchAllResultPtr& input) {
    return input->get_status();
  }

  static  WTF::Vector<::blink::mojom::blink::FetchAPIResponsePtr>& responses( ::blink::mojom::blink::MatchAllResultPtr& input) {
    return input->get_responses();
  }

  static bool Read(::blink::mojom::blink::MatchAllResult::DataView input, ::blink::mojom::blink::MatchAllResultPtr* output);
};


template <>
struct BLINK_PLATFORM_EXPORT UnionTraits<::blink::mojom::blink::CacheKeysResult::DataView,
                                        ::blink::mojom::blink::CacheKeysResultPtr> {
  static bool IsNull(const ::blink::mojom::blink::CacheKeysResultPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::blink::CacheKeysResultPtr* output) { output->reset(); }

  static ::blink::mojom::blink::CacheKeysResult::Tag GetTag(const ::blink::mojom::blink::CacheKeysResultPtr& input) {
    return input->which();
  }

  static  ::blink::mojom::blink::CacheStorageError status(const ::blink::mojom::blink::CacheKeysResultPtr& input) {
    return input->get_status();
  }

  static  WTF::Vector<::blink::WebServiceWorkerRequest>& keys( ::blink::mojom::blink::CacheKeysResultPtr& input) {
    return input->get_keys();
  }

  static bool Read(::blink::mojom::blink::CacheKeysResult::DataView input, ::blink::mojom::blink::CacheKeysResultPtr* output);
};

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_CACHE_STORAGE_CACHE_STORAGE_MOJOM_BLINK_H_