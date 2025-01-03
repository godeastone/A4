// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_GEOLOCATION_GEOLOCATION_SERVICE_MOJOM_SHARED_H_
#define THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_GEOLOCATION_GEOLOCATION_SERVICE_MOJOM_SHARED_H_

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
#include "third_party/blink/public/platform/modules/geolocation/geolocation_service.mojom-shared-internal.h"
#include "services/device/public/mojom/geolocation.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "base/component_export.h"


namespace blink {
namespace mojom {


}  // namespace mojom
}  // namespace blink

namespace mojo {
namespace internal {

}  // namespace internal
}  // namespace mojo


namespace blink {
namespace mojom {
// Interface base classes. They are used for type safety check.
class GeolocationServiceInterfaceBase {};

using GeolocationServicePtrDataView =
    mojo::InterfacePtrDataView<GeolocationServiceInterfaceBase>;
using GeolocationServiceRequestDataView =
    mojo::InterfaceRequestDataView<GeolocationServiceInterfaceBase>;
using GeolocationServiceAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<GeolocationServiceInterfaceBase>;
using GeolocationServiceAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<GeolocationServiceInterfaceBase>;
class GeolocationService_CreateGeolocation_ParamsDataView {
 public:
  GeolocationService_CreateGeolocation_ParamsDataView() {}

  GeolocationService_CreateGeolocation_ParamsDataView(
      internal::GeolocationService_CreateGeolocation_Params_Data* data,
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
  bool user_gesture() const {
    return data_->user_gesture;
  }
 private:
  internal::GeolocationService_CreateGeolocation_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace blink

namespace std {

}  // namespace std

namespace mojo {

}  // namespace mojo


namespace blink {
namespace mojom {




}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_GEOLOCATION_GEOLOCATION_SERVICE_MOJOM_SHARED_H_
