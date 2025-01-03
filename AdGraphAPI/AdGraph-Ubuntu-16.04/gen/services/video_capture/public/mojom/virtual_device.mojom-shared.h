// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_VIDEO_CAPTURE_PUBLIC_MOJOM_VIRTUAL_DEVICE_MOJOM_SHARED_H_
#define SERVICES_VIDEO_CAPTURE_PUBLIC_MOJOM_VIRTUAL_DEVICE_MOJOM_SHARED_H_

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
#include "services/video_capture/public/mojom/virtual_device.mojom-shared-internal.h"
#include "media/capture/mojom/video_capture_types.mojom-shared.h"
#include "services/video_capture/public/mojom/producer.mojom-shared.h"
#include "services/video_capture/public/mojom/scoped_access_permission.mojom-shared.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-shared.h"

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
class SharedMemoryVirtualDeviceInterfaceBase {};

using SharedMemoryVirtualDevicePtrDataView =
    mojo::InterfacePtrDataView<SharedMemoryVirtualDeviceInterfaceBase>;
using SharedMemoryVirtualDeviceRequestDataView =
    mojo::InterfaceRequestDataView<SharedMemoryVirtualDeviceInterfaceBase>;
using SharedMemoryVirtualDeviceAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<SharedMemoryVirtualDeviceInterfaceBase>;
using SharedMemoryVirtualDeviceAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<SharedMemoryVirtualDeviceInterfaceBase>;
class TextureVirtualDeviceInterfaceBase {};

using TextureVirtualDevicePtrDataView =
    mojo::InterfacePtrDataView<TextureVirtualDeviceInterfaceBase>;
using TextureVirtualDeviceRequestDataView =
    mojo::InterfaceRequestDataView<TextureVirtualDeviceInterfaceBase>;
using TextureVirtualDeviceAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<TextureVirtualDeviceInterfaceBase>;
using TextureVirtualDeviceAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<TextureVirtualDeviceInterfaceBase>;
class SharedMemoryVirtualDevice_RequestFrameBuffer_ParamsDataView {
 public:
  SharedMemoryVirtualDevice_RequestFrameBuffer_ParamsDataView() {}

  SharedMemoryVirtualDevice_RequestFrameBuffer_ParamsDataView(
      internal::SharedMemoryVirtualDevice_RequestFrameBuffer_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetDimensionDataView(
      ::gfx::mojom::SizeDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDimension(UserType* output) {
    auto* pointer = data_->dimension.Get();
    return mojo::internal::Deserialize<::gfx::mojom::SizeDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPixelFormat(UserType* output) const {
    auto data_value = data_->pixel_format;
    return mojo::internal::Deserialize<::media::mojom::VideoCapturePixelFormat>(
        data_value, output);
  }

  ::media::mojom::VideoCapturePixelFormat pixel_format() const {
    return static_cast<::media::mojom::VideoCapturePixelFormat>(data_->pixel_format);
  }
 private:
  internal::SharedMemoryVirtualDevice_RequestFrameBuffer_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class SharedMemoryVirtualDevice_RequestFrameBuffer_ResponseParamsDataView {
 public:
  SharedMemoryVirtualDevice_RequestFrameBuffer_ResponseParamsDataView() {}

  SharedMemoryVirtualDevice_RequestFrameBuffer_ResponseParamsDataView(
      internal::SharedMemoryVirtualDevice_RequestFrameBuffer_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int32_t buffer_id() const {
    return data_->buffer_id;
  }
 private:
  internal::SharedMemoryVirtualDevice_RequestFrameBuffer_ResponseParams_Data* data_ = nullptr;
};

class SharedMemoryVirtualDevice_OnFrameReadyInBuffer_ParamsDataView {
 public:
  SharedMemoryVirtualDevice_OnFrameReadyInBuffer_ParamsDataView() {}

  SharedMemoryVirtualDevice_OnFrameReadyInBuffer_ParamsDataView(
      internal::SharedMemoryVirtualDevice_OnFrameReadyInBuffer_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int32_t buffer_id() const {
    return data_->buffer_id;
  }
  inline void GetFrameInfoDataView(
      ::media::mojom::VideoFrameInfoDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFrameInfo(UserType* output) {
    auto* pointer = data_->frame_info.Get();
    return mojo::internal::Deserialize<::media::mojom::VideoFrameInfoDataView>(
        pointer, output, context_);
  }
 private:
  internal::SharedMemoryVirtualDevice_OnFrameReadyInBuffer_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class TextureVirtualDevice_OnNewMailboxHolderBufferHandle_ParamsDataView {
 public:
  TextureVirtualDevice_OnNewMailboxHolderBufferHandle_ParamsDataView() {}

  TextureVirtualDevice_OnNewMailboxHolderBufferHandle_ParamsDataView(
      internal::TextureVirtualDevice_OnNewMailboxHolderBufferHandle_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int32_t buffer_id() const {
    return data_->buffer_id;
  }
  inline void GetMailboxHandlesDataView(
      ::media::mojom::MailboxBufferHandleSetDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMailboxHandles(UserType* output) {
    auto* pointer = data_->mailbox_handles.Get();
    return mojo::internal::Deserialize<::media::mojom::MailboxBufferHandleSetDataView>(
        pointer, output, context_);
  }
 private:
  internal::TextureVirtualDevice_OnNewMailboxHolderBufferHandle_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class TextureVirtualDevice_OnFrameReadyInBuffer_ParamsDataView {
 public:
  TextureVirtualDevice_OnFrameReadyInBuffer_ParamsDataView() {}

  TextureVirtualDevice_OnFrameReadyInBuffer_ParamsDataView(
      internal::TextureVirtualDevice_OnFrameReadyInBuffer_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int32_t buffer_id() const {
    return data_->buffer_id;
  }
  template <typename UserType>
  UserType TakeAccessPermission() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::video_capture::mojom::ScopedAccessPermissionPtrDataView>(
            &data_->access_permission, &result, context_);
    DCHECK(ret);
    return result;
  }
  inline void GetFrameInfoDataView(
      ::media::mojom::VideoFrameInfoDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFrameInfo(UserType* output) {
    auto* pointer = data_->frame_info.Get();
    return mojo::internal::Deserialize<::media::mojom::VideoFrameInfoDataView>(
        pointer, output, context_);
  }
 private:
  internal::TextureVirtualDevice_OnFrameReadyInBuffer_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class TextureVirtualDevice_OnBufferRetired_ParamsDataView {
 public:
  TextureVirtualDevice_OnBufferRetired_ParamsDataView() {}

  TextureVirtualDevice_OnBufferRetired_ParamsDataView(
      internal::TextureVirtualDevice_OnBufferRetired_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int32_t buffer_id() const {
    return data_->buffer_id;
  }
 private:
  internal::TextureVirtualDevice_OnBufferRetired_Params_Data* data_ = nullptr;
};



}  // namespace mojom
}  // namespace video_capture

namespace std {

}  // namespace std

namespace mojo {

}  // namespace mojo


namespace video_capture {
namespace mojom {

inline void SharedMemoryVirtualDevice_RequestFrameBuffer_ParamsDataView::GetDimensionDataView(
    ::gfx::mojom::SizeDataView* output) {
  auto pointer = data_->dimension.Get();
  *output = ::gfx::mojom::SizeDataView(pointer, context_);
}




inline void SharedMemoryVirtualDevice_OnFrameReadyInBuffer_ParamsDataView::GetFrameInfoDataView(
    ::media::mojom::VideoFrameInfoDataView* output) {
  auto pointer = data_->frame_info.Get();
  *output = ::media::mojom::VideoFrameInfoDataView(pointer, context_);
}


inline void TextureVirtualDevice_OnNewMailboxHolderBufferHandle_ParamsDataView::GetMailboxHandlesDataView(
    ::media::mojom::MailboxBufferHandleSetDataView* output) {
  auto pointer = data_->mailbox_handles.Get();
  *output = ::media::mojom::MailboxBufferHandleSetDataView(pointer, context_);
}


inline void TextureVirtualDevice_OnFrameReadyInBuffer_ParamsDataView::GetFrameInfoDataView(
    ::media::mojom::VideoFrameInfoDataView* output) {
  auto pointer = data_->frame_info.Get();
  *output = ::media::mojom::VideoFrameInfoDataView(pointer, context_);
}





}  // namespace mojom
}  // namespace video_capture

#endif  // SERVICES_VIDEO_CAPTURE_PUBLIC_MOJOM_VIRTUAL_DEVICE_MOJOM_SHARED_H_
