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

#include "services/audio/public/mojom/system_info.mojom.h"

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

#include "services/audio/public/mojom/system_info.mojom-shared-message-ids.h"
#include "media/base/ipc/media_param_traits.h"
#include "services/audio/public/cpp/audio_device_description_mojom_traits.h"
namespace audio {
namespace mojom {
const char SystemInfo::Name_[] = "audio.mojom.SystemInfo";

class SystemInfo_GetInputStreamParameters_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  SystemInfo_GetInputStreamParameters_ForwardToCallback(
      SystemInfo::GetInputStreamParametersCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  SystemInfo::GetInputStreamParametersCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(SystemInfo_GetInputStreamParameters_ForwardToCallback);
};

class SystemInfo_GetOutputStreamParameters_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  SystemInfo_GetOutputStreamParameters_ForwardToCallback(
      SystemInfo::GetOutputStreamParametersCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  SystemInfo::GetOutputStreamParametersCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(SystemInfo_GetOutputStreamParameters_ForwardToCallback);
};

class SystemInfo_HasInputDevices_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  SystemInfo_HasInputDevices_ForwardToCallback(
      SystemInfo::HasInputDevicesCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  SystemInfo::HasInputDevicesCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(SystemInfo_HasInputDevices_ForwardToCallback);
};

class SystemInfo_HasOutputDevices_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  SystemInfo_HasOutputDevices_ForwardToCallback(
      SystemInfo::HasOutputDevicesCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  SystemInfo::HasOutputDevicesCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(SystemInfo_HasOutputDevices_ForwardToCallback);
};

class SystemInfo_GetInputDeviceDescriptions_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  SystemInfo_GetInputDeviceDescriptions_ForwardToCallback(
      SystemInfo::GetInputDeviceDescriptionsCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  SystemInfo::GetInputDeviceDescriptionsCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(SystemInfo_GetInputDeviceDescriptions_ForwardToCallback);
};

class SystemInfo_GetOutputDeviceDescriptions_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  SystemInfo_GetOutputDeviceDescriptions_ForwardToCallback(
      SystemInfo::GetOutputDeviceDescriptionsCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  SystemInfo::GetOutputDeviceDescriptionsCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(SystemInfo_GetOutputDeviceDescriptions_ForwardToCallback);
};

class SystemInfo_GetAssociatedOutputDeviceID_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  SystemInfo_GetAssociatedOutputDeviceID_ForwardToCallback(
      SystemInfo::GetAssociatedOutputDeviceIDCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  SystemInfo::GetAssociatedOutputDeviceIDCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(SystemInfo_GetAssociatedOutputDeviceID_ForwardToCallback);
};

class SystemInfo_GetInputDeviceInfo_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  SystemInfo_GetInputDeviceInfo_ForwardToCallback(
      SystemInfo::GetInputDeviceInfoCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  SystemInfo::GetInputDeviceInfoCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(SystemInfo_GetInputDeviceInfo_ForwardToCallback);
};

SystemInfoProxy::SystemInfoProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void SystemInfoProxy::GetInputStreamParameters(
    const std::string& in_device_id, GetInputStreamParametersCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "audio::mojom::SystemInfo::GetInputStreamParameters");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kSystemInfo_GetInputStreamParameters_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::audio::mojom::internal::SystemInfo_GetInputStreamParameters_Params_Data::BufferWriter
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
      "null device_id in SystemInfo.GetInputStreamParameters request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new SystemInfo_GetInputStreamParameters_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void SystemInfoProxy::GetOutputStreamParameters(
    const std::string& in_device_id, GetOutputStreamParametersCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "audio::mojom::SystemInfo::GetOutputStreamParameters");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kSystemInfo_GetOutputStreamParameters_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::audio::mojom::internal::SystemInfo_GetOutputStreamParameters_Params_Data::BufferWriter
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
      "null device_id in SystemInfo.GetOutputStreamParameters request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new SystemInfo_GetOutputStreamParameters_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void SystemInfoProxy::HasInputDevices(
    HasInputDevicesCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "audio::mojom::SystemInfo::HasInputDevices");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kSystemInfo_HasInputDevices_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::audio::mojom::internal::SystemInfo_HasInputDevices_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new SystemInfo_HasInputDevices_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void SystemInfoProxy::HasOutputDevices(
    HasOutputDevicesCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "audio::mojom::SystemInfo::HasOutputDevices");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kSystemInfo_HasOutputDevices_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::audio::mojom::internal::SystemInfo_HasOutputDevices_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new SystemInfo_HasOutputDevices_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void SystemInfoProxy::GetInputDeviceDescriptions(
    GetInputDeviceDescriptionsCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "audio::mojom::SystemInfo::GetInputDeviceDescriptions");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kSystemInfo_GetInputDeviceDescriptions_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::audio::mojom::internal::SystemInfo_GetInputDeviceDescriptions_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new SystemInfo_GetInputDeviceDescriptions_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void SystemInfoProxy::GetOutputDeviceDescriptions(
    GetOutputDeviceDescriptionsCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "audio::mojom::SystemInfo::GetOutputDeviceDescriptions");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kSystemInfo_GetOutputDeviceDescriptions_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::audio::mojom::internal::SystemInfo_GetOutputDeviceDescriptions_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new SystemInfo_GetOutputDeviceDescriptions_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void SystemInfoProxy::GetAssociatedOutputDeviceID(
    const std::string& in_input_device_id, GetAssociatedOutputDeviceIDCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "audio::mojom::SystemInfo::GetAssociatedOutputDeviceID");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kSystemInfo_GetAssociatedOutputDeviceID_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::audio::mojom::internal::SystemInfo_GetAssociatedOutputDeviceID_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->input_device_id)::BaseType::BufferWriter
      input_device_id_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_input_device_id, buffer, &input_device_id_writer, &serialization_context);
  params->input_device_id.Set(
      input_device_id_writer.is_null() ? nullptr : input_device_id_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->input_device_id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null input_device_id in SystemInfo.GetAssociatedOutputDeviceID request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new SystemInfo_GetAssociatedOutputDeviceID_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void SystemInfoProxy::GetInputDeviceInfo(
    const std::string& in_input_device_id, GetInputDeviceInfoCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "audio::mojom::SystemInfo::GetInputDeviceInfo");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kSystemInfo_GetInputDeviceInfo_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::audio::mojom::internal::SystemInfo_GetInputDeviceInfo_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->input_device_id)::BaseType::BufferWriter
      input_device_id_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_input_device_id, buffer, &input_device_id_writer, &serialization_context);
  params->input_device_id.Set(
      input_device_id_writer.is_null() ? nullptr : input_device_id_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->input_device_id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null input_device_id in SystemInfo.GetInputDeviceInfo request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new SystemInfo_GetInputDeviceInfo_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class SystemInfo_GetInputStreamParameters_ProxyToResponder {
 public:
  static SystemInfo::GetInputStreamParametersCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<SystemInfo_GetInputStreamParameters_ProxyToResponder> proxy(
        new SystemInfo_GetInputStreamParameters_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&SystemInfo_GetInputStreamParameters_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~SystemInfo_GetInputStreamParameters_ProxyToResponder() {
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
  SystemInfo_GetInputStreamParameters_ProxyToResponder(
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
        << "SystemInfo::GetInputStreamParametersCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      const base::Optional<media::AudioParameters>& in_params);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(SystemInfo_GetInputStreamParameters_ProxyToResponder);
};

bool SystemInfo_GetInputStreamParameters_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "audio::mojom::SystemInfo::GetInputStreamParametersCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::SystemInfo_GetInputStreamParameters_ResponseParams_Data* params =
      reinterpret_cast<
          internal::SystemInfo_GetInputStreamParameters_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  base::Optional<media::AudioParameters> p_params{};
  SystemInfo_GetInputStreamParameters_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadParams(&p_params))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "SystemInfo::GetInputStreamParameters response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_params));
  return true;
}

void SystemInfo_GetInputStreamParameters_ProxyToResponder::Run(
    const base::Optional<media::AudioParameters>& in_params) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kSystemInfo_GetInputStreamParameters_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::audio::mojom::internal::SystemInfo_GetInputStreamParameters_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->params)::BaseType::BufferWriter
      params_writer;
  mojo::internal::Serialize<::media::mojom::AudioParametersDataView>(
      in_params, buffer, &params_writer, &serialization_context);
  params->params.Set(
      params_writer.is_null() ? nullptr : params_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)audio::mojom::SystemInfo::GetInputStreamParametersCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class SystemInfo_GetOutputStreamParameters_ProxyToResponder {
 public:
  static SystemInfo::GetOutputStreamParametersCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<SystemInfo_GetOutputStreamParameters_ProxyToResponder> proxy(
        new SystemInfo_GetOutputStreamParameters_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&SystemInfo_GetOutputStreamParameters_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~SystemInfo_GetOutputStreamParameters_ProxyToResponder() {
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
  SystemInfo_GetOutputStreamParameters_ProxyToResponder(
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
        << "SystemInfo::GetOutputStreamParametersCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      const base::Optional<media::AudioParameters>& in_params);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(SystemInfo_GetOutputStreamParameters_ProxyToResponder);
};

bool SystemInfo_GetOutputStreamParameters_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "audio::mojom::SystemInfo::GetOutputStreamParametersCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::SystemInfo_GetOutputStreamParameters_ResponseParams_Data* params =
      reinterpret_cast<
          internal::SystemInfo_GetOutputStreamParameters_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  base::Optional<media::AudioParameters> p_params{};
  SystemInfo_GetOutputStreamParameters_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadParams(&p_params))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "SystemInfo::GetOutputStreamParameters response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_params));
  return true;
}

void SystemInfo_GetOutputStreamParameters_ProxyToResponder::Run(
    const base::Optional<media::AudioParameters>& in_params) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kSystemInfo_GetOutputStreamParameters_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::audio::mojom::internal::SystemInfo_GetOutputStreamParameters_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->params)::BaseType::BufferWriter
      params_writer;
  mojo::internal::Serialize<::media::mojom::AudioParametersDataView>(
      in_params, buffer, &params_writer, &serialization_context);
  params->params.Set(
      params_writer.is_null() ? nullptr : params_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)audio::mojom::SystemInfo::GetOutputStreamParametersCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class SystemInfo_HasInputDevices_ProxyToResponder {
 public:
  static SystemInfo::HasInputDevicesCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<SystemInfo_HasInputDevices_ProxyToResponder> proxy(
        new SystemInfo_HasInputDevices_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&SystemInfo_HasInputDevices_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~SystemInfo_HasInputDevices_ProxyToResponder() {
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
  SystemInfo_HasInputDevices_ProxyToResponder(
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
        << "SystemInfo::HasInputDevicesCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      bool in_has_input_devices);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(SystemInfo_HasInputDevices_ProxyToResponder);
};

bool SystemInfo_HasInputDevices_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "audio::mojom::SystemInfo::HasInputDevicesCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::SystemInfo_HasInputDevices_ResponseParams_Data* params =
      reinterpret_cast<
          internal::SystemInfo_HasInputDevices_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  bool p_has_input_devices{};
  SystemInfo_HasInputDevices_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_has_input_devices = input_data_view.has_input_devices();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "SystemInfo::HasInputDevices response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_has_input_devices));
  return true;
}

void SystemInfo_HasInputDevices_ProxyToResponder::Run(
    bool in_has_input_devices) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kSystemInfo_HasInputDevices_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::audio::mojom::internal::SystemInfo_HasInputDevices_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->has_input_devices = in_has_input_devices;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)audio::mojom::SystemInfo::HasInputDevicesCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class SystemInfo_HasOutputDevices_ProxyToResponder {
 public:
  static SystemInfo::HasOutputDevicesCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<SystemInfo_HasOutputDevices_ProxyToResponder> proxy(
        new SystemInfo_HasOutputDevices_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&SystemInfo_HasOutputDevices_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~SystemInfo_HasOutputDevices_ProxyToResponder() {
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
  SystemInfo_HasOutputDevices_ProxyToResponder(
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
        << "SystemInfo::HasOutputDevicesCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      bool in_has_output_devices);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(SystemInfo_HasOutputDevices_ProxyToResponder);
};

bool SystemInfo_HasOutputDevices_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "audio::mojom::SystemInfo::HasOutputDevicesCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::SystemInfo_HasOutputDevices_ResponseParams_Data* params =
      reinterpret_cast<
          internal::SystemInfo_HasOutputDevices_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  bool p_has_output_devices{};
  SystemInfo_HasOutputDevices_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_has_output_devices = input_data_view.has_output_devices();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "SystemInfo::HasOutputDevices response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_has_output_devices));
  return true;
}

void SystemInfo_HasOutputDevices_ProxyToResponder::Run(
    bool in_has_output_devices) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kSystemInfo_HasOutputDevices_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::audio::mojom::internal::SystemInfo_HasOutputDevices_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->has_output_devices = in_has_output_devices;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)audio::mojom::SystemInfo::HasOutputDevicesCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class SystemInfo_GetInputDeviceDescriptions_ProxyToResponder {
 public:
  static SystemInfo::GetInputDeviceDescriptionsCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<SystemInfo_GetInputDeviceDescriptions_ProxyToResponder> proxy(
        new SystemInfo_GetInputDeviceDescriptions_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&SystemInfo_GetInputDeviceDescriptions_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~SystemInfo_GetInputDeviceDescriptions_ProxyToResponder() {
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
  SystemInfo_GetInputDeviceDescriptions_ProxyToResponder(
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
        << "SystemInfo::GetInputDeviceDescriptionsCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      std::vector<media::AudioDeviceDescription> in_device_descriptions);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(SystemInfo_GetInputDeviceDescriptions_ProxyToResponder);
};

bool SystemInfo_GetInputDeviceDescriptions_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "audio::mojom::SystemInfo::GetInputDeviceDescriptionsCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::SystemInfo_GetInputDeviceDescriptions_ResponseParams_Data* params =
      reinterpret_cast<
          internal::SystemInfo_GetInputDeviceDescriptions_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  std::vector<media::AudioDeviceDescription> p_device_descriptions{};
  SystemInfo_GetInputDeviceDescriptions_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadDeviceDescriptions(&p_device_descriptions))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "SystemInfo::GetInputDeviceDescriptions response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_device_descriptions));
  return true;
}

void SystemInfo_GetInputDeviceDescriptions_ProxyToResponder::Run(
    std::vector<media::AudioDeviceDescription> in_device_descriptions) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kSystemInfo_GetInputDeviceDescriptions_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::audio::mojom::internal::SystemInfo_GetInputDeviceDescriptions_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->device_descriptions)::BaseType::BufferWriter
      device_descriptions_writer;
  const mojo::internal::ContainerValidateParams device_descriptions_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::audio::mojom::AudioDeviceDescriptionDataView>>(
      in_device_descriptions, buffer, &device_descriptions_writer, &device_descriptions_validate_params,
      &serialization_context);
  params->device_descriptions.Set(
      device_descriptions_writer.is_null() ? nullptr : device_descriptions_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->device_descriptions.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null device_descriptions in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)audio::mojom::SystemInfo::GetInputDeviceDescriptionsCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class SystemInfo_GetOutputDeviceDescriptions_ProxyToResponder {
 public:
  static SystemInfo::GetOutputDeviceDescriptionsCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<SystemInfo_GetOutputDeviceDescriptions_ProxyToResponder> proxy(
        new SystemInfo_GetOutputDeviceDescriptions_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&SystemInfo_GetOutputDeviceDescriptions_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~SystemInfo_GetOutputDeviceDescriptions_ProxyToResponder() {
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
  SystemInfo_GetOutputDeviceDescriptions_ProxyToResponder(
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
        << "SystemInfo::GetOutputDeviceDescriptionsCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      std::vector<media::AudioDeviceDescription> in_device_descriptions);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(SystemInfo_GetOutputDeviceDescriptions_ProxyToResponder);
};

bool SystemInfo_GetOutputDeviceDescriptions_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "audio::mojom::SystemInfo::GetOutputDeviceDescriptionsCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::SystemInfo_GetOutputDeviceDescriptions_ResponseParams_Data* params =
      reinterpret_cast<
          internal::SystemInfo_GetOutputDeviceDescriptions_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  std::vector<media::AudioDeviceDescription> p_device_descriptions{};
  SystemInfo_GetOutputDeviceDescriptions_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadDeviceDescriptions(&p_device_descriptions))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "SystemInfo::GetOutputDeviceDescriptions response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_device_descriptions));
  return true;
}

void SystemInfo_GetOutputDeviceDescriptions_ProxyToResponder::Run(
    std::vector<media::AudioDeviceDescription> in_device_descriptions) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kSystemInfo_GetOutputDeviceDescriptions_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::audio::mojom::internal::SystemInfo_GetOutputDeviceDescriptions_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->device_descriptions)::BaseType::BufferWriter
      device_descriptions_writer;
  const mojo::internal::ContainerValidateParams device_descriptions_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::audio::mojom::AudioDeviceDescriptionDataView>>(
      in_device_descriptions, buffer, &device_descriptions_writer, &device_descriptions_validate_params,
      &serialization_context);
  params->device_descriptions.Set(
      device_descriptions_writer.is_null() ? nullptr : device_descriptions_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->device_descriptions.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null device_descriptions in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)audio::mojom::SystemInfo::GetOutputDeviceDescriptionsCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class SystemInfo_GetAssociatedOutputDeviceID_ProxyToResponder {
 public:
  static SystemInfo::GetAssociatedOutputDeviceIDCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<SystemInfo_GetAssociatedOutputDeviceID_ProxyToResponder> proxy(
        new SystemInfo_GetAssociatedOutputDeviceID_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&SystemInfo_GetAssociatedOutputDeviceID_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~SystemInfo_GetAssociatedOutputDeviceID_ProxyToResponder() {
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
  SystemInfo_GetAssociatedOutputDeviceID_ProxyToResponder(
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
        << "SystemInfo::GetAssociatedOutputDeviceIDCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      const base::Optional<std::string>& in_associated_output_device_id);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(SystemInfo_GetAssociatedOutputDeviceID_ProxyToResponder);
};

bool SystemInfo_GetAssociatedOutputDeviceID_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "audio::mojom::SystemInfo::GetAssociatedOutputDeviceIDCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::SystemInfo_GetAssociatedOutputDeviceID_ResponseParams_Data* params =
      reinterpret_cast<
          internal::SystemInfo_GetAssociatedOutputDeviceID_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  base::Optional<std::string> p_associated_output_device_id{};
  SystemInfo_GetAssociatedOutputDeviceID_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadAssociatedOutputDeviceId(&p_associated_output_device_id))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "SystemInfo::GetAssociatedOutputDeviceID response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_associated_output_device_id));
  return true;
}

void SystemInfo_GetAssociatedOutputDeviceID_ProxyToResponder::Run(
    const base::Optional<std::string>& in_associated_output_device_id) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kSystemInfo_GetAssociatedOutputDeviceID_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::audio::mojom::internal::SystemInfo_GetAssociatedOutputDeviceID_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->associated_output_device_id)::BaseType::BufferWriter
      associated_output_device_id_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_associated_output_device_id, buffer, &associated_output_device_id_writer, &serialization_context);
  params->associated_output_device_id.Set(
      associated_output_device_id_writer.is_null() ? nullptr : associated_output_device_id_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)audio::mojom::SystemInfo::GetAssociatedOutputDeviceIDCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class SystemInfo_GetInputDeviceInfo_ProxyToResponder {
 public:
  static SystemInfo::GetInputDeviceInfoCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<SystemInfo_GetInputDeviceInfo_ProxyToResponder> proxy(
        new SystemInfo_GetInputDeviceInfo_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&SystemInfo_GetInputDeviceInfo_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~SystemInfo_GetInputDeviceInfo_ProxyToResponder() {
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
  SystemInfo_GetInputDeviceInfo_ProxyToResponder(
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
        << "SystemInfo::GetInputDeviceInfoCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      const base::Optional<media::AudioParameters>& in_input_params, const base::Optional<std::string>& in_associated_output_device_id);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(SystemInfo_GetInputDeviceInfo_ProxyToResponder);
};

bool SystemInfo_GetInputDeviceInfo_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "audio::mojom::SystemInfo::GetInputDeviceInfoCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::SystemInfo_GetInputDeviceInfo_ResponseParams_Data* params =
      reinterpret_cast<
          internal::SystemInfo_GetInputDeviceInfo_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  base::Optional<media::AudioParameters> p_input_params{};
  base::Optional<std::string> p_associated_output_device_id{};
  SystemInfo_GetInputDeviceInfo_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadInputParams(&p_input_params))
    success = false;
  if (!input_data_view.ReadAssociatedOutputDeviceId(&p_associated_output_device_id))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "SystemInfo::GetInputDeviceInfo response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_input_params), 
std::move(p_associated_output_device_id));
  return true;
}

void SystemInfo_GetInputDeviceInfo_ProxyToResponder::Run(
    const base::Optional<media::AudioParameters>& in_input_params, const base::Optional<std::string>& in_associated_output_device_id) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kSystemInfo_GetInputDeviceInfo_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::audio::mojom::internal::SystemInfo_GetInputDeviceInfo_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->input_params)::BaseType::BufferWriter
      input_params_writer;
  mojo::internal::Serialize<::media::mojom::AudioParametersDataView>(
      in_input_params, buffer, &input_params_writer, &serialization_context);
  params->input_params.Set(
      input_params_writer.is_null() ? nullptr : input_params_writer.data());
  typename decltype(params->associated_output_device_id)::BaseType::BufferWriter
      associated_output_device_id_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_associated_output_device_id, buffer, &associated_output_device_id_writer, &serialization_context);
  params->associated_output_device_id.Set(
      associated_output_device_id_writer.is_null() ? nullptr : associated_output_device_id_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)audio::mojom::SystemInfo::GetInputDeviceInfoCallback",
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
bool SystemInfoStubDispatch::Accept(
    SystemInfo* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kSystemInfo_GetInputStreamParameters_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)audio::mojom::SystemInfo::GetInputStreamParameters",
               "message", message->name());
#endif
      break;
    }
    case internal::kSystemInfo_GetOutputStreamParameters_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)audio::mojom::SystemInfo::GetOutputStreamParameters",
               "message", message->name());
#endif
      break;
    }
    case internal::kSystemInfo_HasInputDevices_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)audio::mojom::SystemInfo::HasInputDevices",
               "message", message->name());
#endif
      break;
    }
    case internal::kSystemInfo_HasOutputDevices_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)audio::mojom::SystemInfo::HasOutputDevices",
               "message", message->name());
#endif
      break;
    }
    case internal::kSystemInfo_GetInputDeviceDescriptions_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)audio::mojom::SystemInfo::GetInputDeviceDescriptions",
               "message", message->name());
#endif
      break;
    }
    case internal::kSystemInfo_GetOutputDeviceDescriptions_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)audio::mojom::SystemInfo::GetOutputDeviceDescriptions",
               "message", message->name());
#endif
      break;
    }
    case internal::kSystemInfo_GetAssociatedOutputDeviceID_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)audio::mojom::SystemInfo::GetAssociatedOutputDeviceID",
               "message", message->name());
#endif
      break;
    }
    case internal::kSystemInfo_GetInputDeviceInfo_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)audio::mojom::SystemInfo::GetInputDeviceInfo",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

// static
bool SystemInfoStubDispatch::AcceptWithResponder(
    SystemInfo* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kSystemInfo_GetInputStreamParameters_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)audio::mojom::SystemInfo::GetInputStreamParameters",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::SystemInfo_GetInputStreamParameters_Params_Data* params =
          reinterpret_cast<
              internal::SystemInfo_GetInputStreamParameters_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::string p_device_id{};
      SystemInfo_GetInputStreamParameters_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadDeviceId(&p_device_id))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "SystemInfo::GetInputStreamParameters deserializer");
        return false;
      }
      SystemInfo::GetInputStreamParametersCallback callback =
          SystemInfo_GetInputStreamParameters_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->GetInputStreamParameters(
std::move(p_device_id), std::move(callback));
      return true;
    }
    case internal::kSystemInfo_GetOutputStreamParameters_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)audio::mojom::SystemInfo::GetOutputStreamParameters",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::SystemInfo_GetOutputStreamParameters_Params_Data* params =
          reinterpret_cast<
              internal::SystemInfo_GetOutputStreamParameters_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::string p_device_id{};
      SystemInfo_GetOutputStreamParameters_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadDeviceId(&p_device_id))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "SystemInfo::GetOutputStreamParameters deserializer");
        return false;
      }
      SystemInfo::GetOutputStreamParametersCallback callback =
          SystemInfo_GetOutputStreamParameters_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->GetOutputStreamParameters(
std::move(p_device_id), std::move(callback));
      return true;
    }
    case internal::kSystemInfo_HasInputDevices_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)audio::mojom::SystemInfo::HasInputDevices",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::SystemInfo_HasInputDevices_Params_Data* params =
          reinterpret_cast<
              internal::SystemInfo_HasInputDevices_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      SystemInfo_HasInputDevices_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "SystemInfo::HasInputDevices deserializer");
        return false;
      }
      SystemInfo::HasInputDevicesCallback callback =
          SystemInfo_HasInputDevices_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->HasInputDevices(std::move(callback));
      return true;
    }
    case internal::kSystemInfo_HasOutputDevices_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)audio::mojom::SystemInfo::HasOutputDevices",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::SystemInfo_HasOutputDevices_Params_Data* params =
          reinterpret_cast<
              internal::SystemInfo_HasOutputDevices_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      SystemInfo_HasOutputDevices_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "SystemInfo::HasOutputDevices deserializer");
        return false;
      }
      SystemInfo::HasOutputDevicesCallback callback =
          SystemInfo_HasOutputDevices_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->HasOutputDevices(std::move(callback));
      return true;
    }
    case internal::kSystemInfo_GetInputDeviceDescriptions_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)audio::mojom::SystemInfo::GetInputDeviceDescriptions",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::SystemInfo_GetInputDeviceDescriptions_Params_Data* params =
          reinterpret_cast<
              internal::SystemInfo_GetInputDeviceDescriptions_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      SystemInfo_GetInputDeviceDescriptions_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "SystemInfo::GetInputDeviceDescriptions deserializer");
        return false;
      }
      SystemInfo::GetInputDeviceDescriptionsCallback callback =
          SystemInfo_GetInputDeviceDescriptions_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->GetInputDeviceDescriptions(std::move(callback));
      return true;
    }
    case internal::kSystemInfo_GetOutputDeviceDescriptions_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)audio::mojom::SystemInfo::GetOutputDeviceDescriptions",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::SystemInfo_GetOutputDeviceDescriptions_Params_Data* params =
          reinterpret_cast<
              internal::SystemInfo_GetOutputDeviceDescriptions_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      SystemInfo_GetOutputDeviceDescriptions_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "SystemInfo::GetOutputDeviceDescriptions deserializer");
        return false;
      }
      SystemInfo::GetOutputDeviceDescriptionsCallback callback =
          SystemInfo_GetOutputDeviceDescriptions_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->GetOutputDeviceDescriptions(std::move(callback));
      return true;
    }
    case internal::kSystemInfo_GetAssociatedOutputDeviceID_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)audio::mojom::SystemInfo::GetAssociatedOutputDeviceID",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::SystemInfo_GetAssociatedOutputDeviceID_Params_Data* params =
          reinterpret_cast<
              internal::SystemInfo_GetAssociatedOutputDeviceID_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::string p_input_device_id{};
      SystemInfo_GetAssociatedOutputDeviceID_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadInputDeviceId(&p_input_device_id))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "SystemInfo::GetAssociatedOutputDeviceID deserializer");
        return false;
      }
      SystemInfo::GetAssociatedOutputDeviceIDCallback callback =
          SystemInfo_GetAssociatedOutputDeviceID_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->GetAssociatedOutputDeviceID(
std::move(p_input_device_id), std::move(callback));
      return true;
    }
    case internal::kSystemInfo_GetInputDeviceInfo_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)audio::mojom::SystemInfo::GetInputDeviceInfo",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::SystemInfo_GetInputDeviceInfo_Params_Data* params =
          reinterpret_cast<
              internal::SystemInfo_GetInputDeviceInfo_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::string p_input_device_id{};
      SystemInfo_GetInputDeviceInfo_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadInputDeviceId(&p_input_device_id))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "SystemInfo::GetInputDeviceInfo deserializer");
        return false;
      }
      SystemInfo::GetInputDeviceInfoCallback callback =
          SystemInfo_GetInputDeviceInfo_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->GetInputDeviceInfo(
std::move(p_input_device_id), std::move(callback));
      return true;
    }
  }
  return false;
}

bool SystemInfoRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "SystemInfo RequestValidator");

  switch (message->header()->name) {
    case internal::kSystemInfo_GetInputStreamParameters_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::SystemInfo_GetInputStreamParameters_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kSystemInfo_GetOutputStreamParameters_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::SystemInfo_GetOutputStreamParameters_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kSystemInfo_HasInputDevices_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::SystemInfo_HasInputDevices_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kSystemInfo_HasOutputDevices_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::SystemInfo_HasOutputDevices_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kSystemInfo_GetInputDeviceDescriptions_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::SystemInfo_GetInputDeviceDescriptions_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kSystemInfo_GetOutputDeviceDescriptions_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::SystemInfo_GetOutputDeviceDescriptions_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kSystemInfo_GetAssociatedOutputDeviceID_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::SystemInfo_GetAssociatedOutputDeviceID_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kSystemInfo_GetInputDeviceInfo_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::SystemInfo_GetInputDeviceInfo_Params_Data>(
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

bool SystemInfoResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "SystemInfo ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kSystemInfo_GetInputStreamParameters_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::SystemInfo_GetInputStreamParameters_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kSystemInfo_GetOutputStreamParameters_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::SystemInfo_GetOutputStreamParameters_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kSystemInfo_HasInputDevices_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::SystemInfo_HasInputDevices_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kSystemInfo_HasOutputDevices_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::SystemInfo_HasOutputDevices_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kSystemInfo_GetInputDeviceDescriptions_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::SystemInfo_GetInputDeviceDescriptions_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kSystemInfo_GetOutputDeviceDescriptions_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::SystemInfo_GetOutputDeviceDescriptions_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kSystemInfo_GetAssociatedOutputDeviceID_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::SystemInfo_GetAssociatedOutputDeviceID_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kSystemInfo_GetInputDeviceInfo_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::SystemInfo_GetInputDeviceInfo_ResponseParams_Data>(
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
void SystemInfoInterceptorForTesting::GetInputStreamParameters(const std::string& device_id, GetInputStreamParametersCallback callback) {
  GetForwardingInterface()->GetInputStreamParameters(std::move(device_id), std::move(callback));
}
void SystemInfoInterceptorForTesting::GetOutputStreamParameters(const std::string& device_id, GetOutputStreamParametersCallback callback) {
  GetForwardingInterface()->GetOutputStreamParameters(std::move(device_id), std::move(callback));
}
void SystemInfoInterceptorForTesting::HasInputDevices(HasInputDevicesCallback callback) {
  GetForwardingInterface()->HasInputDevices(std::move(callback));
}
void SystemInfoInterceptorForTesting::HasOutputDevices(HasOutputDevicesCallback callback) {
  GetForwardingInterface()->HasOutputDevices(std::move(callback));
}
void SystemInfoInterceptorForTesting::GetInputDeviceDescriptions(GetInputDeviceDescriptionsCallback callback) {
  GetForwardingInterface()->GetInputDeviceDescriptions(std::move(callback));
}
void SystemInfoInterceptorForTesting::GetOutputDeviceDescriptions(GetOutputDeviceDescriptionsCallback callback) {
  GetForwardingInterface()->GetOutputDeviceDescriptions(std::move(callback));
}
void SystemInfoInterceptorForTesting::GetAssociatedOutputDeviceID(const std::string& input_device_id, GetAssociatedOutputDeviceIDCallback callback) {
  GetForwardingInterface()->GetAssociatedOutputDeviceID(std::move(input_device_id), std::move(callback));
}
void SystemInfoInterceptorForTesting::GetInputDeviceInfo(const std::string& input_device_id, GetInputDeviceInfoCallback callback) {
  GetForwardingInterface()->GetInputDeviceInfo(std::move(input_device_id), std::move(callback));
}
SystemInfoAsyncWaiter::SystemInfoAsyncWaiter(
    SystemInfo* proxy) : proxy_(proxy) {}

SystemInfoAsyncWaiter::~SystemInfoAsyncWaiter() = default;

void SystemInfoAsyncWaiter::GetInputStreamParameters(
    const std::string& device_id, base::Optional<media::AudioParameters>* out_params) {
  base::RunLoop loop;
  proxy_->GetInputStreamParameters(std::move(device_id),
      base::BindOnce(
          [](base::RunLoop* loop,
             base::Optional<media::AudioParameters>* out_params
,
             const base::Optional<media::AudioParameters>& params) {*out_params = std::move(params);
            loop->Quit();
          },
          &loop,
          out_params));
  loop.Run();
}
void SystemInfoAsyncWaiter::GetOutputStreamParameters(
    const std::string& device_id, base::Optional<media::AudioParameters>* out_params) {
  base::RunLoop loop;
  proxy_->GetOutputStreamParameters(std::move(device_id),
      base::BindOnce(
          [](base::RunLoop* loop,
             base::Optional<media::AudioParameters>* out_params
,
             const base::Optional<media::AudioParameters>& params) {*out_params = std::move(params);
            loop->Quit();
          },
          &loop,
          out_params));
  loop.Run();
}
void SystemInfoAsyncWaiter::HasInputDevices(
    bool* out_has_input_devices) {
  base::RunLoop loop;
  proxy_->HasInputDevices(
      base::BindOnce(
          [](base::RunLoop* loop,
             bool* out_has_input_devices
,
             bool has_input_devices) {*out_has_input_devices = std::move(has_input_devices);
            loop->Quit();
          },
          &loop,
          out_has_input_devices));
  loop.Run();
}
void SystemInfoAsyncWaiter::HasOutputDevices(
    bool* out_has_output_devices) {
  base::RunLoop loop;
  proxy_->HasOutputDevices(
      base::BindOnce(
          [](base::RunLoop* loop,
             bool* out_has_output_devices
,
             bool has_output_devices) {*out_has_output_devices = std::move(has_output_devices);
            loop->Quit();
          },
          &loop,
          out_has_output_devices));
  loop.Run();
}
void SystemInfoAsyncWaiter::GetInputDeviceDescriptions(
    std::vector<media::AudioDeviceDescription>* out_device_descriptions) {
  base::RunLoop loop;
  proxy_->GetInputDeviceDescriptions(
      base::BindOnce(
          [](base::RunLoop* loop,
             std::vector<media::AudioDeviceDescription>* out_device_descriptions
,
             std::vector<media::AudioDeviceDescription> device_descriptions) {*out_device_descriptions = std::move(device_descriptions);
            loop->Quit();
          },
          &loop,
          out_device_descriptions));
  loop.Run();
}
void SystemInfoAsyncWaiter::GetOutputDeviceDescriptions(
    std::vector<media::AudioDeviceDescription>* out_device_descriptions) {
  base::RunLoop loop;
  proxy_->GetOutputDeviceDescriptions(
      base::BindOnce(
          [](base::RunLoop* loop,
             std::vector<media::AudioDeviceDescription>* out_device_descriptions
,
             std::vector<media::AudioDeviceDescription> device_descriptions) {*out_device_descriptions = std::move(device_descriptions);
            loop->Quit();
          },
          &loop,
          out_device_descriptions));
  loop.Run();
}
void SystemInfoAsyncWaiter::GetAssociatedOutputDeviceID(
    const std::string& input_device_id, base::Optional<std::string>* out_associated_output_device_id) {
  base::RunLoop loop;
  proxy_->GetAssociatedOutputDeviceID(std::move(input_device_id),
      base::BindOnce(
          [](base::RunLoop* loop,
             base::Optional<std::string>* out_associated_output_device_id
,
             const base::Optional<std::string>& associated_output_device_id) {*out_associated_output_device_id = std::move(associated_output_device_id);
            loop->Quit();
          },
          &loop,
          out_associated_output_device_id));
  loop.Run();
}
void SystemInfoAsyncWaiter::GetInputDeviceInfo(
    const std::string& input_device_id, base::Optional<media::AudioParameters>* out_input_params, base::Optional<std::string>* out_associated_output_device_id) {
  base::RunLoop loop;
  proxy_->GetInputDeviceInfo(std::move(input_device_id),
      base::BindOnce(
          [](base::RunLoop* loop,
             base::Optional<media::AudioParameters>* out_input_params
,
             base::Optional<std::string>* out_associated_output_device_id
,
             const base::Optional<media::AudioParameters>& input_params,
             const base::Optional<std::string>& associated_output_device_id) {*out_input_params = std::move(input_params);*out_associated_output_device_id = std::move(associated_output_device_id);
            loop->Quit();
          },
          &loop,
          out_input_params,
          out_associated_output_device_id));
  loop.Run();
}

}  // namespace mojom
}  // namespace audio

namespace mojo {

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif