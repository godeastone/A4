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

#include "services/video_capture/public/mojom/device.mojom.h"

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

#include "services/video_capture/public/mojom/device.mojom-shared-message-ids.h"
#include "media/capture/ipc/capture_param_traits.h"
#include "media/capture/ipc/capture_param_traits_macros.h"
#include "media/capture/mojom/video_capture_types_mojom_traits.h"
#include "ui/gfx/geometry/mojo/geometry_struct_traits.h"
namespace video_capture {
namespace mojom {
const char Device::Name_[] = "video_capture.mojom.Device";

class Device_GetPhotoState_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  Device_GetPhotoState_ForwardToCallback(
      Device::GetPhotoStateCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  Device::GetPhotoStateCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(Device_GetPhotoState_ForwardToCallback);
};

class Device_SetPhotoOptions_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  Device_SetPhotoOptions_ForwardToCallback(
      Device::SetPhotoOptionsCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  Device::SetPhotoOptionsCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(Device_SetPhotoOptions_ForwardToCallback);
};

class Device_TakePhoto_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  Device_TakePhoto_ForwardToCallback(
      Device::TakePhotoCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  Device::TakePhotoCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(Device_TakePhoto_ForwardToCallback);
};

DeviceProxy::DeviceProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void DeviceProxy::Start(
    const media::VideoCaptureParams& in_requested_settings, ::video_capture::mojom::ReceiverPtr in_receiver) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "video_capture::mojom::Device::Start");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kDevice_Start_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::video_capture::mojom::internal::Device_Start_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->requested_settings)::BaseType::BufferWriter
      requested_settings_writer;
  mojo::internal::Serialize<::media::mojom::VideoCaptureParamsDataView>(
      in_requested_settings, buffer, &requested_settings_writer, &serialization_context);
  params->requested_settings.Set(
      requested_settings_writer.is_null() ? nullptr : requested_settings_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->requested_settings.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null requested_settings in Device.Start request");
  mojo::internal::Serialize<::video_capture::mojom::ReceiverPtrDataView>(
      in_receiver, &params->receiver, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->receiver),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid receiver in Device.Start request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void DeviceProxy::OnReceiverReportingUtilization(
    int32_t in_frame_feedback_id, double in_utilization) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "video_capture::mojom::Device::OnReceiverReportingUtilization");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kDevice_OnReceiverReportingUtilization_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::video_capture::mojom::internal::Device_OnReceiverReportingUtilization_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->frame_feedback_id = in_frame_feedback_id;
  params->utilization = in_utilization;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void DeviceProxy::RequestRefreshFrame(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "video_capture::mojom::Device::RequestRefreshFrame");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kDevice_RequestRefreshFrame_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::video_capture::mojom::internal::Device_RequestRefreshFrame_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void DeviceProxy::MaybeSuspend(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "video_capture::mojom::Device::MaybeSuspend");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kDevice_MaybeSuspend_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::video_capture::mojom::internal::Device_MaybeSuspend_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void DeviceProxy::Resume(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "video_capture::mojom::Device::Resume");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kDevice_Resume_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::video_capture::mojom::internal::Device_Resume_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void DeviceProxy::GetPhotoState(
    GetPhotoStateCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "video_capture::mojom::Device::GetPhotoState");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kDevice_GetPhotoState_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::video_capture::mojom::internal::Device_GetPhotoState_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new Device_GetPhotoState_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void DeviceProxy::SetPhotoOptions(
    ::media::mojom::PhotoSettingsPtr in_settings, SetPhotoOptionsCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "video_capture::mojom::Device::SetPhotoOptions");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kDevice_SetPhotoOptions_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::video_capture::mojom::internal::Device_SetPhotoOptions_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->settings)::BaseType::BufferWriter
      settings_writer;
  mojo::internal::Serialize<::media::mojom::PhotoSettingsDataView>(
      in_settings, buffer, &settings_writer, &serialization_context);
  params->settings.Set(
      settings_writer.is_null() ? nullptr : settings_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->settings.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null settings in Device.SetPhotoOptions request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new Device_SetPhotoOptions_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void DeviceProxy::TakePhoto(
    TakePhotoCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "video_capture::mojom::Device::TakePhoto");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kDevice_TakePhoto_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::video_capture::mojom::internal::Device_TakePhoto_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new Device_TakePhoto_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class Device_GetPhotoState_ProxyToResponder {
 public:
  static Device::GetPhotoStateCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<Device_GetPhotoState_ProxyToResponder> proxy(
        new Device_GetPhotoState_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&Device_GetPhotoState_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~Device_GetPhotoState_ProxyToResponder() {
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
  Device_GetPhotoState_ProxyToResponder(
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
        << "Device::GetPhotoStateCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      ::media::mojom::PhotoStatePtr in_capabilities);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(Device_GetPhotoState_ProxyToResponder);
};

bool Device_GetPhotoState_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "video_capture::mojom::Device::GetPhotoStateCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::Device_GetPhotoState_ResponseParams_Data* params =
      reinterpret_cast<
          internal::Device_GetPhotoState_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  ::media::mojom::PhotoStatePtr p_capabilities{};
  Device_GetPhotoState_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadCapabilities(&p_capabilities))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "Device::GetPhotoState response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_capabilities));
  return true;
}

void Device_GetPhotoState_ProxyToResponder::Run(
    ::media::mojom::PhotoStatePtr in_capabilities) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kDevice_GetPhotoState_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::video_capture::mojom::internal::Device_GetPhotoState_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->capabilities)::BaseType::BufferWriter
      capabilities_writer;
  mojo::internal::Serialize<::media::mojom::PhotoStateDataView>(
      in_capabilities, buffer, &capabilities_writer, &serialization_context);
  params->capabilities.Set(
      capabilities_writer.is_null() ? nullptr : capabilities_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)video_capture::mojom::Device::GetPhotoStateCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class Device_SetPhotoOptions_ProxyToResponder {
 public:
  static Device::SetPhotoOptionsCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<Device_SetPhotoOptions_ProxyToResponder> proxy(
        new Device_SetPhotoOptions_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&Device_SetPhotoOptions_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~Device_SetPhotoOptions_ProxyToResponder() {
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
  Device_SetPhotoOptions_ProxyToResponder(
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
        << "Device::SetPhotoOptionsCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      bool in_success);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(Device_SetPhotoOptions_ProxyToResponder);
};

bool Device_SetPhotoOptions_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "video_capture::mojom::Device::SetPhotoOptionsCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::Device_SetPhotoOptions_ResponseParams_Data* params =
      reinterpret_cast<
          internal::Device_SetPhotoOptions_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  bool p_success{};
  Device_SetPhotoOptions_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_success = input_data_view.success();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "Device::SetPhotoOptions response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_success));
  return true;
}

void Device_SetPhotoOptions_ProxyToResponder::Run(
    bool in_success) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kDevice_SetPhotoOptions_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::video_capture::mojom::internal::Device_SetPhotoOptions_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->success = in_success;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)video_capture::mojom::Device::SetPhotoOptionsCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class Device_TakePhoto_ProxyToResponder {
 public:
  static Device::TakePhotoCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<Device_TakePhoto_ProxyToResponder> proxy(
        new Device_TakePhoto_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&Device_TakePhoto_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~Device_TakePhoto_ProxyToResponder() {
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
  Device_TakePhoto_ProxyToResponder(
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
        << "Device::TakePhotoCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      ::media::mojom::BlobPtr in_blob);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(Device_TakePhoto_ProxyToResponder);
};

bool Device_TakePhoto_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "video_capture::mojom::Device::TakePhotoCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::Device_TakePhoto_ResponseParams_Data* params =
      reinterpret_cast<
          internal::Device_TakePhoto_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  ::media::mojom::BlobPtr p_blob{};
  Device_TakePhoto_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadBlob(&p_blob))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "Device::TakePhoto response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_blob));
  return true;
}

void Device_TakePhoto_ProxyToResponder::Run(
    ::media::mojom::BlobPtr in_blob) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kDevice_TakePhoto_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::video_capture::mojom::internal::Device_TakePhoto_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->blob)::BaseType::BufferWriter
      blob_writer;
  mojo::internal::Serialize<::media::mojom::BlobDataView>(
      in_blob, buffer, &blob_writer, &serialization_context);
  params->blob.Set(
      blob_writer.is_null() ? nullptr : blob_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)video_capture::mojom::Device::TakePhotoCallback",
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
bool DeviceStubDispatch::Accept(
    Device* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kDevice_Start_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)video_capture::mojom::Device::Start",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::Device_Start_Params_Data* params =
          reinterpret_cast<internal::Device_Start_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      media::VideoCaptureParams p_requested_settings{};
      ::video_capture::mojom::ReceiverPtr p_receiver{};
      Device_Start_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadRequestedSettings(&p_requested_settings))
        success = false;
      p_receiver =
          input_data_view.TakeReceiver<decltype(p_receiver)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "Device::Start deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->Start(
std::move(p_requested_settings), 
std::move(p_receiver));
      return true;
    }
    case internal::kDevice_OnReceiverReportingUtilization_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)video_capture::mojom::Device::OnReceiverReportingUtilization",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::Device_OnReceiverReportingUtilization_Params_Data* params =
          reinterpret_cast<internal::Device_OnReceiverReportingUtilization_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int32_t p_frame_feedback_id{};
      double p_utilization{};
      Device_OnReceiverReportingUtilization_ParamsDataView input_data_view(params, &serialization_context);
      
      p_frame_feedback_id = input_data_view.frame_feedback_id();
      p_utilization = input_data_view.utilization();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "Device::OnReceiverReportingUtilization deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnReceiverReportingUtilization(
std::move(p_frame_feedback_id), 
std::move(p_utilization));
      return true;
    }
    case internal::kDevice_RequestRefreshFrame_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)video_capture::mojom::Device::RequestRefreshFrame",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::Device_RequestRefreshFrame_Params_Data* params =
          reinterpret_cast<internal::Device_RequestRefreshFrame_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      Device_RequestRefreshFrame_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "Device::RequestRefreshFrame deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->RequestRefreshFrame();
      return true;
    }
    case internal::kDevice_MaybeSuspend_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)video_capture::mojom::Device::MaybeSuspend",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::Device_MaybeSuspend_Params_Data* params =
          reinterpret_cast<internal::Device_MaybeSuspend_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      Device_MaybeSuspend_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "Device::MaybeSuspend deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->MaybeSuspend();
      return true;
    }
    case internal::kDevice_Resume_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)video_capture::mojom::Device::Resume",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::Device_Resume_Params_Data* params =
          reinterpret_cast<internal::Device_Resume_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      Device_Resume_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "Device::Resume deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->Resume();
      return true;
    }
    case internal::kDevice_GetPhotoState_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)video_capture::mojom::Device::GetPhotoState",
               "message", message->name());
#endif
      break;
    }
    case internal::kDevice_SetPhotoOptions_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)video_capture::mojom::Device::SetPhotoOptions",
               "message", message->name());
#endif
      break;
    }
    case internal::kDevice_TakePhoto_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)video_capture::mojom::Device::TakePhoto",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

// static
bool DeviceStubDispatch::AcceptWithResponder(
    Device* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kDevice_Start_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)video_capture::mojom::Device::Start",
               "message", message->name());
#endif
      break;
    }
    case internal::kDevice_OnReceiverReportingUtilization_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)video_capture::mojom::Device::OnReceiverReportingUtilization",
               "message", message->name());
#endif
      break;
    }
    case internal::kDevice_RequestRefreshFrame_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)video_capture::mojom::Device::RequestRefreshFrame",
               "message", message->name());
#endif
      break;
    }
    case internal::kDevice_MaybeSuspend_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)video_capture::mojom::Device::MaybeSuspend",
               "message", message->name());
#endif
      break;
    }
    case internal::kDevice_Resume_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)video_capture::mojom::Device::Resume",
               "message", message->name());
#endif
      break;
    }
    case internal::kDevice_GetPhotoState_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)video_capture::mojom::Device::GetPhotoState",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::Device_GetPhotoState_Params_Data* params =
          reinterpret_cast<
              internal::Device_GetPhotoState_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      Device_GetPhotoState_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "Device::GetPhotoState deserializer");
        return false;
      }
      Device::GetPhotoStateCallback callback =
          Device_GetPhotoState_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->GetPhotoState(std::move(callback));
      return true;
    }
    case internal::kDevice_SetPhotoOptions_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)video_capture::mojom::Device::SetPhotoOptions",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::Device_SetPhotoOptions_Params_Data* params =
          reinterpret_cast<
              internal::Device_SetPhotoOptions_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::media::mojom::PhotoSettingsPtr p_settings{};
      Device_SetPhotoOptions_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadSettings(&p_settings))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "Device::SetPhotoOptions deserializer");
        return false;
      }
      Device::SetPhotoOptionsCallback callback =
          Device_SetPhotoOptions_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->SetPhotoOptions(
std::move(p_settings), std::move(callback));
      return true;
    }
    case internal::kDevice_TakePhoto_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)video_capture::mojom::Device::TakePhoto",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::Device_TakePhoto_Params_Data* params =
          reinterpret_cast<
              internal::Device_TakePhoto_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      Device_TakePhoto_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "Device::TakePhoto deserializer");
        return false;
      }
      Device::TakePhotoCallback callback =
          Device_TakePhoto_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->TakePhoto(std::move(callback));
      return true;
    }
  }
  return false;
}

bool DeviceRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "Device RequestValidator");

  switch (message->header()->name) {
    case internal::kDevice_Start_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Device_Start_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kDevice_OnReceiverReportingUtilization_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Device_OnReceiverReportingUtilization_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kDevice_RequestRefreshFrame_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Device_RequestRefreshFrame_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kDevice_MaybeSuspend_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Device_MaybeSuspend_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kDevice_Resume_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Device_Resume_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kDevice_GetPhotoState_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Device_GetPhotoState_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kDevice_SetPhotoOptions_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Device_SetPhotoOptions_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kDevice_TakePhoto_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Device_TakePhoto_Params_Data>(
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

bool DeviceResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "Device ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kDevice_GetPhotoState_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::Device_GetPhotoState_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kDevice_SetPhotoOptions_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::Device_SetPhotoOptions_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kDevice_TakePhoto_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::Device_TakePhoto_ResponseParams_Data>(
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
void DeviceInterceptorForTesting::Start(const media::VideoCaptureParams& requested_settings, ::video_capture::mojom::ReceiverPtr receiver) {
  GetForwardingInterface()->Start(std::move(requested_settings), std::move(receiver));
}
void DeviceInterceptorForTesting::OnReceiverReportingUtilization(int32_t frame_feedback_id, double utilization) {
  GetForwardingInterface()->OnReceiverReportingUtilization(std::move(frame_feedback_id), std::move(utilization));
}
void DeviceInterceptorForTesting::RequestRefreshFrame() {
  GetForwardingInterface()->RequestRefreshFrame();
}
void DeviceInterceptorForTesting::MaybeSuspend() {
  GetForwardingInterface()->MaybeSuspend();
}
void DeviceInterceptorForTesting::Resume() {
  GetForwardingInterface()->Resume();
}
void DeviceInterceptorForTesting::GetPhotoState(GetPhotoStateCallback callback) {
  GetForwardingInterface()->GetPhotoState(std::move(callback));
}
void DeviceInterceptorForTesting::SetPhotoOptions(::media::mojom::PhotoSettingsPtr settings, SetPhotoOptionsCallback callback) {
  GetForwardingInterface()->SetPhotoOptions(std::move(settings), std::move(callback));
}
void DeviceInterceptorForTesting::TakePhoto(TakePhotoCallback callback) {
  GetForwardingInterface()->TakePhoto(std::move(callback));
}
DeviceAsyncWaiter::DeviceAsyncWaiter(
    Device* proxy) : proxy_(proxy) {}

DeviceAsyncWaiter::~DeviceAsyncWaiter() = default;

void DeviceAsyncWaiter::GetPhotoState(
    ::media::mojom::PhotoStatePtr* out_capabilities) {
  base::RunLoop loop;
  proxy_->GetPhotoState(
      base::BindOnce(
          [](base::RunLoop* loop,
             ::media::mojom::PhotoStatePtr* out_capabilities
,
             ::media::mojom::PhotoStatePtr capabilities) {*out_capabilities = std::move(capabilities);
            loop->Quit();
          },
          &loop,
          out_capabilities));
  loop.Run();
}
void DeviceAsyncWaiter::SetPhotoOptions(
    ::media::mojom::PhotoSettingsPtr settings, bool* out_success) {
  base::RunLoop loop;
  proxy_->SetPhotoOptions(std::move(settings),
      base::BindOnce(
          [](base::RunLoop* loop,
             bool* out_success
,
             bool success) {*out_success = std::move(success);
            loop->Quit();
          },
          &loop,
          out_success));
  loop.Run();
}
void DeviceAsyncWaiter::TakePhoto(
    ::media::mojom::BlobPtr* out_blob) {
  base::RunLoop loop;
  proxy_->TakePhoto(
      base::BindOnce(
          [](base::RunLoop* loop,
             ::media::mojom::BlobPtr* out_blob
,
             ::media::mojom::BlobPtr blob) {*out_blob = std::move(blob);
            loop->Quit();
          },
          &loop,
          out_blob));
  loop.Run();
}

}  // namespace mojom
}  // namespace video_capture

namespace mojo {

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif