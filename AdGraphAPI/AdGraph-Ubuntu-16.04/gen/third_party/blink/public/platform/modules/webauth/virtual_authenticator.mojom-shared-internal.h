// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_WEBAUTH_VIRTUAL_AUTHENTICATOR_MOJOM_SHARED_INTERNAL_H_
#define THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_WEBAUTH_VIRTUAL_AUTHENTICATOR_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "url/mojom/url.mojom-shared-internal.h"
#include "third_party/blink/public/platform/modules/webauth/authenticator.mojom-shared-internal.h"
#include "mojo/public/cpp/bindings/lib/native_enum_data.h"
#include "mojo/public/interfaces/bindings/native_struct.mojom-shared-internal.h"
#include "base/component_export.h"

namespace mojo {
namespace internal {
class ValidationContext;
}
}
namespace webauth {
namespace test {
namespace mojom {
namespace internal {
class VirtualAuthenticatorOptions_Data;
class RegisteredKey_Data;

struct ClientToAuthenticatorProtocol_Data {
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
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) VirtualAuthenticatorOptions_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VirtualAuthenticatorOptions_Data));
      new (data()) VirtualAuthenticatorOptions_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VirtualAuthenticatorOptions_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VirtualAuthenticatorOptions_Data>(index_);
    }
    VirtualAuthenticatorOptions_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t protocol;
  int32_t transport;
  int32_t attachment;
  uint8_t has_resident_key : 1;
  uint8_t has_user_verification : 1;
  uint8_t padfinal_[3];

 private:
  VirtualAuthenticatorOptions_Data();
  ~VirtualAuthenticatorOptions_Data() = delete;
};
static_assert(sizeof(VirtualAuthenticatorOptions_Data) == 24,
              "Bad sizeof(VirtualAuthenticatorOptions_Data)");
// Used by VirtualAuthenticatorOptions::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct VirtualAuthenticatorOptions_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  VirtualAuthenticatorOptions_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~VirtualAuthenticatorOptions_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    VirtualAuthenticatorOptions_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    VirtualAuthenticatorOptions_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) RegisteredKey_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(RegisteredKey_Data));
      new (data()) RegisteredKey_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    RegisteredKey_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<RegisteredKey_Data>(index_);
    }
    RegisteredKey_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> key_handle;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> application_parameter;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> private_key;
  int32_t counter;
  uint8_t padfinal_[4];

 private:
  RegisteredKey_Data();
  ~RegisteredKey_Data() = delete;
};
static_assert(sizeof(RegisteredKey_Data) == 40,
              "Bad sizeof(RegisteredKey_Data)");
// Used by RegisteredKey::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct RegisteredKey_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  RegisteredKey_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~RegisteredKey_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    RegisteredKey_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    RegisteredKey_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) VirtualAuthenticator_GetUniqueId_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VirtualAuthenticator_GetUniqueId_Params_Data));
      new (data()) VirtualAuthenticator_GetUniqueId_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VirtualAuthenticator_GetUniqueId_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VirtualAuthenticator_GetUniqueId_Params_Data>(index_);
    }
    VirtualAuthenticator_GetUniqueId_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  VirtualAuthenticator_GetUniqueId_Params_Data();
  ~VirtualAuthenticator_GetUniqueId_Params_Data() = delete;
};
static_assert(sizeof(VirtualAuthenticator_GetUniqueId_Params_Data) == 8,
              "Bad sizeof(VirtualAuthenticator_GetUniqueId_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) VirtualAuthenticator_GetUniqueId_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VirtualAuthenticator_GetUniqueId_ResponseParams_Data));
      new (data()) VirtualAuthenticator_GetUniqueId_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VirtualAuthenticator_GetUniqueId_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VirtualAuthenticator_GetUniqueId_ResponseParams_Data>(index_);
    }
    VirtualAuthenticator_GetUniqueId_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> id;

 private:
  VirtualAuthenticator_GetUniqueId_ResponseParams_Data();
  ~VirtualAuthenticator_GetUniqueId_ResponseParams_Data() = delete;
};
static_assert(sizeof(VirtualAuthenticator_GetUniqueId_ResponseParams_Data) == 16,
              "Bad sizeof(VirtualAuthenticator_GetUniqueId_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) VirtualAuthenticator_AddRegistration_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VirtualAuthenticator_AddRegistration_Params_Data));
      new (data()) VirtualAuthenticator_AddRegistration_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VirtualAuthenticator_AddRegistration_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VirtualAuthenticator_AddRegistration_Params_Data>(index_);
    }
    VirtualAuthenticator_AddRegistration_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::RegisteredKey_Data> key;

 private:
  VirtualAuthenticator_AddRegistration_Params_Data();
  ~VirtualAuthenticator_AddRegistration_Params_Data() = delete;
};
static_assert(sizeof(VirtualAuthenticator_AddRegistration_Params_Data) == 16,
              "Bad sizeof(VirtualAuthenticator_AddRegistration_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) VirtualAuthenticator_AddRegistration_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VirtualAuthenticator_AddRegistration_ResponseParams_Data));
      new (data()) VirtualAuthenticator_AddRegistration_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VirtualAuthenticator_AddRegistration_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VirtualAuthenticator_AddRegistration_ResponseParams_Data>(index_);
    }
    VirtualAuthenticator_AddRegistration_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t added : 1;
  uint8_t padfinal_[7];

 private:
  VirtualAuthenticator_AddRegistration_ResponseParams_Data();
  ~VirtualAuthenticator_AddRegistration_ResponseParams_Data() = delete;
};
static_assert(sizeof(VirtualAuthenticator_AddRegistration_ResponseParams_Data) == 16,
              "Bad sizeof(VirtualAuthenticator_AddRegistration_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) VirtualAuthenticator_GetRegistrations_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VirtualAuthenticator_GetRegistrations_Params_Data));
      new (data()) VirtualAuthenticator_GetRegistrations_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VirtualAuthenticator_GetRegistrations_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VirtualAuthenticator_GetRegistrations_Params_Data>(index_);
    }
    VirtualAuthenticator_GetRegistrations_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  VirtualAuthenticator_GetRegistrations_Params_Data();
  ~VirtualAuthenticator_GetRegistrations_Params_Data() = delete;
};
static_assert(sizeof(VirtualAuthenticator_GetRegistrations_Params_Data) == 8,
              "Bad sizeof(VirtualAuthenticator_GetRegistrations_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) VirtualAuthenticator_GetRegistrations_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VirtualAuthenticator_GetRegistrations_ResponseParams_Data));
      new (data()) VirtualAuthenticator_GetRegistrations_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VirtualAuthenticator_GetRegistrations_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VirtualAuthenticator_GetRegistrations_ResponseParams_Data>(index_);
    }
    VirtualAuthenticator_GetRegistrations_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::RegisteredKey_Data>>> keys;

 private:
  VirtualAuthenticator_GetRegistrations_ResponseParams_Data();
  ~VirtualAuthenticator_GetRegistrations_ResponseParams_Data() = delete;
};
static_assert(sizeof(VirtualAuthenticator_GetRegistrations_ResponseParams_Data) == 16,
              "Bad sizeof(VirtualAuthenticator_GetRegistrations_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) VirtualAuthenticator_ClearRegistrations_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VirtualAuthenticator_ClearRegistrations_Params_Data));
      new (data()) VirtualAuthenticator_ClearRegistrations_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VirtualAuthenticator_ClearRegistrations_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VirtualAuthenticator_ClearRegistrations_Params_Data>(index_);
    }
    VirtualAuthenticator_ClearRegistrations_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  VirtualAuthenticator_ClearRegistrations_Params_Data();
  ~VirtualAuthenticator_ClearRegistrations_Params_Data() = delete;
};
static_assert(sizeof(VirtualAuthenticator_ClearRegistrations_Params_Data) == 8,
              "Bad sizeof(VirtualAuthenticator_ClearRegistrations_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) VirtualAuthenticator_ClearRegistrations_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VirtualAuthenticator_ClearRegistrations_ResponseParams_Data));
      new (data()) VirtualAuthenticator_ClearRegistrations_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VirtualAuthenticator_ClearRegistrations_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VirtualAuthenticator_ClearRegistrations_ResponseParams_Data>(index_);
    }
    VirtualAuthenticator_ClearRegistrations_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  VirtualAuthenticator_ClearRegistrations_ResponseParams_Data();
  ~VirtualAuthenticator_ClearRegistrations_ResponseParams_Data() = delete;
};
static_assert(sizeof(VirtualAuthenticator_ClearRegistrations_ResponseParams_Data) == 8,
              "Bad sizeof(VirtualAuthenticator_ClearRegistrations_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) VirtualAuthenticator_SetUserPresence_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VirtualAuthenticator_SetUserPresence_Params_Data));
      new (data()) VirtualAuthenticator_SetUserPresence_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VirtualAuthenticator_SetUserPresence_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VirtualAuthenticator_SetUserPresence_Params_Data>(index_);
    }
    VirtualAuthenticator_SetUserPresence_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t present : 1;
  uint8_t padfinal_[7];

 private:
  VirtualAuthenticator_SetUserPresence_Params_Data();
  ~VirtualAuthenticator_SetUserPresence_Params_Data() = delete;
};
static_assert(sizeof(VirtualAuthenticator_SetUserPresence_Params_Data) == 16,
              "Bad sizeof(VirtualAuthenticator_SetUserPresence_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) VirtualAuthenticator_SetUserPresence_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VirtualAuthenticator_SetUserPresence_ResponseParams_Data));
      new (data()) VirtualAuthenticator_SetUserPresence_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VirtualAuthenticator_SetUserPresence_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VirtualAuthenticator_SetUserPresence_ResponseParams_Data>(index_);
    }
    VirtualAuthenticator_SetUserPresence_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  VirtualAuthenticator_SetUserPresence_ResponseParams_Data();
  ~VirtualAuthenticator_SetUserPresence_ResponseParams_Data() = delete;
};
static_assert(sizeof(VirtualAuthenticator_SetUserPresence_ResponseParams_Data) == 8,
              "Bad sizeof(VirtualAuthenticator_SetUserPresence_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) VirtualAuthenticator_GetUserPresence_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VirtualAuthenticator_GetUserPresence_Params_Data));
      new (data()) VirtualAuthenticator_GetUserPresence_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VirtualAuthenticator_GetUserPresence_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VirtualAuthenticator_GetUserPresence_Params_Data>(index_);
    }
    VirtualAuthenticator_GetUserPresence_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  VirtualAuthenticator_GetUserPresence_Params_Data();
  ~VirtualAuthenticator_GetUserPresence_Params_Data() = delete;
};
static_assert(sizeof(VirtualAuthenticator_GetUserPresence_Params_Data) == 8,
              "Bad sizeof(VirtualAuthenticator_GetUserPresence_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) VirtualAuthenticator_GetUserPresence_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VirtualAuthenticator_GetUserPresence_ResponseParams_Data));
      new (data()) VirtualAuthenticator_GetUserPresence_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VirtualAuthenticator_GetUserPresence_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VirtualAuthenticator_GetUserPresence_ResponseParams_Data>(index_);
    }
    VirtualAuthenticator_GetUserPresence_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t present : 1;
  uint8_t padfinal_[7];

 private:
  VirtualAuthenticator_GetUserPresence_ResponseParams_Data();
  ~VirtualAuthenticator_GetUserPresence_ResponseParams_Data() = delete;
};
static_assert(sizeof(VirtualAuthenticator_GetUserPresence_ResponseParams_Data) == 16,
              "Bad sizeof(VirtualAuthenticator_GetUserPresence_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) VirtualAuthenticatorManager_CreateAuthenticator_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VirtualAuthenticatorManager_CreateAuthenticator_Params_Data));
      new (data()) VirtualAuthenticatorManager_CreateAuthenticator_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VirtualAuthenticatorManager_CreateAuthenticator_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VirtualAuthenticatorManager_CreateAuthenticator_Params_Data>(index_);
    }
    VirtualAuthenticatorManager_CreateAuthenticator_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::VirtualAuthenticatorOptions_Data> options;

 private:
  VirtualAuthenticatorManager_CreateAuthenticator_Params_Data();
  ~VirtualAuthenticatorManager_CreateAuthenticator_Params_Data() = delete;
};
static_assert(sizeof(VirtualAuthenticatorManager_CreateAuthenticator_Params_Data) == 16,
              "Bad sizeof(VirtualAuthenticatorManager_CreateAuthenticator_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) VirtualAuthenticatorManager_CreateAuthenticator_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VirtualAuthenticatorManager_CreateAuthenticator_ResponseParams_Data));
      new (data()) VirtualAuthenticatorManager_CreateAuthenticator_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VirtualAuthenticatorManager_CreateAuthenticator_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VirtualAuthenticatorManager_CreateAuthenticator_ResponseParams_Data>(index_);
    }
    VirtualAuthenticatorManager_CreateAuthenticator_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Interface_Data authenticator;

 private:
  VirtualAuthenticatorManager_CreateAuthenticator_ResponseParams_Data();
  ~VirtualAuthenticatorManager_CreateAuthenticator_ResponseParams_Data() = delete;
};
static_assert(sizeof(VirtualAuthenticatorManager_CreateAuthenticator_ResponseParams_Data) == 16,
              "Bad sizeof(VirtualAuthenticatorManager_CreateAuthenticator_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) VirtualAuthenticatorManager_GetAuthenticators_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VirtualAuthenticatorManager_GetAuthenticators_Params_Data));
      new (data()) VirtualAuthenticatorManager_GetAuthenticators_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VirtualAuthenticatorManager_GetAuthenticators_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VirtualAuthenticatorManager_GetAuthenticators_Params_Data>(index_);
    }
    VirtualAuthenticatorManager_GetAuthenticators_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  VirtualAuthenticatorManager_GetAuthenticators_Params_Data();
  ~VirtualAuthenticatorManager_GetAuthenticators_Params_Data() = delete;
};
static_assert(sizeof(VirtualAuthenticatorManager_GetAuthenticators_Params_Data) == 8,
              "Bad sizeof(VirtualAuthenticatorManager_GetAuthenticators_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) VirtualAuthenticatorManager_GetAuthenticators_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VirtualAuthenticatorManager_GetAuthenticators_ResponseParams_Data));
      new (data()) VirtualAuthenticatorManager_GetAuthenticators_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VirtualAuthenticatorManager_GetAuthenticators_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VirtualAuthenticatorManager_GetAuthenticators_ResponseParams_Data>(index_);
    }
    VirtualAuthenticatorManager_GetAuthenticators_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Interface_Data>> authenticators;

 private:
  VirtualAuthenticatorManager_GetAuthenticators_ResponseParams_Data();
  ~VirtualAuthenticatorManager_GetAuthenticators_ResponseParams_Data() = delete;
};
static_assert(sizeof(VirtualAuthenticatorManager_GetAuthenticators_ResponseParams_Data) == 16,
              "Bad sizeof(VirtualAuthenticatorManager_GetAuthenticators_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) VirtualAuthenticatorManager_RemoveAuthenticator_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VirtualAuthenticatorManager_RemoveAuthenticator_Params_Data));
      new (data()) VirtualAuthenticatorManager_RemoveAuthenticator_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VirtualAuthenticatorManager_RemoveAuthenticator_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VirtualAuthenticatorManager_RemoveAuthenticator_Params_Data>(index_);
    }
    VirtualAuthenticatorManager_RemoveAuthenticator_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> id;

 private:
  VirtualAuthenticatorManager_RemoveAuthenticator_Params_Data();
  ~VirtualAuthenticatorManager_RemoveAuthenticator_Params_Data() = delete;
};
static_assert(sizeof(VirtualAuthenticatorManager_RemoveAuthenticator_Params_Data) == 16,
              "Bad sizeof(VirtualAuthenticatorManager_RemoveAuthenticator_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) VirtualAuthenticatorManager_RemoveAuthenticator_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VirtualAuthenticatorManager_RemoveAuthenticator_ResponseParams_Data));
      new (data()) VirtualAuthenticatorManager_RemoveAuthenticator_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VirtualAuthenticatorManager_RemoveAuthenticator_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VirtualAuthenticatorManager_RemoveAuthenticator_ResponseParams_Data>(index_);
    }
    VirtualAuthenticatorManager_RemoveAuthenticator_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t removed : 1;
  uint8_t padfinal_[7];

 private:
  VirtualAuthenticatorManager_RemoveAuthenticator_ResponseParams_Data();
  ~VirtualAuthenticatorManager_RemoveAuthenticator_ResponseParams_Data() = delete;
};
static_assert(sizeof(VirtualAuthenticatorManager_RemoveAuthenticator_ResponseParams_Data) == 16,
              "Bad sizeof(VirtualAuthenticatorManager_RemoveAuthenticator_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) VirtualAuthenticatorManager_ClearAuthenticators_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VirtualAuthenticatorManager_ClearAuthenticators_Params_Data));
      new (data()) VirtualAuthenticatorManager_ClearAuthenticators_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VirtualAuthenticatorManager_ClearAuthenticators_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VirtualAuthenticatorManager_ClearAuthenticators_Params_Data>(index_);
    }
    VirtualAuthenticatorManager_ClearAuthenticators_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  VirtualAuthenticatorManager_ClearAuthenticators_Params_Data();
  ~VirtualAuthenticatorManager_ClearAuthenticators_Params_Data() = delete;
};
static_assert(sizeof(VirtualAuthenticatorManager_ClearAuthenticators_Params_Data) == 8,
              "Bad sizeof(VirtualAuthenticatorManager_ClearAuthenticators_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) VirtualAuthenticatorManager_ClearAuthenticators_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VirtualAuthenticatorManager_ClearAuthenticators_ResponseParams_Data));
      new (data()) VirtualAuthenticatorManager_ClearAuthenticators_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VirtualAuthenticatorManager_ClearAuthenticators_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VirtualAuthenticatorManager_ClearAuthenticators_ResponseParams_Data>(index_);
    }
    VirtualAuthenticatorManager_ClearAuthenticators_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  VirtualAuthenticatorManager_ClearAuthenticators_ResponseParams_Data();
  ~VirtualAuthenticatorManager_ClearAuthenticators_ResponseParams_Data() = delete;
};
static_assert(sizeof(VirtualAuthenticatorManager_ClearAuthenticators_ResponseParams_Data) == 8,
              "Bad sizeof(VirtualAuthenticatorManager_ClearAuthenticators_ResponseParams_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace test
}  // namespace webauth

#endif  // THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_WEBAUTH_VIRTUAL_AUTHENTICATOR_MOJOM_SHARED_INTERNAL_H_