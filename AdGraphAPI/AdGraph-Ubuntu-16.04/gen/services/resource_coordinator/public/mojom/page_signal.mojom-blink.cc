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

#include "services/resource_coordinator/public/mojom/page_signal.mojom-blink.h"

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

#include "services/resource_coordinator/public/mojom/page_signal.mojom-shared-message-ids.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"
#include "ipc/ipc_message_utils.h"
#include "mojo/public/cpp/base/time_mojom_traits.h"
namespace resource_coordinator {
namespace mojom {
namespace blink {
const char PageSignalReceiver::Name_[] = "resource_coordinator.mojom.PageSignalReceiver";

PageSignalReceiverProxy::PageSignalReceiverProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void PageSignalReceiverProxy::NotifyPageAlmostIdle(
    ::resource_coordinator::mojom::blink::CoordinationUnitIDPtr in_cu_id) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "resource_coordinator::mojom::PageSignalReceiver::NotifyPageAlmostIdle");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPageSignalReceiver_NotifyPageAlmostIdle_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::resource_coordinator::mojom::internal::PageSignalReceiver_NotifyPageAlmostIdle_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->cu_id)::BaseType::BufferWriter
      cu_id_writer;
  mojo::internal::Serialize<::resource_coordinator::mojom::CoordinationUnitIDDataView>(
      in_cu_id, buffer, &cu_id_writer, &serialization_context);
  params->cu_id.Set(
      cu_id_writer.is_null() ? nullptr : cu_id_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->cu_id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null cu_id in PageSignalReceiver.NotifyPageAlmostIdle request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void PageSignalReceiverProxy::SetExpectedTaskQueueingDuration(
    ::resource_coordinator::mojom::blink::CoordinationUnitIDPtr in_cu_id, WTF::TimeDelta in_duration) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "resource_coordinator::mojom::PageSignalReceiver::SetExpectedTaskQueueingDuration");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPageSignalReceiver_SetExpectedTaskQueueingDuration_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::resource_coordinator::mojom::internal::PageSignalReceiver_SetExpectedTaskQueueingDuration_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->cu_id)::BaseType::BufferWriter
      cu_id_writer;
  mojo::internal::Serialize<::resource_coordinator::mojom::CoordinationUnitIDDataView>(
      in_cu_id, buffer, &cu_id_writer, &serialization_context);
  params->cu_id.Set(
      cu_id_writer.is_null() ? nullptr : cu_id_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->cu_id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null cu_id in PageSignalReceiver.SetExpectedTaskQueueingDuration request");
  typename decltype(params->duration)::BaseType::BufferWriter
      duration_writer;
  mojo::internal::Serialize<::mojo_base::mojom::TimeDeltaDataView>(
      in_duration, buffer, &duration_writer, &serialization_context);
  params->duration.Set(
      duration_writer.is_null() ? nullptr : duration_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->duration.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null duration in PageSignalReceiver.SetExpectedTaskQueueingDuration request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void PageSignalReceiverProxy::SetLifecycleState(
    ::resource_coordinator::mojom::blink::CoordinationUnitIDPtr in_cu_id, ::resource_coordinator::mojom::blink::LifecycleState in_state) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "resource_coordinator::mojom::PageSignalReceiver::SetLifecycleState");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPageSignalReceiver_SetLifecycleState_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::resource_coordinator::mojom::internal::PageSignalReceiver_SetLifecycleState_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->cu_id)::BaseType::BufferWriter
      cu_id_writer;
  mojo::internal::Serialize<::resource_coordinator::mojom::CoordinationUnitIDDataView>(
      in_cu_id, buffer, &cu_id_writer, &serialization_context);
  params->cu_id.Set(
      cu_id_writer.is_null() ? nullptr : cu_id_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->cu_id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null cu_id in PageSignalReceiver.SetLifecycleState request");
  mojo::internal::Serialize<::resource_coordinator::mojom::LifecycleState>(
      in_state, &params->state);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool PageSignalReceiverStubDispatch::Accept(
    PageSignalReceiver* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kPageSignalReceiver_NotifyPageAlmostIdle_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)resource_coordinator::mojom::PageSignalReceiver::NotifyPageAlmostIdle",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::PageSignalReceiver_NotifyPageAlmostIdle_Params_Data* params =
          reinterpret_cast<internal::PageSignalReceiver_NotifyPageAlmostIdle_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::resource_coordinator::mojom::blink::CoordinationUnitIDPtr p_cu_id{};
      PageSignalReceiver_NotifyPageAlmostIdle_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadCuId(&p_cu_id))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "PageSignalReceiver::NotifyPageAlmostIdle deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->NotifyPageAlmostIdle(
std::move(p_cu_id));
      return true;
    }
    case internal::kPageSignalReceiver_SetExpectedTaskQueueingDuration_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)resource_coordinator::mojom::PageSignalReceiver::SetExpectedTaskQueueingDuration",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::PageSignalReceiver_SetExpectedTaskQueueingDuration_Params_Data* params =
          reinterpret_cast<internal::PageSignalReceiver_SetExpectedTaskQueueingDuration_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::resource_coordinator::mojom::blink::CoordinationUnitIDPtr p_cu_id{};
      WTF::TimeDelta p_duration{};
      PageSignalReceiver_SetExpectedTaskQueueingDuration_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadCuId(&p_cu_id))
        success = false;
      if (!input_data_view.ReadDuration(&p_duration))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "PageSignalReceiver::SetExpectedTaskQueueingDuration deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->SetExpectedTaskQueueingDuration(
std::move(p_cu_id), 
std::move(p_duration));
      return true;
    }
    case internal::kPageSignalReceiver_SetLifecycleState_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)resource_coordinator::mojom::PageSignalReceiver::SetLifecycleState",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::PageSignalReceiver_SetLifecycleState_Params_Data* params =
          reinterpret_cast<internal::PageSignalReceiver_SetLifecycleState_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::resource_coordinator::mojom::blink::CoordinationUnitIDPtr p_cu_id{};
      ::resource_coordinator::mojom::blink::LifecycleState p_state{};
      PageSignalReceiver_SetLifecycleState_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadCuId(&p_cu_id))
        success = false;
      if (!input_data_view.ReadState(&p_state))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "PageSignalReceiver::SetLifecycleState deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->SetLifecycleState(
std::move(p_cu_id), 
std::move(p_state));
      return true;
    }
  }
  return false;
}

// static
bool PageSignalReceiverStubDispatch::AcceptWithResponder(
    PageSignalReceiver* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kPageSignalReceiver_NotifyPageAlmostIdle_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)resource_coordinator::mojom::PageSignalReceiver::NotifyPageAlmostIdle",
               "message", message->name());
#endif
      break;
    }
    case internal::kPageSignalReceiver_SetExpectedTaskQueueingDuration_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)resource_coordinator::mojom::PageSignalReceiver::SetExpectedTaskQueueingDuration",
               "message", message->name());
#endif
      break;
    }
    case internal::kPageSignalReceiver_SetLifecycleState_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)resource_coordinator::mojom::PageSignalReceiver::SetLifecycleState",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool PageSignalReceiverRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "PageSignalReceiver RequestValidator");

  switch (message->header()->name) {
    case internal::kPageSignalReceiver_NotifyPageAlmostIdle_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PageSignalReceiver_NotifyPageAlmostIdle_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kPageSignalReceiver_SetExpectedTaskQueueingDuration_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PageSignalReceiver_SetExpectedTaskQueueingDuration_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kPageSignalReceiver_SetLifecycleState_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PageSignalReceiver_SetLifecycleState_Params_Data>(
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

void PageSignalReceiverInterceptorForTesting::NotifyPageAlmostIdle(::resource_coordinator::mojom::blink::CoordinationUnitIDPtr cu_id) {
  GetForwardingInterface()->NotifyPageAlmostIdle(std::move(cu_id));
}
void PageSignalReceiverInterceptorForTesting::SetExpectedTaskQueueingDuration(::resource_coordinator::mojom::blink::CoordinationUnitIDPtr cu_id, WTF::TimeDelta duration) {
  GetForwardingInterface()->SetExpectedTaskQueueingDuration(std::move(cu_id), std::move(duration));
}
void PageSignalReceiverInterceptorForTesting::SetLifecycleState(::resource_coordinator::mojom::blink::CoordinationUnitIDPtr cu_id, ::resource_coordinator::mojom::blink::LifecycleState state) {
  GetForwardingInterface()->SetLifecycleState(std::move(cu_id), std::move(state));
}
PageSignalReceiverAsyncWaiter::PageSignalReceiverAsyncWaiter(
    PageSignalReceiver* proxy) : proxy_(proxy) {}

PageSignalReceiverAsyncWaiter::~PageSignalReceiverAsyncWaiter() = default;


const char PageSignalGenerator::Name_[] = "resource_coordinator.mojom.PageSignalGenerator";

PageSignalGeneratorProxy::PageSignalGeneratorProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void PageSignalGeneratorProxy::AddReceiver(
    PageSignalReceiverPtr in_receiver) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "resource_coordinator::mojom::PageSignalGenerator::AddReceiver");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPageSignalGenerator_AddReceiver_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::resource_coordinator::mojom::internal::PageSignalGenerator_AddReceiver_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::resource_coordinator::mojom::PageSignalReceiverPtrDataView>(
      in_receiver, &params->receiver, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->receiver),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid receiver in PageSignalGenerator.AddReceiver request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool PageSignalGeneratorStubDispatch::Accept(
    PageSignalGenerator* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kPageSignalGenerator_AddReceiver_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)resource_coordinator::mojom::PageSignalGenerator::AddReceiver",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::PageSignalGenerator_AddReceiver_Params_Data* params =
          reinterpret_cast<internal::PageSignalGenerator_AddReceiver_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      PageSignalReceiverPtr p_receiver{};
      PageSignalGenerator_AddReceiver_ParamsDataView input_data_view(params, &serialization_context);
      
      p_receiver =
          input_data_view.TakeReceiver<decltype(p_receiver)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "PageSignalGenerator::AddReceiver deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->AddReceiver(
std::move(p_receiver));
      return true;
    }
  }
  return false;
}

// static
bool PageSignalGeneratorStubDispatch::AcceptWithResponder(
    PageSignalGenerator* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kPageSignalGenerator_AddReceiver_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)resource_coordinator::mojom::PageSignalGenerator::AddReceiver",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool PageSignalGeneratorRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "PageSignalGenerator RequestValidator");

  switch (message->header()->name) {
    case internal::kPageSignalGenerator_AddReceiver_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PageSignalGenerator_AddReceiver_Params_Data>(
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

void PageSignalGeneratorInterceptorForTesting::AddReceiver(PageSignalReceiverPtr receiver) {
  GetForwardingInterface()->AddReceiver(std::move(receiver));
}
PageSignalGeneratorAsyncWaiter::PageSignalGeneratorAsyncWaiter(
    PageSignalGenerator* proxy) : proxy_(proxy) {}

PageSignalGeneratorAsyncWaiter::~PageSignalGeneratorAsyncWaiter() = default;


}  // namespace blink
}  // namespace mojom
}  // namespace resource_coordinator

namespace mojo {

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif