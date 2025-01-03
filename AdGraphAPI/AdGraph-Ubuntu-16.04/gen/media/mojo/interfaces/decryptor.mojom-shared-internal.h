// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_DECRYPTOR_MOJOM_SHARED_INTERNAL_H_
#define MEDIA_MOJO_INTERFACES_DECRYPTOR_MOJOM_SHARED_INTERNAL_H_

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
using Decryptor_Status_Data =
    mojo::internal::NativeEnum_Data;
using Decryptor_StreamType_Data =
    mojo::internal::NativeEnum_Data;

#pragma pack(push, 1)
class  Decryptor_Initialize_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Decryptor_Initialize_Params_Data));
      new (data()) Decryptor_Initialize_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Decryptor_Initialize_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Decryptor_Initialize_Params_Data>(index_);
    }
    Decryptor_Initialize_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data audio_pipe;
  mojo::internal::Handle_Data video_pipe;
  mojo::internal::Handle_Data decrypt_pipe;
  mojo::internal::Handle_Data decrypted_pipe;

 private:
  Decryptor_Initialize_Params_Data();
  ~Decryptor_Initialize_Params_Data() = delete;
};
static_assert(sizeof(Decryptor_Initialize_Params_Data) == 24,
              "Bad sizeof(Decryptor_Initialize_Params_Data)");
class  Decryptor_Decrypt_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Decryptor_Decrypt_Params_Data));
      new (data()) Decryptor_Decrypt_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Decryptor_Decrypt_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Decryptor_Decrypt_Params_Data>(index_);
    }
    Decryptor_Decrypt_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t stream_type;
  uint8_t pad0_[4];
  mojo::internal::Pointer<::media::mojom::internal::DecoderBuffer_Data> encrypted;

 private:
  Decryptor_Decrypt_Params_Data();
  ~Decryptor_Decrypt_Params_Data() = delete;
};
static_assert(sizeof(Decryptor_Decrypt_Params_Data) == 24,
              "Bad sizeof(Decryptor_Decrypt_Params_Data)");
class  Decryptor_Decrypt_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Decryptor_Decrypt_ResponseParams_Data));
      new (data()) Decryptor_Decrypt_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Decryptor_Decrypt_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Decryptor_Decrypt_ResponseParams_Data>(index_);
    }
    Decryptor_Decrypt_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t status;
  uint8_t pad0_[4];
  mojo::internal::Pointer<::media::mojom::internal::DecoderBuffer_Data> buffer;

 private:
  Decryptor_Decrypt_ResponseParams_Data();
  ~Decryptor_Decrypt_ResponseParams_Data() = delete;
};
static_assert(sizeof(Decryptor_Decrypt_ResponseParams_Data) == 24,
              "Bad sizeof(Decryptor_Decrypt_ResponseParams_Data)");
class  Decryptor_CancelDecrypt_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Decryptor_CancelDecrypt_Params_Data));
      new (data()) Decryptor_CancelDecrypt_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Decryptor_CancelDecrypt_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Decryptor_CancelDecrypt_Params_Data>(index_);
    }
    Decryptor_CancelDecrypt_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t stream_type;
  uint8_t padfinal_[4];

 private:
  Decryptor_CancelDecrypt_Params_Data();
  ~Decryptor_CancelDecrypt_Params_Data() = delete;
};
static_assert(sizeof(Decryptor_CancelDecrypt_Params_Data) == 16,
              "Bad sizeof(Decryptor_CancelDecrypt_Params_Data)");
class  Decryptor_InitializeAudioDecoder_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Decryptor_InitializeAudioDecoder_Params_Data));
      new (data()) Decryptor_InitializeAudioDecoder_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Decryptor_InitializeAudioDecoder_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Decryptor_InitializeAudioDecoder_Params_Data>(index_);
    }
    Decryptor_InitializeAudioDecoder_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::media::mojom::internal::AudioDecoderConfig_Data> config;

 private:
  Decryptor_InitializeAudioDecoder_Params_Data();
  ~Decryptor_InitializeAudioDecoder_Params_Data() = delete;
};
static_assert(sizeof(Decryptor_InitializeAudioDecoder_Params_Data) == 16,
              "Bad sizeof(Decryptor_InitializeAudioDecoder_Params_Data)");
class  Decryptor_InitializeAudioDecoder_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Decryptor_InitializeAudioDecoder_ResponseParams_Data));
      new (data()) Decryptor_InitializeAudioDecoder_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Decryptor_InitializeAudioDecoder_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Decryptor_InitializeAudioDecoder_ResponseParams_Data>(index_);
    }
    Decryptor_InitializeAudioDecoder_ResponseParams_Data* operator->() { return data(); }

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
  Decryptor_InitializeAudioDecoder_ResponseParams_Data();
  ~Decryptor_InitializeAudioDecoder_ResponseParams_Data() = delete;
};
static_assert(sizeof(Decryptor_InitializeAudioDecoder_ResponseParams_Data) == 16,
              "Bad sizeof(Decryptor_InitializeAudioDecoder_ResponseParams_Data)");
class  Decryptor_InitializeVideoDecoder_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Decryptor_InitializeVideoDecoder_Params_Data));
      new (data()) Decryptor_InitializeVideoDecoder_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Decryptor_InitializeVideoDecoder_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Decryptor_InitializeVideoDecoder_Params_Data>(index_);
    }
    Decryptor_InitializeVideoDecoder_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::media::mojom::internal::VideoDecoderConfig_Data> config;

 private:
  Decryptor_InitializeVideoDecoder_Params_Data();
  ~Decryptor_InitializeVideoDecoder_Params_Data() = delete;
};
static_assert(sizeof(Decryptor_InitializeVideoDecoder_Params_Data) == 16,
              "Bad sizeof(Decryptor_InitializeVideoDecoder_Params_Data)");
class  Decryptor_InitializeVideoDecoder_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Decryptor_InitializeVideoDecoder_ResponseParams_Data));
      new (data()) Decryptor_InitializeVideoDecoder_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Decryptor_InitializeVideoDecoder_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Decryptor_InitializeVideoDecoder_ResponseParams_Data>(index_);
    }
    Decryptor_InitializeVideoDecoder_ResponseParams_Data* operator->() { return data(); }

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
  Decryptor_InitializeVideoDecoder_ResponseParams_Data();
  ~Decryptor_InitializeVideoDecoder_ResponseParams_Data() = delete;
};
static_assert(sizeof(Decryptor_InitializeVideoDecoder_ResponseParams_Data) == 16,
              "Bad sizeof(Decryptor_InitializeVideoDecoder_ResponseParams_Data)");
class  Decryptor_DecryptAndDecodeAudio_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Decryptor_DecryptAndDecodeAudio_Params_Data));
      new (data()) Decryptor_DecryptAndDecodeAudio_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Decryptor_DecryptAndDecodeAudio_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Decryptor_DecryptAndDecodeAudio_Params_Data>(index_);
    }
    Decryptor_DecryptAndDecodeAudio_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::media::mojom::internal::DecoderBuffer_Data> encrypted;

 private:
  Decryptor_DecryptAndDecodeAudio_Params_Data();
  ~Decryptor_DecryptAndDecodeAudio_Params_Data() = delete;
};
static_assert(sizeof(Decryptor_DecryptAndDecodeAudio_Params_Data) == 16,
              "Bad sizeof(Decryptor_DecryptAndDecodeAudio_Params_Data)");
class  Decryptor_DecryptAndDecodeAudio_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Decryptor_DecryptAndDecodeAudio_ResponseParams_Data));
      new (data()) Decryptor_DecryptAndDecodeAudio_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Decryptor_DecryptAndDecodeAudio_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Decryptor_DecryptAndDecodeAudio_ResponseParams_Data>(index_);
    }
    Decryptor_DecryptAndDecodeAudio_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t status;
  uint8_t pad0_[4];
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<::media::mojom::internal::AudioBuffer_Data>>> audio_buffers;

 private:
  Decryptor_DecryptAndDecodeAudio_ResponseParams_Data();
  ~Decryptor_DecryptAndDecodeAudio_ResponseParams_Data() = delete;
};
static_assert(sizeof(Decryptor_DecryptAndDecodeAudio_ResponseParams_Data) == 24,
              "Bad sizeof(Decryptor_DecryptAndDecodeAudio_ResponseParams_Data)");
class  Decryptor_DecryptAndDecodeVideo_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Decryptor_DecryptAndDecodeVideo_Params_Data));
      new (data()) Decryptor_DecryptAndDecodeVideo_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Decryptor_DecryptAndDecodeVideo_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Decryptor_DecryptAndDecodeVideo_Params_Data>(index_);
    }
    Decryptor_DecryptAndDecodeVideo_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::media::mojom::internal::DecoderBuffer_Data> encrypted;

 private:
  Decryptor_DecryptAndDecodeVideo_Params_Data();
  ~Decryptor_DecryptAndDecodeVideo_Params_Data() = delete;
};
static_assert(sizeof(Decryptor_DecryptAndDecodeVideo_Params_Data) == 16,
              "Bad sizeof(Decryptor_DecryptAndDecodeVideo_Params_Data)");
class  Decryptor_DecryptAndDecodeVideo_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Decryptor_DecryptAndDecodeVideo_ResponseParams_Data));
      new (data()) Decryptor_DecryptAndDecodeVideo_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Decryptor_DecryptAndDecodeVideo_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Decryptor_DecryptAndDecodeVideo_ResponseParams_Data>(index_);
    }
    Decryptor_DecryptAndDecodeVideo_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t status;
  uint8_t pad0_[4];
  mojo::internal::Pointer<::media::mojom::internal::VideoFrame_Data> video_frame;
  mojo::internal::Interface_Data releaser;

 private:
  Decryptor_DecryptAndDecodeVideo_ResponseParams_Data();
  ~Decryptor_DecryptAndDecodeVideo_ResponseParams_Data() = delete;
};
static_assert(sizeof(Decryptor_DecryptAndDecodeVideo_ResponseParams_Data) == 32,
              "Bad sizeof(Decryptor_DecryptAndDecodeVideo_ResponseParams_Data)");
class  Decryptor_ResetDecoder_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Decryptor_ResetDecoder_Params_Data));
      new (data()) Decryptor_ResetDecoder_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Decryptor_ResetDecoder_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Decryptor_ResetDecoder_Params_Data>(index_);
    }
    Decryptor_ResetDecoder_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t stream_type;
  uint8_t padfinal_[4];

 private:
  Decryptor_ResetDecoder_Params_Data();
  ~Decryptor_ResetDecoder_Params_Data() = delete;
};
static_assert(sizeof(Decryptor_ResetDecoder_Params_Data) == 16,
              "Bad sizeof(Decryptor_ResetDecoder_Params_Data)");
class  Decryptor_DeinitializeDecoder_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Decryptor_DeinitializeDecoder_Params_Data));
      new (data()) Decryptor_DeinitializeDecoder_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Decryptor_DeinitializeDecoder_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Decryptor_DeinitializeDecoder_Params_Data>(index_);
    }
    Decryptor_DeinitializeDecoder_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t stream_type;
  uint8_t padfinal_[4];

 private:
  Decryptor_DeinitializeDecoder_Params_Data();
  ~Decryptor_DeinitializeDecoder_Params_Data() = delete;
};
static_assert(sizeof(Decryptor_DeinitializeDecoder_Params_Data) == 16,
              "Bad sizeof(Decryptor_DeinitializeDecoder_Params_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_INTERFACES_DECRYPTOR_MOJOM_SHARED_INTERNAL_H_