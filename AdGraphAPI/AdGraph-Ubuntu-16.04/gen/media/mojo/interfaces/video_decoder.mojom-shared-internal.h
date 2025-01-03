// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_VIDEO_DECODER_MOJOM_SHARED_INTERNAL_H_
#define MEDIA_MOJO_INTERFACES_VIDEO_DECODER_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "gpu/ipc/common/sync_token.mojom-shared-internal.h"
#include "media/mojo/interfaces/media_log.mojom-shared-internal.h"
#include "media/mojo/interfaces/media_types.mojom-shared-internal.h"
#include "mojo/public/mojom/base/unguessable_token.mojom-shared-internal.h"
#include "ui/gfx/mojo/color_space.mojom-shared-internal.h"
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
class CommandBufferId_Data;
using OverlayInfo_Data = mojo::native::internal::NativeStruct_Data;

#pragma pack(push, 1)
class  CommandBufferId_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CommandBufferId_Data));
      new (data()) CommandBufferId_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CommandBufferId_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CommandBufferId_Data>(index_);
    }
    CommandBufferId_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::UnguessableToken_Data> channel_token;
  int32_t route_id;
  uint8_t padfinal_[4];

 private:
  CommandBufferId_Data();
  ~CommandBufferId_Data() = delete;
};
static_assert(sizeof(CommandBufferId_Data) == 24,
              "Bad sizeof(CommandBufferId_Data)");
// Used by CommandBufferId::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct CommandBufferId_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  CommandBufferId_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~CommandBufferId_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    CommandBufferId_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    CommandBufferId_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  VideoFrameHandleReleaser_ReleaseVideoFrame_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VideoFrameHandleReleaser_ReleaseVideoFrame_Params_Data));
      new (data()) VideoFrameHandleReleaser_ReleaseVideoFrame_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VideoFrameHandleReleaser_ReleaseVideoFrame_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VideoFrameHandleReleaser_ReleaseVideoFrame_Params_Data>(index_);
    }
    VideoFrameHandleReleaser_ReleaseVideoFrame_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::UnguessableToken_Data> release_token;
  mojo::internal::Pointer<::gpu::mojom::internal::SyncToken_Data> release_sync_token;

 private:
  VideoFrameHandleReleaser_ReleaseVideoFrame_Params_Data();
  ~VideoFrameHandleReleaser_ReleaseVideoFrame_Params_Data() = delete;
};
static_assert(sizeof(VideoFrameHandleReleaser_ReleaseVideoFrame_Params_Data) == 24,
              "Bad sizeof(VideoFrameHandleReleaser_ReleaseVideoFrame_Params_Data)");
class  VideoDecoder_Construct_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VideoDecoder_Construct_Params_Data));
      new (data()) VideoDecoder_Construct_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VideoDecoder_Construct_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VideoDecoder_Construct_Params_Data>(index_);
    }
    VideoDecoder_Construct_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::AssociatedInterface_Data client;
  mojo::internal::AssociatedInterface_Data media_log;
  mojo::internal::Handle_Data video_frame_handle_releaser;
  mojo::internal::Handle_Data decoder_buffer_pipe;
  mojo::internal::Pointer<internal::CommandBufferId_Data> command_buffer_id;
  mojo::internal::Pointer<::gfx::mojom::internal::ColorSpace_Data> target_color_space;

 private:
  VideoDecoder_Construct_Params_Data();
  ~VideoDecoder_Construct_Params_Data() = delete;
};
static_assert(sizeof(VideoDecoder_Construct_Params_Data) == 48,
              "Bad sizeof(VideoDecoder_Construct_Params_Data)");
class  VideoDecoder_Initialize_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VideoDecoder_Initialize_Params_Data));
      new (data()) VideoDecoder_Initialize_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VideoDecoder_Initialize_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VideoDecoder_Initialize_Params_Data>(index_);
    }
    VideoDecoder_Initialize_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::media::mojom::internal::VideoDecoderConfig_Data> config;
  uint8_t low_delay : 1;
  uint8_t pad1_[3];
  int32_t cdm_id;

 private:
  VideoDecoder_Initialize_Params_Data();
  ~VideoDecoder_Initialize_Params_Data() = delete;
};
static_assert(sizeof(VideoDecoder_Initialize_Params_Data) == 24,
              "Bad sizeof(VideoDecoder_Initialize_Params_Data)");
class  VideoDecoder_Initialize_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VideoDecoder_Initialize_ResponseParams_Data));
      new (data()) VideoDecoder_Initialize_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VideoDecoder_Initialize_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VideoDecoder_Initialize_ResponseParams_Data>(index_);
    }
    VideoDecoder_Initialize_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t success : 1;
  uint8_t needs_bitstream_conversion : 1;
  uint8_t pad1_[3];
  int32_t max_decode_requests;

 private:
  VideoDecoder_Initialize_ResponseParams_Data();
  ~VideoDecoder_Initialize_ResponseParams_Data() = delete;
};
static_assert(sizeof(VideoDecoder_Initialize_ResponseParams_Data) == 16,
              "Bad sizeof(VideoDecoder_Initialize_ResponseParams_Data)");
class  VideoDecoder_Decode_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VideoDecoder_Decode_Params_Data));
      new (data()) VideoDecoder_Decode_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VideoDecoder_Decode_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VideoDecoder_Decode_Params_Data>(index_);
    }
    VideoDecoder_Decode_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::media::mojom::internal::DecoderBuffer_Data> buffer;

 private:
  VideoDecoder_Decode_Params_Data();
  ~VideoDecoder_Decode_Params_Data() = delete;
};
static_assert(sizeof(VideoDecoder_Decode_Params_Data) == 16,
              "Bad sizeof(VideoDecoder_Decode_Params_Data)");
class  VideoDecoder_Decode_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VideoDecoder_Decode_ResponseParams_Data));
      new (data()) VideoDecoder_Decode_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VideoDecoder_Decode_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VideoDecoder_Decode_ResponseParams_Data>(index_);
    }
    VideoDecoder_Decode_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t status;
  uint8_t padfinal_[4];

 private:
  VideoDecoder_Decode_ResponseParams_Data();
  ~VideoDecoder_Decode_ResponseParams_Data() = delete;
};
static_assert(sizeof(VideoDecoder_Decode_ResponseParams_Data) == 16,
              "Bad sizeof(VideoDecoder_Decode_ResponseParams_Data)");
class  VideoDecoder_Reset_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VideoDecoder_Reset_Params_Data));
      new (data()) VideoDecoder_Reset_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VideoDecoder_Reset_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VideoDecoder_Reset_Params_Data>(index_);
    }
    VideoDecoder_Reset_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  VideoDecoder_Reset_Params_Data();
  ~VideoDecoder_Reset_Params_Data() = delete;
};
static_assert(sizeof(VideoDecoder_Reset_Params_Data) == 8,
              "Bad sizeof(VideoDecoder_Reset_Params_Data)");
class  VideoDecoder_Reset_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VideoDecoder_Reset_ResponseParams_Data));
      new (data()) VideoDecoder_Reset_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VideoDecoder_Reset_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VideoDecoder_Reset_ResponseParams_Data>(index_);
    }
    VideoDecoder_Reset_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  VideoDecoder_Reset_ResponseParams_Data();
  ~VideoDecoder_Reset_ResponseParams_Data() = delete;
};
static_assert(sizeof(VideoDecoder_Reset_ResponseParams_Data) == 8,
              "Bad sizeof(VideoDecoder_Reset_ResponseParams_Data)");
class  VideoDecoder_OnOverlayInfoChanged_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VideoDecoder_OnOverlayInfoChanged_Params_Data));
      new (data()) VideoDecoder_OnOverlayInfoChanged_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VideoDecoder_OnOverlayInfoChanged_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VideoDecoder_OnOverlayInfoChanged_Params_Data>(index_);
    }
    VideoDecoder_OnOverlayInfoChanged_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::OverlayInfo_Data> overlay_info;

 private:
  VideoDecoder_OnOverlayInfoChanged_Params_Data();
  ~VideoDecoder_OnOverlayInfoChanged_Params_Data() = delete;
};
static_assert(sizeof(VideoDecoder_OnOverlayInfoChanged_Params_Data) == 16,
              "Bad sizeof(VideoDecoder_OnOverlayInfoChanged_Params_Data)");
class  VideoDecoderClient_OnVideoFrameDecoded_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VideoDecoderClient_OnVideoFrameDecoded_Params_Data));
      new (data()) VideoDecoderClient_OnVideoFrameDecoded_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VideoDecoderClient_OnVideoFrameDecoded_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VideoDecoderClient_OnVideoFrameDecoded_Params_Data>(index_);
    }
    VideoDecoderClient_OnVideoFrameDecoded_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::media::mojom::internal::VideoFrame_Data> frame;
  uint8_t can_read_without_stalling : 1;
  uint8_t pad1_[7];
  mojo::internal::Pointer<::mojo_base::mojom::internal::UnguessableToken_Data> release_token;

 private:
  VideoDecoderClient_OnVideoFrameDecoded_Params_Data();
  ~VideoDecoderClient_OnVideoFrameDecoded_Params_Data() = delete;
};
static_assert(sizeof(VideoDecoderClient_OnVideoFrameDecoded_Params_Data) == 32,
              "Bad sizeof(VideoDecoderClient_OnVideoFrameDecoded_Params_Data)");
class  VideoDecoderClient_RequestOverlayInfo_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VideoDecoderClient_RequestOverlayInfo_Params_Data));
      new (data()) VideoDecoderClient_RequestOverlayInfo_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VideoDecoderClient_RequestOverlayInfo_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VideoDecoderClient_RequestOverlayInfo_Params_Data>(index_);
    }
    VideoDecoderClient_RequestOverlayInfo_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t restart_for_transitions : 1;
  uint8_t padfinal_[7];

 private:
  VideoDecoderClient_RequestOverlayInfo_Params_Data();
  ~VideoDecoderClient_RequestOverlayInfo_Params_Data() = delete;
};
static_assert(sizeof(VideoDecoderClient_RequestOverlayInfo_Params_Data) == 16,
              "Bad sizeof(VideoDecoderClient_RequestOverlayInfo_Params_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_INTERFACES_VIDEO_DECODER_MOJOM_SHARED_INTERNAL_H_