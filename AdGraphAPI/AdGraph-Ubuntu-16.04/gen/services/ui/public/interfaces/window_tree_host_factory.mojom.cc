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

#include "services/ui/public/interfaces/window_tree_host_factory.mojom.h"

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

#include "services/ui/public/interfaces/window_tree_host_factory.mojom-shared-message-ids.h"
namespace ui {
namespace mojom {
const char WindowTreeHostFactory::Name_[] = "ui.mojom.WindowTreeHostFactory";

WindowTreeHostFactoryProxy::WindowTreeHostFactoryProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void WindowTreeHostFactoryProxy::CreateWindowTreeHost(
    ::ui::mojom::WindowTreeHostRequest in_window_tree_host, ::ui::mojom::WindowTreeClientPtr in_tree_client) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "ui::mojom::WindowTreeHostFactory::CreateWindowTreeHost");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowTreeHostFactory_CreateWindowTreeHost_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::WindowTreeHostFactory_CreateWindowTreeHost_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::ui::mojom::WindowTreeHostRequestDataView>(
      in_window_tree_host, &params->window_tree_host, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->window_tree_host),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid window_tree_host in WindowTreeHostFactory.CreateWindowTreeHost request");
  mojo::internal::Serialize<::ui::mojom::WindowTreeClientPtrDataView>(
      in_tree_client, &params->tree_client, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->tree_client),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid tree_client in WindowTreeHostFactory.CreateWindowTreeHost request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool WindowTreeHostFactoryStubDispatch::Accept(
    WindowTreeHostFactory* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kWindowTreeHostFactory_CreateWindowTreeHost_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowTreeHostFactory::CreateWindowTreeHost",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowTreeHostFactory_CreateWindowTreeHost_Params_Data* params =
          reinterpret_cast<internal::WindowTreeHostFactory_CreateWindowTreeHost_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::ui::mojom::WindowTreeHostRequest p_window_tree_host{};
      ::ui::mojom::WindowTreeClientPtr p_tree_client{};
      WindowTreeHostFactory_CreateWindowTreeHost_ParamsDataView input_data_view(params, &serialization_context);
      
      p_window_tree_host =
          input_data_view.TakeWindowTreeHost<decltype(p_window_tree_host)>();
      p_tree_client =
          input_data_view.TakeTreeClient<decltype(p_tree_client)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WindowTreeHostFactory::CreateWindowTreeHost deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->CreateWindowTreeHost(
std::move(p_window_tree_host), 
std::move(p_tree_client));
      return true;
    }
  }
  return false;
}

// static
bool WindowTreeHostFactoryStubDispatch::AcceptWithResponder(
    WindowTreeHostFactory* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kWindowTreeHostFactory_CreateWindowTreeHost_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowTreeHostFactory::CreateWindowTreeHost",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool WindowTreeHostFactoryRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "WindowTreeHostFactory RequestValidator");

  switch (message->header()->name) {
    case internal::kWindowTreeHostFactory_CreateWindowTreeHost_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowTreeHostFactory_CreateWindowTreeHost_Params_Data>(
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

void WindowTreeHostFactoryInterceptorForTesting::CreateWindowTreeHost(::ui::mojom::WindowTreeHostRequest window_tree_host, ::ui::mojom::WindowTreeClientPtr tree_client) {
  GetForwardingInterface()->CreateWindowTreeHost(std::move(window_tree_host), std::move(tree_client));
}
WindowTreeHostFactoryAsyncWaiter::WindowTreeHostFactoryAsyncWaiter(
    WindowTreeHostFactory* proxy) : proxy_(proxy) {}

WindowTreeHostFactoryAsyncWaiter::~WindowTreeHostFactoryAsyncWaiter() = default;


}  // namespace mojom
}  // namespace ui

namespace mojo {

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif