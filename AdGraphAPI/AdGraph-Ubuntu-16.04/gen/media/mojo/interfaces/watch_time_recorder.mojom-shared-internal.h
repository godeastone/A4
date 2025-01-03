// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_WATCH_TIME_RECORDER_MOJOM_SHARED_INTERNAL_H_
#define MEDIA_MOJO_INTERFACES_WATCH_TIME_RECORDER_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "media/mojo/interfaces/media_types.mojom-shared-internal.h"
#include "mojo/public/mojom/base/time.mojom-shared-internal.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-shared-internal.h"
#include "url/mojom/origin.mojom-shared-internal.h"
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
class PlaybackProperties_Data;

#pragma pack(push, 1)
class  PlaybackProperties_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PlaybackProperties_Data));
      new (data()) PlaybackProperties_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PlaybackProperties_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PlaybackProperties_Data>(index_);
    }
    PlaybackProperties_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t audio_codec;
  int32_t video_codec;
  uint8_t has_audio : 1;
  uint8_t has_video : 1;
  uint8_t is_background : 1;
  uint8_t is_muted : 1;
  uint8_t is_mse : 1;
  uint8_t is_eme : 1;
  uint8_t is_embedded_media_experience : 1;
  uint8_t pad8_[7];
  mojo::internal::Pointer<::gfx::mojom::internal::Size_Data> natural_size;

 private:
  PlaybackProperties_Data();
  ~PlaybackProperties_Data() = delete;
};
static_assert(sizeof(PlaybackProperties_Data) == 32,
              "Bad sizeof(PlaybackProperties_Data)");
// Used by PlaybackProperties::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct PlaybackProperties_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  PlaybackProperties_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~PlaybackProperties_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    PlaybackProperties_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    PlaybackProperties_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  WatchTimeRecorder_RecordWatchTime_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WatchTimeRecorder_RecordWatchTime_Params_Data));
      new (data()) WatchTimeRecorder_RecordWatchTime_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WatchTimeRecorder_RecordWatchTime_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WatchTimeRecorder_RecordWatchTime_Params_Data>(index_);
    }
    WatchTimeRecorder_RecordWatchTime_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t key;
  uint8_t pad0_[4];
  mojo::internal::Pointer<::mojo_base::mojom::internal::TimeDelta_Data> watch_time;

 private:
  WatchTimeRecorder_RecordWatchTime_Params_Data();
  ~WatchTimeRecorder_RecordWatchTime_Params_Data() = delete;
};
static_assert(sizeof(WatchTimeRecorder_RecordWatchTime_Params_Data) == 24,
              "Bad sizeof(WatchTimeRecorder_RecordWatchTime_Params_Data)");
class  WatchTimeRecorder_FinalizeWatchTime_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WatchTimeRecorder_FinalizeWatchTime_Params_Data));
      new (data()) WatchTimeRecorder_FinalizeWatchTime_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WatchTimeRecorder_FinalizeWatchTime_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WatchTimeRecorder_FinalizeWatchTime_Params_Data>(index_);
    }
    WatchTimeRecorder_FinalizeWatchTime_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<int32_t>> watch_time_keys;

 private:
  WatchTimeRecorder_FinalizeWatchTime_Params_Data();
  ~WatchTimeRecorder_FinalizeWatchTime_Params_Data() = delete;
};
static_assert(sizeof(WatchTimeRecorder_FinalizeWatchTime_Params_Data) == 16,
              "Bad sizeof(WatchTimeRecorder_FinalizeWatchTime_Params_Data)");
class  WatchTimeRecorder_OnError_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WatchTimeRecorder_OnError_Params_Data));
      new (data()) WatchTimeRecorder_OnError_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WatchTimeRecorder_OnError_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WatchTimeRecorder_OnError_Params_Data>(index_);
    }
    WatchTimeRecorder_OnError_Params_Data* operator->() { return data(); }

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
  WatchTimeRecorder_OnError_Params_Data();
  ~WatchTimeRecorder_OnError_Params_Data() = delete;
};
static_assert(sizeof(WatchTimeRecorder_OnError_Params_Data) == 16,
              "Bad sizeof(WatchTimeRecorder_OnError_Params_Data)");
class  WatchTimeRecorder_SetAudioDecoderName_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WatchTimeRecorder_SetAudioDecoderName_Params_Data));
      new (data()) WatchTimeRecorder_SetAudioDecoderName_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WatchTimeRecorder_SetAudioDecoderName_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WatchTimeRecorder_SetAudioDecoderName_Params_Data>(index_);
    }
    WatchTimeRecorder_SetAudioDecoderName_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> name;

 private:
  WatchTimeRecorder_SetAudioDecoderName_Params_Data();
  ~WatchTimeRecorder_SetAudioDecoderName_Params_Data() = delete;
};
static_assert(sizeof(WatchTimeRecorder_SetAudioDecoderName_Params_Data) == 16,
              "Bad sizeof(WatchTimeRecorder_SetAudioDecoderName_Params_Data)");
class  WatchTimeRecorder_SetVideoDecoderName_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WatchTimeRecorder_SetVideoDecoderName_Params_Data));
      new (data()) WatchTimeRecorder_SetVideoDecoderName_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WatchTimeRecorder_SetVideoDecoderName_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WatchTimeRecorder_SetVideoDecoderName_Params_Data>(index_);
    }
    WatchTimeRecorder_SetVideoDecoderName_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> name;

 private:
  WatchTimeRecorder_SetVideoDecoderName_Params_Data();
  ~WatchTimeRecorder_SetVideoDecoderName_Params_Data() = delete;
};
static_assert(sizeof(WatchTimeRecorder_SetVideoDecoderName_Params_Data) == 16,
              "Bad sizeof(WatchTimeRecorder_SetVideoDecoderName_Params_Data)");
class  WatchTimeRecorder_SetAutoplayInitiated_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WatchTimeRecorder_SetAutoplayInitiated_Params_Data));
      new (data()) WatchTimeRecorder_SetAutoplayInitiated_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WatchTimeRecorder_SetAutoplayInitiated_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WatchTimeRecorder_SetAutoplayInitiated_Params_Data>(index_);
    }
    WatchTimeRecorder_SetAutoplayInitiated_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t value : 1;
  uint8_t padfinal_[7];

 private:
  WatchTimeRecorder_SetAutoplayInitiated_Params_Data();
  ~WatchTimeRecorder_SetAutoplayInitiated_Params_Data() = delete;
};
static_assert(sizeof(WatchTimeRecorder_SetAutoplayInitiated_Params_Data) == 16,
              "Bad sizeof(WatchTimeRecorder_SetAutoplayInitiated_Params_Data)");
class  WatchTimeRecorder_UpdateUnderflowCount_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WatchTimeRecorder_UpdateUnderflowCount_Params_Data));
      new (data()) WatchTimeRecorder_UpdateUnderflowCount_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WatchTimeRecorder_UpdateUnderflowCount_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WatchTimeRecorder_UpdateUnderflowCount_Params_Data>(index_);
    }
    WatchTimeRecorder_UpdateUnderflowCount_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t count;
  uint8_t padfinal_[4];

 private:
  WatchTimeRecorder_UpdateUnderflowCount_Params_Data();
  ~WatchTimeRecorder_UpdateUnderflowCount_Params_Data() = delete;
};
static_assert(sizeof(WatchTimeRecorder_UpdateUnderflowCount_Params_Data) == 16,
              "Bad sizeof(WatchTimeRecorder_UpdateUnderflowCount_Params_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_INTERFACES_WATCH_TIME_RECORDER_MOJOM_SHARED_INTERNAL_H_