// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_VIDEO_ENCODE_ACCELERATOR_MOJOM_SHARED_INTERNAL_H_
#define MEDIA_MOJO_INTERFACES_VIDEO_ENCODE_ACCELERATOR_MOJOM_SHARED_INTERNAL_H_

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

struct VideoEncodeAccelerator_Error_Data {
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
class  VideoEncodeAcceleratorProvider_CreateVideoEncodeAccelerator_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VideoEncodeAcceleratorProvider_CreateVideoEncodeAccelerator_Params_Data));
      new (data()) VideoEncodeAcceleratorProvider_CreateVideoEncodeAccelerator_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VideoEncodeAcceleratorProvider_CreateVideoEncodeAccelerator_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VideoEncodeAcceleratorProvider_CreateVideoEncodeAccelerator_Params_Data>(index_);
    }
    VideoEncodeAcceleratorProvider_CreateVideoEncodeAccelerator_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data request;
  uint8_t padfinal_[4];

 private:
  VideoEncodeAcceleratorProvider_CreateVideoEncodeAccelerator_Params_Data();
  ~VideoEncodeAcceleratorProvider_CreateVideoEncodeAccelerator_Params_Data() = delete;
};
static_assert(sizeof(VideoEncodeAcceleratorProvider_CreateVideoEncodeAccelerator_Params_Data) == 16,
              "Bad sizeof(VideoEncodeAcceleratorProvider_CreateVideoEncodeAccelerator_Params_Data)");
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
  int32_t output_profile;
  mojo::internal::Pointer<::gfx::mojom::internal::Size_Data> input_visible_size;
  uint32_t initial_bitrate;
  mojo::internal::Interface_Data client;
  uint8_t padfinal_[4];

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
  uint8_t result : 1;
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
  mojo::internal::Pointer<::media::mojom::internal::VideoFrame_Data> frame;
  uint8_t force_keyframe : 1;
  uint8_t padfinal_[7];

 private:
  VideoEncodeAccelerator_Encode_Params_Data();
  ~VideoEncodeAccelerator_Encode_Params_Data() = delete;
};
static_assert(sizeof(VideoEncodeAccelerator_Encode_Params_Data) == 24,
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
class  VideoEncodeAccelerator_UseOutputBitstreamBuffer_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VideoEncodeAccelerator_UseOutputBitstreamBuffer_Params_Data));
      new (data()) VideoEncodeAccelerator_UseOutputBitstreamBuffer_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VideoEncodeAccelerator_UseOutputBitstreamBuffer_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VideoEncodeAccelerator_UseOutputBitstreamBuffer_Params_Data>(index_);
    }
    VideoEncodeAccelerator_UseOutputBitstreamBuffer_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t bitstream_buffer_id;
  mojo::internal::Handle_Data buffer;

 private:
  VideoEncodeAccelerator_UseOutputBitstreamBuffer_Params_Data();
  ~VideoEncodeAccelerator_UseOutputBitstreamBuffer_Params_Data() = delete;
};
static_assert(sizeof(VideoEncodeAccelerator_UseOutputBitstreamBuffer_Params_Data) == 16,
              "Bad sizeof(VideoEncodeAccelerator_UseOutputBitstreamBuffer_Params_Data)");
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
class  VideoEncodeAcceleratorClient_RequireBitstreamBuffers_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VideoEncodeAcceleratorClient_RequireBitstreamBuffers_Params_Data));
      new (data()) VideoEncodeAcceleratorClient_RequireBitstreamBuffers_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VideoEncodeAcceleratorClient_RequireBitstreamBuffers_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VideoEncodeAcceleratorClient_RequireBitstreamBuffers_Params_Data>(index_);
    }
    VideoEncodeAcceleratorClient_RequireBitstreamBuffers_Params_Data* operator->() { return data(); }

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
  mojo::internal::Pointer<::gfx::mojom::internal::Size_Data> input_coded_size;

 private:
  VideoEncodeAcceleratorClient_RequireBitstreamBuffers_Params_Data();
  ~VideoEncodeAcceleratorClient_RequireBitstreamBuffers_Params_Data() = delete;
};
static_assert(sizeof(VideoEncodeAcceleratorClient_RequireBitstreamBuffers_Params_Data) == 24,
              "Bad sizeof(VideoEncodeAcceleratorClient_RequireBitstreamBuffers_Params_Data)");
class  VideoEncodeAcceleratorClient_BitstreamBufferReady_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VideoEncodeAcceleratorClient_BitstreamBufferReady_Params_Data));
      new (data()) VideoEncodeAcceleratorClient_BitstreamBufferReady_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VideoEncodeAcceleratorClient_BitstreamBufferReady_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VideoEncodeAcceleratorClient_BitstreamBufferReady_Params_Data>(index_);
    }
    VideoEncodeAcceleratorClient_BitstreamBufferReady_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t bitstream_buffer_id;
  uint32_t payload_size;
  uint8_t key_frame : 1;
  uint8_t pad2_[7];
  mojo::internal::Pointer<::mojo_base::mojom::internal::TimeDelta_Data> timestamp;

 private:
  VideoEncodeAcceleratorClient_BitstreamBufferReady_Params_Data();
  ~VideoEncodeAcceleratorClient_BitstreamBufferReady_Params_Data() = delete;
};
static_assert(sizeof(VideoEncodeAcceleratorClient_BitstreamBufferReady_Params_Data) == 32,
              "Bad sizeof(VideoEncodeAcceleratorClient_BitstreamBufferReady_Params_Data)");
class  VideoEncodeAcceleratorClient_NotifyError_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VideoEncodeAcceleratorClient_NotifyError_Params_Data));
      new (data()) VideoEncodeAcceleratorClient_NotifyError_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VideoEncodeAcceleratorClient_NotifyError_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VideoEncodeAcceleratorClient_NotifyError_Params_Data>(index_);
    }
    VideoEncodeAcceleratorClient_NotifyError_Params_Data* operator->() { return data(); }

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
  VideoEncodeAcceleratorClient_NotifyError_Params_Data();
  ~VideoEncodeAcceleratorClient_NotifyError_Params_Data() = delete;
};
static_assert(sizeof(VideoEncodeAcceleratorClient_NotifyError_Params_Data) == 16,
              "Bad sizeof(VideoEncodeAcceleratorClient_NotifyError_Params_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_INTERFACES_VIDEO_ENCODE_ACCELERATOR_MOJOM_SHARED_INTERNAL_H_