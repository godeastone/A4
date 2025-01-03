// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_UI_PUBLIC_INTERFACES_VIDEO_DETECTOR_MOJOM_SHARED_H_
#define SERVICES_UI_PUBLIC_INTERFACES_VIDEO_DETECTOR_MOJOM_SHARED_H_

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
#include "services/ui/public/interfaces/video_detector.mojom-shared-internal.h"
#include "services/viz/public/interfaces/compositing/video_detector_observer.mojom-shared.h"

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
class VideoDetectorInterfaceBase {};

using VideoDetectorPtrDataView =
    mojo::InterfacePtrDataView<VideoDetectorInterfaceBase>;
using VideoDetectorRequestDataView =
    mojo::InterfaceRequestDataView<VideoDetectorInterfaceBase>;
using VideoDetectorAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<VideoDetectorInterfaceBase>;
using VideoDetectorAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<VideoDetectorInterfaceBase>;
class VideoDetector_AddObserver_ParamsDataView {
 public:
  VideoDetector_AddObserver_ParamsDataView() {}

  VideoDetector_AddObserver_ParamsDataView(
      internal::VideoDetector_AddObserver_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeObserver() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::viz::mojom::VideoDetectorObserverPtrDataView>(
            &data_->observer, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::VideoDetector_AddObserver_Params_Data* data_ = nullptr;
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

#endif  // SERVICES_UI_PUBLIC_INTERFACES_VIDEO_DETECTOR_MOJOM_SHARED_H_
