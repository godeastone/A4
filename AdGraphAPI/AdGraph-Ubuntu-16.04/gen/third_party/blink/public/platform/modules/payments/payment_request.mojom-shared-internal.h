// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_PAYMENTS_PAYMENT_REQUEST_MOJOM_SHARED_INTERNAL_H_
#define THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_PAYMENTS_PAYMENT_REQUEST_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "components/payments/mojom/payment_request_data.mojom-shared-internal.h"
#include "mojo/public/cpp/bindings/lib/native_enum_data.h"
#include "mojo/public/interfaces/bindings/native_struct.mojom-shared-internal.h"
#include "base/component_export.h"

namespace mojo {
namespace internal {
class ValidationContext;
}
}
namespace payments {
namespace mojom {
namespace internal {
class PaymentResponse_Data;
class PaymentItem_Data;
class PaymentShippingOption_Data;
class AndroidPayTokenizationParameter_Data;
class PaymentMethodData_Data;
class PaymentDetailsModifier_Data;
class PaymentDetails_Data;
class PaymentOptions_Data;

struct PaymentErrorReason_Data {
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

struct CanMakePaymentQueryResult_Data {
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

struct AndroidPayEnvironment_Data {
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

struct AndroidPayCardNetwork_Data {
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

struct AndroidPayTokenization_Data {
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

struct BasicCardNetwork_Data {
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

struct BasicCardType_Data {
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

struct PaymentShippingType_Data {
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

struct PaymentComplete_Data {
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
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) PaymentResponse_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PaymentResponse_Data));
      new (data()) PaymentResponse_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PaymentResponse_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PaymentResponse_Data>(index_);
    }
    PaymentResponse_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> method_name;
  mojo::internal::Pointer<mojo::internal::String_Data> stringified_details;
  mojo::internal::Pointer<::payments::mojom::internal::PaymentAddress_Data> shipping_address;
  mojo::internal::Pointer<mojo::internal::String_Data> shipping_option;
  mojo::internal::Pointer<mojo::internal::String_Data> payer_name;
  mojo::internal::Pointer<mojo::internal::String_Data> payer_email;
  mojo::internal::Pointer<mojo::internal::String_Data> payer_phone;

 private:
  PaymentResponse_Data();
  ~PaymentResponse_Data() = delete;
};
static_assert(sizeof(PaymentResponse_Data) == 64,
              "Bad sizeof(PaymentResponse_Data)");
// Used by PaymentResponse::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct PaymentResponse_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  PaymentResponse_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~PaymentResponse_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    PaymentResponse_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    PaymentResponse_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) PaymentItem_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PaymentItem_Data));
      new (data()) PaymentItem_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PaymentItem_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PaymentItem_Data>(index_);
    }
    PaymentItem_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> label;
  mojo::internal::Pointer<::payments::mojom::internal::PaymentCurrencyAmount_Data> amount;
  uint8_t pending : 1;
  uint8_t padfinal_[7];

 private:
  PaymentItem_Data();
  ~PaymentItem_Data() = delete;
};
static_assert(sizeof(PaymentItem_Data) == 32,
              "Bad sizeof(PaymentItem_Data)");
// Used by PaymentItem::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct PaymentItem_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  PaymentItem_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~PaymentItem_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    PaymentItem_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    PaymentItem_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) PaymentShippingOption_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PaymentShippingOption_Data));
      new (data()) PaymentShippingOption_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PaymentShippingOption_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PaymentShippingOption_Data>(index_);
    }
    PaymentShippingOption_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> id;
  mojo::internal::Pointer<mojo::internal::String_Data> label;
  mojo::internal::Pointer<::payments::mojom::internal::PaymentCurrencyAmount_Data> amount;
  uint8_t selected : 1;
  uint8_t padfinal_[7];

 private:
  PaymentShippingOption_Data();
  ~PaymentShippingOption_Data() = delete;
};
static_assert(sizeof(PaymentShippingOption_Data) == 40,
              "Bad sizeof(PaymentShippingOption_Data)");
// Used by PaymentShippingOption::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct PaymentShippingOption_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  PaymentShippingOption_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~PaymentShippingOption_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    PaymentShippingOption_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    PaymentShippingOption_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) AndroidPayTokenizationParameter_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(AndroidPayTokenizationParameter_Data));
      new (data()) AndroidPayTokenizationParameter_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    AndroidPayTokenizationParameter_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<AndroidPayTokenizationParameter_Data>(index_);
    }
    AndroidPayTokenizationParameter_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> key;
  mojo::internal::Pointer<mojo::internal::String_Data> value;

 private:
  AndroidPayTokenizationParameter_Data();
  ~AndroidPayTokenizationParameter_Data() = delete;
};
static_assert(sizeof(AndroidPayTokenizationParameter_Data) == 24,
              "Bad sizeof(AndroidPayTokenizationParameter_Data)");
// Used by AndroidPayTokenizationParameter::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct AndroidPayTokenizationParameter_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  AndroidPayTokenizationParameter_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~AndroidPayTokenizationParameter_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    AndroidPayTokenizationParameter_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    AndroidPayTokenizationParameter_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) PaymentMethodData_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PaymentMethodData_Data));
      new (data()) PaymentMethodData_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PaymentMethodData_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PaymentMethodData_Data>(index_);
    }
    PaymentMethodData_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<mojo::internal::String_Data>>> supported_methods;
  mojo::internal::Pointer<mojo::internal::String_Data> stringified_data;
  int32_t environment;
  int32_t tokenization_type;
  mojo::internal::Pointer<mojo::internal::String_Data> merchant_name;
  mojo::internal::Pointer<mojo::internal::String_Data> merchant_id;
  mojo::internal::Pointer<mojo::internal::Array_Data<int32_t>> allowed_card_networks;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::AndroidPayTokenizationParameter_Data>>> parameters;
  int32_t min_google_play_services_version;
  int32_t api_version;
  mojo::internal::Pointer<mojo::internal::Array_Data<int32_t>> supported_networks;
  mojo::internal::Pointer<mojo::internal::Array_Data<int32_t>> supported_types;

 private:
  PaymentMethodData_Data();
  ~PaymentMethodData_Data() = delete;
};
static_assert(sizeof(PaymentMethodData_Data) == 88,
              "Bad sizeof(PaymentMethodData_Data)");
// Used by PaymentMethodData::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct PaymentMethodData_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  PaymentMethodData_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~PaymentMethodData_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    PaymentMethodData_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    PaymentMethodData_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) PaymentDetailsModifier_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PaymentDetailsModifier_Data));
      new (data()) PaymentDetailsModifier_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PaymentDetailsModifier_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PaymentDetailsModifier_Data>(index_);
    }
    PaymentDetailsModifier_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::PaymentItem_Data> total;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::PaymentItem_Data>>> additional_display_items;
  mojo::internal::Pointer<internal::PaymentMethodData_Data> method_data;

 private:
  PaymentDetailsModifier_Data();
  ~PaymentDetailsModifier_Data() = delete;
};
static_assert(sizeof(PaymentDetailsModifier_Data) == 32,
              "Bad sizeof(PaymentDetailsModifier_Data)");
// Used by PaymentDetailsModifier::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct PaymentDetailsModifier_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  PaymentDetailsModifier_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~PaymentDetailsModifier_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    PaymentDetailsModifier_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    PaymentDetailsModifier_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) PaymentDetails_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PaymentDetails_Data));
      new (data()) PaymentDetails_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PaymentDetails_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PaymentDetails_Data>(index_);
    }
    PaymentDetails_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::PaymentItem_Data> total;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::PaymentItem_Data>>> display_items;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::PaymentShippingOption_Data>>> shipping_options;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::PaymentDetailsModifier_Data>>> modifiers;
  mojo::internal::Pointer<mojo::internal::String_Data> error;
  mojo::internal::Pointer<mojo::internal::String_Data> id;

 private:
  PaymentDetails_Data();
  ~PaymentDetails_Data() = delete;
};
static_assert(sizeof(PaymentDetails_Data) == 56,
              "Bad sizeof(PaymentDetails_Data)");
// Used by PaymentDetails::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct PaymentDetails_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  PaymentDetails_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~PaymentDetails_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    PaymentDetails_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    PaymentDetails_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) PaymentOptions_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PaymentOptions_Data));
      new (data()) PaymentOptions_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PaymentOptions_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PaymentOptions_Data>(index_);
    }
    PaymentOptions_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t request_payer_name : 1;
  uint8_t request_payer_email : 1;
  uint8_t request_payer_phone : 1;
  uint8_t request_shipping : 1;
  uint8_t pad3_[3];
  int32_t shipping_type;

 private:
  PaymentOptions_Data();
  ~PaymentOptions_Data() = delete;
};
static_assert(sizeof(PaymentOptions_Data) == 16,
              "Bad sizeof(PaymentOptions_Data)");
// Used by PaymentOptions::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct PaymentOptions_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  PaymentOptions_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~PaymentOptions_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    PaymentOptions_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    PaymentOptions_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) PaymentRequestClient_OnShippingAddressChange_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PaymentRequestClient_OnShippingAddressChange_Params_Data));
      new (data()) PaymentRequestClient_OnShippingAddressChange_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PaymentRequestClient_OnShippingAddressChange_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PaymentRequestClient_OnShippingAddressChange_Params_Data>(index_);
    }
    PaymentRequestClient_OnShippingAddressChange_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::payments::mojom::internal::PaymentAddress_Data> address;

 private:
  PaymentRequestClient_OnShippingAddressChange_Params_Data();
  ~PaymentRequestClient_OnShippingAddressChange_Params_Data() = delete;
};
static_assert(sizeof(PaymentRequestClient_OnShippingAddressChange_Params_Data) == 16,
              "Bad sizeof(PaymentRequestClient_OnShippingAddressChange_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) PaymentRequestClient_OnShippingOptionChange_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PaymentRequestClient_OnShippingOptionChange_Params_Data));
      new (data()) PaymentRequestClient_OnShippingOptionChange_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PaymentRequestClient_OnShippingOptionChange_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PaymentRequestClient_OnShippingOptionChange_Params_Data>(index_);
    }
    PaymentRequestClient_OnShippingOptionChange_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> shipping_option_id;

 private:
  PaymentRequestClient_OnShippingOptionChange_Params_Data();
  ~PaymentRequestClient_OnShippingOptionChange_Params_Data() = delete;
};
static_assert(sizeof(PaymentRequestClient_OnShippingOptionChange_Params_Data) == 16,
              "Bad sizeof(PaymentRequestClient_OnShippingOptionChange_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) PaymentRequestClient_OnPaymentResponse_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PaymentRequestClient_OnPaymentResponse_Params_Data));
      new (data()) PaymentRequestClient_OnPaymentResponse_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PaymentRequestClient_OnPaymentResponse_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PaymentRequestClient_OnPaymentResponse_Params_Data>(index_);
    }
    PaymentRequestClient_OnPaymentResponse_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::PaymentResponse_Data> response;

 private:
  PaymentRequestClient_OnPaymentResponse_Params_Data();
  ~PaymentRequestClient_OnPaymentResponse_Params_Data() = delete;
};
static_assert(sizeof(PaymentRequestClient_OnPaymentResponse_Params_Data) == 16,
              "Bad sizeof(PaymentRequestClient_OnPaymentResponse_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) PaymentRequestClient_OnError_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PaymentRequestClient_OnError_Params_Data));
      new (data()) PaymentRequestClient_OnError_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PaymentRequestClient_OnError_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PaymentRequestClient_OnError_Params_Data>(index_);
    }
    PaymentRequestClient_OnError_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t error;
  uint8_t padfinal_[4];

 private:
  PaymentRequestClient_OnError_Params_Data();
  ~PaymentRequestClient_OnError_Params_Data() = delete;
};
static_assert(sizeof(PaymentRequestClient_OnError_Params_Data) == 16,
              "Bad sizeof(PaymentRequestClient_OnError_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) PaymentRequestClient_OnComplete_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PaymentRequestClient_OnComplete_Params_Data));
      new (data()) PaymentRequestClient_OnComplete_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PaymentRequestClient_OnComplete_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PaymentRequestClient_OnComplete_Params_Data>(index_);
    }
    PaymentRequestClient_OnComplete_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  PaymentRequestClient_OnComplete_Params_Data();
  ~PaymentRequestClient_OnComplete_Params_Data() = delete;
};
static_assert(sizeof(PaymentRequestClient_OnComplete_Params_Data) == 8,
              "Bad sizeof(PaymentRequestClient_OnComplete_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) PaymentRequestClient_OnAbort_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PaymentRequestClient_OnAbort_Params_Data));
      new (data()) PaymentRequestClient_OnAbort_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PaymentRequestClient_OnAbort_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PaymentRequestClient_OnAbort_Params_Data>(index_);
    }
    PaymentRequestClient_OnAbort_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t aborted_successfully : 1;
  uint8_t padfinal_[7];

 private:
  PaymentRequestClient_OnAbort_Params_Data();
  ~PaymentRequestClient_OnAbort_Params_Data() = delete;
};
static_assert(sizeof(PaymentRequestClient_OnAbort_Params_Data) == 16,
              "Bad sizeof(PaymentRequestClient_OnAbort_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) PaymentRequestClient_OnCanMakePayment_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PaymentRequestClient_OnCanMakePayment_Params_Data));
      new (data()) PaymentRequestClient_OnCanMakePayment_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PaymentRequestClient_OnCanMakePayment_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PaymentRequestClient_OnCanMakePayment_Params_Data>(index_);
    }
    PaymentRequestClient_OnCanMakePayment_Params_Data* operator->() { return data(); }

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
  PaymentRequestClient_OnCanMakePayment_Params_Data();
  ~PaymentRequestClient_OnCanMakePayment_Params_Data() = delete;
};
static_assert(sizeof(PaymentRequestClient_OnCanMakePayment_Params_Data) == 16,
              "Bad sizeof(PaymentRequestClient_OnCanMakePayment_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) PaymentRequestClient_WarnNoFavicon_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PaymentRequestClient_WarnNoFavicon_Params_Data));
      new (data()) PaymentRequestClient_WarnNoFavicon_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PaymentRequestClient_WarnNoFavicon_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PaymentRequestClient_WarnNoFavicon_Params_Data>(index_);
    }
    PaymentRequestClient_WarnNoFavicon_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  PaymentRequestClient_WarnNoFavicon_Params_Data();
  ~PaymentRequestClient_WarnNoFavicon_Params_Data() = delete;
};
static_assert(sizeof(PaymentRequestClient_WarnNoFavicon_Params_Data) == 8,
              "Bad sizeof(PaymentRequestClient_WarnNoFavicon_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) PaymentRequest_Init_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PaymentRequest_Init_Params_Data));
      new (data()) PaymentRequest_Init_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PaymentRequest_Init_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PaymentRequest_Init_Params_Data>(index_);
    }
    PaymentRequest_Init_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Interface_Data client;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::PaymentMethodData_Data>>> method_data;
  mojo::internal::Pointer<internal::PaymentDetails_Data> details;
  mojo::internal::Pointer<internal::PaymentOptions_Data> options;

 private:
  PaymentRequest_Init_Params_Data();
  ~PaymentRequest_Init_Params_Data() = delete;
};
static_assert(sizeof(PaymentRequest_Init_Params_Data) == 40,
              "Bad sizeof(PaymentRequest_Init_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) PaymentRequest_Show_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PaymentRequest_Show_Params_Data));
      new (data()) PaymentRequest_Show_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PaymentRequest_Show_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PaymentRequest_Show_Params_Data>(index_);
    }
    PaymentRequest_Show_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t is_user_gesture : 1;
  uint8_t padfinal_[7];

 private:
  PaymentRequest_Show_Params_Data();
  ~PaymentRequest_Show_Params_Data() = delete;
};
static_assert(sizeof(PaymentRequest_Show_Params_Data) == 16,
              "Bad sizeof(PaymentRequest_Show_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) PaymentRequest_UpdateWith_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PaymentRequest_UpdateWith_Params_Data));
      new (data()) PaymentRequest_UpdateWith_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PaymentRequest_UpdateWith_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PaymentRequest_UpdateWith_Params_Data>(index_);
    }
    PaymentRequest_UpdateWith_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::PaymentDetails_Data> details;

 private:
  PaymentRequest_UpdateWith_Params_Data();
  ~PaymentRequest_UpdateWith_Params_Data() = delete;
};
static_assert(sizeof(PaymentRequest_UpdateWith_Params_Data) == 16,
              "Bad sizeof(PaymentRequest_UpdateWith_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) PaymentRequest_NoUpdatedPaymentDetails_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PaymentRequest_NoUpdatedPaymentDetails_Params_Data));
      new (data()) PaymentRequest_NoUpdatedPaymentDetails_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PaymentRequest_NoUpdatedPaymentDetails_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PaymentRequest_NoUpdatedPaymentDetails_Params_Data>(index_);
    }
    PaymentRequest_NoUpdatedPaymentDetails_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  PaymentRequest_NoUpdatedPaymentDetails_Params_Data();
  ~PaymentRequest_NoUpdatedPaymentDetails_Params_Data() = delete;
};
static_assert(sizeof(PaymentRequest_NoUpdatedPaymentDetails_Params_Data) == 8,
              "Bad sizeof(PaymentRequest_NoUpdatedPaymentDetails_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) PaymentRequest_Abort_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PaymentRequest_Abort_Params_Data));
      new (data()) PaymentRequest_Abort_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PaymentRequest_Abort_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PaymentRequest_Abort_Params_Data>(index_);
    }
    PaymentRequest_Abort_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  PaymentRequest_Abort_Params_Data();
  ~PaymentRequest_Abort_Params_Data() = delete;
};
static_assert(sizeof(PaymentRequest_Abort_Params_Data) == 8,
              "Bad sizeof(PaymentRequest_Abort_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) PaymentRequest_Complete_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PaymentRequest_Complete_Params_Data));
      new (data()) PaymentRequest_Complete_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PaymentRequest_Complete_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PaymentRequest_Complete_Params_Data>(index_);
    }
    PaymentRequest_Complete_Params_Data* operator->() { return data(); }

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
  PaymentRequest_Complete_Params_Data();
  ~PaymentRequest_Complete_Params_Data() = delete;
};
static_assert(sizeof(PaymentRequest_Complete_Params_Data) == 16,
              "Bad sizeof(PaymentRequest_Complete_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) PaymentRequest_CanMakePayment_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PaymentRequest_CanMakePayment_Params_Data));
      new (data()) PaymentRequest_CanMakePayment_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PaymentRequest_CanMakePayment_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PaymentRequest_CanMakePayment_Params_Data>(index_);
    }
    PaymentRequest_CanMakePayment_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  PaymentRequest_CanMakePayment_Params_Data();
  ~PaymentRequest_CanMakePayment_Params_Data() = delete;
};
static_assert(sizeof(PaymentRequest_CanMakePayment_Params_Data) == 8,
              "Bad sizeof(PaymentRequest_CanMakePayment_Params_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace payments

#endif  // THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_PAYMENTS_PAYMENT_REQUEST_MOJOM_SHARED_INTERNAL_H_