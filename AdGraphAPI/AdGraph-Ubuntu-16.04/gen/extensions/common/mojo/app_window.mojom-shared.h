// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef EXTENSIONS_COMMON_MOJO_APP_WINDOW_MOJOM_SHARED_H_
#define EXTENSIONS_COMMON_MOJO_APP_WINDOW_MOJOM_SHARED_H_

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
#include "extensions/common/mojo/app_window.mojom-shared-internal.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"


namespace extensions {
namespace mojom {


}  // namespace mojom
}  // namespace extensions

namespace mojo {
namespace internal {

}  // namespace internal
}  // namespace mojo


namespace extensions {
namespace mojom {
// Interface base classes. They are used for type safety check.
class AppWindowInterfaceBase {};

using AppWindowPtrDataView =
    mojo::InterfacePtrDataView<AppWindowInterfaceBase>;
using AppWindowRequestDataView =
    mojo::InterfaceRequestDataView<AppWindowInterfaceBase>;
using AppWindowAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<AppWindowInterfaceBase>;
using AppWindowAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<AppWindowInterfaceBase>;
class AppWindow_SetVisuallyDeemphasized_ParamsDataView {
 public:
  AppWindow_SetVisuallyDeemphasized_ParamsDataView() {}

  AppWindow_SetVisuallyDeemphasized_ParamsDataView(
      internal::AppWindow_SetVisuallyDeemphasized_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool deemphasized() const {
    return data_->deemphasized;
  }
 private:
  internal::AppWindow_SetVisuallyDeemphasized_Params_Data* data_ = nullptr;
};



}  // namespace mojom
}  // namespace extensions

namespace std {

}  // namespace std

namespace mojo {

}  // namespace mojo


namespace extensions {
namespace mojom {




}  // namespace mojom
}  // namespace extensions

#endif  // EXTENSIONS_COMMON_MOJO_APP_WINDOW_MOJOM_SHARED_H_
