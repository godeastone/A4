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

#include "device/bluetooth/public/mojom/device.mojom.h"

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

#include "device/bluetooth/public/mojom/device.mojom-shared-message-ids.h"
#include "device/bluetooth/public/mojom/uuid_mojom_traits.h"
namespace bluetooth {
namespace mojom {
RSSIWrapper::RSSIWrapper()
    : value() {}

RSSIWrapper::RSSIWrapper(
    int8_t value_in)
    : value(std::move(value_in)) {}

RSSIWrapper::~RSSIWrapper() = default;
size_t RSSIWrapper::Hash(size_t seed) const {
  seed = mojo::internal::Hash(seed, this->value);
  return seed;
}

bool RSSIWrapper::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
DeviceInfo::DeviceInfo()
    : name(),
      name_for_display(),
      address(),
      is_gatt_connected(),
      rssi() {}

DeviceInfo::DeviceInfo(
    const base::Optional<std::string>& name_in,
    const std::string& name_for_display_in,
    const std::string& address_in,
    bool is_gatt_connected_in,
    RSSIWrapperPtr rssi_in)
    : name(std::move(name_in)),
      name_for_display(std::move(name_for_display_in)),
      address(std::move(address_in)),
      is_gatt_connected(std::move(is_gatt_connected_in)),
      rssi(std::move(rssi_in)) {}

DeviceInfo::~DeviceInfo() = default;

bool DeviceInfo::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
ServiceInfo::ServiceInfo()
    : id(),
      uuid(),
      is_primary() {}

ServiceInfo::ServiceInfo(
    const std::string& id_in,
    const device::BluetoothUUID& uuid_in,
    bool is_primary_in)
    : id(std::move(id_in)),
      uuid(std::move(uuid_in)),
      is_primary(std::move(is_primary_in)) {}

ServiceInfo::~ServiceInfo() = default;

bool ServiceInfo::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
CharacteristicInfo::CharacteristicInfo()
    : id(),
      uuid(),
      properties(),
      last_known_value() {}

CharacteristicInfo::CharacteristicInfo(
    const std::string& id_in,
    const device::BluetoothUUID& uuid_in,
    uint32_t properties_in,
    const std::vector<uint8_t>& last_known_value_in)
    : id(std::move(id_in)),
      uuid(std::move(uuid_in)),
      properties(std::move(properties_in)),
      last_known_value(std::move(last_known_value_in)) {}

CharacteristicInfo::~CharacteristicInfo() = default;

bool CharacteristicInfo::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
DescriptorInfo::DescriptorInfo()
    : id(),
      uuid(),
      last_known_value() {}

DescriptorInfo::DescriptorInfo(
    const std::string& id_in,
    const device::BluetoothUUID& uuid_in,
    const std::vector<uint8_t>& last_known_value_in)
    : id(std::move(id_in)),
      uuid(std::move(uuid_in)),
      last_known_value(std::move(last_known_value_in)) {}

DescriptorInfo::~DescriptorInfo() = default;

bool DescriptorInfo::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
const char Device::Name_[] = "bluetooth.mojom.Device";

class Device_GetInfo_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  Device_GetInfo_ForwardToCallback(
      Device::GetInfoCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  Device::GetInfoCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(Device_GetInfo_ForwardToCallback);
};

class Device_GetServices_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  Device_GetServices_ForwardToCallback(
      Device::GetServicesCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  Device::GetServicesCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(Device_GetServices_ForwardToCallback);
};

class Device_GetCharacteristics_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  Device_GetCharacteristics_ForwardToCallback(
      Device::GetCharacteristicsCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  Device::GetCharacteristicsCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(Device_GetCharacteristics_ForwardToCallback);
};

class Device_ReadValueForCharacteristic_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  Device_ReadValueForCharacteristic_ForwardToCallback(
      Device::ReadValueForCharacteristicCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  Device::ReadValueForCharacteristicCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(Device_ReadValueForCharacteristic_ForwardToCallback);
};

class Device_WriteValueForCharacteristic_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  Device_WriteValueForCharacteristic_ForwardToCallback(
      Device::WriteValueForCharacteristicCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  Device::WriteValueForCharacteristicCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(Device_WriteValueForCharacteristic_ForwardToCallback);
};

class Device_GetDescriptors_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  Device_GetDescriptors_ForwardToCallback(
      Device::GetDescriptorsCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  Device::GetDescriptorsCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(Device_GetDescriptors_ForwardToCallback);
};

class Device_ReadValueForDescriptor_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  Device_ReadValueForDescriptor_ForwardToCallback(
      Device::ReadValueForDescriptorCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  Device::ReadValueForDescriptorCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(Device_ReadValueForDescriptor_ForwardToCallback);
};

class Device_WriteValueForDescriptor_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  Device_WriteValueForDescriptor_ForwardToCallback(
      Device::WriteValueForDescriptorCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  Device::WriteValueForDescriptorCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(Device_WriteValueForDescriptor_ForwardToCallback);
};

DeviceProxy::DeviceProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void DeviceProxy::Disconnect(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "bluetooth::mojom::Device::Disconnect");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kDevice_Disconnect_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::bluetooth::mojom::internal::Device_Disconnect_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void DeviceProxy::GetInfo(
    GetInfoCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "bluetooth::mojom::Device::GetInfo");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kDevice_GetInfo_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::bluetooth::mojom::internal::Device_GetInfo_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new Device_GetInfo_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void DeviceProxy::GetServices(
    GetServicesCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "bluetooth::mojom::Device::GetServices");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kDevice_GetServices_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::bluetooth::mojom::internal::Device_GetServices_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new Device_GetServices_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void DeviceProxy::GetCharacteristics(
    const std::string& in_service_id, GetCharacteristicsCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "bluetooth::mojom::Device::GetCharacteristics");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kDevice_GetCharacteristics_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::bluetooth::mojom::internal::Device_GetCharacteristics_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->service_id)::BaseType::BufferWriter
      service_id_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_service_id, buffer, &service_id_writer, &serialization_context);
  params->service_id.Set(
      service_id_writer.is_null() ? nullptr : service_id_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->service_id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null service_id in Device.GetCharacteristics request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new Device_GetCharacteristics_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void DeviceProxy::ReadValueForCharacteristic(
    const std::string& in_service_id, const std::string& in_characteristic_id, ReadValueForCharacteristicCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "bluetooth::mojom::Device::ReadValueForCharacteristic");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kDevice_ReadValueForCharacteristic_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::bluetooth::mojom::internal::Device_ReadValueForCharacteristic_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->service_id)::BaseType::BufferWriter
      service_id_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_service_id, buffer, &service_id_writer, &serialization_context);
  params->service_id.Set(
      service_id_writer.is_null() ? nullptr : service_id_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->service_id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null service_id in Device.ReadValueForCharacteristic request");
  typename decltype(params->characteristic_id)::BaseType::BufferWriter
      characteristic_id_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_characteristic_id, buffer, &characteristic_id_writer, &serialization_context);
  params->characteristic_id.Set(
      characteristic_id_writer.is_null() ? nullptr : characteristic_id_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->characteristic_id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null characteristic_id in Device.ReadValueForCharacteristic request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new Device_ReadValueForCharacteristic_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void DeviceProxy::WriteValueForCharacteristic(
    const std::string& in_service_id, const std::string& in_characteristic_id, const std::vector<uint8_t>& in_value, WriteValueForCharacteristicCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "bluetooth::mojom::Device::WriteValueForCharacteristic");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kDevice_WriteValueForCharacteristic_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::bluetooth::mojom::internal::Device_WriteValueForCharacteristic_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->service_id)::BaseType::BufferWriter
      service_id_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_service_id, buffer, &service_id_writer, &serialization_context);
  params->service_id.Set(
      service_id_writer.is_null() ? nullptr : service_id_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->service_id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null service_id in Device.WriteValueForCharacteristic request");
  typename decltype(params->characteristic_id)::BaseType::BufferWriter
      characteristic_id_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_characteristic_id, buffer, &characteristic_id_writer, &serialization_context);
  params->characteristic_id.Set(
      characteristic_id_writer.is_null() ? nullptr : characteristic_id_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->characteristic_id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null characteristic_id in Device.WriteValueForCharacteristic request");
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
      "null value in Device.WriteValueForCharacteristic request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new Device_WriteValueForCharacteristic_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void DeviceProxy::GetDescriptors(
    const std::string& in_service_id, const std::string& in_characteristic_id, GetDescriptorsCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "bluetooth::mojom::Device::GetDescriptors");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kDevice_GetDescriptors_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::bluetooth::mojom::internal::Device_GetDescriptors_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->service_id)::BaseType::BufferWriter
      service_id_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_service_id, buffer, &service_id_writer, &serialization_context);
  params->service_id.Set(
      service_id_writer.is_null() ? nullptr : service_id_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->service_id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null service_id in Device.GetDescriptors request");
  typename decltype(params->characteristic_id)::BaseType::BufferWriter
      characteristic_id_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_characteristic_id, buffer, &characteristic_id_writer, &serialization_context);
  params->characteristic_id.Set(
      characteristic_id_writer.is_null() ? nullptr : characteristic_id_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->characteristic_id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null characteristic_id in Device.GetDescriptors request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new Device_GetDescriptors_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void DeviceProxy::ReadValueForDescriptor(
    const std::string& in_service_id, const std::string& in_characteristic_id, const std::string& in_descriptor_id, ReadValueForDescriptorCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "bluetooth::mojom::Device::ReadValueForDescriptor");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kDevice_ReadValueForDescriptor_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::bluetooth::mojom::internal::Device_ReadValueForDescriptor_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->service_id)::BaseType::BufferWriter
      service_id_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_service_id, buffer, &service_id_writer, &serialization_context);
  params->service_id.Set(
      service_id_writer.is_null() ? nullptr : service_id_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->service_id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null service_id in Device.ReadValueForDescriptor request");
  typename decltype(params->characteristic_id)::BaseType::BufferWriter
      characteristic_id_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_characteristic_id, buffer, &characteristic_id_writer, &serialization_context);
  params->characteristic_id.Set(
      characteristic_id_writer.is_null() ? nullptr : characteristic_id_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->characteristic_id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null characteristic_id in Device.ReadValueForDescriptor request");
  typename decltype(params->descriptor_id)::BaseType::BufferWriter
      descriptor_id_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_descriptor_id, buffer, &descriptor_id_writer, &serialization_context);
  params->descriptor_id.Set(
      descriptor_id_writer.is_null() ? nullptr : descriptor_id_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->descriptor_id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null descriptor_id in Device.ReadValueForDescriptor request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new Device_ReadValueForDescriptor_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void DeviceProxy::WriteValueForDescriptor(
    const std::string& in_service_id, const std::string& in_characteristic_id, const std::string& in_descriptor_id, const std::vector<uint8_t>& in_value, WriteValueForDescriptorCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "bluetooth::mojom::Device::WriteValueForDescriptor");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kDevice_WriteValueForDescriptor_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::bluetooth::mojom::internal::Device_WriteValueForDescriptor_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->service_id)::BaseType::BufferWriter
      service_id_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_service_id, buffer, &service_id_writer, &serialization_context);
  params->service_id.Set(
      service_id_writer.is_null() ? nullptr : service_id_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->service_id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null service_id in Device.WriteValueForDescriptor request");
  typename decltype(params->characteristic_id)::BaseType::BufferWriter
      characteristic_id_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_characteristic_id, buffer, &characteristic_id_writer, &serialization_context);
  params->characteristic_id.Set(
      characteristic_id_writer.is_null() ? nullptr : characteristic_id_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->characteristic_id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null characteristic_id in Device.WriteValueForDescriptor request");
  typename decltype(params->descriptor_id)::BaseType::BufferWriter
      descriptor_id_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_descriptor_id, buffer, &descriptor_id_writer, &serialization_context);
  params->descriptor_id.Set(
      descriptor_id_writer.is_null() ? nullptr : descriptor_id_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->descriptor_id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null descriptor_id in Device.WriteValueForDescriptor request");
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
      "null value in Device.WriteValueForDescriptor request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new Device_WriteValueForDescriptor_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class Device_GetInfo_ProxyToResponder {
 public:
  static Device::GetInfoCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<Device_GetInfo_ProxyToResponder> proxy(
        new Device_GetInfo_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&Device_GetInfo_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~Device_GetInfo_ProxyToResponder() {
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
  Device_GetInfo_ProxyToResponder(
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
        << "Device::GetInfoCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      DeviceInfoPtr in_info);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(Device_GetInfo_ProxyToResponder);
};

bool Device_GetInfo_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "bluetooth::mojom::Device::GetInfoCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::Device_GetInfo_ResponseParams_Data* params =
      reinterpret_cast<
          internal::Device_GetInfo_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  DeviceInfoPtr p_info{};
  Device_GetInfo_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadInfo(&p_info))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "Device::GetInfo response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_info));
  return true;
}

void Device_GetInfo_ProxyToResponder::Run(
    DeviceInfoPtr in_info) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kDevice_GetInfo_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::bluetooth::mojom::internal::Device_GetInfo_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->info)::BaseType::BufferWriter
      info_writer;
  mojo::internal::Serialize<::bluetooth::mojom::DeviceInfoDataView>(
      in_info, buffer, &info_writer, &serialization_context);
  params->info.Set(
      info_writer.is_null() ? nullptr : info_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)bluetooth::mojom::Device::GetInfoCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class Device_GetServices_ProxyToResponder {
 public:
  static Device::GetServicesCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<Device_GetServices_ProxyToResponder> proxy(
        new Device_GetServices_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&Device_GetServices_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~Device_GetServices_ProxyToResponder() {
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
  Device_GetServices_ProxyToResponder(
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
        << "Device::GetServicesCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      std::vector<ServiceInfoPtr> in_services);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(Device_GetServices_ProxyToResponder);
};

bool Device_GetServices_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "bluetooth::mojom::Device::GetServicesCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::Device_GetServices_ResponseParams_Data* params =
      reinterpret_cast<
          internal::Device_GetServices_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  std::vector<ServiceInfoPtr> p_services{};
  Device_GetServices_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadServices(&p_services))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "Device::GetServices response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_services));
  return true;
}

void Device_GetServices_ProxyToResponder::Run(
    std::vector<ServiceInfoPtr> in_services) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kDevice_GetServices_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::bluetooth::mojom::internal::Device_GetServices_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->services)::BaseType::BufferWriter
      services_writer;
  const mojo::internal::ContainerValidateParams services_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::bluetooth::mojom::ServiceInfoDataView>>(
      in_services, buffer, &services_writer, &services_validate_params,
      &serialization_context);
  params->services.Set(
      services_writer.is_null() ? nullptr : services_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->services.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null services in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)bluetooth::mojom::Device::GetServicesCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class Device_GetCharacteristics_ProxyToResponder {
 public:
  static Device::GetCharacteristicsCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<Device_GetCharacteristics_ProxyToResponder> proxy(
        new Device_GetCharacteristics_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&Device_GetCharacteristics_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~Device_GetCharacteristics_ProxyToResponder() {
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
  Device_GetCharacteristics_ProxyToResponder(
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
        << "Device::GetCharacteristicsCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      base::Optional<std::vector<CharacteristicInfoPtr>> in_characteristics);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(Device_GetCharacteristics_ProxyToResponder);
};

bool Device_GetCharacteristics_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "bluetooth::mojom::Device::GetCharacteristicsCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::Device_GetCharacteristics_ResponseParams_Data* params =
      reinterpret_cast<
          internal::Device_GetCharacteristics_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  base::Optional<std::vector<CharacteristicInfoPtr>> p_characteristics{};
  Device_GetCharacteristics_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadCharacteristics(&p_characteristics))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "Device::GetCharacteristics response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_characteristics));
  return true;
}

void Device_GetCharacteristics_ProxyToResponder::Run(
    base::Optional<std::vector<CharacteristicInfoPtr>> in_characteristics) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kDevice_GetCharacteristics_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::bluetooth::mojom::internal::Device_GetCharacteristics_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->characteristics)::BaseType::BufferWriter
      characteristics_writer;
  const mojo::internal::ContainerValidateParams characteristics_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::bluetooth::mojom::CharacteristicInfoDataView>>(
      in_characteristics, buffer, &characteristics_writer, &characteristics_validate_params,
      &serialization_context);
  params->characteristics.Set(
      characteristics_writer.is_null() ? nullptr : characteristics_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)bluetooth::mojom::Device::GetCharacteristicsCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class Device_ReadValueForCharacteristic_ProxyToResponder {
 public:
  static Device::ReadValueForCharacteristicCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<Device_ReadValueForCharacteristic_ProxyToResponder> proxy(
        new Device_ReadValueForCharacteristic_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&Device_ReadValueForCharacteristic_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~Device_ReadValueForCharacteristic_ProxyToResponder() {
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
  Device_ReadValueForCharacteristic_ProxyToResponder(
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
        << "Device::ReadValueForCharacteristicCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      GattResult in_result, const base::Optional<std::vector<uint8_t>>& in_value);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(Device_ReadValueForCharacteristic_ProxyToResponder);
};

bool Device_ReadValueForCharacteristic_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "bluetooth::mojom::Device::ReadValueForCharacteristicCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::Device_ReadValueForCharacteristic_ResponseParams_Data* params =
      reinterpret_cast<
          internal::Device_ReadValueForCharacteristic_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  GattResult p_result{};
  base::Optional<std::vector<uint8_t>> p_value{};
  Device_ReadValueForCharacteristic_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadResult(&p_result))
    success = false;
  if (!input_data_view.ReadValue(&p_value))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "Device::ReadValueForCharacteristic response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_result), 
std::move(p_value));
  return true;
}

void Device_ReadValueForCharacteristic_ProxyToResponder::Run(
    GattResult in_result, const base::Optional<std::vector<uint8_t>>& in_value) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kDevice_ReadValueForCharacteristic_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::bluetooth::mojom::internal::Device_ReadValueForCharacteristic_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::bluetooth::mojom::GattResult>(
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
  TRACE_EVENT1("mojom", "(Impl)bluetooth::mojom::Device::ReadValueForCharacteristicCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class Device_WriteValueForCharacteristic_ProxyToResponder {
 public:
  static Device::WriteValueForCharacteristicCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<Device_WriteValueForCharacteristic_ProxyToResponder> proxy(
        new Device_WriteValueForCharacteristic_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&Device_WriteValueForCharacteristic_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~Device_WriteValueForCharacteristic_ProxyToResponder() {
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
  Device_WriteValueForCharacteristic_ProxyToResponder(
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
        << "Device::WriteValueForCharacteristicCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      GattResult in_result);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(Device_WriteValueForCharacteristic_ProxyToResponder);
};

bool Device_WriteValueForCharacteristic_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "bluetooth::mojom::Device::WriteValueForCharacteristicCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::Device_WriteValueForCharacteristic_ResponseParams_Data* params =
      reinterpret_cast<
          internal::Device_WriteValueForCharacteristic_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  GattResult p_result{};
  Device_WriteValueForCharacteristic_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadResult(&p_result))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "Device::WriteValueForCharacteristic response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_result));
  return true;
}

void Device_WriteValueForCharacteristic_ProxyToResponder::Run(
    GattResult in_result) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kDevice_WriteValueForCharacteristic_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::bluetooth::mojom::internal::Device_WriteValueForCharacteristic_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::bluetooth::mojom::GattResult>(
      in_result, &params->result);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)bluetooth::mojom::Device::WriteValueForCharacteristicCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class Device_GetDescriptors_ProxyToResponder {
 public:
  static Device::GetDescriptorsCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<Device_GetDescriptors_ProxyToResponder> proxy(
        new Device_GetDescriptors_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&Device_GetDescriptors_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~Device_GetDescriptors_ProxyToResponder() {
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
  Device_GetDescriptors_ProxyToResponder(
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
        << "Device::GetDescriptorsCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      base::Optional<std::vector<DescriptorInfoPtr>> in_descriptors);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(Device_GetDescriptors_ProxyToResponder);
};

bool Device_GetDescriptors_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "bluetooth::mojom::Device::GetDescriptorsCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::Device_GetDescriptors_ResponseParams_Data* params =
      reinterpret_cast<
          internal::Device_GetDescriptors_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  base::Optional<std::vector<DescriptorInfoPtr>> p_descriptors{};
  Device_GetDescriptors_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadDescriptors(&p_descriptors))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "Device::GetDescriptors response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_descriptors));
  return true;
}

void Device_GetDescriptors_ProxyToResponder::Run(
    base::Optional<std::vector<DescriptorInfoPtr>> in_descriptors) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kDevice_GetDescriptors_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::bluetooth::mojom::internal::Device_GetDescriptors_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->descriptors)::BaseType::BufferWriter
      descriptors_writer;
  const mojo::internal::ContainerValidateParams descriptors_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::bluetooth::mojom::DescriptorInfoDataView>>(
      in_descriptors, buffer, &descriptors_writer, &descriptors_validate_params,
      &serialization_context);
  params->descriptors.Set(
      descriptors_writer.is_null() ? nullptr : descriptors_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)bluetooth::mojom::Device::GetDescriptorsCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class Device_ReadValueForDescriptor_ProxyToResponder {
 public:
  static Device::ReadValueForDescriptorCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<Device_ReadValueForDescriptor_ProxyToResponder> proxy(
        new Device_ReadValueForDescriptor_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&Device_ReadValueForDescriptor_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~Device_ReadValueForDescriptor_ProxyToResponder() {
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
  Device_ReadValueForDescriptor_ProxyToResponder(
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
        << "Device::ReadValueForDescriptorCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      GattResult in_result, const base::Optional<std::vector<uint8_t>>& in_value);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(Device_ReadValueForDescriptor_ProxyToResponder);
};

bool Device_ReadValueForDescriptor_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "bluetooth::mojom::Device::ReadValueForDescriptorCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::Device_ReadValueForDescriptor_ResponseParams_Data* params =
      reinterpret_cast<
          internal::Device_ReadValueForDescriptor_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  GattResult p_result{};
  base::Optional<std::vector<uint8_t>> p_value{};
  Device_ReadValueForDescriptor_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadResult(&p_result))
    success = false;
  if (!input_data_view.ReadValue(&p_value))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "Device::ReadValueForDescriptor response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_result), 
std::move(p_value));
  return true;
}

void Device_ReadValueForDescriptor_ProxyToResponder::Run(
    GattResult in_result, const base::Optional<std::vector<uint8_t>>& in_value) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kDevice_ReadValueForDescriptor_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::bluetooth::mojom::internal::Device_ReadValueForDescriptor_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::bluetooth::mojom::GattResult>(
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
  TRACE_EVENT1("mojom", "(Impl)bluetooth::mojom::Device::ReadValueForDescriptorCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class Device_WriteValueForDescriptor_ProxyToResponder {
 public:
  static Device::WriteValueForDescriptorCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<Device_WriteValueForDescriptor_ProxyToResponder> proxy(
        new Device_WriteValueForDescriptor_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&Device_WriteValueForDescriptor_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~Device_WriteValueForDescriptor_ProxyToResponder() {
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
  Device_WriteValueForDescriptor_ProxyToResponder(
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
        << "Device::WriteValueForDescriptorCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      GattResult in_result);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(Device_WriteValueForDescriptor_ProxyToResponder);
};

bool Device_WriteValueForDescriptor_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "bluetooth::mojom::Device::WriteValueForDescriptorCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::Device_WriteValueForDescriptor_ResponseParams_Data* params =
      reinterpret_cast<
          internal::Device_WriteValueForDescriptor_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  GattResult p_result{};
  Device_WriteValueForDescriptor_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadResult(&p_result))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "Device::WriteValueForDescriptor response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_result));
  return true;
}

void Device_WriteValueForDescriptor_ProxyToResponder::Run(
    GattResult in_result) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kDevice_WriteValueForDescriptor_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::bluetooth::mojom::internal::Device_WriteValueForDescriptor_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::bluetooth::mojom::GattResult>(
      in_result, &params->result);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)bluetooth::mojom::Device::WriteValueForDescriptorCallback",
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
    case internal::kDevice_Disconnect_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)bluetooth::mojom::Device::Disconnect",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::Device_Disconnect_Params_Data* params =
          reinterpret_cast<internal::Device_Disconnect_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      Device_Disconnect_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "Device::Disconnect deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->Disconnect();
      return true;
    }
    case internal::kDevice_GetInfo_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)bluetooth::mojom::Device::GetInfo",
               "message", message->name());
#endif
      break;
    }
    case internal::kDevice_GetServices_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)bluetooth::mojom::Device::GetServices",
               "message", message->name());
#endif
      break;
    }
    case internal::kDevice_GetCharacteristics_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)bluetooth::mojom::Device::GetCharacteristics",
               "message", message->name());
#endif
      break;
    }
    case internal::kDevice_ReadValueForCharacteristic_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)bluetooth::mojom::Device::ReadValueForCharacteristic",
               "message", message->name());
#endif
      break;
    }
    case internal::kDevice_WriteValueForCharacteristic_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)bluetooth::mojom::Device::WriteValueForCharacteristic",
               "message", message->name());
#endif
      break;
    }
    case internal::kDevice_GetDescriptors_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)bluetooth::mojom::Device::GetDescriptors",
               "message", message->name());
#endif
      break;
    }
    case internal::kDevice_ReadValueForDescriptor_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)bluetooth::mojom::Device::ReadValueForDescriptor",
               "message", message->name());
#endif
      break;
    }
    case internal::kDevice_WriteValueForDescriptor_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)bluetooth::mojom::Device::WriteValueForDescriptor",
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
    case internal::kDevice_Disconnect_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)bluetooth::mojom::Device::Disconnect",
               "message", message->name());
#endif
      break;
    }
    case internal::kDevice_GetInfo_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)bluetooth::mojom::Device::GetInfo",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::Device_GetInfo_Params_Data* params =
          reinterpret_cast<
              internal::Device_GetInfo_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      Device_GetInfo_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "Device::GetInfo deserializer");
        return false;
      }
      Device::GetInfoCallback callback =
          Device_GetInfo_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->GetInfo(std::move(callback));
      return true;
    }
    case internal::kDevice_GetServices_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)bluetooth::mojom::Device::GetServices",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::Device_GetServices_Params_Data* params =
          reinterpret_cast<
              internal::Device_GetServices_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      Device_GetServices_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "Device::GetServices deserializer");
        return false;
      }
      Device::GetServicesCallback callback =
          Device_GetServices_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->GetServices(std::move(callback));
      return true;
    }
    case internal::kDevice_GetCharacteristics_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)bluetooth::mojom::Device::GetCharacteristics",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::Device_GetCharacteristics_Params_Data* params =
          reinterpret_cast<
              internal::Device_GetCharacteristics_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::string p_service_id{};
      Device_GetCharacteristics_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadServiceId(&p_service_id))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "Device::GetCharacteristics deserializer");
        return false;
      }
      Device::GetCharacteristicsCallback callback =
          Device_GetCharacteristics_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->GetCharacteristics(
std::move(p_service_id), std::move(callback));
      return true;
    }
    case internal::kDevice_ReadValueForCharacteristic_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)bluetooth::mojom::Device::ReadValueForCharacteristic",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::Device_ReadValueForCharacteristic_Params_Data* params =
          reinterpret_cast<
              internal::Device_ReadValueForCharacteristic_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::string p_service_id{};
      std::string p_characteristic_id{};
      Device_ReadValueForCharacteristic_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadServiceId(&p_service_id))
        success = false;
      if (!input_data_view.ReadCharacteristicId(&p_characteristic_id))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "Device::ReadValueForCharacteristic deserializer");
        return false;
      }
      Device::ReadValueForCharacteristicCallback callback =
          Device_ReadValueForCharacteristic_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->ReadValueForCharacteristic(
std::move(p_service_id), 
std::move(p_characteristic_id), std::move(callback));
      return true;
    }
    case internal::kDevice_WriteValueForCharacteristic_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)bluetooth::mojom::Device::WriteValueForCharacteristic",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::Device_WriteValueForCharacteristic_Params_Data* params =
          reinterpret_cast<
              internal::Device_WriteValueForCharacteristic_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::string p_service_id{};
      std::string p_characteristic_id{};
      std::vector<uint8_t> p_value{};
      Device_WriteValueForCharacteristic_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadServiceId(&p_service_id))
        success = false;
      if (!input_data_view.ReadCharacteristicId(&p_characteristic_id))
        success = false;
      if (!input_data_view.ReadValue(&p_value))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "Device::WriteValueForCharacteristic deserializer");
        return false;
      }
      Device::WriteValueForCharacteristicCallback callback =
          Device_WriteValueForCharacteristic_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->WriteValueForCharacteristic(
std::move(p_service_id), 
std::move(p_characteristic_id), 
std::move(p_value), std::move(callback));
      return true;
    }
    case internal::kDevice_GetDescriptors_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)bluetooth::mojom::Device::GetDescriptors",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::Device_GetDescriptors_Params_Data* params =
          reinterpret_cast<
              internal::Device_GetDescriptors_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::string p_service_id{};
      std::string p_characteristic_id{};
      Device_GetDescriptors_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadServiceId(&p_service_id))
        success = false;
      if (!input_data_view.ReadCharacteristicId(&p_characteristic_id))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "Device::GetDescriptors deserializer");
        return false;
      }
      Device::GetDescriptorsCallback callback =
          Device_GetDescriptors_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->GetDescriptors(
std::move(p_service_id), 
std::move(p_characteristic_id), std::move(callback));
      return true;
    }
    case internal::kDevice_ReadValueForDescriptor_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)bluetooth::mojom::Device::ReadValueForDescriptor",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::Device_ReadValueForDescriptor_Params_Data* params =
          reinterpret_cast<
              internal::Device_ReadValueForDescriptor_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::string p_service_id{};
      std::string p_characteristic_id{};
      std::string p_descriptor_id{};
      Device_ReadValueForDescriptor_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadServiceId(&p_service_id))
        success = false;
      if (!input_data_view.ReadCharacteristicId(&p_characteristic_id))
        success = false;
      if (!input_data_view.ReadDescriptorId(&p_descriptor_id))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "Device::ReadValueForDescriptor deserializer");
        return false;
      }
      Device::ReadValueForDescriptorCallback callback =
          Device_ReadValueForDescriptor_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->ReadValueForDescriptor(
std::move(p_service_id), 
std::move(p_characteristic_id), 
std::move(p_descriptor_id), std::move(callback));
      return true;
    }
    case internal::kDevice_WriteValueForDescriptor_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)bluetooth::mojom::Device::WriteValueForDescriptor",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::Device_WriteValueForDescriptor_Params_Data* params =
          reinterpret_cast<
              internal::Device_WriteValueForDescriptor_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::string p_service_id{};
      std::string p_characteristic_id{};
      std::string p_descriptor_id{};
      std::vector<uint8_t> p_value{};
      Device_WriteValueForDescriptor_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadServiceId(&p_service_id))
        success = false;
      if (!input_data_view.ReadCharacteristicId(&p_characteristic_id))
        success = false;
      if (!input_data_view.ReadDescriptorId(&p_descriptor_id))
        success = false;
      if (!input_data_view.ReadValue(&p_value))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "Device::WriteValueForDescriptor deserializer");
        return false;
      }
      Device::WriteValueForDescriptorCallback callback =
          Device_WriteValueForDescriptor_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->WriteValueForDescriptor(
std::move(p_service_id), 
std::move(p_characteristic_id), 
std::move(p_descriptor_id), 
std::move(p_value), std::move(callback));
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
    case internal::kDevice_Disconnect_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Device_Disconnect_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kDevice_GetInfo_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Device_GetInfo_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kDevice_GetServices_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Device_GetServices_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kDevice_GetCharacteristics_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Device_GetCharacteristics_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kDevice_ReadValueForCharacteristic_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Device_ReadValueForCharacteristic_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kDevice_WriteValueForCharacteristic_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Device_WriteValueForCharacteristic_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kDevice_GetDescriptors_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Device_GetDescriptors_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kDevice_ReadValueForDescriptor_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Device_ReadValueForDescriptor_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kDevice_WriteValueForDescriptor_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Device_WriteValueForDescriptor_Params_Data>(
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
    case internal::kDevice_GetInfo_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::Device_GetInfo_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kDevice_GetServices_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::Device_GetServices_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kDevice_GetCharacteristics_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::Device_GetCharacteristics_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kDevice_ReadValueForCharacteristic_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::Device_ReadValueForCharacteristic_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kDevice_WriteValueForCharacteristic_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::Device_WriteValueForCharacteristic_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kDevice_GetDescriptors_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::Device_GetDescriptors_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kDevice_ReadValueForDescriptor_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::Device_ReadValueForDescriptor_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kDevice_WriteValueForDescriptor_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::Device_WriteValueForDescriptor_ResponseParams_Data>(
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
void DeviceInterceptorForTesting::Disconnect() {
  GetForwardingInterface()->Disconnect();
}
void DeviceInterceptorForTesting::GetInfo(GetInfoCallback callback) {
  GetForwardingInterface()->GetInfo(std::move(callback));
}
void DeviceInterceptorForTesting::GetServices(GetServicesCallback callback) {
  GetForwardingInterface()->GetServices(std::move(callback));
}
void DeviceInterceptorForTesting::GetCharacteristics(const std::string& service_id, GetCharacteristicsCallback callback) {
  GetForwardingInterface()->GetCharacteristics(std::move(service_id), std::move(callback));
}
void DeviceInterceptorForTesting::ReadValueForCharacteristic(const std::string& service_id, const std::string& characteristic_id, ReadValueForCharacteristicCallback callback) {
  GetForwardingInterface()->ReadValueForCharacteristic(std::move(service_id), std::move(characteristic_id), std::move(callback));
}
void DeviceInterceptorForTesting::WriteValueForCharacteristic(const std::string& service_id, const std::string& characteristic_id, const std::vector<uint8_t>& value, WriteValueForCharacteristicCallback callback) {
  GetForwardingInterface()->WriteValueForCharacteristic(std::move(service_id), std::move(characteristic_id), std::move(value), std::move(callback));
}
void DeviceInterceptorForTesting::GetDescriptors(const std::string& service_id, const std::string& characteristic_id, GetDescriptorsCallback callback) {
  GetForwardingInterface()->GetDescriptors(std::move(service_id), std::move(characteristic_id), std::move(callback));
}
void DeviceInterceptorForTesting::ReadValueForDescriptor(const std::string& service_id, const std::string& characteristic_id, const std::string& descriptor_id, ReadValueForDescriptorCallback callback) {
  GetForwardingInterface()->ReadValueForDescriptor(std::move(service_id), std::move(characteristic_id), std::move(descriptor_id), std::move(callback));
}
void DeviceInterceptorForTesting::WriteValueForDescriptor(const std::string& service_id, const std::string& characteristic_id, const std::string& descriptor_id, const std::vector<uint8_t>& value, WriteValueForDescriptorCallback callback) {
  GetForwardingInterface()->WriteValueForDescriptor(std::move(service_id), std::move(characteristic_id), std::move(descriptor_id), std::move(value), std::move(callback));
}
DeviceAsyncWaiter::DeviceAsyncWaiter(
    Device* proxy) : proxy_(proxy) {}

DeviceAsyncWaiter::~DeviceAsyncWaiter() = default;

void DeviceAsyncWaiter::GetInfo(
    DeviceInfoPtr* out_info) {
  base::RunLoop loop;
  proxy_->GetInfo(
      base::BindOnce(
          [](base::RunLoop* loop,
             DeviceInfoPtr* out_info
,
             DeviceInfoPtr info) {*out_info = std::move(info);
            loop->Quit();
          },
          &loop,
          out_info));
  loop.Run();
}
void DeviceAsyncWaiter::GetServices(
    std::vector<ServiceInfoPtr>* out_services) {
  base::RunLoop loop;
  proxy_->GetServices(
      base::BindOnce(
          [](base::RunLoop* loop,
             std::vector<ServiceInfoPtr>* out_services
,
             std::vector<ServiceInfoPtr> services) {*out_services = std::move(services);
            loop->Quit();
          },
          &loop,
          out_services));
  loop.Run();
}
void DeviceAsyncWaiter::GetCharacteristics(
    const std::string& service_id, base::Optional<std::vector<CharacteristicInfoPtr>>* out_characteristics) {
  base::RunLoop loop;
  proxy_->GetCharacteristics(std::move(service_id),
      base::BindOnce(
          [](base::RunLoop* loop,
             base::Optional<std::vector<CharacteristicInfoPtr>>* out_characteristics
,
             base::Optional<std::vector<CharacteristicInfoPtr>> characteristics) {*out_characteristics = std::move(characteristics);
            loop->Quit();
          },
          &loop,
          out_characteristics));
  loop.Run();
}
void DeviceAsyncWaiter::ReadValueForCharacteristic(
    const std::string& service_id, const std::string& characteristic_id, GattResult* out_result, base::Optional<std::vector<uint8_t>>* out_value) {
  base::RunLoop loop;
  proxy_->ReadValueForCharacteristic(std::move(service_id),std::move(characteristic_id),
      base::BindOnce(
          [](base::RunLoop* loop,
             GattResult* out_result
,
             base::Optional<std::vector<uint8_t>>* out_value
,
             GattResult result,
             const base::Optional<std::vector<uint8_t>>& value) {*out_result = std::move(result);*out_value = std::move(value);
            loop->Quit();
          },
          &loop,
          out_result,
          out_value));
  loop.Run();
}
void DeviceAsyncWaiter::WriteValueForCharacteristic(
    const std::string& service_id, const std::string& characteristic_id, const std::vector<uint8_t>& value, GattResult* out_result) {
  base::RunLoop loop;
  proxy_->WriteValueForCharacteristic(std::move(service_id),std::move(characteristic_id),std::move(value),
      base::BindOnce(
          [](base::RunLoop* loop,
             GattResult* out_result
,
             GattResult result) {*out_result = std::move(result);
            loop->Quit();
          },
          &loop,
          out_result));
  loop.Run();
}
void DeviceAsyncWaiter::GetDescriptors(
    const std::string& service_id, const std::string& characteristic_id, base::Optional<std::vector<DescriptorInfoPtr>>* out_descriptors) {
  base::RunLoop loop;
  proxy_->GetDescriptors(std::move(service_id),std::move(characteristic_id),
      base::BindOnce(
          [](base::RunLoop* loop,
             base::Optional<std::vector<DescriptorInfoPtr>>* out_descriptors
,
             base::Optional<std::vector<DescriptorInfoPtr>> descriptors) {*out_descriptors = std::move(descriptors);
            loop->Quit();
          },
          &loop,
          out_descriptors));
  loop.Run();
}
void DeviceAsyncWaiter::ReadValueForDescriptor(
    const std::string& service_id, const std::string& characteristic_id, const std::string& descriptor_id, GattResult* out_result, base::Optional<std::vector<uint8_t>>* out_value) {
  base::RunLoop loop;
  proxy_->ReadValueForDescriptor(std::move(service_id),std::move(characteristic_id),std::move(descriptor_id),
      base::BindOnce(
          [](base::RunLoop* loop,
             GattResult* out_result
,
             base::Optional<std::vector<uint8_t>>* out_value
,
             GattResult result,
             const base::Optional<std::vector<uint8_t>>& value) {*out_result = std::move(result);*out_value = std::move(value);
            loop->Quit();
          },
          &loop,
          out_result,
          out_value));
  loop.Run();
}
void DeviceAsyncWaiter::WriteValueForDescriptor(
    const std::string& service_id, const std::string& characteristic_id, const std::string& descriptor_id, const std::vector<uint8_t>& value, GattResult* out_result) {
  base::RunLoop loop;
  proxy_->WriteValueForDescriptor(std::move(service_id),std::move(characteristic_id),std::move(descriptor_id),std::move(value),
      base::BindOnce(
          [](base::RunLoop* loop,
             GattResult* out_result
,
             GattResult result) {*out_result = std::move(result);
            loop->Quit();
          },
          &loop,
          out_result));
  loop.Run();
}

}  // namespace mojom
}  // namespace bluetooth

namespace mojo {


// static
bool StructTraits<::bluetooth::mojom::RSSIWrapper::DataView, ::bluetooth::mojom::RSSIWrapperPtr>::Read(
    ::bluetooth::mojom::RSSIWrapper::DataView input,
    ::bluetooth::mojom::RSSIWrapperPtr* output) {
  bool success = true;
  ::bluetooth::mojom::RSSIWrapperPtr result(::bluetooth::mojom::RSSIWrapper::New());
  
      result->value = input.value();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::bluetooth::mojom::DeviceInfo::DataView, ::bluetooth::mojom::DeviceInfoPtr>::Read(
    ::bluetooth::mojom::DeviceInfo::DataView input,
    ::bluetooth::mojom::DeviceInfoPtr* output) {
  bool success = true;
  ::bluetooth::mojom::DeviceInfoPtr result(::bluetooth::mojom::DeviceInfo::New());
  
      if (!input.ReadName(&result->name))
        success = false;
      if (!input.ReadNameForDisplay(&result->name_for_display))
        success = false;
      if (!input.ReadAddress(&result->address))
        success = false;
      result->is_gatt_connected = input.is_gatt_connected();
      if (!input.ReadRssi(&result->rssi))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::bluetooth::mojom::ServiceInfo::DataView, ::bluetooth::mojom::ServiceInfoPtr>::Read(
    ::bluetooth::mojom::ServiceInfo::DataView input,
    ::bluetooth::mojom::ServiceInfoPtr* output) {
  bool success = true;
  ::bluetooth::mojom::ServiceInfoPtr result(::bluetooth::mojom::ServiceInfo::New());
  
      if (!input.ReadId(&result->id))
        success = false;
      if (!input.ReadUuid(&result->uuid))
        success = false;
      result->is_primary = input.is_primary();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::bluetooth::mojom::CharacteristicInfo::DataView, ::bluetooth::mojom::CharacteristicInfoPtr>::Read(
    ::bluetooth::mojom::CharacteristicInfo::DataView input,
    ::bluetooth::mojom::CharacteristicInfoPtr* output) {
  bool success = true;
  ::bluetooth::mojom::CharacteristicInfoPtr result(::bluetooth::mojom::CharacteristicInfo::New());
  
      if (!input.ReadId(&result->id))
        success = false;
      if (!input.ReadUuid(&result->uuid))
        success = false;
      result->properties = input.properties();
      if (!input.ReadLastKnownValue(&result->last_known_value))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::bluetooth::mojom::DescriptorInfo::DataView, ::bluetooth::mojom::DescriptorInfoPtr>::Read(
    ::bluetooth::mojom::DescriptorInfo::DataView input,
    ::bluetooth::mojom::DescriptorInfoPtr* output) {
  bool success = true;
  ::bluetooth::mojom::DescriptorInfoPtr result(::bluetooth::mojom::DescriptorInfo::New());
  
      if (!input.ReadId(&result->id))
        success = false;
      if (!input.ReadUuid(&result->uuid))
        success = false;
      if (!input.ReadLastKnownValue(&result->last_known_value))
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