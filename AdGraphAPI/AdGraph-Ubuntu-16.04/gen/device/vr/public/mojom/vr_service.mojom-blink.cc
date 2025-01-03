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

#include "device/vr/public/mojom/vr_service.mojom-blink.h"

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

#include "device/vr/public/mojom/vr_service.mojom-shared-message-ids.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"
#include "gpu/ipc/common/mailbox_holder_struct_traits.h"
#include "gpu/ipc/common/sync_token_struct_traits.h"
#include "ipc/ipc_message_utils.h"
#include "mojo/public/cpp/base/time_mojom_traits.h"
#include "third_party/blink/renderer/platform/mojo/geometry_struct_traits.h"
#include "ui/display/mojo/display_struct_traits.h"
#include "ui/gfx/geometry/mojo/geometry_struct_traits.h"
#include "ui/gfx/mojo/gpu_fence_handle_struct_traits.h"
namespace device {
namespace mojom {
namespace blink {
XRInputSourceDescription::XRInputSourceDescription()
    : pointer_origin(),
      handedness(),
      emulated_position(),
      pointer_offset() {}

XRInputSourceDescription::XRInputSourceDescription(
    XRPointerOrigin pointer_origin_in,
    XRHandedness handedness_in,
    bool emulated_position_in,
    ::gfx::mojom::blink::TransformPtr pointer_offset_in)
    : pointer_origin(std::move(pointer_origin_in)),
      handedness(std::move(handedness_in)),
      emulated_position(std::move(emulated_position_in)),
      pointer_offset(std::move(pointer_offset_in)) {}

XRInputSourceDescription::~XRInputSourceDescription() = default;

bool XRInputSourceDescription::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
XRInputSourceState::XRInputSourceState()
    : source_id(),
      description(),
      grip(),
      primary_input_pressed(),
      primary_input_clicked() {}

XRInputSourceState::XRInputSourceState(
    uint32_t source_id_in,
    XRInputSourceDescriptionPtr description_in,
    ::gfx::mojom::blink::TransformPtr grip_in,
    bool primary_input_pressed_in,
    bool primary_input_clicked_in)
    : source_id(std::move(source_id_in)),
      description(std::move(description_in)),
      grip(std::move(grip_in)),
      primary_input_pressed(std::move(primary_input_pressed_in)),
      primary_input_clicked(std::move(primary_input_clicked_in)) {}

XRInputSourceState::~XRInputSourceState() = default;

bool XRInputSourceState::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
VRFieldOfView::VRFieldOfView()
    : upDegrees(),
      downDegrees(),
      leftDegrees(),
      rightDegrees() {}

VRFieldOfView::VRFieldOfView(
    float upDegrees_in,
    float downDegrees_in,
    float leftDegrees_in,
    float rightDegrees_in)
    : upDegrees(std::move(upDegrees_in)),
      downDegrees(std::move(downDegrees_in)),
      leftDegrees(std::move(leftDegrees_in)),
      rightDegrees(std::move(rightDegrees_in)) {}

VRFieldOfView::~VRFieldOfView() = default;
size_t VRFieldOfView::Hash(size_t seed) const {
  seed = mojo::internal::WTFHash(seed, this->upDegrees);
  seed = mojo::internal::WTFHash(seed, this->downDegrees);
  seed = mojo::internal::WTFHash(seed, this->leftDegrees);
  seed = mojo::internal::WTFHash(seed, this->rightDegrees);
  return seed;
}

bool VRFieldOfView::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
VRPose::VRPose()
    : orientation(),
      position(),
      angularVelocity(),
      linearVelocity(),
      angularAcceleration(),
      linearAcceleration(),
      input_state(),
      pose_reset() {}

VRPose::VRPose(
    const base::Optional<WTF::Vector<float>>& orientation_in,
    const base::Optional<WTF::Vector<float>>& position_in,
    const base::Optional<WTF::Vector<float>>& angularVelocity_in,
    const base::Optional<WTF::Vector<float>>& linearVelocity_in,
    const base::Optional<WTF::Vector<float>>& angularAcceleration_in,
    const base::Optional<WTF::Vector<float>>& linearAcceleration_in,
    base::Optional<WTF::Vector<XRInputSourceStatePtr>> input_state_in,
    bool pose_reset_in)
    : orientation(std::move(orientation_in)),
      position(std::move(position_in)),
      angularVelocity(std::move(angularVelocity_in)),
      linearVelocity(std::move(linearVelocity_in)),
      angularAcceleration(std::move(angularAcceleration_in)),
      linearAcceleration(std::move(linearAcceleration_in)),
      input_state(std::move(input_state_in)),
      pose_reset(std::move(pose_reset_in)) {}

VRPose::~VRPose() = default;

bool VRPose::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
VRDisplayCapabilities::VRDisplayCapabilities()
    : hasPosition(),
      hasExternalDisplay(),
      canPresent(),
      can_provide_pass_through_images() {}

VRDisplayCapabilities::VRDisplayCapabilities(
    bool hasPosition_in,
    bool hasExternalDisplay_in,
    bool canPresent_in,
    bool can_provide_pass_through_images_in)
    : hasPosition(std::move(hasPosition_in)),
      hasExternalDisplay(std::move(hasExternalDisplay_in)),
      canPresent(std::move(canPresent_in)),
      can_provide_pass_through_images(std::move(can_provide_pass_through_images_in)) {}

VRDisplayCapabilities::~VRDisplayCapabilities() = default;
size_t VRDisplayCapabilities::Hash(size_t seed) const {
  seed = mojo::internal::WTFHash(seed, this->hasPosition);
  seed = mojo::internal::WTFHash(seed, this->hasExternalDisplay);
  seed = mojo::internal::WTFHash(seed, this->canPresent);
  seed = mojo::internal::WTFHash(seed, this->can_provide_pass_through_images);
  return seed;
}

bool VRDisplayCapabilities::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
VREyeParameters::VREyeParameters()
    : fieldOfView(),
      offset(),
      renderWidth(),
      renderHeight() {}

VREyeParameters::VREyeParameters(
    VRFieldOfViewPtr fieldOfView_in,
    const WTF::Vector<float>& offset_in,
    uint32_t renderWidth_in,
    uint32_t renderHeight_in)
    : fieldOfView(std::move(fieldOfView_in)),
      offset(std::move(offset_in)),
      renderWidth(std::move(renderWidth_in)),
      renderHeight(std::move(renderHeight_in)) {}

VREyeParameters::~VREyeParameters() = default;

bool VREyeParameters::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
VRStageParameters::VRStageParameters()
    : standingTransform(),
      sizeX(),
      sizeZ() {}

VRStageParameters::VRStageParameters(
    const WTF::Vector<float>& standingTransform_in,
    float sizeX_in,
    float sizeZ_in)
    : standingTransform(std::move(standingTransform_in)),
      sizeX(std::move(sizeX_in)),
      sizeZ(std::move(sizeZ_in)) {}

VRStageParameters::~VRStageParameters() = default;

bool VRStageParameters::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
VRDisplayInfo::VRDisplayInfo()
    : index(),
      displayName(),
      capabilities(),
      stageParameters(),
      leftEye(),
      rightEye(),
      webvr_default_framebuffer_scale(1.0f),
      webxr_default_framebuffer_scale(1.0f) {}

VRDisplayInfo::VRDisplayInfo(
    uint32_t index_in,
    const WTF::String& displayName_in,
    VRDisplayCapabilitiesPtr capabilities_in,
    VRStageParametersPtr stageParameters_in,
    VREyeParametersPtr leftEye_in,
    VREyeParametersPtr rightEye_in,
    float webvr_default_framebuffer_scale_in,
    float webxr_default_framebuffer_scale_in)
    : index(std::move(index_in)),
      displayName(std::move(displayName_in)),
      capabilities(std::move(capabilities_in)),
      stageParameters(std::move(stageParameters_in)),
      leftEye(std::move(leftEye_in)),
      rightEye(std::move(rightEye_in)),
      webvr_default_framebuffer_scale(std::move(webvr_default_framebuffer_scale_in)),
      webxr_default_framebuffer_scale(std::move(webxr_default_framebuffer_scale_in)) {}

VRDisplayInfo::~VRDisplayInfo() = default;

bool VRDisplayInfo::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
VRRequestPresentOptions::VRRequestPresentOptions()
    : preserve_drawing_buffer(),
      webxr_input(),
      shared_buffer_draw_supported() {}

VRRequestPresentOptions::VRRequestPresentOptions(
    bool preserve_drawing_buffer_in,
    bool webxr_input_in,
    bool shared_buffer_draw_supported_in)
    : preserve_drawing_buffer(std::move(preserve_drawing_buffer_in)),
      webxr_input(std::move(webxr_input_in)),
      shared_buffer_draw_supported(std::move(shared_buffer_draw_supported_in)) {}

VRRequestPresentOptions::~VRRequestPresentOptions() = default;
size_t VRRequestPresentOptions::Hash(size_t seed) const {
  seed = mojo::internal::WTFHash(seed, this->preserve_drawing_buffer);
  seed = mojo::internal::WTFHash(seed, this->webxr_input);
  seed = mojo::internal::WTFHash(seed, this->shared_buffer_draw_supported);
  return seed;
}

bool VRRequestPresentOptions::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
VRDisplayFrameTransportOptions::VRDisplayFrameTransportOptions()
    : transport_method(),
      wait_for_transfer_notification(),
      wait_for_render_notification(),
      wait_for_gpu_fence() {}

VRDisplayFrameTransportOptions::VRDisplayFrameTransportOptions(
    VRDisplayFrameTransportMethod transport_method_in,
    bool wait_for_transfer_notification_in,
    bool wait_for_render_notification_in,
    bool wait_for_gpu_fence_in)
    : transport_method(std::move(transport_method_in)),
      wait_for_transfer_notification(std::move(wait_for_transfer_notification_in)),
      wait_for_render_notification(std::move(wait_for_render_notification_in)),
      wait_for_gpu_fence(std::move(wait_for_gpu_fence_in)) {}

VRDisplayFrameTransportOptions::~VRDisplayFrameTransportOptions() = default;
size_t VRDisplayFrameTransportOptions::Hash(size_t seed) const {
  seed = mojo::internal::WTFHash(seed, this->transport_method);
  seed = mojo::internal::WTFHash(seed, this->wait_for_transfer_notification);
  seed = mojo::internal::WTFHash(seed, this->wait_for_render_notification);
  seed = mojo::internal::WTFHash(seed, this->wait_for_gpu_fence);
  return seed;
}

bool VRDisplayFrameTransportOptions::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
VRMagicWindowFrameData::VRMagicWindowFrameData()
    : pose(),
      buffer_holder(),
      buffer_size(),
      time_delta(),
      projection_matrix() {}

VRMagicWindowFrameData::VRMagicWindowFrameData(
    VRPosePtr pose_in,
    const ::gpu::MailboxHolder& buffer_holder_in,
    const ::blink::WebSize& buffer_size_in,
    WTF::TimeDelta time_delta_in,
    const WTF::Vector<float>& projection_matrix_in)
    : pose(std::move(pose_in)),
      buffer_holder(std::move(buffer_holder_in)),
      buffer_size(std::move(buffer_size_in)),
      time_delta(std::move(time_delta_in)),
      projection_matrix(std::move(projection_matrix_in)) {}

VRMagicWindowFrameData::~VRMagicWindowFrameData() = default;

bool VRMagicWindowFrameData::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
const char VRService::Name_[] = "device.mojom.VRService";

class VRService_SetClient_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  VRService_SetClient_ForwardToCallback(
      VRService::SetClientCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  VRService::SetClientCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(VRService_SetClient_ForwardToCallback);
};

VRServiceProxy::VRServiceProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void VRServiceProxy::SetClient(
    VRServiceClientPtr in_client, SetClientCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "device::mojom::VRService::SetClient");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kVRService_SetClient_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::VRService_SetClient_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::device::mojom::VRServiceClientPtrDataView>(
      in_client, &params->client, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->client),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid client in VRService.SetClient request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new VRService_SetClient_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void VRServiceProxy::SetListeningForActivate(
    bool in_listening) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "device::mojom::VRService::SetListeningForActivate");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kVRService_SetListeningForActivate_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::VRService_SetListeningForActivate_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->listening = in_listening;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}
class VRService_SetClient_ProxyToResponder {
 public:
  static VRService::SetClientCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<VRService_SetClient_ProxyToResponder> proxy(
        new VRService_SetClient_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&VRService_SetClient_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~VRService_SetClient_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // If we're being destroyed without being run, we want to ensure the
      // binding endpoint has been closed. This checks for that asynchronously.
      // We pass a bound generated callback to handle the response so that any
      // resulting DCHECK stack will have useful interface type information.
      responder_->IsConnectedAsync(base::BindOnce(&OnIsConnectedComplete));
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    responder_ = nullptr;
  }

 private:
  VRService_SetClient_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "VRService::SetClientCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      );

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(VRService_SetClient_ProxyToResponder);
};

bool VRService_SetClient_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "device::mojom::VRService::SetClientCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::VRService_SetClient_ResponseParams_Data* params =
      reinterpret_cast<
          internal::VRService_SetClient_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  VRService_SetClient_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "VRService::SetClient response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run();
  return true;
}

void VRService_SetClient_ProxyToResponder::Run(
    ) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kVRService_SetClient_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::VRService_SetClient_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)device::mojom::VRService::SetClientCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}

// static
bool VRServiceStubDispatch::Accept(
    VRService* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kVRService_SetClient_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)device::mojom::VRService::SetClient",
               "message", message->name());
#endif
      break;
    }
    case internal::kVRService_SetListeningForActivate_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)device::mojom::VRService::SetListeningForActivate",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::VRService_SetListeningForActivate_Params_Data* params =
          reinterpret_cast<internal::VRService_SetListeningForActivate_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      bool p_listening{};
      VRService_SetListeningForActivate_ParamsDataView input_data_view(params, &serialization_context);
      
      p_listening = input_data_view.listening();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "VRService::SetListeningForActivate deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->SetListeningForActivate(
std::move(p_listening));
      return true;
    }
  }
  return false;
}

// static
bool VRServiceStubDispatch::AcceptWithResponder(
    VRService* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kVRService_SetClient_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)device::mojom::VRService::SetClient",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::VRService_SetClient_Params_Data* params =
          reinterpret_cast<
              internal::VRService_SetClient_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      VRServiceClientPtr p_client{};
      VRService_SetClient_ParamsDataView input_data_view(params, &serialization_context);
      
      p_client =
          input_data_view.TakeClient<decltype(p_client)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "VRService::SetClient deserializer");
        return false;
      }
      VRService::SetClientCallback callback =
          VRService_SetClient_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->SetClient(
std::move(p_client), std::move(callback));
      return true;
    }
    case internal::kVRService_SetListeningForActivate_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)device::mojom::VRService::SetListeningForActivate",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool VRServiceRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "VRService RequestValidator");

  switch (message->header()->name) {
    case internal::kVRService_SetClient_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::VRService_SetClient_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kVRService_SetListeningForActivate_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::VRService_SetListeningForActivate_Params_Data>(
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

bool VRServiceResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "VRService ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kVRService_SetClient_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::VRService_SetClient_ResponseParams_Data>(
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
void VRServiceInterceptorForTesting::SetClient(VRServiceClientPtr client, SetClientCallback callback) {
  GetForwardingInterface()->SetClient(std::move(client), std::move(callback));
}
void VRServiceInterceptorForTesting::SetListeningForActivate(bool listening) {
  GetForwardingInterface()->SetListeningForActivate(std::move(listening));
}
VRServiceAsyncWaiter::VRServiceAsyncWaiter(
    VRService* proxy) : proxy_(proxy) {}

VRServiceAsyncWaiter::~VRServiceAsyncWaiter() = default;

void VRServiceAsyncWaiter::SetClient(
    VRServiceClientPtr client) {
  base::RunLoop loop;
  proxy_->SetClient(std::move(client),
      base::BindOnce(
          [](base::RunLoop* loop) {
            loop->Quit();
          },
          &loop));
  loop.Run();
}

const char VRServiceClient::Name_[] = "device.mojom.VRServiceClient";

VRServiceClientProxy::VRServiceClientProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void VRServiceClientProxy::OnDisplayConnected(
    VRMagicWindowProviderPtr in_magic_window_provider, VRDisplayHostPtr in_display, VRDisplayClientRequest in_request, VRDisplayInfoPtr in_display_info) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "device::mojom::VRServiceClient::OnDisplayConnected");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kVRServiceClient_OnDisplayConnected_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::VRServiceClient_OnDisplayConnected_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::device::mojom::VRMagicWindowProviderPtrDataView>(
      in_magic_window_provider, &params->magic_window_provider, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->magic_window_provider),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid magic_window_provider in VRServiceClient.OnDisplayConnected request");
  mojo::internal::Serialize<::device::mojom::VRDisplayHostPtrDataView>(
      in_display, &params->display, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->display),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid display in VRServiceClient.OnDisplayConnected request");
  mojo::internal::Serialize<::device::mojom::VRDisplayClientRequestDataView>(
      in_request, &params->request, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->request),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid request in VRServiceClient.OnDisplayConnected request");
  typename decltype(params->display_info)::BaseType::BufferWriter
      display_info_writer;
  mojo::internal::Serialize<::device::mojom::VRDisplayInfoDataView>(
      in_display_info, buffer, &display_info_writer, &serialization_context);
  params->display_info.Set(
      display_info_writer.is_null() ? nullptr : display_info_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->display_info.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null display_info in VRServiceClient.OnDisplayConnected request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool VRServiceClientStubDispatch::Accept(
    VRServiceClient* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kVRServiceClient_OnDisplayConnected_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)device::mojom::VRServiceClient::OnDisplayConnected",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::VRServiceClient_OnDisplayConnected_Params_Data* params =
          reinterpret_cast<internal::VRServiceClient_OnDisplayConnected_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      VRMagicWindowProviderPtr p_magic_window_provider{};
      VRDisplayHostPtr p_display{};
      VRDisplayClientRequest p_request{};
      VRDisplayInfoPtr p_display_info{};
      VRServiceClient_OnDisplayConnected_ParamsDataView input_data_view(params, &serialization_context);
      
      p_magic_window_provider =
          input_data_view.TakeMagicWindowProvider<decltype(p_magic_window_provider)>();
      p_display =
          input_data_view.TakeDisplay<decltype(p_display)>();
      p_request =
          input_data_view.TakeRequest<decltype(p_request)>();
      if (!input_data_view.ReadDisplayInfo(&p_display_info))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "VRServiceClient::OnDisplayConnected deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnDisplayConnected(
std::move(p_magic_window_provider), 
std::move(p_display), 
std::move(p_request), 
std::move(p_display_info));
      return true;
    }
  }
  return false;
}

// static
bool VRServiceClientStubDispatch::AcceptWithResponder(
    VRServiceClient* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kVRServiceClient_OnDisplayConnected_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)device::mojom::VRServiceClient::OnDisplayConnected",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool VRServiceClientRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "VRServiceClient RequestValidator");

  switch (message->header()->name) {
    case internal::kVRServiceClient_OnDisplayConnected_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::VRServiceClient_OnDisplayConnected_Params_Data>(
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

void VRServiceClientInterceptorForTesting::OnDisplayConnected(VRMagicWindowProviderPtr magic_window_provider, VRDisplayHostPtr display, VRDisplayClientRequest request, VRDisplayInfoPtr display_info) {
  GetForwardingInterface()->OnDisplayConnected(std::move(magic_window_provider), std::move(display), std::move(request), std::move(display_info));
}
VRServiceClientAsyncWaiter::VRServiceClientAsyncWaiter(
    VRServiceClient* proxy) : proxy_(proxy) {}

VRServiceClientAsyncWaiter::~VRServiceClientAsyncWaiter() = default;


const char VRSubmitFrameClient::Name_[] = "device.mojom.VRSubmitFrameClient";

VRSubmitFrameClientProxy::VRSubmitFrameClientProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void VRSubmitFrameClientProxy::OnSubmitFrameTransferred(
    bool in_success) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "device::mojom::VRSubmitFrameClient::OnSubmitFrameTransferred");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kVRSubmitFrameClient_OnSubmitFrameTransferred_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::VRSubmitFrameClient_OnSubmitFrameTransferred_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->success = in_success;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void VRSubmitFrameClientProxy::OnSubmitFrameRendered(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "device::mojom::VRSubmitFrameClient::OnSubmitFrameRendered");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kVRSubmitFrameClient_OnSubmitFrameRendered_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::VRSubmitFrameClient_OnSubmitFrameRendered_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void VRSubmitFrameClientProxy::OnSubmitFrameGpuFence(
    const ::gfx::GpuFenceHandle& in_gpu_fence_handle) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "device::mojom::VRSubmitFrameClient::OnSubmitFrameGpuFence");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kVRSubmitFrameClient_OnSubmitFrameGpuFence_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::VRSubmitFrameClient_OnSubmitFrameGpuFence_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->gpu_fence_handle)::BaseType::BufferWriter
      gpu_fence_handle_writer;
  mojo::internal::Serialize<::gfx::mojom::GpuFenceHandleDataView>(
      in_gpu_fence_handle, buffer, &gpu_fence_handle_writer, &serialization_context);
  params->gpu_fence_handle.Set(
      gpu_fence_handle_writer.is_null() ? nullptr : gpu_fence_handle_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->gpu_fence_handle.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null gpu_fence_handle in VRSubmitFrameClient.OnSubmitFrameGpuFence request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool VRSubmitFrameClientStubDispatch::Accept(
    VRSubmitFrameClient* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kVRSubmitFrameClient_OnSubmitFrameTransferred_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)device::mojom::VRSubmitFrameClient::OnSubmitFrameTransferred",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::VRSubmitFrameClient_OnSubmitFrameTransferred_Params_Data* params =
          reinterpret_cast<internal::VRSubmitFrameClient_OnSubmitFrameTransferred_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      bool p_success{};
      VRSubmitFrameClient_OnSubmitFrameTransferred_ParamsDataView input_data_view(params, &serialization_context);
      
      p_success = input_data_view.success();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "VRSubmitFrameClient::OnSubmitFrameTransferred deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnSubmitFrameTransferred(
std::move(p_success));
      return true;
    }
    case internal::kVRSubmitFrameClient_OnSubmitFrameRendered_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)device::mojom::VRSubmitFrameClient::OnSubmitFrameRendered",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::VRSubmitFrameClient_OnSubmitFrameRendered_Params_Data* params =
          reinterpret_cast<internal::VRSubmitFrameClient_OnSubmitFrameRendered_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      VRSubmitFrameClient_OnSubmitFrameRendered_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "VRSubmitFrameClient::OnSubmitFrameRendered deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnSubmitFrameRendered();
      return true;
    }
    case internal::kVRSubmitFrameClient_OnSubmitFrameGpuFence_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)device::mojom::VRSubmitFrameClient::OnSubmitFrameGpuFence",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::VRSubmitFrameClient_OnSubmitFrameGpuFence_Params_Data* params =
          reinterpret_cast<internal::VRSubmitFrameClient_OnSubmitFrameGpuFence_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::gfx::GpuFenceHandle p_gpu_fence_handle{};
      VRSubmitFrameClient_OnSubmitFrameGpuFence_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadGpuFenceHandle(&p_gpu_fence_handle))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "VRSubmitFrameClient::OnSubmitFrameGpuFence deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnSubmitFrameGpuFence(
std::move(p_gpu_fence_handle));
      return true;
    }
  }
  return false;
}

// static
bool VRSubmitFrameClientStubDispatch::AcceptWithResponder(
    VRSubmitFrameClient* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kVRSubmitFrameClient_OnSubmitFrameTransferred_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)device::mojom::VRSubmitFrameClient::OnSubmitFrameTransferred",
               "message", message->name());
#endif
      break;
    }
    case internal::kVRSubmitFrameClient_OnSubmitFrameRendered_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)device::mojom::VRSubmitFrameClient::OnSubmitFrameRendered",
               "message", message->name());
#endif
      break;
    }
    case internal::kVRSubmitFrameClient_OnSubmitFrameGpuFence_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)device::mojom::VRSubmitFrameClient::OnSubmitFrameGpuFence",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool VRSubmitFrameClientRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "VRSubmitFrameClient RequestValidator");

  switch (message->header()->name) {
    case internal::kVRSubmitFrameClient_OnSubmitFrameTransferred_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::VRSubmitFrameClient_OnSubmitFrameTransferred_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kVRSubmitFrameClient_OnSubmitFrameRendered_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::VRSubmitFrameClient_OnSubmitFrameRendered_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kVRSubmitFrameClient_OnSubmitFrameGpuFence_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::VRSubmitFrameClient_OnSubmitFrameGpuFence_Params_Data>(
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

void VRSubmitFrameClientInterceptorForTesting::OnSubmitFrameTransferred(bool success) {
  GetForwardingInterface()->OnSubmitFrameTransferred(std::move(success));
}
void VRSubmitFrameClientInterceptorForTesting::OnSubmitFrameRendered() {
  GetForwardingInterface()->OnSubmitFrameRendered();
}
void VRSubmitFrameClientInterceptorForTesting::OnSubmitFrameGpuFence(const ::gfx::GpuFenceHandle& gpu_fence_handle) {
  GetForwardingInterface()->OnSubmitFrameGpuFence(std::move(gpu_fence_handle));
}
VRSubmitFrameClientAsyncWaiter::VRSubmitFrameClientAsyncWaiter(
    VRSubmitFrameClient* proxy) : proxy_(proxy) {}

VRSubmitFrameClientAsyncWaiter::~VRSubmitFrameClientAsyncWaiter() = default;


const char VRDisplayHost::Name_[] = "device.mojom.VRDisplayHost";

class VRDisplayHost_RequestPresent_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  VRDisplayHost_RequestPresent_ForwardToCallback(
      VRDisplayHost::RequestPresentCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  VRDisplayHost::RequestPresentCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(VRDisplayHost_RequestPresent_ForwardToCallback);
};

VRDisplayHostProxy::VRDisplayHostProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void VRDisplayHostProxy::RequestPresent(
    VRSubmitFrameClientPtr in_client, VRPresentationProviderRequest in_request, VRRequestPresentOptionsPtr in_options, bool in_triggered_by_displayactive, RequestPresentCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "device::mojom::VRDisplayHost::RequestPresent");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kVRDisplayHost_RequestPresent_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::VRDisplayHost_RequestPresent_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::device::mojom::VRSubmitFrameClientPtrDataView>(
      in_client, &params->client, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->client),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid client in VRDisplayHost.RequestPresent request");
  mojo::internal::Serialize<::device::mojom::VRPresentationProviderRequestDataView>(
      in_request, &params->request, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->request),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid request in VRDisplayHost.RequestPresent request");
  typename decltype(params->options)::BaseType::BufferWriter
      options_writer;
  mojo::internal::Serialize<::device::mojom::VRRequestPresentOptionsDataView>(
      in_options, buffer, &options_writer, &serialization_context);
  params->options.Set(
      options_writer.is_null() ? nullptr : options_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->options.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null options in VRDisplayHost.RequestPresent request");
  params->triggered_by_displayactive = in_triggered_by_displayactive;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new VRDisplayHost_RequestPresent_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void VRDisplayHostProxy::ExitPresent(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "device::mojom::VRDisplayHost::ExitPresent");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kVRDisplayHost_ExitPresent_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::VRDisplayHost_ExitPresent_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}
class VRDisplayHost_RequestPresent_ProxyToResponder {
 public:
  static VRDisplayHost::RequestPresentCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<VRDisplayHost_RequestPresent_ProxyToResponder> proxy(
        new VRDisplayHost_RequestPresent_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&VRDisplayHost_RequestPresent_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~VRDisplayHost_RequestPresent_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // If we're being destroyed without being run, we want to ensure the
      // binding endpoint has been closed. This checks for that asynchronously.
      // We pass a bound generated callback to handle the response so that any
      // resulting DCHECK stack will have useful interface type information.
      responder_->IsConnectedAsync(base::BindOnce(&OnIsConnectedComplete));
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    responder_ = nullptr;
  }

 private:
  VRDisplayHost_RequestPresent_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "VRDisplayHost::RequestPresentCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      bool in_success, VRDisplayFrameTransportOptionsPtr in_transport_options);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(VRDisplayHost_RequestPresent_ProxyToResponder);
};

bool VRDisplayHost_RequestPresent_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "device::mojom::VRDisplayHost::RequestPresentCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::VRDisplayHost_RequestPresent_ResponseParams_Data* params =
      reinterpret_cast<
          internal::VRDisplayHost_RequestPresent_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  bool p_success{};
  VRDisplayFrameTransportOptionsPtr p_transport_options{};
  VRDisplayHost_RequestPresent_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_success = input_data_view.success();
  if (!input_data_view.ReadTransportOptions(&p_transport_options))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "VRDisplayHost::RequestPresent response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_success), 
std::move(p_transport_options));
  return true;
}

void VRDisplayHost_RequestPresent_ProxyToResponder::Run(
    bool in_success, VRDisplayFrameTransportOptionsPtr in_transport_options) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kVRDisplayHost_RequestPresent_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::VRDisplayHost_RequestPresent_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->success = in_success;
  typename decltype(params->transport_options)::BaseType::BufferWriter
      transport_options_writer;
  mojo::internal::Serialize<::device::mojom::VRDisplayFrameTransportOptionsDataView>(
      in_transport_options, buffer, &transport_options_writer, &serialization_context);
  params->transport_options.Set(
      transport_options_writer.is_null() ? nullptr : transport_options_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)device::mojom::VRDisplayHost::RequestPresentCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}

// static
bool VRDisplayHostStubDispatch::Accept(
    VRDisplayHost* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kVRDisplayHost_RequestPresent_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)device::mojom::VRDisplayHost::RequestPresent",
               "message", message->name());
#endif
      break;
    }
    case internal::kVRDisplayHost_ExitPresent_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)device::mojom::VRDisplayHost::ExitPresent",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::VRDisplayHost_ExitPresent_Params_Data* params =
          reinterpret_cast<internal::VRDisplayHost_ExitPresent_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      VRDisplayHost_ExitPresent_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "VRDisplayHost::ExitPresent deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->ExitPresent();
      return true;
    }
  }
  return false;
}

// static
bool VRDisplayHostStubDispatch::AcceptWithResponder(
    VRDisplayHost* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kVRDisplayHost_RequestPresent_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)device::mojom::VRDisplayHost::RequestPresent",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::VRDisplayHost_RequestPresent_Params_Data* params =
          reinterpret_cast<
              internal::VRDisplayHost_RequestPresent_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      VRSubmitFrameClientPtr p_client{};
      VRPresentationProviderRequest p_request{};
      VRRequestPresentOptionsPtr p_options{};
      bool p_triggered_by_displayactive{};
      VRDisplayHost_RequestPresent_ParamsDataView input_data_view(params, &serialization_context);
      
      p_client =
          input_data_view.TakeClient<decltype(p_client)>();
      p_request =
          input_data_view.TakeRequest<decltype(p_request)>();
      if (!input_data_view.ReadOptions(&p_options))
        success = false;
      p_triggered_by_displayactive = input_data_view.triggered_by_displayactive();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "VRDisplayHost::RequestPresent deserializer");
        return false;
      }
      VRDisplayHost::RequestPresentCallback callback =
          VRDisplayHost_RequestPresent_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->RequestPresent(
std::move(p_client), 
std::move(p_request), 
std::move(p_options), 
std::move(p_triggered_by_displayactive), std::move(callback));
      return true;
    }
    case internal::kVRDisplayHost_ExitPresent_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)device::mojom::VRDisplayHost::ExitPresent",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool VRDisplayHostRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "VRDisplayHost RequestValidator");

  switch (message->header()->name) {
    case internal::kVRDisplayHost_RequestPresent_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::VRDisplayHost_RequestPresent_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kVRDisplayHost_ExitPresent_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::VRDisplayHost_ExitPresent_Params_Data>(
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

bool VRDisplayHostResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "VRDisplayHost ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kVRDisplayHost_RequestPresent_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::VRDisplayHost_RequestPresent_ResponseParams_Data>(
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
void VRDisplayHostInterceptorForTesting::RequestPresent(VRSubmitFrameClientPtr client, VRPresentationProviderRequest request, VRRequestPresentOptionsPtr options, bool triggered_by_displayactive, RequestPresentCallback callback) {
  GetForwardingInterface()->RequestPresent(std::move(client), std::move(request), std::move(options), std::move(triggered_by_displayactive), std::move(callback));
}
void VRDisplayHostInterceptorForTesting::ExitPresent() {
  GetForwardingInterface()->ExitPresent();
}
VRDisplayHostAsyncWaiter::VRDisplayHostAsyncWaiter(
    VRDisplayHost* proxy) : proxy_(proxy) {}

VRDisplayHostAsyncWaiter::~VRDisplayHostAsyncWaiter() = default;

void VRDisplayHostAsyncWaiter::RequestPresent(
    VRSubmitFrameClientPtr client, VRPresentationProviderRequest request, VRRequestPresentOptionsPtr options, bool triggered_by_displayactive, bool* out_success, VRDisplayFrameTransportOptionsPtr* out_transport_options) {
  base::RunLoop loop;
  proxy_->RequestPresent(std::move(client),std::move(request),std::move(options),std::move(triggered_by_displayactive),
      base::BindOnce(
          [](base::RunLoop* loop,
             bool* out_success
,
             VRDisplayFrameTransportOptionsPtr* out_transport_options
,
             bool success,
             VRDisplayFrameTransportOptionsPtr transport_options) {*out_success = std::move(success);*out_transport_options = std::move(transport_options);
            loop->Quit();
          },
          &loop,
          out_success,
          out_transport_options));
  loop.Run();
}

const char VRMagicWindowProvider::Name_[] = "device.mojom.VRMagicWindowProvider";

class VRMagicWindowProvider_GetPose_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  VRMagicWindowProvider_GetPose_ForwardToCallback(
      VRMagicWindowProvider::GetPoseCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  VRMagicWindowProvider::GetPoseCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(VRMagicWindowProvider_GetPose_ForwardToCallback);
};

class VRMagicWindowProvider_GetFrameData_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  VRMagicWindowProvider_GetFrameData_ForwardToCallback(
      VRMagicWindowProvider::GetFrameDataCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  VRMagicWindowProvider::GetFrameDataCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(VRMagicWindowProvider_GetFrameData_ForwardToCallback);
};

VRMagicWindowProviderProxy::VRMagicWindowProviderProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void VRMagicWindowProviderProxy::GetPose(
    GetPoseCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "device::mojom::VRMagicWindowProvider::GetPose");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kVRMagicWindowProvider_GetPose_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::VRMagicWindowProvider_GetPose_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new VRMagicWindowProvider_GetPose_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void VRMagicWindowProviderProxy::GetFrameData(
    const ::blink::WebSize& in_frame_size, display::Display::Rotation in_display_rotation, GetFrameDataCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "device::mojom::VRMagicWindowProvider::GetFrameData");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kVRMagicWindowProvider_GetFrameData_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::VRMagicWindowProvider_GetFrameData_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->frame_size)::BaseType::BufferWriter
      frame_size_writer;
  mojo::internal::Serialize<::gfx::mojom::SizeDataView>(
      in_frame_size, buffer, &frame_size_writer, &serialization_context);
  params->frame_size.Set(
      frame_size_writer.is_null() ? nullptr : frame_size_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->frame_size.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null frame_size in VRMagicWindowProvider.GetFrameData request");
  mojo::internal::Serialize<::display::mojom::Rotation>(
      in_display_rotation, &params->display_rotation);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new VRMagicWindowProvider_GetFrameData_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class VRMagicWindowProvider_GetPose_ProxyToResponder {
 public:
  static VRMagicWindowProvider::GetPoseCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<VRMagicWindowProvider_GetPose_ProxyToResponder> proxy(
        new VRMagicWindowProvider_GetPose_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&VRMagicWindowProvider_GetPose_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~VRMagicWindowProvider_GetPose_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // If we're being destroyed without being run, we want to ensure the
      // binding endpoint has been closed. This checks for that asynchronously.
      // We pass a bound generated callback to handle the response so that any
      // resulting DCHECK stack will have useful interface type information.
      responder_->IsConnectedAsync(base::BindOnce(&OnIsConnectedComplete));
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    responder_ = nullptr;
  }

 private:
  VRMagicWindowProvider_GetPose_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "VRMagicWindowProvider::GetPoseCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      VRPosePtr in_pose);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(VRMagicWindowProvider_GetPose_ProxyToResponder);
};

bool VRMagicWindowProvider_GetPose_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "device::mojom::VRMagicWindowProvider::GetPoseCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::VRMagicWindowProvider_GetPose_ResponseParams_Data* params =
      reinterpret_cast<
          internal::VRMagicWindowProvider_GetPose_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  VRPosePtr p_pose{};
  VRMagicWindowProvider_GetPose_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadPose(&p_pose))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "VRMagicWindowProvider::GetPose response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_pose));
  return true;
}

void VRMagicWindowProvider_GetPose_ProxyToResponder::Run(
    VRPosePtr in_pose) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kVRMagicWindowProvider_GetPose_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::VRMagicWindowProvider_GetPose_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->pose)::BaseType::BufferWriter
      pose_writer;
  mojo::internal::Serialize<::device::mojom::VRPoseDataView>(
      in_pose, buffer, &pose_writer, &serialization_context);
  params->pose.Set(
      pose_writer.is_null() ? nullptr : pose_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)device::mojom::VRMagicWindowProvider::GetPoseCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class VRMagicWindowProvider_GetFrameData_ProxyToResponder {
 public:
  static VRMagicWindowProvider::GetFrameDataCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<VRMagicWindowProvider_GetFrameData_ProxyToResponder> proxy(
        new VRMagicWindowProvider_GetFrameData_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&VRMagicWindowProvider_GetFrameData_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~VRMagicWindowProvider_GetFrameData_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // If we're being destroyed without being run, we want to ensure the
      // binding endpoint has been closed. This checks for that asynchronously.
      // We pass a bound generated callback to handle the response so that any
      // resulting DCHECK stack will have useful interface type information.
      responder_->IsConnectedAsync(base::BindOnce(&OnIsConnectedComplete));
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    responder_ = nullptr;
  }

 private:
  VRMagicWindowProvider_GetFrameData_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "VRMagicWindowProvider::GetFrameDataCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      VRMagicWindowFrameDataPtr in_frame_data);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(VRMagicWindowProvider_GetFrameData_ProxyToResponder);
};

bool VRMagicWindowProvider_GetFrameData_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "device::mojom::VRMagicWindowProvider::GetFrameDataCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::VRMagicWindowProvider_GetFrameData_ResponseParams_Data* params =
      reinterpret_cast<
          internal::VRMagicWindowProvider_GetFrameData_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  VRMagicWindowFrameDataPtr p_frame_data{};
  VRMagicWindowProvider_GetFrameData_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadFrameData(&p_frame_data))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "VRMagicWindowProvider::GetFrameData response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_frame_data));
  return true;
}

void VRMagicWindowProvider_GetFrameData_ProxyToResponder::Run(
    VRMagicWindowFrameDataPtr in_frame_data) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kVRMagicWindowProvider_GetFrameData_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::VRMagicWindowProvider_GetFrameData_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->frame_data)::BaseType::BufferWriter
      frame_data_writer;
  mojo::internal::Serialize<::device::mojom::VRMagicWindowFrameDataDataView>(
      in_frame_data, buffer, &frame_data_writer, &serialization_context);
  params->frame_data.Set(
      frame_data_writer.is_null() ? nullptr : frame_data_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)device::mojom::VRMagicWindowProvider::GetFrameDataCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}

// static
bool VRMagicWindowProviderStubDispatch::Accept(
    VRMagicWindowProvider* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kVRMagicWindowProvider_GetPose_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)device::mojom::VRMagicWindowProvider::GetPose",
               "message", message->name());
#endif
      break;
    }
    case internal::kVRMagicWindowProvider_GetFrameData_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)device::mojom::VRMagicWindowProvider::GetFrameData",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

// static
bool VRMagicWindowProviderStubDispatch::AcceptWithResponder(
    VRMagicWindowProvider* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kVRMagicWindowProvider_GetPose_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)device::mojom::VRMagicWindowProvider::GetPose",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::VRMagicWindowProvider_GetPose_Params_Data* params =
          reinterpret_cast<
              internal::VRMagicWindowProvider_GetPose_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      VRMagicWindowProvider_GetPose_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "VRMagicWindowProvider::GetPose deserializer");
        return false;
      }
      VRMagicWindowProvider::GetPoseCallback callback =
          VRMagicWindowProvider_GetPose_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->GetPose(std::move(callback));
      return true;
    }
    case internal::kVRMagicWindowProvider_GetFrameData_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)device::mojom::VRMagicWindowProvider::GetFrameData",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::VRMagicWindowProvider_GetFrameData_Params_Data* params =
          reinterpret_cast<
              internal::VRMagicWindowProvider_GetFrameData_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::blink::WebSize p_frame_size{};
      display::Display::Rotation p_display_rotation{};
      VRMagicWindowProvider_GetFrameData_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadFrameSize(&p_frame_size))
        success = false;
      if (!input_data_view.ReadDisplayRotation(&p_display_rotation))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "VRMagicWindowProvider::GetFrameData deserializer");
        return false;
      }
      VRMagicWindowProvider::GetFrameDataCallback callback =
          VRMagicWindowProvider_GetFrameData_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->GetFrameData(
std::move(p_frame_size), 
std::move(p_display_rotation), std::move(callback));
      return true;
    }
  }
  return false;
}

bool VRMagicWindowProviderRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "VRMagicWindowProvider RequestValidator");

  switch (message->header()->name) {
    case internal::kVRMagicWindowProvider_GetPose_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::VRMagicWindowProvider_GetPose_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kVRMagicWindowProvider_GetFrameData_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::VRMagicWindowProvider_GetFrameData_Params_Data>(
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

bool VRMagicWindowProviderResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "VRMagicWindowProvider ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kVRMagicWindowProvider_GetPose_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::VRMagicWindowProvider_GetPose_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kVRMagicWindowProvider_GetFrameData_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::VRMagicWindowProvider_GetFrameData_ResponseParams_Data>(
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
void VRMagicWindowProviderInterceptorForTesting::GetPose(GetPoseCallback callback) {
  GetForwardingInterface()->GetPose(std::move(callback));
}
void VRMagicWindowProviderInterceptorForTesting::GetFrameData(const ::blink::WebSize& frame_size, display::Display::Rotation display_rotation, GetFrameDataCallback callback) {
  GetForwardingInterface()->GetFrameData(std::move(frame_size), std::move(display_rotation), std::move(callback));
}
VRMagicWindowProviderAsyncWaiter::VRMagicWindowProviderAsyncWaiter(
    VRMagicWindowProvider* proxy) : proxy_(proxy) {}

VRMagicWindowProviderAsyncWaiter::~VRMagicWindowProviderAsyncWaiter() = default;

void VRMagicWindowProviderAsyncWaiter::GetPose(
    VRPosePtr* out_pose) {
  base::RunLoop loop;
  proxy_->GetPose(
      base::BindOnce(
          [](base::RunLoop* loop,
             VRPosePtr* out_pose
,
             VRPosePtr pose) {*out_pose = std::move(pose);
            loop->Quit();
          },
          &loop,
          out_pose));
  loop.Run();
}
void VRMagicWindowProviderAsyncWaiter::GetFrameData(
    const ::blink::WebSize& frame_size, display::Display::Rotation display_rotation, VRMagicWindowFrameDataPtr* out_frame_data) {
  base::RunLoop loop;
  proxy_->GetFrameData(std::move(frame_size),std::move(display_rotation),
      base::BindOnce(
          [](base::RunLoop* loop,
             VRMagicWindowFrameDataPtr* out_frame_data
,
             VRMagicWindowFrameDataPtr frame_data) {*out_frame_data = std::move(frame_data);
            loop->Quit();
          },
          &loop,
          out_frame_data));
  loop.Run();
}

const char VRPresentationProvider::Name_[] = "device.mojom.VRPresentationProvider";

class VRPresentationProvider_GetVSync_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  VRPresentationProvider_GetVSync_ForwardToCallback(
      VRPresentationProvider::GetVSyncCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  VRPresentationProvider::GetVSyncCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(VRPresentationProvider_GetVSync_ForwardToCallback);
};

VRPresentationProviderProxy::VRPresentationProviderProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void VRPresentationProviderProxy::GetVSync(
    GetVSyncCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "device::mojom::VRPresentationProvider::GetVSync");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kVRPresentationProvider_GetVSync_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::VRPresentationProvider_GetVSync_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new VRPresentationProvider_GetVSync_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void VRPresentationProviderProxy::UpdateLayerBounds(
    int16_t in_frame_id, const ::blink::WebFloatRect& in_left_bounds, const ::blink::WebFloatRect& in_right_bounds, const ::blink::WebSize& in_source_size) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "device::mojom::VRPresentationProvider::UpdateLayerBounds");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kVRPresentationProvider_UpdateLayerBounds_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::VRPresentationProvider_UpdateLayerBounds_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->frame_id = in_frame_id;
  typename decltype(params->left_bounds)::BaseType::BufferWriter
      left_bounds_writer;
  mojo::internal::Serialize<::gfx::mojom::RectFDataView>(
      in_left_bounds, buffer, &left_bounds_writer, &serialization_context);
  params->left_bounds.Set(
      left_bounds_writer.is_null() ? nullptr : left_bounds_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->left_bounds.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null left_bounds in VRPresentationProvider.UpdateLayerBounds request");
  typename decltype(params->right_bounds)::BaseType::BufferWriter
      right_bounds_writer;
  mojo::internal::Serialize<::gfx::mojom::RectFDataView>(
      in_right_bounds, buffer, &right_bounds_writer, &serialization_context);
  params->right_bounds.Set(
      right_bounds_writer.is_null() ? nullptr : right_bounds_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->right_bounds.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null right_bounds in VRPresentationProvider.UpdateLayerBounds request");
  typename decltype(params->source_size)::BaseType::BufferWriter
      source_size_writer;
  mojo::internal::Serialize<::gfx::mojom::SizeDataView>(
      in_source_size, buffer, &source_size_writer, &serialization_context);
  params->source_size.Set(
      source_size_writer.is_null() ? nullptr : source_size_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->source_size.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null source_size in VRPresentationProvider.UpdateLayerBounds request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void VRPresentationProviderProxy::SubmitFrameMissing(
    int16_t in_frame_id, const ::gpu::SyncToken& in_sync_token) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "device::mojom::VRPresentationProvider::SubmitFrameMissing");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kVRPresentationProvider_SubmitFrameMissing_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::VRPresentationProvider_SubmitFrameMissing_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->frame_id = in_frame_id;
  typename decltype(params->sync_token)::BaseType::BufferWriter
      sync_token_writer;
  mojo::internal::Serialize<::gpu::mojom::SyncTokenDataView>(
      in_sync_token, buffer, &sync_token_writer, &serialization_context);
  params->sync_token.Set(
      sync_token_writer.is_null() ? nullptr : sync_token_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->sync_token.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null sync_token in VRPresentationProvider.SubmitFrameMissing request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void VRPresentationProviderProxy::SubmitFrame(
    int16_t in_frame_id, const ::gpu::MailboxHolder& in_mailbox_holder, WTF::TimeDelta in_time_waited) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "device::mojom::VRPresentationProvider::SubmitFrame");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kVRPresentationProvider_SubmitFrame_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::VRPresentationProvider_SubmitFrame_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->frame_id = in_frame_id;
  typename decltype(params->mailbox_holder)::BaseType::BufferWriter
      mailbox_holder_writer;
  mojo::internal::Serialize<::gpu::mojom::MailboxHolderDataView>(
      in_mailbox_holder, buffer, &mailbox_holder_writer, &serialization_context);
  params->mailbox_holder.Set(
      mailbox_holder_writer.is_null() ? nullptr : mailbox_holder_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->mailbox_holder.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null mailbox_holder in VRPresentationProvider.SubmitFrame request");
  typename decltype(params->time_waited)::BaseType::BufferWriter
      time_waited_writer;
  mojo::internal::Serialize<::mojo_base::mojom::TimeDeltaDataView>(
      in_time_waited, buffer, &time_waited_writer, &serialization_context);
  params->time_waited.Set(
      time_waited_writer.is_null() ? nullptr : time_waited_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->time_waited.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null time_waited in VRPresentationProvider.SubmitFrame request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void VRPresentationProviderProxy::SubmitFrameWithTextureHandle(
    int16_t in_frameId, mojo::ScopedHandle in_texture) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "device::mojom::VRPresentationProvider::SubmitFrameWithTextureHandle");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kVRPresentationProvider_SubmitFrameWithTextureHandle_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::VRPresentationProvider_SubmitFrameWithTextureHandle_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->frameId = in_frameId;
  mojo::internal::Serialize<mojo::ScopedHandle>(
      in_texture, &params->texture, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->texture),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid texture in VRPresentationProvider.SubmitFrameWithTextureHandle request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void VRPresentationProviderProxy::SubmitFrameDrawnIntoTexture(
    int16_t in_frameId, const ::gpu::SyncToken& in_sync_token, WTF::TimeDelta in_time_waited) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "device::mojom::VRPresentationProvider::SubmitFrameDrawnIntoTexture");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kVRPresentationProvider_SubmitFrameDrawnIntoTexture_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::VRPresentationProvider_SubmitFrameDrawnIntoTexture_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->frameId = in_frameId;
  typename decltype(params->sync_token)::BaseType::BufferWriter
      sync_token_writer;
  mojo::internal::Serialize<::gpu::mojom::SyncTokenDataView>(
      in_sync_token, buffer, &sync_token_writer, &serialization_context);
  params->sync_token.Set(
      sync_token_writer.is_null() ? nullptr : sync_token_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->sync_token.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null sync_token in VRPresentationProvider.SubmitFrameDrawnIntoTexture request");
  typename decltype(params->time_waited)::BaseType::BufferWriter
      time_waited_writer;
  mojo::internal::Serialize<::mojo_base::mojom::TimeDeltaDataView>(
      in_time_waited, buffer, &time_waited_writer, &serialization_context);
  params->time_waited.Set(
      time_waited_writer.is_null() ? nullptr : time_waited_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->time_waited.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null time_waited in VRPresentationProvider.SubmitFrameDrawnIntoTexture request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}
class VRPresentationProvider_GetVSync_ProxyToResponder {
 public:
  static VRPresentationProvider::GetVSyncCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<VRPresentationProvider_GetVSync_ProxyToResponder> proxy(
        new VRPresentationProvider_GetVSync_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&VRPresentationProvider_GetVSync_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~VRPresentationProvider_GetVSync_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // If we're being destroyed without being run, we want to ensure the
      // binding endpoint has been closed. This checks for that asynchronously.
      // We pass a bound generated callback to handle the response so that any
      // resulting DCHECK stack will have useful interface type information.
      responder_->IsConnectedAsync(base::BindOnce(&OnIsConnectedComplete));
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    responder_ = nullptr;
  }

 private:
  VRPresentationProvider_GetVSync_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "VRPresentationProvider::GetVSyncCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      VRPosePtr in_pose, WTF::TimeDelta in_time, int16_t in_frame_id, VRPresentationProvider::VSyncStatus in_status, const base::Optional<::gpu::MailboxHolder>& in_buffer_holder);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(VRPresentationProvider_GetVSync_ProxyToResponder);
};

bool VRPresentationProvider_GetVSync_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "device::mojom::VRPresentationProvider::GetVSyncCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::VRPresentationProvider_GetVSync_ResponseParams_Data* params =
      reinterpret_cast<
          internal::VRPresentationProvider_GetVSync_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  VRPosePtr p_pose{};
  WTF::TimeDelta p_time{};
  int16_t p_frame_id{};
  VRPresentationProvider::VSyncStatus p_status{};
  base::Optional<::gpu::MailboxHolder> p_buffer_holder{};
  VRPresentationProvider_GetVSync_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadPose(&p_pose))
    success = false;
  if (!input_data_view.ReadTime(&p_time))
    success = false;
  p_frame_id = input_data_view.frame_id();
  if (!input_data_view.ReadStatus(&p_status))
    success = false;
  if (!input_data_view.ReadBufferHolder(&p_buffer_holder))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "VRPresentationProvider::GetVSync response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_pose), 
std::move(p_time), 
std::move(p_frame_id), 
std::move(p_status), 
std::move(p_buffer_holder));
  return true;
}

void VRPresentationProvider_GetVSync_ProxyToResponder::Run(
    VRPosePtr in_pose, WTF::TimeDelta in_time, int16_t in_frame_id, VRPresentationProvider::VSyncStatus in_status, const base::Optional<::gpu::MailboxHolder>& in_buffer_holder) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kVRPresentationProvider_GetVSync_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::VRPresentationProvider_GetVSync_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->pose)::BaseType::BufferWriter
      pose_writer;
  mojo::internal::Serialize<::device::mojom::VRPoseDataView>(
      in_pose, buffer, &pose_writer, &serialization_context);
  params->pose.Set(
      pose_writer.is_null() ? nullptr : pose_writer.data());
  typename decltype(params->time)::BaseType::BufferWriter
      time_writer;
  mojo::internal::Serialize<::mojo_base::mojom::TimeDeltaDataView>(
      in_time, buffer, &time_writer, &serialization_context);
  params->time.Set(
      time_writer.is_null() ? nullptr : time_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->time.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null time in ");
  params->frame_id = in_frame_id;
  mojo::internal::Serialize<::device::mojom::VRPresentationProvider_VSyncStatus>(
      in_status, &params->status);
  typename decltype(params->buffer_holder)::BaseType::BufferWriter
      buffer_holder_writer;
  mojo::internal::Serialize<::gpu::mojom::MailboxHolderDataView>(
      in_buffer_holder, buffer, &buffer_holder_writer, &serialization_context);
  params->buffer_holder.Set(
      buffer_holder_writer.is_null() ? nullptr : buffer_holder_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)device::mojom::VRPresentationProvider::GetVSyncCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}

// static
bool VRPresentationProviderStubDispatch::Accept(
    VRPresentationProvider* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kVRPresentationProvider_GetVSync_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)device::mojom::VRPresentationProvider::GetVSync",
               "message", message->name());
#endif
      break;
    }
    case internal::kVRPresentationProvider_UpdateLayerBounds_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)device::mojom::VRPresentationProvider::UpdateLayerBounds",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::VRPresentationProvider_UpdateLayerBounds_Params_Data* params =
          reinterpret_cast<internal::VRPresentationProvider_UpdateLayerBounds_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int16_t p_frame_id{};
      ::blink::WebFloatRect p_left_bounds{};
      ::blink::WebFloatRect p_right_bounds{};
      ::blink::WebSize p_source_size{};
      VRPresentationProvider_UpdateLayerBounds_ParamsDataView input_data_view(params, &serialization_context);
      
      p_frame_id = input_data_view.frame_id();
      if (!input_data_view.ReadLeftBounds(&p_left_bounds))
        success = false;
      if (!input_data_view.ReadRightBounds(&p_right_bounds))
        success = false;
      if (!input_data_view.ReadSourceSize(&p_source_size))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "VRPresentationProvider::UpdateLayerBounds deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->UpdateLayerBounds(
std::move(p_frame_id), 
std::move(p_left_bounds), 
std::move(p_right_bounds), 
std::move(p_source_size));
      return true;
    }
    case internal::kVRPresentationProvider_SubmitFrameMissing_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)device::mojom::VRPresentationProvider::SubmitFrameMissing",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::VRPresentationProvider_SubmitFrameMissing_Params_Data* params =
          reinterpret_cast<internal::VRPresentationProvider_SubmitFrameMissing_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int16_t p_frame_id{};
      ::gpu::SyncToken p_sync_token{};
      VRPresentationProvider_SubmitFrameMissing_ParamsDataView input_data_view(params, &serialization_context);
      
      p_frame_id = input_data_view.frame_id();
      if (!input_data_view.ReadSyncToken(&p_sync_token))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "VRPresentationProvider::SubmitFrameMissing deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->SubmitFrameMissing(
std::move(p_frame_id), 
std::move(p_sync_token));
      return true;
    }
    case internal::kVRPresentationProvider_SubmitFrame_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)device::mojom::VRPresentationProvider::SubmitFrame",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::VRPresentationProvider_SubmitFrame_Params_Data* params =
          reinterpret_cast<internal::VRPresentationProvider_SubmitFrame_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int16_t p_frame_id{};
      ::gpu::MailboxHolder p_mailbox_holder{};
      WTF::TimeDelta p_time_waited{};
      VRPresentationProvider_SubmitFrame_ParamsDataView input_data_view(params, &serialization_context);
      
      p_frame_id = input_data_view.frame_id();
      if (!input_data_view.ReadMailboxHolder(&p_mailbox_holder))
        success = false;
      if (!input_data_view.ReadTimeWaited(&p_time_waited))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "VRPresentationProvider::SubmitFrame deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->SubmitFrame(
std::move(p_frame_id), 
std::move(p_mailbox_holder), 
std::move(p_time_waited));
      return true;
    }
    case internal::kVRPresentationProvider_SubmitFrameWithTextureHandle_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)device::mojom::VRPresentationProvider::SubmitFrameWithTextureHandle",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::VRPresentationProvider_SubmitFrameWithTextureHandle_Params_Data* params =
          reinterpret_cast<internal::VRPresentationProvider_SubmitFrameWithTextureHandle_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int16_t p_frameId{};
      mojo::ScopedHandle p_texture{};
      VRPresentationProvider_SubmitFrameWithTextureHandle_ParamsDataView input_data_view(params, &serialization_context);
      
      p_frameId = input_data_view.frameId();
      p_texture = input_data_view.TakeTexture();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "VRPresentationProvider::SubmitFrameWithTextureHandle deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->SubmitFrameWithTextureHandle(
std::move(p_frameId), 
std::move(p_texture));
      return true;
    }
    case internal::kVRPresentationProvider_SubmitFrameDrawnIntoTexture_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)device::mojom::VRPresentationProvider::SubmitFrameDrawnIntoTexture",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::VRPresentationProvider_SubmitFrameDrawnIntoTexture_Params_Data* params =
          reinterpret_cast<internal::VRPresentationProvider_SubmitFrameDrawnIntoTexture_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int16_t p_frameId{};
      ::gpu::SyncToken p_sync_token{};
      WTF::TimeDelta p_time_waited{};
      VRPresentationProvider_SubmitFrameDrawnIntoTexture_ParamsDataView input_data_view(params, &serialization_context);
      
      p_frameId = input_data_view.frameId();
      if (!input_data_view.ReadSyncToken(&p_sync_token))
        success = false;
      if (!input_data_view.ReadTimeWaited(&p_time_waited))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "VRPresentationProvider::SubmitFrameDrawnIntoTexture deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->SubmitFrameDrawnIntoTexture(
std::move(p_frameId), 
std::move(p_sync_token), 
std::move(p_time_waited));
      return true;
    }
  }
  return false;
}

// static
bool VRPresentationProviderStubDispatch::AcceptWithResponder(
    VRPresentationProvider* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kVRPresentationProvider_GetVSync_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)device::mojom::VRPresentationProvider::GetVSync",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::VRPresentationProvider_GetVSync_Params_Data* params =
          reinterpret_cast<
              internal::VRPresentationProvider_GetVSync_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      VRPresentationProvider_GetVSync_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "VRPresentationProvider::GetVSync deserializer");
        return false;
      }
      VRPresentationProvider::GetVSyncCallback callback =
          VRPresentationProvider_GetVSync_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->GetVSync(std::move(callback));
      return true;
    }
    case internal::kVRPresentationProvider_UpdateLayerBounds_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)device::mojom::VRPresentationProvider::UpdateLayerBounds",
               "message", message->name());
#endif
      break;
    }
    case internal::kVRPresentationProvider_SubmitFrameMissing_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)device::mojom::VRPresentationProvider::SubmitFrameMissing",
               "message", message->name());
#endif
      break;
    }
    case internal::kVRPresentationProvider_SubmitFrame_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)device::mojom::VRPresentationProvider::SubmitFrame",
               "message", message->name());
#endif
      break;
    }
    case internal::kVRPresentationProvider_SubmitFrameWithTextureHandle_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)device::mojom::VRPresentationProvider::SubmitFrameWithTextureHandle",
               "message", message->name());
#endif
      break;
    }
    case internal::kVRPresentationProvider_SubmitFrameDrawnIntoTexture_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)device::mojom::VRPresentationProvider::SubmitFrameDrawnIntoTexture",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool VRPresentationProviderRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "VRPresentationProvider RequestValidator");

  switch (message->header()->name) {
    case internal::kVRPresentationProvider_GetVSync_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::VRPresentationProvider_GetVSync_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kVRPresentationProvider_UpdateLayerBounds_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::VRPresentationProvider_UpdateLayerBounds_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kVRPresentationProvider_SubmitFrameMissing_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::VRPresentationProvider_SubmitFrameMissing_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kVRPresentationProvider_SubmitFrame_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::VRPresentationProvider_SubmitFrame_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kVRPresentationProvider_SubmitFrameWithTextureHandle_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::VRPresentationProvider_SubmitFrameWithTextureHandle_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kVRPresentationProvider_SubmitFrameDrawnIntoTexture_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::VRPresentationProvider_SubmitFrameDrawnIntoTexture_Params_Data>(
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

bool VRPresentationProviderResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "VRPresentationProvider ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kVRPresentationProvider_GetVSync_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::VRPresentationProvider_GetVSync_ResponseParams_Data>(
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
void VRPresentationProviderInterceptorForTesting::GetVSync(GetVSyncCallback callback) {
  GetForwardingInterface()->GetVSync(std::move(callback));
}
void VRPresentationProviderInterceptorForTesting::UpdateLayerBounds(int16_t frame_id, const ::blink::WebFloatRect& left_bounds, const ::blink::WebFloatRect& right_bounds, const ::blink::WebSize& source_size) {
  GetForwardingInterface()->UpdateLayerBounds(std::move(frame_id), std::move(left_bounds), std::move(right_bounds), std::move(source_size));
}
void VRPresentationProviderInterceptorForTesting::SubmitFrameMissing(int16_t frame_id, const ::gpu::SyncToken& sync_token) {
  GetForwardingInterface()->SubmitFrameMissing(std::move(frame_id), std::move(sync_token));
}
void VRPresentationProviderInterceptorForTesting::SubmitFrame(int16_t frame_id, const ::gpu::MailboxHolder& mailbox_holder, WTF::TimeDelta time_waited) {
  GetForwardingInterface()->SubmitFrame(std::move(frame_id), std::move(mailbox_holder), std::move(time_waited));
}
void VRPresentationProviderInterceptorForTesting::SubmitFrameWithTextureHandle(int16_t frameId, mojo::ScopedHandle texture) {
  GetForwardingInterface()->SubmitFrameWithTextureHandle(std::move(frameId), std::move(texture));
}
void VRPresentationProviderInterceptorForTesting::SubmitFrameDrawnIntoTexture(int16_t frameId, const ::gpu::SyncToken& sync_token, WTF::TimeDelta time_waited) {
  GetForwardingInterface()->SubmitFrameDrawnIntoTexture(std::move(frameId), std::move(sync_token), std::move(time_waited));
}
VRPresentationProviderAsyncWaiter::VRPresentationProviderAsyncWaiter(
    VRPresentationProvider* proxy) : proxy_(proxy) {}

VRPresentationProviderAsyncWaiter::~VRPresentationProviderAsyncWaiter() = default;

void VRPresentationProviderAsyncWaiter::GetVSync(
    VRPosePtr* out_pose, WTF::TimeDelta* out_time, int16_t* out_frame_id, VRPresentationProvider::VSyncStatus* out_status, base::Optional<::gpu::MailboxHolder>* out_buffer_holder) {
  base::RunLoop loop;
  proxy_->GetVSync(
      base::BindOnce(
          [](base::RunLoop* loop,
             VRPosePtr* out_pose
,
             WTF::TimeDelta* out_time
,
             int16_t* out_frame_id
,
             VRPresentationProvider::VSyncStatus* out_status
,
             base::Optional<::gpu::MailboxHolder>* out_buffer_holder
,
             VRPosePtr pose,
             WTF::TimeDelta time,
             int16_t frame_id,
             VRPresentationProvider::VSyncStatus status,
             const base::Optional<::gpu::MailboxHolder>& buffer_holder) {*out_pose = std::move(pose);*out_time = std::move(time);*out_frame_id = std::move(frame_id);*out_status = std::move(status);*out_buffer_holder = std::move(buffer_holder);
            loop->Quit();
          },
          &loop,
          out_pose,
          out_time,
          out_frame_id,
          out_status,
          out_buffer_holder));
  loop.Run();
}

const char VRDisplayClient::Name_[] = "device.mojom.VRDisplayClient";

class VRDisplayClient_OnActivate_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  VRDisplayClient_OnActivate_ForwardToCallback(
      VRDisplayClient::OnActivateCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  VRDisplayClient::OnActivateCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(VRDisplayClient_OnActivate_ForwardToCallback);
};

VRDisplayClientProxy::VRDisplayClientProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void VRDisplayClientProxy::OnChanged(
    VRDisplayInfoPtr in_display) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "device::mojom::VRDisplayClient::OnChanged");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kVRDisplayClient_OnChanged_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::VRDisplayClient_OnChanged_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->display)::BaseType::BufferWriter
      display_writer;
  mojo::internal::Serialize<::device::mojom::VRDisplayInfoDataView>(
      in_display, buffer, &display_writer, &serialization_context);
  params->display.Set(
      display_writer.is_null() ? nullptr : display_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->display.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null display in VRDisplayClient.OnChanged request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void VRDisplayClientProxy::OnExitPresent(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "device::mojom::VRDisplayClient::OnExitPresent");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kVRDisplayClient_OnExitPresent_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::VRDisplayClient_OnExitPresent_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void VRDisplayClientProxy::OnBlur(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "device::mojom::VRDisplayClient::OnBlur");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kVRDisplayClient_OnBlur_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::VRDisplayClient_OnBlur_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void VRDisplayClientProxy::OnFocus(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "device::mojom::VRDisplayClient::OnFocus");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kVRDisplayClient_OnFocus_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::VRDisplayClient_OnFocus_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void VRDisplayClientProxy::OnActivate(
    VRDisplayEventReason in_reason, OnActivateCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "device::mojom::VRDisplayClient::OnActivate");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kVRDisplayClient_OnActivate_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::VRDisplayClient_OnActivate_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::device::mojom::VRDisplayEventReason>(
      in_reason, &params->reason);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new VRDisplayClient_OnActivate_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void VRDisplayClientProxy::OnDeactivate(
    VRDisplayEventReason in_reason) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "device::mojom::VRDisplayClient::OnDeactivate");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kVRDisplayClient_OnDeactivate_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::VRDisplayClient_OnDeactivate_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::device::mojom::VRDisplayEventReason>(
      in_reason, &params->reason);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}
class VRDisplayClient_OnActivate_ProxyToResponder {
 public:
  static VRDisplayClient::OnActivateCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<VRDisplayClient_OnActivate_ProxyToResponder> proxy(
        new VRDisplayClient_OnActivate_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&VRDisplayClient_OnActivate_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~VRDisplayClient_OnActivate_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // If we're being destroyed without being run, we want to ensure the
      // binding endpoint has been closed. This checks for that asynchronously.
      // We pass a bound generated callback to handle the response so that any
      // resulting DCHECK stack will have useful interface type information.
      responder_->IsConnectedAsync(base::BindOnce(&OnIsConnectedComplete));
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    responder_ = nullptr;
  }

 private:
  VRDisplayClient_OnActivate_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "VRDisplayClient::OnActivateCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      bool in_will_not_present);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(VRDisplayClient_OnActivate_ProxyToResponder);
};

bool VRDisplayClient_OnActivate_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "device::mojom::VRDisplayClient::OnActivateCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::VRDisplayClient_OnActivate_ResponseParams_Data* params =
      reinterpret_cast<
          internal::VRDisplayClient_OnActivate_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  bool p_will_not_present{};
  VRDisplayClient_OnActivate_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_will_not_present = input_data_view.will_not_present();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "VRDisplayClient::OnActivate response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_will_not_present));
  return true;
}

void VRDisplayClient_OnActivate_ProxyToResponder::Run(
    bool in_will_not_present) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kVRDisplayClient_OnActivate_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::VRDisplayClient_OnActivate_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->will_not_present = in_will_not_present;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)device::mojom::VRDisplayClient::OnActivateCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}

// static
bool VRDisplayClientStubDispatch::Accept(
    VRDisplayClient* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kVRDisplayClient_OnChanged_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)device::mojom::VRDisplayClient::OnChanged",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::VRDisplayClient_OnChanged_Params_Data* params =
          reinterpret_cast<internal::VRDisplayClient_OnChanged_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      VRDisplayInfoPtr p_display{};
      VRDisplayClient_OnChanged_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadDisplay(&p_display))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "VRDisplayClient::OnChanged deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnChanged(
std::move(p_display));
      return true;
    }
    case internal::kVRDisplayClient_OnExitPresent_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)device::mojom::VRDisplayClient::OnExitPresent",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::VRDisplayClient_OnExitPresent_Params_Data* params =
          reinterpret_cast<internal::VRDisplayClient_OnExitPresent_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      VRDisplayClient_OnExitPresent_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "VRDisplayClient::OnExitPresent deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnExitPresent();
      return true;
    }
    case internal::kVRDisplayClient_OnBlur_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)device::mojom::VRDisplayClient::OnBlur",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::VRDisplayClient_OnBlur_Params_Data* params =
          reinterpret_cast<internal::VRDisplayClient_OnBlur_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      VRDisplayClient_OnBlur_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "VRDisplayClient::OnBlur deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnBlur();
      return true;
    }
    case internal::kVRDisplayClient_OnFocus_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)device::mojom::VRDisplayClient::OnFocus",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::VRDisplayClient_OnFocus_Params_Data* params =
          reinterpret_cast<internal::VRDisplayClient_OnFocus_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      VRDisplayClient_OnFocus_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "VRDisplayClient::OnFocus deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnFocus();
      return true;
    }
    case internal::kVRDisplayClient_OnActivate_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)device::mojom::VRDisplayClient::OnActivate",
               "message", message->name());
#endif
      break;
    }
    case internal::kVRDisplayClient_OnDeactivate_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)device::mojom::VRDisplayClient::OnDeactivate",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::VRDisplayClient_OnDeactivate_Params_Data* params =
          reinterpret_cast<internal::VRDisplayClient_OnDeactivate_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      VRDisplayEventReason p_reason{};
      VRDisplayClient_OnDeactivate_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadReason(&p_reason))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "VRDisplayClient::OnDeactivate deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnDeactivate(
std::move(p_reason));
      return true;
    }
  }
  return false;
}

// static
bool VRDisplayClientStubDispatch::AcceptWithResponder(
    VRDisplayClient* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kVRDisplayClient_OnChanged_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)device::mojom::VRDisplayClient::OnChanged",
               "message", message->name());
#endif
      break;
    }
    case internal::kVRDisplayClient_OnExitPresent_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)device::mojom::VRDisplayClient::OnExitPresent",
               "message", message->name());
#endif
      break;
    }
    case internal::kVRDisplayClient_OnBlur_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)device::mojom::VRDisplayClient::OnBlur",
               "message", message->name());
#endif
      break;
    }
    case internal::kVRDisplayClient_OnFocus_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)device::mojom::VRDisplayClient::OnFocus",
               "message", message->name());
#endif
      break;
    }
    case internal::kVRDisplayClient_OnActivate_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)device::mojom::VRDisplayClient::OnActivate",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::VRDisplayClient_OnActivate_Params_Data* params =
          reinterpret_cast<
              internal::VRDisplayClient_OnActivate_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      VRDisplayEventReason p_reason{};
      VRDisplayClient_OnActivate_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadReason(&p_reason))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "VRDisplayClient::OnActivate deserializer");
        return false;
      }
      VRDisplayClient::OnActivateCallback callback =
          VRDisplayClient_OnActivate_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnActivate(
std::move(p_reason), std::move(callback));
      return true;
    }
    case internal::kVRDisplayClient_OnDeactivate_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)device::mojom::VRDisplayClient::OnDeactivate",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool VRDisplayClientRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "VRDisplayClient RequestValidator");

  switch (message->header()->name) {
    case internal::kVRDisplayClient_OnChanged_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::VRDisplayClient_OnChanged_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kVRDisplayClient_OnExitPresent_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::VRDisplayClient_OnExitPresent_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kVRDisplayClient_OnBlur_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::VRDisplayClient_OnBlur_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kVRDisplayClient_OnFocus_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::VRDisplayClient_OnFocus_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kVRDisplayClient_OnActivate_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::VRDisplayClient_OnActivate_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kVRDisplayClient_OnDeactivate_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::VRDisplayClient_OnDeactivate_Params_Data>(
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

bool VRDisplayClientResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "VRDisplayClient ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kVRDisplayClient_OnActivate_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::VRDisplayClient_OnActivate_ResponseParams_Data>(
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
void VRDisplayClientInterceptorForTesting::OnChanged(VRDisplayInfoPtr display) {
  GetForwardingInterface()->OnChanged(std::move(display));
}
void VRDisplayClientInterceptorForTesting::OnExitPresent() {
  GetForwardingInterface()->OnExitPresent();
}
void VRDisplayClientInterceptorForTesting::OnBlur() {
  GetForwardingInterface()->OnBlur();
}
void VRDisplayClientInterceptorForTesting::OnFocus() {
  GetForwardingInterface()->OnFocus();
}
void VRDisplayClientInterceptorForTesting::OnActivate(VRDisplayEventReason reason, OnActivateCallback callback) {
  GetForwardingInterface()->OnActivate(std::move(reason), std::move(callback));
}
void VRDisplayClientInterceptorForTesting::OnDeactivate(VRDisplayEventReason reason) {
  GetForwardingInterface()->OnDeactivate(std::move(reason));
}
VRDisplayClientAsyncWaiter::VRDisplayClientAsyncWaiter(
    VRDisplayClient* proxy) : proxy_(proxy) {}

VRDisplayClientAsyncWaiter::~VRDisplayClientAsyncWaiter() = default;

void VRDisplayClientAsyncWaiter::OnActivate(
    VRDisplayEventReason reason, bool* out_will_not_present) {
  base::RunLoop loop;
  proxy_->OnActivate(std::move(reason),
      base::BindOnce(
          [](base::RunLoop* loop,
             bool* out_will_not_present
,
             bool will_not_present) {*out_will_not_present = std::move(will_not_present);
            loop->Quit();
          },
          &loop,
          out_will_not_present));
  loop.Run();
}

}  // namespace blink
}  // namespace mojom
}  // namespace device

namespace mojo {


// static
bool StructTraits<::device::mojom::blink::XRInputSourceDescription::DataView, ::device::mojom::blink::XRInputSourceDescriptionPtr>::Read(
    ::device::mojom::blink::XRInputSourceDescription::DataView input,
    ::device::mojom::blink::XRInputSourceDescriptionPtr* output) {
  bool success = true;
  ::device::mojom::blink::XRInputSourceDescriptionPtr result(::device::mojom::blink::XRInputSourceDescription::New());
  
      if (!input.ReadPointerOrigin(&result->pointer_origin))
        success = false;
      if (!input.ReadHandedness(&result->handedness))
        success = false;
      result->emulated_position = input.emulated_position();
      if (!input.ReadPointerOffset(&result->pointer_offset))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::device::mojom::blink::XRInputSourceState::DataView, ::device::mojom::blink::XRInputSourceStatePtr>::Read(
    ::device::mojom::blink::XRInputSourceState::DataView input,
    ::device::mojom::blink::XRInputSourceStatePtr* output) {
  bool success = true;
  ::device::mojom::blink::XRInputSourceStatePtr result(::device::mojom::blink::XRInputSourceState::New());
  
      result->source_id = input.source_id();
      if (!input.ReadDescription(&result->description))
        success = false;
      if (!input.ReadGrip(&result->grip))
        success = false;
      result->primary_input_pressed = input.primary_input_pressed();
      result->primary_input_clicked = input.primary_input_clicked();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::device::mojom::blink::VRFieldOfView::DataView, ::device::mojom::blink::VRFieldOfViewPtr>::Read(
    ::device::mojom::blink::VRFieldOfView::DataView input,
    ::device::mojom::blink::VRFieldOfViewPtr* output) {
  bool success = true;
  ::device::mojom::blink::VRFieldOfViewPtr result(::device::mojom::blink::VRFieldOfView::New());
  
      result->upDegrees = input.upDegrees();
      result->downDegrees = input.downDegrees();
      result->leftDegrees = input.leftDegrees();
      result->rightDegrees = input.rightDegrees();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::device::mojom::blink::VRPose::DataView, ::device::mojom::blink::VRPosePtr>::Read(
    ::device::mojom::blink::VRPose::DataView input,
    ::device::mojom::blink::VRPosePtr* output) {
  bool success = true;
  ::device::mojom::blink::VRPosePtr result(::device::mojom::blink::VRPose::New());
  
      if (!input.ReadOrientation(&result->orientation))
        success = false;
      if (!input.ReadPosition(&result->position))
        success = false;
      if (!input.ReadAngularVelocity(&result->angularVelocity))
        success = false;
      if (!input.ReadLinearVelocity(&result->linearVelocity))
        success = false;
      if (!input.ReadAngularAcceleration(&result->angularAcceleration))
        success = false;
      if (!input.ReadLinearAcceleration(&result->linearAcceleration))
        success = false;
      if (!input.ReadInputState(&result->input_state))
        success = false;
      result->pose_reset = input.pose_reset();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::device::mojom::blink::VRDisplayCapabilities::DataView, ::device::mojom::blink::VRDisplayCapabilitiesPtr>::Read(
    ::device::mojom::blink::VRDisplayCapabilities::DataView input,
    ::device::mojom::blink::VRDisplayCapabilitiesPtr* output) {
  bool success = true;
  ::device::mojom::blink::VRDisplayCapabilitiesPtr result(::device::mojom::blink::VRDisplayCapabilities::New());
  
      result->hasPosition = input.hasPosition();
      result->hasExternalDisplay = input.hasExternalDisplay();
      result->canPresent = input.canPresent();
      result->can_provide_pass_through_images = input.can_provide_pass_through_images();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::device::mojom::blink::VREyeParameters::DataView, ::device::mojom::blink::VREyeParametersPtr>::Read(
    ::device::mojom::blink::VREyeParameters::DataView input,
    ::device::mojom::blink::VREyeParametersPtr* output) {
  bool success = true;
  ::device::mojom::blink::VREyeParametersPtr result(::device::mojom::blink::VREyeParameters::New());
  
      if (!input.ReadFieldOfView(&result->fieldOfView))
        success = false;
      if (!input.ReadOffset(&result->offset))
        success = false;
      result->renderWidth = input.renderWidth();
      result->renderHeight = input.renderHeight();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::device::mojom::blink::VRStageParameters::DataView, ::device::mojom::blink::VRStageParametersPtr>::Read(
    ::device::mojom::blink::VRStageParameters::DataView input,
    ::device::mojom::blink::VRStageParametersPtr* output) {
  bool success = true;
  ::device::mojom::blink::VRStageParametersPtr result(::device::mojom::blink::VRStageParameters::New());
  
      if (!input.ReadStandingTransform(&result->standingTransform))
        success = false;
      result->sizeX = input.sizeX();
      result->sizeZ = input.sizeZ();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::device::mojom::blink::VRDisplayInfo::DataView, ::device::mojom::blink::VRDisplayInfoPtr>::Read(
    ::device::mojom::blink::VRDisplayInfo::DataView input,
    ::device::mojom::blink::VRDisplayInfoPtr* output) {
  bool success = true;
  ::device::mojom::blink::VRDisplayInfoPtr result(::device::mojom::blink::VRDisplayInfo::New());
  
      result->index = input.index();
      if (!input.ReadDisplayName(&result->displayName))
        success = false;
      if (!input.ReadCapabilities(&result->capabilities))
        success = false;
      if (!input.ReadStageParameters(&result->stageParameters))
        success = false;
      if (!input.ReadLeftEye(&result->leftEye))
        success = false;
      if (!input.ReadRightEye(&result->rightEye))
        success = false;
      result->webvr_default_framebuffer_scale = input.webvr_default_framebuffer_scale();
      result->webxr_default_framebuffer_scale = input.webxr_default_framebuffer_scale();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::device::mojom::blink::VRRequestPresentOptions::DataView, ::device::mojom::blink::VRRequestPresentOptionsPtr>::Read(
    ::device::mojom::blink::VRRequestPresentOptions::DataView input,
    ::device::mojom::blink::VRRequestPresentOptionsPtr* output) {
  bool success = true;
  ::device::mojom::blink::VRRequestPresentOptionsPtr result(::device::mojom::blink::VRRequestPresentOptions::New());
  
      result->preserve_drawing_buffer = input.preserve_drawing_buffer();
      result->webxr_input = input.webxr_input();
      result->shared_buffer_draw_supported = input.shared_buffer_draw_supported();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::device::mojom::blink::VRDisplayFrameTransportOptions::DataView, ::device::mojom::blink::VRDisplayFrameTransportOptionsPtr>::Read(
    ::device::mojom::blink::VRDisplayFrameTransportOptions::DataView input,
    ::device::mojom::blink::VRDisplayFrameTransportOptionsPtr* output) {
  bool success = true;
  ::device::mojom::blink::VRDisplayFrameTransportOptionsPtr result(::device::mojom::blink::VRDisplayFrameTransportOptions::New());
  
      if (!input.ReadTransportMethod(&result->transport_method))
        success = false;
      result->wait_for_transfer_notification = input.wait_for_transfer_notification();
      result->wait_for_render_notification = input.wait_for_render_notification();
      result->wait_for_gpu_fence = input.wait_for_gpu_fence();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::device::mojom::blink::VRMagicWindowFrameData::DataView, ::device::mojom::blink::VRMagicWindowFrameDataPtr>::Read(
    ::device::mojom::blink::VRMagicWindowFrameData::DataView input,
    ::device::mojom::blink::VRMagicWindowFrameDataPtr* output) {
  bool success = true;
  ::device::mojom::blink::VRMagicWindowFrameDataPtr result(::device::mojom::blink::VRMagicWindowFrameData::New());
  
      if (!input.ReadPose(&result->pose))
        success = false;
      if (!input.ReadBufferHolder(&result->buffer_holder))
        success = false;
      if (!input.ReadBufferSize(&result->buffer_size))
        success = false;
      if (!input.ReadTimeDelta(&result->time_delta))
        success = false;
      if (!input.ReadProjectionMatrix(&result->projection_matrix))
        success = false;
  *output = std::move(result);
  return success;
}

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif