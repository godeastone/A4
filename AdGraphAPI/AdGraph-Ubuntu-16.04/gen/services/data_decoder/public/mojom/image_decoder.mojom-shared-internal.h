// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_DATA_DECODER_PUBLIC_MOJOM_IMAGE_DECODER_MOJOM_SHARED_INTERNAL_H_
#define SERVICES_DATA_DECODER_PUBLIC_MOJOM_IMAGE_DECODER_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "mojo/public/mojom/base/time.mojom-shared-internal.h"
#include "skia/public/interfaces/bitmap.mojom-shared-internal.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-shared-internal.h"
#include "mojo/public/cpp/bindings/lib/native_enum_data.h"
#include "mojo/public/interfaces/bindings/native_struct.mojom-shared-internal.h"

namespace mojo {
namespace internal {
class ValidationContext;
}
}
namespace data_decoder {
namespace mojom {
namespace internal {
class AnimationFrame_Data;

struct ImageCodec_Data {
 public:
  static bool constexpr kIsExtensible = false;

  static bool IsKnownValue(int32_t value) {
    switch (value) {
      case 0:
      case 1:
      case 2:
        return true;
    }
    return false;
  }

  static bool Validate(int32_t value,
                       mojo::internal::ValidationContext* validation_context) {
    if (kIsExtensible || IsKnownValue(value))
      return true;

    ReportValidationError(validation_context,
                          mojo::internal::VALIDATION_ERROR_UNKNOWN_ENUM_VALUE);
    return false;
  }
};

#pragma pack(push, 1)
class  AnimationFrame_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(AnimationFrame_Data));
      new (data()) AnimationFrame_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    AnimationFrame_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<AnimationFrame_Data>(index_);
    }
    AnimationFrame_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::skia::mojom::internal::InlineBitmap_Data> bitmap;
  mojo::internal::Pointer<::mojo_base::mojom::internal::TimeDelta_Data> duration;

 private:
  AnimationFrame_Data();
  ~AnimationFrame_Data() = delete;
};
static_assert(sizeof(AnimationFrame_Data) == 24,
              "Bad sizeof(AnimationFrame_Data)");
// Used by AnimationFrame::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct AnimationFrame_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  AnimationFrame_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~AnimationFrame_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    AnimationFrame_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    AnimationFrame_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  ImageDecoder_DecodeImage_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ImageDecoder_DecodeImage_Params_Data));
      new (data()) ImageDecoder_DecodeImage_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ImageDecoder_DecodeImage_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ImageDecoder_DecodeImage_Params_Data>(index_);
    }
    ImageDecoder_DecodeImage_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> encoded_data;
  int32_t codec;
  uint8_t shrink_to_fit : 1;
  uint8_t pad2_[3];
  int64_t max_size_in_bytes;
  mojo::internal::Pointer<::gfx::mojom::internal::Size_Data> desired_image_frame_size;

 private:
  ImageDecoder_DecodeImage_Params_Data();
  ~ImageDecoder_DecodeImage_Params_Data() = delete;
};
static_assert(sizeof(ImageDecoder_DecodeImage_Params_Data) == 40,
              "Bad sizeof(ImageDecoder_DecodeImage_Params_Data)");
class  ImageDecoder_DecodeImage_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ImageDecoder_DecodeImage_ResponseParams_Data));
      new (data()) ImageDecoder_DecodeImage_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ImageDecoder_DecodeImage_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ImageDecoder_DecodeImage_ResponseParams_Data>(index_);
    }
    ImageDecoder_DecodeImage_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::skia::mojom::internal::Bitmap_Data> decoded_image;

 private:
  ImageDecoder_DecodeImage_ResponseParams_Data();
  ~ImageDecoder_DecodeImage_ResponseParams_Data() = delete;
};
static_assert(sizeof(ImageDecoder_DecodeImage_ResponseParams_Data) == 16,
              "Bad sizeof(ImageDecoder_DecodeImage_ResponseParams_Data)");
class  ImageDecoder_DecodeAnimation_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ImageDecoder_DecodeAnimation_Params_Data));
      new (data()) ImageDecoder_DecodeAnimation_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ImageDecoder_DecodeAnimation_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ImageDecoder_DecodeAnimation_Params_Data>(index_);
    }
    ImageDecoder_DecodeAnimation_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> encoded_data;
  uint8_t shrink_to_fit : 1;
  uint8_t pad1_[7];
  int64_t max_size_in_bytes;

 private:
  ImageDecoder_DecodeAnimation_Params_Data();
  ~ImageDecoder_DecodeAnimation_Params_Data() = delete;
};
static_assert(sizeof(ImageDecoder_DecodeAnimation_Params_Data) == 32,
              "Bad sizeof(ImageDecoder_DecodeAnimation_Params_Data)");
class  ImageDecoder_DecodeAnimation_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ImageDecoder_DecodeAnimation_ResponseParams_Data));
      new (data()) ImageDecoder_DecodeAnimation_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ImageDecoder_DecodeAnimation_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ImageDecoder_DecodeAnimation_ResponseParams_Data>(index_);
    }
    ImageDecoder_DecodeAnimation_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::AnimationFrame_Data>>> decoded_image;

 private:
  ImageDecoder_DecodeAnimation_ResponseParams_Data();
  ~ImageDecoder_DecodeAnimation_ResponseParams_Data() = delete;
};
static_assert(sizeof(ImageDecoder_DecodeAnimation_ResponseParams_Data) == 16,
              "Bad sizeof(ImageDecoder_DecodeAnimation_ResponseParams_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace data_decoder

#endif  // SERVICES_DATA_DECODER_PUBLIC_MOJOM_IMAGE_DECODER_MOJOM_SHARED_INTERNAL_H_