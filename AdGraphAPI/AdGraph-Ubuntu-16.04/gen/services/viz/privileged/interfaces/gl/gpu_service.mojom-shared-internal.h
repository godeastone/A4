// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_VIZ_PRIVILEGED_INTERFACES_GL_GPU_SERVICE_MOJOM_SHARED_INTERNAL_H_
#define SERVICES_VIZ_PRIVILEGED_INTERFACES_GL_GPU_SERVICE_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "components/arc/common/protected_buffer_manager.mojom-shared-internal.h"
#include "components/arc/common/video_decode_accelerator.mojom-shared-internal.h"
#include "components/arc/common/video_encode_accelerator.mojom-shared-internal.h"
#include "components/arc/common/video_protected_buffer_allocator.mojom-shared-internal.h"
#include "gpu/ipc/common/gpu_info.mojom-shared-internal.h"
#include "gpu/ipc/common/memory_stats.mojom-shared-internal.h"
#include "gpu/ipc/common/surface_handle.mojom-shared-internal.h"
#include "gpu/ipc/common/sync_token.mojom-shared-internal.h"
#include "media/mojo/interfaces/jpeg_decode_accelerator.mojom-shared-internal.h"
#include "media/mojo/interfaces/jpeg_encode_accelerator.mojom-shared-internal.h"
#include "media/mojo/interfaces/video_encode_accelerator.mojom-shared-internal.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-shared-internal.h"
#include "ui/gfx/mojo/buffer_types.mojom-shared-internal.h"
#include "mojo/public/cpp/bindings/lib/native_enum_data.h"
#include "mojo/public/interfaces/bindings/native_struct.mojom-shared-internal.h"

namespace mojo {
namespace internal {
class ValidationContext;
}
}
namespace viz {
namespace mojom {
namespace internal {

#pragma pack(push, 1)
class  GpuService_EstablishGpuChannel_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(GpuService_EstablishGpuChannel_Params_Data));
      new (data()) GpuService_EstablishGpuChannel_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    GpuService_EstablishGpuChannel_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<GpuService_EstablishGpuChannel_Params_Data>(index_);
    }
    GpuService_EstablishGpuChannel_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t client_id;
  uint8_t is_gpu_host : 1;
  uint8_t pad1_[3];
  uint64_t client_tracing_id;

 private:
  GpuService_EstablishGpuChannel_Params_Data();
  ~GpuService_EstablishGpuChannel_Params_Data() = delete;
};
static_assert(sizeof(GpuService_EstablishGpuChannel_Params_Data) == 24,
              "Bad sizeof(GpuService_EstablishGpuChannel_Params_Data)");
class  GpuService_EstablishGpuChannel_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(GpuService_EstablishGpuChannel_ResponseParams_Data));
      new (data()) GpuService_EstablishGpuChannel_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    GpuService_EstablishGpuChannel_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<GpuService_EstablishGpuChannel_ResponseParams_Data>(index_);
    }
    GpuService_EstablishGpuChannel_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data channel_handle;
  uint8_t padfinal_[4];

 private:
  GpuService_EstablishGpuChannel_ResponseParams_Data();
  ~GpuService_EstablishGpuChannel_ResponseParams_Data() = delete;
};
static_assert(sizeof(GpuService_EstablishGpuChannel_ResponseParams_Data) == 16,
              "Bad sizeof(GpuService_EstablishGpuChannel_ResponseParams_Data)");
class  GpuService_CloseChannel_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(GpuService_CloseChannel_Params_Data));
      new (data()) GpuService_CloseChannel_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    GpuService_CloseChannel_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<GpuService_CloseChannel_Params_Data>(index_);
    }
    GpuService_CloseChannel_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t client_id;
  uint8_t padfinal_[4];

 private:
  GpuService_CloseChannel_Params_Data();
  ~GpuService_CloseChannel_Params_Data() = delete;
};
static_assert(sizeof(GpuService_CloseChannel_Params_Data) == 16,
              "Bad sizeof(GpuService_CloseChannel_Params_Data)");
class  GpuService_CreateJpegDecodeAccelerator_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(GpuService_CreateJpegDecodeAccelerator_Params_Data));
      new (data()) GpuService_CreateJpegDecodeAccelerator_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    GpuService_CreateJpegDecodeAccelerator_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<GpuService_CreateJpegDecodeAccelerator_Params_Data>(index_);
    }
    GpuService_CreateJpegDecodeAccelerator_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data jda;
  uint8_t padfinal_[4];

 private:
  GpuService_CreateJpegDecodeAccelerator_Params_Data();
  ~GpuService_CreateJpegDecodeAccelerator_Params_Data() = delete;
};
static_assert(sizeof(GpuService_CreateJpegDecodeAccelerator_Params_Data) == 16,
              "Bad sizeof(GpuService_CreateJpegDecodeAccelerator_Params_Data)");
class  GpuService_CreateJpegEncodeAccelerator_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(GpuService_CreateJpegEncodeAccelerator_Params_Data));
      new (data()) GpuService_CreateJpegEncodeAccelerator_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    GpuService_CreateJpegEncodeAccelerator_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<GpuService_CreateJpegEncodeAccelerator_Params_Data>(index_);
    }
    GpuService_CreateJpegEncodeAccelerator_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data jea;
  uint8_t padfinal_[4];

 private:
  GpuService_CreateJpegEncodeAccelerator_Params_Data();
  ~GpuService_CreateJpegEncodeAccelerator_Params_Data() = delete;
};
static_assert(sizeof(GpuService_CreateJpegEncodeAccelerator_Params_Data) == 16,
              "Bad sizeof(GpuService_CreateJpegEncodeAccelerator_Params_Data)");
class  GpuService_CreateVideoEncodeAcceleratorProvider_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(GpuService_CreateVideoEncodeAcceleratorProvider_Params_Data));
      new (data()) GpuService_CreateVideoEncodeAcceleratorProvider_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    GpuService_CreateVideoEncodeAcceleratorProvider_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<GpuService_CreateVideoEncodeAcceleratorProvider_Params_Data>(index_);
    }
    GpuService_CreateVideoEncodeAcceleratorProvider_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data vea_provider;
  uint8_t padfinal_[4];

 private:
  GpuService_CreateVideoEncodeAcceleratorProvider_Params_Data();
  ~GpuService_CreateVideoEncodeAcceleratorProvider_Params_Data() = delete;
};
static_assert(sizeof(GpuService_CreateVideoEncodeAcceleratorProvider_Params_Data) == 16,
              "Bad sizeof(GpuService_CreateVideoEncodeAcceleratorProvider_Params_Data)");
class  GpuService_CreateGpuMemoryBuffer_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(GpuService_CreateGpuMemoryBuffer_Params_Data));
      new (data()) GpuService_CreateGpuMemoryBuffer_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    GpuService_CreateGpuMemoryBuffer_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<GpuService_CreateGpuMemoryBuffer_Params_Data>(index_);
    }
    GpuService_CreateGpuMemoryBuffer_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::gfx::mojom::internal::GpuMemoryBufferId_Data> id;
  mojo::internal::Pointer<::gfx::mojom::internal::Size_Data> size;
  int32_t format;
  int32_t usage;
  int32_t client_id;
  uint8_t pad4_[4];
  mojo::internal::Pointer<::gpu::mojom::internal::SurfaceHandle_Data> surface_handle;

 private:
  GpuService_CreateGpuMemoryBuffer_Params_Data();
  ~GpuService_CreateGpuMemoryBuffer_Params_Data() = delete;
};
static_assert(sizeof(GpuService_CreateGpuMemoryBuffer_Params_Data) == 48,
              "Bad sizeof(GpuService_CreateGpuMemoryBuffer_Params_Data)");
class  GpuService_CreateGpuMemoryBuffer_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(GpuService_CreateGpuMemoryBuffer_ResponseParams_Data));
      new (data()) GpuService_CreateGpuMemoryBuffer_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    GpuService_CreateGpuMemoryBuffer_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<GpuService_CreateGpuMemoryBuffer_ResponseParams_Data>(index_);
    }
    GpuService_CreateGpuMemoryBuffer_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::gfx::mojom::internal::GpuMemoryBufferHandle_Data> buffer_handle;

 private:
  GpuService_CreateGpuMemoryBuffer_ResponseParams_Data();
  ~GpuService_CreateGpuMemoryBuffer_ResponseParams_Data() = delete;
};
static_assert(sizeof(GpuService_CreateGpuMemoryBuffer_ResponseParams_Data) == 16,
              "Bad sizeof(GpuService_CreateGpuMemoryBuffer_ResponseParams_Data)");
class  GpuService_DestroyGpuMemoryBuffer_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(GpuService_DestroyGpuMemoryBuffer_Params_Data));
      new (data()) GpuService_DestroyGpuMemoryBuffer_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    GpuService_DestroyGpuMemoryBuffer_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<GpuService_DestroyGpuMemoryBuffer_Params_Data>(index_);
    }
    GpuService_DestroyGpuMemoryBuffer_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::gfx::mojom::internal::GpuMemoryBufferId_Data> id;
  int32_t client_id;
  uint8_t pad1_[4];
  mojo::internal::Pointer<::gpu::mojom::internal::SyncToken_Data> sync_token;

 private:
  GpuService_DestroyGpuMemoryBuffer_Params_Data();
  ~GpuService_DestroyGpuMemoryBuffer_Params_Data() = delete;
};
static_assert(sizeof(GpuService_DestroyGpuMemoryBuffer_Params_Data) == 32,
              "Bad sizeof(GpuService_DestroyGpuMemoryBuffer_Params_Data)");
class  GpuService_GetVideoMemoryUsageStats_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(GpuService_GetVideoMemoryUsageStats_Params_Data));
      new (data()) GpuService_GetVideoMemoryUsageStats_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    GpuService_GetVideoMemoryUsageStats_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<GpuService_GetVideoMemoryUsageStats_Params_Data>(index_);
    }
    GpuService_GetVideoMemoryUsageStats_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  GpuService_GetVideoMemoryUsageStats_Params_Data();
  ~GpuService_GetVideoMemoryUsageStats_Params_Data() = delete;
};
static_assert(sizeof(GpuService_GetVideoMemoryUsageStats_Params_Data) == 8,
              "Bad sizeof(GpuService_GetVideoMemoryUsageStats_Params_Data)");
class  GpuService_GetVideoMemoryUsageStats_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(GpuService_GetVideoMemoryUsageStats_ResponseParams_Data));
      new (data()) GpuService_GetVideoMemoryUsageStats_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    GpuService_GetVideoMemoryUsageStats_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<GpuService_GetVideoMemoryUsageStats_ResponseParams_Data>(index_);
    }
    GpuService_GetVideoMemoryUsageStats_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::gpu::mojom::internal::VideoMemoryUsageStats_Data> stats;

 private:
  GpuService_GetVideoMemoryUsageStats_ResponseParams_Data();
  ~GpuService_GetVideoMemoryUsageStats_ResponseParams_Data() = delete;
};
static_assert(sizeof(GpuService_GetVideoMemoryUsageStats_ResponseParams_Data) == 16,
              "Bad sizeof(GpuService_GetVideoMemoryUsageStats_ResponseParams_Data)");
class  GpuService_RequestCompleteGpuInfo_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(GpuService_RequestCompleteGpuInfo_Params_Data));
      new (data()) GpuService_RequestCompleteGpuInfo_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    GpuService_RequestCompleteGpuInfo_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<GpuService_RequestCompleteGpuInfo_Params_Data>(index_);
    }
    GpuService_RequestCompleteGpuInfo_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  GpuService_RequestCompleteGpuInfo_Params_Data();
  ~GpuService_RequestCompleteGpuInfo_Params_Data() = delete;
};
static_assert(sizeof(GpuService_RequestCompleteGpuInfo_Params_Data) == 8,
              "Bad sizeof(GpuService_RequestCompleteGpuInfo_Params_Data)");
class  GpuService_RequestCompleteGpuInfo_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(GpuService_RequestCompleteGpuInfo_ResponseParams_Data));
      new (data()) GpuService_RequestCompleteGpuInfo_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    GpuService_RequestCompleteGpuInfo_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<GpuService_RequestCompleteGpuInfo_ResponseParams_Data>(index_);
    }
    GpuService_RequestCompleteGpuInfo_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::gpu::mojom::internal::GpuInfo_Data> gpu_info;

 private:
  GpuService_RequestCompleteGpuInfo_ResponseParams_Data();
  ~GpuService_RequestCompleteGpuInfo_ResponseParams_Data() = delete;
};
static_assert(sizeof(GpuService_RequestCompleteGpuInfo_ResponseParams_Data) == 16,
              "Bad sizeof(GpuService_RequestCompleteGpuInfo_ResponseParams_Data)");
class  GpuService_GetGpuSupportedRuntimeVersion_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(GpuService_GetGpuSupportedRuntimeVersion_Params_Data));
      new (data()) GpuService_GetGpuSupportedRuntimeVersion_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    GpuService_GetGpuSupportedRuntimeVersion_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<GpuService_GetGpuSupportedRuntimeVersion_Params_Data>(index_);
    }
    GpuService_GetGpuSupportedRuntimeVersion_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  GpuService_GetGpuSupportedRuntimeVersion_Params_Data();
  ~GpuService_GetGpuSupportedRuntimeVersion_Params_Data() = delete;
};
static_assert(sizeof(GpuService_GetGpuSupportedRuntimeVersion_Params_Data) == 8,
              "Bad sizeof(GpuService_GetGpuSupportedRuntimeVersion_Params_Data)");
class  GpuService_GetGpuSupportedRuntimeVersion_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(GpuService_GetGpuSupportedRuntimeVersion_ResponseParams_Data));
      new (data()) GpuService_GetGpuSupportedRuntimeVersion_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    GpuService_GetGpuSupportedRuntimeVersion_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<GpuService_GetGpuSupportedRuntimeVersion_ResponseParams_Data>(index_);
    }
    GpuService_GetGpuSupportedRuntimeVersion_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::gpu::mojom::internal::GpuInfo_Data> gpu_info;

 private:
  GpuService_GetGpuSupportedRuntimeVersion_ResponseParams_Data();
  ~GpuService_GetGpuSupportedRuntimeVersion_ResponseParams_Data() = delete;
};
static_assert(sizeof(GpuService_GetGpuSupportedRuntimeVersion_ResponseParams_Data) == 16,
              "Bad sizeof(GpuService_GetGpuSupportedRuntimeVersion_ResponseParams_Data)");
class  GpuService_RequestHDRStatus_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(GpuService_RequestHDRStatus_Params_Data));
      new (data()) GpuService_RequestHDRStatus_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    GpuService_RequestHDRStatus_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<GpuService_RequestHDRStatus_Params_Data>(index_);
    }
    GpuService_RequestHDRStatus_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  GpuService_RequestHDRStatus_Params_Data();
  ~GpuService_RequestHDRStatus_Params_Data() = delete;
};
static_assert(sizeof(GpuService_RequestHDRStatus_Params_Data) == 8,
              "Bad sizeof(GpuService_RequestHDRStatus_Params_Data)");
class  GpuService_RequestHDRStatus_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(GpuService_RequestHDRStatus_ResponseParams_Data));
      new (data()) GpuService_RequestHDRStatus_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    GpuService_RequestHDRStatus_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<GpuService_RequestHDRStatus_ResponseParams_Data>(index_);
    }
    GpuService_RequestHDRStatus_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t hdr_enabled : 1;
  uint8_t padfinal_[7];

 private:
  GpuService_RequestHDRStatus_ResponseParams_Data();
  ~GpuService_RequestHDRStatus_ResponseParams_Data() = delete;
};
static_assert(sizeof(GpuService_RequestHDRStatus_ResponseParams_Data) == 16,
              "Bad sizeof(GpuService_RequestHDRStatus_ResponseParams_Data)");
class  GpuService_LoadedShader_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(GpuService_LoadedShader_Params_Data));
      new (data()) GpuService_LoadedShader_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    GpuService_LoadedShader_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<GpuService_LoadedShader_Params_Data>(index_);
    }
    GpuService_LoadedShader_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> key;
  mojo::internal::Pointer<mojo::internal::String_Data> data;

 private:
  GpuService_LoadedShader_Params_Data();
  ~GpuService_LoadedShader_Params_Data() = delete;
};
static_assert(sizeof(GpuService_LoadedShader_Params_Data) == 24,
              "Bad sizeof(GpuService_LoadedShader_Params_Data)");
class  GpuService_DestroyingVideoSurface_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(GpuService_DestroyingVideoSurface_Params_Data));
      new (data()) GpuService_DestroyingVideoSurface_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    GpuService_DestroyingVideoSurface_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<GpuService_DestroyingVideoSurface_Params_Data>(index_);
    }
    GpuService_DestroyingVideoSurface_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t surface_id;
  uint8_t padfinal_[4];

 private:
  GpuService_DestroyingVideoSurface_Params_Data();
  ~GpuService_DestroyingVideoSurface_Params_Data() = delete;
};
static_assert(sizeof(GpuService_DestroyingVideoSurface_Params_Data) == 16,
              "Bad sizeof(GpuService_DestroyingVideoSurface_Params_Data)");
class  GpuService_DestroyingVideoSurface_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(GpuService_DestroyingVideoSurface_ResponseParams_Data));
      new (data()) GpuService_DestroyingVideoSurface_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    GpuService_DestroyingVideoSurface_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<GpuService_DestroyingVideoSurface_ResponseParams_Data>(index_);
    }
    GpuService_DestroyingVideoSurface_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  GpuService_DestroyingVideoSurface_ResponseParams_Data();
  ~GpuService_DestroyingVideoSurface_ResponseParams_Data() = delete;
};
static_assert(sizeof(GpuService_DestroyingVideoSurface_ResponseParams_Data) == 8,
              "Bad sizeof(GpuService_DestroyingVideoSurface_ResponseParams_Data)");
class  GpuService_WakeUpGpu_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(GpuService_WakeUpGpu_Params_Data));
      new (data()) GpuService_WakeUpGpu_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    GpuService_WakeUpGpu_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<GpuService_WakeUpGpu_Params_Data>(index_);
    }
    GpuService_WakeUpGpu_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  GpuService_WakeUpGpu_Params_Data();
  ~GpuService_WakeUpGpu_Params_Data() = delete;
};
static_assert(sizeof(GpuService_WakeUpGpu_Params_Data) == 8,
              "Bad sizeof(GpuService_WakeUpGpu_Params_Data)");
class  GpuService_GpuSwitched_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(GpuService_GpuSwitched_Params_Data));
      new (data()) GpuService_GpuSwitched_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    GpuService_GpuSwitched_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<GpuService_GpuSwitched_Params_Data>(index_);
    }
    GpuService_GpuSwitched_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  GpuService_GpuSwitched_Params_Data();
  ~GpuService_GpuSwitched_Params_Data() = delete;
};
static_assert(sizeof(GpuService_GpuSwitched_Params_Data) == 8,
              "Bad sizeof(GpuService_GpuSwitched_Params_Data)");
class  GpuService_DestroyAllChannels_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(GpuService_DestroyAllChannels_Params_Data));
      new (data()) GpuService_DestroyAllChannels_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    GpuService_DestroyAllChannels_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<GpuService_DestroyAllChannels_Params_Data>(index_);
    }
    GpuService_DestroyAllChannels_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  GpuService_DestroyAllChannels_Params_Data();
  ~GpuService_DestroyAllChannels_Params_Data() = delete;
};
static_assert(sizeof(GpuService_DestroyAllChannels_Params_Data) == 8,
              "Bad sizeof(GpuService_DestroyAllChannels_Params_Data)");
class  GpuService_OnBackgroundCleanup_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(GpuService_OnBackgroundCleanup_Params_Data));
      new (data()) GpuService_OnBackgroundCleanup_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    GpuService_OnBackgroundCleanup_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<GpuService_OnBackgroundCleanup_Params_Data>(index_);
    }
    GpuService_OnBackgroundCleanup_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  GpuService_OnBackgroundCleanup_Params_Data();
  ~GpuService_OnBackgroundCleanup_Params_Data() = delete;
};
static_assert(sizeof(GpuService_OnBackgroundCleanup_Params_Data) == 8,
              "Bad sizeof(GpuService_OnBackgroundCleanup_Params_Data)");
class  GpuService_OnBackgrounded_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(GpuService_OnBackgrounded_Params_Data));
      new (data()) GpuService_OnBackgrounded_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    GpuService_OnBackgrounded_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<GpuService_OnBackgrounded_Params_Data>(index_);
    }
    GpuService_OnBackgrounded_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  GpuService_OnBackgrounded_Params_Data();
  ~GpuService_OnBackgrounded_Params_Data() = delete;
};
static_assert(sizeof(GpuService_OnBackgrounded_Params_Data) == 8,
              "Bad sizeof(GpuService_OnBackgrounded_Params_Data)");
class  GpuService_OnForegrounded_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(GpuService_OnForegrounded_Params_Data));
      new (data()) GpuService_OnForegrounded_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    GpuService_OnForegrounded_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<GpuService_OnForegrounded_Params_Data>(index_);
    }
    GpuService_OnForegrounded_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  GpuService_OnForegrounded_Params_Data();
  ~GpuService_OnForegrounded_Params_Data() = delete;
};
static_assert(sizeof(GpuService_OnForegrounded_Params_Data) == 8,
              "Bad sizeof(GpuService_OnForegrounded_Params_Data)");
class  GpuService_Crash_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(GpuService_Crash_Params_Data));
      new (data()) GpuService_Crash_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    GpuService_Crash_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<GpuService_Crash_Params_Data>(index_);
    }
    GpuService_Crash_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  GpuService_Crash_Params_Data();
  ~GpuService_Crash_Params_Data() = delete;
};
static_assert(sizeof(GpuService_Crash_Params_Data) == 8,
              "Bad sizeof(GpuService_Crash_Params_Data)");
class  GpuService_Hang_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(GpuService_Hang_Params_Data));
      new (data()) GpuService_Hang_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    GpuService_Hang_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<GpuService_Hang_Params_Data>(index_);
    }
    GpuService_Hang_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  GpuService_Hang_Params_Data();
  ~GpuService_Hang_Params_Data() = delete;
};
static_assert(sizeof(GpuService_Hang_Params_Data) == 8,
              "Bad sizeof(GpuService_Hang_Params_Data)");
class  GpuService_ThrowJavaException_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(GpuService_ThrowJavaException_Params_Data));
      new (data()) GpuService_ThrowJavaException_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    GpuService_ThrowJavaException_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<GpuService_ThrowJavaException_Params_Data>(index_);
    }
    GpuService_ThrowJavaException_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  GpuService_ThrowJavaException_Params_Data();
  ~GpuService_ThrowJavaException_Params_Data() = delete;
};
static_assert(sizeof(GpuService_ThrowJavaException_Params_Data) == 8,
              "Bad sizeof(GpuService_ThrowJavaException_Params_Data)");
class  GpuService_Stop_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(GpuService_Stop_Params_Data));
      new (data()) GpuService_Stop_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    GpuService_Stop_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<GpuService_Stop_Params_Data>(index_);
    }
    GpuService_Stop_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  GpuService_Stop_Params_Data();
  ~GpuService_Stop_Params_Data() = delete;
};
static_assert(sizeof(GpuService_Stop_Params_Data) == 8,
              "Bad sizeof(GpuService_Stop_Params_Data)");
class  GpuService_Stop_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(GpuService_Stop_ResponseParams_Data));
      new (data()) GpuService_Stop_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    GpuService_Stop_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<GpuService_Stop_ResponseParams_Data>(index_);
    }
    GpuService_Stop_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  GpuService_Stop_ResponseParams_Data();
  ~GpuService_Stop_ResponseParams_Data() = delete;
};
static_assert(sizeof(GpuService_Stop_ResponseParams_Data) == 8,
              "Bad sizeof(GpuService_Stop_ResponseParams_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace viz

#endif  // SERVICES_VIZ_PRIVILEGED_INTERFACES_GL_GPU_SERVICE_MOJOM_SHARED_INTERNAL_H_