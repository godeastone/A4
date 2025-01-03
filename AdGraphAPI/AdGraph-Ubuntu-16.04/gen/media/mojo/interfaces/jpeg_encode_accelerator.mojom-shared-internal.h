// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_JPEG_ENCODE_ACCELERATOR_MOJOM_SHARED_INTERNAL_H_
#define MEDIA_MOJO_INTERFACES_JPEG_ENCODE_ACCELERATOR_MOJOM_SHARED_INTERNAL_H_

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

struct EncodeStatus_Data {
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
      case 6:
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
class  JpegEncodeAccelerator_Initialize_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(JpegEncodeAccelerator_Initialize_Params_Data));
      new (data()) JpegEncodeAccelerator_Initialize_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    JpegEncodeAccelerator_Initialize_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<JpegEncodeAccelerator_Initialize_Params_Data>(index_);
    }
    JpegEncodeAccelerator_Initialize_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  JpegEncodeAccelerator_Initialize_Params_Data();
  ~JpegEncodeAccelerator_Initialize_Params_Data() = delete;
};
static_assert(sizeof(JpegEncodeAccelerator_Initialize_Params_Data) == 8,
              "Bad sizeof(JpegEncodeAccelerator_Initialize_Params_Data)");
class  JpegEncodeAccelerator_Initialize_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(JpegEncodeAccelerator_Initialize_ResponseParams_Data));
      new (data()) JpegEncodeAccelerator_Initialize_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    JpegEncodeAccelerator_Initialize_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<JpegEncodeAccelerator_Initialize_ResponseParams_Data>(index_);
    }
    JpegEncodeAccelerator_Initialize_ResponseParams_Data* operator->() { return data(); }

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
  JpegEncodeAccelerator_Initialize_ResponseParams_Data();
  ~JpegEncodeAccelerator_Initialize_ResponseParams_Data() = delete;
};
static_assert(sizeof(JpegEncodeAccelerator_Initialize_ResponseParams_Data) == 16,
              "Bad sizeof(JpegEncodeAccelerator_Initialize_ResponseParams_Data)");
class  JpegEncodeAccelerator_EncodeWithFD_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(JpegEncodeAccelerator_EncodeWithFD_Params_Data));
      new (data()) JpegEncodeAccelerator_EncodeWithFD_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    JpegEncodeAccelerator_EncodeWithFD_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<JpegEncodeAccelerator_EncodeWithFD_Params_Data>(index_);
    }
    JpegEncodeAccelerator_EncodeWithFD_Params_Data* operator->() { return data(); }

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
  mojo::internal::Handle_Data exif_fd;
  uint32_t exif_buffer_size;
  mojo::internal::Handle_Data output_fd;
  uint32_t output_buffer_size;
  uint8_t padfinal_[4];

 private:
  JpegEncodeAccelerator_EncodeWithFD_Params_Data();
  ~JpegEncodeAccelerator_EncodeWithFD_Params_Data() = delete;
};
static_assert(sizeof(JpegEncodeAccelerator_EncodeWithFD_Params_Data) == 48,
              "Bad sizeof(JpegEncodeAccelerator_EncodeWithFD_Params_Data)");
class  JpegEncodeAccelerator_EncodeWithFD_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(JpegEncodeAccelerator_EncodeWithFD_ResponseParams_Data));
      new (data()) JpegEncodeAccelerator_EncodeWithFD_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    JpegEncodeAccelerator_EncodeWithFD_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<JpegEncodeAccelerator_EncodeWithFD_ResponseParams_Data>(index_);
    }
    JpegEncodeAccelerator_EncodeWithFD_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t buffer_id;
  uint32_t encoded_buffer_size;
  int32_t status;
  uint8_t padfinal_[4];

 private:
  JpegEncodeAccelerator_EncodeWithFD_ResponseParams_Data();
  ~JpegEncodeAccelerator_EncodeWithFD_ResponseParams_Data() = delete;
};
static_assert(sizeof(JpegEncodeAccelerator_EncodeWithFD_ResponseParams_Data) == 24,
              "Bad sizeof(JpegEncodeAccelerator_EncodeWithFD_ResponseParams_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_INTERFACES_JPEG_ENCODE_ACCELERATOR_MOJOM_SHARED_INTERNAL_H_