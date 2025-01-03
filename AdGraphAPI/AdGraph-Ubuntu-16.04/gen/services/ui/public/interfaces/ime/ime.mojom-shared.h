// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_UI_PUBLIC_INTERFACES_IME_IME_MOJOM_SHARED_H_
#define SERVICES_UI_PUBLIC_INTERFACES_IME_IME_MOJOM_SHARED_H_

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
#include "services/ui/public/interfaces/ime/ime.mojom-shared-internal.h"
#include "mojo/public/mojom/base/text_direction.mojom-shared.h"
#include "mojo/public/mojom/base/string16.mojom-shared.h"
#include "ui/events/mojo/event.mojom-shared.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-shared.h"
#include "ui/gfx/range/mojo/range.mojom-shared.h"
#include "ui/platform_window/mojo/text_input_state.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"


namespace ui {
namespace mojom {
class CandidateWindowPropertiesDataView;

class CandidateWindowEntryDataView;

class ImeTextSpanDataView;

class CompositionTextDataView;

class StartSessionDetailsDataView;



}  // namespace mojom
}  // namespace ui

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::ui::mojom::CandidateWindowPropertiesDataView> {
  using Data = ::ui::mojom::internal::CandidateWindowProperties_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::ui::mojom::CandidateWindowEntryDataView> {
  using Data = ::ui::mojom::internal::CandidateWindowEntry_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::ui::mojom::ImeTextSpanDataView> {
  using Data = ::ui::mojom::internal::ImeTextSpan_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::ui::mojom::CompositionTextDataView> {
  using Data = ::ui::mojom::internal::CompositionText_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::ui::mojom::StartSessionDetailsDataView> {
  using Data = ::ui::mojom::internal::StartSessionDetails_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace ui {
namespace mojom {

enum class CandidateWindowPosition : int32_t {
  kCursor,
  kComposition,
  kMinValue = 0,
  kMaxValue = 1,
};

inline std::ostream& operator<<(std::ostream& os, CandidateWindowPosition value) {
  switch(value) {
    case CandidateWindowPosition::kCursor:
      return os << "CandidateWindowPosition::kCursor";
    case CandidateWindowPosition::kComposition:
      return os << "CandidateWindowPosition::kComposition";
    default:
      return os << "Unknown CandidateWindowPosition value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(CandidateWindowPosition value) {
  return internal::CandidateWindowPosition_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

enum class ImeTextSpanType : int32_t {
  kComposition,
  kSuggestion,
  kMisspellingSuggestion,
  kMinValue = 0,
  kMaxValue = 2,
};

inline std::ostream& operator<<(std::ostream& os, ImeTextSpanType value) {
  switch(value) {
    case ImeTextSpanType::kComposition:
      return os << "ImeTextSpanType::kComposition";
    case ImeTextSpanType::kSuggestion:
      return os << "ImeTextSpanType::kSuggestion";
    case ImeTextSpanType::kMisspellingSuggestion:
      return os << "ImeTextSpanType::kMisspellingSuggestion";
    default:
      return os << "Unknown ImeTextSpanType value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(ImeTextSpanType value) {
  return internal::ImeTextSpanType_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

enum class ImeTextSpanThickness : int32_t {
  kNone,
  kThin,
  kThick,
  kMinValue = 0,
  kMaxValue = 2,
};

inline std::ostream& operator<<(std::ostream& os, ImeTextSpanThickness value) {
  switch(value) {
    case ImeTextSpanThickness::kNone:
      return os << "ImeTextSpanThickness::kNone";
    case ImeTextSpanThickness::kThin:
      return os << "ImeTextSpanThickness::kThin";
    case ImeTextSpanThickness::kThick:
      return os << "ImeTextSpanThickness::kThick";
    default:
      return os << "Unknown ImeTextSpanThickness value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(ImeTextSpanThickness value) {
  return internal::ImeTextSpanThickness_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

enum class TextInputMode : int32_t {
  kDefault,
  kNone,
  kText,
  kTel,
  kUrl,
  kEmail,
  kNumeric,
  kDecimal,
  kSearch,
  kMinValue = 0,
  kMaxValue = 8,
};

inline std::ostream& operator<<(std::ostream& os, TextInputMode value) {
  switch(value) {
    case TextInputMode::kDefault:
      return os << "TextInputMode::kDefault";
    case TextInputMode::kNone:
      return os << "TextInputMode::kNone";
    case TextInputMode::kText:
      return os << "TextInputMode::kText";
    case TextInputMode::kTel:
      return os << "TextInputMode::kTel";
    case TextInputMode::kUrl:
      return os << "TextInputMode::kUrl";
    case TextInputMode::kEmail:
      return os << "TextInputMode::kEmail";
    case TextInputMode::kNumeric:
      return os << "TextInputMode::kNumeric";
    case TextInputMode::kDecimal:
      return os << "TextInputMode::kDecimal";
    case TextInputMode::kSearch:
      return os << "TextInputMode::kSearch";
    default:
      return os << "Unknown TextInputMode value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(TextInputMode value) {
  return internal::TextInputMode_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
// Interface base classes. They are used for type safety check.
class IMEDriverInterfaceBase {};

using IMEDriverPtrDataView =
    mojo::InterfacePtrDataView<IMEDriverInterfaceBase>;
using IMEDriverRequestDataView =
    mojo::InterfaceRequestDataView<IMEDriverInterfaceBase>;
using IMEDriverAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<IMEDriverInterfaceBase>;
using IMEDriverAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<IMEDriverInterfaceBase>;
class IMERegistrarInterfaceBase {};

using IMERegistrarPtrDataView =
    mojo::InterfacePtrDataView<IMERegistrarInterfaceBase>;
using IMERegistrarRequestDataView =
    mojo::InterfaceRequestDataView<IMERegistrarInterfaceBase>;
using IMERegistrarAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<IMERegistrarInterfaceBase>;
using IMERegistrarAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<IMERegistrarInterfaceBase>;
class InputMethodInterfaceBase {};

using InputMethodPtrDataView =
    mojo::InterfacePtrDataView<InputMethodInterfaceBase>;
using InputMethodRequestDataView =
    mojo::InterfaceRequestDataView<InputMethodInterfaceBase>;
using InputMethodAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<InputMethodInterfaceBase>;
using InputMethodAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<InputMethodInterfaceBase>;
class TextInputClientInterfaceBase {};

using TextInputClientPtrDataView =
    mojo::InterfacePtrDataView<TextInputClientInterfaceBase>;
using TextInputClientRequestDataView =
    mojo::InterfaceRequestDataView<TextInputClientInterfaceBase>;
using TextInputClientAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<TextInputClientInterfaceBase>;
using TextInputClientAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<TextInputClientInterfaceBase>;
class CandidateWindowPropertiesDataView {
 public:
  CandidateWindowPropertiesDataView() {}

  CandidateWindowPropertiesDataView(
      internal::CandidateWindowProperties_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int32_t page_size() const {
    return data_->page_size;
  }
  bool vertical() const {
    return data_->vertical;
  }
  inline void GetAuxiliaryTextDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadAuxiliaryText(UserType* output) {
    auto* pointer = data_->auxiliary_text.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  bool auxiliary_text_visible() const {
    return data_->auxiliary_text_visible;
  }
  int32_t cursor_position() const {
    return data_->cursor_position;
  }
  bool cursor_visible() const {
    return data_->cursor_visible;
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadWindowPosition(UserType* output) const {
    auto data_value = data_->window_position;
    return mojo::internal::Deserialize<::ui::mojom::CandidateWindowPosition>(
        data_value, output);
  }

  CandidateWindowPosition window_position() const {
    return static_cast<CandidateWindowPosition>(data_->window_position);
  }
 private:
  internal::CandidateWindowProperties_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class CandidateWindowEntryDataView {
 public:
  CandidateWindowEntryDataView() {}

  CandidateWindowEntryDataView(
      internal::CandidateWindowEntry_Data* data,
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
  inline void GetLabelDataView(
      ::mojo_base::mojom::String16DataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadLabel(UserType* output) {
    auto* pointer = data_->label.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::String16DataView>(
        pointer, output, context_);
  }
  inline void GetAnnotationDataView(
      ::mojo_base::mojom::String16DataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadAnnotation(UserType* output) {
    auto* pointer = data_->annotation.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::String16DataView>(
        pointer, output, context_);
  }
  inline void GetDescriptionTitleDataView(
      ::mojo_base::mojom::String16DataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDescriptionTitle(UserType* output) {
    auto* pointer = data_->description_title.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::String16DataView>(
        pointer, output, context_);
  }
  inline void GetDescriptionBodyDataView(
      ::mojo_base::mojom::String16DataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDescriptionBody(UserType* output) {
    auto* pointer = data_->description_body.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::String16DataView>(
        pointer, output, context_);
  }
 private:
  internal::CandidateWindowEntry_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ImeTextSpanDataView {
 public:
  ImeTextSpanDataView() {}

  ImeTextSpanDataView(
      internal::ImeTextSpan_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadType(UserType* output) const {
    auto data_value = data_->type;
    return mojo::internal::Deserialize<::ui::mojom::ImeTextSpanType>(
        data_value, output);
  }

  ImeTextSpanType type() const {
    return static_cast<ImeTextSpanType>(data_->type);
  }
  uint32_t start_offset() const {
    return data_->start_offset;
  }
  uint32_t end_offset() const {
    return data_->end_offset;
  }
  uint32_t underline_color() const {
    return data_->underline_color;
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadThickness(UserType* output) const {
    auto data_value = data_->thickness;
    return mojo::internal::Deserialize<::ui::mojom::ImeTextSpanThickness>(
        data_value, output);
  }

  ImeTextSpanThickness thickness() const {
    return static_cast<ImeTextSpanThickness>(data_->thickness);
  }
  uint32_t background_color() const {
    return data_->background_color;
  }
  uint32_t suggestion_highlight_color() const {
    return data_->suggestion_highlight_color;
  }
  inline void GetSuggestionsDataView(
      mojo::ArrayDataView<mojo::StringDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSuggestions(UserType* output) {
    auto* pointer = data_->suggestions.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<mojo::StringDataView>>(
        pointer, output, context_);
  }
 private:
  internal::ImeTextSpan_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class CompositionTextDataView {
 public:
  CompositionTextDataView() {}

  CompositionTextDataView(
      internal::CompositionText_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetTextDataView(
      ::mojo_base::mojom::String16DataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadText(UserType* output) {
    auto* pointer = data_->text.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::String16DataView>(
        pointer, output, context_);
  }
  inline void GetImeTextSpansDataView(
      mojo::ArrayDataView<ImeTextSpanDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadImeTextSpans(UserType* output) {
    auto* pointer = data_->ime_text_spans.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::ui::mojom::ImeTextSpanDataView>>(
        pointer, output, context_);
  }
  inline void GetSelectionDataView(
      ::gfx::mojom::RangeDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSelection(UserType* output) {
    auto* pointer = data_->selection.Get();
    return mojo::internal::Deserialize<::gfx::mojom::RangeDataView>(
        pointer, output, context_);
  }
 private:
  internal::CompositionText_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class StartSessionDetailsDataView {
 public:
  StartSessionDetailsDataView() {}

  StartSessionDetailsDataView(
      internal::StartSessionDetails_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeClient() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::ui::mojom::TextInputClientPtrDataView>(
            &data_->client, &result, context_);
    DCHECK(ret);
    return result;
  }
  template <typename UserType>
  UserType TakeInputMethodRequest() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::ui::mojom::InputMethodRequestDataView>(
            &data_->input_method_request, &result, context_);
    DCHECK(ret);
    return result;
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTextInputType(UserType* output) const {
    auto data_value = data_->text_input_type;
    return mojo::internal::Deserialize<::ui::mojom::TextInputType>(
        data_value, output);
  }

  ::ui::mojom::TextInputType text_input_type() const {
    return static_cast<::ui::mojom::TextInputType>(data_->text_input_type);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTextInputMode(UserType* output) const {
    auto data_value = data_->text_input_mode;
    return mojo::internal::Deserialize<::ui::mojom::TextInputMode>(
        data_value, output);
  }

  TextInputMode text_input_mode() const {
    return static_cast<TextInputMode>(data_->text_input_mode);
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
  int32_t text_input_flags() const {
    return data_->text_input_flags;
  }
  inline void GetCaretBoundsDataView(
      ::gfx::mojom::RectDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCaretBounds(UserType* output) {
    auto* pointer = data_->caret_bounds.Get();
    return mojo::internal::Deserialize<::gfx::mojom::RectDataView>(
        pointer, output, context_);
  }
 private:
  internal::StartSessionDetails_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class IMEDriver_StartSession_ParamsDataView {
 public:
  IMEDriver_StartSession_ParamsDataView() {}

  IMEDriver_StartSession_ParamsDataView(
      internal::IMEDriver_StartSession_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetDetailsDataView(
      StartSessionDetailsDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDetails(UserType* output) {
    auto* pointer = data_->details.Get();
    return mojo::internal::Deserialize<::ui::mojom::StartSessionDetailsDataView>(
        pointer, output, context_);
  }
 private:
  internal::IMEDriver_StartSession_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class IMERegistrar_RegisterDriver_ParamsDataView {
 public:
  IMERegistrar_RegisterDriver_ParamsDataView() {}

  IMERegistrar_RegisterDriver_ParamsDataView(
      internal::IMERegistrar_RegisterDriver_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeDriver() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::ui::mojom::IMEDriverPtrDataView>(
            &data_->driver, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::IMERegistrar_RegisterDriver_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class InputMethod_OnTextInputTypeChanged_ParamsDataView {
 public:
  InputMethod_OnTextInputTypeChanged_ParamsDataView() {}

  InputMethod_OnTextInputTypeChanged_ParamsDataView(
      internal::InputMethod_OnTextInputTypeChanged_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTextInputType(UserType* output) const {
    auto data_value = data_->text_input_type;
    return mojo::internal::Deserialize<::ui::mojom::TextInputType>(
        data_value, output);
  }

  ::ui::mojom::TextInputType text_input_type() const {
    return static_cast<::ui::mojom::TextInputType>(data_->text_input_type);
  }
 private:
  internal::InputMethod_OnTextInputTypeChanged_Params_Data* data_ = nullptr;
};

class InputMethod_OnCaretBoundsChanged_ParamsDataView {
 public:
  InputMethod_OnCaretBoundsChanged_ParamsDataView() {}

  InputMethod_OnCaretBoundsChanged_ParamsDataView(
      internal::InputMethod_OnCaretBoundsChanged_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetCaretBoundsDataView(
      ::gfx::mojom::RectDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCaretBounds(UserType* output) {
    auto* pointer = data_->caret_bounds.Get();
    return mojo::internal::Deserialize<::gfx::mojom::RectDataView>(
        pointer, output, context_);
  }
 private:
  internal::InputMethod_OnCaretBoundsChanged_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class InputMethod_ProcessKeyEvent_ParamsDataView {
 public:
  InputMethod_ProcessKeyEvent_ParamsDataView() {}

  InputMethod_ProcessKeyEvent_ParamsDataView(
      internal::InputMethod_ProcessKeyEvent_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetKeyEventDataView(
      ::ui::mojom::EventDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadKeyEvent(UserType* output) {
    auto* pointer = data_->key_event.Get();
    return mojo::internal::Deserialize<::ui::mojom::EventDataView>(
        pointer, output, context_);
  }
 private:
  internal::InputMethod_ProcessKeyEvent_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class InputMethod_ProcessKeyEvent_ResponseParamsDataView {
 public:
  InputMethod_ProcessKeyEvent_ResponseParamsDataView() {}

  InputMethod_ProcessKeyEvent_ResponseParamsDataView(
      internal::InputMethod_ProcessKeyEvent_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool handled() const {
    return data_->handled;
  }
 private:
  internal::InputMethod_ProcessKeyEvent_ResponseParams_Data* data_ = nullptr;
};

class InputMethod_CancelComposition_ParamsDataView {
 public:
  InputMethod_CancelComposition_ParamsDataView() {}

  InputMethod_CancelComposition_ParamsDataView(
      internal::InputMethod_CancelComposition_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::InputMethod_CancelComposition_Params_Data* data_ = nullptr;
};

class TextInputClient_SetCompositionText_ParamsDataView {
 public:
  TextInputClient_SetCompositionText_ParamsDataView() {}

  TextInputClient_SetCompositionText_ParamsDataView(
      internal::TextInputClient_SetCompositionText_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetCompositionDataView(
      CompositionTextDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadComposition(UserType* output) {
    auto* pointer = data_->composition.Get();
    return mojo::internal::Deserialize<::ui::mojom::CompositionTextDataView>(
        pointer, output, context_);
  }
 private:
  internal::TextInputClient_SetCompositionText_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class TextInputClient_ConfirmCompositionText_ParamsDataView {
 public:
  TextInputClient_ConfirmCompositionText_ParamsDataView() {}

  TextInputClient_ConfirmCompositionText_ParamsDataView(
      internal::TextInputClient_ConfirmCompositionText_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::TextInputClient_ConfirmCompositionText_Params_Data* data_ = nullptr;
};

class TextInputClient_ClearCompositionText_ParamsDataView {
 public:
  TextInputClient_ClearCompositionText_ParamsDataView() {}

  TextInputClient_ClearCompositionText_ParamsDataView(
      internal::TextInputClient_ClearCompositionText_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::TextInputClient_ClearCompositionText_Params_Data* data_ = nullptr;
};

class TextInputClient_InsertText_ParamsDataView {
 public:
  TextInputClient_InsertText_ParamsDataView() {}

  TextInputClient_InsertText_ParamsDataView(
      internal::TextInputClient_InsertText_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetTextDataView(
      ::mojo_base::mojom::String16DataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadText(UserType* output) {
    auto* pointer = data_->text.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::String16DataView>(
        pointer, output, context_);
  }
 private:
  internal::TextInputClient_InsertText_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class TextInputClient_InsertChar_ParamsDataView {
 public:
  TextInputClient_InsertChar_ParamsDataView() {}

  TextInputClient_InsertChar_ParamsDataView(
      internal::TextInputClient_InsertChar_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetEventDataView(
      ::ui::mojom::EventDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadEvent(UserType* output) {
    auto* pointer = data_->event.Get();
    return mojo::internal::Deserialize<::ui::mojom::EventDataView>(
        pointer, output, context_);
  }
 private:
  internal::TextInputClient_InsertChar_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class TextInputClient_DispatchKeyEventPostIME_ParamsDataView {
 public:
  TextInputClient_DispatchKeyEventPostIME_ParamsDataView() {}

  TextInputClient_DispatchKeyEventPostIME_ParamsDataView(
      internal::TextInputClient_DispatchKeyEventPostIME_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetEventDataView(
      ::ui::mojom::EventDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadEvent(UserType* output) {
    auto* pointer = data_->event.Get();
    return mojo::internal::Deserialize<::ui::mojom::EventDataView>(
        pointer, output, context_);
  }
 private:
  internal::TextInputClient_DispatchKeyEventPostIME_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class TextInputClient_DispatchKeyEventPostIME_ResponseParamsDataView {
 public:
  TextInputClient_DispatchKeyEventPostIME_ResponseParamsDataView() {}

  TextInputClient_DispatchKeyEventPostIME_ResponseParamsDataView(
      internal::TextInputClient_DispatchKeyEventPostIME_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool stopped_propagation() const {
    return data_->stopped_propagation;
  }
 private:
  internal::TextInputClient_DispatchKeyEventPostIME_ResponseParams_Data* data_ = nullptr;
};



}  // namespace mojom
}  // namespace ui

namespace std {

template <>
struct hash<::ui::mojom::CandidateWindowPosition>
    : public mojo::internal::EnumHashImpl<::ui::mojom::CandidateWindowPosition> {};

template <>
struct hash<::ui::mojom::ImeTextSpanType>
    : public mojo::internal::EnumHashImpl<::ui::mojom::ImeTextSpanType> {};

template <>
struct hash<::ui::mojom::ImeTextSpanThickness>
    : public mojo::internal::EnumHashImpl<::ui::mojom::ImeTextSpanThickness> {};

template <>
struct hash<::ui::mojom::TextInputMode>
    : public mojo::internal::EnumHashImpl<::ui::mojom::TextInputMode> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::ui::mojom::CandidateWindowPosition, ::ui::mojom::CandidateWindowPosition> {
  static ::ui::mojom::CandidateWindowPosition ToMojom(::ui::mojom::CandidateWindowPosition input) { return input; }
  static bool FromMojom(::ui::mojom::CandidateWindowPosition input, ::ui::mojom::CandidateWindowPosition* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ui::mojom::CandidateWindowPosition, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::ui::mojom::CandidateWindowPosition, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::ui::mojom::CandidateWindowPosition>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::ui::mojom::ImeTextSpanType, ::ui::mojom::ImeTextSpanType> {
  static ::ui::mojom::ImeTextSpanType ToMojom(::ui::mojom::ImeTextSpanType input) { return input; }
  static bool FromMojom(::ui::mojom::ImeTextSpanType input, ::ui::mojom::ImeTextSpanType* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ui::mojom::ImeTextSpanType, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::ui::mojom::ImeTextSpanType, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::ui::mojom::ImeTextSpanType>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::ui::mojom::ImeTextSpanThickness, ::ui::mojom::ImeTextSpanThickness> {
  static ::ui::mojom::ImeTextSpanThickness ToMojom(::ui::mojom::ImeTextSpanThickness input) { return input; }
  static bool FromMojom(::ui::mojom::ImeTextSpanThickness input, ::ui::mojom::ImeTextSpanThickness* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ui::mojom::ImeTextSpanThickness, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::ui::mojom::ImeTextSpanThickness, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::ui::mojom::ImeTextSpanThickness>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::ui::mojom::TextInputMode, ::ui::mojom::TextInputMode> {
  static ::ui::mojom::TextInputMode ToMojom(::ui::mojom::TextInputMode input) { return input; }
  static bool FromMojom(::ui::mojom::TextInputMode input, ::ui::mojom::TextInputMode* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ui::mojom::TextInputMode, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::ui::mojom::TextInputMode, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::ui::mojom::TextInputMode>(input), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ui::mojom::CandidateWindowPropertiesDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::ui::mojom::CandidateWindowPropertiesDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::ui::mojom::internal::CandidateWindowProperties_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    (*output)->page_size = CallWithContext(Traits::page_size, input, custom_context);
    (*output)->vertical = CallWithContext(Traits::vertical, input, custom_context);
    decltype(CallWithContext(Traits::auxiliary_text, input, custom_context)) in_auxiliary_text = CallWithContext(Traits::auxiliary_text, input, custom_context);
    typename decltype((*output)->auxiliary_text)::BaseType::BufferWriter
        auxiliary_text_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_auxiliary_text, buffer, &auxiliary_text_writer, context);
    (*output)->auxiliary_text.Set(
        auxiliary_text_writer.is_null() ? nullptr : auxiliary_text_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->auxiliary_text.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null auxiliary_text in CandidateWindowProperties struct");
    (*output)->auxiliary_text_visible = CallWithContext(Traits::auxiliary_text_visible, input, custom_context);
    (*output)->cursor_position = CallWithContext(Traits::cursor_position, input, custom_context);
    (*output)->cursor_visible = CallWithContext(Traits::cursor_visible, input, custom_context);
    mojo::internal::Serialize<::ui::mojom::CandidateWindowPosition>(
        CallWithContext(Traits::window_position, input, custom_context), &(*output)->window_position);
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::ui::mojom::internal::CandidateWindowProperties_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::ui::mojom::CandidateWindowPropertiesDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ui::mojom::CandidateWindowEntryDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::ui::mojom::CandidateWindowEntryDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::ui::mojom::internal::CandidateWindowEntry_Data::BufferWriter* output,
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
        "null value in CandidateWindowEntry struct");
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
        "null label in CandidateWindowEntry struct");
    decltype(CallWithContext(Traits::annotation, input, custom_context)) in_annotation = CallWithContext(Traits::annotation, input, custom_context);
    typename decltype((*output)->annotation)::BaseType::BufferWriter
        annotation_writer;
    mojo::internal::Serialize<::mojo_base::mojom::String16DataView>(
        in_annotation, buffer, &annotation_writer, context);
    (*output)->annotation.Set(
        annotation_writer.is_null() ? nullptr : annotation_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->annotation.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null annotation in CandidateWindowEntry struct");
    decltype(CallWithContext(Traits::description_title, input, custom_context)) in_description_title = CallWithContext(Traits::description_title, input, custom_context);
    typename decltype((*output)->description_title)::BaseType::BufferWriter
        description_title_writer;
    mojo::internal::Serialize<::mojo_base::mojom::String16DataView>(
        in_description_title, buffer, &description_title_writer, context);
    (*output)->description_title.Set(
        description_title_writer.is_null() ? nullptr : description_title_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->description_title.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null description_title in CandidateWindowEntry struct");
    decltype(CallWithContext(Traits::description_body, input, custom_context)) in_description_body = CallWithContext(Traits::description_body, input, custom_context);
    typename decltype((*output)->description_body)::BaseType::BufferWriter
        description_body_writer;
    mojo::internal::Serialize<::mojo_base::mojom::String16DataView>(
        in_description_body, buffer, &description_body_writer, context);
    (*output)->description_body.Set(
        description_body_writer.is_null() ? nullptr : description_body_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->description_body.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null description_body in CandidateWindowEntry struct");
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::ui::mojom::internal::CandidateWindowEntry_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::ui::mojom::CandidateWindowEntryDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ui::mojom::ImeTextSpanDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::ui::mojom::ImeTextSpanDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::ui::mojom::internal::ImeTextSpan_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    mojo::internal::Serialize<::ui::mojom::ImeTextSpanType>(
        CallWithContext(Traits::type, input, custom_context), &(*output)->type);
    (*output)->start_offset = CallWithContext(Traits::start_offset, input, custom_context);
    (*output)->end_offset = CallWithContext(Traits::end_offset, input, custom_context);
    (*output)->underline_color = CallWithContext(Traits::underline_color, input, custom_context);
    mojo::internal::Serialize<::ui::mojom::ImeTextSpanThickness>(
        CallWithContext(Traits::thickness, input, custom_context), &(*output)->thickness);
    (*output)->background_color = CallWithContext(Traits::background_color, input, custom_context);
    (*output)->suggestion_highlight_color = CallWithContext(Traits::suggestion_highlight_color, input, custom_context);
    decltype(CallWithContext(Traits::suggestions, input, custom_context)) in_suggestions = CallWithContext(Traits::suggestions, input, custom_context);
    typename decltype((*output)->suggestions)::BaseType::BufferWriter
        suggestions_writer;
    const mojo::internal::ContainerValidateParams suggestions_validate_params(
        0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr));
    mojo::internal::Serialize<mojo::ArrayDataView<mojo::StringDataView>>(
        in_suggestions, buffer, &suggestions_writer, &suggestions_validate_params,
        context);
    (*output)->suggestions.Set(
        suggestions_writer.is_null() ? nullptr : suggestions_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->suggestions.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null suggestions in ImeTextSpan struct");
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::ui::mojom::internal::ImeTextSpan_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::ui::mojom::ImeTextSpanDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ui::mojom::CompositionTextDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::ui::mojom::CompositionTextDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::ui::mojom::internal::CompositionText_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    decltype(CallWithContext(Traits::text, input, custom_context)) in_text = CallWithContext(Traits::text, input, custom_context);
    typename decltype((*output)->text)::BaseType::BufferWriter
        text_writer;
    mojo::internal::Serialize<::mojo_base::mojom::String16DataView>(
        in_text, buffer, &text_writer, context);
    (*output)->text.Set(
        text_writer.is_null() ? nullptr : text_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->text.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null text in CompositionText struct");
    decltype(CallWithContext(Traits::ime_text_spans, input, custom_context)) in_ime_text_spans = CallWithContext(Traits::ime_text_spans, input, custom_context);
    typename decltype((*output)->ime_text_spans)::BaseType::BufferWriter
        ime_text_spans_writer;
    const mojo::internal::ContainerValidateParams ime_text_spans_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::ui::mojom::ImeTextSpanDataView>>(
        in_ime_text_spans, buffer, &ime_text_spans_writer, &ime_text_spans_validate_params,
        context);
    (*output)->ime_text_spans.Set(
        ime_text_spans_writer.is_null() ? nullptr : ime_text_spans_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->ime_text_spans.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null ime_text_spans in CompositionText struct");
    decltype(CallWithContext(Traits::selection, input, custom_context)) in_selection = CallWithContext(Traits::selection, input, custom_context);
    typename decltype((*output)->selection)::BaseType::BufferWriter
        selection_writer;
    mojo::internal::Serialize<::gfx::mojom::RangeDataView>(
        in_selection, buffer, &selection_writer, context);
    (*output)->selection.Set(
        selection_writer.is_null() ? nullptr : selection_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->selection.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null selection in CompositionText struct");
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::ui::mojom::internal::CompositionText_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::ui::mojom::CompositionTextDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ui::mojom::StartSessionDetailsDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::ui::mojom::StartSessionDetailsDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::ui::mojom::internal::StartSessionDetails_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    decltype(CallWithContext(Traits::client, input, custom_context)) in_client = CallWithContext(Traits::client, input, custom_context);
    mojo::internal::Serialize<::ui::mojom::TextInputClientPtrDataView>(
        in_client, &(*output)->client, context);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        !mojo::internal::IsHandleOrInterfaceValid((*output)->client),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
        "invalid client in StartSessionDetails struct");
    decltype(CallWithContext(Traits::input_method_request, input, custom_context)) in_input_method_request = CallWithContext(Traits::input_method_request, input, custom_context);
    mojo::internal::Serialize<::ui::mojom::InputMethodRequestDataView>(
        in_input_method_request, &(*output)->input_method_request, context);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        !mojo::internal::IsHandleOrInterfaceValid((*output)->input_method_request),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
        "invalid input_method_request in StartSessionDetails struct");
    mojo::internal::Serialize<::ui::mojom::TextInputType>(
        CallWithContext(Traits::text_input_type, input, custom_context), &(*output)->text_input_type);
    mojo::internal::Serialize<::ui::mojom::TextInputMode>(
        CallWithContext(Traits::text_input_mode, input, custom_context), &(*output)->text_input_mode);
    mojo::internal::Serialize<::mojo_base::mojom::TextDirection>(
        CallWithContext(Traits::text_direction, input, custom_context), &(*output)->text_direction);
    (*output)->text_input_flags = CallWithContext(Traits::text_input_flags, input, custom_context);
    decltype(CallWithContext(Traits::caret_bounds, input, custom_context)) in_caret_bounds = CallWithContext(Traits::caret_bounds, input, custom_context);
    typename decltype((*output)->caret_bounds)::BaseType::BufferWriter
        caret_bounds_writer;
    mojo::internal::Serialize<::gfx::mojom::RectDataView>(
        in_caret_bounds, buffer, &caret_bounds_writer, context);
    (*output)->caret_bounds.Set(
        caret_bounds_writer.is_null() ? nullptr : caret_bounds_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->caret_bounds.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null caret_bounds in StartSessionDetails struct");
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::ui::mojom::internal::StartSessionDetails_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::ui::mojom::StartSessionDetailsDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace ui {
namespace mojom {

inline void CandidateWindowPropertiesDataView::GetAuxiliaryTextDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->auxiliary_text.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void CandidateWindowEntryDataView::GetValueDataView(
    ::mojo_base::mojom::String16DataView* output) {
  auto pointer = data_->value.Get();
  *output = ::mojo_base::mojom::String16DataView(pointer, context_);
}
inline void CandidateWindowEntryDataView::GetLabelDataView(
    ::mojo_base::mojom::String16DataView* output) {
  auto pointer = data_->label.Get();
  *output = ::mojo_base::mojom::String16DataView(pointer, context_);
}
inline void CandidateWindowEntryDataView::GetAnnotationDataView(
    ::mojo_base::mojom::String16DataView* output) {
  auto pointer = data_->annotation.Get();
  *output = ::mojo_base::mojom::String16DataView(pointer, context_);
}
inline void CandidateWindowEntryDataView::GetDescriptionTitleDataView(
    ::mojo_base::mojom::String16DataView* output) {
  auto pointer = data_->description_title.Get();
  *output = ::mojo_base::mojom::String16DataView(pointer, context_);
}
inline void CandidateWindowEntryDataView::GetDescriptionBodyDataView(
    ::mojo_base::mojom::String16DataView* output) {
  auto pointer = data_->description_body.Get();
  *output = ::mojo_base::mojom::String16DataView(pointer, context_);
}


inline void ImeTextSpanDataView::GetSuggestionsDataView(
    mojo::ArrayDataView<mojo::StringDataView>* output) {
  auto pointer = data_->suggestions.Get();
  *output = mojo::ArrayDataView<mojo::StringDataView>(pointer, context_);
}


inline void CompositionTextDataView::GetTextDataView(
    ::mojo_base::mojom::String16DataView* output) {
  auto pointer = data_->text.Get();
  *output = ::mojo_base::mojom::String16DataView(pointer, context_);
}
inline void CompositionTextDataView::GetImeTextSpansDataView(
    mojo::ArrayDataView<ImeTextSpanDataView>* output) {
  auto pointer = data_->ime_text_spans.Get();
  *output = mojo::ArrayDataView<ImeTextSpanDataView>(pointer, context_);
}
inline void CompositionTextDataView::GetSelectionDataView(
    ::gfx::mojom::RangeDataView* output) {
  auto pointer = data_->selection.Get();
  *output = ::gfx::mojom::RangeDataView(pointer, context_);
}


inline void StartSessionDetailsDataView::GetCaretBoundsDataView(
    ::gfx::mojom::RectDataView* output) {
  auto pointer = data_->caret_bounds.Get();
  *output = ::gfx::mojom::RectDataView(pointer, context_);
}


inline void IMEDriver_StartSession_ParamsDataView::GetDetailsDataView(
    StartSessionDetailsDataView* output) {
  auto pointer = data_->details.Get();
  *output = StartSessionDetailsDataView(pointer, context_);
}






inline void InputMethod_OnCaretBoundsChanged_ParamsDataView::GetCaretBoundsDataView(
    ::gfx::mojom::RectDataView* output) {
  auto pointer = data_->caret_bounds.Get();
  *output = ::gfx::mojom::RectDataView(pointer, context_);
}


inline void InputMethod_ProcessKeyEvent_ParamsDataView::GetKeyEventDataView(
    ::ui::mojom::EventDataView* output) {
  auto pointer = data_->key_event.Get();
  *output = ::ui::mojom::EventDataView(pointer, context_);
}






inline void TextInputClient_SetCompositionText_ParamsDataView::GetCompositionDataView(
    CompositionTextDataView* output) {
  auto pointer = data_->composition.Get();
  *output = CompositionTextDataView(pointer, context_);
}






inline void TextInputClient_InsertText_ParamsDataView::GetTextDataView(
    ::mojo_base::mojom::String16DataView* output) {
  auto pointer = data_->text.Get();
  *output = ::mojo_base::mojom::String16DataView(pointer, context_);
}


inline void TextInputClient_InsertChar_ParamsDataView::GetEventDataView(
    ::ui::mojom::EventDataView* output) {
  auto pointer = data_->event.Get();
  *output = ::ui::mojom::EventDataView(pointer, context_);
}


inline void TextInputClient_DispatchKeyEventPostIME_ParamsDataView::GetEventDataView(
    ::ui::mojom::EventDataView* output) {
  auto pointer = data_->event.Get();
  *output = ::ui::mojom::EventDataView(pointer, context_);
}





}  // namespace mojom
}  // namespace ui

#endif  // SERVICES_UI_PUBLIC_INTERFACES_IME_IME_MOJOM_SHARED_H_
