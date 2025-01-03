// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_RENDER_FRAME_METADATA_MOJOM_SHARED_INTERNAL_H_
#define CONTENT_COMMON_RENDER_FRAME_METADATA_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "services/viz/public/interfaces/compositing/local_surface_id.mojom-shared-internal.h"
#include "services/viz/public/interfaces/compositing/selection.mojom-shared-internal.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-shared-internal.h"
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
class RenderFrameMetadata_Data;

#pragma pack(push, 1)
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) RenderFrameMetadata_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(RenderFrameMetadata_Data));
      new (data()) RenderFrameMetadata_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    RenderFrameMetadata_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<RenderFrameMetadata_Data>(index_);
    }
    RenderFrameMetadata_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t root_background_color;
  uint8_t is_scroll_offset_at_top : 1;
  uint8_t is_mobile_optimized : 1;
  uint8_t pad2_[3];
  mojo::internal::Pointer<::gfx::mojom::internal::Vector2dF_Data> root_scroll_offset;
  mojo::internal::Pointer<::viz::mojom::internal::Selection_Data> selection;
  float device_scale_factor;
  float top_controls_height;
  mojo::internal::Pointer<::gfx::mojom::internal::Size_Data> viewport_size_in_pixels;
  mojo::internal::Pointer<::viz::mojom::internal::LocalSurfaceId_Data> local_surface_id;
  float top_controls_shown_ratio;
  float bottom_controls_height;
  float bottom_controls_shown_ratio;
  uint8_t padfinal_[4];

 private:
  RenderFrameMetadata_Data();
  ~RenderFrameMetadata_Data() = delete;
};
static_assert(sizeof(RenderFrameMetadata_Data) == 72,
              "Bad sizeof(RenderFrameMetadata_Data)");
// Used by RenderFrameMetadata::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct RenderFrameMetadata_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  RenderFrameMetadata_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~RenderFrameMetadata_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    RenderFrameMetadata_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    RenderFrameMetadata_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) RenderFrameMetadataObserver_ReportAllFrameSubmissionsForTesting_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(RenderFrameMetadataObserver_ReportAllFrameSubmissionsForTesting_Params_Data));
      new (data()) RenderFrameMetadataObserver_ReportAllFrameSubmissionsForTesting_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    RenderFrameMetadataObserver_ReportAllFrameSubmissionsForTesting_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<RenderFrameMetadataObserver_ReportAllFrameSubmissionsForTesting_Params_Data>(index_);
    }
    RenderFrameMetadataObserver_ReportAllFrameSubmissionsForTesting_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t enabled : 1;
  uint8_t padfinal_[7];

 private:
  RenderFrameMetadataObserver_ReportAllFrameSubmissionsForTesting_Params_Data();
  ~RenderFrameMetadataObserver_ReportAllFrameSubmissionsForTesting_Params_Data() = delete;
};
static_assert(sizeof(RenderFrameMetadataObserver_ReportAllFrameSubmissionsForTesting_Params_Data) == 16,
              "Bad sizeof(RenderFrameMetadataObserver_ReportAllFrameSubmissionsForTesting_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) RenderFrameMetadataObserverClient_OnRenderFrameMetadataChanged_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(RenderFrameMetadataObserverClient_OnRenderFrameMetadataChanged_Params_Data));
      new (data()) RenderFrameMetadataObserverClient_OnRenderFrameMetadataChanged_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    RenderFrameMetadataObserverClient_OnRenderFrameMetadataChanged_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<RenderFrameMetadataObserverClient_OnRenderFrameMetadataChanged_Params_Data>(index_);
    }
    RenderFrameMetadataObserverClient_OnRenderFrameMetadataChanged_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t frame_token;
  uint8_t pad0_[4];
  mojo::internal::Pointer<internal::RenderFrameMetadata_Data> metadata;

 private:
  RenderFrameMetadataObserverClient_OnRenderFrameMetadataChanged_Params_Data();
  ~RenderFrameMetadataObserverClient_OnRenderFrameMetadataChanged_Params_Data() = delete;
};
static_assert(sizeof(RenderFrameMetadataObserverClient_OnRenderFrameMetadataChanged_Params_Data) == 24,
              "Bad sizeof(RenderFrameMetadataObserverClient_OnRenderFrameMetadataChanged_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) RenderFrameMetadataObserverClient_OnFrameSubmissionForTesting_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(RenderFrameMetadataObserverClient_OnFrameSubmissionForTesting_Params_Data));
      new (data()) RenderFrameMetadataObserverClient_OnFrameSubmissionForTesting_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    RenderFrameMetadataObserverClient_OnFrameSubmissionForTesting_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<RenderFrameMetadataObserverClient_OnFrameSubmissionForTesting_Params_Data>(index_);
    }
    RenderFrameMetadataObserverClient_OnFrameSubmissionForTesting_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t frame_token;
  uint8_t padfinal_[4];

 private:
  RenderFrameMetadataObserverClient_OnFrameSubmissionForTesting_Params_Data();
  ~RenderFrameMetadataObserverClient_OnFrameSubmissionForTesting_Params_Data() = delete;
};
static_assert(sizeof(RenderFrameMetadataObserverClient_OnFrameSubmissionForTesting_Params_Data) == 16,
              "Bad sizeof(RenderFrameMetadataObserverClient_OnFrameSubmissionForTesting_Params_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace content

#endif  // CONTENT_COMMON_RENDER_FRAME_METADATA_MOJOM_SHARED_INTERNAL_H_