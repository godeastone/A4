// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_AUTOFILL_CONTENT_COMMON_AUTOFILL_DRIVER_MOJOM_H_
#define COMPONENTS_AUTOFILL_CONTENT_COMMON_AUTOFILL_DRIVER_MOJOM_H_

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
#include "components/autofill/content/common/autofill_driver.mojom-shared.h"
#include "components/autofill/content/common/autofill_types.mojom.h"
#include "mojo/public/mojom/base/string16.mojom.h"
#include "mojo/public/mojom/base/text_direction.mojom.h"
#include "mojo/public/mojom/base/time.mojom.h"
#include "ui/gfx/geometry/mojo/geometry.mojom.h"
#include "url/mojom/url.mojom.h"
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
class AutofillDriver;
using AutofillDriverPtr = mojo::InterfacePtr<AutofillDriver>;
using AutofillDriverPtrInfo = mojo::InterfacePtrInfo<AutofillDriver>;
using ThreadSafeAutofillDriverPtr =
    mojo::ThreadSafeInterfacePtr<AutofillDriver>;
using AutofillDriverRequest = mojo::InterfaceRequest<AutofillDriver>;
using AutofillDriverAssociatedPtr =
    mojo::AssociatedInterfacePtr<AutofillDriver>;
using ThreadSafeAutofillDriverAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<AutofillDriver>;
using AutofillDriverAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<AutofillDriver>;
using AutofillDriverAssociatedRequest =
    mojo::AssociatedInterfaceRequest<AutofillDriver>;

class PasswordManagerDriver;
using PasswordManagerDriverPtr = mojo::InterfacePtr<PasswordManagerDriver>;
using PasswordManagerDriverPtrInfo = mojo::InterfacePtrInfo<PasswordManagerDriver>;
using ThreadSafePasswordManagerDriverPtr =
    mojo::ThreadSafeInterfacePtr<PasswordManagerDriver>;
using PasswordManagerDriverRequest = mojo::InterfaceRequest<PasswordManagerDriver>;
using PasswordManagerDriverAssociatedPtr =
    mojo::AssociatedInterfacePtr<PasswordManagerDriver>;
using ThreadSafePasswordManagerDriverAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<PasswordManagerDriver>;
using PasswordManagerDriverAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<PasswordManagerDriver>;
using PasswordManagerDriverAssociatedRequest =
    mojo::AssociatedInterfaceRequest<PasswordManagerDriver>;

class PasswordManagerClient;
using PasswordManagerClientPtr = mojo::InterfacePtr<PasswordManagerClient>;
using PasswordManagerClientPtrInfo = mojo::InterfacePtrInfo<PasswordManagerClient>;
using ThreadSafePasswordManagerClientPtr =
    mojo::ThreadSafeInterfacePtr<PasswordManagerClient>;
using PasswordManagerClientRequest = mojo::InterfaceRequest<PasswordManagerClient>;
using PasswordManagerClientAssociatedPtr =
    mojo::AssociatedInterfacePtr<PasswordManagerClient>;
using ThreadSafePasswordManagerClientAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<PasswordManagerClient>;
using PasswordManagerClientAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<PasswordManagerClient>;
using PasswordManagerClientAssociatedRequest =
    mojo::AssociatedInterfaceRequest<PasswordManagerClient>;


class AutofillDriverProxy;

template <typename ImplRefTraits>
class AutofillDriverStub;

class AutofillDriverRequestValidator;

class  AutofillDriver
    : public AutofillDriverInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = AutofillDriverProxy;

  template <typename ImplRefTraits>
  using Stub_ = AutofillDriverStub<ImplRefTraits>;

  using RequestValidator_ = AutofillDriverRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kFormsSeenMinVersion = 0,
    kFormSubmittedMinVersion = 0,
    kTextFieldDidChangeMinVersion = 0,
    kTextFieldDidScrollMinVersion = 0,
    kSelectControlDidChangeMinVersion = 0,
    kSelectFieldOptionsDidChangeMinVersion = 0,
    kQueryFormFieldAutofillMinVersion = 0,
    kHidePopupMinVersion = 0,
    kFocusNoLongerOnFormMinVersion = 0,
    kFocusOnFormFieldMinVersion = 0,
    kDidFillAutofillFormDataMinVersion = 0,
    kDidPreviewAutofillFormDataMinVersion = 0,
    kDidEndTextFieldEditingMinVersion = 0,
    kSetDataListMinVersion = 0,
  };
  virtual ~AutofillDriver() {}

  virtual void FormsSeen(const std::vector<autofill::FormData>& forms, base::TimeTicks timestamp) = 0;

  virtual void FormSubmitted(const autofill::FormData& form, bool known_success, autofill::SubmissionSource source, base::TimeTicks timestamp) = 0;

  virtual void TextFieldDidChange(const autofill::FormData& form, const autofill::FormFieldData& field, const gfx::RectF& bounding_box, base::TimeTicks timestamp) = 0;

  virtual void TextFieldDidScroll(const autofill::FormData& form, const autofill::FormFieldData& field, const gfx::RectF& bounding_box) = 0;

  virtual void SelectControlDidChange(const autofill::FormData& form, const autofill::FormFieldData& field, const gfx::RectF& bounding_box) = 0;

  virtual void SelectFieldOptionsDidChange(const autofill::FormData& form) = 0;

  virtual void QueryFormFieldAutofill(int32_t id, const autofill::FormData& form, const autofill::FormFieldData& field, const gfx::RectF& bounding_box) = 0;

  virtual void HidePopup() = 0;

  virtual void FocusNoLongerOnForm() = 0;

  virtual void FocusOnFormField(const autofill::FormData& form, const autofill::FormFieldData& field, const gfx::RectF& bounding_box) = 0;

  virtual void DidFillAutofillFormData(const autofill::FormData& form, base::TimeTicks timestamp) = 0;

  virtual void DidPreviewAutofillFormData() = 0;

  virtual void DidEndTextFieldEditing() = 0;

  virtual void SetDataList(const std::vector<base::string16>& values, const std::vector<base::string16>& labels) = 0;
};
class  AutofillDriverInterceptorForTesting : public AutofillDriver {
  virtual AutofillDriver* GetForwardingInterface() = 0;
  void FormsSeen(const std::vector<autofill::FormData>& forms, base::TimeTicks timestamp) override;
  void FormSubmitted(const autofill::FormData& form, bool known_success, autofill::SubmissionSource source, base::TimeTicks timestamp) override;
  void TextFieldDidChange(const autofill::FormData& form, const autofill::FormFieldData& field, const gfx::RectF& bounding_box, base::TimeTicks timestamp) override;
  void TextFieldDidScroll(const autofill::FormData& form, const autofill::FormFieldData& field, const gfx::RectF& bounding_box) override;
  void SelectControlDidChange(const autofill::FormData& form, const autofill::FormFieldData& field, const gfx::RectF& bounding_box) override;
  void SelectFieldOptionsDidChange(const autofill::FormData& form) override;
  void QueryFormFieldAutofill(int32_t id, const autofill::FormData& form, const autofill::FormFieldData& field, const gfx::RectF& bounding_box) override;
  void HidePopup() override;
  void FocusNoLongerOnForm() override;
  void FocusOnFormField(const autofill::FormData& form, const autofill::FormFieldData& field, const gfx::RectF& bounding_box) override;
  void DidFillAutofillFormData(const autofill::FormData& form, base::TimeTicks timestamp) override;
  void DidPreviewAutofillFormData() override;
  void DidEndTextFieldEditing() override;
  void SetDataList(const std::vector<base::string16>& values, const std::vector<base::string16>& labels) override;
};
class  AutofillDriverAsyncWaiter {
 public:
  explicit AutofillDriverAsyncWaiter(AutofillDriver* proxy);
  ~AutofillDriverAsyncWaiter();

 private:
  AutofillDriver* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(AutofillDriverAsyncWaiter);
};

class PasswordManagerDriverProxy;

template <typename ImplRefTraits>
class PasswordManagerDriverStub;

class PasswordManagerDriverRequestValidator;

class  PasswordManagerDriver
    : public PasswordManagerDriverInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = PasswordManagerDriverProxy;

  template <typename ImplRefTraits>
  using Stub_ = PasswordManagerDriverStub<ImplRefTraits>;

  using RequestValidator_ = PasswordManagerDriverRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kPasswordFormsParsedMinVersion = 0,
    kPasswordFormsRenderedMinVersion = 0,
    kPasswordFormSubmittedMinVersion = 0,
    kShowManualFallbackForSavingMinVersion = 0,
    kHideManualFallbackForSavingMinVersion = 0,
    kSameDocumentNavigationMinVersion = 0,
    kRecordSavePasswordProgressMinVersion = 0,
    kUserModifiedPasswordFieldMinVersion = 0,
    kShowPasswordSuggestionsMinVersion = 0,
    kShowManualFallbackSuggestionMinVersion = 0,
    kPresaveGeneratedPasswordMinVersion = 0,
    kPasswordNoLongerGeneratedMinVersion = 0,
    kSaveGenerationFieldDetectedByClassifierMinVersion = 0,
    kCheckSafeBrowsingReputationMinVersion = 0,
  };
  virtual ~PasswordManagerDriver() {}

  virtual void PasswordFormsParsed(const std::vector<autofill::PasswordForm>& forms) = 0;

  virtual void PasswordFormsRendered(const std::vector<autofill::PasswordForm>& visible_forms, bool did_stop_loading) = 0;

  virtual void PasswordFormSubmitted(const autofill::PasswordForm& password_form) = 0;

  virtual void ShowManualFallbackForSaving(const autofill::PasswordForm& password_form) = 0;

  virtual void HideManualFallbackForSaving() = 0;

  virtual void SameDocumentNavigation(const autofill::PasswordForm& password_form) = 0;

  virtual void RecordSavePasswordProgress(const std::string& log) = 0;

  virtual void UserModifiedPasswordField() = 0;

  virtual void ShowPasswordSuggestions(int32_t key, base::i18n::TextDirection text_direction, const base::string16& typed_username, int32_t options, const gfx::RectF& bounds) = 0;

  virtual void ShowManualFallbackSuggestion(base::i18n::TextDirection text_direction, const gfx::RectF& bounds) = 0;

  virtual void PresaveGeneratedPassword(const autofill::PasswordForm& password_form) = 0;

  virtual void PasswordNoLongerGenerated(const autofill::PasswordForm& password_form) = 0;

  virtual void SaveGenerationFieldDetectedByClassifier(const autofill::PasswordForm& password_form, const base::string16& generation_field) = 0;

  virtual void CheckSafeBrowsingReputation(const GURL& form_action, const GURL& frame_url) = 0;
};
class  PasswordManagerDriverInterceptorForTesting : public PasswordManagerDriver {
  virtual PasswordManagerDriver* GetForwardingInterface() = 0;
  void PasswordFormsParsed(const std::vector<autofill::PasswordForm>& forms) override;
  void PasswordFormsRendered(const std::vector<autofill::PasswordForm>& visible_forms, bool did_stop_loading) override;
  void PasswordFormSubmitted(const autofill::PasswordForm& password_form) override;
  void ShowManualFallbackForSaving(const autofill::PasswordForm& password_form) override;
  void HideManualFallbackForSaving() override;
  void SameDocumentNavigation(const autofill::PasswordForm& password_form) override;
  void RecordSavePasswordProgress(const std::string& log) override;
  void UserModifiedPasswordField() override;
  void ShowPasswordSuggestions(int32_t key, base::i18n::TextDirection text_direction, const base::string16& typed_username, int32_t options, const gfx::RectF& bounds) override;
  void ShowManualFallbackSuggestion(base::i18n::TextDirection text_direction, const gfx::RectF& bounds) override;
  void PresaveGeneratedPassword(const autofill::PasswordForm& password_form) override;
  void PasswordNoLongerGenerated(const autofill::PasswordForm& password_form) override;
  void SaveGenerationFieldDetectedByClassifier(const autofill::PasswordForm& password_form, const base::string16& generation_field) override;
  void CheckSafeBrowsingReputation(const GURL& form_action, const GURL& frame_url) override;
};
class  PasswordManagerDriverAsyncWaiter {
 public:
  explicit PasswordManagerDriverAsyncWaiter(PasswordManagerDriver* proxy);
  ~PasswordManagerDriverAsyncWaiter();

 private:
  PasswordManagerDriver* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(PasswordManagerDriverAsyncWaiter);
};

class PasswordManagerClientProxy;

template <typename ImplRefTraits>
class PasswordManagerClientStub;

class PasswordManagerClientRequestValidator;

class  PasswordManagerClient
    : public PasswordManagerClientInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = PasswordManagerClientProxy;

  template <typename ImplRefTraits>
  using Stub_ = PasswordManagerClientStub<ImplRefTraits>;

  using RequestValidator_ = PasswordManagerClientRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kGenerationAvailableForFormMinVersion = 0,
    kShowPasswordGenerationPopupMinVersion = 0,
    kShowPasswordEditingPopupMinVersion = 0,
    kHidePasswordGenerationPopupMinVersion = 0,
  };
  virtual ~PasswordManagerClient() {}

  virtual void GenerationAvailableForForm(const autofill::PasswordForm& password_form) = 0;

  virtual void ShowPasswordGenerationPopup(const gfx::RectF& bounds, int32_t max_length, const base::string16& generation_element, bool is_manually_triggered, const autofill::PasswordForm& password_form) = 0;

  virtual void ShowPasswordEditingPopup(const gfx::RectF& bounds, const autofill::PasswordForm& password_form) = 0;

  virtual void HidePasswordGenerationPopup() = 0;
};
class  PasswordManagerClientInterceptorForTesting : public PasswordManagerClient {
  virtual PasswordManagerClient* GetForwardingInterface() = 0;
  void GenerationAvailableForForm(const autofill::PasswordForm& password_form) override;
  void ShowPasswordGenerationPopup(const gfx::RectF& bounds, int32_t max_length, const base::string16& generation_element, bool is_manually_triggered, const autofill::PasswordForm& password_form) override;
  void ShowPasswordEditingPopup(const gfx::RectF& bounds, const autofill::PasswordForm& password_form) override;
  void HidePasswordGenerationPopup() override;
};
class  PasswordManagerClientAsyncWaiter {
 public:
  explicit PasswordManagerClientAsyncWaiter(PasswordManagerClient* proxy);
  ~PasswordManagerClientAsyncWaiter();

 private:
  PasswordManagerClient* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(PasswordManagerClientAsyncWaiter);
};

class  AutofillDriverProxy
    : public AutofillDriver {
 public:
  explicit AutofillDriverProxy(mojo::MessageReceiverWithResponder* receiver);
  void FormsSeen(const std::vector<autofill::FormData>& forms, base::TimeTicks timestamp) final;
  void FormSubmitted(const autofill::FormData& form, bool known_success, autofill::SubmissionSource source, base::TimeTicks timestamp) final;
  void TextFieldDidChange(const autofill::FormData& form, const autofill::FormFieldData& field, const gfx::RectF& bounding_box, base::TimeTicks timestamp) final;
  void TextFieldDidScroll(const autofill::FormData& form, const autofill::FormFieldData& field, const gfx::RectF& bounding_box) final;
  void SelectControlDidChange(const autofill::FormData& form, const autofill::FormFieldData& field, const gfx::RectF& bounding_box) final;
  void SelectFieldOptionsDidChange(const autofill::FormData& form) final;
  void QueryFormFieldAutofill(int32_t id, const autofill::FormData& form, const autofill::FormFieldData& field, const gfx::RectF& bounding_box) final;
  void HidePopup() final;
  void FocusNoLongerOnForm() final;
  void FocusOnFormField(const autofill::FormData& form, const autofill::FormFieldData& field, const gfx::RectF& bounding_box) final;
  void DidFillAutofillFormData(const autofill::FormData& form, base::TimeTicks timestamp) final;
  void DidPreviewAutofillFormData() final;
  void DidEndTextFieldEditing() final;
  void SetDataList(const std::vector<base::string16>& values, const std::vector<base::string16>& labels) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class  PasswordManagerDriverProxy
    : public PasswordManagerDriver {
 public:
  explicit PasswordManagerDriverProxy(mojo::MessageReceiverWithResponder* receiver);
  void PasswordFormsParsed(const std::vector<autofill::PasswordForm>& forms) final;
  void PasswordFormsRendered(const std::vector<autofill::PasswordForm>& visible_forms, bool did_stop_loading) final;
  void PasswordFormSubmitted(const autofill::PasswordForm& password_form) final;
  void ShowManualFallbackForSaving(const autofill::PasswordForm& password_form) final;
  void HideManualFallbackForSaving() final;
  void SameDocumentNavigation(const autofill::PasswordForm& password_form) final;
  void RecordSavePasswordProgress(const std::string& log) final;
  void UserModifiedPasswordField() final;
  void ShowPasswordSuggestions(int32_t key, base::i18n::TextDirection text_direction, const base::string16& typed_username, int32_t options, const gfx::RectF& bounds) final;
  void ShowManualFallbackSuggestion(base::i18n::TextDirection text_direction, const gfx::RectF& bounds) final;
  void PresaveGeneratedPassword(const autofill::PasswordForm& password_form) final;
  void PasswordNoLongerGenerated(const autofill::PasswordForm& password_form) final;
  void SaveGenerationFieldDetectedByClassifier(const autofill::PasswordForm& password_form, const base::string16& generation_field) final;
  void CheckSafeBrowsingReputation(const GURL& form_action, const GURL& frame_url) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class  PasswordManagerClientProxy
    : public PasswordManagerClient {
 public:
  explicit PasswordManagerClientProxy(mojo::MessageReceiverWithResponder* receiver);
  void GenerationAvailableForForm(const autofill::PasswordForm& password_form) final;
  void ShowPasswordGenerationPopup(const gfx::RectF& bounds, int32_t max_length, const base::string16& generation_element, bool is_manually_triggered, const autofill::PasswordForm& password_form) final;
  void ShowPasswordEditingPopup(const gfx::RectF& bounds, const autofill::PasswordForm& password_form) final;
  void HidePasswordGenerationPopup() final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  AutofillDriverStubDispatch {
 public:
  static bool Accept(AutofillDriver* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      AutofillDriver* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<AutofillDriver>>
class AutofillDriverStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  AutofillDriverStub() {}
  ~AutofillDriverStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return AutofillDriverStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return AutofillDriverStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  PasswordManagerDriverStubDispatch {
 public:
  static bool Accept(PasswordManagerDriver* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      PasswordManagerDriver* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<PasswordManagerDriver>>
class PasswordManagerDriverStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  PasswordManagerDriverStub() {}
  ~PasswordManagerDriverStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return PasswordManagerDriverStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return PasswordManagerDriverStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  PasswordManagerClientStubDispatch {
 public:
  static bool Accept(PasswordManagerClient* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      PasswordManagerClient* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<PasswordManagerClient>>
class PasswordManagerClientStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  PasswordManagerClientStub() {}
  ~PasswordManagerClientStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return PasswordManagerClientStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return PasswordManagerClientStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  AutofillDriverRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  PasswordManagerDriverRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  PasswordManagerClientRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace autofill

namespace mojo {

}  // namespace mojo

#endif  // COMPONENTS_AUTOFILL_CONTENT_COMMON_AUTOFILL_DRIVER_MOJOM_H_