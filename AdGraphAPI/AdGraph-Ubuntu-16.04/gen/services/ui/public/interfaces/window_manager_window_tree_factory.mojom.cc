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

#include "services/ui/public/interfaces/window_manager_window_tree_factory.mojom.h"

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

#include "services/ui/public/interfaces/window_manager_window_tree_factory.mojom-shared-message-ids.h"
namespace ui {
namespace mojom {
const char WindowManagerWindowTreeFactory::Name_[] = "ui.mojom.WindowManagerWindowTreeFactory";

WindowManagerWindowTreeFactoryProxy::WindowManagerWindowTreeFactoryProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void WindowManagerWindowTreeFactoryProxy::CreateWindowTree(
    ::ui::mojom::WindowTreeRequest in_tree_request, ::ui::mojom::WindowTreeClientPtr in_client, bool in_automatically_create_display_roots) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "ui::mojom::WindowManagerWindowTreeFactory::CreateWindowTree");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowManagerWindowTreeFactory_CreateWindowTree_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::WindowManagerWindowTreeFactory_CreateWindowTree_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::ui::mojom::WindowTreeRequestDataView>(
      in_tree_request, &params->tree_request, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->tree_request),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid tree_request in WindowManagerWindowTreeFactory.CreateWindowTree request");
  mojo::internal::Serialize<::ui::mojom::WindowTreeClientPtrDataView>(
      in_client, &params->client, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->client),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid client in WindowManagerWindowTreeFactory.CreateWindowTree request");
  params->automatically_create_display_roots = in_automatically_create_display_roots;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool WindowManagerWindowTreeFactoryStubDispatch::Accept(
    WindowManagerWindowTreeFactory* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kWindowManagerWindowTreeFactory_CreateWindowTree_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowManagerWindowTreeFactory::CreateWindowTree",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowManagerWindowTreeFactory_CreateWindowTree_Params_Data* params =
          reinterpret_cast<internal::WindowManagerWindowTreeFactory_CreateWindowTree_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::ui::mojom::WindowTreeRequest p_tree_request{};
      ::ui::mojom::WindowTreeClientPtr p_client{};
      bool p_automatically_create_display_roots{};
      WindowManagerWindowTreeFactory_CreateWindowTree_ParamsDataView input_data_view(params, &serialization_context);
      
      p_tree_request =
          input_data_view.TakeTreeRequest<decltype(p_tree_request)>();
      p_client =
          input_data_view.TakeClient<decltype(p_client)>();
      p_automatically_create_display_roots = input_data_view.automatically_create_display_roots();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WindowManagerWindowTreeFactory::CreateWindowTree deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->CreateWindowTree(
std::move(p_tree_request), 
std::move(p_client), 
std::move(p_automatically_create_display_roots));
      return true;
    }
  }
  return false;
}

// static
bool WindowManagerWindowTreeFactoryStubDispatch::AcceptWithResponder(
    WindowManagerWindowTreeFactory* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kWindowManagerWindowTreeFactory_CreateWindowTree_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowManagerWindowTreeFactory::CreateWindowTree",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool WindowManagerWindowTreeFactoryRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "WindowManagerWindowTreeFactory RequestValidator");

  switch (message->header()->name) {
    case internal::kWindowManagerWindowTreeFactory_CreateWindowTree_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowManagerWindowTreeFactory_CreateWindowTree_Params_Data>(
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

void WindowManagerWindowTreeFactoryInterceptorForTesting::CreateWindowTree(::ui::mojom::WindowTreeRequest tree_request, ::ui::mojom::WindowTreeClientPtr client, bool automatically_create_display_roots) {
  GetForwardingInterface()->CreateWindowTree(std::move(tree_request), std::move(client), std::move(automatically_create_display_roots));
}
WindowManagerWindowTreeFactoryAsyncWaiter::WindowManagerWindowTreeFactoryAsyncWaiter(
    WindowManagerWindowTreeFactory* proxy) : proxy_(proxy) {}

WindowManagerWindowTreeFactoryAsyncWaiter::~WindowManagerWindowTreeFactoryAsyncWaiter() = default;


}  // namespace mojom
}  // namespace ui

namespace mojo {

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif