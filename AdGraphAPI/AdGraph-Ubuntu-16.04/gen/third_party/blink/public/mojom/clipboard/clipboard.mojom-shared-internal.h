// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_CLIPBOARD_CLIPBOARD_MOJOM_SHARED_INTERNAL_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_CLIPBOARD_CLIPBOARD_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "mojo/public/mojom/base/string16.mojom-shared-internal.h"
#include "third_party/blink/public/mojom/blob/serialized_blob.mojom-shared-internal.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-shared-internal.h"
#include "url/mojom/url.mojom-shared-internal.h"
#include "mojo/public/cpp/bindings/lib/native_enum_data.h"
#include "mojo/public/interfaces/bindings/native_struct.mojom-shared-internal.h"
#include "base/component_export.h"

namespace mojo {
namespace internal {
class ValidationContext;
}
}
namespace blink {
namespace mojom {
namespace internal {

struct ClipboardFormat_Data {
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

struct ClipboardBuffer_Data {
 public:
  static bool constexpr kIsExtensible = false;

  static bool IsKnownValue(int32_t value) {
    switch (value) {
      case 0:
      case 1:
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
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ClipboardHost_GetSequenceNumber_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ClipboardHost_GetSequenceNumber_Params_Data));
      new (data()) ClipboardHost_GetSequenceNumber_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ClipboardHost_GetSequenceNumber_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ClipboardHost_GetSequenceNumber_Params_Data>(index_);
    }
    ClipboardHost_GetSequenceNumber_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t buffer;
  uint8_t padfinal_[4];

 private:
  ClipboardHost_GetSequenceNumber_Params_Data();
  ~ClipboardHost_GetSequenceNumber_Params_Data() = delete;
};
static_assert(sizeof(ClipboardHost_GetSequenceNumber_Params_Data) == 16,
              "Bad sizeof(ClipboardHost_GetSequenceNumber_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ClipboardHost_GetSequenceNumber_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ClipboardHost_GetSequenceNumber_ResponseParams_Data));
      new (data()) ClipboardHost_GetSequenceNumber_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ClipboardHost_GetSequenceNumber_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ClipboardHost_GetSequenceNumber_ResponseParams_Data>(index_);
    }
    ClipboardHost_GetSequenceNumber_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint64_t result;

 private:
  ClipboardHost_GetSequenceNumber_ResponseParams_Data();
  ~ClipboardHost_GetSequenceNumber_ResponseParams_Data() = delete;
};
static_assert(sizeof(ClipboardHost_GetSequenceNumber_ResponseParams_Data) == 16,
              "Bad sizeof(ClipboardHost_GetSequenceNumber_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ClipboardHost_IsFormatAvailable_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ClipboardHost_IsFormatAvailable_Params_Data));
      new (data()) ClipboardHost_IsFormatAvailable_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ClipboardHost_IsFormatAvailable_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ClipboardHost_IsFormatAvailable_Params_Data>(index_);
    }
    ClipboardHost_IsFormatAvailable_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t format;
  int32_t buffer;

 private:
  ClipboardHost_IsFormatAvailable_Params_Data();
  ~ClipboardHost_IsFormatAvailable_Params_Data() = delete;
};
static_assert(sizeof(ClipboardHost_IsFormatAvailable_Params_Data) == 16,
              "Bad sizeof(ClipboardHost_IsFormatAvailable_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ClipboardHost_IsFormatAvailable_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ClipboardHost_IsFormatAvailable_ResponseParams_Data));
      new (data()) ClipboardHost_IsFormatAvailable_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ClipboardHost_IsFormatAvailable_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ClipboardHost_IsFormatAvailable_ResponseParams_Data>(index_);
    }
    ClipboardHost_IsFormatAvailable_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t result : 1;
  uint8_t padfinal_[7];

 private:
  ClipboardHost_IsFormatAvailable_ResponseParams_Data();
  ~ClipboardHost_IsFormatAvailable_ResponseParams_Data() = delete;
};
static_assert(sizeof(ClipboardHost_IsFormatAvailable_ResponseParams_Data) == 16,
              "Bad sizeof(ClipboardHost_IsFormatAvailable_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ClipboardHost_ReadAvailableTypes_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ClipboardHost_ReadAvailableTypes_Params_Data));
      new (data()) ClipboardHost_ReadAvailableTypes_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ClipboardHost_ReadAvailableTypes_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ClipboardHost_ReadAvailableTypes_Params_Data>(index_);
    }
    ClipboardHost_ReadAvailableTypes_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t buffer;
  uint8_t padfinal_[4];

 private:
  ClipboardHost_ReadAvailableTypes_Params_Data();
  ~ClipboardHost_ReadAvailableTypes_Params_Data() = delete;
};
static_assert(sizeof(ClipboardHost_ReadAvailableTypes_Params_Data) == 16,
              "Bad sizeof(ClipboardHost_ReadAvailableTypes_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ClipboardHost_ReadAvailableTypes_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ClipboardHost_ReadAvailableTypes_ResponseParams_Data));
      new (data()) ClipboardHost_ReadAvailableTypes_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ClipboardHost_ReadAvailableTypes_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ClipboardHost_ReadAvailableTypes_ResponseParams_Data>(index_);
    }
    ClipboardHost_ReadAvailableTypes_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data>>> types;
  uint8_t result : 1;
  uint8_t padfinal_[7];

 private:
  ClipboardHost_ReadAvailableTypes_ResponseParams_Data();
  ~ClipboardHost_ReadAvailableTypes_ResponseParams_Data() = delete;
};
static_assert(sizeof(ClipboardHost_ReadAvailableTypes_ResponseParams_Data) == 24,
              "Bad sizeof(ClipboardHost_ReadAvailableTypes_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ClipboardHost_ReadText_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ClipboardHost_ReadText_Params_Data));
      new (data()) ClipboardHost_ReadText_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ClipboardHost_ReadText_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ClipboardHost_ReadText_Params_Data>(index_);
    }
    ClipboardHost_ReadText_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t buffer;
  uint8_t padfinal_[4];

 private:
  ClipboardHost_ReadText_Params_Data();
  ~ClipboardHost_ReadText_Params_Data() = delete;
};
static_assert(sizeof(ClipboardHost_ReadText_Params_Data) == 16,
              "Bad sizeof(ClipboardHost_ReadText_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ClipboardHost_ReadText_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ClipboardHost_ReadText_ResponseParams_Data));
      new (data()) ClipboardHost_ReadText_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ClipboardHost_ReadText_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ClipboardHost_ReadText_ResponseParams_Data>(index_);
    }
    ClipboardHost_ReadText_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::BigString16_Data> result;

 private:
  ClipboardHost_ReadText_ResponseParams_Data();
  ~ClipboardHost_ReadText_ResponseParams_Data() = delete;
};
static_assert(sizeof(ClipboardHost_ReadText_ResponseParams_Data) == 16,
              "Bad sizeof(ClipboardHost_ReadText_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ClipboardHost_ReadHtml_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ClipboardHost_ReadHtml_Params_Data));
      new (data()) ClipboardHost_ReadHtml_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ClipboardHost_ReadHtml_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ClipboardHost_ReadHtml_Params_Data>(index_);
    }
    ClipboardHost_ReadHtml_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t buffer;
  uint8_t padfinal_[4];

 private:
  ClipboardHost_ReadHtml_Params_Data();
  ~ClipboardHost_ReadHtml_Params_Data() = delete;
};
static_assert(sizeof(ClipboardHost_ReadHtml_Params_Data) == 16,
              "Bad sizeof(ClipboardHost_ReadHtml_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ClipboardHost_ReadHtml_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ClipboardHost_ReadHtml_ResponseParams_Data));
      new (data()) ClipboardHost_ReadHtml_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ClipboardHost_ReadHtml_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ClipboardHost_ReadHtml_ResponseParams_Data>(index_);
    }
    ClipboardHost_ReadHtml_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::BigString16_Data> markup;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> url;
  uint32_t fragment_start;
  uint32_t fragment_end;

 private:
  ClipboardHost_ReadHtml_ResponseParams_Data();
  ~ClipboardHost_ReadHtml_ResponseParams_Data() = delete;
};
static_assert(sizeof(ClipboardHost_ReadHtml_ResponseParams_Data) == 32,
              "Bad sizeof(ClipboardHost_ReadHtml_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ClipboardHost_ReadRtf_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ClipboardHost_ReadRtf_Params_Data));
      new (data()) ClipboardHost_ReadRtf_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ClipboardHost_ReadRtf_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ClipboardHost_ReadRtf_Params_Data>(index_);
    }
    ClipboardHost_ReadRtf_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t buffer;
  uint8_t padfinal_[4];

 private:
  ClipboardHost_ReadRtf_Params_Data();
  ~ClipboardHost_ReadRtf_Params_Data() = delete;
};
static_assert(sizeof(ClipboardHost_ReadRtf_Params_Data) == 16,
              "Bad sizeof(ClipboardHost_ReadRtf_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ClipboardHost_ReadRtf_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ClipboardHost_ReadRtf_ResponseParams_Data));
      new (data()) ClipboardHost_ReadRtf_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ClipboardHost_ReadRtf_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ClipboardHost_ReadRtf_ResponseParams_Data>(index_);
    }
    ClipboardHost_ReadRtf_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> result;

 private:
  ClipboardHost_ReadRtf_ResponseParams_Data();
  ~ClipboardHost_ReadRtf_ResponseParams_Data() = delete;
};
static_assert(sizeof(ClipboardHost_ReadRtf_ResponseParams_Data) == 16,
              "Bad sizeof(ClipboardHost_ReadRtf_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ClipboardHost_ReadImage_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ClipboardHost_ReadImage_Params_Data));
      new (data()) ClipboardHost_ReadImage_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ClipboardHost_ReadImage_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ClipboardHost_ReadImage_Params_Data>(index_);
    }
    ClipboardHost_ReadImage_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t buffer;
  uint8_t padfinal_[4];

 private:
  ClipboardHost_ReadImage_Params_Data();
  ~ClipboardHost_ReadImage_Params_Data() = delete;
};
static_assert(sizeof(ClipboardHost_ReadImage_Params_Data) == 16,
              "Bad sizeof(ClipboardHost_ReadImage_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ClipboardHost_ReadImage_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ClipboardHost_ReadImage_ResponseParams_Data));
      new (data()) ClipboardHost_ReadImage_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ClipboardHost_ReadImage_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ClipboardHost_ReadImage_ResponseParams_Data>(index_);
    }
    ClipboardHost_ReadImage_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::blink::mojom::internal::SerializedBlob_Data> blob;

 private:
  ClipboardHost_ReadImage_ResponseParams_Data();
  ~ClipboardHost_ReadImage_ResponseParams_Data() = delete;
};
static_assert(sizeof(ClipboardHost_ReadImage_ResponseParams_Data) == 16,
              "Bad sizeof(ClipboardHost_ReadImage_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ClipboardHost_ReadCustomData_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ClipboardHost_ReadCustomData_Params_Data));
      new (data()) ClipboardHost_ReadCustomData_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ClipboardHost_ReadCustomData_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ClipboardHost_ReadCustomData_Params_Data>(index_);
    }
    ClipboardHost_ReadCustomData_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t buffer;
  uint8_t pad0_[4];
  mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data> type;

 private:
  ClipboardHost_ReadCustomData_Params_Data();
  ~ClipboardHost_ReadCustomData_Params_Data() = delete;
};
static_assert(sizeof(ClipboardHost_ReadCustomData_Params_Data) == 24,
              "Bad sizeof(ClipboardHost_ReadCustomData_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ClipboardHost_ReadCustomData_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ClipboardHost_ReadCustomData_ResponseParams_Data));
      new (data()) ClipboardHost_ReadCustomData_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ClipboardHost_ReadCustomData_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ClipboardHost_ReadCustomData_ResponseParams_Data>(index_);
    }
    ClipboardHost_ReadCustomData_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::BigString16_Data> result;

 private:
  ClipboardHost_ReadCustomData_ResponseParams_Data();
  ~ClipboardHost_ReadCustomData_ResponseParams_Data() = delete;
};
static_assert(sizeof(ClipboardHost_ReadCustomData_ResponseParams_Data) == 16,
              "Bad sizeof(ClipboardHost_ReadCustomData_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ClipboardHost_WriteText_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ClipboardHost_WriteText_Params_Data));
      new (data()) ClipboardHost_WriteText_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ClipboardHost_WriteText_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ClipboardHost_WriteText_Params_Data>(index_);
    }
    ClipboardHost_WriteText_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t buffer;
  uint8_t pad0_[4];
  mojo::internal::Pointer<::mojo_base::mojom::internal::BigString16_Data> text;

 private:
  ClipboardHost_WriteText_Params_Data();
  ~ClipboardHost_WriteText_Params_Data() = delete;
};
static_assert(sizeof(ClipboardHost_WriteText_Params_Data) == 24,
              "Bad sizeof(ClipboardHost_WriteText_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ClipboardHost_WriteHtml_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ClipboardHost_WriteHtml_Params_Data));
      new (data()) ClipboardHost_WriteHtml_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ClipboardHost_WriteHtml_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ClipboardHost_WriteHtml_Params_Data>(index_);
    }
    ClipboardHost_WriteHtml_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t buffer;
  uint8_t pad0_[4];
  mojo::internal::Pointer<::mojo_base::mojom::internal::BigString16_Data> markup;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> url;

 private:
  ClipboardHost_WriteHtml_Params_Data();
  ~ClipboardHost_WriteHtml_Params_Data() = delete;
};
static_assert(sizeof(ClipboardHost_WriteHtml_Params_Data) == 32,
              "Bad sizeof(ClipboardHost_WriteHtml_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ClipboardHost_WriteSmartPasteMarker_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ClipboardHost_WriteSmartPasteMarker_Params_Data));
      new (data()) ClipboardHost_WriteSmartPasteMarker_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ClipboardHost_WriteSmartPasteMarker_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ClipboardHost_WriteSmartPasteMarker_Params_Data>(index_);
    }
    ClipboardHost_WriteSmartPasteMarker_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t buffer;
  uint8_t padfinal_[4];

 private:
  ClipboardHost_WriteSmartPasteMarker_Params_Data();
  ~ClipboardHost_WriteSmartPasteMarker_Params_Data() = delete;
};
static_assert(sizeof(ClipboardHost_WriteSmartPasteMarker_Params_Data) == 16,
              "Bad sizeof(ClipboardHost_WriteSmartPasteMarker_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ClipboardHost_WriteCustomData_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ClipboardHost_WriteCustomData_Params_Data));
      new (data()) ClipboardHost_WriteCustomData_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ClipboardHost_WriteCustomData_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ClipboardHost_WriteCustomData_Params_Data>(index_);
    }
    ClipboardHost_WriteCustomData_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t buffer;
  uint8_t pad0_[4];
  mojo::internal::Pointer<mojo::internal::Map_Data<mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data>, mojo::internal::Pointer<::mojo_base::mojom::internal::BigString16_Data>>> data;

 private:
  ClipboardHost_WriteCustomData_Params_Data();
  ~ClipboardHost_WriteCustomData_Params_Data() = delete;
};
static_assert(sizeof(ClipboardHost_WriteCustomData_Params_Data) == 24,
              "Bad sizeof(ClipboardHost_WriteCustomData_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ClipboardHost_WriteBookmark_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ClipboardHost_WriteBookmark_Params_Data));
      new (data()) ClipboardHost_WriteBookmark_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ClipboardHost_WriteBookmark_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ClipboardHost_WriteBookmark_Params_Data>(index_);
    }
    ClipboardHost_WriteBookmark_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t buffer;
  uint8_t pad0_[4];
  mojo::internal::Pointer<mojo::internal::String_Data> url;
  mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data> title;

 private:
  ClipboardHost_WriteBookmark_Params_Data();
  ~ClipboardHost_WriteBookmark_Params_Data() = delete;
};
static_assert(sizeof(ClipboardHost_WriteBookmark_Params_Data) == 32,
              "Bad sizeof(ClipboardHost_WriteBookmark_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ClipboardHost_WriteImage_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ClipboardHost_WriteImage_Params_Data));
      new (data()) ClipboardHost_WriteImage_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ClipboardHost_WriteImage_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ClipboardHost_WriteImage_Params_Data>(index_);
    }
    ClipboardHost_WriteImage_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t buffer;
  mojo::internal::Handle_Data shared_buffer_handle;
  mojo::internal::Pointer<::gfx::mojom::internal::Size_Data> size_in_pixels;

 private:
  ClipboardHost_WriteImage_Params_Data();
  ~ClipboardHost_WriteImage_Params_Data() = delete;
};
static_assert(sizeof(ClipboardHost_WriteImage_Params_Data) == 24,
              "Bad sizeof(ClipboardHost_WriteImage_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ClipboardHost_CommitWrite_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ClipboardHost_CommitWrite_Params_Data));
      new (data()) ClipboardHost_CommitWrite_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ClipboardHost_CommitWrite_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ClipboardHost_CommitWrite_Params_Data>(index_);
    }
    ClipboardHost_CommitWrite_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t buffer;
  uint8_t padfinal_[4];

 private:
  ClipboardHost_CommitWrite_Params_Data();
  ~ClipboardHost_CommitWrite_Params_Data() = delete;
};
static_assert(sizeof(ClipboardHost_CommitWrite_Params_Data) == 16,
              "Bad sizeof(ClipboardHost_CommitWrite_Params_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_CLIPBOARD_CLIPBOARD_MOJOM_SHARED_INTERNAL_H_