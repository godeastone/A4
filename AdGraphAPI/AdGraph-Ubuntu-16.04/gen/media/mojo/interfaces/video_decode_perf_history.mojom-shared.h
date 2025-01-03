// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_VIDEO_DECODE_PERF_HISTORY_MOJOM_SHARED_H_
#define MEDIA_MOJO_INTERFACES_VIDEO_DECODE_PERF_HISTORY_MOJOM_SHARED_H_

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
#include "media/mojo/interfaces/video_decode_perf_history.mojom-shared-internal.h"
#include "media/mojo/interfaces/media_types.mojom-shared.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"


namespace media {
namespace mojom {


}  // namespace mojom
}  // namespace media

namespace mojo {
namespace internal {

}  // namespace internal
}  // namespace mojo


namespace media {
namespace mojom {
// Interface base classes. They are used for type safety check.
class VideoDecodePerfHistoryInterfaceBase {};

using VideoDecodePerfHistoryPtrDataView =
    mojo::InterfacePtrDataView<VideoDecodePerfHistoryInterfaceBase>;
using VideoDecodePerfHistoryRequestDataView =
    mojo::InterfaceRequestDataView<VideoDecodePerfHistoryInterfaceBase>;
using VideoDecodePerfHistoryAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<VideoDecodePerfHistoryInterfaceBase>;
using VideoDecodePerfHistoryAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<VideoDecodePerfHistoryInterfaceBase>;
class VideoDecodePerfHistory_GetPerfInfo_ParamsDataView {
 public:
  VideoDecodePerfHistory_GetPerfInfo_ParamsDataView() {}

  VideoDecodePerfHistory_GetPerfInfo_ParamsDataView(
      internal::VideoDecodePerfHistory_GetPerfInfo_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetFeaturesDataView(
      ::media::mojom::PredictionFeaturesDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFeatures(UserType* output) {
    auto* pointer = data_->features.Get();
    return mojo::internal::Deserialize<::media::mojom::PredictionFeaturesDataView>(
        pointer, output, context_);
  }
 private:
  internal::VideoDecodePerfHistory_GetPerfInfo_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class VideoDecodePerfHistory_GetPerfInfo_ResponseParamsDataView {
 public:
  VideoDecodePerfHistory_GetPerfInfo_ResponseParamsDataView() {}

  VideoDecodePerfHistory_GetPerfInfo_ResponseParamsDataView(
      internal::VideoDecodePerfHistory_GetPerfInfo_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool is_smooth() const {
    return data_->is_smooth;
  }
  bool is_power_efficient() const {
    return data_->is_power_efficient;
  }
 private:
  internal::VideoDecodePerfHistory_GetPerfInfo_ResponseParams_Data* data_ = nullptr;
};



}  // namespace mojom
}  // namespace media

namespace std {

}  // namespace std

namespace mojo {

}  // namespace mojo


namespace media {
namespace mojom {

inline void VideoDecodePerfHistory_GetPerfInfo_ParamsDataView::GetFeaturesDataView(
    ::media::mojom::PredictionFeaturesDataView* output) {
  auto pointer = data_->features.Get();
  *output = ::media::mojom::PredictionFeaturesDataView(pointer, context_);
}





}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_INTERFACES_VIDEO_DECODE_PERF_HISTORY_MOJOM_SHARED_H_
