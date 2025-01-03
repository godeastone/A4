// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_BLUETOOTH_WEB_BLUETOOTH_MOJOM_SHARED_H_
#define THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_BLUETOOTH_WEB_BLUETOOTH_MOJOM_SHARED_H_

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
#include "third_party/blink/public/platform/modules/bluetooth/web_bluetooth.mojom-shared-internal.h"
#include "device/bluetooth/public/mojom/uuid.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "base/component_export.h"


namespace blink {
namespace mojom {
class WebBluetoothLeScanFilterDataView;

class WebBluetoothRequestDeviceOptionsDataView;

class WebBluetoothDeviceIdDataView;

class WebBluetoothDeviceDataView;

class WebBluetoothRemoteGATTServiceDataView;

class WebBluetoothRemoteGATTCharacteristicDataView;

class WebBluetoothRemoteGATTDescriptorDataView;



}  // namespace mojom
}  // namespace blink

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::blink::mojom::WebBluetoothLeScanFilterDataView> {
  using Data = ::blink::mojom::internal::WebBluetoothLeScanFilter_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::blink::mojom::WebBluetoothRequestDeviceOptionsDataView> {
  using Data = ::blink::mojom::internal::WebBluetoothRequestDeviceOptions_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::blink::mojom::WebBluetoothDeviceIdDataView> {
  using Data = ::blink::mojom::internal::WebBluetoothDeviceId_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::blink::mojom::WebBluetoothDeviceDataView> {
  using Data = ::blink::mojom::internal::WebBluetoothDevice_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::blink::mojom::WebBluetoothRemoteGATTServiceDataView> {
  using Data = ::blink::mojom::internal::WebBluetoothRemoteGATTService_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::blink::mojom::WebBluetoothRemoteGATTCharacteristicDataView> {
  using Data = ::blink::mojom::internal::WebBluetoothRemoteGATTCharacteristic_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::blink::mojom::WebBluetoothRemoteGATTDescriptorDataView> {
  using Data = ::blink::mojom::internal::WebBluetoothRemoteGATTDescriptor_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace blink {
namespace mojom {

enum class WebBluetoothResult : int32_t {
  SUCCESS,
  GATT_INVALID_ATTRIBUTE_LENGTH,
  SERVICE_NO_LONGER_EXISTS,
  CHARACTERISTIC_NO_LONGER_EXISTS,
  CONNECT_ALREADY_IN_PROGRESS,
  CONNECT_AUTH_CANCELED,
  CONNECT_AUTH_FAILED,
  CONNECT_AUTH_REJECTED,
  CONNECT_AUTH_TIMEOUT,
  CONNECT_UNKNOWN_ERROR,
  CONNECT_UNKNOWN_FAILURE,
  CONNECT_UNSUPPORTED_DEVICE,
  DEVICE_NO_LONGER_IN_RANGE,
  GATT_NOT_PAIRED,
  GATT_OPERATION_IN_PROGRESS,
  NO_BLUETOOTH_ADAPTER,
  CHOSEN_DEVICE_VANISHED,
  CHOOSER_CANCELLED,
  CHOOSER_NOT_SHOWN_API_GLOBALLY_DISABLED,
  CHOOSER_NOT_SHOWN_API_LOCALLY_DISABLED,
  CHOOSER_NOT_SHOWN_USER_DENIED_PERMISSION_TO_SCAN,
  SERVICE_NOT_FOUND,
  NO_SERVICES_FOUND,
  CHARACTERISTIC_NOT_FOUND,
  NO_CHARACTERISTICS_FOUND,
  DESCRIPTOR_NOT_FOUND,
  NO_DESCRIPTORS_FOUND,
  WEB_BLUETOOTH_NOT_SUPPORTED,
  BLUETOOTH_LOW_ENERGY_NOT_AVAILABLE,
  GATT_UNKNOWN_ERROR,
  GATT_UNKNOWN_FAILURE,
  GATT_NOT_PERMITTED,
  GATT_NOT_SUPPORTED,
  GATT_UNTRANSLATED_ERROR_CODE,
  GATT_NOT_AUTHORIZED,
  BLOCKLISTED_DESCRIPTOR_UUID,
  BLOCKLISTED_CHARACTERISTIC_UUID,
  BLOCKLISTED_READ,
  BLOCKLISTED_WRITE,
  NOT_ALLOWED_TO_ACCESS_ANY_SERVICE,
  NOT_ALLOWED_TO_ACCESS_SERVICE,
  REQUEST_DEVICE_WITH_BLOCKLISTED_UUID,
  REQUEST_DEVICE_FROM_CROSS_ORIGIN_IFRAME,
  DESCRIPTOR_NO_LONGER_EXISTS,
  kMinValue = 0,
  kMaxValue = 43,
};

inline std::ostream& operator<<(std::ostream& os, WebBluetoothResult value) {
  switch(value) {
    case WebBluetoothResult::SUCCESS:
      return os << "WebBluetoothResult::SUCCESS";
    case WebBluetoothResult::GATT_INVALID_ATTRIBUTE_LENGTH:
      return os << "WebBluetoothResult::GATT_INVALID_ATTRIBUTE_LENGTH";
    case WebBluetoothResult::SERVICE_NO_LONGER_EXISTS:
      return os << "WebBluetoothResult::SERVICE_NO_LONGER_EXISTS";
    case WebBluetoothResult::CHARACTERISTIC_NO_LONGER_EXISTS:
      return os << "WebBluetoothResult::CHARACTERISTIC_NO_LONGER_EXISTS";
    case WebBluetoothResult::CONNECT_ALREADY_IN_PROGRESS:
      return os << "WebBluetoothResult::CONNECT_ALREADY_IN_PROGRESS";
    case WebBluetoothResult::CONNECT_AUTH_CANCELED:
      return os << "WebBluetoothResult::CONNECT_AUTH_CANCELED";
    case WebBluetoothResult::CONNECT_AUTH_FAILED:
      return os << "WebBluetoothResult::CONNECT_AUTH_FAILED";
    case WebBluetoothResult::CONNECT_AUTH_REJECTED:
      return os << "WebBluetoothResult::CONNECT_AUTH_REJECTED";
    case WebBluetoothResult::CONNECT_AUTH_TIMEOUT:
      return os << "WebBluetoothResult::CONNECT_AUTH_TIMEOUT";
    case WebBluetoothResult::CONNECT_UNKNOWN_ERROR:
      return os << "WebBluetoothResult::CONNECT_UNKNOWN_ERROR";
    case WebBluetoothResult::CONNECT_UNKNOWN_FAILURE:
      return os << "WebBluetoothResult::CONNECT_UNKNOWN_FAILURE";
    case WebBluetoothResult::CONNECT_UNSUPPORTED_DEVICE:
      return os << "WebBluetoothResult::CONNECT_UNSUPPORTED_DEVICE";
    case WebBluetoothResult::DEVICE_NO_LONGER_IN_RANGE:
      return os << "WebBluetoothResult::DEVICE_NO_LONGER_IN_RANGE";
    case WebBluetoothResult::GATT_NOT_PAIRED:
      return os << "WebBluetoothResult::GATT_NOT_PAIRED";
    case WebBluetoothResult::GATT_OPERATION_IN_PROGRESS:
      return os << "WebBluetoothResult::GATT_OPERATION_IN_PROGRESS";
    case WebBluetoothResult::NO_BLUETOOTH_ADAPTER:
      return os << "WebBluetoothResult::NO_BLUETOOTH_ADAPTER";
    case WebBluetoothResult::CHOSEN_DEVICE_VANISHED:
      return os << "WebBluetoothResult::CHOSEN_DEVICE_VANISHED";
    case WebBluetoothResult::CHOOSER_CANCELLED:
      return os << "WebBluetoothResult::CHOOSER_CANCELLED";
    case WebBluetoothResult::CHOOSER_NOT_SHOWN_API_GLOBALLY_DISABLED:
      return os << "WebBluetoothResult::CHOOSER_NOT_SHOWN_API_GLOBALLY_DISABLED";
    case WebBluetoothResult::CHOOSER_NOT_SHOWN_API_LOCALLY_DISABLED:
      return os << "WebBluetoothResult::CHOOSER_NOT_SHOWN_API_LOCALLY_DISABLED";
    case WebBluetoothResult::CHOOSER_NOT_SHOWN_USER_DENIED_PERMISSION_TO_SCAN:
      return os << "WebBluetoothResult::CHOOSER_NOT_SHOWN_USER_DENIED_PERMISSION_TO_SCAN";
    case WebBluetoothResult::SERVICE_NOT_FOUND:
      return os << "WebBluetoothResult::SERVICE_NOT_FOUND";
    case WebBluetoothResult::NO_SERVICES_FOUND:
      return os << "WebBluetoothResult::NO_SERVICES_FOUND";
    case WebBluetoothResult::CHARACTERISTIC_NOT_FOUND:
      return os << "WebBluetoothResult::CHARACTERISTIC_NOT_FOUND";
    case WebBluetoothResult::NO_CHARACTERISTICS_FOUND:
      return os << "WebBluetoothResult::NO_CHARACTERISTICS_FOUND";
    case WebBluetoothResult::DESCRIPTOR_NOT_FOUND:
      return os << "WebBluetoothResult::DESCRIPTOR_NOT_FOUND";
    case WebBluetoothResult::NO_DESCRIPTORS_FOUND:
      return os << "WebBluetoothResult::NO_DESCRIPTORS_FOUND";
    case WebBluetoothResult::WEB_BLUETOOTH_NOT_SUPPORTED:
      return os << "WebBluetoothResult::WEB_BLUETOOTH_NOT_SUPPORTED";
    case WebBluetoothResult::BLUETOOTH_LOW_ENERGY_NOT_AVAILABLE:
      return os << "WebBluetoothResult::BLUETOOTH_LOW_ENERGY_NOT_AVAILABLE";
    case WebBluetoothResult::GATT_UNKNOWN_ERROR:
      return os << "WebBluetoothResult::GATT_UNKNOWN_ERROR";
    case WebBluetoothResult::GATT_UNKNOWN_FAILURE:
      return os << "WebBluetoothResult::GATT_UNKNOWN_FAILURE";
    case WebBluetoothResult::GATT_NOT_PERMITTED:
      return os << "WebBluetoothResult::GATT_NOT_PERMITTED";
    case WebBluetoothResult::GATT_NOT_SUPPORTED:
      return os << "WebBluetoothResult::GATT_NOT_SUPPORTED";
    case WebBluetoothResult::GATT_UNTRANSLATED_ERROR_CODE:
      return os << "WebBluetoothResult::GATT_UNTRANSLATED_ERROR_CODE";
    case WebBluetoothResult::GATT_NOT_AUTHORIZED:
      return os << "WebBluetoothResult::GATT_NOT_AUTHORIZED";
    case WebBluetoothResult::BLOCKLISTED_DESCRIPTOR_UUID:
      return os << "WebBluetoothResult::BLOCKLISTED_DESCRIPTOR_UUID";
    case WebBluetoothResult::BLOCKLISTED_CHARACTERISTIC_UUID:
      return os << "WebBluetoothResult::BLOCKLISTED_CHARACTERISTIC_UUID";
    case WebBluetoothResult::BLOCKLISTED_READ:
      return os << "WebBluetoothResult::BLOCKLISTED_READ";
    case WebBluetoothResult::BLOCKLISTED_WRITE:
      return os << "WebBluetoothResult::BLOCKLISTED_WRITE";
    case WebBluetoothResult::NOT_ALLOWED_TO_ACCESS_ANY_SERVICE:
      return os << "WebBluetoothResult::NOT_ALLOWED_TO_ACCESS_ANY_SERVICE";
    case WebBluetoothResult::NOT_ALLOWED_TO_ACCESS_SERVICE:
      return os << "WebBluetoothResult::NOT_ALLOWED_TO_ACCESS_SERVICE";
    case WebBluetoothResult::REQUEST_DEVICE_WITH_BLOCKLISTED_UUID:
      return os << "WebBluetoothResult::REQUEST_DEVICE_WITH_BLOCKLISTED_UUID";
    case WebBluetoothResult::REQUEST_DEVICE_FROM_CROSS_ORIGIN_IFRAME:
      return os << "WebBluetoothResult::REQUEST_DEVICE_FROM_CROSS_ORIGIN_IFRAME";
    case WebBluetoothResult::DESCRIPTOR_NO_LONGER_EXISTS:
      return os << "WebBluetoothResult::DESCRIPTOR_NO_LONGER_EXISTS";
    default:
      return os << "Unknown WebBluetoothResult value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(WebBluetoothResult value) {
  return internal::WebBluetoothResult_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

enum class WebBluetoothGATTQueryQuantity : int32_t {
  SINGLE,
  MULTIPLE,
  kMinValue = 0,
  kMaxValue = 1,
};

inline std::ostream& operator<<(std::ostream& os, WebBluetoothGATTQueryQuantity value) {
  switch(value) {
    case WebBluetoothGATTQueryQuantity::SINGLE:
      return os << "WebBluetoothGATTQueryQuantity::SINGLE";
    case WebBluetoothGATTQueryQuantity::MULTIPLE:
      return os << "WebBluetoothGATTQueryQuantity::MULTIPLE";
    default:
      return os << "Unknown WebBluetoothGATTQueryQuantity value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(WebBluetoothGATTQueryQuantity value) {
  return internal::WebBluetoothGATTQueryQuantity_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
// Interface base classes. They are used for type safety check.
class WebBluetoothServiceInterfaceBase {};

using WebBluetoothServicePtrDataView =
    mojo::InterfacePtrDataView<WebBluetoothServiceInterfaceBase>;
using WebBluetoothServiceRequestDataView =
    mojo::InterfaceRequestDataView<WebBluetoothServiceInterfaceBase>;
using WebBluetoothServiceAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<WebBluetoothServiceInterfaceBase>;
using WebBluetoothServiceAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<WebBluetoothServiceInterfaceBase>;
class WebBluetoothServerClientInterfaceBase {};

using WebBluetoothServerClientPtrDataView =
    mojo::InterfacePtrDataView<WebBluetoothServerClientInterfaceBase>;
using WebBluetoothServerClientRequestDataView =
    mojo::InterfaceRequestDataView<WebBluetoothServerClientInterfaceBase>;
using WebBluetoothServerClientAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<WebBluetoothServerClientInterfaceBase>;
using WebBluetoothServerClientAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<WebBluetoothServerClientInterfaceBase>;
class WebBluetoothCharacteristicClientInterfaceBase {};

using WebBluetoothCharacteristicClientPtrDataView =
    mojo::InterfacePtrDataView<WebBluetoothCharacteristicClientInterfaceBase>;
using WebBluetoothCharacteristicClientRequestDataView =
    mojo::InterfaceRequestDataView<WebBluetoothCharacteristicClientInterfaceBase>;
using WebBluetoothCharacteristicClientAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<WebBluetoothCharacteristicClientInterfaceBase>;
using WebBluetoothCharacteristicClientAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<WebBluetoothCharacteristicClientInterfaceBase>;
class WebBluetoothLeScanFilterDataView {
 public:
  WebBluetoothLeScanFilterDataView() {}

  WebBluetoothLeScanFilterDataView(
      internal::WebBluetoothLeScanFilter_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetServicesDataView(
      mojo::ArrayDataView<::bluetooth::mojom::UUIDDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadServices(UserType* output) {
    auto* pointer = data_->services.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::bluetooth::mojom::UUIDDataView>>(
        pointer, output, context_);
  }
  inline void GetNameDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadName(UserType* output) {
    auto* pointer = data_->name.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetNamePrefixDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadNamePrefix(UserType* output) {
    auto* pointer = data_->name_prefix.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::WebBluetoothLeScanFilter_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class WebBluetoothRequestDeviceOptionsDataView {
 public:
  WebBluetoothRequestDeviceOptionsDataView() {}

  WebBluetoothRequestDeviceOptionsDataView(
      internal::WebBluetoothRequestDeviceOptions_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetFiltersDataView(
      mojo::ArrayDataView<WebBluetoothLeScanFilterDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFilters(UserType* output) {
    auto* pointer = data_->filters.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::blink::mojom::WebBluetoothLeScanFilterDataView>>(
        pointer, output, context_);
  }
  inline void GetOptionalServicesDataView(
      mojo::ArrayDataView<::bluetooth::mojom::UUIDDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadOptionalServices(UserType* output) {
    auto* pointer = data_->optional_services.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::bluetooth::mojom::UUIDDataView>>(
        pointer, output, context_);
  }
  bool accept_all_devices() const {
    return data_->accept_all_devices;
  }
 private:
  internal::WebBluetoothRequestDeviceOptions_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class WebBluetoothDeviceIdDataView {
 public:
  WebBluetoothDeviceIdDataView() {}

  WebBluetoothDeviceIdDataView(
      internal::WebBluetoothDeviceId_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetDeviceIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDeviceId(UserType* output) {
    auto* pointer = data_->device_id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::WebBluetoothDeviceId_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class WebBluetoothDeviceDataView {
 public:
  WebBluetoothDeviceDataView() {}

  WebBluetoothDeviceDataView(
      internal::WebBluetoothDevice_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetIdDataView(
      WebBluetoothDeviceIdDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadId(UserType* output) {
    auto* pointer = data_->id.Get();
    return mojo::internal::Deserialize<::blink::mojom::WebBluetoothDeviceIdDataView>(
        pointer, output, context_);
  }
  inline void GetNameDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadName(UserType* output) {
    auto* pointer = data_->name.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::WebBluetoothDevice_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class WebBluetoothRemoteGATTServiceDataView {
 public:
  WebBluetoothRemoteGATTServiceDataView() {}

  WebBluetoothRemoteGATTServiceDataView(
      internal::WebBluetoothRemoteGATTService_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetInstanceIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadInstanceId(UserType* output) {
    auto* pointer = data_->instance_id.Get();
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
 private:
  internal::WebBluetoothRemoteGATTService_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class WebBluetoothRemoteGATTCharacteristicDataView {
 public:
  WebBluetoothRemoteGATTCharacteristicDataView() {}

  WebBluetoothRemoteGATTCharacteristicDataView(
      internal::WebBluetoothRemoteGATTCharacteristic_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetInstanceIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadInstanceId(UserType* output) {
    auto* pointer = data_->instance_id.Get();
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
 private:
  internal::WebBluetoothRemoteGATTCharacteristic_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class WebBluetoothRemoteGATTDescriptorDataView {
 public:
  WebBluetoothRemoteGATTDescriptorDataView() {}

  WebBluetoothRemoteGATTDescriptorDataView(
      internal::WebBluetoothRemoteGATTDescriptor_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetInstanceIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadInstanceId(UserType* output) {
    auto* pointer = data_->instance_id.Get();
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
 private:
  internal::WebBluetoothRemoteGATTDescriptor_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class WebBluetoothService_RequestDevice_ParamsDataView {
 public:
  WebBluetoothService_RequestDevice_ParamsDataView() {}

  WebBluetoothService_RequestDevice_ParamsDataView(
      internal::WebBluetoothService_RequestDevice_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetOptionsDataView(
      WebBluetoothRequestDeviceOptionsDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadOptions(UserType* output) {
    auto* pointer = data_->options.Get();
    return mojo::internal::Deserialize<::blink::mojom::WebBluetoothRequestDeviceOptionsDataView>(
        pointer, output, context_);
  }
 private:
  internal::WebBluetoothService_RequestDevice_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class WebBluetoothService_RequestDevice_ResponseParamsDataView {
 public:
  WebBluetoothService_RequestDevice_ResponseParamsDataView() {}

  WebBluetoothService_RequestDevice_ResponseParamsDataView(
      internal::WebBluetoothService_RequestDevice_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadResult(UserType* output) const {
    auto data_value = data_->result;
    return mojo::internal::Deserialize<::blink::mojom::WebBluetoothResult>(
        data_value, output);
  }

  WebBluetoothResult result() const {
    return static_cast<WebBluetoothResult>(data_->result);
  }
  inline void GetDeviceDataView(
      WebBluetoothDeviceDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDevice(UserType* output) {
    auto* pointer = data_->device.Get();
    return mojo::internal::Deserialize<::blink::mojom::WebBluetoothDeviceDataView>(
        pointer, output, context_);
  }
 private:
  internal::WebBluetoothService_RequestDevice_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class WebBluetoothService_RemoteServerConnect_ParamsDataView {
 public:
  WebBluetoothService_RemoteServerConnect_ParamsDataView() {}

  WebBluetoothService_RemoteServerConnect_ParamsDataView(
      internal::WebBluetoothService_RemoteServerConnect_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetDeviceIdDataView(
      WebBluetoothDeviceIdDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDeviceId(UserType* output) {
    auto* pointer = data_->device_id.Get();
    return mojo::internal::Deserialize<::blink::mojom::WebBluetoothDeviceIdDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  UserType TakeClient() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::blink::mojom::WebBluetoothServerClientAssociatedPtrInfoDataView>(
            &data_->client, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::WebBluetoothService_RemoteServerConnect_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class WebBluetoothService_RemoteServerConnect_ResponseParamsDataView {
 public:
  WebBluetoothService_RemoteServerConnect_ResponseParamsDataView() {}

  WebBluetoothService_RemoteServerConnect_ResponseParamsDataView(
      internal::WebBluetoothService_RemoteServerConnect_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadResult(UserType* output) const {
    auto data_value = data_->result;
    return mojo::internal::Deserialize<::blink::mojom::WebBluetoothResult>(
        data_value, output);
  }

  WebBluetoothResult result() const {
    return static_cast<WebBluetoothResult>(data_->result);
  }
 private:
  internal::WebBluetoothService_RemoteServerConnect_ResponseParams_Data* data_ = nullptr;
};

class WebBluetoothService_RemoteServerDisconnect_ParamsDataView {
 public:
  WebBluetoothService_RemoteServerDisconnect_ParamsDataView() {}

  WebBluetoothService_RemoteServerDisconnect_ParamsDataView(
      internal::WebBluetoothService_RemoteServerDisconnect_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetDeviceIdDataView(
      WebBluetoothDeviceIdDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDeviceId(UserType* output) {
    auto* pointer = data_->device_id.Get();
    return mojo::internal::Deserialize<::blink::mojom::WebBluetoothDeviceIdDataView>(
        pointer, output, context_);
  }
 private:
  internal::WebBluetoothService_RemoteServerDisconnect_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class WebBluetoothService_RemoteServerGetPrimaryServices_ParamsDataView {
 public:
  WebBluetoothService_RemoteServerGetPrimaryServices_ParamsDataView() {}

  WebBluetoothService_RemoteServerGetPrimaryServices_ParamsDataView(
      internal::WebBluetoothService_RemoteServerGetPrimaryServices_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetDeviceIdDataView(
      WebBluetoothDeviceIdDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDeviceId(UserType* output) {
    auto* pointer = data_->device_id.Get();
    return mojo::internal::Deserialize<::blink::mojom::WebBluetoothDeviceIdDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadQuantity(UserType* output) const {
    auto data_value = data_->quantity;
    return mojo::internal::Deserialize<::blink::mojom::WebBluetoothGATTQueryQuantity>(
        data_value, output);
  }

  WebBluetoothGATTQueryQuantity quantity() const {
    return static_cast<WebBluetoothGATTQueryQuantity>(data_->quantity);
  }
  inline void GetServicesUuidDataView(
      ::bluetooth::mojom::UUIDDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadServicesUuid(UserType* output) {
    auto* pointer = data_->services_uuid.Get();
    return mojo::internal::Deserialize<::bluetooth::mojom::UUIDDataView>(
        pointer, output, context_);
  }
 private:
  internal::WebBluetoothService_RemoteServerGetPrimaryServices_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class WebBluetoothService_RemoteServerGetPrimaryServices_ResponseParamsDataView {
 public:
  WebBluetoothService_RemoteServerGetPrimaryServices_ResponseParamsDataView() {}

  WebBluetoothService_RemoteServerGetPrimaryServices_ResponseParamsDataView(
      internal::WebBluetoothService_RemoteServerGetPrimaryServices_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadResult(UserType* output) const {
    auto data_value = data_->result;
    return mojo::internal::Deserialize<::blink::mojom::WebBluetoothResult>(
        data_value, output);
  }

  WebBluetoothResult result() const {
    return static_cast<WebBluetoothResult>(data_->result);
  }
  inline void GetServicesDataView(
      mojo::ArrayDataView<WebBluetoothRemoteGATTServiceDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadServices(UserType* output) {
    auto* pointer = data_->services.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::blink::mojom::WebBluetoothRemoteGATTServiceDataView>>(
        pointer, output, context_);
  }
 private:
  internal::WebBluetoothService_RemoteServerGetPrimaryServices_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class WebBluetoothService_RemoteServiceGetCharacteristics_ParamsDataView {
 public:
  WebBluetoothService_RemoteServiceGetCharacteristics_ParamsDataView() {}

  WebBluetoothService_RemoteServiceGetCharacteristics_ParamsDataView(
      internal::WebBluetoothService_RemoteServiceGetCharacteristics_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetServiceInstanceIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadServiceInstanceId(UserType* output) {
    auto* pointer = data_->service_instance_id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadQuantity(UserType* output) const {
    auto data_value = data_->quantity;
    return mojo::internal::Deserialize<::blink::mojom::WebBluetoothGATTQueryQuantity>(
        data_value, output);
  }

  WebBluetoothGATTQueryQuantity quantity() const {
    return static_cast<WebBluetoothGATTQueryQuantity>(data_->quantity);
  }
  inline void GetCharacteristicsUuidDataView(
      ::bluetooth::mojom::UUIDDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCharacteristicsUuid(UserType* output) {
    auto* pointer = data_->characteristics_uuid.Get();
    return mojo::internal::Deserialize<::bluetooth::mojom::UUIDDataView>(
        pointer, output, context_);
  }
 private:
  internal::WebBluetoothService_RemoteServiceGetCharacteristics_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class WebBluetoothService_RemoteServiceGetCharacteristics_ResponseParamsDataView {
 public:
  WebBluetoothService_RemoteServiceGetCharacteristics_ResponseParamsDataView() {}

  WebBluetoothService_RemoteServiceGetCharacteristics_ResponseParamsDataView(
      internal::WebBluetoothService_RemoteServiceGetCharacteristics_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadResult(UserType* output) const {
    auto data_value = data_->result;
    return mojo::internal::Deserialize<::blink::mojom::WebBluetoothResult>(
        data_value, output);
  }

  WebBluetoothResult result() const {
    return static_cast<WebBluetoothResult>(data_->result);
  }
  inline void GetCharacteristicsDataView(
      mojo::ArrayDataView<WebBluetoothRemoteGATTCharacteristicDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCharacteristics(UserType* output) {
    auto* pointer = data_->characteristics.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::blink::mojom::WebBluetoothRemoteGATTCharacteristicDataView>>(
        pointer, output, context_);
  }
 private:
  internal::WebBluetoothService_RemoteServiceGetCharacteristics_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class WebBluetoothService_RemoteCharacteristicReadValue_ParamsDataView {
 public:
  WebBluetoothService_RemoteCharacteristicReadValue_ParamsDataView() {}

  WebBluetoothService_RemoteCharacteristicReadValue_ParamsDataView(
      internal::WebBluetoothService_RemoteCharacteristicReadValue_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetCharacteristicInstanceIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCharacteristicInstanceId(UserType* output) {
    auto* pointer = data_->characteristic_instance_id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::WebBluetoothService_RemoteCharacteristicReadValue_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class WebBluetoothService_RemoteCharacteristicReadValue_ResponseParamsDataView {
 public:
  WebBluetoothService_RemoteCharacteristicReadValue_ResponseParamsDataView() {}

  WebBluetoothService_RemoteCharacteristicReadValue_ResponseParamsDataView(
      internal::WebBluetoothService_RemoteCharacteristicReadValue_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadResult(UserType* output) const {
    auto data_value = data_->result;
    return mojo::internal::Deserialize<::blink::mojom::WebBluetoothResult>(
        data_value, output);
  }

  WebBluetoothResult result() const {
    return static_cast<WebBluetoothResult>(data_->result);
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
  internal::WebBluetoothService_RemoteCharacteristicReadValue_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class WebBluetoothService_RemoteCharacteristicWriteValue_ParamsDataView {
 public:
  WebBluetoothService_RemoteCharacteristicWriteValue_ParamsDataView() {}

  WebBluetoothService_RemoteCharacteristicWriteValue_ParamsDataView(
      internal::WebBluetoothService_RemoteCharacteristicWriteValue_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetCharacteristicInstanceIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCharacteristicInstanceId(UserType* output) {
    auto* pointer = data_->characteristic_instance_id.Get();
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
  internal::WebBluetoothService_RemoteCharacteristicWriteValue_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class WebBluetoothService_RemoteCharacteristicWriteValue_ResponseParamsDataView {
 public:
  WebBluetoothService_RemoteCharacteristicWriteValue_ResponseParamsDataView() {}

  WebBluetoothService_RemoteCharacteristicWriteValue_ResponseParamsDataView(
      internal::WebBluetoothService_RemoteCharacteristicWriteValue_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadResult(UserType* output) const {
    auto data_value = data_->result;
    return mojo::internal::Deserialize<::blink::mojom::WebBluetoothResult>(
        data_value, output);
  }

  WebBluetoothResult result() const {
    return static_cast<WebBluetoothResult>(data_->result);
  }
 private:
  internal::WebBluetoothService_RemoteCharacteristicWriteValue_ResponseParams_Data* data_ = nullptr;
};

class WebBluetoothService_RemoteCharacteristicStartNotifications_ParamsDataView {
 public:
  WebBluetoothService_RemoteCharacteristicStartNotifications_ParamsDataView() {}

  WebBluetoothService_RemoteCharacteristicStartNotifications_ParamsDataView(
      internal::WebBluetoothService_RemoteCharacteristicStartNotifications_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetCharacteristicInstanceIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCharacteristicInstanceId(UserType* output) {
    auto* pointer = data_->characteristic_instance_id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  UserType TakeClient() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::blink::mojom::WebBluetoothCharacteristicClientAssociatedPtrInfoDataView>(
            &data_->client, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::WebBluetoothService_RemoteCharacteristicStartNotifications_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class WebBluetoothService_RemoteCharacteristicStartNotifications_ResponseParamsDataView {
 public:
  WebBluetoothService_RemoteCharacteristicStartNotifications_ResponseParamsDataView() {}

  WebBluetoothService_RemoteCharacteristicStartNotifications_ResponseParamsDataView(
      internal::WebBluetoothService_RemoteCharacteristicStartNotifications_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadResult(UserType* output) const {
    auto data_value = data_->result;
    return mojo::internal::Deserialize<::blink::mojom::WebBluetoothResult>(
        data_value, output);
  }

  WebBluetoothResult result() const {
    return static_cast<WebBluetoothResult>(data_->result);
  }
 private:
  internal::WebBluetoothService_RemoteCharacteristicStartNotifications_ResponseParams_Data* data_ = nullptr;
};

class WebBluetoothService_RemoteCharacteristicStopNotifications_ParamsDataView {
 public:
  WebBluetoothService_RemoteCharacteristicStopNotifications_ParamsDataView() {}

  WebBluetoothService_RemoteCharacteristicStopNotifications_ParamsDataView(
      internal::WebBluetoothService_RemoteCharacteristicStopNotifications_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetCharacteristicInstanceIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCharacteristicInstanceId(UserType* output) {
    auto* pointer = data_->characteristic_instance_id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::WebBluetoothService_RemoteCharacteristicStopNotifications_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class WebBluetoothService_RemoteCharacteristicStopNotifications_ResponseParamsDataView {
 public:
  WebBluetoothService_RemoteCharacteristicStopNotifications_ResponseParamsDataView() {}

  WebBluetoothService_RemoteCharacteristicStopNotifications_ResponseParamsDataView(
      internal::WebBluetoothService_RemoteCharacteristicStopNotifications_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::WebBluetoothService_RemoteCharacteristicStopNotifications_ResponseParams_Data* data_ = nullptr;
};

class WebBluetoothService_RemoteCharacteristicGetDescriptors_ParamsDataView {
 public:
  WebBluetoothService_RemoteCharacteristicGetDescriptors_ParamsDataView() {}

  WebBluetoothService_RemoteCharacteristicGetDescriptors_ParamsDataView(
      internal::WebBluetoothService_RemoteCharacteristicGetDescriptors_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetCharacteristicsInstanceIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCharacteristicsInstanceId(UserType* output) {
    auto* pointer = data_->characteristics_instance_id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadQuantity(UserType* output) const {
    auto data_value = data_->quantity;
    return mojo::internal::Deserialize<::blink::mojom::WebBluetoothGATTQueryQuantity>(
        data_value, output);
  }

  WebBluetoothGATTQueryQuantity quantity() const {
    return static_cast<WebBluetoothGATTQueryQuantity>(data_->quantity);
  }
  inline void GetDescriptorUuidDataView(
      ::bluetooth::mojom::UUIDDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDescriptorUuid(UserType* output) {
    auto* pointer = data_->descriptor_uuid.Get();
    return mojo::internal::Deserialize<::bluetooth::mojom::UUIDDataView>(
        pointer, output, context_);
  }
 private:
  internal::WebBluetoothService_RemoteCharacteristicGetDescriptors_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class WebBluetoothService_RemoteCharacteristicGetDescriptors_ResponseParamsDataView {
 public:
  WebBluetoothService_RemoteCharacteristicGetDescriptors_ResponseParamsDataView() {}

  WebBluetoothService_RemoteCharacteristicGetDescriptors_ResponseParamsDataView(
      internal::WebBluetoothService_RemoteCharacteristicGetDescriptors_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadResult(UserType* output) const {
    auto data_value = data_->result;
    return mojo::internal::Deserialize<::blink::mojom::WebBluetoothResult>(
        data_value, output);
  }

  WebBluetoothResult result() const {
    return static_cast<WebBluetoothResult>(data_->result);
  }
  inline void GetDescriptorsDataView(
      mojo::ArrayDataView<WebBluetoothRemoteGATTDescriptorDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDescriptors(UserType* output) {
    auto* pointer = data_->descriptors.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::blink::mojom::WebBluetoothRemoteGATTDescriptorDataView>>(
        pointer, output, context_);
  }
 private:
  internal::WebBluetoothService_RemoteCharacteristicGetDescriptors_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class WebBluetoothService_RemoteDescriptorReadValue_ParamsDataView {
 public:
  WebBluetoothService_RemoteDescriptorReadValue_ParamsDataView() {}

  WebBluetoothService_RemoteDescriptorReadValue_ParamsDataView(
      internal::WebBluetoothService_RemoteDescriptorReadValue_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetDescriptorInstanceIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDescriptorInstanceId(UserType* output) {
    auto* pointer = data_->descriptor_instance_id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::WebBluetoothService_RemoteDescriptorReadValue_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class WebBluetoothService_RemoteDescriptorReadValue_ResponseParamsDataView {
 public:
  WebBluetoothService_RemoteDescriptorReadValue_ResponseParamsDataView() {}

  WebBluetoothService_RemoteDescriptorReadValue_ResponseParamsDataView(
      internal::WebBluetoothService_RemoteDescriptorReadValue_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadResult(UserType* output) const {
    auto data_value = data_->result;
    return mojo::internal::Deserialize<::blink::mojom::WebBluetoothResult>(
        data_value, output);
  }

  WebBluetoothResult result() const {
    return static_cast<WebBluetoothResult>(data_->result);
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
  internal::WebBluetoothService_RemoteDescriptorReadValue_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class WebBluetoothService_RemoteDescriptorWriteValue_ParamsDataView {
 public:
  WebBluetoothService_RemoteDescriptorWriteValue_ParamsDataView() {}

  WebBluetoothService_RemoteDescriptorWriteValue_ParamsDataView(
      internal::WebBluetoothService_RemoteDescriptorWriteValue_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetDescriptorInstanceIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDescriptorInstanceId(UserType* output) {
    auto* pointer = data_->descriptor_instance_id.Get();
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
  internal::WebBluetoothService_RemoteDescriptorWriteValue_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class WebBluetoothService_RemoteDescriptorWriteValue_ResponseParamsDataView {
 public:
  WebBluetoothService_RemoteDescriptorWriteValue_ResponseParamsDataView() {}

  WebBluetoothService_RemoteDescriptorWriteValue_ResponseParamsDataView(
      internal::WebBluetoothService_RemoteDescriptorWriteValue_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadResult(UserType* output) const {
    auto data_value = data_->result;
    return mojo::internal::Deserialize<::blink::mojom::WebBluetoothResult>(
        data_value, output);
  }

  WebBluetoothResult result() const {
    return static_cast<WebBluetoothResult>(data_->result);
  }
 private:
  internal::WebBluetoothService_RemoteDescriptorWriteValue_ResponseParams_Data* data_ = nullptr;
};

class WebBluetoothServerClient_GATTServerDisconnected_ParamsDataView {
 public:
  WebBluetoothServerClient_GATTServerDisconnected_ParamsDataView() {}

  WebBluetoothServerClient_GATTServerDisconnected_ParamsDataView(
      internal::WebBluetoothServerClient_GATTServerDisconnected_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::WebBluetoothServerClient_GATTServerDisconnected_Params_Data* data_ = nullptr;
};

class WebBluetoothCharacteristicClient_RemoteCharacteristicValueChanged_ParamsDataView {
 public:
  WebBluetoothCharacteristicClient_RemoteCharacteristicValueChanged_ParamsDataView() {}

  WebBluetoothCharacteristicClient_RemoteCharacteristicValueChanged_ParamsDataView(
      internal::WebBluetoothCharacteristicClient_RemoteCharacteristicValueChanged_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetValueDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadValue(UserType* output) {
    auto* pointer = data_->value.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
 private:
  internal::WebBluetoothCharacteristicClient_RemoteCharacteristicValueChanged_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace blink

namespace std {

template <>
struct hash<::blink::mojom::WebBluetoothResult>
    : public mojo::internal::EnumHashImpl<::blink::mojom::WebBluetoothResult> {};

template <>
struct hash<::blink::mojom::WebBluetoothGATTQueryQuantity>
    : public mojo::internal::EnumHashImpl<::blink::mojom::WebBluetoothGATTQueryQuantity> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::blink::mojom::WebBluetoothResult, ::blink::mojom::WebBluetoothResult> {
  static ::blink::mojom::WebBluetoothResult ToMojom(::blink::mojom::WebBluetoothResult input) { return input; }
  static bool FromMojom(::blink::mojom::WebBluetoothResult input, ::blink::mojom::WebBluetoothResult* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::WebBluetoothResult, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::blink::mojom::WebBluetoothResult, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::blink::mojom::WebBluetoothResult>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::blink::mojom::WebBluetoothGATTQueryQuantity, ::blink::mojom::WebBluetoothGATTQueryQuantity> {
  static ::blink::mojom::WebBluetoothGATTQueryQuantity ToMojom(::blink::mojom::WebBluetoothGATTQueryQuantity input) { return input; }
  static bool FromMojom(::blink::mojom::WebBluetoothGATTQueryQuantity input, ::blink::mojom::WebBluetoothGATTQueryQuantity* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::WebBluetoothGATTQueryQuantity, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::blink::mojom::WebBluetoothGATTQueryQuantity, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::blink::mojom::WebBluetoothGATTQueryQuantity>(input), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::WebBluetoothLeScanFilterDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::WebBluetoothLeScanFilterDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::WebBluetoothLeScanFilter_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    decltype(CallWithContext(Traits::services, input, custom_context)) in_services = CallWithContext(Traits::services, input, custom_context);
    typename decltype((*output)->services)::BaseType::BufferWriter
        services_writer;
    const mojo::internal::ContainerValidateParams services_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::bluetooth::mojom::UUIDDataView>>(
        in_services, buffer, &services_writer, &services_validate_params,
        context);
    (*output)->services.Set(
        services_writer.is_null() ? nullptr : services_writer.data());
    decltype(CallWithContext(Traits::name, input, custom_context)) in_name = CallWithContext(Traits::name, input, custom_context);
    typename decltype((*output)->name)::BaseType::BufferWriter
        name_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_name, buffer, &name_writer, context);
    (*output)->name.Set(
        name_writer.is_null() ? nullptr : name_writer.data());
    decltype(CallWithContext(Traits::name_prefix, input, custom_context)) in_name_prefix = CallWithContext(Traits::name_prefix, input, custom_context);
    typename decltype((*output)->name_prefix)::BaseType::BufferWriter
        name_prefix_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_name_prefix, buffer, &name_prefix_writer, context);
    (*output)->name_prefix.Set(
        name_prefix_writer.is_null() ? nullptr : name_prefix_writer.data());
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::blink::mojom::internal::WebBluetoothLeScanFilter_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::WebBluetoothLeScanFilterDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::WebBluetoothRequestDeviceOptionsDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::WebBluetoothRequestDeviceOptionsDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::WebBluetoothRequestDeviceOptions_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    decltype(CallWithContext(Traits::filters, input, custom_context)) in_filters = CallWithContext(Traits::filters, input, custom_context);
    typename decltype((*output)->filters)::BaseType::BufferWriter
        filters_writer;
    const mojo::internal::ContainerValidateParams filters_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::blink::mojom::WebBluetoothLeScanFilterDataView>>(
        in_filters, buffer, &filters_writer, &filters_validate_params,
        context);
    (*output)->filters.Set(
        filters_writer.is_null() ? nullptr : filters_writer.data());
    decltype(CallWithContext(Traits::optional_services, input, custom_context)) in_optional_services = CallWithContext(Traits::optional_services, input, custom_context);
    typename decltype((*output)->optional_services)::BaseType::BufferWriter
        optional_services_writer;
    const mojo::internal::ContainerValidateParams optional_services_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::bluetooth::mojom::UUIDDataView>>(
        in_optional_services, buffer, &optional_services_writer, &optional_services_validate_params,
        context);
    (*output)->optional_services.Set(
        optional_services_writer.is_null() ? nullptr : optional_services_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->optional_services.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null optional_services in WebBluetoothRequestDeviceOptions struct");
    (*output)->accept_all_devices = CallWithContext(Traits::accept_all_devices, input, custom_context);
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::blink::mojom::internal::WebBluetoothRequestDeviceOptions_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::WebBluetoothRequestDeviceOptionsDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::WebBluetoothDeviceIdDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::WebBluetoothDeviceIdDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::WebBluetoothDeviceId_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    decltype(CallWithContext(Traits::device_id, input, custom_context)) in_device_id = CallWithContext(Traits::device_id, input, custom_context);
    typename decltype((*output)->device_id)::BaseType::BufferWriter
        device_id_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_device_id, buffer, &device_id_writer, context);
    (*output)->device_id.Set(
        device_id_writer.is_null() ? nullptr : device_id_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->device_id.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null device_id in WebBluetoothDeviceId struct");
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::blink::mojom::internal::WebBluetoothDeviceId_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::WebBluetoothDeviceIdDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::WebBluetoothDeviceDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::WebBluetoothDeviceDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::WebBluetoothDevice_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    decltype(CallWithContext(Traits::id, input, custom_context)) in_id = CallWithContext(Traits::id, input, custom_context);
    typename decltype((*output)->id)::BaseType::BufferWriter
        id_writer;
    mojo::internal::Serialize<::blink::mojom::WebBluetoothDeviceIdDataView>(
        in_id, buffer, &id_writer, context);
    (*output)->id.Set(
        id_writer.is_null() ? nullptr : id_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->id.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null id in WebBluetoothDevice struct");
    decltype(CallWithContext(Traits::name, input, custom_context)) in_name = CallWithContext(Traits::name, input, custom_context);
    typename decltype((*output)->name)::BaseType::BufferWriter
        name_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_name, buffer, &name_writer, context);
    (*output)->name.Set(
        name_writer.is_null() ? nullptr : name_writer.data());
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::blink::mojom::internal::WebBluetoothDevice_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::WebBluetoothDeviceDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::WebBluetoothRemoteGATTServiceDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::WebBluetoothRemoteGATTServiceDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::WebBluetoothRemoteGATTService_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    decltype(CallWithContext(Traits::instance_id, input, custom_context)) in_instance_id = CallWithContext(Traits::instance_id, input, custom_context);
    typename decltype((*output)->instance_id)::BaseType::BufferWriter
        instance_id_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_instance_id, buffer, &instance_id_writer, context);
    (*output)->instance_id.Set(
        instance_id_writer.is_null() ? nullptr : instance_id_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->instance_id.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null instance_id in WebBluetoothRemoteGATTService struct");
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
        "null uuid in WebBluetoothRemoteGATTService struct");
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::blink::mojom::internal::WebBluetoothRemoteGATTService_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::WebBluetoothRemoteGATTServiceDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::WebBluetoothRemoteGATTCharacteristicDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::WebBluetoothRemoteGATTCharacteristicDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::WebBluetoothRemoteGATTCharacteristic_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    decltype(CallWithContext(Traits::instance_id, input, custom_context)) in_instance_id = CallWithContext(Traits::instance_id, input, custom_context);
    typename decltype((*output)->instance_id)::BaseType::BufferWriter
        instance_id_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_instance_id, buffer, &instance_id_writer, context);
    (*output)->instance_id.Set(
        instance_id_writer.is_null() ? nullptr : instance_id_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->instance_id.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null instance_id in WebBluetoothRemoteGATTCharacteristic struct");
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
        "null uuid in WebBluetoothRemoteGATTCharacteristic struct");
    (*output)->properties = CallWithContext(Traits::properties, input, custom_context);
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::blink::mojom::internal::WebBluetoothRemoteGATTCharacteristic_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::WebBluetoothRemoteGATTCharacteristicDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::WebBluetoothRemoteGATTDescriptorDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::WebBluetoothRemoteGATTDescriptorDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::WebBluetoothRemoteGATTDescriptor_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    decltype(CallWithContext(Traits::instance_id, input, custom_context)) in_instance_id = CallWithContext(Traits::instance_id, input, custom_context);
    typename decltype((*output)->instance_id)::BaseType::BufferWriter
        instance_id_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_instance_id, buffer, &instance_id_writer, context);
    (*output)->instance_id.Set(
        instance_id_writer.is_null() ? nullptr : instance_id_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->instance_id.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null instance_id in WebBluetoothRemoteGATTDescriptor struct");
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
        "null uuid in WebBluetoothRemoteGATTDescriptor struct");
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::blink::mojom::internal::WebBluetoothRemoteGATTDescriptor_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::WebBluetoothRemoteGATTDescriptorDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace blink {
namespace mojom {

inline void WebBluetoothLeScanFilterDataView::GetServicesDataView(
    mojo::ArrayDataView<::bluetooth::mojom::UUIDDataView>* output) {
  auto pointer = data_->services.Get();
  *output = mojo::ArrayDataView<::bluetooth::mojom::UUIDDataView>(pointer, context_);
}
inline void WebBluetoothLeScanFilterDataView::GetNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->name.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void WebBluetoothLeScanFilterDataView::GetNamePrefixDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->name_prefix.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void WebBluetoothRequestDeviceOptionsDataView::GetFiltersDataView(
    mojo::ArrayDataView<WebBluetoothLeScanFilterDataView>* output) {
  auto pointer = data_->filters.Get();
  *output = mojo::ArrayDataView<WebBluetoothLeScanFilterDataView>(pointer, context_);
}
inline void WebBluetoothRequestDeviceOptionsDataView::GetOptionalServicesDataView(
    mojo::ArrayDataView<::bluetooth::mojom::UUIDDataView>* output) {
  auto pointer = data_->optional_services.Get();
  *output = mojo::ArrayDataView<::bluetooth::mojom::UUIDDataView>(pointer, context_);
}


inline void WebBluetoothDeviceIdDataView::GetDeviceIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->device_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void WebBluetoothDeviceDataView::GetIdDataView(
    WebBluetoothDeviceIdDataView* output) {
  auto pointer = data_->id.Get();
  *output = WebBluetoothDeviceIdDataView(pointer, context_);
}
inline void WebBluetoothDeviceDataView::GetNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->name.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void WebBluetoothRemoteGATTServiceDataView::GetInstanceIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->instance_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void WebBluetoothRemoteGATTServiceDataView::GetUuidDataView(
    ::bluetooth::mojom::UUIDDataView* output) {
  auto pointer = data_->uuid.Get();
  *output = ::bluetooth::mojom::UUIDDataView(pointer, context_);
}


inline void WebBluetoothRemoteGATTCharacteristicDataView::GetInstanceIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->instance_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void WebBluetoothRemoteGATTCharacteristicDataView::GetUuidDataView(
    ::bluetooth::mojom::UUIDDataView* output) {
  auto pointer = data_->uuid.Get();
  *output = ::bluetooth::mojom::UUIDDataView(pointer, context_);
}


inline void WebBluetoothRemoteGATTDescriptorDataView::GetInstanceIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->instance_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void WebBluetoothRemoteGATTDescriptorDataView::GetUuidDataView(
    ::bluetooth::mojom::UUIDDataView* output) {
  auto pointer = data_->uuid.Get();
  *output = ::bluetooth::mojom::UUIDDataView(pointer, context_);
}


inline void WebBluetoothService_RequestDevice_ParamsDataView::GetOptionsDataView(
    WebBluetoothRequestDeviceOptionsDataView* output) {
  auto pointer = data_->options.Get();
  *output = WebBluetoothRequestDeviceOptionsDataView(pointer, context_);
}


inline void WebBluetoothService_RequestDevice_ResponseParamsDataView::GetDeviceDataView(
    WebBluetoothDeviceDataView* output) {
  auto pointer = data_->device.Get();
  *output = WebBluetoothDeviceDataView(pointer, context_);
}


inline void WebBluetoothService_RemoteServerConnect_ParamsDataView::GetDeviceIdDataView(
    WebBluetoothDeviceIdDataView* output) {
  auto pointer = data_->device_id.Get();
  *output = WebBluetoothDeviceIdDataView(pointer, context_);
}




inline void WebBluetoothService_RemoteServerDisconnect_ParamsDataView::GetDeviceIdDataView(
    WebBluetoothDeviceIdDataView* output) {
  auto pointer = data_->device_id.Get();
  *output = WebBluetoothDeviceIdDataView(pointer, context_);
}


inline void WebBluetoothService_RemoteServerGetPrimaryServices_ParamsDataView::GetDeviceIdDataView(
    WebBluetoothDeviceIdDataView* output) {
  auto pointer = data_->device_id.Get();
  *output = WebBluetoothDeviceIdDataView(pointer, context_);
}
inline void WebBluetoothService_RemoteServerGetPrimaryServices_ParamsDataView::GetServicesUuidDataView(
    ::bluetooth::mojom::UUIDDataView* output) {
  auto pointer = data_->services_uuid.Get();
  *output = ::bluetooth::mojom::UUIDDataView(pointer, context_);
}


inline void WebBluetoothService_RemoteServerGetPrimaryServices_ResponseParamsDataView::GetServicesDataView(
    mojo::ArrayDataView<WebBluetoothRemoteGATTServiceDataView>* output) {
  auto pointer = data_->services.Get();
  *output = mojo::ArrayDataView<WebBluetoothRemoteGATTServiceDataView>(pointer, context_);
}


inline void WebBluetoothService_RemoteServiceGetCharacteristics_ParamsDataView::GetServiceInstanceIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->service_instance_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void WebBluetoothService_RemoteServiceGetCharacteristics_ParamsDataView::GetCharacteristicsUuidDataView(
    ::bluetooth::mojom::UUIDDataView* output) {
  auto pointer = data_->characteristics_uuid.Get();
  *output = ::bluetooth::mojom::UUIDDataView(pointer, context_);
}


inline void WebBluetoothService_RemoteServiceGetCharacteristics_ResponseParamsDataView::GetCharacteristicsDataView(
    mojo::ArrayDataView<WebBluetoothRemoteGATTCharacteristicDataView>* output) {
  auto pointer = data_->characteristics.Get();
  *output = mojo::ArrayDataView<WebBluetoothRemoteGATTCharacteristicDataView>(pointer, context_);
}


inline void WebBluetoothService_RemoteCharacteristicReadValue_ParamsDataView::GetCharacteristicInstanceIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->characteristic_instance_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void WebBluetoothService_RemoteCharacteristicReadValue_ResponseParamsDataView::GetValueDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->value.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}


inline void WebBluetoothService_RemoteCharacteristicWriteValue_ParamsDataView::GetCharacteristicInstanceIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->characteristic_instance_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void WebBluetoothService_RemoteCharacteristicWriteValue_ParamsDataView::GetValueDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->value.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}




inline void WebBluetoothService_RemoteCharacteristicStartNotifications_ParamsDataView::GetCharacteristicInstanceIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->characteristic_instance_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}




inline void WebBluetoothService_RemoteCharacteristicStopNotifications_ParamsDataView::GetCharacteristicInstanceIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->characteristic_instance_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}




inline void WebBluetoothService_RemoteCharacteristicGetDescriptors_ParamsDataView::GetCharacteristicsInstanceIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->characteristics_instance_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void WebBluetoothService_RemoteCharacteristicGetDescriptors_ParamsDataView::GetDescriptorUuidDataView(
    ::bluetooth::mojom::UUIDDataView* output) {
  auto pointer = data_->descriptor_uuid.Get();
  *output = ::bluetooth::mojom::UUIDDataView(pointer, context_);
}


inline void WebBluetoothService_RemoteCharacteristicGetDescriptors_ResponseParamsDataView::GetDescriptorsDataView(
    mojo::ArrayDataView<WebBluetoothRemoteGATTDescriptorDataView>* output) {
  auto pointer = data_->descriptors.Get();
  *output = mojo::ArrayDataView<WebBluetoothRemoteGATTDescriptorDataView>(pointer, context_);
}


inline void WebBluetoothService_RemoteDescriptorReadValue_ParamsDataView::GetDescriptorInstanceIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->descriptor_instance_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void WebBluetoothService_RemoteDescriptorReadValue_ResponseParamsDataView::GetValueDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->value.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}


inline void WebBluetoothService_RemoteDescriptorWriteValue_ParamsDataView::GetDescriptorInstanceIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->descriptor_instance_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void WebBluetoothService_RemoteDescriptorWriteValue_ParamsDataView::GetValueDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->value.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}






inline void WebBluetoothCharacteristicClient_RemoteCharacteristicValueChanged_ParamsDataView::GetValueDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->value.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}



}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_BLUETOOTH_WEB_BLUETOOTH_MOJOM_SHARED_H_
