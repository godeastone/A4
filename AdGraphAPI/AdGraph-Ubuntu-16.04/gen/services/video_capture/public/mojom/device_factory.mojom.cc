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

#include "services/video_capture/public/mojom/device_factory.mojom.h"

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

#include "services/video_capture/public/mojom/device_factory.mojom-shared-message-ids.h"
#include "media/capture/ipc/capture_param_traits.h"
#include "media/capture/ipc/capture_param_traits_macros.h"
#include "media/capture/mojom/video_capture_types_mojom_traits.h"
#include "ui/gfx/geometry/mojo/geometry_struct_traits.h"
namespace video_capture {
namespace mojom {
const char DeviceFactory::Name_[] = "video_capture.mojom.DeviceFactory";

class DeviceFactory_GetDeviceInfos_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  DeviceFactory_GetDeviceInfos_ForwardToCallback(
      DeviceFactory::GetDeviceInfosCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  DeviceFactory::GetDeviceInfosCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(DeviceFactory_GetDeviceInfos_ForwardToCallback);
};

class DeviceFactory_CreateDevice_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  DeviceFactory_CreateDevice_ForwardToCallback(
      DeviceFactory::CreateDeviceCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  DeviceFactory::CreateDeviceCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(DeviceFactory_CreateDevice_ForwardToCallback);
};

DeviceFactoryProxy::DeviceFactoryProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void DeviceFactoryProxy::GetDeviceInfos(
    GetDeviceInfosCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "video_capture::mojom::DeviceFactory::GetDeviceInfos");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kDeviceFactory_GetDeviceInfos_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::video_capture::mojom::internal::DeviceFactory_GetDeviceInfos_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new DeviceFactory_GetDeviceInfos_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void DeviceFactoryProxy::CreateDevice(
    const std::string& in_device_id, ::video_capture::mojom::DeviceRequest in_device_request, CreateDeviceCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "video_capture::mojom::DeviceFactory::CreateDevice");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kDeviceFactory_CreateDevice_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::video_capture::mojom::internal::DeviceFactory_CreateDevice_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->device_id)::BaseType::BufferWriter
      device_id_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_device_id, buffer, &device_id_writer, &serialization_context);
  params->device_id.Set(
      device_id_writer.is_null() ? nullptr : device_id_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->device_id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null device_id in DeviceFactory.CreateDevice request");
  mojo::internal::Serialize<::video_capture::mojom::DeviceRequestDataView>(
      in_device_request, &params->device_request, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->device_request),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid device_request in DeviceFactory.CreateDevice request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new DeviceFactory_CreateDevice_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void DeviceFactoryProxy::AddSharedMemoryVirtualDevice(
    const media::VideoCaptureDeviceInfo& in_device_info, ::video_capture::mojom::ProducerPtr in_producer, ::video_capture::mojom::SharedMemoryVirtualDeviceRequest in_virtual_device) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "video_capture::mojom::DeviceFactory::AddSharedMemoryVirtualDevice");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kDeviceFactory_AddSharedMemoryVirtualDevice_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::video_capture::mojom::internal::DeviceFactory_AddSharedMemoryVirtualDevice_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->device_info)::BaseType::BufferWriter
      device_info_writer;
  mojo::internal::Serialize<::media::mojom::VideoCaptureDeviceInfoDataView>(
      in_device_info, buffer, &device_info_writer, &serialization_context);
  params->device_info.Set(
      device_info_writer.is_null() ? nullptr : device_info_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->device_info.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null device_info in DeviceFactory.AddSharedMemoryVirtualDevice request");
  mojo::internal::Serialize<::video_capture::mojom::ProducerPtrDataView>(
      in_producer, &params->producer, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->producer),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid producer in DeviceFactory.AddSharedMemoryVirtualDevice request");
  mojo::internal::Serialize<::video_capture::mojom::SharedMemoryVirtualDeviceRequestDataView>(
      in_virtual_device, &params->virtual_device, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->virtual_device),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid virtual_device in DeviceFactory.AddSharedMemoryVirtualDevice request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void DeviceFactoryProxy::AddTextureVirtualDevice(
    const media::VideoCaptureDeviceInfo& in_device_info, ::video_capture::mojom::TextureVirtualDeviceRequest in_virtual_device) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "video_capture::mojom::DeviceFactory::AddTextureVirtualDevice");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kDeviceFactory_AddTextureVirtualDevice_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::video_capture::mojom::internal::DeviceFactory_AddTextureVirtualDevice_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->device_info)::BaseType::BufferWriter
      device_info_writer;
  mojo::internal::Serialize<::media::mojom::VideoCaptureDeviceInfoDataView>(
      in_device_info, buffer, &device_info_writer, &serialization_context);
  params->device_info.Set(
      device_info_writer.is_null() ? nullptr : device_info_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->device_info.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null device_info in DeviceFactory.AddTextureVirtualDevice request");
  mojo::internal::Serialize<::video_capture::mojom::TextureVirtualDeviceRequestDataView>(
      in_virtual_device, &params->virtual_device, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->virtual_device),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid virtual_device in DeviceFactory.AddTextureVirtualDevice request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}
class DeviceFactory_GetDeviceInfos_ProxyToResponder {
 public:
  static DeviceFactory::GetDeviceInfosCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<DeviceFactory_GetDeviceInfos_ProxyToResponder> proxy(
        new DeviceFactory_GetDeviceInfos_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&DeviceFactory_GetDeviceInfos_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~DeviceFactory_GetDeviceInfos_ProxyToResponder() {
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
  DeviceFactory_GetDeviceInfos_ProxyToResponder(
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
        << "DeviceFactory::GetDeviceInfosCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      const std::vector<media::VideoCaptureDeviceInfo>& in_device_infos);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(DeviceFactory_GetDeviceInfos_ProxyToResponder);
};

bool DeviceFactory_GetDeviceInfos_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "video_capture::mojom::DeviceFactory::GetDeviceInfosCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::DeviceFactory_GetDeviceInfos_ResponseParams_Data* params =
      reinterpret_cast<
          internal::DeviceFactory_GetDeviceInfos_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  std::vector<media::VideoCaptureDeviceInfo> p_device_infos{};
  DeviceFactory_GetDeviceInfos_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadDeviceInfos(&p_device_infos))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "DeviceFactory::GetDeviceInfos response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_device_infos));
  return true;
}

void DeviceFactory_GetDeviceInfos_ProxyToResponder::Run(
    const std::vector<media::VideoCaptureDeviceInfo>& in_device_infos) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kDeviceFactory_GetDeviceInfos_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::video_capture::mojom::internal::DeviceFactory_GetDeviceInfos_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->device_infos)::BaseType::BufferWriter
      device_infos_writer;
  const mojo::internal::ContainerValidateParams device_infos_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::media::mojom::VideoCaptureDeviceInfoDataView>>(
      in_device_infos, buffer, &device_infos_writer, &device_infos_validate_params,
      &serialization_context);
  params->device_infos.Set(
      device_infos_writer.is_null() ? nullptr : device_infos_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->device_infos.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null device_infos in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)video_capture::mojom::DeviceFactory::GetDeviceInfosCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class DeviceFactory_CreateDevice_ProxyToResponder {
 public:
  static DeviceFactory::CreateDeviceCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<DeviceFactory_CreateDevice_ProxyToResponder> proxy(
        new DeviceFactory_CreateDevice_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&DeviceFactory_CreateDevice_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~DeviceFactory_CreateDevice_ProxyToResponder() {
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
  DeviceFactory_CreateDevice_ProxyToResponder(
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
        << "DeviceFactory::CreateDeviceCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      DeviceAccessResultCode in_result_code);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(DeviceFactory_CreateDevice_ProxyToResponder);
};

bool DeviceFactory_CreateDevice_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "video_capture::mojom::DeviceFactory::CreateDeviceCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::DeviceFactory_CreateDevice_ResponseParams_Data* params =
      reinterpret_cast<
          internal::DeviceFactory_CreateDevice_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  DeviceAccessResultCode p_result_code{};
  DeviceFactory_CreateDevice_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadResultCode(&p_result_code))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "DeviceFactory::CreateDevice response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_result_code));
  return true;
}

void DeviceFactory_CreateDevice_ProxyToResponder::Run(
    DeviceAccessResultCode in_result_code) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kDeviceFactory_CreateDevice_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::video_capture::mojom::internal::DeviceFactory_CreateDevice_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::video_capture::mojom::DeviceAccessResultCode>(
      in_result_code, &params->result_code);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)video_capture::mojom::DeviceFactory::CreateDeviceCallback",
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
bool DeviceFactoryStubDispatch::Accept(
    DeviceFactory* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kDeviceFactory_GetDeviceInfos_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)video_capture::mojom::DeviceFactory::GetDeviceInfos",
               "message", message->name());
#endif
      break;
    }
    case internal::kDeviceFactory_CreateDevice_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)video_capture::mojom::DeviceFactory::CreateDevice",
               "message", message->name());
#endif
      break;
    }
    case internal::kDeviceFactory_AddSharedMemoryVirtualDevice_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)video_capture::mojom::DeviceFactory::AddSharedMemoryVirtualDevice",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::DeviceFactory_AddSharedMemoryVirtualDevice_Params_Data* params =
          reinterpret_cast<internal::DeviceFactory_AddSharedMemoryVirtualDevice_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      media::VideoCaptureDeviceInfo p_device_info{};
      ::video_capture::mojom::ProducerPtr p_producer{};
      ::video_capture::mojom::SharedMemoryVirtualDeviceRequest p_virtual_device{};
      DeviceFactory_AddSharedMemoryVirtualDevice_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadDeviceInfo(&p_device_info))
        success = false;
      p_producer =
          input_data_view.TakeProducer<decltype(p_producer)>();
      p_virtual_device =
          input_data_view.TakeVirtualDevice<decltype(p_virtual_device)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "DeviceFactory::AddSharedMemoryVirtualDevice deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->AddSharedMemoryVirtualDevice(
std::move(p_device_info), 
std::move(p_producer), 
std::move(p_virtual_device));
      return true;
    }
    case internal::kDeviceFactory_AddTextureVirtualDevice_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)video_capture::mojom::DeviceFactory::AddTextureVirtualDevice",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::DeviceFactory_AddTextureVirtualDevice_Params_Data* params =
          reinterpret_cast<internal::DeviceFactory_AddTextureVirtualDevice_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      media::VideoCaptureDeviceInfo p_device_info{};
      ::video_capture::mojom::TextureVirtualDeviceRequest p_virtual_device{};
      DeviceFactory_AddTextureVirtualDevice_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadDeviceInfo(&p_device_info))
        success = false;
      p_virtual_device =
          input_data_view.TakeVirtualDevice<decltype(p_virtual_device)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "DeviceFactory::AddTextureVirtualDevice deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->AddTextureVirtualDevice(
std::move(p_device_info), 
std::move(p_virtual_device));
      return true;
    }
  }
  return false;
}

// static
bool DeviceFactoryStubDispatch::AcceptWithResponder(
    DeviceFactory* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kDeviceFactory_GetDeviceInfos_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)video_capture::mojom::DeviceFactory::GetDeviceInfos",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::DeviceFactory_GetDeviceInfos_Params_Data* params =
          reinterpret_cast<
              internal::DeviceFactory_GetDeviceInfos_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      DeviceFactory_GetDeviceInfos_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "DeviceFactory::GetDeviceInfos deserializer");
        return false;
      }
      DeviceFactory::GetDeviceInfosCallback callback =
          DeviceFactory_GetDeviceInfos_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->GetDeviceInfos(std::move(callback));
      return true;
    }
    case internal::kDeviceFactory_CreateDevice_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)video_capture::mojom::DeviceFactory::CreateDevice",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::DeviceFactory_CreateDevice_Params_Data* params =
          reinterpret_cast<
              internal::DeviceFactory_CreateDevice_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::string p_device_id{};
      ::video_capture::mojom::DeviceRequest p_device_request{};
      DeviceFactory_CreateDevice_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadDeviceId(&p_device_id))
        success = false;
      p_device_request =
          input_data_view.TakeDeviceRequest<decltype(p_device_request)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "DeviceFactory::CreateDevice deserializer");
        return false;
      }
      DeviceFactory::CreateDeviceCallback callback =
          DeviceFactory_CreateDevice_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->CreateDevice(
std::move(p_device_id), 
std::move(p_device_request), std::move(callback));
      return true;
    }
    case internal::kDeviceFactory_AddSharedMemoryVirtualDevice_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)video_capture::mojom::DeviceFactory::AddSharedMemoryVirtualDevice",
               "message", message->name());
#endif
      break;
    }
    case internal::kDeviceFactory_AddTextureVirtualDevice_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)video_capture::mojom::DeviceFactory::AddTextureVirtualDevice",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool DeviceFactoryRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "DeviceFactory RequestValidator");

  switch (message->header()->name) {
    case internal::kDeviceFactory_GetDeviceInfos_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::DeviceFactory_GetDeviceInfos_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kDeviceFactory_CreateDevice_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::DeviceFactory_CreateDevice_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kDeviceFactory_AddSharedMemoryVirtualDevice_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::DeviceFactory_AddSharedMemoryVirtualDevice_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kDeviceFactory_AddTextureVirtualDevice_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::DeviceFactory_AddTextureVirtualDevice_Params_Data>(
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

bool DeviceFactoryResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "DeviceFactory ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kDeviceFactory_GetDeviceInfos_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::DeviceFactory_GetDeviceInfos_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kDeviceFactory_CreateDevice_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::DeviceFactory_CreateDevice_ResponseParams_Data>(
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
void DeviceFactoryInterceptorForTesting::GetDeviceInfos(GetDeviceInfosCallback callback) {
  GetForwardingInterface()->GetDeviceInfos(std::move(callback));
}
void DeviceFactoryInterceptorForTesting::CreateDevice(const std::string& device_id, ::video_capture::mojom::DeviceRequest device_request, CreateDeviceCallback callback) {
  GetForwardingInterface()->CreateDevice(std::move(device_id), std::move(device_request), std::move(callback));
}
void DeviceFactoryInterceptorForTesting::AddSharedMemoryVirtualDevice(const media::VideoCaptureDeviceInfo& device_info, ::video_capture::mojom::ProducerPtr producer, ::video_capture::mojom::SharedMemoryVirtualDeviceRequest virtual_device) {
  GetForwardingInterface()->AddSharedMemoryVirtualDevice(std::move(device_info), std::move(producer), std::move(virtual_device));
}
void DeviceFactoryInterceptorForTesting::AddTextureVirtualDevice(const media::VideoCaptureDeviceInfo& device_info, ::video_capture::mojom::TextureVirtualDeviceRequest virtual_device) {
  GetForwardingInterface()->AddTextureVirtualDevice(std::move(device_info), std::move(virtual_device));
}
DeviceFactoryAsyncWaiter::DeviceFactoryAsyncWaiter(
    DeviceFactory* proxy) : proxy_(proxy) {}

DeviceFactoryAsyncWaiter::~DeviceFactoryAsyncWaiter() = default;

void DeviceFactoryAsyncWaiter::GetDeviceInfos(
    std::vector<media::VideoCaptureDeviceInfo>* out_device_infos) {
  base::RunLoop loop;
  proxy_->GetDeviceInfos(
      base::BindOnce(
          [](base::RunLoop* loop,
             std::vector<media::VideoCaptureDeviceInfo>* out_device_infos
,
             const std::vector<media::VideoCaptureDeviceInfo>& device_infos) {*out_device_infos = std::move(device_infos);
            loop->Quit();
          },
          &loop,
          out_device_infos));
  loop.Run();
}
void DeviceFactoryAsyncWaiter::CreateDevice(
    const std::string& device_id, ::video_capture::mojom::DeviceRequest device_request, DeviceAccessResultCode* out_result_code) {
  base::RunLoop loop;
  proxy_->CreateDevice(std::move(device_id),std::move(device_request),
      base::BindOnce(
          [](base::RunLoop* loop,
             DeviceAccessResultCode* out_result_code
,
             DeviceAccessResultCode result_code) {*out_result_code = std::move(result_code);
            loop->Quit();
          },
          &loop,
          out_result_code));
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