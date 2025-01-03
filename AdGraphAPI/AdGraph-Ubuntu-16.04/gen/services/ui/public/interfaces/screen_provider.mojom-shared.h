// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_UI_PUBLIC_INTERFACES_SCREEN_PROVIDER_MOJOM_SHARED_H_
#define SERVICES_UI_PUBLIC_INTERFACES_SCREEN_PROVIDER_MOJOM_SHARED_H_

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
#include "services/ui/public/interfaces/screen_provider.mojom-shared-internal.h"
#include "services/ui/public/interfaces/window_manager_constants.mojom-shared.h"

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
class ScreenProviderObserverInterfaceBase {};

using ScreenProviderObserverPtrDataView =
    mojo::InterfacePtrDataView<ScreenProviderObserverInterfaceBase>;
using ScreenProviderObserverRequestDataView =
    mojo::InterfaceRequestDataView<ScreenProviderObserverInterfaceBase>;
using ScreenProviderObserverAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<ScreenProviderObserverInterfaceBase>;
using ScreenProviderObserverAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<ScreenProviderObserverInterfaceBase>;
class ScreenProviderInterfaceBase {};

using ScreenProviderPtrDataView =
    mojo::InterfacePtrDataView<ScreenProviderInterfaceBase>;
using ScreenProviderRequestDataView =
    mojo::InterfaceRequestDataView<ScreenProviderInterfaceBase>;
using ScreenProviderAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<ScreenProviderInterfaceBase>;
using ScreenProviderAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<ScreenProviderInterfaceBase>;
class ScreenProviderObserver_OnDisplaysChanged_ParamsDataView {
 public:
  ScreenProviderObserver_OnDisplaysChanged_ParamsDataView() {}

  ScreenProviderObserver_OnDisplaysChanged_ParamsDataView(
      internal::ScreenProviderObserver_OnDisplaysChanged_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetDisplaysDataView(
      mojo::ArrayDataView<::ui::mojom::WsDisplayDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDisplays(UserType* output) {
    auto* pointer = data_->displays.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::ui::mojom::WsDisplayDataView>>(
        pointer, output, context_);
  }
  int64_t primary_display_id() const {
    return data_->primary_display_id;
  }
  int64_t internal_display_id() const {
    return data_->internal_display_id;
  }
 private:
  internal::ScreenProviderObserver_OnDisplaysChanged_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ScreenProvider_AddObserver_ParamsDataView {
 public:
  ScreenProvider_AddObserver_ParamsDataView() {}

  ScreenProvider_AddObserver_ParamsDataView(
      internal::ScreenProvider_AddObserver_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeObserver() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::ui::mojom::ScreenProviderObserverPtrDataView>(
            &data_->observer, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::ScreenProvider_AddObserver_Params_Data* data_ = nullptr;
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

inline void ScreenProviderObserver_OnDisplaysChanged_ParamsDataView::GetDisplaysDataView(
    mojo::ArrayDataView<::ui::mojom::WsDisplayDataView>* output) {
  auto pointer = data_->displays.Get();
  *output = mojo::ArrayDataView<::ui::mojom::WsDisplayDataView>(pointer, context_);
}





}  // namespace mojom
}  // namespace ui

#endif  // SERVICES_UI_PUBLIC_INTERFACES_SCREEN_PROVIDER_MOJOM_SHARED_H_
