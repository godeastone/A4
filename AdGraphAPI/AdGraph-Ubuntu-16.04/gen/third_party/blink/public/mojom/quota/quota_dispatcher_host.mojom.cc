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

#include "third_party/blink/public/mojom/quota/quota_dispatcher_host.mojom.h"

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

#include "third_party/blink/public/mojom/quota/quota_dispatcher_host.mojom-shared-message-ids.h"
#include "url/mojom/origin_mojom_traits.h"
namespace blink {
namespace mojom {
const char QuotaDispatcherHost::Name_[] = "blink.mojom.QuotaDispatcherHost";

class QuotaDispatcherHost_QueryStorageUsageAndQuota_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  QuotaDispatcherHost_QueryStorageUsageAndQuota_ForwardToCallback(
      QuotaDispatcherHost::QueryStorageUsageAndQuotaCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  QuotaDispatcherHost::QueryStorageUsageAndQuotaCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(QuotaDispatcherHost_QueryStorageUsageAndQuota_ForwardToCallback);
};

class QuotaDispatcherHost_RequestStorageQuota_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  QuotaDispatcherHost_RequestStorageQuota_ForwardToCallback(
      QuotaDispatcherHost::RequestStorageQuotaCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  QuotaDispatcherHost::RequestStorageQuotaCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(QuotaDispatcherHost_RequestStorageQuota_ForwardToCallback);
};

QuotaDispatcherHostProxy::QuotaDispatcherHostProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void QuotaDispatcherHostProxy::QueryStorageUsageAndQuota(
    const url::Origin& in_origin, ::blink::mojom::StorageType in_storage_type, QueryStorageUsageAndQuotaCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "blink::mojom::QuotaDispatcherHost::QueryStorageUsageAndQuota");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kQuotaDispatcherHost_QueryStorageUsageAndQuota_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::QuotaDispatcherHost_QueryStorageUsageAndQuota_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->origin)::BaseType::BufferWriter
      origin_writer;
  mojo::internal::Serialize<::url::mojom::OriginDataView>(
      in_origin, buffer, &origin_writer, &serialization_context);
  params->origin.Set(
      origin_writer.is_null() ? nullptr : origin_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->origin.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null origin in QuotaDispatcherHost.QueryStorageUsageAndQuota request");
  mojo::internal::Serialize<::blink::mojom::StorageType>(
      in_storage_type, &params->storage_type);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new QuotaDispatcherHost_QueryStorageUsageAndQuota_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void QuotaDispatcherHostProxy::RequestStorageQuota(
    const url::Origin& in_origin, ::blink::mojom::StorageType in_storage_type, uint64_t in_requested_size, RequestStorageQuotaCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "blink::mojom::QuotaDispatcherHost::RequestStorageQuota");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kQuotaDispatcherHost_RequestStorageQuota_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::QuotaDispatcherHost_RequestStorageQuota_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->origin)::BaseType::BufferWriter
      origin_writer;
  mojo::internal::Serialize<::url::mojom::OriginDataView>(
      in_origin, buffer, &origin_writer, &serialization_context);
  params->origin.Set(
      origin_writer.is_null() ? nullptr : origin_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->origin.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null origin in QuotaDispatcherHost.RequestStorageQuota request");
  mojo::internal::Serialize<::blink::mojom::StorageType>(
      in_storage_type, &params->storage_type);
  params->requested_size = in_requested_size;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new QuotaDispatcherHost_RequestStorageQuota_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class QuotaDispatcherHost_QueryStorageUsageAndQuota_ProxyToResponder {
 public:
  static QuotaDispatcherHost::QueryStorageUsageAndQuotaCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<QuotaDispatcherHost_QueryStorageUsageAndQuota_ProxyToResponder> proxy(
        new QuotaDispatcherHost_QueryStorageUsageAndQuota_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&QuotaDispatcherHost_QueryStorageUsageAndQuota_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~QuotaDispatcherHost_QueryStorageUsageAndQuota_ProxyToResponder() {
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
  QuotaDispatcherHost_QueryStorageUsageAndQuota_ProxyToResponder(
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
        << "QuotaDispatcherHost::QueryStorageUsageAndQuotaCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      ::blink::mojom::QuotaStatusCode in_error, int64_t in_current_usage, int64_t in_current_quota);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(QuotaDispatcherHost_QueryStorageUsageAndQuota_ProxyToResponder);
};

bool QuotaDispatcherHost_QueryStorageUsageAndQuota_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "blink::mojom::QuotaDispatcherHost::QueryStorageUsageAndQuotaCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::QuotaDispatcherHost_QueryStorageUsageAndQuota_ResponseParams_Data* params =
      reinterpret_cast<
          internal::QuotaDispatcherHost_QueryStorageUsageAndQuota_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  ::blink::mojom::QuotaStatusCode p_error{};
  int64_t p_current_usage{};
  int64_t p_current_quota{};
  QuotaDispatcherHost_QueryStorageUsageAndQuota_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadError(&p_error))
    success = false;
  p_current_usage = input_data_view.current_usage();
  p_current_quota = input_data_view.current_quota();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "QuotaDispatcherHost::QueryStorageUsageAndQuota response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_error), 
std::move(p_current_usage), 
std::move(p_current_quota));
  return true;
}

void QuotaDispatcherHost_QueryStorageUsageAndQuota_ProxyToResponder::Run(
    ::blink::mojom::QuotaStatusCode in_error, int64_t in_current_usage, int64_t in_current_quota) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kQuotaDispatcherHost_QueryStorageUsageAndQuota_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::QuotaDispatcherHost_QueryStorageUsageAndQuota_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::blink::mojom::QuotaStatusCode>(
      in_error, &params->error);
  params->current_usage = in_current_usage;
  params->current_quota = in_current_quota;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::QuotaDispatcherHost::QueryStorageUsageAndQuotaCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class QuotaDispatcherHost_RequestStorageQuota_ProxyToResponder {
 public:
  static QuotaDispatcherHost::RequestStorageQuotaCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<QuotaDispatcherHost_RequestStorageQuota_ProxyToResponder> proxy(
        new QuotaDispatcherHost_RequestStorageQuota_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&QuotaDispatcherHost_RequestStorageQuota_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~QuotaDispatcherHost_RequestStorageQuota_ProxyToResponder() {
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
  QuotaDispatcherHost_RequestStorageQuota_ProxyToResponder(
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
        << "QuotaDispatcherHost::RequestStorageQuotaCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      ::blink::mojom::QuotaStatusCode in_error, int64_t in_current_usage, int64_t in_granted_quota);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(QuotaDispatcherHost_RequestStorageQuota_ProxyToResponder);
};

bool QuotaDispatcherHost_RequestStorageQuota_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "blink::mojom::QuotaDispatcherHost::RequestStorageQuotaCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::QuotaDispatcherHost_RequestStorageQuota_ResponseParams_Data* params =
      reinterpret_cast<
          internal::QuotaDispatcherHost_RequestStorageQuota_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  ::blink::mojom::QuotaStatusCode p_error{};
  int64_t p_current_usage{};
  int64_t p_granted_quota{};
  QuotaDispatcherHost_RequestStorageQuota_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadError(&p_error))
    success = false;
  p_current_usage = input_data_view.current_usage();
  p_granted_quota = input_data_view.granted_quota();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "QuotaDispatcherHost::RequestStorageQuota response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_error), 
std::move(p_current_usage), 
std::move(p_granted_quota));
  return true;
}

void QuotaDispatcherHost_RequestStorageQuota_ProxyToResponder::Run(
    ::blink::mojom::QuotaStatusCode in_error, int64_t in_current_usage, int64_t in_granted_quota) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kQuotaDispatcherHost_RequestStorageQuota_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::QuotaDispatcherHost_RequestStorageQuota_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::blink::mojom::QuotaStatusCode>(
      in_error, &params->error);
  params->current_usage = in_current_usage;
  params->granted_quota = in_granted_quota;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::QuotaDispatcherHost::RequestStorageQuotaCallback",
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
bool QuotaDispatcherHostStubDispatch::Accept(
    QuotaDispatcherHost* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kQuotaDispatcherHost_QueryStorageUsageAndQuota_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::QuotaDispatcherHost::QueryStorageUsageAndQuota",
               "message", message->name());
#endif
      break;
    }
    case internal::kQuotaDispatcherHost_RequestStorageQuota_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::QuotaDispatcherHost::RequestStorageQuota",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

// static
bool QuotaDispatcherHostStubDispatch::AcceptWithResponder(
    QuotaDispatcherHost* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kQuotaDispatcherHost_QueryStorageUsageAndQuota_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::QuotaDispatcherHost::QueryStorageUsageAndQuota",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::QuotaDispatcherHost_QueryStorageUsageAndQuota_Params_Data* params =
          reinterpret_cast<
              internal::QuotaDispatcherHost_QueryStorageUsageAndQuota_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      url::Origin p_origin{};
      ::blink::mojom::StorageType p_storage_type{};
      QuotaDispatcherHost_QueryStorageUsageAndQuota_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadOrigin(&p_origin))
        success = false;
      if (!input_data_view.ReadStorageType(&p_storage_type))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "QuotaDispatcherHost::QueryStorageUsageAndQuota deserializer");
        return false;
      }
      QuotaDispatcherHost::QueryStorageUsageAndQuotaCallback callback =
          QuotaDispatcherHost_QueryStorageUsageAndQuota_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->QueryStorageUsageAndQuota(
std::move(p_origin), 
std::move(p_storage_type), std::move(callback));
      return true;
    }
    case internal::kQuotaDispatcherHost_RequestStorageQuota_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::QuotaDispatcherHost::RequestStorageQuota",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::QuotaDispatcherHost_RequestStorageQuota_Params_Data* params =
          reinterpret_cast<
              internal::QuotaDispatcherHost_RequestStorageQuota_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      url::Origin p_origin{};
      ::blink::mojom::StorageType p_storage_type{};
      uint64_t p_requested_size{};
      QuotaDispatcherHost_RequestStorageQuota_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadOrigin(&p_origin))
        success = false;
      if (!input_data_view.ReadStorageType(&p_storage_type))
        success = false;
      p_requested_size = input_data_view.requested_size();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "QuotaDispatcherHost::RequestStorageQuota deserializer");
        return false;
      }
      QuotaDispatcherHost::RequestStorageQuotaCallback callback =
          QuotaDispatcherHost_RequestStorageQuota_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->RequestStorageQuota(
std::move(p_origin), 
std::move(p_storage_type), 
std::move(p_requested_size), std::move(callback));
      return true;
    }
  }
  return false;
}

bool QuotaDispatcherHostRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "QuotaDispatcherHost RequestValidator");

  switch (message->header()->name) {
    case internal::kQuotaDispatcherHost_QueryStorageUsageAndQuota_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::QuotaDispatcherHost_QueryStorageUsageAndQuota_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kQuotaDispatcherHost_RequestStorageQuota_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::QuotaDispatcherHost_RequestStorageQuota_Params_Data>(
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

bool QuotaDispatcherHostResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "QuotaDispatcherHost ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kQuotaDispatcherHost_QueryStorageUsageAndQuota_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::QuotaDispatcherHost_QueryStorageUsageAndQuota_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kQuotaDispatcherHost_RequestStorageQuota_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::QuotaDispatcherHost_RequestStorageQuota_ResponseParams_Data>(
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
void QuotaDispatcherHostInterceptorForTesting::QueryStorageUsageAndQuota(const url::Origin& origin, ::blink::mojom::StorageType storage_type, QueryStorageUsageAndQuotaCallback callback) {
  GetForwardingInterface()->QueryStorageUsageAndQuota(std::move(origin), std::move(storage_type), std::move(callback));
}
void QuotaDispatcherHostInterceptorForTesting::RequestStorageQuota(const url::Origin& origin, ::blink::mojom::StorageType storage_type, uint64_t requested_size, RequestStorageQuotaCallback callback) {
  GetForwardingInterface()->RequestStorageQuota(std::move(origin), std::move(storage_type), std::move(requested_size), std::move(callback));
}
QuotaDispatcherHostAsyncWaiter::QuotaDispatcherHostAsyncWaiter(
    QuotaDispatcherHost* proxy) : proxy_(proxy) {}

QuotaDispatcherHostAsyncWaiter::~QuotaDispatcherHostAsyncWaiter() = default;

void QuotaDispatcherHostAsyncWaiter::QueryStorageUsageAndQuota(
    const url::Origin& origin, ::blink::mojom::StorageType storage_type, ::blink::mojom::QuotaStatusCode* out_error, int64_t* out_current_usage, int64_t* out_current_quota) {
  base::RunLoop loop;
  proxy_->QueryStorageUsageAndQuota(std::move(origin),std::move(storage_type),
      base::BindOnce(
          [](base::RunLoop* loop,
             ::blink::mojom::QuotaStatusCode* out_error
,
             int64_t* out_current_usage
,
             int64_t* out_current_quota
,
             ::blink::mojom::QuotaStatusCode error,
             int64_t current_usage,
             int64_t current_quota) {*out_error = std::move(error);*out_current_usage = std::move(current_usage);*out_current_quota = std::move(current_quota);
            loop->Quit();
          },
          &loop,
          out_error,
          out_current_usage,
          out_current_quota));
  loop.Run();
}
void QuotaDispatcherHostAsyncWaiter::RequestStorageQuota(
    const url::Origin& origin, ::blink::mojom::StorageType storage_type, uint64_t requested_size, ::blink::mojom::QuotaStatusCode* out_error, int64_t* out_current_usage, int64_t* out_granted_quota) {
  base::RunLoop loop;
  proxy_->RequestStorageQuota(std::move(origin),std::move(storage_type),std::move(requested_size),
      base::BindOnce(
          [](base::RunLoop* loop,
             ::blink::mojom::QuotaStatusCode* out_error
,
             int64_t* out_current_usage
,
             int64_t* out_granted_quota
,
             ::blink::mojom::QuotaStatusCode error,
             int64_t current_usage,
             int64_t granted_quota) {*out_error = std::move(error);*out_current_usage = std::move(current_usage);*out_granted_quota = std::move(granted_quota);
            loop->Quit();
          },
          &loop,
          out_error,
          out_current_usage,
          out_granted_quota));
  loop.Run();
}

}  // namespace mojom
}  // namespace blink

namespace mojo {

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif