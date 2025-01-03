// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_COMPOSITOR_FRAME_SINK_MOJOM_SHARED_INTERNAL_H_
#define SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_COMPOSITOR_FRAME_SINK_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "mojo/public/mojom/base/time.mojom-shared-internal.h"
#include "services/viz/public/interfaces/compositing/begin_frame_args.mojom-shared-internal.h"
#include "services/viz/public/interfaces/compositing/compositor_frame.mojom-shared-internal.h"
#include "services/viz/public/interfaces/compositing/local_surface_id.mojom-shared-internal.h"
#include "services/viz/public/interfaces/compositing/returned_resource.mojom-shared-internal.h"
#include "services/viz/public/interfaces/hit_test/hit_test_region_list.mojom-shared-internal.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-shared-internal.h"
#include "gpu/ipc/common/mailbox.mojom-shared-internal.h"
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
class  CompositorFrameSink_SetNeedsBeginFrame_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CompositorFrameSink_SetNeedsBeginFrame_Params_Data));
      new (data()) CompositorFrameSink_SetNeedsBeginFrame_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CompositorFrameSink_SetNeedsBeginFrame_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CompositorFrameSink_SetNeedsBeginFrame_Params_Data>(index_);
    }
    CompositorFrameSink_SetNeedsBeginFrame_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t needs_begin_frame : 1;
  uint8_t padfinal_[7];

 private:
  CompositorFrameSink_SetNeedsBeginFrame_Params_Data();
  ~CompositorFrameSink_SetNeedsBeginFrame_Params_Data() = delete;
};
static_assert(sizeof(CompositorFrameSink_SetNeedsBeginFrame_Params_Data) == 16,
              "Bad sizeof(CompositorFrameSink_SetNeedsBeginFrame_Params_Data)");
class  CompositorFrameSink_SetWantsAnimateOnlyBeginFrames_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CompositorFrameSink_SetWantsAnimateOnlyBeginFrames_Params_Data));
      new (data()) CompositorFrameSink_SetWantsAnimateOnlyBeginFrames_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CompositorFrameSink_SetWantsAnimateOnlyBeginFrames_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CompositorFrameSink_SetWantsAnimateOnlyBeginFrames_Params_Data>(index_);
    }
    CompositorFrameSink_SetWantsAnimateOnlyBeginFrames_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  CompositorFrameSink_SetWantsAnimateOnlyBeginFrames_Params_Data();
  ~CompositorFrameSink_SetWantsAnimateOnlyBeginFrames_Params_Data() = delete;
};
static_assert(sizeof(CompositorFrameSink_SetWantsAnimateOnlyBeginFrames_Params_Data) == 8,
              "Bad sizeof(CompositorFrameSink_SetWantsAnimateOnlyBeginFrames_Params_Data)");
class  CompositorFrameSink_SubmitCompositorFrame_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CompositorFrameSink_SubmitCompositorFrame_Params_Data));
      new (data()) CompositorFrameSink_SubmitCompositorFrame_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CompositorFrameSink_SubmitCompositorFrame_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CompositorFrameSink_SubmitCompositorFrame_Params_Data>(index_);
    }
    CompositorFrameSink_SubmitCompositorFrame_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::viz::mojom::internal::LocalSurfaceId_Data> local_surface_id;
  mojo::internal::Pointer<::viz::mojom::internal::CompositorFrame_Data> frame;
  mojo::internal::Pointer<::viz::mojom::internal::HitTestRegionList_Data> hit_test_region_list;
  uint64_t submit_time;

 private:
  CompositorFrameSink_SubmitCompositorFrame_Params_Data();
  ~CompositorFrameSink_SubmitCompositorFrame_Params_Data() = delete;
};
static_assert(sizeof(CompositorFrameSink_SubmitCompositorFrame_Params_Data) == 40,
              "Bad sizeof(CompositorFrameSink_SubmitCompositorFrame_Params_Data)");
class  CompositorFrameSink_SubmitCompositorFrameSync_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CompositorFrameSink_SubmitCompositorFrameSync_Params_Data));
      new (data()) CompositorFrameSink_SubmitCompositorFrameSync_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CompositorFrameSink_SubmitCompositorFrameSync_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CompositorFrameSink_SubmitCompositorFrameSync_Params_Data>(index_);
    }
    CompositorFrameSink_SubmitCompositorFrameSync_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::viz::mojom::internal::LocalSurfaceId_Data> local_surface_id;
  mojo::internal::Pointer<::viz::mojom::internal::CompositorFrame_Data> frame;
  mojo::internal::Pointer<::viz::mojom::internal::HitTestRegionList_Data> hit_test_region_list;
  uint64_t submit_time;

 private:
  CompositorFrameSink_SubmitCompositorFrameSync_Params_Data();
  ~CompositorFrameSink_SubmitCompositorFrameSync_Params_Data() = delete;
};
static_assert(sizeof(CompositorFrameSink_SubmitCompositorFrameSync_Params_Data) == 40,
              "Bad sizeof(CompositorFrameSink_SubmitCompositorFrameSync_Params_Data)");
class  CompositorFrameSink_SubmitCompositorFrameSync_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CompositorFrameSink_SubmitCompositorFrameSync_ResponseParams_Data));
      new (data()) CompositorFrameSink_SubmitCompositorFrameSync_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CompositorFrameSink_SubmitCompositorFrameSync_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CompositorFrameSink_SubmitCompositorFrameSync_ResponseParams_Data>(index_);
    }
    CompositorFrameSink_SubmitCompositorFrameSync_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<::viz::mojom::internal::ReturnedResource_Data>>> resources;

 private:
  CompositorFrameSink_SubmitCompositorFrameSync_ResponseParams_Data();
  ~CompositorFrameSink_SubmitCompositorFrameSync_ResponseParams_Data() = delete;
};
static_assert(sizeof(CompositorFrameSink_SubmitCompositorFrameSync_ResponseParams_Data) == 16,
              "Bad sizeof(CompositorFrameSink_SubmitCompositorFrameSync_ResponseParams_Data)");
class  CompositorFrameSink_DidNotProduceFrame_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CompositorFrameSink_DidNotProduceFrame_Params_Data));
      new (data()) CompositorFrameSink_DidNotProduceFrame_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CompositorFrameSink_DidNotProduceFrame_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CompositorFrameSink_DidNotProduceFrame_Params_Data>(index_);
    }
    CompositorFrameSink_DidNotProduceFrame_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::viz::mojom::internal::BeginFrameAck_Data> ack;

 private:
  CompositorFrameSink_DidNotProduceFrame_Params_Data();
  ~CompositorFrameSink_DidNotProduceFrame_Params_Data() = delete;
};
static_assert(sizeof(CompositorFrameSink_DidNotProduceFrame_Params_Data) == 16,
              "Bad sizeof(CompositorFrameSink_DidNotProduceFrame_Params_Data)");
class  CompositorFrameSink_DidAllocateSharedBitmap_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CompositorFrameSink_DidAllocateSharedBitmap_Params_Data));
      new (data()) CompositorFrameSink_DidAllocateSharedBitmap_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CompositorFrameSink_DidAllocateSharedBitmap_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CompositorFrameSink_DidAllocateSharedBitmap_Params_Data>(index_);
    }
    CompositorFrameSink_DidAllocateSharedBitmap_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data buffer;
  uint8_t pad0_[4];
  mojo::internal::Pointer<::gpu::mojom::internal::Mailbox_Data> id;

 private:
  CompositorFrameSink_DidAllocateSharedBitmap_Params_Data();
  ~CompositorFrameSink_DidAllocateSharedBitmap_Params_Data() = delete;
};
static_assert(sizeof(CompositorFrameSink_DidAllocateSharedBitmap_Params_Data) == 24,
              "Bad sizeof(CompositorFrameSink_DidAllocateSharedBitmap_Params_Data)");
class  CompositorFrameSink_DidDeleteSharedBitmap_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CompositorFrameSink_DidDeleteSharedBitmap_Params_Data));
      new (data()) CompositorFrameSink_DidDeleteSharedBitmap_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CompositorFrameSink_DidDeleteSharedBitmap_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CompositorFrameSink_DidDeleteSharedBitmap_Params_Data>(index_);
    }
    CompositorFrameSink_DidDeleteSharedBitmap_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::gpu::mojom::internal::Mailbox_Data> id;

 private:
  CompositorFrameSink_DidDeleteSharedBitmap_Params_Data();
  ~CompositorFrameSink_DidDeleteSharedBitmap_Params_Data() = delete;
};
static_assert(sizeof(CompositorFrameSink_DidDeleteSharedBitmap_Params_Data) == 16,
              "Bad sizeof(CompositorFrameSink_DidDeleteSharedBitmap_Params_Data)");
class  CompositorFrameSinkClient_DidReceiveCompositorFrameAck_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CompositorFrameSinkClient_DidReceiveCompositorFrameAck_Params_Data));
      new (data()) CompositorFrameSinkClient_DidReceiveCompositorFrameAck_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CompositorFrameSinkClient_DidReceiveCompositorFrameAck_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CompositorFrameSinkClient_DidReceiveCompositorFrameAck_Params_Data>(index_);
    }
    CompositorFrameSinkClient_DidReceiveCompositorFrameAck_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<::viz::mojom::internal::ReturnedResource_Data>>> resources;

 private:
  CompositorFrameSinkClient_DidReceiveCompositorFrameAck_Params_Data();
  ~CompositorFrameSinkClient_DidReceiveCompositorFrameAck_Params_Data() = delete;
};
static_assert(sizeof(CompositorFrameSinkClient_DidReceiveCompositorFrameAck_Params_Data) == 16,
              "Bad sizeof(CompositorFrameSinkClient_DidReceiveCompositorFrameAck_Params_Data)");
class  CompositorFrameSinkClient_DidPresentCompositorFrame_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CompositorFrameSinkClient_DidPresentCompositorFrame_Params_Data));
      new (data()) CompositorFrameSinkClient_DidPresentCompositorFrame_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CompositorFrameSinkClient_DidPresentCompositorFrame_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CompositorFrameSinkClient_DidPresentCompositorFrame_Params_Data>(index_);
    }
    CompositorFrameSinkClient_DidPresentCompositorFrame_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t presentation_token;
  uint32_t flags;
  mojo::internal::Pointer<::mojo_base::mojom::internal::TimeTicks_Data> time;
  mojo::internal::Pointer<::mojo_base::mojom::internal::TimeDelta_Data> refresh;

 private:
  CompositorFrameSinkClient_DidPresentCompositorFrame_Params_Data();
  ~CompositorFrameSinkClient_DidPresentCompositorFrame_Params_Data() = delete;
};
static_assert(sizeof(CompositorFrameSinkClient_DidPresentCompositorFrame_Params_Data) == 32,
              "Bad sizeof(CompositorFrameSinkClient_DidPresentCompositorFrame_Params_Data)");
class  CompositorFrameSinkClient_DidDiscardCompositorFrame_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CompositorFrameSinkClient_DidDiscardCompositorFrame_Params_Data));
      new (data()) CompositorFrameSinkClient_DidDiscardCompositorFrame_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CompositorFrameSinkClient_DidDiscardCompositorFrame_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CompositorFrameSinkClient_DidDiscardCompositorFrame_Params_Data>(index_);
    }
    CompositorFrameSinkClient_DidDiscardCompositorFrame_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t presentation_token;
  uint8_t padfinal_[4];

 private:
  CompositorFrameSinkClient_DidDiscardCompositorFrame_Params_Data();
  ~CompositorFrameSinkClient_DidDiscardCompositorFrame_Params_Data() = delete;
};
static_assert(sizeof(CompositorFrameSinkClient_DidDiscardCompositorFrame_Params_Data) == 16,
              "Bad sizeof(CompositorFrameSinkClient_DidDiscardCompositorFrame_Params_Data)");
class  CompositorFrameSinkClient_OnBeginFrame_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CompositorFrameSinkClient_OnBeginFrame_Params_Data));
      new (data()) CompositorFrameSinkClient_OnBeginFrame_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CompositorFrameSinkClient_OnBeginFrame_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CompositorFrameSinkClient_OnBeginFrame_Params_Data>(index_);
    }
    CompositorFrameSinkClient_OnBeginFrame_Params_Data* operator->() { return data(); }

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
  CompositorFrameSinkClient_OnBeginFrame_Params_Data();
  ~CompositorFrameSinkClient_OnBeginFrame_Params_Data() = delete;
};
static_assert(sizeof(CompositorFrameSinkClient_OnBeginFrame_Params_Data) == 16,
              "Bad sizeof(CompositorFrameSinkClient_OnBeginFrame_Params_Data)");
class  CompositorFrameSinkClient_OnBeginFramePausedChanged_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CompositorFrameSinkClient_OnBeginFramePausedChanged_Params_Data));
      new (data()) CompositorFrameSinkClient_OnBeginFramePausedChanged_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CompositorFrameSinkClient_OnBeginFramePausedChanged_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CompositorFrameSinkClient_OnBeginFramePausedChanged_Params_Data>(index_);
    }
    CompositorFrameSinkClient_OnBeginFramePausedChanged_Params_Data* operator->() { return data(); }

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
  CompositorFrameSinkClient_OnBeginFramePausedChanged_Params_Data();
  ~CompositorFrameSinkClient_OnBeginFramePausedChanged_Params_Data() = delete;
};
static_assert(sizeof(CompositorFrameSinkClient_OnBeginFramePausedChanged_Params_Data) == 16,
              "Bad sizeof(CompositorFrameSinkClient_OnBeginFramePausedChanged_Params_Data)");
class  CompositorFrameSinkClient_ReclaimResources_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CompositorFrameSinkClient_ReclaimResources_Params_Data));
      new (data()) CompositorFrameSinkClient_ReclaimResources_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CompositorFrameSinkClient_ReclaimResources_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CompositorFrameSinkClient_ReclaimResources_Params_Data>(index_);
    }
    CompositorFrameSinkClient_ReclaimResources_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<::viz::mojom::internal::ReturnedResource_Data>>> resources;

 private:
  CompositorFrameSinkClient_ReclaimResources_Params_Data();
  ~CompositorFrameSinkClient_ReclaimResources_Params_Data() = delete;
};
static_assert(sizeof(CompositorFrameSinkClient_ReclaimResources_Params_Data) == 16,
              "Bad sizeof(CompositorFrameSinkClient_ReclaimResources_Params_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace viz

#endif  // SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_COMPOSITOR_FRAME_SINK_MOJOM_SHARED_INTERNAL_H_