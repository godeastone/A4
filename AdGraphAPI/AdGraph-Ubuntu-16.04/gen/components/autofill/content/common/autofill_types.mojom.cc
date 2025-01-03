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

#include "components/autofill/content/common/autofill_types.mojom.h"

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

#include "components/autofill/content/common/autofill_types.mojom-shared-message-ids.h"
#include "components/autofill/content/common/autofill_types_struct_traits.h"
#include "mojo/public/cpp/base/string16_mojom_traits.h"
#include "mojo/public/cpp/base/text_direction_mojom_traits.h"
#include "mojo/public/cpp/base/time_mojom_traits.h"
#include "url/mojom/origin_mojom_traits.h"
#include "url/mojom/url_gurl_mojom_traits.h"
namespace autofill {
namespace mojom {
FormFieldData::FormFieldData()
    : label(),
      name(),
      id(),
      value(),
      form_control_type(),
      autocomplete_attribute(),
      placeholder(),
      css_classes(),
      unique_renderer_id(),
      properties_mask(),
      max_length(),
      is_autofilled(),
      section(),
      check_status(),
      is_focusable(),
      should_autocomplete(),
      role(),
      text_direction(),
      is_enabled(),
      is_readonly(),
      is_default(),
      typed_value(),
      option_values(),
      option_contents(),
      label_source() {}

FormFieldData::FormFieldData(
    const base::string16& label_in,
    const base::string16& name_in,
    const base::string16& id_in,
    const base::string16& value_in,
    const std::string& form_control_type_in,
    const std::string& autocomplete_attribute_in,
    const base::string16& placeholder_in,
    const base::string16& css_classes_in,
    uint32_t unique_renderer_id_in,
    uint32_t properties_mask_in,
    uint64_t max_length_in,
    bool is_autofilled_in,
    const std::string& section_in,
    autofill::FormFieldData::CheckStatus check_status_in,
    bool is_focusable_in,
    bool should_autocomplete_in,
    autofill::FormFieldData::RoleAttribute role_in,
    base::i18n::TextDirection text_direction_in,
    bool is_enabled_in,
    bool is_readonly_in,
    bool is_default_in,
    const base::string16& typed_value_in,
    const std::vector<base::string16>& option_values_in,
    const std::vector<base::string16>& option_contents_in,
    LabelSource label_source_in)
    : label(std::move(label_in)),
      name(std::move(name_in)),
      id(std::move(id_in)),
      value(std::move(value_in)),
      form_control_type(std::move(form_control_type_in)),
      autocomplete_attribute(std::move(autocomplete_attribute_in)),
      placeholder(std::move(placeholder_in)),
      css_classes(std::move(css_classes_in)),
      unique_renderer_id(std::move(unique_renderer_id_in)),
      properties_mask(std::move(properties_mask_in)),
      max_length(std::move(max_length_in)),
      is_autofilled(std::move(is_autofilled_in)),
      section(std::move(section_in)),
      check_status(std::move(check_status_in)),
      is_focusable(std::move(is_focusable_in)),
      should_autocomplete(std::move(should_autocomplete_in)),
      role(std::move(role_in)),
      text_direction(std::move(text_direction_in)),
      is_enabled(std::move(is_enabled_in)),
      is_readonly(std::move(is_readonly_in)),
      is_default(std::move(is_default_in)),
      typed_value(std::move(typed_value_in)),
      option_values(std::move(option_values_in)),
      option_contents(std::move(option_contents_in)),
      label_source(std::move(label_source_in)) {}

FormFieldData::~FormFieldData() = default;

bool FormFieldData::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
FormData::FormData()
    : name(),
      origin(),
      action(),
      main_frame_origin(),
      is_form_tag(),
      is_formless_checkout(),
      unique_renderer_id(),
      fields() {}

FormData::FormData(
    const base::string16& name_in,
    const GURL& origin_in,
    const GURL& action_in,
    const url::Origin& main_frame_origin_in,
    bool is_form_tag_in,
    bool is_formless_checkout_in,
    uint32_t unique_renderer_id_in,
    const std::vector<autofill::FormFieldData>& fields_in)
    : name(std::move(name_in)),
      origin(std::move(origin_in)),
      action(std::move(action_in)),
      main_frame_origin(std::move(main_frame_origin_in)),
      is_form_tag(std::move(is_form_tag_in)),
      is_formless_checkout(std::move(is_formless_checkout_in)),
      unique_renderer_id(std::move(unique_renderer_id_in)),
      fields(std::move(fields_in)) {}

FormData::~FormData() = default;

bool FormData::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
FormFieldDataPredictions::FormFieldDataPredictions()
    : field(),
      signature(),
      heuristic_type(),
      server_type(),
      overall_type(),
      parseable_name(),
      section() {}

FormFieldDataPredictions::FormFieldDataPredictions(
    const autofill::FormFieldData& field_in,
    const std::string& signature_in,
    const std::string& heuristic_type_in,
    const std::string& server_type_in,
    const std::string& overall_type_in,
    const std::string& parseable_name_in,
    const std::string& section_in)
    : field(std::move(field_in)),
      signature(std::move(signature_in)),
      heuristic_type(std::move(heuristic_type_in)),
      server_type(std::move(server_type_in)),
      overall_type(std::move(overall_type_in)),
      parseable_name(std::move(parseable_name_in)),
      section(std::move(section_in)) {}

FormFieldDataPredictions::~FormFieldDataPredictions() = default;

bool FormFieldDataPredictions::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
FormDataPredictions::FormDataPredictions()
    : data(),
      signature(),
      fields() {}

FormDataPredictions::FormDataPredictions(
    const autofill::FormData& data_in,
    const std::string& signature_in,
    const std::vector<autofill::FormFieldDataPredictions>& fields_in)
    : data(std::move(data_in)),
      signature(std::move(signature_in)),
      fields(std::move(fields_in)) {}

FormDataPredictions::~FormDataPredictions() = default;

bool FormDataPredictions::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
PasswordAndRealm::PasswordAndRealm()
    : password(),
      realm() {}

PasswordAndRealm::PasswordAndRealm(
    const base::string16& password_in,
    const std::string& realm_in)
    : password(std::move(password_in)),
      realm(std::move(realm_in)) {}

PasswordAndRealm::~PasswordAndRealm() = default;

bool PasswordAndRealm::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
PasswordFormFillData::PasswordFormFillData()
    : name(),
      origin(),
      action(),
      username_field(),
      password_field(),
      preferred_realm(),
      additional_logins(),
      wait_for_username(),
      is_possible_change_password_form() {}

PasswordFormFillData::PasswordFormFillData(
    const base::string16& name_in,
    const GURL& origin_in,
    const GURL& action_in,
    const autofill::FormFieldData& username_field_in,
    const autofill::FormFieldData& password_field_in,
    const std::string& preferred_realm_in,
    const base::flat_map<base::string16, autofill::PasswordAndRealm>& additional_logins_in,
    bool wait_for_username_in,
    bool is_possible_change_password_form_in)
    : name(std::move(name_in)),
      origin(std::move(origin_in)),
      action(std::move(action_in)),
      username_field(std::move(username_field_in)),
      password_field(std::move(password_field_in)),
      preferred_realm(std::move(preferred_realm_in)),
      additional_logins(std::move(additional_logins_in)),
      wait_for_username(std::move(wait_for_username_in)),
      is_possible_change_password_form(std::move(is_possible_change_password_form_in)) {}

PasswordFormFillData::~PasswordFormFillData() = default;

bool PasswordFormFillData::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
PasswordFormGenerationData::PasswordFormGenerationData()
    : form_signature(),
      field_signature(),
      has_confirmation_field(),
      confirmation_field_signature() {}

PasswordFormGenerationData::PasswordFormGenerationData(
    uint64_t form_signature_in,
    uint32_t field_signature_in,
    bool has_confirmation_field_in,
    uint32_t confirmation_field_signature_in)
    : form_signature(std::move(form_signature_in)),
      field_signature(std::move(field_signature_in)),
      has_confirmation_field(std::move(has_confirmation_field_in)),
      confirmation_field_signature(std::move(confirmation_field_signature_in)) {}

PasswordFormGenerationData::~PasswordFormGenerationData() = default;

bool PasswordFormGenerationData::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
ValueElementPair::ValueElementPair()
    : value(),
      field_name() {}

ValueElementPair::ValueElementPair(
    const base::string16& value_in,
    const base::string16& field_name_in)
    : value(std::move(value_in)),
      field_name(std::move(field_name_in)) {}

ValueElementPair::~ValueElementPair() = default;

bool ValueElementPair::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
PasswordForm::PasswordForm()
    : scheme(),
      signon_realm(),
      origin_with_path(),
      action(),
      affiliated_web_realm(),
      submit_element(),
      username_element(),
      username_marked_by_site(),
      username_value(),
      other_possible_usernames(),
      all_possible_passwords(),
      form_has_autofilled_value(),
      password_element(),
      password_value(),
      password_value_is_default(),
      new_password_element(),
      new_password_value(),
      new_password_value_is_default(),
      new_password_marked_by_site(),
      confirmation_password_element(),
      preferred(),
      date_created(),
      date_synced(),
      blacklisted_by_user(),
      type(),
      times_used(),
      form_data(),
      generation_upload_status(),
      display_name(),
      icon_url(),
      federation_origin(),
      skip_zero_click(),
      layout(),
      was_parsed_using_autofill_predictions(),
      is_public_suffix_match(),
      is_affiliation_based_match(),
      submission_event(),
      only_for_fallback_saving() {}

PasswordForm::PasswordForm(
    autofill::PasswordForm::Scheme scheme_in,
    const std::string& signon_realm_in,
    const GURL& origin_with_path_in,
    const GURL& action_in,
    const std::string& affiliated_web_realm_in,
    const base::string16& submit_element_in,
    const base::string16& username_element_in,
    bool username_marked_by_site_in,
    const base::string16& username_value_in,
    const std::vector<autofill::ValueElementPair>& other_possible_usernames_in,
    const std::vector<autofill::ValueElementPair>& all_possible_passwords_in,
    bool form_has_autofilled_value_in,
    const base::string16& password_element_in,
    const base::string16& password_value_in,
    bool password_value_is_default_in,
    const base::string16& new_password_element_in,
    const base::string16& new_password_value_in,
    bool new_password_value_is_default_in,
    bool new_password_marked_by_site_in,
    const base::string16& confirmation_password_element_in,
    bool preferred_in,
    base::Time date_created_in,
    base::Time date_synced_in,
    bool blacklisted_by_user_in,
    autofill::PasswordForm::Type type_in,
    int32_t times_used_in,
    const autofill::FormData& form_data_in,
    autofill::PasswordForm::GenerationUploadStatus generation_upload_status_in,
    const base::string16& display_name_in,
    const GURL& icon_url_in,
    const url::Origin& federation_origin_in,
    bool skip_zero_click_in,
    autofill::PasswordForm::Layout layout_in,
    bool was_parsed_using_autofill_predictions_in,
    bool is_public_suffix_match_in,
    bool is_affiliation_based_match_in,
    autofill::PasswordForm::SubmissionIndicatorEvent submission_event_in,
    bool only_for_fallback_saving_in)
    : scheme(std::move(scheme_in)),
      signon_realm(std::move(signon_realm_in)),
      origin_with_path(std::move(origin_with_path_in)),
      action(std::move(action_in)),
      affiliated_web_realm(std::move(affiliated_web_realm_in)),
      submit_element(std::move(submit_element_in)),
      username_element(std::move(username_element_in)),
      username_marked_by_site(std::move(username_marked_by_site_in)),
      username_value(std::move(username_value_in)),
      other_possible_usernames(std::move(other_possible_usernames_in)),
      all_possible_passwords(std::move(all_possible_passwords_in)),
      form_has_autofilled_value(std::move(form_has_autofilled_value_in)),
      password_element(std::move(password_element_in)),
      password_value(std::move(password_value_in)),
      password_value_is_default(std::move(password_value_is_default_in)),
      new_password_element(std::move(new_password_element_in)),
      new_password_value(std::move(new_password_value_in)),
      new_password_value_is_default(std::move(new_password_value_is_default_in)),
      new_password_marked_by_site(std::move(new_password_marked_by_site_in)),
      confirmation_password_element(std::move(confirmation_password_element_in)),
      preferred(std::move(preferred_in)),
      date_created(std::move(date_created_in)),
      date_synced(std::move(date_synced_in)),
      blacklisted_by_user(std::move(blacklisted_by_user_in)),
      type(std::move(type_in)),
      times_used(std::move(times_used_in)),
      form_data(std::move(form_data_in)),
      generation_upload_status(std::move(generation_upload_status_in)),
      display_name(std::move(display_name_in)),
      icon_url(std::move(icon_url_in)),
      federation_origin(std::move(federation_origin_in)),
      skip_zero_click(std::move(skip_zero_click_in)),
      layout(std::move(layout_in)),
      was_parsed_using_autofill_predictions(std::move(was_parsed_using_autofill_predictions_in)),
      is_public_suffix_match(std::move(is_public_suffix_match_in)),
      is_affiliation_based_match(std::move(is_affiliation_based_match_in)),
      submission_event(std::move(submission_event_in)),
      only_for_fallback_saving(std::move(only_for_fallback_saving_in)) {}

PasswordForm::~PasswordForm() = default;

bool PasswordForm::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
PasswordFormFieldPredictionMap::PasswordFormFieldPredictionMap()
    : keys(),
      values() {}

PasswordFormFieldPredictionMap::PasswordFormFieldPredictionMap(
    const std::vector<autofill::FormFieldData>& keys_in,
    const std::vector<autofill::PasswordFormFieldPredictionType>& values_in)
    : keys(std::move(keys_in)),
      values(std::move(values_in)) {}

PasswordFormFieldPredictionMap::~PasswordFormFieldPredictionMap() = default;

bool PasswordFormFieldPredictionMap::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
FormsPredictionsMap::FormsPredictionsMap()
    : keys(),
      values() {}

FormsPredictionsMap::FormsPredictionsMap(
    const std::vector<autofill::FormData>& keys_in,
    const std::vector<autofill::PasswordFormFieldPredictionMap>& values_in)
    : keys(std::move(keys_in)),
      values(std::move(values_in)) {}

FormsPredictionsMap::~FormsPredictionsMap() = default;

bool FormsPredictionsMap::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
}  // namespace mojom
}  // namespace autofill

namespace mojo {


// static
bool StructTraits<::autofill::mojom::FormFieldData::DataView, ::autofill::mojom::FormFieldDataPtr>::Read(
    ::autofill::mojom::FormFieldData::DataView input,
    ::autofill::mojom::FormFieldDataPtr* output) {
  bool success = true;
  ::autofill::mojom::FormFieldDataPtr result(::autofill::mojom::FormFieldData::New());
  
      if (!input.ReadLabel(&result->label))
        success = false;
      if (!input.ReadName(&result->name))
        success = false;
      if (!input.ReadId(&result->id))
        success = false;
      if (!input.ReadValue(&result->value))
        success = false;
      if (!input.ReadFormControlType(&result->form_control_type))
        success = false;
      if (!input.ReadAutocompleteAttribute(&result->autocomplete_attribute))
        success = false;
      if (!input.ReadPlaceholder(&result->placeholder))
        success = false;
      if (!input.ReadCssClasses(&result->css_classes))
        success = false;
      result->unique_renderer_id = input.unique_renderer_id();
      result->properties_mask = input.properties_mask();
      result->max_length = input.max_length();
      result->is_autofilled = input.is_autofilled();
      if (!input.ReadSection(&result->section))
        success = false;
      if (!input.ReadCheckStatus(&result->check_status))
        success = false;
      result->is_focusable = input.is_focusable();
      result->should_autocomplete = input.should_autocomplete();
      if (!input.ReadRole(&result->role))
        success = false;
      if (!input.ReadTextDirection(&result->text_direction))
        success = false;
      result->is_enabled = input.is_enabled();
      result->is_readonly = input.is_readonly();
      result->is_default = input.is_default();
      if (!input.ReadTypedValue(&result->typed_value))
        success = false;
      if (!input.ReadOptionValues(&result->option_values))
        success = false;
      if (!input.ReadOptionContents(&result->option_contents))
        success = false;
      if (!input.ReadLabelSource(&result->label_source))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::autofill::mojom::FormData::DataView, ::autofill::mojom::FormDataPtr>::Read(
    ::autofill::mojom::FormData::DataView input,
    ::autofill::mojom::FormDataPtr* output) {
  bool success = true;
  ::autofill::mojom::FormDataPtr result(::autofill::mojom::FormData::New());
  
      if (!input.ReadName(&result->name))
        success = false;
      if (!input.ReadOrigin(&result->origin))
        success = false;
      if (!input.ReadAction(&result->action))
        success = false;
      if (!input.ReadMainFrameOrigin(&result->main_frame_origin))
        success = false;
      result->is_form_tag = input.is_form_tag();
      result->is_formless_checkout = input.is_formless_checkout();
      result->unique_renderer_id = input.unique_renderer_id();
      if (!input.ReadFields(&result->fields))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::autofill::mojom::FormFieldDataPredictions::DataView, ::autofill::mojom::FormFieldDataPredictionsPtr>::Read(
    ::autofill::mojom::FormFieldDataPredictions::DataView input,
    ::autofill::mojom::FormFieldDataPredictionsPtr* output) {
  bool success = true;
  ::autofill::mojom::FormFieldDataPredictionsPtr result(::autofill::mojom::FormFieldDataPredictions::New());
  
      if (!input.ReadField(&result->field))
        success = false;
      if (!input.ReadSignature(&result->signature))
        success = false;
      if (!input.ReadHeuristicType(&result->heuristic_type))
        success = false;
      if (!input.ReadServerType(&result->server_type))
        success = false;
      if (!input.ReadOverallType(&result->overall_type))
        success = false;
      if (!input.ReadParseableName(&result->parseable_name))
        success = false;
      if (!input.ReadSection(&result->section))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::autofill::mojom::FormDataPredictions::DataView, ::autofill::mojom::FormDataPredictionsPtr>::Read(
    ::autofill::mojom::FormDataPredictions::DataView input,
    ::autofill::mojom::FormDataPredictionsPtr* output) {
  bool success = true;
  ::autofill::mojom::FormDataPredictionsPtr result(::autofill::mojom::FormDataPredictions::New());
  
      if (!input.ReadData(&result->data))
        success = false;
      if (!input.ReadSignature(&result->signature))
        success = false;
      if (!input.ReadFields(&result->fields))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::autofill::mojom::PasswordAndRealm::DataView, ::autofill::mojom::PasswordAndRealmPtr>::Read(
    ::autofill::mojom::PasswordAndRealm::DataView input,
    ::autofill::mojom::PasswordAndRealmPtr* output) {
  bool success = true;
  ::autofill::mojom::PasswordAndRealmPtr result(::autofill::mojom::PasswordAndRealm::New());
  
      if (!input.ReadPassword(&result->password))
        success = false;
      if (!input.ReadRealm(&result->realm))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::autofill::mojom::PasswordFormFillData::DataView, ::autofill::mojom::PasswordFormFillDataPtr>::Read(
    ::autofill::mojom::PasswordFormFillData::DataView input,
    ::autofill::mojom::PasswordFormFillDataPtr* output) {
  bool success = true;
  ::autofill::mojom::PasswordFormFillDataPtr result(::autofill::mojom::PasswordFormFillData::New());
  
      if (!input.ReadName(&result->name))
        success = false;
      if (!input.ReadOrigin(&result->origin))
        success = false;
      if (!input.ReadAction(&result->action))
        success = false;
      if (!input.ReadUsernameField(&result->username_field))
        success = false;
      if (!input.ReadPasswordField(&result->password_field))
        success = false;
      if (!input.ReadPreferredRealm(&result->preferred_realm))
        success = false;
      if (!input.ReadAdditionalLogins(&result->additional_logins))
        success = false;
      result->wait_for_username = input.wait_for_username();
      result->is_possible_change_password_form = input.is_possible_change_password_form();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::autofill::mojom::PasswordFormGenerationData::DataView, ::autofill::mojom::PasswordFormGenerationDataPtr>::Read(
    ::autofill::mojom::PasswordFormGenerationData::DataView input,
    ::autofill::mojom::PasswordFormGenerationDataPtr* output) {
  bool success = true;
  ::autofill::mojom::PasswordFormGenerationDataPtr result(::autofill::mojom::PasswordFormGenerationData::New());
  
      result->form_signature = input.form_signature();
      result->field_signature = input.field_signature();
      result->has_confirmation_field = input.has_confirmation_field();
      result->confirmation_field_signature = input.confirmation_field_signature();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::autofill::mojom::ValueElementPair::DataView, ::autofill::mojom::ValueElementPairPtr>::Read(
    ::autofill::mojom::ValueElementPair::DataView input,
    ::autofill::mojom::ValueElementPairPtr* output) {
  bool success = true;
  ::autofill::mojom::ValueElementPairPtr result(::autofill::mojom::ValueElementPair::New());
  
      if (!input.ReadValue(&result->value))
        success = false;
      if (!input.ReadFieldName(&result->field_name))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::autofill::mojom::PasswordForm::DataView, ::autofill::mojom::PasswordFormPtr>::Read(
    ::autofill::mojom::PasswordForm::DataView input,
    ::autofill::mojom::PasswordFormPtr* output) {
  bool success = true;
  ::autofill::mojom::PasswordFormPtr result(::autofill::mojom::PasswordForm::New());
  
      if (!input.ReadScheme(&result->scheme))
        success = false;
      if (!input.ReadSignonRealm(&result->signon_realm))
        success = false;
      if (!input.ReadOriginWithPath(&result->origin_with_path))
        success = false;
      if (!input.ReadAction(&result->action))
        success = false;
      if (!input.ReadAffiliatedWebRealm(&result->affiliated_web_realm))
        success = false;
      if (!input.ReadSubmitElement(&result->submit_element))
        success = false;
      if (!input.ReadUsernameElement(&result->username_element))
        success = false;
      result->username_marked_by_site = input.username_marked_by_site();
      if (!input.ReadUsernameValue(&result->username_value))
        success = false;
      if (!input.ReadOtherPossibleUsernames(&result->other_possible_usernames))
        success = false;
      if (!input.ReadAllPossiblePasswords(&result->all_possible_passwords))
        success = false;
      result->form_has_autofilled_value = input.form_has_autofilled_value();
      if (!input.ReadPasswordElement(&result->password_element))
        success = false;
      if (!input.ReadPasswordValue(&result->password_value))
        success = false;
      result->password_value_is_default = input.password_value_is_default();
      if (!input.ReadNewPasswordElement(&result->new_password_element))
        success = false;
      if (!input.ReadNewPasswordValue(&result->new_password_value))
        success = false;
      result->new_password_value_is_default = input.new_password_value_is_default();
      result->new_password_marked_by_site = input.new_password_marked_by_site();
      if (!input.ReadConfirmationPasswordElement(&result->confirmation_password_element))
        success = false;
      result->preferred = input.preferred();
      if (!input.ReadDateCreated(&result->date_created))
        success = false;
      if (!input.ReadDateSynced(&result->date_synced))
        success = false;
      result->blacklisted_by_user = input.blacklisted_by_user();
      if (!input.ReadType(&result->type))
        success = false;
      result->times_used = input.times_used();
      if (!input.ReadFormData(&result->form_data))
        success = false;
      if (!input.ReadGenerationUploadStatus(&result->generation_upload_status))
        success = false;
      if (!input.ReadDisplayName(&result->display_name))
        success = false;
      if (!input.ReadIconUrl(&result->icon_url))
        success = false;
      if (!input.ReadFederationOrigin(&result->federation_origin))
        success = false;
      result->skip_zero_click = input.skip_zero_click();
      if (!input.ReadLayout(&result->layout))
        success = false;
      result->was_parsed_using_autofill_predictions = input.was_parsed_using_autofill_predictions();
      result->is_public_suffix_match = input.is_public_suffix_match();
      result->is_affiliation_based_match = input.is_affiliation_based_match();
      if (!input.ReadSubmissionEvent(&result->submission_event))
        success = false;
      result->only_for_fallback_saving = input.only_for_fallback_saving();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::autofill::mojom::PasswordFormFieldPredictionMap::DataView, ::autofill::mojom::PasswordFormFieldPredictionMapPtr>::Read(
    ::autofill::mojom::PasswordFormFieldPredictionMap::DataView input,
    ::autofill::mojom::PasswordFormFieldPredictionMapPtr* output) {
  bool success = true;
  ::autofill::mojom::PasswordFormFieldPredictionMapPtr result(::autofill::mojom::PasswordFormFieldPredictionMap::New());
  
      if (!input.ReadKeys(&result->keys))
        success = false;
      if (!input.ReadValues(&result->values))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::autofill::mojom::FormsPredictionsMap::DataView, ::autofill::mojom::FormsPredictionsMapPtr>::Read(
    ::autofill::mojom::FormsPredictionsMap::DataView input,
    ::autofill::mojom::FormsPredictionsMapPtr* output) {
  bool success = true;
  ::autofill::mojom::FormsPredictionsMapPtr result(::autofill::mojom::FormsPredictionsMap::New());
  
      if (!input.ReadKeys(&result->keys))
        success = false;
      if (!input.ReadValues(&result->values))
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