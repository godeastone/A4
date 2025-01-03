// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_VIZ_PUBLIC_INTERFACES_HIT_TEST_INPUT_TARGET_CLIENT_MOJOM_SHARED_H_
#define SERVICES_VIZ_PUBLIC_INTERFACES_HIT_TEST_INPUT_TARGET_CLIENT_MOJOM_SHARED_H_

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
#include "services/viz/public/interfaces/hit_test/input_target_client.mojom-shared-internal.h"
#include "services/viz/public/interfaces/compositing/frame_sink_id.mojom-shared.h"
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
class InputTargetClientInterfaceBase {};

using InputTargetClientPtrDataView =
    mojo::InterfacePtrDataView<InputTargetClientInterfaceBase>;
using InputTargetClientRequestDataView =
    mojo::InterfaceRequestDataView<InputTargetClientInterfaceBase>;
using InputTargetClientAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<InputTargetClientInterfaceBase>;
using InputTargetClientAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<InputTargetClientInterfaceBase>;
class InputTargetClient_FrameSinkIdAt_ParamsDataView {
 public:
  InputTargetClient_FrameSinkIdAt_ParamsDataView() {}

  InputTargetClient_FrameSinkIdAt_ParamsDataView(
      internal::InputTargetClient_FrameSinkIdAt_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetPointDataView(
      ::gfx::mojom::PointDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPoint(UserType* output) {
    auto* pointer = data_->point.Get();
    return mojo::internal::Deserialize<::gfx::mojom::PointDataView>(
        pointer, output, context_);
  }
 private:
  internal::InputTargetClient_FrameSinkIdAt_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class InputTargetClient_FrameSinkIdAt_ResponseParamsDataView {
 public:
  InputTargetClient_FrameSinkIdAt_ResponseParamsDataView() {}

  InputTargetClient_FrameSinkIdAt_ResponseParamsDataView(
      internal::InputTargetClient_FrameSinkIdAt_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetIdDataView(
      ::viz::mojom::FrameSinkIdDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadId(UserType* output) {
    auto* pointer = data_->id.Get();
    return mojo::internal::Deserialize<::viz::mojom::FrameSinkIdDataView>(
        pointer, output, context_);
  }
 private:
  internal::InputTargetClient_FrameSinkIdAt_ResponseParams_Data* data_ = nullptr;
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

inline void InputTargetClient_FrameSinkIdAt_ParamsDataView::GetPointDataView(
    ::gfx::mojom::PointDataView* output) {
  auto pointer = data_->point.Get();
  *output = ::gfx::mojom::PointDataView(pointer, context_);
}


inline void InputTargetClient_FrameSinkIdAt_ResponseParamsDataView::GetIdDataView(
    ::viz::mojom::FrameSinkIdDataView* output) {
  auto pointer = data_->id.Get();
  *output = ::viz::mojom::FrameSinkIdDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace viz

#endif  // SERVICES_VIZ_PUBLIC_INTERFACES_HIT_TEST_INPUT_TARGET_CLIENT_MOJOM_SHARED_H_
