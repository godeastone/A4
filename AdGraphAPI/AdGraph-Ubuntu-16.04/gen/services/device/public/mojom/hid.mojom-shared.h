// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_HID_MOJOM_SHARED_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_HID_MOJOM_SHARED_H_

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
#include "services/device/public/mojom/hid.mojom-shared-internal.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"


namespace device {
namespace mojom {
class HidUsageAndPageDataView;

class HidCollectionInfoDataView;

class HidDeviceInfoDataView;



}  // namespace mojom
}  // namespace device

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::device::mojom::HidUsageAndPageDataView> {
  using Data = ::device::mojom::internal::HidUsageAndPage_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::device::mojom::HidCollectionInfoDataView> {
  using Data = ::device::mojom::internal::HidCollectionInfo_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::device::mojom::HidDeviceInfoDataView> {
  using Data = ::device::mojom::internal::HidDeviceInfo_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace device {
namespace mojom {

enum class HidBusType : int32_t {
  kHIDBusTypeUSB = 0,
  kHIDBusTypeBluetooth = 1,
  kMinValue = 0,
  kMaxValue = 1,
};

inline std::ostream& operator<<(std::ostream& os, HidBusType value) {
  switch(value) {
    case HidBusType::kHIDBusTypeUSB:
      return os << "HidBusType::kHIDBusTypeUSB";
    case HidBusType::kHIDBusTypeBluetooth:
      return os << "HidBusType::kHIDBusTypeBluetooth";
    default:
      return os << "Unknown HidBusType value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(HidBusType value) {
  return internal::HidBusType_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
// Interface base classes. They are used for type safety check.
class HidManagerClientInterfaceBase {};

using HidManagerClientPtrDataView =
    mojo::InterfacePtrDataView<HidManagerClientInterfaceBase>;
using HidManagerClientRequestDataView =
    mojo::InterfaceRequestDataView<HidManagerClientInterfaceBase>;
using HidManagerClientAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<HidManagerClientInterfaceBase>;
using HidManagerClientAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<HidManagerClientInterfaceBase>;
class HidManagerInterfaceBase {};

using HidManagerPtrDataView =
    mojo::InterfacePtrDataView<HidManagerInterfaceBase>;
using HidManagerRequestDataView =
    mojo::InterfaceRequestDataView<HidManagerInterfaceBase>;
using HidManagerAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<HidManagerInterfaceBase>;
using HidManagerAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<HidManagerInterfaceBase>;
class HidConnectionInterfaceBase {};

using HidConnectionPtrDataView =
    mojo::InterfacePtrDataView<HidConnectionInterfaceBase>;
using HidConnectionRequestDataView =
    mojo::InterfaceRequestDataView<HidConnectionInterfaceBase>;
using HidConnectionAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<HidConnectionInterfaceBase>;
using HidConnectionAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<HidConnectionInterfaceBase>;
class HidUsageAndPageDataView {
 public:
  HidUsageAndPageDataView() {}

  HidUsageAndPageDataView(
      internal::HidUsageAndPage_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint16_t usage() const {
    return data_->usage;
  }
  uint16_t usage_page() const {
    return data_->usage_page;
  }
 private:
  internal::HidUsageAndPage_Data* data_ = nullptr;
};

class HidCollectionInfoDataView {
 public:
  HidCollectionInfoDataView() {}

  HidCollectionInfoDataView(
      internal::HidCollectionInfo_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetUsageDataView(
      HidUsageAndPageDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUsage(UserType* output) {
    auto* pointer = data_->usage.Get();
    return mojo::internal::Deserialize<::device::mojom::HidUsageAndPageDataView>(
        pointer, output, context_);
  }
  inline void GetReportIdsDataView(
      mojo::ArrayDataView<int32_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadReportIds(UserType* output) {
    auto* pointer = data_->report_ids.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<int32_t>>(
        pointer, output, context_);
  }
 private:
  internal::HidCollectionInfo_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class HidDeviceInfoDataView {
 public:
  HidDeviceInfoDataView() {}

  HidDeviceInfoDataView(
      internal::HidDeviceInfo_Data* data,
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
  uint16_t vendor_id() const {
    return data_->vendor_id;
  }
  uint16_t product_id() const {
    return data_->product_id;
  }
  inline void GetProductNameDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadProductName(UserType* output) {
    auto* pointer = data_->product_name.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetSerialNumberDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSerialNumber(UserType* output) {
    auto* pointer = data_->serial_number.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadBusType(UserType* output) const {
    auto data_value = data_->bus_type;
    return mojo::internal::Deserialize<::device::mojom::HidBusType>(
        data_value, output);
  }

  HidBusType bus_type() const {
    return static_cast<HidBusType>(data_->bus_type);
  }
  inline void GetReportDescriptorDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadReportDescriptor(UserType* output) {
    auto* pointer = data_->report_descriptor.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
  inline void GetCollectionsDataView(
      mojo::ArrayDataView<HidCollectionInfoDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCollections(UserType* output) {
    auto* pointer = data_->collections.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::device::mojom::HidCollectionInfoDataView>>(
        pointer, output, context_);
  }
  bool has_report_id() const {
    return data_->has_report_id;
  }
  uint64_t max_input_report_size() const {
    return data_->max_input_report_size;
  }
  uint64_t max_output_report_size() const {
    return data_->max_output_report_size;
  }
  uint64_t max_feature_report_size() const {
    return data_->max_feature_report_size;
  }
  inline void GetDeviceNodeDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDeviceNode(UserType* output) {
    auto* pointer = data_->device_node.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::HidDeviceInfo_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class HidManagerClient_DeviceAdded_ParamsDataView {
 public:
  HidManagerClient_DeviceAdded_ParamsDataView() {}

  HidManagerClient_DeviceAdded_ParamsDataView(
      internal::HidManagerClient_DeviceAdded_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetDeviceInfoDataView(
      HidDeviceInfoDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDeviceInfo(UserType* output) {
    auto* pointer = data_->device_info.Get();
    return mojo::internal::Deserialize<::device::mojom::HidDeviceInfoDataView>(
        pointer, output, context_);
  }
 private:
  internal::HidManagerClient_DeviceAdded_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class HidManagerClient_DeviceRemoved_ParamsDataView {
 public:
  HidManagerClient_DeviceRemoved_ParamsDataView() {}

  HidManagerClient_DeviceRemoved_ParamsDataView(
      internal::HidManagerClient_DeviceRemoved_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetDeviceInfoDataView(
      HidDeviceInfoDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDeviceInfo(UserType* output) {
    auto* pointer = data_->device_info.Get();
    return mojo::internal::Deserialize<::device::mojom::HidDeviceInfoDataView>(
        pointer, output, context_);
  }
 private:
  internal::HidManagerClient_DeviceRemoved_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class HidManager_GetDevicesAndSetClient_ParamsDataView {
 public:
  HidManager_GetDevicesAndSetClient_ParamsDataView() {}

  HidManager_GetDevicesAndSetClient_ParamsDataView(
      internal::HidManager_GetDevicesAndSetClient_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeClient() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::device::mojom::HidManagerClientAssociatedPtrInfoDataView>(
            &data_->client, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::HidManager_GetDevicesAndSetClient_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class HidManager_GetDevicesAndSetClient_ResponseParamsDataView {
 public:
  HidManager_GetDevicesAndSetClient_ResponseParamsDataView() {}

  HidManager_GetDevicesAndSetClient_ResponseParamsDataView(
      internal::HidManager_GetDevicesAndSetClient_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetDevicesDataView(
      mojo::ArrayDataView<HidDeviceInfoDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDevices(UserType* output) {
    auto* pointer = data_->devices.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::device::mojom::HidDeviceInfoDataView>>(
        pointer, output, context_);
  }
 private:
  internal::HidManager_GetDevicesAndSetClient_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class HidManager_GetDevices_ParamsDataView {
 public:
  HidManager_GetDevices_ParamsDataView() {}

  HidManager_GetDevices_ParamsDataView(
      internal::HidManager_GetDevices_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::HidManager_GetDevices_Params_Data* data_ = nullptr;
};

class HidManager_GetDevices_ResponseParamsDataView {
 public:
  HidManager_GetDevices_ResponseParamsDataView() {}

  HidManager_GetDevices_ResponseParamsDataView(
      internal::HidManager_GetDevices_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetDevicesDataView(
      mojo::ArrayDataView<HidDeviceInfoDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDevices(UserType* output) {
    auto* pointer = data_->devices.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::device::mojom::HidDeviceInfoDataView>>(
        pointer, output, context_);
  }
 private:
  internal::HidManager_GetDevices_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class HidManager_Connect_ParamsDataView {
 public:
  HidManager_Connect_ParamsDataView() {}

  HidManager_Connect_ParamsDataView(
      internal::HidManager_Connect_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetDeviceGuidDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDeviceGuid(UserType* output) {
    auto* pointer = data_->device_guid.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::HidManager_Connect_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class HidManager_Connect_ResponseParamsDataView {
 public:
  HidManager_Connect_ResponseParamsDataView() {}

  HidManager_Connect_ResponseParamsDataView(
      internal::HidManager_Connect_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeConnection() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::device::mojom::HidConnectionPtrDataView>(
            &data_->connection, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::HidManager_Connect_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class HidConnection_Read_ParamsDataView {
 public:
  HidConnection_Read_ParamsDataView() {}

  HidConnection_Read_ParamsDataView(
      internal::HidConnection_Read_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::HidConnection_Read_Params_Data* data_ = nullptr;
};

class HidConnection_Read_ResponseParamsDataView {
 public:
  HidConnection_Read_ResponseParamsDataView() {}

  HidConnection_Read_ResponseParamsDataView(
      internal::HidConnection_Read_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  bool success() const {
    return data_->success;
  }
  uint8_t report_id() const {
    return data_->report_id;
  }
  inline void GetBufferDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadBuffer(UserType* output) {
    auto* pointer = data_->buffer.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
 private:
  internal::HidConnection_Read_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class HidConnection_Write_ParamsDataView {
 public:
  HidConnection_Write_ParamsDataView() {}

  HidConnection_Write_ParamsDataView(
      internal::HidConnection_Write_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  uint8_t report_id() const {
    return data_->report_id;
  }
  inline void GetBufferDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadBuffer(UserType* output) {
    auto* pointer = data_->buffer.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
 private:
  internal::HidConnection_Write_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class HidConnection_Write_ResponseParamsDataView {
 public:
  HidConnection_Write_ResponseParamsDataView() {}

  HidConnection_Write_ResponseParamsDataView(
      internal::HidConnection_Write_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool success() const {
    return data_->success;
  }
 private:
  internal::HidConnection_Write_ResponseParams_Data* data_ = nullptr;
};

class HidConnection_GetFeatureReport_ParamsDataView {
 public:
  HidConnection_GetFeatureReport_ParamsDataView() {}

  HidConnection_GetFeatureReport_ParamsDataView(
      internal::HidConnection_GetFeatureReport_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint8_t report_id() const {
    return data_->report_id;
  }
 private:
  internal::HidConnection_GetFeatureReport_Params_Data* data_ = nullptr;
};

class HidConnection_GetFeatureReport_ResponseParamsDataView {
 public:
  HidConnection_GetFeatureReport_ResponseParamsDataView() {}

  HidConnection_GetFeatureReport_ResponseParamsDataView(
      internal::HidConnection_GetFeatureReport_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  bool success() const {
    return data_->success;
  }
  inline void GetBufferDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadBuffer(UserType* output) {
    auto* pointer = data_->buffer.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
 private:
  internal::HidConnection_GetFeatureReport_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class HidConnection_SendFeatureReport_ParamsDataView {
 public:
  HidConnection_SendFeatureReport_ParamsDataView() {}

  HidConnection_SendFeatureReport_ParamsDataView(
      internal::HidConnection_SendFeatureReport_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  uint8_t report_id() const {
    return data_->report_id;
  }
  inline void GetBufferDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadBuffer(UserType* output) {
    auto* pointer = data_->buffer.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
 private:
  internal::HidConnection_SendFeatureReport_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class HidConnection_SendFeatureReport_ResponseParamsDataView {
 public:
  HidConnection_SendFeatureReport_ResponseParamsDataView() {}

  HidConnection_SendFeatureReport_ResponseParamsDataView(
      internal::HidConnection_SendFeatureReport_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool success() const {
    return data_->success;
  }
 private:
  internal::HidConnection_SendFeatureReport_ResponseParams_Data* data_ = nullptr;
};



}  // namespace mojom
}  // namespace device

namespace std {

template <>
struct hash<::device::mojom::HidBusType>
    : public mojo::internal::EnumHashImpl<::device::mojom::HidBusType> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::device::mojom::HidBusType, ::device::mojom::HidBusType> {
  static ::device::mojom::HidBusType ToMojom(::device::mojom::HidBusType input) { return input; }
  static bool FromMojom(::device::mojom::HidBusType input, ::device::mojom::HidBusType* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::mojom::HidBusType, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::device::mojom::HidBusType, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::device::mojom::HidBusType>(input), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::mojom::HidUsageAndPageDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::device::mojom::HidUsageAndPageDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::device::mojom::internal::HidUsageAndPage_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    (*output)->usage = CallWithContext(Traits::usage, input, custom_context);
    (*output)->usage_page = CallWithContext(Traits::usage_page, input, custom_context);
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::device::mojom::internal::HidUsageAndPage_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::device::mojom::HidUsageAndPageDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::mojom::HidCollectionInfoDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::device::mojom::HidCollectionInfoDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::device::mojom::internal::HidCollectionInfo_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    decltype(CallWithContext(Traits::usage, input, custom_context)) in_usage = CallWithContext(Traits::usage, input, custom_context);
    typename decltype((*output)->usage)::BaseType::BufferWriter
        usage_writer;
    mojo::internal::Serialize<::device::mojom::HidUsageAndPageDataView>(
        in_usage, buffer, &usage_writer, context);
    (*output)->usage.Set(
        usage_writer.is_null() ? nullptr : usage_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->usage.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null usage in HidCollectionInfo struct");
    decltype(CallWithContext(Traits::report_ids, input, custom_context)) in_report_ids = CallWithContext(Traits::report_ids, input, custom_context);
    typename decltype((*output)->report_ids)::BaseType::BufferWriter
        report_ids_writer;
    const mojo::internal::ContainerValidateParams report_ids_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<int32_t>>(
        in_report_ids, buffer, &report_ids_writer, &report_ids_validate_params,
        context);
    (*output)->report_ids.Set(
        report_ids_writer.is_null() ? nullptr : report_ids_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->report_ids.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null report_ids in HidCollectionInfo struct");
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::device::mojom::internal::HidCollectionInfo_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::device::mojom::HidCollectionInfoDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::mojom::HidDeviceInfoDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::device::mojom::HidDeviceInfoDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::device::mojom::internal::HidDeviceInfo_Data::BufferWriter* output,
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
        "null guid in HidDeviceInfo struct");
    (*output)->vendor_id = CallWithContext(Traits::vendor_id, input, custom_context);
    (*output)->product_id = CallWithContext(Traits::product_id, input, custom_context);
    decltype(CallWithContext(Traits::product_name, input, custom_context)) in_product_name = CallWithContext(Traits::product_name, input, custom_context);
    typename decltype((*output)->product_name)::BaseType::BufferWriter
        product_name_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_product_name, buffer, &product_name_writer, context);
    (*output)->product_name.Set(
        product_name_writer.is_null() ? nullptr : product_name_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->product_name.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null product_name in HidDeviceInfo struct");
    decltype(CallWithContext(Traits::serial_number, input, custom_context)) in_serial_number = CallWithContext(Traits::serial_number, input, custom_context);
    typename decltype((*output)->serial_number)::BaseType::BufferWriter
        serial_number_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_serial_number, buffer, &serial_number_writer, context);
    (*output)->serial_number.Set(
        serial_number_writer.is_null() ? nullptr : serial_number_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->serial_number.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null serial_number in HidDeviceInfo struct");
    mojo::internal::Serialize<::device::mojom::HidBusType>(
        CallWithContext(Traits::bus_type, input, custom_context), &(*output)->bus_type);
    decltype(CallWithContext(Traits::report_descriptor, input, custom_context)) in_report_descriptor = CallWithContext(Traits::report_descriptor, input, custom_context);
    typename decltype((*output)->report_descriptor)::BaseType::BufferWriter
        report_descriptor_writer;
    const mojo::internal::ContainerValidateParams report_descriptor_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
        in_report_descriptor, buffer, &report_descriptor_writer, &report_descriptor_validate_params,
        context);
    (*output)->report_descriptor.Set(
        report_descriptor_writer.is_null() ? nullptr : report_descriptor_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->report_descriptor.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null report_descriptor in HidDeviceInfo struct");
    decltype(CallWithContext(Traits::collections, input, custom_context)) in_collections = CallWithContext(Traits::collections, input, custom_context);
    typename decltype((*output)->collections)::BaseType::BufferWriter
        collections_writer;
    const mojo::internal::ContainerValidateParams collections_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::device::mojom::HidCollectionInfoDataView>>(
        in_collections, buffer, &collections_writer, &collections_validate_params,
        context);
    (*output)->collections.Set(
        collections_writer.is_null() ? nullptr : collections_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->collections.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null collections in HidDeviceInfo struct");
    (*output)->has_report_id = CallWithContext(Traits::has_report_id, input, custom_context);
    (*output)->max_input_report_size = CallWithContext(Traits::max_input_report_size, input, custom_context);
    (*output)->max_output_report_size = CallWithContext(Traits::max_output_report_size, input, custom_context);
    (*output)->max_feature_report_size = CallWithContext(Traits::max_feature_report_size, input, custom_context);
    decltype(CallWithContext(Traits::device_node, input, custom_context)) in_device_node = CallWithContext(Traits::device_node, input, custom_context);
    typename decltype((*output)->device_node)::BaseType::BufferWriter
        device_node_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_device_node, buffer, &device_node_writer, context);
    (*output)->device_node.Set(
        device_node_writer.is_null() ? nullptr : device_node_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->device_node.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null device_node in HidDeviceInfo struct");
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::device::mojom::internal::HidDeviceInfo_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::device::mojom::HidDeviceInfoDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace device {
namespace mojom {



inline void HidCollectionInfoDataView::GetUsageDataView(
    HidUsageAndPageDataView* output) {
  auto pointer = data_->usage.Get();
  *output = HidUsageAndPageDataView(pointer, context_);
}
inline void HidCollectionInfoDataView::GetReportIdsDataView(
    mojo::ArrayDataView<int32_t>* output) {
  auto pointer = data_->report_ids.Get();
  *output = mojo::ArrayDataView<int32_t>(pointer, context_);
}


inline void HidDeviceInfoDataView::GetGuidDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->guid.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void HidDeviceInfoDataView::GetProductNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->product_name.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void HidDeviceInfoDataView::GetSerialNumberDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->serial_number.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void HidDeviceInfoDataView::GetReportDescriptorDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->report_descriptor.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}
inline void HidDeviceInfoDataView::GetCollectionsDataView(
    mojo::ArrayDataView<HidCollectionInfoDataView>* output) {
  auto pointer = data_->collections.Get();
  *output = mojo::ArrayDataView<HidCollectionInfoDataView>(pointer, context_);
}
inline void HidDeviceInfoDataView::GetDeviceNodeDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->device_node.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void HidManagerClient_DeviceAdded_ParamsDataView::GetDeviceInfoDataView(
    HidDeviceInfoDataView* output) {
  auto pointer = data_->device_info.Get();
  *output = HidDeviceInfoDataView(pointer, context_);
}


inline void HidManagerClient_DeviceRemoved_ParamsDataView::GetDeviceInfoDataView(
    HidDeviceInfoDataView* output) {
  auto pointer = data_->device_info.Get();
  *output = HidDeviceInfoDataView(pointer, context_);
}




inline void HidManager_GetDevicesAndSetClient_ResponseParamsDataView::GetDevicesDataView(
    mojo::ArrayDataView<HidDeviceInfoDataView>* output) {
  auto pointer = data_->devices.Get();
  *output = mojo::ArrayDataView<HidDeviceInfoDataView>(pointer, context_);
}




inline void HidManager_GetDevices_ResponseParamsDataView::GetDevicesDataView(
    mojo::ArrayDataView<HidDeviceInfoDataView>* output) {
  auto pointer = data_->devices.Get();
  *output = mojo::ArrayDataView<HidDeviceInfoDataView>(pointer, context_);
}


inline void HidManager_Connect_ParamsDataView::GetDeviceGuidDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->device_guid.Get();
  *output = mojo::StringDataView(pointer, context_);
}






inline void HidConnection_Read_ResponseParamsDataView::GetBufferDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->buffer.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}


inline void HidConnection_Write_ParamsDataView::GetBufferDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->buffer.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}






inline void HidConnection_GetFeatureReport_ResponseParamsDataView::GetBufferDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->buffer.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}


inline void HidConnection_SendFeatureReport_ParamsDataView::GetBufferDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->buffer.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}





}  // namespace mojom
}  // namespace device

#endif  // SERVICES_DEVICE_PUBLIC_MOJOM_HID_MOJOM_SHARED_H_
