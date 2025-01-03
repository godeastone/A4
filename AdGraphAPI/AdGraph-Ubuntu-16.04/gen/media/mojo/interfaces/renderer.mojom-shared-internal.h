// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_RENDERER_MOJOM_SHARED_INTERNAL_H_
#define MEDIA_MOJO_INTERFACES_RENDERER_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "media/mojo/interfaces/demuxer_stream.mojom-shared-internal.h"
#include "media/mojo/interfaces/media_types.mojom-shared-internal.h"
#include "mojo/public/mojom/base/time.mojom-shared-internal.h"
#include "mojo/public/mojom/base/unguessable_token.mojom-shared-internal.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-shared-internal.h"
#include "url/mojom/url.mojom-shared-internal.h"
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
class  Renderer_Initialize_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Renderer_Initialize_Params_Data));
      new (data()) Renderer_Initialize_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Renderer_Initialize_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Renderer_Initialize_Params_Data>(index_);
    }
    Renderer_Initialize_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::AssociatedInterface_Data client;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Interface_Data>> streams;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> media_url;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> first_party_for_cookies;

 private:
  Renderer_Initialize_Params_Data();
  ~Renderer_Initialize_Params_Data() = delete;
};
static_assert(sizeof(Renderer_Initialize_Params_Data) == 40,
              "Bad sizeof(Renderer_Initialize_Params_Data)");
class  Renderer_Initialize_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Renderer_Initialize_ResponseParams_Data));
      new (data()) Renderer_Initialize_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Renderer_Initialize_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Renderer_Initialize_ResponseParams_Data>(index_);
    }
    Renderer_Initialize_ResponseParams_Data* operator->() { return data(); }

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
  Renderer_Initialize_ResponseParams_Data();
  ~Renderer_Initialize_ResponseParams_Data() = delete;
};
static_assert(sizeof(Renderer_Initialize_ResponseParams_Data) == 16,
              "Bad sizeof(Renderer_Initialize_ResponseParams_Data)");
class  Renderer_Flush_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Renderer_Flush_Params_Data));
      new (data()) Renderer_Flush_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Renderer_Flush_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Renderer_Flush_Params_Data>(index_);
    }
    Renderer_Flush_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  Renderer_Flush_Params_Data();
  ~Renderer_Flush_Params_Data() = delete;
};
static_assert(sizeof(Renderer_Flush_Params_Data) == 8,
              "Bad sizeof(Renderer_Flush_Params_Data)");
class  Renderer_Flush_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Renderer_Flush_ResponseParams_Data));
      new (data()) Renderer_Flush_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Renderer_Flush_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Renderer_Flush_ResponseParams_Data>(index_);
    }
    Renderer_Flush_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  Renderer_Flush_ResponseParams_Data();
  ~Renderer_Flush_ResponseParams_Data() = delete;
};
static_assert(sizeof(Renderer_Flush_ResponseParams_Data) == 8,
              "Bad sizeof(Renderer_Flush_ResponseParams_Data)");
class  Renderer_StartPlayingFrom_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Renderer_StartPlayingFrom_Params_Data));
      new (data()) Renderer_StartPlayingFrom_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Renderer_StartPlayingFrom_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Renderer_StartPlayingFrom_Params_Data>(index_);
    }
    Renderer_StartPlayingFrom_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::TimeDelta_Data> time;

 private:
  Renderer_StartPlayingFrom_Params_Data();
  ~Renderer_StartPlayingFrom_Params_Data() = delete;
};
static_assert(sizeof(Renderer_StartPlayingFrom_Params_Data) == 16,
              "Bad sizeof(Renderer_StartPlayingFrom_Params_Data)");
class  Renderer_SetPlaybackRate_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Renderer_SetPlaybackRate_Params_Data));
      new (data()) Renderer_SetPlaybackRate_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Renderer_SetPlaybackRate_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Renderer_SetPlaybackRate_Params_Data>(index_);
    }
    Renderer_SetPlaybackRate_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  double playback_rate;

 private:
  Renderer_SetPlaybackRate_Params_Data();
  ~Renderer_SetPlaybackRate_Params_Data() = delete;
};
static_assert(sizeof(Renderer_SetPlaybackRate_Params_Data) == 16,
              "Bad sizeof(Renderer_SetPlaybackRate_Params_Data)");
class  Renderer_SetVolume_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Renderer_SetVolume_Params_Data));
      new (data()) Renderer_SetVolume_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Renderer_SetVolume_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Renderer_SetVolume_Params_Data>(index_);
    }
    Renderer_SetVolume_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  float volume;
  uint8_t padfinal_[4];

 private:
  Renderer_SetVolume_Params_Data();
  ~Renderer_SetVolume_Params_Data() = delete;
};
static_assert(sizeof(Renderer_SetVolume_Params_Data) == 16,
              "Bad sizeof(Renderer_SetVolume_Params_Data)");
class  Renderer_SetCdm_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Renderer_SetCdm_Params_Data));
      new (data()) Renderer_SetCdm_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Renderer_SetCdm_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Renderer_SetCdm_Params_Data>(index_);
    }
    Renderer_SetCdm_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t cdm_id;
  uint8_t padfinal_[4];

 private:
  Renderer_SetCdm_Params_Data();
  ~Renderer_SetCdm_Params_Data() = delete;
};
static_assert(sizeof(Renderer_SetCdm_Params_Data) == 16,
              "Bad sizeof(Renderer_SetCdm_Params_Data)");
class  Renderer_SetCdm_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Renderer_SetCdm_ResponseParams_Data));
      new (data()) Renderer_SetCdm_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Renderer_SetCdm_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Renderer_SetCdm_ResponseParams_Data>(index_);
    }
    Renderer_SetCdm_ResponseParams_Data* operator->() { return data(); }

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
  Renderer_SetCdm_ResponseParams_Data();
  ~Renderer_SetCdm_ResponseParams_Data() = delete;
};
static_assert(sizeof(Renderer_SetCdm_ResponseParams_Data) == 16,
              "Bad sizeof(Renderer_SetCdm_ResponseParams_Data)");
class  Renderer_InitiateScopedSurfaceRequest_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Renderer_InitiateScopedSurfaceRequest_Params_Data));
      new (data()) Renderer_InitiateScopedSurfaceRequest_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Renderer_InitiateScopedSurfaceRequest_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Renderer_InitiateScopedSurfaceRequest_Params_Data>(index_);
    }
    Renderer_InitiateScopedSurfaceRequest_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  Renderer_InitiateScopedSurfaceRequest_Params_Data();
  ~Renderer_InitiateScopedSurfaceRequest_Params_Data() = delete;
};
static_assert(sizeof(Renderer_InitiateScopedSurfaceRequest_Params_Data) == 8,
              "Bad sizeof(Renderer_InitiateScopedSurfaceRequest_Params_Data)");
class  Renderer_InitiateScopedSurfaceRequest_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Renderer_InitiateScopedSurfaceRequest_ResponseParams_Data));
      new (data()) Renderer_InitiateScopedSurfaceRequest_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Renderer_InitiateScopedSurfaceRequest_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Renderer_InitiateScopedSurfaceRequest_ResponseParams_Data>(index_);
    }
    Renderer_InitiateScopedSurfaceRequest_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::UnguessableToken_Data> request_token;

 private:
  Renderer_InitiateScopedSurfaceRequest_ResponseParams_Data();
  ~Renderer_InitiateScopedSurfaceRequest_ResponseParams_Data() = delete;
};
static_assert(sizeof(Renderer_InitiateScopedSurfaceRequest_ResponseParams_Data) == 16,
              "Bad sizeof(Renderer_InitiateScopedSurfaceRequest_ResponseParams_Data)");
class  RendererClient_OnTimeUpdate_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(RendererClient_OnTimeUpdate_Params_Data));
      new (data()) RendererClient_OnTimeUpdate_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    RendererClient_OnTimeUpdate_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<RendererClient_OnTimeUpdate_Params_Data>(index_);
    }
    RendererClient_OnTimeUpdate_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::TimeDelta_Data> time;
  mojo::internal::Pointer<::mojo_base::mojom::internal::TimeDelta_Data> max_time;
  mojo::internal::Pointer<::mojo_base::mojom::internal::TimeTicks_Data> capture_time;

 private:
  RendererClient_OnTimeUpdate_Params_Data();
  ~RendererClient_OnTimeUpdate_Params_Data() = delete;
};
static_assert(sizeof(RendererClient_OnTimeUpdate_Params_Data) == 32,
              "Bad sizeof(RendererClient_OnTimeUpdate_Params_Data)");
class  RendererClient_OnBufferingStateChange_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(RendererClient_OnBufferingStateChange_Params_Data));
      new (data()) RendererClient_OnBufferingStateChange_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    RendererClient_OnBufferingStateChange_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<RendererClient_OnBufferingStateChange_Params_Data>(index_);
    }
    RendererClient_OnBufferingStateChange_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t state;
  uint8_t padfinal_[4];

 private:
  RendererClient_OnBufferingStateChange_Params_Data();
  ~RendererClient_OnBufferingStateChange_Params_Data() = delete;
};
static_assert(sizeof(RendererClient_OnBufferingStateChange_Params_Data) == 16,
              "Bad sizeof(RendererClient_OnBufferingStateChange_Params_Data)");
class  RendererClient_OnEnded_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(RendererClient_OnEnded_Params_Data));
      new (data()) RendererClient_OnEnded_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    RendererClient_OnEnded_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<RendererClient_OnEnded_Params_Data>(index_);
    }
    RendererClient_OnEnded_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  RendererClient_OnEnded_Params_Data();
  ~RendererClient_OnEnded_Params_Data() = delete;
};
static_assert(sizeof(RendererClient_OnEnded_Params_Data) == 8,
              "Bad sizeof(RendererClient_OnEnded_Params_Data)");
class  RendererClient_OnError_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(RendererClient_OnError_Params_Data));
      new (data()) RendererClient_OnError_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    RendererClient_OnError_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<RendererClient_OnError_Params_Data>(index_);
    }
    RendererClient_OnError_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  RendererClient_OnError_Params_Data();
  ~RendererClient_OnError_Params_Data() = delete;
};
static_assert(sizeof(RendererClient_OnError_Params_Data) == 8,
              "Bad sizeof(RendererClient_OnError_Params_Data)");
class  RendererClient_OnAudioConfigChange_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(RendererClient_OnAudioConfigChange_Params_Data));
      new (data()) RendererClient_OnAudioConfigChange_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    RendererClient_OnAudioConfigChange_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<RendererClient_OnAudioConfigChange_Params_Data>(index_);
    }
    RendererClient_OnAudioConfigChange_Params_Data* operator->() { return data(); }

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
  RendererClient_OnAudioConfigChange_Params_Data();
  ~RendererClient_OnAudioConfigChange_Params_Data() = delete;
};
static_assert(sizeof(RendererClient_OnAudioConfigChange_Params_Data) == 16,
              "Bad sizeof(RendererClient_OnAudioConfigChange_Params_Data)");
class  RendererClient_OnVideoConfigChange_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(RendererClient_OnVideoConfigChange_Params_Data));
      new (data()) RendererClient_OnVideoConfigChange_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    RendererClient_OnVideoConfigChange_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<RendererClient_OnVideoConfigChange_Params_Data>(index_);
    }
    RendererClient_OnVideoConfigChange_Params_Data* operator->() { return data(); }

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
  RendererClient_OnVideoConfigChange_Params_Data();
  ~RendererClient_OnVideoConfigChange_Params_Data() = delete;
};
static_assert(sizeof(RendererClient_OnVideoConfigChange_Params_Data) == 16,
              "Bad sizeof(RendererClient_OnVideoConfigChange_Params_Data)");
class  RendererClient_OnVideoNaturalSizeChange_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(RendererClient_OnVideoNaturalSizeChange_Params_Data));
      new (data()) RendererClient_OnVideoNaturalSizeChange_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    RendererClient_OnVideoNaturalSizeChange_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<RendererClient_OnVideoNaturalSizeChange_Params_Data>(index_);
    }
    RendererClient_OnVideoNaturalSizeChange_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::gfx::mojom::internal::Size_Data> size;

 private:
  RendererClient_OnVideoNaturalSizeChange_Params_Data();
  ~RendererClient_OnVideoNaturalSizeChange_Params_Data() = delete;
};
static_assert(sizeof(RendererClient_OnVideoNaturalSizeChange_Params_Data) == 16,
              "Bad sizeof(RendererClient_OnVideoNaturalSizeChange_Params_Data)");
class  RendererClient_OnVideoOpacityChange_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(RendererClient_OnVideoOpacityChange_Params_Data));
      new (data()) RendererClient_OnVideoOpacityChange_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    RendererClient_OnVideoOpacityChange_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<RendererClient_OnVideoOpacityChange_Params_Data>(index_);
    }
    RendererClient_OnVideoOpacityChange_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t opaque : 1;
  uint8_t padfinal_[7];

 private:
  RendererClient_OnVideoOpacityChange_Params_Data();
  ~RendererClient_OnVideoOpacityChange_Params_Data() = delete;
};
static_assert(sizeof(RendererClient_OnVideoOpacityChange_Params_Data) == 16,
              "Bad sizeof(RendererClient_OnVideoOpacityChange_Params_Data)");
class  RendererClient_OnStatisticsUpdate_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(RendererClient_OnStatisticsUpdate_Params_Data));
      new (data()) RendererClient_OnStatisticsUpdate_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    RendererClient_OnStatisticsUpdate_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<RendererClient_OnStatisticsUpdate_Params_Data>(index_);
    }
    RendererClient_OnStatisticsUpdate_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::media::mojom::internal::PipelineStatistics_Data> stats;

 private:
  RendererClient_OnStatisticsUpdate_Params_Data();
  ~RendererClient_OnStatisticsUpdate_Params_Data() = delete;
};
static_assert(sizeof(RendererClient_OnStatisticsUpdate_Params_Data) == 16,
              "Bad sizeof(RendererClient_OnStatisticsUpdate_Params_Data)");
class  RendererClient_OnWaitingForDecryptionKey_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(RendererClient_OnWaitingForDecryptionKey_Params_Data));
      new (data()) RendererClient_OnWaitingForDecryptionKey_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    RendererClient_OnWaitingForDecryptionKey_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<RendererClient_OnWaitingForDecryptionKey_Params_Data>(index_);
    }
    RendererClient_OnWaitingForDecryptionKey_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  RendererClient_OnWaitingForDecryptionKey_Params_Data();
  ~RendererClient_OnWaitingForDecryptionKey_Params_Data() = delete;
};
static_assert(sizeof(RendererClient_OnWaitingForDecryptionKey_Params_Data) == 8,
              "Bad sizeof(RendererClient_OnWaitingForDecryptionKey_Params_Data)");
class  RendererClient_OnDurationChange_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(RendererClient_OnDurationChange_Params_Data));
      new (data()) RendererClient_OnDurationChange_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    RendererClient_OnDurationChange_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<RendererClient_OnDurationChange_Params_Data>(index_);
    }
    RendererClient_OnDurationChange_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::TimeDelta_Data> duration;

 private:
  RendererClient_OnDurationChange_Params_Data();
  ~RendererClient_OnDurationChange_Params_Data() = delete;
};
static_assert(sizeof(RendererClient_OnDurationChange_Params_Data) == 16,
              "Bad sizeof(RendererClient_OnDurationChange_Params_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_INTERFACES_RENDERER_MOJOM_SHARED_INTERNAL_H_