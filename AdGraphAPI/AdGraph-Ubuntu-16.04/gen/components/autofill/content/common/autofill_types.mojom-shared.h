// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_AUTOFILL_CONTENT_COMMON_AUTOFILL_TYPES_MOJOM_SHARED_H_
#define COMPONENTS_AUTOFILL_CONTENT_COMMON_AUTOFILL_TYPES_MOJOM_SHARED_H_

#include <stdint.h>

#include <functional>
#include <ostream>
#include <type_traits>
#include <utility>

#include "base/compiler_specific.h"
#include "base/containers/flat_map.h"
#include "mojo/public/cpp/bindings/array_data_view.h"
#include "mojo/public/cpp/bindings/enum_traits.h"
#include "mojo/public/cpp/bindings/interface_data_view.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/serialization.h"
#include "mojo/public/cpp/bindings/map_data_view.h"
#include "mojo/public/cpp/bindings/string_data_view.h"
#include "components/autofill/content/common/autofill_types.mojom-shared-internal.h"
#include "mojo/public/mojom/base/text_direction.mojom-shared.h"
#include "mojo/public/mojom/base/time.mojom-shared.h"
#include "mojo/public/mojom/base/string16.mojom-shared.h"
#include "url/mojom/origin.mojom-shared.h"
#include "url/mojom/url.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"


namespace autofill {
namespace mojom {
class FormFieldDataDataView;

class FormDataDataView;

class FormFieldDataPredictionsDataView;

class FormDataPredictionsDataView;

class PasswordAndRealmDataView;

class PasswordFormFillDataDataView;

class PasswordFormGenerationDataDataView;

class ValueElementPairDataView;

class PasswordFormDataView;

class PasswordFormFieldPredictionMapDataView;

class FormsPredictionsMapDataView;



}  // namespace mojom
}  // namespace autofill

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::autofill::mojom::FormFieldDataDataView> {
  using Data = ::autofill::mojom::internal::FormFieldData_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::autofill::mojom::FormDataDataView> {
  using Data = ::autofill::mojom::internal::FormData_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::autofill::mojom::FormFieldDataPredictionsDataView> {
  using Data = ::autofill::mojom::internal::FormFieldDataPredictions_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::autofill::mojom::FormDataPredictionsDataView> {
  using Data = ::autofill::mojom::internal::FormDataPredictions_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::autofill::mojom::PasswordAndRealmDataView> {
  using Data = ::autofill::mojom::internal::PasswordAndRealm_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::autofill::mojom::PasswordFormFillDataDataView> {
  using Data = ::autofill::mojom::internal::PasswordFormFillData_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::autofill::mojom::PasswordFormGenerationDataDataView> {
  using Data = ::autofill::mojom::internal::PasswordFormGenerationData_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::autofill::mojom::ValueElementPairDataView> {
  using Data = ::autofill::mojom::internal::ValueElementPair_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::autofill::mojom::PasswordFormDataView> {
  using Data = ::autofill::mojom::internal::PasswordForm_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::autofill::mojom::PasswordFormFieldPredictionMapDataView> {
  using Data = ::autofill::mojom::internal::PasswordFormFieldPredictionMap_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::autofill::mojom::FormsPredictionsMapDataView> {
  using Data = ::autofill::mojom::internal::FormsPredictionsMap_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace autofill {
namespace mojom {

enum class CheckStatus : int32_t {
  NOT_CHECKABLE,
  CHECKABLE_BUT_UNCHECKED,
  CHECKED,
  kMinValue = 0,
  kMaxValue = 2,
};

inline std::ostream& operator<<(std::ostream& os, CheckStatus value) {
  switch(value) {
    case CheckStatus::NOT_CHECKABLE:
      return os << "CheckStatus::NOT_CHECKABLE";
    case CheckStatus::CHECKABLE_BUT_UNCHECKED:
      return os << "CheckStatus::CHECKABLE_BUT_UNCHECKED";
    case CheckStatus::CHECKED:
      return os << "CheckStatus::CHECKED";
    default:
      return os << "Unknown CheckStatus value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(CheckStatus value) {
  return internal::CheckStatus_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

enum class RoleAttribute : int32_t {
  ROLE_ATTRIBUTE_PRESENTATION,
  ROLE_ATTRIBUTE_OTHER,
  kMinValue = 0,
  kMaxValue = 1,
};

inline std::ostream& operator<<(std::ostream& os, RoleAttribute value) {
  switch(value) {
    case RoleAttribute::ROLE_ATTRIBUTE_PRESENTATION:
      return os << "RoleAttribute::ROLE_ATTRIBUTE_PRESENTATION";
    case RoleAttribute::ROLE_ATTRIBUTE_OTHER:
      return os << "RoleAttribute::ROLE_ATTRIBUTE_OTHER";
    default:
      return os << "Unknown RoleAttribute value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(RoleAttribute value) {
  return internal::RoleAttribute_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

enum class GenerationUploadStatus : int32_t {
  NO_SIGNAL_SENT,
  POSITIVE_SIGNAL_SENT,
  NEGATIVE_SIGNAL_SENT,
  UNKNOWN_STATUS = 10,
  kMinValue = 0,
  kMaxValue = 10,
};

inline std::ostream& operator<<(std::ostream& os, GenerationUploadStatus value) {
  switch(value) {
    case GenerationUploadStatus::NO_SIGNAL_SENT:
      return os << "GenerationUploadStatus::NO_SIGNAL_SENT";
    case GenerationUploadStatus::POSITIVE_SIGNAL_SENT:
      return os << "GenerationUploadStatus::POSITIVE_SIGNAL_SENT";
    case GenerationUploadStatus::NEGATIVE_SIGNAL_SENT:
      return os << "GenerationUploadStatus::NEGATIVE_SIGNAL_SENT";
    case GenerationUploadStatus::UNKNOWN_STATUS:
      return os << "GenerationUploadStatus::UNKNOWN_STATUS";
    default:
      return os << "Unknown GenerationUploadStatus value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(GenerationUploadStatus value) {
  return internal::GenerationUploadStatus_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

enum class PasswordFormLayout : int32_t {
  LAYOUT_OTHER,
  LAYOUT_LOGIN_AND_SIGNUP,
  kMinValue = 0,
  kMaxValue = 1,
};

inline std::ostream& operator<<(std::ostream& os, PasswordFormLayout value) {
  switch(value) {
    case PasswordFormLayout::LAYOUT_OTHER:
      return os << "PasswordFormLayout::LAYOUT_OTHER";
    case PasswordFormLayout::LAYOUT_LOGIN_AND_SIGNUP:
      return os << "PasswordFormLayout::LAYOUT_LOGIN_AND_SIGNUP";
    default:
      return os << "Unknown PasswordFormLayout value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(PasswordFormLayout value) {
  return internal::PasswordFormLayout_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

enum class PasswordFormType : int32_t {
  TYPE_MANUAL,
  TYPE_GENERATED,
  TYPE_API,
  kMinValue = 0,
  kMaxValue = 2,
};

inline std::ostream& operator<<(std::ostream& os, PasswordFormType value) {
  switch(value) {
    case PasswordFormType::TYPE_MANUAL:
      return os << "PasswordFormType::TYPE_MANUAL";
    case PasswordFormType::TYPE_GENERATED:
      return os << "PasswordFormType::TYPE_GENERATED";
    case PasswordFormType::TYPE_API:
      return os << "PasswordFormType::TYPE_API";
    default:
      return os << "Unknown PasswordFormType value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(PasswordFormType value) {
  return internal::PasswordFormType_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

enum class PasswordFormScheme : int32_t {
  SCHEME_HTML,
  SCHEME_BASIC,
  SCHEME_DIGEST,
  SCHEME_OTHER,
  SCHEME_USERNAME_ONLY,
  kMinValue = 0,
  kMaxValue = 4,
};

inline std::ostream& operator<<(std::ostream& os, PasswordFormScheme value) {
  switch(value) {
    case PasswordFormScheme::SCHEME_HTML:
      return os << "PasswordFormScheme::SCHEME_HTML";
    case PasswordFormScheme::SCHEME_BASIC:
      return os << "PasswordFormScheme::SCHEME_BASIC";
    case PasswordFormScheme::SCHEME_DIGEST:
      return os << "PasswordFormScheme::SCHEME_DIGEST";
    case PasswordFormScheme::SCHEME_OTHER:
      return os << "PasswordFormScheme::SCHEME_OTHER";
    case PasswordFormScheme::SCHEME_USERNAME_ONLY:
      return os << "PasswordFormScheme::SCHEME_USERNAME_ONLY";
    default:
      return os << "Unknown PasswordFormScheme value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(PasswordFormScheme value) {
  return internal::PasswordFormScheme_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

enum class PasswordFormSubmissionIndicatorEvent : int32_t {
  NONE,
  HTML_FORM_SUBMISSION,
  SAME_DOCUMENT_NAVIGATION,
  XHR_SUCCEEDED,
  FRAME_DETACHED,
  MANUAL_SAVE,
  DOM_MUTATION_AFTER_XHR,
  PROVISIONALLY_SAVED_FORM_ON_START_PROVISIONAL_LOAD,
  SUBMISSION_INDICATOR_EVENT_COUNT,
  kMinValue = 0,
  kMaxValue = 8,
};

inline std::ostream& operator<<(std::ostream& os, PasswordFormSubmissionIndicatorEvent value) {
  switch(value) {
    case PasswordFormSubmissionIndicatorEvent::NONE:
      return os << "PasswordFormSubmissionIndicatorEvent::NONE";
    case PasswordFormSubmissionIndicatorEvent::HTML_FORM_SUBMISSION:
      return os << "PasswordFormSubmissionIndicatorEvent::HTML_FORM_SUBMISSION";
    case PasswordFormSubmissionIndicatorEvent::SAME_DOCUMENT_NAVIGATION:
      return os << "PasswordFormSubmissionIndicatorEvent::SAME_DOCUMENT_NAVIGATION";
    case PasswordFormSubmissionIndicatorEvent::XHR_SUCCEEDED:
      return os << "PasswordFormSubmissionIndicatorEvent::XHR_SUCCEEDED";
    case PasswordFormSubmissionIndicatorEvent::FRAME_DETACHED:
      return os << "PasswordFormSubmissionIndicatorEvent::FRAME_DETACHED";
    case PasswordFormSubmissionIndicatorEvent::MANUAL_SAVE:
      return os << "PasswordFormSubmissionIndicatorEvent::MANUAL_SAVE";
    case PasswordFormSubmissionIndicatorEvent::DOM_MUTATION_AFTER_XHR:
      return os << "PasswordFormSubmissionIndicatorEvent::DOM_MUTATION_AFTER_XHR";
    case PasswordFormSubmissionIndicatorEvent::PROVISIONALLY_SAVED_FORM_ON_START_PROVISIONAL_LOAD:
      return os << "PasswordFormSubmissionIndicatorEvent::PROVISIONALLY_SAVED_FORM_ON_START_PROVISIONAL_LOAD";
    case PasswordFormSubmissionIndicatorEvent::SUBMISSION_INDICATOR_EVENT_COUNT:
      return os << "PasswordFormSubmissionIndicatorEvent::SUBMISSION_INDICATOR_EVENT_COUNT";
    default:
      return os << "Unknown PasswordFormSubmissionIndicatorEvent value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(PasswordFormSubmissionIndicatorEvent value) {
  return internal::PasswordFormSubmissionIndicatorEvent_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

enum class PasswordFormFieldPredictionType : int32_t {
  PREDICTION_USERNAME,
  PREDICTION_CURRENT_PASSWORD,
  PREDICTION_NEW_PASSWORD,
  PREDICTION_NOT_PASSWORD,
  kMinValue = 0,
  kMaxValue = 3,
};

inline std::ostream& operator<<(std::ostream& os, PasswordFormFieldPredictionType value) {
  switch(value) {
    case PasswordFormFieldPredictionType::PREDICTION_USERNAME:
      return os << "PasswordFormFieldPredictionType::PREDICTION_USERNAME";
    case PasswordFormFieldPredictionType::PREDICTION_CURRENT_PASSWORD:
      return os << "PasswordFormFieldPredictionType::PREDICTION_CURRENT_PASSWORD";
    case PasswordFormFieldPredictionType::PREDICTION_NEW_PASSWORD:
      return os << "PasswordFormFieldPredictionType::PREDICTION_NEW_PASSWORD";
    case PasswordFormFieldPredictionType::PREDICTION_NOT_PASSWORD:
      return os << "PasswordFormFieldPredictionType::PREDICTION_NOT_PASSWORD";
    default:
      return os << "Unknown PasswordFormFieldPredictionType value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(PasswordFormFieldPredictionType value) {
  return internal::PasswordFormFieldPredictionType_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

enum class SubmissionSource : int32_t {
  SAME_DOCUMENT_NAVIGATION,
  XHR_SUCCEEDED,
  FRAME_DETACHED,
  DOM_MUTATION_AFTER_XHR,
  PROBABLY_FORM_SUBMITTED,
  FORM_SUBMISSION,
  kMinValue = 0,
  kMaxValue = 5,
};

inline std::ostream& operator<<(std::ostream& os, SubmissionSource value) {
  switch(value) {
    case SubmissionSource::SAME_DOCUMENT_NAVIGATION:
      return os << "SubmissionSource::SAME_DOCUMENT_NAVIGATION";
    case SubmissionSource::XHR_SUCCEEDED:
      return os << "SubmissionSource::XHR_SUCCEEDED";
    case SubmissionSource::FRAME_DETACHED:
      return os << "SubmissionSource::FRAME_DETACHED";
    case SubmissionSource::DOM_MUTATION_AFTER_XHR:
      return os << "SubmissionSource::DOM_MUTATION_AFTER_XHR";
    case SubmissionSource::PROBABLY_FORM_SUBMITTED:
      return os << "SubmissionSource::PROBABLY_FORM_SUBMITTED";
    case SubmissionSource::FORM_SUBMISSION:
      return os << "SubmissionSource::FORM_SUBMISSION";
    default:
      return os << "Unknown SubmissionSource value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(SubmissionSource value) {
  return internal::SubmissionSource_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

enum class LabelSource : int32_t {
  UNKNOWN,
  LABEL_TAG,
  P_TAG,
  DIV_TABLE,
  TD_TAG,
  DD_TAG,
  LI_TAG,
  PLACE_HOLDER,
  ARIA_LABEL,
  COMBINED,
  VALUE,
  kMinValue = 0,
  kMaxValue = 10,
};

inline std::ostream& operator<<(std::ostream& os, LabelSource value) {
  switch(value) {
    case LabelSource::UNKNOWN:
      return os << "LabelSource::UNKNOWN";
    case LabelSource::LABEL_TAG:
      return os << "LabelSource::LABEL_TAG";
    case LabelSource::P_TAG:
      return os << "LabelSource::P_TAG";
    case LabelSource::DIV_TABLE:
      return os << "LabelSource::DIV_TABLE";
    case LabelSource::TD_TAG:
      return os << "LabelSource::TD_TAG";
    case LabelSource::DD_TAG:
      return os << "LabelSource::DD_TAG";
    case LabelSource::LI_TAG:
      return os << "LabelSource::LI_TAG";
    case LabelSource::PLACE_HOLDER:
      return os << "LabelSource::PLACE_HOLDER";
    case LabelSource::ARIA_LABEL:
      return os << "LabelSource::ARIA_LABEL";
    case LabelSource::COMBINED:
      return os << "LabelSource::COMBINED";
    case LabelSource::VALUE:
      return os << "LabelSource::VALUE";
    default:
      return os << "Unknown LabelSource value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(LabelSource value) {
  return internal::LabelSource_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
class FormFieldDataDataView {
 public:
  FormFieldDataDataView() {}

  FormFieldDataDataView(
      internal::FormFieldData_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetLabelDataView(
      ::mojo_base::mojom::String16DataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadLabel(UserType* output) {
    auto* pointer = data_->label.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::String16DataView>(
        pointer, output, context_);
  }
  inline void GetNameDataView(
      ::mojo_base::mojom::String16DataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadName(UserType* output) {
    auto* pointer = data_->name.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::String16DataView>(
        pointer, output, context_);
  }
  inline void GetIdDataView(
      ::mojo_base::mojom::String16DataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadId(UserType* output) {
    auto* pointer = data_->id.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::String16DataView>(
        pointer, output, context_);
  }
  inline void GetValueDataView(
      ::mojo_base::mojom::String16DataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadValue(UserType* output) {
    auto* pointer = data_->value.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::String16DataView>(
        pointer, output, context_);
  }
  inline void GetFormControlTypeDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFormControlType(UserType* output) {
    auto* pointer = data_->form_control_type.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetAutocompleteAttributeDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadAutocompleteAttribute(UserType* output) {
    auto* pointer = data_->autocomplete_attribute.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetPlaceholderDataView(
      ::mojo_base::mojom::String16DataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPlaceholder(UserType* output) {
    auto* pointer = data_->placeholder.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::String16DataView>(
        pointer, output, context_);
  }
  inline void GetCssClassesDataView(
      ::mojo_base::mojom::String16DataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCssClasses(UserType* output) {
    auto* pointer = data_->css_classes.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::String16DataView>(
        pointer, output, context_);
  }
  uint32_t unique_renderer_id() const {
    return data_->unique_renderer_id;
  }
  uint32_t properties_mask() const {
    return data_->properties_mask;
  }
  uint64_t max_length() const {
    return data_->max_length;
  }
  bool is_autofilled() const {
    return data_->is_autofilled;
  }
  inline void GetSectionDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSection(UserType* output) {
    auto* pointer = data_->section.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCheckStatus(UserType* output) const {
    auto data_value = data_->check_status;
    return mojo::internal::Deserialize<::autofill::mojom::CheckStatus>(
        data_value, output);
  }

  CheckStatus check_status() const {
    return static_cast<CheckStatus>(data_->check_status);
  }
  bool is_focusable() const {
    return data_->is_focusable;
  }
  bool should_autocomplete() const {
    return data_->should_autocomplete;
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRole(UserType* output) const {
    auto data_value = data_->role;
    return mojo::internal::Deserialize<::autofill::mojom::RoleAttribute>(
        data_value, output);
  }

  RoleAttribute role() const {
    return static_cast<RoleAttribute>(data_->role);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTextDirection(UserType* output) const {
    auto data_value = data_->text_direction;
    return mojo::internal::Deserialize<::mojo_base::mojom::TextDirection>(
        data_value, output);
  }

  ::mojo_base::mojom::TextDirection text_direction() const {
    return static_cast<::mojo_base::mojom::TextDirection>(data_->text_direction);
  }
  bool is_enabled() const {
    return data_->is_enabled;
  }
  bool is_readonly() const {
    return data_->is_readonly;
  }
  bool is_default() const {
    return data_->is_default;
  }
  inline void GetTypedValueDataView(
      ::mojo_base::mojom::String16DataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTypedValue(UserType* output) {
    auto* pointer = data_->typed_value.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::String16DataView>(
        pointer, output, context_);
  }
  inline void GetOptionValuesDataView(
      mojo::ArrayDataView<::mojo_base::mojom::String16DataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadOptionValues(UserType* output) {
    auto* pointer = data_->option_values.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::mojo_base::mojom::String16DataView>>(
        pointer, output, context_);
  }
  inline void GetOptionContentsDataView(
      mojo::ArrayDataView<::mojo_base::mojom::String16DataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadOptionContents(UserType* output) {
    auto* pointer = data_->option_contents.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::mojo_base::mojom::String16DataView>>(
        pointer, output, context_);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadLabelSource(UserType* output) const {
    auto data_value = data_->label_source;
    return mojo::internal::Deserialize<::autofill::mojom::LabelSource>(
        data_value, output);
  }

  LabelSource label_source() const {
    return static_cast<LabelSource>(data_->label_source);
  }
 private:
  internal::FormFieldData_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class FormDataDataView {
 public:
  FormDataDataView() {}

  FormDataDataView(
      internal::FormData_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetNameDataView(
      ::mojo_base::mojom::String16DataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadName(UserType* output) {
    auto* pointer = data_->name.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::String16DataView>(
        pointer, output, context_);
  }
  inline void GetOriginDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadOrigin(UserType* output) {
    auto* pointer = data_->origin.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
  inline void GetActionDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadAction(UserType* output) {
    auto* pointer = data_->action.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
  inline void GetMainFrameOriginDataView(
      ::url::mojom::OriginDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMainFrameOrigin(UserType* output) {
    auto* pointer = data_->main_frame_origin.Get();
    return mojo::internal::Deserialize<::url::mojom::OriginDataView>(
        pointer, output, context_);
  }
  bool is_form_tag() const {
    return data_->is_form_tag;
  }
  bool is_formless_checkout() const {
    return data_->is_formless_checkout;
  }
  uint32_t unique_renderer_id() const {
    return data_->unique_renderer_id;
  }
  inline void GetFieldsDataView(
      mojo::ArrayDataView<FormFieldDataDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFields(UserType* output) {
    auto* pointer = data_->fields.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::autofill::mojom::FormFieldDataDataView>>(
        pointer, output, context_);
  }
 private:
  internal::FormData_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class FormFieldDataPredictionsDataView {
 public:
  FormFieldDataPredictionsDataView() {}

  FormFieldDataPredictionsDataView(
      internal::FormFieldDataPredictions_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetFieldDataView(
      FormFieldDataDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadField(UserType* output) {
    auto* pointer = data_->field.Get();
    return mojo::internal::Deserialize<::autofill::mojom::FormFieldDataDataView>(
        pointer, output, context_);
  }
  inline void GetSignatureDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSignature(UserType* output) {
    auto* pointer = data_->signature.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetHeuristicTypeDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadHeuristicType(UserType* output) {
    auto* pointer = data_->heuristic_type.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetServerTypeDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadServerType(UserType* output) {
    auto* pointer = data_->server_type.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetOverallTypeDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadOverallType(UserType* output) {
    auto* pointer = data_->overall_type.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetParseableNameDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadParseableName(UserType* output) {
    auto* pointer = data_->parseable_name.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetSectionDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSection(UserType* output) {
    auto* pointer = data_->section.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::FormFieldDataPredictions_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class FormDataPredictionsDataView {
 public:
  FormDataPredictionsDataView() {}

  FormDataPredictionsDataView(
      internal::FormDataPredictions_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetDataDataView(
      FormDataDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadData(UserType* output) {
    auto* pointer = data_->data.Get();
    return mojo::internal::Deserialize<::autofill::mojom::FormDataDataView>(
        pointer, output, context_);
  }
  inline void GetSignatureDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSignature(UserType* output) {
    auto* pointer = data_->signature.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetFieldsDataView(
      mojo::ArrayDataView<FormFieldDataPredictionsDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFields(UserType* output) {
    auto* pointer = data_->fields.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::autofill::mojom::FormFieldDataPredictionsDataView>>(
        pointer, output, context_);
  }
 private:
  internal::FormDataPredictions_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class PasswordAndRealmDataView {
 public:
  PasswordAndRealmDataView() {}

  PasswordAndRealmDataView(
      internal::PasswordAndRealm_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetPasswordDataView(
      ::mojo_base::mojom::String16DataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPassword(UserType* output) {
    auto* pointer = data_->password.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::String16DataView>(
        pointer, output, context_);
  }
  inline void GetRealmDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRealm(UserType* output) {
    auto* pointer = data_->realm.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::PasswordAndRealm_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class PasswordFormFillDataDataView {
 public:
  PasswordFormFillDataDataView() {}

  PasswordFormFillDataDataView(
      internal::PasswordFormFillData_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetNameDataView(
      ::mojo_base::mojom::String16DataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadName(UserType* output) {
    auto* pointer = data_->name.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::String16DataView>(
        pointer, output, context_);
  }
  inline void GetOriginDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadOrigin(UserType* output) {
    auto* pointer = data_->origin.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
  inline void GetActionDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadAction(UserType* output) {
    auto* pointer = data_->action.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
  inline void GetUsernameFieldDataView(
      FormFieldDataDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUsernameField(UserType* output) {
    auto* pointer = data_->username_field.Get();
    return mojo::internal::Deserialize<::autofill::mojom::FormFieldDataDataView>(
        pointer, output, context_);
  }
  inline void GetPasswordFieldDataView(
      FormFieldDataDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPasswordField(UserType* output) {
    auto* pointer = data_->password_field.Get();
    return mojo::internal::Deserialize<::autofill::mojom::FormFieldDataDataView>(
        pointer, output, context_);
  }
  inline void GetPreferredRealmDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPreferredRealm(UserType* output) {
    auto* pointer = data_->preferred_realm.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetAdditionalLoginsDataView(
      mojo::MapDataView<::mojo_base::mojom::String16DataView, PasswordAndRealmDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadAdditionalLogins(UserType* output) {
    auto* pointer = data_->additional_logins.Get();
    return mojo::internal::Deserialize<mojo::MapDataView<::mojo_base::mojom::String16DataView, ::autofill::mojom::PasswordAndRealmDataView>>(
        pointer, output, context_);
  }
  bool wait_for_username() const {
    return data_->wait_for_username;
  }
  bool is_possible_change_password_form() const {
    return data_->is_possible_change_password_form;
  }
 private:
  internal::PasswordFormFillData_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class PasswordFormGenerationDataDataView {
 public:
  PasswordFormGenerationDataDataView() {}

  PasswordFormGenerationDataDataView(
      internal::PasswordFormGenerationData_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint64_t form_signature() const {
    return data_->form_signature;
  }
  uint32_t field_signature() const {
    return data_->field_signature;
  }
  bool has_confirmation_field() const {
    return data_->has_confirmation_field;
  }
  uint32_t confirmation_field_signature() const {
    return data_->confirmation_field_signature;
  }
 private:
  internal::PasswordFormGenerationData_Data* data_ = nullptr;
};

class ValueElementPairDataView {
 public:
  ValueElementPairDataView() {}

  ValueElementPairDataView(
      internal::ValueElementPair_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetValueDataView(
      ::mojo_base::mojom::String16DataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadValue(UserType* output) {
    auto* pointer = data_->value.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::String16DataView>(
        pointer, output, context_);
  }
  inline void GetFieldNameDataView(
      ::mojo_base::mojom::String16DataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFieldName(UserType* output) {
    auto* pointer = data_->field_name.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::String16DataView>(
        pointer, output, context_);
  }
 private:
  internal::ValueElementPair_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class PasswordFormDataView {
 public:
  PasswordFormDataView() {}

  PasswordFormDataView(
      internal::PasswordForm_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadScheme(UserType* output) const {
    auto data_value = data_->scheme;
    return mojo::internal::Deserialize<::autofill::mojom::PasswordFormScheme>(
        data_value, output);
  }

  PasswordFormScheme scheme() const {
    return static_cast<PasswordFormScheme>(data_->scheme);
  }
  inline void GetSignonRealmDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSignonRealm(UserType* output) {
    auto* pointer = data_->signon_realm.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetOriginWithPathDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadOriginWithPath(UserType* output) {
    auto* pointer = data_->origin_with_path.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
  inline void GetActionDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadAction(UserType* output) {
    auto* pointer = data_->action.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
  inline void GetAffiliatedWebRealmDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadAffiliatedWebRealm(UserType* output) {
    auto* pointer = data_->affiliated_web_realm.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetSubmitElementDataView(
      ::mojo_base::mojom::String16DataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSubmitElement(UserType* output) {
    auto* pointer = data_->submit_element.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::String16DataView>(
        pointer, output, context_);
  }
  inline void GetUsernameElementDataView(
      ::mojo_base::mojom::String16DataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUsernameElement(UserType* output) {
    auto* pointer = data_->username_element.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::String16DataView>(
        pointer, output, context_);
  }
  bool username_marked_by_site() const {
    return data_->username_marked_by_site;
  }
  inline void GetUsernameValueDataView(
      ::mojo_base::mojom::String16DataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUsernameValue(UserType* output) {
    auto* pointer = data_->username_value.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::String16DataView>(
        pointer, output, context_);
  }
  inline void GetOtherPossibleUsernamesDataView(
      mojo::ArrayDataView<ValueElementPairDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadOtherPossibleUsernames(UserType* output) {
    auto* pointer = data_->other_possible_usernames.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::autofill::mojom::ValueElementPairDataView>>(
        pointer, output, context_);
  }
  inline void GetAllPossiblePasswordsDataView(
      mojo::ArrayDataView<ValueElementPairDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadAllPossiblePasswords(UserType* output) {
    auto* pointer = data_->all_possible_passwords.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::autofill::mojom::ValueElementPairDataView>>(
        pointer, output, context_);
  }
  bool form_has_autofilled_value() const {
    return data_->form_has_autofilled_value;
  }
  inline void GetPasswordElementDataView(
      ::mojo_base::mojom::String16DataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPasswordElement(UserType* output) {
    auto* pointer = data_->password_element.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::String16DataView>(
        pointer, output, context_);
  }
  inline void GetPasswordValueDataView(
      ::mojo_base::mojom::String16DataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPasswordValue(UserType* output) {
    auto* pointer = data_->password_value.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::String16DataView>(
        pointer, output, context_);
  }
  bool password_value_is_default() const {
    return data_->password_value_is_default;
  }
  inline void GetNewPasswordElementDataView(
      ::mojo_base::mojom::String16DataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadNewPasswordElement(UserType* output) {
    auto* pointer = data_->new_password_element.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::String16DataView>(
        pointer, output, context_);
  }
  inline void GetNewPasswordValueDataView(
      ::mojo_base::mojom::String16DataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadNewPasswordValue(UserType* output) {
    auto* pointer = data_->new_password_value.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::String16DataView>(
        pointer, output, context_);
  }
  bool new_password_value_is_default() const {
    return data_->new_password_value_is_default;
  }
  bool new_password_marked_by_site() const {
    return data_->new_password_marked_by_site;
  }
  inline void GetConfirmationPasswordElementDataView(
      ::mojo_base::mojom::String16DataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadConfirmationPasswordElement(UserType* output) {
    auto* pointer = data_->confirmation_password_element.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::String16DataView>(
        pointer, output, context_);
  }
  bool preferred() const {
    return data_->preferred;
  }
  inline void GetDateCreatedDataView(
      ::mojo_base::mojom::TimeDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDateCreated(UserType* output) {
    auto* pointer = data_->date_created.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeDataView>(
        pointer, output, context_);
  }
  inline void GetDateSyncedDataView(
      ::mojo_base::mojom::TimeDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDateSynced(UserType* output) {
    auto* pointer = data_->date_synced.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeDataView>(
        pointer, output, context_);
  }
  bool blacklisted_by_user() const {
    return data_->blacklisted_by_user;
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadType(UserType* output) const {
    auto data_value = data_->type;
    return mojo::internal::Deserialize<::autofill::mojom::PasswordFormType>(
        data_value, output);
  }

  PasswordFormType type() const {
    return static_cast<PasswordFormType>(data_->type);
  }
  int32_t times_used() const {
    return data_->times_used;
  }
  inline void GetFormDataDataView(
      FormDataDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFormData(UserType* output) {
    auto* pointer = data_->form_data.Get();
    return mojo::internal::Deserialize<::autofill::mojom::FormDataDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadGenerationUploadStatus(UserType* output) const {
    auto data_value = data_->generation_upload_status;
    return mojo::internal::Deserialize<::autofill::mojom::GenerationUploadStatus>(
        data_value, output);
  }

  GenerationUploadStatus generation_upload_status() const {
    return static_cast<GenerationUploadStatus>(data_->generation_upload_status);
  }
  inline void GetDisplayNameDataView(
      ::mojo_base::mojom::String16DataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDisplayName(UserType* output) {
    auto* pointer = data_->display_name.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::String16DataView>(
        pointer, output, context_);
  }
  inline void GetIconUrlDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadIconUrl(UserType* output) {
    auto* pointer = data_->icon_url.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
  inline void GetFederationOriginDataView(
      ::url::mojom::OriginDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFederationOrigin(UserType* output) {
    auto* pointer = data_->federation_origin.Get();
    return mojo::internal::Deserialize<::url::mojom::OriginDataView>(
        pointer, output, context_);
  }
  bool skip_zero_click() const {
    return data_->skip_zero_click;
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadLayout(UserType* output) const {
    auto data_value = data_->layout;
    return mojo::internal::Deserialize<::autofill::mojom::PasswordFormLayout>(
        data_value, output);
  }

  PasswordFormLayout layout() const {
    return static_cast<PasswordFormLayout>(data_->layout);
  }
  bool was_parsed_using_autofill_predictions() const {
    return data_->was_parsed_using_autofill_predictions;
  }
  bool is_public_suffix_match() const {
    return data_->is_public_suffix_match;
  }
  bool is_affiliation_based_match() const {
    return data_->is_affiliation_based_match;
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSubmissionEvent(UserType* output) const {
    auto data_value = data_->submission_event;
    return mojo::internal::Deserialize<::autofill::mojom::PasswordFormSubmissionIndicatorEvent>(
        data_value, output);
  }

  PasswordFormSubmissionIndicatorEvent submission_event() const {
    return static_cast<PasswordFormSubmissionIndicatorEvent>(data_->submission_event);
  }
  bool only_for_fallback_saving() const {
    return data_->only_for_fallback_saving;
  }
 private:
  internal::PasswordForm_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class PasswordFormFieldPredictionMapDataView {
 public:
  PasswordFormFieldPredictionMapDataView() {}

  PasswordFormFieldPredictionMapDataView(
      internal::PasswordFormFieldPredictionMap_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetKeysDataView(
      mojo::ArrayDataView<FormFieldDataDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadKeys(UserType* output) {
    auto* pointer = data_->keys.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::autofill::mojom::FormFieldDataDataView>>(
        pointer, output, context_);
  }
  inline void GetValuesDataView(
      mojo::ArrayDataView<PasswordFormFieldPredictionType>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadValues(UserType* output) {
    auto* pointer = data_->values.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::autofill::mojom::PasswordFormFieldPredictionType>>(
        pointer, output, context_);
  }
 private:
  internal::PasswordFormFieldPredictionMap_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class FormsPredictionsMapDataView {
 public:
  FormsPredictionsMapDataView() {}

  FormsPredictionsMapDataView(
      internal::FormsPredictionsMap_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetKeysDataView(
      mojo::ArrayDataView<FormDataDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadKeys(UserType* output) {
    auto* pointer = data_->keys.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::autofill::mojom::FormDataDataView>>(
        pointer, output, context_);
  }
  inline void GetValuesDataView(
      mojo::ArrayDataView<PasswordFormFieldPredictionMapDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadValues(UserType* output) {
    auto* pointer = data_->values.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::autofill::mojom::PasswordFormFieldPredictionMapDataView>>(
        pointer, output, context_);
  }
 private:
  internal::FormsPredictionsMap_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace autofill

namespace std {

template <>
struct hash<::autofill::mojom::CheckStatus>
    : public mojo::internal::EnumHashImpl<::autofill::mojom::CheckStatus> {};

template <>
struct hash<::autofill::mojom::RoleAttribute>
    : public mojo::internal::EnumHashImpl<::autofill::mojom::RoleAttribute> {};

template <>
struct hash<::autofill::mojom::GenerationUploadStatus>
    : public mojo::internal::EnumHashImpl<::autofill::mojom::GenerationUploadStatus> {};

template <>
struct hash<::autofill::mojom::PasswordFormLayout>
    : public mojo::internal::EnumHashImpl<::autofill::mojom::PasswordFormLayout> {};

template <>
struct hash<::autofill::mojom::PasswordFormType>
    : public mojo::internal::EnumHashImpl<::autofill::mojom::PasswordFormType> {};

template <>
struct hash<::autofill::mojom::PasswordFormScheme>
    : public mojo::internal::EnumHashImpl<::autofill::mojom::PasswordFormScheme> {};

template <>
struct hash<::autofill::mojom::PasswordFormSubmissionIndicatorEvent>
    : public mojo::internal::EnumHashImpl<::autofill::mojom::PasswordFormSubmissionIndicatorEvent> {};

template <>
struct hash<::autofill::mojom::PasswordFormFieldPredictionType>
    : public mojo::internal::EnumHashImpl<::autofill::mojom::PasswordFormFieldPredictionType> {};

template <>
struct hash<::autofill::mojom::SubmissionSource>
    : public mojo::internal::EnumHashImpl<::autofill::mojom::SubmissionSource> {};

template <>
struct hash<::autofill::mojom::LabelSource>
    : public mojo::internal::EnumHashImpl<::autofill::mojom::LabelSource> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::autofill::mojom::CheckStatus, ::autofill::mojom::CheckStatus> {
  static ::autofill::mojom::CheckStatus ToMojom(::autofill::mojom::CheckStatus input) { return input; }
  static bool FromMojom(::autofill::mojom::CheckStatus input, ::autofill::mojom::CheckStatus* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::autofill::mojom::CheckStatus, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::autofill::mojom::CheckStatus, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::autofill::mojom::CheckStatus>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::autofill::mojom::RoleAttribute, ::autofill::mojom::RoleAttribute> {
  static ::autofill::mojom::RoleAttribute ToMojom(::autofill::mojom::RoleAttribute input) { return input; }
  static bool FromMojom(::autofill::mojom::RoleAttribute input, ::autofill::mojom::RoleAttribute* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::autofill::mojom::RoleAttribute, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::autofill::mojom::RoleAttribute, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::autofill::mojom::RoleAttribute>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::autofill::mojom::GenerationUploadStatus, ::autofill::mojom::GenerationUploadStatus> {
  static ::autofill::mojom::GenerationUploadStatus ToMojom(::autofill::mojom::GenerationUploadStatus input) { return input; }
  static bool FromMojom(::autofill::mojom::GenerationUploadStatus input, ::autofill::mojom::GenerationUploadStatus* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::autofill::mojom::GenerationUploadStatus, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::autofill::mojom::GenerationUploadStatus, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::autofill::mojom::GenerationUploadStatus>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::autofill::mojom::PasswordFormLayout, ::autofill::mojom::PasswordFormLayout> {
  static ::autofill::mojom::PasswordFormLayout ToMojom(::autofill::mojom::PasswordFormLayout input) { return input; }
  static bool FromMojom(::autofill::mojom::PasswordFormLayout input, ::autofill::mojom::PasswordFormLayout* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::autofill::mojom::PasswordFormLayout, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::autofill::mojom::PasswordFormLayout, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::autofill::mojom::PasswordFormLayout>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::autofill::mojom::PasswordFormType, ::autofill::mojom::PasswordFormType> {
  static ::autofill::mojom::PasswordFormType ToMojom(::autofill::mojom::PasswordFormType input) { return input; }
  static bool FromMojom(::autofill::mojom::PasswordFormType input, ::autofill::mojom::PasswordFormType* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::autofill::mojom::PasswordFormType, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::autofill::mojom::PasswordFormType, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::autofill::mojom::PasswordFormType>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::autofill::mojom::PasswordFormScheme, ::autofill::mojom::PasswordFormScheme> {
  static ::autofill::mojom::PasswordFormScheme ToMojom(::autofill::mojom::PasswordFormScheme input) { return input; }
  static bool FromMojom(::autofill::mojom::PasswordFormScheme input, ::autofill::mojom::PasswordFormScheme* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::autofill::mojom::PasswordFormScheme, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::autofill::mojom::PasswordFormScheme, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::autofill::mojom::PasswordFormScheme>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::autofill::mojom::PasswordFormSubmissionIndicatorEvent, ::autofill::mojom::PasswordFormSubmissionIndicatorEvent> {
  static ::autofill::mojom::PasswordFormSubmissionIndicatorEvent ToMojom(::autofill::mojom::PasswordFormSubmissionIndicatorEvent input) { return input; }
  static bool FromMojom(::autofill::mojom::PasswordFormSubmissionIndicatorEvent input, ::autofill::mojom::PasswordFormSubmissionIndicatorEvent* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::autofill::mojom::PasswordFormSubmissionIndicatorEvent, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::autofill::mojom::PasswordFormSubmissionIndicatorEvent, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::autofill::mojom::PasswordFormSubmissionIndicatorEvent>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::autofill::mojom::PasswordFormFieldPredictionType, ::autofill::mojom::PasswordFormFieldPredictionType> {
  static ::autofill::mojom::PasswordFormFieldPredictionType ToMojom(::autofill::mojom::PasswordFormFieldPredictionType input) { return input; }
  static bool FromMojom(::autofill::mojom::PasswordFormFieldPredictionType input, ::autofill::mojom::PasswordFormFieldPredictionType* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::autofill::mojom::PasswordFormFieldPredictionType, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::autofill::mojom::PasswordFormFieldPredictionType, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::autofill::mojom::PasswordFormFieldPredictionType>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::autofill::mojom::SubmissionSource, ::autofill::mojom::SubmissionSource> {
  static ::autofill::mojom::SubmissionSource ToMojom(::autofill::mojom::SubmissionSource input) { return input; }
  static bool FromMojom(::autofill::mojom::SubmissionSource input, ::autofill::mojom::SubmissionSource* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::autofill::mojom::SubmissionSource, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::autofill::mojom::SubmissionSource, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::autofill::mojom::SubmissionSource>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::autofill::mojom::LabelSource, ::autofill::mojom::LabelSource> {
  static ::autofill::mojom::LabelSource ToMojom(::autofill::mojom::LabelSource input) { return input; }
  static bool FromMojom(::autofill::mojom::LabelSource input, ::autofill::mojom::LabelSource* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::autofill::mojom::LabelSource, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::autofill::mojom::LabelSource, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::autofill::mojom::LabelSource>(input), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::autofill::mojom::FormFieldDataDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::autofill::mojom::FormFieldDataDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::autofill::mojom::internal::FormFieldData_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    decltype(CallWithContext(Traits::label, input, custom_context)) in_label = CallWithContext(Traits::label, input, custom_context);
    typename decltype((*output)->label)::BaseType::BufferWriter
        label_writer;
    mojo::internal::Serialize<::mojo_base::mojom::String16DataView>(
        in_label, buffer, &label_writer, context);
    (*output)->label.Set(
        label_writer.is_null() ? nullptr : label_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->label.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null label in FormFieldData struct");
    decltype(CallWithContext(Traits::name, input, custom_context)) in_name = CallWithContext(Traits::name, input, custom_context);
    typename decltype((*output)->name)::BaseType::BufferWriter
        name_writer;
    mojo::internal::Serialize<::mojo_base::mojom::String16DataView>(
        in_name, buffer, &name_writer, context);
    (*output)->name.Set(
        name_writer.is_null() ? nullptr : name_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->name.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null name in FormFieldData struct");
    decltype(CallWithContext(Traits::id, input, custom_context)) in_id = CallWithContext(Traits::id, input, custom_context);
    typename decltype((*output)->id)::BaseType::BufferWriter
        id_writer;
    mojo::internal::Serialize<::mojo_base::mojom::String16DataView>(
        in_id, buffer, &id_writer, context);
    (*output)->id.Set(
        id_writer.is_null() ? nullptr : id_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->id.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null id in FormFieldData struct");
    decltype(CallWithContext(Traits::value, input, custom_context)) in_value = CallWithContext(Traits::value, input, custom_context);
    typename decltype((*output)->value)::BaseType::BufferWriter
        value_writer;
    mojo::internal::Serialize<::mojo_base::mojom::String16DataView>(
        in_value, buffer, &value_writer, context);
    (*output)->value.Set(
        value_writer.is_null() ? nullptr : value_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->value.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null value in FormFieldData struct");
    decltype(CallWithContext(Traits::form_control_type, input, custom_context)) in_form_control_type = CallWithContext(Traits::form_control_type, input, custom_context);
    typename decltype((*output)->form_control_type)::BaseType::BufferWriter
        form_control_type_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_form_control_type, buffer, &form_control_type_writer, context);
    (*output)->form_control_type.Set(
        form_control_type_writer.is_null() ? nullptr : form_control_type_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->form_control_type.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null form_control_type in FormFieldData struct");
    decltype(CallWithContext(Traits::autocomplete_attribute, input, custom_context)) in_autocomplete_attribute = CallWithContext(Traits::autocomplete_attribute, input, custom_context);
    typename decltype((*output)->autocomplete_attribute)::BaseType::BufferWriter
        autocomplete_attribute_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_autocomplete_attribute, buffer, &autocomplete_attribute_writer, context);
    (*output)->autocomplete_attribute.Set(
        autocomplete_attribute_writer.is_null() ? nullptr : autocomplete_attribute_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->autocomplete_attribute.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null autocomplete_attribute in FormFieldData struct");
    decltype(CallWithContext(Traits::placeholder, input, custom_context)) in_placeholder = CallWithContext(Traits::placeholder, input, custom_context);
    typename decltype((*output)->placeholder)::BaseType::BufferWriter
        placeholder_writer;
    mojo::internal::Serialize<::mojo_base::mojom::String16DataView>(
        in_placeholder, buffer, &placeholder_writer, context);
    (*output)->placeholder.Set(
        placeholder_writer.is_null() ? nullptr : placeholder_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->placeholder.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null placeholder in FormFieldData struct");
    decltype(CallWithContext(Traits::css_classes, input, custom_context)) in_css_classes = CallWithContext(Traits::css_classes, input, custom_context);
    typename decltype((*output)->css_classes)::BaseType::BufferWriter
        css_classes_writer;
    mojo::internal::Serialize<::mojo_base::mojom::String16DataView>(
        in_css_classes, buffer, &css_classes_writer, context);
    (*output)->css_classes.Set(
        css_classes_writer.is_null() ? nullptr : css_classes_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->css_classes.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null css_classes in FormFieldData struct");
    (*output)->unique_renderer_id = CallWithContext(Traits::unique_renderer_id, input, custom_context);
    (*output)->properties_mask = CallWithContext(Traits::properties_mask, input, custom_context);
    (*output)->max_length = CallWithContext(Traits::max_length, input, custom_context);
    (*output)->is_autofilled = CallWithContext(Traits::is_autofilled, input, custom_context);
    decltype(CallWithContext(Traits::section, input, custom_context)) in_section = CallWithContext(Traits::section, input, custom_context);
    typename decltype((*output)->section)::BaseType::BufferWriter
        section_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_section, buffer, &section_writer, context);
    (*output)->section.Set(
        section_writer.is_null() ? nullptr : section_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->section.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null section in FormFieldData struct");
    mojo::internal::Serialize<::autofill::mojom::CheckStatus>(
        CallWithContext(Traits::check_status, input, custom_context), &(*output)->check_status);
    (*output)->is_focusable = CallWithContext(Traits::is_focusable, input, custom_context);
    (*output)->should_autocomplete = CallWithContext(Traits::should_autocomplete, input, custom_context);
    mojo::internal::Serialize<::autofill::mojom::RoleAttribute>(
        CallWithContext(Traits::role, input, custom_context), &(*output)->role);
    mojo::internal::Serialize<::mojo_base::mojom::TextDirection>(
        CallWithContext(Traits::text_direction, input, custom_context), &(*output)->text_direction);
    (*output)->is_enabled = CallWithContext(Traits::is_enabled, input, custom_context);
    (*output)->is_readonly = CallWithContext(Traits::is_readonly, input, custom_context);
    (*output)->is_default = CallWithContext(Traits::is_default, input, custom_context);
    decltype(CallWithContext(Traits::typed_value, input, custom_context)) in_typed_value = CallWithContext(Traits::typed_value, input, custom_context);
    typename decltype((*output)->typed_value)::BaseType::BufferWriter
        typed_value_writer;
    mojo::internal::Serialize<::mojo_base::mojom::String16DataView>(
        in_typed_value, buffer, &typed_value_writer, context);
    (*output)->typed_value.Set(
        typed_value_writer.is_null() ? nullptr : typed_value_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->typed_value.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null typed_value in FormFieldData struct");
    decltype(CallWithContext(Traits::option_values, input, custom_context)) in_option_values = CallWithContext(Traits::option_values, input, custom_context);
    typename decltype((*output)->option_values)::BaseType::BufferWriter
        option_values_writer;
    const mojo::internal::ContainerValidateParams option_values_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::mojo_base::mojom::String16DataView>>(
        in_option_values, buffer, &option_values_writer, &option_values_validate_params,
        context);
    (*output)->option_values.Set(
        option_values_writer.is_null() ? nullptr : option_values_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->option_values.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null option_values in FormFieldData struct");
    decltype(CallWithContext(Traits::option_contents, input, custom_context)) in_option_contents = CallWithContext(Traits::option_contents, input, custom_context);
    typename decltype((*output)->option_contents)::BaseType::BufferWriter
        option_contents_writer;
    const mojo::internal::ContainerValidateParams option_contents_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::mojo_base::mojom::String16DataView>>(
        in_option_contents, buffer, &option_contents_writer, &option_contents_validate_params,
        context);
    (*output)->option_contents.Set(
        option_contents_writer.is_null() ? nullptr : option_contents_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->option_contents.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null option_contents in FormFieldData struct");
    mojo::internal::Serialize<::autofill::mojom::LabelSource>(
        CallWithContext(Traits::label_source, input, custom_context), &(*output)->label_source);
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::autofill::mojom::internal::FormFieldData_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::autofill::mojom::FormFieldDataDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::autofill::mojom::FormDataDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::autofill::mojom::FormDataDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::autofill::mojom::internal::FormData_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    decltype(CallWithContext(Traits::name, input, custom_context)) in_name = CallWithContext(Traits::name, input, custom_context);
    typename decltype((*output)->name)::BaseType::BufferWriter
        name_writer;
    mojo::internal::Serialize<::mojo_base::mojom::String16DataView>(
        in_name, buffer, &name_writer, context);
    (*output)->name.Set(
        name_writer.is_null() ? nullptr : name_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->name.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null name in FormData struct");
    decltype(CallWithContext(Traits::origin, input, custom_context)) in_origin = CallWithContext(Traits::origin, input, custom_context);
    typename decltype((*output)->origin)::BaseType::BufferWriter
        origin_writer;
    mojo::internal::Serialize<::url::mojom::UrlDataView>(
        in_origin, buffer, &origin_writer, context);
    (*output)->origin.Set(
        origin_writer.is_null() ? nullptr : origin_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->origin.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null origin in FormData struct");
    decltype(CallWithContext(Traits::action, input, custom_context)) in_action = CallWithContext(Traits::action, input, custom_context);
    typename decltype((*output)->action)::BaseType::BufferWriter
        action_writer;
    mojo::internal::Serialize<::url::mojom::UrlDataView>(
        in_action, buffer, &action_writer, context);
    (*output)->action.Set(
        action_writer.is_null() ? nullptr : action_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->action.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null action in FormData struct");
    decltype(CallWithContext(Traits::main_frame_origin, input, custom_context)) in_main_frame_origin = CallWithContext(Traits::main_frame_origin, input, custom_context);
    typename decltype((*output)->main_frame_origin)::BaseType::BufferWriter
        main_frame_origin_writer;
    mojo::internal::Serialize<::url::mojom::OriginDataView>(
        in_main_frame_origin, buffer, &main_frame_origin_writer, context);
    (*output)->main_frame_origin.Set(
        main_frame_origin_writer.is_null() ? nullptr : main_frame_origin_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->main_frame_origin.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null main_frame_origin in FormData struct");
    (*output)->is_form_tag = CallWithContext(Traits::is_form_tag, input, custom_context);
    (*output)->is_formless_checkout = CallWithContext(Traits::is_formless_checkout, input, custom_context);
    (*output)->unique_renderer_id = CallWithContext(Traits::unique_renderer_id, input, custom_context);
    decltype(CallWithContext(Traits::fields, input, custom_context)) in_fields = CallWithContext(Traits::fields, input, custom_context);
    typename decltype((*output)->fields)::BaseType::BufferWriter
        fields_writer;
    const mojo::internal::ContainerValidateParams fields_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::autofill::mojom::FormFieldDataDataView>>(
        in_fields, buffer, &fields_writer, &fields_validate_params,
        context);
    (*output)->fields.Set(
        fields_writer.is_null() ? nullptr : fields_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->fields.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null fields in FormData struct");
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::autofill::mojom::internal::FormData_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::autofill::mojom::FormDataDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::autofill::mojom::FormFieldDataPredictionsDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::autofill::mojom::FormFieldDataPredictionsDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::autofill::mojom::internal::FormFieldDataPredictions_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    decltype(CallWithContext(Traits::field, input, custom_context)) in_field = CallWithContext(Traits::field, input, custom_context);
    typename decltype((*output)->field)::BaseType::BufferWriter
        field_writer;
    mojo::internal::Serialize<::autofill::mojom::FormFieldDataDataView>(
        in_field, buffer, &field_writer, context);
    (*output)->field.Set(
        field_writer.is_null() ? nullptr : field_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->field.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null field in FormFieldDataPredictions struct");
    decltype(CallWithContext(Traits::signature, input, custom_context)) in_signature = CallWithContext(Traits::signature, input, custom_context);
    typename decltype((*output)->signature)::BaseType::BufferWriter
        signature_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_signature, buffer, &signature_writer, context);
    (*output)->signature.Set(
        signature_writer.is_null() ? nullptr : signature_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->signature.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null signature in FormFieldDataPredictions struct");
    decltype(CallWithContext(Traits::heuristic_type, input, custom_context)) in_heuristic_type = CallWithContext(Traits::heuristic_type, input, custom_context);
    typename decltype((*output)->heuristic_type)::BaseType::BufferWriter
        heuristic_type_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_heuristic_type, buffer, &heuristic_type_writer, context);
    (*output)->heuristic_type.Set(
        heuristic_type_writer.is_null() ? nullptr : heuristic_type_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->heuristic_type.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null heuristic_type in FormFieldDataPredictions struct");
    decltype(CallWithContext(Traits::server_type, input, custom_context)) in_server_type = CallWithContext(Traits::server_type, input, custom_context);
    typename decltype((*output)->server_type)::BaseType::BufferWriter
        server_type_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_server_type, buffer, &server_type_writer, context);
    (*output)->server_type.Set(
        server_type_writer.is_null() ? nullptr : server_type_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->server_type.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null server_type in FormFieldDataPredictions struct");
    decltype(CallWithContext(Traits::overall_type, input, custom_context)) in_overall_type = CallWithContext(Traits::overall_type, input, custom_context);
    typename decltype((*output)->overall_type)::BaseType::BufferWriter
        overall_type_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_overall_type, buffer, &overall_type_writer, context);
    (*output)->overall_type.Set(
        overall_type_writer.is_null() ? nullptr : overall_type_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->overall_type.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null overall_type in FormFieldDataPredictions struct");
    decltype(CallWithContext(Traits::parseable_name, input, custom_context)) in_parseable_name = CallWithContext(Traits::parseable_name, input, custom_context);
    typename decltype((*output)->parseable_name)::BaseType::BufferWriter
        parseable_name_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_parseable_name, buffer, &parseable_name_writer, context);
    (*output)->parseable_name.Set(
        parseable_name_writer.is_null() ? nullptr : parseable_name_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->parseable_name.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null parseable_name in FormFieldDataPredictions struct");
    decltype(CallWithContext(Traits::section, input, custom_context)) in_section = CallWithContext(Traits::section, input, custom_context);
    typename decltype((*output)->section)::BaseType::BufferWriter
        section_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_section, buffer, &section_writer, context);
    (*output)->section.Set(
        section_writer.is_null() ? nullptr : section_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->section.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null section in FormFieldDataPredictions struct");
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::autofill::mojom::internal::FormFieldDataPredictions_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::autofill::mojom::FormFieldDataPredictionsDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::autofill::mojom::FormDataPredictionsDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::autofill::mojom::FormDataPredictionsDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::autofill::mojom::internal::FormDataPredictions_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    decltype(CallWithContext(Traits::data, input, custom_context)) in_data = CallWithContext(Traits::data, input, custom_context);
    typename decltype((*output)->data)::BaseType::BufferWriter
        data_writer;
    mojo::internal::Serialize<::autofill::mojom::FormDataDataView>(
        in_data, buffer, &data_writer, context);
    (*output)->data.Set(
        data_writer.is_null() ? nullptr : data_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->data.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null data in FormDataPredictions struct");
    decltype(CallWithContext(Traits::signature, input, custom_context)) in_signature = CallWithContext(Traits::signature, input, custom_context);
    typename decltype((*output)->signature)::BaseType::BufferWriter
        signature_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_signature, buffer, &signature_writer, context);
    (*output)->signature.Set(
        signature_writer.is_null() ? nullptr : signature_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->signature.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null signature in FormDataPredictions struct");
    decltype(CallWithContext(Traits::fields, input, custom_context)) in_fields = CallWithContext(Traits::fields, input, custom_context);
    typename decltype((*output)->fields)::BaseType::BufferWriter
        fields_writer;
    const mojo::internal::ContainerValidateParams fields_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::autofill::mojom::FormFieldDataPredictionsDataView>>(
        in_fields, buffer, &fields_writer, &fields_validate_params,
        context);
    (*output)->fields.Set(
        fields_writer.is_null() ? nullptr : fields_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->fields.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null fields in FormDataPredictions struct");
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::autofill::mojom::internal::FormDataPredictions_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::autofill::mojom::FormDataPredictionsDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::autofill::mojom::PasswordAndRealmDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::autofill::mojom::PasswordAndRealmDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::autofill::mojom::internal::PasswordAndRealm_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    decltype(CallWithContext(Traits::password, input, custom_context)) in_password = CallWithContext(Traits::password, input, custom_context);
    typename decltype((*output)->password)::BaseType::BufferWriter
        password_writer;
    mojo::internal::Serialize<::mojo_base::mojom::String16DataView>(
        in_password, buffer, &password_writer, context);
    (*output)->password.Set(
        password_writer.is_null() ? nullptr : password_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->password.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null password in PasswordAndRealm struct");
    decltype(CallWithContext(Traits::realm, input, custom_context)) in_realm = CallWithContext(Traits::realm, input, custom_context);
    typename decltype((*output)->realm)::BaseType::BufferWriter
        realm_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_realm, buffer, &realm_writer, context);
    (*output)->realm.Set(
        realm_writer.is_null() ? nullptr : realm_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->realm.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null realm in PasswordAndRealm struct");
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::autofill::mojom::internal::PasswordAndRealm_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::autofill::mojom::PasswordAndRealmDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::autofill::mojom::PasswordFormFillDataDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::autofill::mojom::PasswordFormFillDataDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::autofill::mojom::internal::PasswordFormFillData_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    decltype(CallWithContext(Traits::name, input, custom_context)) in_name = CallWithContext(Traits::name, input, custom_context);
    typename decltype((*output)->name)::BaseType::BufferWriter
        name_writer;
    mojo::internal::Serialize<::mojo_base::mojom::String16DataView>(
        in_name, buffer, &name_writer, context);
    (*output)->name.Set(
        name_writer.is_null() ? nullptr : name_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->name.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null name in PasswordFormFillData struct");
    decltype(CallWithContext(Traits::origin, input, custom_context)) in_origin = CallWithContext(Traits::origin, input, custom_context);
    typename decltype((*output)->origin)::BaseType::BufferWriter
        origin_writer;
    mojo::internal::Serialize<::url::mojom::UrlDataView>(
        in_origin, buffer, &origin_writer, context);
    (*output)->origin.Set(
        origin_writer.is_null() ? nullptr : origin_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->origin.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null origin in PasswordFormFillData struct");
    decltype(CallWithContext(Traits::action, input, custom_context)) in_action = CallWithContext(Traits::action, input, custom_context);
    typename decltype((*output)->action)::BaseType::BufferWriter
        action_writer;
    mojo::internal::Serialize<::url::mojom::UrlDataView>(
        in_action, buffer, &action_writer, context);
    (*output)->action.Set(
        action_writer.is_null() ? nullptr : action_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->action.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null action in PasswordFormFillData struct");
    decltype(CallWithContext(Traits::username_field, input, custom_context)) in_username_field = CallWithContext(Traits::username_field, input, custom_context);
    typename decltype((*output)->username_field)::BaseType::BufferWriter
        username_field_writer;
    mojo::internal::Serialize<::autofill::mojom::FormFieldDataDataView>(
        in_username_field, buffer, &username_field_writer, context);
    (*output)->username_field.Set(
        username_field_writer.is_null() ? nullptr : username_field_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->username_field.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null username_field in PasswordFormFillData struct");
    decltype(CallWithContext(Traits::password_field, input, custom_context)) in_password_field = CallWithContext(Traits::password_field, input, custom_context);
    typename decltype((*output)->password_field)::BaseType::BufferWriter
        password_field_writer;
    mojo::internal::Serialize<::autofill::mojom::FormFieldDataDataView>(
        in_password_field, buffer, &password_field_writer, context);
    (*output)->password_field.Set(
        password_field_writer.is_null() ? nullptr : password_field_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->password_field.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null password_field in PasswordFormFillData struct");
    decltype(CallWithContext(Traits::preferred_realm, input, custom_context)) in_preferred_realm = CallWithContext(Traits::preferred_realm, input, custom_context);
    typename decltype((*output)->preferred_realm)::BaseType::BufferWriter
        preferred_realm_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_preferred_realm, buffer, &preferred_realm_writer, context);
    (*output)->preferred_realm.Set(
        preferred_realm_writer.is_null() ? nullptr : preferred_realm_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->preferred_realm.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null preferred_realm in PasswordFormFillData struct");
    decltype(CallWithContext(Traits::additional_logins, input, custom_context)) in_additional_logins = CallWithContext(Traits::additional_logins, input, custom_context);
    typename decltype((*output)->additional_logins)::BaseType::BufferWriter
        additional_logins_writer;
    const mojo::internal::ContainerValidateParams additional_logins_validate_params(
        new mojo::internal::ContainerValidateParams(0, false, nullptr), new mojo::internal::ContainerValidateParams(0, false, nullptr));
    mojo::internal::Serialize<mojo::MapDataView<::mojo_base::mojom::String16DataView, ::autofill::mojom::PasswordAndRealmDataView>>(
        in_additional_logins, buffer, &additional_logins_writer, &additional_logins_validate_params,
        context);
    (*output)->additional_logins.Set(
        additional_logins_writer.is_null() ? nullptr : additional_logins_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->additional_logins.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null additional_logins in PasswordFormFillData struct");
    (*output)->wait_for_username = CallWithContext(Traits::wait_for_username, input, custom_context);
    (*output)->is_possible_change_password_form = CallWithContext(Traits::is_possible_change_password_form, input, custom_context);
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::autofill::mojom::internal::PasswordFormFillData_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::autofill::mojom::PasswordFormFillDataDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::autofill::mojom::PasswordFormGenerationDataDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::autofill::mojom::PasswordFormGenerationDataDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::autofill::mojom::internal::PasswordFormGenerationData_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    (*output)->form_signature = CallWithContext(Traits::form_signature, input, custom_context);
    (*output)->field_signature = CallWithContext(Traits::field_signature, input, custom_context);
    (*output)->has_confirmation_field = CallWithContext(Traits::has_confirmation_field, input, custom_context);
    (*output)->confirmation_field_signature = CallWithContext(Traits::confirmation_field_signature, input, custom_context);
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::autofill::mojom::internal::PasswordFormGenerationData_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::autofill::mojom::PasswordFormGenerationDataDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::autofill::mojom::ValueElementPairDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::autofill::mojom::ValueElementPairDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::autofill::mojom::internal::ValueElementPair_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    decltype(CallWithContext(Traits::value, input, custom_context)) in_value = CallWithContext(Traits::value, input, custom_context);
    typename decltype((*output)->value)::BaseType::BufferWriter
        value_writer;
    mojo::internal::Serialize<::mojo_base::mojom::String16DataView>(
        in_value, buffer, &value_writer, context);
    (*output)->value.Set(
        value_writer.is_null() ? nullptr : value_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->value.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null value in ValueElementPair struct");
    decltype(CallWithContext(Traits::field_name, input, custom_context)) in_field_name = CallWithContext(Traits::field_name, input, custom_context);
    typename decltype((*output)->field_name)::BaseType::BufferWriter
        field_name_writer;
    mojo::internal::Serialize<::mojo_base::mojom::String16DataView>(
        in_field_name, buffer, &field_name_writer, context);
    (*output)->field_name.Set(
        field_name_writer.is_null() ? nullptr : field_name_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->field_name.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null field_name in ValueElementPair struct");
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::autofill::mojom::internal::ValueElementPair_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::autofill::mojom::ValueElementPairDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::autofill::mojom::PasswordFormDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::autofill::mojom::PasswordFormDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::autofill::mojom::internal::PasswordForm_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    mojo::internal::Serialize<::autofill::mojom::PasswordFormScheme>(
        CallWithContext(Traits::scheme, input, custom_context), &(*output)->scheme);
    decltype(CallWithContext(Traits::signon_realm, input, custom_context)) in_signon_realm = CallWithContext(Traits::signon_realm, input, custom_context);
    typename decltype((*output)->signon_realm)::BaseType::BufferWriter
        signon_realm_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_signon_realm, buffer, &signon_realm_writer, context);
    (*output)->signon_realm.Set(
        signon_realm_writer.is_null() ? nullptr : signon_realm_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->signon_realm.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null signon_realm in PasswordForm struct");
    decltype(CallWithContext(Traits::origin_with_path, input, custom_context)) in_origin_with_path = CallWithContext(Traits::origin_with_path, input, custom_context);
    typename decltype((*output)->origin_with_path)::BaseType::BufferWriter
        origin_with_path_writer;
    mojo::internal::Serialize<::url::mojom::UrlDataView>(
        in_origin_with_path, buffer, &origin_with_path_writer, context);
    (*output)->origin_with_path.Set(
        origin_with_path_writer.is_null() ? nullptr : origin_with_path_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->origin_with_path.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null origin_with_path in PasswordForm struct");
    decltype(CallWithContext(Traits::action, input, custom_context)) in_action = CallWithContext(Traits::action, input, custom_context);
    typename decltype((*output)->action)::BaseType::BufferWriter
        action_writer;
    mojo::internal::Serialize<::url::mojom::UrlDataView>(
        in_action, buffer, &action_writer, context);
    (*output)->action.Set(
        action_writer.is_null() ? nullptr : action_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->action.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null action in PasswordForm struct");
    decltype(CallWithContext(Traits::affiliated_web_realm, input, custom_context)) in_affiliated_web_realm = CallWithContext(Traits::affiliated_web_realm, input, custom_context);
    typename decltype((*output)->affiliated_web_realm)::BaseType::BufferWriter
        affiliated_web_realm_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_affiliated_web_realm, buffer, &affiliated_web_realm_writer, context);
    (*output)->affiliated_web_realm.Set(
        affiliated_web_realm_writer.is_null() ? nullptr : affiliated_web_realm_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->affiliated_web_realm.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null affiliated_web_realm in PasswordForm struct");
    decltype(CallWithContext(Traits::submit_element, input, custom_context)) in_submit_element = CallWithContext(Traits::submit_element, input, custom_context);
    typename decltype((*output)->submit_element)::BaseType::BufferWriter
        submit_element_writer;
    mojo::internal::Serialize<::mojo_base::mojom::String16DataView>(
        in_submit_element, buffer, &submit_element_writer, context);
    (*output)->submit_element.Set(
        submit_element_writer.is_null() ? nullptr : submit_element_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->submit_element.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null submit_element in PasswordForm struct");
    decltype(CallWithContext(Traits::username_element, input, custom_context)) in_username_element = CallWithContext(Traits::username_element, input, custom_context);
    typename decltype((*output)->username_element)::BaseType::BufferWriter
        username_element_writer;
    mojo::internal::Serialize<::mojo_base::mojom::String16DataView>(
        in_username_element, buffer, &username_element_writer, context);
    (*output)->username_element.Set(
        username_element_writer.is_null() ? nullptr : username_element_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->username_element.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null username_element in PasswordForm struct");
    (*output)->username_marked_by_site = CallWithContext(Traits::username_marked_by_site, input, custom_context);
    decltype(CallWithContext(Traits::username_value, input, custom_context)) in_username_value = CallWithContext(Traits::username_value, input, custom_context);
    typename decltype((*output)->username_value)::BaseType::BufferWriter
        username_value_writer;
    mojo::internal::Serialize<::mojo_base::mojom::String16DataView>(
        in_username_value, buffer, &username_value_writer, context);
    (*output)->username_value.Set(
        username_value_writer.is_null() ? nullptr : username_value_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->username_value.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null username_value in PasswordForm struct");
    decltype(CallWithContext(Traits::other_possible_usernames, input, custom_context)) in_other_possible_usernames = CallWithContext(Traits::other_possible_usernames, input, custom_context);
    typename decltype((*output)->other_possible_usernames)::BaseType::BufferWriter
        other_possible_usernames_writer;
    const mojo::internal::ContainerValidateParams other_possible_usernames_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::autofill::mojom::ValueElementPairDataView>>(
        in_other_possible_usernames, buffer, &other_possible_usernames_writer, &other_possible_usernames_validate_params,
        context);
    (*output)->other_possible_usernames.Set(
        other_possible_usernames_writer.is_null() ? nullptr : other_possible_usernames_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->other_possible_usernames.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null other_possible_usernames in PasswordForm struct");
    decltype(CallWithContext(Traits::all_possible_passwords, input, custom_context)) in_all_possible_passwords = CallWithContext(Traits::all_possible_passwords, input, custom_context);
    typename decltype((*output)->all_possible_passwords)::BaseType::BufferWriter
        all_possible_passwords_writer;
    const mojo::internal::ContainerValidateParams all_possible_passwords_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::autofill::mojom::ValueElementPairDataView>>(
        in_all_possible_passwords, buffer, &all_possible_passwords_writer, &all_possible_passwords_validate_params,
        context);
    (*output)->all_possible_passwords.Set(
        all_possible_passwords_writer.is_null() ? nullptr : all_possible_passwords_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->all_possible_passwords.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null all_possible_passwords in PasswordForm struct");
    (*output)->form_has_autofilled_value = CallWithContext(Traits::form_has_autofilled_value, input, custom_context);
    decltype(CallWithContext(Traits::password_element, input, custom_context)) in_password_element = CallWithContext(Traits::password_element, input, custom_context);
    typename decltype((*output)->password_element)::BaseType::BufferWriter
        password_element_writer;
    mojo::internal::Serialize<::mojo_base::mojom::String16DataView>(
        in_password_element, buffer, &password_element_writer, context);
    (*output)->password_element.Set(
        password_element_writer.is_null() ? nullptr : password_element_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->password_element.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null password_element in PasswordForm struct");
    decltype(CallWithContext(Traits::password_value, input, custom_context)) in_password_value = CallWithContext(Traits::password_value, input, custom_context);
    typename decltype((*output)->password_value)::BaseType::BufferWriter
        password_value_writer;
    mojo::internal::Serialize<::mojo_base::mojom::String16DataView>(
        in_password_value, buffer, &password_value_writer, context);
    (*output)->password_value.Set(
        password_value_writer.is_null() ? nullptr : password_value_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->password_value.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null password_value in PasswordForm struct");
    (*output)->password_value_is_default = CallWithContext(Traits::password_value_is_default, input, custom_context);
    decltype(CallWithContext(Traits::new_password_element, input, custom_context)) in_new_password_element = CallWithContext(Traits::new_password_element, input, custom_context);
    typename decltype((*output)->new_password_element)::BaseType::BufferWriter
        new_password_element_writer;
    mojo::internal::Serialize<::mojo_base::mojom::String16DataView>(
        in_new_password_element, buffer, &new_password_element_writer, context);
    (*output)->new_password_element.Set(
        new_password_element_writer.is_null() ? nullptr : new_password_element_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->new_password_element.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null new_password_element in PasswordForm struct");
    decltype(CallWithContext(Traits::new_password_value, input, custom_context)) in_new_password_value = CallWithContext(Traits::new_password_value, input, custom_context);
    typename decltype((*output)->new_password_value)::BaseType::BufferWriter
        new_password_value_writer;
    mojo::internal::Serialize<::mojo_base::mojom::String16DataView>(
        in_new_password_value, buffer, &new_password_value_writer, context);
    (*output)->new_password_value.Set(
        new_password_value_writer.is_null() ? nullptr : new_password_value_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->new_password_value.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null new_password_value in PasswordForm struct");
    (*output)->new_password_value_is_default = CallWithContext(Traits::new_password_value_is_default, input, custom_context);
    (*output)->new_password_marked_by_site = CallWithContext(Traits::new_password_marked_by_site, input, custom_context);
    decltype(CallWithContext(Traits::confirmation_password_element, input, custom_context)) in_confirmation_password_element = CallWithContext(Traits::confirmation_password_element, input, custom_context);
    typename decltype((*output)->confirmation_password_element)::BaseType::BufferWriter
        confirmation_password_element_writer;
    mojo::internal::Serialize<::mojo_base::mojom::String16DataView>(
        in_confirmation_password_element, buffer, &confirmation_password_element_writer, context);
    (*output)->confirmation_password_element.Set(
        confirmation_password_element_writer.is_null() ? nullptr : confirmation_password_element_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->confirmation_password_element.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null confirmation_password_element in PasswordForm struct");
    (*output)->preferred = CallWithContext(Traits::preferred, input, custom_context);
    decltype(CallWithContext(Traits::date_created, input, custom_context)) in_date_created = CallWithContext(Traits::date_created, input, custom_context);
    typename decltype((*output)->date_created)::BaseType::BufferWriter
        date_created_writer;
    mojo::internal::Serialize<::mojo_base::mojom::TimeDataView>(
        in_date_created, buffer, &date_created_writer, context);
    (*output)->date_created.Set(
        date_created_writer.is_null() ? nullptr : date_created_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->date_created.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null date_created in PasswordForm struct");
    decltype(CallWithContext(Traits::date_synced, input, custom_context)) in_date_synced = CallWithContext(Traits::date_synced, input, custom_context);
    typename decltype((*output)->date_synced)::BaseType::BufferWriter
        date_synced_writer;
    mojo::internal::Serialize<::mojo_base::mojom::TimeDataView>(
        in_date_synced, buffer, &date_synced_writer, context);
    (*output)->date_synced.Set(
        date_synced_writer.is_null() ? nullptr : date_synced_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->date_synced.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null date_synced in PasswordForm struct");
    (*output)->blacklisted_by_user = CallWithContext(Traits::blacklisted_by_user, input, custom_context);
    mojo::internal::Serialize<::autofill::mojom::PasswordFormType>(
        CallWithContext(Traits::type, input, custom_context), &(*output)->type);
    (*output)->times_used = CallWithContext(Traits::times_used, input, custom_context);
    decltype(CallWithContext(Traits::form_data, input, custom_context)) in_form_data = CallWithContext(Traits::form_data, input, custom_context);
    typename decltype((*output)->form_data)::BaseType::BufferWriter
        form_data_writer;
    mojo::internal::Serialize<::autofill::mojom::FormDataDataView>(
        in_form_data, buffer, &form_data_writer, context);
    (*output)->form_data.Set(
        form_data_writer.is_null() ? nullptr : form_data_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->form_data.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null form_data in PasswordForm struct");
    mojo::internal::Serialize<::autofill::mojom::GenerationUploadStatus>(
        CallWithContext(Traits::generation_upload_status, input, custom_context), &(*output)->generation_upload_status);
    decltype(CallWithContext(Traits::display_name, input, custom_context)) in_display_name = CallWithContext(Traits::display_name, input, custom_context);
    typename decltype((*output)->display_name)::BaseType::BufferWriter
        display_name_writer;
    mojo::internal::Serialize<::mojo_base::mojom::String16DataView>(
        in_display_name, buffer, &display_name_writer, context);
    (*output)->display_name.Set(
        display_name_writer.is_null() ? nullptr : display_name_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->display_name.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null display_name in PasswordForm struct");
    decltype(CallWithContext(Traits::icon_url, input, custom_context)) in_icon_url = CallWithContext(Traits::icon_url, input, custom_context);
    typename decltype((*output)->icon_url)::BaseType::BufferWriter
        icon_url_writer;
    mojo::internal::Serialize<::url::mojom::UrlDataView>(
        in_icon_url, buffer, &icon_url_writer, context);
    (*output)->icon_url.Set(
        icon_url_writer.is_null() ? nullptr : icon_url_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->icon_url.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null icon_url in PasswordForm struct");
    decltype(CallWithContext(Traits::federation_origin, input, custom_context)) in_federation_origin = CallWithContext(Traits::federation_origin, input, custom_context);
    typename decltype((*output)->federation_origin)::BaseType::BufferWriter
        federation_origin_writer;
    mojo::internal::Serialize<::url::mojom::OriginDataView>(
        in_federation_origin, buffer, &federation_origin_writer, context);
    (*output)->federation_origin.Set(
        federation_origin_writer.is_null() ? nullptr : federation_origin_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->federation_origin.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null federation_origin in PasswordForm struct");
    (*output)->skip_zero_click = CallWithContext(Traits::skip_zero_click, input, custom_context);
    mojo::internal::Serialize<::autofill::mojom::PasswordFormLayout>(
        CallWithContext(Traits::layout, input, custom_context), &(*output)->layout);
    (*output)->was_parsed_using_autofill_predictions = CallWithContext(Traits::was_parsed_using_autofill_predictions, input, custom_context);
    (*output)->is_public_suffix_match = CallWithContext(Traits::is_public_suffix_match, input, custom_context);
    (*output)->is_affiliation_based_match = CallWithContext(Traits::is_affiliation_based_match, input, custom_context);
    mojo::internal::Serialize<::autofill::mojom::PasswordFormSubmissionIndicatorEvent>(
        CallWithContext(Traits::submission_event, input, custom_context), &(*output)->submission_event);
    (*output)->only_for_fallback_saving = CallWithContext(Traits::only_for_fallback_saving, input, custom_context);
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::autofill::mojom::internal::PasswordForm_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::autofill::mojom::PasswordFormDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::autofill::mojom::PasswordFormFieldPredictionMapDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::autofill::mojom::PasswordFormFieldPredictionMapDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::autofill::mojom::internal::PasswordFormFieldPredictionMap_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    decltype(CallWithContext(Traits::keys, input, custom_context)) in_keys = CallWithContext(Traits::keys, input, custom_context);
    typename decltype((*output)->keys)::BaseType::BufferWriter
        keys_writer;
    const mojo::internal::ContainerValidateParams keys_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::autofill::mojom::FormFieldDataDataView>>(
        in_keys, buffer, &keys_writer, &keys_validate_params,
        context);
    (*output)->keys.Set(
        keys_writer.is_null() ? nullptr : keys_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->keys.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null keys in PasswordFormFieldPredictionMap struct");
    decltype(CallWithContext(Traits::values, input, custom_context)) in_values = CallWithContext(Traits::values, input, custom_context);
    typename decltype((*output)->values)::BaseType::BufferWriter
        values_writer;
    const mojo::internal::ContainerValidateParams values_validate_params(
        0, ::autofill::mojom::internal::PasswordFormFieldPredictionType_Data::Validate);
    mojo::internal::Serialize<mojo::ArrayDataView<::autofill::mojom::PasswordFormFieldPredictionType>>(
        in_values, buffer, &values_writer, &values_validate_params,
        context);
    (*output)->values.Set(
        values_writer.is_null() ? nullptr : values_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->values.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null values in PasswordFormFieldPredictionMap struct");
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::autofill::mojom::internal::PasswordFormFieldPredictionMap_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::autofill::mojom::PasswordFormFieldPredictionMapDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::autofill::mojom::FormsPredictionsMapDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::autofill::mojom::FormsPredictionsMapDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::autofill::mojom::internal::FormsPredictionsMap_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    decltype(CallWithContext(Traits::keys, input, custom_context)) in_keys = CallWithContext(Traits::keys, input, custom_context);
    typename decltype((*output)->keys)::BaseType::BufferWriter
        keys_writer;
    const mojo::internal::ContainerValidateParams keys_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::autofill::mojom::FormDataDataView>>(
        in_keys, buffer, &keys_writer, &keys_validate_params,
        context);
    (*output)->keys.Set(
        keys_writer.is_null() ? nullptr : keys_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->keys.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null keys in FormsPredictionsMap struct");
    decltype(CallWithContext(Traits::values, input, custom_context)) in_values = CallWithContext(Traits::values, input, custom_context);
    typename decltype((*output)->values)::BaseType::BufferWriter
        values_writer;
    const mojo::internal::ContainerValidateParams values_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::autofill::mojom::PasswordFormFieldPredictionMapDataView>>(
        in_values, buffer, &values_writer, &values_validate_params,
        context);
    (*output)->values.Set(
        values_writer.is_null() ? nullptr : values_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->values.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null values in FormsPredictionsMap struct");
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::autofill::mojom::internal::FormsPredictionsMap_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::autofill::mojom::FormsPredictionsMapDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace autofill {
namespace mojom {

inline void FormFieldDataDataView::GetLabelDataView(
    ::mojo_base::mojom::String16DataView* output) {
  auto pointer = data_->label.Get();
  *output = ::mojo_base::mojom::String16DataView(pointer, context_);
}
inline void FormFieldDataDataView::GetNameDataView(
    ::mojo_base::mojom::String16DataView* output) {
  auto pointer = data_->name.Get();
  *output = ::mojo_base::mojom::String16DataView(pointer, context_);
}
inline void FormFieldDataDataView::GetIdDataView(
    ::mojo_base::mojom::String16DataView* output) {
  auto pointer = data_->id.Get();
  *output = ::mojo_base::mojom::String16DataView(pointer, context_);
}
inline void FormFieldDataDataView::GetValueDataView(
    ::mojo_base::mojom::String16DataView* output) {
  auto pointer = data_->value.Get();
  *output = ::mojo_base::mojom::String16DataView(pointer, context_);
}
inline void FormFieldDataDataView::GetFormControlTypeDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->form_control_type.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void FormFieldDataDataView::GetAutocompleteAttributeDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->autocomplete_attribute.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void FormFieldDataDataView::GetPlaceholderDataView(
    ::mojo_base::mojom::String16DataView* output) {
  auto pointer = data_->placeholder.Get();
  *output = ::mojo_base::mojom::String16DataView(pointer, context_);
}
inline void FormFieldDataDataView::GetCssClassesDataView(
    ::mojo_base::mojom::String16DataView* output) {
  auto pointer = data_->css_classes.Get();
  *output = ::mojo_base::mojom::String16DataView(pointer, context_);
}
inline void FormFieldDataDataView::GetSectionDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->section.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void FormFieldDataDataView::GetTypedValueDataView(
    ::mojo_base::mojom::String16DataView* output) {
  auto pointer = data_->typed_value.Get();
  *output = ::mojo_base::mojom::String16DataView(pointer, context_);
}
inline void FormFieldDataDataView::GetOptionValuesDataView(
    mojo::ArrayDataView<::mojo_base::mojom::String16DataView>* output) {
  auto pointer = data_->option_values.Get();
  *output = mojo::ArrayDataView<::mojo_base::mojom::String16DataView>(pointer, context_);
}
inline void FormFieldDataDataView::GetOptionContentsDataView(
    mojo::ArrayDataView<::mojo_base::mojom::String16DataView>* output) {
  auto pointer = data_->option_contents.Get();
  *output = mojo::ArrayDataView<::mojo_base::mojom::String16DataView>(pointer, context_);
}


inline void FormDataDataView::GetNameDataView(
    ::mojo_base::mojom::String16DataView* output) {
  auto pointer = data_->name.Get();
  *output = ::mojo_base::mojom::String16DataView(pointer, context_);
}
inline void FormDataDataView::GetOriginDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->origin.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}
inline void FormDataDataView::GetActionDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->action.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}
inline void FormDataDataView::GetMainFrameOriginDataView(
    ::url::mojom::OriginDataView* output) {
  auto pointer = data_->main_frame_origin.Get();
  *output = ::url::mojom::OriginDataView(pointer, context_);
}
inline void FormDataDataView::GetFieldsDataView(
    mojo::ArrayDataView<FormFieldDataDataView>* output) {
  auto pointer = data_->fields.Get();
  *output = mojo::ArrayDataView<FormFieldDataDataView>(pointer, context_);
}


inline void FormFieldDataPredictionsDataView::GetFieldDataView(
    FormFieldDataDataView* output) {
  auto pointer = data_->field.Get();
  *output = FormFieldDataDataView(pointer, context_);
}
inline void FormFieldDataPredictionsDataView::GetSignatureDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->signature.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void FormFieldDataPredictionsDataView::GetHeuristicTypeDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->heuristic_type.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void FormFieldDataPredictionsDataView::GetServerTypeDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->server_type.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void FormFieldDataPredictionsDataView::GetOverallTypeDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->overall_type.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void FormFieldDataPredictionsDataView::GetParseableNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->parseable_name.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void FormFieldDataPredictionsDataView::GetSectionDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->section.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void FormDataPredictionsDataView::GetDataDataView(
    FormDataDataView* output) {
  auto pointer = data_->data.Get();
  *output = FormDataDataView(pointer, context_);
}
inline void FormDataPredictionsDataView::GetSignatureDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->signature.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void FormDataPredictionsDataView::GetFieldsDataView(
    mojo::ArrayDataView<FormFieldDataPredictionsDataView>* output) {
  auto pointer = data_->fields.Get();
  *output = mojo::ArrayDataView<FormFieldDataPredictionsDataView>(pointer, context_);
}


inline void PasswordAndRealmDataView::GetPasswordDataView(
    ::mojo_base::mojom::String16DataView* output) {
  auto pointer = data_->password.Get();
  *output = ::mojo_base::mojom::String16DataView(pointer, context_);
}
inline void PasswordAndRealmDataView::GetRealmDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->realm.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void PasswordFormFillDataDataView::GetNameDataView(
    ::mojo_base::mojom::String16DataView* output) {
  auto pointer = data_->name.Get();
  *output = ::mojo_base::mojom::String16DataView(pointer, context_);
}
inline void PasswordFormFillDataDataView::GetOriginDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->origin.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}
inline void PasswordFormFillDataDataView::GetActionDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->action.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}
inline void PasswordFormFillDataDataView::GetUsernameFieldDataView(
    FormFieldDataDataView* output) {
  auto pointer = data_->username_field.Get();
  *output = FormFieldDataDataView(pointer, context_);
}
inline void PasswordFormFillDataDataView::GetPasswordFieldDataView(
    FormFieldDataDataView* output) {
  auto pointer = data_->password_field.Get();
  *output = FormFieldDataDataView(pointer, context_);
}
inline void PasswordFormFillDataDataView::GetPreferredRealmDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->preferred_realm.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void PasswordFormFillDataDataView::GetAdditionalLoginsDataView(
    mojo::MapDataView<::mojo_base::mojom::String16DataView, PasswordAndRealmDataView>* output) {
  auto pointer = data_->additional_logins.Get();
  *output = mojo::MapDataView<::mojo_base::mojom::String16DataView, PasswordAndRealmDataView>(pointer, context_);
}




inline void ValueElementPairDataView::GetValueDataView(
    ::mojo_base::mojom::String16DataView* output) {
  auto pointer = data_->value.Get();
  *output = ::mojo_base::mojom::String16DataView(pointer, context_);
}
inline void ValueElementPairDataView::GetFieldNameDataView(
    ::mojo_base::mojom::String16DataView* output) {
  auto pointer = data_->field_name.Get();
  *output = ::mojo_base::mojom::String16DataView(pointer, context_);
}


inline void PasswordFormDataView::GetSignonRealmDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->signon_realm.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void PasswordFormDataView::GetOriginWithPathDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->origin_with_path.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}
inline void PasswordFormDataView::GetActionDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->action.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}
inline void PasswordFormDataView::GetAffiliatedWebRealmDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->affiliated_web_realm.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void PasswordFormDataView::GetSubmitElementDataView(
    ::mojo_base::mojom::String16DataView* output) {
  auto pointer = data_->submit_element.Get();
  *output = ::mojo_base::mojom::String16DataView(pointer, context_);
}
inline void PasswordFormDataView::GetUsernameElementDataView(
    ::mojo_base::mojom::String16DataView* output) {
  auto pointer = data_->username_element.Get();
  *output = ::mojo_base::mojom::String16DataView(pointer, context_);
}
inline void PasswordFormDataView::GetUsernameValueDataView(
    ::mojo_base::mojom::String16DataView* output) {
  auto pointer = data_->username_value.Get();
  *output = ::mojo_base::mojom::String16DataView(pointer, context_);
}
inline void PasswordFormDataView::GetOtherPossibleUsernamesDataView(
    mojo::ArrayDataView<ValueElementPairDataView>* output) {
  auto pointer = data_->other_possible_usernames.Get();
  *output = mojo::ArrayDataView<ValueElementPairDataView>(pointer, context_);
}
inline void PasswordFormDataView::GetAllPossiblePasswordsDataView(
    mojo::ArrayDataView<ValueElementPairDataView>* output) {
  auto pointer = data_->all_possible_passwords.Get();
  *output = mojo::ArrayDataView<ValueElementPairDataView>(pointer, context_);
}
inline void PasswordFormDataView::GetPasswordElementDataView(
    ::mojo_base::mojom::String16DataView* output) {
  auto pointer = data_->password_element.Get();
  *output = ::mojo_base::mojom::String16DataView(pointer, context_);
}
inline void PasswordFormDataView::GetPasswordValueDataView(
    ::mojo_base::mojom::String16DataView* output) {
  auto pointer = data_->password_value.Get();
  *output = ::mojo_base::mojom::String16DataView(pointer, context_);
}
inline void PasswordFormDataView::GetNewPasswordElementDataView(
    ::mojo_base::mojom::String16DataView* output) {
  auto pointer = data_->new_password_element.Get();
  *output = ::mojo_base::mojom::String16DataView(pointer, context_);
}
inline void PasswordFormDataView::GetNewPasswordValueDataView(
    ::mojo_base::mojom::String16DataView* output) {
  auto pointer = data_->new_password_value.Get();
  *output = ::mojo_base::mojom::String16DataView(pointer, context_);
}
inline void PasswordFormDataView::GetConfirmationPasswordElementDataView(
    ::mojo_base::mojom::String16DataView* output) {
  auto pointer = data_->confirmation_password_element.Get();
  *output = ::mojo_base::mojom::String16DataView(pointer, context_);
}
inline void PasswordFormDataView::GetDateCreatedDataView(
    ::mojo_base::mojom::TimeDataView* output) {
  auto pointer = data_->date_created.Get();
  *output = ::mojo_base::mojom::TimeDataView(pointer, context_);
}
inline void PasswordFormDataView::GetDateSyncedDataView(
    ::mojo_base::mojom::TimeDataView* output) {
  auto pointer = data_->date_synced.Get();
  *output = ::mojo_base::mojom::TimeDataView(pointer, context_);
}
inline void PasswordFormDataView::GetFormDataDataView(
    FormDataDataView* output) {
  auto pointer = data_->form_data.Get();
  *output = FormDataDataView(pointer, context_);
}
inline void PasswordFormDataView::GetDisplayNameDataView(
    ::mojo_base::mojom::String16DataView* output) {
  auto pointer = data_->display_name.Get();
  *output = ::mojo_base::mojom::String16DataView(pointer, context_);
}
inline void PasswordFormDataView::GetIconUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->icon_url.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}
inline void PasswordFormDataView::GetFederationOriginDataView(
    ::url::mojom::OriginDataView* output) {
  auto pointer = data_->federation_origin.Get();
  *output = ::url::mojom::OriginDataView(pointer, context_);
}


inline void PasswordFormFieldPredictionMapDataView::GetKeysDataView(
    mojo::ArrayDataView<FormFieldDataDataView>* output) {
  auto pointer = data_->keys.Get();
  *output = mojo::ArrayDataView<FormFieldDataDataView>(pointer, context_);
}
inline void PasswordFormFieldPredictionMapDataView::GetValuesDataView(
    mojo::ArrayDataView<PasswordFormFieldPredictionType>* output) {
  auto pointer = data_->values.Get();
  *output = mojo::ArrayDataView<PasswordFormFieldPredictionType>(pointer, context_);
}


inline void FormsPredictionsMapDataView::GetKeysDataView(
    mojo::ArrayDataView<FormDataDataView>* output) {
  auto pointer = data_->keys.Get();
  *output = mojo::ArrayDataView<FormDataDataView>(pointer, context_);
}
inline void FormsPredictionsMapDataView::GetValuesDataView(
    mojo::ArrayDataView<PasswordFormFieldPredictionMapDataView>* output) {
  auto pointer = data_->values.Get();
  *output = mojo::ArrayDataView<PasswordFormFieldPredictionMapDataView>(pointer, context_);
}



}  // namespace mojom
}  // namespace autofill

#endif  // COMPONENTS_AUTOFILL_CONTENT_COMMON_AUTOFILL_TYPES_MOJOM_SHARED_H_
