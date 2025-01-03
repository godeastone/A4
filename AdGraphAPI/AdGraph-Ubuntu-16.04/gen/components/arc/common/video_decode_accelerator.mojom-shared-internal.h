// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_ARC_COMMON_VIDEO_DECODE_ACCELERATOR_MOJOM_SHARED_INTERNAL_H_
#define COMPONENTS_ARC_COMMON_VIDEO_DECODE_ACCELERATOR_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "components/arc/common/gfx.mojom-shared-internal.h"
#include "components/arc/common/video_common.mojom-shared-internal.h"
#include "mojo/public/cpp/bindings/lib/native_enum_data.h"
#include "mojo/public/interfaces/bindings/native_struct.mojom-shared-internal.h"

namespace mojo {
namespace internal {
class ValidationContext;
}
}
namespace arc {
namespace mojom {
namespace internal {
class BitstreamBuffer_Data;
class Picture_Data;
class PictureBufferFormat_Data;
class VideoDecodeAcceleratorConfig_Data;

struct VideoDecodeAccelerator_Result_Data {
 public:
  static bool constexpr kIsExtensible = true;

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
  int32_t bitstream_id;
  mojo::internal::Handle_Data handle_fd;
  uint32_t offset;
  uint32_t bytes_used;

 private:
  BitstreamBuffer_Data();
  ~BitstreamBuffer_Data() = delete;
};
static_assert(sizeof(BitstreamBuffer_Data) == 24,
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
class  Picture_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Picture_Data));
      new (data()) Picture_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Picture_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Picture_Data>(index_);
    }
    Picture_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t picture_buffer_id;
  int32_t bitstream_id;
  mojo::internal::Pointer<::arc::mojom::internal::Rect_Data> crop_rect;

 private:
  Picture_Data();
  ~Picture_Data() = delete;
};
static_assert(sizeof(Picture_Data) == 24,
              "Bad sizeof(Picture_Data)");
// Used by Picture::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct Picture_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  Picture_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~Picture_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    Picture_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    Picture_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  PictureBufferFormat_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PictureBufferFormat_Data));
      new (data()) PictureBufferFormat_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PictureBufferFormat_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PictureBufferFormat_Data>(index_);
    }
    PictureBufferFormat_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t min_num_buffers;
  uint8_t pad0_[4];
  mojo::internal::Pointer<::arc::mojom::internal::Size_Data> coded_size;

 private:
  PictureBufferFormat_Data();
  ~PictureBufferFormat_Data() = delete;
};
static_assert(sizeof(PictureBufferFormat_Data) == 24,
              "Bad sizeof(PictureBufferFormat_Data)");
// Used by PictureBufferFormat::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct PictureBufferFormat_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  PictureBufferFormat_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~PictureBufferFormat_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    PictureBufferFormat_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    PictureBufferFormat_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  VideoDecodeAcceleratorConfig_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VideoDecodeAcceleratorConfig_Data));
      new (data()) VideoDecodeAcceleratorConfig_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VideoDecodeAcceleratorConfig_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VideoDecodeAcceleratorConfig_Data>(index_);
    }
    VideoDecodeAcceleratorConfig_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t profile;
  uint8_t secure_mode : 1;
  uint8_t padfinal_[3];

 private:
  VideoDecodeAcceleratorConfig_Data();
  ~VideoDecodeAcceleratorConfig_Data() = delete;
};
static_assert(sizeof(VideoDecodeAcceleratorConfig_Data) == 16,
              "Bad sizeof(VideoDecodeAcceleratorConfig_Data)");
// Used by VideoDecodeAcceleratorConfig::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct VideoDecodeAcceleratorConfig_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  VideoDecodeAcceleratorConfig_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~VideoDecodeAcceleratorConfig_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    VideoDecodeAcceleratorConfig_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    VideoDecodeAcceleratorConfig_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  VideoDecodeAccelerator_Initialize_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VideoDecodeAccelerator_Initialize_Params_Data));
      new (data()) VideoDecodeAccelerator_Initialize_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VideoDecodeAccelerator_Initialize_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VideoDecodeAccelerator_Initialize_Params_Data>(index_);
    }
    VideoDecodeAccelerator_Initialize_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::VideoDecodeAcceleratorConfig_Data> config;
  mojo::internal::Interface_Data client;

 private:
  VideoDecodeAccelerator_Initialize_Params_Data();
  ~VideoDecodeAccelerator_Initialize_Params_Data() = delete;
};
static_assert(sizeof(VideoDecodeAccelerator_Initialize_Params_Data) == 24,
              "Bad sizeof(VideoDecodeAccelerator_Initialize_Params_Data)");
class  VideoDecodeAccelerator_Initialize_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VideoDecodeAccelerator_Initialize_ResponseParams_Data));
      new (data()) VideoDecodeAccelerator_Initialize_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VideoDecodeAccelerator_Initialize_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VideoDecodeAccelerator_Initialize_ResponseParams_Data>(index_);
    }
    VideoDecodeAccelerator_Initialize_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t result;
  uint8_t padfinal_[4];

 private:
  VideoDecodeAccelerator_Initialize_ResponseParams_Data();
  ~VideoDecodeAccelerator_Initialize_ResponseParams_Data() = delete;
};
static_assert(sizeof(VideoDecodeAccelerator_Initialize_ResponseParams_Data) == 16,
              "Bad sizeof(VideoDecodeAccelerator_Initialize_ResponseParams_Data)");
class  VideoDecodeAccelerator_Decode_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VideoDecodeAccelerator_Decode_Params_Data));
      new (data()) VideoDecodeAccelerator_Decode_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VideoDecodeAccelerator_Decode_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VideoDecodeAccelerator_Decode_Params_Data>(index_);
    }
    VideoDecodeAccelerator_Decode_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::BitstreamBuffer_Data> bitstream_buffer;

 private:
  VideoDecodeAccelerator_Decode_Params_Data();
  ~VideoDecodeAccelerator_Decode_Params_Data() = delete;
};
static_assert(sizeof(VideoDecodeAccelerator_Decode_Params_Data) == 16,
              "Bad sizeof(VideoDecodeAccelerator_Decode_Params_Data)");
class  VideoDecodeAccelerator_AssignPictureBuffers_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VideoDecodeAccelerator_AssignPictureBuffers_Params_Data));
      new (data()) VideoDecodeAccelerator_AssignPictureBuffers_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VideoDecodeAccelerator_AssignPictureBuffers_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VideoDecodeAccelerator_AssignPictureBuffers_Params_Data>(index_);
    }
    VideoDecodeAccelerator_AssignPictureBuffers_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t count;
  uint8_t padfinal_[4];

 private:
  VideoDecodeAccelerator_AssignPictureBuffers_Params_Data();
  ~VideoDecodeAccelerator_AssignPictureBuffers_Params_Data() = delete;
};
static_assert(sizeof(VideoDecodeAccelerator_AssignPictureBuffers_Params_Data) == 16,
              "Bad sizeof(VideoDecodeAccelerator_AssignPictureBuffers_Params_Data)");
class  VideoDecodeAccelerator_ImportBufferForPicture_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VideoDecodeAccelerator_ImportBufferForPicture_Params_Data));
      new (data()) VideoDecodeAccelerator_ImportBufferForPicture_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VideoDecodeAccelerator_ImportBufferForPicture_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VideoDecodeAccelerator_ImportBufferForPicture_Params_Data>(index_);
    }
    VideoDecodeAccelerator_ImportBufferForPicture_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t picture_buffer_id;
  int32_t format;
  mojo::internal::Handle_Data handle_fd;
  uint8_t pad2_[4];
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<::arc::mojom::internal::VideoFramePlane_Data>>> planes;

 private:
  VideoDecodeAccelerator_ImportBufferForPicture_Params_Data();
  ~VideoDecodeAccelerator_ImportBufferForPicture_Params_Data() = delete;
};
static_assert(sizeof(VideoDecodeAccelerator_ImportBufferForPicture_Params_Data) == 32,
              "Bad sizeof(VideoDecodeAccelerator_ImportBufferForPicture_Params_Data)");
class  VideoDecodeAccelerator_ReusePictureBuffer_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VideoDecodeAccelerator_ReusePictureBuffer_Params_Data));
      new (data()) VideoDecodeAccelerator_ReusePictureBuffer_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VideoDecodeAccelerator_ReusePictureBuffer_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VideoDecodeAccelerator_ReusePictureBuffer_Params_Data>(index_);
    }
    VideoDecodeAccelerator_ReusePictureBuffer_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t picture_buffer_id;
  uint8_t padfinal_[4];

 private:
  VideoDecodeAccelerator_ReusePictureBuffer_Params_Data();
  ~VideoDecodeAccelerator_ReusePictureBuffer_Params_Data() = delete;
};
static_assert(sizeof(VideoDecodeAccelerator_ReusePictureBuffer_Params_Data) == 16,
              "Bad sizeof(VideoDecodeAccelerator_ReusePictureBuffer_Params_Data)");
class  VideoDecodeAccelerator_Reset_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VideoDecodeAccelerator_Reset_Params_Data));
      new (data()) VideoDecodeAccelerator_Reset_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VideoDecodeAccelerator_Reset_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VideoDecodeAccelerator_Reset_Params_Data>(index_);
    }
    VideoDecodeAccelerator_Reset_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  VideoDecodeAccelerator_Reset_Params_Data();
  ~VideoDecodeAccelerator_Reset_Params_Data() = delete;
};
static_assert(sizeof(VideoDecodeAccelerator_Reset_Params_Data) == 8,
              "Bad sizeof(VideoDecodeAccelerator_Reset_Params_Data)");
class  VideoDecodeAccelerator_Reset_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VideoDecodeAccelerator_Reset_ResponseParams_Data));
      new (data()) VideoDecodeAccelerator_Reset_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VideoDecodeAccelerator_Reset_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VideoDecodeAccelerator_Reset_ResponseParams_Data>(index_);
    }
    VideoDecodeAccelerator_Reset_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t result;
  uint8_t padfinal_[4];

 private:
  VideoDecodeAccelerator_Reset_ResponseParams_Data();
  ~VideoDecodeAccelerator_Reset_ResponseParams_Data() = delete;
};
static_assert(sizeof(VideoDecodeAccelerator_Reset_ResponseParams_Data) == 16,
              "Bad sizeof(VideoDecodeAccelerator_Reset_ResponseParams_Data)");
class  VideoDecodeAccelerator_Flush_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VideoDecodeAccelerator_Flush_Params_Data));
      new (data()) VideoDecodeAccelerator_Flush_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VideoDecodeAccelerator_Flush_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VideoDecodeAccelerator_Flush_Params_Data>(index_);
    }
    VideoDecodeAccelerator_Flush_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  VideoDecodeAccelerator_Flush_Params_Data();
  ~VideoDecodeAccelerator_Flush_Params_Data() = delete;
};
static_assert(sizeof(VideoDecodeAccelerator_Flush_Params_Data) == 8,
              "Bad sizeof(VideoDecodeAccelerator_Flush_Params_Data)");
class  VideoDecodeAccelerator_Flush_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VideoDecodeAccelerator_Flush_ResponseParams_Data));
      new (data()) VideoDecodeAccelerator_Flush_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VideoDecodeAccelerator_Flush_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VideoDecodeAccelerator_Flush_ResponseParams_Data>(index_);
    }
    VideoDecodeAccelerator_Flush_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t result;
  uint8_t padfinal_[4];

 private:
  VideoDecodeAccelerator_Flush_ResponseParams_Data();
  ~VideoDecodeAccelerator_Flush_ResponseParams_Data() = delete;
};
static_assert(sizeof(VideoDecodeAccelerator_Flush_ResponseParams_Data) == 16,
              "Bad sizeof(VideoDecodeAccelerator_Flush_ResponseParams_Data)");
class  VideoDecodeClient_ProvidePictureBuffers_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VideoDecodeClient_ProvidePictureBuffers_Params_Data));
      new (data()) VideoDecodeClient_ProvidePictureBuffers_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VideoDecodeClient_ProvidePictureBuffers_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VideoDecodeClient_ProvidePictureBuffers_Params_Data>(index_);
    }
    VideoDecodeClient_ProvidePictureBuffers_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::PictureBufferFormat_Data> format;

 private:
  VideoDecodeClient_ProvidePictureBuffers_Params_Data();
  ~VideoDecodeClient_ProvidePictureBuffers_Params_Data() = delete;
};
static_assert(sizeof(VideoDecodeClient_ProvidePictureBuffers_Params_Data) == 16,
              "Bad sizeof(VideoDecodeClient_ProvidePictureBuffers_Params_Data)");
class  VideoDecodeClient_PictureReady_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VideoDecodeClient_PictureReady_Params_Data));
      new (data()) VideoDecodeClient_PictureReady_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VideoDecodeClient_PictureReady_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VideoDecodeClient_PictureReady_Params_Data>(index_);
    }
    VideoDecodeClient_PictureReady_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::Picture_Data> picture;

 private:
  VideoDecodeClient_PictureReady_Params_Data();
  ~VideoDecodeClient_PictureReady_Params_Data() = delete;
};
static_assert(sizeof(VideoDecodeClient_PictureReady_Params_Data) == 16,
              "Bad sizeof(VideoDecodeClient_PictureReady_Params_Data)");
class  VideoDecodeClient_NotifyEndOfBitstreamBuffer_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VideoDecodeClient_NotifyEndOfBitstreamBuffer_Params_Data));
      new (data()) VideoDecodeClient_NotifyEndOfBitstreamBuffer_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VideoDecodeClient_NotifyEndOfBitstreamBuffer_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VideoDecodeClient_NotifyEndOfBitstreamBuffer_Params_Data>(index_);
    }
    VideoDecodeClient_NotifyEndOfBitstreamBuffer_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t bitstream_id;
  uint8_t padfinal_[4];

 private:
  VideoDecodeClient_NotifyEndOfBitstreamBuffer_Params_Data();
  ~VideoDecodeClient_NotifyEndOfBitstreamBuffer_Params_Data() = delete;
};
static_assert(sizeof(VideoDecodeClient_NotifyEndOfBitstreamBuffer_Params_Data) == 16,
              "Bad sizeof(VideoDecodeClient_NotifyEndOfBitstreamBuffer_Params_Data)");
class  VideoDecodeClient_NotifyError_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VideoDecodeClient_NotifyError_Params_Data));
      new (data()) VideoDecodeClient_NotifyError_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VideoDecodeClient_NotifyError_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VideoDecodeClient_NotifyError_Params_Data>(index_);
    }
    VideoDecodeClient_NotifyError_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t error;
  uint8_t padfinal_[4];

 private:
  VideoDecodeClient_NotifyError_Params_Data();
  ~VideoDecodeClient_NotifyError_Params_Data() = delete;
};
static_assert(sizeof(VideoDecodeClient_NotifyError_Params_Data) == 16,
              "Bad sizeof(VideoDecodeClient_NotifyError_Params_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace arc

#endif  // COMPONENTS_ARC_COMMON_VIDEO_DECODE_ACCELERATOR_MOJOM_SHARED_INTERNAL_H_