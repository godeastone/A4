// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_SERVICES_PDF_COMPOSITOR_PUBLIC_INTERFACES_PDF_COMPOSITOR_MOJOM_SHARED_INTERNAL_H_
#define COMPONENTS_SERVICES_PDF_COMPOSITOR_PUBLIC_INTERFACES_PDF_COMPOSITOR_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "mojo/public/mojom/base/shared_memory.mojom-shared-internal.h"
#include "url/mojom/url.mojom-shared-internal.h"
#include "mojo/public/cpp/bindings/lib/native_enum_data.h"
#include "mojo/public/interfaces/bindings/native_struct.mojom-shared-internal.h"

namespace mojo {
namespace internal {
class ValidationContext;
}
}
namespace printing {
namespace mojom {
namespace internal {

struct PdfCompositor_Status_Data {
 public:
  static bool constexpr kIsExtensible = false;

  static bool IsKnownValue(int32_t value) {
    switch (value) {
      case 0:
      case 1:
      case 2:
      case 3:
        return true;
    }
    return false;
  }

  static bool Validate(int32_t value,
                       mojo::internal::ValidationContext* validation_context) {
    if (kIsExtensible || IsKnownValue(value))
      return true;

    ReportValidationError(validation_context,
                          mojo::internal::VALIDATION_ERROR_UNKNOWN_ENUM_VALUE);
    return false;
  }
};

#pragma pack(push, 1)
class  PdfCompositor_NotifyUnavailableSubframe_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PdfCompositor_NotifyUnavailableSubframe_Params_Data));
      new (data()) PdfCompositor_NotifyUnavailableSubframe_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PdfCompositor_NotifyUnavailableSubframe_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PdfCompositor_NotifyUnavailableSubframe_Params_Data>(index_);
    }
    PdfCompositor_NotifyUnavailableSubframe_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint64_t frame_guid;

 private:
  PdfCompositor_NotifyUnavailableSubframe_Params_Data();
  ~PdfCompositor_NotifyUnavailableSubframe_Params_Data() = delete;
};
static_assert(sizeof(PdfCompositor_NotifyUnavailableSubframe_Params_Data) == 16,
              "Bad sizeof(PdfCompositor_NotifyUnavailableSubframe_Params_Data)");
class  PdfCompositor_AddSubframeContent_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PdfCompositor_AddSubframeContent_Params_Data));
      new (data()) PdfCompositor_AddSubframeContent_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PdfCompositor_AddSubframeContent_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PdfCompositor_AddSubframeContent_Params_Data>(index_);
    }
    PdfCompositor_AddSubframeContent_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint64_t frame_guid;
  mojo::internal::Handle_Data serialized_content;
  uint8_t pad1_[4];
  mojo::internal::Pointer<mojo::internal::Map_Data<uint32_t, uint64_t>> subframe_content_info;

 private:
  PdfCompositor_AddSubframeContent_Params_Data();
  ~PdfCompositor_AddSubframeContent_Params_Data() = delete;
};
static_assert(sizeof(PdfCompositor_AddSubframeContent_Params_Data) == 32,
              "Bad sizeof(PdfCompositor_AddSubframeContent_Params_Data)");
class  PdfCompositor_CompositePageToPdf_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PdfCompositor_CompositePageToPdf_Params_Data));
      new (data()) PdfCompositor_CompositePageToPdf_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PdfCompositor_CompositePageToPdf_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PdfCompositor_CompositePageToPdf_Params_Data>(index_);
    }
    PdfCompositor_CompositePageToPdf_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint64_t frame_guid;
  uint32_t page_num;
  mojo::internal::Handle_Data sk_handle;
  mojo::internal::Pointer<mojo::internal::Map_Data<uint32_t, uint64_t>> subframe_content_info;

 private:
  PdfCompositor_CompositePageToPdf_Params_Data();
  ~PdfCompositor_CompositePageToPdf_Params_Data() = delete;
};
static_assert(sizeof(PdfCompositor_CompositePageToPdf_Params_Data) == 32,
              "Bad sizeof(PdfCompositor_CompositePageToPdf_Params_Data)");
class  PdfCompositor_CompositePageToPdf_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PdfCompositor_CompositePageToPdf_ResponseParams_Data));
      new (data()) PdfCompositor_CompositePageToPdf_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PdfCompositor_CompositePageToPdf_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PdfCompositor_CompositePageToPdf_ResponseParams_Data>(index_);
    }
    PdfCompositor_CompositePageToPdf_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t status;
  uint8_t pad0_[4];
  mojo::internal::Pointer<::mojo_base::mojom::internal::ReadOnlySharedMemoryRegion_Data> pdf_region;

 private:
  PdfCompositor_CompositePageToPdf_ResponseParams_Data();
  ~PdfCompositor_CompositePageToPdf_ResponseParams_Data() = delete;
};
static_assert(sizeof(PdfCompositor_CompositePageToPdf_ResponseParams_Data) == 24,
              "Bad sizeof(PdfCompositor_CompositePageToPdf_ResponseParams_Data)");
class  PdfCompositor_CompositeDocumentToPdf_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PdfCompositor_CompositeDocumentToPdf_Params_Data));
      new (data()) PdfCompositor_CompositeDocumentToPdf_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PdfCompositor_CompositeDocumentToPdf_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PdfCompositor_CompositeDocumentToPdf_Params_Data>(index_);
    }
    PdfCompositor_CompositeDocumentToPdf_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint64_t frame_guid;
  mojo::internal::Handle_Data sk_handle;
  uint8_t pad1_[4];
  mojo::internal::Pointer<mojo::internal::Map_Data<uint32_t, uint64_t>> subframe_content_info;

 private:
  PdfCompositor_CompositeDocumentToPdf_Params_Data();
  ~PdfCompositor_CompositeDocumentToPdf_Params_Data() = delete;
};
static_assert(sizeof(PdfCompositor_CompositeDocumentToPdf_Params_Data) == 32,
              "Bad sizeof(PdfCompositor_CompositeDocumentToPdf_Params_Data)");
class  PdfCompositor_CompositeDocumentToPdf_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PdfCompositor_CompositeDocumentToPdf_ResponseParams_Data));
      new (data()) PdfCompositor_CompositeDocumentToPdf_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PdfCompositor_CompositeDocumentToPdf_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PdfCompositor_CompositeDocumentToPdf_ResponseParams_Data>(index_);
    }
    PdfCompositor_CompositeDocumentToPdf_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t status;
  uint8_t pad0_[4];
  mojo::internal::Pointer<::mojo_base::mojom::internal::ReadOnlySharedMemoryRegion_Data> pdf_region;

 private:
  PdfCompositor_CompositeDocumentToPdf_ResponseParams_Data();
  ~PdfCompositor_CompositeDocumentToPdf_ResponseParams_Data() = delete;
};
static_assert(sizeof(PdfCompositor_CompositeDocumentToPdf_ResponseParams_Data) == 24,
              "Bad sizeof(PdfCompositor_CompositeDocumentToPdf_ResponseParams_Data)");
class  PdfCompositor_SetWebContentsURL_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PdfCompositor_SetWebContentsURL_Params_Data));
      new (data()) PdfCompositor_SetWebContentsURL_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PdfCompositor_SetWebContentsURL_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PdfCompositor_SetWebContentsURL_Params_Data>(index_);
    }
    PdfCompositor_SetWebContentsURL_Params_Data* operator->() { return data(); }

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
  PdfCompositor_SetWebContentsURL_Params_Data();
  ~PdfCompositor_SetWebContentsURL_Params_Data() = delete;
};
static_assert(sizeof(PdfCompositor_SetWebContentsURL_Params_Data) == 16,
              "Bad sizeof(PdfCompositor_SetWebContentsURL_Params_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace printing

#endif  // COMPONENTS_SERVICES_PDF_COMPOSITOR_PUBLIC_INTERFACES_PDF_COMPOSITOR_MOJOM_SHARED_INTERNAL_H_