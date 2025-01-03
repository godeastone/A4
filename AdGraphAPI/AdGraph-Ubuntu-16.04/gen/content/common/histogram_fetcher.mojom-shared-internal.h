// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_HISTOGRAM_FETCHER_MOJOM_SHARED_INTERNAL_H_
#define CONTENT_COMMON_HISTOGRAM_FETCHER_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
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
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) ChildHistogramFetcherFactory_CreateFetcher_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ChildHistogramFetcherFactory_CreateFetcher_Params_Data));
      new (data()) ChildHistogramFetcherFactory_CreateFetcher_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ChildHistogramFetcherFactory_CreateFetcher_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ChildHistogramFetcherFactory_CreateFetcher_Params_Data>(index_);
    }
    ChildHistogramFetcherFactory_CreateFetcher_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data shm_handle;
  mojo::internal::Handle_Data child_histogram_fetcher;

 private:
  ChildHistogramFetcherFactory_CreateFetcher_Params_Data();
  ~ChildHistogramFetcherFactory_CreateFetcher_Params_Data() = delete;
};
static_assert(sizeof(ChildHistogramFetcherFactory_CreateFetcher_Params_Data) == 16,
              "Bad sizeof(ChildHistogramFetcherFactory_CreateFetcher_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) ChildHistogramFetcher_GetChildNonPersistentHistogramData_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ChildHistogramFetcher_GetChildNonPersistentHistogramData_Params_Data));
      new (data()) ChildHistogramFetcher_GetChildNonPersistentHistogramData_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ChildHistogramFetcher_GetChildNonPersistentHistogramData_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ChildHistogramFetcher_GetChildNonPersistentHistogramData_Params_Data>(index_);
    }
    ChildHistogramFetcher_GetChildNonPersistentHistogramData_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  ChildHistogramFetcher_GetChildNonPersistentHistogramData_Params_Data();
  ~ChildHistogramFetcher_GetChildNonPersistentHistogramData_Params_Data() = delete;
};
static_assert(sizeof(ChildHistogramFetcher_GetChildNonPersistentHistogramData_Params_Data) == 8,
              "Bad sizeof(ChildHistogramFetcher_GetChildNonPersistentHistogramData_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) ChildHistogramFetcher_GetChildNonPersistentHistogramData_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ChildHistogramFetcher_GetChildNonPersistentHistogramData_ResponseParams_Data));
      new (data()) ChildHistogramFetcher_GetChildNonPersistentHistogramData_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ChildHistogramFetcher_GetChildNonPersistentHistogramData_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ChildHistogramFetcher_GetChildNonPersistentHistogramData_ResponseParams_Data>(index_);
    }
    ChildHistogramFetcher_GetChildNonPersistentHistogramData_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<mojo::internal::String_Data>>> deltas;

 private:
  ChildHistogramFetcher_GetChildNonPersistentHistogramData_ResponseParams_Data();
  ~ChildHistogramFetcher_GetChildNonPersistentHistogramData_ResponseParams_Data() = delete;
};
static_assert(sizeof(ChildHistogramFetcher_GetChildNonPersistentHistogramData_ResponseParams_Data) == 16,
              "Bad sizeof(ChildHistogramFetcher_GetChildNonPersistentHistogramData_ResponseParams_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace content

#endif  // CONTENT_COMMON_HISTOGRAM_FETCHER_MOJOM_SHARED_INTERNAL_H_