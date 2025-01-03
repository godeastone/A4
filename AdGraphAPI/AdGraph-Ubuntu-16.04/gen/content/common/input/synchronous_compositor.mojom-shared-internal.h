// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_INPUT_SYNCHRONOUS_COMPOSITOR_MOJOM_SHARED_INTERNAL_H_
#define CONTENT_COMMON_INPUT_SYNCHRONOUS_COMPOSITOR_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "mojo/public/mojom/base/time.mojom-shared-internal.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-shared-internal.h"
#include "services/viz/public/interfaces/compositing/begin_frame_args.mojom-shared-internal.h"
#include "services/viz/public/interfaces/compositing/compositor_frame.mojom-shared-internal.h"
#include "services/viz/public/interfaces/compositing/compositor_frame_metadata.mojom-shared-internal.h"
#include "services/viz/public/interfaces/compositing/returned_resource.mojom-shared-internal.h"
#include "mojo/public/cpp/bindings/lib/native_enum_data.h"
#include "mojo/public/interfaces/bindings/native_struct.mojom-shared-internal.h"
#include "base/component_export.h"

namespace mojo {
namespace internal {
class ValidationContext;
}
}
namespace content {
namespace mojom {
namespace internal {
using SyncCompositorDemandDrawHwParams_Data = mojo::native::internal::NativeStruct_Data;
using SyncCompositorSetSharedMemoryParams_Data = mojo::native::internal::NativeStruct_Data;
using SyncCompositorDemandDrawSwParams_Data = mojo::native::internal::NativeStruct_Data;
using SyncCompositorCommonRendererParams_Data = mojo::native::internal::NativeStruct_Data;

#pragma pack(push, 1)
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) SynchronousCompositor_ComputeScroll_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SynchronousCompositor_ComputeScroll_Params_Data));
      new (data()) SynchronousCompositor_ComputeScroll_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SynchronousCompositor_ComputeScroll_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SynchronousCompositor_ComputeScroll_Params_Data>(index_);
    }
    SynchronousCompositor_ComputeScroll_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::TimeTicks_Data> time;

 private:
  SynchronousCompositor_ComputeScroll_Params_Data();
  ~SynchronousCompositor_ComputeScroll_Params_Data() = delete;
};
static_assert(sizeof(SynchronousCompositor_ComputeScroll_Params_Data) == 16,
              "Bad sizeof(SynchronousCompositor_ComputeScroll_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) SynchronousCompositor_DemandDrawHwAsync_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SynchronousCompositor_DemandDrawHwAsync_Params_Data));
      new (data()) SynchronousCompositor_DemandDrawHwAsync_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SynchronousCompositor_DemandDrawHwAsync_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SynchronousCompositor_DemandDrawHwAsync_Params_Data>(index_);
    }
    SynchronousCompositor_DemandDrawHwAsync_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::SyncCompositorDemandDrawHwParams_Data> draw_params;

 private:
  SynchronousCompositor_DemandDrawHwAsync_Params_Data();
  ~SynchronousCompositor_DemandDrawHwAsync_Params_Data() = delete;
};
static_assert(sizeof(SynchronousCompositor_DemandDrawHwAsync_Params_Data) == 16,
              "Bad sizeof(SynchronousCompositor_DemandDrawHwAsync_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) SynchronousCompositor_DemandDrawHw_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SynchronousCompositor_DemandDrawHw_Params_Data));
      new (data()) SynchronousCompositor_DemandDrawHw_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SynchronousCompositor_DemandDrawHw_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SynchronousCompositor_DemandDrawHw_Params_Data>(index_);
    }
    SynchronousCompositor_DemandDrawHw_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::SyncCompositorDemandDrawHwParams_Data> draw_params;

 private:
  SynchronousCompositor_DemandDrawHw_Params_Data();
  ~SynchronousCompositor_DemandDrawHw_Params_Data() = delete;
};
static_assert(sizeof(SynchronousCompositor_DemandDrawHw_Params_Data) == 16,
              "Bad sizeof(SynchronousCompositor_DemandDrawHw_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) SynchronousCompositor_DemandDrawHw_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SynchronousCompositor_DemandDrawHw_ResponseParams_Data));
      new (data()) SynchronousCompositor_DemandDrawHw_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SynchronousCompositor_DemandDrawHw_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SynchronousCompositor_DemandDrawHw_ResponseParams_Data>(index_);
    }
    SynchronousCompositor_DemandDrawHw_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::SyncCompositorCommonRendererParams_Data> result;
  uint32_t layer_tree_frame_sink_id;
  uint32_t metadata_version;
  mojo::internal::Pointer<::viz::mojom::internal::CompositorFrame_Data> frame;

 private:
  SynchronousCompositor_DemandDrawHw_ResponseParams_Data();
  ~SynchronousCompositor_DemandDrawHw_ResponseParams_Data() = delete;
};
static_assert(sizeof(SynchronousCompositor_DemandDrawHw_ResponseParams_Data) == 32,
              "Bad sizeof(SynchronousCompositor_DemandDrawHw_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) SynchronousCompositor_SetSharedMemory_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SynchronousCompositor_SetSharedMemory_Params_Data));
      new (data()) SynchronousCompositor_SetSharedMemory_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SynchronousCompositor_SetSharedMemory_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SynchronousCompositor_SetSharedMemory_Params_Data>(index_);
    }
    SynchronousCompositor_SetSharedMemory_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::SyncCompositorSetSharedMemoryParams_Data> params;

 private:
  SynchronousCompositor_SetSharedMemory_Params_Data();
  ~SynchronousCompositor_SetSharedMemory_Params_Data() = delete;
};
static_assert(sizeof(SynchronousCompositor_SetSharedMemory_Params_Data) == 16,
              "Bad sizeof(SynchronousCompositor_SetSharedMemory_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) SynchronousCompositor_SetSharedMemory_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SynchronousCompositor_SetSharedMemory_ResponseParams_Data));
      new (data()) SynchronousCompositor_SetSharedMemory_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SynchronousCompositor_SetSharedMemory_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SynchronousCompositor_SetSharedMemory_ResponseParams_Data>(index_);
    }
    SynchronousCompositor_SetSharedMemory_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t success : 1;
  uint8_t pad0_[7];
  mojo::internal::Pointer<internal::SyncCompositorCommonRendererParams_Data> result;

 private:
  SynchronousCompositor_SetSharedMemory_ResponseParams_Data();
  ~SynchronousCompositor_SetSharedMemory_ResponseParams_Data() = delete;
};
static_assert(sizeof(SynchronousCompositor_SetSharedMemory_ResponseParams_Data) == 24,
              "Bad sizeof(SynchronousCompositor_SetSharedMemory_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) SynchronousCompositor_DemandDrawSw_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SynchronousCompositor_DemandDrawSw_Params_Data));
      new (data()) SynchronousCompositor_DemandDrawSw_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SynchronousCompositor_DemandDrawSw_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SynchronousCompositor_DemandDrawSw_Params_Data>(index_);
    }
    SynchronousCompositor_DemandDrawSw_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::SyncCompositorDemandDrawSwParams_Data> draw_params;

 private:
  SynchronousCompositor_DemandDrawSw_Params_Data();
  ~SynchronousCompositor_DemandDrawSw_Params_Data() = delete;
};
static_assert(sizeof(SynchronousCompositor_DemandDrawSw_Params_Data) == 16,
              "Bad sizeof(SynchronousCompositor_DemandDrawSw_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) SynchronousCompositor_DemandDrawSw_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SynchronousCompositor_DemandDrawSw_ResponseParams_Data));
      new (data()) SynchronousCompositor_DemandDrawSw_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SynchronousCompositor_DemandDrawSw_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SynchronousCompositor_DemandDrawSw_ResponseParams_Data>(index_);
    }
    SynchronousCompositor_DemandDrawSw_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::SyncCompositorCommonRendererParams_Data> result;
  uint32_t metadata_version;
  uint8_t pad1_[4];
  mojo::internal::Pointer<::viz::mojom::internal::CompositorFrameMetadata_Data> meta_data;

 private:
  SynchronousCompositor_DemandDrawSw_ResponseParams_Data();
  ~SynchronousCompositor_DemandDrawSw_ResponseParams_Data() = delete;
};
static_assert(sizeof(SynchronousCompositor_DemandDrawSw_ResponseParams_Data) == 32,
              "Bad sizeof(SynchronousCompositor_DemandDrawSw_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) SynchronousCompositor_ZeroSharedMemory_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SynchronousCompositor_ZeroSharedMemory_Params_Data));
      new (data()) SynchronousCompositor_ZeroSharedMemory_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SynchronousCompositor_ZeroSharedMemory_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SynchronousCompositor_ZeroSharedMemory_Params_Data>(index_);
    }
    SynchronousCompositor_ZeroSharedMemory_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  SynchronousCompositor_ZeroSharedMemory_Params_Data();
  ~SynchronousCompositor_ZeroSharedMemory_Params_Data() = delete;
};
static_assert(sizeof(SynchronousCompositor_ZeroSharedMemory_Params_Data) == 8,
              "Bad sizeof(SynchronousCompositor_ZeroSharedMemory_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) SynchronousCompositor_ZoomBy_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SynchronousCompositor_ZoomBy_Params_Data));
      new (data()) SynchronousCompositor_ZoomBy_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SynchronousCompositor_ZoomBy_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SynchronousCompositor_ZoomBy_Params_Data>(index_);
    }
    SynchronousCompositor_ZoomBy_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  float delta;
  uint8_t pad0_[4];
  mojo::internal::Pointer<::gfx::mojom::internal::Point_Data> anchor;

 private:
  SynchronousCompositor_ZoomBy_Params_Data();
  ~SynchronousCompositor_ZoomBy_Params_Data() = delete;
};
static_assert(sizeof(SynchronousCompositor_ZoomBy_Params_Data) == 24,
              "Bad sizeof(SynchronousCompositor_ZoomBy_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) SynchronousCompositor_ZoomBy_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SynchronousCompositor_ZoomBy_ResponseParams_Data));
      new (data()) SynchronousCompositor_ZoomBy_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SynchronousCompositor_ZoomBy_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SynchronousCompositor_ZoomBy_ResponseParams_Data>(index_);
    }
    SynchronousCompositor_ZoomBy_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::SyncCompositorCommonRendererParams_Data> result;

 private:
  SynchronousCompositor_ZoomBy_ResponseParams_Data();
  ~SynchronousCompositor_ZoomBy_ResponseParams_Data() = delete;
};
static_assert(sizeof(SynchronousCompositor_ZoomBy_ResponseParams_Data) == 16,
              "Bad sizeof(SynchronousCompositor_ZoomBy_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) SynchronousCompositor_SetMemoryPolicy_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SynchronousCompositor_SetMemoryPolicy_Params_Data));
      new (data()) SynchronousCompositor_SetMemoryPolicy_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SynchronousCompositor_SetMemoryPolicy_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SynchronousCompositor_SetMemoryPolicy_Params_Data>(index_);
    }
    SynchronousCompositor_SetMemoryPolicy_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t bytes_limit;
  uint8_t padfinal_[4];

 private:
  SynchronousCompositor_SetMemoryPolicy_Params_Data();
  ~SynchronousCompositor_SetMemoryPolicy_Params_Data() = delete;
};
static_assert(sizeof(SynchronousCompositor_SetMemoryPolicy_Params_Data) == 16,
              "Bad sizeof(SynchronousCompositor_SetMemoryPolicy_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) SynchronousCompositor_ReclaimResources_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SynchronousCompositor_ReclaimResources_Params_Data));
      new (data()) SynchronousCompositor_ReclaimResources_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SynchronousCompositor_ReclaimResources_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SynchronousCompositor_ReclaimResources_Params_Data>(index_);
    }
    SynchronousCompositor_ReclaimResources_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t layer_tree_frame_sink_id;
  uint8_t pad0_[4];
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<::viz::mojom::internal::ReturnedResource_Data>>> resources;

 private:
  SynchronousCompositor_ReclaimResources_Params_Data();
  ~SynchronousCompositor_ReclaimResources_Params_Data() = delete;
};
static_assert(sizeof(SynchronousCompositor_ReclaimResources_Params_Data) == 24,
              "Bad sizeof(SynchronousCompositor_ReclaimResources_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) SynchronousCompositor_SetScroll_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SynchronousCompositor_SetScroll_Params_Data));
      new (data()) SynchronousCompositor_SetScroll_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SynchronousCompositor_SetScroll_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SynchronousCompositor_SetScroll_Params_Data>(index_);
    }
    SynchronousCompositor_SetScroll_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::gfx::mojom::internal::ScrollOffset_Data> offset;

 private:
  SynchronousCompositor_SetScroll_Params_Data();
  ~SynchronousCompositor_SetScroll_Params_Data() = delete;
};
static_assert(sizeof(SynchronousCompositor_SetScroll_Params_Data) == 16,
              "Bad sizeof(SynchronousCompositor_SetScroll_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) SynchronousCompositor_BeginFrame_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SynchronousCompositor_BeginFrame_Params_Data));
      new (data()) SynchronousCompositor_BeginFrame_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SynchronousCompositor_BeginFrame_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SynchronousCompositor_BeginFrame_Params_Data>(index_);
    }
    SynchronousCompositor_BeginFrame_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::viz::mojom::internal::BeginFrameArgs_Data> args;

 private:
  SynchronousCompositor_BeginFrame_Params_Data();
  ~SynchronousCompositor_BeginFrame_Params_Data() = delete;
};
static_assert(sizeof(SynchronousCompositor_BeginFrame_Params_Data) == 16,
              "Bad sizeof(SynchronousCompositor_BeginFrame_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) SynchronousCompositor_SetBeginFrameSourcePaused_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SynchronousCompositor_SetBeginFrameSourcePaused_Params_Data));
      new (data()) SynchronousCompositor_SetBeginFrameSourcePaused_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SynchronousCompositor_SetBeginFrameSourcePaused_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SynchronousCompositor_SetBeginFrameSourcePaused_Params_Data>(index_);
    }
    SynchronousCompositor_SetBeginFrameSourcePaused_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t paused : 1;
  uint8_t padfinal_[7];

 private:
  SynchronousCompositor_SetBeginFrameSourcePaused_Params_Data();
  ~SynchronousCompositor_SetBeginFrameSourcePaused_Params_Data() = delete;
};
static_assert(sizeof(SynchronousCompositor_SetBeginFrameSourcePaused_Params_Data) == 16,
              "Bad sizeof(SynchronousCompositor_SetBeginFrameSourcePaused_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) SynchronousCompositorHost_LayerTreeFrameSinkCreated_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SynchronousCompositorHost_LayerTreeFrameSinkCreated_Params_Data));
      new (data()) SynchronousCompositorHost_LayerTreeFrameSinkCreated_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SynchronousCompositorHost_LayerTreeFrameSinkCreated_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SynchronousCompositorHost_LayerTreeFrameSinkCreated_Params_Data>(index_);
    }
    SynchronousCompositorHost_LayerTreeFrameSinkCreated_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  SynchronousCompositorHost_LayerTreeFrameSinkCreated_Params_Data();
  ~SynchronousCompositorHost_LayerTreeFrameSinkCreated_Params_Data() = delete;
};
static_assert(sizeof(SynchronousCompositorHost_LayerTreeFrameSinkCreated_Params_Data) == 8,
              "Bad sizeof(SynchronousCompositorHost_LayerTreeFrameSinkCreated_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) SynchronousCompositorHost_UpdateState_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SynchronousCompositorHost_UpdateState_Params_Data));
      new (data()) SynchronousCompositorHost_UpdateState_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SynchronousCompositorHost_UpdateState_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SynchronousCompositorHost_UpdateState_Params_Data>(index_);
    }
    SynchronousCompositorHost_UpdateState_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::SyncCompositorCommonRendererParams_Data> params;

 private:
  SynchronousCompositorHost_UpdateState_Params_Data();
  ~SynchronousCompositorHost_UpdateState_Params_Data() = delete;
};
static_assert(sizeof(SynchronousCompositorHost_UpdateState_Params_Data) == 16,
              "Bad sizeof(SynchronousCompositorHost_UpdateState_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) SynchronousCompositorHost_SetNeedsBeginFrames_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SynchronousCompositorHost_SetNeedsBeginFrames_Params_Data));
      new (data()) SynchronousCompositorHost_SetNeedsBeginFrames_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SynchronousCompositorHost_SetNeedsBeginFrames_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SynchronousCompositorHost_SetNeedsBeginFrames_Params_Data>(index_);
    }
    SynchronousCompositorHost_SetNeedsBeginFrames_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t needs_begin_frames : 1;
  uint8_t padfinal_[7];

 private:
  SynchronousCompositorHost_SetNeedsBeginFrames_Params_Data();
  ~SynchronousCompositorHost_SetNeedsBeginFrames_Params_Data() = delete;
};
static_assert(sizeof(SynchronousCompositorHost_SetNeedsBeginFrames_Params_Data) == 16,
              "Bad sizeof(SynchronousCompositorHost_SetNeedsBeginFrames_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) SynchronousCompositorControlHost_ReturnFrame_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SynchronousCompositorControlHost_ReturnFrame_Params_Data));
      new (data()) SynchronousCompositorControlHost_ReturnFrame_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SynchronousCompositorControlHost_ReturnFrame_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SynchronousCompositorControlHost_ReturnFrame_Params_Data>(index_);
    }
    SynchronousCompositorControlHost_ReturnFrame_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t layer_tree_frame_sink_id;
  uint32_t metadata_version;
  mojo::internal::Pointer<::viz::mojom::internal::CompositorFrame_Data> frame;

 private:
  SynchronousCompositorControlHost_ReturnFrame_Params_Data();
  ~SynchronousCompositorControlHost_ReturnFrame_Params_Data() = delete;
};
static_assert(sizeof(SynchronousCompositorControlHost_ReturnFrame_Params_Data) == 24,
              "Bad sizeof(SynchronousCompositorControlHost_ReturnFrame_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) SynchronousCompositorControlHost_BeginFrameResponse_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SynchronousCompositorControlHost_BeginFrameResponse_Params_Data));
      new (data()) SynchronousCompositorControlHost_BeginFrameResponse_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SynchronousCompositorControlHost_BeginFrameResponse_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SynchronousCompositorControlHost_BeginFrameResponse_Params_Data>(index_);
    }
    SynchronousCompositorControlHost_BeginFrameResponse_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::SyncCompositorCommonRendererParams_Data> params;

 private:
  SynchronousCompositorControlHost_BeginFrameResponse_Params_Data();
  ~SynchronousCompositorControlHost_BeginFrameResponse_Params_Data() = delete;
};
static_assert(sizeof(SynchronousCompositorControlHost_BeginFrameResponse_Params_Data) == 16,
              "Bad sizeof(SynchronousCompositorControlHost_BeginFrameResponse_Params_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace content

#endif  // CONTENT_COMMON_INPUT_SYNCHRONOUS_COMPOSITOR_MOJOM_SHARED_INTERNAL_H_