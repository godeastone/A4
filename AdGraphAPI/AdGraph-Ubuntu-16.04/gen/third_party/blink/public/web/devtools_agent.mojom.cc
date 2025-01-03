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

#include "third_party/blink/public/web/devtools_agent.mojom.h"

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

#include "third_party/blink/public/web/devtools_agent.mojom-shared-message-ids.h"
#include "mojo/public/cpp/base/big_buffer_mojom_traits.h"
#include "mojo/public/cpp/base/big_string_mojom_traits.h"
#include "ui/gfx/geometry/mojo/geometry_struct_traits.h"
namespace blink {
namespace mojom {
const char DevToolsAgent::Name_[] = "blink.mojom.DevToolsAgent";

DevToolsAgentProxy::DevToolsAgentProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void DevToolsAgentProxy::AttachDevToolsSession(
    DevToolsSessionHostAssociatedPtrInfo in_host, DevToolsSessionAssociatedRequest in_session, DevToolsSessionRequest in_io_session, const base::Optional<std::string>& in_reattach_state) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "blink::mojom::DevToolsAgent::AttachDevToolsSession");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kDevToolsAgent_AttachDevToolsSession_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::DevToolsAgent_AttachDevToolsSession_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::blink::mojom::DevToolsSessionHostAssociatedPtrInfoDataView>(
      in_host, &params->host, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->host),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_INTERFACE_ID,
      "invalid host in DevToolsAgent.AttachDevToolsSession request");
  mojo::internal::Serialize<::blink::mojom::DevToolsSessionAssociatedRequestDataView>(
      in_session, &params->session, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->session),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_INTERFACE_ID,
      "invalid session in DevToolsAgent.AttachDevToolsSession request");
  mojo::internal::Serialize<::blink::mojom::DevToolsSessionRequestDataView>(
      in_io_session, &params->io_session, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->io_session),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid io_session in DevToolsAgent.AttachDevToolsSession request");
  typename decltype(params->reattach_state)::BaseType::BufferWriter
      reattach_state_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_reattach_state, buffer, &reattach_state_writer, &serialization_context);
  params->reattach_state.Set(
      reattach_state_writer.is_null() ? nullptr : reattach_state_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void DevToolsAgentProxy::InspectElement(
    const gfx::Point& in_point) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "blink::mojom::DevToolsAgent::InspectElement");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kDevToolsAgent_InspectElement_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::DevToolsAgent_InspectElement_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->point)::BaseType::BufferWriter
      point_writer;
  mojo::internal::Serialize<::gfx::mojom::PointDataView>(
      in_point, buffer, &point_writer, &serialization_context);
  params->point.Set(
      point_writer.is_null() ? nullptr : point_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->point.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null point in DevToolsAgent.InspectElement request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool DevToolsAgentStubDispatch::Accept(
    DevToolsAgent* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kDevToolsAgent_AttachDevToolsSession_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::DevToolsAgent::AttachDevToolsSession",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::DevToolsAgent_AttachDevToolsSession_Params_Data* params =
          reinterpret_cast<internal::DevToolsAgent_AttachDevToolsSession_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      DevToolsSessionHostAssociatedPtrInfo p_host{};
      DevToolsSessionAssociatedRequest p_session{};
      DevToolsSessionRequest p_io_session{};
      base::Optional<std::string> p_reattach_state{};
      DevToolsAgent_AttachDevToolsSession_ParamsDataView input_data_view(params, &serialization_context);
      
      p_host =
          input_data_view.TakeHost<decltype(p_host)>();
      p_session =
          input_data_view.TakeSession<decltype(p_session)>();
      p_io_session =
          input_data_view.TakeIoSession<decltype(p_io_session)>();
      if (!input_data_view.ReadReattachState(&p_reattach_state))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "DevToolsAgent::AttachDevToolsSession deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->AttachDevToolsSession(
std::move(p_host), 
std::move(p_session), 
std::move(p_io_session), 
std::move(p_reattach_state));
      return true;
    }
    case internal::kDevToolsAgent_InspectElement_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::DevToolsAgent::InspectElement",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::DevToolsAgent_InspectElement_Params_Data* params =
          reinterpret_cast<internal::DevToolsAgent_InspectElement_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      gfx::Point p_point{};
      DevToolsAgent_InspectElement_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadPoint(&p_point))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "DevToolsAgent::InspectElement deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->InspectElement(
std::move(p_point));
      return true;
    }
  }
  return false;
}

// static
bool DevToolsAgentStubDispatch::AcceptWithResponder(
    DevToolsAgent* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kDevToolsAgent_AttachDevToolsSession_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::DevToolsAgent::AttachDevToolsSession",
               "message", message->name());
#endif
      break;
    }
    case internal::kDevToolsAgent_InspectElement_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::DevToolsAgent::InspectElement",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool DevToolsAgentRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "DevToolsAgent RequestValidator");

  switch (message->header()->name) {
    case internal::kDevToolsAgent_AttachDevToolsSession_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::DevToolsAgent_AttachDevToolsSession_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kDevToolsAgent_InspectElement_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::DevToolsAgent_InspectElement_Params_Data>(
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

void DevToolsAgentInterceptorForTesting::AttachDevToolsSession(DevToolsSessionHostAssociatedPtrInfo host, DevToolsSessionAssociatedRequest session, DevToolsSessionRequest io_session, const base::Optional<std::string>& reattach_state) {
  GetForwardingInterface()->AttachDevToolsSession(std::move(host), std::move(session), std::move(io_session), std::move(reattach_state));
}
void DevToolsAgentInterceptorForTesting::InspectElement(const gfx::Point& point) {
  GetForwardingInterface()->InspectElement(std::move(point));
}
DevToolsAgentAsyncWaiter::DevToolsAgentAsyncWaiter(
    DevToolsAgent* proxy) : proxy_(proxy) {}

DevToolsAgentAsyncWaiter::~DevToolsAgentAsyncWaiter() = default;


const char DevToolsSession::Name_[] = "blink.mojom.DevToolsSession";

DevToolsSessionProxy::DevToolsSessionProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void DevToolsSessionProxy::DispatchProtocolCommand(
    int32_t in_call_id, const std::string& in_method, const std::string& in_message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "blink::mojom::DevToolsSession::DispatchProtocolCommand");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kDevToolsSession_DispatchProtocolCommand_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::DevToolsSession_DispatchProtocolCommand_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->call_id = in_call_id;
  typename decltype(params->method)::BaseType::BufferWriter
      method_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_method, buffer, &method_writer, &serialization_context);
  params->method.Set(
      method_writer.is_null() ? nullptr : method_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->method.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null method in DevToolsSession.DispatchProtocolCommand request");
  typename decltype(params->message)::BaseType::BufferWriter
      message_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_message, buffer, &message_writer, &serialization_context);
  params->message.Set(
      message_writer.is_null() ? nullptr : message_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->message.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null message in DevToolsSession.DispatchProtocolCommand request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool DevToolsSessionStubDispatch::Accept(
    DevToolsSession* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kDevToolsSession_DispatchProtocolCommand_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::DevToolsSession::DispatchProtocolCommand",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::DevToolsSession_DispatchProtocolCommand_Params_Data* params =
          reinterpret_cast<internal::DevToolsSession_DispatchProtocolCommand_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int32_t p_call_id{};
      std::string p_method{};
      std::string p_message{};
      DevToolsSession_DispatchProtocolCommand_ParamsDataView input_data_view(params, &serialization_context);
      
      p_call_id = input_data_view.call_id();
      if (!input_data_view.ReadMethod(&p_method))
        success = false;
      if (!input_data_view.ReadMessage(&p_message))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "DevToolsSession::DispatchProtocolCommand deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->DispatchProtocolCommand(
std::move(p_call_id), 
std::move(p_method), 
std::move(p_message));
      return true;
    }
  }
  return false;
}

// static
bool DevToolsSessionStubDispatch::AcceptWithResponder(
    DevToolsSession* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kDevToolsSession_DispatchProtocolCommand_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::DevToolsSession::DispatchProtocolCommand",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool DevToolsSessionRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "DevToolsSession RequestValidator");

  switch (message->header()->name) {
    case internal::kDevToolsSession_DispatchProtocolCommand_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::DevToolsSession_DispatchProtocolCommand_Params_Data>(
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

void DevToolsSessionInterceptorForTesting::DispatchProtocolCommand(int32_t call_id, const std::string& method, const std::string& message) {
  GetForwardingInterface()->DispatchProtocolCommand(std::move(call_id), std::move(method), std::move(message));
}
DevToolsSessionAsyncWaiter::DevToolsSessionAsyncWaiter(
    DevToolsSession* proxy) : proxy_(proxy) {}

DevToolsSessionAsyncWaiter::~DevToolsSessionAsyncWaiter() = default;


const char DevToolsSessionHost::Name_[] = "blink.mojom.DevToolsSessionHost";

DevToolsSessionHostProxy::DevToolsSessionHostProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void DevToolsSessionHostProxy::DispatchProtocolResponse(
    const std::string& in_message, int32_t in_call_id, const base::Optional<std::string>& in_state) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "blink::mojom::DevToolsSessionHost::DispatchProtocolResponse");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kDevToolsSessionHost_DispatchProtocolResponse_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::DevToolsSessionHost_DispatchProtocolResponse_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->message)::BaseType::BufferWriter
      message_writer;
  mojo::internal::Serialize<::mojo_base::mojom::BigStringDataView>(
      in_message, buffer, &message_writer, &serialization_context);
  params->message.Set(
      message_writer.is_null() ? nullptr : message_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->message.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null message in DevToolsSessionHost.DispatchProtocolResponse request");
  params->call_id = in_call_id;
  typename decltype(params->state)::BaseType::BufferWriter
      state_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_state, buffer, &state_writer, &serialization_context);
  params->state.Set(
      state_writer.is_null() ? nullptr : state_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void DevToolsSessionHostProxy::DispatchProtocolNotification(
    const std::string& in_message, const base::Optional<std::string>& in_state) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "blink::mojom::DevToolsSessionHost::DispatchProtocolNotification");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kDevToolsSessionHost_DispatchProtocolNotification_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::DevToolsSessionHost_DispatchProtocolNotification_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->message)::BaseType::BufferWriter
      message_writer;
  mojo::internal::Serialize<::mojo_base::mojom::BigStringDataView>(
      in_message, buffer, &message_writer, &serialization_context);
  params->message.Set(
      message_writer.is_null() ? nullptr : message_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->message.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null message in DevToolsSessionHost.DispatchProtocolNotification request");
  typename decltype(params->state)::BaseType::BufferWriter
      state_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_state, buffer, &state_writer, &serialization_context);
  params->state.Set(
      state_writer.is_null() ? nullptr : state_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool DevToolsSessionHostStubDispatch::Accept(
    DevToolsSessionHost* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kDevToolsSessionHost_DispatchProtocolResponse_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::DevToolsSessionHost::DispatchProtocolResponse",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::DevToolsSessionHost_DispatchProtocolResponse_Params_Data* params =
          reinterpret_cast<internal::DevToolsSessionHost_DispatchProtocolResponse_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::string p_message{};
      int32_t p_call_id{};
      base::Optional<std::string> p_state{};
      DevToolsSessionHost_DispatchProtocolResponse_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadMessage(&p_message))
        success = false;
      p_call_id = input_data_view.call_id();
      if (!input_data_view.ReadState(&p_state))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "DevToolsSessionHost::DispatchProtocolResponse deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->DispatchProtocolResponse(
std::move(p_message), 
std::move(p_call_id), 
std::move(p_state));
      return true;
    }
    case internal::kDevToolsSessionHost_DispatchProtocolNotification_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::DevToolsSessionHost::DispatchProtocolNotification",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::DevToolsSessionHost_DispatchProtocolNotification_Params_Data* params =
          reinterpret_cast<internal::DevToolsSessionHost_DispatchProtocolNotification_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::string p_message{};
      base::Optional<std::string> p_state{};
      DevToolsSessionHost_DispatchProtocolNotification_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadMessage(&p_message))
        success = false;
      if (!input_data_view.ReadState(&p_state))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "DevToolsSessionHost::DispatchProtocolNotification deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->DispatchProtocolNotification(
std::move(p_message), 
std::move(p_state));
      return true;
    }
  }
  return false;
}

// static
bool DevToolsSessionHostStubDispatch::AcceptWithResponder(
    DevToolsSessionHost* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kDevToolsSessionHost_DispatchProtocolResponse_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::DevToolsSessionHost::DispatchProtocolResponse",
               "message", message->name());
#endif
      break;
    }
    case internal::kDevToolsSessionHost_DispatchProtocolNotification_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::DevToolsSessionHost::DispatchProtocolNotification",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool DevToolsSessionHostRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "DevToolsSessionHost RequestValidator");

  switch (message->header()->name) {
    case internal::kDevToolsSessionHost_DispatchProtocolResponse_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::DevToolsSessionHost_DispatchProtocolResponse_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kDevToolsSessionHost_DispatchProtocolNotification_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::DevToolsSessionHost_DispatchProtocolNotification_Params_Data>(
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

void DevToolsSessionHostInterceptorForTesting::DispatchProtocolResponse(const std::string& message, int32_t call_id, const base::Optional<std::string>& state) {
  GetForwardingInterface()->DispatchProtocolResponse(std::move(message), std::move(call_id), std::move(state));
}
void DevToolsSessionHostInterceptorForTesting::DispatchProtocolNotification(const std::string& message, const base::Optional<std::string>& state) {
  GetForwardingInterface()->DispatchProtocolNotification(std::move(message), std::move(state));
}
DevToolsSessionHostAsyncWaiter::DevToolsSessionHostAsyncWaiter(
    DevToolsSessionHost* proxy) : proxy_(proxy) {}

DevToolsSessionHostAsyncWaiter::~DevToolsSessionHostAsyncWaiter() = default;


}  // namespace mojom
}  // namespace blink

namespace mojo {

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif