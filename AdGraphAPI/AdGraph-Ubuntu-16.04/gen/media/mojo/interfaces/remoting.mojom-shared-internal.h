// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_REMOTING_MOJOM_SHARED_INTERNAL_H_
#define MEDIA_MOJO_INTERFACES_REMOTING_MOJOM_SHARED_INTERNAL_H_

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
class  RemoterFactory_Create_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(RemoterFactory_Create_Params_Data));
      new (data()) RemoterFactory_Create_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    RemoterFactory_Create_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<RemoterFactory_Create_Params_Data>(index_);
    }
    RemoterFactory_Create_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Interface_Data source;
  mojo::internal::Handle_Data remoter;
  uint8_t padfinal_[4];

 private:
  RemoterFactory_Create_Params_Data();
  ~RemoterFactory_Create_Params_Data() = delete;
};
static_assert(sizeof(RemoterFactory_Create_Params_Data) == 24,
              "Bad sizeof(RemoterFactory_Create_Params_Data)");
class  RemotingDataStreamSender_SendFrame_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(RemotingDataStreamSender_SendFrame_Params_Data));
      new (data()) RemotingDataStreamSender_SendFrame_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    RemotingDataStreamSender_SendFrame_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<RemotingDataStreamSender_SendFrame_Params_Data>(index_);
    }
    RemotingDataStreamSender_SendFrame_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t frame_size;
  uint8_t padfinal_[4];

 private:
  RemotingDataStreamSender_SendFrame_Params_Data();
  ~RemotingDataStreamSender_SendFrame_Params_Data() = delete;
};
static_assert(sizeof(RemotingDataStreamSender_SendFrame_Params_Data) == 16,
              "Bad sizeof(RemotingDataStreamSender_SendFrame_Params_Data)");
class  RemotingDataStreamSender_CancelInFlightData_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(RemotingDataStreamSender_CancelInFlightData_Params_Data));
      new (data()) RemotingDataStreamSender_CancelInFlightData_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    RemotingDataStreamSender_CancelInFlightData_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<RemotingDataStreamSender_CancelInFlightData_Params_Data>(index_);
    }
    RemotingDataStreamSender_CancelInFlightData_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  RemotingDataStreamSender_CancelInFlightData_Params_Data();
  ~RemotingDataStreamSender_CancelInFlightData_Params_Data() = delete;
};
static_assert(sizeof(RemotingDataStreamSender_CancelInFlightData_Params_Data) == 8,
              "Bad sizeof(RemotingDataStreamSender_CancelInFlightData_Params_Data)");
class  Remoter_Start_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Remoter_Start_Params_Data));
      new (data()) Remoter_Start_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Remoter_Start_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Remoter_Start_Params_Data>(index_);
    }
    Remoter_Start_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  Remoter_Start_Params_Data();
  ~Remoter_Start_Params_Data() = delete;
};
static_assert(sizeof(Remoter_Start_Params_Data) == 8,
              "Bad sizeof(Remoter_Start_Params_Data)");
class  Remoter_StartDataStreams_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Remoter_StartDataStreams_Params_Data));
      new (data()) Remoter_StartDataStreams_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Remoter_StartDataStreams_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Remoter_StartDataStreams_Params_Data>(index_);
    }
    Remoter_StartDataStreams_Params_Data* operator->() { return data(); }

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
  mojo::internal::Handle_Data audio_sender;
  mojo::internal::Handle_Data video_sender;

 private:
  Remoter_StartDataStreams_Params_Data();
  ~Remoter_StartDataStreams_Params_Data() = delete;
};
static_assert(sizeof(Remoter_StartDataStreams_Params_Data) == 24,
              "Bad sizeof(Remoter_StartDataStreams_Params_Data)");
class  Remoter_Stop_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Remoter_Stop_Params_Data));
      new (data()) Remoter_Stop_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Remoter_Stop_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Remoter_Stop_Params_Data>(index_);
    }
    Remoter_Stop_Params_Data* operator->() { return data(); }

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
  Remoter_Stop_Params_Data();
  ~Remoter_Stop_Params_Data() = delete;
};
static_assert(sizeof(Remoter_Stop_Params_Data) == 16,
              "Bad sizeof(Remoter_Stop_Params_Data)");
class  Remoter_SendMessageToSink_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Remoter_SendMessageToSink_Params_Data));
      new (data()) Remoter_SendMessageToSink_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Remoter_SendMessageToSink_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Remoter_SendMessageToSink_Params_Data>(index_);
    }
    Remoter_SendMessageToSink_Params_Data* operator->() { return data(); }

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
  Remoter_SendMessageToSink_Params_Data();
  ~Remoter_SendMessageToSink_Params_Data() = delete;
};
static_assert(sizeof(Remoter_SendMessageToSink_Params_Data) == 16,
              "Bad sizeof(Remoter_SendMessageToSink_Params_Data)");
class  Remoter_EstimateTransmissionCapacity_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Remoter_EstimateTransmissionCapacity_Params_Data));
      new (data()) Remoter_EstimateTransmissionCapacity_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Remoter_EstimateTransmissionCapacity_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Remoter_EstimateTransmissionCapacity_Params_Data>(index_);
    }
    Remoter_EstimateTransmissionCapacity_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  Remoter_EstimateTransmissionCapacity_Params_Data();
  ~Remoter_EstimateTransmissionCapacity_Params_Data() = delete;
};
static_assert(sizeof(Remoter_EstimateTransmissionCapacity_Params_Data) == 8,
              "Bad sizeof(Remoter_EstimateTransmissionCapacity_Params_Data)");
class  Remoter_EstimateTransmissionCapacity_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Remoter_EstimateTransmissionCapacity_ResponseParams_Data));
      new (data()) Remoter_EstimateTransmissionCapacity_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Remoter_EstimateTransmissionCapacity_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Remoter_EstimateTransmissionCapacity_ResponseParams_Data>(index_);
    }
    Remoter_EstimateTransmissionCapacity_ResponseParams_Data* operator->() { return data(); }

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
  Remoter_EstimateTransmissionCapacity_ResponseParams_Data();
  ~Remoter_EstimateTransmissionCapacity_ResponseParams_Data() = delete;
};
static_assert(sizeof(Remoter_EstimateTransmissionCapacity_ResponseParams_Data) == 16,
              "Bad sizeof(Remoter_EstimateTransmissionCapacity_ResponseParams_Data)");
class  RemotingSource_OnSinkAvailable_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(RemotingSource_OnSinkAvailable_Params_Data));
      new (data()) RemotingSource_OnSinkAvailable_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    RemotingSource_OnSinkAvailable_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<RemotingSource_OnSinkAvailable_Params_Data>(index_);
    }
    RemotingSource_OnSinkAvailable_Params_Data* operator->() { return data(); }

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
  RemotingSource_OnSinkAvailable_Params_Data();
  ~RemotingSource_OnSinkAvailable_Params_Data() = delete;
};
static_assert(sizeof(RemotingSource_OnSinkAvailable_Params_Data) == 16,
              "Bad sizeof(RemotingSource_OnSinkAvailable_Params_Data)");
class  RemotingSource_OnSinkGone_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(RemotingSource_OnSinkGone_Params_Data));
      new (data()) RemotingSource_OnSinkGone_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    RemotingSource_OnSinkGone_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<RemotingSource_OnSinkGone_Params_Data>(index_);
    }
    RemotingSource_OnSinkGone_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  RemotingSource_OnSinkGone_Params_Data();
  ~RemotingSource_OnSinkGone_Params_Data() = delete;
};
static_assert(sizeof(RemotingSource_OnSinkGone_Params_Data) == 8,
              "Bad sizeof(RemotingSource_OnSinkGone_Params_Data)");
class  RemotingSource_OnStarted_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(RemotingSource_OnStarted_Params_Data));
      new (data()) RemotingSource_OnStarted_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    RemotingSource_OnStarted_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<RemotingSource_OnStarted_Params_Data>(index_);
    }
    RemotingSource_OnStarted_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  RemotingSource_OnStarted_Params_Data();
  ~RemotingSource_OnStarted_Params_Data() = delete;
};
static_assert(sizeof(RemotingSource_OnStarted_Params_Data) == 8,
              "Bad sizeof(RemotingSource_OnStarted_Params_Data)");
class  RemotingSource_OnStartFailed_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(RemotingSource_OnStartFailed_Params_Data));
      new (data()) RemotingSource_OnStartFailed_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    RemotingSource_OnStartFailed_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<RemotingSource_OnStartFailed_Params_Data>(index_);
    }
    RemotingSource_OnStartFailed_Params_Data* operator->() { return data(); }

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
  RemotingSource_OnStartFailed_Params_Data();
  ~RemotingSource_OnStartFailed_Params_Data() = delete;
};
static_assert(sizeof(RemotingSource_OnStartFailed_Params_Data) == 16,
              "Bad sizeof(RemotingSource_OnStartFailed_Params_Data)");
class  RemotingSource_OnMessageFromSink_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(RemotingSource_OnMessageFromSink_Params_Data));
      new (data()) RemotingSource_OnMessageFromSink_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    RemotingSource_OnMessageFromSink_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<RemotingSource_OnMessageFromSink_Params_Data>(index_);
    }
    RemotingSource_OnMessageFromSink_Params_Data* operator->() { return data(); }

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
  RemotingSource_OnMessageFromSink_Params_Data();
  ~RemotingSource_OnMessageFromSink_Params_Data() = delete;
};
static_assert(sizeof(RemotingSource_OnMessageFromSink_Params_Data) == 16,
              "Bad sizeof(RemotingSource_OnMessageFromSink_Params_Data)");
class  RemotingSource_OnStopped_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(RemotingSource_OnStopped_Params_Data));
      new (data()) RemotingSource_OnStopped_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    RemotingSource_OnStopped_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<RemotingSource_OnStopped_Params_Data>(index_);
    }
    RemotingSource_OnStopped_Params_Data* operator->() { return data(); }

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
  RemotingSource_OnStopped_Params_Data();
  ~RemotingSource_OnStopped_Params_Data() = delete;
};
static_assert(sizeof(RemotingSource_OnStopped_Params_Data) == 16,
              "Bad sizeof(RemotingSource_OnStopped_Params_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_INTERFACES_REMOTING_MOJOM_SHARED_INTERNAL_H_