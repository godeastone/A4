// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_FRAME_SINKS_EMBEDDED_FRAME_SINK_MOJOM_SHARED_INTERNAL_H_
#define THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_FRAME_SINKS_EMBEDDED_FRAME_SINK_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "services/viz/public/interfaces/compositing/compositor_frame_sink.mojom-shared-internal.h"
#include "services/viz/public/interfaces/compositing/frame_sink_id.mojom-shared-internal.h"
#include "services/viz/public/interfaces/compositing/surface_info.mojom-shared-internal.h"
#include "mojo/public/cpp/bindings/lib/native_enum_data.h"
#include "mojo/public/interfaces/bindings/native_struct.mojom-shared-internal.h"
#include "base/component_export.h"

namespace mojo {
namespace internal {
class ValidationContext;
}
}
namespace blink {
namespace mojom {
namespace internal {

#pragma pack(push, 1)
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) EmbeddedFrameSinkClient_OnFirstSurfaceActivation_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(EmbeddedFrameSinkClient_OnFirstSurfaceActivation_Params_Data));
      new (data()) EmbeddedFrameSinkClient_OnFirstSurfaceActivation_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    EmbeddedFrameSinkClient_OnFirstSurfaceActivation_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<EmbeddedFrameSinkClient_OnFirstSurfaceActivation_Params_Data>(index_);
    }
    EmbeddedFrameSinkClient_OnFirstSurfaceActivation_Params_Data* operator->() { return data(); }

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
  EmbeddedFrameSinkClient_OnFirstSurfaceActivation_Params_Data();
  ~EmbeddedFrameSinkClient_OnFirstSurfaceActivation_Params_Data() = delete;
};
static_assert(sizeof(EmbeddedFrameSinkClient_OnFirstSurfaceActivation_Params_Data) == 16,
              "Bad sizeof(EmbeddedFrameSinkClient_OnFirstSurfaceActivation_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) EmbeddedFrameSinkProvider_RegisterEmbeddedFrameSink_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(EmbeddedFrameSinkProvider_RegisterEmbeddedFrameSink_Params_Data));
      new (data()) EmbeddedFrameSinkProvider_RegisterEmbeddedFrameSink_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    EmbeddedFrameSinkProvider_RegisterEmbeddedFrameSink_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<EmbeddedFrameSinkProvider_RegisterEmbeddedFrameSink_Params_Data>(index_);
    }
    EmbeddedFrameSinkProvider_RegisterEmbeddedFrameSink_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::viz::mojom::internal::FrameSinkId_Data> parent_frame_sink_id;
  mojo::internal::Pointer<::viz::mojom::internal::FrameSinkId_Data> frame_sink_id;
  mojo::internal::Interface_Data client;

 private:
  EmbeddedFrameSinkProvider_RegisterEmbeddedFrameSink_Params_Data();
  ~EmbeddedFrameSinkProvider_RegisterEmbeddedFrameSink_Params_Data() = delete;
};
static_assert(sizeof(EmbeddedFrameSinkProvider_RegisterEmbeddedFrameSink_Params_Data) == 32,
              "Bad sizeof(EmbeddedFrameSinkProvider_RegisterEmbeddedFrameSink_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) EmbeddedFrameSinkProvider_CreateCompositorFrameSink_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(EmbeddedFrameSinkProvider_CreateCompositorFrameSink_Params_Data));
      new (data()) EmbeddedFrameSinkProvider_CreateCompositorFrameSink_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    EmbeddedFrameSinkProvider_CreateCompositorFrameSink_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<EmbeddedFrameSinkProvider_CreateCompositorFrameSink_Params_Data>(index_);
    }
    EmbeddedFrameSinkProvider_CreateCompositorFrameSink_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::viz::mojom::internal::FrameSinkId_Data> frame_sink_id;
  mojo::internal::Interface_Data client;
  mojo::internal::Handle_Data sink;
  uint8_t padfinal_[4];

 private:
  EmbeddedFrameSinkProvider_CreateCompositorFrameSink_Params_Data();
  ~EmbeddedFrameSinkProvider_CreateCompositorFrameSink_Params_Data() = delete;
};
static_assert(sizeof(EmbeddedFrameSinkProvider_CreateCompositorFrameSink_Params_Data) == 32,
              "Bad sizeof(EmbeddedFrameSinkProvider_CreateCompositorFrameSink_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) EmbeddedFrameSinkProvider_CreateSimpleCompositorFrameSink_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(EmbeddedFrameSinkProvider_CreateSimpleCompositorFrameSink_Params_Data));
      new (data()) EmbeddedFrameSinkProvider_CreateSimpleCompositorFrameSink_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    EmbeddedFrameSinkProvider_CreateSimpleCompositorFrameSink_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<EmbeddedFrameSinkProvider_CreateSimpleCompositorFrameSink_Params_Data>(index_);
    }
    EmbeddedFrameSinkProvider_CreateSimpleCompositorFrameSink_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::viz::mojom::internal::FrameSinkId_Data> parent_frame_sink_id;
  mojo::internal::Pointer<::viz::mojom::internal::FrameSinkId_Data> frame_sink_id;
  mojo::internal::Interface_Data surface_client;
  mojo::internal::Interface_Data client;
  mojo::internal::Handle_Data sink;
  uint8_t padfinal_[4];

 private:
  EmbeddedFrameSinkProvider_CreateSimpleCompositorFrameSink_Params_Data();
  ~EmbeddedFrameSinkProvider_CreateSimpleCompositorFrameSink_Params_Data() = delete;
};
static_assert(sizeof(EmbeddedFrameSinkProvider_CreateSimpleCompositorFrameSink_Params_Data) == 48,
              "Bad sizeof(EmbeddedFrameSinkProvider_CreateSimpleCompositorFrameSink_Params_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_FRAME_SINKS_EMBEDDED_FRAME_SINK_MOJOM_SHARED_INTERNAL_H_