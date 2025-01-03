// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_VIDEO_CAPTURE_PUBLIC_MOJOM_RECEIVER_MOJOM_SHARED_INTERNAL_H_
#define SERVICES_VIDEO_CAPTURE_PUBLIC_MOJOM_RECEIVER_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "media/capture/mojom/video_capture_types.mojom-shared-internal.h"
#include "services/video_capture/public/mojom/scoped_access_permission.mojom-shared-internal.h"
#include "mojo/public/cpp/bindings/lib/native_enum_data.h"
#include "mojo/public/interfaces/bindings/native_struct.mojom-shared-internal.h"

namespace mojo {
namespace internal {
class ValidationContext;
}
}
namespace video_capture {
namespace mojom {
namespace internal {

#pragma pack(push, 1)
class  Receiver_OnNewBuffer_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Receiver_OnNewBuffer_Params_Data));
      new (data()) Receiver_OnNewBuffer_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Receiver_OnNewBuffer_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Receiver_OnNewBuffer_Params_Data>(index_);
    }
    Receiver_OnNewBuffer_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t buffer_id;
  uint8_t pad0_[4];
  ::media::mojom::internal::VideoBufferHandle_Data buffer_handle;

 private:
  Receiver_OnNewBuffer_Params_Data();
  ~Receiver_OnNewBuffer_Params_Data() = delete;
};
static_assert(sizeof(Receiver_OnNewBuffer_Params_Data) == 32,
              "Bad sizeof(Receiver_OnNewBuffer_Params_Data)");
class  Receiver_OnFrameReadyInBuffer_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Receiver_OnFrameReadyInBuffer_Params_Data));
      new (data()) Receiver_OnFrameReadyInBuffer_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Receiver_OnFrameReadyInBuffer_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Receiver_OnFrameReadyInBuffer_Params_Data>(index_);
    }
    Receiver_OnFrameReadyInBuffer_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t buffer_id;
  int32_t frame_feedback_id;
  mojo::internal::Interface_Data access_permission;
  mojo::internal::Pointer<::media::mojom::internal::VideoFrameInfo_Data> frame_info;

 private:
  Receiver_OnFrameReadyInBuffer_Params_Data();
  ~Receiver_OnFrameReadyInBuffer_Params_Data() = delete;
};
static_assert(sizeof(Receiver_OnFrameReadyInBuffer_Params_Data) == 32,
              "Bad sizeof(Receiver_OnFrameReadyInBuffer_Params_Data)");
class  Receiver_OnBufferRetired_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Receiver_OnBufferRetired_Params_Data));
      new (data()) Receiver_OnBufferRetired_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Receiver_OnBufferRetired_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Receiver_OnBufferRetired_Params_Data>(index_);
    }
    Receiver_OnBufferRetired_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t buffer_id;
  uint8_t padfinal_[4];

 private:
  Receiver_OnBufferRetired_Params_Data();
  ~Receiver_OnBufferRetired_Params_Data() = delete;
};
static_assert(sizeof(Receiver_OnBufferRetired_Params_Data) == 16,
              "Bad sizeof(Receiver_OnBufferRetired_Params_Data)");
class  Receiver_OnError_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Receiver_OnError_Params_Data));
      new (data()) Receiver_OnError_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Receiver_OnError_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Receiver_OnError_Params_Data>(index_);
    }
    Receiver_OnError_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  Receiver_OnError_Params_Data();
  ~Receiver_OnError_Params_Data() = delete;
};
static_assert(sizeof(Receiver_OnError_Params_Data) == 8,
              "Bad sizeof(Receiver_OnError_Params_Data)");
class  Receiver_OnLog_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Receiver_OnLog_Params_Data));
      new (data()) Receiver_OnLog_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Receiver_OnLog_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Receiver_OnLog_Params_Data>(index_);
    }
    Receiver_OnLog_Params_Data* operator->() { return data(); }

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
  Receiver_OnLog_Params_Data();
  ~Receiver_OnLog_Params_Data() = delete;
};
static_assert(sizeof(Receiver_OnLog_Params_Data) == 16,
              "Bad sizeof(Receiver_OnLog_Params_Data)");
class  Receiver_OnStarted_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Receiver_OnStarted_Params_Data));
      new (data()) Receiver_OnStarted_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Receiver_OnStarted_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Receiver_OnStarted_Params_Data>(index_);
    }
    Receiver_OnStarted_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  Receiver_OnStarted_Params_Data();
  ~Receiver_OnStarted_Params_Data() = delete;
};
static_assert(sizeof(Receiver_OnStarted_Params_Data) == 8,
              "Bad sizeof(Receiver_OnStarted_Params_Data)");
class  Receiver_OnStartedUsingGpuDecode_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Receiver_OnStartedUsingGpuDecode_Params_Data));
      new (data()) Receiver_OnStartedUsingGpuDecode_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Receiver_OnStartedUsingGpuDecode_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Receiver_OnStartedUsingGpuDecode_Params_Data>(index_);
    }
    Receiver_OnStartedUsingGpuDecode_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  Receiver_OnStartedUsingGpuDecode_Params_Data();
  ~Receiver_OnStartedUsingGpuDecode_Params_Data() = delete;
};
static_assert(sizeof(Receiver_OnStartedUsingGpuDecode_Params_Data) == 8,
              "Bad sizeof(Receiver_OnStartedUsingGpuDecode_Params_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace video_capture

#endif  // SERVICES_VIDEO_CAPTURE_PUBLIC_MOJOM_RECEIVER_MOJOM_SHARED_INTERNAL_H_