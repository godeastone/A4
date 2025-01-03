// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_MEDIA_METRICS_PROVIDER_MOJOM_SHARED_H_
#define MEDIA_MOJO_INTERFACES_MEDIA_METRICS_PROVIDER_MOJOM_SHARED_H_

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
#include "media/mojo/interfaces/media_metrics_provider.mojom-shared-internal.h"
#include "media/mojo/interfaces/media_types.mojom-shared.h"
#include "media/mojo/interfaces/video_decode_stats_recorder.mojom-shared.h"
#include "media/mojo/interfaces/watch_time_recorder.mojom-shared.h"
#include "mojo/public/mojom/base/time.mojom-shared.h"
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
class MediaMetricsProviderInterfaceBase {};

using MediaMetricsProviderPtrDataView =
    mojo::InterfacePtrDataView<MediaMetricsProviderInterfaceBase>;
using MediaMetricsProviderRequestDataView =
    mojo::InterfaceRequestDataView<MediaMetricsProviderInterfaceBase>;
using MediaMetricsProviderAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<MediaMetricsProviderInterfaceBase>;
using MediaMetricsProviderAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<MediaMetricsProviderInterfaceBase>;
class MediaMetricsProvider_Initialize_ParamsDataView {
 public:
  MediaMetricsProvider_Initialize_ParamsDataView() {}

  MediaMetricsProvider_Initialize_ParamsDataView(
      internal::MediaMetricsProvider_Initialize_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  bool is_mse() const {
    return data_->is_mse;
  }
  bool is_top_frame() const {
    return data_->is_top_frame;
  }
  inline void GetUntrustedTopOriginDataView(
      ::url::mojom::OriginDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUntrustedTopOrigin(UserType* output) {
    auto* pointer = data_->untrusted_top_origin.Get();
    return mojo::internal::Deserialize<::url::mojom::OriginDataView>(
        pointer, output, context_);
  }
 private:
  internal::MediaMetricsProvider_Initialize_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class MediaMetricsProvider_OnError_ParamsDataView {
 public:
  MediaMetricsProvider_OnError_ParamsDataView() {}

  MediaMetricsProvider_OnError_ParamsDataView(
      internal::MediaMetricsProvider_OnError_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStatus(UserType* output) const {
    auto data_value = data_->status;
    return mojo::internal::Deserialize<::media::mojom::PipelineStatus>(
        data_value, output);
  }

  ::media::mojom::PipelineStatus status() const {
    return static_cast<::media::mojom::PipelineStatus>(data_->status);
  }
 private:
  internal::MediaMetricsProvider_OnError_Params_Data* data_ = nullptr;
};

class MediaMetricsProvider_SetIsEME_ParamsDataView {
 public:
  MediaMetricsProvider_SetIsEME_ParamsDataView() {}

  MediaMetricsProvider_SetIsEME_ParamsDataView(
      internal::MediaMetricsProvider_SetIsEME_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::MediaMetricsProvider_SetIsEME_Params_Data* data_ = nullptr;
};

class MediaMetricsProvider_SetTimeToMetadata_ParamsDataView {
 public:
  MediaMetricsProvider_SetTimeToMetadata_ParamsDataView() {}

  MediaMetricsProvider_SetTimeToMetadata_ParamsDataView(
      internal::MediaMetricsProvider_SetTimeToMetadata_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetElapsedDataView(
      ::mojo_base::mojom::TimeDeltaDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadElapsed(UserType* output) {
    auto* pointer = data_->elapsed.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeDeltaDataView>(
        pointer, output, context_);
  }
 private:
  internal::MediaMetricsProvider_SetTimeToMetadata_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class MediaMetricsProvider_SetTimeToFirstFrame_ParamsDataView {
 public:
  MediaMetricsProvider_SetTimeToFirstFrame_ParamsDataView() {}

  MediaMetricsProvider_SetTimeToFirstFrame_ParamsDataView(
      internal::MediaMetricsProvider_SetTimeToFirstFrame_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetElapsedDataView(
      ::mojo_base::mojom::TimeDeltaDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadElapsed(UserType* output) {
    auto* pointer = data_->elapsed.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeDeltaDataView>(
        pointer, output, context_);
  }
 private:
  internal::MediaMetricsProvider_SetTimeToFirstFrame_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class MediaMetricsProvider_SetTimeToPlayReady_ParamsDataView {
 public:
  MediaMetricsProvider_SetTimeToPlayReady_ParamsDataView() {}

  MediaMetricsProvider_SetTimeToPlayReady_ParamsDataView(
      internal::MediaMetricsProvider_SetTimeToPlayReady_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetElapsedDataView(
      ::mojo_base::mojom::TimeDeltaDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadElapsed(UserType* output) {
    auto* pointer = data_->elapsed.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeDeltaDataView>(
        pointer, output, context_);
  }
 private:
  internal::MediaMetricsProvider_SetTimeToPlayReady_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class MediaMetricsProvider_AcquireWatchTimeRecorder_ParamsDataView {
 public:
  MediaMetricsProvider_AcquireWatchTimeRecorder_ParamsDataView() {}

  MediaMetricsProvider_AcquireWatchTimeRecorder_ParamsDataView(
      internal::MediaMetricsProvider_AcquireWatchTimeRecorder_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetPropertiesDataView(
      ::media::mojom::PlaybackPropertiesDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadProperties(UserType* output) {
    auto* pointer = data_->properties.Get();
    return mojo::internal::Deserialize<::media::mojom::PlaybackPropertiesDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  UserType TakeRecorder() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::media::mojom::WatchTimeRecorderRequestDataView>(
            &data_->recorder, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::MediaMetricsProvider_AcquireWatchTimeRecorder_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class MediaMetricsProvider_AcquireVideoDecodeStatsRecorder_ParamsDataView {
 public:
  MediaMetricsProvider_AcquireVideoDecodeStatsRecorder_ParamsDataView() {}

  MediaMetricsProvider_AcquireVideoDecodeStatsRecorder_ParamsDataView(
      internal::MediaMetricsProvider_AcquireVideoDecodeStatsRecorder_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeRecorder() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::media::mojom::VideoDecodeStatsRecorderRequestDataView>(
            &data_->recorder, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::MediaMetricsProvider_AcquireVideoDecodeStatsRecorder_Params_Data* data_ = nullptr;
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

inline void MediaMetricsProvider_Initialize_ParamsDataView::GetUntrustedTopOriginDataView(
    ::url::mojom::OriginDataView* output) {
  auto pointer = data_->untrusted_top_origin.Get();
  *output = ::url::mojom::OriginDataView(pointer, context_);
}






inline void MediaMetricsProvider_SetTimeToMetadata_ParamsDataView::GetElapsedDataView(
    ::mojo_base::mojom::TimeDeltaDataView* output) {
  auto pointer = data_->elapsed.Get();
  *output = ::mojo_base::mojom::TimeDeltaDataView(pointer, context_);
}


inline void MediaMetricsProvider_SetTimeToFirstFrame_ParamsDataView::GetElapsedDataView(
    ::mojo_base::mojom::TimeDeltaDataView* output) {
  auto pointer = data_->elapsed.Get();
  *output = ::mojo_base::mojom::TimeDeltaDataView(pointer, context_);
}


inline void MediaMetricsProvider_SetTimeToPlayReady_ParamsDataView::GetElapsedDataView(
    ::mojo_base::mojom::TimeDeltaDataView* output) {
  auto pointer = data_->elapsed.Get();
  *output = ::mojo_base::mojom::TimeDeltaDataView(pointer, context_);
}


inline void MediaMetricsProvider_AcquireWatchTimeRecorder_ParamsDataView::GetPropertiesDataView(
    ::media::mojom::PlaybackPropertiesDataView* output) {
  auto pointer = data_->properties.Get();
  *output = ::media::mojom::PlaybackPropertiesDataView(pointer, context_);
}





}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_INTERFACES_MEDIA_METRICS_PROVIDER_MOJOM_SHARED_H_
