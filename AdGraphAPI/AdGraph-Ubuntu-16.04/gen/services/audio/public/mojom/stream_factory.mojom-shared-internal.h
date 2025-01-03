// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_AUDIO_PUBLIC_MOJOM_STREAM_FACTORY_MOJOM_SHARED_INTERNAL_H_
#define SERVICES_AUDIO_PUBLIC_MOJOM_STREAM_FACTORY_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "media/mojo/interfaces/audio_data_pipe.mojom-shared-internal.h"
#include "media/mojo/interfaces/audio_input_stream.mojom-shared-internal.h"
#include "media/mojo/interfaces/audio_logging.mojom-shared-internal.h"
#include "media/mojo/interfaces/audio_output_stream.mojom-shared-internal.h"
#include "media/mojo/interfaces/audio_parameters.mojom-shared-internal.h"
#include "mojo/public/mojom/base/unguessable_token.mojom-shared-internal.h"
#include "mojo/public/cpp/bindings/lib/native_enum_data.h"
#include "mojo/public/interfaces/bindings/native_struct.mojom-shared-internal.h"

namespace mojo {
namespace internal {
class ValidationContext;
}
}
namespace audio {
namespace mojom {
namespace internal {

#pragma pack(push, 1)
class  StreamFactory_CreateInputStream_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(StreamFactory_CreateInputStream_Params_Data));
      new (data()) StreamFactory_CreateInputStream_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    StreamFactory_CreateInputStream_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<StreamFactory_CreateInputStream_Params_Data>(index_);
    }
    StreamFactory_CreateInputStream_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data stream;
  mojo::internal::Interface_Data client;
  mojo::internal::Interface_Data observer;
  mojo::internal::Interface_Data log;
  uint32_t shared_memory_count;
  mojo::internal::Pointer<mojo::internal::String_Data> device_id;
  mojo::internal::Pointer<::media::mojom::internal::AudioParameters_Data> params;
  uint8_t enable_agc : 1;
  uint8_t pad7_[3];
  mojo::internal::Handle_Data key_press_count_buffer;

 private:
  StreamFactory_CreateInputStream_Params_Data();
  ~StreamFactory_CreateInputStream_Params_Data() = delete;
};
static_assert(sizeof(StreamFactory_CreateInputStream_Params_Data) == 64,
              "Bad sizeof(StreamFactory_CreateInputStream_Params_Data)");
class  StreamFactory_CreateInputStream_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(StreamFactory_CreateInputStream_ResponseParams_Data));
      new (data()) StreamFactory_CreateInputStream_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    StreamFactory_CreateInputStream_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<StreamFactory_CreateInputStream_ResponseParams_Data>(index_);
    }
    StreamFactory_CreateInputStream_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::media::mojom::internal::AudioDataPipe_Data> data_pipe;
  uint8_t initially_muted : 1;
  uint8_t pad1_[7];
  mojo::internal::Pointer<::mojo_base::mojom::internal::UnguessableToken_Data> stream_id;

 private:
  StreamFactory_CreateInputStream_ResponseParams_Data();
  ~StreamFactory_CreateInputStream_ResponseParams_Data() = delete;
};
static_assert(sizeof(StreamFactory_CreateInputStream_ResponseParams_Data) == 32,
              "Bad sizeof(StreamFactory_CreateInputStream_ResponseParams_Data)");
class  StreamFactory_AssociateInputAndOutputForAec_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(StreamFactory_AssociateInputAndOutputForAec_Params_Data));
      new (data()) StreamFactory_AssociateInputAndOutputForAec_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    StreamFactory_AssociateInputAndOutputForAec_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<StreamFactory_AssociateInputAndOutputForAec_Params_Data>(index_);
    }
    StreamFactory_AssociateInputAndOutputForAec_Params_Data* operator->() { return data(); }

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
  StreamFactory_AssociateInputAndOutputForAec_Params_Data();
  ~StreamFactory_AssociateInputAndOutputForAec_Params_Data() = delete;
};
static_assert(sizeof(StreamFactory_AssociateInputAndOutputForAec_Params_Data) == 24,
              "Bad sizeof(StreamFactory_AssociateInputAndOutputForAec_Params_Data)");
class  StreamFactory_CreateOutputStream_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(StreamFactory_CreateOutputStream_Params_Data));
      new (data()) StreamFactory_CreateOutputStream_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    StreamFactory_CreateOutputStream_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<StreamFactory_CreateOutputStream_Params_Data>(index_);
    }
    StreamFactory_CreateOutputStream_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data stream;
  mojo::internal::AssociatedInterface_Data observer;
  mojo::internal::Interface_Data log;
  uint8_t pad2_[4];
  mojo::internal::Pointer<mojo::internal::String_Data> device_id;
  mojo::internal::Pointer<::media::mojom::internal::AudioParameters_Data> params;
  mojo::internal::Pointer<::mojo_base::mojom::internal::UnguessableToken_Data> group_id;

 private:
  StreamFactory_CreateOutputStream_Params_Data();
  ~StreamFactory_CreateOutputStream_Params_Data() = delete;
};
static_assert(sizeof(StreamFactory_CreateOutputStream_Params_Data) == 56,
              "Bad sizeof(StreamFactory_CreateOutputStream_Params_Data)");
class  StreamFactory_CreateOutputStream_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(StreamFactory_CreateOutputStream_ResponseParams_Data));
      new (data()) StreamFactory_CreateOutputStream_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    StreamFactory_CreateOutputStream_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<StreamFactory_CreateOutputStream_ResponseParams_Data>(index_);
    }
    StreamFactory_CreateOutputStream_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::media::mojom::internal::AudioDataPipe_Data> data_pipe;

 private:
  StreamFactory_CreateOutputStream_ResponseParams_Data();
  ~StreamFactory_CreateOutputStream_ResponseParams_Data() = delete;
};
static_assert(sizeof(StreamFactory_CreateOutputStream_ResponseParams_Data) == 16,
              "Bad sizeof(StreamFactory_CreateOutputStream_ResponseParams_Data)");
class  StreamFactory_BindMuter_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(StreamFactory_BindMuter_Params_Data));
      new (data()) StreamFactory_BindMuter_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    StreamFactory_BindMuter_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<StreamFactory_BindMuter_Params_Data>(index_);
    }
    StreamFactory_BindMuter_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::AssociatedEndpointHandle_Data request;
  uint8_t pad0_[4];
  mojo::internal::Pointer<::mojo_base::mojom::internal::UnguessableToken_Data> group_id;

 private:
  StreamFactory_BindMuter_Params_Data();
  ~StreamFactory_BindMuter_Params_Data() = delete;
};
static_assert(sizeof(StreamFactory_BindMuter_Params_Data) == 24,
              "Bad sizeof(StreamFactory_BindMuter_Params_Data)");
class  StreamFactory_CreateLoopbackStream_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(StreamFactory_CreateLoopbackStream_Params_Data));
      new (data()) StreamFactory_CreateLoopbackStream_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    StreamFactory_CreateLoopbackStream_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<StreamFactory_CreateLoopbackStream_Params_Data>(index_);
    }
    StreamFactory_CreateLoopbackStream_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data stream;
  mojo::internal::Interface_Data client;
  mojo::internal::Interface_Data observer;
  uint32_t shared_memory_count;
  mojo::internal::Pointer<::media::mojom::internal::AudioParameters_Data> params;
  mojo::internal::Pointer<::mojo_base::mojom::internal::UnguessableToken_Data> group_id;

 private:
  StreamFactory_CreateLoopbackStream_Params_Data();
  ~StreamFactory_CreateLoopbackStream_Params_Data() = delete;
};
static_assert(sizeof(StreamFactory_CreateLoopbackStream_Params_Data) == 48,
              "Bad sizeof(StreamFactory_CreateLoopbackStream_Params_Data)");
class  StreamFactory_CreateLoopbackStream_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(StreamFactory_CreateLoopbackStream_ResponseParams_Data));
      new (data()) StreamFactory_CreateLoopbackStream_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    StreamFactory_CreateLoopbackStream_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<StreamFactory_CreateLoopbackStream_ResponseParams_Data>(index_);
    }
    StreamFactory_CreateLoopbackStream_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::media::mojom::internal::AudioDataPipe_Data> data_pipe;

 private:
  StreamFactory_CreateLoopbackStream_ResponseParams_Data();
  ~StreamFactory_CreateLoopbackStream_ResponseParams_Data() = delete;
};
static_assert(sizeof(StreamFactory_CreateLoopbackStream_ResponseParams_Data) == 16,
              "Bad sizeof(StreamFactory_CreateLoopbackStream_ResponseParams_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace audio

#endif  // SERVICES_AUDIO_PUBLIC_MOJOM_STREAM_FACTORY_MOJOM_SHARED_INTERNAL_H_