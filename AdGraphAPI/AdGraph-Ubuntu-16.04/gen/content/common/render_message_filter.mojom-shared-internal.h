// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_RENDER_MESSAGE_FILTER_MOJOM_SHARED_INTERNAL_H_
#define CONTENT_COMMON_RENDER_MESSAGE_FILTER_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "content/common/input/input_handler.mojom-shared-internal.h"
#include "content/common/native_types.mojom-shared-internal.h"
#include "content/common/widget.mojom-shared-internal.h"
#include "mojo/public/mojom/base/thread_priority.mojom-shared-internal.h"
#include "mojo/public/mojom/base/time.mojom-shared-internal.h"
#include "url/mojom/origin.mojom-shared-internal.h"
#include "url/mojom/url.mojom-shared-internal.h"
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
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) RenderMessageFilter_GenerateRoutingID_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(RenderMessageFilter_GenerateRoutingID_Params_Data));
      new (data()) RenderMessageFilter_GenerateRoutingID_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    RenderMessageFilter_GenerateRoutingID_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<RenderMessageFilter_GenerateRoutingID_Params_Data>(index_);
    }
    RenderMessageFilter_GenerateRoutingID_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  RenderMessageFilter_GenerateRoutingID_Params_Data();
  ~RenderMessageFilter_GenerateRoutingID_Params_Data() = delete;
};
static_assert(sizeof(RenderMessageFilter_GenerateRoutingID_Params_Data) == 8,
              "Bad sizeof(RenderMessageFilter_GenerateRoutingID_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) RenderMessageFilter_GenerateRoutingID_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(RenderMessageFilter_GenerateRoutingID_ResponseParams_Data));
      new (data()) RenderMessageFilter_GenerateRoutingID_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    RenderMessageFilter_GenerateRoutingID_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<RenderMessageFilter_GenerateRoutingID_ResponseParams_Data>(index_);
    }
    RenderMessageFilter_GenerateRoutingID_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t routing_id;
  uint8_t padfinal_[4];

 private:
  RenderMessageFilter_GenerateRoutingID_ResponseParams_Data();
  ~RenderMessageFilter_GenerateRoutingID_ResponseParams_Data() = delete;
};
static_assert(sizeof(RenderMessageFilter_GenerateRoutingID_ResponseParams_Data) == 16,
              "Bad sizeof(RenderMessageFilter_GenerateRoutingID_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) RenderMessageFilter_CreateNewWidget_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(RenderMessageFilter_CreateNewWidget_Params_Data));
      new (data()) RenderMessageFilter_CreateNewWidget_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    RenderMessageFilter_CreateNewWidget_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<RenderMessageFilter_CreateNewWidget_Params_Data>(index_);
    }
    RenderMessageFilter_CreateNewWidget_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t opener_id;
  int32_t popup_type;
  mojo::internal::Interface_Data widget;

 private:
  RenderMessageFilter_CreateNewWidget_Params_Data();
  ~RenderMessageFilter_CreateNewWidget_Params_Data() = delete;
};
static_assert(sizeof(RenderMessageFilter_CreateNewWidget_Params_Data) == 24,
              "Bad sizeof(RenderMessageFilter_CreateNewWidget_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) RenderMessageFilter_CreateNewWidget_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(RenderMessageFilter_CreateNewWidget_ResponseParams_Data));
      new (data()) RenderMessageFilter_CreateNewWidget_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    RenderMessageFilter_CreateNewWidget_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<RenderMessageFilter_CreateNewWidget_ResponseParams_Data>(index_);
    }
    RenderMessageFilter_CreateNewWidget_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t route_id;
  uint8_t padfinal_[4];

 private:
  RenderMessageFilter_CreateNewWidget_ResponseParams_Data();
  ~RenderMessageFilter_CreateNewWidget_ResponseParams_Data() = delete;
};
static_assert(sizeof(RenderMessageFilter_CreateNewWidget_ResponseParams_Data) == 16,
              "Bad sizeof(RenderMessageFilter_CreateNewWidget_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) RenderMessageFilter_CreateFullscreenWidget_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(RenderMessageFilter_CreateFullscreenWidget_Params_Data));
      new (data()) RenderMessageFilter_CreateFullscreenWidget_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    RenderMessageFilter_CreateFullscreenWidget_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<RenderMessageFilter_CreateFullscreenWidget_Params_Data>(index_);
    }
    RenderMessageFilter_CreateFullscreenWidget_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t opener_id;
  mojo::internal::Interface_Data widget;
  uint8_t padfinal_[4];

 private:
  RenderMessageFilter_CreateFullscreenWidget_Params_Data();
  ~RenderMessageFilter_CreateFullscreenWidget_Params_Data() = delete;
};
static_assert(sizeof(RenderMessageFilter_CreateFullscreenWidget_Params_Data) == 24,
              "Bad sizeof(RenderMessageFilter_CreateFullscreenWidget_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) RenderMessageFilter_CreateFullscreenWidget_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(RenderMessageFilter_CreateFullscreenWidget_ResponseParams_Data));
      new (data()) RenderMessageFilter_CreateFullscreenWidget_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    RenderMessageFilter_CreateFullscreenWidget_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<RenderMessageFilter_CreateFullscreenWidget_ResponseParams_Data>(index_);
    }
    RenderMessageFilter_CreateFullscreenWidget_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t route_id;
  uint8_t padfinal_[4];

 private:
  RenderMessageFilter_CreateFullscreenWidget_ResponseParams_Data();
  ~RenderMessageFilter_CreateFullscreenWidget_ResponseParams_Data() = delete;
};
static_assert(sizeof(RenderMessageFilter_CreateFullscreenWidget_ResponseParams_Data) == 16,
              "Bad sizeof(RenderMessageFilter_CreateFullscreenWidget_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) RenderMessageFilter_DidGenerateCacheableMetadata_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(RenderMessageFilter_DidGenerateCacheableMetadata_Params_Data));
      new (data()) RenderMessageFilter_DidGenerateCacheableMetadata_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    RenderMessageFilter_DidGenerateCacheableMetadata_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<RenderMessageFilter_DidGenerateCacheableMetadata_Params_Data>(index_);
    }
    RenderMessageFilter_DidGenerateCacheableMetadata_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> url;
  mojo::internal::Pointer<::mojo_base::mojom::internal::Time_Data> expected_response_time;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> data;

 private:
  RenderMessageFilter_DidGenerateCacheableMetadata_Params_Data();
  ~RenderMessageFilter_DidGenerateCacheableMetadata_Params_Data() = delete;
};
static_assert(sizeof(RenderMessageFilter_DidGenerateCacheableMetadata_Params_Data) == 32,
              "Bad sizeof(RenderMessageFilter_DidGenerateCacheableMetadata_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) RenderMessageFilter_DidGenerateCacheableMetadataInCacheStorage_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(RenderMessageFilter_DidGenerateCacheableMetadataInCacheStorage_Params_Data));
      new (data()) RenderMessageFilter_DidGenerateCacheableMetadataInCacheStorage_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    RenderMessageFilter_DidGenerateCacheableMetadataInCacheStorage_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<RenderMessageFilter_DidGenerateCacheableMetadataInCacheStorage_Params_Data>(index_);
    }
    RenderMessageFilter_DidGenerateCacheableMetadataInCacheStorage_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> url;
  mojo::internal::Pointer<::mojo_base::mojom::internal::Time_Data> expected_response_time;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> data;
  mojo::internal::Pointer<::url::mojom::internal::Origin_Data> cache_storage_origin;
  mojo::internal::Pointer<mojo::internal::String_Data> cache_storage_cache_name;

 private:
  RenderMessageFilter_DidGenerateCacheableMetadataInCacheStorage_Params_Data();
  ~RenderMessageFilter_DidGenerateCacheableMetadataInCacheStorage_Params_Data() = delete;
};
static_assert(sizeof(RenderMessageFilter_DidGenerateCacheableMetadataInCacheStorage_Params_Data) == 48,
              "Bad sizeof(RenderMessageFilter_DidGenerateCacheableMetadataInCacheStorage_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) RenderMessageFilter_HasGpuProcess_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(RenderMessageFilter_HasGpuProcess_Params_Data));
      new (data()) RenderMessageFilter_HasGpuProcess_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    RenderMessageFilter_HasGpuProcess_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<RenderMessageFilter_HasGpuProcess_Params_Data>(index_);
    }
    RenderMessageFilter_HasGpuProcess_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  RenderMessageFilter_HasGpuProcess_Params_Data();
  ~RenderMessageFilter_HasGpuProcess_Params_Data() = delete;
};
static_assert(sizeof(RenderMessageFilter_HasGpuProcess_Params_Data) == 8,
              "Bad sizeof(RenderMessageFilter_HasGpuProcess_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) RenderMessageFilter_HasGpuProcess_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(RenderMessageFilter_HasGpuProcess_ResponseParams_Data));
      new (data()) RenderMessageFilter_HasGpuProcess_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    RenderMessageFilter_HasGpuProcess_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<RenderMessageFilter_HasGpuProcess_ResponseParams_Data>(index_);
    }
    RenderMessageFilter_HasGpuProcess_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t has_gpu_process : 1;
  uint8_t padfinal_[7];

 private:
  RenderMessageFilter_HasGpuProcess_ResponseParams_Data();
  ~RenderMessageFilter_HasGpuProcess_ResponseParams_Data() = delete;
};
static_assert(sizeof(RenderMessageFilter_HasGpuProcess_ResponseParams_Data) == 16,
              "Bad sizeof(RenderMessageFilter_HasGpuProcess_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) RenderMessageFilter_SetThreadPriority_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(RenderMessageFilter_SetThreadPriority_Params_Data));
      new (data()) RenderMessageFilter_SetThreadPriority_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    RenderMessageFilter_SetThreadPriority_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<RenderMessageFilter_SetThreadPriority_Params_Data>(index_);
    }
    RenderMessageFilter_SetThreadPriority_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t platform_thread_id;
  int32_t thread_priority;

 private:
  RenderMessageFilter_SetThreadPriority_Params_Data();
  ~RenderMessageFilter_SetThreadPriority_Params_Data() = delete;
};
static_assert(sizeof(RenderMessageFilter_SetThreadPriority_Params_Data) == 16,
              "Bad sizeof(RenderMessageFilter_SetThreadPriority_Params_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace content

#endif  // CONTENT_COMMON_RENDER_MESSAGE_FILTER_MOJOM_SHARED_INTERNAL_H_