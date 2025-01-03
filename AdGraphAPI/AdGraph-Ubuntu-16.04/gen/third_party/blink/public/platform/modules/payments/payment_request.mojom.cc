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

#include "third_party/blink/public/platform/modules/payments/payment_request.mojom.h"

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

#include "third_party/blink/public/platform/modules/payments/payment_request.mojom-shared-message-ids.h"
namespace payments {
namespace mojom {
PaymentResponse::PaymentResponse()
    : method_name(),
      stringified_details(),
      shipping_address(),
      shipping_option(),
      payer_name(),
      payer_email(),
      payer_phone() {}

PaymentResponse::PaymentResponse(
    const std::string& method_name_in,
    const std::string& stringified_details_in,
    ::payments::mojom::PaymentAddressPtr shipping_address_in,
    const base::Optional<std::string>& shipping_option_in,
    const base::Optional<std::string>& payer_name_in,
    const base::Optional<std::string>& payer_email_in,
    const base::Optional<std::string>& payer_phone_in)
    : method_name(std::move(method_name_in)),
      stringified_details(std::move(stringified_details_in)),
      shipping_address(std::move(shipping_address_in)),
      shipping_option(std::move(shipping_option_in)),
      payer_name(std::move(payer_name_in)),
      payer_email(std::move(payer_email_in)),
      payer_phone(std::move(payer_phone_in)) {}

PaymentResponse::~PaymentResponse() = default;

bool PaymentResponse::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
PaymentItem::PaymentItem()
    : label(),
      amount(),
      pending() {}

PaymentItem::PaymentItem(
    const std::string& label_in,
    ::payments::mojom::PaymentCurrencyAmountPtr amount_in,
    bool pending_in)
    : label(std::move(label_in)),
      amount(std::move(amount_in)),
      pending(std::move(pending_in)) {}

PaymentItem::~PaymentItem() = default;
size_t PaymentItem::Hash(size_t seed) const {
  seed = mojo::internal::Hash(seed, this->label);
  seed = mojo::internal::Hash(seed, this->amount);
  seed = mojo::internal::Hash(seed, this->pending);
  return seed;
}

bool PaymentItem::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
PaymentShippingOption::PaymentShippingOption()
    : id(),
      label(),
      amount(),
      selected() {}

PaymentShippingOption::PaymentShippingOption(
    const std::string& id_in,
    const std::string& label_in,
    ::payments::mojom::PaymentCurrencyAmountPtr amount_in,
    bool selected_in)
    : id(std::move(id_in)),
      label(std::move(label_in)),
      amount(std::move(amount_in)),
      selected(std::move(selected_in)) {}

PaymentShippingOption::~PaymentShippingOption() = default;
size_t PaymentShippingOption::Hash(size_t seed) const {
  seed = mojo::internal::Hash(seed, this->id);
  seed = mojo::internal::Hash(seed, this->label);
  seed = mojo::internal::Hash(seed, this->amount);
  seed = mojo::internal::Hash(seed, this->selected);
  return seed;
}

bool PaymentShippingOption::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
AndroidPayTokenizationParameter::AndroidPayTokenizationParameter()
    : key(),
      value() {}

AndroidPayTokenizationParameter::AndroidPayTokenizationParameter(
    const base::Optional<std::string>& key_in,
    const base::Optional<std::string>& value_in)
    : key(std::move(key_in)),
      value(std::move(value_in)) {}

AndroidPayTokenizationParameter::~AndroidPayTokenizationParameter() = default;

bool AndroidPayTokenizationParameter::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
PaymentMethodData::PaymentMethodData()
    : supported_methods(),
      stringified_data(),
      environment(),
      merchant_name(),
      merchant_id(),
      allowed_card_networks(),
      tokenization_type(),
      parameters(),
      min_google_play_services_version(),
      api_version(),
      supported_networks(),
      supported_types() {}

PaymentMethodData::PaymentMethodData(
    const std::vector<std::string>& supported_methods_in,
    const std::string& stringified_data_in,
    AndroidPayEnvironment environment_in,
    const base::Optional<std::string>& merchant_name_in,
    const base::Optional<std::string>& merchant_id_in,
    const std::vector<AndroidPayCardNetwork>& allowed_card_networks_in,
    AndroidPayTokenization tokenization_type_in,
    std::vector<AndroidPayTokenizationParameterPtr> parameters_in,
    int32_t min_google_play_services_version_in,
    int32_t api_version_in,
    const std::vector<BasicCardNetwork>& supported_networks_in,
    const std::vector<BasicCardType>& supported_types_in)
    : supported_methods(std::move(supported_methods_in)),
      stringified_data(std::move(stringified_data_in)),
      environment(std::move(environment_in)),
      merchant_name(std::move(merchant_name_in)),
      merchant_id(std::move(merchant_id_in)),
      allowed_card_networks(std::move(allowed_card_networks_in)),
      tokenization_type(std::move(tokenization_type_in)),
      parameters(std::move(parameters_in)),
      min_google_play_services_version(std::move(min_google_play_services_version_in)),
      api_version(std::move(api_version_in)),
      supported_networks(std::move(supported_networks_in)),
      supported_types(std::move(supported_types_in)) {}

PaymentMethodData::~PaymentMethodData() = default;

bool PaymentMethodData::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
PaymentDetailsModifier::PaymentDetailsModifier()
    : total(),
      additional_display_items(),
      method_data() {}

PaymentDetailsModifier::PaymentDetailsModifier(
    PaymentItemPtr total_in,
    std::vector<PaymentItemPtr> additional_display_items_in,
    PaymentMethodDataPtr method_data_in)
    : total(std::move(total_in)),
      additional_display_items(std::move(additional_display_items_in)),
      method_data(std::move(method_data_in)) {}

PaymentDetailsModifier::~PaymentDetailsModifier() = default;

bool PaymentDetailsModifier::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
PaymentDetails::PaymentDetails()
    : total(),
      display_items(),
      shipping_options(),
      modifiers(),
      error(""),
      id() {}

PaymentDetails::PaymentDetails(
    PaymentItemPtr total_in,
    std::vector<PaymentItemPtr> display_items_in,
    std::vector<PaymentShippingOptionPtr> shipping_options_in,
    std::vector<PaymentDetailsModifierPtr> modifiers_in,
    const std::string& error_in,
    const base::Optional<std::string>& id_in)
    : total(std::move(total_in)),
      display_items(std::move(display_items_in)),
      shipping_options(std::move(shipping_options_in)),
      modifiers(std::move(modifiers_in)),
      error(std::move(error_in)),
      id(std::move(id_in)) {}

PaymentDetails::~PaymentDetails() = default;

bool PaymentDetails::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
PaymentOptions::PaymentOptions()
    : request_payer_name(),
      request_payer_email(),
      request_payer_phone(),
      request_shipping(),
      shipping_type() {}

PaymentOptions::PaymentOptions(
    bool request_payer_name_in,
    bool request_payer_email_in,
    bool request_payer_phone_in,
    bool request_shipping_in,
    PaymentShippingType shipping_type_in)
    : request_payer_name(std::move(request_payer_name_in)),
      request_payer_email(std::move(request_payer_email_in)),
      request_payer_phone(std::move(request_payer_phone_in)),
      request_shipping(std::move(request_shipping_in)),
      shipping_type(std::move(shipping_type_in)) {}

PaymentOptions::~PaymentOptions() = default;
size_t PaymentOptions::Hash(size_t seed) const {
  seed = mojo::internal::Hash(seed, this->request_payer_name);
  seed = mojo::internal::Hash(seed, this->request_payer_email);
  seed = mojo::internal::Hash(seed, this->request_payer_phone);
  seed = mojo::internal::Hash(seed, this->request_shipping);
  seed = mojo::internal::Hash(seed, this->shipping_type);
  return seed;
}

bool PaymentOptions::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
const char PaymentRequestClient::Name_[] = "payments.mojom.PaymentRequestClient";

PaymentRequestClientProxy::PaymentRequestClientProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void PaymentRequestClientProxy::OnShippingAddressChange(
    ::payments::mojom::PaymentAddressPtr in_address) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "payments::mojom::PaymentRequestClient::OnShippingAddressChange");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPaymentRequestClient_OnShippingAddressChange_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::payments::mojom::internal::PaymentRequestClient_OnShippingAddressChange_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->address)::BaseType::BufferWriter
      address_writer;
  mojo::internal::Serialize<::payments::mojom::PaymentAddressDataView>(
      in_address, buffer, &address_writer, &serialization_context);
  params->address.Set(
      address_writer.is_null() ? nullptr : address_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->address.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null address in PaymentRequestClient.OnShippingAddressChange request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void PaymentRequestClientProxy::OnShippingOptionChange(
    const std::string& in_shipping_option_id) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "payments::mojom::PaymentRequestClient::OnShippingOptionChange");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPaymentRequestClient_OnShippingOptionChange_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::payments::mojom::internal::PaymentRequestClient_OnShippingOptionChange_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->shipping_option_id)::BaseType::BufferWriter
      shipping_option_id_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_shipping_option_id, buffer, &shipping_option_id_writer, &serialization_context);
  params->shipping_option_id.Set(
      shipping_option_id_writer.is_null() ? nullptr : shipping_option_id_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->shipping_option_id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null shipping_option_id in PaymentRequestClient.OnShippingOptionChange request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void PaymentRequestClientProxy::OnPaymentResponse(
    PaymentResponsePtr in_response) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "payments::mojom::PaymentRequestClient::OnPaymentResponse");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPaymentRequestClient_OnPaymentResponse_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::payments::mojom::internal::PaymentRequestClient_OnPaymentResponse_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->response)::BaseType::BufferWriter
      response_writer;
  mojo::internal::Serialize<::payments::mojom::PaymentResponseDataView>(
      in_response, buffer, &response_writer, &serialization_context);
  params->response.Set(
      response_writer.is_null() ? nullptr : response_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->response.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null response in PaymentRequestClient.OnPaymentResponse request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void PaymentRequestClientProxy::OnError(
    PaymentErrorReason in_error) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "payments::mojom::PaymentRequestClient::OnError");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPaymentRequestClient_OnError_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::payments::mojom::internal::PaymentRequestClient_OnError_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::payments::mojom::PaymentErrorReason>(
      in_error, &params->error);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void PaymentRequestClientProxy::OnComplete(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "payments::mojom::PaymentRequestClient::OnComplete");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPaymentRequestClient_OnComplete_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::payments::mojom::internal::PaymentRequestClient_OnComplete_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void PaymentRequestClientProxy::OnAbort(
    bool in_aborted_successfully) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "payments::mojom::PaymentRequestClient::OnAbort");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPaymentRequestClient_OnAbort_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::payments::mojom::internal::PaymentRequestClient_OnAbort_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->aborted_successfully = in_aborted_successfully;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void PaymentRequestClientProxy::OnCanMakePayment(
    CanMakePaymentQueryResult in_result) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "payments::mojom::PaymentRequestClient::OnCanMakePayment");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPaymentRequestClient_OnCanMakePayment_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::payments::mojom::internal::PaymentRequestClient_OnCanMakePayment_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::payments::mojom::CanMakePaymentQueryResult>(
      in_result, &params->result);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void PaymentRequestClientProxy::WarnNoFavicon(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "payments::mojom::PaymentRequestClient::WarnNoFavicon");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPaymentRequestClient_WarnNoFavicon_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::payments::mojom::internal::PaymentRequestClient_WarnNoFavicon_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool PaymentRequestClientStubDispatch::Accept(
    PaymentRequestClient* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kPaymentRequestClient_OnShippingAddressChange_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)payments::mojom::PaymentRequestClient::OnShippingAddressChange",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::PaymentRequestClient_OnShippingAddressChange_Params_Data* params =
          reinterpret_cast<internal::PaymentRequestClient_OnShippingAddressChange_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::payments::mojom::PaymentAddressPtr p_address{};
      PaymentRequestClient_OnShippingAddressChange_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadAddress(&p_address))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "PaymentRequestClient::OnShippingAddressChange deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnShippingAddressChange(
std::move(p_address));
      return true;
    }
    case internal::kPaymentRequestClient_OnShippingOptionChange_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)payments::mojom::PaymentRequestClient::OnShippingOptionChange",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::PaymentRequestClient_OnShippingOptionChange_Params_Data* params =
          reinterpret_cast<internal::PaymentRequestClient_OnShippingOptionChange_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::string p_shipping_option_id{};
      PaymentRequestClient_OnShippingOptionChange_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadShippingOptionId(&p_shipping_option_id))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "PaymentRequestClient::OnShippingOptionChange deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnShippingOptionChange(
std::move(p_shipping_option_id));
      return true;
    }
    case internal::kPaymentRequestClient_OnPaymentResponse_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)payments::mojom::PaymentRequestClient::OnPaymentResponse",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::PaymentRequestClient_OnPaymentResponse_Params_Data* params =
          reinterpret_cast<internal::PaymentRequestClient_OnPaymentResponse_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      PaymentResponsePtr p_response{};
      PaymentRequestClient_OnPaymentResponse_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadResponse(&p_response))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "PaymentRequestClient::OnPaymentResponse deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnPaymentResponse(
std::move(p_response));
      return true;
    }
    case internal::kPaymentRequestClient_OnError_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)payments::mojom::PaymentRequestClient::OnError",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::PaymentRequestClient_OnError_Params_Data* params =
          reinterpret_cast<internal::PaymentRequestClient_OnError_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      PaymentErrorReason p_error{};
      PaymentRequestClient_OnError_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadError(&p_error))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "PaymentRequestClient::OnError deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnError(
std::move(p_error));
      return true;
    }
    case internal::kPaymentRequestClient_OnComplete_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)payments::mojom::PaymentRequestClient::OnComplete",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::PaymentRequestClient_OnComplete_Params_Data* params =
          reinterpret_cast<internal::PaymentRequestClient_OnComplete_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      PaymentRequestClient_OnComplete_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "PaymentRequestClient::OnComplete deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnComplete();
      return true;
    }
    case internal::kPaymentRequestClient_OnAbort_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)payments::mojom::PaymentRequestClient::OnAbort",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::PaymentRequestClient_OnAbort_Params_Data* params =
          reinterpret_cast<internal::PaymentRequestClient_OnAbort_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      bool p_aborted_successfully{};
      PaymentRequestClient_OnAbort_ParamsDataView input_data_view(params, &serialization_context);
      
      p_aborted_successfully = input_data_view.aborted_successfully();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "PaymentRequestClient::OnAbort deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnAbort(
std::move(p_aborted_successfully));
      return true;
    }
    case internal::kPaymentRequestClient_OnCanMakePayment_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)payments::mojom::PaymentRequestClient::OnCanMakePayment",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::PaymentRequestClient_OnCanMakePayment_Params_Data* params =
          reinterpret_cast<internal::PaymentRequestClient_OnCanMakePayment_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      CanMakePaymentQueryResult p_result{};
      PaymentRequestClient_OnCanMakePayment_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadResult(&p_result))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "PaymentRequestClient::OnCanMakePayment deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnCanMakePayment(
std::move(p_result));
      return true;
    }
    case internal::kPaymentRequestClient_WarnNoFavicon_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)payments::mojom::PaymentRequestClient::WarnNoFavicon",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::PaymentRequestClient_WarnNoFavicon_Params_Data* params =
          reinterpret_cast<internal::PaymentRequestClient_WarnNoFavicon_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      PaymentRequestClient_WarnNoFavicon_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "PaymentRequestClient::WarnNoFavicon deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->WarnNoFavicon();
      return true;
    }
  }
  return false;
}

// static
bool PaymentRequestClientStubDispatch::AcceptWithResponder(
    PaymentRequestClient* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kPaymentRequestClient_OnShippingAddressChange_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)payments::mojom::PaymentRequestClient::OnShippingAddressChange",
               "message", message->name());
#endif
      break;
    }
    case internal::kPaymentRequestClient_OnShippingOptionChange_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)payments::mojom::PaymentRequestClient::OnShippingOptionChange",
               "message", message->name());
#endif
      break;
    }
    case internal::kPaymentRequestClient_OnPaymentResponse_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)payments::mojom::PaymentRequestClient::OnPaymentResponse",
               "message", message->name());
#endif
      break;
    }
    case internal::kPaymentRequestClient_OnError_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)payments::mojom::PaymentRequestClient::OnError",
               "message", message->name());
#endif
      break;
    }
    case internal::kPaymentRequestClient_OnComplete_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)payments::mojom::PaymentRequestClient::OnComplete",
               "message", message->name());
#endif
      break;
    }
    case internal::kPaymentRequestClient_OnAbort_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)payments::mojom::PaymentRequestClient::OnAbort",
               "message", message->name());
#endif
      break;
    }
    case internal::kPaymentRequestClient_OnCanMakePayment_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)payments::mojom::PaymentRequestClient::OnCanMakePayment",
               "message", message->name());
#endif
      break;
    }
    case internal::kPaymentRequestClient_WarnNoFavicon_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)payments::mojom::PaymentRequestClient::WarnNoFavicon",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool PaymentRequestClientRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "PaymentRequestClient RequestValidator");

  switch (message->header()->name) {
    case internal::kPaymentRequestClient_OnShippingAddressChange_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PaymentRequestClient_OnShippingAddressChange_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kPaymentRequestClient_OnShippingOptionChange_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PaymentRequestClient_OnShippingOptionChange_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kPaymentRequestClient_OnPaymentResponse_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PaymentRequestClient_OnPaymentResponse_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kPaymentRequestClient_OnError_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PaymentRequestClient_OnError_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kPaymentRequestClient_OnComplete_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PaymentRequestClient_OnComplete_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kPaymentRequestClient_OnAbort_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PaymentRequestClient_OnAbort_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kPaymentRequestClient_OnCanMakePayment_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PaymentRequestClient_OnCanMakePayment_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kPaymentRequestClient_WarnNoFavicon_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PaymentRequestClient_WarnNoFavicon_Params_Data>(
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

void PaymentRequestClientInterceptorForTesting::OnShippingAddressChange(::payments::mojom::PaymentAddressPtr address) {
  GetForwardingInterface()->OnShippingAddressChange(std::move(address));
}
void PaymentRequestClientInterceptorForTesting::OnShippingOptionChange(const std::string& shipping_option_id) {
  GetForwardingInterface()->OnShippingOptionChange(std::move(shipping_option_id));
}
void PaymentRequestClientInterceptorForTesting::OnPaymentResponse(PaymentResponsePtr response) {
  GetForwardingInterface()->OnPaymentResponse(std::move(response));
}
void PaymentRequestClientInterceptorForTesting::OnError(PaymentErrorReason error) {
  GetForwardingInterface()->OnError(std::move(error));
}
void PaymentRequestClientInterceptorForTesting::OnComplete() {
  GetForwardingInterface()->OnComplete();
}
void PaymentRequestClientInterceptorForTesting::OnAbort(bool aborted_successfully) {
  GetForwardingInterface()->OnAbort(std::move(aborted_successfully));
}
void PaymentRequestClientInterceptorForTesting::OnCanMakePayment(CanMakePaymentQueryResult result) {
  GetForwardingInterface()->OnCanMakePayment(std::move(result));
}
void PaymentRequestClientInterceptorForTesting::WarnNoFavicon() {
  GetForwardingInterface()->WarnNoFavicon();
}
PaymentRequestClientAsyncWaiter::PaymentRequestClientAsyncWaiter(
    PaymentRequestClient* proxy) : proxy_(proxy) {}

PaymentRequestClientAsyncWaiter::~PaymentRequestClientAsyncWaiter() = default;


const char PaymentRequest::Name_[] = "payments.mojom.PaymentRequest";

PaymentRequestProxy::PaymentRequestProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void PaymentRequestProxy::Init(
    PaymentRequestClientPtr in_client, std::vector<PaymentMethodDataPtr> in_method_data, PaymentDetailsPtr in_details, PaymentOptionsPtr in_options) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "payments::mojom::PaymentRequest::Init");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPaymentRequest_Init_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::payments::mojom::internal::PaymentRequest_Init_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::payments::mojom::PaymentRequestClientPtrDataView>(
      in_client, &params->client, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->client),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid client in PaymentRequest.Init request");
  typename decltype(params->method_data)::BaseType::BufferWriter
      method_data_writer;
  const mojo::internal::ContainerValidateParams method_data_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::payments::mojom::PaymentMethodDataDataView>>(
      in_method_data, buffer, &method_data_writer, &method_data_validate_params,
      &serialization_context);
  params->method_data.Set(
      method_data_writer.is_null() ? nullptr : method_data_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->method_data.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null method_data in PaymentRequest.Init request");
  typename decltype(params->details)::BaseType::BufferWriter
      details_writer;
  mojo::internal::Serialize<::payments::mojom::PaymentDetailsDataView>(
      in_details, buffer, &details_writer, &serialization_context);
  params->details.Set(
      details_writer.is_null() ? nullptr : details_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->details.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null details in PaymentRequest.Init request");
  typename decltype(params->options)::BaseType::BufferWriter
      options_writer;
  mojo::internal::Serialize<::payments::mojom::PaymentOptionsDataView>(
      in_options, buffer, &options_writer, &serialization_context);
  params->options.Set(
      options_writer.is_null() ? nullptr : options_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->options.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null options in PaymentRequest.Init request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void PaymentRequestProxy::Show(
    bool in_is_user_gesture) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "payments::mojom::PaymentRequest::Show");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPaymentRequest_Show_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::payments::mojom::internal::PaymentRequest_Show_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->is_user_gesture = in_is_user_gesture;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void PaymentRequestProxy::UpdateWith(
    PaymentDetailsPtr in_details) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "payments::mojom::PaymentRequest::UpdateWith");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPaymentRequest_UpdateWith_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::payments::mojom::internal::PaymentRequest_UpdateWith_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->details)::BaseType::BufferWriter
      details_writer;
  mojo::internal::Serialize<::payments::mojom::PaymentDetailsDataView>(
      in_details, buffer, &details_writer, &serialization_context);
  params->details.Set(
      details_writer.is_null() ? nullptr : details_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->details.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null details in PaymentRequest.UpdateWith request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void PaymentRequestProxy::NoUpdatedPaymentDetails(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "payments::mojom::PaymentRequest::NoUpdatedPaymentDetails");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPaymentRequest_NoUpdatedPaymentDetails_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::payments::mojom::internal::PaymentRequest_NoUpdatedPaymentDetails_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void PaymentRequestProxy::Abort(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "payments::mojom::PaymentRequest::Abort");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPaymentRequest_Abort_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::payments::mojom::internal::PaymentRequest_Abort_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void PaymentRequestProxy::Complete(
    PaymentComplete in_result) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "payments::mojom::PaymentRequest::Complete");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPaymentRequest_Complete_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::payments::mojom::internal::PaymentRequest_Complete_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::payments::mojom::PaymentComplete>(
      in_result, &params->result);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void PaymentRequestProxy::CanMakePayment(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "payments::mojom::PaymentRequest::CanMakePayment");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPaymentRequest_CanMakePayment_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::payments::mojom::internal::PaymentRequest_CanMakePayment_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool PaymentRequestStubDispatch::Accept(
    PaymentRequest* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kPaymentRequest_Init_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)payments::mojom::PaymentRequest::Init",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::PaymentRequest_Init_Params_Data* params =
          reinterpret_cast<internal::PaymentRequest_Init_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      PaymentRequestClientPtr p_client{};
      std::vector<PaymentMethodDataPtr> p_method_data{};
      PaymentDetailsPtr p_details{};
      PaymentOptionsPtr p_options{};
      PaymentRequest_Init_ParamsDataView input_data_view(params, &serialization_context);
      
      p_client =
          input_data_view.TakeClient<decltype(p_client)>();
      if (!input_data_view.ReadMethodData(&p_method_data))
        success = false;
      if (!input_data_view.ReadDetails(&p_details))
        success = false;
      if (!input_data_view.ReadOptions(&p_options))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "PaymentRequest::Init deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->Init(
std::move(p_client), 
std::move(p_method_data), 
std::move(p_details), 
std::move(p_options));
      return true;
    }
    case internal::kPaymentRequest_Show_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)payments::mojom::PaymentRequest::Show",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::PaymentRequest_Show_Params_Data* params =
          reinterpret_cast<internal::PaymentRequest_Show_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      bool p_is_user_gesture{};
      PaymentRequest_Show_ParamsDataView input_data_view(params, &serialization_context);
      
      p_is_user_gesture = input_data_view.is_user_gesture();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "PaymentRequest::Show deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->Show(
std::move(p_is_user_gesture));
      return true;
    }
    case internal::kPaymentRequest_UpdateWith_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)payments::mojom::PaymentRequest::UpdateWith",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::PaymentRequest_UpdateWith_Params_Data* params =
          reinterpret_cast<internal::PaymentRequest_UpdateWith_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      PaymentDetailsPtr p_details{};
      PaymentRequest_UpdateWith_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadDetails(&p_details))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "PaymentRequest::UpdateWith deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->UpdateWith(
std::move(p_details));
      return true;
    }
    case internal::kPaymentRequest_NoUpdatedPaymentDetails_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)payments::mojom::PaymentRequest::NoUpdatedPaymentDetails",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::PaymentRequest_NoUpdatedPaymentDetails_Params_Data* params =
          reinterpret_cast<internal::PaymentRequest_NoUpdatedPaymentDetails_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      PaymentRequest_NoUpdatedPaymentDetails_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "PaymentRequest::NoUpdatedPaymentDetails deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->NoUpdatedPaymentDetails();
      return true;
    }
    case internal::kPaymentRequest_Abort_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)payments::mojom::PaymentRequest::Abort",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::PaymentRequest_Abort_Params_Data* params =
          reinterpret_cast<internal::PaymentRequest_Abort_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      PaymentRequest_Abort_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "PaymentRequest::Abort deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->Abort();
      return true;
    }
    case internal::kPaymentRequest_Complete_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)payments::mojom::PaymentRequest::Complete",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::PaymentRequest_Complete_Params_Data* params =
          reinterpret_cast<internal::PaymentRequest_Complete_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      PaymentComplete p_result{};
      PaymentRequest_Complete_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadResult(&p_result))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "PaymentRequest::Complete deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->Complete(
std::move(p_result));
      return true;
    }
    case internal::kPaymentRequest_CanMakePayment_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)payments::mojom::PaymentRequest::CanMakePayment",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::PaymentRequest_CanMakePayment_Params_Data* params =
          reinterpret_cast<internal::PaymentRequest_CanMakePayment_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      PaymentRequest_CanMakePayment_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "PaymentRequest::CanMakePayment deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->CanMakePayment();
      return true;
    }
  }
  return false;
}

// static
bool PaymentRequestStubDispatch::AcceptWithResponder(
    PaymentRequest* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kPaymentRequest_Init_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)payments::mojom::PaymentRequest::Init",
               "message", message->name());
#endif
      break;
    }
    case internal::kPaymentRequest_Show_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)payments::mojom::PaymentRequest::Show",
               "message", message->name());
#endif
      break;
    }
    case internal::kPaymentRequest_UpdateWith_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)payments::mojom::PaymentRequest::UpdateWith",
               "message", message->name());
#endif
      break;
    }
    case internal::kPaymentRequest_NoUpdatedPaymentDetails_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)payments::mojom::PaymentRequest::NoUpdatedPaymentDetails",
               "message", message->name());
#endif
      break;
    }
    case internal::kPaymentRequest_Abort_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)payments::mojom::PaymentRequest::Abort",
               "message", message->name());
#endif
      break;
    }
    case internal::kPaymentRequest_Complete_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)payments::mojom::PaymentRequest::Complete",
               "message", message->name());
#endif
      break;
    }
    case internal::kPaymentRequest_CanMakePayment_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)payments::mojom::PaymentRequest::CanMakePayment",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool PaymentRequestRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "PaymentRequest RequestValidator");

  switch (message->header()->name) {
    case internal::kPaymentRequest_Init_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PaymentRequest_Init_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kPaymentRequest_Show_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PaymentRequest_Show_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kPaymentRequest_UpdateWith_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PaymentRequest_UpdateWith_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kPaymentRequest_NoUpdatedPaymentDetails_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PaymentRequest_NoUpdatedPaymentDetails_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kPaymentRequest_Abort_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PaymentRequest_Abort_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kPaymentRequest_Complete_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PaymentRequest_Complete_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kPaymentRequest_CanMakePayment_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PaymentRequest_CanMakePayment_Params_Data>(
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

void PaymentRequestInterceptorForTesting::Init(PaymentRequestClientPtr client, std::vector<PaymentMethodDataPtr> method_data, PaymentDetailsPtr details, PaymentOptionsPtr options) {
  GetForwardingInterface()->Init(std::move(client), std::move(method_data), std::move(details), std::move(options));
}
void PaymentRequestInterceptorForTesting::Show(bool is_user_gesture) {
  GetForwardingInterface()->Show(std::move(is_user_gesture));
}
void PaymentRequestInterceptorForTesting::UpdateWith(PaymentDetailsPtr details) {
  GetForwardingInterface()->UpdateWith(std::move(details));
}
void PaymentRequestInterceptorForTesting::NoUpdatedPaymentDetails() {
  GetForwardingInterface()->NoUpdatedPaymentDetails();
}
void PaymentRequestInterceptorForTesting::Abort() {
  GetForwardingInterface()->Abort();
}
void PaymentRequestInterceptorForTesting::Complete(PaymentComplete result) {
  GetForwardingInterface()->Complete(std::move(result));
}
void PaymentRequestInterceptorForTesting::CanMakePayment() {
  GetForwardingInterface()->CanMakePayment();
}
PaymentRequestAsyncWaiter::PaymentRequestAsyncWaiter(
    PaymentRequest* proxy) : proxy_(proxy) {}

PaymentRequestAsyncWaiter::~PaymentRequestAsyncWaiter() = default;


}  // namespace mojom
}  // namespace payments

namespace mojo {


// static
bool StructTraits<::payments::mojom::PaymentResponse::DataView, ::payments::mojom::PaymentResponsePtr>::Read(
    ::payments::mojom::PaymentResponse::DataView input,
    ::payments::mojom::PaymentResponsePtr* output) {
  bool success = true;
  ::payments::mojom::PaymentResponsePtr result(::payments::mojom::PaymentResponse::New());
  
      if (!input.ReadMethodName(&result->method_name))
        success = false;
      if (!input.ReadStringifiedDetails(&result->stringified_details))
        success = false;
      if (!input.ReadShippingAddress(&result->shipping_address))
        success = false;
      if (!input.ReadShippingOption(&result->shipping_option))
        success = false;
      if (!input.ReadPayerName(&result->payer_name))
        success = false;
      if (!input.ReadPayerEmail(&result->payer_email))
        success = false;
      if (!input.ReadPayerPhone(&result->payer_phone))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::payments::mojom::PaymentItem::DataView, ::payments::mojom::PaymentItemPtr>::Read(
    ::payments::mojom::PaymentItem::DataView input,
    ::payments::mojom::PaymentItemPtr* output) {
  bool success = true;
  ::payments::mojom::PaymentItemPtr result(::payments::mojom::PaymentItem::New());
  
      if (!input.ReadLabel(&result->label))
        success = false;
      if (!input.ReadAmount(&result->amount))
        success = false;
      result->pending = input.pending();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::payments::mojom::PaymentShippingOption::DataView, ::payments::mojom::PaymentShippingOptionPtr>::Read(
    ::payments::mojom::PaymentShippingOption::DataView input,
    ::payments::mojom::PaymentShippingOptionPtr* output) {
  bool success = true;
  ::payments::mojom::PaymentShippingOptionPtr result(::payments::mojom::PaymentShippingOption::New());
  
      if (!input.ReadId(&result->id))
        success = false;
      if (!input.ReadLabel(&result->label))
        success = false;
      if (!input.ReadAmount(&result->amount))
        success = false;
      result->selected = input.selected();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::payments::mojom::AndroidPayTokenizationParameter::DataView, ::payments::mojom::AndroidPayTokenizationParameterPtr>::Read(
    ::payments::mojom::AndroidPayTokenizationParameter::DataView input,
    ::payments::mojom::AndroidPayTokenizationParameterPtr* output) {
  bool success = true;
  ::payments::mojom::AndroidPayTokenizationParameterPtr result(::payments::mojom::AndroidPayTokenizationParameter::New());
  
      if (!input.ReadKey(&result->key))
        success = false;
      if (!input.ReadValue(&result->value))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::payments::mojom::PaymentMethodData::DataView, ::payments::mojom::PaymentMethodDataPtr>::Read(
    ::payments::mojom::PaymentMethodData::DataView input,
    ::payments::mojom::PaymentMethodDataPtr* output) {
  bool success = true;
  ::payments::mojom::PaymentMethodDataPtr result(::payments::mojom::PaymentMethodData::New());
  
      if (!input.ReadSupportedMethods(&result->supported_methods))
        success = false;
      if (!input.ReadStringifiedData(&result->stringified_data))
        success = false;
      if (!input.ReadEnvironment(&result->environment))
        success = false;
      if (!input.ReadMerchantName(&result->merchant_name))
        success = false;
      if (!input.ReadMerchantId(&result->merchant_id))
        success = false;
      if (!input.ReadAllowedCardNetworks(&result->allowed_card_networks))
        success = false;
      if (!input.ReadTokenizationType(&result->tokenization_type))
        success = false;
      if (!input.ReadParameters(&result->parameters))
        success = false;
      result->min_google_play_services_version = input.min_google_play_services_version();
      result->api_version = input.api_version();
      if (!input.ReadSupportedNetworks(&result->supported_networks))
        success = false;
      if (!input.ReadSupportedTypes(&result->supported_types))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::payments::mojom::PaymentDetailsModifier::DataView, ::payments::mojom::PaymentDetailsModifierPtr>::Read(
    ::payments::mojom::PaymentDetailsModifier::DataView input,
    ::payments::mojom::PaymentDetailsModifierPtr* output) {
  bool success = true;
  ::payments::mojom::PaymentDetailsModifierPtr result(::payments::mojom::PaymentDetailsModifier::New());
  
      if (!input.ReadTotal(&result->total))
        success = false;
      if (!input.ReadAdditionalDisplayItems(&result->additional_display_items))
        success = false;
      if (!input.ReadMethodData(&result->method_data))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::payments::mojom::PaymentDetails::DataView, ::payments::mojom::PaymentDetailsPtr>::Read(
    ::payments::mojom::PaymentDetails::DataView input,
    ::payments::mojom::PaymentDetailsPtr* output) {
  bool success = true;
  ::payments::mojom::PaymentDetailsPtr result(::payments::mojom::PaymentDetails::New());
  
      if (!input.ReadTotal(&result->total))
        success = false;
      if (!input.ReadDisplayItems(&result->display_items))
        success = false;
      if (!input.ReadShippingOptions(&result->shipping_options))
        success = false;
      if (!input.ReadModifiers(&result->modifiers))
        success = false;
      if (!input.ReadError(&result->error))
        success = false;
      if (!input.ReadId(&result->id))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::payments::mojom::PaymentOptions::DataView, ::payments::mojom::PaymentOptionsPtr>::Read(
    ::payments::mojom::PaymentOptions::DataView input,
    ::payments::mojom::PaymentOptionsPtr* output) {
  bool success = true;
  ::payments::mojom::PaymentOptionsPtr result(::payments::mojom::PaymentOptions::New());
  
      result->request_payer_name = input.request_payer_name();
      result->request_payer_email = input.request_payer_email();
      result->request_payer_phone = input.request_payer_phone();
      result->request_shipping = input.request_shipping();
      if (!input.ReadShippingType(&result->shipping_type))
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