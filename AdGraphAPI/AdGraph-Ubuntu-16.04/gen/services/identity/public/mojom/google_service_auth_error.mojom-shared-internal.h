// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_IDENTITY_PUBLIC_MOJOM_GOOGLE_SERVICE_AUTH_ERROR_MOJOM_SHARED_INTERNAL_H_
#define SERVICES_IDENTITY_PUBLIC_MOJOM_GOOGLE_SERVICE_AUTH_ERROR_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "url/mojom/url.mojom-shared-internal.h"
#include "mojo/public/cpp/bindings/lib/native_enum_data.h"
#include "mojo/public/interfaces/bindings/native_struct.mojom-shared-internal.h"

namespace mojo {
namespace internal {
class ValidationContext;
}
}
namespace identity {
namespace mojom {
namespace internal {
class Captcha_Data;
class SecondFactor_Data;
class GoogleServiceAuthError_Data;

#pragma pack(push, 1)
class  Captcha_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Captcha_Data));
      new (data()) Captcha_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Captcha_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Captcha_Data>(index_);
    }
    Captcha_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> token;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> audio_url;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> image_url;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> unlock_url;
  int32_t image_width;
  int32_t image_height;

 private:
  Captcha_Data();
  ~Captcha_Data() = delete;
};
static_assert(sizeof(Captcha_Data) == 48,
              "Bad sizeof(Captcha_Data)");
// Used by Captcha::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct Captcha_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  Captcha_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~Captcha_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    Captcha_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    Captcha_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  SecondFactor_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SecondFactor_Data));
      new (data()) SecondFactor_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SecondFactor_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SecondFactor_Data>(index_);
    }
    SecondFactor_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> token;
  mojo::internal::Pointer<mojo::internal::String_Data> prompt_text;
  mojo::internal::Pointer<mojo::internal::String_Data> alternate_text;
  int32_t field_length;
  uint8_t padfinal_[4];

 private:
  SecondFactor_Data();
  ~SecondFactor_Data() = delete;
};
static_assert(sizeof(SecondFactor_Data) == 40,
              "Bad sizeof(SecondFactor_Data)");
// Used by SecondFactor::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct SecondFactor_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  SecondFactor_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~SecondFactor_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    SecondFactor_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    SecondFactor_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  GoogleServiceAuthError_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(GoogleServiceAuthError_Data));
      new (data()) GoogleServiceAuthError_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    GoogleServiceAuthError_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<GoogleServiceAuthError_Data>(index_);
    }
    GoogleServiceAuthError_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t state;
  int32_t network_error;
  mojo::internal::Pointer<internal::Captcha_Data> captcha;
  mojo::internal::Pointer<internal::SecondFactor_Data> second_factor;
  mojo::internal::Pointer<mojo::internal::String_Data> error_message;

 private:
  GoogleServiceAuthError_Data();
  ~GoogleServiceAuthError_Data() = delete;
};
static_assert(sizeof(GoogleServiceAuthError_Data) == 40,
              "Bad sizeof(GoogleServiceAuthError_Data)");
// Used by GoogleServiceAuthError::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct GoogleServiceAuthError_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  GoogleServiceAuthError_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~GoogleServiceAuthError_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    GoogleServiceAuthError_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    GoogleServiceAuthError_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace identity

#endif  // SERVICES_IDENTITY_PUBLIC_MOJOM_GOOGLE_SERVICE_AUTH_ERROR_MOJOM_SHARED_INTERNAL_H_