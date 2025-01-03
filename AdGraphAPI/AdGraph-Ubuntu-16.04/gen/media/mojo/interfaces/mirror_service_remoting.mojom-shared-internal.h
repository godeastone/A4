// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_MIRROR_SERVICE_REMOTING_MOJOM_SHARED_INTERNAL_H_
#define MEDIA_MOJO_INTERFACES_MIRROR_SERVICE_REMOTING_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "media/mojo/interfaces/remoting_common.mojom-shared-internal.h"
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
class  MirrorServiceRemoter_Start_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MirrorServiceRemoter_Start_Params_Data));
      new (data()) MirrorServiceRemoter_Start_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MirrorServiceRemoter_Start_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MirrorServiceRemoter_Start_Params_Data>(index_);
    }
    MirrorServiceRemoter_Start_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  MirrorServiceRemoter_Start_Params_Data();
  ~MirrorServiceRemoter_Start_Params_Data() = delete;
};
static_assert(sizeof(MirrorServiceRemoter_Start_Params_Data) == 8,
              "Bad sizeof(MirrorServiceRemoter_Start_Params_Data)");
class  MirrorServiceRemoter_StartDataStreams_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MirrorServiceRemoter_StartDataStreams_Params_Data));
      new (data()) MirrorServiceRemoter_StartDataStreams_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MirrorServiceRemoter_StartDataStreams_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MirrorServiceRemoter_StartDataStreams_Params_Data>(index_);
    }
    MirrorServiceRemoter_StartDataStreams_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t has_audio : 1;
  uint8_t has_video : 1;
  uint8_t padfinal_[7];

 private:
  MirrorServiceRemoter_StartDataStreams_Params_Data();
  ~MirrorServiceRemoter_StartDataStreams_Params_Data() = delete;
};
static_assert(sizeof(MirrorServiceRemoter_StartDataStreams_Params_Data) == 16,
              "Bad sizeof(MirrorServiceRemoter_StartDataStreams_Params_Data)");
class  MirrorServiceRemoter_StartDataStreams_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MirrorServiceRemoter_StartDataStreams_ResponseParams_Data));
      new (data()) MirrorServiceRemoter_StartDataStreams_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MirrorServiceRemoter_StartDataStreams_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MirrorServiceRemoter_StartDataStreams_ResponseParams_Data>(index_);
    }
    MirrorServiceRemoter_StartDataStreams_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t audio_stream_id;
  int32_t video_stream_id;

 private:
  MirrorServiceRemoter_StartDataStreams_ResponseParams_Data();
  ~MirrorServiceRemoter_StartDataStreams_ResponseParams_Data() = delete;
};
static_assert(sizeof(MirrorServiceRemoter_StartDataStreams_ResponseParams_Data) == 16,
              "Bad sizeof(MirrorServiceRemoter_StartDataStreams_ResponseParams_Data)");
class  MirrorServiceRemoter_Stop_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MirrorServiceRemoter_Stop_Params_Data));
      new (data()) MirrorServiceRemoter_Stop_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MirrorServiceRemoter_Stop_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MirrorServiceRemoter_Stop_Params_Data>(index_);
    }
    MirrorServiceRemoter_Stop_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t reason;
  uint8_t padfinal_[4];

 private:
  MirrorServiceRemoter_Stop_Params_Data();
  ~MirrorServiceRemoter_Stop_Params_Data() = delete;
};
static_assert(sizeof(MirrorServiceRemoter_Stop_Params_Data) == 16,
              "Bad sizeof(MirrorServiceRemoter_Stop_Params_Data)");
class  MirrorServiceRemoter_SendMessageToSink_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MirrorServiceRemoter_SendMessageToSink_Params_Data));
      new (data()) MirrorServiceRemoter_SendMessageToSink_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MirrorServiceRemoter_SendMessageToSink_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MirrorServiceRemoter_SendMessageToSink_Params_Data>(index_);
    }
    MirrorServiceRemoter_SendMessageToSink_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> message;

 private:
  MirrorServiceRemoter_SendMessageToSink_Params_Data();
  ~MirrorServiceRemoter_SendMessageToSink_Params_Data() = delete;
};
static_assert(sizeof(MirrorServiceRemoter_SendMessageToSink_Params_Data) == 16,
              "Bad sizeof(MirrorServiceRemoter_SendMessageToSink_Params_Data)");
class  MirrorServiceRemoter_EstimateTransmissionCapacity_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MirrorServiceRemoter_EstimateTransmissionCapacity_Params_Data));
      new (data()) MirrorServiceRemoter_EstimateTransmissionCapacity_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MirrorServiceRemoter_EstimateTransmissionCapacity_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MirrorServiceRemoter_EstimateTransmissionCapacity_Params_Data>(index_);
    }
    MirrorServiceRemoter_EstimateTransmissionCapacity_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  MirrorServiceRemoter_EstimateTransmissionCapacity_Params_Data();
  ~MirrorServiceRemoter_EstimateTransmissionCapacity_Params_Data() = delete;
};
static_assert(sizeof(MirrorServiceRemoter_EstimateTransmissionCapacity_Params_Data) == 8,
              "Bad sizeof(MirrorServiceRemoter_EstimateTransmissionCapacity_Params_Data)");
class  MirrorServiceRemoter_EstimateTransmissionCapacity_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MirrorServiceRemoter_EstimateTransmissionCapacity_ResponseParams_Data));
      new (data()) MirrorServiceRemoter_EstimateTransmissionCapacity_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MirrorServiceRemoter_EstimateTransmissionCapacity_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MirrorServiceRemoter_EstimateTransmissionCapacity_ResponseParams_Data>(index_);
    }
    MirrorServiceRemoter_EstimateTransmissionCapacity_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  double rate;

 private:
  MirrorServiceRemoter_EstimateTransmissionCapacity_ResponseParams_Data();
  ~MirrorServiceRemoter_EstimateTransmissionCapacity_ResponseParams_Data() = delete;
};
static_assert(sizeof(MirrorServiceRemoter_EstimateTransmissionCapacity_ResponseParams_Data) == 16,
              "Bad sizeof(MirrorServiceRemoter_EstimateTransmissionCapacity_ResponseParams_Data)");
class  MirrorServiceRemotingSource_OnSinkAvailable_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MirrorServiceRemotingSource_OnSinkAvailable_Params_Data));
      new (data()) MirrorServiceRemotingSource_OnSinkAvailable_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MirrorServiceRemotingSource_OnSinkAvailable_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MirrorServiceRemotingSource_OnSinkAvailable_Params_Data>(index_);
    }
    MirrorServiceRemotingSource_OnSinkAvailable_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::media::mojom::internal::RemotingSinkMetadata_Data> metadata;

 private:
  MirrorServiceRemotingSource_OnSinkAvailable_Params_Data();
  ~MirrorServiceRemotingSource_OnSinkAvailable_Params_Data() = delete;
};
static_assert(sizeof(MirrorServiceRemotingSource_OnSinkAvailable_Params_Data) == 16,
              "Bad sizeof(MirrorServiceRemotingSource_OnSinkAvailable_Params_Data)");
class  MirrorServiceRemotingSource_OnMessageFromSink_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MirrorServiceRemotingSource_OnMessageFromSink_Params_Data));
      new (data()) MirrorServiceRemotingSource_OnMessageFromSink_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MirrorServiceRemotingSource_OnMessageFromSink_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MirrorServiceRemotingSource_OnMessageFromSink_Params_Data>(index_);
    }
    MirrorServiceRemotingSource_OnMessageFromSink_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> message;

 private:
  MirrorServiceRemotingSource_OnMessageFromSink_Params_Data();
  ~MirrorServiceRemotingSource_OnMessageFromSink_Params_Data() = delete;
};
static_assert(sizeof(MirrorServiceRemotingSource_OnMessageFromSink_Params_Data) == 16,
              "Bad sizeof(MirrorServiceRemotingSource_OnMessageFromSink_Params_Data)");
class  MirrorServiceRemotingSource_OnStopped_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MirrorServiceRemotingSource_OnStopped_Params_Data));
      new (data()) MirrorServiceRemotingSource_OnStopped_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MirrorServiceRemotingSource_OnStopped_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MirrorServiceRemotingSource_OnStopped_Params_Data>(index_);
    }
    MirrorServiceRemotingSource_OnStopped_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t reason;
  uint8_t padfinal_[4];

 private:
  MirrorServiceRemotingSource_OnStopped_Params_Data();
  ~MirrorServiceRemotingSource_OnStopped_Params_Data() = delete;
};
static_assert(sizeof(MirrorServiceRemotingSource_OnStopped_Params_Data) == 16,
              "Bad sizeof(MirrorServiceRemotingSource_OnStopped_Params_Data)");
class  MirrorServiceRemotingSource_OnError_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MirrorServiceRemotingSource_OnError_Params_Data));
      new (data()) MirrorServiceRemotingSource_OnError_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MirrorServiceRemotingSource_OnError_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MirrorServiceRemotingSource_OnError_Params_Data>(index_);
    }
    MirrorServiceRemotingSource_OnError_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  MirrorServiceRemotingSource_OnError_Params_Data();
  ~MirrorServiceRemotingSource_OnError_Params_Data() = delete;
};
static_assert(sizeof(MirrorServiceRemotingSource_OnError_Params_Data) == 8,
              "Bad sizeof(MirrorServiceRemotingSource_OnError_Params_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_INTERFACES_MIRROR_SERVICE_REMOTING_MOJOM_SHARED_INTERNAL_H_