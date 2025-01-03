// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_PAYMENTS_MOJOM_PAYMENT_REQUEST_DATA_MOJOM_SHARED_INTERNAL_H_
#define COMPONENTS_PAYMENTS_MOJOM_PAYMENT_REQUEST_DATA_MOJOM_SHARED_INTERNAL_H_

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
namespace payments {
namespace mojom {
namespace internal {
class PaymentAddress_Data;
class PaymentCurrencyAmount_Data;

#pragma pack(push, 1)
class  PaymentAddress_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PaymentAddress_Data));
      new (data()) PaymentAddress_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PaymentAddress_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PaymentAddress_Data>(index_);
    }
    PaymentAddress_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> country;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<mojo::internal::String_Data>>> address_line;
  mojo::internal::Pointer<mojo::internal::String_Data> region;
  mojo::internal::Pointer<mojo::internal::String_Data> city;
  mojo::internal::Pointer<mojo::internal::String_Data> dependent_locality;
  mojo::internal::Pointer<mojo::internal::String_Data> postal_code;
  mojo::internal::Pointer<mojo::internal::String_Data> sorting_code;
  mojo::internal::Pointer<mojo::internal::String_Data> language_code;
  mojo::internal::Pointer<mojo::internal::String_Data> script_code;
  mojo::internal::Pointer<mojo::internal::String_Data> organization;
  mojo::internal::Pointer<mojo::internal::String_Data> recipient;
  mojo::internal::Pointer<mojo::internal::String_Data> phone;

 private:
  PaymentAddress_Data();
  ~PaymentAddress_Data() = delete;
};
static_assert(sizeof(PaymentAddress_Data) == 104,
              "Bad sizeof(PaymentAddress_Data)");
// Used by PaymentAddress::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct PaymentAddress_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  PaymentAddress_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~PaymentAddress_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    PaymentAddress_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    PaymentAddress_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  PaymentCurrencyAmount_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PaymentCurrencyAmount_Data));
      new (data()) PaymentCurrencyAmount_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PaymentCurrencyAmount_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PaymentCurrencyAmount_Data>(index_);
    }
    PaymentCurrencyAmount_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> currency;
  mojo::internal::Pointer<mojo::internal::String_Data> value;

 private:
  PaymentCurrencyAmount_Data();
  ~PaymentCurrencyAmount_Data() = delete;
};
static_assert(sizeof(PaymentCurrencyAmount_Data) == 24,
              "Bad sizeof(PaymentCurrencyAmount_Data)");
// Used by PaymentCurrencyAmount::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct PaymentCurrencyAmount_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  PaymentCurrencyAmount_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~PaymentCurrencyAmount_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    PaymentCurrencyAmount_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    PaymentCurrencyAmount_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace payments

#endif  // COMPONENTS_PAYMENTS_MOJOM_PAYMENT_REQUEST_DATA_MOJOM_SHARED_INTERNAL_H_