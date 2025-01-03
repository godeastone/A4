// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_CREDENTIALMANAGER_CREDENTIAL_MANAGER_MOJOM_SHARED_INTERNAL_H_
#define THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_CREDENTIALMANAGER_CREDENTIAL_MANAGER_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "mojo/public/mojom/base/string16.mojom-shared-internal.h"
#include "url/mojom/origin.mojom-shared-internal.h"
#include "url/mojom/url.mojom-shared-internal.h"
#include "mojo/public/cpp/bindings/lib/native_enum_data.h"
#include "mojo/public/interfaces/bindings/native_struct.mojom-shared-internal.h"
#include "base/component_export.h"

namespace mojo {
namespace internal {
class ValidationContext;
}
}
namespace password_manager {
namespace mojom {
namespace internal {
class CredentialInfo_Data;

struct CredentialType_Data {
 public:
  static bool constexpr kIsExtensible = false;

  static bool IsKnownValue(int32_t value) {
    switch (value) {
      case 0:
      case 1:
      case 2:
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

struct CredentialMediationRequirement_Data {
 public:
  static bool constexpr kIsExtensible = false;

  static bool IsKnownValue(int32_t value) {
    switch (value) {
      case 0:
      case 1:
      case 2:
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

struct CredentialManagerError_Data {
 public:
  static bool constexpr kIsExtensible = false;

  static bool IsKnownValue(int32_t value) {
    switch (value) {
      case 0:
      case 1:
      case 2:
      case 3:
      case 4:
      case 5:
      case 6:
      case 7:
      case 8:
      case 9:
      case 10:
      case 11:
      case 12:
      case 13:
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
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) CredentialInfo_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CredentialInfo_Data));
      new (data()) CredentialInfo_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CredentialInfo_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CredentialInfo_Data>(index_);
    }
    CredentialInfo_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t type;
  uint8_t pad0_[4];
  mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data> id;
  mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data> name;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> icon;
  mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data> password;
  mojo::internal::Pointer<::url::mojom::internal::Origin_Data> federation;

 private:
  CredentialInfo_Data();
  ~CredentialInfo_Data() = delete;
};
static_assert(sizeof(CredentialInfo_Data) == 56,
              "Bad sizeof(CredentialInfo_Data)");
// Used by CredentialInfo::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct CredentialInfo_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  CredentialInfo_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~CredentialInfo_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    CredentialInfo_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    CredentialInfo_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) CredentialManager_Store_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CredentialManager_Store_Params_Data));
      new (data()) CredentialManager_Store_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CredentialManager_Store_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CredentialManager_Store_Params_Data>(index_);
    }
    CredentialManager_Store_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::CredentialInfo_Data> credential;

 private:
  CredentialManager_Store_Params_Data();
  ~CredentialManager_Store_Params_Data() = delete;
};
static_assert(sizeof(CredentialManager_Store_Params_Data) == 16,
              "Bad sizeof(CredentialManager_Store_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) CredentialManager_Store_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CredentialManager_Store_ResponseParams_Data));
      new (data()) CredentialManager_Store_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CredentialManager_Store_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CredentialManager_Store_ResponseParams_Data>(index_);
    }
    CredentialManager_Store_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  CredentialManager_Store_ResponseParams_Data();
  ~CredentialManager_Store_ResponseParams_Data() = delete;
};
static_assert(sizeof(CredentialManager_Store_ResponseParams_Data) == 8,
              "Bad sizeof(CredentialManager_Store_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) CredentialManager_PreventSilentAccess_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CredentialManager_PreventSilentAccess_Params_Data));
      new (data()) CredentialManager_PreventSilentAccess_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CredentialManager_PreventSilentAccess_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CredentialManager_PreventSilentAccess_Params_Data>(index_);
    }
    CredentialManager_PreventSilentAccess_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  CredentialManager_PreventSilentAccess_Params_Data();
  ~CredentialManager_PreventSilentAccess_Params_Data() = delete;
};
static_assert(sizeof(CredentialManager_PreventSilentAccess_Params_Data) == 8,
              "Bad sizeof(CredentialManager_PreventSilentAccess_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) CredentialManager_PreventSilentAccess_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CredentialManager_PreventSilentAccess_ResponseParams_Data));
      new (data()) CredentialManager_PreventSilentAccess_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CredentialManager_PreventSilentAccess_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CredentialManager_PreventSilentAccess_ResponseParams_Data>(index_);
    }
    CredentialManager_PreventSilentAccess_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  CredentialManager_PreventSilentAccess_ResponseParams_Data();
  ~CredentialManager_PreventSilentAccess_ResponseParams_Data() = delete;
};
static_assert(sizeof(CredentialManager_PreventSilentAccess_ResponseParams_Data) == 8,
              "Bad sizeof(CredentialManager_PreventSilentAccess_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) CredentialManager_Get_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CredentialManager_Get_Params_Data));
      new (data()) CredentialManager_Get_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CredentialManager_Get_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CredentialManager_Get_Params_Data>(index_);
    }
    CredentialManager_Get_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t mediation;
  uint8_t include_passwords : 1;
  uint8_t pad1_[3];
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<::url::mojom::internal::Url_Data>>> federations;

 private:
  CredentialManager_Get_Params_Data();
  ~CredentialManager_Get_Params_Data() = delete;
};
static_assert(sizeof(CredentialManager_Get_Params_Data) == 24,
              "Bad sizeof(CredentialManager_Get_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) CredentialManager_Get_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CredentialManager_Get_ResponseParams_Data));
      new (data()) CredentialManager_Get_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CredentialManager_Get_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CredentialManager_Get_ResponseParams_Data>(index_);
    }
    CredentialManager_Get_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t error;
  uint8_t pad0_[4];
  mojo::internal::Pointer<internal::CredentialInfo_Data> credential;

 private:
  CredentialManager_Get_ResponseParams_Data();
  ~CredentialManager_Get_ResponseParams_Data() = delete;
};
static_assert(sizeof(CredentialManager_Get_ResponseParams_Data) == 24,
              "Bad sizeof(CredentialManager_Get_ResponseParams_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace password_manager

#endif  // THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_CREDENTIALMANAGER_CREDENTIAL_MANAGER_MOJOM_SHARED_INTERNAL_H_