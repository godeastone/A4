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

#include "services/ui/public/interfaces/screen_provider.mojom.h"

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

#include "services/ui/public/interfaces/screen_provider.mojom-shared-message-ids.h"
#include "ui/display/mojo/display_struct_traits.h"
#include "ui/gfx/geometry/mojo/geometry_struct_traits.h"
namespace ui {
namespace mojom {
const char ScreenProviderObserver::Name_[] = "ui.mojom.ScreenProviderObserver";

ScreenProviderObserverProxy::ScreenProviderObserverProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void ScreenProviderObserverProxy::OnDisplaysChanged(
    std::vector<::ui::mojom::WsDisplayPtr> in_displays, int64_t in_primary_display_id, int64_t in_internal_display_id) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "ui::mojom::ScreenProviderObserver::OnDisplaysChanged");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kScreenProviderObserver_OnDisplaysChanged_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::ScreenProviderObserver_OnDisplaysChanged_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->displays)::BaseType::BufferWriter
      displays_writer;
  const mojo::internal::ContainerValidateParams displays_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::ui::mojom::WsDisplayDataView>>(
      in_displays, buffer, &displays_writer, &displays_validate_params,
      &serialization_context);
  params->displays.Set(
      displays_writer.is_null() ? nullptr : displays_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->displays.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null displays in ScreenProviderObserver.OnDisplaysChanged request");
  params->primary_display_id = in_primary_display_id;
  params->internal_display_id = in_internal_display_id;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool ScreenProviderObserverStubDispatch::Accept(
    ScreenProviderObserver* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kScreenProviderObserver_OnDisplaysChanged_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::ScreenProviderObserver::OnDisplaysChanged",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::ScreenProviderObserver_OnDisplaysChanged_Params_Data* params =
          reinterpret_cast<internal::ScreenProviderObserver_OnDisplaysChanged_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::vector<::ui::mojom::WsDisplayPtr> p_displays{};
      int64_t p_primary_display_id{};
      int64_t p_internal_display_id{};
      ScreenProviderObserver_OnDisplaysChanged_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadDisplays(&p_displays))
        success = false;
      p_primary_display_id = input_data_view.primary_display_id();
      p_internal_display_id = input_data_view.internal_display_id();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "ScreenProviderObserver::OnDisplaysChanged deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnDisplaysChanged(
std::move(p_displays), 
std::move(p_primary_display_id), 
std::move(p_internal_display_id));
      return true;
    }
  }
  return false;
}

// static
bool ScreenProviderObserverStubDispatch::AcceptWithResponder(
    ScreenProviderObserver* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kScreenProviderObserver_OnDisplaysChanged_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::ScreenProviderObserver::OnDisplaysChanged",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool ScreenProviderObserverRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "ScreenProviderObserver RequestValidator");

  switch (message->header()->name) {
    case internal::kScreenProviderObserver_OnDisplaysChanged_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ScreenProviderObserver_OnDisplaysChanged_Params_Data>(
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

void ScreenProviderObserverInterceptorForTesting::OnDisplaysChanged(std::vector<::ui::mojom::WsDisplayPtr> displays, int64_t primary_display_id, int64_t internal_display_id) {
  GetForwardingInterface()->OnDisplaysChanged(std::move(displays), std::move(primary_display_id), std::move(internal_display_id));
}
ScreenProviderObserverAsyncWaiter::ScreenProviderObserverAsyncWaiter(
    ScreenProviderObserver* proxy) : proxy_(proxy) {}

ScreenProviderObserverAsyncWaiter::~ScreenProviderObserverAsyncWaiter() = default;


const char ScreenProvider::Name_[] = "ui.mojom.ScreenProvider";

ScreenProviderProxy::ScreenProviderProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void ScreenProviderProxy::AddObserver(
    ScreenProviderObserverPtr in_observer) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "ui::mojom::ScreenProvider::AddObserver");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kScreenProvider_AddObserver_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::ScreenProvider_AddObserver_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::ui::mojom::ScreenProviderObserverPtrDataView>(
      in_observer, &params->observer, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->observer),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid observer in ScreenProvider.AddObserver request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool ScreenProviderStubDispatch::Accept(
    ScreenProvider* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kScreenProvider_AddObserver_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::ScreenProvider::AddObserver",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::ScreenProvider_AddObserver_Params_Data* params =
          reinterpret_cast<internal::ScreenProvider_AddObserver_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ScreenProviderObserverPtr p_observer{};
      ScreenProvider_AddObserver_ParamsDataView input_data_view(params, &serialization_context);
      
      p_observer =
          input_data_view.TakeObserver<decltype(p_observer)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "ScreenProvider::AddObserver deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->AddObserver(
std::move(p_observer));
      return true;
    }
  }
  return false;
}

// static
bool ScreenProviderStubDispatch::AcceptWithResponder(
    ScreenProvider* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kScreenProvider_AddObserver_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::ScreenProvider::AddObserver",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool ScreenProviderRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "ScreenProvider RequestValidator");

  switch (message->header()->name) {
    case internal::kScreenProvider_AddObserver_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ScreenProvider_AddObserver_Params_Data>(
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

void ScreenProviderInterceptorForTesting::AddObserver(ScreenProviderObserverPtr observer) {
  GetForwardingInterface()->AddObserver(std::move(observer));
}
ScreenProviderAsyncWaiter::ScreenProviderAsyncWaiter(
    ScreenProvider* proxy) : proxy_(proxy) {}

ScreenProviderAsyncWaiter::~ScreenProviderAsyncWaiter() = default;


}  // namespace mojom
}  // namespace ui

namespace mojo {

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif