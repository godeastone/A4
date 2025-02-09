// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_AUDIO_INPUT_STREAM_MOJOM_SHARED_INTERNAL_H_
#define MEDIA_MOJO_INTERFACES_AUDIO_INPUT_STREAM_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "media/mojo/interfaces/audio_parameters.mojom-shared-internal.h"
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
class  AudioInputStream_Record_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(AudioInputStream_Record_Params_Data));
      new (data()) AudioInputStream_Record_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    AudioInputStream_Record_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<AudioInputStream_Record_Params_Data>(index_);
    }
    AudioInputStream_Record_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  AudioInputStream_Record_Params_Data();
  ~AudioInputStream_Record_Params_Data() = delete;
};
static_assert(sizeof(AudioInputStream_Record_Params_Data) == 8,
              "Bad sizeof(AudioInputStream_Record_Params_Data)");
class  AudioInputStream_SetVolume_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(AudioInputStream_SetVolume_Params_Data));
      new (data()) AudioInputStream_SetVolume_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    AudioInputStream_SetVolume_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<AudioInputStream_SetVolume_Params_Data>(index_);
    }
    AudioInputStream_SetVolume_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  double volume;

 private:
  AudioInputStream_SetVolume_Params_Data();
  ~AudioInputStream_SetVolume_Params_Data() = delete;
};
static_assert(sizeof(AudioInputStream_SetVolume_Params_Data) == 16,
              "Bad sizeof(AudioInputStream_SetVolume_Params_Data)");
class  AudioInputStreamClient_OnError_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(AudioInputStreamClient_OnError_Params_Data));
      new (data()) AudioInputStreamClient_OnError_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    AudioInputStreamClient_OnError_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<AudioInputStreamClient_OnError_Params_Data>(index_);
    }
    AudioInputStreamClient_OnError_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  AudioInputStreamClient_OnError_Params_Data();
  ~AudioInputStreamClient_OnError_Params_Data() = delete;
};
static_assert(sizeof(AudioInputStreamClient_OnError_Params_Data) == 8,
              "Bad sizeof(AudioInputStreamClient_OnError_Params_Data)");
class  AudioInputStreamClient_OnMutedStateChanged_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(AudioInputStreamClient_OnMutedStateChanged_Params_Data));
      new (data()) AudioInputStreamClient_OnMutedStateChanged_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    AudioInputStreamClient_OnMutedStateChanged_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<AudioInputStreamClient_OnMutedStateChanged_Params_Data>(index_);
    }
    AudioInputStreamClient_OnMutedStateChanged_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t is_muted : 1;
  uint8_t padfinal_[7];

 private:
  AudioInputStreamClient_OnMutedStateChanged_Params_Data();
  ~AudioInputStreamClient_OnMutedStateChanged_Params_Data() = delete;
};
static_assert(sizeof(AudioInputStreamClient_OnMutedStateChanged_Params_Data) == 16,
              "Bad sizeof(AudioInputStreamClient_OnMutedStateChanged_Params_Data)");
class  AudioInputStreamObserver_DidStartRecording_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(AudioInputStreamObserver_DidStartRecording_Params_Data));
      new (data()) AudioInputStreamObserver_DidStartRecording_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    AudioInputStreamObserver_DidStartRecording_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<AudioInputStreamObserver_DidStartRecording_Params_Data>(index_);
    }
    AudioInputStreamObserver_DidStartRecording_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  AudioInputStreamObserver_DidStartRecording_Params_Data();
  ~AudioInputStreamObserver_DidStartRecording_Params_Data() = delete;
};
static_assert(sizeof(AudioInputStreamObserver_DidStartRecording_Params_Data) == 8,
              "Bad sizeof(AudioInputStreamObserver_DidStartRecording_Params_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_INTERFACES_AUDIO_INPUT_STREAM_MOJOM_SHARED_INTERNAL_H_