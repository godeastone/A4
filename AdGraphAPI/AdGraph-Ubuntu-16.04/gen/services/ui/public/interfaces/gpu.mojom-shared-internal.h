// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_UI_PUBLIC_INTERFACES_GPU_MOJOM_SHARED_INTERNAL_H_
#define SERVICES_UI_PUBLIC_INTERFACES_GPU_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "gpu/ipc/common/gpu_feature_info.mojom-shared-internal.h"
#include "gpu/ipc/common/gpu_info.mojom-shared-internal.h"
#include "gpu/ipc/common/sync_token.mojom-shared-internal.h"
#include "media/mojo/interfaces/jpeg_decode_accelerator.mojom-shared-internal.h"
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
namespace ui {
namespace mojom {
namespace internal {

#pragma pack(push, 1)
class  Gpu_EstablishGpuChannel_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Gpu_EstablishGpuChannel_Params_Data));
      new (data()) Gpu_EstablishGpuChannel_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Gpu_EstablishGpuChannel_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Gpu_EstablishGpuChannel_Params_Data>(index_);
    }
    Gpu_EstablishGpuChannel_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  Gpu_EstablishGpuChannel_Params_Data();
  ~Gpu_EstablishGpuChannel_Params_Data() = delete;
};
static_assert(sizeof(Gpu_EstablishGpuChannel_Params_Data) == 8,
              "Bad sizeof(Gpu_EstablishGpuChannel_Params_Data)");
class  Gpu_EstablishGpuChannel_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Gpu_EstablishGpuChannel_ResponseParams_Data));
      new (data()) Gpu_EstablishGpuChannel_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Gpu_EstablishGpuChannel_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Gpu_EstablishGpuChannel_ResponseParams_Data>(index_);
    }
    Gpu_EstablishGpuChannel_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t client_id;
  mojo::internal::Handle_Data channel_handle;
  mojo::internal::Pointer<::gpu::mojom::internal::GpuInfo_Data> gpu_info;
  mojo::internal::Pointer<::gpu::mojom::internal::GpuFeatureInfo_Data> gpu_feature_info;

 private:
  Gpu_EstablishGpuChannel_ResponseParams_Data();
  ~Gpu_EstablishGpuChannel_ResponseParams_Data() = delete;
};
static_assert(sizeof(Gpu_EstablishGpuChannel_ResponseParams_Data) == 32,
              "Bad sizeof(Gpu_EstablishGpuChannel_ResponseParams_Data)");
class  Gpu_CreateJpegDecodeAccelerator_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Gpu_CreateJpegDecodeAccelerator_Params_Data));
      new (data()) Gpu_CreateJpegDecodeAccelerator_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Gpu_CreateJpegDecodeAccelerator_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Gpu_CreateJpegDecodeAccelerator_Params_Data>(index_);
    }
    Gpu_CreateJpegDecodeAccelerator_Params_Data* operator->() { return data(); }

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
  Gpu_CreateJpegDecodeAccelerator_Params_Data();
  ~Gpu_CreateJpegDecodeAccelerator_Params_Data() = delete;
};
static_assert(sizeof(Gpu_CreateJpegDecodeAccelerator_Params_Data) == 16,
              "Bad sizeof(Gpu_CreateJpegDecodeAccelerator_Params_Data)");
class  Gpu_CreateVideoEncodeAcceleratorProvider_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Gpu_CreateVideoEncodeAcceleratorProvider_Params_Data));
      new (data()) Gpu_CreateVideoEncodeAcceleratorProvider_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Gpu_CreateVideoEncodeAcceleratorProvider_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Gpu_CreateVideoEncodeAcceleratorProvider_Params_Data>(index_);
    }
    Gpu_CreateVideoEncodeAcceleratorProvider_Params_Data* operator->() { return data(); }

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
  Gpu_CreateVideoEncodeAcceleratorProvider_Params_Data();
  ~Gpu_CreateVideoEncodeAcceleratorProvider_Params_Data() = delete;
};
static_assert(sizeof(Gpu_CreateVideoEncodeAcceleratorProvider_Params_Data) == 16,
              "Bad sizeof(Gpu_CreateVideoEncodeAcceleratorProvider_Params_Data)");
class  Gpu_CreateGpuMemoryBuffer_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Gpu_CreateGpuMemoryBuffer_Params_Data));
      new (data()) Gpu_CreateGpuMemoryBuffer_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Gpu_CreateGpuMemoryBuffer_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Gpu_CreateGpuMemoryBuffer_Params_Data>(index_);
    }
    Gpu_CreateGpuMemoryBuffer_Params_Data* operator->() { return data(); }

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

 private:
  Gpu_CreateGpuMemoryBuffer_Params_Data();
  ~Gpu_CreateGpuMemoryBuffer_Params_Data() = delete;
};
static_assert(sizeof(Gpu_CreateGpuMemoryBuffer_Params_Data) == 32,
              "Bad sizeof(Gpu_CreateGpuMemoryBuffer_Params_Data)");
class  Gpu_CreateGpuMemoryBuffer_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Gpu_CreateGpuMemoryBuffer_ResponseParams_Data));
      new (data()) Gpu_CreateGpuMemoryBuffer_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Gpu_CreateGpuMemoryBuffer_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Gpu_CreateGpuMemoryBuffer_ResponseParams_Data>(index_);
    }
    Gpu_CreateGpuMemoryBuffer_ResponseParams_Data* operator->() { return data(); }

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
  Gpu_CreateGpuMemoryBuffer_ResponseParams_Data();
  ~Gpu_CreateGpuMemoryBuffer_ResponseParams_Data() = delete;
};
static_assert(sizeof(Gpu_CreateGpuMemoryBuffer_ResponseParams_Data) == 16,
              "Bad sizeof(Gpu_CreateGpuMemoryBuffer_ResponseParams_Data)");
class  Gpu_DestroyGpuMemoryBuffer_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Gpu_DestroyGpuMemoryBuffer_Params_Data));
      new (data()) Gpu_DestroyGpuMemoryBuffer_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Gpu_DestroyGpuMemoryBuffer_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Gpu_DestroyGpuMemoryBuffer_Params_Data>(index_);
    }
    Gpu_DestroyGpuMemoryBuffer_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::gfx::mojom::internal::GpuMemoryBufferId_Data> id;
  mojo::internal::Pointer<::gpu::mojom::internal::SyncToken_Data> sync_token;

 private:
  Gpu_DestroyGpuMemoryBuffer_Params_Data();
  ~Gpu_DestroyGpuMemoryBuffer_Params_Data() = delete;
};
static_assert(sizeof(Gpu_DestroyGpuMemoryBuffer_Params_Data) == 24,
              "Bad sizeof(Gpu_DestroyGpuMemoryBuffer_Params_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace ui

#endif  // SERVICES_UI_PUBLIC_INTERFACES_GPU_MOJOM_SHARED_INTERNAL_H_