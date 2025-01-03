// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#elif defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4056)
#pragma warning(disable:4065)
#pragma warning(disable:4756)
#endif

#include "third_party/blink/public/platform/modules/payments/payment_app.mojom-blink.h"

#include <math.h>
#include <stdint.h>
#include <utility>

#include "base/logging.h"
#include "base/run_loop.h"
#include "mojo/public/cpp/bindings/lib/message_internal.h"
#include "mojo/public/cpp/bindings/lib/serialization_util.h"
#include "mojo/public/cpp/bindings/lib/unserialized_message_context.h"
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/interfaces/bindings/interface_control_messages.mojom.h"

#include "third_party/blink/public/platform/modules/payments/payment_app.mojom-shared-message-ids.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"
#include "ipc/ipc_message_utils.h"
#include "mojo/public/cpp/base/time_mojom_traits.h"
#include "third_party/blink/renderer/platform/mojo/geometry_struct_traits.h"
#include "third_party/blink/renderer/platform/mojo/kurl_struct_traits.h"
#include "third_party/blink/renderer/platform/mojo/string16_mojom_traits.h"
#include "ui/gfx/geometry/mojo/geometry_struct_traits.h"
namespace payments {
namespace mojom {
namespace blink {
PaymentInstrument::PaymentInstrument()
    : name(),
      icons(),
      method(),
      stringified_capabilities(),
      supported_networks(),
      supported_types() {}

PaymentInstrument::PaymentInstrument(
    const WTF::String& name_in,
    WTF::Vector<::blink::mojom::blink::ManifestIconPtr> icons_in,
    const WTF::String& method_in,
    const WTF::String& stringified_capabilities_in,
    const WTF::Vector<::payments::mojom::blink::BasicCardNetwork>& supported_networks_in,
    const WTF::Vector<::payments::mojom::blink::BasicCardType>& supported_types_in)
    : name(std::move(name_in)),
      icons(std::move(icons_in)),
      method(std::move(method_in)),
      stringified_capabilities(std::move(stringified_capabilities_in)),
      supported_networks(std::move(supported_networks_in)),
      supported_types(std::move(supported_types_in)) {}

PaymentInstrument::~PaymentInstrument() = default;

bool PaymentInstrument::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
CanMakePaymentEventData::CanMakePaymentEventData()
    : top_origin(),
      payment_request_origin(),
      method_data(),
      modifiers() {}

CanMakePaymentEventData::CanMakePaymentEventData(
    const ::blink::KURL& top_origin_in,
    const ::blink::KURL& payment_request_origin_in,
    WTF::Vector<::payments::mojom::blink::PaymentMethodDataPtr> method_data_in,
    WTF::Vector<::payments::mojom::blink::PaymentDetailsModifierPtr> modifiers_in)
    : top_origin(std::move(top_origin_in)),
      payment_request_origin(std::move(payment_request_origin_in)),
      method_data(std::move(method_data_in)),
      modifiers(std::move(modifiers_in)) {}

CanMakePaymentEventData::~CanMakePaymentEventData() = default;

bool CanMakePaymentEventData::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
PaymentRequestEventData::PaymentRequestEventData()
    : top_origin(),
      payment_request_origin(),
      payment_request_id(),
      method_data(),
      total(),
      modifiers(),
      instrument_key() {}

PaymentRequestEventData::PaymentRequestEventData(
    const ::blink::KURL& top_origin_in,
    const ::blink::KURL& payment_request_origin_in,
    const WTF::String& payment_request_id_in,
    WTF::Vector<::payments::mojom::blink::PaymentMethodDataPtr> method_data_in,
    ::payments::mojom::blink::PaymentCurrencyAmountPtr total_in,
    WTF::Vector<::payments::mojom::blink::PaymentDetailsModifierPtr> modifiers_in,
    const WTF::String& instrument_key_in)
    : top_origin(std::move(top_origin_in)),
      payment_request_origin(std::move(payment_request_origin_in)),
      payment_request_id(std::move(payment_request_id_in)),
      method_data(std::move(method_data_in)),
      total(std::move(total_in)),
      modifiers(std::move(modifiers_in)),
      instrument_key(std::move(instrument_key_in)) {}

PaymentRequestEventData::~PaymentRequestEventData() = default;

bool PaymentRequestEventData::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
PaymentHandlerResponse::PaymentHandlerResponse()
    : method_name(),
      stringified_details() {}

PaymentHandlerResponse::PaymentHandlerResponse(
    const WTF::String& method_name_in,
    const WTF::String& stringified_details_in)
    : method_name(std::move(method_name_in)),
      stringified_details(std::move(stringified_details_in)) {}

PaymentHandlerResponse::~PaymentHandlerResponse() = default;
size_t PaymentHandlerResponse::Hash(size_t seed) const {
  seed = mojo::internal::WTFHash(seed, this->method_name);
  seed = mojo::internal::WTFHash(seed, this->stringified_details);
  return seed;
}

bool PaymentHandlerResponse::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
const char PaymentManager::Name_[] = "payments.mojom.PaymentManager";

class PaymentManager_DeletePaymentInstrument_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  PaymentManager_DeletePaymentInstrument_ForwardToCallback(
      PaymentManager::DeletePaymentInstrumentCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  PaymentManager::DeletePaymentInstrumentCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(PaymentManager_DeletePaymentInstrument_ForwardToCallback);
};

class PaymentManager_GetPaymentInstrument_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  PaymentManager_GetPaymentInstrument_ForwardToCallback(
      PaymentManager::GetPaymentInstrumentCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  PaymentManager::GetPaymentInstrumentCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(PaymentManager_GetPaymentInstrument_ForwardToCallback);
};

class PaymentManager_KeysOfPaymentInstruments_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  PaymentManager_KeysOfPaymentInstruments_ForwardToCallback(
      PaymentManager::KeysOfPaymentInstrumentsCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  PaymentManager::KeysOfPaymentInstrumentsCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(PaymentManager_KeysOfPaymentInstruments_ForwardToCallback);
};

class PaymentManager_HasPaymentInstrument_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  PaymentManager_HasPaymentInstrument_ForwardToCallback(
      PaymentManager::HasPaymentInstrumentCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  PaymentManager::HasPaymentInstrumentCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(PaymentManager_HasPaymentInstrument_ForwardToCallback);
};

class PaymentManager_SetPaymentInstrument_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  PaymentManager_SetPaymentInstrument_ForwardToCallback(
      PaymentManager::SetPaymentInstrumentCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  PaymentManager::SetPaymentInstrumentCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(PaymentManager_SetPaymentInstrument_ForwardToCallback);
};

class PaymentManager_ClearPaymentInstruments_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  PaymentManager_ClearPaymentInstruments_ForwardToCallback(
      PaymentManager::ClearPaymentInstrumentsCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  PaymentManager::ClearPaymentInstrumentsCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(PaymentManager_ClearPaymentInstruments_ForwardToCallback);
};

PaymentManagerProxy::PaymentManagerProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void PaymentManagerProxy::Init(
    const ::blink::KURL& in_context_url, const WTF::String& in_service_worker_scope) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "payments::mojom::PaymentManager::Init");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPaymentManager_Init_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::payments::mojom::internal::PaymentManager_Init_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->context_url)::BaseType::BufferWriter
      context_url_writer;
  mojo::internal::Serialize<::url::mojom::UrlDataView>(
      in_context_url, buffer, &context_url_writer, &serialization_context);
  params->context_url.Set(
      context_url_writer.is_null() ? nullptr : context_url_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->context_url.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null context_url in PaymentManager.Init request");
  typename decltype(params->service_worker_scope)::BaseType::BufferWriter
      service_worker_scope_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_service_worker_scope, buffer, &service_worker_scope_writer, &serialization_context);
  params->service_worker_scope.Set(
      service_worker_scope_writer.is_null() ? nullptr : service_worker_scope_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->service_worker_scope.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null service_worker_scope in PaymentManager.Init request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void PaymentManagerProxy::DeletePaymentInstrument(
    const WTF::String& in_instrument_key, DeletePaymentInstrumentCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "payments::mojom::PaymentManager::DeletePaymentInstrument");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPaymentManager_DeletePaymentInstrument_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::payments::mojom::internal::PaymentManager_DeletePaymentInstrument_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->instrument_key)::BaseType::BufferWriter
      instrument_key_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_instrument_key, buffer, &instrument_key_writer, &serialization_context);
  params->instrument_key.Set(
      instrument_key_writer.is_null() ? nullptr : instrument_key_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->instrument_key.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null instrument_key in PaymentManager.DeletePaymentInstrument request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new PaymentManager_DeletePaymentInstrument_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void PaymentManagerProxy::GetPaymentInstrument(
    const WTF::String& in_instrument_key, GetPaymentInstrumentCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "payments::mojom::PaymentManager::GetPaymentInstrument");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPaymentManager_GetPaymentInstrument_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::payments::mojom::internal::PaymentManager_GetPaymentInstrument_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->instrument_key)::BaseType::BufferWriter
      instrument_key_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_instrument_key, buffer, &instrument_key_writer, &serialization_context);
  params->instrument_key.Set(
      instrument_key_writer.is_null() ? nullptr : instrument_key_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->instrument_key.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null instrument_key in PaymentManager.GetPaymentInstrument request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new PaymentManager_GetPaymentInstrument_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void PaymentManagerProxy::KeysOfPaymentInstruments(
    KeysOfPaymentInstrumentsCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "payments::mojom::PaymentManager::KeysOfPaymentInstruments");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPaymentManager_KeysOfPaymentInstruments_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::payments::mojom::internal::PaymentManager_KeysOfPaymentInstruments_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new PaymentManager_KeysOfPaymentInstruments_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void PaymentManagerProxy::HasPaymentInstrument(
    const WTF::String& in_instrument_key, HasPaymentInstrumentCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "payments::mojom::PaymentManager::HasPaymentInstrument");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPaymentManager_HasPaymentInstrument_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::payments::mojom::internal::PaymentManager_HasPaymentInstrument_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->instrument_key)::BaseType::BufferWriter
      instrument_key_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_instrument_key, buffer, &instrument_key_writer, &serialization_context);
  params->instrument_key.Set(
      instrument_key_writer.is_null() ? nullptr : instrument_key_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->instrument_key.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null instrument_key in PaymentManager.HasPaymentInstrument request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new PaymentManager_HasPaymentInstrument_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void PaymentManagerProxy::SetPaymentInstrument(
    const WTF::String& in_instrument_key, PaymentInstrumentPtr in_instrument, SetPaymentInstrumentCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "payments::mojom::PaymentManager::SetPaymentInstrument");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPaymentManager_SetPaymentInstrument_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::payments::mojom::internal::PaymentManager_SetPaymentInstrument_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->instrument_key)::BaseType::BufferWriter
      instrument_key_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_instrument_key, buffer, &instrument_key_writer, &serialization_context);
  params->instrument_key.Set(
      instrument_key_writer.is_null() ? nullptr : instrument_key_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->instrument_key.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null instrument_key in PaymentManager.SetPaymentInstrument request");
  typename decltype(params->instrument)::BaseType::BufferWriter
      instrument_writer;
  mojo::internal::Serialize<::payments::mojom::PaymentInstrumentDataView>(
      in_instrument, buffer, &instrument_writer, &serialization_context);
  params->instrument.Set(
      instrument_writer.is_null() ? nullptr : instrument_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->instrument.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null instrument in PaymentManager.SetPaymentInstrument request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new PaymentManager_SetPaymentInstrument_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void PaymentManagerProxy::ClearPaymentInstruments(
    ClearPaymentInstrumentsCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "payments::mojom::PaymentManager::ClearPaymentInstruments");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPaymentManager_ClearPaymentInstruments_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::payments::mojom::internal::PaymentManager_ClearPaymentInstruments_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new PaymentManager_ClearPaymentInstruments_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void PaymentManagerProxy::SetUserHint(
    const WTF::String& in_user_hint) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "payments::mojom::PaymentManager::SetUserHint");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPaymentManager_SetUserHint_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::payments::mojom::internal::PaymentManager_SetUserHint_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->user_hint)::BaseType::BufferWriter
      user_hint_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_user_hint, buffer, &user_hint_writer, &serialization_context);
  params->user_hint.Set(
      user_hint_writer.is_null() ? nullptr : user_hint_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->user_hint.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null user_hint in PaymentManager.SetUserHint request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}
class PaymentManager_DeletePaymentInstrument_ProxyToResponder {
 public:
  static PaymentManager::DeletePaymentInstrumentCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<PaymentManager_DeletePaymentInstrument_ProxyToResponder> proxy(
        new PaymentManager_DeletePaymentInstrument_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&PaymentManager_DeletePaymentInstrument_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~PaymentManager_DeletePaymentInstrument_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // If we're being destroyed without being run, we want to ensure the
      // binding endpoint has been closed. This checks for that asynchronously.
      // We pass a bound generated callback to handle the response so that any
      // resulting DCHECK stack will have useful interface type information.
      responder_->IsConnectedAsync(base::BindOnce(&OnIsConnectedComplete));
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    responder_ = nullptr;
  }

 private:
  PaymentManager_DeletePaymentInstrument_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "PaymentManager::DeletePaymentInstrumentCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      PaymentHandlerStatus in_status);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(PaymentManager_DeletePaymentInstrument_ProxyToResponder);
};

bool PaymentManager_DeletePaymentInstrument_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "payments::mojom::PaymentManager::DeletePaymentInstrumentCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::PaymentManager_DeletePaymentInstrument_ResponseParams_Data* params =
      reinterpret_cast<
          internal::PaymentManager_DeletePaymentInstrument_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  PaymentHandlerStatus p_status{};
  PaymentManager_DeletePaymentInstrument_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadStatus(&p_status))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "PaymentManager::DeletePaymentInstrument response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_status));
  return true;
}

void PaymentManager_DeletePaymentInstrument_ProxyToResponder::Run(
    PaymentHandlerStatus in_status) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPaymentManager_DeletePaymentInstrument_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::payments::mojom::internal::PaymentManager_DeletePaymentInstrument_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::payments::mojom::PaymentHandlerStatus>(
      in_status, &params->status);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)payments::mojom::PaymentManager::DeletePaymentInstrumentCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class PaymentManager_GetPaymentInstrument_ProxyToResponder {
 public:
  static PaymentManager::GetPaymentInstrumentCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<PaymentManager_GetPaymentInstrument_ProxyToResponder> proxy(
        new PaymentManager_GetPaymentInstrument_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&PaymentManager_GetPaymentInstrument_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~PaymentManager_GetPaymentInstrument_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // If we're being destroyed without being run, we want to ensure the
      // binding endpoint has been closed. This checks for that asynchronously.
      // We pass a bound generated callback to handle the response so that any
      // resulting DCHECK stack will have useful interface type information.
      responder_->IsConnectedAsync(base::BindOnce(&OnIsConnectedComplete));
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    responder_ = nullptr;
  }

 private:
  PaymentManager_GetPaymentInstrument_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "PaymentManager::GetPaymentInstrumentCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      PaymentInstrumentPtr in_instrument, PaymentHandlerStatus in_status);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(PaymentManager_GetPaymentInstrument_ProxyToResponder);
};

bool PaymentManager_GetPaymentInstrument_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "payments::mojom::PaymentManager::GetPaymentInstrumentCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::PaymentManager_GetPaymentInstrument_ResponseParams_Data* params =
      reinterpret_cast<
          internal::PaymentManager_GetPaymentInstrument_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  PaymentInstrumentPtr p_instrument{};
  PaymentHandlerStatus p_status{};
  PaymentManager_GetPaymentInstrument_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadInstrument(&p_instrument))
    success = false;
  if (!input_data_view.ReadStatus(&p_status))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "PaymentManager::GetPaymentInstrument response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_instrument), 
std::move(p_status));
  return true;
}

void PaymentManager_GetPaymentInstrument_ProxyToResponder::Run(
    PaymentInstrumentPtr in_instrument, PaymentHandlerStatus in_status) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPaymentManager_GetPaymentInstrument_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::payments::mojom::internal::PaymentManager_GetPaymentInstrument_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->instrument)::BaseType::BufferWriter
      instrument_writer;
  mojo::internal::Serialize<::payments::mojom::PaymentInstrumentDataView>(
      in_instrument, buffer, &instrument_writer, &serialization_context);
  params->instrument.Set(
      instrument_writer.is_null() ? nullptr : instrument_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->instrument.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null instrument in ");
  mojo::internal::Serialize<::payments::mojom::PaymentHandlerStatus>(
      in_status, &params->status);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)payments::mojom::PaymentManager::GetPaymentInstrumentCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class PaymentManager_KeysOfPaymentInstruments_ProxyToResponder {
 public:
  static PaymentManager::KeysOfPaymentInstrumentsCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<PaymentManager_KeysOfPaymentInstruments_ProxyToResponder> proxy(
        new PaymentManager_KeysOfPaymentInstruments_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&PaymentManager_KeysOfPaymentInstruments_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~PaymentManager_KeysOfPaymentInstruments_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // If we're being destroyed without being run, we want to ensure the
      // binding endpoint has been closed. This checks for that asynchronously.
      // We pass a bound generated callback to handle the response so that any
      // resulting DCHECK stack will have useful interface type information.
      responder_->IsConnectedAsync(base::BindOnce(&OnIsConnectedComplete));
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    responder_ = nullptr;
  }

 private:
  PaymentManager_KeysOfPaymentInstruments_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "PaymentManager::KeysOfPaymentInstrumentsCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      const WTF::Vector<WTF::String>& in_keys, PaymentHandlerStatus in_status);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(PaymentManager_KeysOfPaymentInstruments_ProxyToResponder);
};

bool PaymentManager_KeysOfPaymentInstruments_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "payments::mojom::PaymentManager::KeysOfPaymentInstrumentsCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::PaymentManager_KeysOfPaymentInstruments_ResponseParams_Data* params =
      reinterpret_cast<
          internal::PaymentManager_KeysOfPaymentInstruments_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  WTF::Vector<WTF::String> p_keys{};
  PaymentHandlerStatus p_status{};
  PaymentManager_KeysOfPaymentInstruments_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadKeys(&p_keys))
    success = false;
  if (!input_data_view.ReadStatus(&p_status))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "PaymentManager::KeysOfPaymentInstruments response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_keys), 
std::move(p_status));
  return true;
}

void PaymentManager_KeysOfPaymentInstruments_ProxyToResponder::Run(
    const WTF::Vector<WTF::String>& in_keys, PaymentHandlerStatus in_status) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPaymentManager_KeysOfPaymentInstruments_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::payments::mojom::internal::PaymentManager_KeysOfPaymentInstruments_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->keys)::BaseType::BufferWriter
      keys_writer;
  const mojo::internal::ContainerValidateParams keys_validate_params(
      0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr));
  mojo::internal::Serialize<mojo::ArrayDataView<mojo::StringDataView>>(
      in_keys, buffer, &keys_writer, &keys_validate_params,
      &serialization_context);
  params->keys.Set(
      keys_writer.is_null() ? nullptr : keys_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->keys.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null keys in ");
  mojo::internal::Serialize<::payments::mojom::PaymentHandlerStatus>(
      in_status, &params->status);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)payments::mojom::PaymentManager::KeysOfPaymentInstrumentsCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class PaymentManager_HasPaymentInstrument_ProxyToResponder {
 public:
  static PaymentManager::HasPaymentInstrumentCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<PaymentManager_HasPaymentInstrument_ProxyToResponder> proxy(
        new PaymentManager_HasPaymentInstrument_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&PaymentManager_HasPaymentInstrument_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~PaymentManager_HasPaymentInstrument_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // If we're being destroyed without being run, we want to ensure the
      // binding endpoint has been closed. This checks for that asynchronously.
      // We pass a bound generated callback to handle the response so that any
      // resulting DCHECK stack will have useful interface type information.
      responder_->IsConnectedAsync(base::BindOnce(&OnIsConnectedComplete));
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    responder_ = nullptr;
  }

 private:
  PaymentManager_HasPaymentInstrument_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "PaymentManager::HasPaymentInstrumentCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      PaymentHandlerStatus in_status);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(PaymentManager_HasPaymentInstrument_ProxyToResponder);
};

bool PaymentManager_HasPaymentInstrument_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "payments::mojom::PaymentManager::HasPaymentInstrumentCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::PaymentManager_HasPaymentInstrument_ResponseParams_Data* params =
      reinterpret_cast<
          internal::PaymentManager_HasPaymentInstrument_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  PaymentHandlerStatus p_status{};
  PaymentManager_HasPaymentInstrument_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadStatus(&p_status))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "PaymentManager::HasPaymentInstrument response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_status));
  return true;
}

void PaymentManager_HasPaymentInstrument_ProxyToResponder::Run(
    PaymentHandlerStatus in_status) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPaymentManager_HasPaymentInstrument_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::payments::mojom::internal::PaymentManager_HasPaymentInstrument_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::payments::mojom::PaymentHandlerStatus>(
      in_status, &params->status);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)payments::mojom::PaymentManager::HasPaymentInstrumentCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class PaymentManager_SetPaymentInstrument_ProxyToResponder {
 public:
  static PaymentManager::SetPaymentInstrumentCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<PaymentManager_SetPaymentInstrument_ProxyToResponder> proxy(
        new PaymentManager_SetPaymentInstrument_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&PaymentManager_SetPaymentInstrument_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~PaymentManager_SetPaymentInstrument_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // If we're being destroyed without being run, we want to ensure the
      // binding endpoint has been closed. This checks for that asynchronously.
      // We pass a bound generated callback to handle the response so that any
      // resulting DCHECK stack will have useful interface type information.
      responder_->IsConnectedAsync(base::BindOnce(&OnIsConnectedComplete));
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    responder_ = nullptr;
  }

 private:
  PaymentManager_SetPaymentInstrument_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "PaymentManager::SetPaymentInstrumentCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      PaymentHandlerStatus in_status);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(PaymentManager_SetPaymentInstrument_ProxyToResponder);
};

bool PaymentManager_SetPaymentInstrument_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "payments::mojom::PaymentManager::SetPaymentInstrumentCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::PaymentManager_SetPaymentInstrument_ResponseParams_Data* params =
      reinterpret_cast<
          internal::PaymentManager_SetPaymentInstrument_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  PaymentHandlerStatus p_status{};
  PaymentManager_SetPaymentInstrument_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadStatus(&p_status))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "PaymentManager::SetPaymentInstrument response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_status));
  return true;
}

void PaymentManager_SetPaymentInstrument_ProxyToResponder::Run(
    PaymentHandlerStatus in_status) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPaymentManager_SetPaymentInstrument_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::payments::mojom::internal::PaymentManager_SetPaymentInstrument_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::payments::mojom::PaymentHandlerStatus>(
      in_status, &params->status);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)payments::mojom::PaymentManager::SetPaymentInstrumentCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class PaymentManager_ClearPaymentInstruments_ProxyToResponder {
 public:
  static PaymentManager::ClearPaymentInstrumentsCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<PaymentManager_ClearPaymentInstruments_ProxyToResponder> proxy(
        new PaymentManager_ClearPaymentInstruments_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&PaymentManager_ClearPaymentInstruments_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~PaymentManager_ClearPaymentInstruments_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // If we're being destroyed without being run, we want to ensure the
      // binding endpoint has been closed. This checks for that asynchronously.
      // We pass a bound generated callback to handle the response so that any
      // resulting DCHECK stack will have useful interface type information.
      responder_->IsConnectedAsync(base::BindOnce(&OnIsConnectedComplete));
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    responder_ = nullptr;
  }

 private:
  PaymentManager_ClearPaymentInstruments_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "PaymentManager::ClearPaymentInstrumentsCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      PaymentHandlerStatus in_status);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(PaymentManager_ClearPaymentInstruments_ProxyToResponder);
};

bool PaymentManager_ClearPaymentInstruments_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "payments::mojom::PaymentManager::ClearPaymentInstrumentsCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::PaymentManager_ClearPaymentInstruments_ResponseParams_Data* params =
      reinterpret_cast<
          internal::PaymentManager_ClearPaymentInstruments_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  PaymentHandlerStatus p_status{};
  PaymentManager_ClearPaymentInstruments_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadStatus(&p_status))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "PaymentManager::ClearPaymentInstruments response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_status));
  return true;
}

void PaymentManager_ClearPaymentInstruments_ProxyToResponder::Run(
    PaymentHandlerStatus in_status) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPaymentManager_ClearPaymentInstruments_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::payments::mojom::internal::PaymentManager_ClearPaymentInstruments_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::payments::mojom::PaymentHandlerStatus>(
      in_status, &params->status);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)payments::mojom::PaymentManager::ClearPaymentInstrumentsCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}

// static
bool PaymentManagerStubDispatch::Accept(
    PaymentManager* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kPaymentManager_Init_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)payments::mojom::PaymentManager::Init",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::PaymentManager_Init_Params_Data* params =
          reinterpret_cast<internal::PaymentManager_Init_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::blink::KURL p_context_url{};
      WTF::String p_service_worker_scope{};
      PaymentManager_Init_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadContextUrl(&p_context_url))
        success = false;
      if (!input_data_view.ReadServiceWorkerScope(&p_service_worker_scope))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "PaymentManager::Init deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->Init(
std::move(p_context_url), 
std::move(p_service_worker_scope));
      return true;
    }
    case internal::kPaymentManager_DeletePaymentInstrument_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)payments::mojom::PaymentManager::DeletePaymentInstrument",
               "message", message->name());
#endif
      break;
    }
    case internal::kPaymentManager_GetPaymentInstrument_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)payments::mojom::PaymentManager::GetPaymentInstrument",
               "message", message->name());
#endif
      break;
    }
    case internal::kPaymentManager_KeysOfPaymentInstruments_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)payments::mojom::PaymentManager::KeysOfPaymentInstruments",
               "message", message->name());
#endif
      break;
    }
    case internal::kPaymentManager_HasPaymentInstrument_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)payments::mojom::PaymentManager::HasPaymentInstrument",
               "message", message->name());
#endif
      break;
    }
    case internal::kPaymentManager_SetPaymentInstrument_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)payments::mojom::PaymentManager::SetPaymentInstrument",
               "message", message->name());
#endif
      break;
    }
    case internal::kPaymentManager_ClearPaymentInstruments_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)payments::mojom::PaymentManager::ClearPaymentInstruments",
               "message", message->name());
#endif
      break;
    }
    case internal::kPaymentManager_SetUserHint_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)payments::mojom::PaymentManager::SetUserHint",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::PaymentManager_SetUserHint_Params_Data* params =
          reinterpret_cast<internal::PaymentManager_SetUserHint_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      WTF::String p_user_hint{};
      PaymentManager_SetUserHint_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadUserHint(&p_user_hint))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "PaymentManager::SetUserHint deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->SetUserHint(
std::move(p_user_hint));
      return true;
    }
  }
  return false;
}

// static
bool PaymentManagerStubDispatch::AcceptWithResponder(
    PaymentManager* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kPaymentManager_Init_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)payments::mojom::PaymentManager::Init",
               "message", message->name());
#endif
      break;
    }
    case internal::kPaymentManager_DeletePaymentInstrument_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)payments::mojom::PaymentManager::DeletePaymentInstrument",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::PaymentManager_DeletePaymentInstrument_Params_Data* params =
          reinterpret_cast<
              internal::PaymentManager_DeletePaymentInstrument_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      WTF::String p_instrument_key{};
      PaymentManager_DeletePaymentInstrument_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadInstrumentKey(&p_instrument_key))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "PaymentManager::DeletePaymentInstrument deserializer");
        return false;
      }
      PaymentManager::DeletePaymentInstrumentCallback callback =
          PaymentManager_DeletePaymentInstrument_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->DeletePaymentInstrument(
std::move(p_instrument_key), std::move(callback));
      return true;
    }
    case internal::kPaymentManager_GetPaymentInstrument_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)payments::mojom::PaymentManager::GetPaymentInstrument",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::PaymentManager_GetPaymentInstrument_Params_Data* params =
          reinterpret_cast<
              internal::PaymentManager_GetPaymentInstrument_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      WTF::String p_instrument_key{};
      PaymentManager_GetPaymentInstrument_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadInstrumentKey(&p_instrument_key))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "PaymentManager::GetPaymentInstrument deserializer");
        return false;
      }
      PaymentManager::GetPaymentInstrumentCallback callback =
          PaymentManager_GetPaymentInstrument_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->GetPaymentInstrument(
std::move(p_instrument_key), std::move(callback));
      return true;
    }
    case internal::kPaymentManager_KeysOfPaymentInstruments_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)payments::mojom::PaymentManager::KeysOfPaymentInstruments",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::PaymentManager_KeysOfPaymentInstruments_Params_Data* params =
          reinterpret_cast<
              internal::PaymentManager_KeysOfPaymentInstruments_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      PaymentManager_KeysOfPaymentInstruments_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "PaymentManager::KeysOfPaymentInstruments deserializer");
        return false;
      }
      PaymentManager::KeysOfPaymentInstrumentsCallback callback =
          PaymentManager_KeysOfPaymentInstruments_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->KeysOfPaymentInstruments(std::move(callback));
      return true;
    }
    case internal::kPaymentManager_HasPaymentInstrument_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)payments::mojom::PaymentManager::HasPaymentInstrument",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::PaymentManager_HasPaymentInstrument_Params_Data* params =
          reinterpret_cast<
              internal::PaymentManager_HasPaymentInstrument_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      WTF::String p_instrument_key{};
      PaymentManager_HasPaymentInstrument_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadInstrumentKey(&p_instrument_key))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "PaymentManager::HasPaymentInstrument deserializer");
        return false;
      }
      PaymentManager::HasPaymentInstrumentCallback callback =
          PaymentManager_HasPaymentInstrument_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->HasPaymentInstrument(
std::move(p_instrument_key), std::move(callback));
      return true;
    }
    case internal::kPaymentManager_SetPaymentInstrument_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)payments::mojom::PaymentManager::SetPaymentInstrument",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::PaymentManager_SetPaymentInstrument_Params_Data* params =
          reinterpret_cast<
              internal::PaymentManager_SetPaymentInstrument_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      WTF::String p_instrument_key{};
      PaymentInstrumentPtr p_instrument{};
      PaymentManager_SetPaymentInstrument_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadInstrumentKey(&p_instrument_key))
        success = false;
      if (!input_data_view.ReadInstrument(&p_instrument))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "PaymentManager::SetPaymentInstrument deserializer");
        return false;
      }
      PaymentManager::SetPaymentInstrumentCallback callback =
          PaymentManager_SetPaymentInstrument_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->SetPaymentInstrument(
std::move(p_instrument_key), 
std::move(p_instrument), std::move(callback));
      return true;
    }
    case internal::kPaymentManager_ClearPaymentInstruments_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)payments::mojom::PaymentManager::ClearPaymentInstruments",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::PaymentManager_ClearPaymentInstruments_Params_Data* params =
          reinterpret_cast<
              internal::PaymentManager_ClearPaymentInstruments_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      PaymentManager_ClearPaymentInstruments_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "PaymentManager::ClearPaymentInstruments deserializer");
        return false;
      }
      PaymentManager::ClearPaymentInstrumentsCallback callback =
          PaymentManager_ClearPaymentInstruments_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->ClearPaymentInstruments(std::move(callback));
      return true;
    }
    case internal::kPaymentManager_SetUserHint_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)payments::mojom::PaymentManager::SetUserHint",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool PaymentManagerRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "PaymentManager RequestValidator");

  switch (message->header()->name) {
    case internal::kPaymentManager_Init_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PaymentManager_Init_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kPaymentManager_DeletePaymentInstrument_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PaymentManager_DeletePaymentInstrument_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kPaymentManager_GetPaymentInstrument_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PaymentManager_GetPaymentInstrument_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kPaymentManager_KeysOfPaymentInstruments_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PaymentManager_KeysOfPaymentInstruments_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kPaymentManager_HasPaymentInstrument_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PaymentManager_HasPaymentInstrument_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kPaymentManager_SetPaymentInstrument_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PaymentManager_SetPaymentInstrument_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kPaymentManager_ClearPaymentInstruments_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PaymentManager_ClearPaymentInstruments_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kPaymentManager_SetUserHint_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PaymentManager_SetUserHint_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    default:
      break;
  }

  // Unrecognized message.
  ReportValidationError(
      &validation_context,
      mojo::internal::VALIDATION_ERROR_MESSAGE_HEADER_UNKNOWN_METHOD);
  return false;
}

bool PaymentManagerResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "PaymentManager ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kPaymentManager_DeletePaymentInstrument_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::PaymentManager_DeletePaymentInstrument_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kPaymentManager_GetPaymentInstrument_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::PaymentManager_GetPaymentInstrument_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kPaymentManager_KeysOfPaymentInstruments_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::PaymentManager_KeysOfPaymentInstruments_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kPaymentManager_HasPaymentInstrument_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::PaymentManager_HasPaymentInstrument_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kPaymentManager_SetPaymentInstrument_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::PaymentManager_SetPaymentInstrument_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kPaymentManager_ClearPaymentInstruments_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::PaymentManager_ClearPaymentInstruments_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    default:
      break;
  }

  // Unrecognized message.
  ReportValidationError(
      &validation_context,
      mojo::internal::VALIDATION_ERROR_MESSAGE_HEADER_UNKNOWN_METHOD);
  return false;
}
void PaymentManagerInterceptorForTesting::Init(const ::blink::KURL& context_url, const WTF::String& service_worker_scope) {
  GetForwardingInterface()->Init(std::move(context_url), std::move(service_worker_scope));
}
void PaymentManagerInterceptorForTesting::DeletePaymentInstrument(const WTF::String& instrument_key, DeletePaymentInstrumentCallback callback) {
  GetForwardingInterface()->DeletePaymentInstrument(std::move(instrument_key), std::move(callback));
}
void PaymentManagerInterceptorForTesting::GetPaymentInstrument(const WTF::String& instrument_key, GetPaymentInstrumentCallback callback) {
  GetForwardingInterface()->GetPaymentInstrument(std::move(instrument_key), std::move(callback));
}
void PaymentManagerInterceptorForTesting::KeysOfPaymentInstruments(KeysOfPaymentInstrumentsCallback callback) {
  GetForwardingInterface()->KeysOfPaymentInstruments(std::move(callback));
}
void PaymentManagerInterceptorForTesting::HasPaymentInstrument(const WTF::String& instrument_key, HasPaymentInstrumentCallback callback) {
  GetForwardingInterface()->HasPaymentInstrument(std::move(instrument_key), std::move(callback));
}
void PaymentManagerInterceptorForTesting::SetPaymentInstrument(const WTF::String& instrument_key, PaymentInstrumentPtr instrument, SetPaymentInstrumentCallback callback) {
  GetForwardingInterface()->SetPaymentInstrument(std::move(instrument_key), std::move(instrument), std::move(callback));
}
void PaymentManagerInterceptorForTesting::ClearPaymentInstruments(ClearPaymentInstrumentsCallback callback) {
  GetForwardingInterface()->ClearPaymentInstruments(std::move(callback));
}
void PaymentManagerInterceptorForTesting::SetUserHint(const WTF::String& user_hint) {
  GetForwardingInterface()->SetUserHint(std::move(user_hint));
}
PaymentManagerAsyncWaiter::PaymentManagerAsyncWaiter(
    PaymentManager* proxy) : proxy_(proxy) {}

PaymentManagerAsyncWaiter::~PaymentManagerAsyncWaiter() = default;

void PaymentManagerAsyncWaiter::DeletePaymentInstrument(
    const WTF::String& instrument_key, PaymentHandlerStatus* out_status) {
  base::RunLoop loop;
  proxy_->DeletePaymentInstrument(std::move(instrument_key),
      base::BindOnce(
          [](base::RunLoop* loop,
             PaymentHandlerStatus* out_status
,
             PaymentHandlerStatus status) {*out_status = std::move(status);
            loop->Quit();
          },
          &loop,
          out_status));
  loop.Run();
}
void PaymentManagerAsyncWaiter::GetPaymentInstrument(
    const WTF::String& instrument_key, PaymentInstrumentPtr* out_instrument, PaymentHandlerStatus* out_status) {
  base::RunLoop loop;
  proxy_->GetPaymentInstrument(std::move(instrument_key),
      base::BindOnce(
          [](base::RunLoop* loop,
             PaymentInstrumentPtr* out_instrument
,
             PaymentHandlerStatus* out_status
,
             PaymentInstrumentPtr instrument,
             PaymentHandlerStatus status) {*out_instrument = std::move(instrument);*out_status = std::move(status);
            loop->Quit();
          },
          &loop,
          out_instrument,
          out_status));
  loop.Run();
}
void PaymentManagerAsyncWaiter::KeysOfPaymentInstruments(
    WTF::Vector<WTF::String>* out_keys, PaymentHandlerStatus* out_status) {
  base::RunLoop loop;
  proxy_->KeysOfPaymentInstruments(
      base::BindOnce(
          [](base::RunLoop* loop,
             WTF::Vector<WTF::String>* out_keys
,
             PaymentHandlerStatus* out_status
,
             const WTF::Vector<WTF::String>& keys,
             PaymentHandlerStatus status) {*out_keys = std::move(keys);*out_status = std::move(status);
            loop->Quit();
          },
          &loop,
          out_keys,
          out_status));
  loop.Run();
}
void PaymentManagerAsyncWaiter::HasPaymentInstrument(
    const WTF::String& instrument_key, PaymentHandlerStatus* out_status) {
  base::RunLoop loop;
  proxy_->HasPaymentInstrument(std::move(instrument_key),
      base::BindOnce(
          [](base::RunLoop* loop,
             PaymentHandlerStatus* out_status
,
             PaymentHandlerStatus status) {*out_status = std::move(status);
            loop->Quit();
          },
          &loop,
          out_status));
  loop.Run();
}
void PaymentManagerAsyncWaiter::SetPaymentInstrument(
    const WTF::String& instrument_key, PaymentInstrumentPtr instrument, PaymentHandlerStatus* out_status) {
  base::RunLoop loop;
  proxy_->SetPaymentInstrument(std::move(instrument_key),std::move(instrument),
      base::BindOnce(
          [](base::RunLoop* loop,
             PaymentHandlerStatus* out_status
,
             PaymentHandlerStatus status) {*out_status = std::move(status);
            loop->Quit();
          },
          &loop,
          out_status));
  loop.Run();
}
void PaymentManagerAsyncWaiter::ClearPaymentInstruments(
    PaymentHandlerStatus* out_status) {
  base::RunLoop loop;
  proxy_->ClearPaymentInstruments(
      base::BindOnce(
          [](base::RunLoop* loop,
             PaymentHandlerStatus* out_status
,
             PaymentHandlerStatus status) {*out_status = std::move(status);
            loop->Quit();
          },
          &loop,
          out_status));
  loop.Run();
}

const char PaymentHandlerResponseCallback::Name_[] = "payments.mojom.PaymentHandlerResponseCallback";

PaymentHandlerResponseCallbackProxy::PaymentHandlerResponseCallbackProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void PaymentHandlerResponseCallbackProxy::OnResponseForAbortPayment(
    bool in_payment_aborted, WTF::Time in_dispatch_event_time) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "payments::mojom::PaymentHandlerResponseCallback::OnResponseForAbortPayment");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPaymentHandlerResponseCallback_OnResponseForAbortPayment_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::payments::mojom::internal::PaymentHandlerResponseCallback_OnResponseForAbortPayment_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->payment_aborted = in_payment_aborted;
  typename decltype(params->dispatch_event_time)::BaseType::BufferWriter
      dispatch_event_time_writer;
  mojo::internal::Serialize<::mojo_base::mojom::TimeDataView>(
      in_dispatch_event_time, buffer, &dispatch_event_time_writer, &serialization_context);
  params->dispatch_event_time.Set(
      dispatch_event_time_writer.is_null() ? nullptr : dispatch_event_time_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->dispatch_event_time.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null dispatch_event_time in PaymentHandlerResponseCallback.OnResponseForAbortPayment request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void PaymentHandlerResponseCallbackProxy::OnResponseForCanMakePayment(
    bool in_can_make_payment, WTF::Time in_dispatch_event_time) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "payments::mojom::PaymentHandlerResponseCallback::OnResponseForCanMakePayment");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPaymentHandlerResponseCallback_OnResponseForCanMakePayment_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::payments::mojom::internal::PaymentHandlerResponseCallback_OnResponseForCanMakePayment_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->can_make_payment = in_can_make_payment;
  typename decltype(params->dispatch_event_time)::BaseType::BufferWriter
      dispatch_event_time_writer;
  mojo::internal::Serialize<::mojo_base::mojom::TimeDataView>(
      in_dispatch_event_time, buffer, &dispatch_event_time_writer, &serialization_context);
  params->dispatch_event_time.Set(
      dispatch_event_time_writer.is_null() ? nullptr : dispatch_event_time_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->dispatch_event_time.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null dispatch_event_time in PaymentHandlerResponseCallback.OnResponseForCanMakePayment request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void PaymentHandlerResponseCallbackProxy::OnResponseForPaymentRequest(
    PaymentHandlerResponsePtr in_response, WTF::Time in_dispatch_event_time) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "payments::mojom::PaymentHandlerResponseCallback::OnResponseForPaymentRequest");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPaymentHandlerResponseCallback_OnResponseForPaymentRequest_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::payments::mojom::internal::PaymentHandlerResponseCallback_OnResponseForPaymentRequest_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->response)::BaseType::BufferWriter
      response_writer;
  mojo::internal::Serialize<::payments::mojom::PaymentHandlerResponseDataView>(
      in_response, buffer, &response_writer, &serialization_context);
  params->response.Set(
      response_writer.is_null() ? nullptr : response_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->response.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null response in PaymentHandlerResponseCallback.OnResponseForPaymentRequest request");
  typename decltype(params->dispatch_event_time)::BaseType::BufferWriter
      dispatch_event_time_writer;
  mojo::internal::Serialize<::mojo_base::mojom::TimeDataView>(
      in_dispatch_event_time, buffer, &dispatch_event_time_writer, &serialization_context);
  params->dispatch_event_time.Set(
      dispatch_event_time_writer.is_null() ? nullptr : dispatch_event_time_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->dispatch_event_time.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null dispatch_event_time in PaymentHandlerResponseCallback.OnResponseForPaymentRequest request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool PaymentHandlerResponseCallbackStubDispatch::Accept(
    PaymentHandlerResponseCallback* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kPaymentHandlerResponseCallback_OnResponseForAbortPayment_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)payments::mojom::PaymentHandlerResponseCallback::OnResponseForAbortPayment",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::PaymentHandlerResponseCallback_OnResponseForAbortPayment_Params_Data* params =
          reinterpret_cast<internal::PaymentHandlerResponseCallback_OnResponseForAbortPayment_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      bool p_payment_aborted{};
      WTF::Time p_dispatch_event_time{};
      PaymentHandlerResponseCallback_OnResponseForAbortPayment_ParamsDataView input_data_view(params, &serialization_context);
      
      p_payment_aborted = input_data_view.payment_aborted();
      if (!input_data_view.ReadDispatchEventTime(&p_dispatch_event_time))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "PaymentHandlerResponseCallback::OnResponseForAbortPayment deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnResponseForAbortPayment(
std::move(p_payment_aborted), 
std::move(p_dispatch_event_time));
      return true;
    }
    case internal::kPaymentHandlerResponseCallback_OnResponseForCanMakePayment_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)payments::mojom::PaymentHandlerResponseCallback::OnResponseForCanMakePayment",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::PaymentHandlerResponseCallback_OnResponseForCanMakePayment_Params_Data* params =
          reinterpret_cast<internal::PaymentHandlerResponseCallback_OnResponseForCanMakePayment_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      bool p_can_make_payment{};
      WTF::Time p_dispatch_event_time{};
      PaymentHandlerResponseCallback_OnResponseForCanMakePayment_ParamsDataView input_data_view(params, &serialization_context);
      
      p_can_make_payment = input_data_view.can_make_payment();
      if (!input_data_view.ReadDispatchEventTime(&p_dispatch_event_time))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "PaymentHandlerResponseCallback::OnResponseForCanMakePayment deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnResponseForCanMakePayment(
std::move(p_can_make_payment), 
std::move(p_dispatch_event_time));
      return true;
    }
    case internal::kPaymentHandlerResponseCallback_OnResponseForPaymentRequest_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)payments::mojom::PaymentHandlerResponseCallback::OnResponseForPaymentRequest",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::PaymentHandlerResponseCallback_OnResponseForPaymentRequest_Params_Data* params =
          reinterpret_cast<internal::PaymentHandlerResponseCallback_OnResponseForPaymentRequest_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      PaymentHandlerResponsePtr p_response{};
      WTF::Time p_dispatch_event_time{};
      PaymentHandlerResponseCallback_OnResponseForPaymentRequest_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadResponse(&p_response))
        success = false;
      if (!input_data_view.ReadDispatchEventTime(&p_dispatch_event_time))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "PaymentHandlerResponseCallback::OnResponseForPaymentRequest deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnResponseForPaymentRequest(
std::move(p_response), 
std::move(p_dispatch_event_time));
      return true;
    }
  }
  return false;
}

// static
bool PaymentHandlerResponseCallbackStubDispatch::AcceptWithResponder(
    PaymentHandlerResponseCallback* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kPaymentHandlerResponseCallback_OnResponseForAbortPayment_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)payments::mojom::PaymentHandlerResponseCallback::OnResponseForAbortPayment",
               "message", message->name());
#endif
      break;
    }
    case internal::kPaymentHandlerResponseCallback_OnResponseForCanMakePayment_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)payments::mojom::PaymentHandlerResponseCallback::OnResponseForCanMakePayment",
               "message", message->name());
#endif
      break;
    }
    case internal::kPaymentHandlerResponseCallback_OnResponseForPaymentRequest_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)payments::mojom::PaymentHandlerResponseCallback::OnResponseForPaymentRequest",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool PaymentHandlerResponseCallbackRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "PaymentHandlerResponseCallback RequestValidator");

  switch (message->header()->name) {
    case internal::kPaymentHandlerResponseCallback_OnResponseForAbortPayment_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PaymentHandlerResponseCallback_OnResponseForAbortPayment_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kPaymentHandlerResponseCallback_OnResponseForCanMakePayment_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PaymentHandlerResponseCallback_OnResponseForCanMakePayment_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kPaymentHandlerResponseCallback_OnResponseForPaymentRequest_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PaymentHandlerResponseCallback_OnResponseForPaymentRequest_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    default:
      break;
  }

  // Unrecognized message.
  ReportValidationError(
      &validation_context,
      mojo::internal::VALIDATION_ERROR_MESSAGE_HEADER_UNKNOWN_METHOD);
  return false;
}

void PaymentHandlerResponseCallbackInterceptorForTesting::OnResponseForAbortPayment(bool payment_aborted, WTF::Time dispatch_event_time) {
  GetForwardingInterface()->OnResponseForAbortPayment(std::move(payment_aborted), std::move(dispatch_event_time));
}
void PaymentHandlerResponseCallbackInterceptorForTesting::OnResponseForCanMakePayment(bool can_make_payment, WTF::Time dispatch_event_time) {
  GetForwardingInterface()->OnResponseForCanMakePayment(std::move(can_make_payment), std::move(dispatch_event_time));
}
void PaymentHandlerResponseCallbackInterceptorForTesting::OnResponseForPaymentRequest(PaymentHandlerResponsePtr response, WTF::Time dispatch_event_time) {
  GetForwardingInterface()->OnResponseForPaymentRequest(std::move(response), std::move(dispatch_event_time));
}
PaymentHandlerResponseCallbackAsyncWaiter::PaymentHandlerResponseCallbackAsyncWaiter(
    PaymentHandlerResponseCallback* proxy) : proxy_(proxy) {}

PaymentHandlerResponseCallbackAsyncWaiter::~PaymentHandlerResponseCallbackAsyncWaiter() = default;


}  // namespace blink
}  // namespace mojom
}  // namespace payments

namespace mojo {


// static
bool StructTraits<::payments::mojom::blink::PaymentInstrument::DataView, ::payments::mojom::blink::PaymentInstrumentPtr>::Read(
    ::payments::mojom::blink::PaymentInstrument::DataView input,
    ::payments::mojom::blink::PaymentInstrumentPtr* output) {
  bool success = true;
  ::payments::mojom::blink::PaymentInstrumentPtr result(::payments::mojom::blink::PaymentInstrument::New());
  
      if (!input.ReadName(&result->name))
        success = false;
      if (!input.ReadIcons(&result->icons))
        success = false;
      if (!input.ReadMethod(&result->method))
        success = false;
      if (!input.ReadStringifiedCapabilities(&result->stringified_capabilities))
        success = false;
      if (!input.ReadSupportedNetworks(&result->supported_networks))
        success = false;
      if (!input.ReadSupportedTypes(&result->supported_types))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::payments::mojom::blink::CanMakePaymentEventData::DataView, ::payments::mojom::blink::CanMakePaymentEventDataPtr>::Read(
    ::payments::mojom::blink::CanMakePaymentEventData::DataView input,
    ::payments::mojom::blink::CanMakePaymentEventDataPtr* output) {
  bool success = true;
  ::payments::mojom::blink::CanMakePaymentEventDataPtr result(::payments::mojom::blink::CanMakePaymentEventData::New());
  
      if (!input.ReadTopOrigin(&result->top_origin))
        success = false;
      if (!input.ReadPaymentRequestOrigin(&result->payment_request_origin))
        success = false;
      if (!input.ReadMethodData(&result->method_data))
        success = false;
      if (!input.ReadModifiers(&result->modifiers))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::payments::mojom::blink::PaymentRequestEventData::DataView, ::payments::mojom::blink::PaymentRequestEventDataPtr>::Read(
    ::payments::mojom::blink::PaymentRequestEventData::DataView input,
    ::payments::mojom::blink::PaymentRequestEventDataPtr* output) {
  bool success = true;
  ::payments::mojom::blink::PaymentRequestEventDataPtr result(::payments::mojom::blink::PaymentRequestEventData::New());
  
      if (!input.ReadTopOrigin(&result->top_origin))
        success = false;
      if (!input.ReadPaymentRequestOrigin(&result->payment_request_origin))
        success = false;
      if (!input.ReadPaymentRequestId(&result->payment_request_id))
        success = false;
      if (!input.ReadMethodData(&result->method_data))
        success = false;
      if (!input.ReadTotal(&result->total))
        success = false;
      if (!input.ReadModifiers(&result->modifiers))
        success = false;
      if (!input.ReadInstrumentKey(&result->instrument_key))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::payments::mojom::blink::PaymentHandlerResponse::DataView, ::payments::mojom::blink::PaymentHandlerResponsePtr>::Read(
    ::payments::mojom::blink::PaymentHandlerResponse::DataView input,
    ::payments::mojom::blink::PaymentHandlerResponsePtr* output) {
  bool success = true;
  ::payments::mojom::blink::PaymentHandlerResponsePtr result(::payments::mojom::blink::PaymentHandlerResponse::New());
  
      if (!input.ReadMethodName(&result->method_name))
        success = false;
      if (!input.ReadStringifiedDetails(&result->stringified_details))
        success = false;
  *output = std::move(result);
  return success;
}

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif