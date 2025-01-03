// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_CHILD_CONTROL_MOJOM_SHARED_H_
#define CONTENT_COMMON_CHILD_CONTROL_MOJOM_SHARED_H_

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
#include "content/common/child_control.mojom-shared-internal.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "base/component_export.h"


namespace content {
namespace mojom {


}  // namespace mojom
}  // namespace content

namespace mojo {
namespace internal {

}  // namespace internal
}  // namespace mojo


namespace content {
namespace mojom {
// Interface base classes. They are used for type safety check.
class ChildControlInterfaceBase {};

using ChildControlPtrDataView =
    mojo::InterfacePtrDataView<ChildControlInterfaceBase>;
using ChildControlRequestDataView =
    mojo::InterfaceRequestDataView<ChildControlInterfaceBase>;
using ChildControlAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<ChildControlInterfaceBase>;
using ChildControlAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<ChildControlInterfaceBase>;
class ChildControl_ProcessShutdown_ParamsDataView {
 public:
  ChildControl_ProcessShutdown_ParamsDataView() {}

  ChildControl_ProcessShutdown_ParamsDataView(
      internal::ChildControl_ProcessShutdown_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::ChildControl_ProcessShutdown_Params_Data* data_ = nullptr;
};



}  // namespace mojom
}  // namespace content

namespace std {

}  // namespace std

namespace mojo {

}  // namespace mojo


namespace content {
namespace mojom {




}  // namespace mojom
}  // namespace content

#endif  // CONTENT_COMMON_CHILD_CONTROL_MOJOM_SHARED_H_
