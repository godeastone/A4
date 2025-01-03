// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_PDF_COMMON_PDF_MOJOM_SHARED_INTERNAL_H_
#define COMPONENTS_PDF_COMMON_PDF_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "third_party/blink/public/platform/referrer.mojom-shared-internal.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-shared-internal.h"
#include "url/mojom/url.mojom-shared-internal.h"
#include "mojo/public/cpp/bindings/lib/native_enum_data.h"
#include "mojo/public/interfaces/bindings/native_struct.mojom-shared-internal.h"

namespace mojo {
namespace internal {
class ValidationContext;
}
}
namespace pdf {
namespace mojom {
namespace internal {

#pragma pack(push, 1)
class  PdfListener_SetCaretPosition_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PdfListener_SetCaretPosition_Params_Data));
      new (data()) PdfListener_SetCaretPosition_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PdfListener_SetCaretPosition_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PdfListener_SetCaretPosition_Params_Data>(index_);
    }
    PdfListener_SetCaretPosition_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::gfx::mojom::internal::PointF_Data> position;

 private:
  PdfListener_SetCaretPosition_Params_Data();
  ~PdfListener_SetCaretPosition_Params_Data() = delete;
};
static_assert(sizeof(PdfListener_SetCaretPosition_Params_Data) == 16,
              "Bad sizeof(PdfListener_SetCaretPosition_Params_Data)");
class  PdfListener_MoveRangeSelectionExtent_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PdfListener_MoveRangeSelectionExtent_Params_Data));
      new (data()) PdfListener_MoveRangeSelectionExtent_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PdfListener_MoveRangeSelectionExtent_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PdfListener_MoveRangeSelectionExtent_Params_Data>(index_);
    }
    PdfListener_MoveRangeSelectionExtent_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::gfx::mojom::internal::PointF_Data> extent;

 private:
  PdfListener_MoveRangeSelectionExtent_Params_Data();
  ~PdfListener_MoveRangeSelectionExtent_Params_Data() = delete;
};
static_assert(sizeof(PdfListener_MoveRangeSelectionExtent_Params_Data) == 16,
              "Bad sizeof(PdfListener_MoveRangeSelectionExtent_Params_Data)");
class  PdfListener_SetSelectionBounds_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PdfListener_SetSelectionBounds_Params_Data));
      new (data()) PdfListener_SetSelectionBounds_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PdfListener_SetSelectionBounds_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PdfListener_SetSelectionBounds_Params_Data>(index_);
    }
    PdfListener_SetSelectionBounds_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::gfx::mojom::internal::PointF_Data> base;
  mojo::internal::Pointer<::gfx::mojom::internal::PointF_Data> extent;

 private:
  PdfListener_SetSelectionBounds_Params_Data();
  ~PdfListener_SetSelectionBounds_Params_Data() = delete;
};
static_assert(sizeof(PdfListener_SetSelectionBounds_Params_Data) == 24,
              "Bad sizeof(PdfListener_SetSelectionBounds_Params_Data)");
class  PdfService_SetListener_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PdfService_SetListener_Params_Data));
      new (data()) PdfService_SetListener_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PdfService_SetListener_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PdfService_SetListener_Params_Data>(index_);
    }
    PdfService_SetListener_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Interface_Data client;

 private:
  PdfService_SetListener_Params_Data();
  ~PdfService_SetListener_Params_Data() = delete;
};
static_assert(sizeof(PdfService_SetListener_Params_Data) == 16,
              "Bad sizeof(PdfService_SetListener_Params_Data)");
class  PdfService_UpdateContentRestrictions_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PdfService_UpdateContentRestrictions_Params_Data));
      new (data()) PdfService_UpdateContentRestrictions_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PdfService_UpdateContentRestrictions_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PdfService_UpdateContentRestrictions_Params_Data>(index_);
    }
    PdfService_UpdateContentRestrictions_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t restrictions;
  uint8_t padfinal_[4];

 private:
  PdfService_UpdateContentRestrictions_Params_Data();
  ~PdfService_UpdateContentRestrictions_Params_Data() = delete;
};
static_assert(sizeof(PdfService_UpdateContentRestrictions_Params_Data) == 16,
              "Bad sizeof(PdfService_UpdateContentRestrictions_Params_Data)");
class  PdfService_HasUnsupportedFeature_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PdfService_HasUnsupportedFeature_Params_Data));
      new (data()) PdfService_HasUnsupportedFeature_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PdfService_HasUnsupportedFeature_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PdfService_HasUnsupportedFeature_Params_Data>(index_);
    }
    PdfService_HasUnsupportedFeature_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  PdfService_HasUnsupportedFeature_Params_Data();
  ~PdfService_HasUnsupportedFeature_Params_Data() = delete;
};
static_assert(sizeof(PdfService_HasUnsupportedFeature_Params_Data) == 8,
              "Bad sizeof(PdfService_HasUnsupportedFeature_Params_Data)");
class  PdfService_SaveUrlAs_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PdfService_SaveUrlAs_Params_Data));
      new (data()) PdfService_SaveUrlAs_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PdfService_SaveUrlAs_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PdfService_SaveUrlAs_Params_Data>(index_);
    }
    PdfService_SaveUrlAs_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> url;
  mojo::internal::Pointer<::blink::mojom::internal::Referrer_Data> referrer;

 private:
  PdfService_SaveUrlAs_Params_Data();
  ~PdfService_SaveUrlAs_Params_Data() = delete;
};
static_assert(sizeof(PdfService_SaveUrlAs_Params_Data) == 24,
              "Bad sizeof(PdfService_SaveUrlAs_Params_Data)");
class  PdfService_SelectionChanged_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PdfService_SelectionChanged_Params_Data));
      new (data()) PdfService_SelectionChanged_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PdfService_SelectionChanged_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PdfService_SelectionChanged_Params_Data>(index_);
    }
    PdfService_SelectionChanged_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::gfx::mojom::internal::PointF_Data> left;
  int32_t left_height;
  int32_t right_height;
  mojo::internal::Pointer<::gfx::mojom::internal::PointF_Data> right;

 private:
  PdfService_SelectionChanged_Params_Data();
  ~PdfService_SelectionChanged_Params_Data() = delete;
};
static_assert(sizeof(PdfService_SelectionChanged_Params_Data) == 32,
              "Bad sizeof(PdfService_SelectionChanged_Params_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace pdf

#endif  // COMPONENTS_PDF_COMMON_PDF_MOJOM_SHARED_INTERNAL_H_