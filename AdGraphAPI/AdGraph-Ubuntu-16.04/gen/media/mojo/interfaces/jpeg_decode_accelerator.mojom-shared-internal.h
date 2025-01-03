// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_JPEG_DECODE_ACCELERATOR_MOJOM_SHARED_INTERNAL_H_
#define MEDIA_MOJO_INTERFACES_JPEG_DECODE_ACCELERATOR_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "media/mojo/interfaces/media_types.mojom-shared-internal.h"
#include "mojo/public/mojom/base/time.mojom-shared-internal.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-shared-internal.h"
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
class BitstreamBuffer_Data;

struct DecodeError_Data {
 public:
  static bool constexpr kIsExtensible = false;

  static bool IsKnownValue(int32_t value) {
    switch (value) {
      case 0:
      case 1:
      case 2:
      case 3:
      case 4:
      case 5:
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
class  BitstreamBuffer_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(BitstreamBuffer_Data));
      new (data()) BitstreamBuffer_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    BitstreamBuffer_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<BitstreamBuffer_Data>(index_);
    }
    BitstreamBuffer_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t id;
  mojo::internal::Handle_Data memory_handle;
  uint32_t size;
  uint8_t pad2_[4];
  int64_t offset;
  mojo::internal::Pointer<::mojo_base::mojom::internal::TimeDelta_Data> timestamp;
  mojo::internal::Pointer<mojo::internal::String_Data> key_id;
  mojo::internal::Pointer<mojo::internal::String_Data> iv;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<::media::mojom::internal::SubsampleEntry_Data>>> subsamples;

 private:
  BitstreamBuffer_Data();
  ~BitstreamBuffer_Data() = delete;
};
static_assert(sizeof(BitstreamBuffer_Data) == 64,
              "Bad sizeof(BitstreamBuffer_Data)");
// Used by BitstreamBuffer::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct BitstreamBuffer_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  BitstreamBuffer_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~BitstreamBuffer_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    BitstreamBuffer_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    BitstreamBuffer_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  JpegDecodeAccelerator_Initialize_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(JpegDecodeAccelerator_Initialize_Params_Data));
      new (data()) JpegDecodeAccelerator_Initialize_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    JpegDecodeAccelerator_Initialize_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<JpegDecodeAccelerator_Initialize_Params_Data>(index_);
    }
    JpegDecodeAccelerator_Initialize_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  JpegDecodeAccelerator_Initialize_Params_Data();
  ~JpegDecodeAccelerator_Initialize_Params_Data() = delete;
};
static_assert(sizeof(JpegDecodeAccelerator_Initialize_Params_Data) == 8,
              "Bad sizeof(JpegDecodeAccelerator_Initialize_Params_Data)");
class  JpegDecodeAccelerator_Initialize_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(JpegDecodeAccelerator_Initialize_ResponseParams_Data));
      new (data()) JpegDecodeAccelerator_Initialize_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    JpegDecodeAccelerator_Initialize_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<JpegDecodeAccelerator_Initialize_ResponseParams_Data>(index_);
    }
    JpegDecodeAccelerator_Initialize_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t success : 1;
  uint8_t padfinal_[7];

 private:
  JpegDecodeAccelerator_Initialize_ResponseParams_Data();
  ~JpegDecodeAccelerator_Initialize_ResponseParams_Data() = delete;
};
static_assert(sizeof(JpegDecodeAccelerator_Initialize_ResponseParams_Data) == 16,
              "Bad sizeof(JpegDecodeAccelerator_Initialize_ResponseParams_Data)");
class  JpegDecodeAccelerator_Decode_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(JpegDecodeAccelerator_Decode_Params_Data));
      new (data()) JpegDecodeAccelerator_Decode_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    JpegDecodeAccelerator_Decode_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<JpegDecodeAccelerator_Decode_Params_Data>(index_);
    }
    JpegDecodeAccelerator_Decode_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::BitstreamBuffer_Data> input_buffer;
  mojo::internal::Pointer<::gfx::mojom::internal::Size_Data> coded_size;
  mojo::internal::Handle_Data output_handle;
  uint32_t output_buffer_size;

 private:
  JpegDecodeAccelerator_Decode_Params_Data();
  ~JpegDecodeAccelerator_Decode_Params_Data() = delete;
};
static_assert(sizeof(JpegDecodeAccelerator_Decode_Params_Data) == 32,
              "Bad sizeof(JpegDecodeAccelerator_Decode_Params_Data)");
class  JpegDecodeAccelerator_Decode_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(JpegDecodeAccelerator_Decode_ResponseParams_Data));
      new (data()) JpegDecodeAccelerator_Decode_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    JpegDecodeAccelerator_Decode_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<JpegDecodeAccelerator_Decode_ResponseParams_Data>(index_);
    }
    JpegDecodeAccelerator_Decode_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t bitstream_buffer_id;
  int32_t error;

 private:
  JpegDecodeAccelerator_Decode_ResponseParams_Data();
  ~JpegDecodeAccelerator_Decode_ResponseParams_Data() = delete;
};
static_assert(sizeof(JpegDecodeAccelerator_Decode_ResponseParams_Data) == 16,
              "Bad sizeof(JpegDecodeAccelerator_Decode_ResponseParams_Data)");
class  JpegDecodeAccelerator_DecodeWithFD_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(JpegDecodeAccelerator_DecodeWithFD_Params_Data));
      new (data()) JpegDecodeAccelerator_DecodeWithFD_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    JpegDecodeAccelerator_DecodeWithFD_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<JpegDecodeAccelerator_DecodeWithFD_Params_Data>(index_);
    }
    JpegDecodeAccelerator_DecodeWithFD_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t buffer_id;
  mojo::internal::Handle_Data input_fd;
  uint32_t input_buffer_size;
  int32_t coded_size_width;
  int32_t coded_size_height;
  mojo::internal::Handle_Data output_fd;
  uint32_t output_buffer_size;
  uint8_t padfinal_[4];

 private:
  JpegDecodeAccelerator_DecodeWithFD_Params_Data();
  ~JpegDecodeAccelerator_DecodeWithFD_Params_Data() = delete;
};
static_assert(sizeof(JpegDecodeAccelerator_DecodeWithFD_Params_Data) == 40,
              "Bad sizeof(JpegDecodeAccelerator_DecodeWithFD_Params_Data)");
class  JpegDecodeAccelerator_DecodeWithFD_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(JpegDecodeAccelerator_DecodeWithFD_ResponseParams_Data));
      new (data()) JpegDecodeAccelerator_DecodeWithFD_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    JpegDecodeAccelerator_DecodeWithFD_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<JpegDecodeAccelerator_DecodeWithFD_ResponseParams_Data>(index_);
    }
    JpegDecodeAccelerator_DecodeWithFD_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t buffer_id;
  int32_t error;

 private:
  JpegDecodeAccelerator_DecodeWithFD_ResponseParams_Data();
  ~JpegDecodeAccelerator_DecodeWithFD_ResponseParams_Data() = delete;
};
static_assert(sizeof(JpegDecodeAccelerator_DecodeWithFD_ResponseParams_Data) == 16,
              "Bad sizeof(JpegDecodeAccelerator_DecodeWithFD_ResponseParams_Data)");
class  JpegDecodeAccelerator_Uninitialize_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(JpegDecodeAccelerator_Uninitialize_Params_Data));
      new (data()) JpegDecodeAccelerator_Uninitialize_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    JpegDecodeAccelerator_Uninitialize_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<JpegDecodeAccelerator_Uninitialize_Params_Data>(index_);
    }
    JpegDecodeAccelerator_Uninitialize_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  JpegDecodeAccelerator_Uninitialize_Params_Data();
  ~JpegDecodeAccelerator_Uninitialize_Params_Data() = delete;
};
static_assert(sizeof(JpegDecodeAccelerator_Uninitialize_Params_Data) == 8,
              "Bad sizeof(JpegDecodeAccelerator_Uninitialize_Params_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_INTERFACES_JPEG_DECODE_ACCELERATOR_MOJOM_SHARED_INTERNAL_H_