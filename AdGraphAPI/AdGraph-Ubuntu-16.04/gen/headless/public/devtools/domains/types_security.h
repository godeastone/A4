// This file is generated

// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef HEADLESS_PUBLIC_DEVTOOLS_DOMAINS_TYPES_SECURITY_H_
#define HEADLESS_PUBLIC_DEVTOOLS_DOMAINS_TYPES_SECURITY_H_

#include "base/optional.h"
#include "base/values.h"
#include "headless/public/devtools/internal/types_forward_declarations_security.h"
#include "headless/public/headless_export.h"

namespace headless {

class ErrorReporter;

namespace security {

// An explanation of an factor contributing to the security state.
class HEADLESS_EXPORT SecurityStateExplanation {
 public:
  static std::unique_ptr<SecurityStateExplanation> Parse(const base::Value& value, ErrorReporter* errors);
  ~SecurityStateExplanation() { }

  // Security state representing the severity of the factor being explained.
  ::headless::security::SecurityState GetSecurityState() const { return security_state_; }
  void SetSecurityState(::headless::security::SecurityState value) { security_state_ = value; }

  // Title describing the type of factor.
  std::string GetTitle() const { return title_; }
  void SetTitle(const std::string& value) { title_ = value; }

  // Short phrase describing the type of factor.
  std::string GetSummary() const { return summary_; }
  void SetSummary(const std::string& value) { summary_ = value; }

  // Full text explanation of the factor.
  std::string GetDescription() const { return description_; }
  void SetDescription(const std::string& value) { description_ = value; }

  // The type of mixed content described by the explanation.
  ::headless::security::MixedContentType GetMixedContentType() const { return mixed_content_type_; }
  void SetMixedContentType(::headless::security::MixedContentType value) { mixed_content_type_ = value; }

  // Page certificate.
  const std::vector<std::string>* GetCertificate() const { return &certificate_; }
  void SetCertificate(std::vector<std::string> value) { certificate_ = std::move(value); }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<SecurityStateExplanation> Clone() const;

  template<int STATE>
  class SecurityStateExplanationBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kSecurityStateSet = 1 << 1,
    kTitleSet = 1 << 2,
    kSummarySet = 1 << 3,
    kDescriptionSet = 1 << 4,
    kMixedContentTypeSet = 1 << 5,
    kCertificateSet = 1 << 6,
      kAllRequiredFieldsSet = (kSecurityStateSet | kTitleSet | kSummarySet | kDescriptionSet | kMixedContentTypeSet | kCertificateSet | 0)
    };

    SecurityStateExplanationBuilder<STATE | kSecurityStateSet>& SetSecurityState(::headless::security::SecurityState value) {
      static_assert(!(STATE & kSecurityStateSet), "property securityState should not have already been set");
      result_->SetSecurityState(value);
      return CastState<kSecurityStateSet>();
    }

    SecurityStateExplanationBuilder<STATE | kTitleSet>& SetTitle(const std::string& value) {
      static_assert(!(STATE & kTitleSet), "property title should not have already been set");
      result_->SetTitle(value);
      return CastState<kTitleSet>();
    }

    SecurityStateExplanationBuilder<STATE | kSummarySet>& SetSummary(const std::string& value) {
      static_assert(!(STATE & kSummarySet), "property summary should not have already been set");
      result_->SetSummary(value);
      return CastState<kSummarySet>();
    }

    SecurityStateExplanationBuilder<STATE | kDescriptionSet>& SetDescription(const std::string& value) {
      static_assert(!(STATE & kDescriptionSet), "property description should not have already been set");
      result_->SetDescription(value);
      return CastState<kDescriptionSet>();
    }

    SecurityStateExplanationBuilder<STATE | kMixedContentTypeSet>& SetMixedContentType(::headless::security::MixedContentType value) {
      static_assert(!(STATE & kMixedContentTypeSet), "property mixedContentType should not have already been set");
      result_->SetMixedContentType(value);
      return CastState<kMixedContentTypeSet>();
    }

    SecurityStateExplanationBuilder<STATE | kCertificateSet>& SetCertificate(std::vector<std::string> value) {
      static_assert(!(STATE & kCertificateSet), "property certificate should not have already been set");
      result_->SetCertificate(std::move(value));
      return CastState<kCertificateSet>();
    }

    std::unique_ptr<SecurityStateExplanation> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class SecurityStateExplanation;
    SecurityStateExplanationBuilder() : result_(new SecurityStateExplanation()) { }

    template<int STEP> SecurityStateExplanationBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<SecurityStateExplanationBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<SecurityStateExplanation> result_;
  };

  static SecurityStateExplanationBuilder<0> Builder() {
    return SecurityStateExplanationBuilder<0>();
  }

 private:
  SecurityStateExplanation() { }

  ::headless::security::SecurityState security_state_;
  std::string title_;
  std::string summary_;
  std::string description_;
  ::headless::security::MixedContentType mixed_content_type_;
  std::vector<std::string> certificate_;

  DISALLOW_COPY_AND_ASSIGN(SecurityStateExplanation);
};


// Information about insecure content on the page.
class HEADLESS_EXPORT InsecureContentStatus {
 public:
  static std::unique_ptr<InsecureContentStatus> Parse(const base::Value& value, ErrorReporter* errors);
  ~InsecureContentStatus() { }

  // True if the page was loaded over HTTPS and ran mixed (HTTP) content such as scripts.
  bool GetRanMixedContent() const { return ran_mixed_content_; }
  void SetRanMixedContent(bool value) { ran_mixed_content_ = value; }

  // True if the page was loaded over HTTPS and displayed mixed (HTTP) content such as images.
  bool GetDisplayedMixedContent() const { return displayed_mixed_content_; }
  void SetDisplayedMixedContent(bool value) { displayed_mixed_content_ = value; }

  // True if the page was loaded over HTTPS and contained a form targeting an insecure url.
  bool GetContainedMixedForm() const { return contained_mixed_form_; }
  void SetContainedMixedForm(bool value) { contained_mixed_form_ = value; }

  // True if the page was loaded over HTTPS without certificate errors, and ran content such as
  // scripts that were loaded with certificate errors.
  bool GetRanContentWithCertErrors() const { return ran_content_with_cert_errors_; }
  void SetRanContentWithCertErrors(bool value) { ran_content_with_cert_errors_ = value; }

  // True if the page was loaded over HTTPS without certificate errors, and displayed content
  // such as images that were loaded with certificate errors.
  bool GetDisplayedContentWithCertErrors() const { return displayed_content_with_cert_errors_; }
  void SetDisplayedContentWithCertErrors(bool value) { displayed_content_with_cert_errors_ = value; }

  // Security state representing a page that ran insecure content.
  ::headless::security::SecurityState GetRanInsecureContentStyle() const { return ran_insecure_content_style_; }
  void SetRanInsecureContentStyle(::headless::security::SecurityState value) { ran_insecure_content_style_ = value; }

  // Security state representing a page that displayed insecure content.
  ::headless::security::SecurityState GetDisplayedInsecureContentStyle() const { return displayed_insecure_content_style_; }
  void SetDisplayedInsecureContentStyle(::headless::security::SecurityState value) { displayed_insecure_content_style_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<InsecureContentStatus> Clone() const;

  template<int STATE>
  class InsecureContentStatusBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kRanMixedContentSet = 1 << 1,
    kDisplayedMixedContentSet = 1 << 2,
    kContainedMixedFormSet = 1 << 3,
    kRanContentWithCertErrorsSet = 1 << 4,
    kDisplayedContentWithCertErrorsSet = 1 << 5,
    kRanInsecureContentStyleSet = 1 << 6,
    kDisplayedInsecureContentStyleSet = 1 << 7,
      kAllRequiredFieldsSet = (kRanMixedContentSet | kDisplayedMixedContentSet | kContainedMixedFormSet | kRanContentWithCertErrorsSet | kDisplayedContentWithCertErrorsSet | kRanInsecureContentStyleSet | kDisplayedInsecureContentStyleSet | 0)
    };

    InsecureContentStatusBuilder<STATE | kRanMixedContentSet>& SetRanMixedContent(bool value) {
      static_assert(!(STATE & kRanMixedContentSet), "property ranMixedContent should not have already been set");
      result_->SetRanMixedContent(value);
      return CastState<kRanMixedContentSet>();
    }

    InsecureContentStatusBuilder<STATE | kDisplayedMixedContentSet>& SetDisplayedMixedContent(bool value) {
      static_assert(!(STATE & kDisplayedMixedContentSet), "property displayedMixedContent should not have already been set");
      result_->SetDisplayedMixedContent(value);
      return CastState<kDisplayedMixedContentSet>();
    }

    InsecureContentStatusBuilder<STATE | kContainedMixedFormSet>& SetContainedMixedForm(bool value) {
      static_assert(!(STATE & kContainedMixedFormSet), "property containedMixedForm should not have already been set");
      result_->SetContainedMixedForm(value);
      return CastState<kContainedMixedFormSet>();
    }

    InsecureContentStatusBuilder<STATE | kRanContentWithCertErrorsSet>& SetRanContentWithCertErrors(bool value) {
      static_assert(!(STATE & kRanContentWithCertErrorsSet), "property ranContentWithCertErrors should not have already been set");
      result_->SetRanContentWithCertErrors(value);
      return CastState<kRanContentWithCertErrorsSet>();
    }

    InsecureContentStatusBuilder<STATE | kDisplayedContentWithCertErrorsSet>& SetDisplayedContentWithCertErrors(bool value) {
      static_assert(!(STATE & kDisplayedContentWithCertErrorsSet), "property displayedContentWithCertErrors should not have already been set");
      result_->SetDisplayedContentWithCertErrors(value);
      return CastState<kDisplayedContentWithCertErrorsSet>();
    }

    InsecureContentStatusBuilder<STATE | kRanInsecureContentStyleSet>& SetRanInsecureContentStyle(::headless::security::SecurityState value) {
      static_assert(!(STATE & kRanInsecureContentStyleSet), "property ranInsecureContentStyle should not have already been set");
      result_->SetRanInsecureContentStyle(value);
      return CastState<kRanInsecureContentStyleSet>();
    }

    InsecureContentStatusBuilder<STATE | kDisplayedInsecureContentStyleSet>& SetDisplayedInsecureContentStyle(::headless::security::SecurityState value) {
      static_assert(!(STATE & kDisplayedInsecureContentStyleSet), "property displayedInsecureContentStyle should not have already been set");
      result_->SetDisplayedInsecureContentStyle(value);
      return CastState<kDisplayedInsecureContentStyleSet>();
    }

    std::unique_ptr<InsecureContentStatus> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class InsecureContentStatus;
    InsecureContentStatusBuilder() : result_(new InsecureContentStatus()) { }

    template<int STEP> InsecureContentStatusBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<InsecureContentStatusBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<InsecureContentStatus> result_;
  };

  static InsecureContentStatusBuilder<0> Builder() {
    return InsecureContentStatusBuilder<0>();
  }

 private:
  InsecureContentStatus() { }

  bool ran_mixed_content_;
  bool displayed_mixed_content_;
  bool contained_mixed_form_;
  bool ran_content_with_cert_errors_;
  bool displayed_content_with_cert_errors_;
  ::headless::security::SecurityState ran_insecure_content_style_;
  ::headless::security::SecurityState displayed_insecure_content_style_;

  DISALLOW_COPY_AND_ASSIGN(InsecureContentStatus);
};


// Parameters for the Disable command.
class HEADLESS_EXPORT DisableParams {
 public:
  static std::unique_ptr<DisableParams> Parse(const base::Value& value, ErrorReporter* errors);
  ~DisableParams() { }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<DisableParams> Clone() const;

  template<int STATE>
  class DisableParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
      kAllRequiredFieldsSet = (0)
    };

    std::unique_ptr<DisableParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class DisableParams;
    DisableParamsBuilder() : result_(new DisableParams()) { }

    template<int STEP> DisableParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<DisableParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<DisableParams> result_;
  };

  static DisableParamsBuilder<0> Builder() {
    return DisableParamsBuilder<0>();
  }

 private:
  DisableParams() { }


  DISALLOW_COPY_AND_ASSIGN(DisableParams);
};


// Result for the Disable command.
class HEADLESS_EXPORT DisableResult {
 public:
  static std::unique_ptr<DisableResult> Parse(const base::Value& value, ErrorReporter* errors);
  ~DisableResult() { }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<DisableResult> Clone() const;

  template<int STATE>
  class DisableResultBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
      kAllRequiredFieldsSet = (0)
    };

    std::unique_ptr<DisableResult> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class DisableResult;
    DisableResultBuilder() : result_(new DisableResult()) { }

    template<int STEP> DisableResultBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<DisableResultBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<DisableResult> result_;
  };

  static DisableResultBuilder<0> Builder() {
    return DisableResultBuilder<0>();
  }

 private:
  DisableResult() { }


  DISALLOW_COPY_AND_ASSIGN(DisableResult);
};


// Parameters for the Enable command.
class HEADLESS_EXPORT EnableParams {
 public:
  static std::unique_ptr<EnableParams> Parse(const base::Value& value, ErrorReporter* errors);
  ~EnableParams() { }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<EnableParams> Clone() const;

  template<int STATE>
  class EnableParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
      kAllRequiredFieldsSet = (0)
    };

    std::unique_ptr<EnableParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class EnableParams;
    EnableParamsBuilder() : result_(new EnableParams()) { }

    template<int STEP> EnableParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<EnableParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<EnableParams> result_;
  };

  static EnableParamsBuilder<0> Builder() {
    return EnableParamsBuilder<0>();
  }

 private:
  EnableParams() { }


  DISALLOW_COPY_AND_ASSIGN(EnableParams);
};


// Result for the Enable command.
class HEADLESS_EXPORT EnableResult {
 public:
  static std::unique_ptr<EnableResult> Parse(const base::Value& value, ErrorReporter* errors);
  ~EnableResult() { }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<EnableResult> Clone() const;

  template<int STATE>
  class EnableResultBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
      kAllRequiredFieldsSet = (0)
    };

    std::unique_ptr<EnableResult> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class EnableResult;
    EnableResultBuilder() : result_(new EnableResult()) { }

    template<int STEP> EnableResultBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<EnableResultBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<EnableResult> result_;
  };

  static EnableResultBuilder<0> Builder() {
    return EnableResultBuilder<0>();
  }

 private:
  EnableResult() { }


  DISALLOW_COPY_AND_ASSIGN(EnableResult);
};


// Parameters for the SetIgnoreCertificateErrors command.
class HEADLESS_EXPORT SetIgnoreCertificateErrorsParams {
 public:
  static std::unique_ptr<SetIgnoreCertificateErrorsParams> Parse(const base::Value& value, ErrorReporter* errors);
  ~SetIgnoreCertificateErrorsParams() { }

  // If true, all certificate errors will be ignored.
  bool GetIgnore() const { return ignore_; }
  void SetIgnore(bool value) { ignore_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<SetIgnoreCertificateErrorsParams> Clone() const;

  template<int STATE>
  class SetIgnoreCertificateErrorsParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kIgnoreSet = 1 << 1,
      kAllRequiredFieldsSet = (kIgnoreSet | 0)
    };

    SetIgnoreCertificateErrorsParamsBuilder<STATE | kIgnoreSet>& SetIgnore(bool value) {
      static_assert(!(STATE & kIgnoreSet), "property ignore should not have already been set");
      result_->SetIgnore(value);
      return CastState<kIgnoreSet>();
    }

    std::unique_ptr<SetIgnoreCertificateErrorsParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class SetIgnoreCertificateErrorsParams;
    SetIgnoreCertificateErrorsParamsBuilder() : result_(new SetIgnoreCertificateErrorsParams()) { }

    template<int STEP> SetIgnoreCertificateErrorsParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<SetIgnoreCertificateErrorsParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<SetIgnoreCertificateErrorsParams> result_;
  };

  static SetIgnoreCertificateErrorsParamsBuilder<0> Builder() {
    return SetIgnoreCertificateErrorsParamsBuilder<0>();
  }

 private:
  SetIgnoreCertificateErrorsParams() { }

  bool ignore_;

  DISALLOW_COPY_AND_ASSIGN(SetIgnoreCertificateErrorsParams);
};


// Result for the SetIgnoreCertificateErrors command.
class HEADLESS_EXPORT SetIgnoreCertificateErrorsResult {
 public:
  static std::unique_ptr<SetIgnoreCertificateErrorsResult> Parse(const base::Value& value, ErrorReporter* errors);
  ~SetIgnoreCertificateErrorsResult() { }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<SetIgnoreCertificateErrorsResult> Clone() const;

  template<int STATE>
  class SetIgnoreCertificateErrorsResultBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
      kAllRequiredFieldsSet = (0)
    };

    std::unique_ptr<SetIgnoreCertificateErrorsResult> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class SetIgnoreCertificateErrorsResult;
    SetIgnoreCertificateErrorsResultBuilder() : result_(new SetIgnoreCertificateErrorsResult()) { }

    template<int STEP> SetIgnoreCertificateErrorsResultBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<SetIgnoreCertificateErrorsResultBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<SetIgnoreCertificateErrorsResult> result_;
  };

  static SetIgnoreCertificateErrorsResultBuilder<0> Builder() {
    return SetIgnoreCertificateErrorsResultBuilder<0>();
  }

 private:
  SetIgnoreCertificateErrorsResult() { }


  DISALLOW_COPY_AND_ASSIGN(SetIgnoreCertificateErrorsResult);
};


// Parameters for the HandleCertificateError command.
class HEADLESS_EXPORT HandleCertificateErrorParams {
 public:
  static std::unique_ptr<HandleCertificateErrorParams> Parse(const base::Value& value, ErrorReporter* errors);
  ~HandleCertificateErrorParams() { }

  // The ID of the event.
  int GetEventId() const { return event_id_; }
  void SetEventId(int value) { event_id_ = value; }

  // The action to take on the certificate error.
  ::headless::security::CertificateErrorAction GetAction() const { return action_; }
  void SetAction(::headless::security::CertificateErrorAction value) { action_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<HandleCertificateErrorParams> Clone() const;

  template<int STATE>
  class HandleCertificateErrorParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kEventIdSet = 1 << 1,
    kActionSet = 1 << 2,
      kAllRequiredFieldsSet = (kEventIdSet | kActionSet | 0)
    };

    HandleCertificateErrorParamsBuilder<STATE | kEventIdSet>& SetEventId(int value) {
      static_assert(!(STATE & kEventIdSet), "property eventId should not have already been set");
      result_->SetEventId(value);
      return CastState<kEventIdSet>();
    }

    HandleCertificateErrorParamsBuilder<STATE | kActionSet>& SetAction(::headless::security::CertificateErrorAction value) {
      static_assert(!(STATE & kActionSet), "property action should not have already been set");
      result_->SetAction(value);
      return CastState<kActionSet>();
    }

    std::unique_ptr<HandleCertificateErrorParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class HandleCertificateErrorParams;
    HandleCertificateErrorParamsBuilder() : result_(new HandleCertificateErrorParams()) { }

    template<int STEP> HandleCertificateErrorParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<HandleCertificateErrorParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<HandleCertificateErrorParams> result_;
  };

  static HandleCertificateErrorParamsBuilder<0> Builder() {
    return HandleCertificateErrorParamsBuilder<0>();
  }

 private:
  HandleCertificateErrorParams() { }

  int event_id_;
  ::headless::security::CertificateErrorAction action_;

  DISALLOW_COPY_AND_ASSIGN(HandleCertificateErrorParams);
};


// Result for the HandleCertificateError command.
class HEADLESS_EXPORT HandleCertificateErrorResult {
 public:
  static std::unique_ptr<HandleCertificateErrorResult> Parse(const base::Value& value, ErrorReporter* errors);
  ~HandleCertificateErrorResult() { }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<HandleCertificateErrorResult> Clone() const;

  template<int STATE>
  class HandleCertificateErrorResultBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
      kAllRequiredFieldsSet = (0)
    };

    std::unique_ptr<HandleCertificateErrorResult> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class HandleCertificateErrorResult;
    HandleCertificateErrorResultBuilder() : result_(new HandleCertificateErrorResult()) { }

    template<int STEP> HandleCertificateErrorResultBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<HandleCertificateErrorResultBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<HandleCertificateErrorResult> result_;
  };

  static HandleCertificateErrorResultBuilder<0> Builder() {
    return HandleCertificateErrorResultBuilder<0>();
  }

 private:
  HandleCertificateErrorResult() { }


  DISALLOW_COPY_AND_ASSIGN(HandleCertificateErrorResult);
};


// Parameters for the SetOverrideCertificateErrors command.
class HEADLESS_EXPORT SetOverrideCertificateErrorsParams {
 public:
  static std::unique_ptr<SetOverrideCertificateErrorsParams> Parse(const base::Value& value, ErrorReporter* errors);
  ~SetOverrideCertificateErrorsParams() { }

  // If true, certificate errors will be overridden.
  bool GetOverride() const { return override_; }
  void SetOverride(bool value) { override_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<SetOverrideCertificateErrorsParams> Clone() const;

  template<int STATE>
  class SetOverrideCertificateErrorsParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kOverrideSet = 1 << 1,
      kAllRequiredFieldsSet = (kOverrideSet | 0)
    };

    SetOverrideCertificateErrorsParamsBuilder<STATE | kOverrideSet>& SetOverride(bool value) {
      static_assert(!(STATE & kOverrideSet), "property override should not have already been set");
      result_->SetOverride(value);
      return CastState<kOverrideSet>();
    }

    std::unique_ptr<SetOverrideCertificateErrorsParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class SetOverrideCertificateErrorsParams;
    SetOverrideCertificateErrorsParamsBuilder() : result_(new SetOverrideCertificateErrorsParams()) { }

    template<int STEP> SetOverrideCertificateErrorsParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<SetOverrideCertificateErrorsParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<SetOverrideCertificateErrorsParams> result_;
  };

  static SetOverrideCertificateErrorsParamsBuilder<0> Builder() {
    return SetOverrideCertificateErrorsParamsBuilder<0>();
  }

 private:
  SetOverrideCertificateErrorsParams() { }

  bool override_;

  DISALLOW_COPY_AND_ASSIGN(SetOverrideCertificateErrorsParams);
};


// Result for the SetOverrideCertificateErrors command.
class HEADLESS_EXPORT SetOverrideCertificateErrorsResult {
 public:
  static std::unique_ptr<SetOverrideCertificateErrorsResult> Parse(const base::Value& value, ErrorReporter* errors);
  ~SetOverrideCertificateErrorsResult() { }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<SetOverrideCertificateErrorsResult> Clone() const;

  template<int STATE>
  class SetOverrideCertificateErrorsResultBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
      kAllRequiredFieldsSet = (0)
    };

    std::unique_ptr<SetOverrideCertificateErrorsResult> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class SetOverrideCertificateErrorsResult;
    SetOverrideCertificateErrorsResultBuilder() : result_(new SetOverrideCertificateErrorsResult()) { }

    template<int STEP> SetOverrideCertificateErrorsResultBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<SetOverrideCertificateErrorsResultBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<SetOverrideCertificateErrorsResult> result_;
  };

  static SetOverrideCertificateErrorsResultBuilder<0> Builder() {
    return SetOverrideCertificateErrorsResultBuilder<0>();
  }

 private:
  SetOverrideCertificateErrorsResult() { }


  DISALLOW_COPY_AND_ASSIGN(SetOverrideCertificateErrorsResult);
};


// Parameters for the CertificateError event.
class HEADLESS_EXPORT CertificateErrorParams {
 public:
  static std::unique_ptr<CertificateErrorParams> Parse(const base::Value& value, ErrorReporter* errors);
  ~CertificateErrorParams() { }

  // The ID of the event.
  int GetEventId() const { return event_id_; }
  void SetEventId(int value) { event_id_ = value; }

  // The type of the error.
  std::string GetErrorType() const { return error_type_; }
  void SetErrorType(const std::string& value) { error_type_ = value; }

  // The url that was requested.
  std::string GetRequestURL() const { return requesturl_; }
  void SetRequestURL(const std::string& value) { requesturl_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<CertificateErrorParams> Clone() const;

  template<int STATE>
  class CertificateErrorParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kEventIdSet = 1 << 1,
    kErrorTypeSet = 1 << 2,
    kRequestURLSet = 1 << 3,
      kAllRequiredFieldsSet = (kEventIdSet | kErrorTypeSet | kRequestURLSet | 0)
    };

    CertificateErrorParamsBuilder<STATE | kEventIdSet>& SetEventId(int value) {
      static_assert(!(STATE & kEventIdSet), "property eventId should not have already been set");
      result_->SetEventId(value);
      return CastState<kEventIdSet>();
    }

    CertificateErrorParamsBuilder<STATE | kErrorTypeSet>& SetErrorType(const std::string& value) {
      static_assert(!(STATE & kErrorTypeSet), "property errorType should not have already been set");
      result_->SetErrorType(value);
      return CastState<kErrorTypeSet>();
    }

    CertificateErrorParamsBuilder<STATE | kRequestURLSet>& SetRequestURL(const std::string& value) {
      static_assert(!(STATE & kRequestURLSet), "property requestURL should not have already been set");
      result_->SetRequestURL(value);
      return CastState<kRequestURLSet>();
    }

    std::unique_ptr<CertificateErrorParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class CertificateErrorParams;
    CertificateErrorParamsBuilder() : result_(new CertificateErrorParams()) { }

    template<int STEP> CertificateErrorParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<CertificateErrorParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<CertificateErrorParams> result_;
  };

  static CertificateErrorParamsBuilder<0> Builder() {
    return CertificateErrorParamsBuilder<0>();
  }

 private:
  CertificateErrorParams() { }

  int event_id_;
  std::string error_type_;
  std::string requesturl_;

  DISALLOW_COPY_AND_ASSIGN(CertificateErrorParams);
};


// Parameters for the SecurityStateChanged event.
class HEADLESS_EXPORT SecurityStateChangedParams {
 public:
  static std::unique_ptr<SecurityStateChangedParams> Parse(const base::Value& value, ErrorReporter* errors);
  ~SecurityStateChangedParams() { }

  // Security state.
  ::headless::security::SecurityState GetSecurityState() const { return security_state_; }
  void SetSecurityState(::headless::security::SecurityState value) { security_state_ = value; }

  // True if the page was loaded over cryptographic transport such as HTTPS.
  bool GetSchemeIsCryptographic() const { return scheme_is_cryptographic_; }
  void SetSchemeIsCryptographic(bool value) { scheme_is_cryptographic_ = value; }

  // List of explanations for the security state. If the overall security state is `insecure` or
  // `warning`, at least one corresponding explanation should be included.
  const std::vector<std::unique_ptr<::headless::security::SecurityStateExplanation>>* GetExplanations() const { return &explanations_; }
  void SetExplanations(std::vector<std::unique_ptr<::headless::security::SecurityStateExplanation>> value) { explanations_ = std::move(value); }

  // Information about insecure content on the page.
  const ::headless::security::InsecureContentStatus* GetInsecureContentStatus() const { return insecure_content_status_.get(); }
  void SetInsecureContentStatus(std::unique_ptr<::headless::security::InsecureContentStatus> value) { insecure_content_status_ = std::move(value); }

  // Overrides user-visible description of the state.
  bool HasSummary() const { return !!summary_; }
  std::string GetSummary() const { DCHECK(HasSummary()); return summary_.value(); }
  void SetSummary(const std::string& value) { summary_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<SecurityStateChangedParams> Clone() const;

  template<int STATE>
  class SecurityStateChangedParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kSecurityStateSet = 1 << 1,
    kSchemeIsCryptographicSet = 1 << 2,
    kExplanationsSet = 1 << 3,
    kInsecureContentStatusSet = 1 << 4,
      kAllRequiredFieldsSet = (kSecurityStateSet | kSchemeIsCryptographicSet | kExplanationsSet | kInsecureContentStatusSet | 0)
    };

    SecurityStateChangedParamsBuilder<STATE | kSecurityStateSet>& SetSecurityState(::headless::security::SecurityState value) {
      static_assert(!(STATE & kSecurityStateSet), "property securityState should not have already been set");
      result_->SetSecurityState(value);
      return CastState<kSecurityStateSet>();
    }

    SecurityStateChangedParamsBuilder<STATE | kSchemeIsCryptographicSet>& SetSchemeIsCryptographic(bool value) {
      static_assert(!(STATE & kSchemeIsCryptographicSet), "property schemeIsCryptographic should not have already been set");
      result_->SetSchemeIsCryptographic(value);
      return CastState<kSchemeIsCryptographicSet>();
    }

    SecurityStateChangedParamsBuilder<STATE | kExplanationsSet>& SetExplanations(std::vector<std::unique_ptr<::headless::security::SecurityStateExplanation>> value) {
      static_assert(!(STATE & kExplanationsSet), "property explanations should not have already been set");
      result_->SetExplanations(std::move(value));
      return CastState<kExplanationsSet>();
    }

    SecurityStateChangedParamsBuilder<STATE | kInsecureContentStatusSet>& SetInsecureContentStatus(std::unique_ptr<::headless::security::InsecureContentStatus> value) {
      static_assert(!(STATE & kInsecureContentStatusSet), "property insecureContentStatus should not have already been set");
      result_->SetInsecureContentStatus(std::move(value));
      return CastState<kInsecureContentStatusSet>();
    }

    SecurityStateChangedParamsBuilder<STATE>& SetSummary(const std::string& value) {
      result_->SetSummary(value);
      return *this;
    }

    std::unique_ptr<SecurityStateChangedParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class SecurityStateChangedParams;
    SecurityStateChangedParamsBuilder() : result_(new SecurityStateChangedParams()) { }

    template<int STEP> SecurityStateChangedParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<SecurityStateChangedParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<SecurityStateChangedParams> result_;
  };

  static SecurityStateChangedParamsBuilder<0> Builder() {
    return SecurityStateChangedParamsBuilder<0>();
  }

 private:
  SecurityStateChangedParams() { }

  ::headless::security::SecurityState security_state_;
  bool scheme_is_cryptographic_;
  std::vector<std::unique_ptr<::headless::security::SecurityStateExplanation>> explanations_;
  std::unique_ptr<::headless::security::InsecureContentStatus> insecure_content_status_;
  base::Optional<std::string> summary_;

  DISALLOW_COPY_AND_ASSIGN(SecurityStateChangedParams);
};


}  // namespace security

}  // namespace headless

#endif  // HEADLESS_PUBLIC_DEVTOOLS_DOMAINS_TYPES_SECURITY_H_
