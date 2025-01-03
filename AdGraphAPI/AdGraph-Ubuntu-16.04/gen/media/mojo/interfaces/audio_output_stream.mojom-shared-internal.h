// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_AUDIO_OUTPUT_STREAM_MOJOM_SHARED_INTERNAL_H_
#define MEDIA_MOJO_INTERFACES_AUDIO_OUTPUT_STREAM_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "media/mojo/interfaces/audio_data_pipe.mojom-shared-internal.h"
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
class  AudioOutputStream_Play_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(AudioOutputStream_Play_Params_Data));
      new (data()) AudioOutputStream_Play_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    AudioOutputStream_Play_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<AudioOutputStream_Play_Params_Data>(index_);
    }
    AudioOutputStream_Play_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  AudioOutputStream_Play_Params_Data();
  ~AudioOutputStream_Play_Params_Data() = delete;
};
static_assert(sizeof(AudioOutputStream_Play_Params_Data) == 8,
              "Bad sizeof(AudioOutputStream_Play_Params_Data)");
class  AudioOutputStream_Pause_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(AudioOutputStream_Pause_Params_Data));
      new (data()) AudioOutputStream_Pause_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    AudioOutputStream_Pause_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<AudioOutputStream_Pause_Params_Data>(index_);
    }
    AudioOutputStream_Pause_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  AudioOutputStream_Pause_Params_Data();
  ~AudioOutputStream_Pause_Params_Data() = delete;
};
static_assert(sizeof(AudioOutputStream_Pause_Params_Data) == 8,
              "Bad sizeof(AudioOutputStream_Pause_Params_Data)");
class  AudioOutputStream_SetVolume_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(AudioOutputStream_SetVolume_Params_Data));
      new (data()) AudioOutputStream_SetVolume_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    AudioOutputStream_SetVolume_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<AudioOutputStream_SetVolume_Params_Data>(index_);
    }
    AudioOutputStream_SetVolume_Params_Data* operator->() { return data(); }

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
  AudioOutputStream_SetVolume_Params_Data();
  ~AudioOutputStream_SetVolume_Params_Data() = delete;
};
static_assert(sizeof(AudioOutputStream_SetVolume_Params_Data) == 16,
              "Bad sizeof(AudioOutputStream_SetVolume_Params_Data)");
class  AudioOutputStreamObserver_DidStartPlaying_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(AudioOutputStreamObserver_DidStartPlaying_Params_Data));
      new (data()) AudioOutputStreamObserver_DidStartPlaying_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    AudioOutputStreamObserver_DidStartPlaying_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<AudioOutputStreamObserver_DidStartPlaying_Params_Data>(index_);
    }
    AudioOutputStreamObserver_DidStartPlaying_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  AudioOutputStreamObserver_DidStartPlaying_Params_Data();
  ~AudioOutputStreamObserver_DidStartPlaying_Params_Data() = delete;
};
static_assert(sizeof(AudioOutputStreamObserver_DidStartPlaying_Params_Data) == 8,
              "Bad sizeof(AudioOutputStreamObserver_DidStartPlaying_Params_Data)");
class  AudioOutputStreamObserver_DidStopPlaying_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(AudioOutputStreamObserver_DidStopPlaying_Params_Data));
      new (data()) AudioOutputStreamObserver_DidStopPlaying_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    AudioOutputStreamObserver_DidStopPlaying_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<AudioOutputStreamObserver_DidStopPlaying_Params_Data>(index_);
    }
    AudioOutputStreamObserver_DidStopPlaying_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  AudioOutputStreamObserver_DidStopPlaying_Params_Data();
  ~AudioOutputStreamObserver_DidStopPlaying_Params_Data() = delete;
};
static_assert(sizeof(AudioOutputStreamObserver_DidStopPlaying_Params_Data) == 8,
              "Bad sizeof(AudioOutputStreamObserver_DidStopPlaying_Params_Data)");
class  AudioOutputStreamObserver_DidChangeAudibleState_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(AudioOutputStreamObserver_DidChangeAudibleState_Params_Data));
      new (data()) AudioOutputStreamObserver_DidChangeAudibleState_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    AudioOutputStreamObserver_DidChangeAudibleState_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<AudioOutputStreamObserver_DidChangeAudibleState_Params_Data>(index_);
    }
    AudioOutputStreamObserver_DidChangeAudibleState_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t is_audible : 1;
  uint8_t padfinal_[7];

 private:
  AudioOutputStreamObserver_DidChangeAudibleState_Params_Data();
  ~AudioOutputStreamObserver_DidChangeAudibleState_Params_Data() = delete;
};
static_assert(sizeof(AudioOutputStreamObserver_DidChangeAudibleState_Params_Data) == 16,
              "Bad sizeof(AudioOutputStreamObserver_DidChangeAudibleState_Params_Data)");
class  AudioOutputStreamProvider_Acquire_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(AudioOutputStreamProvider_Acquire_Params_Data));
      new (data()) AudioOutputStreamProvider_Acquire_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    AudioOutputStreamProvider_Acquire_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<AudioOutputStreamProvider_Acquire_Params_Data>(index_);
    }
    AudioOutputStreamProvider_Acquire_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::media::mojom::internal::AudioParameters_Data> params;
  mojo::internal::Interface_Data client;

 private:
  AudioOutputStreamProvider_Acquire_Params_Data();
  ~AudioOutputStreamProvider_Acquire_Params_Data() = delete;
};
static_assert(sizeof(AudioOutputStreamProvider_Acquire_Params_Data) == 24,
              "Bad sizeof(AudioOutputStreamProvider_Acquire_Params_Data)");
class  AudioOutputStreamProviderClient_Created_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(AudioOutputStreamProviderClient_Created_Params_Data));
      new (data()) AudioOutputStreamProviderClient_Created_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    AudioOutputStreamProviderClient_Created_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<AudioOutputStreamProviderClient_Created_Params_Data>(index_);
    }
    AudioOutputStreamProviderClient_Created_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Interface_Data stream;
  mojo::internal::Pointer<::media::mojom::internal::AudioDataPipe_Data> data_pipe;

 private:
  AudioOutputStreamProviderClient_Created_Params_Data();
  ~AudioOutputStreamProviderClient_Created_Params_Data() = delete;
};
static_assert(sizeof(AudioOutputStreamProviderClient_Created_Params_Data) == 24,
              "Bad sizeof(AudioOutputStreamProviderClient_Created_Params_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_INTERFACES_AUDIO_OUTPUT_STREAM_MOJOM_SHARED_INTERNAL_H_