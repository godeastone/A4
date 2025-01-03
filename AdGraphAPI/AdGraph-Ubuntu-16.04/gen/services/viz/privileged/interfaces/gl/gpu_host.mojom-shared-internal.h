// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_VIZ_PRIVILEGED_INTERFACES_GL_GPU_HOST_MOJOM_SHARED_INTERNAL_H_
#define SERVICES_VIZ_PRIVILEGED_INTERFACES_GL_GPU_HOST_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "gpu/ipc/common/gpu_feature_info.mojom-shared-internal.h"
#include "gpu/ipc/common/gpu_info.mojom-shared-internal.h"
#include "gpu/ipc/common/surface_handle.mojom-shared-internal.h"
#include "services/viz/privileged/interfaces/gl/context_lost_reason.mojom-shared-internal.h"
#include "url/mojom/url.mojom-shared-internal.h"
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
class  GpuHost_DidInitialize_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(GpuHost_DidInitialize_Params_Data));
      new (data()) GpuHost_DidInitialize_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    GpuHost_DidInitialize_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<GpuHost_DidInitialize_Params_Data>(index_);
    }
    GpuHost_DidInitialize_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::gpu::mojom::internal::GpuInfo_Data> gpu_info;
  mojo::internal::Pointer<::gpu::mojom::internal::GpuFeatureInfo_Data> gpu_feature_info;
  mojo::internal::Pointer<::gpu::mojom::internal::GpuInfo_Data> gpu_info_for_hardware_gpu;
  mojo::internal::Pointer<::gpu::mojom::internal::GpuFeatureInfo_Data> gpu_feature_info_for_hardware_gpu;

 private:
  GpuHost_DidInitialize_Params_Data();
  ~GpuHost_DidInitialize_Params_Data() = delete;
};
static_assert(sizeof(GpuHost_DidInitialize_Params_Data) == 40,
              "Bad sizeof(GpuHost_DidInitialize_Params_Data)");
class  GpuHost_DidFailInitialize_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(GpuHost_DidFailInitialize_Params_Data));
      new (data()) GpuHost_DidFailInitialize_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    GpuHost_DidFailInitialize_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<GpuHost_DidFailInitialize_Params_Data>(index_);
    }
    GpuHost_DidFailInitialize_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  GpuHost_DidFailInitialize_Params_Data();
  ~GpuHost_DidFailInitialize_Params_Data() = delete;
};
static_assert(sizeof(GpuHost_DidFailInitialize_Params_Data) == 8,
              "Bad sizeof(GpuHost_DidFailInitialize_Params_Data)");
class  GpuHost_DidCreateContextSuccessfully_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(GpuHost_DidCreateContextSuccessfully_Params_Data));
      new (data()) GpuHost_DidCreateContextSuccessfully_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    GpuHost_DidCreateContextSuccessfully_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<GpuHost_DidCreateContextSuccessfully_Params_Data>(index_);
    }
    GpuHost_DidCreateContextSuccessfully_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  GpuHost_DidCreateContextSuccessfully_Params_Data();
  ~GpuHost_DidCreateContextSuccessfully_Params_Data() = delete;
};
static_assert(sizeof(GpuHost_DidCreateContextSuccessfully_Params_Data) == 8,
              "Bad sizeof(GpuHost_DidCreateContextSuccessfully_Params_Data)");
class  GpuHost_DidCreateOffscreenContext_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(GpuHost_DidCreateOffscreenContext_Params_Data));
      new (data()) GpuHost_DidCreateOffscreenContext_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    GpuHost_DidCreateOffscreenContext_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<GpuHost_DidCreateOffscreenContext_Params_Data>(index_);
    }
    GpuHost_DidCreateOffscreenContext_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> url;

 private:
  GpuHost_DidCreateOffscreenContext_Params_Data();
  ~GpuHost_DidCreateOffscreenContext_Params_Data() = delete;
};
static_assert(sizeof(GpuHost_DidCreateOffscreenContext_Params_Data) == 16,
              "Bad sizeof(GpuHost_DidCreateOffscreenContext_Params_Data)");
class  GpuHost_DidDestroyOffscreenContext_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(GpuHost_DidDestroyOffscreenContext_Params_Data));
      new (data()) GpuHost_DidDestroyOffscreenContext_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    GpuHost_DidDestroyOffscreenContext_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<GpuHost_DidDestroyOffscreenContext_Params_Data>(index_);
    }
    GpuHost_DidDestroyOffscreenContext_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> url;

 private:
  GpuHost_DidDestroyOffscreenContext_Params_Data();
  ~GpuHost_DidDestroyOffscreenContext_Params_Data() = delete;
};
static_assert(sizeof(GpuHost_DidDestroyOffscreenContext_Params_Data) == 16,
              "Bad sizeof(GpuHost_DidDestroyOffscreenContext_Params_Data)");
class  GpuHost_DidDestroyChannel_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(GpuHost_DidDestroyChannel_Params_Data));
      new (data()) GpuHost_DidDestroyChannel_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    GpuHost_DidDestroyChannel_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<GpuHost_DidDestroyChannel_Params_Data>(index_);
    }
    GpuHost_DidDestroyChannel_Params_Data* operator->() { return data(); }

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
  GpuHost_DidDestroyChannel_Params_Data();
  ~GpuHost_DidDestroyChannel_Params_Data() = delete;
};
static_assert(sizeof(GpuHost_DidDestroyChannel_Params_Data) == 16,
              "Bad sizeof(GpuHost_DidDestroyChannel_Params_Data)");
class  GpuHost_DidLoseContext_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(GpuHost_DidLoseContext_Params_Data));
      new (data()) GpuHost_DidLoseContext_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    GpuHost_DidLoseContext_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<GpuHost_DidLoseContext_Params_Data>(index_);
    }
    GpuHost_DidLoseContext_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t offscreen : 1;
  uint8_t pad0_[3];
  int32_t reason;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> active_url;

 private:
  GpuHost_DidLoseContext_Params_Data();
  ~GpuHost_DidLoseContext_Params_Data() = delete;
};
static_assert(sizeof(GpuHost_DidLoseContext_Params_Data) == 24,
              "Bad sizeof(GpuHost_DidLoseContext_Params_Data)");
class  GpuHost_SetChildSurface_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(GpuHost_SetChildSurface_Params_Data));
      new (data()) GpuHost_SetChildSurface_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    GpuHost_SetChildSurface_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<GpuHost_SetChildSurface_Params_Data>(index_);
    }
    GpuHost_SetChildSurface_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::gpu::mojom::internal::SurfaceHandle_Data> parent;
  mojo::internal::Pointer<::gpu::mojom::internal::SurfaceHandle_Data> child;

 private:
  GpuHost_SetChildSurface_Params_Data();
  ~GpuHost_SetChildSurface_Params_Data() = delete;
};
static_assert(sizeof(GpuHost_SetChildSurface_Params_Data) == 24,
              "Bad sizeof(GpuHost_SetChildSurface_Params_Data)");
class  GpuHost_StoreShaderToDisk_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(GpuHost_StoreShaderToDisk_Params_Data));
      new (data()) GpuHost_StoreShaderToDisk_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    GpuHost_StoreShaderToDisk_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<GpuHost_StoreShaderToDisk_Params_Data>(index_);
    }
    GpuHost_StoreShaderToDisk_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t client_id;
  uint8_t pad0_[4];
  mojo::internal::Pointer<mojo::internal::String_Data> key;
  mojo::internal::Pointer<mojo::internal::String_Data> shader;

 private:
  GpuHost_StoreShaderToDisk_Params_Data();
  ~GpuHost_StoreShaderToDisk_Params_Data() = delete;
};
static_assert(sizeof(GpuHost_StoreShaderToDisk_Params_Data) == 32,
              "Bad sizeof(GpuHost_StoreShaderToDisk_Params_Data)");
class  GpuHost_RecordLogMessage_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(GpuHost_RecordLogMessage_Params_Data));
      new (data()) GpuHost_RecordLogMessage_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    GpuHost_RecordLogMessage_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<GpuHost_RecordLogMessage_Params_Data>(index_);
    }
    GpuHost_RecordLogMessage_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t severity;
  uint8_t pad0_[4];
  mojo::internal::Pointer<mojo::internal::String_Data> header;
  mojo::internal::Pointer<mojo::internal::String_Data> message;

 private:
  GpuHost_RecordLogMessage_Params_Data();
  ~GpuHost_RecordLogMessage_Params_Data() = delete;
};
static_assert(sizeof(GpuHost_RecordLogMessage_Params_Data) == 32,
              "Bad sizeof(GpuHost_RecordLogMessage_Params_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace viz

#endif  // SERVICES_VIZ_PRIVILEGED_INTERFACES_GL_GPU_HOST_MOJOM_SHARED_INTERNAL_H_