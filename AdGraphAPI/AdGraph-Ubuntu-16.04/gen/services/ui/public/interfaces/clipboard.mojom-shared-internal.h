// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_UI_PUBLIC_INTERFACES_CLIPBOARD_MOJOM_SHARED_INTERNAL_H_
#define SERVICES_UI_PUBLIC_INTERFACES_CLIPBOARD_MOJOM_SHARED_INTERNAL_H_

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
namespace ui {
namespace mojom {
namespace internal {

struct Clipboard_Type_Data {
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
class  Clipboard_GetSequenceNumber_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Clipboard_GetSequenceNumber_Params_Data));
      new (data()) Clipboard_GetSequenceNumber_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Clipboard_GetSequenceNumber_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Clipboard_GetSequenceNumber_Params_Data>(index_);
    }
    Clipboard_GetSequenceNumber_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t clipboard_type;
  uint8_t padfinal_[4];

 private:
  Clipboard_GetSequenceNumber_Params_Data();
  ~Clipboard_GetSequenceNumber_Params_Data() = delete;
};
static_assert(sizeof(Clipboard_GetSequenceNumber_Params_Data) == 16,
              "Bad sizeof(Clipboard_GetSequenceNumber_Params_Data)");
class  Clipboard_GetSequenceNumber_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Clipboard_GetSequenceNumber_ResponseParams_Data));
      new (data()) Clipboard_GetSequenceNumber_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Clipboard_GetSequenceNumber_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Clipboard_GetSequenceNumber_ResponseParams_Data>(index_);
    }
    Clipboard_GetSequenceNumber_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint64_t sequence;

 private:
  Clipboard_GetSequenceNumber_ResponseParams_Data();
  ~Clipboard_GetSequenceNumber_ResponseParams_Data() = delete;
};
static_assert(sizeof(Clipboard_GetSequenceNumber_ResponseParams_Data) == 16,
              "Bad sizeof(Clipboard_GetSequenceNumber_ResponseParams_Data)");
class  Clipboard_GetAvailableMimeTypes_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Clipboard_GetAvailableMimeTypes_Params_Data));
      new (data()) Clipboard_GetAvailableMimeTypes_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Clipboard_GetAvailableMimeTypes_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Clipboard_GetAvailableMimeTypes_Params_Data>(index_);
    }
    Clipboard_GetAvailableMimeTypes_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t clipboard_types;
  uint8_t padfinal_[4];

 private:
  Clipboard_GetAvailableMimeTypes_Params_Data();
  ~Clipboard_GetAvailableMimeTypes_Params_Data() = delete;
};
static_assert(sizeof(Clipboard_GetAvailableMimeTypes_Params_Data) == 16,
              "Bad sizeof(Clipboard_GetAvailableMimeTypes_Params_Data)");
class  Clipboard_GetAvailableMimeTypes_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Clipboard_GetAvailableMimeTypes_ResponseParams_Data));
      new (data()) Clipboard_GetAvailableMimeTypes_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Clipboard_GetAvailableMimeTypes_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Clipboard_GetAvailableMimeTypes_ResponseParams_Data>(index_);
    }
    Clipboard_GetAvailableMimeTypes_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint64_t sequence;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<mojo::internal::String_Data>>> types;

 private:
  Clipboard_GetAvailableMimeTypes_ResponseParams_Data();
  ~Clipboard_GetAvailableMimeTypes_ResponseParams_Data() = delete;
};
static_assert(sizeof(Clipboard_GetAvailableMimeTypes_ResponseParams_Data) == 24,
              "Bad sizeof(Clipboard_GetAvailableMimeTypes_ResponseParams_Data)");
class  Clipboard_ReadClipboardData_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Clipboard_ReadClipboardData_Params_Data));
      new (data()) Clipboard_ReadClipboardData_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Clipboard_ReadClipboardData_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Clipboard_ReadClipboardData_Params_Data>(index_);
    }
    Clipboard_ReadClipboardData_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t clipboard_type;
  uint8_t pad0_[4];
  mojo::internal::Pointer<mojo::internal::String_Data> mime_type;

 private:
  Clipboard_ReadClipboardData_Params_Data();
  ~Clipboard_ReadClipboardData_Params_Data() = delete;
};
static_assert(sizeof(Clipboard_ReadClipboardData_Params_Data) == 24,
              "Bad sizeof(Clipboard_ReadClipboardData_Params_Data)");
class  Clipboard_ReadClipboardData_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Clipboard_ReadClipboardData_ResponseParams_Data));
      new (data()) Clipboard_ReadClipboardData_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Clipboard_ReadClipboardData_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Clipboard_ReadClipboardData_ResponseParams_Data>(index_);
    }
    Clipboard_ReadClipboardData_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint64_t sequence;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> data;

 private:
  Clipboard_ReadClipboardData_ResponseParams_Data();
  ~Clipboard_ReadClipboardData_ResponseParams_Data() = delete;
};
static_assert(sizeof(Clipboard_ReadClipboardData_ResponseParams_Data) == 24,
              "Bad sizeof(Clipboard_ReadClipboardData_ResponseParams_Data)");
class  Clipboard_WriteClipboardData_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Clipboard_WriteClipboardData_Params_Data));
      new (data()) Clipboard_WriteClipboardData_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Clipboard_WriteClipboardData_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Clipboard_WriteClipboardData_Params_Data>(index_);
    }
    Clipboard_WriteClipboardData_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t clipboard_type;
  uint8_t pad0_[4];
  mojo::internal::Pointer<mojo::internal::Map_Data<mojo::internal::Pointer<mojo::internal::String_Data>, mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>>>> data;

 private:
  Clipboard_WriteClipboardData_Params_Data();
  ~Clipboard_WriteClipboardData_Params_Data() = delete;
};
static_assert(sizeof(Clipboard_WriteClipboardData_Params_Data) == 24,
              "Bad sizeof(Clipboard_WriteClipboardData_Params_Data)");
class  Clipboard_WriteClipboardData_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Clipboard_WriteClipboardData_ResponseParams_Data));
      new (data()) Clipboard_WriteClipboardData_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Clipboard_WriteClipboardData_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Clipboard_WriteClipboardData_ResponseParams_Data>(index_);
    }
    Clipboard_WriteClipboardData_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint64_t sequence;

 private:
  Clipboard_WriteClipboardData_ResponseParams_Data();
  ~Clipboard_WriteClipboardData_ResponseParams_Data() = delete;
};
static_assert(sizeof(Clipboard_WriteClipboardData_ResponseParams_Data) == 16,
              "Bad sizeof(Clipboard_WriteClipboardData_ResponseParams_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace ui

#endif  // SERVICES_UI_PUBLIC_INTERFACES_CLIPBOARD_MOJOM_SHARED_INTERNAL_H_