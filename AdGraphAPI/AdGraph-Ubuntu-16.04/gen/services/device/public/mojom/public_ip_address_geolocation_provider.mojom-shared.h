// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_PUBLIC_IP_ADDRESS_GEOLOCATION_PROVIDER_MOJOM_SHARED_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_PUBLIC_IP_ADDRESS_GEOLOCATION_PROVIDER_MOJOM_SHARED_H_

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
#include "services/device/public/mojom/public_ip_address_geolocation_provider.mojom-shared-internal.h"
#include "services/network/public/mojom/mutable_partial_network_traffic_annotation_tag.mojom-shared.h"
#include "services/device/public/mojom/geolocation.mojom-shared.h"

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
class PublicIpAddressGeolocationProviderInterfaceBase {};

using PublicIpAddressGeolocationProviderPtrDataView =
    mojo::InterfacePtrDataView<PublicIpAddressGeolocationProviderInterfaceBase>;
using PublicIpAddressGeolocationProviderRequestDataView =
    mojo::InterfaceRequestDataView<PublicIpAddressGeolocationProviderInterfaceBase>;
using PublicIpAddressGeolocationProviderAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<PublicIpAddressGeolocationProviderInterfaceBase>;
using PublicIpAddressGeolocationProviderAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<PublicIpAddressGeolocationProviderInterfaceBase>;
class PublicIpAddressGeolocationProvider_CreateGeolocation_ParamsDataView {
 public:
  PublicIpAddressGeolocationProvider_CreateGeolocation_ParamsDataView() {}

  PublicIpAddressGeolocationProvider_CreateGeolocation_ParamsDataView(
      internal::PublicIpAddressGeolocationProvider_CreateGeolocation_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetTagDataView(
      ::network::mojom::MutablePartialNetworkTrafficAnnotationTagDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTag(UserType* output) {
    auto* pointer = data_->tag.Get();
    return mojo::internal::Deserialize<::network::mojom::MutablePartialNetworkTrafficAnnotationTagDataView>(
        pointer, output, context_);
  }
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
  internal::PublicIpAddressGeolocationProvider_CreateGeolocation_Params_Data* data_ = nullptr;
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

inline void PublicIpAddressGeolocationProvider_CreateGeolocation_ParamsDataView::GetTagDataView(
    ::network::mojom::MutablePartialNetworkTrafficAnnotationTagDataView* output) {
  auto pointer = data_->tag.Get();
  *output = ::network::mojom::MutablePartialNetworkTrafficAnnotationTagDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace device

#endif  // SERVICES_DEVICE_PUBLIC_MOJOM_PUBLIC_IP_ADDRESS_GEOLOCATION_PROVIDER_MOJOM_SHARED_H_
