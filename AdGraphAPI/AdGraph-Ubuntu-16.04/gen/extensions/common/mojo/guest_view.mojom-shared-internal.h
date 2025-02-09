// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef EXTENSIONS_COMMON_MOJO_GUEST_VIEW_MOJOM_SHARED_INTERNAL_H_
#define EXTENSIONS_COMMON_MOJO_GUEST_VIEW_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "content/public/common/transferrable_url_loader.mojom-shared-internal.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-shared-internal.h"
#include "url/mojom/url.mojom-shared-internal.h"
#include "mojo/public/cpp/bindings/lib/native_enum_data.h"
#include "mojo/public/interfaces/bindings/native_struct.mojom-shared-internal.h"

namespace mojo {
namespace internal {
class ValidationContext;
}
}
namespace extensions {
namespace mojom {
namespace internal {

#pragma pack(push, 1)
class  GuestView_CreateEmbeddedMimeHandlerViewGuest_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(GuestView_CreateEmbeddedMimeHandlerViewGuest_Params_Data));
      new (data()) GuestView_CreateEmbeddedMimeHandlerViewGuest_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    GuestView_CreateEmbeddedMimeHandlerViewGuest_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<GuestView_CreateEmbeddedMimeHandlerViewGuest_Params_Data>(index_);
    }
    GuestView_CreateEmbeddedMimeHandlerViewGuest_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t render_frame_id;
  int32_t tab_id;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> original_url;
  int32_t element_instance_id;
  uint8_t pad3_[4];
  mojo::internal::Pointer<::gfx::mojom::internal::Size_Data> element_size;
  mojo::internal::Pointer<::content::mojom::internal::TransferrableURLLoader_Data> transferrable_url_loader;

 private:
  GuestView_CreateEmbeddedMimeHandlerViewGuest_Params_Data();
  ~GuestView_CreateEmbeddedMimeHandlerViewGuest_Params_Data() = delete;
};
static_assert(sizeof(GuestView_CreateEmbeddedMimeHandlerViewGuest_Params_Data) == 48,
              "Bad sizeof(GuestView_CreateEmbeddedMimeHandlerViewGuest_Params_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace extensions

#endif  // EXTENSIONS_COMMON_MOJO_GUEST_VIEW_MOJOM_SHARED_INTERNAL_H_