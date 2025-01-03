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

#include "components/services/heap_profiling/public/mojom/heap_profiling_client.mojom.h"

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

#include "components/services/heap_profiling/public/mojom/heap_profiling_client.mojom-shared-message-ids.h"
namespace heap_profiling {
namespace mojom {
ProfilingParams::ProfilingParams()
    : sender_pipe(),
      stack_mode(),
      sampling_rate() {}

ProfilingParams::ProfilingParams(
    mojo::ScopedHandle sender_pipe_in,
    StackMode stack_mode_in,
    uint32_t sampling_rate_in)
    : sender_pipe(std::move(sender_pipe_in)),
      stack_mode(std::move(stack_mode_in)),
      sampling_rate(std::move(sampling_rate_in)) {}

ProfilingParams::~ProfilingParams() = default;

bool ProfilingParams::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
const char ProfilingClient::Name_[] = "heap_profiling.mojom.ProfilingClient";

ProfilingClientProxy::ProfilingClientProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void ProfilingClientProxy::StartProfiling(
    ProfilingParamsPtr in_params) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "heap_profiling::mojom::ProfilingClient::StartProfiling");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kProfilingClient_StartProfiling_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::heap_profiling::mojom::internal::ProfilingClient_StartProfiling_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->params)::BaseType::BufferWriter
      params_writer;
  mojo::internal::Serialize<::heap_profiling::mojom::ProfilingParamsDataView>(
      in_params, buffer, &params_writer, &serialization_context);
  params->params.Set(
      params_writer.is_null() ? nullptr : params_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->params.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null params in ProfilingClient.StartProfiling request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void ProfilingClientProxy::FlushMemlogPipe(
    uint32_t in_barrier_id) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "heap_profiling::mojom::ProfilingClient::FlushMemlogPipe");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kProfilingClient_FlushMemlogPipe_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::heap_profiling::mojom::internal::ProfilingClient_FlushMemlogPipe_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->barrier_id = in_barrier_id;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool ProfilingClientStubDispatch::Accept(
    ProfilingClient* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kProfilingClient_StartProfiling_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)heap_profiling::mojom::ProfilingClient::StartProfiling",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::ProfilingClient_StartProfiling_Params_Data* params =
          reinterpret_cast<internal::ProfilingClient_StartProfiling_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ProfilingParamsPtr p_params{};
      ProfilingClient_StartProfiling_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadParams(&p_params))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "ProfilingClient::StartProfiling deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->StartProfiling(
std::move(p_params));
      return true;
    }
    case internal::kProfilingClient_FlushMemlogPipe_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)heap_profiling::mojom::ProfilingClient::FlushMemlogPipe",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::ProfilingClient_FlushMemlogPipe_Params_Data* params =
          reinterpret_cast<internal::ProfilingClient_FlushMemlogPipe_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint32_t p_barrier_id{};
      ProfilingClient_FlushMemlogPipe_ParamsDataView input_data_view(params, &serialization_context);
      
      p_barrier_id = input_data_view.barrier_id();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "ProfilingClient::FlushMemlogPipe deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->FlushMemlogPipe(
std::move(p_barrier_id));
      return true;
    }
  }
  return false;
}

// static
bool ProfilingClientStubDispatch::AcceptWithResponder(
    ProfilingClient* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kProfilingClient_StartProfiling_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)heap_profiling::mojom::ProfilingClient::StartProfiling",
               "message", message->name());
#endif
      break;
    }
    case internal::kProfilingClient_FlushMemlogPipe_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)heap_profiling::mojom::ProfilingClient::FlushMemlogPipe",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool ProfilingClientRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "ProfilingClient RequestValidator");

  switch (message->header()->name) {
    case internal::kProfilingClient_StartProfiling_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ProfilingClient_StartProfiling_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kProfilingClient_FlushMemlogPipe_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ProfilingClient_FlushMemlogPipe_Params_Data>(
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

void ProfilingClientInterceptorForTesting::StartProfiling(ProfilingParamsPtr params) {
  GetForwardingInterface()->StartProfiling(std::move(params));
}
void ProfilingClientInterceptorForTesting::FlushMemlogPipe(uint32_t barrier_id) {
  GetForwardingInterface()->FlushMemlogPipe(std::move(barrier_id));
}
ProfilingClientAsyncWaiter::ProfilingClientAsyncWaiter(
    ProfilingClient* proxy) : proxy_(proxy) {}

ProfilingClientAsyncWaiter::~ProfilingClientAsyncWaiter() = default;


}  // namespace mojom
}  // namespace heap_profiling

namespace mojo {


// static
bool StructTraits<::heap_profiling::mojom::ProfilingParams::DataView, ::heap_profiling::mojom::ProfilingParamsPtr>::Read(
    ::heap_profiling::mojom::ProfilingParams::DataView input,
    ::heap_profiling::mojom::ProfilingParamsPtr* output) {
  bool success = true;
  ::heap_profiling::mojom::ProfilingParamsPtr result(::heap_profiling::mojom::ProfilingParams::New());
  
      result->sender_pipe = input.TakeSenderPipe();
      if (!input.ReadStackMode(&result->stack_mode))
        success = false;
      result->sampling_rate = input.sampling_rate();
  *output = std::move(result);
  return success;
}

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif