// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_VIDEO_DECODE_STATS_RECORDER_MOJOM_SHARED_H_
#define MEDIA_MOJO_INTERFACES_VIDEO_DECODE_STATS_RECORDER_MOJOM_SHARED_H_

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
#include "media/mojo/interfaces/video_decode_stats_recorder.mojom-shared-internal.h"
#include "media/mojo/interfaces/media_types.mojom-shared.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-shared.h"
#include "url/mojom/origin.mojom-shared.h"

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
class VideoDecodeStatsRecorderInterfaceBase {};

using VideoDecodeStatsRecorderPtrDataView =
    mojo::InterfacePtrDataView<VideoDecodeStatsRecorderInterfaceBase>;
using VideoDecodeStatsRecorderRequestDataView =
    mojo::InterfaceRequestDataView<VideoDecodeStatsRecorderInterfaceBase>;
using VideoDecodeStatsRecorderAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<VideoDecodeStatsRecorderInterfaceBase>;
using VideoDecodeStatsRecorderAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<VideoDecodeStatsRecorderInterfaceBase>;
class VideoDecodeStatsRecorder_StartNewRecord_ParamsDataView {
 public:
  VideoDecodeStatsRecorder_StartNewRecord_ParamsDataView() {}

  VideoDecodeStatsRecorder_StartNewRecord_ParamsDataView(
      internal::VideoDecodeStatsRecorder_StartNewRecord_Params_Data* data,
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
  internal::VideoDecodeStatsRecorder_StartNewRecord_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class VideoDecodeStatsRecorder_UpdateRecord_ParamsDataView {
 public:
  VideoDecodeStatsRecorder_UpdateRecord_ParamsDataView() {}

  VideoDecodeStatsRecorder_UpdateRecord_ParamsDataView(
      internal::VideoDecodeStatsRecorder_UpdateRecord_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetTargetsDataView(
      ::media::mojom::PredictionTargetsDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTargets(UserType* output) {
    auto* pointer = data_->targets.Get();
    return mojo::internal::Deserialize<::media::mojom::PredictionTargetsDataView>(
        pointer, output, context_);
  }
 private:
  internal::VideoDecodeStatsRecorder_UpdateRecord_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace media

namespace std {

}  // namespace std

namespace mojo {

}  // namespace mojo


namespace media {
namespace mojom {

inline void VideoDecodeStatsRecorder_StartNewRecord_ParamsDataView::GetFeaturesDataView(
    ::media::mojom::PredictionFeaturesDataView* output) {
  auto pointer = data_->features.Get();
  *output = ::media::mojom::PredictionFeaturesDataView(pointer, context_);
}


inline void VideoDecodeStatsRecorder_UpdateRecord_ParamsDataView::GetTargetsDataView(
    ::media::mojom::PredictionTargetsDataView* output) {
  auto pointer = data_->targets.Get();
  *output = ::media::mojom::PredictionTargetsDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_INTERFACES_VIDEO_DECODE_STATS_RECORDER_MOJOM_SHARED_H_
