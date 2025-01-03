// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_VIDEO_CAPTURE_PUBLIC_MOJOM_DEVICE_MOJOM_SHARED_H_
#define SERVICES_VIDEO_CAPTURE_PUBLIC_MOJOM_DEVICE_MOJOM_SHARED_H_

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
#include "services/video_capture/public/mojom/device.mojom-shared-internal.h"
#include "media/capture/mojom/video_capture_types.mojom-shared.h"
#include "media/capture/mojom/image_capture.mojom-shared.h"
#include "services/video_capture/public/mojom/receiver.mojom-shared.h"

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
class DeviceInterfaceBase {};

using DevicePtrDataView =
    mojo::InterfacePtrDataView<DeviceInterfaceBase>;
using DeviceRequestDataView =
    mojo::InterfaceRequestDataView<DeviceInterfaceBase>;
using DeviceAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<DeviceInterfaceBase>;
using DeviceAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<DeviceInterfaceBase>;
class Device_Start_ParamsDataView {
 public:
  Device_Start_ParamsDataView() {}

  Device_Start_ParamsDataView(
      internal::Device_Start_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetRequestedSettingsDataView(
      ::media::mojom::VideoCaptureParamsDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRequestedSettings(UserType* output) {
    auto* pointer = data_->requested_settings.Get();
    return mojo::internal::Deserialize<::media::mojom::VideoCaptureParamsDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  UserType TakeReceiver() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::video_capture::mojom::ReceiverPtrDataView>(
            &data_->receiver, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::Device_Start_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Device_OnReceiverReportingUtilization_ParamsDataView {
 public:
  Device_OnReceiverReportingUtilization_ParamsDataView() {}

  Device_OnReceiverReportingUtilization_ParamsDataView(
      internal::Device_OnReceiverReportingUtilization_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int32_t frame_feedback_id() const {
    return data_->frame_feedback_id;
  }
  double utilization() const {
    return data_->utilization;
  }
 private:
  internal::Device_OnReceiverReportingUtilization_Params_Data* data_ = nullptr;
};

class Device_RequestRefreshFrame_ParamsDataView {
 public:
  Device_RequestRefreshFrame_ParamsDataView() {}

  Device_RequestRefreshFrame_ParamsDataView(
      internal::Device_RequestRefreshFrame_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::Device_RequestRefreshFrame_Params_Data* data_ = nullptr;
};

class Device_MaybeSuspend_ParamsDataView {
 public:
  Device_MaybeSuspend_ParamsDataView() {}

  Device_MaybeSuspend_ParamsDataView(
      internal::Device_MaybeSuspend_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::Device_MaybeSuspend_Params_Data* data_ = nullptr;
};

class Device_Resume_ParamsDataView {
 public:
  Device_Resume_ParamsDataView() {}

  Device_Resume_ParamsDataView(
      internal::Device_Resume_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::Device_Resume_Params_Data* data_ = nullptr;
};

class Device_GetPhotoState_ParamsDataView {
 public:
  Device_GetPhotoState_ParamsDataView() {}

  Device_GetPhotoState_ParamsDataView(
      internal::Device_GetPhotoState_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::Device_GetPhotoState_Params_Data* data_ = nullptr;
};

class Device_GetPhotoState_ResponseParamsDataView {
 public:
  Device_GetPhotoState_ResponseParamsDataView() {}

  Device_GetPhotoState_ResponseParamsDataView(
      internal::Device_GetPhotoState_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetCapabilitiesDataView(
      ::media::mojom::PhotoStateDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCapabilities(UserType* output) {
    auto* pointer = data_->capabilities.Get();
    return mojo::internal::Deserialize<::media::mojom::PhotoStateDataView>(
        pointer, output, context_);
  }
 private:
  internal::Device_GetPhotoState_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Device_SetPhotoOptions_ParamsDataView {
 public:
  Device_SetPhotoOptions_ParamsDataView() {}

  Device_SetPhotoOptions_ParamsDataView(
      internal::Device_SetPhotoOptions_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetSettingsDataView(
      ::media::mojom::PhotoSettingsDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSettings(UserType* output) {
    auto* pointer = data_->settings.Get();
    return mojo::internal::Deserialize<::media::mojom::PhotoSettingsDataView>(
        pointer, output, context_);
  }
 private:
  internal::Device_SetPhotoOptions_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Device_SetPhotoOptions_ResponseParamsDataView {
 public:
  Device_SetPhotoOptions_ResponseParamsDataView() {}

  Device_SetPhotoOptions_ResponseParamsDataView(
      internal::Device_SetPhotoOptions_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool success() const {
    return data_->success;
  }
 private:
  internal::Device_SetPhotoOptions_ResponseParams_Data* data_ = nullptr;
};

class Device_TakePhoto_ParamsDataView {
 public:
  Device_TakePhoto_ParamsDataView() {}

  Device_TakePhoto_ParamsDataView(
      internal::Device_TakePhoto_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::Device_TakePhoto_Params_Data* data_ = nullptr;
};

class Device_TakePhoto_ResponseParamsDataView {
 public:
  Device_TakePhoto_ResponseParamsDataView() {}

  Device_TakePhoto_ResponseParamsDataView(
      internal::Device_TakePhoto_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetBlobDataView(
      ::media::mojom::BlobDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadBlob(UserType* output) {
    auto* pointer = data_->blob.Get();
    return mojo::internal::Deserialize<::media::mojom::BlobDataView>(
        pointer, output, context_);
  }
 private:
  internal::Device_TakePhoto_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace video_capture

namespace std {

}  // namespace std

namespace mojo {

}  // namespace mojo


namespace video_capture {
namespace mojom {

inline void Device_Start_ParamsDataView::GetRequestedSettingsDataView(
    ::media::mojom::VideoCaptureParamsDataView* output) {
  auto pointer = data_->requested_settings.Get();
  *output = ::media::mojom::VideoCaptureParamsDataView(pointer, context_);
}












inline void Device_GetPhotoState_ResponseParamsDataView::GetCapabilitiesDataView(
    ::media::mojom::PhotoStateDataView* output) {
  auto pointer = data_->capabilities.Get();
  *output = ::media::mojom::PhotoStateDataView(pointer, context_);
}


inline void Device_SetPhotoOptions_ParamsDataView::GetSettingsDataView(
    ::media::mojom::PhotoSettingsDataView* output) {
  auto pointer = data_->settings.Get();
  *output = ::media::mojom::PhotoSettingsDataView(pointer, context_);
}






inline void Device_TakePhoto_ResponseParamsDataView::GetBlobDataView(
    ::media::mojom::BlobDataView* output) {
  auto pointer = data_->blob.Get();
  *output = ::media::mojom::BlobDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace video_capture

#endif  // SERVICES_VIDEO_CAPTURE_PUBLIC_MOJOM_DEVICE_MOJOM_SHARED_H_
