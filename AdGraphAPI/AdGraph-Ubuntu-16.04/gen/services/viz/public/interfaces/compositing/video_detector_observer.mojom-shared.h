// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_VIDEO_DETECTOR_OBSERVER_MOJOM_SHARED_H_
#define SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_VIDEO_DETECTOR_OBSERVER_MOJOM_SHARED_H_

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
#include "services/viz/public/interfaces/compositing/video_detector_observer.mojom-shared-internal.h"

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
class VideoDetectorObserverInterfaceBase {};

using VideoDetectorObserverPtrDataView =
    mojo::InterfacePtrDataView<VideoDetectorObserverInterfaceBase>;
using VideoDetectorObserverRequestDataView =
    mojo::InterfaceRequestDataView<VideoDetectorObserverInterfaceBase>;
using VideoDetectorObserverAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<VideoDetectorObserverInterfaceBase>;
using VideoDetectorObserverAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<VideoDetectorObserverInterfaceBase>;
class VideoDetectorObserver_OnVideoActivityStarted_ParamsDataView {
 public:
  VideoDetectorObserver_OnVideoActivityStarted_ParamsDataView() {}

  VideoDetectorObserver_OnVideoActivityStarted_ParamsDataView(
      internal::VideoDetectorObserver_OnVideoActivityStarted_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::VideoDetectorObserver_OnVideoActivityStarted_Params_Data* data_ = nullptr;
};

class VideoDetectorObserver_OnVideoActivityEnded_ParamsDataView {
 public:
  VideoDetectorObserver_OnVideoActivityEnded_ParamsDataView() {}

  VideoDetectorObserver_OnVideoActivityEnded_ParamsDataView(
      internal::VideoDetectorObserver_OnVideoActivityEnded_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::VideoDetectorObserver_OnVideoActivityEnded_Params_Data* data_ = nullptr;
};



}  // namespace mojom
}  // namespace viz

namespace std {

}  // namespace std

namespace mojo {

}  // namespace mojo


namespace viz {
namespace mojom {






}  // namespace mojom
}  // namespace viz

#endif  // SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_VIDEO_DETECTOR_OBSERVER_MOJOM_SHARED_H_
