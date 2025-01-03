// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_VIZ_PRIVILEGED_INTERFACES_COMPOSITING_LAYERED_WINDOW_UPDATER_MOJOM_SHARED_H_
#define SERVICES_VIZ_PRIVILEGED_INTERFACES_COMPOSITING_LAYERED_WINDOW_UPDATER_MOJOM_SHARED_H_

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
#include "services/viz/privileged/interfaces/compositing/layered_window_updater.mojom-shared-internal.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"


namespace viz {
namespace mojom {


}  // namespace mojom
}  // namespace viz

namespace mojo {
namespace internal {

}  // namespace internal
}  // namespace mojo


namespace viz {
namespace mojom {
// Interface base classes. They are used for type safety check.
class LayeredWindowUpdaterInterfaceBase {};

using LayeredWindowUpdaterPtrDataView =
    mojo::InterfacePtrDataView<LayeredWindowUpdaterInterfaceBase>;
using LayeredWindowUpdaterRequestDataView =
    mojo::InterfaceRequestDataView<LayeredWindowUpdaterInterfaceBase>;
using LayeredWindowUpdaterAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<LayeredWindowUpdaterInterfaceBase>;
using LayeredWindowUpdaterAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<LayeredWindowUpdaterInterfaceBase>;
class LayeredWindowUpdater_OnAllocatedSharedMemory_ParamsDataView {
 public:
  LayeredWindowUpdater_OnAllocatedSharedMemory_ParamsDataView() {}

  LayeredWindowUpdater_OnAllocatedSharedMemory_ParamsDataView(
      internal::LayeredWindowUpdater_OnAllocatedSharedMemory_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetPixelSizeDataView(
      ::gfx::mojom::SizeDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPixelSize(UserType* output) {
    auto* pointer = data_->pixel_size.Get();
    return mojo::internal::Deserialize<::gfx::mojom::SizeDataView>(
        pointer, output, context_);
  }
  mojo::ScopedSharedBufferHandle TakeScopedBufferHandle() {
    mojo::ScopedSharedBufferHandle result;
    bool ret =
        mojo::internal::Deserialize<mojo::ScopedSharedBufferHandle>(
            &data_->scoped_buffer_handle, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::LayeredWindowUpdater_OnAllocatedSharedMemory_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class LayeredWindowUpdater_Draw_ParamsDataView {
 public:
  LayeredWindowUpdater_Draw_ParamsDataView() {}

  LayeredWindowUpdater_Draw_ParamsDataView(
      internal::LayeredWindowUpdater_Draw_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::LayeredWindowUpdater_Draw_Params_Data* data_ = nullptr;
};

class LayeredWindowUpdater_Draw_ResponseParamsDataView {
 public:
  LayeredWindowUpdater_Draw_ResponseParamsDataView() {}

  LayeredWindowUpdater_Draw_ResponseParamsDataView(
      internal::LayeredWindowUpdater_Draw_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::LayeredWindowUpdater_Draw_ResponseParams_Data* data_ = nullptr;
};



}  // namespace mojom
}  // namespace viz

namespace std {

}  // namespace std

namespace mojo {

}  // namespace mojo


namespace viz {
namespace mojom {

inline void LayeredWindowUpdater_OnAllocatedSharedMemory_ParamsDataView::GetPixelSizeDataView(
    ::gfx::mojom::SizeDataView* output) {
  auto pointer = data_->pixel_size.Get();
  *output = ::gfx::mojom::SizeDataView(pointer, context_);
}







}  // namespace mojom
}  // namespace viz

#endif  // SERVICES_VIZ_PRIVILEGED_INTERFACES_COMPOSITING_LAYERED_WINDOW_UPDATER_MOJOM_SHARED_H_
