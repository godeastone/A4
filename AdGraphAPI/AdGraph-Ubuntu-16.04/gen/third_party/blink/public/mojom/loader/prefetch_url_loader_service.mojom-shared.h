// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_LOADER_PREFETCH_URL_LOADER_SERVICE_MOJOM_SHARED_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_LOADER_PREFETCH_URL_LOADER_SERVICE_MOJOM_SHARED_H_

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
#include "third_party/blink/public/mojom/loader/prefetch_url_loader_service.mojom-shared-internal.h"
#include "services/network/public/mojom/url_loader_factory.mojom-shared.h"

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
class PrefetchURLLoaderServiceInterfaceBase {};

using PrefetchURLLoaderServicePtrDataView =
    mojo::InterfacePtrDataView<PrefetchURLLoaderServiceInterfaceBase>;
using PrefetchURLLoaderServiceRequestDataView =
    mojo::InterfaceRequestDataView<PrefetchURLLoaderServiceInterfaceBase>;
using PrefetchURLLoaderServiceAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<PrefetchURLLoaderServiceInterfaceBase>;
using PrefetchURLLoaderServiceAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<PrefetchURLLoaderServiceInterfaceBase>;
class PrefetchURLLoaderService_GetFactory_ParamsDataView {
 public:
  PrefetchURLLoaderService_GetFactory_ParamsDataView() {}

  PrefetchURLLoaderService_GetFactory_ParamsDataView(
      internal::PrefetchURLLoaderService_GetFactory_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeFactory() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::network::mojom::URLLoaderFactoryRequestDataView>(
            &data_->factory, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::PrefetchURLLoaderService_GetFactory_Params_Data* data_ = nullptr;
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

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_LOADER_PREFETCH_URL_LOADER_SERVICE_MOJOM_SHARED_H_
