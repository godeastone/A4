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

#include "services/ui/public/interfaces/window_tree_host.mojom.h"

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

#include "services/ui/public/interfaces/window_tree_host.mojom-shared-message-ids.h"
#include "ui/gfx/geometry/mojo/geometry_struct_traits.h"
namespace ui {
namespace mojom {
const char WindowTreeHost::Name_[] = "ui.mojom.WindowTreeHost";

WindowTreeHostProxy::WindowTreeHostProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void WindowTreeHostProxy::SetSize(
    const gfx::Size& in_size) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "ui::mojom::WindowTreeHost::SetSize");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowTreeHost_SetSize_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::WindowTreeHost_SetSize_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->size)::BaseType::BufferWriter
      size_writer;
  mojo::internal::Serialize<::gfx::mojom::SizeDataView>(
      in_size, buffer, &size_writer, &serialization_context);
  params->size.Set(
      size_writer.is_null() ? nullptr : size_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->size.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null size in WindowTreeHost.SetSize request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WindowTreeHostProxy::SetTitle(
    const std::string& in_title) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "ui::mojom::WindowTreeHost::SetTitle");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowTreeHost_SetTitle_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::WindowTreeHost_SetTitle_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->title)::BaseType::BufferWriter
      title_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_title, buffer, &title_writer, &serialization_context);
  params->title.Set(
      title_writer.is_null() ? nullptr : title_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->title.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null title in WindowTreeHost.SetTitle request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool WindowTreeHostStubDispatch::Accept(
    WindowTreeHost* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kWindowTreeHost_SetSize_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowTreeHost::SetSize",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowTreeHost_SetSize_Params_Data* params =
          reinterpret_cast<internal::WindowTreeHost_SetSize_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      gfx::Size p_size{};
      WindowTreeHost_SetSize_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadSize(&p_size))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WindowTreeHost::SetSize deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->SetSize(
std::move(p_size));
      return true;
    }
    case internal::kWindowTreeHost_SetTitle_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowTreeHost::SetTitle",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowTreeHost_SetTitle_Params_Data* params =
          reinterpret_cast<internal::WindowTreeHost_SetTitle_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::string p_title{};
      WindowTreeHost_SetTitle_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadTitle(&p_title))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WindowTreeHost::SetTitle deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->SetTitle(
std::move(p_title));
      return true;
    }
  }
  return false;
}

// static
bool WindowTreeHostStubDispatch::AcceptWithResponder(
    WindowTreeHost* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kWindowTreeHost_SetSize_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowTreeHost::SetSize",
               "message", message->name());
#endif
      break;
    }
    case internal::kWindowTreeHost_SetTitle_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowTreeHost::SetTitle",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool WindowTreeHostRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "WindowTreeHost RequestValidator");

  switch (message->header()->name) {
    case internal::kWindowTreeHost_SetSize_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowTreeHost_SetSize_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowTreeHost_SetTitle_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowTreeHost_SetTitle_Params_Data>(
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

void WindowTreeHostInterceptorForTesting::SetSize(const gfx::Size& size) {
  GetForwardingInterface()->SetSize(std::move(size));
}
void WindowTreeHostInterceptorForTesting::SetTitle(const std::string& title) {
  GetForwardingInterface()->SetTitle(std::move(title));
}
WindowTreeHostAsyncWaiter::WindowTreeHostAsyncWaiter(
    WindowTreeHost* proxy) : proxy_(proxy) {}

WindowTreeHostAsyncWaiter::~WindowTreeHostAsyncWaiter() = default;


}  // namespace mojom
}  // namespace ui

namespace mojo {

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif