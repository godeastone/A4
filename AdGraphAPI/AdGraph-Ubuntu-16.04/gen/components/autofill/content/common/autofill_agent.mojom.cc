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

#include "components/autofill/content/common/autofill_agent.mojom.h"

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

#include "components/autofill/content/common/autofill_agent.mojom-shared-message-ids.h"
#include "components/autofill/content/common/autofill_types_struct_traits.h"
#include "mojo/public/cpp/base/string16_mojom_traits.h"
#include "mojo/public/cpp/base/text_direction_mojom_traits.h"
#include "mojo/public/cpp/base/time_mojom_traits.h"
#include "url/mojom/origin_mojom_traits.h"
#include "url/mojom/url_gurl_mojom_traits.h"
namespace autofill {
namespace mojom {
const char AutofillAgent::Name_[] = "autofill.mojom.AutofillAgent";

AutofillAgentProxy::AutofillAgentProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void AutofillAgentProxy::FillForm(
    int32_t in_id, const autofill::FormData& in_form) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "autofill::mojom::AutofillAgent::FillForm");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kAutofillAgent_FillForm_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::autofill::mojom::internal::AutofillAgent_FillForm_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->id = in_id;
  typename decltype(params->form)::BaseType::BufferWriter
      form_writer;
  mojo::internal::Serialize<::autofill::mojom::FormDataDataView>(
      in_form, buffer, &form_writer, &serialization_context);
  params->form.Set(
      form_writer.is_null() ? nullptr : form_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->form.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null form in AutofillAgent.FillForm request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void AutofillAgentProxy::PreviewForm(
    int32_t in_id, const autofill::FormData& in_form) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "autofill::mojom::AutofillAgent::PreviewForm");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kAutofillAgent_PreviewForm_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::autofill::mojom::internal::AutofillAgent_PreviewForm_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->id = in_id;
  typename decltype(params->form)::BaseType::BufferWriter
      form_writer;
  mojo::internal::Serialize<::autofill::mojom::FormDataDataView>(
      in_form, buffer, &form_writer, &serialization_context);
  params->form.Set(
      form_writer.is_null() ? nullptr : form_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->form.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null form in AutofillAgent.PreviewForm request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void AutofillAgentProxy::FieldTypePredictionsAvailable(
    const std::vector<autofill::FormDataPredictions>& in_forms) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "autofill::mojom::AutofillAgent::FieldTypePredictionsAvailable");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kAutofillAgent_FieldTypePredictionsAvailable_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::autofill::mojom::internal::AutofillAgent_FieldTypePredictionsAvailable_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->forms)::BaseType::BufferWriter
      forms_writer;
  const mojo::internal::ContainerValidateParams forms_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::autofill::mojom::FormDataPredictionsDataView>>(
      in_forms, buffer, &forms_writer, &forms_validate_params,
      &serialization_context);
  params->forms.Set(
      forms_writer.is_null() ? nullptr : forms_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->forms.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null forms in AutofillAgent.FieldTypePredictionsAvailable request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void AutofillAgentProxy::ClearSection(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "autofill::mojom::AutofillAgent::ClearSection");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kAutofillAgent_ClearSection_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::autofill::mojom::internal::AutofillAgent_ClearSection_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void AutofillAgentProxy::ClearPreviewedForm(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "autofill::mojom::AutofillAgent::ClearPreviewedForm");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kAutofillAgent_ClearPreviewedForm_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::autofill::mojom::internal::AutofillAgent_ClearPreviewedForm_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void AutofillAgentProxy::FillFieldWithValue(
    const base::string16& in_value) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "autofill::mojom::AutofillAgent::FillFieldWithValue");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kAutofillAgent_FillFieldWithValue_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::autofill::mojom::internal::AutofillAgent_FillFieldWithValue_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->value)::BaseType::BufferWriter
      value_writer;
  mojo::internal::Serialize<::mojo_base::mojom::String16DataView>(
      in_value, buffer, &value_writer, &serialization_context);
  params->value.Set(
      value_writer.is_null() ? nullptr : value_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->value.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null value in AutofillAgent.FillFieldWithValue request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void AutofillAgentProxy::PreviewFieldWithValue(
    const base::string16& in_value) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "autofill::mojom::AutofillAgent::PreviewFieldWithValue");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kAutofillAgent_PreviewFieldWithValue_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::autofill::mojom::internal::AutofillAgent_PreviewFieldWithValue_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->value)::BaseType::BufferWriter
      value_writer;
  mojo::internal::Serialize<::mojo_base::mojom::String16DataView>(
      in_value, buffer, &value_writer, &serialization_context);
  params->value.Set(
      value_writer.is_null() ? nullptr : value_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->value.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null value in AutofillAgent.PreviewFieldWithValue request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void AutofillAgentProxy::AcceptDataListSuggestion(
    const base::string16& in_value) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "autofill::mojom::AutofillAgent::AcceptDataListSuggestion");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kAutofillAgent_AcceptDataListSuggestion_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::autofill::mojom::internal::AutofillAgent_AcceptDataListSuggestion_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->value)::BaseType::BufferWriter
      value_writer;
  mojo::internal::Serialize<::mojo_base::mojom::String16DataView>(
      in_value, buffer, &value_writer, &serialization_context);
  params->value.Set(
      value_writer.is_null() ? nullptr : value_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->value.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null value in AutofillAgent.AcceptDataListSuggestion request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void AutofillAgentProxy::FillPasswordSuggestion(
    const base::string16& in_username, const base::string16& in_password) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "autofill::mojom::AutofillAgent::FillPasswordSuggestion");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kAutofillAgent_FillPasswordSuggestion_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::autofill::mojom::internal::AutofillAgent_FillPasswordSuggestion_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->username)::BaseType::BufferWriter
      username_writer;
  mojo::internal::Serialize<::mojo_base::mojom::String16DataView>(
      in_username, buffer, &username_writer, &serialization_context);
  params->username.Set(
      username_writer.is_null() ? nullptr : username_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->username.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null username in AutofillAgent.FillPasswordSuggestion request");
  typename decltype(params->password)::BaseType::BufferWriter
      password_writer;
  mojo::internal::Serialize<::mojo_base::mojom::String16DataView>(
      in_password, buffer, &password_writer, &serialization_context);
  params->password.Set(
      password_writer.is_null() ? nullptr : password_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->password.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null password in AutofillAgent.FillPasswordSuggestion request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void AutofillAgentProxy::PreviewPasswordSuggestion(
    const base::string16& in_username, const base::string16& in_password) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "autofill::mojom::AutofillAgent::PreviewPasswordSuggestion");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kAutofillAgent_PreviewPasswordSuggestion_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::autofill::mojom::internal::AutofillAgent_PreviewPasswordSuggestion_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->username)::BaseType::BufferWriter
      username_writer;
  mojo::internal::Serialize<::mojo_base::mojom::String16DataView>(
      in_username, buffer, &username_writer, &serialization_context);
  params->username.Set(
      username_writer.is_null() ? nullptr : username_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->username.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null username in AutofillAgent.PreviewPasswordSuggestion request");
  typename decltype(params->password)::BaseType::BufferWriter
      password_writer;
  mojo::internal::Serialize<::mojo_base::mojom::String16DataView>(
      in_password, buffer, &password_writer, &serialization_context);
  params->password.Set(
      password_writer.is_null() ? nullptr : password_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->password.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null password in AutofillAgent.PreviewPasswordSuggestion request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void AutofillAgentProxy::ShowInitialPasswordAccountSuggestions(
    int32_t in_key, const autofill::PasswordFormFillData& in_form_data) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "autofill::mojom::AutofillAgent::ShowInitialPasswordAccountSuggestions");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kAutofillAgent_ShowInitialPasswordAccountSuggestions_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::autofill::mojom::internal::AutofillAgent_ShowInitialPasswordAccountSuggestions_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->key = in_key;
  typename decltype(params->form_data)::BaseType::BufferWriter
      form_data_writer;
  mojo::internal::Serialize<::autofill::mojom::PasswordFormFillDataDataView>(
      in_form_data, buffer, &form_data_writer, &serialization_context);
  params->form_data.Set(
      form_data_writer.is_null() ? nullptr : form_data_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->form_data.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null form_data in AutofillAgent.ShowInitialPasswordAccountSuggestions request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void AutofillAgentProxy::SetUserGestureRequired(
    bool in_required) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "autofill::mojom::AutofillAgent::SetUserGestureRequired");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kAutofillAgent_SetUserGestureRequired_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::autofill::mojom::internal::AutofillAgent_SetUserGestureRequired_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->required = in_required;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void AutofillAgentProxy::SetSecureContextRequired(
    bool in_required) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "autofill::mojom::AutofillAgent::SetSecureContextRequired");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kAutofillAgent_SetSecureContextRequired_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::autofill::mojom::internal::AutofillAgent_SetSecureContextRequired_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->required = in_required;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void AutofillAgentProxy::SetFocusRequiresScroll(
    bool in_require) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "autofill::mojom::AutofillAgent::SetFocusRequiresScroll");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kAutofillAgent_SetFocusRequiresScroll_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::autofill::mojom::internal::AutofillAgent_SetFocusRequiresScroll_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->require = in_require;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void AutofillAgentProxy::SetQueryPasswordSuggestion(
    bool in_query) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "autofill::mojom::AutofillAgent::SetQueryPasswordSuggestion");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kAutofillAgent_SetQueryPasswordSuggestion_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::autofill::mojom::internal::AutofillAgent_SetQueryPasswordSuggestion_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->query = in_query;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool AutofillAgentStubDispatch::Accept(
    AutofillAgent* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kAutofillAgent_FillForm_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)autofill::mojom::AutofillAgent::FillForm",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::AutofillAgent_FillForm_Params_Data* params =
          reinterpret_cast<internal::AutofillAgent_FillForm_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int32_t p_id{};
      autofill::FormData p_form{};
      AutofillAgent_FillForm_ParamsDataView input_data_view(params, &serialization_context);
      
      p_id = input_data_view.id();
      if (!input_data_view.ReadForm(&p_form))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "AutofillAgent::FillForm deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->FillForm(
std::move(p_id), 
std::move(p_form));
      return true;
    }
    case internal::kAutofillAgent_PreviewForm_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)autofill::mojom::AutofillAgent::PreviewForm",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::AutofillAgent_PreviewForm_Params_Data* params =
          reinterpret_cast<internal::AutofillAgent_PreviewForm_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int32_t p_id{};
      autofill::FormData p_form{};
      AutofillAgent_PreviewForm_ParamsDataView input_data_view(params, &serialization_context);
      
      p_id = input_data_view.id();
      if (!input_data_view.ReadForm(&p_form))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "AutofillAgent::PreviewForm deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->PreviewForm(
std::move(p_id), 
std::move(p_form));
      return true;
    }
    case internal::kAutofillAgent_FieldTypePredictionsAvailable_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)autofill::mojom::AutofillAgent::FieldTypePredictionsAvailable",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::AutofillAgent_FieldTypePredictionsAvailable_Params_Data* params =
          reinterpret_cast<internal::AutofillAgent_FieldTypePredictionsAvailable_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::vector<autofill::FormDataPredictions> p_forms{};
      AutofillAgent_FieldTypePredictionsAvailable_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadForms(&p_forms))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "AutofillAgent::FieldTypePredictionsAvailable deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->FieldTypePredictionsAvailable(
std::move(p_forms));
      return true;
    }
    case internal::kAutofillAgent_ClearSection_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)autofill::mojom::AutofillAgent::ClearSection",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::AutofillAgent_ClearSection_Params_Data* params =
          reinterpret_cast<internal::AutofillAgent_ClearSection_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      AutofillAgent_ClearSection_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "AutofillAgent::ClearSection deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->ClearSection();
      return true;
    }
    case internal::kAutofillAgent_ClearPreviewedForm_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)autofill::mojom::AutofillAgent::ClearPreviewedForm",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::AutofillAgent_ClearPreviewedForm_Params_Data* params =
          reinterpret_cast<internal::AutofillAgent_ClearPreviewedForm_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      AutofillAgent_ClearPreviewedForm_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "AutofillAgent::ClearPreviewedForm deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->ClearPreviewedForm();
      return true;
    }
    case internal::kAutofillAgent_FillFieldWithValue_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)autofill::mojom::AutofillAgent::FillFieldWithValue",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::AutofillAgent_FillFieldWithValue_Params_Data* params =
          reinterpret_cast<internal::AutofillAgent_FillFieldWithValue_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      base::string16 p_value{};
      AutofillAgent_FillFieldWithValue_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadValue(&p_value))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "AutofillAgent::FillFieldWithValue deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->FillFieldWithValue(
std::move(p_value));
      return true;
    }
    case internal::kAutofillAgent_PreviewFieldWithValue_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)autofill::mojom::AutofillAgent::PreviewFieldWithValue",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::AutofillAgent_PreviewFieldWithValue_Params_Data* params =
          reinterpret_cast<internal::AutofillAgent_PreviewFieldWithValue_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      base::string16 p_value{};
      AutofillAgent_PreviewFieldWithValue_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadValue(&p_value))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "AutofillAgent::PreviewFieldWithValue deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->PreviewFieldWithValue(
std::move(p_value));
      return true;
    }
    case internal::kAutofillAgent_AcceptDataListSuggestion_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)autofill::mojom::AutofillAgent::AcceptDataListSuggestion",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::AutofillAgent_AcceptDataListSuggestion_Params_Data* params =
          reinterpret_cast<internal::AutofillAgent_AcceptDataListSuggestion_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      base::string16 p_value{};
      AutofillAgent_AcceptDataListSuggestion_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadValue(&p_value))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "AutofillAgent::AcceptDataListSuggestion deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->AcceptDataListSuggestion(
std::move(p_value));
      return true;
    }
    case internal::kAutofillAgent_FillPasswordSuggestion_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)autofill::mojom::AutofillAgent::FillPasswordSuggestion",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::AutofillAgent_FillPasswordSuggestion_Params_Data* params =
          reinterpret_cast<internal::AutofillAgent_FillPasswordSuggestion_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      base::string16 p_username{};
      base::string16 p_password{};
      AutofillAgent_FillPasswordSuggestion_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadUsername(&p_username))
        success = false;
      if (!input_data_view.ReadPassword(&p_password))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "AutofillAgent::FillPasswordSuggestion deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->FillPasswordSuggestion(
std::move(p_username), 
std::move(p_password));
      return true;
    }
    case internal::kAutofillAgent_PreviewPasswordSuggestion_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)autofill::mojom::AutofillAgent::PreviewPasswordSuggestion",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::AutofillAgent_PreviewPasswordSuggestion_Params_Data* params =
          reinterpret_cast<internal::AutofillAgent_PreviewPasswordSuggestion_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      base::string16 p_username{};
      base::string16 p_password{};
      AutofillAgent_PreviewPasswordSuggestion_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadUsername(&p_username))
        success = false;
      if (!input_data_view.ReadPassword(&p_password))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "AutofillAgent::PreviewPasswordSuggestion deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->PreviewPasswordSuggestion(
std::move(p_username), 
std::move(p_password));
      return true;
    }
    case internal::kAutofillAgent_ShowInitialPasswordAccountSuggestions_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)autofill::mojom::AutofillAgent::ShowInitialPasswordAccountSuggestions",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::AutofillAgent_ShowInitialPasswordAccountSuggestions_Params_Data* params =
          reinterpret_cast<internal::AutofillAgent_ShowInitialPasswordAccountSuggestions_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int32_t p_key{};
      autofill::PasswordFormFillData p_form_data{};
      AutofillAgent_ShowInitialPasswordAccountSuggestions_ParamsDataView input_data_view(params, &serialization_context);
      
      p_key = input_data_view.key();
      if (!input_data_view.ReadFormData(&p_form_data))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "AutofillAgent::ShowInitialPasswordAccountSuggestions deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->ShowInitialPasswordAccountSuggestions(
std::move(p_key), 
std::move(p_form_data));
      return true;
    }
    case internal::kAutofillAgent_SetUserGestureRequired_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)autofill::mojom::AutofillAgent::SetUserGestureRequired",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::AutofillAgent_SetUserGestureRequired_Params_Data* params =
          reinterpret_cast<internal::AutofillAgent_SetUserGestureRequired_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      bool p_required{};
      AutofillAgent_SetUserGestureRequired_ParamsDataView input_data_view(params, &serialization_context);
      
      p_required = input_data_view.required();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "AutofillAgent::SetUserGestureRequired deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->SetUserGestureRequired(
std::move(p_required));
      return true;
    }
    case internal::kAutofillAgent_SetSecureContextRequired_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)autofill::mojom::AutofillAgent::SetSecureContextRequired",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::AutofillAgent_SetSecureContextRequired_Params_Data* params =
          reinterpret_cast<internal::AutofillAgent_SetSecureContextRequired_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      bool p_required{};
      AutofillAgent_SetSecureContextRequired_ParamsDataView input_data_view(params, &serialization_context);
      
      p_required = input_data_view.required();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "AutofillAgent::SetSecureContextRequired deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->SetSecureContextRequired(
std::move(p_required));
      return true;
    }
    case internal::kAutofillAgent_SetFocusRequiresScroll_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)autofill::mojom::AutofillAgent::SetFocusRequiresScroll",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::AutofillAgent_SetFocusRequiresScroll_Params_Data* params =
          reinterpret_cast<internal::AutofillAgent_SetFocusRequiresScroll_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      bool p_require{};
      AutofillAgent_SetFocusRequiresScroll_ParamsDataView input_data_view(params, &serialization_context);
      
      p_require = input_data_view.require();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "AutofillAgent::SetFocusRequiresScroll deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->SetFocusRequiresScroll(
std::move(p_require));
      return true;
    }
    case internal::kAutofillAgent_SetQueryPasswordSuggestion_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)autofill::mojom::AutofillAgent::SetQueryPasswordSuggestion",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::AutofillAgent_SetQueryPasswordSuggestion_Params_Data* params =
          reinterpret_cast<internal::AutofillAgent_SetQueryPasswordSuggestion_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      bool p_query{};
      AutofillAgent_SetQueryPasswordSuggestion_ParamsDataView input_data_view(params, &serialization_context);
      
      p_query = input_data_view.query();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "AutofillAgent::SetQueryPasswordSuggestion deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->SetQueryPasswordSuggestion(
std::move(p_query));
      return true;
    }
  }
  return false;
}

// static
bool AutofillAgentStubDispatch::AcceptWithResponder(
    AutofillAgent* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kAutofillAgent_FillForm_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)autofill::mojom::AutofillAgent::FillForm",
               "message", message->name());
#endif
      break;
    }
    case internal::kAutofillAgent_PreviewForm_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)autofill::mojom::AutofillAgent::PreviewForm",
               "message", message->name());
#endif
      break;
    }
    case internal::kAutofillAgent_FieldTypePredictionsAvailable_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)autofill::mojom::AutofillAgent::FieldTypePredictionsAvailable",
               "message", message->name());
#endif
      break;
    }
    case internal::kAutofillAgent_ClearSection_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)autofill::mojom::AutofillAgent::ClearSection",
               "message", message->name());
#endif
      break;
    }
    case internal::kAutofillAgent_ClearPreviewedForm_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)autofill::mojom::AutofillAgent::ClearPreviewedForm",
               "message", message->name());
#endif
      break;
    }
    case internal::kAutofillAgent_FillFieldWithValue_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)autofill::mojom::AutofillAgent::FillFieldWithValue",
               "message", message->name());
#endif
      break;
    }
    case internal::kAutofillAgent_PreviewFieldWithValue_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)autofill::mojom::AutofillAgent::PreviewFieldWithValue",
               "message", message->name());
#endif
      break;
    }
    case internal::kAutofillAgent_AcceptDataListSuggestion_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)autofill::mojom::AutofillAgent::AcceptDataListSuggestion",
               "message", message->name());
#endif
      break;
    }
    case internal::kAutofillAgent_FillPasswordSuggestion_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)autofill::mojom::AutofillAgent::FillPasswordSuggestion",
               "message", message->name());
#endif
      break;
    }
    case internal::kAutofillAgent_PreviewPasswordSuggestion_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)autofill::mojom::AutofillAgent::PreviewPasswordSuggestion",
               "message", message->name());
#endif
      break;
    }
    case internal::kAutofillAgent_ShowInitialPasswordAccountSuggestions_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)autofill::mojom::AutofillAgent::ShowInitialPasswordAccountSuggestions",
               "message", message->name());
#endif
      break;
    }
    case internal::kAutofillAgent_SetUserGestureRequired_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)autofill::mojom::AutofillAgent::SetUserGestureRequired",
               "message", message->name());
#endif
      break;
    }
    case internal::kAutofillAgent_SetSecureContextRequired_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)autofill::mojom::AutofillAgent::SetSecureContextRequired",
               "message", message->name());
#endif
      break;
    }
    case internal::kAutofillAgent_SetFocusRequiresScroll_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)autofill::mojom::AutofillAgent::SetFocusRequiresScroll",
               "message", message->name());
#endif
      break;
    }
    case internal::kAutofillAgent_SetQueryPasswordSuggestion_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)autofill::mojom::AutofillAgent::SetQueryPasswordSuggestion",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool AutofillAgentRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "AutofillAgent RequestValidator");

  switch (message->header()->name) {
    case internal::kAutofillAgent_FillForm_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::AutofillAgent_FillForm_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kAutofillAgent_PreviewForm_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::AutofillAgent_PreviewForm_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kAutofillAgent_FieldTypePredictionsAvailable_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::AutofillAgent_FieldTypePredictionsAvailable_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kAutofillAgent_ClearSection_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::AutofillAgent_ClearSection_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kAutofillAgent_ClearPreviewedForm_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::AutofillAgent_ClearPreviewedForm_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kAutofillAgent_FillFieldWithValue_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::AutofillAgent_FillFieldWithValue_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kAutofillAgent_PreviewFieldWithValue_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::AutofillAgent_PreviewFieldWithValue_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kAutofillAgent_AcceptDataListSuggestion_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::AutofillAgent_AcceptDataListSuggestion_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kAutofillAgent_FillPasswordSuggestion_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::AutofillAgent_FillPasswordSuggestion_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kAutofillAgent_PreviewPasswordSuggestion_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::AutofillAgent_PreviewPasswordSuggestion_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kAutofillAgent_ShowInitialPasswordAccountSuggestions_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::AutofillAgent_ShowInitialPasswordAccountSuggestions_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kAutofillAgent_SetUserGestureRequired_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::AutofillAgent_SetUserGestureRequired_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kAutofillAgent_SetSecureContextRequired_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::AutofillAgent_SetSecureContextRequired_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kAutofillAgent_SetFocusRequiresScroll_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::AutofillAgent_SetFocusRequiresScroll_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kAutofillAgent_SetQueryPasswordSuggestion_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::AutofillAgent_SetQueryPasswordSuggestion_Params_Data>(
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

void AutofillAgentInterceptorForTesting::FillForm(int32_t id, const autofill::FormData& form) {
  GetForwardingInterface()->FillForm(std::move(id), std::move(form));
}
void AutofillAgentInterceptorForTesting::PreviewForm(int32_t id, const autofill::FormData& form) {
  GetForwardingInterface()->PreviewForm(std::move(id), std::move(form));
}
void AutofillAgentInterceptorForTesting::FieldTypePredictionsAvailable(const std::vector<autofill::FormDataPredictions>& forms) {
  GetForwardingInterface()->FieldTypePredictionsAvailable(std::move(forms));
}
void AutofillAgentInterceptorForTesting::ClearSection() {
  GetForwardingInterface()->ClearSection();
}
void AutofillAgentInterceptorForTesting::ClearPreviewedForm() {
  GetForwardingInterface()->ClearPreviewedForm();
}
void AutofillAgentInterceptorForTesting::FillFieldWithValue(const base::string16& value) {
  GetForwardingInterface()->FillFieldWithValue(std::move(value));
}
void AutofillAgentInterceptorForTesting::PreviewFieldWithValue(const base::string16& value) {
  GetForwardingInterface()->PreviewFieldWithValue(std::move(value));
}
void AutofillAgentInterceptorForTesting::AcceptDataListSuggestion(const base::string16& value) {
  GetForwardingInterface()->AcceptDataListSuggestion(std::move(value));
}
void AutofillAgentInterceptorForTesting::FillPasswordSuggestion(const base::string16& username, const base::string16& password) {
  GetForwardingInterface()->FillPasswordSuggestion(std::move(username), std::move(password));
}
void AutofillAgentInterceptorForTesting::PreviewPasswordSuggestion(const base::string16& username, const base::string16& password) {
  GetForwardingInterface()->PreviewPasswordSuggestion(std::move(username), std::move(password));
}
void AutofillAgentInterceptorForTesting::ShowInitialPasswordAccountSuggestions(int32_t key, const autofill::PasswordFormFillData& form_data) {
  GetForwardingInterface()->ShowInitialPasswordAccountSuggestions(std::move(key), std::move(form_data));
}
void AutofillAgentInterceptorForTesting::SetUserGestureRequired(bool required) {
  GetForwardingInterface()->SetUserGestureRequired(std::move(required));
}
void AutofillAgentInterceptorForTesting::SetSecureContextRequired(bool required) {
  GetForwardingInterface()->SetSecureContextRequired(std::move(required));
}
void AutofillAgentInterceptorForTesting::SetFocusRequiresScroll(bool require) {
  GetForwardingInterface()->SetFocusRequiresScroll(std::move(require));
}
void AutofillAgentInterceptorForTesting::SetQueryPasswordSuggestion(bool query) {
  GetForwardingInterface()->SetQueryPasswordSuggestion(std::move(query));
}
AutofillAgentAsyncWaiter::AutofillAgentAsyncWaiter(
    AutofillAgent* proxy) : proxy_(proxy) {}

AutofillAgentAsyncWaiter::~AutofillAgentAsyncWaiter() = default;


const char PasswordAutofillAgent::Name_[] = "autofill.mojom.PasswordAutofillAgent";

class PasswordAutofillAgent_FindFocusedPasswordForm_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  PasswordAutofillAgent_FindFocusedPasswordForm_ForwardToCallback(
      PasswordAutofillAgent::FindFocusedPasswordFormCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  PasswordAutofillAgent::FindFocusedPasswordFormCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(PasswordAutofillAgent_FindFocusedPasswordForm_ForwardToCallback);
};

PasswordAutofillAgentProxy::PasswordAutofillAgentProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void PasswordAutofillAgentProxy::FillPasswordForm(
    int32_t in_key, const autofill::PasswordFormFillData& in_form_data) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "autofill::mojom::PasswordAutofillAgent::FillPasswordForm");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPasswordAutofillAgent_FillPasswordForm_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::autofill::mojom::internal::PasswordAutofillAgent_FillPasswordForm_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->key = in_key;
  typename decltype(params->form_data)::BaseType::BufferWriter
      form_data_writer;
  mojo::internal::Serialize<::autofill::mojom::PasswordFormFillDataDataView>(
      in_form_data, buffer, &form_data_writer, &serialization_context);
  params->form_data.Set(
      form_data_writer.is_null() ? nullptr : form_data_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->form_data.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null form_data in PasswordAutofillAgent.FillPasswordForm request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void PasswordAutofillAgentProxy::SetLoggingState(
    bool in_active) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "autofill::mojom::PasswordAutofillAgent::SetLoggingState");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPasswordAutofillAgent_SetLoggingState_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::autofill::mojom::internal::PasswordAutofillAgent_SetLoggingState_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->active = in_active;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void PasswordAutofillAgentProxy::AutofillUsernameAndPasswordDataReceived(
    const autofill::FormsPredictionsMap& in_predictions) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "autofill::mojom::PasswordAutofillAgent::AutofillUsernameAndPasswordDataReceived");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPasswordAutofillAgent_AutofillUsernameAndPasswordDataReceived_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::autofill::mojom::internal::PasswordAutofillAgent_AutofillUsernameAndPasswordDataReceived_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->predictions)::BaseType::BufferWriter
      predictions_writer;
  mojo::internal::Serialize<::autofill::mojom::FormsPredictionsMapDataView>(
      in_predictions, buffer, &predictions_writer, &serialization_context);
  params->predictions.Set(
      predictions_writer.is_null() ? nullptr : predictions_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->predictions.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null predictions in PasswordAutofillAgent.AutofillUsernameAndPasswordDataReceived request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void PasswordAutofillAgentProxy::FindFocusedPasswordForm(
    FindFocusedPasswordFormCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "autofill::mojom::PasswordAutofillAgent::FindFocusedPasswordForm");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPasswordAutofillAgent_FindFocusedPasswordForm_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::autofill::mojom::internal::PasswordAutofillAgent_FindFocusedPasswordForm_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new PasswordAutofillAgent_FindFocusedPasswordForm_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void PasswordAutofillAgentProxy::BlacklistedFormFound(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "autofill::mojom::PasswordAutofillAgent::BlacklistedFormFound");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPasswordAutofillAgent_BlacklistedFormFound_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::autofill::mojom::internal::PasswordAutofillAgent_BlacklistedFormFound_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}
class PasswordAutofillAgent_FindFocusedPasswordForm_ProxyToResponder {
 public:
  static PasswordAutofillAgent::FindFocusedPasswordFormCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<PasswordAutofillAgent_FindFocusedPasswordForm_ProxyToResponder> proxy(
        new PasswordAutofillAgent_FindFocusedPasswordForm_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&PasswordAutofillAgent_FindFocusedPasswordForm_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~PasswordAutofillAgent_FindFocusedPasswordForm_ProxyToResponder() {
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
  PasswordAutofillAgent_FindFocusedPasswordForm_ProxyToResponder(
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
        << "PasswordAutofillAgent::FindFocusedPasswordFormCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      const autofill::PasswordForm& in_form);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(PasswordAutofillAgent_FindFocusedPasswordForm_ProxyToResponder);
};

bool PasswordAutofillAgent_FindFocusedPasswordForm_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "autofill::mojom::PasswordAutofillAgent::FindFocusedPasswordFormCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::PasswordAutofillAgent_FindFocusedPasswordForm_ResponseParams_Data* params =
      reinterpret_cast<
          internal::PasswordAutofillAgent_FindFocusedPasswordForm_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  autofill::PasswordForm p_form{};
  PasswordAutofillAgent_FindFocusedPasswordForm_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadForm(&p_form))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "PasswordAutofillAgent::FindFocusedPasswordForm response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_form));
  return true;
}

void PasswordAutofillAgent_FindFocusedPasswordForm_ProxyToResponder::Run(
    const autofill::PasswordForm& in_form) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPasswordAutofillAgent_FindFocusedPasswordForm_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::autofill::mojom::internal::PasswordAutofillAgent_FindFocusedPasswordForm_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->form)::BaseType::BufferWriter
      form_writer;
  mojo::internal::Serialize<::autofill::mojom::PasswordFormDataView>(
      in_form, buffer, &form_writer, &serialization_context);
  params->form.Set(
      form_writer.is_null() ? nullptr : form_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->form.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null form in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)autofill::mojom::PasswordAutofillAgent::FindFocusedPasswordFormCallback",
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
bool PasswordAutofillAgentStubDispatch::Accept(
    PasswordAutofillAgent* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kPasswordAutofillAgent_FillPasswordForm_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)autofill::mojom::PasswordAutofillAgent::FillPasswordForm",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::PasswordAutofillAgent_FillPasswordForm_Params_Data* params =
          reinterpret_cast<internal::PasswordAutofillAgent_FillPasswordForm_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int32_t p_key{};
      autofill::PasswordFormFillData p_form_data{};
      PasswordAutofillAgent_FillPasswordForm_ParamsDataView input_data_view(params, &serialization_context);
      
      p_key = input_data_view.key();
      if (!input_data_view.ReadFormData(&p_form_data))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "PasswordAutofillAgent::FillPasswordForm deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->FillPasswordForm(
std::move(p_key), 
std::move(p_form_data));
      return true;
    }
    case internal::kPasswordAutofillAgent_SetLoggingState_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)autofill::mojom::PasswordAutofillAgent::SetLoggingState",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::PasswordAutofillAgent_SetLoggingState_Params_Data* params =
          reinterpret_cast<internal::PasswordAutofillAgent_SetLoggingState_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      bool p_active{};
      PasswordAutofillAgent_SetLoggingState_ParamsDataView input_data_view(params, &serialization_context);
      
      p_active = input_data_view.active();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "PasswordAutofillAgent::SetLoggingState deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->SetLoggingState(
std::move(p_active));
      return true;
    }
    case internal::kPasswordAutofillAgent_AutofillUsernameAndPasswordDataReceived_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)autofill::mojom::PasswordAutofillAgent::AutofillUsernameAndPasswordDataReceived",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::PasswordAutofillAgent_AutofillUsernameAndPasswordDataReceived_Params_Data* params =
          reinterpret_cast<internal::PasswordAutofillAgent_AutofillUsernameAndPasswordDataReceived_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      autofill::FormsPredictionsMap p_predictions{};
      PasswordAutofillAgent_AutofillUsernameAndPasswordDataReceived_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadPredictions(&p_predictions))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "PasswordAutofillAgent::AutofillUsernameAndPasswordDataReceived deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->AutofillUsernameAndPasswordDataReceived(
std::move(p_predictions));
      return true;
    }
    case internal::kPasswordAutofillAgent_FindFocusedPasswordForm_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)autofill::mojom::PasswordAutofillAgent::FindFocusedPasswordForm",
               "message", message->name());
#endif
      break;
    }
    case internal::kPasswordAutofillAgent_BlacklistedFormFound_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)autofill::mojom::PasswordAutofillAgent::BlacklistedFormFound",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::PasswordAutofillAgent_BlacklistedFormFound_Params_Data* params =
          reinterpret_cast<internal::PasswordAutofillAgent_BlacklistedFormFound_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      PasswordAutofillAgent_BlacklistedFormFound_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "PasswordAutofillAgent::BlacklistedFormFound deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->BlacklistedFormFound();
      return true;
    }
  }
  return false;
}

// static
bool PasswordAutofillAgentStubDispatch::AcceptWithResponder(
    PasswordAutofillAgent* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kPasswordAutofillAgent_FillPasswordForm_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)autofill::mojom::PasswordAutofillAgent::FillPasswordForm",
               "message", message->name());
#endif
      break;
    }
    case internal::kPasswordAutofillAgent_SetLoggingState_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)autofill::mojom::PasswordAutofillAgent::SetLoggingState",
               "message", message->name());
#endif
      break;
    }
    case internal::kPasswordAutofillAgent_AutofillUsernameAndPasswordDataReceived_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)autofill::mojom::PasswordAutofillAgent::AutofillUsernameAndPasswordDataReceived",
               "message", message->name());
#endif
      break;
    }
    case internal::kPasswordAutofillAgent_FindFocusedPasswordForm_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)autofill::mojom::PasswordAutofillAgent::FindFocusedPasswordForm",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::PasswordAutofillAgent_FindFocusedPasswordForm_Params_Data* params =
          reinterpret_cast<
              internal::PasswordAutofillAgent_FindFocusedPasswordForm_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      PasswordAutofillAgent_FindFocusedPasswordForm_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "PasswordAutofillAgent::FindFocusedPasswordForm deserializer");
        return false;
      }
      PasswordAutofillAgent::FindFocusedPasswordFormCallback callback =
          PasswordAutofillAgent_FindFocusedPasswordForm_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->FindFocusedPasswordForm(std::move(callback));
      return true;
    }
    case internal::kPasswordAutofillAgent_BlacklistedFormFound_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)autofill::mojom::PasswordAutofillAgent::BlacklistedFormFound",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool PasswordAutofillAgentRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "PasswordAutofillAgent RequestValidator");

  switch (message->header()->name) {
    case internal::kPasswordAutofillAgent_FillPasswordForm_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PasswordAutofillAgent_FillPasswordForm_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kPasswordAutofillAgent_SetLoggingState_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PasswordAutofillAgent_SetLoggingState_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kPasswordAutofillAgent_AutofillUsernameAndPasswordDataReceived_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PasswordAutofillAgent_AutofillUsernameAndPasswordDataReceived_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kPasswordAutofillAgent_FindFocusedPasswordForm_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PasswordAutofillAgent_FindFocusedPasswordForm_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kPasswordAutofillAgent_BlacklistedFormFound_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PasswordAutofillAgent_BlacklistedFormFound_Params_Data>(
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

bool PasswordAutofillAgentResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "PasswordAutofillAgent ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kPasswordAutofillAgent_FindFocusedPasswordForm_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::PasswordAutofillAgent_FindFocusedPasswordForm_ResponseParams_Data>(
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
void PasswordAutofillAgentInterceptorForTesting::FillPasswordForm(int32_t key, const autofill::PasswordFormFillData& form_data) {
  GetForwardingInterface()->FillPasswordForm(std::move(key), std::move(form_data));
}
void PasswordAutofillAgentInterceptorForTesting::SetLoggingState(bool active) {
  GetForwardingInterface()->SetLoggingState(std::move(active));
}
void PasswordAutofillAgentInterceptorForTesting::AutofillUsernameAndPasswordDataReceived(const autofill::FormsPredictionsMap& predictions) {
  GetForwardingInterface()->AutofillUsernameAndPasswordDataReceived(std::move(predictions));
}
void PasswordAutofillAgentInterceptorForTesting::FindFocusedPasswordForm(FindFocusedPasswordFormCallback callback) {
  GetForwardingInterface()->FindFocusedPasswordForm(std::move(callback));
}
void PasswordAutofillAgentInterceptorForTesting::BlacklistedFormFound() {
  GetForwardingInterface()->BlacklistedFormFound();
}
PasswordAutofillAgentAsyncWaiter::PasswordAutofillAgentAsyncWaiter(
    PasswordAutofillAgent* proxy) : proxy_(proxy) {}

PasswordAutofillAgentAsyncWaiter::~PasswordAutofillAgentAsyncWaiter() = default;

void PasswordAutofillAgentAsyncWaiter::FindFocusedPasswordForm(
    autofill::PasswordForm* out_form) {
  base::RunLoop loop;
  proxy_->FindFocusedPasswordForm(
      base::BindOnce(
          [](base::RunLoop* loop,
             autofill::PasswordForm* out_form
,
             const autofill::PasswordForm& form) {*out_form = std::move(form);
            loop->Quit();
          },
          &loop,
          out_form));
  loop.Run();
}

const char PasswordGenerationAgent::Name_[] = "autofill.mojom.PasswordGenerationAgent";

PasswordGenerationAgentProxy::PasswordGenerationAgentProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void PasswordGenerationAgentProxy::GeneratedPasswordAccepted(
    const base::string16& in_generated_password) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "autofill::mojom::PasswordGenerationAgent::GeneratedPasswordAccepted");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPasswordGenerationAgent_GeneratedPasswordAccepted_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::autofill::mojom::internal::PasswordGenerationAgent_GeneratedPasswordAccepted_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->generated_password)::BaseType::BufferWriter
      generated_password_writer;
  mojo::internal::Serialize<::mojo_base::mojom::String16DataView>(
      in_generated_password, buffer, &generated_password_writer, &serialization_context);
  params->generated_password.Set(
      generated_password_writer.is_null() ? nullptr : generated_password_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->generated_password.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null generated_password in PasswordGenerationAgent.GeneratedPasswordAccepted request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void PasswordGenerationAgentProxy::UserTriggeredGeneratePassword(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "autofill::mojom::PasswordGenerationAgent::UserTriggeredGeneratePassword");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPasswordGenerationAgent_UserTriggeredGeneratePassword_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::autofill::mojom::internal::PasswordGenerationAgent_UserTriggeredGeneratePassword_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void PasswordGenerationAgentProxy::UserSelectedManualGenerationOption(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "autofill::mojom::PasswordGenerationAgent::UserSelectedManualGenerationOption");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPasswordGenerationAgent_UserSelectedManualGenerationOption_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::autofill::mojom::internal::PasswordGenerationAgent_UserSelectedManualGenerationOption_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void PasswordGenerationAgentProxy::FormNotBlacklisted(
    const autofill::PasswordForm& in_form) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "autofill::mojom::PasswordGenerationAgent::FormNotBlacklisted");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPasswordGenerationAgent_FormNotBlacklisted_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::autofill::mojom::internal::PasswordGenerationAgent_FormNotBlacklisted_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->form)::BaseType::BufferWriter
      form_writer;
  mojo::internal::Serialize<::autofill::mojom::PasswordFormDataView>(
      in_form, buffer, &form_writer, &serialization_context);
  params->form.Set(
      form_writer.is_null() ? nullptr : form_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->form.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null form in PasswordGenerationAgent.FormNotBlacklisted request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void PasswordGenerationAgentProxy::FoundFormsEligibleForGeneration(
    const std::vector<autofill::PasswordFormGenerationData>& in_forms) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "autofill::mojom::PasswordGenerationAgent::FoundFormsEligibleForGeneration");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPasswordGenerationAgent_FoundFormsEligibleForGeneration_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::autofill::mojom::internal::PasswordGenerationAgent_FoundFormsEligibleForGeneration_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->forms)::BaseType::BufferWriter
      forms_writer;
  const mojo::internal::ContainerValidateParams forms_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::autofill::mojom::PasswordFormGenerationDataDataView>>(
      in_forms, buffer, &forms_writer, &forms_validate_params,
      &serialization_context);
  params->forms.Set(
      forms_writer.is_null() ? nullptr : forms_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->forms.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null forms in PasswordGenerationAgent.FoundFormsEligibleForGeneration request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void PasswordGenerationAgentProxy::AllowToRunFormClassifier(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "autofill::mojom::PasswordGenerationAgent::AllowToRunFormClassifier");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPasswordGenerationAgent_AllowToRunFormClassifier_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::autofill::mojom::internal::PasswordGenerationAgent_AllowToRunFormClassifier_Params_Data::BufferWriter
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
bool PasswordGenerationAgentStubDispatch::Accept(
    PasswordGenerationAgent* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kPasswordGenerationAgent_GeneratedPasswordAccepted_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)autofill::mojom::PasswordGenerationAgent::GeneratedPasswordAccepted",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::PasswordGenerationAgent_GeneratedPasswordAccepted_Params_Data* params =
          reinterpret_cast<internal::PasswordGenerationAgent_GeneratedPasswordAccepted_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      base::string16 p_generated_password{};
      PasswordGenerationAgent_GeneratedPasswordAccepted_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadGeneratedPassword(&p_generated_password))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "PasswordGenerationAgent::GeneratedPasswordAccepted deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->GeneratedPasswordAccepted(
std::move(p_generated_password));
      return true;
    }
    case internal::kPasswordGenerationAgent_UserTriggeredGeneratePassword_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)autofill::mojom::PasswordGenerationAgent::UserTriggeredGeneratePassword",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::PasswordGenerationAgent_UserTriggeredGeneratePassword_Params_Data* params =
          reinterpret_cast<internal::PasswordGenerationAgent_UserTriggeredGeneratePassword_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      PasswordGenerationAgent_UserTriggeredGeneratePassword_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "PasswordGenerationAgent::UserTriggeredGeneratePassword deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->UserTriggeredGeneratePassword();
      return true;
    }
    case internal::kPasswordGenerationAgent_UserSelectedManualGenerationOption_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)autofill::mojom::PasswordGenerationAgent::UserSelectedManualGenerationOption",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::PasswordGenerationAgent_UserSelectedManualGenerationOption_Params_Data* params =
          reinterpret_cast<internal::PasswordGenerationAgent_UserSelectedManualGenerationOption_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      PasswordGenerationAgent_UserSelectedManualGenerationOption_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "PasswordGenerationAgent::UserSelectedManualGenerationOption deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->UserSelectedManualGenerationOption();
      return true;
    }
    case internal::kPasswordGenerationAgent_FormNotBlacklisted_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)autofill::mojom::PasswordGenerationAgent::FormNotBlacklisted",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::PasswordGenerationAgent_FormNotBlacklisted_Params_Data* params =
          reinterpret_cast<internal::PasswordGenerationAgent_FormNotBlacklisted_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      autofill::PasswordForm p_form{};
      PasswordGenerationAgent_FormNotBlacklisted_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadForm(&p_form))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "PasswordGenerationAgent::FormNotBlacklisted deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->FormNotBlacklisted(
std::move(p_form));
      return true;
    }
    case internal::kPasswordGenerationAgent_FoundFormsEligibleForGeneration_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)autofill::mojom::PasswordGenerationAgent::FoundFormsEligibleForGeneration",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::PasswordGenerationAgent_FoundFormsEligibleForGeneration_Params_Data* params =
          reinterpret_cast<internal::PasswordGenerationAgent_FoundFormsEligibleForGeneration_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::vector<autofill::PasswordFormGenerationData> p_forms{};
      PasswordGenerationAgent_FoundFormsEligibleForGeneration_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadForms(&p_forms))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "PasswordGenerationAgent::FoundFormsEligibleForGeneration deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->FoundFormsEligibleForGeneration(
std::move(p_forms));
      return true;
    }
    case internal::kPasswordGenerationAgent_AllowToRunFormClassifier_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)autofill::mojom::PasswordGenerationAgent::AllowToRunFormClassifier",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::PasswordGenerationAgent_AllowToRunFormClassifier_Params_Data* params =
          reinterpret_cast<internal::PasswordGenerationAgent_AllowToRunFormClassifier_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      PasswordGenerationAgent_AllowToRunFormClassifier_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "PasswordGenerationAgent::AllowToRunFormClassifier deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->AllowToRunFormClassifier();
      return true;
    }
  }
  return false;
}

// static
bool PasswordGenerationAgentStubDispatch::AcceptWithResponder(
    PasswordGenerationAgent* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kPasswordGenerationAgent_GeneratedPasswordAccepted_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)autofill::mojom::PasswordGenerationAgent::GeneratedPasswordAccepted",
               "message", message->name());
#endif
      break;
    }
    case internal::kPasswordGenerationAgent_UserTriggeredGeneratePassword_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)autofill::mojom::PasswordGenerationAgent::UserTriggeredGeneratePassword",
               "message", message->name());
#endif
      break;
    }
    case internal::kPasswordGenerationAgent_UserSelectedManualGenerationOption_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)autofill::mojom::PasswordGenerationAgent::UserSelectedManualGenerationOption",
               "message", message->name());
#endif
      break;
    }
    case internal::kPasswordGenerationAgent_FormNotBlacklisted_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)autofill::mojom::PasswordGenerationAgent::FormNotBlacklisted",
               "message", message->name());
#endif
      break;
    }
    case internal::kPasswordGenerationAgent_FoundFormsEligibleForGeneration_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)autofill::mojom::PasswordGenerationAgent::FoundFormsEligibleForGeneration",
               "message", message->name());
#endif
      break;
    }
    case internal::kPasswordGenerationAgent_AllowToRunFormClassifier_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)autofill::mojom::PasswordGenerationAgent::AllowToRunFormClassifier",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool PasswordGenerationAgentRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "PasswordGenerationAgent RequestValidator");

  switch (message->header()->name) {
    case internal::kPasswordGenerationAgent_GeneratedPasswordAccepted_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PasswordGenerationAgent_GeneratedPasswordAccepted_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kPasswordGenerationAgent_UserTriggeredGeneratePassword_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PasswordGenerationAgent_UserTriggeredGeneratePassword_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kPasswordGenerationAgent_UserSelectedManualGenerationOption_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PasswordGenerationAgent_UserSelectedManualGenerationOption_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kPasswordGenerationAgent_FormNotBlacklisted_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PasswordGenerationAgent_FormNotBlacklisted_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kPasswordGenerationAgent_FoundFormsEligibleForGeneration_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PasswordGenerationAgent_FoundFormsEligibleForGeneration_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kPasswordGenerationAgent_AllowToRunFormClassifier_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PasswordGenerationAgent_AllowToRunFormClassifier_Params_Data>(
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

void PasswordGenerationAgentInterceptorForTesting::GeneratedPasswordAccepted(const base::string16& generated_password) {
  GetForwardingInterface()->GeneratedPasswordAccepted(std::move(generated_password));
}
void PasswordGenerationAgentInterceptorForTesting::UserTriggeredGeneratePassword() {
  GetForwardingInterface()->UserTriggeredGeneratePassword();
}
void PasswordGenerationAgentInterceptorForTesting::UserSelectedManualGenerationOption() {
  GetForwardingInterface()->UserSelectedManualGenerationOption();
}
void PasswordGenerationAgentInterceptorForTesting::FormNotBlacklisted(const autofill::PasswordForm& form) {
  GetForwardingInterface()->FormNotBlacklisted(std::move(form));
}
void PasswordGenerationAgentInterceptorForTesting::FoundFormsEligibleForGeneration(const std::vector<autofill::PasswordFormGenerationData>& forms) {
  GetForwardingInterface()->FoundFormsEligibleForGeneration(std::move(forms));
}
void PasswordGenerationAgentInterceptorForTesting::AllowToRunFormClassifier() {
  GetForwardingInterface()->AllowToRunFormClassifier();
}
PasswordGenerationAgentAsyncWaiter::PasswordGenerationAgentAsyncWaiter(
    PasswordGenerationAgent* proxy) : proxy_(proxy) {}

PasswordGenerationAgentAsyncWaiter::~PasswordGenerationAgentAsyncWaiter() = default;


}  // namespace mojom
}  // namespace autofill

namespace mojo {

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif