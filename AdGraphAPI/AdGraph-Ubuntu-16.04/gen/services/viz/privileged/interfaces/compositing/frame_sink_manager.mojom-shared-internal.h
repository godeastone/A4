// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_VIZ_PRIVILEGED_INTERFACES_COMPOSITING_FRAME_SINK_MANAGER_MOJOM_SHARED_INTERNAL_H_
#define SERVICES_VIZ_PRIVILEGED_INTERFACES_COMPOSITING_FRAME_SINK_MANAGER_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "gpu/ipc/common/surface_handle.mojom-shared-internal.h"
#include "mojo/public/mojom/base/time.mojom-shared-internal.h"
#include "services/viz/privileged/interfaces/compositing/display_private.mojom-shared-internal.h"
#include "services/viz/privileged/interfaces/compositing/external_begin_frame_controller.mojom-shared-internal.h"
#include "services/viz/privileged/interfaces/compositing/frame_sink_video_capture.mojom-shared-internal.h"
#include "services/viz/privileged/interfaces/compositing/renderer_settings.mojom-shared-internal.h"
#include "services/viz/public/interfaces/compositing/compositor_frame_sink.mojom-shared-internal.h"
#include "services/viz/public/interfaces/compositing/copy_output_request.mojom-shared-internal.h"
#include "services/viz/public/interfaces/compositing/frame_sink_id.mojom-shared-internal.h"
#include "services/viz/public/interfaces/compositing/local_surface_id.mojom-shared-internal.h"
#include "services/viz/public/interfaces/compositing/surface_id.mojom-shared-internal.h"
#include "services/viz/public/interfaces/compositing/surface_info.mojom-shared-internal.h"
#include "services/viz/public/interfaces/hit_test/aggregated_hit_test_region.mojom-shared-internal.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-shared-internal.h"
#include "services/viz/public/interfaces/compositing/video_detector_observer.mojom-shared-internal.h"
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
class RootCompositorFrameSinkParams_Data;

#pragma pack(push, 1)
class  RootCompositorFrameSinkParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(RootCompositorFrameSinkParams_Data));
      new (data()) RootCompositorFrameSinkParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    RootCompositorFrameSinkParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<RootCompositorFrameSinkParams_Data>(index_);
    }
    RootCompositorFrameSinkParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::viz::mojom::internal::FrameSinkId_Data> frame_sink_id;
  mojo::internal::Pointer<::gpu::mojom::internal::SurfaceHandle_Data> widget;
  uint8_t gpu_compositing : 1;
  uint8_t pad2_[3];
  mojo::internal::AssociatedEndpointHandle_Data compositor_frame_sink;
  mojo::internal::Pointer<::viz::mojom::internal::RendererSettings_Data> renderer_settings;
  mojo::internal::Interface_Data compositor_frame_sink_client;
  mojo::internal::AssociatedEndpointHandle_Data display_private;
  mojo::internal::Interface_Data display_client;
  mojo::internal::AssociatedEndpointHandle_Data external_begin_frame_controller;
  mojo::internal::Interface_Data external_begin_frame_controller_client;

 private:
  RootCompositorFrameSinkParams_Data();
  ~RootCompositorFrameSinkParams_Data() = delete;
};
static_assert(sizeof(RootCompositorFrameSinkParams_Data) == 72,
              "Bad sizeof(RootCompositorFrameSinkParams_Data)");
// Used by RootCompositorFrameSinkParams::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct RootCompositorFrameSinkParams_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  RootCompositorFrameSinkParams_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~RootCompositorFrameSinkParams_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    RootCompositorFrameSinkParams_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    RootCompositorFrameSinkParams_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  FrameSinkManager_RegisterFrameSinkId_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FrameSinkManager_RegisterFrameSinkId_Params_Data));
      new (data()) FrameSinkManager_RegisterFrameSinkId_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FrameSinkManager_RegisterFrameSinkId_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FrameSinkManager_RegisterFrameSinkId_Params_Data>(index_);
    }
    FrameSinkManager_RegisterFrameSinkId_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::viz::mojom::internal::FrameSinkId_Data> frame_sink_id;

 private:
  FrameSinkManager_RegisterFrameSinkId_Params_Data();
  ~FrameSinkManager_RegisterFrameSinkId_Params_Data() = delete;
};
static_assert(sizeof(FrameSinkManager_RegisterFrameSinkId_Params_Data) == 16,
              "Bad sizeof(FrameSinkManager_RegisterFrameSinkId_Params_Data)");
class  FrameSinkManager_InvalidateFrameSinkId_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FrameSinkManager_InvalidateFrameSinkId_Params_Data));
      new (data()) FrameSinkManager_InvalidateFrameSinkId_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FrameSinkManager_InvalidateFrameSinkId_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FrameSinkManager_InvalidateFrameSinkId_Params_Data>(index_);
    }
    FrameSinkManager_InvalidateFrameSinkId_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::viz::mojom::internal::FrameSinkId_Data> frame_sink_id;

 private:
  FrameSinkManager_InvalidateFrameSinkId_Params_Data();
  ~FrameSinkManager_InvalidateFrameSinkId_Params_Data() = delete;
};
static_assert(sizeof(FrameSinkManager_InvalidateFrameSinkId_Params_Data) == 16,
              "Bad sizeof(FrameSinkManager_InvalidateFrameSinkId_Params_Data)");
class  FrameSinkManager_EnableSynchronizationReporting_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FrameSinkManager_EnableSynchronizationReporting_Params_Data));
      new (data()) FrameSinkManager_EnableSynchronizationReporting_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FrameSinkManager_EnableSynchronizationReporting_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FrameSinkManager_EnableSynchronizationReporting_Params_Data>(index_);
    }
    FrameSinkManager_EnableSynchronizationReporting_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::viz::mojom::internal::FrameSinkId_Data> frame_sink_id;
  mojo::internal::Pointer<mojo::internal::String_Data> reporting_label;

 private:
  FrameSinkManager_EnableSynchronizationReporting_Params_Data();
  ~FrameSinkManager_EnableSynchronizationReporting_Params_Data() = delete;
};
static_assert(sizeof(FrameSinkManager_EnableSynchronizationReporting_Params_Data) == 24,
              "Bad sizeof(FrameSinkManager_EnableSynchronizationReporting_Params_Data)");
class  FrameSinkManager_SetFrameSinkDebugLabel_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FrameSinkManager_SetFrameSinkDebugLabel_Params_Data));
      new (data()) FrameSinkManager_SetFrameSinkDebugLabel_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FrameSinkManager_SetFrameSinkDebugLabel_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FrameSinkManager_SetFrameSinkDebugLabel_Params_Data>(index_);
    }
    FrameSinkManager_SetFrameSinkDebugLabel_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::viz::mojom::internal::FrameSinkId_Data> frame_sink_id;
  mojo::internal::Pointer<mojo::internal::String_Data> debug_label;

 private:
  FrameSinkManager_SetFrameSinkDebugLabel_Params_Data();
  ~FrameSinkManager_SetFrameSinkDebugLabel_Params_Data() = delete;
};
static_assert(sizeof(FrameSinkManager_SetFrameSinkDebugLabel_Params_Data) == 24,
              "Bad sizeof(FrameSinkManager_SetFrameSinkDebugLabel_Params_Data)");
class  FrameSinkManager_CreateRootCompositorFrameSink_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FrameSinkManager_CreateRootCompositorFrameSink_Params_Data));
      new (data()) FrameSinkManager_CreateRootCompositorFrameSink_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FrameSinkManager_CreateRootCompositorFrameSink_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FrameSinkManager_CreateRootCompositorFrameSink_Params_Data>(index_);
    }
    FrameSinkManager_CreateRootCompositorFrameSink_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::RootCompositorFrameSinkParams_Data> params;

 private:
  FrameSinkManager_CreateRootCompositorFrameSink_Params_Data();
  ~FrameSinkManager_CreateRootCompositorFrameSink_Params_Data() = delete;
};
static_assert(sizeof(FrameSinkManager_CreateRootCompositorFrameSink_Params_Data) == 16,
              "Bad sizeof(FrameSinkManager_CreateRootCompositorFrameSink_Params_Data)");
class  FrameSinkManager_CreateCompositorFrameSink_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FrameSinkManager_CreateCompositorFrameSink_Params_Data));
      new (data()) FrameSinkManager_CreateCompositorFrameSink_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FrameSinkManager_CreateCompositorFrameSink_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FrameSinkManager_CreateCompositorFrameSink_Params_Data>(index_);
    }
    FrameSinkManager_CreateCompositorFrameSink_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::viz::mojom::internal::FrameSinkId_Data> frame_sink_id;
  mojo::internal::Handle_Data compositor_frame_sink;
  mojo::internal::Interface_Data compositor_frame_sink_client;
  uint8_t padfinal_[4];

 private:
  FrameSinkManager_CreateCompositorFrameSink_Params_Data();
  ~FrameSinkManager_CreateCompositorFrameSink_Params_Data() = delete;
};
static_assert(sizeof(FrameSinkManager_CreateCompositorFrameSink_Params_Data) == 32,
              "Bad sizeof(FrameSinkManager_CreateCompositorFrameSink_Params_Data)");
class  FrameSinkManager_DestroyCompositorFrameSink_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FrameSinkManager_DestroyCompositorFrameSink_Params_Data));
      new (data()) FrameSinkManager_DestroyCompositorFrameSink_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FrameSinkManager_DestroyCompositorFrameSink_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FrameSinkManager_DestroyCompositorFrameSink_Params_Data>(index_);
    }
    FrameSinkManager_DestroyCompositorFrameSink_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::viz::mojom::internal::FrameSinkId_Data> frame_sink_id;

 private:
  FrameSinkManager_DestroyCompositorFrameSink_Params_Data();
  ~FrameSinkManager_DestroyCompositorFrameSink_Params_Data() = delete;
};
static_assert(sizeof(FrameSinkManager_DestroyCompositorFrameSink_Params_Data) == 16,
              "Bad sizeof(FrameSinkManager_DestroyCompositorFrameSink_Params_Data)");
class  FrameSinkManager_DestroyCompositorFrameSink_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FrameSinkManager_DestroyCompositorFrameSink_ResponseParams_Data));
      new (data()) FrameSinkManager_DestroyCompositorFrameSink_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FrameSinkManager_DestroyCompositorFrameSink_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FrameSinkManager_DestroyCompositorFrameSink_ResponseParams_Data>(index_);
    }
    FrameSinkManager_DestroyCompositorFrameSink_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  FrameSinkManager_DestroyCompositorFrameSink_ResponseParams_Data();
  ~FrameSinkManager_DestroyCompositorFrameSink_ResponseParams_Data() = delete;
};
static_assert(sizeof(FrameSinkManager_DestroyCompositorFrameSink_ResponseParams_Data) == 8,
              "Bad sizeof(FrameSinkManager_DestroyCompositorFrameSink_ResponseParams_Data)");
class  FrameSinkManager_RegisterFrameSinkHierarchy_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FrameSinkManager_RegisterFrameSinkHierarchy_Params_Data));
      new (data()) FrameSinkManager_RegisterFrameSinkHierarchy_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FrameSinkManager_RegisterFrameSinkHierarchy_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FrameSinkManager_RegisterFrameSinkHierarchy_Params_Data>(index_);
    }
    FrameSinkManager_RegisterFrameSinkHierarchy_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::viz::mojom::internal::FrameSinkId_Data> parent_frame_sink_id;
  mojo::internal::Pointer<::viz::mojom::internal::FrameSinkId_Data> child_frame_sink_id;

 private:
  FrameSinkManager_RegisterFrameSinkHierarchy_Params_Data();
  ~FrameSinkManager_RegisterFrameSinkHierarchy_Params_Data() = delete;
};
static_assert(sizeof(FrameSinkManager_RegisterFrameSinkHierarchy_Params_Data) == 24,
              "Bad sizeof(FrameSinkManager_RegisterFrameSinkHierarchy_Params_Data)");
class  FrameSinkManager_UnregisterFrameSinkHierarchy_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FrameSinkManager_UnregisterFrameSinkHierarchy_Params_Data));
      new (data()) FrameSinkManager_UnregisterFrameSinkHierarchy_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FrameSinkManager_UnregisterFrameSinkHierarchy_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FrameSinkManager_UnregisterFrameSinkHierarchy_Params_Data>(index_);
    }
    FrameSinkManager_UnregisterFrameSinkHierarchy_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::viz::mojom::internal::FrameSinkId_Data> parent_frame_sink_id;
  mojo::internal::Pointer<::viz::mojom::internal::FrameSinkId_Data> child_frame_sink_id;

 private:
  FrameSinkManager_UnregisterFrameSinkHierarchy_Params_Data();
  ~FrameSinkManager_UnregisterFrameSinkHierarchy_Params_Data() = delete;
};
static_assert(sizeof(FrameSinkManager_UnregisterFrameSinkHierarchy_Params_Data) == 24,
              "Bad sizeof(FrameSinkManager_UnregisterFrameSinkHierarchy_Params_Data)");
class  FrameSinkManager_AssignTemporaryReference_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FrameSinkManager_AssignTemporaryReference_Params_Data));
      new (data()) FrameSinkManager_AssignTemporaryReference_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FrameSinkManager_AssignTemporaryReference_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FrameSinkManager_AssignTemporaryReference_Params_Data>(index_);
    }
    FrameSinkManager_AssignTemporaryReference_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::viz::mojom::internal::SurfaceId_Data> surface_id;
  mojo::internal::Pointer<::viz::mojom::internal::FrameSinkId_Data> owner;

 private:
  FrameSinkManager_AssignTemporaryReference_Params_Data();
  ~FrameSinkManager_AssignTemporaryReference_Params_Data() = delete;
};
static_assert(sizeof(FrameSinkManager_AssignTemporaryReference_Params_Data) == 24,
              "Bad sizeof(FrameSinkManager_AssignTemporaryReference_Params_Data)");
class  FrameSinkManager_DropTemporaryReference_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FrameSinkManager_DropTemporaryReference_Params_Data));
      new (data()) FrameSinkManager_DropTemporaryReference_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FrameSinkManager_DropTemporaryReference_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FrameSinkManager_DropTemporaryReference_Params_Data>(index_);
    }
    FrameSinkManager_DropTemporaryReference_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::viz::mojom::internal::SurfaceId_Data> surface_id;

 private:
  FrameSinkManager_DropTemporaryReference_Params_Data();
  ~FrameSinkManager_DropTemporaryReference_Params_Data() = delete;
};
static_assert(sizeof(FrameSinkManager_DropTemporaryReference_Params_Data) == 16,
              "Bad sizeof(FrameSinkManager_DropTemporaryReference_Params_Data)");
class  FrameSinkManager_AddVideoDetectorObserver_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FrameSinkManager_AddVideoDetectorObserver_Params_Data));
      new (data()) FrameSinkManager_AddVideoDetectorObserver_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FrameSinkManager_AddVideoDetectorObserver_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FrameSinkManager_AddVideoDetectorObserver_Params_Data>(index_);
    }
    FrameSinkManager_AddVideoDetectorObserver_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Interface_Data observer;

 private:
  FrameSinkManager_AddVideoDetectorObserver_Params_Data();
  ~FrameSinkManager_AddVideoDetectorObserver_Params_Data() = delete;
};
static_assert(sizeof(FrameSinkManager_AddVideoDetectorObserver_Params_Data) == 16,
              "Bad sizeof(FrameSinkManager_AddVideoDetectorObserver_Params_Data)");
class  FrameSinkManager_CreateVideoCapturer_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FrameSinkManager_CreateVideoCapturer_Params_Data));
      new (data()) FrameSinkManager_CreateVideoCapturer_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FrameSinkManager_CreateVideoCapturer_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FrameSinkManager_CreateVideoCapturer_Params_Data>(index_);
    }
    FrameSinkManager_CreateVideoCapturer_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data request;
  uint8_t padfinal_[4];

 private:
  FrameSinkManager_CreateVideoCapturer_Params_Data();
  ~FrameSinkManager_CreateVideoCapturer_Params_Data() = delete;
};
static_assert(sizeof(FrameSinkManager_CreateVideoCapturer_Params_Data) == 16,
              "Bad sizeof(FrameSinkManager_CreateVideoCapturer_Params_Data)");
class  FrameSinkManager_EvictSurfaces_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FrameSinkManager_EvictSurfaces_Params_Data));
      new (data()) FrameSinkManager_EvictSurfaces_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FrameSinkManager_EvictSurfaces_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FrameSinkManager_EvictSurfaces_Params_Data>(index_);
    }
    FrameSinkManager_EvictSurfaces_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<::viz::mojom::internal::SurfaceId_Data>>> surface_ids;

 private:
  FrameSinkManager_EvictSurfaces_Params_Data();
  ~FrameSinkManager_EvictSurfaces_Params_Data() = delete;
};
static_assert(sizeof(FrameSinkManager_EvictSurfaces_Params_Data) == 16,
              "Bad sizeof(FrameSinkManager_EvictSurfaces_Params_Data)");
class  FrameSinkManager_RequestCopyOfOutput_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FrameSinkManager_RequestCopyOfOutput_Params_Data));
      new (data()) FrameSinkManager_RequestCopyOfOutput_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FrameSinkManager_RequestCopyOfOutput_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FrameSinkManager_RequestCopyOfOutput_Params_Data>(index_);
    }
    FrameSinkManager_RequestCopyOfOutput_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::viz::mojom::internal::SurfaceId_Data> surface_id;
  mojo::internal::Pointer<::viz::mojom::internal::CopyOutputRequest_Data> request;

 private:
  FrameSinkManager_RequestCopyOfOutput_Params_Data();
  ~FrameSinkManager_RequestCopyOfOutput_Params_Data() = delete;
};
static_assert(sizeof(FrameSinkManager_RequestCopyOfOutput_Params_Data) == 24,
              "Bad sizeof(FrameSinkManager_RequestCopyOfOutput_Params_Data)");
class  FrameSinkManagerClient_OnSurfaceCreated_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FrameSinkManagerClient_OnSurfaceCreated_Params_Data));
      new (data()) FrameSinkManagerClient_OnSurfaceCreated_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FrameSinkManagerClient_OnSurfaceCreated_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FrameSinkManagerClient_OnSurfaceCreated_Params_Data>(index_);
    }
    FrameSinkManagerClient_OnSurfaceCreated_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::viz::mojom::internal::SurfaceId_Data> surface_id;

 private:
  FrameSinkManagerClient_OnSurfaceCreated_Params_Data();
  ~FrameSinkManagerClient_OnSurfaceCreated_Params_Data() = delete;
};
static_assert(sizeof(FrameSinkManagerClient_OnSurfaceCreated_Params_Data) == 16,
              "Bad sizeof(FrameSinkManagerClient_OnSurfaceCreated_Params_Data)");
class  FrameSinkManagerClient_OnFirstSurfaceActivation_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FrameSinkManagerClient_OnFirstSurfaceActivation_Params_Data));
      new (data()) FrameSinkManagerClient_OnFirstSurfaceActivation_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FrameSinkManagerClient_OnFirstSurfaceActivation_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FrameSinkManagerClient_OnFirstSurfaceActivation_Params_Data>(index_);
    }
    FrameSinkManagerClient_OnFirstSurfaceActivation_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::viz::mojom::internal::SurfaceInfo_Data> surface_info;

 private:
  FrameSinkManagerClient_OnFirstSurfaceActivation_Params_Data();
  ~FrameSinkManagerClient_OnFirstSurfaceActivation_Params_Data() = delete;
};
static_assert(sizeof(FrameSinkManagerClient_OnFirstSurfaceActivation_Params_Data) == 16,
              "Bad sizeof(FrameSinkManagerClient_OnFirstSurfaceActivation_Params_Data)");
class  FrameSinkManagerClient_OnAggregatedHitTestRegionListUpdated_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FrameSinkManagerClient_OnAggregatedHitTestRegionListUpdated_Params_Data));
      new (data()) FrameSinkManagerClient_OnAggregatedHitTestRegionListUpdated_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FrameSinkManagerClient_OnAggregatedHitTestRegionListUpdated_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FrameSinkManagerClient_OnAggregatedHitTestRegionListUpdated_Params_Data>(index_);
    }
    FrameSinkManagerClient_OnAggregatedHitTestRegionListUpdated_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::viz::mojom::internal::FrameSinkId_Data> frame_sink_id;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<::viz::mojom::internal::AggregatedHitTestRegion_Data>>> hit_test_data;

 private:
  FrameSinkManagerClient_OnAggregatedHitTestRegionListUpdated_Params_Data();
  ~FrameSinkManagerClient_OnAggregatedHitTestRegionListUpdated_Params_Data() = delete;
};
static_assert(sizeof(FrameSinkManagerClient_OnAggregatedHitTestRegionListUpdated_Params_Data) == 24,
              "Bad sizeof(FrameSinkManagerClient_OnAggregatedHitTestRegionListUpdated_Params_Data)");
class  FrameSinkManagerClient_OnFrameTokenChanged_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FrameSinkManagerClient_OnFrameTokenChanged_Params_Data));
      new (data()) FrameSinkManagerClient_OnFrameTokenChanged_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FrameSinkManagerClient_OnFrameTokenChanged_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FrameSinkManagerClient_OnFrameTokenChanged_Params_Data>(index_);
    }
    FrameSinkManagerClient_OnFrameTokenChanged_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::viz::mojom::internal::FrameSinkId_Data> frame_sink_id;
  uint32_t frame_token;
  uint8_t padfinal_[4];

 private:
  FrameSinkManagerClient_OnFrameTokenChanged_Params_Data();
  ~FrameSinkManagerClient_OnFrameTokenChanged_Params_Data() = delete;
};
static_assert(sizeof(FrameSinkManagerClient_OnFrameTokenChanged_Params_Data) == 24,
              "Bad sizeof(FrameSinkManagerClient_OnFrameTokenChanged_Params_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace viz

#endif  // SERVICES_VIZ_PRIVILEGED_INTERFACES_COMPOSITING_FRAME_SINK_MANAGER_MOJOM_SHARED_INTERNAL_H_