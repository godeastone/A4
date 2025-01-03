// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CHROME_COMMON_OPEN_SEARCH_DESCRIPTION_DOCUMENT_HANDLER_MOJOM_SHARED_INTERNAL_H_
#define CHROME_COMMON_OPEN_SEARCH_DESCRIPTION_DOCUMENT_HANDLER_MOJOM_SHARED_INTERNAL_H_

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
namespace chrome {
namespace mojom {
namespace internal {

#pragma pack(push, 1)
class  OpenSearchDescriptionDocumentHandler_PageHasOpenSearchDescriptionDocument_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(OpenSearchDescriptionDocumentHandler_PageHasOpenSearchDescriptionDocument_Params_Data));
      new (data()) OpenSearchDescriptionDocumentHandler_PageHasOpenSearchDescriptionDocument_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    OpenSearchDescriptionDocumentHandler_PageHasOpenSearchDescriptionDocument_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<OpenSearchDescriptionDocumentHandler_PageHasOpenSearchDescriptionDocument_Params_Data>(index_);
    }
    OpenSearchDescriptionDocumentHandler_PageHasOpenSearchDescriptionDocument_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> page_url;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> osdd_url;

 private:
  OpenSearchDescriptionDocumentHandler_PageHasOpenSearchDescriptionDocument_Params_Data();
  ~OpenSearchDescriptionDocumentHandler_PageHasOpenSearchDescriptionDocument_Params_Data() = delete;
};
static_assert(sizeof(OpenSearchDescriptionDocumentHandler_PageHasOpenSearchDescriptionDocument_Params_Data) == 24,
              "Bad sizeof(OpenSearchDescriptionDocumentHandler_PageHasOpenSearchDescriptionDocument_Params_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace chrome

#endif  // CHROME_COMMON_OPEN_SEARCH_DESCRIPTION_DOCUMENT_HANDLER_MOJOM_SHARED_INTERNAL_H_