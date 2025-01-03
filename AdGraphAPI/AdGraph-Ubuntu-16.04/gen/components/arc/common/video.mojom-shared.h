// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_ARC_COMMON_VIDEO_MOJOM_SHARED_H_
#define COMPONENTS_ARC_COMMON_VIDEO_MOJOM_SHARED_H_

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
#include "components/arc/common/video.mojom-shared-internal.h"
#include "components/arc/common/video_decode_accelerator.mojom-shared.h"
#include "components/arc/common/video_encode_accelerator.mojom-shared.h"
#include "components/arc/common/video_protected_buffer_allocator.mojom-shared.h"

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
class VideoHostInterfaceBase {};

using VideoHostPtrDataView =
    mojo::InterfacePtrDataView<VideoHostInterfaceBase>;
using VideoHostRequestDataView =
    mojo::InterfaceRequestDataView<VideoHostInterfaceBase>;
using VideoHostAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<VideoHostInterfaceBase>;
using VideoHostAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<VideoHostInterfaceBase>;
class VideoInstanceInterfaceBase {};

using VideoInstancePtrDataView =
    mojo::InterfacePtrDataView<VideoInstanceInterfaceBase>;
using VideoInstanceRequestDataView =
    mojo::InterfaceRequestDataView<VideoInstanceInterfaceBase>;
using VideoInstanceAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<VideoInstanceInterfaceBase>;
using VideoInstanceAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<VideoInstanceInterfaceBase>;
class VideoAcceleratorFactoryInterfaceBase {};

using VideoAcceleratorFactoryPtrDataView =
    mojo::InterfacePtrDataView<VideoAcceleratorFactoryInterfaceBase>;
using VideoAcceleratorFactoryRequestDataView =
    mojo::InterfaceRequestDataView<VideoAcceleratorFactoryInterfaceBase>;
using VideoAcceleratorFactoryAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<VideoAcceleratorFactoryInterfaceBase>;
using VideoAcceleratorFactoryAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<VideoAcceleratorFactoryInterfaceBase>;
class VideoHost_OnBootstrapVideoAcceleratorFactory_ParamsDataView {
 public:
  VideoHost_OnBootstrapVideoAcceleratorFactory_ParamsDataView() {}

  VideoHost_OnBootstrapVideoAcceleratorFactory_ParamsDataView(
      internal::VideoHost_OnBootstrapVideoAcceleratorFactory_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::VideoHost_OnBootstrapVideoAcceleratorFactory_Params_Data* data_ = nullptr;
};

class VideoHost_OnBootstrapVideoAcceleratorFactory_ResponseParamsDataView {
 public:
  VideoHost_OnBootstrapVideoAcceleratorFactory_ResponseParamsDataView() {}

  VideoHost_OnBootstrapVideoAcceleratorFactory_ResponseParamsDataView(
      internal::VideoHost_OnBootstrapVideoAcceleratorFactory_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  mojo::ScopedHandle TakeChannelHandle() {
    mojo::ScopedHandle result;
    bool ret =
        mojo::internal::Deserialize<mojo::ScopedHandle>(
            &data_->channel_handle, &result, context_);
    DCHECK(ret);
    return result;
  }
  inline void GetTokenDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadToken(UserType* output) {
    auto* pointer = data_->token.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::VideoHost_OnBootstrapVideoAcceleratorFactory_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class VideoInstance_InitDeprecated_ParamsDataView {
 public:
  VideoInstance_InitDeprecated_ParamsDataView() {}

  VideoInstance_InitDeprecated_ParamsDataView(
      internal::VideoInstance_InitDeprecated_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeHostPtr() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::arc::mojom::VideoHostPtrDataView>(
            &data_->host_ptr, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::VideoInstance_InitDeprecated_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class VideoInstance_Init_ParamsDataView {
 public:
  VideoInstance_Init_ParamsDataView() {}

  VideoInstance_Init_ParamsDataView(
      internal::VideoInstance_Init_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeHostPtr() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::arc::mojom::VideoHostPtrDataView>(
            &data_->host_ptr, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::VideoInstance_Init_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class VideoInstance_Init_ResponseParamsDataView {
 public:
  VideoInstance_Init_ResponseParamsDataView() {}

  VideoInstance_Init_ResponseParamsDataView(
      internal::VideoInstance_Init_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::VideoInstance_Init_ResponseParams_Data* data_ = nullptr;
};

class VideoAcceleratorFactory_CreateEncodeAccelerator_ParamsDataView {
 public:
  VideoAcceleratorFactory_CreateEncodeAccelerator_ParamsDataView() {}

  VideoAcceleratorFactory_CreateEncodeAccelerator_ParamsDataView(
      internal::VideoAcceleratorFactory_CreateEncodeAccelerator_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeVideoEncoder() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::arc::mojom::VideoEncodeAcceleratorRequestDataView>(
            &data_->video_encoder, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::VideoAcceleratorFactory_CreateEncodeAccelerator_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class VideoAcceleratorFactory_CreateDecodeAccelerator_ParamsDataView {
 public:
  VideoAcceleratorFactory_CreateDecodeAccelerator_ParamsDataView() {}

  VideoAcceleratorFactory_CreateDecodeAccelerator_ParamsDataView(
      internal::VideoAcceleratorFactory_CreateDecodeAccelerator_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeVideoDecoder() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::arc::mojom::VideoDecodeAcceleratorRequestDataView>(
            &data_->video_decoder, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::VideoAcceleratorFactory_CreateDecodeAccelerator_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class VideoAcceleratorFactory_CreateProtectedBufferAllocator_ParamsDataView {
 public:
  VideoAcceleratorFactory_CreateProtectedBufferAllocator_ParamsDataView() {}

  VideoAcceleratorFactory_CreateProtectedBufferAllocator_ParamsDataView(
      internal::VideoAcceleratorFactory_CreateProtectedBufferAllocator_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeVideoProtectedBufferAllocator() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::arc::mojom::VideoProtectedBufferAllocatorRequestDataView>(
            &data_->video_protected_buffer_allocator, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::VideoAcceleratorFactory_CreateProtectedBufferAllocator_Params_Data* data_ = nullptr;
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



inline void VideoHost_OnBootstrapVideoAcceleratorFactory_ResponseParamsDataView::GetTokenDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->token.Get();
  *output = mojo::StringDataView(pointer, context_);
}















}  // namespace mojom
}  // namespace arc

#endif  // COMPONENTS_ARC_COMMON_VIDEO_MOJOM_SHARED_H_
