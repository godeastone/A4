// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_MEDIA_RENDERER_AUDIO_INPUT_STREAM_FACTORY_MOJOM_SHARED_INTERNAL_H_
#define CONTENT_COMMON_MEDIA_RENDERER_AUDIO_INPUT_STREAM_FACTORY_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "media/mojo/interfaces/audio_data_pipe.mojom-shared-internal.h"
#include "media/mojo/interfaces/audio_input_stream.mojom-shared-internal.h"
#include "media/mojo/interfaces/audio_parameters.mojom-shared-internal.h"
#include "media/mojo/interfaces/media_types.mojom-shared-internal.h"
#include "mojo/public/mojom/base/unguessable_token.mojom-shared-internal.h"
#include "mojo/public/cpp/bindings/lib/native_enum_data.h"
#include "mojo/public/interfaces/bindings/native_struct.mojom-shared-internal.h"
#include "base/component_export.h"

namespace mojo {
namespace internal {
class ValidationContext;
}
}
namespace content {
namespace mojom {
namespace internal {

#pragma pack(push, 1)
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) RendererAudioInputStreamFactory_CreateStream_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(RendererAudioInputStreamFactory_CreateStream_Params_Data));
      new (data()) RendererAudioInputStreamFactory_CreateStream_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    RendererAudioInputStreamFactory_CreateStream_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<RendererAudioInputStreamFactory_CreateStream_Params_Data>(index_);
    }
    RendererAudioInputStreamFactory_CreateStream_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Interface_Data client;
  int32_t session_id;
  uint8_t automatic_gain_control : 1;
  uint8_t pad2_[3];
  mojo::internal::Pointer<::media::mojom::internal::AudioParameters_Data> params;
  uint32_t shared_memory_count;
  uint8_t padfinal_[4];

 private:
  RendererAudioInputStreamFactory_CreateStream_Params_Data();
  ~RendererAudioInputStreamFactory_CreateStream_Params_Data() = delete;
};
static_assert(sizeof(RendererAudioInputStreamFactory_CreateStream_Params_Data) == 40,
              "Bad sizeof(RendererAudioInputStreamFactory_CreateStream_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) RendererAudioInputStreamFactory_AssociateInputAndOutputForAec_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(RendererAudioInputStreamFactory_AssociateInputAndOutputForAec_Params_Data));
      new (data()) RendererAudioInputStreamFactory_AssociateInputAndOutputForAec_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    RendererAudioInputStreamFactory_AssociateInputAndOutputForAec_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<RendererAudioInputStreamFactory_AssociateInputAndOutputForAec_Params_Data>(index_);
    }
    RendererAudioInputStreamFactory_AssociateInputAndOutputForAec_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::UnguessableToken_Data> input_stream_id;
  mojo::internal::Pointer<mojo::internal::String_Data> output_device_id;

 private:
  RendererAudioInputStreamFactory_AssociateInputAndOutputForAec_Params_Data();
  ~RendererAudioInputStreamFactory_AssociateInputAndOutputForAec_Params_Data() = delete;
};
static_assert(sizeof(RendererAudioInputStreamFactory_AssociateInputAndOutputForAec_Params_Data) == 24,
              "Bad sizeof(RendererAudioInputStreamFactory_AssociateInputAndOutputForAec_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) RendererAudioInputStreamFactoryClient_StreamCreated_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(RendererAudioInputStreamFactoryClient_StreamCreated_Params_Data));
      new (data()) RendererAudioInputStreamFactoryClient_StreamCreated_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    RendererAudioInputStreamFactoryClient_StreamCreated_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<RendererAudioInputStreamFactoryClient_StreamCreated_Params_Data>(index_);
    }
    RendererAudioInputStreamFactoryClient_StreamCreated_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Interface_Data stream;
  mojo::internal::Handle_Data client_request;
  uint8_t initially_muted : 1;
  uint8_t pad2_[3];
  mojo::internal::Pointer<::media::mojom::internal::AudioDataPipe_Data> data_pipe;
  mojo::internal::Pointer<::mojo_base::mojom::internal::UnguessableToken_Data> stream_id;

 private:
  RendererAudioInputStreamFactoryClient_StreamCreated_Params_Data();
  ~RendererAudioInputStreamFactoryClient_StreamCreated_Params_Data() = delete;
};
static_assert(sizeof(RendererAudioInputStreamFactoryClient_StreamCreated_Params_Data) == 40,
              "Bad sizeof(RendererAudioInputStreamFactoryClient_StreamCreated_Params_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace content

#endif  // CONTENT_COMMON_MEDIA_RENDERER_AUDIO_INPUT_STREAM_FACTORY_MOJOM_SHARED_INTERNAL_H_