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

#include "services/device/public/mojom/wake_lock_provider.mojom-blink.h"

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

#include "services/device/public/mojom/wake_lock_provider.mojom-shared-message-ids.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"
namespace device {
namespace mojom {
namespace blink {
const char WakeLockProvider::Name_[] = "device.mojom.WakeLockProvider";

WakeLockProviderProxy::WakeLockProviderProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void WakeLockProviderProxy::GetWakeLockContextForID(
    int32_t in_context_id, ::device::mojom::blink::WakeLockContextRequest in_context) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "device::mojom::WakeLockProvider::GetWakeLockContextForID");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWakeLockProvider_GetWakeLockContextForID_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::WakeLockProvider_GetWakeLockContextForID_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->context_id = in_context_id;
  mojo::internal::Serialize<::device::mojom::WakeLockContextRequestDataView>(
      in_context, &params->context, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->context),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid context in WakeLockProvider.GetWakeLockContextForID request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WakeLockProviderProxy::GetWakeLockWithoutContext(
    ::device::mojom::blink::WakeLockType in_type, ::device::mojom::blink::WakeLockReason in_reason, const WTF::String& in_description, ::device::mojom::blink::WakeLockRequest in_wake_lock) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "device::mojom::WakeLockProvider::GetWakeLockWithoutContext");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWakeLockProvider_GetWakeLockWithoutContext_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::WakeLockProvider_GetWakeLockWithoutContext_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::device::mojom::WakeLockType>(
      in_type, &params->type);
  mojo::internal::Serialize<::device::mojom::WakeLockReason>(
      in_reason, &params->reason);
  typename decltype(params->description)::BaseType::BufferWriter
      description_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_description, buffer, &description_writer, &serialization_context);
  params->description.Set(
      description_writer.is_null() ? nullptr : description_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->description.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null description in WakeLockProvider.GetWakeLockWithoutContext request");
  mojo::internal::Serialize<::device::mojom::WakeLockRequestDataView>(
      in_wake_lock, &params->wake_lock, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->wake_lock),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid wake_lock in WakeLockProvider.GetWakeLockWithoutContext request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool WakeLockProviderStubDispatch::Accept(
    WakeLockProvider* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kWakeLockProvider_GetWakeLockContextForID_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)device::mojom::WakeLockProvider::GetWakeLockContextForID",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WakeLockProvider_GetWakeLockContextForID_Params_Data* params =
          reinterpret_cast<internal::WakeLockProvider_GetWakeLockContextForID_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int32_t p_context_id{};
      ::device::mojom::blink::WakeLockContextRequest p_context{};
      WakeLockProvider_GetWakeLockContextForID_ParamsDataView input_data_view(params, &serialization_context);
      
      p_context_id = input_data_view.context_id();
      p_context =
          input_data_view.TakeContext<decltype(p_context)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WakeLockProvider::GetWakeLockContextForID deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->GetWakeLockContextForID(
std::move(p_context_id), 
std::move(p_context));
      return true;
    }
    case internal::kWakeLockProvider_GetWakeLockWithoutContext_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)device::mojom::WakeLockProvider::GetWakeLockWithoutContext",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WakeLockProvider_GetWakeLockWithoutContext_Params_Data* params =
          reinterpret_cast<internal::WakeLockProvider_GetWakeLockWithoutContext_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::device::mojom::blink::WakeLockType p_type{};
      ::device::mojom::blink::WakeLockReason p_reason{};
      WTF::String p_description{};
      ::device::mojom::blink::WakeLockRequest p_wake_lock{};
      WakeLockProvider_GetWakeLockWithoutContext_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadType(&p_type))
        success = false;
      if (!input_data_view.ReadReason(&p_reason))
        success = false;
      if (!input_data_view.ReadDescription(&p_description))
        success = false;
      p_wake_lock =
          input_data_view.TakeWakeLock<decltype(p_wake_lock)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WakeLockProvider::GetWakeLockWithoutContext deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->GetWakeLockWithoutContext(
std::move(p_type), 
std::move(p_reason), 
std::move(p_description), 
std::move(p_wake_lock));
      return true;
    }
  }
  return false;
}

// static
bool WakeLockProviderStubDispatch::AcceptWithResponder(
    WakeLockProvider* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kWakeLockProvider_GetWakeLockContextForID_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)device::mojom::WakeLockProvider::GetWakeLockContextForID",
               "message", message->name());
#endif
      break;
    }
    case internal::kWakeLockProvider_GetWakeLockWithoutContext_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)device::mojom::WakeLockProvider::GetWakeLockWithoutContext",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool WakeLockProviderRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "WakeLockProvider RequestValidator");

  switch (message->header()->name) {
    case internal::kWakeLockProvider_GetWakeLockContextForID_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WakeLockProvider_GetWakeLockContextForID_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWakeLockProvider_GetWakeLockWithoutContext_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WakeLockProvider_GetWakeLockWithoutContext_Params_Data>(
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

void WakeLockProviderInterceptorForTesting::GetWakeLockContextForID(int32_t context_id, ::device::mojom::blink::WakeLockContextRequest context) {
  GetForwardingInterface()->GetWakeLockContextForID(std::move(context_id), std::move(context));
}
void WakeLockProviderInterceptorForTesting::GetWakeLockWithoutContext(::device::mojom::blink::WakeLockType type, ::device::mojom::blink::WakeLockReason reason, const WTF::String& description, ::device::mojom::blink::WakeLockRequest wake_lock) {
  GetForwardingInterface()->GetWakeLockWithoutContext(std::move(type), std::move(reason), std::move(description), std::move(wake_lock));
}
WakeLockProviderAsyncWaiter::WakeLockProviderAsyncWaiter(
    WakeLockProvider* proxy) : proxy_(proxy) {}

WakeLockProviderAsyncWaiter::~WakeLockProviderAsyncWaiter() = default;


}  // namespace blink
}  // namespace mojom
}  // namespace device

namespace mojo {

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif