// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_ARC_COMMON_VIDEO_PROTECTED_BUFFER_ALLOCATOR_MOJOM_SHARED_INTERNAL_H_
#define COMPONENTS_ARC_COMMON_VIDEO_PROTECTED_BUFFER_ALLOCATOR_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "components/arc/common/video_common.mojom-shared-internal.h"
#include "mojo/public/cpp/bindings/lib/native_enum_data.h"
#include "mojo/public/interfaces/bindings/native_struct.mojom-shared-internal.h"

namespace mojo {
namespace internal {
class ValidationContext;
}
}
namespace arc {
namespace mojom {
namespace internal {

#pragma pack(push, 1)
class  VideoProtectedBufferAllocator_AllocateProtectedSharedMemory_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VideoProtectedBufferAllocator_AllocateProtectedSharedMemory_Params_Data));
      new (data()) VideoProtectedBufferAllocator_AllocateProtectedSharedMemory_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VideoProtectedBufferAllocator_AllocateProtectedSharedMemory_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VideoProtectedBufferAllocator_AllocateProtectedSharedMemory_Params_Data>(index_);
    }
    VideoProtectedBufferAllocator_AllocateProtectedSharedMemory_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data handle_fd;
  uint8_t pad0_[4];
  uint64_t size;

 private:
  VideoProtectedBufferAllocator_AllocateProtectedSharedMemory_Params_Data();
  ~VideoProtectedBufferAllocator_AllocateProtectedSharedMemory_Params_Data() = delete;
};
static_assert(sizeof(VideoProtectedBufferAllocator_AllocateProtectedSharedMemory_Params_Data) == 24,
              "Bad sizeof(VideoProtectedBufferAllocator_AllocateProtectedSharedMemory_Params_Data)");
class  VideoProtectedBufferAllocator_AllocateProtectedSharedMemory_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VideoProtectedBufferAllocator_AllocateProtectedSharedMemory_ResponseParams_Data));
      new (data()) VideoProtectedBufferAllocator_AllocateProtectedSharedMemory_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VideoProtectedBufferAllocator_AllocateProtectedSharedMemory_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VideoProtectedBufferAllocator_AllocateProtectedSharedMemory_ResponseParams_Data>(index_);
    }
    VideoProtectedBufferAllocator_AllocateProtectedSharedMemory_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t result : 1;
  uint8_t padfinal_[7];

 private:
  VideoProtectedBufferAllocator_AllocateProtectedSharedMemory_ResponseParams_Data();
  ~VideoProtectedBufferAllocator_AllocateProtectedSharedMemory_ResponseParams_Data() = delete;
};
static_assert(sizeof(VideoProtectedBufferAllocator_AllocateProtectedSharedMemory_ResponseParams_Data) == 16,
              "Bad sizeof(VideoProtectedBufferAllocator_AllocateProtectedSharedMemory_ResponseParams_Data)");
class  VideoProtectedBufferAllocator_AllocateProtectedNativePixmap_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VideoProtectedBufferAllocator_AllocateProtectedNativePixmap_Params_Data));
      new (data()) VideoProtectedBufferAllocator_AllocateProtectedNativePixmap_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VideoProtectedBufferAllocator_AllocateProtectedNativePixmap_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VideoProtectedBufferAllocator_AllocateProtectedNativePixmap_Params_Data>(index_);
    }
    VideoProtectedBufferAllocator_AllocateProtectedNativePixmap_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data handle_fd;
  int32_t pixel_format;
  mojo::internal::Pointer<::arc::mojom::internal::Size_Data> picture_size;

 private:
  VideoProtectedBufferAllocator_AllocateProtectedNativePixmap_Params_Data();
  ~VideoProtectedBufferAllocator_AllocateProtectedNativePixmap_Params_Data() = delete;
};
static_assert(sizeof(VideoProtectedBufferAllocator_AllocateProtectedNativePixmap_Params_Data) == 24,
              "Bad sizeof(VideoProtectedBufferAllocator_AllocateProtectedNativePixmap_Params_Data)");
class  VideoProtectedBufferAllocator_AllocateProtectedNativePixmap_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VideoProtectedBufferAllocator_AllocateProtectedNativePixmap_ResponseParams_Data));
      new (data()) VideoProtectedBufferAllocator_AllocateProtectedNativePixmap_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VideoProtectedBufferAllocator_AllocateProtectedNativePixmap_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VideoProtectedBufferAllocator_AllocateProtectedNativePixmap_ResponseParams_Data>(index_);
    }
    VideoProtectedBufferAllocator_AllocateProtectedNativePixmap_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t result : 1;
  uint8_t padfinal_[7];

 private:
  VideoProtectedBufferAllocator_AllocateProtectedNativePixmap_ResponseParams_Data();
  ~VideoProtectedBufferAllocator_AllocateProtectedNativePixmap_ResponseParams_Data() = delete;
};
static_assert(sizeof(VideoProtectedBufferAllocator_AllocateProtectedNativePixmap_ResponseParams_Data) == 16,
              "Bad sizeof(VideoProtectedBufferAllocator_AllocateProtectedNativePixmap_ResponseParams_Data)");
class  VideoProtectedBufferAllocator_ReleaseProtectedBuffer_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VideoProtectedBufferAllocator_ReleaseProtectedBuffer_Params_Data));
      new (data()) VideoProtectedBufferAllocator_ReleaseProtectedBuffer_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VideoProtectedBufferAllocator_ReleaseProtectedBuffer_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VideoProtectedBufferAllocator_ReleaseProtectedBuffer_Params_Data>(index_);
    }
    VideoProtectedBufferAllocator_ReleaseProtectedBuffer_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data handle_fd;
  uint8_t padfinal_[4];

 private:
  VideoProtectedBufferAllocator_ReleaseProtectedBuffer_Params_Data();
  ~VideoProtectedBufferAllocator_ReleaseProtectedBuffer_Params_Data() = delete;
};
static_assert(sizeof(VideoProtectedBufferAllocator_ReleaseProtectedBuffer_Params_Data) == 16,
              "Bad sizeof(VideoProtectedBufferAllocator_ReleaseProtectedBuffer_Params_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace arc

#endif  // COMPONENTS_ARC_COMMON_VIDEO_PROTECTED_BUFFER_ALLOCATOR_MOJOM_SHARED_INTERNAL_H_