// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_AUTOFILL_CONTENT_COMMON_AUTOFILL_AGENT_MOJOM_H_
#define COMPONENTS_AUTOFILL_CONTENT_COMMON_AUTOFILL_AGENT_MOJOM_H_

#include <stdint.h>

#include <limits>
#include <type_traits>
#include <utility>

#include "base/callback.h"
#include "base/macros.h"
#include "base/optional.h"

#include "mojo/public/cpp/bindings/mojo_buildflags.h"
#if BUILDFLAG(MOJO_TRACE_ENABLED)
#include "base/trace_event/trace_event.h"
#endif
#include "mojo/public/cpp/bindings/clone_traits.h"
#include "mojo/public/cpp/bindings/equals_traits.h"
#include "mojo/public/cpp/bindings/lib/serialization.h"
#include "mojo/public/cpp/bindings/struct_ptr.h"
#include "mojo/public/cpp/bindings/struct_traits.h"
#include "mojo/public/cpp/bindings/union_traits.h"
#include "components/autofill/content/common/autofill_agent.mojom-shared.h"
#include "components/autofill/content/common/autofill_types.mojom.h"
#include "mojo/public/mojom/base/string16.mojom.h"
#include <string>
#include <vector>

#include "mojo/public/cpp/bindings/associated_interface_ptr.h"
#include "mojo/public/cpp/bindings/associated_interface_ptr_info.h"
#include "mojo/public/cpp/bindings/associated_interface_request.h"
#include "mojo/public/cpp/bindings/interface_ptr.h"
#include "mojo/public/cpp/bindings/interface_request.h"
#include "mojo/public/cpp/bindings/lib/control_message_handler.h"
#include "mojo/public/cpp/bindings/raw_ptr_impl_ref_traits.h"
#include "mojo/public/cpp/bindings/thread_safe_interface_ptr.h"


#include "mojo/public/cpp/bindings/lib/native_enum_serialization.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"


namespace autofill {
namespace mojom {
class AutofillAgent;
using AutofillAgentPtr = mojo::InterfacePtr<AutofillAgent>;
using AutofillAgentPtrInfo = mojo::InterfacePtrInfo<AutofillAgent>;
using ThreadSafeAutofillAgentPtr =
    mojo::ThreadSafeInterfacePtr<AutofillAgent>;
using AutofillAgentRequest = mojo::InterfaceRequest<AutofillAgent>;
using AutofillAgentAssociatedPtr =
    mojo::AssociatedInterfacePtr<AutofillAgent>;
using ThreadSafeAutofillAgentAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<AutofillAgent>;
using AutofillAgentAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<AutofillAgent>;
using AutofillAgentAssociatedRequest =
    mojo::AssociatedInterfaceRequest<AutofillAgent>;

class PasswordAutofillAgent;
using PasswordAutofillAgentPtr = mojo::InterfacePtr<PasswordAutofillAgent>;
using PasswordAutofillAgentPtrInfo = mojo::InterfacePtrInfo<PasswordAutofillAgent>;
using ThreadSafePasswordAutofillAgentPtr =
    mojo::ThreadSafeInterfacePtr<PasswordAutofillAgent>;
using PasswordAutofillAgentRequest = mojo::InterfaceRequest<PasswordAutofillAgent>;
using PasswordAutofillAgentAssociatedPtr =
    mojo::AssociatedInterfacePtr<PasswordAutofillAgent>;
using ThreadSafePasswordAutofillAgentAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<PasswordAutofillAgent>;
using PasswordAutofillAgentAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<PasswordAutofillAgent>;
using PasswordAutofillAgentAssociatedRequest =
    mojo::AssociatedInterfaceRequest<PasswordAutofillAgent>;

class PasswordGenerationAgent;
using PasswordGenerationAgentPtr = mojo::InterfacePtr<PasswordGenerationAgent>;
using PasswordGenerationAgentPtrInfo = mojo::InterfacePtrInfo<PasswordGenerationAgent>;
using ThreadSafePasswordGenerationAgentPtr =
    mojo::ThreadSafeInterfacePtr<PasswordGenerationAgent>;
using PasswordGenerationAgentRequest = mojo::InterfaceRequest<PasswordGenerationAgent>;
using PasswordGenerationAgentAssociatedPtr =
    mojo::AssociatedInterfacePtr<PasswordGenerationAgent>;
using ThreadSafePasswordGenerationAgentAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<PasswordGenerationAgent>;
using PasswordGenerationAgentAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<PasswordGenerationAgent>;
using PasswordGenerationAgentAssociatedRequest =
    mojo::AssociatedInterfaceRequest<PasswordGenerationAgent>;


class AutofillAgentProxy;

template <typename ImplRefTraits>
class AutofillAgentStub;

class AutofillAgentRequestValidator;

class  AutofillAgent
    : public AutofillAgentInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = AutofillAgentProxy;

  template <typename ImplRefTraits>
  using Stub_ = AutofillAgentStub<ImplRefTraits>;

  using RequestValidator_ = AutofillAgentRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kFillFormMinVersion = 0,
    kPreviewFormMinVersion = 0,
    kFieldTypePredictionsAvailableMinVersion = 0,
    kClearSectionMinVersion = 0,
    kClearPreviewedFormMinVersion = 0,
    kFillFieldWithValueMinVersion = 0,
    kPreviewFieldWithValueMinVersion = 0,
    kAcceptDataListSuggestionMinVersion = 0,
    kFillPasswordSuggestionMinVersion = 0,
    kPreviewPasswordSuggestionMinVersion = 0,
    kShowInitialPasswordAccountSuggestionsMinVersion = 0,
    kSetUserGestureRequiredMinVersion = 0,
    kSetSecureContextRequiredMinVersion = 0,
    kSetFocusRequiresScrollMinVersion = 0,
    kSetQueryPasswordSuggestionMinVersion = 0,
  };
  virtual ~AutofillAgent() {}

  virtual void FillForm(int32_t id, const autofill::FormData& form) = 0;

  virtual void PreviewForm(int32_t id, const autofill::FormData& form) = 0;

  virtual void FieldTypePredictionsAvailable(const std::vector<autofill::FormDataPredictions>& forms) = 0;

  virtual void ClearSection() = 0;

  virtual void ClearPreviewedForm() = 0;

  virtual void FillFieldWithValue(const base::string16& value) = 0;

  virtual void PreviewFieldWithValue(const base::string16& value) = 0;

  virtual void AcceptDataListSuggestion(const base::string16& value) = 0;

  virtual void FillPasswordSuggestion(const base::string16& username, const base::string16& password) = 0;

  virtual void PreviewPasswordSuggestion(const base::string16& username, const base::string16& password) = 0;

  virtual void ShowInitialPasswordAccountSuggestions(int32_t key, const autofill::PasswordFormFillData& form_data) = 0;

  virtual void SetUserGestureRequired(bool required) = 0;

  virtual void SetSecureContextRequired(bool required) = 0;

  virtual void SetFocusRequiresScroll(bool require) = 0;

  virtual void SetQueryPasswordSuggestion(bool query) = 0;
};
class  AutofillAgentInterceptorForTesting : public AutofillAgent {
  virtual AutofillAgent* GetForwardingInterface() = 0;
  void FillForm(int32_t id, const autofill::FormData& form) override;
  void PreviewForm(int32_t id, const autofill::FormData& form) override;
  void FieldTypePredictionsAvailable(const std::vector<autofill::FormDataPredictions>& forms) override;
  void ClearSection() override;
  void ClearPreviewedForm() override;
  void FillFieldWithValue(const base::string16& value) override;
  void PreviewFieldWithValue(const base::string16& value) override;
  void AcceptDataListSuggestion(const base::string16& value) override;
  void FillPasswordSuggestion(const base::string16& username, const base::string16& password) override;
  void PreviewPasswordSuggestion(const base::string16& username, const base::string16& password) override;
  void ShowInitialPasswordAccountSuggestions(int32_t key, const autofill::PasswordFormFillData& form_data) override;
  void SetUserGestureRequired(bool required) override;
  void SetSecureContextRequired(bool required) override;
  void SetFocusRequiresScroll(bool require) override;
  void SetQueryPasswordSuggestion(bool query) override;
};
class  AutofillAgentAsyncWaiter {
 public:
  explicit AutofillAgentAsyncWaiter(AutofillAgent* proxy);
  ~AutofillAgentAsyncWaiter();

 private:
  AutofillAgent* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(AutofillAgentAsyncWaiter);
};

class PasswordAutofillAgentProxy;

template <typename ImplRefTraits>
class PasswordAutofillAgentStub;

class PasswordAutofillAgentRequestValidator;
class PasswordAutofillAgentResponseValidator;

class  PasswordAutofillAgent
    : public PasswordAutofillAgentInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = PasswordAutofillAgentProxy;

  template <typename ImplRefTraits>
  using Stub_ = PasswordAutofillAgentStub<ImplRefTraits>;

  using RequestValidator_ = PasswordAutofillAgentRequestValidator;
  using ResponseValidator_ = PasswordAutofillAgentResponseValidator;
  enum MethodMinVersions : uint32_t {
    kFillPasswordFormMinVersion = 0,
    kSetLoggingStateMinVersion = 0,
    kAutofillUsernameAndPasswordDataReceivedMinVersion = 0,
    kFindFocusedPasswordFormMinVersion = 0,
    kBlacklistedFormFoundMinVersion = 0,
  };
  virtual ~PasswordAutofillAgent() {}

  virtual void FillPasswordForm(int32_t key, const autofill::PasswordFormFillData& form_data) = 0;

  virtual void SetLoggingState(bool active) = 0;

  virtual void AutofillUsernameAndPasswordDataReceived(const autofill::FormsPredictionsMap& predictions) = 0;


  using FindFocusedPasswordFormCallback = base::OnceCallback<void(const autofill::PasswordForm&)>;
  virtual void FindFocusedPasswordForm(FindFocusedPasswordFormCallback callback) = 0;

  virtual void BlacklistedFormFound() = 0;
};
class  PasswordAutofillAgentInterceptorForTesting : public PasswordAutofillAgent {
  virtual PasswordAutofillAgent* GetForwardingInterface() = 0;
  void FillPasswordForm(int32_t key, const autofill::PasswordFormFillData& form_data) override;
  void SetLoggingState(bool active) override;
  void AutofillUsernameAndPasswordDataReceived(const autofill::FormsPredictionsMap& predictions) override;
  void FindFocusedPasswordForm(FindFocusedPasswordFormCallback callback) override;
  void BlacklistedFormFound() override;
};
class  PasswordAutofillAgentAsyncWaiter {
 public:
  explicit PasswordAutofillAgentAsyncWaiter(PasswordAutofillAgent* proxy);
  ~PasswordAutofillAgentAsyncWaiter();
  void FindFocusedPasswordForm(
      autofill::PasswordForm* out_form);

 private:
  PasswordAutofillAgent* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(PasswordAutofillAgentAsyncWaiter);
};

class PasswordGenerationAgentProxy;

template <typename ImplRefTraits>
class PasswordGenerationAgentStub;

class PasswordGenerationAgentRequestValidator;

class  PasswordGenerationAgent
    : public PasswordGenerationAgentInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = PasswordGenerationAgentProxy;

  template <typename ImplRefTraits>
  using Stub_ = PasswordGenerationAgentStub<ImplRefTraits>;

  using RequestValidator_ = PasswordGenerationAgentRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kGeneratedPasswordAcceptedMinVersion = 0,
    kUserTriggeredGeneratePasswordMinVersion = 0,
    kUserSelectedManualGenerationOptionMinVersion = 0,
    kFormNotBlacklistedMinVersion = 0,
    kFoundFormsEligibleForGenerationMinVersion = 0,
    kAllowToRunFormClassifierMinVersion = 0,
  };
  virtual ~PasswordGenerationAgent() {}

  virtual void GeneratedPasswordAccepted(const base::string16& generated_password) = 0;

  virtual void UserTriggeredGeneratePassword() = 0;

  virtual void UserSelectedManualGenerationOption() = 0;

  virtual void FormNotBlacklisted(const autofill::PasswordForm& form) = 0;

  virtual void FoundFormsEligibleForGeneration(const std::vector<autofill::PasswordFormGenerationData>& forms) = 0;

  virtual void AllowToRunFormClassifier() = 0;
};
class  PasswordGenerationAgentInterceptorForTesting : public PasswordGenerationAgent {
  virtual PasswordGenerationAgent* GetForwardingInterface() = 0;
  void GeneratedPasswordAccepted(const base::string16& generated_password) override;
  void UserTriggeredGeneratePassword() override;
  void UserSelectedManualGenerationOption() override;
  void FormNotBlacklisted(const autofill::PasswordForm& form) override;
  void FoundFormsEligibleForGeneration(const std::vector<autofill::PasswordFormGenerationData>& forms) override;
  void AllowToRunFormClassifier() override;
};
class  PasswordGenerationAgentAsyncWaiter {
 public:
  explicit PasswordGenerationAgentAsyncWaiter(PasswordGenerationAgent* proxy);
  ~PasswordGenerationAgentAsyncWaiter();

 private:
  PasswordGenerationAgent* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(PasswordGenerationAgentAsyncWaiter);
};

class  AutofillAgentProxy
    : public AutofillAgent {
 public:
  explicit AutofillAgentProxy(mojo::MessageReceiverWithResponder* receiver);
  void FillForm(int32_t id, const autofill::FormData& form) final;
  void PreviewForm(int32_t id, const autofill::FormData& form) final;
  void FieldTypePredictionsAvailable(const std::vector<autofill::FormDataPredictions>& forms) final;
  void ClearSection() final;
  void ClearPreviewedForm() final;
  void FillFieldWithValue(const base::string16& value) final;
  void PreviewFieldWithValue(const base::string16& value) final;
  void AcceptDataListSuggestion(const base::string16& value) final;
  void FillPasswordSuggestion(const base::string16& username, const base::string16& password) final;
  void PreviewPasswordSuggestion(const base::string16& username, const base::string16& password) final;
  void ShowInitialPasswordAccountSuggestions(int32_t key, const autofill::PasswordFormFillData& form_data) final;
  void SetUserGestureRequired(bool required) final;
  void SetSecureContextRequired(bool required) final;
  void SetFocusRequiresScroll(bool require) final;
  void SetQueryPasswordSuggestion(bool query) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class  PasswordAutofillAgentProxy
    : public PasswordAutofillAgent {
 public:
  explicit PasswordAutofillAgentProxy(mojo::MessageReceiverWithResponder* receiver);
  void FillPasswordForm(int32_t key, const autofill::PasswordFormFillData& form_data) final;
  void SetLoggingState(bool active) final;
  void AutofillUsernameAndPasswordDataReceived(const autofill::FormsPredictionsMap& predictions) final;
  void FindFocusedPasswordForm(FindFocusedPasswordFormCallback callback) final;
  void BlacklistedFormFound() final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class  PasswordGenerationAgentProxy
    : public PasswordGenerationAgent {
 public:
  explicit PasswordGenerationAgentProxy(mojo::MessageReceiverWithResponder* receiver);
  void GeneratedPasswordAccepted(const base::string16& generated_password) final;
  void UserTriggeredGeneratePassword() final;
  void UserSelectedManualGenerationOption() final;
  void FormNotBlacklisted(const autofill::PasswordForm& form) final;
  void FoundFormsEligibleForGeneration(const std::vector<autofill::PasswordFormGenerationData>& forms) final;
  void AllowToRunFormClassifier() final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  AutofillAgentStubDispatch {
 public:
  static bool Accept(AutofillAgent* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      AutofillAgent* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<AutofillAgent>>
class AutofillAgentStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  AutofillAgentStub() {}
  ~AutofillAgentStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return AutofillAgentStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return AutofillAgentStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  PasswordAutofillAgentStubDispatch {
 public:
  static bool Accept(PasswordAutofillAgent* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      PasswordAutofillAgent* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<PasswordAutofillAgent>>
class PasswordAutofillAgentStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  PasswordAutofillAgentStub() {}
  ~PasswordAutofillAgentStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return PasswordAutofillAgentStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return PasswordAutofillAgentStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  PasswordGenerationAgentStubDispatch {
 public:
  static bool Accept(PasswordGenerationAgent* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      PasswordGenerationAgent* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<PasswordGenerationAgent>>
class PasswordGenerationAgentStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  PasswordGenerationAgentStub() {}
  ~PasswordGenerationAgentStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return PasswordGenerationAgentStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return PasswordGenerationAgentStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  AutofillAgentRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  PasswordAutofillAgentRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  PasswordGenerationAgentRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  PasswordAutofillAgentResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace autofill

namespace mojo {

}  // namespace mojo

#endif  // COMPONENTS_AUTOFILL_CONTENT_COMMON_AUTOFILL_AGENT_MOJOM_H_