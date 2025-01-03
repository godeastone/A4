// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef DEVICE_USB_PUBLIC_MOJOM_CHOOSER_SERVICE_MOJOM_SHARED_H_
#define DEVICE_USB_PUBLIC_MOJOM_CHOOSER_SERVICE_MOJOM_SHARED_H_

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
#include "device/usb/public/mojom/chooser_service.mojom-shared-internal.h"
#include "device/usb/public/mojom/device.mojom-shared.h"
#include "device/usb/public/mojom/device_manager.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"


namespace device {
namespace mojom {


}  // namespace mojom
}  // namespace device

namespace mojo {
namespace internal {

}  // namespace internal
}  // namespace mojo


namespace device {
namespace mojom {
// Interface base classes. They are used for type safety check.
class UsbChooserServiceInterfaceBase {};

using UsbChooserServicePtrDataView =
    mojo::InterfacePtrDataView<UsbChooserServiceInterfaceBase>;
using UsbChooserServiceRequestDataView =
    mojo::InterfaceRequestDataView<UsbChooserServiceInterfaceBase>;
using UsbChooserServiceAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<UsbChooserServiceInterfaceBase>;
using UsbChooserServiceAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<UsbChooserServiceInterfaceBase>;
class UsbChooserService_GetPermission_ParamsDataView {
 public:
  UsbChooserService_GetPermission_ParamsDataView() {}

  UsbChooserService_GetPermission_ParamsDataView(
      internal::UsbChooserService_GetPermission_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetDeviceFiltersDataView(
      mojo::ArrayDataView<::device::mojom::UsbDeviceFilterDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDeviceFilters(UserType* output) {
    auto* pointer = data_->device_filters.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::device::mojom::UsbDeviceFilterDataView>>(
        pointer, output, context_);
  }
 private:
  internal::UsbChooserService_GetPermission_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class UsbChooserService_GetPermission_ResponseParamsDataView {
 public:
  UsbChooserService_GetPermission_ResponseParamsDataView() {}

  UsbChooserService_GetPermission_ResponseParamsDataView(
      internal::UsbChooserService_GetPermission_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetResultDataView(
      ::device::mojom::UsbDeviceInfoDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadResult(UserType* output) {
    auto* pointer = data_->result.Get();
    return mojo::internal::Deserialize<::device::mojom::UsbDeviceInfoDataView>(
        pointer, output, context_);
  }
 private:
  internal::UsbChooserService_GetPermission_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace device

namespace std {

}  // namespace std

namespace mojo {

}  // namespace mojo


namespace device {
namespace mojom {

inline void UsbChooserService_GetPermission_ParamsDataView::GetDeviceFiltersDataView(
    mojo::ArrayDataView<::device::mojom::UsbDeviceFilterDataView>* output) {
  auto pointer = data_->device_filters.Get();
  *output = mojo::ArrayDataView<::device::mojom::UsbDeviceFilterDataView>(pointer, context_);
}


inline void UsbChooserService_GetPermission_ResponseParamsDataView::GetResultDataView(
    ::device::mojom::UsbDeviceInfoDataView* output) {
  auto pointer = data_->result.Get();
  *output = ::device::mojom::UsbDeviceInfoDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace device

#endif  // DEVICE_USB_PUBLIC_MOJOM_CHOOSER_SERVICE_MOJOM_SHARED_H_
