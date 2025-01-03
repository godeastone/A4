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

#include "third_party/blink/public/mojom/blob/blob_url_store.mojom-blink.h"

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

#include "third_party/blink/public/mojom/blob/blob_url_store.mojom-shared-message-ids.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"
#include "third_party/blink/renderer/platform/mojo/kurl_struct_traits.h"
namespace blink {
namespace mojom {
namespace blink {
const char BlobURLStore::Name_[] = "blink.mojom.BlobURLStore";
bool BlobURLStore::Register(::blink::mojom::blink::BlobPtr blob, const ::blink::KURL& url) {
  NOTREACHED();
  return false;
}
class BlobURLStore_Register_HandleSyncResponse
    : public mojo::MessageReceiver {
 public:
  BlobURLStore_Register_HandleSyncResponse(
      bool* result)
      : result_(result) {
    DCHECK(!*result_);
  }
  bool Accept(mojo::Message* message) override;
 private:
  bool* result_;DISALLOW_COPY_AND_ASSIGN(BlobURLStore_Register_HandleSyncResponse);
};

class BlobURLStore_Register_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  BlobURLStore_Register_ForwardToCallback(
      BlobURLStore::RegisterCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  BlobURLStore::RegisterCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(BlobURLStore_Register_ForwardToCallback);
};

class BlobURLStore_Resolve_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  BlobURLStore_Resolve_ForwardToCallback(
      BlobURLStore::ResolveCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  BlobURLStore::ResolveCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(BlobURLStore_Resolve_ForwardToCallback);
};

BlobURLStoreProxy::BlobURLStoreProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}
bool BlobURLStoreProxy::Register(
    ::blink::mojom::blink::BlobPtr param_blob, const ::blink::KURL& param_url) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "blink::mojom::BlobURLStore::Register");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = true;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kBlobURLStore_Register_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::BlobURLStore_Register_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::blink::mojom::BlobPtrDataView>(
      param_blob, &params->blob, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->blob),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid blob in BlobURLStore.Register request");
  typename decltype(params->url)::BaseType::BufferWriter
      url_writer;
  mojo::internal::Serialize<::url::mojom::UrlDataView>(
      param_url, buffer, &url_writer, &serialization_context);
  params->url.Set(
      url_writer.is_null() ? nullptr : url_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->url.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null url in BlobURLStore.Register request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

  bool result = false;
  std::unique_ptr<mojo::MessageReceiver> responder(
      new BlobURLStore_Register_HandleSyncResponse(
          &result));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
  return result;
}

void BlobURLStoreProxy::Register(
    ::blink::mojom::blink::BlobPtr in_blob, const ::blink::KURL& in_url, RegisterCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "blink::mojom::BlobURLStore::Register");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kBlobURLStore_Register_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::BlobURLStore_Register_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::blink::mojom::BlobPtrDataView>(
      in_blob, &params->blob, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->blob),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid blob in BlobURLStore.Register request");
  typename decltype(params->url)::BaseType::BufferWriter
      url_writer;
  mojo::internal::Serialize<::url::mojom::UrlDataView>(
      in_url, buffer, &url_writer, &serialization_context);
  params->url.Set(
      url_writer.is_null() ? nullptr : url_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->url.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null url in BlobURLStore.Register request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new BlobURLStore_Register_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void BlobURLStoreProxy::Revoke(
    const ::blink::KURL& in_url) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "blink::mojom::BlobURLStore::Revoke");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kBlobURLStore_Revoke_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::BlobURLStore_Revoke_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->url)::BaseType::BufferWriter
      url_writer;
  mojo::internal::Serialize<::url::mojom::UrlDataView>(
      in_url, buffer, &url_writer, &serialization_context);
  params->url.Set(
      url_writer.is_null() ? nullptr : url_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->url.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null url in BlobURLStore.Revoke request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void BlobURLStoreProxy::Resolve(
    const ::blink::KURL& in_url, ResolveCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "blink::mojom::BlobURLStore::Resolve");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kBlobURLStore_Resolve_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::BlobURLStore_Resolve_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->url)::BaseType::BufferWriter
      url_writer;
  mojo::internal::Serialize<::url::mojom::UrlDataView>(
      in_url, buffer, &url_writer, &serialization_context);
  params->url.Set(
      url_writer.is_null() ? nullptr : url_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->url.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null url in BlobURLStore.Resolve request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new BlobURLStore_Resolve_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void BlobURLStoreProxy::ResolveAsURLLoaderFactory(
    const ::blink::KURL& in_url, ::network::mojom::blink::URLLoaderFactoryRequest in_factory) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "blink::mojom::BlobURLStore::ResolveAsURLLoaderFactory");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kBlobURLStore_ResolveAsURLLoaderFactory_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::BlobURLStore_ResolveAsURLLoaderFactory_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->url)::BaseType::BufferWriter
      url_writer;
  mojo::internal::Serialize<::url::mojom::UrlDataView>(
      in_url, buffer, &url_writer, &serialization_context);
  params->url.Set(
      url_writer.is_null() ? nullptr : url_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->url.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null url in BlobURLStore.ResolveAsURLLoaderFactory request");
  mojo::internal::Serialize<::network::mojom::URLLoaderFactoryRequestDataView>(
      in_factory, &params->factory, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->factory),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid factory in BlobURLStore.ResolveAsURLLoaderFactory request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void BlobURLStoreProxy::ResolveForNavigation(
    const ::blink::KURL& in_url, BlobURLTokenRequest in_token) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "blink::mojom::BlobURLStore::ResolveForNavigation");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kBlobURLStore_ResolveForNavigation_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::BlobURLStore_ResolveForNavigation_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->url)::BaseType::BufferWriter
      url_writer;
  mojo::internal::Serialize<::url::mojom::UrlDataView>(
      in_url, buffer, &url_writer, &serialization_context);
  params->url.Set(
      url_writer.is_null() ? nullptr : url_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->url.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null url in BlobURLStore.ResolveForNavigation request");
  mojo::internal::Serialize<::blink::mojom::BlobURLTokenRequestDataView>(
      in_token, &params->token, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->token),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid token in BlobURLStore.ResolveForNavigation request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}
class BlobURLStore_Register_ProxyToResponder {
 public:
  static BlobURLStore::RegisterCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<BlobURLStore_Register_ProxyToResponder> proxy(
        new BlobURLStore_Register_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&BlobURLStore_Register_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~BlobURLStore_Register_ProxyToResponder() {
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
  BlobURLStore_Register_ProxyToResponder(
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
        << "BlobURLStore::RegisterCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      );

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(BlobURLStore_Register_ProxyToResponder);
};

bool BlobURLStore_Register_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "blink::mojom::BlobURLStore::RegisterCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::BlobURLStore_Register_ResponseParams_Data* params =
      reinterpret_cast<
          internal::BlobURLStore_Register_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  BlobURLStore_Register_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "BlobURLStore::Register response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run();
  return true;
}

void BlobURLStore_Register_ProxyToResponder::Run(
    ) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kBlobURLStore_Register_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::BlobURLStore_Register_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::BlobURLStore::RegisterCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
bool BlobURLStore_Register_HandleSyncResponse::Accept(
    mojo::Message* message) {

  DCHECK(message->is_serialized());
  internal::BlobURLStore_Register_ResponseParams_Data* params =
      reinterpret_cast<internal::BlobURLStore_Register_ResponseParams_Data*>(
          message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  BlobURLStore_Register_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "BlobURLStore::Register response deserializer");
    return false;
  }
  mojo::internal::SyncMessageResponseSetup::SetCurrentSyncResponseMessage(
      message);
  *result_ = true;
  return true;
}
class BlobURLStore_Resolve_ProxyToResponder {
 public:
  static BlobURLStore::ResolveCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<BlobURLStore_Resolve_ProxyToResponder> proxy(
        new BlobURLStore_Resolve_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&BlobURLStore_Resolve_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~BlobURLStore_Resolve_ProxyToResponder() {
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
  BlobURLStore_Resolve_ProxyToResponder(
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
        << "BlobURLStore::ResolveCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      ::blink::mojom::blink::BlobPtr in_blob);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(BlobURLStore_Resolve_ProxyToResponder);
};

bool BlobURLStore_Resolve_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "blink::mojom::BlobURLStore::ResolveCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::BlobURLStore_Resolve_ResponseParams_Data* params =
      reinterpret_cast<
          internal::BlobURLStore_Resolve_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  ::blink::mojom::blink::BlobPtr p_blob{};
  BlobURLStore_Resolve_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_blob =
      input_data_view.TakeBlob<decltype(p_blob)>();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "BlobURLStore::Resolve response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_blob));
  return true;
}

void BlobURLStore_Resolve_ProxyToResponder::Run(
    ::blink::mojom::blink::BlobPtr in_blob) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kBlobURLStore_Resolve_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::BlobURLStore_Resolve_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::blink::mojom::BlobPtrDataView>(
      in_blob, &params->blob, &serialization_context);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::BlobURLStore::ResolveCallback",
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
bool BlobURLStoreStubDispatch::Accept(
    BlobURLStore* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kBlobURLStore_Register_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::BlobURLStore::Register",
               "message", message->name());
#endif
      break;
    }
    case internal::kBlobURLStore_Revoke_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::BlobURLStore::Revoke",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::BlobURLStore_Revoke_Params_Data* params =
          reinterpret_cast<internal::BlobURLStore_Revoke_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::blink::KURL p_url{};
      BlobURLStore_Revoke_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadUrl(&p_url))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "BlobURLStore::Revoke deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->Revoke(
std::move(p_url));
      return true;
    }
    case internal::kBlobURLStore_Resolve_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::BlobURLStore::Resolve",
               "message", message->name());
#endif
      break;
    }
    case internal::kBlobURLStore_ResolveAsURLLoaderFactory_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::BlobURLStore::ResolveAsURLLoaderFactory",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::BlobURLStore_ResolveAsURLLoaderFactory_Params_Data* params =
          reinterpret_cast<internal::BlobURLStore_ResolveAsURLLoaderFactory_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::blink::KURL p_url{};
      ::network::mojom::blink::URLLoaderFactoryRequest p_factory{};
      BlobURLStore_ResolveAsURLLoaderFactory_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadUrl(&p_url))
        success = false;
      p_factory =
          input_data_view.TakeFactory<decltype(p_factory)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "BlobURLStore::ResolveAsURLLoaderFactory deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->ResolveAsURLLoaderFactory(
std::move(p_url), 
std::move(p_factory));
      return true;
    }
    case internal::kBlobURLStore_ResolveForNavigation_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::BlobURLStore::ResolveForNavigation",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::BlobURLStore_ResolveForNavigation_Params_Data* params =
          reinterpret_cast<internal::BlobURLStore_ResolveForNavigation_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::blink::KURL p_url{};
      BlobURLTokenRequest p_token{};
      BlobURLStore_ResolveForNavigation_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadUrl(&p_url))
        success = false;
      p_token =
          input_data_view.TakeToken<decltype(p_token)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "BlobURLStore::ResolveForNavigation deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->ResolveForNavigation(
std::move(p_url), 
std::move(p_token));
      return true;
    }
  }
  return false;
}

// static
bool BlobURLStoreStubDispatch::AcceptWithResponder(
    BlobURLStore* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kBlobURLStore_Register_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::BlobURLStore::Register",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::BlobURLStore_Register_Params_Data* params =
          reinterpret_cast<
              internal::BlobURLStore_Register_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::blink::mojom::blink::BlobPtr p_blob{};
      ::blink::KURL p_url{};
      BlobURLStore_Register_ParamsDataView input_data_view(params, &serialization_context);
      
      p_blob =
          input_data_view.TakeBlob<decltype(p_blob)>();
      if (!input_data_view.ReadUrl(&p_url))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "BlobURLStore::Register deserializer");
        return false;
      }
      BlobURLStore::RegisterCallback callback =
          BlobURLStore_Register_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->Register(
std::move(p_blob), 
std::move(p_url), std::move(callback));
      return true;
    }
    case internal::kBlobURLStore_Revoke_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::BlobURLStore::Revoke",
               "message", message->name());
#endif
      break;
    }
    case internal::kBlobURLStore_Resolve_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::BlobURLStore::Resolve",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::BlobURLStore_Resolve_Params_Data* params =
          reinterpret_cast<
              internal::BlobURLStore_Resolve_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::blink::KURL p_url{};
      BlobURLStore_Resolve_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadUrl(&p_url))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "BlobURLStore::Resolve deserializer");
        return false;
      }
      BlobURLStore::ResolveCallback callback =
          BlobURLStore_Resolve_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->Resolve(
std::move(p_url), std::move(callback));
      return true;
    }
    case internal::kBlobURLStore_ResolveAsURLLoaderFactory_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::BlobURLStore::ResolveAsURLLoaderFactory",
               "message", message->name());
#endif
      break;
    }
    case internal::kBlobURLStore_ResolveForNavigation_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::BlobURLStore::ResolveForNavigation",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool BlobURLStoreRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "BlobURLStore RequestValidator");

  switch (message->header()->name) {
    case internal::kBlobURLStore_Register_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::BlobURLStore_Register_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kBlobURLStore_Revoke_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::BlobURLStore_Revoke_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kBlobURLStore_Resolve_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::BlobURLStore_Resolve_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kBlobURLStore_ResolveAsURLLoaderFactory_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::BlobURLStore_ResolveAsURLLoaderFactory_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kBlobURLStore_ResolveForNavigation_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::BlobURLStore_ResolveForNavigation_Params_Data>(
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

bool BlobURLStoreResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "BlobURLStore ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kBlobURLStore_Register_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::BlobURLStore_Register_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kBlobURLStore_Resolve_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::BlobURLStore_Resolve_ResponseParams_Data>(
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
void BlobURLStoreInterceptorForTesting::Register(::blink::mojom::blink::BlobPtr blob, const ::blink::KURL& url, RegisterCallback callback) {
  GetForwardingInterface()->Register(std::move(blob), std::move(url), std::move(callback));
}
void BlobURLStoreInterceptorForTesting::Revoke(const ::blink::KURL& url) {
  GetForwardingInterface()->Revoke(std::move(url));
}
void BlobURLStoreInterceptorForTesting::Resolve(const ::blink::KURL& url, ResolveCallback callback) {
  GetForwardingInterface()->Resolve(std::move(url), std::move(callback));
}
void BlobURLStoreInterceptorForTesting::ResolveAsURLLoaderFactory(const ::blink::KURL& url, ::network::mojom::blink::URLLoaderFactoryRequest factory) {
  GetForwardingInterface()->ResolveAsURLLoaderFactory(std::move(url), std::move(factory));
}
void BlobURLStoreInterceptorForTesting::ResolveForNavigation(const ::blink::KURL& url, BlobURLTokenRequest token) {
  GetForwardingInterface()->ResolveForNavigation(std::move(url), std::move(token));
}
BlobURLStoreAsyncWaiter::BlobURLStoreAsyncWaiter(
    BlobURLStore* proxy) : proxy_(proxy) {}

BlobURLStoreAsyncWaiter::~BlobURLStoreAsyncWaiter() = default;

void BlobURLStoreAsyncWaiter::Register(
    ::blink::mojom::blink::BlobPtr blob, const ::blink::KURL& url) {
  base::RunLoop loop;
  proxy_->Register(std::move(blob),std::move(url),
      base::BindOnce(
          [](base::RunLoop* loop) {
            loop->Quit();
          },
          &loop));
  loop.Run();
}
void BlobURLStoreAsyncWaiter::Resolve(
    const ::blink::KURL& url, ::blink::mojom::blink::BlobPtr* out_blob) {
  base::RunLoop loop;
  proxy_->Resolve(std::move(url),
      base::BindOnce(
          [](base::RunLoop* loop,
             ::blink::mojom::blink::BlobPtr* out_blob
,
             ::blink::mojom::blink::BlobPtr blob) {*out_blob = std::move(blob);
            loop->Quit();
          },
          &loop,
          out_blob));
  loop.Run();
}

const char BlobURLToken::Name_[] = "blink.mojom.BlobURLToken";

class BlobURLToken_GetToken_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  BlobURLToken_GetToken_ForwardToCallback(
      BlobURLToken::GetTokenCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  BlobURLToken::GetTokenCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(BlobURLToken_GetToken_ForwardToCallback);
};

BlobURLTokenProxy::BlobURLTokenProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void BlobURLTokenProxy::Clone(
    BlobURLTokenRequest in_token) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "blink::mojom::BlobURLToken::Clone");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kBlobURLToken_Clone_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::BlobURLToken_Clone_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::blink::mojom::BlobURLTokenRequestDataView>(
      in_token, &params->token, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->token),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid token in BlobURLToken.Clone request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void BlobURLTokenProxy::GetToken(
    GetTokenCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "blink::mojom::BlobURLToken::GetToken");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kBlobURLToken_GetToken_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::BlobURLToken_GetToken_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new BlobURLToken_GetToken_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class BlobURLToken_GetToken_ProxyToResponder {
 public:
  static BlobURLToken::GetTokenCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<BlobURLToken_GetToken_ProxyToResponder> proxy(
        new BlobURLToken_GetToken_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&BlobURLToken_GetToken_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~BlobURLToken_GetToken_ProxyToResponder() {
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
  BlobURLToken_GetToken_ProxyToResponder(
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
        << "BlobURLToken::GetTokenCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      ::mojo_base::mojom::blink::UnguessableTokenPtr in_token);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(BlobURLToken_GetToken_ProxyToResponder);
};

bool BlobURLToken_GetToken_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "blink::mojom::BlobURLToken::GetTokenCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::BlobURLToken_GetToken_ResponseParams_Data* params =
      reinterpret_cast<
          internal::BlobURLToken_GetToken_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  ::mojo_base::mojom::blink::UnguessableTokenPtr p_token{};
  BlobURLToken_GetToken_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadToken(&p_token))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "BlobURLToken::GetToken response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_token));
  return true;
}

void BlobURLToken_GetToken_ProxyToResponder::Run(
    ::mojo_base::mojom::blink::UnguessableTokenPtr in_token) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kBlobURLToken_GetToken_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::BlobURLToken_GetToken_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->token)::BaseType::BufferWriter
      token_writer;
  mojo::internal::Serialize<::mojo_base::mojom::UnguessableTokenDataView>(
      in_token, buffer, &token_writer, &serialization_context);
  params->token.Set(
      token_writer.is_null() ? nullptr : token_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->token.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null token in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::BlobURLToken::GetTokenCallback",
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
bool BlobURLTokenStubDispatch::Accept(
    BlobURLToken* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kBlobURLToken_Clone_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::BlobURLToken::Clone",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::BlobURLToken_Clone_Params_Data* params =
          reinterpret_cast<internal::BlobURLToken_Clone_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      BlobURLTokenRequest p_token{};
      BlobURLToken_Clone_ParamsDataView input_data_view(params, &serialization_context);
      
      p_token =
          input_data_view.TakeToken<decltype(p_token)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "BlobURLToken::Clone deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->Clone(
std::move(p_token));
      return true;
    }
    case internal::kBlobURLToken_GetToken_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::BlobURLToken::GetToken",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

// static
bool BlobURLTokenStubDispatch::AcceptWithResponder(
    BlobURLToken* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kBlobURLToken_Clone_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::BlobURLToken::Clone",
               "message", message->name());
#endif
      break;
    }
    case internal::kBlobURLToken_GetToken_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::BlobURLToken::GetToken",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::BlobURLToken_GetToken_Params_Data* params =
          reinterpret_cast<
              internal::BlobURLToken_GetToken_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      BlobURLToken_GetToken_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "BlobURLToken::GetToken deserializer");
        return false;
      }
      BlobURLToken::GetTokenCallback callback =
          BlobURLToken_GetToken_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->GetToken(std::move(callback));
      return true;
    }
  }
  return false;
}

bool BlobURLTokenRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "BlobURLToken RequestValidator");

  switch (message->header()->name) {
    case internal::kBlobURLToken_Clone_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::BlobURLToken_Clone_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kBlobURLToken_GetToken_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::BlobURLToken_GetToken_Params_Data>(
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

bool BlobURLTokenResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "BlobURLToken ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kBlobURLToken_GetToken_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::BlobURLToken_GetToken_ResponseParams_Data>(
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
void BlobURLTokenInterceptorForTesting::Clone(BlobURLTokenRequest token) {
  GetForwardingInterface()->Clone(std::move(token));
}
void BlobURLTokenInterceptorForTesting::GetToken(GetTokenCallback callback) {
  GetForwardingInterface()->GetToken(std::move(callback));
}
BlobURLTokenAsyncWaiter::BlobURLTokenAsyncWaiter(
    BlobURLToken* proxy) : proxy_(proxy) {}

BlobURLTokenAsyncWaiter::~BlobURLTokenAsyncWaiter() = default;

void BlobURLTokenAsyncWaiter::GetToken(
    ::mojo_base::mojom::blink::UnguessableTokenPtr* out_token) {
  base::RunLoop loop;
  proxy_->GetToken(
      base::BindOnce(
          [](base::RunLoop* loop,
             ::mojo_base::mojom::blink::UnguessableTokenPtr* out_token
,
             ::mojo_base::mojom::blink::UnguessableTokenPtr token) {*out_token = std::move(token);
            loop->Quit();
          },
          &loop,
          out_token));
  loop.Run();
}

}  // namespace blink
}  // namespace mojom
}  // namespace blink

namespace mojo {

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif