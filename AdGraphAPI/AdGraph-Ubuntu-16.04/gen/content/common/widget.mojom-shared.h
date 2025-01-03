// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_WIDGET_MOJOM_SHARED_H_
#define CONTENT_COMMON_WIDGET_MOJOM_SHARED_H_

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
#include "content/common/widget.mojom-shared-internal.h"
#include "content/common/input/input_handler.mojom-shared.h"

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
class WidgetInterfaceBase {};

using WidgetPtrDataView =
    mojo::InterfacePtrDataView<WidgetInterfaceBase>;
using WidgetRequestDataView =
    mojo::InterfaceRequestDataView<WidgetInterfaceBase>;
using WidgetAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<WidgetInterfaceBase>;
using WidgetAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<WidgetInterfaceBase>;
class Widget_SetupWidgetInputHandler_ParamsDataView {
 public:
  Widget_SetupWidgetInputHandler_ParamsDataView() {}

  Widget_SetupWidgetInputHandler_ParamsDataView(
      internal::Widget_SetupWidgetInputHandler_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeRequest() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::content::mojom::WidgetInputHandlerRequestDataView>(
            &data_->request, &result, context_);
    DCHECK(ret);
    return result;
  }
  template <typename UserType>
  UserType TakeHost() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::content::mojom::WidgetInputHandlerHostPtrDataView>(
            &data_->host, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::Widget_SetupWidgetInputHandler_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
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

#endif  // CONTENT_COMMON_WIDGET_MOJOM_SHARED_H_
