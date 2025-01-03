// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_VIZ_PRIVILEGED_INTERFACES_GL_GPU_SERVICE_MOJOM_SHARED_H_
#define SERVICES_VIZ_PRIVILEGED_INTERFACES_GL_GPU_SERVICE_MOJOM_SHARED_H_

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
#include "services/viz/privileged/interfaces/gl/gpu_service.mojom-shared-internal.h"
#include "components/arc/common/protected_buffer_manager.mojom-shared.h"
#include "components/arc/common/video_decode_accelerator.mojom-shared.h"
#include "components/arc/common/video_encode_accelerator.mojom-shared.h"
#include "components/arc/common/video_protected_buffer_allocator.mojom-shared.h"
#include "gpu/ipc/common/gpu_info.mojom-shared.h"
#include "gpu/ipc/common/memory_stats.mojom-shared.h"
#include "gpu/ipc/common/surface_handle.mojom-shared.h"
#include "gpu/ipc/common/sync_token.mojom-shared.h"
#include "media/mojo/interfaces/jpeg_decode_accelerator.mojom-shared.h"
#include "media/mojo/interfaces/jpeg_encode_accelerator.mojom-shared.h"
#include "media/mojo/interfaces/video_encode_accelerator.mojom-shared.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-shared.h"
#include "ui/gfx/mojo/buffer_types.mojom-shared.h"

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
class GpuServiceInterfaceBase {};

using GpuServicePtrDataView =
    mojo::InterfacePtrDataView<GpuServiceInterfaceBase>;
using GpuServiceRequestDataView =
    mojo::InterfaceRequestDataView<GpuServiceInterfaceBase>;
using GpuServiceAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<GpuServiceInterfaceBase>;
using GpuServiceAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<GpuServiceInterfaceBase>;
class GpuService_EstablishGpuChannel_ParamsDataView {
 public:
  GpuService_EstablishGpuChannel_ParamsDataView() {}

  GpuService_EstablishGpuChannel_ParamsDataView(
      internal::GpuService_EstablishGpuChannel_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int32_t client_id() const {
    return data_->client_id;
  }
  uint64_t client_tracing_id() const {
    return data_->client_tracing_id;
  }
  bool is_gpu_host() const {
    return data_->is_gpu_host;
  }
 private:
  internal::GpuService_EstablishGpuChannel_Params_Data* data_ = nullptr;
};

class GpuService_EstablishGpuChannel_ResponseParamsDataView {
 public:
  GpuService_EstablishGpuChannel_ResponseParamsDataView() {}

  GpuService_EstablishGpuChannel_ResponseParamsDataView(
      internal::GpuService_EstablishGpuChannel_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  mojo::ScopedMessagePipeHandle TakeChannelHandle() {
    mojo::ScopedMessagePipeHandle result;
    bool ret =
        mojo::internal::Deserialize<mojo::ScopedMessagePipeHandle>(
            &data_->channel_handle, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::GpuService_EstablishGpuChannel_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class GpuService_CloseChannel_ParamsDataView {
 public:
  GpuService_CloseChannel_ParamsDataView() {}

  GpuService_CloseChannel_ParamsDataView(
      internal::GpuService_CloseChannel_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int32_t client_id() const {
    return data_->client_id;
  }
 private:
  internal::GpuService_CloseChannel_Params_Data* data_ = nullptr;
};

class GpuService_CreateJpegDecodeAccelerator_ParamsDataView {
 public:
  GpuService_CreateJpegDecodeAccelerator_ParamsDataView() {}

  GpuService_CreateJpegDecodeAccelerator_ParamsDataView(
      internal::GpuService_CreateJpegDecodeAccelerator_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeJda() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::media::mojom::JpegDecodeAcceleratorRequestDataView>(
            &data_->jda, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::GpuService_CreateJpegDecodeAccelerator_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class GpuService_CreateJpegEncodeAccelerator_ParamsDataView {
 public:
  GpuService_CreateJpegEncodeAccelerator_ParamsDataView() {}

  GpuService_CreateJpegEncodeAccelerator_ParamsDataView(
      internal::GpuService_CreateJpegEncodeAccelerator_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeJea() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::media::mojom::JpegEncodeAcceleratorRequestDataView>(
            &data_->jea, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::GpuService_CreateJpegEncodeAccelerator_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class GpuService_CreateVideoEncodeAcceleratorProvider_ParamsDataView {
 public:
  GpuService_CreateVideoEncodeAcceleratorProvider_ParamsDataView() {}

  GpuService_CreateVideoEncodeAcceleratorProvider_ParamsDataView(
      internal::GpuService_CreateVideoEncodeAcceleratorProvider_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeVeaProvider() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::media::mojom::VideoEncodeAcceleratorProviderRequestDataView>(
            &data_->vea_provider, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::GpuService_CreateVideoEncodeAcceleratorProvider_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class GpuService_CreateGpuMemoryBuffer_ParamsDataView {
 public:
  GpuService_CreateGpuMemoryBuffer_ParamsDataView() {}

  GpuService_CreateGpuMemoryBuffer_ParamsDataView(
      internal::GpuService_CreateGpuMemoryBuffer_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetIdDataView(
      ::gfx::mojom::GpuMemoryBufferIdDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadId(UserType* output) {
    auto* pointer = data_->id.Get();
    return mojo::internal::Deserialize<::gfx::mojom::GpuMemoryBufferIdDataView>(
        pointer, output, context_);
  }
  inline void GetSizeDataView(
      ::gfx::mojom::SizeDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSize(UserType* output) {
    auto* pointer = data_->size.Get();
    return mojo::internal::Deserialize<::gfx::mojom::SizeDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFormat(UserType* output) const {
    auto data_value = data_->format;
    return mojo::internal::Deserialize<::gfx::mojom::BufferFormat>(
        data_value, output);
  }

  ::gfx::mojom::BufferFormat format() const {
    return static_cast<::gfx::mojom::BufferFormat>(data_->format);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUsage(UserType* output) const {
    auto data_value = data_->usage;
    return mojo::internal::Deserialize<::gfx::mojom::BufferUsage>(
        data_value, output);
  }

  ::gfx::mojom::BufferUsage usage() const {
    return static_cast<::gfx::mojom::BufferUsage>(data_->usage);
  }
  int32_t client_id() const {
    return data_->client_id;
  }
  inline void GetSurfaceHandleDataView(
      ::gpu::mojom::SurfaceHandleDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSurfaceHandle(UserType* output) {
    auto* pointer = data_->surface_handle.Get();
    return mojo::internal::Deserialize<::gpu::mojom::SurfaceHandleDataView>(
        pointer, output, context_);
  }
 private:
  internal::GpuService_CreateGpuMemoryBuffer_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class GpuService_CreateGpuMemoryBuffer_ResponseParamsDataView {
 public:
  GpuService_CreateGpuMemoryBuffer_ResponseParamsDataView() {}

  GpuService_CreateGpuMemoryBuffer_ResponseParamsDataView(
      internal::GpuService_CreateGpuMemoryBuffer_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetBufferHandleDataView(
      ::gfx::mojom::GpuMemoryBufferHandleDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadBufferHandle(UserType* output) {
    auto* pointer = data_->buffer_handle.Get();
    return mojo::internal::Deserialize<::gfx::mojom::GpuMemoryBufferHandleDataView>(
        pointer, output, context_);
  }
 private:
  internal::GpuService_CreateGpuMemoryBuffer_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class GpuService_DestroyGpuMemoryBuffer_ParamsDataView {
 public:
  GpuService_DestroyGpuMemoryBuffer_ParamsDataView() {}

  GpuService_DestroyGpuMemoryBuffer_ParamsDataView(
      internal::GpuService_DestroyGpuMemoryBuffer_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetIdDataView(
      ::gfx::mojom::GpuMemoryBufferIdDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadId(UserType* output) {
    auto* pointer = data_->id.Get();
    return mojo::internal::Deserialize<::gfx::mojom::GpuMemoryBufferIdDataView>(
        pointer, output, context_);
  }
  int32_t client_id() const {
    return data_->client_id;
  }
  inline void GetSyncTokenDataView(
      ::gpu::mojom::SyncTokenDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSyncToken(UserType* output) {
    auto* pointer = data_->sync_token.Get();
    return mojo::internal::Deserialize<::gpu::mojom::SyncTokenDataView>(
        pointer, output, context_);
  }
 private:
  internal::GpuService_DestroyGpuMemoryBuffer_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class GpuService_GetVideoMemoryUsageStats_ParamsDataView {
 public:
  GpuService_GetVideoMemoryUsageStats_ParamsDataView() {}

  GpuService_GetVideoMemoryUsageStats_ParamsDataView(
      internal::GpuService_GetVideoMemoryUsageStats_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::GpuService_GetVideoMemoryUsageStats_Params_Data* data_ = nullptr;
};

class GpuService_GetVideoMemoryUsageStats_ResponseParamsDataView {
 public:
  GpuService_GetVideoMemoryUsageStats_ResponseParamsDataView() {}

  GpuService_GetVideoMemoryUsageStats_ResponseParamsDataView(
      internal::GpuService_GetVideoMemoryUsageStats_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetStatsDataView(
      ::gpu::mojom::VideoMemoryUsageStatsDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStats(UserType* output) {
    auto* pointer = data_->stats.Get();
    return mojo::internal::Deserialize<::gpu::mojom::VideoMemoryUsageStatsDataView>(
        pointer, output, context_);
  }
 private:
  internal::GpuService_GetVideoMemoryUsageStats_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class GpuService_RequestCompleteGpuInfo_ParamsDataView {
 public:
  GpuService_RequestCompleteGpuInfo_ParamsDataView() {}

  GpuService_RequestCompleteGpuInfo_ParamsDataView(
      internal::GpuService_RequestCompleteGpuInfo_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::GpuService_RequestCompleteGpuInfo_Params_Data* data_ = nullptr;
};

class GpuService_RequestCompleteGpuInfo_ResponseParamsDataView {
 public:
  GpuService_RequestCompleteGpuInfo_ResponseParamsDataView() {}

  GpuService_RequestCompleteGpuInfo_ResponseParamsDataView(
      internal::GpuService_RequestCompleteGpuInfo_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetGpuInfoDataView(
      ::gpu::mojom::GpuInfoDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadGpuInfo(UserType* output) {
    auto* pointer = data_->gpu_info.Get();
    return mojo::internal::Deserialize<::gpu::mojom::GpuInfoDataView>(
        pointer, output, context_);
  }
 private:
  internal::GpuService_RequestCompleteGpuInfo_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class GpuService_GetGpuSupportedRuntimeVersion_ParamsDataView {
 public:
  GpuService_GetGpuSupportedRuntimeVersion_ParamsDataView() {}

  GpuService_GetGpuSupportedRuntimeVersion_ParamsDataView(
      internal::GpuService_GetGpuSupportedRuntimeVersion_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::GpuService_GetGpuSupportedRuntimeVersion_Params_Data* data_ = nullptr;
};

class GpuService_GetGpuSupportedRuntimeVersion_ResponseParamsDataView {
 public:
  GpuService_GetGpuSupportedRuntimeVersion_ResponseParamsDataView() {}

  GpuService_GetGpuSupportedRuntimeVersion_ResponseParamsDataView(
      internal::GpuService_GetGpuSupportedRuntimeVersion_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetGpuInfoDataView(
      ::gpu::mojom::GpuInfoDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadGpuInfo(UserType* output) {
    auto* pointer = data_->gpu_info.Get();
    return mojo::internal::Deserialize<::gpu::mojom::GpuInfoDataView>(
        pointer, output, context_);
  }
 private:
  internal::GpuService_GetGpuSupportedRuntimeVersion_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class GpuService_RequestHDRStatus_ParamsDataView {
 public:
  GpuService_RequestHDRStatus_ParamsDataView() {}

  GpuService_RequestHDRStatus_ParamsDataView(
      internal::GpuService_RequestHDRStatus_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::GpuService_RequestHDRStatus_Params_Data* data_ = nullptr;
};

class GpuService_RequestHDRStatus_ResponseParamsDataView {
 public:
  GpuService_RequestHDRStatus_ResponseParamsDataView() {}

  GpuService_RequestHDRStatus_ResponseParamsDataView(
      internal::GpuService_RequestHDRStatus_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool hdr_enabled() const {
    return data_->hdr_enabled;
  }
 private:
  internal::GpuService_RequestHDRStatus_ResponseParams_Data* data_ = nullptr;
};

class GpuService_LoadedShader_ParamsDataView {
 public:
  GpuService_LoadedShader_ParamsDataView() {}

  GpuService_LoadedShader_ParamsDataView(
      internal::GpuService_LoadedShader_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetKeyDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadKey(UserType* output) {
    auto* pointer = data_->key.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetDataDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadData(UserType* output) {
    auto* pointer = data_->data.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::GpuService_LoadedShader_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class GpuService_DestroyingVideoSurface_ParamsDataView {
 public:
  GpuService_DestroyingVideoSurface_ParamsDataView() {}

  GpuService_DestroyingVideoSurface_ParamsDataView(
      internal::GpuService_DestroyingVideoSurface_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int32_t surface_id() const {
    return data_->surface_id;
  }
 private:
  internal::GpuService_DestroyingVideoSurface_Params_Data* data_ = nullptr;
};

class GpuService_DestroyingVideoSurface_ResponseParamsDataView {
 public:
  GpuService_DestroyingVideoSurface_ResponseParamsDataView() {}

  GpuService_DestroyingVideoSurface_ResponseParamsDataView(
      internal::GpuService_DestroyingVideoSurface_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::GpuService_DestroyingVideoSurface_ResponseParams_Data* data_ = nullptr;
};

class GpuService_WakeUpGpu_ParamsDataView {
 public:
  GpuService_WakeUpGpu_ParamsDataView() {}

  GpuService_WakeUpGpu_ParamsDataView(
      internal::GpuService_WakeUpGpu_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::GpuService_WakeUpGpu_Params_Data* data_ = nullptr;
};

class GpuService_GpuSwitched_ParamsDataView {
 public:
  GpuService_GpuSwitched_ParamsDataView() {}

  GpuService_GpuSwitched_ParamsDataView(
      internal::GpuService_GpuSwitched_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::GpuService_GpuSwitched_Params_Data* data_ = nullptr;
};

class GpuService_DestroyAllChannels_ParamsDataView {
 public:
  GpuService_DestroyAllChannels_ParamsDataView() {}

  GpuService_DestroyAllChannels_ParamsDataView(
      internal::GpuService_DestroyAllChannels_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::GpuService_DestroyAllChannels_Params_Data* data_ = nullptr;
};

class GpuService_OnBackgroundCleanup_ParamsDataView {
 public:
  GpuService_OnBackgroundCleanup_ParamsDataView() {}

  GpuService_OnBackgroundCleanup_ParamsDataView(
      internal::GpuService_OnBackgroundCleanup_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::GpuService_OnBackgroundCleanup_Params_Data* data_ = nullptr;
};

class GpuService_OnBackgrounded_ParamsDataView {
 public:
  GpuService_OnBackgrounded_ParamsDataView() {}

  GpuService_OnBackgrounded_ParamsDataView(
      internal::GpuService_OnBackgrounded_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::GpuService_OnBackgrounded_Params_Data* data_ = nullptr;
};

class GpuService_OnForegrounded_ParamsDataView {
 public:
  GpuService_OnForegrounded_ParamsDataView() {}

  GpuService_OnForegrounded_ParamsDataView(
      internal::GpuService_OnForegrounded_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::GpuService_OnForegrounded_Params_Data* data_ = nullptr;
};

class GpuService_Crash_ParamsDataView {
 public:
  GpuService_Crash_ParamsDataView() {}

  GpuService_Crash_ParamsDataView(
      internal::GpuService_Crash_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::GpuService_Crash_Params_Data* data_ = nullptr;
};

class GpuService_Hang_ParamsDataView {
 public:
  GpuService_Hang_ParamsDataView() {}

  GpuService_Hang_ParamsDataView(
      internal::GpuService_Hang_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::GpuService_Hang_Params_Data* data_ = nullptr;
};

class GpuService_ThrowJavaException_ParamsDataView {
 public:
  GpuService_ThrowJavaException_ParamsDataView() {}

  GpuService_ThrowJavaException_ParamsDataView(
      internal::GpuService_ThrowJavaException_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::GpuService_ThrowJavaException_Params_Data* data_ = nullptr;
};

class GpuService_Stop_ParamsDataView {
 public:
  GpuService_Stop_ParamsDataView() {}

  GpuService_Stop_ParamsDataView(
      internal::GpuService_Stop_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::GpuService_Stop_Params_Data* data_ = nullptr;
};

class GpuService_Stop_ResponseParamsDataView {
 public:
  GpuService_Stop_ResponseParamsDataView() {}

  GpuService_Stop_ResponseParamsDataView(
      internal::GpuService_Stop_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::GpuService_Stop_ResponseParams_Data* data_ = nullptr;
};



}  // namespace mojom
}  // namespace viz

namespace std {

}  // namespace std

namespace mojo {

}  // namespace mojo


namespace viz {
namespace mojom {













inline void GpuService_CreateGpuMemoryBuffer_ParamsDataView::GetIdDataView(
    ::gfx::mojom::GpuMemoryBufferIdDataView* output) {
  auto pointer = data_->id.Get();
  *output = ::gfx::mojom::GpuMemoryBufferIdDataView(pointer, context_);
}
inline void GpuService_CreateGpuMemoryBuffer_ParamsDataView::GetSizeDataView(
    ::gfx::mojom::SizeDataView* output) {
  auto pointer = data_->size.Get();
  *output = ::gfx::mojom::SizeDataView(pointer, context_);
}
inline void GpuService_CreateGpuMemoryBuffer_ParamsDataView::GetSurfaceHandleDataView(
    ::gpu::mojom::SurfaceHandleDataView* output) {
  auto pointer = data_->surface_handle.Get();
  *output = ::gpu::mojom::SurfaceHandleDataView(pointer, context_);
}


inline void GpuService_CreateGpuMemoryBuffer_ResponseParamsDataView::GetBufferHandleDataView(
    ::gfx::mojom::GpuMemoryBufferHandleDataView* output) {
  auto pointer = data_->buffer_handle.Get();
  *output = ::gfx::mojom::GpuMemoryBufferHandleDataView(pointer, context_);
}


inline void GpuService_DestroyGpuMemoryBuffer_ParamsDataView::GetIdDataView(
    ::gfx::mojom::GpuMemoryBufferIdDataView* output) {
  auto pointer = data_->id.Get();
  *output = ::gfx::mojom::GpuMemoryBufferIdDataView(pointer, context_);
}
inline void GpuService_DestroyGpuMemoryBuffer_ParamsDataView::GetSyncTokenDataView(
    ::gpu::mojom::SyncTokenDataView* output) {
  auto pointer = data_->sync_token.Get();
  *output = ::gpu::mojom::SyncTokenDataView(pointer, context_);
}




inline void GpuService_GetVideoMemoryUsageStats_ResponseParamsDataView::GetStatsDataView(
    ::gpu::mojom::VideoMemoryUsageStatsDataView* output) {
  auto pointer = data_->stats.Get();
  *output = ::gpu::mojom::VideoMemoryUsageStatsDataView(pointer, context_);
}




inline void GpuService_RequestCompleteGpuInfo_ResponseParamsDataView::GetGpuInfoDataView(
    ::gpu::mojom::GpuInfoDataView* output) {
  auto pointer = data_->gpu_info.Get();
  *output = ::gpu::mojom::GpuInfoDataView(pointer, context_);
}




inline void GpuService_GetGpuSupportedRuntimeVersion_ResponseParamsDataView::GetGpuInfoDataView(
    ::gpu::mojom::GpuInfoDataView* output) {
  auto pointer = data_->gpu_info.Get();
  *output = ::gpu::mojom::GpuInfoDataView(pointer, context_);
}






inline void GpuService_LoadedShader_ParamsDataView::GetKeyDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->key.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void GpuService_LoadedShader_ParamsDataView::GetDataDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->data.Get();
  *output = mojo::StringDataView(pointer, context_);
}





























}  // namespace mojom
}  // namespace viz

#endif  // SERVICES_VIZ_PRIVILEGED_INTERFACES_GL_GPU_SERVICE_MOJOM_SHARED_H_
