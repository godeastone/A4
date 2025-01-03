// This file is generated

// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "headless/public/devtools/domains/types_security.h"

#include "base/memory/ptr_util.h"
#include "headless/public/devtools/internal/type_conversions_security.h"

namespace headless {

namespace internal {

template <typename T>
std::unique_ptr<base::Value> ToValue(const T& value) {
  return ToValueImpl(value, static_cast<T*>(nullptr));
}

}  // namespace internal

namespace security {

std::unique_ptr<SecurityStateExplanation> SecurityStateExplanation::Parse(const base::Value& value, ErrorReporter* errors) {
  errors->Push();
  errors->SetName("SecurityStateExplanation");
  if (!value.is_dict()) {
    errors->AddError("object expected");
    errors->Pop();
    return nullptr;
  }

  std::unique_ptr<SecurityStateExplanation> result(new SecurityStateExplanation());
  errors->Push();
  errors->SetName("SecurityStateExplanation");
  const base::Value* security_state_value = value.FindKey("securityState");
  if (security_state_value) {
    errors->SetName("securityState");
    result->security_state_ = internal::FromValue<::headless::security::SecurityState>::Parse(*security_state_value, errors);
  } else {
    errors->AddError("required property missing: securityState");
  }
  const base::Value* title_value = value.FindKey("title");
  if (title_value) {
    errors->SetName("title");
    result->title_ = internal::FromValue<std::string>::Parse(*title_value, errors);
  } else {
    errors->AddError("required property missing: title");
  }
  const base::Value* summary_value = value.FindKey("summary");
  if (summary_value) {
    errors->SetName("summary");
    result->summary_ = internal::FromValue<std::string>::Parse(*summary_value, errors);
  } else {
    errors->AddError("required property missing: summary");
  }
  const base::Value* description_value = value.FindKey("description");
  if (description_value) {
    errors->SetName("description");
    result->description_ = internal::FromValue<std::string>::Parse(*description_value, errors);
  } else {
    errors->AddError("required property missing: description");
  }
  const base::Value* mixed_content_type_value = value.FindKey("mixedContentType");
  if (mixed_content_type_value) {
    errors->SetName("mixedContentType");
    result->mixed_content_type_ = internal::FromValue<::headless::security::MixedContentType>::Parse(*mixed_content_type_value, errors);
  } else {
    errors->AddError("required property missing: mixedContentType");
  }
  const base::Value* certificate_value = value.FindKey("certificate");
  if (certificate_value) {
    errors->SetName("certificate");
    result->certificate_ = internal::FromValue<std::vector<std::string>>::Parse(*certificate_value, errors);
  } else {
    errors->AddError("required property missing: certificate");
  }
  errors->Pop();
  errors->Pop();
  if (errors->HasErrors())
    return nullptr;
  return result;
}

std::unique_ptr<base::Value> SecurityStateExplanation::Serialize() const {
  std::unique_ptr<base::DictionaryValue> result(new base::DictionaryValue());
  result->Set("securityState", internal::ToValue(security_state_));
  result->Set("title", internal::ToValue(title_));
  result->Set("summary", internal::ToValue(summary_));
  result->Set("description", internal::ToValue(description_));
  result->Set("mixedContentType", internal::ToValue(mixed_content_type_));
  result->Set("certificate", internal::ToValue(certificate_));
  return std::move(result);
}

std::unique_ptr<SecurityStateExplanation> SecurityStateExplanation::Clone() const {
  ErrorReporter errors;
  std::unique_ptr<SecurityStateExplanation> result = Parse(*Serialize(), &errors);
  DCHECK(!errors.HasErrors());
  return result;
}


std::unique_ptr<InsecureContentStatus> InsecureContentStatus::Parse(const base::Value& value, ErrorReporter* errors) {
  errors->Push();
  errors->SetName("InsecureContentStatus");
  if (!value.is_dict()) {
    errors->AddError("object expected");
    errors->Pop();
    return nullptr;
  }

  std::unique_ptr<InsecureContentStatus> result(new InsecureContentStatus());
  errors->Push();
  errors->SetName("InsecureContentStatus");
  const base::Value* ran_mixed_content_value = value.FindKey("ranMixedContent");
  if (ran_mixed_content_value) {
    errors->SetName("ranMixedContent");
    result->ran_mixed_content_ = internal::FromValue<bool>::Parse(*ran_mixed_content_value, errors);
  } else {
    errors->AddError("required property missing: ranMixedContent");
  }
  const base::Value* displayed_mixed_content_value = value.FindKey("displayedMixedContent");
  if (displayed_mixed_content_value) {
    errors->SetName("displayedMixedContent");
    result->displayed_mixed_content_ = internal::FromValue<bool>::Parse(*displayed_mixed_content_value, errors);
  } else {
    errors->AddError("required property missing: displayedMixedContent");
  }
  const base::Value* contained_mixed_form_value = value.FindKey("containedMixedForm");
  if (contained_mixed_form_value) {
    errors->SetName("containedMixedForm");
    result->contained_mixed_form_ = internal::FromValue<bool>::Parse(*contained_mixed_form_value, errors);
  } else {
    errors->AddError("required property missing: containedMixedForm");
  }
  const base::Value* ran_content_with_cert_errors_value = value.FindKey("ranContentWithCertErrors");
  if (ran_content_with_cert_errors_value) {
    errors->SetName("ranContentWithCertErrors");
    result->ran_content_with_cert_errors_ = internal::FromValue<bool>::Parse(*ran_content_with_cert_errors_value, errors);
  } else {
    errors->AddError("required property missing: ranContentWithCertErrors");
  }
  const base::Value* displayed_content_with_cert_errors_value = value.FindKey("displayedContentWithCertErrors");
  if (displayed_content_with_cert_errors_value) {
    errors->SetName("displayedContentWithCertErrors");
    result->displayed_content_with_cert_errors_ = internal::FromValue<bool>::Parse(*displayed_content_with_cert_errors_value, errors);
  } else {
    errors->AddError("required property missing: displayedContentWithCertErrors");
  }
  const base::Value* ran_insecure_content_style_value = value.FindKey("ranInsecureContentStyle");
  if (ran_insecure_content_style_value) {
    errors->SetName("ranInsecureContentStyle");
    result->ran_insecure_content_style_ = internal::FromValue<::headless::security::SecurityState>::Parse(*ran_insecure_content_style_value, errors);
  } else {
    errors->AddError("required property missing: ranInsecureContentStyle");
  }
  const base::Value* displayed_insecure_content_style_value = value.FindKey("displayedInsecureContentStyle");
  if (displayed_insecure_content_style_value) {
    errors->SetName("displayedInsecureContentStyle");
    result->displayed_insecure_content_style_ = internal::FromValue<::headless::security::SecurityState>::Parse(*displayed_insecure_content_style_value, errors);
  } else {
    errors->AddError("required property missing: displayedInsecureContentStyle");
  }
  errors->Pop();
  errors->Pop();
  if (errors->HasErrors())
    return nullptr;
  return result;
}

std::unique_ptr<base::Value> InsecureContentStatus::Serialize() const {
  std::unique_ptr<base::DictionaryValue> result(new base::DictionaryValue());
  result->Set("ranMixedContent", internal::ToValue(ran_mixed_content_));
  result->Set("displayedMixedContent", internal::ToValue(displayed_mixed_content_));
  result->Set("containedMixedForm", internal::ToValue(contained_mixed_form_));
  result->Set("ranContentWithCertErrors", internal::ToValue(ran_content_with_cert_errors_));
  result->Set("displayedContentWithCertErrors", internal::ToValue(displayed_content_with_cert_errors_));
  result->Set("ranInsecureContentStyle", internal::ToValue(ran_insecure_content_style_));
  result->Set("displayedInsecureContentStyle", internal::ToValue(displayed_insecure_content_style_));
  return std::move(result);
}

std::unique_ptr<InsecureContentStatus> InsecureContentStatus::Clone() const {
  ErrorReporter errors;
  std::unique_ptr<InsecureContentStatus> result = Parse(*Serialize(), &errors);
  DCHECK(!errors.HasErrors());
  return result;
}


std::unique_ptr<DisableParams> DisableParams::Parse(const base::Value& value, ErrorReporter* errors) {
  errors->Push();
  errors->SetName("DisableParams");
  if (!value.is_dict()) {
    errors->AddError("object expected");
    errors->Pop();
    return nullptr;
  }

  std::unique_ptr<DisableParams> result(new DisableParams());
  errors->Push();
  errors->SetName("DisableParams");
  errors->Pop();
  errors->Pop();
  if (errors->HasErrors())
    return nullptr;
  return result;
}

std::unique_ptr<base::Value> DisableParams::Serialize() const {
  std::unique_ptr<base::DictionaryValue> result(new base::DictionaryValue());
  return std::move(result);
}

std::unique_ptr<DisableParams> DisableParams::Clone() const {
  ErrorReporter errors;
  std::unique_ptr<DisableParams> result = Parse(*Serialize(), &errors);
  DCHECK(!errors.HasErrors());
  return result;
}


std::unique_ptr<DisableResult> DisableResult::Parse(const base::Value& value, ErrorReporter* errors) {
  errors->Push();
  errors->SetName("DisableResult");
  if (!value.is_dict()) {
    errors->AddError("object expected");
    errors->Pop();
    return nullptr;
  }

  std::unique_ptr<DisableResult> result(new DisableResult());
  errors->Push();
  errors->SetName("DisableResult");
  errors->Pop();
  errors->Pop();
  if (errors->HasErrors())
    return nullptr;
  return result;
}

std::unique_ptr<base::Value> DisableResult::Serialize() const {
  std::unique_ptr<base::DictionaryValue> result(new base::DictionaryValue());
  return std::move(result);
}

std::unique_ptr<DisableResult> DisableResult::Clone() const {
  ErrorReporter errors;
  std::unique_ptr<DisableResult> result = Parse(*Serialize(), &errors);
  DCHECK(!errors.HasErrors());
  return result;
}


std::unique_ptr<EnableParams> EnableParams::Parse(const base::Value& value, ErrorReporter* errors) {
  errors->Push();
  errors->SetName("EnableParams");
  if (!value.is_dict()) {
    errors->AddError("object expected");
    errors->Pop();
    return nullptr;
  }

  std::unique_ptr<EnableParams> result(new EnableParams());
  errors->Push();
  errors->SetName("EnableParams");
  errors->Pop();
  errors->Pop();
  if (errors->HasErrors())
    return nullptr;
  return result;
}

std::unique_ptr<base::Value> EnableParams::Serialize() const {
  std::unique_ptr<base::DictionaryValue> result(new base::DictionaryValue());
  return std::move(result);
}

std::unique_ptr<EnableParams> EnableParams::Clone() const {
  ErrorReporter errors;
  std::unique_ptr<EnableParams> result = Parse(*Serialize(), &errors);
  DCHECK(!errors.HasErrors());
  return result;
}


std::unique_ptr<EnableResult> EnableResult::Parse(const base::Value& value, ErrorReporter* errors) {
  errors->Push();
  errors->SetName("EnableResult");
  if (!value.is_dict()) {
    errors->AddError("object expected");
    errors->Pop();
    return nullptr;
  }

  std::unique_ptr<EnableResult> result(new EnableResult());
  errors->Push();
  errors->SetName("EnableResult");
  errors->Pop();
  errors->Pop();
  if (errors->HasErrors())
    return nullptr;
  return result;
}

std::unique_ptr<base::Value> EnableResult::Serialize() const {
  std::unique_ptr<base::DictionaryValue> result(new base::DictionaryValue());
  return std::move(result);
}

std::unique_ptr<EnableResult> EnableResult::Clone() const {
  ErrorReporter errors;
  std::unique_ptr<EnableResult> result = Parse(*Serialize(), &errors);
  DCHECK(!errors.HasErrors());
  return result;
}


std::unique_ptr<SetIgnoreCertificateErrorsParams> SetIgnoreCertificateErrorsParams::Parse(const base::Value& value, ErrorReporter* errors) {
  errors->Push();
  errors->SetName("SetIgnoreCertificateErrorsParams");
  if (!value.is_dict()) {
    errors->AddError("object expected");
    errors->Pop();
    return nullptr;
  }

  std::unique_ptr<SetIgnoreCertificateErrorsParams> result(new SetIgnoreCertificateErrorsParams());
  errors->Push();
  errors->SetName("SetIgnoreCertificateErrorsParams");
  const base::Value* ignore_value = value.FindKey("ignore");
  if (ignore_value) {
    errors->SetName("ignore");
    result->ignore_ = internal::FromValue<bool>::Parse(*ignore_value, errors);
  } else {
    errors->AddError("required property missing: ignore");
  }
  errors->Pop();
  errors->Pop();
  if (errors->HasErrors())
    return nullptr;
  return result;
}

std::unique_ptr<base::Value> SetIgnoreCertificateErrorsParams::Serialize() const {
  std::unique_ptr<base::DictionaryValue> result(new base::DictionaryValue());
  result->Set("ignore", internal::ToValue(ignore_));
  return std::move(result);
}

std::unique_ptr<SetIgnoreCertificateErrorsParams> SetIgnoreCertificateErrorsParams::Clone() const {
  ErrorReporter errors;
  std::unique_ptr<SetIgnoreCertificateErrorsParams> result = Parse(*Serialize(), &errors);
  DCHECK(!errors.HasErrors());
  return result;
}


std::unique_ptr<SetIgnoreCertificateErrorsResult> SetIgnoreCertificateErrorsResult::Parse(const base::Value& value, ErrorReporter* errors) {
  errors->Push();
  errors->SetName("SetIgnoreCertificateErrorsResult");
  if (!value.is_dict()) {
    errors->AddError("object expected");
    errors->Pop();
    return nullptr;
  }

  std::unique_ptr<SetIgnoreCertificateErrorsResult> result(new SetIgnoreCertificateErrorsResult());
  errors->Push();
  errors->SetName("SetIgnoreCertificateErrorsResult");
  errors->Pop();
  errors->Pop();
  if (errors->HasErrors())
    return nullptr;
  return result;
}

std::unique_ptr<base::Value> SetIgnoreCertificateErrorsResult::Serialize() const {
  std::unique_ptr<base::DictionaryValue> result(new base::DictionaryValue());
  return std::move(result);
}

std::unique_ptr<SetIgnoreCertificateErrorsResult> SetIgnoreCertificateErrorsResult::Clone() const {
  ErrorReporter errors;
  std::unique_ptr<SetIgnoreCertificateErrorsResult> result = Parse(*Serialize(), &errors);
  DCHECK(!errors.HasErrors());
  return result;
}


std::unique_ptr<HandleCertificateErrorParams> HandleCertificateErrorParams::Parse(const base::Value& value, ErrorReporter* errors) {
  errors->Push();
  errors->SetName("HandleCertificateErrorParams");
  if (!value.is_dict()) {
    errors->AddError("object expected");
    errors->Pop();
    return nullptr;
  }

  std::unique_ptr<HandleCertificateErrorParams> result(new HandleCertificateErrorParams());
  errors->Push();
  errors->SetName("HandleCertificateErrorParams");
  const base::Value* event_id_value = value.FindKey("eventId");
  if (event_id_value) {
    errors->SetName("eventId");
    result->event_id_ = internal::FromValue<int>::Parse(*event_id_value, errors);
  } else {
    errors->AddError("required property missing: eventId");
  }
  const base::Value* action_value = value.FindKey("action");
  if (action_value) {
    errors->SetName("action");
    result->action_ = internal::FromValue<::headless::security::CertificateErrorAction>::Parse(*action_value, errors);
  } else {
    errors->AddError("required property missing: action");
  }
  errors->Pop();
  errors->Pop();
  if (errors->HasErrors())
    return nullptr;
  return result;
}

std::unique_ptr<base::Value> HandleCertificateErrorParams::Serialize() const {
  std::unique_ptr<base::DictionaryValue> result(new base::DictionaryValue());
  result->Set("eventId", internal::ToValue(event_id_));
  result->Set("action", internal::ToValue(action_));
  return std::move(result);
}

std::unique_ptr<HandleCertificateErrorParams> HandleCertificateErrorParams::Clone() const {
  ErrorReporter errors;
  std::unique_ptr<HandleCertificateErrorParams> result = Parse(*Serialize(), &errors);
  DCHECK(!errors.HasErrors());
  return result;
}


std::unique_ptr<HandleCertificateErrorResult> HandleCertificateErrorResult::Parse(const base::Value& value, ErrorReporter* errors) {
  errors->Push();
  errors->SetName("HandleCertificateErrorResult");
  if (!value.is_dict()) {
    errors->AddError("object expected");
    errors->Pop();
    return nullptr;
  }

  std::unique_ptr<HandleCertificateErrorResult> result(new HandleCertificateErrorResult());
  errors->Push();
  errors->SetName("HandleCertificateErrorResult");
  errors->Pop();
  errors->Pop();
  if (errors->HasErrors())
    return nullptr;
  return result;
}

std::unique_ptr<base::Value> HandleCertificateErrorResult::Serialize() const {
  std::unique_ptr<base::DictionaryValue> result(new base::DictionaryValue());
  return std::move(result);
}

std::unique_ptr<HandleCertificateErrorResult> HandleCertificateErrorResult::Clone() const {
  ErrorReporter errors;
  std::unique_ptr<HandleCertificateErrorResult> result = Parse(*Serialize(), &errors);
  DCHECK(!errors.HasErrors());
  return result;
}


std::unique_ptr<SetOverrideCertificateErrorsParams> SetOverrideCertificateErrorsParams::Parse(const base::Value& value, ErrorReporter* errors) {
  errors->Push();
  errors->SetName("SetOverrideCertificateErrorsParams");
  if (!value.is_dict()) {
    errors->AddError("object expected");
    errors->Pop();
    return nullptr;
  }

  std::unique_ptr<SetOverrideCertificateErrorsParams> result(new SetOverrideCertificateErrorsParams());
  errors->Push();
  errors->SetName("SetOverrideCertificateErrorsParams");
  const base::Value* override_value = value.FindKey("override");
  if (override_value) {
    errors->SetName("override");
    result->override_ = internal::FromValue<bool>::Parse(*override_value, errors);
  } else {
    errors->AddError("required property missing: override");
  }
  errors->Pop();
  errors->Pop();
  if (errors->HasErrors())
    return nullptr;
  return result;
}

std::unique_ptr<base::Value> SetOverrideCertificateErrorsParams::Serialize() const {
  std::unique_ptr<base::DictionaryValue> result(new base::DictionaryValue());
  result->Set("override", internal::ToValue(override_));
  return std::move(result);
}

std::unique_ptr<SetOverrideCertificateErrorsParams> SetOverrideCertificateErrorsParams::Clone() const {
  ErrorReporter errors;
  std::unique_ptr<SetOverrideCertificateErrorsParams> result = Parse(*Serialize(), &errors);
  DCHECK(!errors.HasErrors());
  return result;
}


std::unique_ptr<SetOverrideCertificateErrorsResult> SetOverrideCertificateErrorsResult::Parse(const base::Value& value, ErrorReporter* errors) {
  errors->Push();
  errors->SetName("SetOverrideCertificateErrorsResult");
  if (!value.is_dict()) {
    errors->AddError("object expected");
    errors->Pop();
    return nullptr;
  }

  std::unique_ptr<SetOverrideCertificateErrorsResult> result(new SetOverrideCertificateErrorsResult());
  errors->Push();
  errors->SetName("SetOverrideCertificateErrorsResult");
  errors->Pop();
  errors->Pop();
  if (errors->HasErrors())
    return nullptr;
  return result;
}

std::unique_ptr<base::Value> SetOverrideCertificateErrorsResult::Serialize() const {
  std::unique_ptr<base::DictionaryValue> result(new base::DictionaryValue());
  return std::move(result);
}

std::unique_ptr<SetOverrideCertificateErrorsResult> SetOverrideCertificateErrorsResult::Clone() const {
  ErrorReporter errors;
  std::unique_ptr<SetOverrideCertificateErrorsResult> result = Parse(*Serialize(), &errors);
  DCHECK(!errors.HasErrors());
  return result;
}


std::unique_ptr<CertificateErrorParams> CertificateErrorParams::Parse(const base::Value& value, ErrorReporter* errors) {
  errors->Push();
  errors->SetName("CertificateErrorParams");
  if (!value.is_dict()) {
    errors->AddError("object expected");
    errors->Pop();
    return nullptr;
  }

  std::unique_ptr<CertificateErrorParams> result(new CertificateErrorParams());
  errors->Push();
  errors->SetName("CertificateErrorParams");
  const base::Value* event_id_value = value.FindKey("eventId");
  if (event_id_value) {
    errors->SetName("eventId");
    result->event_id_ = internal::FromValue<int>::Parse(*event_id_value, errors);
  } else {
    errors->AddError("required property missing: eventId");
  }
  const base::Value* error_type_value = value.FindKey("errorType");
  if (error_type_value) {
    errors->SetName("errorType");
    result->error_type_ = internal::FromValue<std::string>::Parse(*error_type_value, errors);
  } else {
    errors->AddError("required property missing: errorType");
  }
  const base::Value* requesturl_value = value.FindKey("requestURL");
  if (requesturl_value) {
    errors->SetName("requestURL");
    result->requesturl_ = internal::FromValue<std::string>::Parse(*requesturl_value, errors);
  } else {
    errors->AddError("required property missing: requestURL");
  }
  errors->Pop();
  errors->Pop();
  if (errors->HasErrors())
    return nullptr;
  return result;
}

std::unique_ptr<base::Value> CertificateErrorParams::Serialize() const {
  std::unique_ptr<base::DictionaryValue> result(new base::DictionaryValue());
  result->Set("eventId", internal::ToValue(event_id_));
  result->Set("errorType", internal::ToValue(error_type_));
  result->Set("requestURL", internal::ToValue(requesturl_));
  return std::move(result);
}

std::unique_ptr<CertificateErrorParams> CertificateErrorParams::Clone() const {
  ErrorReporter errors;
  std::unique_ptr<CertificateErrorParams> result = Parse(*Serialize(), &errors);
  DCHECK(!errors.HasErrors());
  return result;
}


std::unique_ptr<SecurityStateChangedParams> SecurityStateChangedParams::Parse(const base::Value& value, ErrorReporter* errors) {
  errors->Push();
  errors->SetName("SecurityStateChangedParams");
  if (!value.is_dict()) {
    errors->AddError("object expected");
    errors->Pop();
    return nullptr;
  }

  std::unique_ptr<SecurityStateChangedParams> result(new SecurityStateChangedParams());
  errors->Push();
  errors->SetName("SecurityStateChangedParams");
  const base::Value* security_state_value = value.FindKey("securityState");
  if (security_state_value) {
    errors->SetName("securityState");
    result->security_state_ = internal::FromValue<::headless::security::SecurityState>::Parse(*security_state_value, errors);
  } else {
    errors->AddError("required property missing: securityState");
  }
  const base::Value* scheme_is_cryptographic_value = value.FindKey("schemeIsCryptographic");
  if (scheme_is_cryptographic_value) {
    errors->SetName("schemeIsCryptographic");
    result->scheme_is_cryptographic_ = internal::FromValue<bool>::Parse(*scheme_is_cryptographic_value, errors);
  } else {
    errors->AddError("required property missing: schemeIsCryptographic");
  }
  const base::Value* explanations_value = value.FindKey("explanations");
  if (explanations_value) {
    errors->SetName("explanations");
    result->explanations_ = internal::FromValue<std::vector<std::unique_ptr<::headless::security::SecurityStateExplanation>>>::Parse(*explanations_value, errors);
  } else {
    errors->AddError("required property missing: explanations");
  }
  const base::Value* insecure_content_status_value = value.FindKey("insecureContentStatus");
  if (insecure_content_status_value) {
    errors->SetName("insecureContentStatus");
    result->insecure_content_status_ = internal::FromValue<::headless::security::InsecureContentStatus>::Parse(*insecure_content_status_value, errors);
  } else {
    errors->AddError("required property missing: insecureContentStatus");
  }
  const base::Value* summary_value = value.FindKey("summary");
  if (summary_value) {
    errors->SetName("summary");
    result->summary_ = internal::FromValue<std::string>::Parse(*summary_value, errors);
  }
  errors->Pop();
  errors->Pop();
  if (errors->HasErrors())
    return nullptr;
  return result;
}

std::unique_ptr<base::Value> SecurityStateChangedParams::Serialize() const {
  std::unique_ptr<base::DictionaryValue> result(new base::DictionaryValue());
  result->Set("securityState", internal::ToValue(security_state_));
  result->Set("schemeIsCryptographic", internal::ToValue(scheme_is_cryptographic_));
  result->Set("explanations", internal::ToValue(explanations_));
  result->Set("insecureContentStatus", internal::ToValue(*insecure_content_status_));
  if (summary_)
    result->Set("summary", internal::ToValue(summary_.value()));
  return std::move(result);
}

std::unique_ptr<SecurityStateChangedParams> SecurityStateChangedParams::Clone() const {
  ErrorReporter errors;
  std::unique_ptr<SecurityStateChangedParams> result = Parse(*Serialize(), &errors);
  DCHECK(!errors.HasErrors());
  return result;
}


}  // namespace security
}  // namespace headless
