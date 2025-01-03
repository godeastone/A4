// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef UI_DISPLAY_MOJO_NATIVE_DISPLAY_DELEGATE_MOJOM_SHARED_H_
#define UI_DISPLAY_MOJO_NATIVE_DISPLAY_DELEGATE_MOJOM_SHARED_H_

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
#include "ui/display/mojo/native_display_delegate.mojom-shared-internal.h"
#include "ui/display/mojo/display_constants.mojom-shared.h"
#include "ui/display/mojo/display_mode.mojom-shared.h"
#include "ui/display/mojo/display_snapshot.mojom-shared.h"
#include "ui/display/mojo/gamma_ramp_rgb_entry.mojom-shared.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"


namespace display {
namespace mojom {


}  // namespace mojom
}  // namespace display

namespace mojo {
namespace internal {

}  // namespace internal
}  // namespace mojo


namespace display {
namespace mojom {
// Interface base classes. They are used for type safety check.
class NativeDisplayObserverInterfaceBase {};

using NativeDisplayObserverPtrDataView =
    mojo::InterfacePtrDataView<NativeDisplayObserverInterfaceBase>;
using NativeDisplayObserverRequestDataView =
    mojo::InterfaceRequestDataView<NativeDisplayObserverInterfaceBase>;
using NativeDisplayObserverAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<NativeDisplayObserverInterfaceBase>;
using NativeDisplayObserverAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<NativeDisplayObserverInterfaceBase>;
class NativeDisplayDelegateInterfaceBase {};

using NativeDisplayDelegatePtrDataView =
    mojo::InterfacePtrDataView<NativeDisplayDelegateInterfaceBase>;
using NativeDisplayDelegateRequestDataView =
    mojo::InterfaceRequestDataView<NativeDisplayDelegateInterfaceBase>;
using NativeDisplayDelegateAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<NativeDisplayDelegateInterfaceBase>;
using NativeDisplayDelegateAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<NativeDisplayDelegateInterfaceBase>;
class NativeDisplayObserver_OnConfigurationChanged_ParamsDataView {
 public:
  NativeDisplayObserver_OnConfigurationChanged_ParamsDataView() {}

  NativeDisplayObserver_OnConfigurationChanged_ParamsDataView(
      internal::NativeDisplayObserver_OnConfigurationChanged_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::NativeDisplayObserver_OnConfigurationChanged_Params_Data* data_ = nullptr;
};

class NativeDisplayDelegate_Initialize_ParamsDataView {
 public:
  NativeDisplayDelegate_Initialize_ParamsDataView() {}

  NativeDisplayDelegate_Initialize_ParamsDataView(
      internal::NativeDisplayDelegate_Initialize_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeObserver() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::display::mojom::NativeDisplayObserverPtrDataView>(
            &data_->observer, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::NativeDisplayDelegate_Initialize_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class NativeDisplayDelegate_Initialize_ResponseParamsDataView {
 public:
  NativeDisplayDelegate_Initialize_ResponseParamsDataView() {}

  NativeDisplayDelegate_Initialize_ResponseParamsDataView(
      internal::NativeDisplayDelegate_Initialize_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetSnapshotsDataView(
      mojo::ArrayDataView<::display::mojom::DisplaySnapshotDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSnapshots(UserType* output) {
    auto* pointer = data_->snapshots.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::display::mojom::DisplaySnapshotDataView>>(
        pointer, output, context_);
  }
 private:
  internal::NativeDisplayDelegate_Initialize_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class NativeDisplayDelegate_TakeDisplayControl_ParamsDataView {
 public:
  NativeDisplayDelegate_TakeDisplayControl_ParamsDataView() {}

  NativeDisplayDelegate_TakeDisplayControl_ParamsDataView(
      internal::NativeDisplayDelegate_TakeDisplayControl_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::NativeDisplayDelegate_TakeDisplayControl_Params_Data* data_ = nullptr;
};

class NativeDisplayDelegate_TakeDisplayControl_ResponseParamsDataView {
 public:
  NativeDisplayDelegate_TakeDisplayControl_ResponseParamsDataView() {}

  NativeDisplayDelegate_TakeDisplayControl_ResponseParamsDataView(
      internal::NativeDisplayDelegate_TakeDisplayControl_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool result() const {
    return data_->result;
  }
 private:
  internal::NativeDisplayDelegate_TakeDisplayControl_ResponseParams_Data* data_ = nullptr;
};

class NativeDisplayDelegate_RelinquishDisplayControl_ParamsDataView {
 public:
  NativeDisplayDelegate_RelinquishDisplayControl_ParamsDataView() {}

  NativeDisplayDelegate_RelinquishDisplayControl_ParamsDataView(
      internal::NativeDisplayDelegate_RelinquishDisplayControl_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::NativeDisplayDelegate_RelinquishDisplayControl_Params_Data* data_ = nullptr;
};

class NativeDisplayDelegate_RelinquishDisplayControl_ResponseParamsDataView {
 public:
  NativeDisplayDelegate_RelinquishDisplayControl_ResponseParamsDataView() {}

  NativeDisplayDelegate_RelinquishDisplayControl_ResponseParamsDataView(
      internal::NativeDisplayDelegate_RelinquishDisplayControl_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool result() const {
    return data_->result;
  }
 private:
  internal::NativeDisplayDelegate_RelinquishDisplayControl_ResponseParams_Data* data_ = nullptr;
};

class NativeDisplayDelegate_GetDisplays_ParamsDataView {
 public:
  NativeDisplayDelegate_GetDisplays_ParamsDataView() {}

  NativeDisplayDelegate_GetDisplays_ParamsDataView(
      internal::NativeDisplayDelegate_GetDisplays_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::NativeDisplayDelegate_GetDisplays_Params_Data* data_ = nullptr;
};

class NativeDisplayDelegate_GetDisplays_ResponseParamsDataView {
 public:
  NativeDisplayDelegate_GetDisplays_ResponseParamsDataView() {}

  NativeDisplayDelegate_GetDisplays_ResponseParamsDataView(
      internal::NativeDisplayDelegate_GetDisplays_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetSnapshotsDataView(
      mojo::ArrayDataView<::display::mojom::DisplaySnapshotDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSnapshots(UserType* output) {
    auto* pointer = data_->snapshots.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::display::mojom::DisplaySnapshotDataView>>(
        pointer, output, context_);
  }
 private:
  internal::NativeDisplayDelegate_GetDisplays_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class NativeDisplayDelegate_Configure_ParamsDataView {
 public:
  NativeDisplayDelegate_Configure_ParamsDataView() {}

  NativeDisplayDelegate_Configure_ParamsDataView(
      internal::NativeDisplayDelegate_Configure_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int64_t display_id() const {
    return data_->display_id;
  }
  inline void GetModeDataView(
      ::display::mojom::DisplayModeDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMode(UserType* output) {
    auto* pointer = data_->mode.Get();
    return mojo::internal::Deserialize<::display::mojom::DisplayModeDataView>(
        pointer, output, context_);
  }
  inline void GetOriginDataView(
      ::gfx::mojom::PointDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadOrigin(UserType* output) {
    auto* pointer = data_->origin.Get();
    return mojo::internal::Deserialize<::gfx::mojom::PointDataView>(
        pointer, output, context_);
  }
 private:
  internal::NativeDisplayDelegate_Configure_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class NativeDisplayDelegate_Configure_ResponseParamsDataView {
 public:
  NativeDisplayDelegate_Configure_ResponseParamsDataView() {}

  NativeDisplayDelegate_Configure_ResponseParamsDataView(
      internal::NativeDisplayDelegate_Configure_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool status() const {
    return data_->status;
  }
 private:
  internal::NativeDisplayDelegate_Configure_ResponseParams_Data* data_ = nullptr;
};

class NativeDisplayDelegate_GetHDCPState_ParamsDataView {
 public:
  NativeDisplayDelegate_GetHDCPState_ParamsDataView() {}

  NativeDisplayDelegate_GetHDCPState_ParamsDataView(
      internal::NativeDisplayDelegate_GetHDCPState_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int64_t display_id() const {
    return data_->display_id;
  }
 private:
  internal::NativeDisplayDelegate_GetHDCPState_Params_Data* data_ = nullptr;
};

class NativeDisplayDelegate_GetHDCPState_ResponseParamsDataView {
 public:
  NativeDisplayDelegate_GetHDCPState_ResponseParamsDataView() {}

  NativeDisplayDelegate_GetHDCPState_ResponseParamsDataView(
      internal::NativeDisplayDelegate_GetHDCPState_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool status() const {
    return data_->status;
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadState(UserType* output) const {
    auto data_value = data_->state;
    return mojo::internal::Deserialize<::display::mojom::HDCPState>(
        data_value, output);
  }

  ::display::mojom::HDCPState state() const {
    return static_cast<::display::mojom::HDCPState>(data_->state);
  }
 private:
  internal::NativeDisplayDelegate_GetHDCPState_ResponseParams_Data* data_ = nullptr;
};

class NativeDisplayDelegate_SetHDCPState_ParamsDataView {
 public:
  NativeDisplayDelegate_SetHDCPState_ParamsDataView() {}

  NativeDisplayDelegate_SetHDCPState_ParamsDataView(
      internal::NativeDisplayDelegate_SetHDCPState_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int64_t display_id() const {
    return data_->display_id;
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadState(UserType* output) const {
    auto data_value = data_->state;
    return mojo::internal::Deserialize<::display::mojom::HDCPState>(
        data_value, output);
  }

  ::display::mojom::HDCPState state() const {
    return static_cast<::display::mojom::HDCPState>(data_->state);
  }
 private:
  internal::NativeDisplayDelegate_SetHDCPState_Params_Data* data_ = nullptr;
};

class NativeDisplayDelegate_SetHDCPState_ResponseParamsDataView {
 public:
  NativeDisplayDelegate_SetHDCPState_ResponseParamsDataView() {}

  NativeDisplayDelegate_SetHDCPState_ResponseParamsDataView(
      internal::NativeDisplayDelegate_SetHDCPState_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool status() const {
    return data_->status;
  }
 private:
  internal::NativeDisplayDelegate_SetHDCPState_ResponseParams_Data* data_ = nullptr;
};

class NativeDisplayDelegate_SetColorCorrection_ParamsDataView {
 public:
  NativeDisplayDelegate_SetColorCorrection_ParamsDataView() {}

  NativeDisplayDelegate_SetColorCorrection_ParamsDataView(
      internal::NativeDisplayDelegate_SetColorCorrection_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int64_t display_id() const {
    return data_->display_id;
  }
  inline void GetDegammaLutDataView(
      mojo::ArrayDataView<::display::mojom::GammaRampRGBEntryDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDegammaLut(UserType* output) {
    auto* pointer = data_->degamma_lut.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::display::mojom::GammaRampRGBEntryDataView>>(
        pointer, output, context_);
  }
  inline void GetGammaLutDataView(
      mojo::ArrayDataView<::display::mojom::GammaRampRGBEntryDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadGammaLut(UserType* output) {
    auto* pointer = data_->gamma_lut.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::display::mojom::GammaRampRGBEntryDataView>>(
        pointer, output, context_);
  }
  inline void GetCorrectionMatrixDataView(
      mojo::ArrayDataView<float>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCorrectionMatrix(UserType* output) {
    auto* pointer = data_->correction_matrix.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<float>>(
        pointer, output, context_);
  }
 private:
  internal::NativeDisplayDelegate_SetColorCorrection_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace display

namespace std {

}  // namespace std

namespace mojo {

}  // namespace mojo


namespace display {
namespace mojom {





inline void NativeDisplayDelegate_Initialize_ResponseParamsDataView::GetSnapshotsDataView(
    mojo::ArrayDataView<::display::mojom::DisplaySnapshotDataView>* output) {
  auto pointer = data_->snapshots.Get();
  *output = mojo::ArrayDataView<::display::mojom::DisplaySnapshotDataView>(pointer, context_);
}












inline void NativeDisplayDelegate_GetDisplays_ResponseParamsDataView::GetSnapshotsDataView(
    mojo::ArrayDataView<::display::mojom::DisplaySnapshotDataView>* output) {
  auto pointer = data_->snapshots.Get();
  *output = mojo::ArrayDataView<::display::mojom::DisplaySnapshotDataView>(pointer, context_);
}


inline void NativeDisplayDelegate_Configure_ParamsDataView::GetModeDataView(
    ::display::mojom::DisplayModeDataView* output) {
  auto pointer = data_->mode.Get();
  *output = ::display::mojom::DisplayModeDataView(pointer, context_);
}
inline void NativeDisplayDelegate_Configure_ParamsDataView::GetOriginDataView(
    ::gfx::mojom::PointDataView* output) {
  auto pointer = data_->origin.Get();
  *output = ::gfx::mojom::PointDataView(pointer, context_);
}












inline void NativeDisplayDelegate_SetColorCorrection_ParamsDataView::GetDegammaLutDataView(
    mojo::ArrayDataView<::display::mojom::GammaRampRGBEntryDataView>* output) {
  auto pointer = data_->degamma_lut.Get();
  *output = mojo::ArrayDataView<::display::mojom::GammaRampRGBEntryDataView>(pointer, context_);
}
inline void NativeDisplayDelegate_SetColorCorrection_ParamsDataView::GetGammaLutDataView(
    mojo::ArrayDataView<::display::mojom::GammaRampRGBEntryDataView>* output) {
  auto pointer = data_->gamma_lut.Get();
  *output = mojo::ArrayDataView<::display::mojom::GammaRampRGBEntryDataView>(pointer, context_);
}
inline void NativeDisplayDelegate_SetColorCorrection_ParamsDataView::GetCorrectionMatrixDataView(
    mojo::ArrayDataView<float>* output) {
  auto pointer = data_->correction_matrix.Get();
  *output = mojo::ArrayDataView<float>(pointer, context_);
}



}  // namespace mojom
}  // namespace display

#endif  // UI_DISPLAY_MOJO_NATIVE_DISPLAY_DELEGATE_MOJOM_SHARED_H_
