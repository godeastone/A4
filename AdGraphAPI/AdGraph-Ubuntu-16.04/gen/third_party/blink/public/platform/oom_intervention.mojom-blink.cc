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

#include "third_party/blink/public/platform/oom_intervention.mojom-blink.h"

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

#include "third_party/blink/public/platform/oom_intervention.mojom-shared-message-ids.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"
#include "mojo/public/cpp/base/shared_memory_mojom_traits.h"
namespace blink {
namespace mojom {
namespace blink {
const char OomInterventionHost::Name_[] = "blink.mojom.OomInterventionHost";

OomInterventionHostProxy::OomInterventionHostProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void OomInterventionHostProxy::OnHighMemoryUsage(
    bool in_intervention_triggered) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "blink::mojom::OomInterventionHost::OnHighMemoryUsage");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kOomInterventionHost_OnHighMemoryUsage_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::OomInterventionHost_OnHighMemoryUsage_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->intervention_triggered = in_intervention_triggered;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool OomInterventionHostStubDispatch::Accept(
    OomInterventionHost* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kOomInterventionHost_OnHighMemoryUsage_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::OomInterventionHost::OnHighMemoryUsage",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::OomInterventionHost_OnHighMemoryUsage_Params_Data* params =
          reinterpret_cast<internal::OomInterventionHost_OnHighMemoryUsage_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      bool p_intervention_triggered{};
      OomInterventionHost_OnHighMemoryUsage_ParamsDataView input_data_view(params, &serialization_context);
      
      p_intervention_triggered = input_data_view.intervention_triggered();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "OomInterventionHost::OnHighMemoryUsage deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnHighMemoryUsage(
std::move(p_intervention_triggered));
      return true;
    }
  }
  return false;
}

// static
bool OomInterventionHostStubDispatch::AcceptWithResponder(
    OomInterventionHost* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kOomInterventionHost_OnHighMemoryUsage_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::OomInterventionHost::OnHighMemoryUsage",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool OomInterventionHostRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "OomInterventionHost RequestValidator");

  switch (message->header()->name) {
    case internal::kOomInterventionHost_OnHighMemoryUsage_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::OomInterventionHost_OnHighMemoryUsage_Params_Data>(
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

void OomInterventionHostInterceptorForTesting::OnHighMemoryUsage(bool intervention_triggered) {
  GetForwardingInterface()->OnHighMemoryUsage(std::move(intervention_triggered));
}
OomInterventionHostAsyncWaiter::OomInterventionHostAsyncWaiter(
    OomInterventionHost* proxy) : proxy_(proxy) {}

OomInterventionHostAsyncWaiter::~OomInterventionHostAsyncWaiter() = default;


const char OomIntervention::Name_[] = "blink.mojom.OomIntervention";

OomInterventionProxy::OomInterventionProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void OomInterventionProxy::StartDetection(
    OomInterventionHostPtr in_host, base::UnsafeSharedMemoryRegion in_shared_metrics_buffer, uint64_t in_memory_workload_threshold, bool in_trigger_intervention) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "blink::mojom::OomIntervention::StartDetection");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kOomIntervention_StartDetection_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::OomIntervention_StartDetection_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::blink::mojom::OomInterventionHostPtrDataView>(
      in_host, &params->host, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->host),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid host in OomIntervention.StartDetection request");
  typename decltype(params->shared_metrics_buffer)::BaseType::BufferWriter
      shared_metrics_buffer_writer;
  mojo::internal::Serialize<::mojo_base::mojom::UnsafeSharedMemoryRegionDataView>(
      in_shared_metrics_buffer, buffer, &shared_metrics_buffer_writer, &serialization_context);
  params->shared_metrics_buffer.Set(
      shared_metrics_buffer_writer.is_null() ? nullptr : shared_metrics_buffer_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->shared_metrics_buffer.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null shared_metrics_buffer in OomIntervention.StartDetection request");
  params->memory_workload_threshold = in_memory_workload_threshold;
  params->trigger_intervention = in_trigger_intervention;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool OomInterventionStubDispatch::Accept(
    OomIntervention* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kOomIntervention_StartDetection_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::OomIntervention::StartDetection",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::OomIntervention_StartDetection_Params_Data* params =
          reinterpret_cast<internal::OomIntervention_StartDetection_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      OomInterventionHostPtr p_host{};
      base::UnsafeSharedMemoryRegion p_shared_metrics_buffer{};
      uint64_t p_memory_workload_threshold{};
      bool p_trigger_intervention{};
      OomIntervention_StartDetection_ParamsDataView input_data_view(params, &serialization_context);
      
      p_host =
          input_data_view.TakeHost<decltype(p_host)>();
      if (!input_data_view.ReadSharedMetricsBuffer(&p_shared_metrics_buffer))
        success = false;
      p_memory_workload_threshold = input_data_view.memory_workload_threshold();
      p_trigger_intervention = input_data_view.trigger_intervention();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "OomIntervention::StartDetection deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->StartDetection(
std::move(p_host), 
std::move(p_shared_metrics_buffer), 
std::move(p_memory_workload_threshold), 
std::move(p_trigger_intervention));
      return true;
    }
  }
  return false;
}

// static
bool OomInterventionStubDispatch::AcceptWithResponder(
    OomIntervention* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kOomIntervention_StartDetection_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::OomIntervention::StartDetection",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool OomInterventionRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "OomIntervention RequestValidator");

  switch (message->header()->name) {
    case internal::kOomIntervention_StartDetection_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::OomIntervention_StartDetection_Params_Data>(
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

void OomInterventionInterceptorForTesting::StartDetection(OomInterventionHostPtr host, base::UnsafeSharedMemoryRegion shared_metrics_buffer, uint64_t memory_workload_threshold, bool trigger_intervention) {
  GetForwardingInterface()->StartDetection(std::move(host), std::move(shared_metrics_buffer), std::move(memory_workload_threshold), std::move(trigger_intervention));
}
OomInterventionAsyncWaiter::OomInterventionAsyncWaiter(
    OomIntervention* proxy) : proxy_(proxy) {}

OomInterventionAsyncWaiter::~OomInterventionAsyncWaiter() = default;


}  // namespace blink
}  // namespace mojom
}  // namespace blink

namespace mojo {

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif