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

#include "services/viz/privileged/interfaces/viz_main.mojom.h"

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

#include "services/viz/privileged/interfaces/viz_main.mojom-shared-message-ids.h"
namespace viz {
namespace mojom {
FrameSinkManagerParams::FrameSinkManagerParams()
    : restart_id(),
      use_activation_deadline(true),
      activation_deadline_in_frames(4U),
      frame_sink_manager(),
      frame_sink_manager_client() {}

FrameSinkManagerParams::FrameSinkManagerParams(
    uint32_t restart_id_in,
    bool use_activation_deadline_in,
    uint32_t activation_deadline_in_frames_in,
    ::viz::mojom::FrameSinkManagerRequest frame_sink_manager_in,
    ::viz::mojom::FrameSinkManagerClientPtrInfo frame_sink_manager_client_in)
    : restart_id(std::move(restart_id_in)),
      use_activation_deadline(std::move(use_activation_deadline_in)),
      activation_deadline_in_frames(std::move(activation_deadline_in_frames_in)),
      frame_sink_manager(std::move(frame_sink_manager_in)),
      frame_sink_manager_client(std::move(frame_sink_manager_client_in)) {}

FrameSinkManagerParams::~FrameSinkManagerParams() = default;

bool FrameSinkManagerParams::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
const char VizMain::Name_[] = "viz.mojom.VizMain";

VizMainProxy::VizMainProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void VizMainProxy::CreateFrameSinkManager(
    FrameSinkManagerParamsPtr in_params) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "viz::mojom::VizMain::CreateFrameSinkManager");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kVizMain_CreateFrameSinkManager_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::viz::mojom::internal::VizMain_CreateFrameSinkManager_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->params)::BaseType::BufferWriter
      params_writer;
  mojo::internal::Serialize<::viz::mojom::FrameSinkManagerParamsDataView>(
      in_params, buffer, &params_writer, &serialization_context);
  params->params.Set(
      params_writer.is_null() ? nullptr : params_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->params.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null params in VizMain.CreateFrameSinkManager request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void VizMainProxy::CreateGpuService(
    ::viz::mojom::GpuServiceRequest in_gpu_service, ::viz::mojom::GpuHostPtr in_gpu_host, ::discardable_memory::mojom::DiscardableSharedMemoryManagerPtr in_discardable_memory_manager, mojo::ScopedSharedBufferHandle in_activity_flags) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "viz::mojom::VizMain::CreateGpuService");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kVizMain_CreateGpuService_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::viz::mojom::internal::VizMain_CreateGpuService_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::viz::mojom::GpuServiceRequestDataView>(
      in_gpu_service, &params->gpu_service, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->gpu_service),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid gpu_service in VizMain.CreateGpuService request");
  mojo::internal::Serialize<::viz::mojom::GpuHostPtrDataView>(
      in_gpu_host, &params->gpu_host, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->gpu_host),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid gpu_host in VizMain.CreateGpuService request");
  mojo::internal::Serialize<::discardable_memory::mojom::DiscardableSharedMemoryManagerPtrDataView>(
      in_discardable_memory_manager, &params->discardable_memory_manager, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->discardable_memory_manager),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid discardable_memory_manager in VizMain.CreateGpuService request");
  mojo::internal::Serialize<mojo::ScopedSharedBufferHandle>(
      in_activity_flags, &params->activity_flags, &serialization_context);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool VizMainStubDispatch::Accept(
    VizMain* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kVizMain_CreateFrameSinkManager_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)viz::mojom::VizMain::CreateFrameSinkManager",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::VizMain_CreateFrameSinkManager_Params_Data* params =
          reinterpret_cast<internal::VizMain_CreateFrameSinkManager_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      FrameSinkManagerParamsPtr p_params{};
      VizMain_CreateFrameSinkManager_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadParams(&p_params))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "VizMain::CreateFrameSinkManager deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->CreateFrameSinkManager(
std::move(p_params));
      return true;
    }
    case internal::kVizMain_CreateGpuService_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)viz::mojom::VizMain::CreateGpuService",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::VizMain_CreateGpuService_Params_Data* params =
          reinterpret_cast<internal::VizMain_CreateGpuService_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::viz::mojom::GpuServiceRequest p_gpu_service{};
      ::viz::mojom::GpuHostPtr p_gpu_host{};
      ::discardable_memory::mojom::DiscardableSharedMemoryManagerPtr p_discardable_memory_manager{};
      mojo::ScopedSharedBufferHandle p_activity_flags{};
      VizMain_CreateGpuService_ParamsDataView input_data_view(params, &serialization_context);
      
      p_gpu_service =
          input_data_view.TakeGpuService<decltype(p_gpu_service)>();
      p_gpu_host =
          input_data_view.TakeGpuHost<decltype(p_gpu_host)>();
      p_discardable_memory_manager =
          input_data_view.TakeDiscardableMemoryManager<decltype(p_discardable_memory_manager)>();
      p_activity_flags = input_data_view.TakeActivityFlags();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "VizMain::CreateGpuService deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->CreateGpuService(
std::move(p_gpu_service), 
std::move(p_gpu_host), 
std::move(p_discardable_memory_manager), 
std::move(p_activity_flags));
      return true;
    }
  }
  return false;
}

// static
bool VizMainStubDispatch::AcceptWithResponder(
    VizMain* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kVizMain_CreateFrameSinkManager_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)viz::mojom::VizMain::CreateFrameSinkManager",
               "message", message->name());
#endif
      break;
    }
    case internal::kVizMain_CreateGpuService_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)viz::mojom::VizMain::CreateGpuService",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool VizMainRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "VizMain RequestValidator");

  switch (message->header()->name) {
    case internal::kVizMain_CreateFrameSinkManager_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::VizMain_CreateFrameSinkManager_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kVizMain_CreateGpuService_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::VizMain_CreateGpuService_Params_Data>(
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

void VizMainInterceptorForTesting::CreateFrameSinkManager(FrameSinkManagerParamsPtr params) {
  GetForwardingInterface()->CreateFrameSinkManager(std::move(params));
}
void VizMainInterceptorForTesting::CreateGpuService(::viz::mojom::GpuServiceRequest gpu_service, ::viz::mojom::GpuHostPtr gpu_host, ::discardable_memory::mojom::DiscardableSharedMemoryManagerPtr discardable_memory_manager, mojo::ScopedSharedBufferHandle activity_flags) {
  GetForwardingInterface()->CreateGpuService(std::move(gpu_service), std::move(gpu_host), std::move(discardable_memory_manager), std::move(activity_flags));
}
VizMainAsyncWaiter::VizMainAsyncWaiter(
    VizMain* proxy) : proxy_(proxy) {}

VizMainAsyncWaiter::~VizMainAsyncWaiter() = default;


}  // namespace mojom
}  // namespace viz

namespace mojo {


// static
bool StructTraits<::viz::mojom::FrameSinkManagerParams::DataView, ::viz::mojom::FrameSinkManagerParamsPtr>::Read(
    ::viz::mojom::FrameSinkManagerParams::DataView input,
    ::viz::mojom::FrameSinkManagerParamsPtr* output) {
  bool success = true;
  ::viz::mojom::FrameSinkManagerParamsPtr result(::viz::mojom::FrameSinkManagerParams::New());
  
      result->restart_id = input.restart_id();
      result->use_activation_deadline = input.use_activation_deadline();
      result->activation_deadline_in_frames = input.activation_deadline_in_frames();
      result->frame_sink_manager =
          input.TakeFrameSinkManager<decltype(result->frame_sink_manager)>();
      result->frame_sink_manager_client =
          input.TakeFrameSinkManagerClient<decltype(result->frame_sink_manager_client)>();
  *output = std::move(result);
  return success;
}

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif