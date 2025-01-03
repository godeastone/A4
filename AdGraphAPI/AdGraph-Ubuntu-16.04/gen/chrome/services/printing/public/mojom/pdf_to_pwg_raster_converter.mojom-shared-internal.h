// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CHROME_SERVICES_PRINTING_PUBLIC_MOJOM_PDF_TO_PWG_RASTER_CONVERTER_MOJOM_SHARED_INTERNAL_H_
#define CHROME_SERVICES_PRINTING_PUBLIC_MOJOM_PDF_TO_PWG_RASTER_CONVERTER_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "chrome/services/printing/public/mojom/pdf_render_settings.mojom-shared-internal.h"
#include "mojo/public/mojom/base/shared_memory.mojom-shared-internal.h"
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
class PwgRasterSettings_Data;

struct PwgRasterSettings_TransformType_Data {
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
class  PwgRasterSettings_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PwgRasterSettings_Data));
      new (data()) PwgRasterSettings_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PwgRasterSettings_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PwgRasterSettings_Data>(index_);
    }
    PwgRasterSettings_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t odd_page_transform;
  uint8_t rotate_all_pages : 1;
  uint8_t reverse_page_order : 1;
  uint8_t use_color : 1;
  uint8_t padfinal_[3];

 private:
  PwgRasterSettings_Data();
  ~PwgRasterSettings_Data() = delete;
};
static_assert(sizeof(PwgRasterSettings_Data) == 16,
              "Bad sizeof(PwgRasterSettings_Data)");
// Used by PwgRasterSettings::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct PwgRasterSettings_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  PwgRasterSettings_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~PwgRasterSettings_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    PwgRasterSettings_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    PwgRasterSettings_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  PdfToPwgRasterConverter_Convert_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PdfToPwgRasterConverter_Convert_Params_Data));
      new (data()) PdfToPwgRasterConverter_Convert_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PdfToPwgRasterConverter_Convert_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PdfToPwgRasterConverter_Convert_Params_Data>(index_);
    }
    PdfToPwgRasterConverter_Convert_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::ReadOnlySharedMemoryRegion_Data> pdf_region;
  mojo::internal::Pointer<::printing::mojom::internal::PdfRenderSettings_Data> pdf_settings;
  mojo::internal::Pointer<internal::PwgRasterSettings_Data> pwg_raster_settings;

 private:
  PdfToPwgRasterConverter_Convert_Params_Data();
  ~PdfToPwgRasterConverter_Convert_Params_Data() = delete;
};
static_assert(sizeof(PdfToPwgRasterConverter_Convert_Params_Data) == 32,
              "Bad sizeof(PdfToPwgRasterConverter_Convert_Params_Data)");
class  PdfToPwgRasterConverter_Convert_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PdfToPwgRasterConverter_Convert_ResponseParams_Data));
      new (data()) PdfToPwgRasterConverter_Convert_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PdfToPwgRasterConverter_Convert_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PdfToPwgRasterConverter_Convert_ResponseParams_Data>(index_);
    }
    PdfToPwgRasterConverter_Convert_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::ReadOnlySharedMemoryRegion_Data> pwg_raster_region;
  uint32_t page_count;
  uint8_t padfinal_[4];

 private:
  PdfToPwgRasterConverter_Convert_ResponseParams_Data();
  ~PdfToPwgRasterConverter_Convert_ResponseParams_Data() = delete;
};
static_assert(sizeof(PdfToPwgRasterConverter_Convert_ResponseParams_Data) == 24,
              "Bad sizeof(PdfToPwgRasterConverter_Convert_ResponseParams_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace printing

#endif  // CHROME_SERVICES_PRINTING_PUBLIC_MOJOM_PDF_TO_PWG_RASTER_CONVERTER_MOJOM_SHARED_INTERNAL_H_