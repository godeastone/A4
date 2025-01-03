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

#include "content/common/render_widget_window_tree_client_factory.mojom.h"

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

#include "content/common/render_widget_window_tree_client_factory.mojom-shared-message-ids.h"
#include "mojo/public/cpp/base/unguessable_token_mojom_traits.h"
namespace content {
namespace mojom {
const char RenderWidgetWindowTreeClient::Name_[] = "content.mojom.RenderWidgetWindowTreeClient";

RenderWidgetWindowTreeClientProxy::RenderWidgetWindowTreeClientProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void RenderWidgetWindowTreeClientProxy::Embed(
    uint32_t in_frame_routing_id, const base::UnguessableToken& in_token) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::RenderWidgetWindowTreeClient::Embed");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kRenderWidgetWindowTreeClient_Embed_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::RenderWidgetWindowTreeClient_Embed_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->frame_routing_id = in_frame_routing_id;
  typename decltype(params->token)::BaseType::BufferWriter
      token_writer;
  mojo::internal::Serialize<::mojo_base::mojom::UnguessableTokenDataView>(
      in_token, buffer, &token_writer, &serialization_context);
  params->token.Set(
      token_writer.is_null() ? nullptr : token_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->token.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null token in RenderWidgetWindowTreeClient.Embed request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void RenderWidgetWindowTreeClientProxy::DestroyFrame(
    uint32_t in_frame_routing_id) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::RenderWidgetWindowTreeClient::DestroyFrame");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kRenderWidgetWindowTreeClient_DestroyFrame_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::RenderWidgetWindowTreeClient_DestroyFrame_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->frame_routing_id = in_frame_routing_id;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool RenderWidgetWindowTreeClientStubDispatch::Accept(
    RenderWidgetWindowTreeClient* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kRenderWidgetWindowTreeClient_Embed_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::RenderWidgetWindowTreeClient::Embed",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::RenderWidgetWindowTreeClient_Embed_Params_Data* params =
          reinterpret_cast<internal::RenderWidgetWindowTreeClient_Embed_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint32_t p_frame_routing_id{};
      base::UnguessableToken p_token{};
      RenderWidgetWindowTreeClient_Embed_ParamsDataView input_data_view(params, &serialization_context);
      
      p_frame_routing_id = input_data_view.frame_routing_id();
      if (!input_data_view.ReadToken(&p_token))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "RenderWidgetWindowTreeClient::Embed deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->Embed(
std::move(p_frame_routing_id), 
std::move(p_token));
      return true;
    }
    case internal::kRenderWidgetWindowTreeClient_DestroyFrame_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::RenderWidgetWindowTreeClient::DestroyFrame",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::RenderWidgetWindowTreeClient_DestroyFrame_Params_Data* params =
          reinterpret_cast<internal::RenderWidgetWindowTreeClient_DestroyFrame_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint32_t p_frame_routing_id{};
      RenderWidgetWindowTreeClient_DestroyFrame_ParamsDataView input_data_view(params, &serialization_context);
      
      p_frame_routing_id = input_data_view.frame_routing_id();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "RenderWidgetWindowTreeClient::DestroyFrame deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->DestroyFrame(
std::move(p_frame_routing_id));
      return true;
    }
  }
  return false;
}

// static
bool RenderWidgetWindowTreeClientStubDispatch::AcceptWithResponder(
    RenderWidgetWindowTreeClient* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kRenderWidgetWindowTreeClient_Embed_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::RenderWidgetWindowTreeClient::Embed",
               "message", message->name());
#endif
      break;
    }
    case internal::kRenderWidgetWindowTreeClient_DestroyFrame_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::RenderWidgetWindowTreeClient::DestroyFrame",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool RenderWidgetWindowTreeClientRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "RenderWidgetWindowTreeClient RequestValidator");

  switch (message->header()->name) {
    case internal::kRenderWidgetWindowTreeClient_Embed_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::RenderWidgetWindowTreeClient_Embed_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kRenderWidgetWindowTreeClient_DestroyFrame_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::RenderWidgetWindowTreeClient_DestroyFrame_Params_Data>(
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

void RenderWidgetWindowTreeClientInterceptorForTesting::Embed(uint32_t frame_routing_id, const base::UnguessableToken& token) {
  GetForwardingInterface()->Embed(std::move(frame_routing_id), std::move(token));
}
void RenderWidgetWindowTreeClientInterceptorForTesting::DestroyFrame(uint32_t frame_routing_id) {
  GetForwardingInterface()->DestroyFrame(std::move(frame_routing_id));
}
RenderWidgetWindowTreeClientAsyncWaiter::RenderWidgetWindowTreeClientAsyncWaiter(
    RenderWidgetWindowTreeClient* proxy) : proxy_(proxy) {}

RenderWidgetWindowTreeClientAsyncWaiter::~RenderWidgetWindowTreeClientAsyncWaiter() = default;


const char RenderWidgetWindowTreeClientFactory::Name_[] = "content.mojom.RenderWidgetWindowTreeClientFactory";

RenderWidgetWindowTreeClientFactoryProxy::RenderWidgetWindowTreeClientFactoryProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void RenderWidgetWindowTreeClientFactoryProxy::CreateWindowTreeClientForRenderWidget(
    uint32_t in_render_widget_host_routing_id, ::ui::mojom::WindowTreeClientRequest in_window_tree_client, RenderWidgetWindowTreeClientRequest in_render_widget_window_tree_client_request) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::RenderWidgetWindowTreeClientFactory::CreateWindowTreeClientForRenderWidget");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kRenderWidgetWindowTreeClientFactory_CreateWindowTreeClientForRenderWidget_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::RenderWidgetWindowTreeClientFactory_CreateWindowTreeClientForRenderWidget_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->render_widget_host_routing_id = in_render_widget_host_routing_id;
  mojo::internal::Serialize<::ui::mojom::WindowTreeClientRequestDataView>(
      in_window_tree_client, &params->window_tree_client, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->window_tree_client),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid window_tree_client in RenderWidgetWindowTreeClientFactory.CreateWindowTreeClientForRenderWidget request");
  mojo::internal::Serialize<::content::mojom::RenderWidgetWindowTreeClientRequestDataView>(
      in_render_widget_window_tree_client_request, &params->render_widget_window_tree_client_request, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->render_widget_window_tree_client_request),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid render_widget_window_tree_client_request in RenderWidgetWindowTreeClientFactory.CreateWindowTreeClientForRenderWidget request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool RenderWidgetWindowTreeClientFactoryStubDispatch::Accept(
    RenderWidgetWindowTreeClientFactory* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kRenderWidgetWindowTreeClientFactory_CreateWindowTreeClientForRenderWidget_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::RenderWidgetWindowTreeClientFactory::CreateWindowTreeClientForRenderWidget",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::RenderWidgetWindowTreeClientFactory_CreateWindowTreeClientForRenderWidget_Params_Data* params =
          reinterpret_cast<internal::RenderWidgetWindowTreeClientFactory_CreateWindowTreeClientForRenderWidget_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint32_t p_render_widget_host_routing_id{};
      ::ui::mojom::WindowTreeClientRequest p_window_tree_client{};
      RenderWidgetWindowTreeClientRequest p_render_widget_window_tree_client_request{};
      RenderWidgetWindowTreeClientFactory_CreateWindowTreeClientForRenderWidget_ParamsDataView input_data_view(params, &serialization_context);
      
      p_render_widget_host_routing_id = input_data_view.render_widget_host_routing_id();
      p_window_tree_client =
          input_data_view.TakeWindowTreeClient<decltype(p_window_tree_client)>();
      p_render_widget_window_tree_client_request =
          input_data_view.TakeRenderWidgetWindowTreeClientRequest<decltype(p_render_widget_window_tree_client_request)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "RenderWidgetWindowTreeClientFactory::CreateWindowTreeClientForRenderWidget deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->CreateWindowTreeClientForRenderWidget(
std::move(p_render_widget_host_routing_id), 
std::move(p_window_tree_client), 
std::move(p_render_widget_window_tree_client_request));
      return true;
    }
  }
  return false;
}

// static
bool RenderWidgetWindowTreeClientFactoryStubDispatch::AcceptWithResponder(
    RenderWidgetWindowTreeClientFactory* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kRenderWidgetWindowTreeClientFactory_CreateWindowTreeClientForRenderWidget_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::RenderWidgetWindowTreeClientFactory::CreateWindowTreeClientForRenderWidget",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool RenderWidgetWindowTreeClientFactoryRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "RenderWidgetWindowTreeClientFactory RequestValidator");

  switch (message->header()->name) {
    case internal::kRenderWidgetWindowTreeClientFactory_CreateWindowTreeClientForRenderWidget_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::RenderWidgetWindowTreeClientFactory_CreateWindowTreeClientForRenderWidget_Params_Data>(
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

void RenderWidgetWindowTreeClientFactoryInterceptorForTesting::CreateWindowTreeClientForRenderWidget(uint32_t render_widget_host_routing_id, ::ui::mojom::WindowTreeClientRequest window_tree_client, RenderWidgetWindowTreeClientRequest render_widget_window_tree_client_request) {
  GetForwardingInterface()->CreateWindowTreeClientForRenderWidget(std::move(render_widget_host_routing_id), std::move(window_tree_client), std::move(render_widget_window_tree_client_request));
}
RenderWidgetWindowTreeClientFactoryAsyncWaiter::RenderWidgetWindowTreeClientFactoryAsyncWaiter(
    RenderWidgetWindowTreeClientFactory* proxy) : proxy_(proxy) {}

RenderWidgetWindowTreeClientFactoryAsyncWaiter::~RenderWidgetWindowTreeClientFactoryAsyncWaiter() = default;


}  // namespace mojom
}  // namespace content

namespace mojo {

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif