// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_DEMUXER_STREAM_MOJOM_SHARED_INTERNAL_H_
#define MEDIA_MOJO_INTERFACES_DEMUXER_STREAM_MOJOM_SHARED_INTERNAL_H_

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
using DemuxerStream_Type_Data =
    mojo::internal::NativeEnum_Data;
using DemuxerStream_Status_Data =
    mojo::internal::NativeEnum_Data;

#pragma pack(push, 1)
class  DemuxerStream_Initialize_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(DemuxerStream_Initialize_Params_Data));
      new (data()) DemuxerStream_Initialize_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    DemuxerStream_Initialize_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<DemuxerStream_Initialize_Params_Data>(index_);
    }
    DemuxerStream_Initialize_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  DemuxerStream_Initialize_Params_Data();
  ~DemuxerStream_Initialize_Params_Data() = delete;
};
static_assert(sizeof(DemuxerStream_Initialize_Params_Data) == 8,
              "Bad sizeof(DemuxerStream_Initialize_Params_Data)");
class  DemuxerStream_Initialize_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(DemuxerStream_Initialize_ResponseParams_Data));
      new (data()) DemuxerStream_Initialize_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    DemuxerStream_Initialize_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<DemuxerStream_Initialize_ResponseParams_Data>(index_);
    }
    DemuxerStream_Initialize_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t type;
  mojo::internal::Handle_Data pipe;
  mojo::internal::Pointer<::media::mojom::internal::AudioDecoderConfig_Data> audio_config;
  mojo::internal::Pointer<::media::mojom::internal::VideoDecoderConfig_Data> video_config;

 private:
  DemuxerStream_Initialize_ResponseParams_Data();
  ~DemuxerStream_Initialize_ResponseParams_Data() = delete;
};
static_assert(sizeof(DemuxerStream_Initialize_ResponseParams_Data) == 32,
              "Bad sizeof(DemuxerStream_Initialize_ResponseParams_Data)");
class  DemuxerStream_Read_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(DemuxerStream_Read_Params_Data));
      new (data()) DemuxerStream_Read_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    DemuxerStream_Read_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<DemuxerStream_Read_Params_Data>(index_);
    }
    DemuxerStream_Read_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  DemuxerStream_Read_Params_Data();
  ~DemuxerStream_Read_Params_Data() = delete;
};
static_assert(sizeof(DemuxerStream_Read_Params_Data) == 8,
              "Bad sizeof(DemuxerStream_Read_Params_Data)");
class  DemuxerStream_Read_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(DemuxerStream_Read_ResponseParams_Data));
      new (data()) DemuxerStream_Read_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    DemuxerStream_Read_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<DemuxerStream_Read_ResponseParams_Data>(index_);
    }
    DemuxerStream_Read_ResponseParams_Data* operator->() { return data(); }

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
  mojo::internal::Pointer<::media::mojom::internal::AudioDecoderConfig_Data> audio_config;
  mojo::internal::Pointer<::media::mojom::internal::VideoDecoderConfig_Data> video_config;

 private:
  DemuxerStream_Read_ResponseParams_Data();
  ~DemuxerStream_Read_ResponseParams_Data() = delete;
};
static_assert(sizeof(DemuxerStream_Read_ResponseParams_Data) == 40,
              "Bad sizeof(DemuxerStream_Read_ResponseParams_Data)");
class  DemuxerStream_EnableBitstreamConverter_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(DemuxerStream_EnableBitstreamConverter_Params_Data));
      new (data()) DemuxerStream_EnableBitstreamConverter_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    DemuxerStream_EnableBitstreamConverter_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<DemuxerStream_EnableBitstreamConverter_Params_Data>(index_);
    }
    DemuxerStream_EnableBitstreamConverter_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  DemuxerStream_EnableBitstreamConverter_Params_Data();
  ~DemuxerStream_EnableBitstreamConverter_Params_Data() = delete;
};
static_assert(sizeof(DemuxerStream_EnableBitstreamConverter_Params_Data) == 8,
              "Bad sizeof(DemuxerStream_EnableBitstreamConverter_Params_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_INTERFACES_DEMUXER_STREAM_MOJOM_SHARED_INTERNAL_H_