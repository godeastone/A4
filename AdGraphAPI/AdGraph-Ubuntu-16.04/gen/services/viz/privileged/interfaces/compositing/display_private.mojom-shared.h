// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_VIZ_PRIVILEGED_INTERFACES_COMPOSITING_DISPLAY_PRIVATE_MOJOM_SHARED_H_
#define SERVICES_VIZ_PRIVILEGED_INTERFACES_COMPOSITING_DISPLAY_PRIVATE_MOJOM_SHARED_H_

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
#include "services/viz/privileged/interfaces/compositing/display_private.mojom-shared-internal.h"
#include "mojo/public/mojom/base/time.mojom-shared.h"
#include "ui/gfx/mojo/ca_layer_params.mojom-shared.h"
#include "ui/gfx/mojo/color_space.mojom-shared.h"
#include "ui/gfx/mojo/transform.mojom-shared.h"
#include "ui/latency/mojo/latency_info.mojom-shared.h"
#include "services/viz/privileged/interfaces/compositing/layered_window_updater.mojom-shared.h"

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
class DisplayPrivateInterfaceBase {};

using DisplayPrivatePtrDataView =
    mojo::InterfacePtrDataView<DisplayPrivateInterfaceBase>;
using DisplayPrivateRequestDataView =
    mojo::InterfaceRequestDataView<DisplayPrivateInterfaceBase>;
using DisplayPrivateAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<DisplayPrivateInterfaceBase>;
using DisplayPrivateAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<DisplayPrivateInterfaceBase>;
class DisplayClientInterfaceBase {};

using DisplayClientPtrDataView =
    mojo::InterfacePtrDataView<DisplayClientInterfaceBase>;
using DisplayClientRequestDataView =
    mojo::InterfaceRequestDataView<DisplayClientInterfaceBase>;
using DisplayClientAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<DisplayClientInterfaceBase>;
using DisplayClientAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<DisplayClientInterfaceBase>;
class DisplayPrivate_SetDisplayVisible_ParamsDataView {
 public:
  DisplayPrivate_SetDisplayVisible_ParamsDataView() {}

  DisplayPrivate_SetDisplayVisible_ParamsDataView(
      internal::DisplayPrivate_SetDisplayVisible_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool visible() const {
    return data_->visible;
  }
 private:
  internal::DisplayPrivate_SetDisplayVisible_Params_Data* data_ = nullptr;
};

class DisplayPrivate_SetDisplayColorMatrix_ParamsDataView {
 public:
  DisplayPrivate_SetDisplayColorMatrix_ParamsDataView() {}

  DisplayPrivate_SetDisplayColorMatrix_ParamsDataView(
      internal::DisplayPrivate_SetDisplayColorMatrix_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetColorMatrixDataView(
      ::gfx::mojom::TransformDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadColorMatrix(UserType* output) {
    auto* pointer = data_->color_matrix.Get();
    return mojo::internal::Deserialize<::gfx::mojom::TransformDataView>(
        pointer, output, context_);
  }
 private:
  internal::DisplayPrivate_SetDisplayColorMatrix_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class DisplayPrivate_SetDisplayColorSpace_ParamsDataView {
 public:
  DisplayPrivate_SetDisplayColorSpace_ParamsDataView() {}

  DisplayPrivate_SetDisplayColorSpace_ParamsDataView(
      internal::DisplayPrivate_SetDisplayColorSpace_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetBlendingColorSpaceDataView(
      ::gfx::mojom::ColorSpaceDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadBlendingColorSpace(UserType* output) {
    auto* pointer = data_->blending_color_space.Get();
    return mojo::internal::Deserialize<::gfx::mojom::ColorSpaceDataView>(
        pointer, output, context_);
  }
  inline void GetDeviceColorSpaceDataView(
      ::gfx::mojom::ColorSpaceDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDeviceColorSpace(UserType* output) {
    auto* pointer = data_->device_color_space.Get();
    return mojo::internal::Deserialize<::gfx::mojom::ColorSpaceDataView>(
        pointer, output, context_);
  }
 private:
  internal::DisplayPrivate_SetDisplayColorSpace_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class DisplayPrivate_SetOutputIsSecure_ParamsDataView {
 public:
  DisplayPrivate_SetOutputIsSecure_ParamsDataView() {}

  DisplayPrivate_SetOutputIsSecure_ParamsDataView(
      internal::DisplayPrivate_SetOutputIsSecure_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool secure() const {
    return data_->secure;
  }
 private:
  internal::DisplayPrivate_SetOutputIsSecure_Params_Data* data_ = nullptr;
};

class DisplayPrivate_SetAuthoritativeVSyncInterval_ParamsDataView {
 public:
  DisplayPrivate_SetAuthoritativeVSyncInterval_ParamsDataView() {}

  DisplayPrivate_SetAuthoritativeVSyncInterval_ParamsDataView(
      internal::DisplayPrivate_SetAuthoritativeVSyncInterval_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetIntervalDataView(
      ::mojo_base::mojom::TimeDeltaDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadInterval(UserType* output) {
    auto* pointer = data_->interval.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeDeltaDataView>(
        pointer, output, context_);
  }
 private:
  internal::DisplayPrivate_SetAuthoritativeVSyncInterval_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class DisplayPrivate_SetDisplayVSyncParameters_ParamsDataView {
 public:
  DisplayPrivate_SetDisplayVSyncParameters_ParamsDataView() {}

  DisplayPrivate_SetDisplayVSyncParameters_ParamsDataView(
      internal::DisplayPrivate_SetDisplayVSyncParameters_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetTimebaseDataView(
      ::mojo_base::mojom::TimeTicksDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTimebase(UserType* output) {
    auto* pointer = data_->timebase.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeTicksDataView>(
        pointer, output, context_);
  }
  inline void GetIntervalDataView(
      ::mojo_base::mojom::TimeDeltaDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadInterval(UserType* output) {
    auto* pointer = data_->interval.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeDeltaDataView>(
        pointer, output, context_);
  }
 private:
  internal::DisplayPrivate_SetDisplayVSyncParameters_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class DisplayClient_OnDisplayReceivedCALayerParams_ParamsDataView {
 public:
  DisplayClient_OnDisplayReceivedCALayerParams_ParamsDataView() {}

  DisplayClient_OnDisplayReceivedCALayerParams_ParamsDataView(
      internal::DisplayClient_OnDisplayReceivedCALayerParams_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetCaLayerParamsDataView(
      ::gfx::mojom::CALayerParamsDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCaLayerParams(UserType* output) {
    auto* pointer = data_->ca_layer_params.Get();
    return mojo::internal::Deserialize<::gfx::mojom::CALayerParamsDataView>(
        pointer, output, context_);
  }
 private:
  internal::DisplayClient_OnDisplayReceivedCALayerParams_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class DisplayClient_DidSwapAfterSnapshotRequestReceived_ParamsDataView {
 public:
  DisplayClient_DidSwapAfterSnapshotRequestReceived_ParamsDataView() {}

  DisplayClient_DidSwapAfterSnapshotRequestReceived_ParamsDataView(
      internal::DisplayClient_DidSwapAfterSnapshotRequestReceived_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetLatencyInfoDataView(
      mojo::ArrayDataView<::ui::mojom::LatencyInfoDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadLatencyInfo(UserType* output) {
    auto* pointer = data_->latency_info.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::ui::mojom::LatencyInfoDataView>>(
        pointer, output, context_);
  }
 private:
  internal::DisplayClient_DidSwapAfterSnapshotRequestReceived_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class DisplayClient_CreateLayeredWindowUpdater_ParamsDataView {
 public:
  DisplayClient_CreateLayeredWindowUpdater_ParamsDataView() {}

  DisplayClient_CreateLayeredWindowUpdater_ParamsDataView(
      internal::DisplayClient_CreateLayeredWindowUpdater_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeLayeredWindowUpdater() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::viz::mojom::LayeredWindowUpdaterRequestDataView>(
            &data_->layered_window_updater, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::DisplayClient_CreateLayeredWindowUpdater_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace viz

namespace std {

}  // namespace std

namespace mojo {

}  // namespace mojo


namespace viz {
namespace mojom {



inline void DisplayPrivate_SetDisplayColorMatrix_ParamsDataView::GetColorMatrixDataView(
    ::gfx::mojom::TransformDataView* output) {
  auto pointer = data_->color_matrix.Get();
  *output = ::gfx::mojom::TransformDataView(pointer, context_);
}


inline void DisplayPrivate_SetDisplayColorSpace_ParamsDataView::GetBlendingColorSpaceDataView(
    ::gfx::mojom::ColorSpaceDataView* output) {
  auto pointer = data_->blending_color_space.Get();
  *output = ::gfx::mojom::ColorSpaceDataView(pointer, context_);
}
inline void DisplayPrivate_SetDisplayColorSpace_ParamsDataView::GetDeviceColorSpaceDataView(
    ::gfx::mojom::ColorSpaceDataView* output) {
  auto pointer = data_->device_color_space.Get();
  *output = ::gfx::mojom::ColorSpaceDataView(pointer, context_);
}




inline void DisplayPrivate_SetAuthoritativeVSyncInterval_ParamsDataView::GetIntervalDataView(
    ::mojo_base::mojom::TimeDeltaDataView* output) {
  auto pointer = data_->interval.Get();
  *output = ::mojo_base::mojom::TimeDeltaDataView(pointer, context_);
}


inline void DisplayPrivate_SetDisplayVSyncParameters_ParamsDataView::GetTimebaseDataView(
    ::mojo_base::mojom::TimeTicksDataView* output) {
  auto pointer = data_->timebase.Get();
  *output = ::mojo_base::mojom::TimeTicksDataView(pointer, context_);
}
inline void DisplayPrivate_SetDisplayVSyncParameters_ParamsDataView::GetIntervalDataView(
    ::mojo_base::mojom::TimeDeltaDataView* output) {
  auto pointer = data_->interval.Get();
  *output = ::mojo_base::mojom::TimeDeltaDataView(pointer, context_);
}


inline void DisplayClient_OnDisplayReceivedCALayerParams_ParamsDataView::GetCaLayerParamsDataView(
    ::gfx::mojom::CALayerParamsDataView* output) {
  auto pointer = data_->ca_layer_params.Get();
  *output = ::gfx::mojom::CALayerParamsDataView(pointer, context_);
}


inline void DisplayClient_DidSwapAfterSnapshotRequestReceived_ParamsDataView::GetLatencyInfoDataView(
    mojo::ArrayDataView<::ui::mojom::LatencyInfoDataView>* output) {
  auto pointer = data_->latency_info.Get();
  *output = mojo::ArrayDataView<::ui::mojom::LatencyInfoDataView>(pointer, context_);
}





}  // namespace mojom
}  // namespace viz

#endif  // SERVICES_VIZ_PRIVILEGED_INTERFACES_COMPOSITING_DISPLAY_PRIVATE_MOJOM_SHARED_H_
