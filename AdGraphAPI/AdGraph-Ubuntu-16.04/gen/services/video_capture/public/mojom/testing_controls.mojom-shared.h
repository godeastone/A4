// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_VIDEO_CAPTURE_PUBLIC_MOJOM_TESTING_CONTROLS_MOJOM_SHARED_H_
#define SERVICES_VIDEO_CAPTURE_PUBLIC_MOJOM_TESTING_CONTROLS_MOJOM_SHARED_H_

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
#include "services/video_capture/public/mojom/testing_controls.mojom-shared-internal.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"


namespace video_capture {
namespace mojom {


}  // namespace mojom
}  // namespace video_capture

namespace mojo {
namespace internal {

}  // namespace internal
}  // namespace mojo


namespace video_capture {
namespace mojom {
// Interface base classes. They are used for type safety check.
class TestingControlsInterfaceBase {};

using TestingControlsPtrDataView =
    mojo::InterfacePtrDataView<TestingControlsInterfaceBase>;
using TestingControlsRequestDataView =
    mojo::InterfaceRequestDataView<TestingControlsInterfaceBase>;
using TestingControlsAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<TestingControlsInterfaceBase>;
using TestingControlsAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<TestingControlsInterfaceBase>;
class TestingControls_Crash_ParamsDataView {
 public:
  TestingControls_Crash_ParamsDataView() {}

  TestingControls_Crash_ParamsDataView(
      internal::TestingControls_Crash_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::TestingControls_Crash_Params_Data* data_ = nullptr;
};



}  // namespace mojom
}  // namespace video_capture

namespace std {

}  // namespace std

namespace mojo {

}  // namespace mojo


namespace video_capture {
namespace mojom {




}  // namespace mojom
}  // namespace video_capture

#endif  // SERVICES_VIDEO_CAPTURE_PUBLIC_MOJOM_TESTING_CONTROLS_MOJOM_SHARED_H_
