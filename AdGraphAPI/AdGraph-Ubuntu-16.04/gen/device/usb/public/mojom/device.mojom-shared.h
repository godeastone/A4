// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef DEVICE_USB_PUBLIC_MOJOM_DEVICE_MOJOM_SHARED_H_
#define DEVICE_USB_PUBLIC_MOJOM_DEVICE_MOJOM_SHARED_H_

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
#include "device/usb/public/mojom/device.mojom-shared-internal.h"
#include "mojo/public/mojom/base/string16.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"


namespace device {
namespace mojom {
class UsbEndpointInfoDataView;

class UsbAlternateInterfaceInfoDataView;

class UsbInterfaceInfoDataView;

class UsbConfigurationInfoDataView;

class UsbDeviceInfoDataView;

class UsbControlTransferParamsDataView;

class UsbIsochronousPacketDataView;



}  // namespace mojom
}  // namespace device

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::device::mojom::UsbEndpointInfoDataView> {
  using Data = ::device::mojom::internal::UsbEndpointInfo_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::device::mojom::UsbAlternateInterfaceInfoDataView> {
  using Data = ::device::mojom::internal::UsbAlternateInterfaceInfo_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::device::mojom::UsbInterfaceInfoDataView> {
  using Data = ::device::mojom::internal::UsbInterfaceInfo_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::device::mojom::UsbConfigurationInfoDataView> {
  using Data = ::device::mojom::internal::UsbConfigurationInfo_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::device::mojom::UsbDeviceInfoDataView> {
  using Data = ::device::mojom::internal::UsbDeviceInfo_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::device::mojom::UsbControlTransferParamsDataView> {
  using Data = ::device::mojom::internal::UsbControlTransferParams_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::device::mojom::UsbIsochronousPacketDataView> {
  using Data = ::device::mojom::internal::UsbIsochronousPacket_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace device {
namespace mojom {

enum class UsbOpenDeviceError : int32_t {
  OK,
  ACCESS_DENIED,
  ALREADY_OPEN,
  kMinValue = 0,
  kMaxValue = 2,
};

inline std::ostream& operator<<(std::ostream& os, UsbOpenDeviceError value) {
  switch(value) {
    case UsbOpenDeviceError::OK:
      return os << "UsbOpenDeviceError::OK";
    case UsbOpenDeviceError::ACCESS_DENIED:
      return os << "UsbOpenDeviceError::ACCESS_DENIED";
    case UsbOpenDeviceError::ALREADY_OPEN:
      return os << "UsbOpenDeviceError::ALREADY_OPEN";
    default:
      return os << "Unknown UsbOpenDeviceError value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(UsbOpenDeviceError value) {
  return internal::UsbOpenDeviceError_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

enum class UsbTransferDirection : int32_t {
  INBOUND = 0,
  OUTBOUND,
  kMinValue = 0,
  kMaxValue = 1,
};

inline std::ostream& operator<<(std::ostream& os, UsbTransferDirection value) {
  switch(value) {
    case UsbTransferDirection::INBOUND:
      return os << "UsbTransferDirection::INBOUND";
    case UsbTransferDirection::OUTBOUND:
      return os << "UsbTransferDirection::OUTBOUND";
    default:
      return os << "Unknown UsbTransferDirection value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(UsbTransferDirection value) {
  return internal::UsbTransferDirection_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

enum class UsbControlTransferType : int32_t {
  STANDARD,
  CLASS,
  VENDOR,
  RESERVED,
  kMinValue = 0,
  kMaxValue = 3,
};

inline std::ostream& operator<<(std::ostream& os, UsbControlTransferType value) {
  switch(value) {
    case UsbControlTransferType::STANDARD:
      return os << "UsbControlTransferType::STANDARD";
    case UsbControlTransferType::CLASS:
      return os << "UsbControlTransferType::CLASS";
    case UsbControlTransferType::VENDOR:
      return os << "UsbControlTransferType::VENDOR";
    case UsbControlTransferType::RESERVED:
      return os << "UsbControlTransferType::RESERVED";
    default:
      return os << "Unknown UsbControlTransferType value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(UsbControlTransferType value) {
  return internal::UsbControlTransferType_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

enum class UsbControlTransferRecipient : int32_t {
  DEVICE,
  INTERFACE,
  ENDPOINT,
  OTHER,
  kMinValue = 0,
  kMaxValue = 3,
};

inline std::ostream& operator<<(std::ostream& os, UsbControlTransferRecipient value) {
  switch(value) {
    case UsbControlTransferRecipient::DEVICE:
      return os << "UsbControlTransferRecipient::DEVICE";
    case UsbControlTransferRecipient::INTERFACE:
      return os << "UsbControlTransferRecipient::INTERFACE";
    case UsbControlTransferRecipient::ENDPOINT:
      return os << "UsbControlTransferRecipient::ENDPOINT";
    case UsbControlTransferRecipient::OTHER:
      return os << "UsbControlTransferRecipient::OTHER";
    default:
      return os << "Unknown UsbControlTransferRecipient value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(UsbControlTransferRecipient value) {
  return internal::UsbControlTransferRecipient_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

enum class UsbTransferType : int32_t {
  CONTROL = 0,
  ISOCHRONOUS,
  BULK,
  INTERRUPT,
  kMinValue = 0,
  kMaxValue = 3,
};

inline std::ostream& operator<<(std::ostream& os, UsbTransferType value) {
  switch(value) {
    case UsbTransferType::CONTROL:
      return os << "UsbTransferType::CONTROL";
    case UsbTransferType::ISOCHRONOUS:
      return os << "UsbTransferType::ISOCHRONOUS";
    case UsbTransferType::BULK:
      return os << "UsbTransferType::BULK";
    case UsbTransferType::INTERRUPT:
      return os << "UsbTransferType::INTERRUPT";
    default:
      return os << "Unknown UsbTransferType value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(UsbTransferType value) {
  return internal::UsbTransferType_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

enum class UsbTransferStatus : int32_t {
  COMPLETED = 0,
  TRANSFER_ERROR,
  TIMEOUT,
  CANCELLED,
  STALLED,
  DISCONNECT,
  BABBLE,
  SHORT_PACKET,
  PERMISSION_DENIED,
  kMinValue = 0,
  kMaxValue = 8,
};

inline std::ostream& operator<<(std::ostream& os, UsbTransferStatus value) {
  switch(value) {
    case UsbTransferStatus::COMPLETED:
      return os << "UsbTransferStatus::COMPLETED";
    case UsbTransferStatus::TRANSFER_ERROR:
      return os << "UsbTransferStatus::TRANSFER_ERROR";
    case UsbTransferStatus::TIMEOUT:
      return os << "UsbTransferStatus::TIMEOUT";
    case UsbTransferStatus::CANCELLED:
      return os << "UsbTransferStatus::CANCELLED";
    case UsbTransferStatus::STALLED:
      return os << "UsbTransferStatus::STALLED";
    case UsbTransferStatus::DISCONNECT:
      return os << "UsbTransferStatus::DISCONNECT";
    case UsbTransferStatus::BABBLE:
      return os << "UsbTransferStatus::BABBLE";
    case UsbTransferStatus::SHORT_PACKET:
      return os << "UsbTransferStatus::SHORT_PACKET";
    case UsbTransferStatus::PERMISSION_DENIED:
      return os << "UsbTransferStatus::PERMISSION_DENIED";
    default:
      return os << "Unknown UsbTransferStatus value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(UsbTransferStatus value) {
  return internal::UsbTransferStatus_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
// Interface base classes. They are used for type safety check.
class UsbDeviceInterfaceBase {};

using UsbDevicePtrDataView =
    mojo::InterfacePtrDataView<UsbDeviceInterfaceBase>;
using UsbDeviceRequestDataView =
    mojo::InterfaceRequestDataView<UsbDeviceInterfaceBase>;
using UsbDeviceAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<UsbDeviceInterfaceBase>;
using UsbDeviceAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<UsbDeviceInterfaceBase>;
class UsbEndpointInfoDataView {
 public:
  UsbEndpointInfoDataView() {}

  UsbEndpointInfoDataView(
      internal::UsbEndpointInfo_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint8_t endpoint_number() const {
    return data_->endpoint_number;
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDirection(UserType* output) const {
    auto data_value = data_->direction;
    return mojo::internal::Deserialize<::device::mojom::UsbTransferDirection>(
        data_value, output);
  }

  UsbTransferDirection direction() const {
    return static_cast<UsbTransferDirection>(data_->direction);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadType(UserType* output) const {
    auto data_value = data_->type;
    return mojo::internal::Deserialize<::device::mojom::UsbTransferType>(
        data_value, output);
  }

  UsbTransferType type() const {
    return static_cast<UsbTransferType>(data_->type);
  }
  uint32_t packet_size() const {
    return data_->packet_size;
  }
 private:
  internal::UsbEndpointInfo_Data* data_ = nullptr;
};

class UsbAlternateInterfaceInfoDataView {
 public:
  UsbAlternateInterfaceInfoDataView() {}

  UsbAlternateInterfaceInfoDataView(
      internal::UsbAlternateInterfaceInfo_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  uint8_t alternate_setting() const {
    return data_->alternate_setting;
  }
  uint8_t class_code() const {
    return data_->class_code;
  }
  uint8_t subclass_code() const {
    return data_->subclass_code;
  }
  uint8_t protocol_code() const {
    return data_->protocol_code;
  }
  inline void GetInterfaceNameDataView(
      ::mojo_base::mojom::String16DataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadInterfaceName(UserType* output) {
    auto* pointer = data_->interface_name.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::String16DataView>(
        pointer, output, context_);
  }
  inline void GetEndpointsDataView(
      mojo::ArrayDataView<UsbEndpointInfoDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadEndpoints(UserType* output) {
    auto* pointer = data_->endpoints.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::device::mojom::UsbEndpointInfoDataView>>(
        pointer, output, context_);
  }
 private:
  internal::UsbAlternateInterfaceInfo_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class UsbInterfaceInfoDataView {
 public:
  UsbInterfaceInfoDataView() {}

  UsbInterfaceInfoDataView(
      internal::UsbInterfaceInfo_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  uint8_t interface_number() const {
    return data_->interface_number;
  }
  inline void GetAlternatesDataView(
      mojo::ArrayDataView<UsbAlternateInterfaceInfoDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadAlternates(UserType* output) {
    auto* pointer = data_->alternates.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::device::mojom::UsbAlternateInterfaceInfoDataView>>(
        pointer, output, context_);
  }
 private:
  internal::UsbInterfaceInfo_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class UsbConfigurationInfoDataView {
 public:
  UsbConfigurationInfoDataView() {}

  UsbConfigurationInfoDataView(
      internal::UsbConfigurationInfo_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  uint8_t configuration_value() const {
    return data_->configuration_value;
  }
  inline void GetConfigurationNameDataView(
      ::mojo_base::mojom::String16DataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadConfigurationName(UserType* output) {
    auto* pointer = data_->configuration_name.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::String16DataView>(
        pointer, output, context_);
  }
  inline void GetInterfacesDataView(
      mojo::ArrayDataView<UsbInterfaceInfoDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadInterfaces(UserType* output) {
    auto* pointer = data_->interfaces.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::device::mojom::UsbInterfaceInfoDataView>>(
        pointer, output, context_);
  }
 private:
  internal::UsbConfigurationInfo_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class UsbDeviceInfoDataView {
 public:
  UsbDeviceInfoDataView() {}

  UsbDeviceInfoDataView(
      internal::UsbDeviceInfo_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetGuidDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadGuid(UserType* output) {
    auto* pointer = data_->guid.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  uint8_t usb_version_major() const {
    return data_->usb_version_major;
  }
  uint8_t usb_version_minor() const {
    return data_->usb_version_minor;
  }
  uint8_t usb_version_subminor() const {
    return data_->usb_version_subminor;
  }
  uint8_t class_code() const {
    return data_->class_code;
  }
  uint8_t subclass_code() const {
    return data_->subclass_code;
  }
  uint8_t protocol_code() const {
    return data_->protocol_code;
  }
  uint16_t vendor_id() const {
    return data_->vendor_id;
  }
  uint16_t product_id() const {
    return data_->product_id;
  }
  uint8_t device_version_major() const {
    return data_->device_version_major;
  }
  uint8_t device_version_minor() const {
    return data_->device_version_minor;
  }
  uint8_t device_version_subminor() const {
    return data_->device_version_subminor;
  }
  inline void GetManufacturerNameDataView(
      ::mojo_base::mojom::String16DataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadManufacturerName(UserType* output) {
    auto* pointer = data_->manufacturer_name.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::String16DataView>(
        pointer, output, context_);
  }
  inline void GetProductNameDataView(
      ::mojo_base::mojom::String16DataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadProductName(UserType* output) {
    auto* pointer = data_->product_name.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::String16DataView>(
        pointer, output, context_);
  }
  inline void GetSerialNumberDataView(
      ::mojo_base::mojom::String16DataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSerialNumber(UserType* output) {
    auto* pointer = data_->serial_number.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::String16DataView>(
        pointer, output, context_);
  }
  uint8_t active_configuration() const {
    return data_->active_configuration;
  }
  inline void GetConfigurationsDataView(
      mojo::ArrayDataView<UsbConfigurationInfoDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadConfigurations(UserType* output) {
    auto* pointer = data_->configurations.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::device::mojom::UsbConfigurationInfoDataView>>(
        pointer, output, context_);
  }
 private:
  internal::UsbDeviceInfo_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class UsbControlTransferParamsDataView {
 public:
  UsbControlTransferParamsDataView() {}

  UsbControlTransferParamsDataView(
      internal::UsbControlTransferParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadType(UserType* output) const {
    auto data_value = data_->type;
    return mojo::internal::Deserialize<::device::mojom::UsbControlTransferType>(
        data_value, output);
  }

  UsbControlTransferType type() const {
    return static_cast<UsbControlTransferType>(data_->type);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRecipient(UserType* output) const {
    auto data_value = data_->recipient;
    return mojo::internal::Deserialize<::device::mojom::UsbControlTransferRecipient>(
        data_value, output);
  }

  UsbControlTransferRecipient recipient() const {
    return static_cast<UsbControlTransferRecipient>(data_->recipient);
  }
  uint8_t request() const {
    return data_->request;
  }
  uint16_t value() const {
    return data_->value;
  }
  uint16_t index() const {
    return data_->index;
  }
 private:
  internal::UsbControlTransferParams_Data* data_ = nullptr;
};

class UsbIsochronousPacketDataView {
 public:
  UsbIsochronousPacketDataView() {}

  UsbIsochronousPacketDataView(
      internal::UsbIsochronousPacket_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint32_t length() const {
    return data_->length;
  }
  uint32_t transferred_length() const {
    return data_->transferred_length;
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStatus(UserType* output) const {
    auto data_value = data_->status;
    return mojo::internal::Deserialize<::device::mojom::UsbTransferStatus>(
        data_value, output);
  }

  UsbTransferStatus status() const {
    return static_cast<UsbTransferStatus>(data_->status);
  }
 private:
  internal::UsbIsochronousPacket_Data* data_ = nullptr;
};

class UsbDevice_Open_ParamsDataView {
 public:
  UsbDevice_Open_ParamsDataView() {}

  UsbDevice_Open_ParamsDataView(
      internal::UsbDevice_Open_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::UsbDevice_Open_Params_Data* data_ = nullptr;
};

class UsbDevice_Open_ResponseParamsDataView {
 public:
  UsbDevice_Open_ResponseParamsDataView() {}

  UsbDevice_Open_ResponseParamsDataView(
      internal::UsbDevice_Open_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadError(UserType* output) const {
    auto data_value = data_->error;
    return mojo::internal::Deserialize<::device::mojom::UsbOpenDeviceError>(
        data_value, output);
  }

  UsbOpenDeviceError error() const {
    return static_cast<UsbOpenDeviceError>(data_->error);
  }
 private:
  internal::UsbDevice_Open_ResponseParams_Data* data_ = nullptr;
};

class UsbDevice_Close_ParamsDataView {
 public:
  UsbDevice_Close_ParamsDataView() {}

  UsbDevice_Close_ParamsDataView(
      internal::UsbDevice_Close_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::UsbDevice_Close_Params_Data* data_ = nullptr;
};

class UsbDevice_Close_ResponseParamsDataView {
 public:
  UsbDevice_Close_ResponseParamsDataView() {}

  UsbDevice_Close_ResponseParamsDataView(
      internal::UsbDevice_Close_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::UsbDevice_Close_ResponseParams_Data* data_ = nullptr;
};

class UsbDevice_SetConfiguration_ParamsDataView {
 public:
  UsbDevice_SetConfiguration_ParamsDataView() {}

  UsbDevice_SetConfiguration_ParamsDataView(
      internal::UsbDevice_SetConfiguration_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint8_t value() const {
    return data_->value;
  }
 private:
  internal::UsbDevice_SetConfiguration_Params_Data* data_ = nullptr;
};

class UsbDevice_SetConfiguration_ResponseParamsDataView {
 public:
  UsbDevice_SetConfiguration_ResponseParamsDataView() {}

  UsbDevice_SetConfiguration_ResponseParamsDataView(
      internal::UsbDevice_SetConfiguration_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool success() const {
    return data_->success;
  }
 private:
  internal::UsbDevice_SetConfiguration_ResponseParams_Data* data_ = nullptr;
};

class UsbDevice_ClaimInterface_ParamsDataView {
 public:
  UsbDevice_ClaimInterface_ParamsDataView() {}

  UsbDevice_ClaimInterface_ParamsDataView(
      internal::UsbDevice_ClaimInterface_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint8_t interface_number() const {
    return data_->interface_number;
  }
 private:
  internal::UsbDevice_ClaimInterface_Params_Data* data_ = nullptr;
};

class UsbDevice_ClaimInterface_ResponseParamsDataView {
 public:
  UsbDevice_ClaimInterface_ResponseParamsDataView() {}

  UsbDevice_ClaimInterface_ResponseParamsDataView(
      internal::UsbDevice_ClaimInterface_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool success() const {
    return data_->success;
  }
 private:
  internal::UsbDevice_ClaimInterface_ResponseParams_Data* data_ = nullptr;
};

class UsbDevice_ReleaseInterface_ParamsDataView {
 public:
  UsbDevice_ReleaseInterface_ParamsDataView() {}

  UsbDevice_ReleaseInterface_ParamsDataView(
      internal::UsbDevice_ReleaseInterface_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint8_t interface_number() const {
    return data_->interface_number;
  }
 private:
  internal::UsbDevice_ReleaseInterface_Params_Data* data_ = nullptr;
};

class UsbDevice_ReleaseInterface_ResponseParamsDataView {
 public:
  UsbDevice_ReleaseInterface_ResponseParamsDataView() {}

  UsbDevice_ReleaseInterface_ResponseParamsDataView(
      internal::UsbDevice_ReleaseInterface_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool success() const {
    return data_->success;
  }
 private:
  internal::UsbDevice_ReleaseInterface_ResponseParams_Data* data_ = nullptr;
};

class UsbDevice_SetInterfaceAlternateSetting_ParamsDataView {
 public:
  UsbDevice_SetInterfaceAlternateSetting_ParamsDataView() {}

  UsbDevice_SetInterfaceAlternateSetting_ParamsDataView(
      internal::UsbDevice_SetInterfaceAlternateSetting_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint8_t interface_number() const {
    return data_->interface_number;
  }
  uint8_t alternate_setting() const {
    return data_->alternate_setting;
  }
 private:
  internal::UsbDevice_SetInterfaceAlternateSetting_Params_Data* data_ = nullptr;
};

class UsbDevice_SetInterfaceAlternateSetting_ResponseParamsDataView {
 public:
  UsbDevice_SetInterfaceAlternateSetting_ResponseParamsDataView() {}

  UsbDevice_SetInterfaceAlternateSetting_ResponseParamsDataView(
      internal::UsbDevice_SetInterfaceAlternateSetting_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool success() const {
    return data_->success;
  }
 private:
  internal::UsbDevice_SetInterfaceAlternateSetting_ResponseParams_Data* data_ = nullptr;
};

class UsbDevice_Reset_ParamsDataView {
 public:
  UsbDevice_Reset_ParamsDataView() {}

  UsbDevice_Reset_ParamsDataView(
      internal::UsbDevice_Reset_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::UsbDevice_Reset_Params_Data* data_ = nullptr;
};

class UsbDevice_Reset_ResponseParamsDataView {
 public:
  UsbDevice_Reset_ResponseParamsDataView() {}

  UsbDevice_Reset_ResponseParamsDataView(
      internal::UsbDevice_Reset_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool success() const {
    return data_->success;
  }
 private:
  internal::UsbDevice_Reset_ResponseParams_Data* data_ = nullptr;
};

class UsbDevice_ClearHalt_ParamsDataView {
 public:
  UsbDevice_ClearHalt_ParamsDataView() {}

  UsbDevice_ClearHalt_ParamsDataView(
      internal::UsbDevice_ClearHalt_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint8_t endpoint() const {
    return data_->endpoint;
  }
 private:
  internal::UsbDevice_ClearHalt_Params_Data* data_ = nullptr;
};

class UsbDevice_ClearHalt_ResponseParamsDataView {
 public:
  UsbDevice_ClearHalt_ResponseParamsDataView() {}

  UsbDevice_ClearHalt_ResponseParamsDataView(
      internal::UsbDevice_ClearHalt_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool success() const {
    return data_->success;
  }
 private:
  internal::UsbDevice_ClearHalt_ResponseParams_Data* data_ = nullptr;
};

class UsbDevice_ControlTransferIn_ParamsDataView {
 public:
  UsbDevice_ControlTransferIn_ParamsDataView() {}

  UsbDevice_ControlTransferIn_ParamsDataView(
      internal::UsbDevice_ControlTransferIn_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetParamsDataView(
      UsbControlTransferParamsDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadParams(UserType* output) {
    auto* pointer = data_->params.Get();
    return mojo::internal::Deserialize<::device::mojom::UsbControlTransferParamsDataView>(
        pointer, output, context_);
  }
  uint32_t length() const {
    return data_->length;
  }
  uint32_t timeout() const {
    return data_->timeout;
  }
 private:
  internal::UsbDevice_ControlTransferIn_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class UsbDevice_ControlTransferIn_ResponseParamsDataView {
 public:
  UsbDevice_ControlTransferIn_ResponseParamsDataView() {}

  UsbDevice_ControlTransferIn_ResponseParamsDataView(
      internal::UsbDevice_ControlTransferIn_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStatus(UserType* output) const {
    auto data_value = data_->status;
    return mojo::internal::Deserialize<::device::mojom::UsbTransferStatus>(
        data_value, output);
  }

  UsbTransferStatus status() const {
    return static_cast<UsbTransferStatus>(data_->status);
  }
  inline void GetDataDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadData(UserType* output) {
    auto* pointer = data_->data.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
 private:
  internal::UsbDevice_ControlTransferIn_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class UsbDevice_ControlTransferOut_ParamsDataView {
 public:
  UsbDevice_ControlTransferOut_ParamsDataView() {}

  UsbDevice_ControlTransferOut_ParamsDataView(
      internal::UsbDevice_ControlTransferOut_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetParamsDataView(
      UsbControlTransferParamsDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadParams(UserType* output) {
    auto* pointer = data_->params.Get();
    return mojo::internal::Deserialize<::device::mojom::UsbControlTransferParamsDataView>(
        pointer, output, context_);
  }
  inline void GetDataDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadData(UserType* output) {
    auto* pointer = data_->data.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
  uint32_t timeout() const {
    return data_->timeout;
  }
 private:
  internal::UsbDevice_ControlTransferOut_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class UsbDevice_ControlTransferOut_ResponseParamsDataView {
 public:
  UsbDevice_ControlTransferOut_ResponseParamsDataView() {}

  UsbDevice_ControlTransferOut_ResponseParamsDataView(
      internal::UsbDevice_ControlTransferOut_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStatus(UserType* output) const {
    auto data_value = data_->status;
    return mojo::internal::Deserialize<::device::mojom::UsbTransferStatus>(
        data_value, output);
  }

  UsbTransferStatus status() const {
    return static_cast<UsbTransferStatus>(data_->status);
  }
 private:
  internal::UsbDevice_ControlTransferOut_ResponseParams_Data* data_ = nullptr;
};

class UsbDevice_GenericTransferIn_ParamsDataView {
 public:
  UsbDevice_GenericTransferIn_ParamsDataView() {}

  UsbDevice_GenericTransferIn_ParamsDataView(
      internal::UsbDevice_GenericTransferIn_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint8_t endpoint_number() const {
    return data_->endpoint_number;
  }
  uint32_t length() const {
    return data_->length;
  }
  uint32_t timeout() const {
    return data_->timeout;
  }
 private:
  internal::UsbDevice_GenericTransferIn_Params_Data* data_ = nullptr;
};

class UsbDevice_GenericTransferIn_ResponseParamsDataView {
 public:
  UsbDevice_GenericTransferIn_ResponseParamsDataView() {}

  UsbDevice_GenericTransferIn_ResponseParamsDataView(
      internal::UsbDevice_GenericTransferIn_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStatus(UserType* output) const {
    auto data_value = data_->status;
    return mojo::internal::Deserialize<::device::mojom::UsbTransferStatus>(
        data_value, output);
  }

  UsbTransferStatus status() const {
    return static_cast<UsbTransferStatus>(data_->status);
  }
  inline void GetDataDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadData(UserType* output) {
    auto* pointer = data_->data.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
 private:
  internal::UsbDevice_GenericTransferIn_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class UsbDevice_GenericTransferOut_ParamsDataView {
 public:
  UsbDevice_GenericTransferOut_ParamsDataView() {}

  UsbDevice_GenericTransferOut_ParamsDataView(
      internal::UsbDevice_GenericTransferOut_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  uint8_t endpoint_number() const {
    return data_->endpoint_number;
  }
  inline void GetDataDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadData(UserType* output) {
    auto* pointer = data_->data.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
  uint32_t timeout() const {
    return data_->timeout;
  }
 private:
  internal::UsbDevice_GenericTransferOut_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class UsbDevice_GenericTransferOut_ResponseParamsDataView {
 public:
  UsbDevice_GenericTransferOut_ResponseParamsDataView() {}

  UsbDevice_GenericTransferOut_ResponseParamsDataView(
      internal::UsbDevice_GenericTransferOut_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStatus(UserType* output) const {
    auto data_value = data_->status;
    return mojo::internal::Deserialize<::device::mojom::UsbTransferStatus>(
        data_value, output);
  }

  UsbTransferStatus status() const {
    return static_cast<UsbTransferStatus>(data_->status);
  }
 private:
  internal::UsbDevice_GenericTransferOut_ResponseParams_Data* data_ = nullptr;
};

class UsbDevice_IsochronousTransferIn_ParamsDataView {
 public:
  UsbDevice_IsochronousTransferIn_ParamsDataView() {}

  UsbDevice_IsochronousTransferIn_ParamsDataView(
      internal::UsbDevice_IsochronousTransferIn_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  uint8_t endpoint_number() const {
    return data_->endpoint_number;
  }
  inline void GetPacketLengthsDataView(
      mojo::ArrayDataView<uint32_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPacketLengths(UserType* output) {
    auto* pointer = data_->packet_lengths.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint32_t>>(
        pointer, output, context_);
  }
  uint32_t timeout() const {
    return data_->timeout;
  }
 private:
  internal::UsbDevice_IsochronousTransferIn_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class UsbDevice_IsochronousTransferIn_ResponseParamsDataView {
 public:
  UsbDevice_IsochronousTransferIn_ResponseParamsDataView() {}

  UsbDevice_IsochronousTransferIn_ResponseParamsDataView(
      internal::UsbDevice_IsochronousTransferIn_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetDataDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadData(UserType* output) {
    auto* pointer = data_->data.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
  inline void GetPacketsDataView(
      mojo::ArrayDataView<UsbIsochronousPacketDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPackets(UserType* output) {
    auto* pointer = data_->packets.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::device::mojom::UsbIsochronousPacketDataView>>(
        pointer, output, context_);
  }
 private:
  internal::UsbDevice_IsochronousTransferIn_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class UsbDevice_IsochronousTransferOut_ParamsDataView {
 public:
  UsbDevice_IsochronousTransferOut_ParamsDataView() {}

  UsbDevice_IsochronousTransferOut_ParamsDataView(
      internal::UsbDevice_IsochronousTransferOut_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  uint8_t endpoint_number() const {
    return data_->endpoint_number;
  }
  inline void GetDataDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadData(UserType* output) {
    auto* pointer = data_->data.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
  inline void GetPacketLengthsDataView(
      mojo::ArrayDataView<uint32_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPacketLengths(UserType* output) {
    auto* pointer = data_->packet_lengths.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint32_t>>(
        pointer, output, context_);
  }
  uint32_t timeout() const {
    return data_->timeout;
  }
 private:
  internal::UsbDevice_IsochronousTransferOut_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class UsbDevice_IsochronousTransferOut_ResponseParamsDataView {
 public:
  UsbDevice_IsochronousTransferOut_ResponseParamsDataView() {}

  UsbDevice_IsochronousTransferOut_ResponseParamsDataView(
      internal::UsbDevice_IsochronousTransferOut_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetPacketsDataView(
      mojo::ArrayDataView<UsbIsochronousPacketDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPackets(UserType* output) {
    auto* pointer = data_->packets.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::device::mojom::UsbIsochronousPacketDataView>>(
        pointer, output, context_);
  }
 private:
  internal::UsbDevice_IsochronousTransferOut_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace device

namespace std {

template <>
struct hash<::device::mojom::UsbOpenDeviceError>
    : public mojo::internal::EnumHashImpl<::device::mojom::UsbOpenDeviceError> {};

template <>
struct hash<::device::mojom::UsbTransferDirection>
    : public mojo::internal::EnumHashImpl<::device::mojom::UsbTransferDirection> {};

template <>
struct hash<::device::mojom::UsbControlTransferType>
    : public mojo::internal::EnumHashImpl<::device::mojom::UsbControlTransferType> {};

template <>
struct hash<::device::mojom::UsbControlTransferRecipient>
    : public mojo::internal::EnumHashImpl<::device::mojom::UsbControlTransferRecipient> {};

template <>
struct hash<::device::mojom::UsbTransferType>
    : public mojo::internal::EnumHashImpl<::device::mojom::UsbTransferType> {};

template <>
struct hash<::device::mojom::UsbTransferStatus>
    : public mojo::internal::EnumHashImpl<::device::mojom::UsbTransferStatus> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::device::mojom::UsbOpenDeviceError, ::device::mojom::UsbOpenDeviceError> {
  static ::device::mojom::UsbOpenDeviceError ToMojom(::device::mojom::UsbOpenDeviceError input) { return input; }
  static bool FromMojom(::device::mojom::UsbOpenDeviceError input, ::device::mojom::UsbOpenDeviceError* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::mojom::UsbOpenDeviceError, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::device::mojom::UsbOpenDeviceError, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::device::mojom::UsbOpenDeviceError>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::device::mojom::UsbTransferDirection, ::device::mojom::UsbTransferDirection> {
  static ::device::mojom::UsbTransferDirection ToMojom(::device::mojom::UsbTransferDirection input) { return input; }
  static bool FromMojom(::device::mojom::UsbTransferDirection input, ::device::mojom::UsbTransferDirection* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::mojom::UsbTransferDirection, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::device::mojom::UsbTransferDirection, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::device::mojom::UsbTransferDirection>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::device::mojom::UsbControlTransferType, ::device::mojom::UsbControlTransferType> {
  static ::device::mojom::UsbControlTransferType ToMojom(::device::mojom::UsbControlTransferType input) { return input; }
  static bool FromMojom(::device::mojom::UsbControlTransferType input, ::device::mojom::UsbControlTransferType* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::mojom::UsbControlTransferType, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::device::mojom::UsbControlTransferType, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::device::mojom::UsbControlTransferType>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::device::mojom::UsbControlTransferRecipient, ::device::mojom::UsbControlTransferRecipient> {
  static ::device::mojom::UsbControlTransferRecipient ToMojom(::device::mojom::UsbControlTransferRecipient input) { return input; }
  static bool FromMojom(::device::mojom::UsbControlTransferRecipient input, ::device::mojom::UsbControlTransferRecipient* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::mojom::UsbControlTransferRecipient, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::device::mojom::UsbControlTransferRecipient, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::device::mojom::UsbControlTransferRecipient>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::device::mojom::UsbTransferType, ::device::mojom::UsbTransferType> {
  static ::device::mojom::UsbTransferType ToMojom(::device::mojom::UsbTransferType input) { return input; }
  static bool FromMojom(::device::mojom::UsbTransferType input, ::device::mojom::UsbTransferType* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::mojom::UsbTransferType, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::device::mojom::UsbTransferType, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::device::mojom::UsbTransferType>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::device::mojom::UsbTransferStatus, ::device::mojom::UsbTransferStatus> {
  static ::device::mojom::UsbTransferStatus ToMojom(::device::mojom::UsbTransferStatus input) { return input; }
  static bool FromMojom(::device::mojom::UsbTransferStatus input, ::device::mojom::UsbTransferStatus* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::mojom::UsbTransferStatus, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::device::mojom::UsbTransferStatus, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::device::mojom::UsbTransferStatus>(input), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::mojom::UsbEndpointInfoDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::device::mojom::UsbEndpointInfoDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::device::mojom::internal::UsbEndpointInfo_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    (*output)->endpoint_number = CallWithContext(Traits::endpoint_number, input, custom_context);
    mojo::internal::Serialize<::device::mojom::UsbTransferDirection>(
        CallWithContext(Traits::direction, input, custom_context), &(*output)->direction);
    mojo::internal::Serialize<::device::mojom::UsbTransferType>(
        CallWithContext(Traits::type, input, custom_context), &(*output)->type);
    (*output)->packet_size = CallWithContext(Traits::packet_size, input, custom_context);
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::device::mojom::internal::UsbEndpointInfo_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::device::mojom::UsbEndpointInfoDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::mojom::UsbAlternateInterfaceInfoDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::device::mojom::UsbAlternateInterfaceInfoDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::device::mojom::internal::UsbAlternateInterfaceInfo_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    (*output)->alternate_setting = CallWithContext(Traits::alternate_setting, input, custom_context);
    (*output)->class_code = CallWithContext(Traits::class_code, input, custom_context);
    (*output)->subclass_code = CallWithContext(Traits::subclass_code, input, custom_context);
    (*output)->protocol_code = CallWithContext(Traits::protocol_code, input, custom_context);
    decltype(CallWithContext(Traits::interface_name, input, custom_context)) in_interface_name = CallWithContext(Traits::interface_name, input, custom_context);
    typename decltype((*output)->interface_name)::BaseType::BufferWriter
        interface_name_writer;
    mojo::internal::Serialize<::mojo_base::mojom::String16DataView>(
        in_interface_name, buffer, &interface_name_writer, context);
    (*output)->interface_name.Set(
        interface_name_writer.is_null() ? nullptr : interface_name_writer.data());
    decltype(CallWithContext(Traits::endpoints, input, custom_context)) in_endpoints = CallWithContext(Traits::endpoints, input, custom_context);
    typename decltype((*output)->endpoints)::BaseType::BufferWriter
        endpoints_writer;
    const mojo::internal::ContainerValidateParams endpoints_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::device::mojom::UsbEndpointInfoDataView>>(
        in_endpoints, buffer, &endpoints_writer, &endpoints_validate_params,
        context);
    (*output)->endpoints.Set(
        endpoints_writer.is_null() ? nullptr : endpoints_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->endpoints.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null endpoints in UsbAlternateInterfaceInfo struct");
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::device::mojom::internal::UsbAlternateInterfaceInfo_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::device::mojom::UsbAlternateInterfaceInfoDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::mojom::UsbInterfaceInfoDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::device::mojom::UsbInterfaceInfoDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::device::mojom::internal::UsbInterfaceInfo_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    (*output)->interface_number = CallWithContext(Traits::interface_number, input, custom_context);
    decltype(CallWithContext(Traits::alternates, input, custom_context)) in_alternates = CallWithContext(Traits::alternates, input, custom_context);
    typename decltype((*output)->alternates)::BaseType::BufferWriter
        alternates_writer;
    const mojo::internal::ContainerValidateParams alternates_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::device::mojom::UsbAlternateInterfaceInfoDataView>>(
        in_alternates, buffer, &alternates_writer, &alternates_validate_params,
        context);
    (*output)->alternates.Set(
        alternates_writer.is_null() ? nullptr : alternates_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->alternates.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null alternates in UsbInterfaceInfo struct");
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::device::mojom::internal::UsbInterfaceInfo_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::device::mojom::UsbInterfaceInfoDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::mojom::UsbConfigurationInfoDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::device::mojom::UsbConfigurationInfoDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::device::mojom::internal::UsbConfigurationInfo_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    (*output)->configuration_value = CallWithContext(Traits::configuration_value, input, custom_context);
    decltype(CallWithContext(Traits::configuration_name, input, custom_context)) in_configuration_name = CallWithContext(Traits::configuration_name, input, custom_context);
    typename decltype((*output)->configuration_name)::BaseType::BufferWriter
        configuration_name_writer;
    mojo::internal::Serialize<::mojo_base::mojom::String16DataView>(
        in_configuration_name, buffer, &configuration_name_writer, context);
    (*output)->configuration_name.Set(
        configuration_name_writer.is_null() ? nullptr : configuration_name_writer.data());
    decltype(CallWithContext(Traits::interfaces, input, custom_context)) in_interfaces = CallWithContext(Traits::interfaces, input, custom_context);
    typename decltype((*output)->interfaces)::BaseType::BufferWriter
        interfaces_writer;
    const mojo::internal::ContainerValidateParams interfaces_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::device::mojom::UsbInterfaceInfoDataView>>(
        in_interfaces, buffer, &interfaces_writer, &interfaces_validate_params,
        context);
    (*output)->interfaces.Set(
        interfaces_writer.is_null() ? nullptr : interfaces_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->interfaces.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null interfaces in UsbConfigurationInfo struct");
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::device::mojom::internal::UsbConfigurationInfo_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::device::mojom::UsbConfigurationInfoDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::mojom::UsbDeviceInfoDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::device::mojom::UsbDeviceInfoDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::device::mojom::internal::UsbDeviceInfo_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    decltype(CallWithContext(Traits::guid, input, custom_context)) in_guid = CallWithContext(Traits::guid, input, custom_context);
    typename decltype((*output)->guid)::BaseType::BufferWriter
        guid_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_guid, buffer, &guid_writer, context);
    (*output)->guid.Set(
        guid_writer.is_null() ? nullptr : guid_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->guid.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null guid in UsbDeviceInfo struct");
    (*output)->usb_version_major = CallWithContext(Traits::usb_version_major, input, custom_context);
    (*output)->usb_version_minor = CallWithContext(Traits::usb_version_minor, input, custom_context);
    (*output)->usb_version_subminor = CallWithContext(Traits::usb_version_subminor, input, custom_context);
    (*output)->class_code = CallWithContext(Traits::class_code, input, custom_context);
    (*output)->subclass_code = CallWithContext(Traits::subclass_code, input, custom_context);
    (*output)->protocol_code = CallWithContext(Traits::protocol_code, input, custom_context);
    (*output)->vendor_id = CallWithContext(Traits::vendor_id, input, custom_context);
    (*output)->product_id = CallWithContext(Traits::product_id, input, custom_context);
    (*output)->device_version_major = CallWithContext(Traits::device_version_major, input, custom_context);
    (*output)->device_version_minor = CallWithContext(Traits::device_version_minor, input, custom_context);
    (*output)->device_version_subminor = CallWithContext(Traits::device_version_subminor, input, custom_context);
    decltype(CallWithContext(Traits::manufacturer_name, input, custom_context)) in_manufacturer_name = CallWithContext(Traits::manufacturer_name, input, custom_context);
    typename decltype((*output)->manufacturer_name)::BaseType::BufferWriter
        manufacturer_name_writer;
    mojo::internal::Serialize<::mojo_base::mojom::String16DataView>(
        in_manufacturer_name, buffer, &manufacturer_name_writer, context);
    (*output)->manufacturer_name.Set(
        manufacturer_name_writer.is_null() ? nullptr : manufacturer_name_writer.data());
    decltype(CallWithContext(Traits::product_name, input, custom_context)) in_product_name = CallWithContext(Traits::product_name, input, custom_context);
    typename decltype((*output)->product_name)::BaseType::BufferWriter
        product_name_writer;
    mojo::internal::Serialize<::mojo_base::mojom::String16DataView>(
        in_product_name, buffer, &product_name_writer, context);
    (*output)->product_name.Set(
        product_name_writer.is_null() ? nullptr : product_name_writer.data());
    decltype(CallWithContext(Traits::serial_number, input, custom_context)) in_serial_number = CallWithContext(Traits::serial_number, input, custom_context);
    typename decltype((*output)->serial_number)::BaseType::BufferWriter
        serial_number_writer;
    mojo::internal::Serialize<::mojo_base::mojom::String16DataView>(
        in_serial_number, buffer, &serial_number_writer, context);
    (*output)->serial_number.Set(
        serial_number_writer.is_null() ? nullptr : serial_number_writer.data());
    (*output)->active_configuration = CallWithContext(Traits::active_configuration, input, custom_context);
    decltype(CallWithContext(Traits::configurations, input, custom_context)) in_configurations = CallWithContext(Traits::configurations, input, custom_context);
    typename decltype((*output)->configurations)::BaseType::BufferWriter
        configurations_writer;
    const mojo::internal::ContainerValidateParams configurations_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::device::mojom::UsbConfigurationInfoDataView>>(
        in_configurations, buffer, &configurations_writer, &configurations_validate_params,
        context);
    (*output)->configurations.Set(
        configurations_writer.is_null() ? nullptr : configurations_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->configurations.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null configurations in UsbDeviceInfo struct");
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::device::mojom::internal::UsbDeviceInfo_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::device::mojom::UsbDeviceInfoDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::mojom::UsbControlTransferParamsDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::device::mojom::UsbControlTransferParamsDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::device::mojom::internal::UsbControlTransferParams_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    mojo::internal::Serialize<::device::mojom::UsbControlTransferType>(
        CallWithContext(Traits::type, input, custom_context), &(*output)->type);
    mojo::internal::Serialize<::device::mojom::UsbControlTransferRecipient>(
        CallWithContext(Traits::recipient, input, custom_context), &(*output)->recipient);
    (*output)->request = CallWithContext(Traits::request, input, custom_context);
    (*output)->value = CallWithContext(Traits::value, input, custom_context);
    (*output)->index = CallWithContext(Traits::index, input, custom_context);
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::device::mojom::internal::UsbControlTransferParams_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::device::mojom::UsbControlTransferParamsDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::mojom::UsbIsochronousPacketDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::device::mojom::UsbIsochronousPacketDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::device::mojom::internal::UsbIsochronousPacket_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    (*output)->length = CallWithContext(Traits::length, input, custom_context);
    (*output)->transferred_length = CallWithContext(Traits::transferred_length, input, custom_context);
    mojo::internal::Serialize<::device::mojom::UsbTransferStatus>(
        CallWithContext(Traits::status, input, custom_context), &(*output)->status);
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::device::mojom::internal::UsbIsochronousPacket_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::device::mojom::UsbIsochronousPacketDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace device {
namespace mojom {



inline void UsbAlternateInterfaceInfoDataView::GetInterfaceNameDataView(
    ::mojo_base::mojom::String16DataView* output) {
  auto pointer = data_->interface_name.Get();
  *output = ::mojo_base::mojom::String16DataView(pointer, context_);
}
inline void UsbAlternateInterfaceInfoDataView::GetEndpointsDataView(
    mojo::ArrayDataView<UsbEndpointInfoDataView>* output) {
  auto pointer = data_->endpoints.Get();
  *output = mojo::ArrayDataView<UsbEndpointInfoDataView>(pointer, context_);
}


inline void UsbInterfaceInfoDataView::GetAlternatesDataView(
    mojo::ArrayDataView<UsbAlternateInterfaceInfoDataView>* output) {
  auto pointer = data_->alternates.Get();
  *output = mojo::ArrayDataView<UsbAlternateInterfaceInfoDataView>(pointer, context_);
}


inline void UsbConfigurationInfoDataView::GetConfigurationNameDataView(
    ::mojo_base::mojom::String16DataView* output) {
  auto pointer = data_->configuration_name.Get();
  *output = ::mojo_base::mojom::String16DataView(pointer, context_);
}
inline void UsbConfigurationInfoDataView::GetInterfacesDataView(
    mojo::ArrayDataView<UsbInterfaceInfoDataView>* output) {
  auto pointer = data_->interfaces.Get();
  *output = mojo::ArrayDataView<UsbInterfaceInfoDataView>(pointer, context_);
}


inline void UsbDeviceInfoDataView::GetGuidDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->guid.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void UsbDeviceInfoDataView::GetManufacturerNameDataView(
    ::mojo_base::mojom::String16DataView* output) {
  auto pointer = data_->manufacturer_name.Get();
  *output = ::mojo_base::mojom::String16DataView(pointer, context_);
}
inline void UsbDeviceInfoDataView::GetProductNameDataView(
    ::mojo_base::mojom::String16DataView* output) {
  auto pointer = data_->product_name.Get();
  *output = ::mojo_base::mojom::String16DataView(pointer, context_);
}
inline void UsbDeviceInfoDataView::GetSerialNumberDataView(
    ::mojo_base::mojom::String16DataView* output) {
  auto pointer = data_->serial_number.Get();
  *output = ::mojo_base::mojom::String16DataView(pointer, context_);
}
inline void UsbDeviceInfoDataView::GetConfigurationsDataView(
    mojo::ArrayDataView<UsbConfigurationInfoDataView>* output) {
  auto pointer = data_->configurations.Get();
  *output = mojo::ArrayDataView<UsbConfigurationInfoDataView>(pointer, context_);
}






































inline void UsbDevice_ControlTransferIn_ParamsDataView::GetParamsDataView(
    UsbControlTransferParamsDataView* output) {
  auto pointer = data_->params.Get();
  *output = UsbControlTransferParamsDataView(pointer, context_);
}


inline void UsbDevice_ControlTransferIn_ResponseParamsDataView::GetDataDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->data.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}


inline void UsbDevice_ControlTransferOut_ParamsDataView::GetParamsDataView(
    UsbControlTransferParamsDataView* output) {
  auto pointer = data_->params.Get();
  *output = UsbControlTransferParamsDataView(pointer, context_);
}
inline void UsbDevice_ControlTransferOut_ParamsDataView::GetDataDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->data.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}






inline void UsbDevice_GenericTransferIn_ResponseParamsDataView::GetDataDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->data.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}


inline void UsbDevice_GenericTransferOut_ParamsDataView::GetDataDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->data.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}




inline void UsbDevice_IsochronousTransferIn_ParamsDataView::GetPacketLengthsDataView(
    mojo::ArrayDataView<uint32_t>* output) {
  auto pointer = data_->packet_lengths.Get();
  *output = mojo::ArrayDataView<uint32_t>(pointer, context_);
}


inline void UsbDevice_IsochronousTransferIn_ResponseParamsDataView::GetDataDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->data.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}
inline void UsbDevice_IsochronousTransferIn_ResponseParamsDataView::GetPacketsDataView(
    mojo::ArrayDataView<UsbIsochronousPacketDataView>* output) {
  auto pointer = data_->packets.Get();
  *output = mojo::ArrayDataView<UsbIsochronousPacketDataView>(pointer, context_);
}


inline void UsbDevice_IsochronousTransferOut_ParamsDataView::GetDataDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->data.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}
inline void UsbDevice_IsochronousTransferOut_ParamsDataView::GetPacketLengthsDataView(
    mojo::ArrayDataView<uint32_t>* output) {
  auto pointer = data_->packet_lengths.Get();
  *output = mojo::ArrayDataView<uint32_t>(pointer, context_);
}


inline void UsbDevice_IsochronousTransferOut_ResponseParamsDataView::GetPacketsDataView(
    mojo::ArrayDataView<UsbIsochronousPacketDataView>* output) {
  auto pointer = data_->packets.Get();
  *output = mojo::ArrayDataView<UsbIsochronousPacketDataView>(pointer, context_);
}



}  // namespace mojom
}  // namespace device

#endif  // DEVICE_USB_PUBLIC_MOJOM_DEVICE_MOJOM_SHARED_H_
