// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_ARC_COMMON_VIDEO_ENCODE_ACCELERATOR_MOJOM_SHARED_INTERNAL_H_
#define COMPONENTS_ARC_COMMON_VIDEO_ENCODE_ACCELERATOR_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
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
class VideoEncodeProfile_Data;

struct VideoPixelFormat_Data {
 public:
  static bool constexpr kIsExtensible = true;

  static bool IsKnownValue(int32_t value) {
    switch (value) {
      case 0:
      case 1:
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

struct VideoEncodeAccelerator_StorageType_Data {
 public:
  static bool constexpr kIsExtensible = true;

  static bool IsKnownValue(int32_t value) {
    switch (value) {
      case 0:
      case 1:
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

struct VideoEncodeAccelerator_Error_Data {
 public:
  static bool constexpr kIsExtensible = true;

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
class  VideoEncodeProfile_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VideoEncodeProfile_Data));
      new (data()) VideoEncodeProfile_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VideoEncodeProfile_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VideoEncodeProfile_Data>(index_);
    }
    VideoEncodeProfile_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t profile;
  uint32_t max_framerate_numerator;
  mojo::internal::Pointer<::arc::mojom::internal::Size_Data> max_resolution;
  uint32_t max_framerate_denominator;
  uint8_t padfinal_[4];

 private:
  VideoEncodeProfile_Data();
  ~VideoEncodeProfile_Data() = delete;
};
static_assert(sizeof(VideoEncodeProfile_Data) == 32,
              "Bad sizeof(VideoEncodeProfile_Data)");
// Used by VideoEncodeProfile::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct VideoEncodeProfile_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  VideoEncodeProfile_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~VideoEncodeProfile_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    VideoEncodeProfile_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    VideoEncodeProfile_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  VideoEncodeAccelerator_GetSupportedProfiles_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VideoEncodeAccelerator_GetSupportedProfiles_Params_Data));
      new (data()) VideoEncodeAccelerator_GetSupportedProfiles_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VideoEncodeAccelerator_GetSupportedProfiles_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VideoEncodeAccelerator_GetSupportedProfiles_Params_Data>(index_);
    }
    VideoEncodeAccelerator_GetSupportedProfiles_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  VideoEncodeAccelerator_GetSupportedProfiles_Params_Data();
  ~VideoEncodeAccelerator_GetSupportedProfiles_Params_Data() = delete;
};
static_assert(sizeof(VideoEncodeAccelerator_GetSupportedProfiles_Params_Data) == 8,
              "Bad sizeof(VideoEncodeAccelerator_GetSupportedProfiles_Params_Data)");
class  VideoEncodeAccelerator_GetSupportedProfiles_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VideoEncodeAccelerator_GetSupportedProfiles_ResponseParams_Data));
      new (data()) VideoEncodeAccelerator_GetSupportedProfiles_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VideoEncodeAccelerator_GetSupportedProfiles_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VideoEncodeAccelerator_GetSupportedProfiles_ResponseParams_Data>(index_);
    }
    VideoEncodeAccelerator_GetSupportedProfiles_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::VideoEncodeProfile_Data>>> profiles;

 private:
  VideoEncodeAccelerator_GetSupportedProfiles_ResponseParams_Data();
  ~VideoEncodeAccelerator_GetSupportedProfiles_ResponseParams_Data() = delete;
};
static_assert(sizeof(VideoEncodeAccelerator_GetSupportedProfiles_ResponseParams_Data) == 16,
              "Bad sizeof(VideoEncodeAccelerator_GetSupportedProfiles_ResponseParams_Data)");
class  VideoEncodeAccelerator_Initialize_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VideoEncodeAccelerator_Initialize_Params_Data));
      new (data()) VideoEncodeAccelerator_Initialize_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VideoEncodeAccelerator_Initialize_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VideoEncodeAccelerator_Initialize_Params_Data>(index_);
    }
    VideoEncodeAccelerator_Initialize_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t input_format;
  int32_t input_storage;
  mojo::internal::Pointer<::arc::mojom::internal::Size_Data> visible_size;
  int32_t output_profile;
  uint32_t initial_bitrate;
  mojo::internal::Interface_Data client;

 private:
  VideoEncodeAccelerator_Initialize_Params_Data();
  ~VideoEncodeAccelerator_Initialize_Params_Data() = delete;
};
static_assert(sizeof(VideoEncodeAccelerator_Initialize_Params_Data) == 40,
              "Bad sizeof(VideoEncodeAccelerator_Initialize_Params_Data)");
class  VideoEncodeAccelerator_Initialize_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VideoEncodeAccelerator_Initialize_ResponseParams_Data));
      new (data()) VideoEncodeAccelerator_Initialize_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VideoEncodeAccelerator_Initialize_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VideoEncodeAccelerator_Initialize_ResponseParams_Data>(index_);
    }
    VideoEncodeAccelerator_Initialize_ResponseParams_Data* operator->() { return data(); }

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
  VideoEncodeAccelerator_Initialize_ResponseParams_Data();
  ~VideoEncodeAccelerator_Initialize_ResponseParams_Data() = delete;
};
static_assert(sizeof(VideoEncodeAccelerator_Initialize_ResponseParams_Data) == 16,
              "Bad sizeof(VideoEncodeAccelerator_Initialize_ResponseParams_Data)");
class  VideoEncodeAccelerator_Encode_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VideoEncodeAccelerator_Encode_Params_Data));
      new (data()) VideoEncodeAccelerator_Encode_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VideoEncodeAccelerator_Encode_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VideoEncodeAccelerator_Encode_Params_Data>(index_);
    }
    VideoEncodeAccelerator_Encode_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data frame_fd;
  uint8_t force_keyframe : 1;
  uint8_t pad1_[3];
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<::arc::mojom::internal::VideoFramePlane_Data>>> planes;
  int64_t timestamp;

 private:
  VideoEncodeAccelerator_Encode_Params_Data();
  ~VideoEncodeAccelerator_Encode_Params_Data() = delete;
};
static_assert(sizeof(VideoEncodeAccelerator_Encode_Params_Data) == 32,
              "Bad sizeof(VideoEncodeAccelerator_Encode_Params_Data)");
class  VideoEncodeAccelerator_Encode_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VideoEncodeAccelerator_Encode_ResponseParams_Data));
      new (data()) VideoEncodeAccelerator_Encode_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VideoEncodeAccelerator_Encode_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VideoEncodeAccelerator_Encode_ResponseParams_Data>(index_);
    }
    VideoEncodeAccelerator_Encode_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  VideoEncodeAccelerator_Encode_ResponseParams_Data();
  ~VideoEncodeAccelerator_Encode_ResponseParams_Data() = delete;
};
static_assert(sizeof(VideoEncodeAccelerator_Encode_ResponseParams_Data) == 8,
              "Bad sizeof(VideoEncodeAccelerator_Encode_ResponseParams_Data)");
class  VideoEncodeAccelerator_UseBitstreamBuffer_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VideoEncodeAccelerator_UseBitstreamBuffer_Params_Data));
      new (data()) VideoEncodeAccelerator_UseBitstreamBuffer_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VideoEncodeAccelerator_UseBitstreamBuffer_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VideoEncodeAccelerator_UseBitstreamBuffer_Params_Data>(index_);
    }
    VideoEncodeAccelerator_UseBitstreamBuffer_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data shmem_fd;
  uint32_t offset;
  uint32_t size;
  uint8_t padfinal_[4];

 private:
  VideoEncodeAccelerator_UseBitstreamBuffer_Params_Data();
  ~VideoEncodeAccelerator_UseBitstreamBuffer_Params_Data() = delete;
};
static_assert(sizeof(VideoEncodeAccelerator_UseBitstreamBuffer_Params_Data) == 24,
              "Bad sizeof(VideoEncodeAccelerator_UseBitstreamBuffer_Params_Data)");
class  VideoEncodeAccelerator_UseBitstreamBuffer_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VideoEncodeAccelerator_UseBitstreamBuffer_ResponseParams_Data));
      new (data()) VideoEncodeAccelerator_UseBitstreamBuffer_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VideoEncodeAccelerator_UseBitstreamBuffer_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VideoEncodeAccelerator_UseBitstreamBuffer_ResponseParams_Data>(index_);
    }
    VideoEncodeAccelerator_UseBitstreamBuffer_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t payload_size;
  uint8_t key_frame : 1;
  uint8_t pad1_[3];
  int64_t timestamp;

 private:
  VideoEncodeAccelerator_UseBitstreamBuffer_ResponseParams_Data();
  ~VideoEncodeAccelerator_UseBitstreamBuffer_ResponseParams_Data() = delete;
};
static_assert(sizeof(VideoEncodeAccelerator_UseBitstreamBuffer_ResponseParams_Data) == 24,
              "Bad sizeof(VideoEncodeAccelerator_UseBitstreamBuffer_ResponseParams_Data)");
class  VideoEncodeAccelerator_RequestEncodingParametersChange_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VideoEncodeAccelerator_RequestEncodingParametersChange_Params_Data));
      new (data()) VideoEncodeAccelerator_RequestEncodingParametersChange_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VideoEncodeAccelerator_RequestEncodingParametersChange_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VideoEncodeAccelerator_RequestEncodingParametersChange_Params_Data>(index_);
    }
    VideoEncodeAccelerator_RequestEncodingParametersChange_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t bitrate;
  uint32_t framerate;

 private:
  VideoEncodeAccelerator_RequestEncodingParametersChange_Params_Data();
  ~VideoEncodeAccelerator_RequestEncodingParametersChange_Params_Data() = delete;
};
static_assert(sizeof(VideoEncodeAccelerator_RequestEncodingParametersChange_Params_Data) == 16,
              "Bad sizeof(VideoEncodeAccelerator_RequestEncodingParametersChange_Params_Data)");
class  VideoEncodeAccelerator_Flush_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VideoEncodeAccelerator_Flush_Params_Data));
      new (data()) VideoEncodeAccelerator_Flush_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VideoEncodeAccelerator_Flush_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VideoEncodeAccelerator_Flush_Params_Data>(index_);
    }
    VideoEncodeAccelerator_Flush_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  VideoEncodeAccelerator_Flush_Params_Data();
  ~VideoEncodeAccelerator_Flush_Params_Data() = delete;
};
static_assert(sizeof(VideoEncodeAccelerator_Flush_Params_Data) == 8,
              "Bad sizeof(VideoEncodeAccelerator_Flush_Params_Data)");
class  VideoEncodeAccelerator_Flush_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VideoEncodeAccelerator_Flush_ResponseParams_Data));
      new (data()) VideoEncodeAccelerator_Flush_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VideoEncodeAccelerator_Flush_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VideoEncodeAccelerator_Flush_ResponseParams_Data>(index_);
    }
    VideoEncodeAccelerator_Flush_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t flush_done : 1;
  uint8_t padfinal_[7];

 private:
  VideoEncodeAccelerator_Flush_ResponseParams_Data();
  ~VideoEncodeAccelerator_Flush_ResponseParams_Data() = delete;
};
static_assert(sizeof(VideoEncodeAccelerator_Flush_ResponseParams_Data) == 16,
              "Bad sizeof(VideoEncodeAccelerator_Flush_ResponseParams_Data)");
class  VideoEncodeClient_RequireBitstreamBuffers_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VideoEncodeClient_RequireBitstreamBuffers_Params_Data));
      new (data()) VideoEncodeClient_RequireBitstreamBuffers_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VideoEncodeClient_RequireBitstreamBuffers_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VideoEncodeClient_RequireBitstreamBuffers_Params_Data>(index_);
    }
    VideoEncodeClient_RequireBitstreamBuffers_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t input_count;
  uint32_t output_buffer_size;
  mojo::internal::Pointer<::arc::mojom::internal::Size_Data> input_coded_size;

 private:
  VideoEncodeClient_RequireBitstreamBuffers_Params_Data();
  ~VideoEncodeClient_RequireBitstreamBuffers_Params_Data() = delete;
};
static_assert(sizeof(VideoEncodeClient_RequireBitstreamBuffers_Params_Data) == 24,
              "Bad sizeof(VideoEncodeClient_RequireBitstreamBuffers_Params_Data)");
class  VideoEncodeClient_NotifyError_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VideoEncodeClient_NotifyError_Params_Data));
      new (data()) VideoEncodeClient_NotifyError_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VideoEncodeClient_NotifyError_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VideoEncodeClient_NotifyError_Params_Data>(index_);
    }
    VideoEncodeClient_NotifyError_Params_Data* operator->() { return data(); }

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
  VideoEncodeClient_NotifyError_Params_Data();
  ~VideoEncodeClient_NotifyError_Params_Data() = delete;
};
static_assert(sizeof(VideoEncodeClient_NotifyError_Params_Data) == 16,
              "Bad sizeof(VideoEncodeClient_NotifyError_Params_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace arc

#endif  // COMPONENTS_ARC_COMMON_VIDEO_ENCODE_ACCELERATOR_MOJOM_SHARED_INTERNAL_H_