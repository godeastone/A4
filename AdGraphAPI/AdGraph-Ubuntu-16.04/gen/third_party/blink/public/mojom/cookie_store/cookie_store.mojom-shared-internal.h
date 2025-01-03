// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_COOKIE_STORE_COOKIE_STORE_MOJOM_SHARED_INTERNAL_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_COOKIE_STORE_COOKIE_STORE_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "services/network/public/mojom/restricted_cookie_manager.mojom-shared-internal.h"
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
class CookieChangeSubscription_Data;

#pragma pack(push, 1)
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) CookieChangeSubscription_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CookieChangeSubscription_Data));
      new (data()) CookieChangeSubscription_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CookieChangeSubscription_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CookieChangeSubscription_Data>(index_);
    }
    CookieChangeSubscription_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> url;
  int32_t match_type;
  uint8_t pad1_[4];
  mojo::internal::Pointer<mojo::internal::String_Data> name;

 private:
  CookieChangeSubscription_Data();
  ~CookieChangeSubscription_Data() = delete;
};
static_assert(sizeof(CookieChangeSubscription_Data) == 32,
              "Bad sizeof(CookieChangeSubscription_Data)");
// Used by CookieChangeSubscription::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct CookieChangeSubscription_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  CookieChangeSubscription_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~CookieChangeSubscription_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    CookieChangeSubscription_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    CookieChangeSubscription_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) CookieStore_AppendSubscriptions_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CookieStore_AppendSubscriptions_Params_Data));
      new (data()) CookieStore_AppendSubscriptions_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CookieStore_AppendSubscriptions_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CookieStore_AppendSubscriptions_Params_Data>(index_);
    }
    CookieStore_AppendSubscriptions_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int64_t service_worker_registration_id;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::CookieChangeSubscription_Data>>> subscriptions;

 private:
  CookieStore_AppendSubscriptions_Params_Data();
  ~CookieStore_AppendSubscriptions_Params_Data() = delete;
};
static_assert(sizeof(CookieStore_AppendSubscriptions_Params_Data) == 24,
              "Bad sizeof(CookieStore_AppendSubscriptions_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) CookieStore_AppendSubscriptions_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CookieStore_AppendSubscriptions_ResponseParams_Data));
      new (data()) CookieStore_AppendSubscriptions_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CookieStore_AppendSubscriptions_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CookieStore_AppendSubscriptions_ResponseParams_Data>(index_);
    }
    CookieStore_AppendSubscriptions_ResponseParams_Data* operator->() { return data(); }

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
  CookieStore_AppendSubscriptions_ResponseParams_Data();
  ~CookieStore_AppendSubscriptions_ResponseParams_Data() = delete;
};
static_assert(sizeof(CookieStore_AppendSubscriptions_ResponseParams_Data) == 16,
              "Bad sizeof(CookieStore_AppendSubscriptions_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) CookieStore_GetSubscriptions_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CookieStore_GetSubscriptions_Params_Data));
      new (data()) CookieStore_GetSubscriptions_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CookieStore_GetSubscriptions_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CookieStore_GetSubscriptions_Params_Data>(index_);
    }
    CookieStore_GetSubscriptions_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int64_t service_worker_registration_id;

 private:
  CookieStore_GetSubscriptions_Params_Data();
  ~CookieStore_GetSubscriptions_Params_Data() = delete;
};
static_assert(sizeof(CookieStore_GetSubscriptions_Params_Data) == 16,
              "Bad sizeof(CookieStore_GetSubscriptions_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) CookieStore_GetSubscriptions_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CookieStore_GetSubscriptions_ResponseParams_Data));
      new (data()) CookieStore_GetSubscriptions_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CookieStore_GetSubscriptions_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CookieStore_GetSubscriptions_ResponseParams_Data>(index_);
    }
    CookieStore_GetSubscriptions_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::CookieChangeSubscription_Data>>> subscriptions;
  uint8_t success : 1;
  uint8_t padfinal_[7];

 private:
  CookieStore_GetSubscriptions_ResponseParams_Data();
  ~CookieStore_GetSubscriptions_ResponseParams_Data() = delete;
};
static_assert(sizeof(CookieStore_GetSubscriptions_ResponseParams_Data) == 24,
              "Bad sizeof(CookieStore_GetSubscriptions_ResponseParams_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_COOKIE_STORE_COOKIE_STORE_MOJOM_SHARED_INTERNAL_H_