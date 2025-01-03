// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_VIZ_PRIVILEGED_INTERFACES_COMPOSITING_FRAME_SINK_VIDEO_CAPTURE_MOJOM_SHARED_H_
#define SERVICES_VIZ_PRIVILEGED_INTERFACES_COMPOSITING_FRAME_SINK_VIDEO_CAPTURE_MOJOM_SHARED_H_

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
#include "services/viz/privileged/interfaces/compositing/frame_sink_video_capture.mojom-shared-internal.h"
#include "media/capture/mojom/video_capture_types.mojom-shared.h"
#include "media/mojo/interfaces/media_types.mojom-shared.h"
#include "mojo/public/mojom/base/time.mojom-shared.h"
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
class FrameSinkVideoConsumerFrameCallbacksInterfaceBase {};

using FrameSinkVideoConsumerFrameCallbacksPtrDataView =
    mojo::InterfacePtrDataView<FrameSinkVideoConsumerFrameCallbacksInterfaceBase>;
using FrameSinkVideoConsumerFrameCallbacksRequestDataView =
    mojo::InterfaceRequestDataView<FrameSinkVideoConsumerFrameCallbacksInterfaceBase>;
using FrameSinkVideoConsumerFrameCallbacksAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<FrameSinkVideoConsumerFrameCallbacksInterfaceBase>;
using FrameSinkVideoConsumerFrameCallbacksAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<FrameSinkVideoConsumerFrameCallbacksInterfaceBase>;
class FrameSinkVideoConsumerInterfaceBase {};

using FrameSinkVideoConsumerPtrDataView =
    mojo::InterfacePtrDataView<FrameSinkVideoConsumerInterfaceBase>;
using FrameSinkVideoConsumerRequestDataView =
    mojo::InterfaceRequestDataView<FrameSinkVideoConsumerInterfaceBase>;
using FrameSinkVideoConsumerAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<FrameSinkVideoConsumerInterfaceBase>;
using FrameSinkVideoConsumerAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<FrameSinkVideoConsumerInterfaceBase>;
class FrameSinkVideoCapturerInterfaceBase {};

using FrameSinkVideoCapturerPtrDataView =
    mojo::InterfacePtrDataView<FrameSinkVideoCapturerInterfaceBase>;
using FrameSinkVideoCapturerRequestDataView =
    mojo::InterfaceRequestDataView<FrameSinkVideoCapturerInterfaceBase>;
using FrameSinkVideoCapturerAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<FrameSinkVideoCapturerInterfaceBase>;
using FrameSinkVideoCapturerAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<FrameSinkVideoCapturerInterfaceBase>;
class FrameSinkVideoConsumerFrameCallbacks_Done_ParamsDataView {
 public:
  FrameSinkVideoConsumerFrameCallbacks_Done_ParamsDataView() {}

  FrameSinkVideoConsumerFrameCallbacks_Done_ParamsDataView(
      internal::FrameSinkVideoConsumerFrameCallbacks_Done_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::FrameSinkVideoConsumerFrameCallbacks_Done_Params_Data* data_ = nullptr;
};

class FrameSinkVideoConsumerFrameCallbacks_ProvideFeedback_ParamsDataView {
 public:
  FrameSinkVideoConsumerFrameCallbacks_ProvideFeedback_ParamsDataView() {}

  FrameSinkVideoConsumerFrameCallbacks_ProvideFeedback_ParamsDataView(
      internal::FrameSinkVideoConsumerFrameCallbacks_ProvideFeedback_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  double utilization() const {
    return data_->utilization;
  }
 private:
  internal::FrameSinkVideoConsumerFrameCallbacks_ProvideFeedback_Params_Data* data_ = nullptr;
};

class FrameSinkVideoConsumer_OnFrameCaptured_ParamsDataView {
 public:
  FrameSinkVideoConsumer_OnFrameCaptured_ParamsDataView() {}

  FrameSinkVideoConsumer_OnFrameCaptured_ParamsDataView(
      internal::FrameSinkVideoConsumer_OnFrameCaptured_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  mojo::ScopedSharedBufferHandle TakeBuffer() {
    mojo::ScopedSharedBufferHandle result;
    bool ret =
        mojo::internal::Deserialize<mojo::ScopedSharedBufferHandle>(
            &data_->buffer, &result, context_);
    DCHECK(ret);
    return result;
  }
  uint32_t buffer_size() const {
    return data_->buffer_size;
  }
  inline void GetInfoDataView(
      ::media::mojom::VideoFrameInfoDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadInfo(UserType* output) {
    auto* pointer = data_->info.Get();
    return mojo::internal::Deserialize<::media::mojom::VideoFrameInfoDataView>(
        pointer, output, context_);
  }
  inline void GetUpdateRectDataView(
      ::gfx::mojom::RectDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUpdateRect(UserType* output) {
    auto* pointer = data_->update_rect.Get();
    return mojo::internal::Deserialize<::gfx::mojom::RectDataView>(
        pointer, output, context_);
  }
  inline void GetContentRectDataView(
      ::gfx::mojom::RectDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadContentRect(UserType* output) {
    auto* pointer = data_->content_rect.Get();
    return mojo::internal::Deserialize<::gfx::mojom::RectDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  UserType TakeCallbacks() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::viz::mojom::FrameSinkVideoConsumerFrameCallbacksPtrDataView>(
            &data_->callbacks, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::FrameSinkVideoConsumer_OnFrameCaptured_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class FrameSinkVideoConsumer_OnTargetLost_ParamsDataView {
 public:
  FrameSinkVideoConsumer_OnTargetLost_ParamsDataView() {}

  FrameSinkVideoConsumer_OnTargetLost_ParamsDataView(
      internal::FrameSinkVideoConsumer_OnTargetLost_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetFrameSinkIdDataView(
      ::viz::mojom::FrameSinkIdDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFrameSinkId(UserType* output) {
    auto* pointer = data_->frame_sink_id.Get();
    return mojo::internal::Deserialize<::viz::mojom::FrameSinkIdDataView>(
        pointer, output, context_);
  }
 private:
  internal::FrameSinkVideoConsumer_OnTargetLost_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class FrameSinkVideoConsumer_OnStopped_ParamsDataView {
 public:
  FrameSinkVideoConsumer_OnStopped_ParamsDataView() {}

  FrameSinkVideoConsumer_OnStopped_ParamsDataView(
      internal::FrameSinkVideoConsumer_OnStopped_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::FrameSinkVideoConsumer_OnStopped_Params_Data* data_ = nullptr;
};

class FrameSinkVideoCapturer_SetFormat_ParamsDataView {
 public:
  FrameSinkVideoCapturer_SetFormat_ParamsDataView() {}

  FrameSinkVideoCapturer_SetFormat_ParamsDataView(
      internal::FrameSinkVideoCapturer_SetFormat_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFormat(UserType* output) const {
    auto data_value = data_->format;
    return mojo::internal::Deserialize<::media::mojom::VideoPixelFormat>(
        data_value, output);
  }

  ::media::mojom::VideoPixelFormat format() const {
    return static_cast<::media::mojom::VideoPixelFormat>(data_->format);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadColorSpace(UserType* output) const {
    auto data_value = data_->color_space;
    return mojo::internal::Deserialize<::media::mojom::ColorSpace>(
        data_value, output);
  }

  ::media::mojom::ColorSpace color_space() const {
    return static_cast<::media::mojom::ColorSpace>(data_->color_space);
  }
 private:
  internal::FrameSinkVideoCapturer_SetFormat_Params_Data* data_ = nullptr;
};

class FrameSinkVideoCapturer_SetMinCapturePeriod_ParamsDataView {
 public:
  FrameSinkVideoCapturer_SetMinCapturePeriod_ParamsDataView() {}

  FrameSinkVideoCapturer_SetMinCapturePeriod_ParamsDataView(
      internal::FrameSinkVideoCapturer_SetMinCapturePeriod_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetMinPeriodDataView(
      ::mojo_base::mojom::TimeDeltaDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMinPeriod(UserType* output) {
    auto* pointer = data_->min_period.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeDeltaDataView>(
        pointer, output, context_);
  }
 private:
  internal::FrameSinkVideoCapturer_SetMinCapturePeriod_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class FrameSinkVideoCapturer_SetMinSizeChangePeriod_ParamsDataView {
 public:
  FrameSinkVideoCapturer_SetMinSizeChangePeriod_ParamsDataView() {}

  FrameSinkVideoCapturer_SetMinSizeChangePeriod_ParamsDataView(
      internal::FrameSinkVideoCapturer_SetMinSizeChangePeriod_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetMinPeriodDataView(
      ::mojo_base::mojom::TimeDeltaDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMinPeriod(UserType* output) {
    auto* pointer = data_->min_period.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeDeltaDataView>(
        pointer, output, context_);
  }
 private:
  internal::FrameSinkVideoCapturer_SetMinSizeChangePeriod_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class FrameSinkVideoCapturer_SetResolutionConstraints_ParamsDataView {
 public:
  FrameSinkVideoCapturer_SetResolutionConstraints_ParamsDataView() {}

  FrameSinkVideoCapturer_SetResolutionConstraints_ParamsDataView(
      internal::FrameSinkVideoCapturer_SetResolutionConstraints_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetMinSizeDataView(
      ::gfx::mojom::SizeDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMinSize(UserType* output) {
    auto* pointer = data_->min_size.Get();
    return mojo::internal::Deserialize<::gfx::mojom::SizeDataView>(
        pointer, output, context_);
  }
  inline void GetMaxSizeDataView(
      ::gfx::mojom::SizeDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMaxSize(UserType* output) {
    auto* pointer = data_->max_size.Get();
    return mojo::internal::Deserialize<::gfx::mojom::SizeDataView>(
        pointer, output, context_);
  }
  bool use_fixed_aspect_ratio() const {
    return data_->use_fixed_aspect_ratio;
  }
 private:
  internal::FrameSinkVideoCapturer_SetResolutionConstraints_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class FrameSinkVideoCapturer_SetAutoThrottlingEnabled_ParamsDataView {
 public:
  FrameSinkVideoCapturer_SetAutoThrottlingEnabled_ParamsDataView() {}

  FrameSinkVideoCapturer_SetAutoThrottlingEnabled_ParamsDataView(
      internal::FrameSinkVideoCapturer_SetAutoThrottlingEnabled_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool enabled() const {
    return data_->enabled;
  }
 private:
  internal::FrameSinkVideoCapturer_SetAutoThrottlingEnabled_Params_Data* data_ = nullptr;
};

class FrameSinkVideoCapturer_ChangeTarget_ParamsDataView {
 public:
  FrameSinkVideoCapturer_ChangeTarget_ParamsDataView() {}

  FrameSinkVideoCapturer_ChangeTarget_ParamsDataView(
      internal::FrameSinkVideoCapturer_ChangeTarget_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetFrameSinkIdDataView(
      ::viz::mojom::FrameSinkIdDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFrameSinkId(UserType* output) {
    auto* pointer = data_->frame_sink_id.Get();
    return mojo::internal::Deserialize<::viz::mojom::FrameSinkIdDataView>(
        pointer, output, context_);
  }
 private:
  internal::FrameSinkVideoCapturer_ChangeTarget_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class FrameSinkVideoCapturer_Start_ParamsDataView {
 public:
  FrameSinkVideoCapturer_Start_ParamsDataView() {}

  FrameSinkVideoCapturer_Start_ParamsDataView(
      internal::FrameSinkVideoCapturer_Start_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeConsumer() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::viz::mojom::FrameSinkVideoConsumerPtrDataView>(
            &data_->consumer, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::FrameSinkVideoCapturer_Start_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class FrameSinkVideoCapturer_Stop_ParamsDataView {
 public:
  FrameSinkVideoCapturer_Stop_ParamsDataView() {}

  FrameSinkVideoCapturer_Stop_ParamsDataView(
      internal::FrameSinkVideoCapturer_Stop_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::FrameSinkVideoCapturer_Stop_Params_Data* data_ = nullptr;
};

class FrameSinkVideoCapturer_RequestRefreshFrame_ParamsDataView {
 public:
  FrameSinkVideoCapturer_RequestRefreshFrame_ParamsDataView() {}

  FrameSinkVideoCapturer_RequestRefreshFrame_ParamsDataView(
      internal::FrameSinkVideoCapturer_RequestRefreshFrame_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::FrameSinkVideoCapturer_RequestRefreshFrame_Params_Data* data_ = nullptr;
};



}  // namespace mojom
}  // namespace viz

namespace std {

}  // namespace std

namespace mojo {

}  // namespace mojo


namespace viz {
namespace mojom {





inline void FrameSinkVideoConsumer_OnFrameCaptured_ParamsDataView::GetInfoDataView(
    ::media::mojom::VideoFrameInfoDataView* output) {
  auto pointer = data_->info.Get();
  *output = ::media::mojom::VideoFrameInfoDataView(pointer, context_);
}
inline void FrameSinkVideoConsumer_OnFrameCaptured_ParamsDataView::GetUpdateRectDataView(
    ::gfx::mojom::RectDataView* output) {
  auto pointer = data_->update_rect.Get();
  *output = ::gfx::mojom::RectDataView(pointer, context_);
}
inline void FrameSinkVideoConsumer_OnFrameCaptured_ParamsDataView::GetContentRectDataView(
    ::gfx::mojom::RectDataView* output) {
  auto pointer = data_->content_rect.Get();
  *output = ::gfx::mojom::RectDataView(pointer, context_);
}


inline void FrameSinkVideoConsumer_OnTargetLost_ParamsDataView::GetFrameSinkIdDataView(
    ::viz::mojom::FrameSinkIdDataView* output) {
  auto pointer = data_->frame_sink_id.Get();
  *output = ::viz::mojom::FrameSinkIdDataView(pointer, context_);
}






inline void FrameSinkVideoCapturer_SetMinCapturePeriod_ParamsDataView::GetMinPeriodDataView(
    ::mojo_base::mojom::TimeDeltaDataView* output) {
  auto pointer = data_->min_period.Get();
  *output = ::mojo_base::mojom::TimeDeltaDataView(pointer, context_);
}


inline void FrameSinkVideoCapturer_SetMinSizeChangePeriod_ParamsDataView::GetMinPeriodDataView(
    ::mojo_base::mojom::TimeDeltaDataView* output) {
  auto pointer = data_->min_period.Get();
  *output = ::mojo_base::mojom::TimeDeltaDataView(pointer, context_);
}


inline void FrameSinkVideoCapturer_SetResolutionConstraints_ParamsDataView::GetMinSizeDataView(
    ::gfx::mojom::SizeDataView* output) {
  auto pointer = data_->min_size.Get();
  *output = ::gfx::mojom::SizeDataView(pointer, context_);
}
inline void FrameSinkVideoCapturer_SetResolutionConstraints_ParamsDataView::GetMaxSizeDataView(
    ::gfx::mojom::SizeDataView* output) {
  auto pointer = data_->max_size.Get();
  *output = ::gfx::mojom::SizeDataView(pointer, context_);
}




inline void FrameSinkVideoCapturer_ChangeTarget_ParamsDataView::GetFrameSinkIdDataView(
    ::viz::mojom::FrameSinkIdDataView* output) {
  auto pointer = data_->frame_sink_id.Get();
  *output = ::viz::mojom::FrameSinkIdDataView(pointer, context_);
}









}  // namespace mojom
}  // namespace viz

#endif  // SERVICES_VIZ_PRIVILEGED_INTERFACES_COMPOSITING_FRAME_SINK_VIDEO_CAPTURE_MOJOM_SHARED_H_
