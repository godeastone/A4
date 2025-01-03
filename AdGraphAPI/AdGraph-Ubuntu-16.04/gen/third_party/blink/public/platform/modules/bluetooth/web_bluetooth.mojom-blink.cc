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

#include "third_party/blink/public/platform/modules/bluetooth/web_bluetooth.mojom-blink.h"

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

#include "third_party/blink/public/platform/modules/bluetooth/web_bluetooth.mojom-shared-message-ids.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"
#include "third_party/blink/renderer/platform/mojo/bluetooth_struct_traits.h"
namespace blink {
namespace mojom {
namespace blink {
WebBluetoothLeScanFilter::WebBluetoothLeScanFilter()
    : services(),
      name(),
      name_prefix() {}

WebBluetoothLeScanFilter::WebBluetoothLeScanFilter(
    const base::Optional<WTF::Vector<WTF::String>>& services_in,
    const WTF::String& name_in,
    const WTF::String& name_prefix_in)
    : services(std::move(services_in)),
      name(std::move(name_in)),
      name_prefix(std::move(name_prefix_in)) {}

WebBluetoothLeScanFilter::~WebBluetoothLeScanFilter() = default;

bool WebBluetoothLeScanFilter::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
WebBluetoothRequestDeviceOptions::WebBluetoothRequestDeviceOptions()
    : filters(),
      optional_services(),
      accept_all_devices() {}

WebBluetoothRequestDeviceOptions::WebBluetoothRequestDeviceOptions(
    base::Optional<WTF::Vector<WebBluetoothLeScanFilterPtr>> filters_in,
    const WTF::Vector<WTF::String>& optional_services_in,
    bool accept_all_devices_in)
    : filters(std::move(filters_in)),
      optional_services(std::move(optional_services_in)),
      accept_all_devices(std::move(accept_all_devices_in)) {}

WebBluetoothRequestDeviceOptions::~WebBluetoothRequestDeviceOptions() = default;

bool WebBluetoothRequestDeviceOptions::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
WebBluetoothDeviceId::WebBluetoothDeviceId()
    : device_id() {}

WebBluetoothDeviceId::WebBluetoothDeviceId(
    const WTF::String& device_id_in)
    : device_id(std::move(device_id_in)) {}

WebBluetoothDeviceId::~WebBluetoothDeviceId() = default;

bool WebBluetoothDeviceId::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
WebBluetoothDevice::WebBluetoothDevice()
    : id(),
      name() {}

WebBluetoothDevice::WebBluetoothDevice(
    const WTF::String& id_in,
    const WTF::String& name_in)
    : id(std::move(id_in)),
      name(std::move(name_in)) {}

WebBluetoothDevice::~WebBluetoothDevice() = default;

bool WebBluetoothDevice::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
WebBluetoothRemoteGATTService::WebBluetoothRemoteGATTService()
    : instance_id(),
      uuid() {}

WebBluetoothRemoteGATTService::WebBluetoothRemoteGATTService(
    const WTF::String& instance_id_in,
    const WTF::String& uuid_in)
    : instance_id(std::move(instance_id_in)),
      uuid(std::move(uuid_in)) {}

WebBluetoothRemoteGATTService::~WebBluetoothRemoteGATTService() = default;

bool WebBluetoothRemoteGATTService::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
WebBluetoothRemoteGATTCharacteristic::WebBluetoothRemoteGATTCharacteristic()
    : instance_id(),
      uuid(),
      properties() {}

WebBluetoothRemoteGATTCharacteristic::WebBluetoothRemoteGATTCharacteristic(
    const WTF::String& instance_id_in,
    const WTF::String& uuid_in,
    uint32_t properties_in)
    : instance_id(std::move(instance_id_in)),
      uuid(std::move(uuid_in)),
      properties(std::move(properties_in)) {}

WebBluetoothRemoteGATTCharacteristic::~WebBluetoothRemoteGATTCharacteristic() = default;

bool WebBluetoothRemoteGATTCharacteristic::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
WebBluetoothRemoteGATTDescriptor::WebBluetoothRemoteGATTDescriptor()
    : instance_id(),
      uuid() {}

WebBluetoothRemoteGATTDescriptor::WebBluetoothRemoteGATTDescriptor(
    const WTF::String& instance_id_in,
    const WTF::String& uuid_in)
    : instance_id(std::move(instance_id_in)),
      uuid(std::move(uuid_in)) {}

WebBluetoothRemoteGATTDescriptor::~WebBluetoothRemoteGATTDescriptor() = default;

bool WebBluetoothRemoteGATTDescriptor::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
const char WebBluetoothService::Name_[] = "blink.mojom.WebBluetoothService";

class WebBluetoothService_RequestDevice_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  WebBluetoothService_RequestDevice_ForwardToCallback(
      WebBluetoothService::RequestDeviceCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  WebBluetoothService::RequestDeviceCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(WebBluetoothService_RequestDevice_ForwardToCallback);
};

class WebBluetoothService_RemoteServerConnect_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  WebBluetoothService_RemoteServerConnect_ForwardToCallback(
      WebBluetoothService::RemoteServerConnectCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  WebBluetoothService::RemoteServerConnectCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(WebBluetoothService_RemoteServerConnect_ForwardToCallback);
};

class WebBluetoothService_RemoteServerGetPrimaryServices_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  WebBluetoothService_RemoteServerGetPrimaryServices_ForwardToCallback(
      WebBluetoothService::RemoteServerGetPrimaryServicesCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  WebBluetoothService::RemoteServerGetPrimaryServicesCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(WebBluetoothService_RemoteServerGetPrimaryServices_ForwardToCallback);
};

class WebBluetoothService_RemoteServiceGetCharacteristics_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  WebBluetoothService_RemoteServiceGetCharacteristics_ForwardToCallback(
      WebBluetoothService::RemoteServiceGetCharacteristicsCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  WebBluetoothService::RemoteServiceGetCharacteristicsCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(WebBluetoothService_RemoteServiceGetCharacteristics_ForwardToCallback);
};

class WebBluetoothService_RemoteCharacteristicReadValue_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  WebBluetoothService_RemoteCharacteristicReadValue_ForwardToCallback(
      WebBluetoothService::RemoteCharacteristicReadValueCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  WebBluetoothService::RemoteCharacteristicReadValueCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(WebBluetoothService_RemoteCharacteristicReadValue_ForwardToCallback);
};

class WebBluetoothService_RemoteCharacteristicWriteValue_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  WebBluetoothService_RemoteCharacteristicWriteValue_ForwardToCallback(
      WebBluetoothService::RemoteCharacteristicWriteValueCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  WebBluetoothService::RemoteCharacteristicWriteValueCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(WebBluetoothService_RemoteCharacteristicWriteValue_ForwardToCallback);
};

class WebBluetoothService_RemoteCharacteristicStartNotifications_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  WebBluetoothService_RemoteCharacteristicStartNotifications_ForwardToCallback(
      WebBluetoothService::RemoteCharacteristicStartNotificationsCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  WebBluetoothService::RemoteCharacteristicStartNotificationsCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(WebBluetoothService_RemoteCharacteristicStartNotifications_ForwardToCallback);
};

class WebBluetoothService_RemoteCharacteristicStopNotifications_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  WebBluetoothService_RemoteCharacteristicStopNotifications_ForwardToCallback(
      WebBluetoothService::RemoteCharacteristicStopNotificationsCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  WebBluetoothService::RemoteCharacteristicStopNotificationsCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(WebBluetoothService_RemoteCharacteristicStopNotifications_ForwardToCallback);
};

class WebBluetoothService_RemoteCharacteristicGetDescriptors_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  WebBluetoothService_RemoteCharacteristicGetDescriptors_ForwardToCallback(
      WebBluetoothService::RemoteCharacteristicGetDescriptorsCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  WebBluetoothService::RemoteCharacteristicGetDescriptorsCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(WebBluetoothService_RemoteCharacteristicGetDescriptors_ForwardToCallback);
};

class WebBluetoothService_RemoteDescriptorReadValue_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  WebBluetoothService_RemoteDescriptorReadValue_ForwardToCallback(
      WebBluetoothService::RemoteDescriptorReadValueCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  WebBluetoothService::RemoteDescriptorReadValueCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(WebBluetoothService_RemoteDescriptorReadValue_ForwardToCallback);
};

class WebBluetoothService_RemoteDescriptorWriteValue_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  WebBluetoothService_RemoteDescriptorWriteValue_ForwardToCallback(
      WebBluetoothService::RemoteDescriptorWriteValueCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  WebBluetoothService::RemoteDescriptorWriteValueCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(WebBluetoothService_RemoteDescriptorWriteValue_ForwardToCallback);
};

WebBluetoothServiceProxy::WebBluetoothServiceProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void WebBluetoothServiceProxy::RequestDevice(
    WebBluetoothRequestDeviceOptionsPtr in_options, RequestDeviceCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "blink::mojom::WebBluetoothService::RequestDevice");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWebBluetoothService_RequestDevice_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::WebBluetoothService_RequestDevice_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->options)::BaseType::BufferWriter
      options_writer;
  mojo::internal::Serialize<::blink::mojom::WebBluetoothRequestDeviceOptionsDataView>(
      in_options, buffer, &options_writer, &serialization_context);
  params->options.Set(
      options_writer.is_null() ? nullptr : options_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->options.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null options in WebBluetoothService.RequestDevice request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new WebBluetoothService_RequestDevice_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void WebBluetoothServiceProxy::RemoteServerConnect(
    const WTF::String& in_device_id, WebBluetoothServerClientAssociatedPtrInfo in_client, RemoteServerConnectCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "blink::mojom::WebBluetoothService::RemoteServerConnect");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWebBluetoothService_RemoteServerConnect_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::WebBluetoothService_RemoteServerConnect_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->device_id)::BaseType::BufferWriter
      device_id_writer;
  mojo::internal::Serialize<::blink::mojom::WebBluetoothDeviceIdDataView>(
      in_device_id, buffer, &device_id_writer, &serialization_context);
  params->device_id.Set(
      device_id_writer.is_null() ? nullptr : device_id_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->device_id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null device_id in WebBluetoothService.RemoteServerConnect request");
  mojo::internal::Serialize<::blink::mojom::WebBluetoothServerClientAssociatedPtrInfoDataView>(
      in_client, &params->client, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->client),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_INTERFACE_ID,
      "invalid client in WebBluetoothService.RemoteServerConnect request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new WebBluetoothService_RemoteServerConnect_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void WebBluetoothServiceProxy::RemoteServerDisconnect(
    const WTF::String& in_device_id) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "blink::mojom::WebBluetoothService::RemoteServerDisconnect");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWebBluetoothService_RemoteServerDisconnect_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::WebBluetoothService_RemoteServerDisconnect_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->device_id)::BaseType::BufferWriter
      device_id_writer;
  mojo::internal::Serialize<::blink::mojom::WebBluetoothDeviceIdDataView>(
      in_device_id, buffer, &device_id_writer, &serialization_context);
  params->device_id.Set(
      device_id_writer.is_null() ? nullptr : device_id_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->device_id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null device_id in WebBluetoothService.RemoteServerDisconnect request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WebBluetoothServiceProxy::RemoteServerGetPrimaryServices(
    const WTF::String& in_device_id, WebBluetoothGATTQueryQuantity in_quantity, const WTF::String& in_services_uuid, RemoteServerGetPrimaryServicesCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "blink::mojom::WebBluetoothService::RemoteServerGetPrimaryServices");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWebBluetoothService_RemoteServerGetPrimaryServices_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::WebBluetoothService_RemoteServerGetPrimaryServices_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->device_id)::BaseType::BufferWriter
      device_id_writer;
  mojo::internal::Serialize<::blink::mojom::WebBluetoothDeviceIdDataView>(
      in_device_id, buffer, &device_id_writer, &serialization_context);
  params->device_id.Set(
      device_id_writer.is_null() ? nullptr : device_id_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->device_id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null device_id in WebBluetoothService.RemoteServerGetPrimaryServices request");
  mojo::internal::Serialize<::blink::mojom::WebBluetoothGATTQueryQuantity>(
      in_quantity, &params->quantity);
  typename decltype(params->services_uuid)::BaseType::BufferWriter
      services_uuid_writer;
  mojo::internal::Serialize<::bluetooth::mojom::UUIDDataView>(
      in_services_uuid, buffer, &services_uuid_writer, &serialization_context);
  params->services_uuid.Set(
      services_uuid_writer.is_null() ? nullptr : services_uuid_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new WebBluetoothService_RemoteServerGetPrimaryServices_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void WebBluetoothServiceProxy::RemoteServiceGetCharacteristics(
    const WTF::String& in_service_instance_id, WebBluetoothGATTQueryQuantity in_quantity, const WTF::String& in_characteristics_uuid, RemoteServiceGetCharacteristicsCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "blink::mojom::WebBluetoothService::RemoteServiceGetCharacteristics");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWebBluetoothService_RemoteServiceGetCharacteristics_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::WebBluetoothService_RemoteServiceGetCharacteristics_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->service_instance_id)::BaseType::BufferWriter
      service_instance_id_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_service_instance_id, buffer, &service_instance_id_writer, &serialization_context);
  params->service_instance_id.Set(
      service_instance_id_writer.is_null() ? nullptr : service_instance_id_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->service_instance_id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null service_instance_id in WebBluetoothService.RemoteServiceGetCharacteristics request");
  mojo::internal::Serialize<::blink::mojom::WebBluetoothGATTQueryQuantity>(
      in_quantity, &params->quantity);
  typename decltype(params->characteristics_uuid)::BaseType::BufferWriter
      characteristics_uuid_writer;
  mojo::internal::Serialize<::bluetooth::mojom::UUIDDataView>(
      in_characteristics_uuid, buffer, &characteristics_uuid_writer, &serialization_context);
  params->characteristics_uuid.Set(
      characteristics_uuid_writer.is_null() ? nullptr : characteristics_uuid_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new WebBluetoothService_RemoteServiceGetCharacteristics_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void WebBluetoothServiceProxy::RemoteCharacteristicReadValue(
    const WTF::String& in_characteristic_instance_id, RemoteCharacteristicReadValueCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "blink::mojom::WebBluetoothService::RemoteCharacteristicReadValue");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWebBluetoothService_RemoteCharacteristicReadValue_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::WebBluetoothService_RemoteCharacteristicReadValue_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->characteristic_instance_id)::BaseType::BufferWriter
      characteristic_instance_id_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_characteristic_instance_id, buffer, &characteristic_instance_id_writer, &serialization_context);
  params->characteristic_instance_id.Set(
      characteristic_instance_id_writer.is_null() ? nullptr : characteristic_instance_id_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->characteristic_instance_id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null characteristic_instance_id in WebBluetoothService.RemoteCharacteristicReadValue request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new WebBluetoothService_RemoteCharacteristicReadValue_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void WebBluetoothServiceProxy::RemoteCharacteristicWriteValue(
    const WTF::String& in_characteristic_instance_id, const WTF::Vector<uint8_t>& in_value, RemoteCharacteristicWriteValueCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "blink::mojom::WebBluetoothService::RemoteCharacteristicWriteValue");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWebBluetoothService_RemoteCharacteristicWriteValue_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::WebBluetoothService_RemoteCharacteristicWriteValue_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->characteristic_instance_id)::BaseType::BufferWriter
      characteristic_instance_id_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_characteristic_instance_id, buffer, &characteristic_instance_id_writer, &serialization_context);
  params->characteristic_instance_id.Set(
      characteristic_instance_id_writer.is_null() ? nullptr : characteristic_instance_id_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->characteristic_instance_id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null characteristic_instance_id in WebBluetoothService.RemoteCharacteristicWriteValue request");
  typename decltype(params->value)::BaseType::BufferWriter
      value_writer;
  const mojo::internal::ContainerValidateParams value_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
      in_value, buffer, &value_writer, &value_validate_params,
      &serialization_context);
  params->value.Set(
      value_writer.is_null() ? nullptr : value_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->value.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null value in WebBluetoothService.RemoteCharacteristicWriteValue request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new WebBluetoothService_RemoteCharacteristicWriteValue_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void WebBluetoothServiceProxy::RemoteCharacteristicStartNotifications(
    const WTF::String& in_characteristic_instance_id, WebBluetoothCharacteristicClientAssociatedPtrInfo in_client, RemoteCharacteristicStartNotificationsCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "blink::mojom::WebBluetoothService::RemoteCharacteristicStartNotifications");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWebBluetoothService_RemoteCharacteristicStartNotifications_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::WebBluetoothService_RemoteCharacteristicStartNotifications_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->characteristic_instance_id)::BaseType::BufferWriter
      characteristic_instance_id_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_characteristic_instance_id, buffer, &characteristic_instance_id_writer, &serialization_context);
  params->characteristic_instance_id.Set(
      characteristic_instance_id_writer.is_null() ? nullptr : characteristic_instance_id_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->characteristic_instance_id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null characteristic_instance_id in WebBluetoothService.RemoteCharacteristicStartNotifications request");
  mojo::internal::Serialize<::blink::mojom::WebBluetoothCharacteristicClientAssociatedPtrInfoDataView>(
      in_client, &params->client, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->client),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_INTERFACE_ID,
      "invalid client in WebBluetoothService.RemoteCharacteristicStartNotifications request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new WebBluetoothService_RemoteCharacteristicStartNotifications_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void WebBluetoothServiceProxy::RemoteCharacteristicStopNotifications(
    const WTF::String& in_characteristic_instance_id, RemoteCharacteristicStopNotificationsCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "blink::mojom::WebBluetoothService::RemoteCharacteristicStopNotifications");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWebBluetoothService_RemoteCharacteristicStopNotifications_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::WebBluetoothService_RemoteCharacteristicStopNotifications_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->characteristic_instance_id)::BaseType::BufferWriter
      characteristic_instance_id_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_characteristic_instance_id, buffer, &characteristic_instance_id_writer, &serialization_context);
  params->characteristic_instance_id.Set(
      characteristic_instance_id_writer.is_null() ? nullptr : characteristic_instance_id_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->characteristic_instance_id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null characteristic_instance_id in WebBluetoothService.RemoteCharacteristicStopNotifications request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new WebBluetoothService_RemoteCharacteristicStopNotifications_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void WebBluetoothServiceProxy::RemoteCharacteristicGetDescriptors(
    const WTF::String& in_characteristics_instance_id, WebBluetoothGATTQueryQuantity in_quantity, const WTF::String& in_descriptor_uuid, RemoteCharacteristicGetDescriptorsCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "blink::mojom::WebBluetoothService::RemoteCharacteristicGetDescriptors");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWebBluetoothService_RemoteCharacteristicGetDescriptors_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::WebBluetoothService_RemoteCharacteristicGetDescriptors_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->characteristics_instance_id)::BaseType::BufferWriter
      characteristics_instance_id_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_characteristics_instance_id, buffer, &characteristics_instance_id_writer, &serialization_context);
  params->characteristics_instance_id.Set(
      characteristics_instance_id_writer.is_null() ? nullptr : characteristics_instance_id_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->characteristics_instance_id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null characteristics_instance_id in WebBluetoothService.RemoteCharacteristicGetDescriptors request");
  mojo::internal::Serialize<::blink::mojom::WebBluetoothGATTQueryQuantity>(
      in_quantity, &params->quantity);
  typename decltype(params->descriptor_uuid)::BaseType::BufferWriter
      descriptor_uuid_writer;
  mojo::internal::Serialize<::bluetooth::mojom::UUIDDataView>(
      in_descriptor_uuid, buffer, &descriptor_uuid_writer, &serialization_context);
  params->descriptor_uuid.Set(
      descriptor_uuid_writer.is_null() ? nullptr : descriptor_uuid_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new WebBluetoothService_RemoteCharacteristicGetDescriptors_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void WebBluetoothServiceProxy::RemoteDescriptorReadValue(
    const WTF::String& in_descriptor_instance_id, RemoteDescriptorReadValueCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "blink::mojom::WebBluetoothService::RemoteDescriptorReadValue");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWebBluetoothService_RemoteDescriptorReadValue_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::WebBluetoothService_RemoteDescriptorReadValue_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->descriptor_instance_id)::BaseType::BufferWriter
      descriptor_instance_id_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_descriptor_instance_id, buffer, &descriptor_instance_id_writer, &serialization_context);
  params->descriptor_instance_id.Set(
      descriptor_instance_id_writer.is_null() ? nullptr : descriptor_instance_id_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->descriptor_instance_id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null descriptor_instance_id in WebBluetoothService.RemoteDescriptorReadValue request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new WebBluetoothService_RemoteDescriptorReadValue_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void WebBluetoothServiceProxy::RemoteDescriptorWriteValue(
    const WTF::String& in_descriptor_instance_id, const WTF::Vector<uint8_t>& in_value, RemoteDescriptorWriteValueCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "blink::mojom::WebBluetoothService::RemoteDescriptorWriteValue");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWebBluetoothService_RemoteDescriptorWriteValue_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::WebBluetoothService_RemoteDescriptorWriteValue_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->descriptor_instance_id)::BaseType::BufferWriter
      descriptor_instance_id_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_descriptor_instance_id, buffer, &descriptor_instance_id_writer, &serialization_context);
  params->descriptor_instance_id.Set(
      descriptor_instance_id_writer.is_null() ? nullptr : descriptor_instance_id_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->descriptor_instance_id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null descriptor_instance_id in WebBluetoothService.RemoteDescriptorWriteValue request");
  typename decltype(params->value)::BaseType::BufferWriter
      value_writer;
  const mojo::internal::ContainerValidateParams value_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
      in_value, buffer, &value_writer, &value_validate_params,
      &serialization_context);
  params->value.Set(
      value_writer.is_null() ? nullptr : value_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->value.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null value in WebBluetoothService.RemoteDescriptorWriteValue request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new WebBluetoothService_RemoteDescriptorWriteValue_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class WebBluetoothService_RequestDevice_ProxyToResponder {
 public:
  static WebBluetoothService::RequestDeviceCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<WebBluetoothService_RequestDevice_ProxyToResponder> proxy(
        new WebBluetoothService_RequestDevice_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&WebBluetoothService_RequestDevice_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~WebBluetoothService_RequestDevice_ProxyToResponder() {
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
  WebBluetoothService_RequestDevice_ProxyToResponder(
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
        << "WebBluetoothService::RequestDeviceCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      WebBluetoothResult in_result, WebBluetoothDevicePtr in_device);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(WebBluetoothService_RequestDevice_ProxyToResponder);
};

bool WebBluetoothService_RequestDevice_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "blink::mojom::WebBluetoothService::RequestDeviceCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::WebBluetoothService_RequestDevice_ResponseParams_Data* params =
      reinterpret_cast<
          internal::WebBluetoothService_RequestDevice_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  WebBluetoothResult p_result{};
  WebBluetoothDevicePtr p_device{};
  WebBluetoothService_RequestDevice_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadResult(&p_result))
    success = false;
  if (!input_data_view.ReadDevice(&p_device))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "WebBluetoothService::RequestDevice response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_result), 
std::move(p_device));
  return true;
}

void WebBluetoothService_RequestDevice_ProxyToResponder::Run(
    WebBluetoothResult in_result, WebBluetoothDevicePtr in_device) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWebBluetoothService_RequestDevice_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::WebBluetoothService_RequestDevice_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::blink::mojom::WebBluetoothResult>(
      in_result, &params->result);
  typename decltype(params->device)::BaseType::BufferWriter
      device_writer;
  mojo::internal::Serialize<::blink::mojom::WebBluetoothDeviceDataView>(
      in_device, buffer, &device_writer, &serialization_context);
  params->device.Set(
      device_writer.is_null() ? nullptr : device_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::WebBluetoothService::RequestDeviceCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class WebBluetoothService_RemoteServerConnect_ProxyToResponder {
 public:
  static WebBluetoothService::RemoteServerConnectCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<WebBluetoothService_RemoteServerConnect_ProxyToResponder> proxy(
        new WebBluetoothService_RemoteServerConnect_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&WebBluetoothService_RemoteServerConnect_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~WebBluetoothService_RemoteServerConnect_ProxyToResponder() {
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
  WebBluetoothService_RemoteServerConnect_ProxyToResponder(
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
        << "WebBluetoothService::RemoteServerConnectCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      WebBluetoothResult in_result);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(WebBluetoothService_RemoteServerConnect_ProxyToResponder);
};

bool WebBluetoothService_RemoteServerConnect_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "blink::mojom::WebBluetoothService::RemoteServerConnectCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::WebBluetoothService_RemoteServerConnect_ResponseParams_Data* params =
      reinterpret_cast<
          internal::WebBluetoothService_RemoteServerConnect_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  WebBluetoothResult p_result{};
  WebBluetoothService_RemoteServerConnect_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadResult(&p_result))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "WebBluetoothService::RemoteServerConnect response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_result));
  return true;
}

void WebBluetoothService_RemoteServerConnect_ProxyToResponder::Run(
    WebBluetoothResult in_result) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWebBluetoothService_RemoteServerConnect_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::WebBluetoothService_RemoteServerConnect_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::blink::mojom::WebBluetoothResult>(
      in_result, &params->result);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::WebBluetoothService::RemoteServerConnectCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class WebBluetoothService_RemoteServerGetPrimaryServices_ProxyToResponder {
 public:
  static WebBluetoothService::RemoteServerGetPrimaryServicesCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<WebBluetoothService_RemoteServerGetPrimaryServices_ProxyToResponder> proxy(
        new WebBluetoothService_RemoteServerGetPrimaryServices_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&WebBluetoothService_RemoteServerGetPrimaryServices_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~WebBluetoothService_RemoteServerGetPrimaryServices_ProxyToResponder() {
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
  WebBluetoothService_RemoteServerGetPrimaryServices_ProxyToResponder(
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
        << "WebBluetoothService::RemoteServerGetPrimaryServicesCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      WebBluetoothResult in_result, base::Optional<WTF::Vector<WebBluetoothRemoteGATTServicePtr>> in_services);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(WebBluetoothService_RemoteServerGetPrimaryServices_ProxyToResponder);
};

bool WebBluetoothService_RemoteServerGetPrimaryServices_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "blink::mojom::WebBluetoothService::RemoteServerGetPrimaryServicesCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::WebBluetoothService_RemoteServerGetPrimaryServices_ResponseParams_Data* params =
      reinterpret_cast<
          internal::WebBluetoothService_RemoteServerGetPrimaryServices_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  WebBluetoothResult p_result{};
  base::Optional<WTF::Vector<WebBluetoothRemoteGATTServicePtr>> p_services{};
  WebBluetoothService_RemoteServerGetPrimaryServices_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadResult(&p_result))
    success = false;
  if (!input_data_view.ReadServices(&p_services))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "WebBluetoothService::RemoteServerGetPrimaryServices response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_result), 
std::move(p_services));
  return true;
}

void WebBluetoothService_RemoteServerGetPrimaryServices_ProxyToResponder::Run(
    WebBluetoothResult in_result, base::Optional<WTF::Vector<WebBluetoothRemoteGATTServicePtr>> in_services) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWebBluetoothService_RemoteServerGetPrimaryServices_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::WebBluetoothService_RemoteServerGetPrimaryServices_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::blink::mojom::WebBluetoothResult>(
      in_result, &params->result);
  typename decltype(params->services)::BaseType::BufferWriter
      services_writer;
  const mojo::internal::ContainerValidateParams services_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::blink::mojom::WebBluetoothRemoteGATTServiceDataView>>(
      in_services, buffer, &services_writer, &services_validate_params,
      &serialization_context);
  params->services.Set(
      services_writer.is_null() ? nullptr : services_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::WebBluetoothService::RemoteServerGetPrimaryServicesCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class WebBluetoothService_RemoteServiceGetCharacteristics_ProxyToResponder {
 public:
  static WebBluetoothService::RemoteServiceGetCharacteristicsCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<WebBluetoothService_RemoteServiceGetCharacteristics_ProxyToResponder> proxy(
        new WebBluetoothService_RemoteServiceGetCharacteristics_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&WebBluetoothService_RemoteServiceGetCharacteristics_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~WebBluetoothService_RemoteServiceGetCharacteristics_ProxyToResponder() {
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
  WebBluetoothService_RemoteServiceGetCharacteristics_ProxyToResponder(
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
        << "WebBluetoothService::RemoteServiceGetCharacteristicsCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      WebBluetoothResult in_result, base::Optional<WTF::Vector<WebBluetoothRemoteGATTCharacteristicPtr>> in_characteristics);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(WebBluetoothService_RemoteServiceGetCharacteristics_ProxyToResponder);
};

bool WebBluetoothService_RemoteServiceGetCharacteristics_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "blink::mojom::WebBluetoothService::RemoteServiceGetCharacteristicsCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::WebBluetoothService_RemoteServiceGetCharacteristics_ResponseParams_Data* params =
      reinterpret_cast<
          internal::WebBluetoothService_RemoteServiceGetCharacteristics_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  WebBluetoothResult p_result{};
  base::Optional<WTF::Vector<WebBluetoothRemoteGATTCharacteristicPtr>> p_characteristics{};
  WebBluetoothService_RemoteServiceGetCharacteristics_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadResult(&p_result))
    success = false;
  if (!input_data_view.ReadCharacteristics(&p_characteristics))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "WebBluetoothService::RemoteServiceGetCharacteristics response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_result), 
std::move(p_characteristics));
  return true;
}

void WebBluetoothService_RemoteServiceGetCharacteristics_ProxyToResponder::Run(
    WebBluetoothResult in_result, base::Optional<WTF::Vector<WebBluetoothRemoteGATTCharacteristicPtr>> in_characteristics) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWebBluetoothService_RemoteServiceGetCharacteristics_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::WebBluetoothService_RemoteServiceGetCharacteristics_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::blink::mojom::WebBluetoothResult>(
      in_result, &params->result);
  typename decltype(params->characteristics)::BaseType::BufferWriter
      characteristics_writer;
  const mojo::internal::ContainerValidateParams characteristics_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::blink::mojom::WebBluetoothRemoteGATTCharacteristicDataView>>(
      in_characteristics, buffer, &characteristics_writer, &characteristics_validate_params,
      &serialization_context);
  params->characteristics.Set(
      characteristics_writer.is_null() ? nullptr : characteristics_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::WebBluetoothService::RemoteServiceGetCharacteristicsCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class WebBluetoothService_RemoteCharacteristicReadValue_ProxyToResponder {
 public:
  static WebBluetoothService::RemoteCharacteristicReadValueCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<WebBluetoothService_RemoteCharacteristicReadValue_ProxyToResponder> proxy(
        new WebBluetoothService_RemoteCharacteristicReadValue_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&WebBluetoothService_RemoteCharacteristicReadValue_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~WebBluetoothService_RemoteCharacteristicReadValue_ProxyToResponder() {
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
  WebBluetoothService_RemoteCharacteristicReadValue_ProxyToResponder(
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
        << "WebBluetoothService::RemoteCharacteristicReadValueCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      WebBluetoothResult in_result, const base::Optional<WTF::Vector<uint8_t>>& in_value);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(WebBluetoothService_RemoteCharacteristicReadValue_ProxyToResponder);
};

bool WebBluetoothService_RemoteCharacteristicReadValue_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "blink::mojom::WebBluetoothService::RemoteCharacteristicReadValueCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::WebBluetoothService_RemoteCharacteristicReadValue_ResponseParams_Data* params =
      reinterpret_cast<
          internal::WebBluetoothService_RemoteCharacteristicReadValue_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  WebBluetoothResult p_result{};
  base::Optional<WTF::Vector<uint8_t>> p_value{};
  WebBluetoothService_RemoteCharacteristicReadValue_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadResult(&p_result))
    success = false;
  if (!input_data_view.ReadValue(&p_value))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "WebBluetoothService::RemoteCharacteristicReadValue response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_result), 
std::move(p_value));
  return true;
}

void WebBluetoothService_RemoteCharacteristicReadValue_ProxyToResponder::Run(
    WebBluetoothResult in_result, const base::Optional<WTF::Vector<uint8_t>>& in_value) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWebBluetoothService_RemoteCharacteristicReadValue_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::WebBluetoothService_RemoteCharacteristicReadValue_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::blink::mojom::WebBluetoothResult>(
      in_result, &params->result);
  typename decltype(params->value)::BaseType::BufferWriter
      value_writer;
  const mojo::internal::ContainerValidateParams value_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
      in_value, buffer, &value_writer, &value_validate_params,
      &serialization_context);
  params->value.Set(
      value_writer.is_null() ? nullptr : value_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::WebBluetoothService::RemoteCharacteristicReadValueCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class WebBluetoothService_RemoteCharacteristicWriteValue_ProxyToResponder {
 public:
  static WebBluetoothService::RemoteCharacteristicWriteValueCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<WebBluetoothService_RemoteCharacteristicWriteValue_ProxyToResponder> proxy(
        new WebBluetoothService_RemoteCharacteristicWriteValue_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&WebBluetoothService_RemoteCharacteristicWriteValue_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~WebBluetoothService_RemoteCharacteristicWriteValue_ProxyToResponder() {
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
  WebBluetoothService_RemoteCharacteristicWriteValue_ProxyToResponder(
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
        << "WebBluetoothService::RemoteCharacteristicWriteValueCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      WebBluetoothResult in_result);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(WebBluetoothService_RemoteCharacteristicWriteValue_ProxyToResponder);
};

bool WebBluetoothService_RemoteCharacteristicWriteValue_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "blink::mojom::WebBluetoothService::RemoteCharacteristicWriteValueCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::WebBluetoothService_RemoteCharacteristicWriteValue_ResponseParams_Data* params =
      reinterpret_cast<
          internal::WebBluetoothService_RemoteCharacteristicWriteValue_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  WebBluetoothResult p_result{};
  WebBluetoothService_RemoteCharacteristicWriteValue_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadResult(&p_result))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "WebBluetoothService::RemoteCharacteristicWriteValue response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_result));
  return true;
}

void WebBluetoothService_RemoteCharacteristicWriteValue_ProxyToResponder::Run(
    WebBluetoothResult in_result) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWebBluetoothService_RemoteCharacteristicWriteValue_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::WebBluetoothService_RemoteCharacteristicWriteValue_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::blink::mojom::WebBluetoothResult>(
      in_result, &params->result);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::WebBluetoothService::RemoteCharacteristicWriteValueCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class WebBluetoothService_RemoteCharacteristicStartNotifications_ProxyToResponder {
 public:
  static WebBluetoothService::RemoteCharacteristicStartNotificationsCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<WebBluetoothService_RemoteCharacteristicStartNotifications_ProxyToResponder> proxy(
        new WebBluetoothService_RemoteCharacteristicStartNotifications_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&WebBluetoothService_RemoteCharacteristicStartNotifications_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~WebBluetoothService_RemoteCharacteristicStartNotifications_ProxyToResponder() {
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
  WebBluetoothService_RemoteCharacteristicStartNotifications_ProxyToResponder(
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
        << "WebBluetoothService::RemoteCharacteristicStartNotificationsCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      WebBluetoothResult in_result);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(WebBluetoothService_RemoteCharacteristicStartNotifications_ProxyToResponder);
};

bool WebBluetoothService_RemoteCharacteristicStartNotifications_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "blink::mojom::WebBluetoothService::RemoteCharacteristicStartNotificationsCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::WebBluetoothService_RemoteCharacteristicStartNotifications_ResponseParams_Data* params =
      reinterpret_cast<
          internal::WebBluetoothService_RemoteCharacteristicStartNotifications_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  WebBluetoothResult p_result{};
  WebBluetoothService_RemoteCharacteristicStartNotifications_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadResult(&p_result))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "WebBluetoothService::RemoteCharacteristicStartNotifications response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_result));
  return true;
}

void WebBluetoothService_RemoteCharacteristicStartNotifications_ProxyToResponder::Run(
    WebBluetoothResult in_result) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWebBluetoothService_RemoteCharacteristicStartNotifications_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::WebBluetoothService_RemoteCharacteristicStartNotifications_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::blink::mojom::WebBluetoothResult>(
      in_result, &params->result);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::WebBluetoothService::RemoteCharacteristicStartNotificationsCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class WebBluetoothService_RemoteCharacteristicStopNotifications_ProxyToResponder {
 public:
  static WebBluetoothService::RemoteCharacteristicStopNotificationsCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<WebBluetoothService_RemoteCharacteristicStopNotifications_ProxyToResponder> proxy(
        new WebBluetoothService_RemoteCharacteristicStopNotifications_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&WebBluetoothService_RemoteCharacteristicStopNotifications_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~WebBluetoothService_RemoteCharacteristicStopNotifications_ProxyToResponder() {
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
  WebBluetoothService_RemoteCharacteristicStopNotifications_ProxyToResponder(
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
        << "WebBluetoothService::RemoteCharacteristicStopNotificationsCallback was destroyed without "
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

  DISALLOW_COPY_AND_ASSIGN(WebBluetoothService_RemoteCharacteristicStopNotifications_ProxyToResponder);
};

bool WebBluetoothService_RemoteCharacteristicStopNotifications_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "blink::mojom::WebBluetoothService::RemoteCharacteristicStopNotificationsCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::WebBluetoothService_RemoteCharacteristicStopNotifications_ResponseParams_Data* params =
      reinterpret_cast<
          internal::WebBluetoothService_RemoteCharacteristicStopNotifications_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  WebBluetoothService_RemoteCharacteristicStopNotifications_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "WebBluetoothService::RemoteCharacteristicStopNotifications response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run();
  return true;
}

void WebBluetoothService_RemoteCharacteristicStopNotifications_ProxyToResponder::Run(
    ) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWebBluetoothService_RemoteCharacteristicStopNotifications_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::WebBluetoothService_RemoteCharacteristicStopNotifications_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::WebBluetoothService::RemoteCharacteristicStopNotificationsCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class WebBluetoothService_RemoteCharacteristicGetDescriptors_ProxyToResponder {
 public:
  static WebBluetoothService::RemoteCharacteristicGetDescriptorsCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<WebBluetoothService_RemoteCharacteristicGetDescriptors_ProxyToResponder> proxy(
        new WebBluetoothService_RemoteCharacteristicGetDescriptors_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&WebBluetoothService_RemoteCharacteristicGetDescriptors_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~WebBluetoothService_RemoteCharacteristicGetDescriptors_ProxyToResponder() {
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
  WebBluetoothService_RemoteCharacteristicGetDescriptors_ProxyToResponder(
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
        << "WebBluetoothService::RemoteCharacteristicGetDescriptorsCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      WebBluetoothResult in_result, base::Optional<WTF::Vector<WebBluetoothRemoteGATTDescriptorPtr>> in_descriptors);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(WebBluetoothService_RemoteCharacteristicGetDescriptors_ProxyToResponder);
};

bool WebBluetoothService_RemoteCharacteristicGetDescriptors_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "blink::mojom::WebBluetoothService::RemoteCharacteristicGetDescriptorsCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::WebBluetoothService_RemoteCharacteristicGetDescriptors_ResponseParams_Data* params =
      reinterpret_cast<
          internal::WebBluetoothService_RemoteCharacteristicGetDescriptors_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  WebBluetoothResult p_result{};
  base::Optional<WTF::Vector<WebBluetoothRemoteGATTDescriptorPtr>> p_descriptors{};
  WebBluetoothService_RemoteCharacteristicGetDescriptors_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadResult(&p_result))
    success = false;
  if (!input_data_view.ReadDescriptors(&p_descriptors))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "WebBluetoothService::RemoteCharacteristicGetDescriptors response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_result), 
std::move(p_descriptors));
  return true;
}

void WebBluetoothService_RemoteCharacteristicGetDescriptors_ProxyToResponder::Run(
    WebBluetoothResult in_result, base::Optional<WTF::Vector<WebBluetoothRemoteGATTDescriptorPtr>> in_descriptors) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWebBluetoothService_RemoteCharacteristicGetDescriptors_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::WebBluetoothService_RemoteCharacteristicGetDescriptors_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::blink::mojom::WebBluetoothResult>(
      in_result, &params->result);
  typename decltype(params->descriptors)::BaseType::BufferWriter
      descriptors_writer;
  const mojo::internal::ContainerValidateParams descriptors_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::blink::mojom::WebBluetoothRemoteGATTDescriptorDataView>>(
      in_descriptors, buffer, &descriptors_writer, &descriptors_validate_params,
      &serialization_context);
  params->descriptors.Set(
      descriptors_writer.is_null() ? nullptr : descriptors_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::WebBluetoothService::RemoteCharacteristicGetDescriptorsCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class WebBluetoothService_RemoteDescriptorReadValue_ProxyToResponder {
 public:
  static WebBluetoothService::RemoteDescriptorReadValueCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<WebBluetoothService_RemoteDescriptorReadValue_ProxyToResponder> proxy(
        new WebBluetoothService_RemoteDescriptorReadValue_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&WebBluetoothService_RemoteDescriptorReadValue_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~WebBluetoothService_RemoteDescriptorReadValue_ProxyToResponder() {
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
  WebBluetoothService_RemoteDescriptorReadValue_ProxyToResponder(
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
        << "WebBluetoothService::RemoteDescriptorReadValueCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      WebBluetoothResult in_result, const base::Optional<WTF::Vector<uint8_t>>& in_value);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(WebBluetoothService_RemoteDescriptorReadValue_ProxyToResponder);
};

bool WebBluetoothService_RemoteDescriptorReadValue_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "blink::mojom::WebBluetoothService::RemoteDescriptorReadValueCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::WebBluetoothService_RemoteDescriptorReadValue_ResponseParams_Data* params =
      reinterpret_cast<
          internal::WebBluetoothService_RemoteDescriptorReadValue_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  WebBluetoothResult p_result{};
  base::Optional<WTF::Vector<uint8_t>> p_value{};
  WebBluetoothService_RemoteDescriptorReadValue_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadResult(&p_result))
    success = false;
  if (!input_data_view.ReadValue(&p_value))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "WebBluetoothService::RemoteDescriptorReadValue response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_result), 
std::move(p_value));
  return true;
}

void WebBluetoothService_RemoteDescriptorReadValue_ProxyToResponder::Run(
    WebBluetoothResult in_result, const base::Optional<WTF::Vector<uint8_t>>& in_value) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWebBluetoothService_RemoteDescriptorReadValue_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::WebBluetoothService_RemoteDescriptorReadValue_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::blink::mojom::WebBluetoothResult>(
      in_result, &params->result);
  typename decltype(params->value)::BaseType::BufferWriter
      value_writer;
  const mojo::internal::ContainerValidateParams value_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
      in_value, buffer, &value_writer, &value_validate_params,
      &serialization_context);
  params->value.Set(
      value_writer.is_null() ? nullptr : value_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::WebBluetoothService::RemoteDescriptorReadValueCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class WebBluetoothService_RemoteDescriptorWriteValue_ProxyToResponder {
 public:
  static WebBluetoothService::RemoteDescriptorWriteValueCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<WebBluetoothService_RemoteDescriptorWriteValue_ProxyToResponder> proxy(
        new WebBluetoothService_RemoteDescriptorWriteValue_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&WebBluetoothService_RemoteDescriptorWriteValue_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~WebBluetoothService_RemoteDescriptorWriteValue_ProxyToResponder() {
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
  WebBluetoothService_RemoteDescriptorWriteValue_ProxyToResponder(
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
        << "WebBluetoothService::RemoteDescriptorWriteValueCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      WebBluetoothResult in_result);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(WebBluetoothService_RemoteDescriptorWriteValue_ProxyToResponder);
};

bool WebBluetoothService_RemoteDescriptorWriteValue_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "blink::mojom::WebBluetoothService::RemoteDescriptorWriteValueCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::WebBluetoothService_RemoteDescriptorWriteValue_ResponseParams_Data* params =
      reinterpret_cast<
          internal::WebBluetoothService_RemoteDescriptorWriteValue_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  WebBluetoothResult p_result{};
  WebBluetoothService_RemoteDescriptorWriteValue_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadResult(&p_result))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "WebBluetoothService::RemoteDescriptorWriteValue response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_result));
  return true;
}

void WebBluetoothService_RemoteDescriptorWriteValue_ProxyToResponder::Run(
    WebBluetoothResult in_result) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWebBluetoothService_RemoteDescriptorWriteValue_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::WebBluetoothService_RemoteDescriptorWriteValue_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::blink::mojom::WebBluetoothResult>(
      in_result, &params->result);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::WebBluetoothService::RemoteDescriptorWriteValueCallback",
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
bool WebBluetoothServiceStubDispatch::Accept(
    WebBluetoothService* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kWebBluetoothService_RequestDevice_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::WebBluetoothService::RequestDevice",
               "message", message->name());
#endif
      break;
    }
    case internal::kWebBluetoothService_RemoteServerConnect_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::WebBluetoothService::RemoteServerConnect",
               "message", message->name());
#endif
      break;
    }
    case internal::kWebBluetoothService_RemoteServerDisconnect_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::WebBluetoothService::RemoteServerDisconnect",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WebBluetoothService_RemoteServerDisconnect_Params_Data* params =
          reinterpret_cast<internal::WebBluetoothService_RemoteServerDisconnect_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      WTF::String p_device_id{};
      WebBluetoothService_RemoteServerDisconnect_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadDeviceId(&p_device_id))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WebBluetoothService::RemoteServerDisconnect deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->RemoteServerDisconnect(
std::move(p_device_id));
      return true;
    }
    case internal::kWebBluetoothService_RemoteServerGetPrimaryServices_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::WebBluetoothService::RemoteServerGetPrimaryServices",
               "message", message->name());
#endif
      break;
    }
    case internal::kWebBluetoothService_RemoteServiceGetCharacteristics_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::WebBluetoothService::RemoteServiceGetCharacteristics",
               "message", message->name());
#endif
      break;
    }
    case internal::kWebBluetoothService_RemoteCharacteristicReadValue_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::WebBluetoothService::RemoteCharacteristicReadValue",
               "message", message->name());
#endif
      break;
    }
    case internal::kWebBluetoothService_RemoteCharacteristicWriteValue_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::WebBluetoothService::RemoteCharacteristicWriteValue",
               "message", message->name());
#endif
      break;
    }
    case internal::kWebBluetoothService_RemoteCharacteristicStartNotifications_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::WebBluetoothService::RemoteCharacteristicStartNotifications",
               "message", message->name());
#endif
      break;
    }
    case internal::kWebBluetoothService_RemoteCharacteristicStopNotifications_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::WebBluetoothService::RemoteCharacteristicStopNotifications",
               "message", message->name());
#endif
      break;
    }
    case internal::kWebBluetoothService_RemoteCharacteristicGetDescriptors_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::WebBluetoothService::RemoteCharacteristicGetDescriptors",
               "message", message->name());
#endif
      break;
    }
    case internal::kWebBluetoothService_RemoteDescriptorReadValue_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::WebBluetoothService::RemoteDescriptorReadValue",
               "message", message->name());
#endif
      break;
    }
    case internal::kWebBluetoothService_RemoteDescriptorWriteValue_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::WebBluetoothService::RemoteDescriptorWriteValue",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

// static
bool WebBluetoothServiceStubDispatch::AcceptWithResponder(
    WebBluetoothService* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kWebBluetoothService_RequestDevice_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::WebBluetoothService::RequestDevice",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::WebBluetoothService_RequestDevice_Params_Data* params =
          reinterpret_cast<
              internal::WebBluetoothService_RequestDevice_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      WebBluetoothRequestDeviceOptionsPtr p_options{};
      WebBluetoothService_RequestDevice_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadOptions(&p_options))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WebBluetoothService::RequestDevice deserializer");
        return false;
      }
      WebBluetoothService::RequestDeviceCallback callback =
          WebBluetoothService_RequestDevice_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->RequestDevice(
std::move(p_options), std::move(callback));
      return true;
    }
    case internal::kWebBluetoothService_RemoteServerConnect_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::WebBluetoothService::RemoteServerConnect",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::WebBluetoothService_RemoteServerConnect_Params_Data* params =
          reinterpret_cast<
              internal::WebBluetoothService_RemoteServerConnect_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      WTF::String p_device_id{};
      WebBluetoothServerClientAssociatedPtrInfo p_client{};
      WebBluetoothService_RemoteServerConnect_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadDeviceId(&p_device_id))
        success = false;
      p_client =
          input_data_view.TakeClient<decltype(p_client)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WebBluetoothService::RemoteServerConnect deserializer");
        return false;
      }
      WebBluetoothService::RemoteServerConnectCallback callback =
          WebBluetoothService_RemoteServerConnect_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->RemoteServerConnect(
std::move(p_device_id), 
std::move(p_client), std::move(callback));
      return true;
    }
    case internal::kWebBluetoothService_RemoteServerDisconnect_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::WebBluetoothService::RemoteServerDisconnect",
               "message", message->name());
#endif
      break;
    }
    case internal::kWebBluetoothService_RemoteServerGetPrimaryServices_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::WebBluetoothService::RemoteServerGetPrimaryServices",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::WebBluetoothService_RemoteServerGetPrimaryServices_Params_Data* params =
          reinterpret_cast<
              internal::WebBluetoothService_RemoteServerGetPrimaryServices_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      WTF::String p_device_id{};
      WebBluetoothGATTQueryQuantity p_quantity{};
      WTF::String p_services_uuid{};
      WebBluetoothService_RemoteServerGetPrimaryServices_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadDeviceId(&p_device_id))
        success = false;
      if (!input_data_view.ReadQuantity(&p_quantity))
        success = false;
      if (!input_data_view.ReadServicesUuid(&p_services_uuid))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WebBluetoothService::RemoteServerGetPrimaryServices deserializer");
        return false;
      }
      WebBluetoothService::RemoteServerGetPrimaryServicesCallback callback =
          WebBluetoothService_RemoteServerGetPrimaryServices_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->RemoteServerGetPrimaryServices(
std::move(p_device_id), 
std::move(p_quantity), 
std::move(p_services_uuid), std::move(callback));
      return true;
    }
    case internal::kWebBluetoothService_RemoteServiceGetCharacteristics_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::WebBluetoothService::RemoteServiceGetCharacteristics",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::WebBluetoothService_RemoteServiceGetCharacteristics_Params_Data* params =
          reinterpret_cast<
              internal::WebBluetoothService_RemoteServiceGetCharacteristics_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      WTF::String p_service_instance_id{};
      WebBluetoothGATTQueryQuantity p_quantity{};
      WTF::String p_characteristics_uuid{};
      WebBluetoothService_RemoteServiceGetCharacteristics_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadServiceInstanceId(&p_service_instance_id))
        success = false;
      if (!input_data_view.ReadQuantity(&p_quantity))
        success = false;
      if (!input_data_view.ReadCharacteristicsUuid(&p_characteristics_uuid))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WebBluetoothService::RemoteServiceGetCharacteristics deserializer");
        return false;
      }
      WebBluetoothService::RemoteServiceGetCharacteristicsCallback callback =
          WebBluetoothService_RemoteServiceGetCharacteristics_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->RemoteServiceGetCharacteristics(
std::move(p_service_instance_id), 
std::move(p_quantity), 
std::move(p_characteristics_uuid), std::move(callback));
      return true;
    }
    case internal::kWebBluetoothService_RemoteCharacteristicReadValue_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::WebBluetoothService::RemoteCharacteristicReadValue",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::WebBluetoothService_RemoteCharacteristicReadValue_Params_Data* params =
          reinterpret_cast<
              internal::WebBluetoothService_RemoteCharacteristicReadValue_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      WTF::String p_characteristic_instance_id{};
      WebBluetoothService_RemoteCharacteristicReadValue_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadCharacteristicInstanceId(&p_characteristic_instance_id))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WebBluetoothService::RemoteCharacteristicReadValue deserializer");
        return false;
      }
      WebBluetoothService::RemoteCharacteristicReadValueCallback callback =
          WebBluetoothService_RemoteCharacteristicReadValue_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->RemoteCharacteristicReadValue(
std::move(p_characteristic_instance_id), std::move(callback));
      return true;
    }
    case internal::kWebBluetoothService_RemoteCharacteristicWriteValue_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::WebBluetoothService::RemoteCharacteristicWriteValue",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::WebBluetoothService_RemoteCharacteristicWriteValue_Params_Data* params =
          reinterpret_cast<
              internal::WebBluetoothService_RemoteCharacteristicWriteValue_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      WTF::String p_characteristic_instance_id{};
      WTF::Vector<uint8_t> p_value{};
      WebBluetoothService_RemoteCharacteristicWriteValue_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadCharacteristicInstanceId(&p_characteristic_instance_id))
        success = false;
      if (!input_data_view.ReadValue(&p_value))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WebBluetoothService::RemoteCharacteristicWriteValue deserializer");
        return false;
      }
      WebBluetoothService::RemoteCharacteristicWriteValueCallback callback =
          WebBluetoothService_RemoteCharacteristicWriteValue_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->RemoteCharacteristicWriteValue(
std::move(p_characteristic_instance_id), 
std::move(p_value), std::move(callback));
      return true;
    }
    case internal::kWebBluetoothService_RemoteCharacteristicStartNotifications_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::WebBluetoothService::RemoteCharacteristicStartNotifications",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::WebBluetoothService_RemoteCharacteristicStartNotifications_Params_Data* params =
          reinterpret_cast<
              internal::WebBluetoothService_RemoteCharacteristicStartNotifications_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      WTF::String p_characteristic_instance_id{};
      WebBluetoothCharacteristicClientAssociatedPtrInfo p_client{};
      WebBluetoothService_RemoteCharacteristicStartNotifications_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadCharacteristicInstanceId(&p_characteristic_instance_id))
        success = false;
      p_client =
          input_data_view.TakeClient<decltype(p_client)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WebBluetoothService::RemoteCharacteristicStartNotifications deserializer");
        return false;
      }
      WebBluetoothService::RemoteCharacteristicStartNotificationsCallback callback =
          WebBluetoothService_RemoteCharacteristicStartNotifications_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->RemoteCharacteristicStartNotifications(
std::move(p_characteristic_instance_id), 
std::move(p_client), std::move(callback));
      return true;
    }
    case internal::kWebBluetoothService_RemoteCharacteristicStopNotifications_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::WebBluetoothService::RemoteCharacteristicStopNotifications",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::WebBluetoothService_RemoteCharacteristicStopNotifications_Params_Data* params =
          reinterpret_cast<
              internal::WebBluetoothService_RemoteCharacteristicStopNotifications_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      WTF::String p_characteristic_instance_id{};
      WebBluetoothService_RemoteCharacteristicStopNotifications_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadCharacteristicInstanceId(&p_characteristic_instance_id))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WebBluetoothService::RemoteCharacteristicStopNotifications deserializer");
        return false;
      }
      WebBluetoothService::RemoteCharacteristicStopNotificationsCallback callback =
          WebBluetoothService_RemoteCharacteristicStopNotifications_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->RemoteCharacteristicStopNotifications(
std::move(p_characteristic_instance_id), std::move(callback));
      return true;
    }
    case internal::kWebBluetoothService_RemoteCharacteristicGetDescriptors_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::WebBluetoothService::RemoteCharacteristicGetDescriptors",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::WebBluetoothService_RemoteCharacteristicGetDescriptors_Params_Data* params =
          reinterpret_cast<
              internal::WebBluetoothService_RemoteCharacteristicGetDescriptors_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      WTF::String p_characteristics_instance_id{};
      WebBluetoothGATTQueryQuantity p_quantity{};
      WTF::String p_descriptor_uuid{};
      WebBluetoothService_RemoteCharacteristicGetDescriptors_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadCharacteristicsInstanceId(&p_characteristics_instance_id))
        success = false;
      if (!input_data_view.ReadQuantity(&p_quantity))
        success = false;
      if (!input_data_view.ReadDescriptorUuid(&p_descriptor_uuid))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WebBluetoothService::RemoteCharacteristicGetDescriptors deserializer");
        return false;
      }
      WebBluetoothService::RemoteCharacteristicGetDescriptorsCallback callback =
          WebBluetoothService_RemoteCharacteristicGetDescriptors_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->RemoteCharacteristicGetDescriptors(
std::move(p_characteristics_instance_id), 
std::move(p_quantity), 
std::move(p_descriptor_uuid), std::move(callback));
      return true;
    }
    case internal::kWebBluetoothService_RemoteDescriptorReadValue_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::WebBluetoothService::RemoteDescriptorReadValue",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::WebBluetoothService_RemoteDescriptorReadValue_Params_Data* params =
          reinterpret_cast<
              internal::WebBluetoothService_RemoteDescriptorReadValue_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      WTF::String p_descriptor_instance_id{};
      WebBluetoothService_RemoteDescriptorReadValue_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadDescriptorInstanceId(&p_descriptor_instance_id))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WebBluetoothService::RemoteDescriptorReadValue deserializer");
        return false;
      }
      WebBluetoothService::RemoteDescriptorReadValueCallback callback =
          WebBluetoothService_RemoteDescriptorReadValue_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->RemoteDescriptorReadValue(
std::move(p_descriptor_instance_id), std::move(callback));
      return true;
    }
    case internal::kWebBluetoothService_RemoteDescriptorWriteValue_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::WebBluetoothService::RemoteDescriptorWriteValue",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::WebBluetoothService_RemoteDescriptorWriteValue_Params_Data* params =
          reinterpret_cast<
              internal::WebBluetoothService_RemoteDescriptorWriteValue_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      WTF::String p_descriptor_instance_id{};
      WTF::Vector<uint8_t> p_value{};
      WebBluetoothService_RemoteDescriptorWriteValue_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadDescriptorInstanceId(&p_descriptor_instance_id))
        success = false;
      if (!input_data_view.ReadValue(&p_value))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WebBluetoothService::RemoteDescriptorWriteValue deserializer");
        return false;
      }
      WebBluetoothService::RemoteDescriptorWriteValueCallback callback =
          WebBluetoothService_RemoteDescriptorWriteValue_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->RemoteDescriptorWriteValue(
std::move(p_descriptor_instance_id), 
std::move(p_value), std::move(callback));
      return true;
    }
  }
  return false;
}

bool WebBluetoothServiceRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "WebBluetoothService RequestValidator");

  switch (message->header()->name) {
    case internal::kWebBluetoothService_RequestDevice_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WebBluetoothService_RequestDevice_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWebBluetoothService_RemoteServerConnect_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WebBluetoothService_RemoteServerConnect_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWebBluetoothService_RemoteServerDisconnect_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WebBluetoothService_RemoteServerDisconnect_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWebBluetoothService_RemoteServerGetPrimaryServices_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WebBluetoothService_RemoteServerGetPrimaryServices_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWebBluetoothService_RemoteServiceGetCharacteristics_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WebBluetoothService_RemoteServiceGetCharacteristics_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWebBluetoothService_RemoteCharacteristicReadValue_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WebBluetoothService_RemoteCharacteristicReadValue_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWebBluetoothService_RemoteCharacteristicWriteValue_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WebBluetoothService_RemoteCharacteristicWriteValue_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWebBluetoothService_RemoteCharacteristicStartNotifications_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WebBluetoothService_RemoteCharacteristicStartNotifications_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWebBluetoothService_RemoteCharacteristicStopNotifications_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WebBluetoothService_RemoteCharacteristicStopNotifications_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWebBluetoothService_RemoteCharacteristicGetDescriptors_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WebBluetoothService_RemoteCharacteristicGetDescriptors_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWebBluetoothService_RemoteDescriptorReadValue_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WebBluetoothService_RemoteDescriptorReadValue_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWebBluetoothService_RemoteDescriptorWriteValue_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WebBluetoothService_RemoteDescriptorWriteValue_Params_Data>(
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

bool WebBluetoothServiceResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "WebBluetoothService ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kWebBluetoothService_RequestDevice_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::WebBluetoothService_RequestDevice_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWebBluetoothService_RemoteServerConnect_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::WebBluetoothService_RemoteServerConnect_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWebBluetoothService_RemoteServerGetPrimaryServices_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::WebBluetoothService_RemoteServerGetPrimaryServices_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWebBluetoothService_RemoteServiceGetCharacteristics_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::WebBluetoothService_RemoteServiceGetCharacteristics_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWebBluetoothService_RemoteCharacteristicReadValue_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::WebBluetoothService_RemoteCharacteristicReadValue_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWebBluetoothService_RemoteCharacteristicWriteValue_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::WebBluetoothService_RemoteCharacteristicWriteValue_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWebBluetoothService_RemoteCharacteristicStartNotifications_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::WebBluetoothService_RemoteCharacteristicStartNotifications_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWebBluetoothService_RemoteCharacteristicStopNotifications_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::WebBluetoothService_RemoteCharacteristicStopNotifications_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWebBluetoothService_RemoteCharacteristicGetDescriptors_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::WebBluetoothService_RemoteCharacteristicGetDescriptors_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWebBluetoothService_RemoteDescriptorReadValue_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::WebBluetoothService_RemoteDescriptorReadValue_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWebBluetoothService_RemoteDescriptorWriteValue_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::WebBluetoothService_RemoteDescriptorWriteValue_ResponseParams_Data>(
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
void WebBluetoothServiceInterceptorForTesting::RequestDevice(WebBluetoothRequestDeviceOptionsPtr options, RequestDeviceCallback callback) {
  GetForwardingInterface()->RequestDevice(std::move(options), std::move(callback));
}
void WebBluetoothServiceInterceptorForTesting::RemoteServerConnect(const WTF::String& device_id, WebBluetoothServerClientAssociatedPtrInfo client, RemoteServerConnectCallback callback) {
  GetForwardingInterface()->RemoteServerConnect(std::move(device_id), std::move(client), std::move(callback));
}
void WebBluetoothServiceInterceptorForTesting::RemoteServerDisconnect(const WTF::String& device_id) {
  GetForwardingInterface()->RemoteServerDisconnect(std::move(device_id));
}
void WebBluetoothServiceInterceptorForTesting::RemoteServerGetPrimaryServices(const WTF::String& device_id, WebBluetoothGATTQueryQuantity quantity, const WTF::String& services_uuid, RemoteServerGetPrimaryServicesCallback callback) {
  GetForwardingInterface()->RemoteServerGetPrimaryServices(std::move(device_id), std::move(quantity), std::move(services_uuid), std::move(callback));
}
void WebBluetoothServiceInterceptorForTesting::RemoteServiceGetCharacteristics(const WTF::String& service_instance_id, WebBluetoothGATTQueryQuantity quantity, const WTF::String& characteristics_uuid, RemoteServiceGetCharacteristicsCallback callback) {
  GetForwardingInterface()->RemoteServiceGetCharacteristics(std::move(service_instance_id), std::move(quantity), std::move(characteristics_uuid), std::move(callback));
}
void WebBluetoothServiceInterceptorForTesting::RemoteCharacteristicReadValue(const WTF::String& characteristic_instance_id, RemoteCharacteristicReadValueCallback callback) {
  GetForwardingInterface()->RemoteCharacteristicReadValue(std::move(characteristic_instance_id), std::move(callback));
}
void WebBluetoothServiceInterceptorForTesting::RemoteCharacteristicWriteValue(const WTF::String& characteristic_instance_id, const WTF::Vector<uint8_t>& value, RemoteCharacteristicWriteValueCallback callback) {
  GetForwardingInterface()->RemoteCharacteristicWriteValue(std::move(characteristic_instance_id), std::move(value), std::move(callback));
}
void WebBluetoothServiceInterceptorForTesting::RemoteCharacteristicStartNotifications(const WTF::String& characteristic_instance_id, WebBluetoothCharacteristicClientAssociatedPtrInfo client, RemoteCharacteristicStartNotificationsCallback callback) {
  GetForwardingInterface()->RemoteCharacteristicStartNotifications(std::move(characteristic_instance_id), std::move(client), std::move(callback));
}
void WebBluetoothServiceInterceptorForTesting::RemoteCharacteristicStopNotifications(const WTF::String& characteristic_instance_id, RemoteCharacteristicStopNotificationsCallback callback) {
  GetForwardingInterface()->RemoteCharacteristicStopNotifications(std::move(characteristic_instance_id), std::move(callback));
}
void WebBluetoothServiceInterceptorForTesting::RemoteCharacteristicGetDescriptors(const WTF::String& characteristics_instance_id, WebBluetoothGATTQueryQuantity quantity, const WTF::String& descriptor_uuid, RemoteCharacteristicGetDescriptorsCallback callback) {
  GetForwardingInterface()->RemoteCharacteristicGetDescriptors(std::move(characteristics_instance_id), std::move(quantity), std::move(descriptor_uuid), std::move(callback));
}
void WebBluetoothServiceInterceptorForTesting::RemoteDescriptorReadValue(const WTF::String& descriptor_instance_id, RemoteDescriptorReadValueCallback callback) {
  GetForwardingInterface()->RemoteDescriptorReadValue(std::move(descriptor_instance_id), std::move(callback));
}
void WebBluetoothServiceInterceptorForTesting::RemoteDescriptorWriteValue(const WTF::String& descriptor_instance_id, const WTF::Vector<uint8_t>& value, RemoteDescriptorWriteValueCallback callback) {
  GetForwardingInterface()->RemoteDescriptorWriteValue(std::move(descriptor_instance_id), std::move(value), std::move(callback));
}
WebBluetoothServiceAsyncWaiter::WebBluetoothServiceAsyncWaiter(
    WebBluetoothService* proxy) : proxy_(proxy) {}

WebBluetoothServiceAsyncWaiter::~WebBluetoothServiceAsyncWaiter() = default;

void WebBluetoothServiceAsyncWaiter::RequestDevice(
    WebBluetoothRequestDeviceOptionsPtr options, WebBluetoothResult* out_result, WebBluetoothDevicePtr* out_device) {
  base::RunLoop loop;
  proxy_->RequestDevice(std::move(options),
      base::BindOnce(
          [](base::RunLoop* loop,
             WebBluetoothResult* out_result
,
             WebBluetoothDevicePtr* out_device
,
             WebBluetoothResult result,
             WebBluetoothDevicePtr device) {*out_result = std::move(result);*out_device = std::move(device);
            loop->Quit();
          },
          &loop,
          out_result,
          out_device));
  loop.Run();
}
void WebBluetoothServiceAsyncWaiter::RemoteServerConnect(
    const WTF::String& device_id, WebBluetoothServerClientAssociatedPtrInfo client, WebBluetoothResult* out_result) {
  base::RunLoop loop;
  proxy_->RemoteServerConnect(std::move(device_id),std::move(client),
      base::BindOnce(
          [](base::RunLoop* loop,
             WebBluetoothResult* out_result
,
             WebBluetoothResult result) {*out_result = std::move(result);
            loop->Quit();
          },
          &loop,
          out_result));
  loop.Run();
}
void WebBluetoothServiceAsyncWaiter::RemoteServerGetPrimaryServices(
    const WTF::String& device_id, WebBluetoothGATTQueryQuantity quantity, const WTF::String& services_uuid, WebBluetoothResult* out_result, base::Optional<WTF::Vector<WebBluetoothRemoteGATTServicePtr>>* out_services) {
  base::RunLoop loop;
  proxy_->RemoteServerGetPrimaryServices(std::move(device_id),std::move(quantity),std::move(services_uuid),
      base::BindOnce(
          [](base::RunLoop* loop,
             WebBluetoothResult* out_result
,
             base::Optional<WTF::Vector<WebBluetoothRemoteGATTServicePtr>>* out_services
,
             WebBluetoothResult result,
             base::Optional<WTF::Vector<WebBluetoothRemoteGATTServicePtr>> services) {*out_result = std::move(result);*out_services = std::move(services);
            loop->Quit();
          },
          &loop,
          out_result,
          out_services));
  loop.Run();
}
void WebBluetoothServiceAsyncWaiter::RemoteServiceGetCharacteristics(
    const WTF::String& service_instance_id, WebBluetoothGATTQueryQuantity quantity, const WTF::String& characteristics_uuid, WebBluetoothResult* out_result, base::Optional<WTF::Vector<WebBluetoothRemoteGATTCharacteristicPtr>>* out_characteristics) {
  base::RunLoop loop;
  proxy_->RemoteServiceGetCharacteristics(std::move(service_instance_id),std::move(quantity),std::move(characteristics_uuid),
      base::BindOnce(
          [](base::RunLoop* loop,
             WebBluetoothResult* out_result
,
             base::Optional<WTF::Vector<WebBluetoothRemoteGATTCharacteristicPtr>>* out_characteristics
,
             WebBluetoothResult result,
             base::Optional<WTF::Vector<WebBluetoothRemoteGATTCharacteristicPtr>> characteristics) {*out_result = std::move(result);*out_characteristics = std::move(characteristics);
            loop->Quit();
          },
          &loop,
          out_result,
          out_characteristics));
  loop.Run();
}
void WebBluetoothServiceAsyncWaiter::RemoteCharacteristicReadValue(
    const WTF::String& characteristic_instance_id, WebBluetoothResult* out_result, base::Optional<WTF::Vector<uint8_t>>* out_value) {
  base::RunLoop loop;
  proxy_->RemoteCharacteristicReadValue(std::move(characteristic_instance_id),
      base::BindOnce(
          [](base::RunLoop* loop,
             WebBluetoothResult* out_result
,
             base::Optional<WTF::Vector<uint8_t>>* out_value
,
             WebBluetoothResult result,
             const base::Optional<WTF::Vector<uint8_t>>& value) {*out_result = std::move(result);*out_value = std::move(value);
            loop->Quit();
          },
          &loop,
          out_result,
          out_value));
  loop.Run();
}
void WebBluetoothServiceAsyncWaiter::RemoteCharacteristicWriteValue(
    const WTF::String& characteristic_instance_id, const WTF::Vector<uint8_t>& value, WebBluetoothResult* out_result) {
  base::RunLoop loop;
  proxy_->RemoteCharacteristicWriteValue(std::move(characteristic_instance_id),std::move(value),
      base::BindOnce(
          [](base::RunLoop* loop,
             WebBluetoothResult* out_result
,
             WebBluetoothResult result) {*out_result = std::move(result);
            loop->Quit();
          },
          &loop,
          out_result));
  loop.Run();
}
void WebBluetoothServiceAsyncWaiter::RemoteCharacteristicStartNotifications(
    const WTF::String& characteristic_instance_id, WebBluetoothCharacteristicClientAssociatedPtrInfo client, WebBluetoothResult* out_result) {
  base::RunLoop loop;
  proxy_->RemoteCharacteristicStartNotifications(std::move(characteristic_instance_id),std::move(client),
      base::BindOnce(
          [](base::RunLoop* loop,
             WebBluetoothResult* out_result
,
             WebBluetoothResult result) {*out_result = std::move(result);
            loop->Quit();
          },
          &loop,
          out_result));
  loop.Run();
}
void WebBluetoothServiceAsyncWaiter::RemoteCharacteristicStopNotifications(
    const WTF::String& characteristic_instance_id) {
  base::RunLoop loop;
  proxy_->RemoteCharacteristicStopNotifications(std::move(characteristic_instance_id),
      base::BindOnce(
          [](base::RunLoop* loop) {
            loop->Quit();
          },
          &loop));
  loop.Run();
}
void WebBluetoothServiceAsyncWaiter::RemoteCharacteristicGetDescriptors(
    const WTF::String& characteristics_instance_id, WebBluetoothGATTQueryQuantity quantity, const WTF::String& descriptor_uuid, WebBluetoothResult* out_result, base::Optional<WTF::Vector<WebBluetoothRemoteGATTDescriptorPtr>>* out_descriptors) {
  base::RunLoop loop;
  proxy_->RemoteCharacteristicGetDescriptors(std::move(characteristics_instance_id),std::move(quantity),std::move(descriptor_uuid),
      base::BindOnce(
          [](base::RunLoop* loop,
             WebBluetoothResult* out_result
,
             base::Optional<WTF::Vector<WebBluetoothRemoteGATTDescriptorPtr>>* out_descriptors
,
             WebBluetoothResult result,
             base::Optional<WTF::Vector<WebBluetoothRemoteGATTDescriptorPtr>> descriptors) {*out_result = std::move(result);*out_descriptors = std::move(descriptors);
            loop->Quit();
          },
          &loop,
          out_result,
          out_descriptors));
  loop.Run();
}
void WebBluetoothServiceAsyncWaiter::RemoteDescriptorReadValue(
    const WTF::String& descriptor_instance_id, WebBluetoothResult* out_result, base::Optional<WTF::Vector<uint8_t>>* out_value) {
  base::RunLoop loop;
  proxy_->RemoteDescriptorReadValue(std::move(descriptor_instance_id),
      base::BindOnce(
          [](base::RunLoop* loop,
             WebBluetoothResult* out_result
,
             base::Optional<WTF::Vector<uint8_t>>* out_value
,
             WebBluetoothResult result,
             const base::Optional<WTF::Vector<uint8_t>>& value) {*out_result = std::move(result);*out_value = std::move(value);
            loop->Quit();
          },
          &loop,
          out_result,
          out_value));
  loop.Run();
}
void WebBluetoothServiceAsyncWaiter::RemoteDescriptorWriteValue(
    const WTF::String& descriptor_instance_id, const WTF::Vector<uint8_t>& value, WebBluetoothResult* out_result) {
  base::RunLoop loop;
  proxy_->RemoteDescriptorWriteValue(std::move(descriptor_instance_id),std::move(value),
      base::BindOnce(
          [](base::RunLoop* loop,
             WebBluetoothResult* out_result
,
             WebBluetoothResult result) {*out_result = std::move(result);
            loop->Quit();
          },
          &loop,
          out_result));
  loop.Run();
}

const char WebBluetoothServerClient::Name_[] = "blink.mojom.WebBluetoothServerClient";

WebBluetoothServerClientProxy::WebBluetoothServerClientProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void WebBluetoothServerClientProxy::GATTServerDisconnected(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "blink::mojom::WebBluetoothServerClient::GATTServerDisconnected");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWebBluetoothServerClient_GATTServerDisconnected_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::WebBluetoothServerClient_GATTServerDisconnected_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool WebBluetoothServerClientStubDispatch::Accept(
    WebBluetoothServerClient* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kWebBluetoothServerClient_GATTServerDisconnected_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::WebBluetoothServerClient::GATTServerDisconnected",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WebBluetoothServerClient_GATTServerDisconnected_Params_Data* params =
          reinterpret_cast<internal::WebBluetoothServerClient_GATTServerDisconnected_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      WebBluetoothServerClient_GATTServerDisconnected_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WebBluetoothServerClient::GATTServerDisconnected deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->GATTServerDisconnected();
      return true;
    }
  }
  return false;
}

// static
bool WebBluetoothServerClientStubDispatch::AcceptWithResponder(
    WebBluetoothServerClient* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kWebBluetoothServerClient_GATTServerDisconnected_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::WebBluetoothServerClient::GATTServerDisconnected",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool WebBluetoothServerClientRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "WebBluetoothServerClient RequestValidator");

  switch (message->header()->name) {
    case internal::kWebBluetoothServerClient_GATTServerDisconnected_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WebBluetoothServerClient_GATTServerDisconnected_Params_Data>(
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

void WebBluetoothServerClientInterceptorForTesting::GATTServerDisconnected() {
  GetForwardingInterface()->GATTServerDisconnected();
}
WebBluetoothServerClientAsyncWaiter::WebBluetoothServerClientAsyncWaiter(
    WebBluetoothServerClient* proxy) : proxy_(proxy) {}

WebBluetoothServerClientAsyncWaiter::~WebBluetoothServerClientAsyncWaiter() = default;


const char WebBluetoothCharacteristicClient::Name_[] = "blink.mojom.WebBluetoothCharacteristicClient";

WebBluetoothCharacteristicClientProxy::WebBluetoothCharacteristicClientProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void WebBluetoothCharacteristicClientProxy::RemoteCharacteristicValueChanged(
    const WTF::Vector<uint8_t>& in_value) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "blink::mojom::WebBluetoothCharacteristicClient::RemoteCharacteristicValueChanged");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWebBluetoothCharacteristicClient_RemoteCharacteristicValueChanged_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::WebBluetoothCharacteristicClient_RemoteCharacteristicValueChanged_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->value)::BaseType::BufferWriter
      value_writer;
  const mojo::internal::ContainerValidateParams value_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
      in_value, buffer, &value_writer, &value_validate_params,
      &serialization_context);
  params->value.Set(
      value_writer.is_null() ? nullptr : value_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->value.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null value in WebBluetoothCharacteristicClient.RemoteCharacteristicValueChanged request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool WebBluetoothCharacteristicClientStubDispatch::Accept(
    WebBluetoothCharacteristicClient* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kWebBluetoothCharacteristicClient_RemoteCharacteristicValueChanged_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::WebBluetoothCharacteristicClient::RemoteCharacteristicValueChanged",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WebBluetoothCharacteristicClient_RemoteCharacteristicValueChanged_Params_Data* params =
          reinterpret_cast<internal::WebBluetoothCharacteristicClient_RemoteCharacteristicValueChanged_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      WTF::Vector<uint8_t> p_value{};
      WebBluetoothCharacteristicClient_RemoteCharacteristicValueChanged_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadValue(&p_value))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WebBluetoothCharacteristicClient::RemoteCharacteristicValueChanged deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->RemoteCharacteristicValueChanged(
std::move(p_value));
      return true;
    }
  }
  return false;
}

// static
bool WebBluetoothCharacteristicClientStubDispatch::AcceptWithResponder(
    WebBluetoothCharacteristicClient* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kWebBluetoothCharacteristicClient_RemoteCharacteristicValueChanged_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::WebBluetoothCharacteristicClient::RemoteCharacteristicValueChanged",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool WebBluetoothCharacteristicClientRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "WebBluetoothCharacteristicClient RequestValidator");

  switch (message->header()->name) {
    case internal::kWebBluetoothCharacteristicClient_RemoteCharacteristicValueChanged_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WebBluetoothCharacteristicClient_RemoteCharacteristicValueChanged_Params_Data>(
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

void WebBluetoothCharacteristicClientInterceptorForTesting::RemoteCharacteristicValueChanged(const WTF::Vector<uint8_t>& value) {
  GetForwardingInterface()->RemoteCharacteristicValueChanged(std::move(value));
}
WebBluetoothCharacteristicClientAsyncWaiter::WebBluetoothCharacteristicClientAsyncWaiter(
    WebBluetoothCharacteristicClient* proxy) : proxy_(proxy) {}

WebBluetoothCharacteristicClientAsyncWaiter::~WebBluetoothCharacteristicClientAsyncWaiter() = default;


}  // namespace blink
}  // namespace mojom
}  // namespace blink

namespace mojo {


// static
bool StructTraits<::blink::mojom::blink::WebBluetoothLeScanFilter::DataView, ::blink::mojom::blink::WebBluetoothLeScanFilterPtr>::Read(
    ::blink::mojom::blink::WebBluetoothLeScanFilter::DataView input,
    ::blink::mojom::blink::WebBluetoothLeScanFilterPtr* output) {
  bool success = true;
  ::blink::mojom::blink::WebBluetoothLeScanFilterPtr result(::blink::mojom::blink::WebBluetoothLeScanFilter::New());
  
      if (!input.ReadServices(&result->services))
        success = false;
      if (!input.ReadName(&result->name))
        success = false;
      if (!input.ReadNamePrefix(&result->name_prefix))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::blink::mojom::blink::WebBluetoothRequestDeviceOptions::DataView, ::blink::mojom::blink::WebBluetoothRequestDeviceOptionsPtr>::Read(
    ::blink::mojom::blink::WebBluetoothRequestDeviceOptions::DataView input,
    ::blink::mojom::blink::WebBluetoothRequestDeviceOptionsPtr* output) {
  bool success = true;
  ::blink::mojom::blink::WebBluetoothRequestDeviceOptionsPtr result(::blink::mojom::blink::WebBluetoothRequestDeviceOptions::New());
  
      if (!input.ReadFilters(&result->filters))
        success = false;
      if (!input.ReadOptionalServices(&result->optional_services))
        success = false;
      result->accept_all_devices = input.accept_all_devices();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::blink::mojom::blink::WebBluetoothDeviceId::DataView, ::blink::mojom::blink::WebBluetoothDeviceIdPtr>::Read(
    ::blink::mojom::blink::WebBluetoothDeviceId::DataView input,
    ::blink::mojom::blink::WebBluetoothDeviceIdPtr* output) {
  bool success = true;
  ::blink::mojom::blink::WebBluetoothDeviceIdPtr result(::blink::mojom::blink::WebBluetoothDeviceId::New());
  
      if (!input.ReadDeviceId(&result->device_id))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::blink::mojom::blink::WebBluetoothDevice::DataView, ::blink::mojom::blink::WebBluetoothDevicePtr>::Read(
    ::blink::mojom::blink::WebBluetoothDevice::DataView input,
    ::blink::mojom::blink::WebBluetoothDevicePtr* output) {
  bool success = true;
  ::blink::mojom::blink::WebBluetoothDevicePtr result(::blink::mojom::blink::WebBluetoothDevice::New());
  
      if (!input.ReadId(&result->id))
        success = false;
      if (!input.ReadName(&result->name))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::blink::mojom::blink::WebBluetoothRemoteGATTService::DataView, ::blink::mojom::blink::WebBluetoothRemoteGATTServicePtr>::Read(
    ::blink::mojom::blink::WebBluetoothRemoteGATTService::DataView input,
    ::blink::mojom::blink::WebBluetoothRemoteGATTServicePtr* output) {
  bool success = true;
  ::blink::mojom::blink::WebBluetoothRemoteGATTServicePtr result(::blink::mojom::blink::WebBluetoothRemoteGATTService::New());
  
      if (!input.ReadInstanceId(&result->instance_id))
        success = false;
      if (!input.ReadUuid(&result->uuid))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::blink::mojom::blink::WebBluetoothRemoteGATTCharacteristic::DataView, ::blink::mojom::blink::WebBluetoothRemoteGATTCharacteristicPtr>::Read(
    ::blink::mojom::blink::WebBluetoothRemoteGATTCharacteristic::DataView input,
    ::blink::mojom::blink::WebBluetoothRemoteGATTCharacteristicPtr* output) {
  bool success = true;
  ::blink::mojom::blink::WebBluetoothRemoteGATTCharacteristicPtr result(::blink::mojom::blink::WebBluetoothRemoteGATTCharacteristic::New());
  
      if (!input.ReadInstanceId(&result->instance_id))
        success = false;
      if (!input.ReadUuid(&result->uuid))
        success = false;
      result->properties = input.properties();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::blink::mojom::blink::WebBluetoothRemoteGATTDescriptor::DataView, ::blink::mojom::blink::WebBluetoothRemoteGATTDescriptorPtr>::Read(
    ::blink::mojom::blink::WebBluetoothRemoteGATTDescriptor::DataView input,
    ::blink::mojom::blink::WebBluetoothRemoteGATTDescriptorPtr* output) {
  bool success = true;
  ::blink::mojom::blink::WebBluetoothRemoteGATTDescriptorPtr result(::blink::mojom::blink::WebBluetoothRemoteGATTDescriptor::New());
  
      if (!input.ReadInstanceId(&result->instance_id))
        success = false;
      if (!input.ReadUuid(&result->uuid))
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