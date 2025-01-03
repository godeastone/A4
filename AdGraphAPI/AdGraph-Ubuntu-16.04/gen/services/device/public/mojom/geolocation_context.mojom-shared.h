// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_GEOLOCATION_CONTEXT_MOJOM_SHARED_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_GEOLOCATION_CONTEXT_MOJOM_SHARED_H_

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
#include "services/device/public/mojom/geolocation_context.mojom-shared-internal.h"
#include "services/device/public/mojom/geolocation.mojom-shared.h"
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
class GeolocationContextInterfaceBase {};

using GeolocationContextPtrDataView =
    mojo::InterfacePtrDataView<GeolocationContextInterfaceBase>;
using GeolocationContextRequestDataView =
    mojo::InterfaceRequestDataView<GeolocationContextInterfaceBase>;
using GeolocationContextAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<GeolocationContextInterfaceBase>;
using GeolocationContextAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<GeolocationContextInterfaceBase>;
class GeolocationContext_BindGeolocation_ParamsDataView {
 public:
  GeolocationContext_BindGeolocation_ParamsDataView() {}

  GeolocationContext_BindGeolocation_ParamsDataView(
      internal::GeolocationContext_BindGeolocation_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeRequest() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::device::mojom::GeolocationRequestDataView>(
            &data_->request, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::GeolocationContext_BindGeolocation_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class GeolocationContext_SetOverride_ParamsDataView {
 public:
  GeolocationContext_SetOverride_ParamsDataView() {}

  GeolocationContext_SetOverride_ParamsDataView(
      internal::GeolocationContext_SetOverride_Params_Data* data,
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
  internal::GeolocationContext_SetOverride_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class GeolocationContext_ClearOverride_ParamsDataView {
 public:
  GeolocationContext_ClearOverride_ParamsDataView() {}

  GeolocationContext_ClearOverride_ParamsDataView(
      internal::GeolocationContext_ClearOverride_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::GeolocationContext_ClearOverride_Params_Data* data_ = nullptr;
};



}  // namespace mojom
}  // namespace device

namespace std {

}  // namespace std

namespace mojo {

}  // namespace mojo


namespace device {
namespace mojom {



inline void GeolocationContext_SetOverride_ParamsDataView::GetGeopositionDataView(
    ::device::mojom::GeopositionDataView* output) {
  auto pointer = data_->geoposition.Get();
  *output = ::device::mojom::GeopositionDataView(pointer, context_);
}





}  // namespace mojom
}  // namespace device

#endif  // SERVICES_DEVICE_PUBLIC_MOJOM_GEOLOCATION_CONTEXT_MOJOM_SHARED_H_
