// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_VIDEO_CAPTURE_PUBLIC_MOJOM_PRODUCER_MOJOM_SHARED_INTERNAL_H_
#define SERVICES_VIDEO_CAPTURE_PUBLIC_MOJOM_PRODUCER_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
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
class  Producer_OnNewBufferHandle_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Producer_OnNewBufferHandle_Params_Data));
      new (data()) Producer_OnNewBufferHandle_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Producer_OnNewBufferHandle_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Producer_OnNewBufferHandle_Params_Data>(index_);
    }
    Producer_OnNewBufferHandle_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t buffer_id;
  mojo::internal::Handle_Data buffer_handle;

 private:
  Producer_OnNewBufferHandle_Params_Data();
  ~Producer_OnNewBufferHandle_Params_Data() = delete;
};
static_assert(sizeof(Producer_OnNewBufferHandle_Params_Data) == 16,
              "Bad sizeof(Producer_OnNewBufferHandle_Params_Data)");
class  Producer_OnNewBufferHandle_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Producer_OnNewBufferHandle_ResponseParams_Data));
      new (data()) Producer_OnNewBufferHandle_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Producer_OnNewBufferHandle_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Producer_OnNewBufferHandle_ResponseParams_Data>(index_);
    }
    Producer_OnNewBufferHandle_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  Producer_OnNewBufferHandle_ResponseParams_Data();
  ~Producer_OnNewBufferHandle_ResponseParams_Data() = delete;
};
static_assert(sizeof(Producer_OnNewBufferHandle_ResponseParams_Data) == 8,
              "Bad sizeof(Producer_OnNewBufferHandle_ResponseParams_Data)");
class  Producer_OnBufferRetired_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Producer_OnBufferRetired_Params_Data));
      new (data()) Producer_OnBufferRetired_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Producer_OnBufferRetired_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Producer_OnBufferRetired_Params_Data>(index_);
    }
    Producer_OnBufferRetired_Params_Data* operator->() { return data(); }

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
  Producer_OnBufferRetired_Params_Data();
  ~Producer_OnBufferRetired_Params_Data() = delete;
};
static_assert(sizeof(Producer_OnBufferRetired_Params_Data) == 16,
              "Bad sizeof(Producer_OnBufferRetired_Params_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace video_capture

#endif  // SERVICES_VIDEO_CAPTURE_PUBLIC_MOJOM_PRODUCER_MOJOM_SHARED_INTERNAL_H_