// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_RENDER_WIDGET_WINDOW_TREE_CLIENT_FACTORY_MOJOM_SHARED_INTERNAL_H_
#define CONTENT_COMMON_RENDER_WIDGET_WINDOW_TREE_CLIENT_FACTORY_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "mojo/public/mojom/base/unguessable_token.mojom-shared-internal.h"
#include "services/ui/public/interfaces/window_tree.mojom-shared-internal.h"
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

#pragma pack(push, 1)
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) RenderWidgetWindowTreeClient_Embed_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(RenderWidgetWindowTreeClient_Embed_Params_Data));
      new (data()) RenderWidgetWindowTreeClient_Embed_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    RenderWidgetWindowTreeClient_Embed_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<RenderWidgetWindowTreeClient_Embed_Params_Data>(index_);
    }
    RenderWidgetWindowTreeClient_Embed_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t frame_routing_id;
  uint8_t pad0_[4];
  mojo::internal::Pointer<::mojo_base::mojom::internal::UnguessableToken_Data> token;

 private:
  RenderWidgetWindowTreeClient_Embed_Params_Data();
  ~RenderWidgetWindowTreeClient_Embed_Params_Data() = delete;
};
static_assert(sizeof(RenderWidgetWindowTreeClient_Embed_Params_Data) == 24,
              "Bad sizeof(RenderWidgetWindowTreeClient_Embed_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) RenderWidgetWindowTreeClient_DestroyFrame_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(RenderWidgetWindowTreeClient_DestroyFrame_Params_Data));
      new (data()) RenderWidgetWindowTreeClient_DestroyFrame_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    RenderWidgetWindowTreeClient_DestroyFrame_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<RenderWidgetWindowTreeClient_DestroyFrame_Params_Data>(index_);
    }
    RenderWidgetWindowTreeClient_DestroyFrame_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t frame_routing_id;
  uint8_t padfinal_[4];

 private:
  RenderWidgetWindowTreeClient_DestroyFrame_Params_Data();
  ~RenderWidgetWindowTreeClient_DestroyFrame_Params_Data() = delete;
};
static_assert(sizeof(RenderWidgetWindowTreeClient_DestroyFrame_Params_Data) == 16,
              "Bad sizeof(RenderWidgetWindowTreeClient_DestroyFrame_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) RenderWidgetWindowTreeClientFactory_CreateWindowTreeClientForRenderWidget_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(RenderWidgetWindowTreeClientFactory_CreateWindowTreeClientForRenderWidget_Params_Data));
      new (data()) RenderWidgetWindowTreeClientFactory_CreateWindowTreeClientForRenderWidget_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    RenderWidgetWindowTreeClientFactory_CreateWindowTreeClientForRenderWidget_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<RenderWidgetWindowTreeClientFactory_CreateWindowTreeClientForRenderWidget_Params_Data>(index_);
    }
    RenderWidgetWindowTreeClientFactory_CreateWindowTreeClientForRenderWidget_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t render_widget_host_routing_id;
  mojo::internal::Handle_Data window_tree_client;
  mojo::internal::Handle_Data render_widget_window_tree_client_request;
  uint8_t padfinal_[4];

 private:
  RenderWidgetWindowTreeClientFactory_CreateWindowTreeClientForRenderWidget_Params_Data();
  ~RenderWidgetWindowTreeClientFactory_CreateWindowTreeClientForRenderWidget_Params_Data() = delete;
};
static_assert(sizeof(RenderWidgetWindowTreeClientFactory_CreateWindowTreeClientForRenderWidget_Params_Data) == 24,
              "Bad sizeof(RenderWidgetWindowTreeClientFactory_CreateWindowTreeClientForRenderWidget_Params_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace content

#endif  // CONTENT_COMMON_RENDER_WIDGET_WINDOW_TREE_CLIENT_FACTORY_MOJOM_SHARED_INTERNAL_H_