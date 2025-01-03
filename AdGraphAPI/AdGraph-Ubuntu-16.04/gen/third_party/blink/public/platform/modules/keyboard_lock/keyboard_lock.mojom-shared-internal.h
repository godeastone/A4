// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_KEYBOARD_LOCK_KEYBOARD_LOCK_MOJOM_SHARED_INTERNAL_H_
#define THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_KEYBOARD_LOCK_KEYBOARD_LOCK_MOJOM_SHARED_INTERNAL_H_

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
namespace blink {
namespace mojom {
namespace internal {
class GetKeyboardLayoutMapResult_Data;

struct KeyboardLockRequestResult_Data {
 public:
  static bool constexpr kIsExtensible = false;

  static bool IsKnownValue(int32_t value) {
    switch (value) {
      case 0:
      case 1:
      case 2:
      case 3:
      case 4:
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

struct GetKeyboardLayoutMapStatus_Data {
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
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) GetKeyboardLayoutMapResult_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(GetKeyboardLayoutMapResult_Data));
      new (data()) GetKeyboardLayoutMapResult_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    GetKeyboardLayoutMapResult_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<GetKeyboardLayoutMapResult_Data>(index_);
    }
    GetKeyboardLayoutMapResult_Data* operator->() { return data(); }

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
  mojo::internal::Pointer<mojo::internal::Map_Data<mojo::internal::Pointer<mojo::internal::String_Data>, mojo::internal::Pointer<mojo::internal::String_Data>>> layout_map;

 private:
  GetKeyboardLayoutMapResult_Data();
  ~GetKeyboardLayoutMapResult_Data() = delete;
};
static_assert(sizeof(GetKeyboardLayoutMapResult_Data) == 24,
              "Bad sizeof(GetKeyboardLayoutMapResult_Data)");
// Used by GetKeyboardLayoutMapResult::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct GetKeyboardLayoutMapResult_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  GetKeyboardLayoutMapResult_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~GetKeyboardLayoutMapResult_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    GetKeyboardLayoutMapResult_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    GetKeyboardLayoutMapResult_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) KeyboardLockService_RequestKeyboardLock_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(KeyboardLockService_RequestKeyboardLock_Params_Data));
      new (data()) KeyboardLockService_RequestKeyboardLock_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    KeyboardLockService_RequestKeyboardLock_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<KeyboardLockService_RequestKeyboardLock_Params_Data>(index_);
    }
    KeyboardLockService_RequestKeyboardLock_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<mojo::internal::String_Data>>> key_codes;

 private:
  KeyboardLockService_RequestKeyboardLock_Params_Data();
  ~KeyboardLockService_RequestKeyboardLock_Params_Data() = delete;
};
static_assert(sizeof(KeyboardLockService_RequestKeyboardLock_Params_Data) == 16,
              "Bad sizeof(KeyboardLockService_RequestKeyboardLock_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) KeyboardLockService_RequestKeyboardLock_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(KeyboardLockService_RequestKeyboardLock_ResponseParams_Data));
      new (data()) KeyboardLockService_RequestKeyboardLock_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    KeyboardLockService_RequestKeyboardLock_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<KeyboardLockService_RequestKeyboardLock_ResponseParams_Data>(index_);
    }
    KeyboardLockService_RequestKeyboardLock_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t result;
  uint8_t padfinal_[4];

 private:
  KeyboardLockService_RequestKeyboardLock_ResponseParams_Data();
  ~KeyboardLockService_RequestKeyboardLock_ResponseParams_Data() = delete;
};
static_assert(sizeof(KeyboardLockService_RequestKeyboardLock_ResponseParams_Data) == 16,
              "Bad sizeof(KeyboardLockService_RequestKeyboardLock_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) KeyboardLockService_CancelKeyboardLock_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(KeyboardLockService_CancelKeyboardLock_Params_Data));
      new (data()) KeyboardLockService_CancelKeyboardLock_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    KeyboardLockService_CancelKeyboardLock_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<KeyboardLockService_CancelKeyboardLock_Params_Data>(index_);
    }
    KeyboardLockService_CancelKeyboardLock_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  KeyboardLockService_CancelKeyboardLock_Params_Data();
  ~KeyboardLockService_CancelKeyboardLock_Params_Data() = delete;
};
static_assert(sizeof(KeyboardLockService_CancelKeyboardLock_Params_Data) == 8,
              "Bad sizeof(KeyboardLockService_CancelKeyboardLock_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) KeyboardLockService_GetKeyboardLayoutMap_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(KeyboardLockService_GetKeyboardLayoutMap_Params_Data));
      new (data()) KeyboardLockService_GetKeyboardLayoutMap_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    KeyboardLockService_GetKeyboardLayoutMap_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<KeyboardLockService_GetKeyboardLayoutMap_Params_Data>(index_);
    }
    KeyboardLockService_GetKeyboardLayoutMap_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  KeyboardLockService_GetKeyboardLayoutMap_Params_Data();
  ~KeyboardLockService_GetKeyboardLayoutMap_Params_Data() = delete;
};
static_assert(sizeof(KeyboardLockService_GetKeyboardLayoutMap_Params_Data) == 8,
              "Bad sizeof(KeyboardLockService_GetKeyboardLayoutMap_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) KeyboardLockService_GetKeyboardLayoutMap_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(KeyboardLockService_GetKeyboardLayoutMap_ResponseParams_Data));
      new (data()) KeyboardLockService_GetKeyboardLayoutMap_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    KeyboardLockService_GetKeyboardLayoutMap_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<KeyboardLockService_GetKeyboardLayoutMap_ResponseParams_Data>(index_);
    }
    KeyboardLockService_GetKeyboardLayoutMap_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::GetKeyboardLayoutMapResult_Data> result;

 private:
  KeyboardLockService_GetKeyboardLayoutMap_ResponseParams_Data();
  ~KeyboardLockService_GetKeyboardLayoutMap_ResponseParams_Data() = delete;
};
static_assert(sizeof(KeyboardLockService_GetKeyboardLayoutMap_ResponseParams_Data) == 16,
              "Bad sizeof(KeyboardLockService_GetKeyboardLayoutMap_ResponseParams_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_KEYBOARD_LOCK_KEYBOARD_LOCK_MOJOM_SHARED_INTERNAL_H_