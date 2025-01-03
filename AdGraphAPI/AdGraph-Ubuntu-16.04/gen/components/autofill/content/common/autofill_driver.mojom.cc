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

#include "components/autofill/content/common/autofill_driver.mojom.h"

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

#include "components/autofill/content/common/autofill_driver.mojom-shared-message-ids.h"
#include "components/autofill/content/common/autofill_types_struct_traits.h"
#include "mojo/public/cpp/base/string16_mojom_traits.h"
#include "mojo/public/cpp/base/text_direction_mojom_traits.h"
#include "mojo/public/cpp/base/time_mojom_traits.h"
#include "ui/gfx/geometry/mojo/geometry_struct_traits.h"
#include "url/mojom/origin_mojom_traits.h"
#include "url/mojom/url_gurl_mojom_traits.h"
namespace autofill {
namespace mojom {
const char AutofillDriver::Name_[] = "autofill.mojom.AutofillDriver";

AutofillDriverProxy::AutofillDriverProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void AutofillDriverProxy::FormsSeen(
    const std::vector<autofill::FormData>& in_forms, base::TimeTicks in_timestamp) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "autofill::mojom::AutofillDriver::FormsSeen");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kAutofillDriver_FormsSeen_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::autofill::mojom::internal::AutofillDriver_FormsSeen_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->forms)::BaseType::BufferWriter
      forms_writer;
  const mojo::internal::ContainerValidateParams forms_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::autofill::mojom::FormDataDataView>>(
      in_forms, buffer, &forms_writer, &forms_validate_params,
      &serialization_context);
  params->forms.Set(
      forms_writer.is_null() ? nullptr : forms_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->forms.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null forms in AutofillDriver.FormsSeen request");
  typename decltype(params->timestamp)::BaseType::BufferWriter
      timestamp_writer;
  mojo::internal::Serialize<::mojo_base::mojom::TimeTicksDataView>(
      in_timestamp, buffer, &timestamp_writer, &serialization_context);
  params->timestamp.Set(
      timestamp_writer.is_null() ? nullptr : timestamp_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->timestamp.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null timestamp in AutofillDriver.FormsSeen request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void AutofillDriverProxy::FormSubmitted(
    const autofill::FormData& in_form, bool in_known_success, autofill::SubmissionSource in_source, base::TimeTicks in_timestamp) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "autofill::mojom::AutofillDriver::FormSubmitted");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kAutofillDriver_FormSubmitted_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::autofill::mojom::internal::AutofillDriver_FormSubmitted_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->form)::BaseType::BufferWriter
      form_writer;
  mojo::internal::Serialize<::autofill::mojom::FormDataDataView>(
      in_form, buffer, &form_writer, &serialization_context);
  params->form.Set(
      form_writer.is_null() ? nullptr : form_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->form.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null form in AutofillDriver.FormSubmitted request");
  params->known_success = in_known_success;
  mojo::internal::Serialize<::autofill::mojom::SubmissionSource>(
      in_source, &params->source);
  typename decltype(params->timestamp)::BaseType::BufferWriter
      timestamp_writer;
  mojo::internal::Serialize<::mojo_base::mojom::TimeTicksDataView>(
      in_timestamp, buffer, &timestamp_writer, &serialization_context);
  params->timestamp.Set(
      timestamp_writer.is_null() ? nullptr : timestamp_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->timestamp.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null timestamp in AutofillDriver.FormSubmitted request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void AutofillDriverProxy::TextFieldDidChange(
    const autofill::FormData& in_form, const autofill::FormFieldData& in_field, const gfx::RectF& in_bounding_box, base::TimeTicks in_timestamp) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "autofill::mojom::AutofillDriver::TextFieldDidChange");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kAutofillDriver_TextFieldDidChange_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::autofill::mojom::internal::AutofillDriver_TextFieldDidChange_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->form)::BaseType::BufferWriter
      form_writer;
  mojo::internal::Serialize<::autofill::mojom::FormDataDataView>(
      in_form, buffer, &form_writer, &serialization_context);
  params->form.Set(
      form_writer.is_null() ? nullptr : form_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->form.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null form in AutofillDriver.TextFieldDidChange request");
  typename decltype(params->field)::BaseType::BufferWriter
      field_writer;
  mojo::internal::Serialize<::autofill::mojom::FormFieldDataDataView>(
      in_field, buffer, &field_writer, &serialization_context);
  params->field.Set(
      field_writer.is_null() ? nullptr : field_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->field.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null field in AutofillDriver.TextFieldDidChange request");
  typename decltype(params->bounding_box)::BaseType::BufferWriter
      bounding_box_writer;
  mojo::internal::Serialize<::gfx::mojom::RectFDataView>(
      in_bounding_box, buffer, &bounding_box_writer, &serialization_context);
  params->bounding_box.Set(
      bounding_box_writer.is_null() ? nullptr : bounding_box_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->bounding_box.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null bounding_box in AutofillDriver.TextFieldDidChange request");
  typename decltype(params->timestamp)::BaseType::BufferWriter
      timestamp_writer;
  mojo::internal::Serialize<::mojo_base::mojom::TimeTicksDataView>(
      in_timestamp, buffer, &timestamp_writer, &serialization_context);
  params->timestamp.Set(
      timestamp_writer.is_null() ? nullptr : timestamp_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->timestamp.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null timestamp in AutofillDriver.TextFieldDidChange request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void AutofillDriverProxy::TextFieldDidScroll(
    const autofill::FormData& in_form, const autofill::FormFieldData& in_field, const gfx::RectF& in_bounding_box) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "autofill::mojom::AutofillDriver::TextFieldDidScroll");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kAutofillDriver_TextFieldDidScroll_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::autofill::mojom::internal::AutofillDriver_TextFieldDidScroll_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->form)::BaseType::BufferWriter
      form_writer;
  mojo::internal::Serialize<::autofill::mojom::FormDataDataView>(
      in_form, buffer, &form_writer, &serialization_context);
  params->form.Set(
      form_writer.is_null() ? nullptr : form_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->form.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null form in AutofillDriver.TextFieldDidScroll request");
  typename decltype(params->field)::BaseType::BufferWriter
      field_writer;
  mojo::internal::Serialize<::autofill::mojom::FormFieldDataDataView>(
      in_field, buffer, &field_writer, &serialization_context);
  params->field.Set(
      field_writer.is_null() ? nullptr : field_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->field.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null field in AutofillDriver.TextFieldDidScroll request");
  typename decltype(params->bounding_box)::BaseType::BufferWriter
      bounding_box_writer;
  mojo::internal::Serialize<::gfx::mojom::RectFDataView>(
      in_bounding_box, buffer, &bounding_box_writer, &serialization_context);
  params->bounding_box.Set(
      bounding_box_writer.is_null() ? nullptr : bounding_box_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->bounding_box.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null bounding_box in AutofillDriver.TextFieldDidScroll request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void AutofillDriverProxy::SelectControlDidChange(
    const autofill::FormData& in_form, const autofill::FormFieldData& in_field, const gfx::RectF& in_bounding_box) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "autofill::mojom::AutofillDriver::SelectControlDidChange");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kAutofillDriver_SelectControlDidChange_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::autofill::mojom::internal::AutofillDriver_SelectControlDidChange_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->form)::BaseType::BufferWriter
      form_writer;
  mojo::internal::Serialize<::autofill::mojom::FormDataDataView>(
      in_form, buffer, &form_writer, &serialization_context);
  params->form.Set(
      form_writer.is_null() ? nullptr : form_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->form.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null form in AutofillDriver.SelectControlDidChange request");
  typename decltype(params->field)::BaseType::BufferWriter
      field_writer;
  mojo::internal::Serialize<::autofill::mojom::FormFieldDataDataView>(
      in_field, buffer, &field_writer, &serialization_context);
  params->field.Set(
      field_writer.is_null() ? nullptr : field_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->field.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null field in AutofillDriver.SelectControlDidChange request");
  typename decltype(params->bounding_box)::BaseType::BufferWriter
      bounding_box_writer;
  mojo::internal::Serialize<::gfx::mojom::RectFDataView>(
      in_bounding_box, buffer, &bounding_box_writer, &serialization_context);
  params->bounding_box.Set(
      bounding_box_writer.is_null() ? nullptr : bounding_box_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->bounding_box.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null bounding_box in AutofillDriver.SelectControlDidChange request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void AutofillDriverProxy::SelectFieldOptionsDidChange(
    const autofill::FormData& in_form) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "autofill::mojom::AutofillDriver::SelectFieldOptionsDidChange");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kAutofillDriver_SelectFieldOptionsDidChange_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::autofill::mojom::internal::AutofillDriver_SelectFieldOptionsDidChange_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->form)::BaseType::BufferWriter
      form_writer;
  mojo::internal::Serialize<::autofill::mojom::FormDataDataView>(
      in_form, buffer, &form_writer, &serialization_context);
  params->form.Set(
      form_writer.is_null() ? nullptr : form_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->form.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null form in AutofillDriver.SelectFieldOptionsDidChange request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void AutofillDriverProxy::QueryFormFieldAutofill(
    int32_t in_id, const autofill::FormData& in_form, const autofill::FormFieldData& in_field, const gfx::RectF& in_bounding_box) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "autofill::mojom::AutofillDriver::QueryFormFieldAutofill");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kAutofillDriver_QueryFormFieldAutofill_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::autofill::mojom::internal::AutofillDriver_QueryFormFieldAutofill_Params_Data::BufferWriter
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
      "null form in AutofillDriver.QueryFormFieldAutofill request");
  typename decltype(params->field)::BaseType::BufferWriter
      field_writer;
  mojo::internal::Serialize<::autofill::mojom::FormFieldDataDataView>(
      in_field, buffer, &field_writer, &serialization_context);
  params->field.Set(
      field_writer.is_null() ? nullptr : field_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->field.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null field in AutofillDriver.QueryFormFieldAutofill request");
  typename decltype(params->bounding_box)::BaseType::BufferWriter
      bounding_box_writer;
  mojo::internal::Serialize<::gfx::mojom::RectFDataView>(
      in_bounding_box, buffer, &bounding_box_writer, &serialization_context);
  params->bounding_box.Set(
      bounding_box_writer.is_null() ? nullptr : bounding_box_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->bounding_box.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null bounding_box in AutofillDriver.QueryFormFieldAutofill request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void AutofillDriverProxy::HidePopup(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "autofill::mojom::AutofillDriver::HidePopup");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kAutofillDriver_HidePopup_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::autofill::mojom::internal::AutofillDriver_HidePopup_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void AutofillDriverProxy::FocusNoLongerOnForm(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "autofill::mojom::AutofillDriver::FocusNoLongerOnForm");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kAutofillDriver_FocusNoLongerOnForm_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::autofill::mojom::internal::AutofillDriver_FocusNoLongerOnForm_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void AutofillDriverProxy::FocusOnFormField(
    const autofill::FormData& in_form, const autofill::FormFieldData& in_field, const gfx::RectF& in_bounding_box) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "autofill::mojom::AutofillDriver::FocusOnFormField");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kAutofillDriver_FocusOnFormField_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::autofill::mojom::internal::AutofillDriver_FocusOnFormField_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->form)::BaseType::BufferWriter
      form_writer;
  mojo::internal::Serialize<::autofill::mojom::FormDataDataView>(
      in_form, buffer, &form_writer, &serialization_context);
  params->form.Set(
      form_writer.is_null() ? nullptr : form_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->form.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null form in AutofillDriver.FocusOnFormField request");
  typename decltype(params->field)::BaseType::BufferWriter
      field_writer;
  mojo::internal::Serialize<::autofill::mojom::FormFieldDataDataView>(
      in_field, buffer, &field_writer, &serialization_context);
  params->field.Set(
      field_writer.is_null() ? nullptr : field_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->field.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null field in AutofillDriver.FocusOnFormField request");
  typename decltype(params->bounding_box)::BaseType::BufferWriter
      bounding_box_writer;
  mojo::internal::Serialize<::gfx::mojom::RectFDataView>(
      in_bounding_box, buffer, &bounding_box_writer, &serialization_context);
  params->bounding_box.Set(
      bounding_box_writer.is_null() ? nullptr : bounding_box_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->bounding_box.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null bounding_box in AutofillDriver.FocusOnFormField request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void AutofillDriverProxy::DidFillAutofillFormData(
    const autofill::FormData& in_form, base::TimeTicks in_timestamp) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "autofill::mojom::AutofillDriver::DidFillAutofillFormData");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kAutofillDriver_DidFillAutofillFormData_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::autofill::mojom::internal::AutofillDriver_DidFillAutofillFormData_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->form)::BaseType::BufferWriter
      form_writer;
  mojo::internal::Serialize<::autofill::mojom::FormDataDataView>(
      in_form, buffer, &form_writer, &serialization_context);
  params->form.Set(
      form_writer.is_null() ? nullptr : form_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->form.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null form in AutofillDriver.DidFillAutofillFormData request");
  typename decltype(params->timestamp)::BaseType::BufferWriter
      timestamp_writer;
  mojo::internal::Serialize<::mojo_base::mojom::TimeTicksDataView>(
      in_timestamp, buffer, &timestamp_writer, &serialization_context);
  params->timestamp.Set(
      timestamp_writer.is_null() ? nullptr : timestamp_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->timestamp.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null timestamp in AutofillDriver.DidFillAutofillFormData request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void AutofillDriverProxy::DidPreviewAutofillFormData(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "autofill::mojom::AutofillDriver::DidPreviewAutofillFormData");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kAutofillDriver_DidPreviewAutofillFormData_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::autofill::mojom::internal::AutofillDriver_DidPreviewAutofillFormData_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void AutofillDriverProxy::DidEndTextFieldEditing(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "autofill::mojom::AutofillDriver::DidEndTextFieldEditing");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kAutofillDriver_DidEndTextFieldEditing_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::autofill::mojom::internal::AutofillDriver_DidEndTextFieldEditing_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void AutofillDriverProxy::SetDataList(
    const std::vector<base::string16>& in_values, const std::vector<base::string16>& in_labels) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "autofill::mojom::AutofillDriver::SetDataList");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kAutofillDriver_SetDataList_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::autofill::mojom::internal::AutofillDriver_SetDataList_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->values)::BaseType::BufferWriter
      values_writer;
  const mojo::internal::ContainerValidateParams values_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::mojo_base::mojom::String16DataView>>(
      in_values, buffer, &values_writer, &values_validate_params,
      &serialization_context);
  params->values.Set(
      values_writer.is_null() ? nullptr : values_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->values.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null values in AutofillDriver.SetDataList request");
  typename decltype(params->labels)::BaseType::BufferWriter
      labels_writer;
  const mojo::internal::ContainerValidateParams labels_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::mojo_base::mojom::String16DataView>>(
      in_labels, buffer, &labels_writer, &labels_validate_params,
      &serialization_context);
  params->labels.Set(
      labels_writer.is_null() ? nullptr : labels_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->labels.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null labels in AutofillDriver.SetDataList request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool AutofillDriverStubDispatch::Accept(
    AutofillDriver* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kAutofillDriver_FormsSeen_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)autofill::mojom::AutofillDriver::FormsSeen",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::AutofillDriver_FormsSeen_Params_Data* params =
          reinterpret_cast<internal::AutofillDriver_FormsSeen_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::vector<autofill::FormData> p_forms{};
      base::TimeTicks p_timestamp{};
      AutofillDriver_FormsSeen_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadForms(&p_forms))
        success = false;
      if (!input_data_view.ReadTimestamp(&p_timestamp))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "AutofillDriver::FormsSeen deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->FormsSeen(
std::move(p_forms), 
std::move(p_timestamp));
      return true;
    }
    case internal::kAutofillDriver_FormSubmitted_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)autofill::mojom::AutofillDriver::FormSubmitted",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::AutofillDriver_FormSubmitted_Params_Data* params =
          reinterpret_cast<internal::AutofillDriver_FormSubmitted_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      autofill::FormData p_form{};
      bool p_known_success{};
      autofill::SubmissionSource p_source{};
      base::TimeTicks p_timestamp{};
      AutofillDriver_FormSubmitted_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadForm(&p_form))
        success = false;
      p_known_success = input_data_view.known_success();
      if (!input_data_view.ReadSource(&p_source))
        success = false;
      if (!input_data_view.ReadTimestamp(&p_timestamp))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "AutofillDriver::FormSubmitted deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->FormSubmitted(
std::move(p_form), 
std::move(p_known_success), 
std::move(p_source), 
std::move(p_timestamp));
      return true;
    }
    case internal::kAutofillDriver_TextFieldDidChange_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)autofill::mojom::AutofillDriver::TextFieldDidChange",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::AutofillDriver_TextFieldDidChange_Params_Data* params =
          reinterpret_cast<internal::AutofillDriver_TextFieldDidChange_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      autofill::FormData p_form{};
      autofill::FormFieldData p_field{};
      gfx::RectF p_bounding_box{};
      base::TimeTicks p_timestamp{};
      AutofillDriver_TextFieldDidChange_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadForm(&p_form))
        success = false;
      if (!input_data_view.ReadField(&p_field))
        success = false;
      if (!input_data_view.ReadBoundingBox(&p_bounding_box))
        success = false;
      if (!input_data_view.ReadTimestamp(&p_timestamp))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "AutofillDriver::TextFieldDidChange deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->TextFieldDidChange(
std::move(p_form), 
std::move(p_field), 
std::move(p_bounding_box), 
std::move(p_timestamp));
      return true;
    }
    case internal::kAutofillDriver_TextFieldDidScroll_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)autofill::mojom::AutofillDriver::TextFieldDidScroll",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::AutofillDriver_TextFieldDidScroll_Params_Data* params =
          reinterpret_cast<internal::AutofillDriver_TextFieldDidScroll_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      autofill::FormData p_form{};
      autofill::FormFieldData p_field{};
      gfx::RectF p_bounding_box{};
      AutofillDriver_TextFieldDidScroll_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadForm(&p_form))
        success = false;
      if (!input_data_view.ReadField(&p_field))
        success = false;
      if (!input_data_view.ReadBoundingBox(&p_bounding_box))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "AutofillDriver::TextFieldDidScroll deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->TextFieldDidScroll(
std::move(p_form), 
std::move(p_field), 
std::move(p_bounding_box));
      return true;
    }
    case internal::kAutofillDriver_SelectControlDidChange_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)autofill::mojom::AutofillDriver::SelectControlDidChange",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::AutofillDriver_SelectControlDidChange_Params_Data* params =
          reinterpret_cast<internal::AutofillDriver_SelectControlDidChange_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      autofill::FormData p_form{};
      autofill::FormFieldData p_field{};
      gfx::RectF p_bounding_box{};
      AutofillDriver_SelectControlDidChange_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadForm(&p_form))
        success = false;
      if (!input_data_view.ReadField(&p_field))
        success = false;
      if (!input_data_view.ReadBoundingBox(&p_bounding_box))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "AutofillDriver::SelectControlDidChange deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->SelectControlDidChange(
std::move(p_form), 
std::move(p_field), 
std::move(p_bounding_box));
      return true;
    }
    case internal::kAutofillDriver_SelectFieldOptionsDidChange_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)autofill::mojom::AutofillDriver::SelectFieldOptionsDidChange",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::AutofillDriver_SelectFieldOptionsDidChange_Params_Data* params =
          reinterpret_cast<internal::AutofillDriver_SelectFieldOptionsDidChange_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      autofill::FormData p_form{};
      AutofillDriver_SelectFieldOptionsDidChange_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadForm(&p_form))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "AutofillDriver::SelectFieldOptionsDidChange deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->SelectFieldOptionsDidChange(
std::move(p_form));
      return true;
    }
    case internal::kAutofillDriver_QueryFormFieldAutofill_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)autofill::mojom::AutofillDriver::QueryFormFieldAutofill",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::AutofillDriver_QueryFormFieldAutofill_Params_Data* params =
          reinterpret_cast<internal::AutofillDriver_QueryFormFieldAutofill_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int32_t p_id{};
      autofill::FormData p_form{};
      autofill::FormFieldData p_field{};
      gfx::RectF p_bounding_box{};
      AutofillDriver_QueryFormFieldAutofill_ParamsDataView input_data_view(params, &serialization_context);
      
      p_id = input_data_view.id();
      if (!input_data_view.ReadForm(&p_form))
        success = false;
      if (!input_data_view.ReadField(&p_field))
        success = false;
      if (!input_data_view.ReadBoundingBox(&p_bounding_box))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "AutofillDriver::QueryFormFieldAutofill deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->QueryFormFieldAutofill(
std::move(p_id), 
std::move(p_form), 
std::move(p_field), 
std::move(p_bounding_box));
      return true;
    }
    case internal::kAutofillDriver_HidePopup_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)autofill::mojom::AutofillDriver::HidePopup",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::AutofillDriver_HidePopup_Params_Data* params =
          reinterpret_cast<internal::AutofillDriver_HidePopup_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      AutofillDriver_HidePopup_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "AutofillDriver::HidePopup deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->HidePopup();
      return true;
    }
    case internal::kAutofillDriver_FocusNoLongerOnForm_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)autofill::mojom::AutofillDriver::FocusNoLongerOnForm",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::AutofillDriver_FocusNoLongerOnForm_Params_Data* params =
          reinterpret_cast<internal::AutofillDriver_FocusNoLongerOnForm_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      AutofillDriver_FocusNoLongerOnForm_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "AutofillDriver::FocusNoLongerOnForm deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->FocusNoLongerOnForm();
      return true;
    }
    case internal::kAutofillDriver_FocusOnFormField_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)autofill::mojom::AutofillDriver::FocusOnFormField",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::AutofillDriver_FocusOnFormField_Params_Data* params =
          reinterpret_cast<internal::AutofillDriver_FocusOnFormField_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      autofill::FormData p_form{};
      autofill::FormFieldData p_field{};
      gfx::RectF p_bounding_box{};
      AutofillDriver_FocusOnFormField_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadForm(&p_form))
        success = false;
      if (!input_data_view.ReadField(&p_field))
        success = false;
      if (!input_data_view.ReadBoundingBox(&p_bounding_box))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "AutofillDriver::FocusOnFormField deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->FocusOnFormField(
std::move(p_form), 
std::move(p_field), 
std::move(p_bounding_box));
      return true;
    }
    case internal::kAutofillDriver_DidFillAutofillFormData_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)autofill::mojom::AutofillDriver::DidFillAutofillFormData",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::AutofillDriver_DidFillAutofillFormData_Params_Data* params =
          reinterpret_cast<internal::AutofillDriver_DidFillAutofillFormData_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      autofill::FormData p_form{};
      base::TimeTicks p_timestamp{};
      AutofillDriver_DidFillAutofillFormData_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadForm(&p_form))
        success = false;
      if (!input_data_view.ReadTimestamp(&p_timestamp))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "AutofillDriver::DidFillAutofillFormData deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->DidFillAutofillFormData(
std::move(p_form), 
std::move(p_timestamp));
      return true;
    }
    case internal::kAutofillDriver_DidPreviewAutofillFormData_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)autofill::mojom::AutofillDriver::DidPreviewAutofillFormData",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::AutofillDriver_DidPreviewAutofillFormData_Params_Data* params =
          reinterpret_cast<internal::AutofillDriver_DidPreviewAutofillFormData_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      AutofillDriver_DidPreviewAutofillFormData_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "AutofillDriver::DidPreviewAutofillFormData deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->DidPreviewAutofillFormData();
      return true;
    }
    case internal::kAutofillDriver_DidEndTextFieldEditing_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)autofill::mojom::AutofillDriver::DidEndTextFieldEditing",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::AutofillDriver_DidEndTextFieldEditing_Params_Data* params =
          reinterpret_cast<internal::AutofillDriver_DidEndTextFieldEditing_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      AutofillDriver_DidEndTextFieldEditing_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "AutofillDriver::DidEndTextFieldEditing deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->DidEndTextFieldEditing();
      return true;
    }
    case internal::kAutofillDriver_SetDataList_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)autofill::mojom::AutofillDriver::SetDataList",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::AutofillDriver_SetDataList_Params_Data* params =
          reinterpret_cast<internal::AutofillDriver_SetDataList_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::vector<base::string16> p_values{};
      std::vector<base::string16> p_labels{};
      AutofillDriver_SetDataList_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadValues(&p_values))
        success = false;
      if (!input_data_view.ReadLabels(&p_labels))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "AutofillDriver::SetDataList deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->SetDataList(
std::move(p_values), 
std::move(p_labels));
      return true;
    }
  }
  return false;
}

// static
bool AutofillDriverStubDispatch::AcceptWithResponder(
    AutofillDriver* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kAutofillDriver_FormsSeen_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)autofill::mojom::AutofillDriver::FormsSeen",
               "message", message->name());
#endif
      break;
    }
    case internal::kAutofillDriver_FormSubmitted_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)autofill::mojom::AutofillDriver::FormSubmitted",
               "message", message->name());
#endif
      break;
    }
    case internal::kAutofillDriver_TextFieldDidChange_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)autofill::mojom::AutofillDriver::TextFieldDidChange",
               "message", message->name());
#endif
      break;
    }
    case internal::kAutofillDriver_TextFieldDidScroll_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)autofill::mojom::AutofillDriver::TextFieldDidScroll",
               "message", message->name());
#endif
      break;
    }
    case internal::kAutofillDriver_SelectControlDidChange_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)autofill::mojom::AutofillDriver::SelectControlDidChange",
               "message", message->name());
#endif
      break;
    }
    case internal::kAutofillDriver_SelectFieldOptionsDidChange_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)autofill::mojom::AutofillDriver::SelectFieldOptionsDidChange",
               "message", message->name());
#endif
      break;
    }
    case internal::kAutofillDriver_QueryFormFieldAutofill_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)autofill::mojom::AutofillDriver::QueryFormFieldAutofill",
               "message", message->name());
#endif
      break;
    }
    case internal::kAutofillDriver_HidePopup_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)autofill::mojom::AutofillDriver::HidePopup",
               "message", message->name());
#endif
      break;
    }
    case internal::kAutofillDriver_FocusNoLongerOnForm_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)autofill::mojom::AutofillDriver::FocusNoLongerOnForm",
               "message", message->name());
#endif
      break;
    }
    case internal::kAutofillDriver_FocusOnFormField_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)autofill::mojom::AutofillDriver::FocusOnFormField",
               "message", message->name());
#endif
      break;
    }
    case internal::kAutofillDriver_DidFillAutofillFormData_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)autofill::mojom::AutofillDriver::DidFillAutofillFormData",
               "message", message->name());
#endif
      break;
    }
    case internal::kAutofillDriver_DidPreviewAutofillFormData_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)autofill::mojom::AutofillDriver::DidPreviewAutofillFormData",
               "message", message->name());
#endif
      break;
    }
    case internal::kAutofillDriver_DidEndTextFieldEditing_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)autofill::mojom::AutofillDriver::DidEndTextFieldEditing",
               "message", message->name());
#endif
      break;
    }
    case internal::kAutofillDriver_SetDataList_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)autofill::mojom::AutofillDriver::SetDataList",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool AutofillDriverRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "AutofillDriver RequestValidator");

  switch (message->header()->name) {
    case internal::kAutofillDriver_FormsSeen_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::AutofillDriver_FormsSeen_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kAutofillDriver_FormSubmitted_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::AutofillDriver_FormSubmitted_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kAutofillDriver_TextFieldDidChange_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::AutofillDriver_TextFieldDidChange_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kAutofillDriver_TextFieldDidScroll_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::AutofillDriver_TextFieldDidScroll_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kAutofillDriver_SelectControlDidChange_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::AutofillDriver_SelectControlDidChange_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kAutofillDriver_SelectFieldOptionsDidChange_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::AutofillDriver_SelectFieldOptionsDidChange_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kAutofillDriver_QueryFormFieldAutofill_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::AutofillDriver_QueryFormFieldAutofill_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kAutofillDriver_HidePopup_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::AutofillDriver_HidePopup_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kAutofillDriver_FocusNoLongerOnForm_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::AutofillDriver_FocusNoLongerOnForm_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kAutofillDriver_FocusOnFormField_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::AutofillDriver_FocusOnFormField_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kAutofillDriver_DidFillAutofillFormData_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::AutofillDriver_DidFillAutofillFormData_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kAutofillDriver_DidPreviewAutofillFormData_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::AutofillDriver_DidPreviewAutofillFormData_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kAutofillDriver_DidEndTextFieldEditing_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::AutofillDriver_DidEndTextFieldEditing_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kAutofillDriver_SetDataList_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::AutofillDriver_SetDataList_Params_Data>(
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

void AutofillDriverInterceptorForTesting::FormsSeen(const std::vector<autofill::FormData>& forms, base::TimeTicks timestamp) {
  GetForwardingInterface()->FormsSeen(std::move(forms), std::move(timestamp));
}
void AutofillDriverInterceptorForTesting::FormSubmitted(const autofill::FormData& form, bool known_success, autofill::SubmissionSource source, base::TimeTicks timestamp) {
  GetForwardingInterface()->FormSubmitted(std::move(form), std::move(known_success), std::move(source), std::move(timestamp));
}
void AutofillDriverInterceptorForTesting::TextFieldDidChange(const autofill::FormData& form, const autofill::FormFieldData& field, const gfx::RectF& bounding_box, base::TimeTicks timestamp) {
  GetForwardingInterface()->TextFieldDidChange(std::move(form), std::move(field), std::move(bounding_box), std::move(timestamp));
}
void AutofillDriverInterceptorForTesting::TextFieldDidScroll(const autofill::FormData& form, const autofill::FormFieldData& field, const gfx::RectF& bounding_box) {
  GetForwardingInterface()->TextFieldDidScroll(std::move(form), std::move(field), std::move(bounding_box));
}
void AutofillDriverInterceptorForTesting::SelectControlDidChange(const autofill::FormData& form, const autofill::FormFieldData& field, const gfx::RectF& bounding_box) {
  GetForwardingInterface()->SelectControlDidChange(std::move(form), std::move(field), std::move(bounding_box));
}
void AutofillDriverInterceptorForTesting::SelectFieldOptionsDidChange(const autofill::FormData& form) {
  GetForwardingInterface()->SelectFieldOptionsDidChange(std::move(form));
}
void AutofillDriverInterceptorForTesting::QueryFormFieldAutofill(int32_t id, const autofill::FormData& form, const autofill::FormFieldData& field, const gfx::RectF& bounding_box) {
  GetForwardingInterface()->QueryFormFieldAutofill(std::move(id), std::move(form), std::move(field), std::move(bounding_box));
}
void AutofillDriverInterceptorForTesting::HidePopup() {
  GetForwardingInterface()->HidePopup();
}
void AutofillDriverInterceptorForTesting::FocusNoLongerOnForm() {
  GetForwardingInterface()->FocusNoLongerOnForm();
}
void AutofillDriverInterceptorForTesting::FocusOnFormField(const autofill::FormData& form, const autofill::FormFieldData& field, const gfx::RectF& bounding_box) {
  GetForwardingInterface()->FocusOnFormField(std::move(form), std::move(field), std::move(bounding_box));
}
void AutofillDriverInterceptorForTesting::DidFillAutofillFormData(const autofill::FormData& form, base::TimeTicks timestamp) {
  GetForwardingInterface()->DidFillAutofillFormData(std::move(form), std::move(timestamp));
}
void AutofillDriverInterceptorForTesting::DidPreviewAutofillFormData() {
  GetForwardingInterface()->DidPreviewAutofillFormData();
}
void AutofillDriverInterceptorForTesting::DidEndTextFieldEditing() {
  GetForwardingInterface()->DidEndTextFieldEditing();
}
void AutofillDriverInterceptorForTesting::SetDataList(const std::vector<base::string16>& values, const std::vector<base::string16>& labels) {
  GetForwardingInterface()->SetDataList(std::move(values), std::move(labels));
}
AutofillDriverAsyncWaiter::AutofillDriverAsyncWaiter(
    AutofillDriver* proxy) : proxy_(proxy) {}

AutofillDriverAsyncWaiter::~AutofillDriverAsyncWaiter() = default;


const char PasswordManagerDriver::Name_[] = "autofill.mojom.PasswordManagerDriver";

PasswordManagerDriverProxy::PasswordManagerDriverProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void PasswordManagerDriverProxy::PasswordFormsParsed(
    const std::vector<autofill::PasswordForm>& in_forms) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "autofill::mojom::PasswordManagerDriver::PasswordFormsParsed");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPasswordManagerDriver_PasswordFormsParsed_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::autofill::mojom::internal::PasswordManagerDriver_PasswordFormsParsed_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->forms)::BaseType::BufferWriter
      forms_writer;
  const mojo::internal::ContainerValidateParams forms_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::autofill::mojom::PasswordFormDataView>>(
      in_forms, buffer, &forms_writer, &forms_validate_params,
      &serialization_context);
  params->forms.Set(
      forms_writer.is_null() ? nullptr : forms_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->forms.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null forms in PasswordManagerDriver.PasswordFormsParsed request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void PasswordManagerDriverProxy::PasswordFormsRendered(
    const std::vector<autofill::PasswordForm>& in_visible_forms, bool in_did_stop_loading) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "autofill::mojom::PasswordManagerDriver::PasswordFormsRendered");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPasswordManagerDriver_PasswordFormsRendered_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::autofill::mojom::internal::PasswordManagerDriver_PasswordFormsRendered_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->visible_forms)::BaseType::BufferWriter
      visible_forms_writer;
  const mojo::internal::ContainerValidateParams visible_forms_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::autofill::mojom::PasswordFormDataView>>(
      in_visible_forms, buffer, &visible_forms_writer, &visible_forms_validate_params,
      &serialization_context);
  params->visible_forms.Set(
      visible_forms_writer.is_null() ? nullptr : visible_forms_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->visible_forms.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null visible_forms in PasswordManagerDriver.PasswordFormsRendered request");
  params->did_stop_loading = in_did_stop_loading;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void PasswordManagerDriverProxy::PasswordFormSubmitted(
    const autofill::PasswordForm& in_password_form) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "autofill::mojom::PasswordManagerDriver::PasswordFormSubmitted");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPasswordManagerDriver_PasswordFormSubmitted_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::autofill::mojom::internal::PasswordManagerDriver_PasswordFormSubmitted_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->password_form)::BaseType::BufferWriter
      password_form_writer;
  mojo::internal::Serialize<::autofill::mojom::PasswordFormDataView>(
      in_password_form, buffer, &password_form_writer, &serialization_context);
  params->password_form.Set(
      password_form_writer.is_null() ? nullptr : password_form_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->password_form.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null password_form in PasswordManagerDriver.PasswordFormSubmitted request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void PasswordManagerDriverProxy::ShowManualFallbackForSaving(
    const autofill::PasswordForm& in_password_form) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "autofill::mojom::PasswordManagerDriver::ShowManualFallbackForSaving");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPasswordManagerDriver_ShowManualFallbackForSaving_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::autofill::mojom::internal::PasswordManagerDriver_ShowManualFallbackForSaving_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->password_form)::BaseType::BufferWriter
      password_form_writer;
  mojo::internal::Serialize<::autofill::mojom::PasswordFormDataView>(
      in_password_form, buffer, &password_form_writer, &serialization_context);
  params->password_form.Set(
      password_form_writer.is_null() ? nullptr : password_form_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->password_form.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null password_form in PasswordManagerDriver.ShowManualFallbackForSaving request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void PasswordManagerDriverProxy::HideManualFallbackForSaving(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "autofill::mojom::PasswordManagerDriver::HideManualFallbackForSaving");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPasswordManagerDriver_HideManualFallbackForSaving_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::autofill::mojom::internal::PasswordManagerDriver_HideManualFallbackForSaving_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void PasswordManagerDriverProxy::SameDocumentNavigation(
    const autofill::PasswordForm& in_password_form) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "autofill::mojom::PasswordManagerDriver::SameDocumentNavigation");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPasswordManagerDriver_SameDocumentNavigation_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::autofill::mojom::internal::PasswordManagerDriver_SameDocumentNavigation_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->password_form)::BaseType::BufferWriter
      password_form_writer;
  mojo::internal::Serialize<::autofill::mojom::PasswordFormDataView>(
      in_password_form, buffer, &password_form_writer, &serialization_context);
  params->password_form.Set(
      password_form_writer.is_null() ? nullptr : password_form_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->password_form.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null password_form in PasswordManagerDriver.SameDocumentNavigation request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void PasswordManagerDriverProxy::RecordSavePasswordProgress(
    const std::string& in_log) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "autofill::mojom::PasswordManagerDriver::RecordSavePasswordProgress");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPasswordManagerDriver_RecordSavePasswordProgress_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::autofill::mojom::internal::PasswordManagerDriver_RecordSavePasswordProgress_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->log)::BaseType::BufferWriter
      log_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_log, buffer, &log_writer, &serialization_context);
  params->log.Set(
      log_writer.is_null() ? nullptr : log_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->log.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null log in PasswordManagerDriver.RecordSavePasswordProgress request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void PasswordManagerDriverProxy::UserModifiedPasswordField(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "autofill::mojom::PasswordManagerDriver::UserModifiedPasswordField");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPasswordManagerDriver_UserModifiedPasswordField_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::autofill::mojom::internal::PasswordManagerDriver_UserModifiedPasswordField_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void PasswordManagerDriverProxy::ShowPasswordSuggestions(
    int32_t in_key, base::i18n::TextDirection in_text_direction, const base::string16& in_typed_username, int32_t in_options, const gfx::RectF& in_bounds) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "autofill::mojom::PasswordManagerDriver::ShowPasswordSuggestions");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPasswordManagerDriver_ShowPasswordSuggestions_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::autofill::mojom::internal::PasswordManagerDriver_ShowPasswordSuggestions_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->key = in_key;
  mojo::internal::Serialize<::mojo_base::mojom::TextDirection>(
      in_text_direction, &params->text_direction);
  typename decltype(params->typed_username)::BaseType::BufferWriter
      typed_username_writer;
  mojo::internal::Serialize<::mojo_base::mojom::String16DataView>(
      in_typed_username, buffer, &typed_username_writer, &serialization_context);
  params->typed_username.Set(
      typed_username_writer.is_null() ? nullptr : typed_username_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->typed_username.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null typed_username in PasswordManagerDriver.ShowPasswordSuggestions request");
  params->options = in_options;
  typename decltype(params->bounds)::BaseType::BufferWriter
      bounds_writer;
  mojo::internal::Serialize<::gfx::mojom::RectFDataView>(
      in_bounds, buffer, &bounds_writer, &serialization_context);
  params->bounds.Set(
      bounds_writer.is_null() ? nullptr : bounds_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->bounds.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null bounds in PasswordManagerDriver.ShowPasswordSuggestions request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void PasswordManagerDriverProxy::ShowManualFallbackSuggestion(
    base::i18n::TextDirection in_text_direction, const gfx::RectF& in_bounds) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "autofill::mojom::PasswordManagerDriver::ShowManualFallbackSuggestion");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPasswordManagerDriver_ShowManualFallbackSuggestion_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::autofill::mojom::internal::PasswordManagerDriver_ShowManualFallbackSuggestion_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::mojo_base::mojom::TextDirection>(
      in_text_direction, &params->text_direction);
  typename decltype(params->bounds)::BaseType::BufferWriter
      bounds_writer;
  mojo::internal::Serialize<::gfx::mojom::RectFDataView>(
      in_bounds, buffer, &bounds_writer, &serialization_context);
  params->bounds.Set(
      bounds_writer.is_null() ? nullptr : bounds_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->bounds.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null bounds in PasswordManagerDriver.ShowManualFallbackSuggestion request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void PasswordManagerDriverProxy::PresaveGeneratedPassword(
    const autofill::PasswordForm& in_password_form) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "autofill::mojom::PasswordManagerDriver::PresaveGeneratedPassword");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPasswordManagerDriver_PresaveGeneratedPassword_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::autofill::mojom::internal::PasswordManagerDriver_PresaveGeneratedPassword_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->password_form)::BaseType::BufferWriter
      password_form_writer;
  mojo::internal::Serialize<::autofill::mojom::PasswordFormDataView>(
      in_password_form, buffer, &password_form_writer, &serialization_context);
  params->password_form.Set(
      password_form_writer.is_null() ? nullptr : password_form_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->password_form.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null password_form in PasswordManagerDriver.PresaveGeneratedPassword request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void PasswordManagerDriverProxy::PasswordNoLongerGenerated(
    const autofill::PasswordForm& in_password_form) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "autofill::mojom::PasswordManagerDriver::PasswordNoLongerGenerated");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPasswordManagerDriver_PasswordNoLongerGenerated_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::autofill::mojom::internal::PasswordManagerDriver_PasswordNoLongerGenerated_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->password_form)::BaseType::BufferWriter
      password_form_writer;
  mojo::internal::Serialize<::autofill::mojom::PasswordFormDataView>(
      in_password_form, buffer, &password_form_writer, &serialization_context);
  params->password_form.Set(
      password_form_writer.is_null() ? nullptr : password_form_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->password_form.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null password_form in PasswordManagerDriver.PasswordNoLongerGenerated request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void PasswordManagerDriverProxy::SaveGenerationFieldDetectedByClassifier(
    const autofill::PasswordForm& in_password_form, const base::string16& in_generation_field) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "autofill::mojom::PasswordManagerDriver::SaveGenerationFieldDetectedByClassifier");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPasswordManagerDriver_SaveGenerationFieldDetectedByClassifier_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::autofill::mojom::internal::PasswordManagerDriver_SaveGenerationFieldDetectedByClassifier_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->password_form)::BaseType::BufferWriter
      password_form_writer;
  mojo::internal::Serialize<::autofill::mojom::PasswordFormDataView>(
      in_password_form, buffer, &password_form_writer, &serialization_context);
  params->password_form.Set(
      password_form_writer.is_null() ? nullptr : password_form_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->password_form.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null password_form in PasswordManagerDriver.SaveGenerationFieldDetectedByClassifier request");
  typename decltype(params->generation_field)::BaseType::BufferWriter
      generation_field_writer;
  mojo::internal::Serialize<::mojo_base::mojom::String16DataView>(
      in_generation_field, buffer, &generation_field_writer, &serialization_context);
  params->generation_field.Set(
      generation_field_writer.is_null() ? nullptr : generation_field_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->generation_field.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null generation_field in PasswordManagerDriver.SaveGenerationFieldDetectedByClassifier request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void PasswordManagerDriverProxy::CheckSafeBrowsingReputation(
    const GURL& in_form_action, const GURL& in_frame_url) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "autofill::mojom::PasswordManagerDriver::CheckSafeBrowsingReputation");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPasswordManagerDriver_CheckSafeBrowsingReputation_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::autofill::mojom::internal::PasswordManagerDriver_CheckSafeBrowsingReputation_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->form_action)::BaseType::BufferWriter
      form_action_writer;
  mojo::internal::Serialize<::url::mojom::UrlDataView>(
      in_form_action, buffer, &form_action_writer, &serialization_context);
  params->form_action.Set(
      form_action_writer.is_null() ? nullptr : form_action_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->form_action.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null form_action in PasswordManagerDriver.CheckSafeBrowsingReputation request");
  typename decltype(params->frame_url)::BaseType::BufferWriter
      frame_url_writer;
  mojo::internal::Serialize<::url::mojom::UrlDataView>(
      in_frame_url, buffer, &frame_url_writer, &serialization_context);
  params->frame_url.Set(
      frame_url_writer.is_null() ? nullptr : frame_url_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->frame_url.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null frame_url in PasswordManagerDriver.CheckSafeBrowsingReputation request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool PasswordManagerDriverStubDispatch::Accept(
    PasswordManagerDriver* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kPasswordManagerDriver_PasswordFormsParsed_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)autofill::mojom::PasswordManagerDriver::PasswordFormsParsed",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::PasswordManagerDriver_PasswordFormsParsed_Params_Data* params =
          reinterpret_cast<internal::PasswordManagerDriver_PasswordFormsParsed_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::vector<autofill::PasswordForm> p_forms{};
      PasswordManagerDriver_PasswordFormsParsed_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadForms(&p_forms))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "PasswordManagerDriver::PasswordFormsParsed deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->PasswordFormsParsed(
std::move(p_forms));
      return true;
    }
    case internal::kPasswordManagerDriver_PasswordFormsRendered_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)autofill::mojom::PasswordManagerDriver::PasswordFormsRendered",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::PasswordManagerDriver_PasswordFormsRendered_Params_Data* params =
          reinterpret_cast<internal::PasswordManagerDriver_PasswordFormsRendered_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::vector<autofill::PasswordForm> p_visible_forms{};
      bool p_did_stop_loading{};
      PasswordManagerDriver_PasswordFormsRendered_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadVisibleForms(&p_visible_forms))
        success = false;
      p_did_stop_loading = input_data_view.did_stop_loading();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "PasswordManagerDriver::PasswordFormsRendered deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->PasswordFormsRendered(
std::move(p_visible_forms), 
std::move(p_did_stop_loading));
      return true;
    }
    case internal::kPasswordManagerDriver_PasswordFormSubmitted_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)autofill::mojom::PasswordManagerDriver::PasswordFormSubmitted",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::PasswordManagerDriver_PasswordFormSubmitted_Params_Data* params =
          reinterpret_cast<internal::PasswordManagerDriver_PasswordFormSubmitted_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      autofill::PasswordForm p_password_form{};
      PasswordManagerDriver_PasswordFormSubmitted_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadPasswordForm(&p_password_form))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "PasswordManagerDriver::PasswordFormSubmitted deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->PasswordFormSubmitted(
std::move(p_password_form));
      return true;
    }
    case internal::kPasswordManagerDriver_ShowManualFallbackForSaving_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)autofill::mojom::PasswordManagerDriver::ShowManualFallbackForSaving",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::PasswordManagerDriver_ShowManualFallbackForSaving_Params_Data* params =
          reinterpret_cast<internal::PasswordManagerDriver_ShowManualFallbackForSaving_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      autofill::PasswordForm p_password_form{};
      PasswordManagerDriver_ShowManualFallbackForSaving_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadPasswordForm(&p_password_form))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "PasswordManagerDriver::ShowManualFallbackForSaving deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->ShowManualFallbackForSaving(
std::move(p_password_form));
      return true;
    }
    case internal::kPasswordManagerDriver_HideManualFallbackForSaving_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)autofill::mojom::PasswordManagerDriver::HideManualFallbackForSaving",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::PasswordManagerDriver_HideManualFallbackForSaving_Params_Data* params =
          reinterpret_cast<internal::PasswordManagerDriver_HideManualFallbackForSaving_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      PasswordManagerDriver_HideManualFallbackForSaving_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "PasswordManagerDriver::HideManualFallbackForSaving deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->HideManualFallbackForSaving();
      return true;
    }
    case internal::kPasswordManagerDriver_SameDocumentNavigation_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)autofill::mojom::PasswordManagerDriver::SameDocumentNavigation",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::PasswordManagerDriver_SameDocumentNavigation_Params_Data* params =
          reinterpret_cast<internal::PasswordManagerDriver_SameDocumentNavigation_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      autofill::PasswordForm p_password_form{};
      PasswordManagerDriver_SameDocumentNavigation_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadPasswordForm(&p_password_form))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "PasswordManagerDriver::SameDocumentNavigation deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->SameDocumentNavigation(
std::move(p_password_form));
      return true;
    }
    case internal::kPasswordManagerDriver_RecordSavePasswordProgress_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)autofill::mojom::PasswordManagerDriver::RecordSavePasswordProgress",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::PasswordManagerDriver_RecordSavePasswordProgress_Params_Data* params =
          reinterpret_cast<internal::PasswordManagerDriver_RecordSavePasswordProgress_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::string p_log{};
      PasswordManagerDriver_RecordSavePasswordProgress_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadLog(&p_log))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "PasswordManagerDriver::RecordSavePasswordProgress deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->RecordSavePasswordProgress(
std::move(p_log));
      return true;
    }
    case internal::kPasswordManagerDriver_UserModifiedPasswordField_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)autofill::mojom::PasswordManagerDriver::UserModifiedPasswordField",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::PasswordManagerDriver_UserModifiedPasswordField_Params_Data* params =
          reinterpret_cast<internal::PasswordManagerDriver_UserModifiedPasswordField_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      PasswordManagerDriver_UserModifiedPasswordField_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "PasswordManagerDriver::UserModifiedPasswordField deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->UserModifiedPasswordField();
      return true;
    }
    case internal::kPasswordManagerDriver_ShowPasswordSuggestions_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)autofill::mojom::PasswordManagerDriver::ShowPasswordSuggestions",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::PasswordManagerDriver_ShowPasswordSuggestions_Params_Data* params =
          reinterpret_cast<internal::PasswordManagerDriver_ShowPasswordSuggestions_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int32_t p_key{};
      base::i18n::TextDirection p_text_direction{};
      base::string16 p_typed_username{};
      int32_t p_options{};
      gfx::RectF p_bounds{};
      PasswordManagerDriver_ShowPasswordSuggestions_ParamsDataView input_data_view(params, &serialization_context);
      
      p_key = input_data_view.key();
      if (!input_data_view.ReadTextDirection(&p_text_direction))
        success = false;
      if (!input_data_view.ReadTypedUsername(&p_typed_username))
        success = false;
      p_options = input_data_view.options();
      if (!input_data_view.ReadBounds(&p_bounds))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "PasswordManagerDriver::ShowPasswordSuggestions deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->ShowPasswordSuggestions(
std::move(p_key), 
std::move(p_text_direction), 
std::move(p_typed_username), 
std::move(p_options), 
std::move(p_bounds));
      return true;
    }
    case internal::kPasswordManagerDriver_ShowManualFallbackSuggestion_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)autofill::mojom::PasswordManagerDriver::ShowManualFallbackSuggestion",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::PasswordManagerDriver_ShowManualFallbackSuggestion_Params_Data* params =
          reinterpret_cast<internal::PasswordManagerDriver_ShowManualFallbackSuggestion_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      base::i18n::TextDirection p_text_direction{};
      gfx::RectF p_bounds{};
      PasswordManagerDriver_ShowManualFallbackSuggestion_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadTextDirection(&p_text_direction))
        success = false;
      if (!input_data_view.ReadBounds(&p_bounds))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "PasswordManagerDriver::ShowManualFallbackSuggestion deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->ShowManualFallbackSuggestion(
std::move(p_text_direction), 
std::move(p_bounds));
      return true;
    }
    case internal::kPasswordManagerDriver_PresaveGeneratedPassword_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)autofill::mojom::PasswordManagerDriver::PresaveGeneratedPassword",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::PasswordManagerDriver_PresaveGeneratedPassword_Params_Data* params =
          reinterpret_cast<internal::PasswordManagerDriver_PresaveGeneratedPassword_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      autofill::PasswordForm p_password_form{};
      PasswordManagerDriver_PresaveGeneratedPassword_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadPasswordForm(&p_password_form))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "PasswordManagerDriver::PresaveGeneratedPassword deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->PresaveGeneratedPassword(
std::move(p_password_form));
      return true;
    }
    case internal::kPasswordManagerDriver_PasswordNoLongerGenerated_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)autofill::mojom::PasswordManagerDriver::PasswordNoLongerGenerated",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::PasswordManagerDriver_PasswordNoLongerGenerated_Params_Data* params =
          reinterpret_cast<internal::PasswordManagerDriver_PasswordNoLongerGenerated_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      autofill::PasswordForm p_password_form{};
      PasswordManagerDriver_PasswordNoLongerGenerated_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadPasswordForm(&p_password_form))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "PasswordManagerDriver::PasswordNoLongerGenerated deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->PasswordNoLongerGenerated(
std::move(p_password_form));
      return true;
    }
    case internal::kPasswordManagerDriver_SaveGenerationFieldDetectedByClassifier_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)autofill::mojom::PasswordManagerDriver::SaveGenerationFieldDetectedByClassifier",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::PasswordManagerDriver_SaveGenerationFieldDetectedByClassifier_Params_Data* params =
          reinterpret_cast<internal::PasswordManagerDriver_SaveGenerationFieldDetectedByClassifier_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      autofill::PasswordForm p_password_form{};
      base::string16 p_generation_field{};
      PasswordManagerDriver_SaveGenerationFieldDetectedByClassifier_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadPasswordForm(&p_password_form))
        success = false;
      if (!input_data_view.ReadGenerationField(&p_generation_field))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "PasswordManagerDriver::SaveGenerationFieldDetectedByClassifier deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->SaveGenerationFieldDetectedByClassifier(
std::move(p_password_form), 
std::move(p_generation_field));
      return true;
    }
    case internal::kPasswordManagerDriver_CheckSafeBrowsingReputation_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)autofill::mojom::PasswordManagerDriver::CheckSafeBrowsingReputation",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::PasswordManagerDriver_CheckSafeBrowsingReputation_Params_Data* params =
          reinterpret_cast<internal::PasswordManagerDriver_CheckSafeBrowsingReputation_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      GURL p_form_action{};
      GURL p_frame_url{};
      PasswordManagerDriver_CheckSafeBrowsingReputation_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadFormAction(&p_form_action))
        success = false;
      if (!input_data_view.ReadFrameUrl(&p_frame_url))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "PasswordManagerDriver::CheckSafeBrowsingReputation deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->CheckSafeBrowsingReputation(
std::move(p_form_action), 
std::move(p_frame_url));
      return true;
    }
  }
  return false;
}

// static
bool PasswordManagerDriverStubDispatch::AcceptWithResponder(
    PasswordManagerDriver* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kPasswordManagerDriver_PasswordFormsParsed_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)autofill::mojom::PasswordManagerDriver::PasswordFormsParsed",
               "message", message->name());
#endif
      break;
    }
    case internal::kPasswordManagerDriver_PasswordFormsRendered_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)autofill::mojom::PasswordManagerDriver::PasswordFormsRendered",
               "message", message->name());
#endif
      break;
    }
    case internal::kPasswordManagerDriver_PasswordFormSubmitted_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)autofill::mojom::PasswordManagerDriver::PasswordFormSubmitted",
               "message", message->name());
#endif
      break;
    }
    case internal::kPasswordManagerDriver_ShowManualFallbackForSaving_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)autofill::mojom::PasswordManagerDriver::ShowManualFallbackForSaving",
               "message", message->name());
#endif
      break;
    }
    case internal::kPasswordManagerDriver_HideManualFallbackForSaving_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)autofill::mojom::PasswordManagerDriver::HideManualFallbackForSaving",
               "message", message->name());
#endif
      break;
    }
    case internal::kPasswordManagerDriver_SameDocumentNavigation_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)autofill::mojom::PasswordManagerDriver::SameDocumentNavigation",
               "message", message->name());
#endif
      break;
    }
    case internal::kPasswordManagerDriver_RecordSavePasswordProgress_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)autofill::mojom::PasswordManagerDriver::RecordSavePasswordProgress",
               "message", message->name());
#endif
      break;
    }
    case internal::kPasswordManagerDriver_UserModifiedPasswordField_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)autofill::mojom::PasswordManagerDriver::UserModifiedPasswordField",
               "message", message->name());
#endif
      break;
    }
    case internal::kPasswordManagerDriver_ShowPasswordSuggestions_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)autofill::mojom::PasswordManagerDriver::ShowPasswordSuggestions",
               "message", message->name());
#endif
      break;
    }
    case internal::kPasswordManagerDriver_ShowManualFallbackSuggestion_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)autofill::mojom::PasswordManagerDriver::ShowManualFallbackSuggestion",
               "message", message->name());
#endif
      break;
    }
    case internal::kPasswordManagerDriver_PresaveGeneratedPassword_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)autofill::mojom::PasswordManagerDriver::PresaveGeneratedPassword",
               "message", message->name());
#endif
      break;
    }
    case internal::kPasswordManagerDriver_PasswordNoLongerGenerated_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)autofill::mojom::PasswordManagerDriver::PasswordNoLongerGenerated",
               "message", message->name());
#endif
      break;
    }
    case internal::kPasswordManagerDriver_SaveGenerationFieldDetectedByClassifier_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)autofill::mojom::PasswordManagerDriver::SaveGenerationFieldDetectedByClassifier",
               "message", message->name());
#endif
      break;
    }
    case internal::kPasswordManagerDriver_CheckSafeBrowsingReputation_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)autofill::mojom::PasswordManagerDriver::CheckSafeBrowsingReputation",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool PasswordManagerDriverRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "PasswordManagerDriver RequestValidator");

  switch (message->header()->name) {
    case internal::kPasswordManagerDriver_PasswordFormsParsed_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PasswordManagerDriver_PasswordFormsParsed_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kPasswordManagerDriver_PasswordFormsRendered_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PasswordManagerDriver_PasswordFormsRendered_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kPasswordManagerDriver_PasswordFormSubmitted_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PasswordManagerDriver_PasswordFormSubmitted_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kPasswordManagerDriver_ShowManualFallbackForSaving_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PasswordManagerDriver_ShowManualFallbackForSaving_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kPasswordManagerDriver_HideManualFallbackForSaving_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PasswordManagerDriver_HideManualFallbackForSaving_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kPasswordManagerDriver_SameDocumentNavigation_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PasswordManagerDriver_SameDocumentNavigation_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kPasswordManagerDriver_RecordSavePasswordProgress_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PasswordManagerDriver_RecordSavePasswordProgress_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kPasswordManagerDriver_UserModifiedPasswordField_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PasswordManagerDriver_UserModifiedPasswordField_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kPasswordManagerDriver_ShowPasswordSuggestions_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PasswordManagerDriver_ShowPasswordSuggestions_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kPasswordManagerDriver_ShowManualFallbackSuggestion_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PasswordManagerDriver_ShowManualFallbackSuggestion_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kPasswordManagerDriver_PresaveGeneratedPassword_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PasswordManagerDriver_PresaveGeneratedPassword_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kPasswordManagerDriver_PasswordNoLongerGenerated_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PasswordManagerDriver_PasswordNoLongerGenerated_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kPasswordManagerDriver_SaveGenerationFieldDetectedByClassifier_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PasswordManagerDriver_SaveGenerationFieldDetectedByClassifier_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kPasswordManagerDriver_CheckSafeBrowsingReputation_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PasswordManagerDriver_CheckSafeBrowsingReputation_Params_Data>(
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

void PasswordManagerDriverInterceptorForTesting::PasswordFormsParsed(const std::vector<autofill::PasswordForm>& forms) {
  GetForwardingInterface()->PasswordFormsParsed(std::move(forms));
}
void PasswordManagerDriverInterceptorForTesting::PasswordFormsRendered(const std::vector<autofill::PasswordForm>& visible_forms, bool did_stop_loading) {
  GetForwardingInterface()->PasswordFormsRendered(std::move(visible_forms), std::move(did_stop_loading));
}
void PasswordManagerDriverInterceptorForTesting::PasswordFormSubmitted(const autofill::PasswordForm& password_form) {
  GetForwardingInterface()->PasswordFormSubmitted(std::move(password_form));
}
void PasswordManagerDriverInterceptorForTesting::ShowManualFallbackForSaving(const autofill::PasswordForm& password_form) {
  GetForwardingInterface()->ShowManualFallbackForSaving(std::move(password_form));
}
void PasswordManagerDriverInterceptorForTesting::HideManualFallbackForSaving() {
  GetForwardingInterface()->HideManualFallbackForSaving();
}
void PasswordManagerDriverInterceptorForTesting::SameDocumentNavigation(const autofill::PasswordForm& password_form) {
  GetForwardingInterface()->SameDocumentNavigation(std::move(password_form));
}
void PasswordManagerDriverInterceptorForTesting::RecordSavePasswordProgress(const std::string& log) {
  GetForwardingInterface()->RecordSavePasswordProgress(std::move(log));
}
void PasswordManagerDriverInterceptorForTesting::UserModifiedPasswordField() {
  GetForwardingInterface()->UserModifiedPasswordField();
}
void PasswordManagerDriverInterceptorForTesting::ShowPasswordSuggestions(int32_t key, base::i18n::TextDirection text_direction, const base::string16& typed_username, int32_t options, const gfx::RectF& bounds) {
  GetForwardingInterface()->ShowPasswordSuggestions(std::move(key), std::move(text_direction), std::move(typed_username), std::move(options), std::move(bounds));
}
void PasswordManagerDriverInterceptorForTesting::ShowManualFallbackSuggestion(base::i18n::TextDirection text_direction, const gfx::RectF& bounds) {
  GetForwardingInterface()->ShowManualFallbackSuggestion(std::move(text_direction), std::move(bounds));
}
void PasswordManagerDriverInterceptorForTesting::PresaveGeneratedPassword(const autofill::PasswordForm& password_form) {
  GetForwardingInterface()->PresaveGeneratedPassword(std::move(password_form));
}
void PasswordManagerDriverInterceptorForTesting::PasswordNoLongerGenerated(const autofill::PasswordForm& password_form) {
  GetForwardingInterface()->PasswordNoLongerGenerated(std::move(password_form));
}
void PasswordManagerDriverInterceptorForTesting::SaveGenerationFieldDetectedByClassifier(const autofill::PasswordForm& password_form, const base::string16& generation_field) {
  GetForwardingInterface()->SaveGenerationFieldDetectedByClassifier(std::move(password_form), std::move(generation_field));
}
void PasswordManagerDriverInterceptorForTesting::CheckSafeBrowsingReputation(const GURL& form_action, const GURL& frame_url) {
  GetForwardingInterface()->CheckSafeBrowsingReputation(std::move(form_action), std::move(frame_url));
}
PasswordManagerDriverAsyncWaiter::PasswordManagerDriverAsyncWaiter(
    PasswordManagerDriver* proxy) : proxy_(proxy) {}

PasswordManagerDriverAsyncWaiter::~PasswordManagerDriverAsyncWaiter() = default;


const char PasswordManagerClient::Name_[] = "autofill.mojom.PasswordManagerClient";

PasswordManagerClientProxy::PasswordManagerClientProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void PasswordManagerClientProxy::GenerationAvailableForForm(
    const autofill::PasswordForm& in_password_form) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "autofill::mojom::PasswordManagerClient::GenerationAvailableForForm");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPasswordManagerClient_GenerationAvailableForForm_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::autofill::mojom::internal::PasswordManagerClient_GenerationAvailableForForm_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->password_form)::BaseType::BufferWriter
      password_form_writer;
  mojo::internal::Serialize<::autofill::mojom::PasswordFormDataView>(
      in_password_form, buffer, &password_form_writer, &serialization_context);
  params->password_form.Set(
      password_form_writer.is_null() ? nullptr : password_form_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->password_form.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null password_form in PasswordManagerClient.GenerationAvailableForForm request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void PasswordManagerClientProxy::ShowPasswordGenerationPopup(
    const gfx::RectF& in_bounds, int32_t in_max_length, const base::string16& in_generation_element, bool in_is_manually_triggered, const autofill::PasswordForm& in_password_form) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "autofill::mojom::PasswordManagerClient::ShowPasswordGenerationPopup");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPasswordManagerClient_ShowPasswordGenerationPopup_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::autofill::mojom::internal::PasswordManagerClient_ShowPasswordGenerationPopup_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->bounds)::BaseType::BufferWriter
      bounds_writer;
  mojo::internal::Serialize<::gfx::mojom::RectFDataView>(
      in_bounds, buffer, &bounds_writer, &serialization_context);
  params->bounds.Set(
      bounds_writer.is_null() ? nullptr : bounds_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->bounds.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null bounds in PasswordManagerClient.ShowPasswordGenerationPopup request");
  params->max_length = in_max_length;
  typename decltype(params->generation_element)::BaseType::BufferWriter
      generation_element_writer;
  mojo::internal::Serialize<::mojo_base::mojom::String16DataView>(
      in_generation_element, buffer, &generation_element_writer, &serialization_context);
  params->generation_element.Set(
      generation_element_writer.is_null() ? nullptr : generation_element_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->generation_element.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null generation_element in PasswordManagerClient.ShowPasswordGenerationPopup request");
  params->is_manually_triggered = in_is_manually_triggered;
  typename decltype(params->password_form)::BaseType::BufferWriter
      password_form_writer;
  mojo::internal::Serialize<::autofill::mojom::PasswordFormDataView>(
      in_password_form, buffer, &password_form_writer, &serialization_context);
  params->password_form.Set(
      password_form_writer.is_null() ? nullptr : password_form_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->password_form.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null password_form in PasswordManagerClient.ShowPasswordGenerationPopup request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void PasswordManagerClientProxy::ShowPasswordEditingPopup(
    const gfx::RectF& in_bounds, const autofill::PasswordForm& in_password_form) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "autofill::mojom::PasswordManagerClient::ShowPasswordEditingPopup");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPasswordManagerClient_ShowPasswordEditingPopup_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::autofill::mojom::internal::PasswordManagerClient_ShowPasswordEditingPopup_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->bounds)::BaseType::BufferWriter
      bounds_writer;
  mojo::internal::Serialize<::gfx::mojom::RectFDataView>(
      in_bounds, buffer, &bounds_writer, &serialization_context);
  params->bounds.Set(
      bounds_writer.is_null() ? nullptr : bounds_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->bounds.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null bounds in PasswordManagerClient.ShowPasswordEditingPopup request");
  typename decltype(params->password_form)::BaseType::BufferWriter
      password_form_writer;
  mojo::internal::Serialize<::autofill::mojom::PasswordFormDataView>(
      in_password_form, buffer, &password_form_writer, &serialization_context);
  params->password_form.Set(
      password_form_writer.is_null() ? nullptr : password_form_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->password_form.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null password_form in PasswordManagerClient.ShowPasswordEditingPopup request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void PasswordManagerClientProxy::HidePasswordGenerationPopup(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "autofill::mojom::PasswordManagerClient::HidePasswordGenerationPopup");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPasswordManagerClient_HidePasswordGenerationPopup_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::autofill::mojom::internal::PasswordManagerClient_HidePasswordGenerationPopup_Params_Data::BufferWriter
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
bool PasswordManagerClientStubDispatch::Accept(
    PasswordManagerClient* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kPasswordManagerClient_GenerationAvailableForForm_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)autofill::mojom::PasswordManagerClient::GenerationAvailableForForm",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::PasswordManagerClient_GenerationAvailableForForm_Params_Data* params =
          reinterpret_cast<internal::PasswordManagerClient_GenerationAvailableForForm_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      autofill::PasswordForm p_password_form{};
      PasswordManagerClient_GenerationAvailableForForm_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadPasswordForm(&p_password_form))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "PasswordManagerClient::GenerationAvailableForForm deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->GenerationAvailableForForm(
std::move(p_password_form));
      return true;
    }
    case internal::kPasswordManagerClient_ShowPasswordGenerationPopup_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)autofill::mojom::PasswordManagerClient::ShowPasswordGenerationPopup",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::PasswordManagerClient_ShowPasswordGenerationPopup_Params_Data* params =
          reinterpret_cast<internal::PasswordManagerClient_ShowPasswordGenerationPopup_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      gfx::RectF p_bounds{};
      int32_t p_max_length{};
      base::string16 p_generation_element{};
      bool p_is_manually_triggered{};
      autofill::PasswordForm p_password_form{};
      PasswordManagerClient_ShowPasswordGenerationPopup_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadBounds(&p_bounds))
        success = false;
      p_max_length = input_data_view.max_length();
      if (!input_data_view.ReadGenerationElement(&p_generation_element))
        success = false;
      p_is_manually_triggered = input_data_view.is_manually_triggered();
      if (!input_data_view.ReadPasswordForm(&p_password_form))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "PasswordManagerClient::ShowPasswordGenerationPopup deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->ShowPasswordGenerationPopup(
std::move(p_bounds), 
std::move(p_max_length), 
std::move(p_generation_element), 
std::move(p_is_manually_triggered), 
std::move(p_password_form));
      return true;
    }
    case internal::kPasswordManagerClient_ShowPasswordEditingPopup_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)autofill::mojom::PasswordManagerClient::ShowPasswordEditingPopup",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::PasswordManagerClient_ShowPasswordEditingPopup_Params_Data* params =
          reinterpret_cast<internal::PasswordManagerClient_ShowPasswordEditingPopup_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      gfx::RectF p_bounds{};
      autofill::PasswordForm p_password_form{};
      PasswordManagerClient_ShowPasswordEditingPopup_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadBounds(&p_bounds))
        success = false;
      if (!input_data_view.ReadPasswordForm(&p_password_form))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "PasswordManagerClient::ShowPasswordEditingPopup deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->ShowPasswordEditingPopup(
std::move(p_bounds), 
std::move(p_password_form));
      return true;
    }
    case internal::kPasswordManagerClient_HidePasswordGenerationPopup_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)autofill::mojom::PasswordManagerClient::HidePasswordGenerationPopup",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::PasswordManagerClient_HidePasswordGenerationPopup_Params_Data* params =
          reinterpret_cast<internal::PasswordManagerClient_HidePasswordGenerationPopup_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      PasswordManagerClient_HidePasswordGenerationPopup_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "PasswordManagerClient::HidePasswordGenerationPopup deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->HidePasswordGenerationPopup();
      return true;
    }
  }
  return false;
}

// static
bool PasswordManagerClientStubDispatch::AcceptWithResponder(
    PasswordManagerClient* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kPasswordManagerClient_GenerationAvailableForForm_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)autofill::mojom::PasswordManagerClient::GenerationAvailableForForm",
               "message", message->name());
#endif
      break;
    }
    case internal::kPasswordManagerClient_ShowPasswordGenerationPopup_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)autofill::mojom::PasswordManagerClient::ShowPasswordGenerationPopup",
               "message", message->name());
#endif
      break;
    }
    case internal::kPasswordManagerClient_ShowPasswordEditingPopup_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)autofill::mojom::PasswordManagerClient::ShowPasswordEditingPopup",
               "message", message->name());
#endif
      break;
    }
    case internal::kPasswordManagerClient_HidePasswordGenerationPopup_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)autofill::mojom::PasswordManagerClient::HidePasswordGenerationPopup",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool PasswordManagerClientRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "PasswordManagerClient RequestValidator");

  switch (message->header()->name) {
    case internal::kPasswordManagerClient_GenerationAvailableForForm_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PasswordManagerClient_GenerationAvailableForForm_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kPasswordManagerClient_ShowPasswordGenerationPopup_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PasswordManagerClient_ShowPasswordGenerationPopup_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kPasswordManagerClient_ShowPasswordEditingPopup_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PasswordManagerClient_ShowPasswordEditingPopup_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kPasswordManagerClient_HidePasswordGenerationPopup_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PasswordManagerClient_HidePasswordGenerationPopup_Params_Data>(
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

void PasswordManagerClientInterceptorForTesting::GenerationAvailableForForm(const autofill::PasswordForm& password_form) {
  GetForwardingInterface()->GenerationAvailableForForm(std::move(password_form));
}
void PasswordManagerClientInterceptorForTesting::ShowPasswordGenerationPopup(const gfx::RectF& bounds, int32_t max_length, const base::string16& generation_element, bool is_manually_triggered, const autofill::PasswordForm& password_form) {
  GetForwardingInterface()->ShowPasswordGenerationPopup(std::move(bounds), std::move(max_length), std::move(generation_element), std::move(is_manually_triggered), std::move(password_form));
}
void PasswordManagerClientInterceptorForTesting::ShowPasswordEditingPopup(const gfx::RectF& bounds, const autofill::PasswordForm& password_form) {
  GetForwardingInterface()->ShowPasswordEditingPopup(std::move(bounds), std::move(password_form));
}
void PasswordManagerClientInterceptorForTesting::HidePasswordGenerationPopup() {
  GetForwardingInterface()->HidePasswordGenerationPopup();
}
PasswordManagerClientAsyncWaiter::PasswordManagerClientAsyncWaiter(
    PasswordManagerClient* proxy) : proxy_(proxy) {}

PasswordManagerClientAsyncWaiter::~PasswordManagerClientAsyncWaiter() = default;


}  // namespace mojom
}  // namespace autofill

namespace mojo {

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif