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

#include "services/viz/privileged/interfaces/compositing/external_begin_frame_controller.mojom.h"

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

#include "services/viz/privileged/interfaces/compositing/external_begin_frame_controller.mojom-shared-message-ids.h"
#include "mojo/public/cpp/base/time_mojom_traits.h"
#include "services/viz/public/cpp/compositing/begin_frame_args_struct_traits.h"
namespace viz {
namespace mojom {
const char ExternalBeginFrameController::Name_[] = "viz.mojom.ExternalBeginFrameController";

ExternalBeginFrameControllerProxy::ExternalBeginFrameControllerProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void ExternalBeginFrameControllerProxy::IssueExternalBeginFrame(
    const viz::BeginFrameArgs& in_args) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "viz::mojom::ExternalBeginFrameController::IssueExternalBeginFrame");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kExternalBeginFrameController_IssueExternalBeginFrame_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::viz::mojom::internal::ExternalBeginFrameController_IssueExternalBeginFrame_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->args)::BaseType::BufferWriter
      args_writer;
  mojo::internal::Serialize<::viz::mojom::BeginFrameArgsDataView>(
      in_args, buffer, &args_writer, &serialization_context);
  params->args.Set(
      args_writer.is_null() ? nullptr : args_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->args.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null args in ExternalBeginFrameController.IssueExternalBeginFrame request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool ExternalBeginFrameControllerStubDispatch::Accept(
    ExternalBeginFrameController* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kExternalBeginFrameController_IssueExternalBeginFrame_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)viz::mojom::ExternalBeginFrameController::IssueExternalBeginFrame",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::ExternalBeginFrameController_IssueExternalBeginFrame_Params_Data* params =
          reinterpret_cast<internal::ExternalBeginFrameController_IssueExternalBeginFrame_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      viz::BeginFrameArgs p_args{};
      ExternalBeginFrameController_IssueExternalBeginFrame_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadArgs(&p_args))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "ExternalBeginFrameController::IssueExternalBeginFrame deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->IssueExternalBeginFrame(
std::move(p_args));
      return true;
    }
  }
  return false;
}

// static
bool ExternalBeginFrameControllerStubDispatch::AcceptWithResponder(
    ExternalBeginFrameController* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kExternalBeginFrameController_IssueExternalBeginFrame_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)viz::mojom::ExternalBeginFrameController::IssueExternalBeginFrame",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool ExternalBeginFrameControllerRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "ExternalBeginFrameController RequestValidator");

  switch (message->header()->name) {
    case internal::kExternalBeginFrameController_IssueExternalBeginFrame_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ExternalBeginFrameController_IssueExternalBeginFrame_Params_Data>(
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

void ExternalBeginFrameControllerInterceptorForTesting::IssueExternalBeginFrame(const viz::BeginFrameArgs& args) {
  GetForwardingInterface()->IssueExternalBeginFrame(std::move(args));
}
ExternalBeginFrameControllerAsyncWaiter::ExternalBeginFrameControllerAsyncWaiter(
    ExternalBeginFrameController* proxy) : proxy_(proxy) {}

ExternalBeginFrameControllerAsyncWaiter::~ExternalBeginFrameControllerAsyncWaiter() = default;


const char ExternalBeginFrameControllerClient::Name_[] = "viz.mojom.ExternalBeginFrameControllerClient";

ExternalBeginFrameControllerClientProxy::ExternalBeginFrameControllerClientProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void ExternalBeginFrameControllerClientProxy::OnNeedsBeginFrames(
    bool in_needs_begin_frames) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "viz::mojom::ExternalBeginFrameControllerClient::OnNeedsBeginFrames");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kExternalBeginFrameControllerClient_OnNeedsBeginFrames_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::viz::mojom::internal::ExternalBeginFrameControllerClient_OnNeedsBeginFrames_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->needs_begin_frames = in_needs_begin_frames;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void ExternalBeginFrameControllerClientProxy::OnDisplayDidFinishFrame(
    const viz::BeginFrameAck& in_ack) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "viz::mojom::ExternalBeginFrameControllerClient::OnDisplayDidFinishFrame");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kExternalBeginFrameControllerClient_OnDisplayDidFinishFrame_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::viz::mojom::internal::ExternalBeginFrameControllerClient_OnDisplayDidFinishFrame_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->ack)::BaseType::BufferWriter
      ack_writer;
  mojo::internal::Serialize<::viz::mojom::BeginFrameAckDataView>(
      in_ack, buffer, &ack_writer, &serialization_context);
  params->ack.Set(
      ack_writer.is_null() ? nullptr : ack_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->ack.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null ack in ExternalBeginFrameControllerClient.OnDisplayDidFinishFrame request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool ExternalBeginFrameControllerClientStubDispatch::Accept(
    ExternalBeginFrameControllerClient* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kExternalBeginFrameControllerClient_OnNeedsBeginFrames_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)viz::mojom::ExternalBeginFrameControllerClient::OnNeedsBeginFrames",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::ExternalBeginFrameControllerClient_OnNeedsBeginFrames_Params_Data* params =
          reinterpret_cast<internal::ExternalBeginFrameControllerClient_OnNeedsBeginFrames_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      bool p_needs_begin_frames{};
      ExternalBeginFrameControllerClient_OnNeedsBeginFrames_ParamsDataView input_data_view(params, &serialization_context);
      
      p_needs_begin_frames = input_data_view.needs_begin_frames();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "ExternalBeginFrameControllerClient::OnNeedsBeginFrames deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnNeedsBeginFrames(
std::move(p_needs_begin_frames));
      return true;
    }
    case internal::kExternalBeginFrameControllerClient_OnDisplayDidFinishFrame_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)viz::mojom::ExternalBeginFrameControllerClient::OnDisplayDidFinishFrame",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::ExternalBeginFrameControllerClient_OnDisplayDidFinishFrame_Params_Data* params =
          reinterpret_cast<internal::ExternalBeginFrameControllerClient_OnDisplayDidFinishFrame_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      viz::BeginFrameAck p_ack{};
      ExternalBeginFrameControllerClient_OnDisplayDidFinishFrame_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadAck(&p_ack))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "ExternalBeginFrameControllerClient::OnDisplayDidFinishFrame deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnDisplayDidFinishFrame(
std::move(p_ack));
      return true;
    }
  }
  return false;
}

// static
bool ExternalBeginFrameControllerClientStubDispatch::AcceptWithResponder(
    ExternalBeginFrameControllerClient* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kExternalBeginFrameControllerClient_OnNeedsBeginFrames_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)viz::mojom::ExternalBeginFrameControllerClient::OnNeedsBeginFrames",
               "message", message->name());
#endif
      break;
    }
    case internal::kExternalBeginFrameControllerClient_OnDisplayDidFinishFrame_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)viz::mojom::ExternalBeginFrameControllerClient::OnDisplayDidFinishFrame",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool ExternalBeginFrameControllerClientRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "ExternalBeginFrameControllerClient RequestValidator");

  switch (message->header()->name) {
    case internal::kExternalBeginFrameControllerClient_OnNeedsBeginFrames_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ExternalBeginFrameControllerClient_OnNeedsBeginFrames_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kExternalBeginFrameControllerClient_OnDisplayDidFinishFrame_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ExternalBeginFrameControllerClient_OnDisplayDidFinishFrame_Params_Data>(
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

void ExternalBeginFrameControllerClientInterceptorForTesting::OnNeedsBeginFrames(bool needs_begin_frames) {
  GetForwardingInterface()->OnNeedsBeginFrames(std::move(needs_begin_frames));
}
void ExternalBeginFrameControllerClientInterceptorForTesting::OnDisplayDidFinishFrame(const viz::BeginFrameAck& ack) {
  GetForwardingInterface()->OnDisplayDidFinishFrame(std::move(ack));
}
ExternalBeginFrameControllerClientAsyncWaiter::ExternalBeginFrameControllerClientAsyncWaiter(
    ExternalBeginFrameControllerClient* proxy) : proxy_(proxy) {}

ExternalBeginFrameControllerClientAsyncWaiter::~ExternalBeginFrameControllerClientAsyncWaiter() = default;


}  // namespace mojom
}  // namespace viz

namespace mojo {

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif