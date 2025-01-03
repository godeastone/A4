// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_GEOLOCATION_CONFIG_MOJOM_SHARED_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_GEOLOCATION_CONFIG_MOJOM_SHARED_H_

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
#include "services/device/public/mojom/geolocation_config.mojom-shared-internal.h"

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
class GeolocationConfigInterfaceBase {};

using GeolocationConfigPtrDataView =
    mojo::InterfacePtrDataView<GeolocationConfigInterfaceBase>;
using GeolocationConfigRequestDataView =
    mojo::InterfaceRequestDataView<GeolocationConfigInterfaceBase>;
using GeolocationConfigAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<GeolocationConfigInterfaceBase>;
using GeolocationConfigAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<GeolocationConfigInterfaceBase>;
class GeolocationConfig_IsHighAccuracyLocationBeingCaptured_ParamsDataView {
 public:
  GeolocationConfig_IsHighAccuracyLocationBeingCaptured_ParamsDataView() {}

  GeolocationConfig_IsHighAccuracyLocationBeingCaptured_ParamsDataView(
      internal::GeolocationConfig_IsHighAccuracyLocationBeingCaptured_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::GeolocationConfig_IsHighAccuracyLocationBeingCaptured_Params_Data* data_ = nullptr;
};

class GeolocationConfig_IsHighAccuracyLocationBeingCaptured_ResponseParamsDataView {
 public:
  GeolocationConfig_IsHighAccuracyLocationBeingCaptured_ResponseParamsDataView() {}

  GeolocationConfig_IsHighAccuracyLocationBeingCaptured_ResponseParamsDataView(
      internal::GeolocationConfig_IsHighAccuracyLocationBeingCaptured_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool high_accuracy() const {
    return data_->high_accuracy;
  }
 private:
  internal::GeolocationConfig_IsHighAccuracyLocationBeingCaptured_ResponseParams_Data* data_ = nullptr;
};



}  // namespace mojom
}  // namespace device

namespace std {

}  // namespace std

namespace mojo {

}  // namespace mojo


namespace device {
namespace mojom {






}  // namespace mojom
}  // namespace device

#endif  // SERVICES_DEVICE_PUBLIC_MOJOM_GEOLOCATION_CONFIG_MOJOM_SHARED_H_
