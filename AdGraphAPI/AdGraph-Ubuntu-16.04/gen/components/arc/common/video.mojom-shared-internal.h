// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_ARC_COMMON_VIDEO_MOJOM_SHARED_INTERNAL_H_
#define COMPONENTS_ARC_COMMON_VIDEO_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "components/arc/common/video_decode_accelerator.mojom-shared-internal.h"
#include "components/arc/common/video_encode_accelerator.mojom-shared-internal.h"
#include "components/arc/common/video_protected_buffer_allocator.mojom-shared-internal.h"
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
class  VideoHost_OnBootstrapVideoAcceleratorFactory_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VideoHost_OnBootstrapVideoAcceleratorFactory_Params_Data));
      new (data()) VideoHost_OnBootstrapVideoAcceleratorFactory_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VideoHost_OnBootstrapVideoAcceleratorFactory_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VideoHost_OnBootstrapVideoAcceleratorFactory_Params_Data>(index_);
    }
    VideoHost_OnBootstrapVideoAcceleratorFactory_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  VideoHost_OnBootstrapVideoAcceleratorFactory_Params_Data();
  ~VideoHost_OnBootstrapVideoAcceleratorFactory_Params_Data() = delete;
};
static_assert(sizeof(VideoHost_OnBootstrapVideoAcceleratorFactory_Params_Data) == 8,
              "Bad sizeof(VideoHost_OnBootstrapVideoAcceleratorFactory_Params_Data)");
class  VideoHost_OnBootstrapVideoAcceleratorFactory_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VideoHost_OnBootstrapVideoAcceleratorFactory_ResponseParams_Data));
      new (data()) VideoHost_OnBootstrapVideoAcceleratorFactory_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VideoHost_OnBootstrapVideoAcceleratorFactory_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VideoHost_OnBootstrapVideoAcceleratorFactory_ResponseParams_Data>(index_);
    }
    VideoHost_OnBootstrapVideoAcceleratorFactory_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data channel_handle;
  uint8_t pad0_[4];
  mojo::internal::Pointer<mojo::internal::String_Data> token;

 private:
  VideoHost_OnBootstrapVideoAcceleratorFactory_ResponseParams_Data();
  ~VideoHost_OnBootstrapVideoAcceleratorFactory_ResponseParams_Data() = delete;
};
static_assert(sizeof(VideoHost_OnBootstrapVideoAcceleratorFactory_ResponseParams_Data) == 24,
              "Bad sizeof(VideoHost_OnBootstrapVideoAcceleratorFactory_ResponseParams_Data)");
class  VideoInstance_InitDeprecated_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VideoInstance_InitDeprecated_Params_Data));
      new (data()) VideoInstance_InitDeprecated_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VideoInstance_InitDeprecated_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VideoInstance_InitDeprecated_Params_Data>(index_);
    }
    VideoInstance_InitDeprecated_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Interface_Data host_ptr;

 private:
  VideoInstance_InitDeprecated_Params_Data();
  ~VideoInstance_InitDeprecated_Params_Data() = delete;
};
static_assert(sizeof(VideoInstance_InitDeprecated_Params_Data) == 16,
              "Bad sizeof(VideoInstance_InitDeprecated_Params_Data)");
class  VideoInstance_Init_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VideoInstance_Init_Params_Data));
      new (data()) VideoInstance_Init_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VideoInstance_Init_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VideoInstance_Init_Params_Data>(index_);
    }
    VideoInstance_Init_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Interface_Data host_ptr;

 private:
  VideoInstance_Init_Params_Data();
  ~VideoInstance_Init_Params_Data() = delete;
};
static_assert(sizeof(VideoInstance_Init_Params_Data) == 16,
              "Bad sizeof(VideoInstance_Init_Params_Data)");
class  VideoInstance_Init_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VideoInstance_Init_ResponseParams_Data));
      new (data()) VideoInstance_Init_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VideoInstance_Init_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VideoInstance_Init_ResponseParams_Data>(index_);
    }
    VideoInstance_Init_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  VideoInstance_Init_ResponseParams_Data();
  ~VideoInstance_Init_ResponseParams_Data() = delete;
};
static_assert(sizeof(VideoInstance_Init_ResponseParams_Data) == 8,
              "Bad sizeof(VideoInstance_Init_ResponseParams_Data)");
class  VideoAcceleratorFactory_CreateEncodeAccelerator_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VideoAcceleratorFactory_CreateEncodeAccelerator_Params_Data));
      new (data()) VideoAcceleratorFactory_CreateEncodeAccelerator_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VideoAcceleratorFactory_CreateEncodeAccelerator_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VideoAcceleratorFactory_CreateEncodeAccelerator_Params_Data>(index_);
    }
    VideoAcceleratorFactory_CreateEncodeAccelerator_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data video_encoder;
  uint8_t padfinal_[4];

 private:
  VideoAcceleratorFactory_CreateEncodeAccelerator_Params_Data();
  ~VideoAcceleratorFactory_CreateEncodeAccelerator_Params_Data() = delete;
};
static_assert(sizeof(VideoAcceleratorFactory_CreateEncodeAccelerator_Params_Data) == 16,
              "Bad sizeof(VideoAcceleratorFactory_CreateEncodeAccelerator_Params_Data)");
class  VideoAcceleratorFactory_CreateDecodeAccelerator_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VideoAcceleratorFactory_CreateDecodeAccelerator_Params_Data));
      new (data()) VideoAcceleratorFactory_CreateDecodeAccelerator_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VideoAcceleratorFactory_CreateDecodeAccelerator_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VideoAcceleratorFactory_CreateDecodeAccelerator_Params_Data>(index_);
    }
    VideoAcceleratorFactory_CreateDecodeAccelerator_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data video_decoder;
  uint8_t padfinal_[4];

 private:
  VideoAcceleratorFactory_CreateDecodeAccelerator_Params_Data();
  ~VideoAcceleratorFactory_CreateDecodeAccelerator_Params_Data() = delete;
};
static_assert(sizeof(VideoAcceleratorFactory_CreateDecodeAccelerator_Params_Data) == 16,
              "Bad sizeof(VideoAcceleratorFactory_CreateDecodeAccelerator_Params_Data)");
class  VideoAcceleratorFactory_CreateProtectedBufferAllocator_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VideoAcceleratorFactory_CreateProtectedBufferAllocator_Params_Data));
      new (data()) VideoAcceleratorFactory_CreateProtectedBufferAllocator_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VideoAcceleratorFactory_CreateProtectedBufferAllocator_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VideoAcceleratorFactory_CreateProtectedBufferAllocator_Params_Data>(index_);
    }
    VideoAcceleratorFactory_CreateProtectedBufferAllocator_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data video_protected_buffer_allocator;
  uint8_t padfinal_[4];

 private:
  VideoAcceleratorFactory_CreateProtectedBufferAllocator_Params_Data();
  ~VideoAcceleratorFactory_CreateProtectedBufferAllocator_Params_Data() = delete;
};
static_assert(sizeof(VideoAcceleratorFactory_CreateProtectedBufferAllocator_Params_Data) == 16,
              "Bad sizeof(VideoAcceleratorFactory_CreateProtectedBufferAllocator_Params_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace arc

#endif  // COMPONENTS_ARC_COMMON_VIDEO_MOJOM_SHARED_INTERNAL_H_