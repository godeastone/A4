// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_DOM_DISTILLER_CONTENT_COMMON_DISTILLER_PAGE_NOTIFIER_SERVICE_MOJOM_SHARED_H_
#define COMPONENTS_DOM_DISTILLER_CONTENT_COMMON_DISTILLER_PAGE_NOTIFIER_SERVICE_MOJOM_SHARED_H_

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
#include "components/dom_distiller/content/common/distiller_page_notifier_service.mojom-shared-internal.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"


namespace dom_distiller {
namespace mojom {


}  // namespace mojom
}  // namespace dom_distiller

namespace mojo {
namespace internal {

}  // namespace internal
}  // namespace mojo


namespace dom_distiller {
namespace mojom {
// Interface base classes. They are used for type safety check.
class DistillerPageNotifierServiceInterfaceBase {};

using DistillerPageNotifierServicePtrDataView =
    mojo::InterfacePtrDataView<DistillerPageNotifierServiceInterfaceBase>;
using DistillerPageNotifierServiceRequestDataView =
    mojo::InterfaceRequestDataView<DistillerPageNotifierServiceInterfaceBase>;
using DistillerPageNotifierServiceAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<DistillerPageNotifierServiceInterfaceBase>;
using DistillerPageNotifierServiceAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<DistillerPageNotifierServiceInterfaceBase>;
class DistillerPageNotifierService_NotifyIsDistillerPage_ParamsDataView {
 public:
  DistillerPageNotifierService_NotifyIsDistillerPage_ParamsDataView() {}

  DistillerPageNotifierService_NotifyIsDistillerPage_ParamsDataView(
      internal::DistillerPageNotifierService_NotifyIsDistillerPage_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::DistillerPageNotifierService_NotifyIsDistillerPage_Params_Data* data_ = nullptr;
};



}  // namespace mojom
}  // namespace dom_distiller

namespace std {

}  // namespace std

namespace mojo {

}  // namespace mojo


namespace dom_distiller {
namespace mojom {




}  // namespace mojom
}  // namespace dom_distiller

#endif  // COMPONENTS_DOM_DISTILLER_CONTENT_COMMON_DISTILLER_PAGE_NOTIFIER_SERVICE_MOJOM_SHARED_H_
