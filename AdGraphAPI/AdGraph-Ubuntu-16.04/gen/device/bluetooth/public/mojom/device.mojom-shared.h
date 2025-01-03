// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef DEVICE_BLUETOOTH_PUBLIC_MOJOM_DEVICE_MOJOM_SHARED_H_
#define DEVICE_BLUETOOTH_PUBLIC_MOJOM_DEVICE_MOJOM_SHARED_H_

#include <stdint.h>

#include <functional>
#include <ostream>
#include <type_traits>
#include <utility>

#include "base/compiler_specific.h"
#include "base/containers/flat_map.h"
#include "mojo/public/cpp/bindings/array_data_view.h"
#include "mojo/public/cpp/bindings/enum_traits.h"
#include "mojo/public/cpp/bindings/interface_data_view.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/serialization.h"
#include "mojo/public/cpp/bindings/map_data_view.h"
#include "mojo/public/cpp/bindings/string_data_view.h"
#include "device/bluetooth/public/mojom/device.mojom-shared-internal.h"
#include "device/bluetooth/public/mojom/uuid.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"


namespace bluetooth {
namespace mojom {
class RSSIWrapperDataView;

class DeviceInfoDataView;

class ServiceInfoDataView;

class CharacteristicInfoDataView;

class DescriptorInfoDataView;



}  // namespace mojom
}  // namespace bluetooth

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::bluetooth::mojom::RSSIWrapperDataView> {
  using Data = ::bluetooth::mojom::internal::RSSIWrapper_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::bluetooth::mojom::DeviceInfoDataView> {
  using Data = ::bluetooth::mojom::internal::DeviceInfo_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::bluetooth::mojom::ServiceInfoDataView> {
  using Data = ::bluetooth::mojom::internal::ServiceInfo_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::bluetooth::mojom::CharacteristicInfoDataView> {
  using Data = ::bluetooth::mojom::internal::CharacteristicInfo_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::bluetooth::mojom::DescriptorInfoDataView> {
  using Data = ::bluetooth::mojom::internal::DescriptorInfo_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace bluetooth {
namespace mojom {

enum class Property : int32_t {
  NONE = 0,
  BROADCAST = 1,
  READ = 2,
  WRITE_WITHOUT_RESPONSE = 4,
  WRITE = 8,
  NOTIFY = 16,
  INDICATE = 32,
  AUTHENTICATED_SIGNED_WRITES = 64,
  EXTENDED_PROPERTIES = 128,
  RELIABLE_WRITE = 256,
  WRITABLE_AUXILIARIES = 512,
  READ_ENCRYPTED = 1024,
  WRITE_ENCRYPTED = 2048,
  READ_ENCRYPTED_AUTHENTICATED = 4096,
  WRITE_ENCRYPTED_AUTHENTICATED = 8192,
  kMinValue = 0,
  kMaxValue = 8192,
};

inline std::ostream& operator<<(std::ostream& os, Property value) {
  switch(value) {
    case Property::NONE:
      return os << "Property::NONE";
    case Property::BROADCAST:
      return os << "Property::BROADCAST";
    case Property::READ:
      return os << "Property::READ";
    case Property::WRITE_WITHOUT_RESPONSE:
      return os << "Property::WRITE_WITHOUT_RESPONSE";
    case Property::WRITE:
      return os << "Property::WRITE";
    case Property::NOTIFY:
      return os << "Property::NOTIFY";
    case Property::INDICATE:
      return os << "Property::INDICATE";
    case Property::AUTHENTICATED_SIGNED_WRITES:
      return os << "Property::AUTHENTICATED_SIGNED_WRITES";
    case Property::EXTENDED_PROPERTIES:
      return os << "Property::EXTENDED_PROPERTIES";
    case Property::RELIABLE_WRITE:
      return os << "Property::RELIABLE_WRITE";
    case Property::WRITABLE_AUXILIARIES:
      return os << "Property::WRITABLE_AUXILIARIES";
    case Property::READ_ENCRYPTED:
      return os << "Property::READ_ENCRYPTED";
    case Property::WRITE_ENCRYPTED:
      return os << "Property::WRITE_ENCRYPTED";
    case Property::READ_ENCRYPTED_AUTHENTICATED:
      return os << "Property::READ_ENCRYPTED_AUTHENTICATED";
    case Property::WRITE_ENCRYPTED_AUTHENTICATED:
      return os << "Property::WRITE_ENCRYPTED_AUTHENTICATED";
    default:
      return os << "Unknown Property value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(Property value) {
  return internal::Property_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

enum class GattResult : int32_t {
  SUCCESS,
  UNKNOWN,
  FAILED,
  IN_PROGRESS,
  INVALID_LENGTH,
  NOT_PERMITTED,
  NOT_AUTHORIZED,
  NOT_PAIRED,
  NOT_SUPPORTED,
  SERVICE_NOT_FOUND,
  CHARACTERISTIC_NOT_FOUND,
  DESCRIPTOR_NOT_FOUND,
  kMinValue = 0,
  kMaxValue = 11,
};

inline std::ostream& operator<<(std::ostream& os, GattResult value) {
  switch(value) {
    case GattResult::SUCCESS:
      return os << "GattResult::SUCCESS";
    case GattResult::UNKNOWN:
      return os << "GattResult::UNKNOWN";
    case GattResult::FAILED:
      return os << "GattResult::FAILED";
    case GattResult::IN_PROGRESS:
      return os << "GattResult::IN_PROGRESS";
    case GattResult::INVALID_LENGTH:
      return os << "GattResult::INVALID_LENGTH";
    case GattResult::NOT_PERMITTED:
      return os << "GattResult::NOT_PERMITTED";
    case GattResult::NOT_AUTHORIZED:
      return os << "GattResult::NOT_AUTHORIZED";
    case GattResult::NOT_PAIRED:
      return os << "GattResult::NOT_PAIRED";
    case GattResult::NOT_SUPPORTED:
      return os << "GattResult::NOT_SUPPORTED";
    case GattResult::SERVICE_NOT_FOUND:
      return os << "GattResult::SERVICE_NOT_FOUND";
    case GattResult::CHARACTERISTIC_NOT_FOUND:
      return os << "GattResult::CHARACTERISTIC_NOT_FOUND";
    case GattResult::DESCRIPTOR_NOT_FOUND:
      return os << "GattResult::DESCRIPTOR_NOT_FOUND";
    default:
      return os << "Unknown GattResult value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(GattResult value) {
  return internal::GattResult_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
// Interface base classes. They are used for type safety check.
class DeviceInterfaceBase {};

using DevicePtrDataView =
    mojo::InterfacePtrDataView<DeviceInterfaceBase>;
using DeviceRequestDataView =
    mojo::InterfaceRequestDataView<DeviceInterfaceBase>;
using DeviceAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<DeviceInterfaceBase>;
using DeviceAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<DeviceInterfaceBase>;
class RSSIWrapperDataView {
 public:
  RSSIWrapperDataView() {}

  RSSIWrapperDataView(
      internal::RSSIWrapper_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int8_t value() const {
    return data_->value;
  }
 private:
  internal::RSSIWrapper_Data* data_ = nullptr;
};

class DeviceInfoDataView {
 public:
  DeviceInfoDataView() {}

  DeviceInfoDataView(
      internal::DeviceInfo_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetNameDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadName(UserType* output) {
    auto* pointer = data_->name.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetNameForDisplayDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadNameForDisplay(UserType* output) {
    auto* pointer = data_->name_for_display.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetAddressDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadAddress(UserType* output) {
    auto* pointer = data_->address.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  bool is_gatt_connected() const {
    return data_->is_gatt_connected;
  }
  inline void GetRssiDataView(
      RSSIWrapperDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRssi(UserType* output) {
    auto* pointer = data_->rssi.Get();
    return mojo::internal::Deserialize<::bluetooth::mojom::RSSIWrapperDataView>(
        pointer, output, context_);
  }
 private:
  internal::DeviceInfo_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ServiceInfoDataView {
 public:
  ServiceInfoDataView() {}

  ServiceInfoDataView(
      internal::ServiceInfo_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadId(UserType* output) {
    auto* pointer = data_->id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetUuidDataView(
      ::bluetooth::mojom::UUIDDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUuid(UserType* output) {
    auto* pointer = data_->uuid.Get();
    return mojo::internal::Deserialize<::bluetooth::mojom::UUIDDataView>(
        pointer, output, context_);
  }
  bool is_primary() const {
    return data_->is_primary;
  }
 private:
  internal::ServiceInfo_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class CharacteristicInfoDataView {
 public:
  CharacteristicInfoDataView() {}

  CharacteristicInfoDataView(
      internal::CharacteristicInfo_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadId(UserType* output) {
    auto* pointer = data_->id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetUuidDataView(
      ::bluetooth::mojom::UUIDDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUuid(UserType* output) {
    auto* pointer = data_->uuid.Get();
    return mojo::internal::Deserialize<::bluetooth::mojom::UUIDDataView>(
        pointer, output, context_);
  }
  uint32_t properties() const {
    return data_->properties;
  }
  inline void GetLastKnownValueDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadLastKnownValue(UserType* output) {
    auto* pointer = data_->last_known_value.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
 private:
  internal::CharacteristicInfo_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class DescriptorInfoDataView {
 public:
  DescriptorInfoDataView() {}

  DescriptorInfoDataView(
      internal::DescriptorInfo_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadId(UserType* output) {
    auto* pointer = data_->id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetUuidDataView(
      ::bluetooth::mojom::UUIDDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUuid(UserType* output) {
    auto* pointer = data_->uuid.Get();
    return mojo::internal::Deserialize<::bluetooth::mojom::UUIDDataView>(
        pointer, output, context_);
  }
  inline void GetLastKnownValueDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadLastKnownValue(UserType* output) {
    auto* pointer = data_->last_known_value.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
 private:
  internal::DescriptorInfo_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Device_Disconnect_ParamsDataView {
 public:
  Device_Disconnect_ParamsDataView() {}

  Device_Disconnect_ParamsDataView(
      internal::Device_Disconnect_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::Device_Disconnect_Params_Data* data_ = nullptr;
};

class Device_GetInfo_ParamsDataView {
 public:
  Device_GetInfo_ParamsDataView() {}

  Device_GetInfo_ParamsDataView(
      internal::Device_GetInfo_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::Device_GetInfo_Params_Data* data_ = nullptr;
};

class Device_GetInfo_ResponseParamsDataView {
 public:
  Device_GetInfo_ResponseParamsDataView() {}

  Device_GetInfo_ResponseParamsDataView(
      internal::Device_GetInfo_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetInfoDataView(
      DeviceInfoDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadInfo(UserType* output) {
    auto* pointer = data_->info.Get();
    return mojo::internal::Deserialize<::bluetooth::mojom::DeviceInfoDataView>(
        pointer, output, context_);
  }
 private:
  internal::Device_GetInfo_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Device_GetServices_ParamsDataView {
 public:
  Device_GetServices_ParamsDataView() {}

  Device_GetServices_ParamsDataView(
      internal::Device_GetServices_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::Device_GetServices_Params_Data* data_ = nullptr;
};

class Device_GetServices_ResponseParamsDataView {
 public:
  Device_GetServices_ResponseParamsDataView() {}

  Device_GetServices_ResponseParamsDataView(
      internal::Device_GetServices_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetServicesDataView(
      mojo::ArrayDataView<ServiceInfoDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadServices(UserType* output) {
    auto* pointer = data_->services.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::bluetooth::mojom::ServiceInfoDataView>>(
        pointer, output, context_);
  }
 private:
  internal::Device_GetServices_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Device_GetCharacteristics_ParamsDataView {
 public:
  Device_GetCharacteristics_ParamsDataView() {}

  Device_GetCharacteristics_ParamsDataView(
      internal::Device_GetCharacteristics_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetServiceIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadServiceId(UserType* output) {
    auto* pointer = data_->service_id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::Device_GetCharacteristics_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Device_GetCharacteristics_ResponseParamsDataView {
 public:
  Device_GetCharacteristics_ResponseParamsDataView() {}

  Device_GetCharacteristics_ResponseParamsDataView(
      internal::Device_GetCharacteristics_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetCharacteristicsDataView(
      mojo::ArrayDataView<CharacteristicInfoDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCharacteristics(UserType* output) {
    auto* pointer = data_->characteristics.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::bluetooth::mojom::CharacteristicInfoDataView>>(
        pointer, output, context_);
  }
 private:
  internal::Device_GetCharacteristics_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Device_ReadValueForCharacteristic_ParamsDataView {
 public:
  Device_ReadValueForCharacteristic_ParamsDataView() {}

  Device_ReadValueForCharacteristic_ParamsDataView(
      internal::Device_ReadValueForCharacteristic_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetServiceIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadServiceId(UserType* output) {
    auto* pointer = data_->service_id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetCharacteristicIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCharacteristicId(UserType* output) {
    auto* pointer = data_->characteristic_id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::Device_ReadValueForCharacteristic_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Device_ReadValueForCharacteristic_ResponseParamsDataView {
 public:
  Device_ReadValueForCharacteristic_ResponseParamsDataView() {}

  Device_ReadValueForCharacteristic_ResponseParamsDataView(
      internal::Device_ReadValueForCharacteristic_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadResult(UserType* output) const {
    auto data_value = data_->result;
    return mojo::internal::Deserialize<::bluetooth::mojom::GattResult>(
        data_value, output);
  }

  GattResult result() const {
    return static_cast<GattResult>(data_->result);
  }
  inline void GetValueDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadValue(UserType* output) {
    auto* pointer = data_->value.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
 private:
  internal::Device_ReadValueForCharacteristic_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Device_WriteValueForCharacteristic_ParamsDataView {
 public:
  Device_WriteValueForCharacteristic_ParamsDataView() {}

  Device_WriteValueForCharacteristic_ParamsDataView(
      internal::Device_WriteValueForCharacteristic_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetServiceIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadServiceId(UserType* output) {
    auto* pointer = data_->service_id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetCharacteristicIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCharacteristicId(UserType* output) {
    auto* pointer = data_->characteristic_id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetValueDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadValue(UserType* output) {
    auto* pointer = data_->value.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
 private:
  internal::Device_WriteValueForCharacteristic_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Device_WriteValueForCharacteristic_ResponseParamsDataView {
 public:
  Device_WriteValueForCharacteristic_ResponseParamsDataView() {}

  Device_WriteValueForCharacteristic_ResponseParamsDataView(
      internal::Device_WriteValueForCharacteristic_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadResult(UserType* output) const {
    auto data_value = data_->result;
    return mojo::internal::Deserialize<::bluetooth::mojom::GattResult>(
        data_value, output);
  }

  GattResult result() const {
    return static_cast<GattResult>(data_->result);
  }
 private:
  internal::Device_WriteValueForCharacteristic_ResponseParams_Data* data_ = nullptr;
};

class Device_GetDescriptors_ParamsDataView {
 public:
  Device_GetDescriptors_ParamsDataView() {}

  Device_GetDescriptors_ParamsDataView(
      internal::Device_GetDescriptors_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetServiceIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadServiceId(UserType* output) {
    auto* pointer = data_->service_id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetCharacteristicIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCharacteristicId(UserType* output) {
    auto* pointer = data_->characteristic_id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::Device_GetDescriptors_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Device_GetDescriptors_ResponseParamsDataView {
 public:
  Device_GetDescriptors_ResponseParamsDataView() {}

  Device_GetDescriptors_ResponseParamsDataView(
      internal::Device_GetDescriptors_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetDescriptorsDataView(
      mojo::ArrayDataView<DescriptorInfoDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDescriptors(UserType* output) {
    auto* pointer = data_->descriptors.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::bluetooth::mojom::DescriptorInfoDataView>>(
        pointer, output, context_);
  }
 private:
  internal::Device_GetDescriptors_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Device_ReadValueForDescriptor_ParamsDataView {
 public:
  Device_ReadValueForDescriptor_ParamsDataView() {}

  Device_ReadValueForDescriptor_ParamsDataView(
      internal::Device_ReadValueForDescriptor_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetServiceIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadServiceId(UserType* output) {
    auto* pointer = data_->service_id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetCharacteristicIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCharacteristicId(UserType* output) {
    auto* pointer = data_->characteristic_id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetDescriptorIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDescriptorId(UserType* output) {
    auto* pointer = data_->descriptor_id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::Device_ReadValueForDescriptor_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Device_ReadValueForDescriptor_ResponseParamsDataView {
 public:
  Device_ReadValueForDescriptor_ResponseParamsDataView() {}

  Device_ReadValueForDescriptor_ResponseParamsDataView(
      internal::Device_ReadValueForDescriptor_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadResult(UserType* output) const {
    auto data_value = data_->result;
    return mojo::internal::Deserialize<::bluetooth::mojom::GattResult>(
        data_value, output);
  }

  GattResult result() const {
    return static_cast<GattResult>(data_->result);
  }
  inline void GetValueDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadValue(UserType* output) {
    auto* pointer = data_->value.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
 private:
  internal::Device_ReadValueForDescriptor_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Device_WriteValueForDescriptor_ParamsDataView {
 public:
  Device_WriteValueForDescriptor_ParamsDataView() {}

  Device_WriteValueForDescriptor_ParamsDataView(
      internal::Device_WriteValueForDescriptor_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetServiceIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadServiceId(UserType* output) {
    auto* pointer = data_->service_id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetCharacteristicIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCharacteristicId(UserType* output) {
    auto* pointer = data_->characteristic_id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetDescriptorIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDescriptorId(UserType* output) {
    auto* pointer = data_->descriptor_id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetValueDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadValue(UserType* output) {
    auto* pointer = data_->value.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
 private:
  internal::Device_WriteValueForDescriptor_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Device_WriteValueForDescriptor_ResponseParamsDataView {
 public:
  Device_WriteValueForDescriptor_ResponseParamsDataView() {}

  Device_WriteValueForDescriptor_ResponseParamsDataView(
      internal::Device_WriteValueForDescriptor_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadResult(UserType* output) const {
    auto data_value = data_->result;
    return mojo::internal::Deserialize<::bluetooth::mojom::GattResult>(
        data_value, output);
  }

  GattResult result() const {
    return static_cast<GattResult>(data_->result);
  }
 private:
  internal::Device_WriteValueForDescriptor_ResponseParams_Data* data_ = nullptr;
};



}  // namespace mojom
}  // namespace bluetooth

namespace std {

template <>
struct hash<::bluetooth::mojom::Property>
    : public mojo::internal::EnumHashImpl<::bluetooth::mojom::Property> {};

template <>
struct hash<::bluetooth::mojom::GattResult>
    : public mojo::internal::EnumHashImpl<::bluetooth::mojom::GattResult> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::bluetooth::mojom::Property, ::bluetooth::mojom::Property> {
  static ::bluetooth::mojom::Property ToMojom(::bluetooth::mojom::Property input) { return input; }
  static bool FromMojom(::bluetooth::mojom::Property input, ::bluetooth::mojom::Property* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::bluetooth::mojom::Property, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::bluetooth::mojom::Property, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::bluetooth::mojom::Property>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::bluetooth::mojom::GattResult, ::bluetooth::mojom::GattResult> {
  static ::bluetooth::mojom::GattResult ToMojom(::bluetooth::mojom::GattResult input) { return input; }
  static bool FromMojom(::bluetooth::mojom::GattResult input, ::bluetooth::mojom::GattResult* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::bluetooth::mojom::GattResult, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::bluetooth::mojom::GattResult, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::bluetooth::mojom::GattResult>(input), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::bluetooth::mojom::RSSIWrapperDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::bluetooth::mojom::RSSIWrapperDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::bluetooth::mojom::internal::RSSIWrapper_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    (*output)->value = CallWithContext(Traits::value, input, custom_context);
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::bluetooth::mojom::internal::RSSIWrapper_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::bluetooth::mojom::RSSIWrapperDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::bluetooth::mojom::DeviceInfoDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::bluetooth::mojom::DeviceInfoDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::bluetooth::mojom::internal::DeviceInfo_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    decltype(CallWithContext(Traits::name, input, custom_context)) in_name = CallWithContext(Traits::name, input, custom_context);
    typename decltype((*output)->name)::BaseType::BufferWriter
        name_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_name, buffer, &name_writer, context);
    (*output)->name.Set(
        name_writer.is_null() ? nullptr : name_writer.data());
    decltype(CallWithContext(Traits::name_for_display, input, custom_context)) in_name_for_display = CallWithContext(Traits::name_for_display, input, custom_context);
    typename decltype((*output)->name_for_display)::BaseType::BufferWriter
        name_for_display_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_name_for_display, buffer, &name_for_display_writer, context);
    (*output)->name_for_display.Set(
        name_for_display_writer.is_null() ? nullptr : name_for_display_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->name_for_display.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null name_for_display in DeviceInfo struct");
    decltype(CallWithContext(Traits::address, input, custom_context)) in_address = CallWithContext(Traits::address, input, custom_context);
    typename decltype((*output)->address)::BaseType::BufferWriter
        address_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_address, buffer, &address_writer, context);
    (*output)->address.Set(
        address_writer.is_null() ? nullptr : address_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->address.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null address in DeviceInfo struct");
    (*output)->is_gatt_connected = CallWithContext(Traits::is_gatt_connected, input, custom_context);
    decltype(CallWithContext(Traits::rssi, input, custom_context)) in_rssi = CallWithContext(Traits::rssi, input, custom_context);
    typename decltype((*output)->rssi)::BaseType::BufferWriter
        rssi_writer;
    mojo::internal::Serialize<::bluetooth::mojom::RSSIWrapperDataView>(
        in_rssi, buffer, &rssi_writer, context);
    (*output)->rssi.Set(
        rssi_writer.is_null() ? nullptr : rssi_writer.data());
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::bluetooth::mojom::internal::DeviceInfo_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::bluetooth::mojom::DeviceInfoDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::bluetooth::mojom::ServiceInfoDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::bluetooth::mojom::ServiceInfoDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::bluetooth::mojom::internal::ServiceInfo_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    decltype(CallWithContext(Traits::id, input, custom_context)) in_id = CallWithContext(Traits::id, input, custom_context);
    typename decltype((*output)->id)::BaseType::BufferWriter
        id_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_id, buffer, &id_writer, context);
    (*output)->id.Set(
        id_writer.is_null() ? nullptr : id_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->id.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null id in ServiceInfo struct");
    decltype(CallWithContext(Traits::uuid, input, custom_context)) in_uuid = CallWithContext(Traits::uuid, input, custom_context);
    typename decltype((*output)->uuid)::BaseType::BufferWriter
        uuid_writer;
    mojo::internal::Serialize<::bluetooth::mojom::UUIDDataView>(
        in_uuid, buffer, &uuid_writer, context);
    (*output)->uuid.Set(
        uuid_writer.is_null() ? nullptr : uuid_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->uuid.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null uuid in ServiceInfo struct");
    (*output)->is_primary = CallWithContext(Traits::is_primary, input, custom_context);
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::bluetooth::mojom::internal::ServiceInfo_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::bluetooth::mojom::ServiceInfoDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::bluetooth::mojom::CharacteristicInfoDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::bluetooth::mojom::CharacteristicInfoDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::bluetooth::mojom::internal::CharacteristicInfo_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    decltype(CallWithContext(Traits::id, input, custom_context)) in_id = CallWithContext(Traits::id, input, custom_context);
    typename decltype((*output)->id)::BaseType::BufferWriter
        id_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_id, buffer, &id_writer, context);
    (*output)->id.Set(
        id_writer.is_null() ? nullptr : id_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->id.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null id in CharacteristicInfo struct");
    decltype(CallWithContext(Traits::uuid, input, custom_context)) in_uuid = CallWithContext(Traits::uuid, input, custom_context);
    typename decltype((*output)->uuid)::BaseType::BufferWriter
        uuid_writer;
    mojo::internal::Serialize<::bluetooth::mojom::UUIDDataView>(
        in_uuid, buffer, &uuid_writer, context);
    (*output)->uuid.Set(
        uuid_writer.is_null() ? nullptr : uuid_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->uuid.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null uuid in CharacteristicInfo struct");
    (*output)->properties = CallWithContext(Traits::properties, input, custom_context);
    decltype(CallWithContext(Traits::last_known_value, input, custom_context)) in_last_known_value = CallWithContext(Traits::last_known_value, input, custom_context);
    typename decltype((*output)->last_known_value)::BaseType::BufferWriter
        last_known_value_writer;
    const mojo::internal::ContainerValidateParams last_known_value_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
        in_last_known_value, buffer, &last_known_value_writer, &last_known_value_validate_params,
        context);
    (*output)->last_known_value.Set(
        last_known_value_writer.is_null() ? nullptr : last_known_value_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->last_known_value.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null last_known_value in CharacteristicInfo struct");
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::bluetooth::mojom::internal::CharacteristicInfo_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::bluetooth::mojom::CharacteristicInfoDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::bluetooth::mojom::DescriptorInfoDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::bluetooth::mojom::DescriptorInfoDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::bluetooth::mojom::internal::DescriptorInfo_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    decltype(CallWithContext(Traits::id, input, custom_context)) in_id = CallWithContext(Traits::id, input, custom_context);
    typename decltype((*output)->id)::BaseType::BufferWriter
        id_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_id, buffer, &id_writer, context);
    (*output)->id.Set(
        id_writer.is_null() ? nullptr : id_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->id.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null id in DescriptorInfo struct");
    decltype(CallWithContext(Traits::uuid, input, custom_context)) in_uuid = CallWithContext(Traits::uuid, input, custom_context);
    typename decltype((*output)->uuid)::BaseType::BufferWriter
        uuid_writer;
    mojo::internal::Serialize<::bluetooth::mojom::UUIDDataView>(
        in_uuid, buffer, &uuid_writer, context);
    (*output)->uuid.Set(
        uuid_writer.is_null() ? nullptr : uuid_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->uuid.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null uuid in DescriptorInfo struct");
    decltype(CallWithContext(Traits::last_known_value, input, custom_context)) in_last_known_value = CallWithContext(Traits::last_known_value, input, custom_context);
    typename decltype((*output)->last_known_value)::BaseType::BufferWriter
        last_known_value_writer;
    const mojo::internal::ContainerValidateParams last_known_value_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
        in_last_known_value, buffer, &last_known_value_writer, &last_known_value_validate_params,
        context);
    (*output)->last_known_value.Set(
        last_known_value_writer.is_null() ? nullptr : last_known_value_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->last_known_value.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null last_known_value in DescriptorInfo struct");
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::bluetooth::mojom::internal::DescriptorInfo_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::bluetooth::mojom::DescriptorInfoDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace bluetooth {
namespace mojom {



inline void DeviceInfoDataView::GetNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->name.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void DeviceInfoDataView::GetNameForDisplayDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->name_for_display.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void DeviceInfoDataView::GetAddressDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->address.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void DeviceInfoDataView::GetRssiDataView(
    RSSIWrapperDataView* output) {
  auto pointer = data_->rssi.Get();
  *output = RSSIWrapperDataView(pointer, context_);
}


inline void ServiceInfoDataView::GetIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->id.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void ServiceInfoDataView::GetUuidDataView(
    ::bluetooth::mojom::UUIDDataView* output) {
  auto pointer = data_->uuid.Get();
  *output = ::bluetooth::mojom::UUIDDataView(pointer, context_);
}


inline void CharacteristicInfoDataView::GetIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->id.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void CharacteristicInfoDataView::GetUuidDataView(
    ::bluetooth::mojom::UUIDDataView* output) {
  auto pointer = data_->uuid.Get();
  *output = ::bluetooth::mojom::UUIDDataView(pointer, context_);
}
inline void CharacteristicInfoDataView::GetLastKnownValueDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->last_known_value.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}


inline void DescriptorInfoDataView::GetIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->id.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void DescriptorInfoDataView::GetUuidDataView(
    ::bluetooth::mojom::UUIDDataView* output) {
  auto pointer = data_->uuid.Get();
  *output = ::bluetooth::mojom::UUIDDataView(pointer, context_);
}
inline void DescriptorInfoDataView::GetLastKnownValueDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->last_known_value.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}






inline void Device_GetInfo_ResponseParamsDataView::GetInfoDataView(
    DeviceInfoDataView* output) {
  auto pointer = data_->info.Get();
  *output = DeviceInfoDataView(pointer, context_);
}




inline void Device_GetServices_ResponseParamsDataView::GetServicesDataView(
    mojo::ArrayDataView<ServiceInfoDataView>* output) {
  auto pointer = data_->services.Get();
  *output = mojo::ArrayDataView<ServiceInfoDataView>(pointer, context_);
}


inline void Device_GetCharacteristics_ParamsDataView::GetServiceIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->service_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void Device_GetCharacteristics_ResponseParamsDataView::GetCharacteristicsDataView(
    mojo::ArrayDataView<CharacteristicInfoDataView>* output) {
  auto pointer = data_->characteristics.Get();
  *output = mojo::ArrayDataView<CharacteristicInfoDataView>(pointer, context_);
}


inline void Device_ReadValueForCharacteristic_ParamsDataView::GetServiceIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->service_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void Device_ReadValueForCharacteristic_ParamsDataView::GetCharacteristicIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->characteristic_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void Device_ReadValueForCharacteristic_ResponseParamsDataView::GetValueDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->value.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}


inline void Device_WriteValueForCharacteristic_ParamsDataView::GetServiceIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->service_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void Device_WriteValueForCharacteristic_ParamsDataView::GetCharacteristicIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->characteristic_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void Device_WriteValueForCharacteristic_ParamsDataView::GetValueDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->value.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}




inline void Device_GetDescriptors_ParamsDataView::GetServiceIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->service_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void Device_GetDescriptors_ParamsDataView::GetCharacteristicIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->characteristic_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void Device_GetDescriptors_ResponseParamsDataView::GetDescriptorsDataView(
    mojo::ArrayDataView<DescriptorInfoDataView>* output) {
  auto pointer = data_->descriptors.Get();
  *output = mojo::ArrayDataView<DescriptorInfoDataView>(pointer, context_);
}


inline void Device_ReadValueForDescriptor_ParamsDataView::GetServiceIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->service_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void Device_ReadValueForDescriptor_ParamsDataView::GetCharacteristicIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->characteristic_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void Device_ReadValueForDescriptor_ParamsDataView::GetDescriptorIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->descriptor_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void Device_ReadValueForDescriptor_ResponseParamsDataView::GetValueDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->value.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}


inline void Device_WriteValueForDescriptor_ParamsDataView::GetServiceIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->service_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void Device_WriteValueForDescriptor_ParamsDataView::GetCharacteristicIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->characteristic_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void Device_WriteValueForDescriptor_ParamsDataView::GetDescriptorIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->descriptor_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void Device_WriteValueForDescriptor_ParamsDataView::GetValueDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->value.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}





}  // namespace mojom
}  // namespace bluetooth

#endif  // DEVICE_BLUETOOTH_PUBLIC_MOJOM_DEVICE_MOJOM_SHARED_H_
