// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_ARC_COMMON_VIDEO_PROTECTED_BUFFER_ALLOCATOR_MOJOM_SHARED_H_
#define COMPONENTS_ARC_COMMON_VIDEO_PROTECTED_BUFFER_ALLOCATOR_MOJOM_SHARED_H_

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
#include "components/arc/common/video_protected_buffer_allocator.mojom-shared-internal.h"
#include "components/arc/common/video_common.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"


namespace arc {
namespace mojom {


}  // namespace mojom
}  // namespace arc

namespace mojo {
namespace internal {

}  // namespace internal
}  // namespace mojo


namespace arc {
namespace mojom {
// Interface base classes. They are used for type safety check.
class VideoProtectedBufferAllocatorInterfaceBase {};

using VideoProtectedBufferAllocatorPtrDataView =
    mojo::InterfacePtrDataView<VideoProtectedBufferAllocatorInterfaceBase>;
using VideoProtectedBufferAllocatorRequestDataView =
    mojo::InterfaceRequestDataView<VideoProtectedBufferAllocatorInterfaceBase>;
using VideoProtectedBufferAllocatorAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<VideoProtectedBufferAllocatorInterfaceBase>;
using VideoProtectedBufferAllocatorAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<VideoProtectedBufferAllocatorInterfaceBase>;
class VideoProtectedBufferAllocator_AllocateProtectedSharedMemory_ParamsDataView {
 public:
  VideoProtectedBufferAllocator_AllocateProtectedSharedMemory_ParamsDataView() {}

  VideoProtectedBufferAllocator_AllocateProtectedSharedMemory_ParamsDataView(
      internal::VideoProtectedBufferAllocator_AllocateProtectedSharedMemory_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  mojo::ScopedHandle TakeHandleFd() {
    mojo::ScopedHandle result;
    bool ret =
        mojo::internal::Deserialize<mojo::ScopedHandle>(
            &data_->handle_fd, &result, context_);
    DCHECK(ret);
    return result;
  }
  uint64_t size() const {
    return data_->size;
  }
 private:
  internal::VideoProtectedBufferAllocator_AllocateProtectedSharedMemory_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class VideoProtectedBufferAllocator_AllocateProtectedSharedMemory_ResponseParamsDataView {
 public:
  VideoProtectedBufferAllocator_AllocateProtectedSharedMemory_ResponseParamsDataView() {}

  VideoProtectedBufferAllocator_AllocateProtectedSharedMemory_ResponseParamsDataView(
      internal::VideoProtectedBufferAllocator_AllocateProtectedSharedMemory_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool result() const {
    return data_->result;
  }
 private:
  internal::VideoProtectedBufferAllocator_AllocateProtectedSharedMemory_ResponseParams_Data* data_ = nullptr;
};

class VideoProtectedBufferAllocator_AllocateProtectedNativePixmap_ParamsDataView {
 public:
  VideoProtectedBufferAllocator_AllocateProtectedNativePixmap_ParamsDataView() {}

  VideoProtectedBufferAllocator_AllocateProtectedNativePixmap_ParamsDataView(
      internal::VideoProtectedBufferAllocator_AllocateProtectedNativePixmap_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  mojo::ScopedHandle TakeHandleFd() {
    mojo::ScopedHandle result;
    bool ret =
        mojo::internal::Deserialize<mojo::ScopedHandle>(
            &data_->handle_fd, &result, context_);
    DCHECK(ret);
    return result;
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPixelFormat(UserType* output) const {
    auto data_value = data_->pixel_format;
    return mojo::internal::Deserialize<::arc::mojom::HalPixelFormat>(
        data_value, output);
  }

  ::arc::mojom::HalPixelFormat pixel_format() const {
    return static_cast<::arc::mojom::HalPixelFormat>(data_->pixel_format);
  }
  inline void GetPictureSizeDataView(
      ::arc::mojom::SizeDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPictureSize(UserType* output) {
    auto* pointer = data_->picture_size.Get();
    return mojo::internal::Deserialize<::arc::mojom::SizeDataView>(
        pointer, output, context_);
  }
 private:
  internal::VideoProtectedBufferAllocator_AllocateProtectedNativePixmap_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class VideoProtectedBufferAllocator_AllocateProtectedNativePixmap_ResponseParamsDataView {
 public:
  VideoProtectedBufferAllocator_AllocateProtectedNativePixmap_ResponseParamsDataView() {}

  VideoProtectedBufferAllocator_AllocateProtectedNativePixmap_ResponseParamsDataView(
      internal::VideoProtectedBufferAllocator_AllocateProtectedNativePixmap_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool result() const {
    return data_->result;
  }
 private:
  internal::VideoProtectedBufferAllocator_AllocateProtectedNativePixmap_ResponseParams_Data* data_ = nullptr;
};

class VideoProtectedBufferAllocator_ReleaseProtectedBuffer_ParamsDataView {
 public:
  VideoProtectedBufferAllocator_ReleaseProtectedBuffer_ParamsDataView() {}

  VideoProtectedBufferAllocator_ReleaseProtectedBuffer_ParamsDataView(
      internal::VideoProtectedBufferAllocator_ReleaseProtectedBuffer_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  mojo::ScopedHandle TakeHandleFd() {
    mojo::ScopedHandle result;
    bool ret =
        mojo::internal::Deserialize<mojo::ScopedHandle>(
            &data_->handle_fd, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::VideoProtectedBufferAllocator_ReleaseProtectedBuffer_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace arc

namespace std {

}  // namespace std

namespace mojo {

}  // namespace mojo


namespace arc {
namespace mojom {





inline void VideoProtectedBufferAllocator_AllocateProtectedNativePixmap_ParamsDataView::GetPictureSizeDataView(
    ::arc::mojom::SizeDataView* output) {
  auto pointer = data_->picture_size.Get();
  *output = ::arc::mojom::SizeDataView(pointer, context_);
}







}  // namespace mojom
}  // namespace arc

#endif  // COMPONENTS_ARC_COMMON_VIDEO_PROTECTED_BUFFER_ALLOCATOR_MOJOM_SHARED_H_
