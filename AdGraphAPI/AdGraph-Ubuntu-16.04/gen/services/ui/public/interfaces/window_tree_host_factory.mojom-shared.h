// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_UI_PUBLIC_INTERFACES_WINDOW_TREE_HOST_FACTORY_MOJOM_SHARED_H_
#define SERVICES_UI_PUBLIC_INTERFACES_WINDOW_TREE_HOST_FACTORY_MOJOM_SHARED_H_

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
#include "services/ui/public/interfaces/window_tree_host_factory.mojom-shared-internal.h"
#include "services/ui/public/interfaces/window_tree.mojom-shared.h"
#include "services/ui/public/interfaces/window_tree_host.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"


namespace ui {
namespace mojom {


}  // namespace mojom
}  // namespace ui

namespace mojo {
namespace internal {

}  // namespace internal
}  // namespace mojo


namespace ui {
namespace mojom {
// Interface base classes. They are used for type safety check.
class WindowTreeHostFactoryInterfaceBase {};

using WindowTreeHostFactoryPtrDataView =
    mojo::InterfacePtrDataView<WindowTreeHostFactoryInterfaceBase>;
using WindowTreeHostFactoryRequestDataView =
    mojo::InterfaceRequestDataView<WindowTreeHostFactoryInterfaceBase>;
using WindowTreeHostFactoryAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<WindowTreeHostFactoryInterfaceBase>;
using WindowTreeHostFactoryAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<WindowTreeHostFactoryInterfaceBase>;
class WindowTreeHostFactory_CreateWindowTreeHost_ParamsDataView {
 public:
  WindowTreeHostFactory_CreateWindowTreeHost_ParamsDataView() {}

  WindowTreeHostFactory_CreateWindowTreeHost_ParamsDataView(
      internal::WindowTreeHostFactory_CreateWindowTreeHost_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeWindowTreeHost() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::ui::mojom::WindowTreeHostRequestDataView>(
            &data_->window_tree_host, &result, context_);
    DCHECK(ret);
    return result;
  }
  template <typename UserType>
  UserType TakeTreeClient() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::ui::mojom::WindowTreeClientPtrDataView>(
            &data_->tree_client, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::WindowTreeHostFactory_CreateWindowTreeHost_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace ui

namespace std {

}  // namespace std

namespace mojo {

}  // namespace mojo


namespace ui {
namespace mojom {




}  // namespace mojom
}  // namespace ui

#endif  // SERVICES_UI_PUBLIC_INTERFACES_WINDOW_TREE_HOST_FACTORY_MOJOM_SHARED_H_
