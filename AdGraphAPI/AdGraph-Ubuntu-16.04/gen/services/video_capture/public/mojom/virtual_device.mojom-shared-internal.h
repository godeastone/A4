// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_VIDEO_CAPTURE_PUBLIC_MOJOM_VIRTUAL_DEVICE_MOJOM_SHARED_INTERNAL_H_
#define SERVICES_VIDEO_CAPTURE_PUBLIC_MOJOM_VIRTUAL_DEVICE_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "media/capture/mojom/video_capture_types.mojom-shared-internal.h"
#include "services/video_capture/public/mojom/producer.mojom-shared-internal.h"
#include "services/video_capture/public/mojom/scoped_access_permission.mojom-shared-internal.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-shared-internal.h"
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
class  SharedMemoryVirtualDevice_RequestFrameBuffer_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SharedMemoryVirtualDevice_RequestFrameBuffer_Params_Data));
      new (data()) SharedMemoryVirtualDevice_RequestFrameBuffer_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SharedMemoryVirtualDevice_RequestFrameBuffer_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SharedMemoryVirtualDevice_RequestFrameBuffer_Params_Data>(index_);
    }
    SharedMemoryVirtualDevice_RequestFrameBuffer_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::gfx::mojom::internal::Size_Data> dimension;
  int32_t pixel_format;
  uint8_t padfinal_[4];

 private:
  SharedMemoryVirtualDevice_RequestFrameBuffer_Params_Data();
  ~SharedMemoryVirtualDevice_RequestFrameBuffer_Params_Data() = delete;
};
static_assert(sizeof(SharedMemoryVirtualDevice_RequestFrameBuffer_Params_Data) == 24,
              "Bad sizeof(SharedMemoryVirtualDevice_RequestFrameBuffer_Params_Data)");
class  SharedMemoryVirtualDevice_RequestFrameBuffer_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SharedMemoryVirtualDevice_RequestFrameBuffer_ResponseParams_Data));
      new (data()) SharedMemoryVirtualDevice_RequestFrameBuffer_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SharedMemoryVirtualDevice_RequestFrameBuffer_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SharedMemoryVirtualDevice_RequestFrameBuffer_ResponseParams_Data>(index_);
    }
    SharedMemoryVirtualDevice_RequestFrameBuffer_ResponseParams_Data* operator->() { return data(); }

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
  SharedMemoryVirtualDevice_RequestFrameBuffer_ResponseParams_Data();
  ~SharedMemoryVirtualDevice_RequestFrameBuffer_ResponseParams_Data() = delete;
};
static_assert(sizeof(SharedMemoryVirtualDevice_RequestFrameBuffer_ResponseParams_Data) == 16,
              "Bad sizeof(SharedMemoryVirtualDevice_RequestFrameBuffer_ResponseParams_Data)");
class  SharedMemoryVirtualDevice_OnFrameReadyInBuffer_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SharedMemoryVirtualDevice_OnFrameReadyInBuffer_Params_Data));
      new (data()) SharedMemoryVirtualDevice_OnFrameReadyInBuffer_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SharedMemoryVirtualDevice_OnFrameReadyInBuffer_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SharedMemoryVirtualDevice_OnFrameReadyInBuffer_Params_Data>(index_);
    }
    SharedMemoryVirtualDevice_OnFrameReadyInBuffer_Params_Data* operator->() { return data(); }

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
  mojo::internal::Pointer<::media::mojom::internal::VideoFrameInfo_Data> frame_info;

 private:
  SharedMemoryVirtualDevice_OnFrameReadyInBuffer_Params_Data();
  ~SharedMemoryVirtualDevice_OnFrameReadyInBuffer_Params_Data() = delete;
};
static_assert(sizeof(SharedMemoryVirtualDevice_OnFrameReadyInBuffer_Params_Data) == 24,
              "Bad sizeof(SharedMemoryVirtualDevice_OnFrameReadyInBuffer_Params_Data)");
class  TextureVirtualDevice_OnNewMailboxHolderBufferHandle_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(TextureVirtualDevice_OnNewMailboxHolderBufferHandle_Params_Data));
      new (data()) TextureVirtualDevice_OnNewMailboxHolderBufferHandle_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    TextureVirtualDevice_OnNewMailboxHolderBufferHandle_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<TextureVirtualDevice_OnNewMailboxHolderBufferHandle_Params_Data>(index_);
    }
    TextureVirtualDevice_OnNewMailboxHolderBufferHandle_Params_Data* operator->() { return data(); }

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
  mojo::internal::Pointer<::media::mojom::internal::MailboxBufferHandleSet_Data> mailbox_handles;

 private:
  TextureVirtualDevice_OnNewMailboxHolderBufferHandle_Params_Data();
  ~TextureVirtualDevice_OnNewMailboxHolderBufferHandle_Params_Data() = delete;
};
static_assert(sizeof(TextureVirtualDevice_OnNewMailboxHolderBufferHandle_Params_Data) == 24,
              "Bad sizeof(TextureVirtualDevice_OnNewMailboxHolderBufferHandle_Params_Data)");
class  TextureVirtualDevice_OnFrameReadyInBuffer_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(TextureVirtualDevice_OnFrameReadyInBuffer_Params_Data));
      new (data()) TextureVirtualDevice_OnFrameReadyInBuffer_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    TextureVirtualDevice_OnFrameReadyInBuffer_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<TextureVirtualDevice_OnFrameReadyInBuffer_Params_Data>(index_);
    }
    TextureVirtualDevice_OnFrameReadyInBuffer_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t buffer_id;
  mojo::internal::Interface_Data access_permission;
  uint8_t pad1_[4];
  mojo::internal::Pointer<::media::mojom::internal::VideoFrameInfo_Data> frame_info;

 private:
  TextureVirtualDevice_OnFrameReadyInBuffer_Params_Data();
  ~TextureVirtualDevice_OnFrameReadyInBuffer_Params_Data() = delete;
};
static_assert(sizeof(TextureVirtualDevice_OnFrameReadyInBuffer_Params_Data) == 32,
              "Bad sizeof(TextureVirtualDevice_OnFrameReadyInBuffer_Params_Data)");
class  TextureVirtualDevice_OnBufferRetired_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(TextureVirtualDevice_OnBufferRetired_Params_Data));
      new (data()) TextureVirtualDevice_OnBufferRetired_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    TextureVirtualDevice_OnBufferRetired_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<TextureVirtualDevice_OnBufferRetired_Params_Data>(index_);
    }
    TextureVirtualDevice_OnBufferRetired_Params_Data* operator->() { return data(); }

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
  TextureVirtualDevice_OnBufferRetired_Params_Data();
  ~TextureVirtualDevice_OnBufferRetired_Params_Data() = delete;
};
static_assert(sizeof(TextureVirtualDevice_OnBufferRetired_Params_Data) == 16,
              "Bad sizeof(TextureVirtualDevice_OnBufferRetired_Params_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace video_capture

#endif  // SERVICES_VIDEO_CAPTURE_PUBLIC_MOJOM_VIRTUAL_DEVICE_MOJOM_SHARED_INTERNAL_H_