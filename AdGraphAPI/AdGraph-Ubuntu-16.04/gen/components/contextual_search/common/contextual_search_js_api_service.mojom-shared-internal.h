// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_CONTEXTUAL_SEARCH_COMMON_CONTEXTUAL_SEARCH_JS_API_SERVICE_MOJOM_SHARED_INTERNAL_H_
#define COMPONENTS_CONTEXTUAL_SEARCH_COMMON_CONTEXTUAL_SEARCH_JS_API_SERVICE_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "url/mojom/url.mojom-shared-internal.h"
#include "mojo/public/cpp/bindings/lib/native_enum_data.h"
#include "mojo/public/interfaces/bindings/native_struct.mojom-shared-internal.h"

namespace mojo {
namespace internal {
class ValidationContext;
}
}
namespace contextual_search {
namespace mojom {
namespace internal {

#pragma pack(push, 1)
class  ContextualSearchJsApiService_ShouldEnableJsApi_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ContextualSearchJsApiService_ShouldEnableJsApi_Params_Data));
      new (data()) ContextualSearchJsApiService_ShouldEnableJsApi_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ContextualSearchJsApiService_ShouldEnableJsApi_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ContextualSearchJsApiService_ShouldEnableJsApi_Params_Data>(index_);
    }
    ContextualSearchJsApiService_ShouldEnableJsApi_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> url;

 private:
  ContextualSearchJsApiService_ShouldEnableJsApi_Params_Data();
  ~ContextualSearchJsApiService_ShouldEnableJsApi_Params_Data() = delete;
};
static_assert(sizeof(ContextualSearchJsApiService_ShouldEnableJsApi_Params_Data) == 16,
              "Bad sizeof(ContextualSearchJsApiService_ShouldEnableJsApi_Params_Data)");
class  ContextualSearchJsApiService_ShouldEnableJsApi_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ContextualSearchJsApiService_ShouldEnableJsApi_ResponseParams_Data));
      new (data()) ContextualSearchJsApiService_ShouldEnableJsApi_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ContextualSearchJsApiService_ShouldEnableJsApi_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ContextualSearchJsApiService_ShouldEnableJsApi_ResponseParams_Data>(index_);
    }
    ContextualSearchJsApiService_ShouldEnableJsApi_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t should_enable : 1;
  uint8_t padfinal_[7];

 private:
  ContextualSearchJsApiService_ShouldEnableJsApi_ResponseParams_Data();
  ~ContextualSearchJsApiService_ShouldEnableJsApi_ResponseParams_Data() = delete;
};
static_assert(sizeof(ContextualSearchJsApiService_ShouldEnableJsApi_ResponseParams_Data) == 16,
              "Bad sizeof(ContextualSearchJsApiService_ShouldEnableJsApi_ResponseParams_Data)");
class  ContextualSearchJsApiService_HandleSetCaption_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ContextualSearchJsApiService_HandleSetCaption_Params_Data));
      new (data()) ContextualSearchJsApiService_HandleSetCaption_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ContextualSearchJsApiService_HandleSetCaption_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ContextualSearchJsApiService_HandleSetCaption_Params_Data>(index_);
    }
    ContextualSearchJsApiService_HandleSetCaption_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> message;
  uint8_t does_answer : 1;
  uint8_t padfinal_[7];

 private:
  ContextualSearchJsApiService_HandleSetCaption_Params_Data();
  ~ContextualSearchJsApiService_HandleSetCaption_Params_Data() = delete;
};
static_assert(sizeof(ContextualSearchJsApiService_HandleSetCaption_Params_Data) == 24,
              "Bad sizeof(ContextualSearchJsApiService_HandleSetCaption_Params_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace contextual_search

#endif  // COMPONENTS_CONTEXTUAL_SEARCH_COMMON_CONTEXTUAL_SEARCH_JS_API_SERVICE_MOJOM_SHARED_INTERNAL_H_