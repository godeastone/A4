// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_RENDER_FRAME_MESSAGE_FILTER_MOJOM_SHARED_INTERNAL_H_
#define CONTENT_COMMON_RENDER_FRAME_MESSAGE_FILTER_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "url/mojom/url.mojom-shared-internal.h"
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
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) RenderFrameMessageFilter_SetCookie_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(RenderFrameMessageFilter_SetCookie_Params_Data));
      new (data()) RenderFrameMessageFilter_SetCookie_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    RenderFrameMessageFilter_SetCookie_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<RenderFrameMessageFilter_SetCookie_Params_Data>(index_);
    }
    RenderFrameMessageFilter_SetCookie_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t render_frame_id;
  uint8_t pad0_[4];
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> url;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> first_party_for_cookies;
  mojo::internal::Pointer<mojo::internal::String_Data> cookie;

 private:
  RenderFrameMessageFilter_SetCookie_Params_Data();
  ~RenderFrameMessageFilter_SetCookie_Params_Data() = delete;
};
static_assert(sizeof(RenderFrameMessageFilter_SetCookie_Params_Data) == 40,
              "Bad sizeof(RenderFrameMessageFilter_SetCookie_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) RenderFrameMessageFilter_SetCookie_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(RenderFrameMessageFilter_SetCookie_ResponseParams_Data));
      new (data()) RenderFrameMessageFilter_SetCookie_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    RenderFrameMessageFilter_SetCookie_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<RenderFrameMessageFilter_SetCookie_ResponseParams_Data>(index_);
    }
    RenderFrameMessageFilter_SetCookie_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  RenderFrameMessageFilter_SetCookie_ResponseParams_Data();
  ~RenderFrameMessageFilter_SetCookie_ResponseParams_Data() = delete;
};
static_assert(sizeof(RenderFrameMessageFilter_SetCookie_ResponseParams_Data) == 8,
              "Bad sizeof(RenderFrameMessageFilter_SetCookie_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) RenderFrameMessageFilter_GetCookies_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(RenderFrameMessageFilter_GetCookies_Params_Data));
      new (data()) RenderFrameMessageFilter_GetCookies_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    RenderFrameMessageFilter_GetCookies_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<RenderFrameMessageFilter_GetCookies_Params_Data>(index_);
    }
    RenderFrameMessageFilter_GetCookies_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t render_frame_id;
  uint8_t pad0_[4];
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> url;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> first_party_for_cookies;

 private:
  RenderFrameMessageFilter_GetCookies_Params_Data();
  ~RenderFrameMessageFilter_GetCookies_Params_Data() = delete;
};
static_assert(sizeof(RenderFrameMessageFilter_GetCookies_Params_Data) == 32,
              "Bad sizeof(RenderFrameMessageFilter_GetCookies_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) RenderFrameMessageFilter_GetCookies_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(RenderFrameMessageFilter_GetCookies_ResponseParams_Data));
      new (data()) RenderFrameMessageFilter_GetCookies_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    RenderFrameMessageFilter_GetCookies_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<RenderFrameMessageFilter_GetCookies_ResponseParams_Data>(index_);
    }
    RenderFrameMessageFilter_GetCookies_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> cookies;

 private:
  RenderFrameMessageFilter_GetCookies_ResponseParams_Data();
  ~RenderFrameMessageFilter_GetCookies_ResponseParams_Data() = delete;
};
static_assert(sizeof(RenderFrameMessageFilter_GetCookies_ResponseParams_Data) == 16,
              "Bad sizeof(RenderFrameMessageFilter_GetCookies_ResponseParams_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace content

#endif  // CONTENT_COMMON_RENDER_FRAME_MESSAGE_FILTER_MOJOM_SHARED_INTERNAL_H_