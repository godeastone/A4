// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_GEOLOCATION_MOJOM_SHARED_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_GEOLOCATION_MOJOM_SHARED_H_

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
#include "services/device/public/mojom/geolocation.mojom-shared-internal.h"
#include "services/device/public/mojom/geoposition.mojom-shared.h"

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
class GeolocationInterfaceBase {};

using GeolocationPtrDataView =
    mojo::InterfacePtrDataView<GeolocationInterfaceBase>;
using GeolocationRequestDataView =
    mojo::InterfaceRequestDataView<GeolocationInterfaceBase>;
using GeolocationAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<GeolocationInterfaceBase>;
using GeolocationAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<GeolocationInterfaceBase>;
class Geolocation_SetHighAccuracy_ParamsDataView {
 public:
  Geolocation_SetHighAccuracy_ParamsDataView() {}

  Geolocation_SetHighAccuracy_ParamsDataView(
      internal::Geolocation_SetHighAccuracy_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool high_accuracy() const {
    return data_->high_accuracy;
  }
 private:
  internal::Geolocation_SetHighAccuracy_Params_Data* data_ = nullptr;
};

class Geolocation_QueryNextPosition_ParamsDataView {
 public:
  Geolocation_QueryNextPosition_ParamsDataView() {}

  Geolocation_QueryNextPosition_ParamsDataView(
      internal::Geolocation_QueryNextPosition_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::Geolocation_QueryNextPosition_Params_Data* data_ = nullptr;
};

class Geolocation_QueryNextPosition_ResponseParamsDataView {
 public:
  Geolocation_QueryNextPosition_ResponseParamsDataView() {}

  Geolocation_QueryNextPosition_ResponseParamsDataView(
      internal::Geolocation_QueryNextPosition_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetGeopositionDataView(
      ::device::mojom::GeopositionDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadGeoposition(UserType* output) {
    auto* pointer = data_->geoposition.Get();
    return mojo::internal::Deserialize<::device::mojom::GeopositionDataView>(
        pointer, output, context_);
  }
 private:
  internal::Geolocation_QueryNextPosition_ResponseParams_Data* data_ = nullptr;
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





inline void Geolocation_QueryNextPosition_ResponseParamsDataView::GetGeopositionDataView(
    ::device::mojom::GeopositionDataView* output) {
  auto pointer = data_->geoposition.Get();
  *output = ::device::mojom::GeopositionDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace device

#endif  // SERVICES_DEVICE_PUBLIC_MOJOM_GEOLOCATION_MOJOM_SHARED_H_
