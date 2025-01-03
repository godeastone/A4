// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#elif defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4056)
#pragma warning(disable:4065)
#pragma warning(disable:4756)
#endif

#include "third_party/blink/public/platform/modules/cache_storage/cache_storage.mojom.h"

#include <math.h>
#include <stdint.h>
#include <utility>

#include "base/logging.h"
#include "base/run_loop.h"
#include "mojo/public/cpp/bindings/lib/message_internal.h"
#include "mojo/public/cpp/bindings/lib/serialization_util.h"
#include "mojo/public/cpp/bindings/lib/unserialized_message_context.h"
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/interfaces/bindings/interface_control_messages.mojom.h"

#include "third_party/blink/public/platform/modules/cache_storage/cache_storage.mojom-shared-message-ids.h"
#include "content/common/service_worker/service_worker_fetch_request_mojom_traits.h"
#include "content/common/service_worker/service_worker_fetch_response_mojom_traits.h"
#include "content/public/common/referrer_struct_traits.h"
#include "mojo/public/cpp/base/string16_mojom_traits.h"
#include "mojo/public/cpp/base/time_mojom_traits.h"
#include "third_party/blink/public/platform/referrer_policy_enum_traits.h"
#include "url/mojom/url_gurl_mojom_traits.h"
namespace blink {
namespace mojom {
QueryParams::QueryParams()
    : ignore_search(),
      ignore_method(),
      ignore_vary(),
      cache_name() {}

QueryParams::QueryParams(
    bool ignore_search_in,
    bool ignore_method_in,
    bool ignore_vary_in,
    const base::Optional<base::string16>& cache_name_in)
    : ignore_search(std::move(ignore_search_in)),
      ignore_method(std::move(ignore_method_in)),
      ignore_vary(std::move(ignore_vary_in)),
      cache_name(std::move(cache_name_in)) {}

QueryParams::~QueryParams() = default;

bool QueryParams::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
BatchOperation::BatchOperation()
    : operation_type(),
      request(),
      response(),
      match_params() {}

BatchOperation::BatchOperation(
    OperationType operation_type_in,
    const ::content::ServiceWorkerFetchRequest& request_in,
    const base::Optional<::content::ServiceWorkerResponse>& response_in,
    QueryParamsPtr match_params_in)
    : operation_type(std::move(operation_type_in)),
      request(std::move(request_in)),
      response(std::move(response_in)),
      match_params(std::move(match_params_in)) {}

BatchOperation::~BatchOperation() = default;

bool BatchOperation::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
OpenResult::OpenResult() : tag_(Tag::STATUS) {
  data_.status = CacheStorageError();
}

OpenResult::~OpenResult() {
  DestroyActive();
}


void OpenResult::set_status(
    CacheStorageError status) {
  if (tag_ != Tag::STATUS) {
    DestroyActive();
    tag_ = Tag::STATUS;
  }
  data_.status = status;
}
void OpenResult::set_cache(
    CacheStorageCacheAssociatedPtrInfo cache) {
  if (tag_ == Tag::CACHE) {
    *(data_.cache) = std::move(cache);
  } else {
    DestroyActive();
    tag_ = Tag::CACHE;
    data_.cache = new CacheStorageCacheAssociatedPtrInfo(
        std::move(cache));
  }
}

void OpenResult::DestroyActive() {
  switch (tag_) {

    case Tag::STATUS:

      break;
    case Tag::CACHE:

      delete data_.cache;
      break;
  }
}

bool OpenResult::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context, false);
}
MatchResult::MatchResult() : tag_(Tag::STATUS) {
  data_.status = CacheStorageError();
}

MatchResult::~MatchResult() {
  DestroyActive();
}


void MatchResult::set_status(
    CacheStorageError status) {
  if (tag_ != Tag::STATUS) {
    DestroyActive();
    tag_ = Tag::STATUS;
  }
  data_.status = status;
}
void MatchResult::set_response(
    const ::content::ServiceWorkerResponse& response) {
  if (tag_ == Tag::RESPONSE) {
    *(data_.response) = std::move(response);
  } else {
    DestroyActive();
    tag_ = Tag::RESPONSE;
    data_.response = new ::content::ServiceWorkerResponse(
        std::move(response));
  }
}

void MatchResult::DestroyActive() {
  switch (tag_) {

    case Tag::STATUS:

      break;
    case Tag::RESPONSE:

      delete data_.response;
      break;
  }
}

bool MatchResult::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context, false);
}
MatchAllResult::MatchAllResult() : tag_(Tag::STATUS) {
  data_.status = CacheStorageError();
}

MatchAllResult::~MatchAllResult() {
  DestroyActive();
}


void MatchAllResult::set_status(
    CacheStorageError status) {
  if (tag_ != Tag::STATUS) {
    DestroyActive();
    tag_ = Tag::STATUS;
  }
  data_.status = status;
}
void MatchAllResult::set_responses(
    const std::vector<::content::ServiceWorkerResponse>& responses) {
  if (tag_ == Tag::RESPONSES) {
    *(data_.responses) = std::move(responses);
  } else {
    DestroyActive();
    tag_ = Tag::RESPONSES;
    data_.responses = new std::vector<::content::ServiceWorkerResponse>(
        std::move(responses));
  }
}

void MatchAllResult::DestroyActive() {
  switch (tag_) {

    case Tag::STATUS:

      break;
    case Tag::RESPONSES:

      delete data_.responses;
      break;
  }
}

bool MatchAllResult::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context, false);
}
CacheKeysResult::CacheKeysResult() : tag_(Tag::STATUS) {
  data_.status = CacheStorageError();
}

CacheKeysResult::~CacheKeysResult() {
  DestroyActive();
}


void CacheKeysResult::set_status(
    CacheStorageError status) {
  if (tag_ != Tag::STATUS) {
    DestroyActive();
    tag_ = Tag::STATUS;
  }
  data_.status = status;
}
void CacheKeysResult::set_keys(
    const std::vector<::content::ServiceWorkerFetchRequest>& keys) {
  if (tag_ == Tag::KEYS) {
    *(data_.keys) = std::move(keys);
  } else {
    DestroyActive();
    tag_ = Tag::KEYS;
    data_.keys = new std::vector<::content::ServiceWorkerFetchRequest>(
        std::move(keys));
  }
}

void CacheKeysResult::DestroyActive() {
  switch (tag_) {

    case Tag::STATUS:

      break;
    case Tag::KEYS:

      delete data_.keys;
      break;
  }
}

bool CacheKeysResult::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context, false);
}
const char CacheStorageCache::Name_[] = "blink.mojom.CacheStorageCache";

class CacheStorageCache_Match_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  CacheStorageCache_Match_ForwardToCallback(
      CacheStorageCache::MatchCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  CacheStorageCache::MatchCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(CacheStorageCache_Match_ForwardToCallback);
};

class CacheStorageCache_MatchAll_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  CacheStorageCache_MatchAll_ForwardToCallback(
      CacheStorageCache::MatchAllCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  CacheStorageCache::MatchAllCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(CacheStorageCache_MatchAll_ForwardToCallback);
};

class CacheStorageCache_Keys_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  CacheStorageCache_Keys_ForwardToCallback(
      CacheStorageCache::KeysCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  CacheStorageCache::KeysCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(CacheStorageCache_Keys_ForwardToCallback);
};

class CacheStorageCache_Batch_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  CacheStorageCache_Batch_ForwardToCallback(
      CacheStorageCache::BatchCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  CacheStorageCache::BatchCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(CacheStorageCache_Batch_ForwardToCallback);
};

CacheStorageCacheProxy::CacheStorageCacheProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void CacheStorageCacheProxy::Match(
    const ::content::ServiceWorkerFetchRequest& in_request, QueryParamsPtr in_query_params, MatchCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "blink::mojom::CacheStorageCache::Match");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kCacheStorageCache_Match_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::CacheStorageCache_Match_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->request)::BaseType::BufferWriter
      request_writer;
  mojo::internal::Serialize<::blink::mojom::FetchAPIRequestDataView>(
      in_request, buffer, &request_writer, &serialization_context);
  params->request.Set(
      request_writer.is_null() ? nullptr : request_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->request.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null request in CacheStorageCache.Match request");
  typename decltype(params->query_params)::BaseType::BufferWriter
      query_params_writer;
  mojo::internal::Serialize<::blink::mojom::QueryParamsDataView>(
      in_query_params, buffer, &query_params_writer, &serialization_context);
  params->query_params.Set(
      query_params_writer.is_null() ? nullptr : query_params_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->query_params.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null query_params in CacheStorageCache.Match request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new CacheStorageCache_Match_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void CacheStorageCacheProxy::MatchAll(
    const base::Optional<::content::ServiceWorkerFetchRequest>& in_request, QueryParamsPtr in_query_params, MatchAllCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "blink::mojom::CacheStorageCache::MatchAll");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kCacheStorageCache_MatchAll_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::CacheStorageCache_MatchAll_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->request)::BaseType::BufferWriter
      request_writer;
  mojo::internal::Serialize<::blink::mojom::FetchAPIRequestDataView>(
      in_request, buffer, &request_writer, &serialization_context);
  params->request.Set(
      request_writer.is_null() ? nullptr : request_writer.data());
  typename decltype(params->query_params)::BaseType::BufferWriter
      query_params_writer;
  mojo::internal::Serialize<::blink::mojom::QueryParamsDataView>(
      in_query_params, buffer, &query_params_writer, &serialization_context);
  params->query_params.Set(
      query_params_writer.is_null() ? nullptr : query_params_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->query_params.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null query_params in CacheStorageCache.MatchAll request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new CacheStorageCache_MatchAll_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void CacheStorageCacheProxy::Keys(
    const base::Optional<::content::ServiceWorkerFetchRequest>& in_request, QueryParamsPtr in_query_params, KeysCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "blink::mojom::CacheStorageCache::Keys");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kCacheStorageCache_Keys_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::CacheStorageCache_Keys_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->request)::BaseType::BufferWriter
      request_writer;
  mojo::internal::Serialize<::blink::mojom::FetchAPIRequestDataView>(
      in_request, buffer, &request_writer, &serialization_context);
  params->request.Set(
      request_writer.is_null() ? nullptr : request_writer.data());
  typename decltype(params->query_params)::BaseType::BufferWriter
      query_params_writer;
  mojo::internal::Serialize<::blink::mojom::QueryParamsDataView>(
      in_query_params, buffer, &query_params_writer, &serialization_context);
  params->query_params.Set(
      query_params_writer.is_null() ? nullptr : query_params_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->query_params.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null query_params in CacheStorageCache.Keys request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new CacheStorageCache_Keys_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void CacheStorageCacheProxy::Batch(
    std::vector<BatchOperationPtr> in_batch_operations, BatchCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "blink::mojom::CacheStorageCache::Batch");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kCacheStorageCache_Batch_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::CacheStorageCache_Batch_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->batch_operations)::BaseType::BufferWriter
      batch_operations_writer;
  const mojo::internal::ContainerValidateParams batch_operations_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::blink::mojom::BatchOperationDataView>>(
      in_batch_operations, buffer, &batch_operations_writer, &batch_operations_validate_params,
      &serialization_context);
  params->batch_operations.Set(
      batch_operations_writer.is_null() ? nullptr : batch_operations_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->batch_operations.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null batch_operations in CacheStorageCache.Batch request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new CacheStorageCache_Batch_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class CacheStorageCache_Match_ProxyToResponder {
 public:
  static CacheStorageCache::MatchCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<CacheStorageCache_Match_ProxyToResponder> proxy(
        new CacheStorageCache_Match_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&CacheStorageCache_Match_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~CacheStorageCache_Match_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // If we're being destroyed without being run, we want to ensure the
      // binding endpoint has been closed. This checks for that asynchronously.
      // We pass a bound generated callback to handle the response so that any
      // resulting DCHECK stack will have useful interface type information.
      responder_->IsConnectedAsync(base::BindOnce(&OnIsConnectedComplete));
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    responder_ = nullptr;
  }

 private:
  CacheStorageCache_Match_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "CacheStorageCache::MatchCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      MatchResultPtr in_result);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(CacheStorageCache_Match_ProxyToResponder);
};

bool CacheStorageCache_Match_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "blink::mojom::CacheStorageCache::MatchCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::CacheStorageCache_Match_ResponseParams_Data* params =
      reinterpret_cast<
          internal::CacheStorageCache_Match_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  MatchResultPtr p_result{};
  CacheStorageCache_Match_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadResult(&p_result))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "CacheStorageCache::Match response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_result));
  return true;
}

void CacheStorageCache_Match_ProxyToResponder::Run(
    MatchResultPtr in_result) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kCacheStorageCache_Match_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::CacheStorageCache_Match_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->result)::BufferWriter result_writer;
  result_writer.AllocateInline(buffer, &params->result);
  mojo::internal::Serialize<::blink::mojom::MatchResultDataView>(
      in_result, buffer, &result_writer, true, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->result.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null result in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::CacheStorageCache::MatchCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class CacheStorageCache_MatchAll_ProxyToResponder {
 public:
  static CacheStorageCache::MatchAllCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<CacheStorageCache_MatchAll_ProxyToResponder> proxy(
        new CacheStorageCache_MatchAll_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&CacheStorageCache_MatchAll_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~CacheStorageCache_MatchAll_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // If we're being destroyed without being run, we want to ensure the
      // binding endpoint has been closed. This checks for that asynchronously.
      // We pass a bound generated callback to handle the response so that any
      // resulting DCHECK stack will have useful interface type information.
      responder_->IsConnectedAsync(base::BindOnce(&OnIsConnectedComplete));
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    responder_ = nullptr;
  }

 private:
  CacheStorageCache_MatchAll_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "CacheStorageCache::MatchAllCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      MatchAllResultPtr in_result);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(CacheStorageCache_MatchAll_ProxyToResponder);
};

bool CacheStorageCache_MatchAll_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "blink::mojom::CacheStorageCache::MatchAllCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::CacheStorageCache_MatchAll_ResponseParams_Data* params =
      reinterpret_cast<
          internal::CacheStorageCache_MatchAll_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  MatchAllResultPtr p_result{};
  CacheStorageCache_MatchAll_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadResult(&p_result))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "CacheStorageCache::MatchAll response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_result));
  return true;
}

void CacheStorageCache_MatchAll_ProxyToResponder::Run(
    MatchAllResultPtr in_result) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kCacheStorageCache_MatchAll_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::CacheStorageCache_MatchAll_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->result)::BufferWriter result_writer;
  result_writer.AllocateInline(buffer, &params->result);
  mojo::internal::Serialize<::blink::mojom::MatchAllResultDataView>(
      in_result, buffer, &result_writer, true, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->result.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null result in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::CacheStorageCache::MatchAllCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class CacheStorageCache_Keys_ProxyToResponder {
 public:
  static CacheStorageCache::KeysCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<CacheStorageCache_Keys_ProxyToResponder> proxy(
        new CacheStorageCache_Keys_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&CacheStorageCache_Keys_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~CacheStorageCache_Keys_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // If we're being destroyed without being run, we want to ensure the
      // binding endpoint has been closed. This checks for that asynchronously.
      // We pass a bound generated callback to handle the response so that any
      // resulting DCHECK stack will have useful interface type information.
      responder_->IsConnectedAsync(base::BindOnce(&OnIsConnectedComplete));
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    responder_ = nullptr;
  }

 private:
  CacheStorageCache_Keys_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "CacheStorageCache::KeysCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      CacheKeysResultPtr in_result);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(CacheStorageCache_Keys_ProxyToResponder);
};

bool CacheStorageCache_Keys_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "blink::mojom::CacheStorageCache::KeysCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::CacheStorageCache_Keys_ResponseParams_Data* params =
      reinterpret_cast<
          internal::CacheStorageCache_Keys_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  CacheKeysResultPtr p_result{};
  CacheStorageCache_Keys_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadResult(&p_result))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "CacheStorageCache::Keys response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_result));
  return true;
}

void CacheStorageCache_Keys_ProxyToResponder::Run(
    CacheKeysResultPtr in_result) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kCacheStorageCache_Keys_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::CacheStorageCache_Keys_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->result)::BufferWriter result_writer;
  result_writer.AllocateInline(buffer, &params->result);
  mojo::internal::Serialize<::blink::mojom::CacheKeysResultDataView>(
      in_result, buffer, &result_writer, true, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->result.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null result in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::CacheStorageCache::KeysCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class CacheStorageCache_Batch_ProxyToResponder {
 public:
  static CacheStorageCache::BatchCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<CacheStorageCache_Batch_ProxyToResponder> proxy(
        new CacheStorageCache_Batch_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&CacheStorageCache_Batch_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~CacheStorageCache_Batch_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // If we're being destroyed without being run, we want to ensure the
      // binding endpoint has been closed. This checks for that asynchronously.
      // We pass a bound generated callback to handle the response so that any
      // resulting DCHECK stack will have useful interface type information.
      responder_->IsConnectedAsync(base::BindOnce(&OnIsConnectedComplete));
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    responder_ = nullptr;
  }

 private:
  CacheStorageCache_Batch_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "CacheStorageCache::BatchCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      CacheStorageError in_result);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(CacheStorageCache_Batch_ProxyToResponder);
};

bool CacheStorageCache_Batch_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "blink::mojom::CacheStorageCache::BatchCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::CacheStorageCache_Batch_ResponseParams_Data* params =
      reinterpret_cast<
          internal::CacheStorageCache_Batch_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  CacheStorageError p_result{};
  CacheStorageCache_Batch_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadResult(&p_result))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "CacheStorageCache::Batch response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_result));
  return true;
}

void CacheStorageCache_Batch_ProxyToResponder::Run(
    CacheStorageError in_result) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kCacheStorageCache_Batch_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::CacheStorageCache_Batch_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::blink::mojom::CacheStorageError>(
      in_result, &params->result);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::CacheStorageCache::BatchCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}

// static
bool CacheStorageCacheStubDispatch::Accept(
    CacheStorageCache* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kCacheStorageCache_Match_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::CacheStorageCache::Match",
               "message", message->name());
#endif
      break;
    }
    case internal::kCacheStorageCache_MatchAll_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::CacheStorageCache::MatchAll",
               "message", message->name());
#endif
      break;
    }
    case internal::kCacheStorageCache_Keys_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::CacheStorageCache::Keys",
               "message", message->name());
#endif
      break;
    }
    case internal::kCacheStorageCache_Batch_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::CacheStorageCache::Batch",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

// static
bool CacheStorageCacheStubDispatch::AcceptWithResponder(
    CacheStorageCache* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kCacheStorageCache_Match_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::CacheStorageCache::Match",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::CacheStorageCache_Match_Params_Data* params =
          reinterpret_cast<
              internal::CacheStorageCache_Match_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::content::ServiceWorkerFetchRequest p_request{};
      QueryParamsPtr p_query_params{};
      CacheStorageCache_Match_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadRequest(&p_request))
        success = false;
      if (!input_data_view.ReadQueryParams(&p_query_params))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "CacheStorageCache::Match deserializer");
        return false;
      }
      CacheStorageCache::MatchCallback callback =
          CacheStorageCache_Match_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->Match(
std::move(p_request), 
std::move(p_query_params), std::move(callback));
      return true;
    }
    case internal::kCacheStorageCache_MatchAll_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::CacheStorageCache::MatchAll",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::CacheStorageCache_MatchAll_Params_Data* params =
          reinterpret_cast<
              internal::CacheStorageCache_MatchAll_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      base::Optional<::content::ServiceWorkerFetchRequest> p_request{};
      QueryParamsPtr p_query_params{};
      CacheStorageCache_MatchAll_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadRequest(&p_request))
        success = false;
      if (!input_data_view.ReadQueryParams(&p_query_params))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "CacheStorageCache::MatchAll deserializer");
        return false;
      }
      CacheStorageCache::MatchAllCallback callback =
          CacheStorageCache_MatchAll_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->MatchAll(
std::move(p_request), 
std::move(p_query_params), std::move(callback));
      return true;
    }
    case internal::kCacheStorageCache_Keys_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::CacheStorageCache::Keys",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::CacheStorageCache_Keys_Params_Data* params =
          reinterpret_cast<
              internal::CacheStorageCache_Keys_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      base::Optional<::content::ServiceWorkerFetchRequest> p_request{};
      QueryParamsPtr p_query_params{};
      CacheStorageCache_Keys_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadRequest(&p_request))
        success = false;
      if (!input_data_view.ReadQueryParams(&p_query_params))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "CacheStorageCache::Keys deserializer");
        return false;
      }
      CacheStorageCache::KeysCallback callback =
          CacheStorageCache_Keys_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->Keys(
std::move(p_request), 
std::move(p_query_params), std::move(callback));
      return true;
    }
    case internal::kCacheStorageCache_Batch_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::CacheStorageCache::Batch",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::CacheStorageCache_Batch_Params_Data* params =
          reinterpret_cast<
              internal::CacheStorageCache_Batch_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::vector<BatchOperationPtr> p_batch_operations{};
      CacheStorageCache_Batch_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadBatchOperations(&p_batch_operations))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "CacheStorageCache::Batch deserializer");
        return false;
      }
      CacheStorageCache::BatchCallback callback =
          CacheStorageCache_Batch_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->Batch(
std::move(p_batch_operations), std::move(callback));
      return true;
    }
  }
  return false;
}

bool CacheStorageCacheRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "CacheStorageCache RequestValidator");

  switch (message->header()->name) {
    case internal::kCacheStorageCache_Match_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::CacheStorageCache_Match_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kCacheStorageCache_MatchAll_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::CacheStorageCache_MatchAll_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kCacheStorageCache_Keys_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::CacheStorageCache_Keys_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kCacheStorageCache_Batch_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::CacheStorageCache_Batch_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    default:
      break;
  }

  // Unrecognized message.
  ReportValidationError(
      &validation_context,
      mojo::internal::VALIDATION_ERROR_MESSAGE_HEADER_UNKNOWN_METHOD);
  return false;
}

bool CacheStorageCacheResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "CacheStorageCache ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kCacheStorageCache_Match_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::CacheStorageCache_Match_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kCacheStorageCache_MatchAll_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::CacheStorageCache_MatchAll_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kCacheStorageCache_Keys_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::CacheStorageCache_Keys_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kCacheStorageCache_Batch_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::CacheStorageCache_Batch_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    default:
      break;
  }

  // Unrecognized message.
  ReportValidationError(
      &validation_context,
      mojo::internal::VALIDATION_ERROR_MESSAGE_HEADER_UNKNOWN_METHOD);
  return false;
}
void CacheStorageCacheInterceptorForTesting::Match(const ::content::ServiceWorkerFetchRequest& request, QueryParamsPtr query_params, MatchCallback callback) {
  GetForwardingInterface()->Match(std::move(request), std::move(query_params), std::move(callback));
}
void CacheStorageCacheInterceptorForTesting::MatchAll(const base::Optional<::content::ServiceWorkerFetchRequest>& request, QueryParamsPtr query_params, MatchAllCallback callback) {
  GetForwardingInterface()->MatchAll(std::move(request), std::move(query_params), std::move(callback));
}
void CacheStorageCacheInterceptorForTesting::Keys(const base::Optional<::content::ServiceWorkerFetchRequest>& request, QueryParamsPtr query_params, KeysCallback callback) {
  GetForwardingInterface()->Keys(std::move(request), std::move(query_params), std::move(callback));
}
void CacheStorageCacheInterceptorForTesting::Batch(std::vector<BatchOperationPtr> batch_operations, BatchCallback callback) {
  GetForwardingInterface()->Batch(std::move(batch_operations), std::move(callback));
}
CacheStorageCacheAsyncWaiter::CacheStorageCacheAsyncWaiter(
    CacheStorageCache* proxy) : proxy_(proxy) {}

CacheStorageCacheAsyncWaiter::~CacheStorageCacheAsyncWaiter() = default;

void CacheStorageCacheAsyncWaiter::Match(
    const ::content::ServiceWorkerFetchRequest& request, QueryParamsPtr query_params, MatchResultPtr* out_result) {
  base::RunLoop loop;
  proxy_->Match(std::move(request),std::move(query_params),
      base::BindOnce(
          [](base::RunLoop* loop,
             MatchResultPtr* out_result
,
             MatchResultPtr result) {*out_result = std::move(result);
            loop->Quit();
          },
          &loop,
          out_result));
  loop.Run();
}
void CacheStorageCacheAsyncWaiter::MatchAll(
    const base::Optional<::content::ServiceWorkerFetchRequest>& request, QueryParamsPtr query_params, MatchAllResultPtr* out_result) {
  base::RunLoop loop;
  proxy_->MatchAll(std::move(request),std::move(query_params),
      base::BindOnce(
          [](base::RunLoop* loop,
             MatchAllResultPtr* out_result
,
             MatchAllResultPtr result) {*out_result = std::move(result);
            loop->Quit();
          },
          &loop,
          out_result));
  loop.Run();
}
void CacheStorageCacheAsyncWaiter::Keys(
    const base::Optional<::content::ServiceWorkerFetchRequest>& request, QueryParamsPtr query_params, CacheKeysResultPtr* out_result) {
  base::RunLoop loop;
  proxy_->Keys(std::move(request),std::move(query_params),
      base::BindOnce(
          [](base::RunLoop* loop,
             CacheKeysResultPtr* out_result
,
             CacheKeysResultPtr result) {*out_result = std::move(result);
            loop->Quit();
          },
          &loop,
          out_result));
  loop.Run();
}
void CacheStorageCacheAsyncWaiter::Batch(
    std::vector<BatchOperationPtr> batch_operations, CacheStorageError* out_result) {
  base::RunLoop loop;
  proxy_->Batch(std::move(batch_operations),
      base::BindOnce(
          [](base::RunLoop* loop,
             CacheStorageError* out_result
,
             CacheStorageError result) {*out_result = std::move(result);
            loop->Quit();
          },
          &loop,
          out_result));
  loop.Run();
}

const char CacheStorage::Name_[] = "blink.mojom.CacheStorage";

class CacheStorage_Has_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  CacheStorage_Has_ForwardToCallback(
      CacheStorage::HasCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  CacheStorage::HasCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(CacheStorage_Has_ForwardToCallback);
};

class CacheStorage_Delete_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  CacheStorage_Delete_ForwardToCallback(
      CacheStorage::DeleteCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  CacheStorage::DeleteCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(CacheStorage_Delete_ForwardToCallback);
};

class CacheStorage_Keys_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  CacheStorage_Keys_ForwardToCallback(
      CacheStorage::KeysCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  CacheStorage::KeysCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(CacheStorage_Keys_ForwardToCallback);
};

class CacheStorage_Match_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  CacheStorage_Match_ForwardToCallback(
      CacheStorage::MatchCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  CacheStorage::MatchCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(CacheStorage_Match_ForwardToCallback);
};

class CacheStorage_Open_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  CacheStorage_Open_ForwardToCallback(
      CacheStorage::OpenCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  CacheStorage::OpenCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(CacheStorage_Open_ForwardToCallback);
};

CacheStorageProxy::CacheStorageProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void CacheStorageProxy::Has(
    const base::string16& in_cache_name, HasCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "blink::mojom::CacheStorage::Has");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kCacheStorage_Has_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::CacheStorage_Has_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->cache_name)::BaseType::BufferWriter
      cache_name_writer;
  mojo::internal::Serialize<::mojo_base::mojom::String16DataView>(
      in_cache_name, buffer, &cache_name_writer, &serialization_context);
  params->cache_name.Set(
      cache_name_writer.is_null() ? nullptr : cache_name_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->cache_name.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null cache_name in CacheStorage.Has request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new CacheStorage_Has_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void CacheStorageProxy::Delete(
    const base::string16& in_cache_name, DeleteCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "blink::mojom::CacheStorage::Delete");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kCacheStorage_Delete_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::CacheStorage_Delete_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->cache_name)::BaseType::BufferWriter
      cache_name_writer;
  mojo::internal::Serialize<::mojo_base::mojom::String16DataView>(
      in_cache_name, buffer, &cache_name_writer, &serialization_context);
  params->cache_name.Set(
      cache_name_writer.is_null() ? nullptr : cache_name_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->cache_name.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null cache_name in CacheStorage.Delete request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new CacheStorage_Delete_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void CacheStorageProxy::Keys(
    KeysCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "blink::mojom::CacheStorage::Keys");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kCacheStorage_Keys_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::CacheStorage_Keys_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new CacheStorage_Keys_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void CacheStorageProxy::Match(
    const ::content::ServiceWorkerFetchRequest& in_request, QueryParamsPtr in_match_params, MatchCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "blink::mojom::CacheStorage::Match");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kCacheStorage_Match_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::CacheStorage_Match_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->request)::BaseType::BufferWriter
      request_writer;
  mojo::internal::Serialize<::blink::mojom::FetchAPIRequestDataView>(
      in_request, buffer, &request_writer, &serialization_context);
  params->request.Set(
      request_writer.is_null() ? nullptr : request_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->request.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null request in CacheStorage.Match request");
  typename decltype(params->match_params)::BaseType::BufferWriter
      match_params_writer;
  mojo::internal::Serialize<::blink::mojom::QueryParamsDataView>(
      in_match_params, buffer, &match_params_writer, &serialization_context);
  params->match_params.Set(
      match_params_writer.is_null() ? nullptr : match_params_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->match_params.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null match_params in CacheStorage.Match request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new CacheStorage_Match_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void CacheStorageProxy::Open(
    const base::string16& in_cache_name, OpenCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "blink::mojom::CacheStorage::Open");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kCacheStorage_Open_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::CacheStorage_Open_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->cache_name)::BaseType::BufferWriter
      cache_name_writer;
  mojo::internal::Serialize<::mojo_base::mojom::String16DataView>(
      in_cache_name, buffer, &cache_name_writer, &serialization_context);
  params->cache_name.Set(
      cache_name_writer.is_null() ? nullptr : cache_name_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->cache_name.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null cache_name in CacheStorage.Open request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new CacheStorage_Open_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class CacheStorage_Has_ProxyToResponder {
 public:
  static CacheStorage::HasCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<CacheStorage_Has_ProxyToResponder> proxy(
        new CacheStorage_Has_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&CacheStorage_Has_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~CacheStorage_Has_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // If we're being destroyed without being run, we want to ensure the
      // binding endpoint has been closed. This checks for that asynchronously.
      // We pass a bound generated callback to handle the response so that any
      // resulting DCHECK stack will have useful interface type information.
      responder_->IsConnectedAsync(base::BindOnce(&OnIsConnectedComplete));
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    responder_ = nullptr;
  }

 private:
  CacheStorage_Has_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "CacheStorage::HasCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      CacheStorageError in_result);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(CacheStorage_Has_ProxyToResponder);
};

bool CacheStorage_Has_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "blink::mojom::CacheStorage::HasCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::CacheStorage_Has_ResponseParams_Data* params =
      reinterpret_cast<
          internal::CacheStorage_Has_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  CacheStorageError p_result{};
  CacheStorage_Has_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadResult(&p_result))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "CacheStorage::Has response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_result));
  return true;
}

void CacheStorage_Has_ProxyToResponder::Run(
    CacheStorageError in_result) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kCacheStorage_Has_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::CacheStorage_Has_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::blink::mojom::CacheStorageError>(
      in_result, &params->result);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::CacheStorage::HasCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class CacheStorage_Delete_ProxyToResponder {
 public:
  static CacheStorage::DeleteCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<CacheStorage_Delete_ProxyToResponder> proxy(
        new CacheStorage_Delete_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&CacheStorage_Delete_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~CacheStorage_Delete_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // If we're being destroyed without being run, we want to ensure the
      // binding endpoint has been closed. This checks for that asynchronously.
      // We pass a bound generated callback to handle the response so that any
      // resulting DCHECK stack will have useful interface type information.
      responder_->IsConnectedAsync(base::BindOnce(&OnIsConnectedComplete));
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    responder_ = nullptr;
  }

 private:
  CacheStorage_Delete_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "CacheStorage::DeleteCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      CacheStorageError in_result);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(CacheStorage_Delete_ProxyToResponder);
};

bool CacheStorage_Delete_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "blink::mojom::CacheStorage::DeleteCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::CacheStorage_Delete_ResponseParams_Data* params =
      reinterpret_cast<
          internal::CacheStorage_Delete_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  CacheStorageError p_result{};
  CacheStorage_Delete_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadResult(&p_result))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "CacheStorage::Delete response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_result));
  return true;
}

void CacheStorage_Delete_ProxyToResponder::Run(
    CacheStorageError in_result) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kCacheStorage_Delete_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::CacheStorage_Delete_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::blink::mojom::CacheStorageError>(
      in_result, &params->result);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::CacheStorage::DeleteCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class CacheStorage_Keys_ProxyToResponder {
 public:
  static CacheStorage::KeysCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<CacheStorage_Keys_ProxyToResponder> proxy(
        new CacheStorage_Keys_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&CacheStorage_Keys_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~CacheStorage_Keys_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // If we're being destroyed without being run, we want to ensure the
      // binding endpoint has been closed. This checks for that asynchronously.
      // We pass a bound generated callback to handle the response so that any
      // resulting DCHECK stack will have useful interface type information.
      responder_->IsConnectedAsync(base::BindOnce(&OnIsConnectedComplete));
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    responder_ = nullptr;
  }

 private:
  CacheStorage_Keys_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "CacheStorage::KeysCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      const std::vector<base::string16>& in_keys);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(CacheStorage_Keys_ProxyToResponder);
};

bool CacheStorage_Keys_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "blink::mojom::CacheStorage::KeysCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::CacheStorage_Keys_ResponseParams_Data* params =
      reinterpret_cast<
          internal::CacheStorage_Keys_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  std::vector<base::string16> p_keys{};
  CacheStorage_Keys_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadKeys(&p_keys))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "CacheStorage::Keys response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_keys));
  return true;
}

void CacheStorage_Keys_ProxyToResponder::Run(
    const std::vector<base::string16>& in_keys) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kCacheStorage_Keys_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::CacheStorage_Keys_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->keys)::BaseType::BufferWriter
      keys_writer;
  const mojo::internal::ContainerValidateParams keys_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::mojo_base::mojom::String16DataView>>(
      in_keys, buffer, &keys_writer, &keys_validate_params,
      &serialization_context);
  params->keys.Set(
      keys_writer.is_null() ? nullptr : keys_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->keys.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null keys in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::CacheStorage::KeysCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class CacheStorage_Match_ProxyToResponder {
 public:
  static CacheStorage::MatchCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<CacheStorage_Match_ProxyToResponder> proxy(
        new CacheStorage_Match_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&CacheStorage_Match_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~CacheStorage_Match_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // If we're being destroyed without being run, we want to ensure the
      // binding endpoint has been closed. This checks for that asynchronously.
      // We pass a bound generated callback to handle the response so that any
      // resulting DCHECK stack will have useful interface type information.
      responder_->IsConnectedAsync(base::BindOnce(&OnIsConnectedComplete));
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    responder_ = nullptr;
  }

 private:
  CacheStorage_Match_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "CacheStorage::MatchCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      MatchResultPtr in_result);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(CacheStorage_Match_ProxyToResponder);
};

bool CacheStorage_Match_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "blink::mojom::CacheStorage::MatchCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::CacheStorage_Match_ResponseParams_Data* params =
      reinterpret_cast<
          internal::CacheStorage_Match_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  MatchResultPtr p_result{};
  CacheStorage_Match_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadResult(&p_result))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "CacheStorage::Match response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_result));
  return true;
}

void CacheStorage_Match_ProxyToResponder::Run(
    MatchResultPtr in_result) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kCacheStorage_Match_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::CacheStorage_Match_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->result)::BufferWriter result_writer;
  result_writer.AllocateInline(buffer, &params->result);
  mojo::internal::Serialize<::blink::mojom::MatchResultDataView>(
      in_result, buffer, &result_writer, true, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->result.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null result in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::CacheStorage::MatchCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class CacheStorage_Open_ProxyToResponder {
 public:
  static CacheStorage::OpenCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<CacheStorage_Open_ProxyToResponder> proxy(
        new CacheStorage_Open_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&CacheStorage_Open_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~CacheStorage_Open_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // If we're being destroyed without being run, we want to ensure the
      // binding endpoint has been closed. This checks for that asynchronously.
      // We pass a bound generated callback to handle the response so that any
      // resulting DCHECK stack will have useful interface type information.
      responder_->IsConnectedAsync(base::BindOnce(&OnIsConnectedComplete));
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    responder_ = nullptr;
  }

 private:
  CacheStorage_Open_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "CacheStorage::OpenCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      OpenResultPtr in_result);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(CacheStorage_Open_ProxyToResponder);
};

bool CacheStorage_Open_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "blink::mojom::CacheStorage::OpenCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::CacheStorage_Open_ResponseParams_Data* params =
      reinterpret_cast<
          internal::CacheStorage_Open_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  OpenResultPtr p_result{};
  CacheStorage_Open_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadResult(&p_result))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "CacheStorage::Open response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_result));
  return true;
}

void CacheStorage_Open_ProxyToResponder::Run(
    OpenResultPtr in_result) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kCacheStorage_Open_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::CacheStorage_Open_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->result)::BufferWriter result_writer;
  result_writer.AllocateInline(buffer, &params->result);
  mojo::internal::Serialize<::blink::mojom::OpenResultDataView>(
      in_result, buffer, &result_writer, true, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->result.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null result in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::CacheStorage::OpenCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}

// static
bool CacheStorageStubDispatch::Accept(
    CacheStorage* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kCacheStorage_Has_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::CacheStorage::Has",
               "message", message->name());
#endif
      break;
    }
    case internal::kCacheStorage_Delete_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::CacheStorage::Delete",
               "message", message->name());
#endif
      break;
    }
    case internal::kCacheStorage_Keys_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::CacheStorage::Keys",
               "message", message->name());
#endif
      break;
    }
    case internal::kCacheStorage_Match_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::CacheStorage::Match",
               "message", message->name());
#endif
      break;
    }
    case internal::kCacheStorage_Open_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::CacheStorage::Open",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

// static
bool CacheStorageStubDispatch::AcceptWithResponder(
    CacheStorage* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kCacheStorage_Has_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::CacheStorage::Has",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::CacheStorage_Has_Params_Data* params =
          reinterpret_cast<
              internal::CacheStorage_Has_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      base::string16 p_cache_name{};
      CacheStorage_Has_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadCacheName(&p_cache_name))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "CacheStorage::Has deserializer");
        return false;
      }
      CacheStorage::HasCallback callback =
          CacheStorage_Has_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->Has(
std::move(p_cache_name), std::move(callback));
      return true;
    }
    case internal::kCacheStorage_Delete_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::CacheStorage::Delete",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::CacheStorage_Delete_Params_Data* params =
          reinterpret_cast<
              internal::CacheStorage_Delete_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      base::string16 p_cache_name{};
      CacheStorage_Delete_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadCacheName(&p_cache_name))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "CacheStorage::Delete deserializer");
        return false;
      }
      CacheStorage::DeleteCallback callback =
          CacheStorage_Delete_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->Delete(
std::move(p_cache_name), std::move(callback));
      return true;
    }
    case internal::kCacheStorage_Keys_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::CacheStorage::Keys",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::CacheStorage_Keys_Params_Data* params =
          reinterpret_cast<
              internal::CacheStorage_Keys_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      CacheStorage_Keys_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "CacheStorage::Keys deserializer");
        return false;
      }
      CacheStorage::KeysCallback callback =
          CacheStorage_Keys_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->Keys(std::move(callback));
      return true;
    }
    case internal::kCacheStorage_Match_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::CacheStorage::Match",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::CacheStorage_Match_Params_Data* params =
          reinterpret_cast<
              internal::CacheStorage_Match_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::content::ServiceWorkerFetchRequest p_request{};
      QueryParamsPtr p_match_params{};
      CacheStorage_Match_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadRequest(&p_request))
        success = false;
      if (!input_data_view.ReadMatchParams(&p_match_params))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "CacheStorage::Match deserializer");
        return false;
      }
      CacheStorage::MatchCallback callback =
          CacheStorage_Match_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->Match(
std::move(p_request), 
std::move(p_match_params), std::move(callback));
      return true;
    }
    case internal::kCacheStorage_Open_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::CacheStorage::Open",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::CacheStorage_Open_Params_Data* params =
          reinterpret_cast<
              internal::CacheStorage_Open_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      base::string16 p_cache_name{};
      CacheStorage_Open_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadCacheName(&p_cache_name))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "CacheStorage::Open deserializer");
        return false;
      }
      CacheStorage::OpenCallback callback =
          CacheStorage_Open_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->Open(
std::move(p_cache_name), std::move(callback));
      return true;
    }
  }
  return false;
}

bool CacheStorageRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "CacheStorage RequestValidator");

  switch (message->header()->name) {
    case internal::kCacheStorage_Has_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::CacheStorage_Has_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kCacheStorage_Delete_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::CacheStorage_Delete_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kCacheStorage_Keys_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::CacheStorage_Keys_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kCacheStorage_Match_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::CacheStorage_Match_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kCacheStorage_Open_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::CacheStorage_Open_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    default:
      break;
  }

  // Unrecognized message.
  ReportValidationError(
      &validation_context,
      mojo::internal::VALIDATION_ERROR_MESSAGE_HEADER_UNKNOWN_METHOD);
  return false;
}

bool CacheStorageResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "CacheStorage ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kCacheStorage_Has_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::CacheStorage_Has_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kCacheStorage_Delete_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::CacheStorage_Delete_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kCacheStorage_Keys_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::CacheStorage_Keys_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kCacheStorage_Match_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::CacheStorage_Match_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kCacheStorage_Open_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::CacheStorage_Open_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    default:
      break;
  }

  // Unrecognized message.
  ReportValidationError(
      &validation_context,
      mojo::internal::VALIDATION_ERROR_MESSAGE_HEADER_UNKNOWN_METHOD);
  return false;
}
void CacheStorageInterceptorForTesting::Has(const base::string16& cache_name, HasCallback callback) {
  GetForwardingInterface()->Has(std::move(cache_name), std::move(callback));
}
void CacheStorageInterceptorForTesting::Delete(const base::string16& cache_name, DeleteCallback callback) {
  GetForwardingInterface()->Delete(std::move(cache_name), std::move(callback));
}
void CacheStorageInterceptorForTesting::Keys(KeysCallback callback) {
  GetForwardingInterface()->Keys(std::move(callback));
}
void CacheStorageInterceptorForTesting::Match(const ::content::ServiceWorkerFetchRequest& request, QueryParamsPtr match_params, MatchCallback callback) {
  GetForwardingInterface()->Match(std::move(request), std::move(match_params), std::move(callback));
}
void CacheStorageInterceptorForTesting::Open(const base::string16& cache_name, OpenCallback callback) {
  GetForwardingInterface()->Open(std::move(cache_name), std::move(callback));
}
CacheStorageAsyncWaiter::CacheStorageAsyncWaiter(
    CacheStorage* proxy) : proxy_(proxy) {}

CacheStorageAsyncWaiter::~CacheStorageAsyncWaiter() = default;

void CacheStorageAsyncWaiter::Has(
    const base::string16& cache_name, CacheStorageError* out_result) {
  base::RunLoop loop;
  proxy_->Has(std::move(cache_name),
      base::BindOnce(
          [](base::RunLoop* loop,
             CacheStorageError* out_result
,
             CacheStorageError result) {*out_result = std::move(result);
            loop->Quit();
          },
          &loop,
          out_result));
  loop.Run();
}
void CacheStorageAsyncWaiter::Delete(
    const base::string16& cache_name, CacheStorageError* out_result) {
  base::RunLoop loop;
  proxy_->Delete(std::move(cache_name),
      base::BindOnce(
          [](base::RunLoop* loop,
             CacheStorageError* out_result
,
             CacheStorageError result) {*out_result = std::move(result);
            loop->Quit();
          },
          &loop,
          out_result));
  loop.Run();
}
void CacheStorageAsyncWaiter::Keys(
    std::vector<base::string16>* out_keys) {
  base::RunLoop loop;
  proxy_->Keys(
      base::BindOnce(
          [](base::RunLoop* loop,
             std::vector<base::string16>* out_keys
,
             const std::vector<base::string16>& keys) {*out_keys = std::move(keys);
            loop->Quit();
          },
          &loop,
          out_keys));
  loop.Run();
}
void CacheStorageAsyncWaiter::Match(
    const ::content::ServiceWorkerFetchRequest& request, QueryParamsPtr match_params, MatchResultPtr* out_result) {
  base::RunLoop loop;
  proxy_->Match(std::move(request),std::move(match_params),
      base::BindOnce(
          [](base::RunLoop* loop,
             MatchResultPtr* out_result
,
             MatchResultPtr result) {*out_result = std::move(result);
            loop->Quit();
          },
          &loop,
          out_result));
  loop.Run();
}
void CacheStorageAsyncWaiter::Open(
    const base::string16& cache_name, OpenResultPtr* out_result) {
  base::RunLoop loop;
  proxy_->Open(std::move(cache_name),
      base::BindOnce(
          [](base::RunLoop* loop,
             OpenResultPtr* out_result
,
             OpenResultPtr result) {*out_result = std::move(result);
            loop->Quit();
          },
          &loop,
          out_result));
  loop.Run();
}

}  // namespace mojom
}  // namespace blink

namespace mojo {


// static
bool StructTraits<::blink::mojom::QueryParams::DataView, ::blink::mojom::QueryParamsPtr>::Read(
    ::blink::mojom::QueryParams::DataView input,
    ::blink::mojom::QueryParamsPtr* output) {
  bool success = true;
  ::blink::mojom::QueryParamsPtr result(::blink::mojom::QueryParams::New());
  
      result->ignore_search = input.ignore_search();
      result->ignore_method = input.ignore_method();
      result->ignore_vary = input.ignore_vary();
      if (!input.ReadCacheName(&result->cache_name))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::blink::mojom::BatchOperation::DataView, ::blink::mojom::BatchOperationPtr>::Read(
    ::blink::mojom::BatchOperation::DataView input,
    ::blink::mojom::BatchOperationPtr* output) {
  bool success = true;
  ::blink::mojom::BatchOperationPtr result(::blink::mojom::BatchOperation::New());
  
      if (!input.ReadOperationType(&result->operation_type))
        success = false;
      if (!input.ReadRequest(&result->request))
        success = false;
      if (!input.ReadResponse(&result->response))
        success = false;
      if (!input.ReadMatchParams(&result->match_params))
        success = false;
  *output = std::move(result);
  return success;
}

// static
bool UnionTraits<::blink::mojom::OpenResult::DataView, ::blink::mojom::OpenResultPtr>::Read(
    ::blink::mojom::OpenResult::DataView input,
    ::blink::mojom::OpenResultPtr* output) {
  using UnionType = ::blink::mojom::OpenResult;
  using Tag = UnionType::Tag;

  switch (input.tag()) {
    case Tag::STATUS: {
      ::blink::mojom::CacheStorageError result_status;
      if (!input.ReadStatus(&result_status))
        return false;

      *output = UnionType::NewStatus(result_status);
      break;
    }
    case Tag::CACHE: {
      *output = UnionType::NewCache(
          input.TakeCache<::blink::mojom::CacheStorageCacheAssociatedPtrInfo>());
      break;
    }
    default:
      return false;
  }
  return true;
}

// static
bool UnionTraits<::blink::mojom::MatchResult::DataView, ::blink::mojom::MatchResultPtr>::Read(
    ::blink::mojom::MatchResult::DataView input,
    ::blink::mojom::MatchResultPtr* output) {
  using UnionType = ::blink::mojom::MatchResult;
  using Tag = UnionType::Tag;

  switch (input.tag()) {
    case Tag::STATUS: {
      ::blink::mojom::CacheStorageError result_status;
      if (!input.ReadStatus(&result_status))
        return false;

      *output = UnionType::NewStatus(result_status);
      break;
    }
    case Tag::RESPONSE: {
      ::content::ServiceWorkerResponse result_response;
      if (!input.ReadResponse(&result_response))
        return false;

      *output = UnionType::NewResponse(
          std::move(result_response));
      break;
    }
    default:
      return false;
  }
  return true;
}

// static
bool UnionTraits<::blink::mojom::MatchAllResult::DataView, ::blink::mojom::MatchAllResultPtr>::Read(
    ::blink::mojom::MatchAllResult::DataView input,
    ::blink::mojom::MatchAllResultPtr* output) {
  using UnionType = ::blink::mojom::MatchAllResult;
  using Tag = UnionType::Tag;

  switch (input.tag()) {
    case Tag::STATUS: {
      ::blink::mojom::CacheStorageError result_status;
      if (!input.ReadStatus(&result_status))
        return false;

      *output = UnionType::NewStatus(result_status);
      break;
    }
    case Tag::RESPONSES: {
      std::vector<::content::ServiceWorkerResponse> result_responses;
      if (!input.ReadResponses(&result_responses))
        return false;

      *output = UnionType::NewResponses(
          std::move(result_responses));
      break;
    }
    default:
      return false;
  }
  return true;
}

// static
bool UnionTraits<::blink::mojom::CacheKeysResult::DataView, ::blink::mojom::CacheKeysResultPtr>::Read(
    ::blink::mojom::CacheKeysResult::DataView input,
    ::blink::mojom::CacheKeysResultPtr* output) {
  using UnionType = ::blink::mojom::CacheKeysResult;
  using Tag = UnionType::Tag;

  switch (input.tag()) {
    case Tag::STATUS: {
      ::blink::mojom::CacheStorageError result_status;
      if (!input.ReadStatus(&result_status))
        return false;

      *output = UnionType::NewStatus(result_status);
      break;
    }
    case Tag::KEYS: {
      std::vector<::content::ServiceWorkerFetchRequest> result_keys;
      if (!input.ReadKeys(&result_keys))
        return false;

      *output = UnionType::NewKeys(
          std::move(result_keys));
      break;
    }
    default:
      return false;
  }
  return true;
}

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif