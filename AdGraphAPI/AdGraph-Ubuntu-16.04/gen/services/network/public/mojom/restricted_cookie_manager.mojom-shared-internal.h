// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_RESTRICTED_COOKIE_MANAGER_MOJOM_SHARED_INTERNAL_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_RESTRICTED_COOKIE_MANAGER_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "services/network/public/mojom/cookie_manager.mojom-shared-internal.h"
#include "mojo/public/mojom/base/time.mojom-shared-internal.h"
#include "url/mojom/url.mojom-shared-internal.h"
#include "mojo/public/cpp/bindings/lib/native_enum_data.h"
#include "mojo/public/interfaces/bindings/native_struct.mojom-shared-internal.h"

namespace mojo {
namespace internal {
class ValidationContext;
}
}
namespace network {
namespace mojom {
namespace internal {
class CookieManagerGetOptions_Data;

struct CookieMatchType_Data {
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
class  CookieManagerGetOptions_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CookieManagerGetOptions_Data));
      new (data()) CookieManagerGetOptions_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CookieManagerGetOptions_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CookieManagerGetOptions_Data>(index_);
    }
    CookieManagerGetOptions_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> name;
  int32_t match_type;
  uint8_t padfinal_[4];

 private:
  CookieManagerGetOptions_Data();
  ~CookieManagerGetOptions_Data() = delete;
};
static_assert(sizeof(CookieManagerGetOptions_Data) == 24,
              "Bad sizeof(CookieManagerGetOptions_Data)");
// Used by CookieManagerGetOptions::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct CookieManagerGetOptions_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  CookieManagerGetOptions_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~CookieManagerGetOptions_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    CookieManagerGetOptions_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    CookieManagerGetOptions_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  RestrictedCookieManager_GetAllForUrl_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(RestrictedCookieManager_GetAllForUrl_Params_Data));
      new (data()) RestrictedCookieManager_GetAllForUrl_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    RestrictedCookieManager_GetAllForUrl_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<RestrictedCookieManager_GetAllForUrl_Params_Data>(index_);
    }
    RestrictedCookieManager_GetAllForUrl_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> url;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> site_for_cookies;
  mojo::internal::Pointer<internal::CookieManagerGetOptions_Data> options;

 private:
  RestrictedCookieManager_GetAllForUrl_Params_Data();
  ~RestrictedCookieManager_GetAllForUrl_Params_Data() = delete;
};
static_assert(sizeof(RestrictedCookieManager_GetAllForUrl_Params_Data) == 32,
              "Bad sizeof(RestrictedCookieManager_GetAllForUrl_Params_Data)");
class  RestrictedCookieManager_GetAllForUrl_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(RestrictedCookieManager_GetAllForUrl_ResponseParams_Data));
      new (data()) RestrictedCookieManager_GetAllForUrl_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    RestrictedCookieManager_GetAllForUrl_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<RestrictedCookieManager_GetAllForUrl_ResponseParams_Data>(index_);
    }
    RestrictedCookieManager_GetAllForUrl_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<::network::mojom::internal::CanonicalCookie_Data>>> cookies;

 private:
  RestrictedCookieManager_GetAllForUrl_ResponseParams_Data();
  ~RestrictedCookieManager_GetAllForUrl_ResponseParams_Data() = delete;
};
static_assert(sizeof(RestrictedCookieManager_GetAllForUrl_ResponseParams_Data) == 16,
              "Bad sizeof(RestrictedCookieManager_GetAllForUrl_ResponseParams_Data)");
class  RestrictedCookieManager_SetCanonicalCookie_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(RestrictedCookieManager_SetCanonicalCookie_Params_Data));
      new (data()) RestrictedCookieManager_SetCanonicalCookie_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    RestrictedCookieManager_SetCanonicalCookie_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<RestrictedCookieManager_SetCanonicalCookie_Params_Data>(index_);
    }
    RestrictedCookieManager_SetCanonicalCookie_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::network::mojom::internal::CanonicalCookie_Data> cookie;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> url;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> site_for_cookies;

 private:
  RestrictedCookieManager_SetCanonicalCookie_Params_Data();
  ~RestrictedCookieManager_SetCanonicalCookie_Params_Data() = delete;
};
static_assert(sizeof(RestrictedCookieManager_SetCanonicalCookie_Params_Data) == 32,
              "Bad sizeof(RestrictedCookieManager_SetCanonicalCookie_Params_Data)");
class  RestrictedCookieManager_SetCanonicalCookie_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(RestrictedCookieManager_SetCanonicalCookie_ResponseParams_Data));
      new (data()) RestrictedCookieManager_SetCanonicalCookie_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    RestrictedCookieManager_SetCanonicalCookie_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<RestrictedCookieManager_SetCanonicalCookie_ResponseParams_Data>(index_);
    }
    RestrictedCookieManager_SetCanonicalCookie_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t success : 1;
  uint8_t padfinal_[7];

 private:
  RestrictedCookieManager_SetCanonicalCookie_ResponseParams_Data();
  ~RestrictedCookieManager_SetCanonicalCookie_ResponseParams_Data() = delete;
};
static_assert(sizeof(RestrictedCookieManager_SetCanonicalCookie_ResponseParams_Data) == 16,
              "Bad sizeof(RestrictedCookieManager_SetCanonicalCookie_ResponseParams_Data)");
class  RestrictedCookieManager_AddChangeListener_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(RestrictedCookieManager_AddChangeListener_Params_Data));
      new (data()) RestrictedCookieManager_AddChangeListener_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    RestrictedCookieManager_AddChangeListener_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<RestrictedCookieManager_AddChangeListener_Params_Data>(index_);
    }
    RestrictedCookieManager_AddChangeListener_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> url;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> site_for_cookies;
  mojo::internal::Interface_Data listener;

 private:
  RestrictedCookieManager_AddChangeListener_Params_Data();
  ~RestrictedCookieManager_AddChangeListener_Params_Data() = delete;
};
static_assert(sizeof(RestrictedCookieManager_AddChangeListener_Params_Data) == 32,
              "Bad sizeof(RestrictedCookieManager_AddChangeListener_Params_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_RESTRICTED_COOKIE_MANAGER_MOJOM_SHARED_INTERNAL_H_