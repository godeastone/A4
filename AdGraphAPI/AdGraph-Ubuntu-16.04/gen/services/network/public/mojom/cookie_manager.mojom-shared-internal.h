// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_COOKIE_MANAGER_MOJOM_SHARED_INTERNAL_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_COOKIE_MANAGER_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
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
class CookieOptions_Data;
class CanonicalCookie_Data;
class CookieDeletionFilter_Data;

struct CookiePriority_Data {
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

struct CookieSameSite_Data {
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

struct CookieSameSiteFilter_Data {
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

struct CookieChangeCause_Data {
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

struct CookieDeletionSessionControl_Data {
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

#pragma pack(push, 1)
class  CookieOptions_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CookieOptions_Data));
      new (data()) CookieOptions_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CookieOptions_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CookieOptions_Data>(index_);
    }
    CookieOptions_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t exclude_httponly : 1;
  uint8_t update_access_time : 1;
  uint8_t pad1_[3];
  int32_t cookie_same_site_filter;
  mojo::internal::Pointer<::mojo_base::mojom::internal::Time_Data> server_time;

 private:
  CookieOptions_Data();
  ~CookieOptions_Data() = delete;
};
static_assert(sizeof(CookieOptions_Data) == 24,
              "Bad sizeof(CookieOptions_Data)");
// Used by CookieOptions::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct CookieOptions_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  CookieOptions_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~CookieOptions_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    CookieOptions_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    CookieOptions_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  CanonicalCookie_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CanonicalCookie_Data));
      new (data()) CanonicalCookie_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CanonicalCookie_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CanonicalCookie_Data>(index_);
    }
    CanonicalCookie_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> name;
  mojo::internal::Pointer<mojo::internal::String_Data> value;
  mojo::internal::Pointer<mojo::internal::String_Data> domain;
  mojo::internal::Pointer<mojo::internal::String_Data> path;
  mojo::internal::Pointer<::mojo_base::mojom::internal::Time_Data> creation;
  mojo::internal::Pointer<::mojo_base::mojom::internal::Time_Data> expiry;
  mojo::internal::Pointer<::mojo_base::mojom::internal::Time_Data> last_access;
  uint8_t secure : 1;
  uint8_t httponly : 1;
  uint8_t pad8_[3];
  int32_t site_restrictions;
  int32_t priority;
  uint8_t padfinal_[4];

 private:
  CanonicalCookie_Data();
  ~CanonicalCookie_Data() = delete;
};
static_assert(sizeof(CanonicalCookie_Data) == 80,
              "Bad sizeof(CanonicalCookie_Data)");
// Used by CanonicalCookie::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct CanonicalCookie_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  CanonicalCookie_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~CanonicalCookie_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    CanonicalCookie_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    CanonicalCookie_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  CookieDeletionFilter_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CookieDeletionFilter_Data));
      new (data()) CookieDeletionFilter_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CookieDeletionFilter_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CookieDeletionFilter_Data>(index_);
    }
    CookieDeletionFilter_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::Time_Data> created_after_time;
  mojo::internal::Pointer<::mojo_base::mojom::internal::Time_Data> created_before_time;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<mojo::internal::String_Data>>> excluding_domains;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<mojo::internal::String_Data>>> including_domains;
  mojo::internal::Pointer<mojo::internal::String_Data> cookie_name;
  mojo::internal::Pointer<mojo::internal::String_Data> host_name;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> url;
  int32_t session_control;
  uint8_t padfinal_[4];

 private:
  CookieDeletionFilter_Data();
  ~CookieDeletionFilter_Data() = delete;
};
static_assert(sizeof(CookieDeletionFilter_Data) == 72,
              "Bad sizeof(CookieDeletionFilter_Data)");
// Used by CookieDeletionFilter::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct CookieDeletionFilter_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  CookieDeletionFilter_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~CookieDeletionFilter_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    CookieDeletionFilter_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    CookieDeletionFilter_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  CookieChangeListener_OnCookieChange_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CookieChangeListener_OnCookieChange_Params_Data));
      new (data()) CookieChangeListener_OnCookieChange_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CookieChangeListener_OnCookieChange_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CookieChangeListener_OnCookieChange_Params_Data>(index_);
    }
    CookieChangeListener_OnCookieChange_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::CanonicalCookie_Data> cookie;
  int32_t cause;
  uint8_t padfinal_[4];

 private:
  CookieChangeListener_OnCookieChange_Params_Data();
  ~CookieChangeListener_OnCookieChange_Params_Data() = delete;
};
static_assert(sizeof(CookieChangeListener_OnCookieChange_Params_Data) == 24,
              "Bad sizeof(CookieChangeListener_OnCookieChange_Params_Data)");
class  CookieManager_GetAllCookies_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CookieManager_GetAllCookies_Params_Data));
      new (data()) CookieManager_GetAllCookies_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CookieManager_GetAllCookies_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CookieManager_GetAllCookies_Params_Data>(index_);
    }
    CookieManager_GetAllCookies_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  CookieManager_GetAllCookies_Params_Data();
  ~CookieManager_GetAllCookies_Params_Data() = delete;
};
static_assert(sizeof(CookieManager_GetAllCookies_Params_Data) == 8,
              "Bad sizeof(CookieManager_GetAllCookies_Params_Data)");
class  CookieManager_GetAllCookies_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CookieManager_GetAllCookies_ResponseParams_Data));
      new (data()) CookieManager_GetAllCookies_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CookieManager_GetAllCookies_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CookieManager_GetAllCookies_ResponseParams_Data>(index_);
    }
    CookieManager_GetAllCookies_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::CanonicalCookie_Data>>> cookies;

 private:
  CookieManager_GetAllCookies_ResponseParams_Data();
  ~CookieManager_GetAllCookies_ResponseParams_Data() = delete;
};
static_assert(sizeof(CookieManager_GetAllCookies_ResponseParams_Data) == 16,
              "Bad sizeof(CookieManager_GetAllCookies_ResponseParams_Data)");
class  CookieManager_GetCookieList_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CookieManager_GetCookieList_Params_Data));
      new (data()) CookieManager_GetCookieList_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CookieManager_GetCookieList_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CookieManager_GetCookieList_Params_Data>(index_);
    }
    CookieManager_GetCookieList_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> url;
  mojo::internal::Pointer<internal::CookieOptions_Data> cookie_options;

 private:
  CookieManager_GetCookieList_Params_Data();
  ~CookieManager_GetCookieList_Params_Data() = delete;
};
static_assert(sizeof(CookieManager_GetCookieList_Params_Data) == 24,
              "Bad sizeof(CookieManager_GetCookieList_Params_Data)");
class  CookieManager_GetCookieList_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CookieManager_GetCookieList_ResponseParams_Data));
      new (data()) CookieManager_GetCookieList_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CookieManager_GetCookieList_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CookieManager_GetCookieList_ResponseParams_Data>(index_);
    }
    CookieManager_GetCookieList_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::CanonicalCookie_Data>>> cookies;

 private:
  CookieManager_GetCookieList_ResponseParams_Data();
  ~CookieManager_GetCookieList_ResponseParams_Data() = delete;
};
static_assert(sizeof(CookieManager_GetCookieList_ResponseParams_Data) == 16,
              "Bad sizeof(CookieManager_GetCookieList_ResponseParams_Data)");
class  CookieManager_SetCanonicalCookie_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CookieManager_SetCanonicalCookie_Params_Data));
      new (data()) CookieManager_SetCanonicalCookie_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CookieManager_SetCanonicalCookie_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CookieManager_SetCanonicalCookie_Params_Data>(index_);
    }
    CookieManager_SetCanonicalCookie_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::CanonicalCookie_Data> cookie;
  uint8_t secure_source : 1;
  uint8_t modify_http_only : 1;
  uint8_t padfinal_[7];

 private:
  CookieManager_SetCanonicalCookie_Params_Data();
  ~CookieManager_SetCanonicalCookie_Params_Data() = delete;
};
static_assert(sizeof(CookieManager_SetCanonicalCookie_Params_Data) == 24,
              "Bad sizeof(CookieManager_SetCanonicalCookie_Params_Data)");
class  CookieManager_SetCanonicalCookie_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CookieManager_SetCanonicalCookie_ResponseParams_Data));
      new (data()) CookieManager_SetCanonicalCookie_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CookieManager_SetCanonicalCookie_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CookieManager_SetCanonicalCookie_ResponseParams_Data>(index_);
    }
    CookieManager_SetCanonicalCookie_ResponseParams_Data* operator->() { return data(); }

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
  CookieManager_SetCanonicalCookie_ResponseParams_Data();
  ~CookieManager_SetCanonicalCookie_ResponseParams_Data() = delete;
};
static_assert(sizeof(CookieManager_SetCanonicalCookie_ResponseParams_Data) == 16,
              "Bad sizeof(CookieManager_SetCanonicalCookie_ResponseParams_Data)");
class  CookieManager_DeleteCookies_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CookieManager_DeleteCookies_Params_Data));
      new (data()) CookieManager_DeleteCookies_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CookieManager_DeleteCookies_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CookieManager_DeleteCookies_Params_Data>(index_);
    }
    CookieManager_DeleteCookies_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::CookieDeletionFilter_Data> filter;

 private:
  CookieManager_DeleteCookies_Params_Data();
  ~CookieManager_DeleteCookies_Params_Data() = delete;
};
static_assert(sizeof(CookieManager_DeleteCookies_Params_Data) == 16,
              "Bad sizeof(CookieManager_DeleteCookies_Params_Data)");
class  CookieManager_DeleteCookies_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CookieManager_DeleteCookies_ResponseParams_Data));
      new (data()) CookieManager_DeleteCookies_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CookieManager_DeleteCookies_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CookieManager_DeleteCookies_ResponseParams_Data>(index_);
    }
    CookieManager_DeleteCookies_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t num_deleted;
  uint8_t padfinal_[4];

 private:
  CookieManager_DeleteCookies_ResponseParams_Data();
  ~CookieManager_DeleteCookies_ResponseParams_Data() = delete;
};
static_assert(sizeof(CookieManager_DeleteCookies_ResponseParams_Data) == 16,
              "Bad sizeof(CookieManager_DeleteCookies_ResponseParams_Data)");
class  CookieManager_AddCookieChangeListener_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CookieManager_AddCookieChangeListener_Params_Data));
      new (data()) CookieManager_AddCookieChangeListener_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CookieManager_AddCookieChangeListener_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CookieManager_AddCookieChangeListener_Params_Data>(index_);
    }
    CookieManager_AddCookieChangeListener_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> url;
  mojo::internal::Pointer<mojo::internal::String_Data> name;
  mojo::internal::Interface_Data listener;

 private:
  CookieManager_AddCookieChangeListener_Params_Data();
  ~CookieManager_AddCookieChangeListener_Params_Data() = delete;
};
static_assert(sizeof(CookieManager_AddCookieChangeListener_Params_Data) == 32,
              "Bad sizeof(CookieManager_AddCookieChangeListener_Params_Data)");
class  CookieManager_AddGlobalChangeListener_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CookieManager_AddGlobalChangeListener_Params_Data));
      new (data()) CookieManager_AddGlobalChangeListener_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CookieManager_AddGlobalChangeListener_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CookieManager_AddGlobalChangeListener_Params_Data>(index_);
    }
    CookieManager_AddGlobalChangeListener_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Interface_Data notification_pointer;

 private:
  CookieManager_AddGlobalChangeListener_Params_Data();
  ~CookieManager_AddGlobalChangeListener_Params_Data() = delete;
};
static_assert(sizeof(CookieManager_AddGlobalChangeListener_Params_Data) == 16,
              "Bad sizeof(CookieManager_AddGlobalChangeListener_Params_Data)");
class  CookieManager_CloneInterface_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CookieManager_CloneInterface_Params_Data));
      new (data()) CookieManager_CloneInterface_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CookieManager_CloneInterface_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CookieManager_CloneInterface_Params_Data>(index_);
    }
    CookieManager_CloneInterface_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data new_interface;
  uint8_t padfinal_[4];

 private:
  CookieManager_CloneInterface_Params_Data();
  ~CookieManager_CloneInterface_Params_Data() = delete;
};
static_assert(sizeof(CookieManager_CloneInterface_Params_Data) == 16,
              "Bad sizeof(CookieManager_CloneInterface_Params_Data)");
class  CookieManager_FlushCookieStore_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CookieManager_FlushCookieStore_Params_Data));
      new (data()) CookieManager_FlushCookieStore_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CookieManager_FlushCookieStore_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CookieManager_FlushCookieStore_Params_Data>(index_);
    }
    CookieManager_FlushCookieStore_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  CookieManager_FlushCookieStore_Params_Data();
  ~CookieManager_FlushCookieStore_Params_Data() = delete;
};
static_assert(sizeof(CookieManager_FlushCookieStore_Params_Data) == 8,
              "Bad sizeof(CookieManager_FlushCookieStore_Params_Data)");
class  CookieManager_FlushCookieStore_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CookieManager_FlushCookieStore_ResponseParams_Data));
      new (data()) CookieManager_FlushCookieStore_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CookieManager_FlushCookieStore_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CookieManager_FlushCookieStore_ResponseParams_Data>(index_);
    }
    CookieManager_FlushCookieStore_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  CookieManager_FlushCookieStore_ResponseParams_Data();
  ~CookieManager_FlushCookieStore_ResponseParams_Data() = delete;
};
static_assert(sizeof(CookieManager_FlushCookieStore_ResponseParams_Data) == 8,
              "Bad sizeof(CookieManager_FlushCookieStore_ResponseParams_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_COOKIE_MANAGER_MOJOM_SHARED_INTERNAL_H_