// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_VIZ_PRIVILEGED_INTERFACES_COMPOSITING_RENDERER_SETTINGS_MOJOM_SHARED_INTERNAL_H_
#define SERVICES_VIZ_PRIVILEGED_INTERFACES_COMPOSITING_RENDERER_SETTINGS_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
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
class RendererSettings_Data;

#pragma pack(push, 1)
class  RendererSettings_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(RendererSettings_Data));
      new (data()) RendererSettings_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    RendererSettings_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<RendererSettings_Data>(index_);
    }
    RendererSettings_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t allow_antialiasing : 1;
  uint8_t finish_rendering_on_resize : 1;
  uint8_t force_antialiasing : 1;
  uint8_t force_blending_with_shaders : 1;
  uint8_t tint_gl_composited_content : 1;
  uint8_t partial_swap_enabled : 1;
  uint8_t release_overlay_resources_after_gpu_query : 1;
  uint8_t should_clear_root_render_pass : 1;
  uint8_t show_overdraw_feedback : 1;
  uint8_t enable_draw_occlusion : 1;
  uint8_t use_skia_renderer : 1;
  uint8_t use_skia_deferred_display_list : 1;
  uint8_t allow_overlays : 1;
  uint8_t pad12_[2];
  int32_t highp_threshold_min;
  int32_t slow_down_compositing_scale_factor;
  uint8_t padfinal_[4];

 private:
  RendererSettings_Data();
  ~RendererSettings_Data() = delete;
};
static_assert(sizeof(RendererSettings_Data) == 24,
              "Bad sizeof(RendererSettings_Data)");
// Used by RendererSettings::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct RendererSettings_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  RendererSettings_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~RendererSettings_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    RendererSettings_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    RendererSettings_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace viz

#endif  // SERVICES_VIZ_PRIVILEGED_INTERFACES_COMPOSITING_RENDERER_SETTINGS_MOJOM_SHARED_INTERNAL_H_