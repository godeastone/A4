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

#include "services/audio/public/mojom/device_notifications.mojom.h"

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

#include "services/audio/public/mojom/device_notifications.mojom-shared-message-ids.h"
namespace audio {
namespace mojom {
const char DeviceListener::Name_[] = "audio.mojom.DeviceListener";

DeviceListenerProxy::DeviceListenerProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void DeviceListenerProxy::DevicesChanged(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "audio::mojom::DeviceListener::DevicesChanged");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kDeviceListener_DevicesChanged_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::audio::mojom::internal::DeviceListener_DevicesChanged_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool DeviceListenerStubDispatch::Accept(
    DeviceListener* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kDeviceListener_DevicesChanged_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)audio::mojom::DeviceListener::DevicesChanged",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::DeviceListener_DevicesChanged_Params_Data* params =
          reinterpret_cast<internal::DeviceListener_DevicesChanged_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      DeviceListener_DevicesChanged_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "DeviceListener::DevicesChanged deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->DevicesChanged();
      return true;
    }
  }
  return false;
}

// static
bool DeviceListenerStubDispatch::AcceptWithResponder(
    DeviceListener* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kDeviceListener_DevicesChanged_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)audio::mojom::DeviceListener::DevicesChanged",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool DeviceListenerRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "DeviceListener RequestValidator");

  switch (message->header()->name) {
    case internal::kDeviceListener_DevicesChanged_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::DeviceListener_DevicesChanged_Params_Data>(
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

void DeviceListenerInterceptorForTesting::DevicesChanged() {
  GetForwardingInterface()->DevicesChanged();
}
DeviceListenerAsyncWaiter::DeviceListenerAsyncWaiter(
    DeviceListener* proxy) : proxy_(proxy) {}

DeviceListenerAsyncWaiter::~DeviceListenerAsyncWaiter() = default;


const char DeviceNotifier::Name_[] = "audio.mojom.DeviceNotifier";

DeviceNotifierProxy::DeviceNotifierProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void DeviceNotifierProxy::RegisterListener(
    DeviceListenerPtr in_listener) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "audio::mojom::DeviceNotifier::RegisterListener");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kDeviceNotifier_RegisterListener_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::audio::mojom::internal::DeviceNotifier_RegisterListener_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::audio::mojom::DeviceListenerPtrDataView>(
      in_listener, &params->listener, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->listener),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid listener in DeviceNotifier.RegisterListener request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool DeviceNotifierStubDispatch::Accept(
    DeviceNotifier* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kDeviceNotifier_RegisterListener_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)audio::mojom::DeviceNotifier::RegisterListener",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::DeviceNotifier_RegisterListener_Params_Data* params =
          reinterpret_cast<internal::DeviceNotifier_RegisterListener_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      DeviceListenerPtr p_listener{};
      DeviceNotifier_RegisterListener_ParamsDataView input_data_view(params, &serialization_context);
      
      p_listener =
          input_data_view.TakeListener<decltype(p_listener)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "DeviceNotifier::RegisterListener deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->RegisterListener(
std::move(p_listener));
      return true;
    }
  }
  return false;
}

// static
bool DeviceNotifierStubDispatch::AcceptWithResponder(
    DeviceNotifier* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kDeviceNotifier_RegisterListener_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)audio::mojom::DeviceNotifier::RegisterListener",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool DeviceNotifierRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "DeviceNotifier RequestValidator");

  switch (message->header()->name) {
    case internal::kDeviceNotifier_RegisterListener_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::DeviceNotifier_RegisterListener_Params_Data>(
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

void DeviceNotifierInterceptorForTesting::RegisterListener(DeviceListenerPtr listener) {
  GetForwardingInterface()->RegisterListener(std::move(listener));
}
DeviceNotifierAsyncWaiter::DeviceNotifierAsyncWaiter(
    DeviceNotifier* proxy) : proxy_(proxy) {}

DeviceNotifierAsyncWaiter::~DeviceNotifierAsyncWaiter() = default;


}  // namespace mojom
}  // namespace audio

namespace mojo {

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif