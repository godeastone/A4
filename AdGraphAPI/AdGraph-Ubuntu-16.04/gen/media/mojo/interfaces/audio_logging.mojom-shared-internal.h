// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_AUDIO_LOGGING_MOJOM_SHARED_INTERNAL_H_
#define MEDIA_MOJO_INTERFACES_AUDIO_LOGGING_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "media/mojo/interfaces/audio_parameters.mojom-shared-internal.h"
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
class  AudioLog_OnCreated_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(AudioLog_OnCreated_Params_Data));
      new (data()) AudioLog_OnCreated_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    AudioLog_OnCreated_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<AudioLog_OnCreated_Params_Data>(index_);
    }
    AudioLog_OnCreated_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::media::mojom::internal::AudioParameters_Data> params;
  mojo::internal::Pointer<mojo::internal::String_Data> device_id;

 private:
  AudioLog_OnCreated_Params_Data();
  ~AudioLog_OnCreated_Params_Data() = delete;
};
static_assert(sizeof(AudioLog_OnCreated_Params_Data) == 24,
              "Bad sizeof(AudioLog_OnCreated_Params_Data)");
class  AudioLog_OnStarted_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(AudioLog_OnStarted_Params_Data));
      new (data()) AudioLog_OnStarted_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    AudioLog_OnStarted_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<AudioLog_OnStarted_Params_Data>(index_);
    }
    AudioLog_OnStarted_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  AudioLog_OnStarted_Params_Data();
  ~AudioLog_OnStarted_Params_Data() = delete;
};
static_assert(sizeof(AudioLog_OnStarted_Params_Data) == 8,
              "Bad sizeof(AudioLog_OnStarted_Params_Data)");
class  AudioLog_OnStopped_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(AudioLog_OnStopped_Params_Data));
      new (data()) AudioLog_OnStopped_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    AudioLog_OnStopped_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<AudioLog_OnStopped_Params_Data>(index_);
    }
    AudioLog_OnStopped_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  AudioLog_OnStopped_Params_Data();
  ~AudioLog_OnStopped_Params_Data() = delete;
};
static_assert(sizeof(AudioLog_OnStopped_Params_Data) == 8,
              "Bad sizeof(AudioLog_OnStopped_Params_Data)");
class  AudioLog_OnClosed_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(AudioLog_OnClosed_Params_Data));
      new (data()) AudioLog_OnClosed_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    AudioLog_OnClosed_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<AudioLog_OnClosed_Params_Data>(index_);
    }
    AudioLog_OnClosed_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  AudioLog_OnClosed_Params_Data();
  ~AudioLog_OnClosed_Params_Data() = delete;
};
static_assert(sizeof(AudioLog_OnClosed_Params_Data) == 8,
              "Bad sizeof(AudioLog_OnClosed_Params_Data)");
class  AudioLog_OnError_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(AudioLog_OnError_Params_Data));
      new (data()) AudioLog_OnError_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    AudioLog_OnError_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<AudioLog_OnError_Params_Data>(index_);
    }
    AudioLog_OnError_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  AudioLog_OnError_Params_Data();
  ~AudioLog_OnError_Params_Data() = delete;
};
static_assert(sizeof(AudioLog_OnError_Params_Data) == 8,
              "Bad sizeof(AudioLog_OnError_Params_Data)");
class  AudioLog_OnSetVolume_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(AudioLog_OnSetVolume_Params_Data));
      new (data()) AudioLog_OnSetVolume_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    AudioLog_OnSetVolume_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<AudioLog_OnSetVolume_Params_Data>(index_);
    }
    AudioLog_OnSetVolume_Params_Data* operator->() { return data(); }

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
  AudioLog_OnSetVolume_Params_Data();
  ~AudioLog_OnSetVolume_Params_Data() = delete;
};
static_assert(sizeof(AudioLog_OnSetVolume_Params_Data) == 16,
              "Bad sizeof(AudioLog_OnSetVolume_Params_Data)");
class  AudioLog_OnLogMessage_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(AudioLog_OnLogMessage_Params_Data));
      new (data()) AudioLog_OnLogMessage_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    AudioLog_OnLogMessage_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<AudioLog_OnLogMessage_Params_Data>(index_);
    }
    AudioLog_OnLogMessage_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> message;

 private:
  AudioLog_OnLogMessage_Params_Data();
  ~AudioLog_OnLogMessage_Params_Data() = delete;
};
static_assert(sizeof(AudioLog_OnLogMessage_Params_Data) == 16,
              "Bad sizeof(AudioLog_OnLogMessage_Params_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_INTERFACES_AUDIO_LOGGING_MOJOM_SHARED_INTERNAL_H_