// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_KEY_SYSTEM_SUPPORT_MOJOM_SHARED_INTERNAL_H_
#define MEDIA_MOJO_INTERFACES_KEY_SYSTEM_SUPPORT_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "media/mojo/interfaces/media_types.mojom-shared-internal.h"
#include "mojo/public/cpp/bindings/lib/native_enum_data.h"
#include "mojo/public/interfaces/bindings/native_struct.mojom-shared-internal.h"

namespace mojo {
namespace internal {
class ValidationContext;
}
}
namespace media {
namespace mojom {
namespace internal {

#pragma pack(push, 1)
class  KeySystemSupport_IsKeySystemSupported_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(KeySystemSupport_IsKeySystemSupported_Params_Data));
      new (data()) KeySystemSupport_IsKeySystemSupported_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    KeySystemSupport_IsKeySystemSupported_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<KeySystemSupport_IsKeySystemSupported_Params_Data>(index_);
    }
    KeySystemSupport_IsKeySystemSupported_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> key_system;

 private:
  KeySystemSupport_IsKeySystemSupported_Params_Data();
  ~KeySystemSupport_IsKeySystemSupported_Params_Data() = delete;
};
static_assert(sizeof(KeySystemSupport_IsKeySystemSupported_Params_Data) == 16,
              "Bad sizeof(KeySystemSupport_IsKeySystemSupported_Params_Data)");
class  KeySystemSupport_IsKeySystemSupported_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(KeySystemSupport_IsKeySystemSupported_ResponseParams_Data));
      new (data()) KeySystemSupport_IsKeySystemSupported_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    KeySystemSupport_IsKeySystemSupported_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<KeySystemSupport_IsKeySystemSupported_ResponseParams_Data>(index_);
    }
    KeySystemSupport_IsKeySystemSupported_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t is_supported : 1;
  uint8_t supports_persistent_license : 1;
  uint8_t pad1_[7];
  mojo::internal::Pointer<mojo::internal::Array_Data<int32_t>> supported_video_codecs;
  mojo::internal::Pointer<mojo::internal::Array_Data<int32_t>> supported_encryption_schemes;

 private:
  KeySystemSupport_IsKeySystemSupported_ResponseParams_Data();
  ~KeySystemSupport_IsKeySystemSupported_ResponseParams_Data() = delete;
};
static_assert(sizeof(KeySystemSupport_IsKeySystemSupported_ResponseParams_Data) == 32,
              "Bad sizeof(KeySystemSupport_IsKeySystemSupported_ResponseParams_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_INTERFACES_KEY_SYSTEM_SUPPORT_MOJOM_SHARED_INTERNAL_H_