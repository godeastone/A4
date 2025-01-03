// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_DOM_DISTILLER_CONTENT_COMMON_DISTILLABILITY_SERVICE_MOJOM_SHARED_H_
#define COMPONENTS_DOM_DISTILLER_CONTENT_COMMON_DISTILLABILITY_SERVICE_MOJOM_SHARED_H_

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
#include "components/dom_distiller/content/common/distillability_service.mojom-shared-internal.h"

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
class DistillabilityServiceInterfaceBase {};

using DistillabilityServicePtrDataView =
    mojo::InterfacePtrDataView<DistillabilityServiceInterfaceBase>;
using DistillabilityServiceRequestDataView =
    mojo::InterfaceRequestDataView<DistillabilityServiceInterfaceBase>;
using DistillabilityServiceAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<DistillabilityServiceInterfaceBase>;
using DistillabilityServiceAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<DistillabilityServiceInterfaceBase>;
class DistillabilityService_NotifyIsDistillable_ParamsDataView {
 public:
  DistillabilityService_NotifyIsDistillable_ParamsDataView() {}

  DistillabilityService_NotifyIsDistillable_ParamsDataView(
      internal::DistillabilityService_NotifyIsDistillable_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool page_is_distillable() const {
    return data_->page_is_distillable;
  }
  bool is_last_update() const {
    return data_->is_last_update;
  }
  bool is_mobile_friendly() const {
    return data_->is_mobile_friendly;
  }
 private:
  internal::DistillabilityService_NotifyIsDistillable_Params_Data* data_ = nullptr;
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

#endif  // COMPONENTS_DOM_DISTILLER_CONTENT_COMMON_DISTILLABILITY_SERVICE_MOJOM_SHARED_H_
