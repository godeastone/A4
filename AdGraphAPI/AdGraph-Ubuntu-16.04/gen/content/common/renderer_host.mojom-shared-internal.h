// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_RENDERER_HOST_MOJOM_SHARED_INTERNAL_H_
#define CONTENT_COMMON_RENDERER_HOST_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "services/network/public/mojom/url_loader_factory.mojom-shared-internal.h"
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
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) RendererHost_GetBlobURLLoaderFactory_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(RendererHost_GetBlobURLLoaderFactory_Params_Data));
      new (data()) RendererHost_GetBlobURLLoaderFactory_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    RendererHost_GetBlobURLLoaderFactory_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<RendererHost_GetBlobURLLoaderFactory_Params_Data>(index_);
    }
    RendererHost_GetBlobURLLoaderFactory_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data loader;
  uint8_t padfinal_[4];

 private:
  RendererHost_GetBlobURLLoaderFactory_Params_Data();
  ~RendererHost_GetBlobURLLoaderFactory_Params_Data() = delete;
};
static_assert(sizeof(RendererHost_GetBlobURLLoaderFactory_Params_Data) == 16,
              "Bad sizeof(RendererHost_GetBlobURLLoaderFactory_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) RendererHost_GetBrowserHistogram_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(RendererHost_GetBrowserHistogram_Params_Data));
      new (data()) RendererHost_GetBrowserHistogram_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    RendererHost_GetBrowserHistogram_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<RendererHost_GetBrowserHistogram_Params_Data>(index_);
    }
    RendererHost_GetBrowserHistogram_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> name;

 private:
  RendererHost_GetBrowserHistogram_Params_Data();
  ~RendererHost_GetBrowserHistogram_Params_Data() = delete;
};
static_assert(sizeof(RendererHost_GetBrowserHistogram_Params_Data) == 16,
              "Bad sizeof(RendererHost_GetBrowserHistogram_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) RendererHost_GetBrowserHistogram_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(RendererHost_GetBrowserHistogram_ResponseParams_Data));
      new (data()) RendererHost_GetBrowserHistogram_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    RendererHost_GetBrowserHistogram_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<RendererHost_GetBrowserHistogram_ResponseParams_Data>(index_);
    }
    RendererHost_GetBrowserHistogram_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> histogram_json;

 private:
  RendererHost_GetBrowserHistogram_ResponseParams_Data();
  ~RendererHost_GetBrowserHistogram_ResponseParams_Data() = delete;
};
static_assert(sizeof(RendererHost_GetBrowserHistogram_ResponseParams_Data) == 16,
              "Bad sizeof(RendererHost_GetBrowserHistogram_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) RendererHost_SuddenTerminationChanged_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(RendererHost_SuddenTerminationChanged_Params_Data));
      new (data()) RendererHost_SuddenTerminationChanged_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    RendererHost_SuddenTerminationChanged_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<RendererHost_SuddenTerminationChanged_Params_Data>(index_);
    }
    RendererHost_SuddenTerminationChanged_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t enabled : 1;
  uint8_t padfinal_[7];

 private:
  RendererHost_SuddenTerminationChanged_Params_Data();
  ~RendererHost_SuddenTerminationChanged_Params_Data() = delete;
};
static_assert(sizeof(RendererHost_SuddenTerminationChanged_Params_Data) == 16,
              "Bad sizeof(RendererHost_SuddenTerminationChanged_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) RendererHost_ShutdownRequest_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(RendererHost_ShutdownRequest_Params_Data));
      new (data()) RendererHost_ShutdownRequest_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    RendererHost_ShutdownRequest_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<RendererHost_ShutdownRequest_Params_Data>(index_);
    }
    RendererHost_ShutdownRequest_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  RendererHost_ShutdownRequest_Params_Data();
  ~RendererHost_ShutdownRequest_Params_Data() = delete;
};
static_assert(sizeof(RendererHost_ShutdownRequest_Params_Data) == 8,
              "Bad sizeof(RendererHost_ShutdownRequest_Params_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace content

#endif  // CONTENT_COMMON_RENDERER_HOST_MOJOM_SHARED_INTERNAL_H_