// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef DEVICE_USB_PUBLIC_MOJOM_DEVICE_MANAGER_MOJOM_SHARED_H_
#define DEVICE_USB_PUBLIC_MOJOM_DEVICE_MANAGER_MOJOM_SHARED_H_

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
#include "device/usb/public/mojom/device_manager.mojom-shared-internal.h"
#include "device/usb/public/mojom/device.mojom-shared.h"
#include "mojo/public/mojom/base/string16.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"


namespace device {
namespace mojom {
class UsbDeviceFilterDataView;

class UsbEnumerationOptionsDataView;



}  // namespace mojom
}  // namespace device

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::device::mojom::UsbDeviceFilterDataView> {
  using Data = ::device::mojom::internal::UsbDeviceFilter_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::device::mojom::UsbEnumerationOptionsDataView> {
  using Data = ::device::mojom::internal::UsbEnumerationOptions_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace device {
namespace mojom {
// Interface base classes. They are used for type safety check.
class UsbDeviceManagerInterfaceBase {};

using UsbDeviceManagerPtrDataView =
    mojo::InterfacePtrDataView<UsbDeviceManagerInterfaceBase>;
using UsbDeviceManagerRequestDataView =
    mojo::InterfaceRequestDataView<UsbDeviceManagerInterfaceBase>;
using UsbDeviceManagerAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<UsbDeviceManagerInterfaceBase>;
using UsbDeviceManagerAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<UsbDeviceManagerInterfaceBase>;
class UsbDeviceManagerClientInterfaceBase {};

using UsbDeviceManagerClientPtrDataView =
    mojo::InterfacePtrDataView<UsbDeviceManagerClientInterfaceBase>;
using UsbDeviceManagerClientRequestDataView =
    mojo::InterfaceRequestDataView<UsbDeviceManagerClientInterfaceBase>;
using UsbDeviceManagerClientAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<UsbDeviceManagerClientInterfaceBase>;
using UsbDeviceManagerClientAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<UsbDeviceManagerClientInterfaceBase>;
class UsbDeviceFilterDataView {
 public:
  UsbDeviceFilterDataView() {}

  UsbDeviceFilterDataView(
      internal::UsbDeviceFilter_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  bool has_vendor_id() const {
    return data_->has_vendor_id;
  }
  uint16_t vendor_id() const {
    return data_->vendor_id;
  }
  bool has_product_id() const {
    return data_->has_product_id;
  }
  uint16_t product_id() const {
    return data_->product_id;
  }
  bool has_class_code() const {
    return data_->has_class_code;
  }
  uint8_t class_code() const {
    return data_->class_code;
  }
  bool has_subclass_code() const {
    return data_->has_subclass_code;
  }
  uint8_t subclass_code() const {
    return data_->subclass_code;
  }
  bool has_protocol_code() const {
    return data_->has_protocol_code;
  }
  uint8_t protocol_code() const {
    return data_->protocol_code;
  }
  inline void GetSerialNumberDataView(
      ::mojo_base::mojom::String16DataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSerialNumber(UserType* output) {
    auto* pointer = data_->serial_number.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::String16DataView>(
        pointer, output, context_);
  }
 private:
  internal::UsbDeviceFilter_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class UsbEnumerationOptionsDataView {
 public:
  UsbEnumerationOptionsDataView() {}

  UsbEnumerationOptionsDataView(
      internal::UsbEnumerationOptions_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetFiltersDataView(
      mojo::ArrayDataView<UsbDeviceFilterDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFilters(UserType* output) {
    auto* pointer = data_->filters.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::device::mojom::UsbDeviceFilterDataView>>(
        pointer, output, context_);
  }
 private:
  internal::UsbEnumerationOptions_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class UsbDeviceManager_GetDevices_ParamsDataView {
 public:
  UsbDeviceManager_GetDevices_ParamsDataView() {}

  UsbDeviceManager_GetDevices_ParamsDataView(
      internal::UsbDeviceManager_GetDevices_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetOptionsDataView(
      UsbEnumerationOptionsDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadOptions(UserType* output) {
    auto* pointer = data_->options.Get();
    return mojo::internal::Deserialize<::device::mojom::UsbEnumerationOptionsDataView>(
        pointer, output, context_);
  }
 private:
  internal::UsbDeviceManager_GetDevices_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class UsbDeviceManager_GetDevices_ResponseParamsDataView {
 public:
  UsbDeviceManager_GetDevices_ResponseParamsDataView() {}

  UsbDeviceManager_GetDevices_ResponseParamsDataView(
      internal::UsbDeviceManager_GetDevices_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetResultsDataView(
      mojo::ArrayDataView<::device::mojom::UsbDeviceInfoDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadResults(UserType* output) {
    auto* pointer = data_->results.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::device::mojom::UsbDeviceInfoDataView>>(
        pointer, output, context_);
  }
 private:
  internal::UsbDeviceManager_GetDevices_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class UsbDeviceManager_GetDevice_ParamsDataView {
 public:
  UsbDeviceManager_GetDevice_ParamsDataView() {}

  UsbDeviceManager_GetDevice_ParamsDataView(
      internal::UsbDeviceManager_GetDevice_Params_Data* data,
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
  template <typename UserType>
  UserType TakeDeviceRequest() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::device::mojom::UsbDeviceRequestDataView>(
            &data_->device_request, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::UsbDeviceManager_GetDevice_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class UsbDeviceManager_SetClient_ParamsDataView {
 public:
  UsbDeviceManager_SetClient_ParamsDataView() {}

  UsbDeviceManager_SetClient_ParamsDataView(
      internal::UsbDeviceManager_SetClient_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeClient() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::device::mojom::UsbDeviceManagerClientPtrDataView>(
            &data_->client, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::UsbDeviceManager_SetClient_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class UsbDeviceManagerClient_OnDeviceAdded_ParamsDataView {
 public:
  UsbDeviceManagerClient_OnDeviceAdded_ParamsDataView() {}

  UsbDeviceManagerClient_OnDeviceAdded_ParamsDataView(
      internal::UsbDeviceManagerClient_OnDeviceAdded_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetDeviceInfoDataView(
      ::device::mojom::UsbDeviceInfoDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDeviceInfo(UserType* output) {
    auto* pointer = data_->device_info.Get();
    return mojo::internal::Deserialize<::device::mojom::UsbDeviceInfoDataView>(
        pointer, output, context_);
  }
 private:
  internal::UsbDeviceManagerClient_OnDeviceAdded_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class UsbDeviceManagerClient_OnDeviceRemoved_ParamsDataView {
 public:
  UsbDeviceManagerClient_OnDeviceRemoved_ParamsDataView() {}

  UsbDeviceManagerClient_OnDeviceRemoved_ParamsDataView(
      internal::UsbDeviceManagerClient_OnDeviceRemoved_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetDeviceInfoDataView(
      ::device::mojom::UsbDeviceInfoDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDeviceInfo(UserType* output) {
    auto* pointer = data_->device_info.Get();
    return mojo::internal::Deserialize<::device::mojom::UsbDeviceInfoDataView>(
        pointer, output, context_);
  }
 private:
  internal::UsbDeviceManagerClient_OnDeviceRemoved_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace device

namespace std {

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::mojom::UsbDeviceFilterDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::device::mojom::UsbDeviceFilterDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::device::mojom::internal::UsbDeviceFilter_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    (*output)->has_vendor_id = CallWithContext(Traits::has_vendor_id, input, custom_context);
    (*output)->vendor_id = CallWithContext(Traits::vendor_id, input, custom_context);
    (*output)->has_product_id = CallWithContext(Traits::has_product_id, input, custom_context);
    (*output)->product_id = CallWithContext(Traits::product_id, input, custom_context);
    (*output)->has_class_code = CallWithContext(Traits::has_class_code, input, custom_context);
    (*output)->class_code = CallWithContext(Traits::class_code, input, custom_context);
    (*output)->has_subclass_code = CallWithContext(Traits::has_subclass_code, input, custom_context);
    (*output)->subclass_code = CallWithContext(Traits::subclass_code, input, custom_context);
    (*output)->has_protocol_code = CallWithContext(Traits::has_protocol_code, input, custom_context);
    (*output)->protocol_code = CallWithContext(Traits::protocol_code, input, custom_context);
    decltype(CallWithContext(Traits::serial_number, input, custom_context)) in_serial_number = CallWithContext(Traits::serial_number, input, custom_context);
    typename decltype((*output)->serial_number)::BaseType::BufferWriter
        serial_number_writer;
    mojo::internal::Serialize<::mojo_base::mojom::String16DataView>(
        in_serial_number, buffer, &serial_number_writer, context);
    (*output)->serial_number.Set(
        serial_number_writer.is_null() ? nullptr : serial_number_writer.data());
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::device::mojom::internal::UsbDeviceFilter_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::device::mojom::UsbDeviceFilterDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::mojom::UsbEnumerationOptionsDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::device::mojom::UsbEnumerationOptionsDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::device::mojom::internal::UsbEnumerationOptions_Data::BufferWriter* output,
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
    mojo::internal::Serialize<mojo::ArrayDataView<::device::mojom::UsbDeviceFilterDataView>>(
        in_filters, buffer, &filters_writer, &filters_validate_params,
        context);
    (*output)->filters.Set(
        filters_writer.is_null() ? nullptr : filters_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->filters.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null filters in UsbEnumerationOptions struct");
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::device::mojom::internal::UsbEnumerationOptions_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::device::mojom::UsbEnumerationOptionsDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace device {
namespace mojom {

inline void UsbDeviceFilterDataView::GetSerialNumberDataView(
    ::mojo_base::mojom::String16DataView* output) {
  auto pointer = data_->serial_number.Get();
  *output = ::mojo_base::mojom::String16DataView(pointer, context_);
}


inline void UsbEnumerationOptionsDataView::GetFiltersDataView(
    mojo::ArrayDataView<UsbDeviceFilterDataView>* output) {
  auto pointer = data_->filters.Get();
  *output = mojo::ArrayDataView<UsbDeviceFilterDataView>(pointer, context_);
}


inline void UsbDeviceManager_GetDevices_ParamsDataView::GetOptionsDataView(
    UsbEnumerationOptionsDataView* output) {
  auto pointer = data_->options.Get();
  *output = UsbEnumerationOptionsDataView(pointer, context_);
}


inline void UsbDeviceManager_GetDevices_ResponseParamsDataView::GetResultsDataView(
    mojo::ArrayDataView<::device::mojom::UsbDeviceInfoDataView>* output) {
  auto pointer = data_->results.Get();
  *output = mojo::ArrayDataView<::device::mojom::UsbDeviceInfoDataView>(pointer, context_);
}


inline void UsbDeviceManager_GetDevice_ParamsDataView::GetGuidDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->guid.Get();
  *output = mojo::StringDataView(pointer, context_);
}




inline void UsbDeviceManagerClient_OnDeviceAdded_ParamsDataView::GetDeviceInfoDataView(
    ::device::mojom::UsbDeviceInfoDataView* output) {
  auto pointer = data_->device_info.Get();
  *output = ::device::mojom::UsbDeviceInfoDataView(pointer, context_);
}


inline void UsbDeviceManagerClient_OnDeviceRemoved_ParamsDataView::GetDeviceInfoDataView(
    ::device::mojom::UsbDeviceInfoDataView* output) {
  auto pointer = data_->device_info.Get();
  *output = ::device::mojom::UsbDeviceInfoDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace device

#endif  // DEVICE_USB_PUBLIC_MOJOM_DEVICE_MANAGER_MOJOM_SHARED_H_
