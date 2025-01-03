// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_PAYMENTS_PAYMENT_APP_MOJOM_SHARED_INTERNAL_H_
#define THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_PAYMENTS_PAYMENT_APP_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "components/payments/mojom/payment_request_data.mojom-shared-internal.h"
#include "mojo/public/mojom/base/time.mojom-shared-internal.h"
#include "third_party/blink/public/mojom/manifest/manifest.mojom-shared-internal.h"
#include "third_party/blink/public/platform/modules/payments/payment_request.mojom-shared-internal.h"
#include "url/mojom/url.mojom-shared-internal.h"
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
class PaymentInstrument_Data;
class CanMakePaymentEventData_Data;
class PaymentRequestEventData_Data;
class PaymentHandlerResponse_Data;

struct PaymentHandlerStatus_Data {
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

#pragma pack(push, 1)
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) PaymentInstrument_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PaymentInstrument_Data));
      new (data()) PaymentInstrument_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PaymentInstrument_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PaymentInstrument_Data>(index_);
    }
    PaymentInstrument_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> name;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<::blink::mojom::internal::ManifestIcon_Data>>> icons;
  mojo::internal::Pointer<mojo::internal::String_Data> method;
  mojo::internal::Pointer<mojo::internal::String_Data> stringified_capabilities;
  mojo::internal::Pointer<mojo::internal::Array_Data<int32_t>> supported_networks;
  mojo::internal::Pointer<mojo::internal::Array_Data<int32_t>> supported_types;

 private:
  PaymentInstrument_Data();
  ~PaymentInstrument_Data() = delete;
};
static_assert(sizeof(PaymentInstrument_Data) == 56,
              "Bad sizeof(PaymentInstrument_Data)");
// Used by PaymentInstrument::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct PaymentInstrument_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  PaymentInstrument_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~PaymentInstrument_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    PaymentInstrument_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    PaymentInstrument_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) CanMakePaymentEventData_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CanMakePaymentEventData_Data));
      new (data()) CanMakePaymentEventData_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CanMakePaymentEventData_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CanMakePaymentEventData_Data>(index_);
    }
    CanMakePaymentEventData_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> top_origin;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> payment_request_origin;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<::payments::mojom::internal::PaymentMethodData_Data>>> method_data;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<::payments::mojom::internal::PaymentDetailsModifier_Data>>> modifiers;

 private:
  CanMakePaymentEventData_Data();
  ~CanMakePaymentEventData_Data() = delete;
};
static_assert(sizeof(CanMakePaymentEventData_Data) == 40,
              "Bad sizeof(CanMakePaymentEventData_Data)");
// Used by CanMakePaymentEventData::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct CanMakePaymentEventData_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  CanMakePaymentEventData_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~CanMakePaymentEventData_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    CanMakePaymentEventData_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    CanMakePaymentEventData_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) PaymentRequestEventData_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PaymentRequestEventData_Data));
      new (data()) PaymentRequestEventData_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PaymentRequestEventData_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PaymentRequestEventData_Data>(index_);
    }
    PaymentRequestEventData_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> top_origin;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> payment_request_origin;
  mojo::internal::Pointer<mojo::internal::String_Data> payment_request_id;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<::payments::mojom::internal::PaymentMethodData_Data>>> method_data;
  mojo::internal::Pointer<::payments::mojom::internal::PaymentCurrencyAmount_Data> total;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<::payments::mojom::internal::PaymentDetailsModifier_Data>>> modifiers;
  mojo::internal::Pointer<mojo::internal::String_Data> instrument_key;

 private:
  PaymentRequestEventData_Data();
  ~PaymentRequestEventData_Data() = delete;
};
static_assert(sizeof(PaymentRequestEventData_Data) == 64,
              "Bad sizeof(PaymentRequestEventData_Data)");
// Used by PaymentRequestEventData::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct PaymentRequestEventData_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  PaymentRequestEventData_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~PaymentRequestEventData_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    PaymentRequestEventData_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    PaymentRequestEventData_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) PaymentHandlerResponse_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PaymentHandlerResponse_Data));
      new (data()) PaymentHandlerResponse_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PaymentHandlerResponse_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PaymentHandlerResponse_Data>(index_);
    }
    PaymentHandlerResponse_Data* operator->() { return data(); }

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

 private:
  PaymentHandlerResponse_Data();
  ~PaymentHandlerResponse_Data() = delete;
};
static_assert(sizeof(PaymentHandlerResponse_Data) == 24,
              "Bad sizeof(PaymentHandlerResponse_Data)");
// Used by PaymentHandlerResponse::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct PaymentHandlerResponse_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  PaymentHandlerResponse_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~PaymentHandlerResponse_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    PaymentHandlerResponse_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    PaymentHandlerResponse_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) PaymentManager_Init_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PaymentManager_Init_Params_Data));
      new (data()) PaymentManager_Init_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PaymentManager_Init_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PaymentManager_Init_Params_Data>(index_);
    }
    PaymentManager_Init_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> context_url;
  mojo::internal::Pointer<mojo::internal::String_Data> service_worker_scope;

 private:
  PaymentManager_Init_Params_Data();
  ~PaymentManager_Init_Params_Data() = delete;
};
static_assert(sizeof(PaymentManager_Init_Params_Data) == 24,
              "Bad sizeof(PaymentManager_Init_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) PaymentManager_DeletePaymentInstrument_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PaymentManager_DeletePaymentInstrument_Params_Data));
      new (data()) PaymentManager_DeletePaymentInstrument_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PaymentManager_DeletePaymentInstrument_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PaymentManager_DeletePaymentInstrument_Params_Data>(index_);
    }
    PaymentManager_DeletePaymentInstrument_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> instrument_key;

 private:
  PaymentManager_DeletePaymentInstrument_Params_Data();
  ~PaymentManager_DeletePaymentInstrument_Params_Data() = delete;
};
static_assert(sizeof(PaymentManager_DeletePaymentInstrument_Params_Data) == 16,
              "Bad sizeof(PaymentManager_DeletePaymentInstrument_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) PaymentManager_DeletePaymentInstrument_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PaymentManager_DeletePaymentInstrument_ResponseParams_Data));
      new (data()) PaymentManager_DeletePaymentInstrument_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PaymentManager_DeletePaymentInstrument_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PaymentManager_DeletePaymentInstrument_ResponseParams_Data>(index_);
    }
    PaymentManager_DeletePaymentInstrument_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t status;
  uint8_t padfinal_[4];

 private:
  PaymentManager_DeletePaymentInstrument_ResponseParams_Data();
  ~PaymentManager_DeletePaymentInstrument_ResponseParams_Data() = delete;
};
static_assert(sizeof(PaymentManager_DeletePaymentInstrument_ResponseParams_Data) == 16,
              "Bad sizeof(PaymentManager_DeletePaymentInstrument_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) PaymentManager_GetPaymentInstrument_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PaymentManager_GetPaymentInstrument_Params_Data));
      new (data()) PaymentManager_GetPaymentInstrument_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PaymentManager_GetPaymentInstrument_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PaymentManager_GetPaymentInstrument_Params_Data>(index_);
    }
    PaymentManager_GetPaymentInstrument_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> instrument_key;

 private:
  PaymentManager_GetPaymentInstrument_Params_Data();
  ~PaymentManager_GetPaymentInstrument_Params_Data() = delete;
};
static_assert(sizeof(PaymentManager_GetPaymentInstrument_Params_Data) == 16,
              "Bad sizeof(PaymentManager_GetPaymentInstrument_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) PaymentManager_GetPaymentInstrument_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PaymentManager_GetPaymentInstrument_ResponseParams_Data));
      new (data()) PaymentManager_GetPaymentInstrument_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PaymentManager_GetPaymentInstrument_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PaymentManager_GetPaymentInstrument_ResponseParams_Data>(index_);
    }
    PaymentManager_GetPaymentInstrument_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::PaymentInstrument_Data> instrument;
  int32_t status;
  uint8_t padfinal_[4];

 private:
  PaymentManager_GetPaymentInstrument_ResponseParams_Data();
  ~PaymentManager_GetPaymentInstrument_ResponseParams_Data() = delete;
};
static_assert(sizeof(PaymentManager_GetPaymentInstrument_ResponseParams_Data) == 24,
              "Bad sizeof(PaymentManager_GetPaymentInstrument_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) PaymentManager_KeysOfPaymentInstruments_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PaymentManager_KeysOfPaymentInstruments_Params_Data));
      new (data()) PaymentManager_KeysOfPaymentInstruments_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PaymentManager_KeysOfPaymentInstruments_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PaymentManager_KeysOfPaymentInstruments_Params_Data>(index_);
    }
    PaymentManager_KeysOfPaymentInstruments_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  PaymentManager_KeysOfPaymentInstruments_Params_Data();
  ~PaymentManager_KeysOfPaymentInstruments_Params_Data() = delete;
};
static_assert(sizeof(PaymentManager_KeysOfPaymentInstruments_Params_Data) == 8,
              "Bad sizeof(PaymentManager_KeysOfPaymentInstruments_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) PaymentManager_KeysOfPaymentInstruments_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PaymentManager_KeysOfPaymentInstruments_ResponseParams_Data));
      new (data()) PaymentManager_KeysOfPaymentInstruments_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PaymentManager_KeysOfPaymentInstruments_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PaymentManager_KeysOfPaymentInstruments_ResponseParams_Data>(index_);
    }
    PaymentManager_KeysOfPaymentInstruments_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<mojo::internal::String_Data>>> keys;
  int32_t status;
  uint8_t padfinal_[4];

 private:
  PaymentManager_KeysOfPaymentInstruments_ResponseParams_Data();
  ~PaymentManager_KeysOfPaymentInstruments_ResponseParams_Data() = delete;
};
static_assert(sizeof(PaymentManager_KeysOfPaymentInstruments_ResponseParams_Data) == 24,
              "Bad sizeof(PaymentManager_KeysOfPaymentInstruments_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) PaymentManager_HasPaymentInstrument_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PaymentManager_HasPaymentInstrument_Params_Data));
      new (data()) PaymentManager_HasPaymentInstrument_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PaymentManager_HasPaymentInstrument_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PaymentManager_HasPaymentInstrument_Params_Data>(index_);
    }
    PaymentManager_HasPaymentInstrument_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> instrument_key;

 private:
  PaymentManager_HasPaymentInstrument_Params_Data();
  ~PaymentManager_HasPaymentInstrument_Params_Data() = delete;
};
static_assert(sizeof(PaymentManager_HasPaymentInstrument_Params_Data) == 16,
              "Bad sizeof(PaymentManager_HasPaymentInstrument_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) PaymentManager_HasPaymentInstrument_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PaymentManager_HasPaymentInstrument_ResponseParams_Data));
      new (data()) PaymentManager_HasPaymentInstrument_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PaymentManager_HasPaymentInstrument_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PaymentManager_HasPaymentInstrument_ResponseParams_Data>(index_);
    }
    PaymentManager_HasPaymentInstrument_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t status;
  uint8_t padfinal_[4];

 private:
  PaymentManager_HasPaymentInstrument_ResponseParams_Data();
  ~PaymentManager_HasPaymentInstrument_ResponseParams_Data() = delete;
};
static_assert(sizeof(PaymentManager_HasPaymentInstrument_ResponseParams_Data) == 16,
              "Bad sizeof(PaymentManager_HasPaymentInstrument_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) PaymentManager_SetPaymentInstrument_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PaymentManager_SetPaymentInstrument_Params_Data));
      new (data()) PaymentManager_SetPaymentInstrument_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PaymentManager_SetPaymentInstrument_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PaymentManager_SetPaymentInstrument_Params_Data>(index_);
    }
    PaymentManager_SetPaymentInstrument_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> instrument_key;
  mojo::internal::Pointer<internal::PaymentInstrument_Data> instrument;

 private:
  PaymentManager_SetPaymentInstrument_Params_Data();
  ~PaymentManager_SetPaymentInstrument_Params_Data() = delete;
};
static_assert(sizeof(PaymentManager_SetPaymentInstrument_Params_Data) == 24,
              "Bad sizeof(PaymentManager_SetPaymentInstrument_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) PaymentManager_SetPaymentInstrument_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PaymentManager_SetPaymentInstrument_ResponseParams_Data));
      new (data()) PaymentManager_SetPaymentInstrument_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PaymentManager_SetPaymentInstrument_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PaymentManager_SetPaymentInstrument_ResponseParams_Data>(index_);
    }
    PaymentManager_SetPaymentInstrument_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t status;
  uint8_t padfinal_[4];

 private:
  PaymentManager_SetPaymentInstrument_ResponseParams_Data();
  ~PaymentManager_SetPaymentInstrument_ResponseParams_Data() = delete;
};
static_assert(sizeof(PaymentManager_SetPaymentInstrument_ResponseParams_Data) == 16,
              "Bad sizeof(PaymentManager_SetPaymentInstrument_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) PaymentManager_ClearPaymentInstruments_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PaymentManager_ClearPaymentInstruments_Params_Data));
      new (data()) PaymentManager_ClearPaymentInstruments_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PaymentManager_ClearPaymentInstruments_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PaymentManager_ClearPaymentInstruments_Params_Data>(index_);
    }
    PaymentManager_ClearPaymentInstruments_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  PaymentManager_ClearPaymentInstruments_Params_Data();
  ~PaymentManager_ClearPaymentInstruments_Params_Data() = delete;
};
static_assert(sizeof(PaymentManager_ClearPaymentInstruments_Params_Data) == 8,
              "Bad sizeof(PaymentManager_ClearPaymentInstruments_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) PaymentManager_ClearPaymentInstruments_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PaymentManager_ClearPaymentInstruments_ResponseParams_Data));
      new (data()) PaymentManager_ClearPaymentInstruments_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PaymentManager_ClearPaymentInstruments_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PaymentManager_ClearPaymentInstruments_ResponseParams_Data>(index_);
    }
    PaymentManager_ClearPaymentInstruments_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t status;
  uint8_t padfinal_[4];

 private:
  PaymentManager_ClearPaymentInstruments_ResponseParams_Data();
  ~PaymentManager_ClearPaymentInstruments_ResponseParams_Data() = delete;
};
static_assert(sizeof(PaymentManager_ClearPaymentInstruments_ResponseParams_Data) == 16,
              "Bad sizeof(PaymentManager_ClearPaymentInstruments_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) PaymentManager_SetUserHint_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PaymentManager_SetUserHint_Params_Data));
      new (data()) PaymentManager_SetUserHint_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PaymentManager_SetUserHint_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PaymentManager_SetUserHint_Params_Data>(index_);
    }
    PaymentManager_SetUserHint_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> user_hint;

 private:
  PaymentManager_SetUserHint_Params_Data();
  ~PaymentManager_SetUserHint_Params_Data() = delete;
};
static_assert(sizeof(PaymentManager_SetUserHint_Params_Data) == 16,
              "Bad sizeof(PaymentManager_SetUserHint_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) PaymentHandlerResponseCallback_OnResponseForAbortPayment_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PaymentHandlerResponseCallback_OnResponseForAbortPayment_Params_Data));
      new (data()) PaymentHandlerResponseCallback_OnResponseForAbortPayment_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PaymentHandlerResponseCallback_OnResponseForAbortPayment_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PaymentHandlerResponseCallback_OnResponseForAbortPayment_Params_Data>(index_);
    }
    PaymentHandlerResponseCallback_OnResponseForAbortPayment_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t payment_aborted : 1;
  uint8_t pad0_[7];
  mojo::internal::Pointer<::mojo_base::mojom::internal::Time_Data> dispatch_event_time;

 private:
  PaymentHandlerResponseCallback_OnResponseForAbortPayment_Params_Data();
  ~PaymentHandlerResponseCallback_OnResponseForAbortPayment_Params_Data() = delete;
};
static_assert(sizeof(PaymentHandlerResponseCallback_OnResponseForAbortPayment_Params_Data) == 24,
              "Bad sizeof(PaymentHandlerResponseCallback_OnResponseForAbortPayment_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) PaymentHandlerResponseCallback_OnResponseForCanMakePayment_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PaymentHandlerResponseCallback_OnResponseForCanMakePayment_Params_Data));
      new (data()) PaymentHandlerResponseCallback_OnResponseForCanMakePayment_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PaymentHandlerResponseCallback_OnResponseForCanMakePayment_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PaymentHandlerResponseCallback_OnResponseForCanMakePayment_Params_Data>(index_);
    }
    PaymentHandlerResponseCallback_OnResponseForCanMakePayment_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t can_make_payment : 1;
  uint8_t pad0_[7];
  mojo::internal::Pointer<::mojo_base::mojom::internal::Time_Data> dispatch_event_time;

 private:
  PaymentHandlerResponseCallback_OnResponseForCanMakePayment_Params_Data();
  ~PaymentHandlerResponseCallback_OnResponseForCanMakePayment_Params_Data() = delete;
};
static_assert(sizeof(PaymentHandlerResponseCallback_OnResponseForCanMakePayment_Params_Data) == 24,
              "Bad sizeof(PaymentHandlerResponseCallback_OnResponseForCanMakePayment_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) PaymentHandlerResponseCallback_OnResponseForPaymentRequest_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PaymentHandlerResponseCallback_OnResponseForPaymentRequest_Params_Data));
      new (data()) PaymentHandlerResponseCallback_OnResponseForPaymentRequest_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PaymentHandlerResponseCallback_OnResponseForPaymentRequest_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PaymentHandlerResponseCallback_OnResponseForPaymentRequest_Params_Data>(index_);
    }
    PaymentHandlerResponseCallback_OnResponseForPaymentRequest_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::PaymentHandlerResponse_Data> response;
  mojo::internal::Pointer<::mojo_base::mojom::internal::Time_Data> dispatch_event_time;

 private:
  PaymentHandlerResponseCallback_OnResponseForPaymentRequest_Params_Data();
  ~PaymentHandlerResponseCallback_OnResponseForPaymentRequest_Params_Data() = delete;
};
static_assert(sizeof(PaymentHandlerResponseCallback_OnResponseForPaymentRequest_Params_Data) == 24,
              "Bad sizeof(PaymentHandlerResponseCallback_OnResponseForPaymentRequest_Params_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace payments

#endif  // THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_PAYMENTS_PAYMENT_APP_MOJOM_SHARED_INTERNAL_H_