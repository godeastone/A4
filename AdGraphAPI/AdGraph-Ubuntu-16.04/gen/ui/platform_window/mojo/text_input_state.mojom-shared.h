// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef UI_PLATFORM_WINDOW_MOJO_TEXT_INPUT_STATE_MOJOM_SHARED_H_
#define UI_PLATFORM_WINDOW_MOJO_TEXT_INPUT_STATE_MOJOM_SHARED_H_

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
#include "ui/platform_window/mojo/text_input_state.mojom-shared-internal.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"


namespace ui {
namespace mojom {
class TextInputStateDataView;



}  // namespace mojom
}  // namespace ui

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::ui::mojom::TextInputStateDataView> {
  using Data = ::ui::mojom::internal::TextInputState_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace ui {
namespace mojom {

enum class TextInputType : int32_t {
  NONE,
  TEXT,
  PASSWORD,
  SEARCH,
  EMAIL,
  NUMBER,
  TELEPHONE,
  URL,
  DATE,
  DATE_TIME,
  DATE_TIME_LOCAL,
  MONTH,
  TIME,
  WEEK,
  TEXT_AREA,
  CONTENT_EDITABLE,
  DATE_TIME_FIELD,
  MAX = TextInputType::DATE_TIME_FIELD,
  kMinValue = 0,
  kMaxValue = 16,
};

inline std::ostream& operator<<(std::ostream& os, TextInputType value) {
  switch(value) {
    case TextInputType::NONE:
      return os << "TextInputType::NONE";
    case TextInputType::TEXT:
      return os << "TextInputType::TEXT";
    case TextInputType::PASSWORD:
      return os << "TextInputType::PASSWORD";
    case TextInputType::SEARCH:
      return os << "TextInputType::SEARCH";
    case TextInputType::EMAIL:
      return os << "TextInputType::EMAIL";
    case TextInputType::NUMBER:
      return os << "TextInputType::NUMBER";
    case TextInputType::TELEPHONE:
      return os << "TextInputType::TELEPHONE";
    case TextInputType::URL:
      return os << "TextInputType::URL";
    case TextInputType::DATE:
      return os << "TextInputType::DATE";
    case TextInputType::DATE_TIME:
      return os << "TextInputType::DATE_TIME";
    case TextInputType::DATE_TIME_LOCAL:
      return os << "TextInputType::DATE_TIME_LOCAL";
    case TextInputType::MONTH:
      return os << "TextInputType::MONTH";
    case TextInputType::TIME:
      return os << "TextInputType::TIME";
    case TextInputType::WEEK:
      return os << "TextInputType::WEEK";
    case TextInputType::TEXT_AREA:
      return os << "TextInputType::TEXT_AREA";
    case TextInputType::CONTENT_EDITABLE:
      return os << "TextInputType::CONTENT_EDITABLE";
    case TextInputType::DATE_TIME_FIELD:
      return os << "TextInputType::{DATE_TIME_FIELD, MAX}";
    default:
      return os << "Unknown TextInputType value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(TextInputType value) {
  return internal::TextInputType_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

enum class TextInputFlag : int32_t {
  NONE,
  AUTOCOMPLETE_ON = 0x001,
  AUTOCOMPLETE_OFF = 0x002,
  AUTOCORRECT_ON = 0x004,
  AUTOCORRECT_OFF = 0x008,
  SPELLCHECK_ON = 0x010,
  SPELLCHECK_OFF = 0x020,
  AUTOCAPITALIZE_NONE = 0x040,
  AUTOCAPITALIZE_CHARACTERS = 0x080,
  AUTOCAPITALIZE_WORDS = 0x100,
  AUTOCAPITALIZE_SENTENCES = 0x200,
  ALL = 0x3FF,
  kMinValue = 0,
  kMaxValue = 1023,
};

inline std::ostream& operator<<(std::ostream& os, TextInputFlag value) {
  switch(value) {
    case TextInputFlag::NONE:
      return os << "TextInputFlag::NONE";
    case TextInputFlag::AUTOCOMPLETE_ON:
      return os << "TextInputFlag::AUTOCOMPLETE_ON";
    case TextInputFlag::AUTOCOMPLETE_OFF:
      return os << "TextInputFlag::AUTOCOMPLETE_OFF";
    case TextInputFlag::AUTOCORRECT_ON:
      return os << "TextInputFlag::AUTOCORRECT_ON";
    case TextInputFlag::AUTOCORRECT_OFF:
      return os << "TextInputFlag::AUTOCORRECT_OFF";
    case TextInputFlag::SPELLCHECK_ON:
      return os << "TextInputFlag::SPELLCHECK_ON";
    case TextInputFlag::SPELLCHECK_OFF:
      return os << "TextInputFlag::SPELLCHECK_OFF";
    case TextInputFlag::AUTOCAPITALIZE_NONE:
      return os << "TextInputFlag::AUTOCAPITALIZE_NONE";
    case TextInputFlag::AUTOCAPITALIZE_CHARACTERS:
      return os << "TextInputFlag::AUTOCAPITALIZE_CHARACTERS";
    case TextInputFlag::AUTOCAPITALIZE_WORDS:
      return os << "TextInputFlag::AUTOCAPITALIZE_WORDS";
    case TextInputFlag::AUTOCAPITALIZE_SENTENCES:
      return os << "TextInputFlag::AUTOCAPITALIZE_SENTENCES";
    case TextInputFlag::ALL:
      return os << "TextInputFlag::ALL";
    default:
      return os << "Unknown TextInputFlag value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(TextInputFlag value) {
  return internal::TextInputFlag_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
class TextInputStateDataView {
 public:
  TextInputStateDataView() {}

  TextInputStateDataView(
      internal::TextInputState_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadType(UserType* output) const {
    auto data_value = data_->type;
    return mojo::internal::Deserialize<::ui::mojom::TextInputType>(
        data_value, output);
  }

  TextInputType type() const {
    return static_cast<TextInputType>(data_->type);
  }
  int32_t flags() const {
    return data_->flags;
  }
  inline void GetTextDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadText(UserType* output) {
    auto* pointer = data_->text.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  int32_t selection_start() const {
    return data_->selection_start;
  }
  int32_t selection_end() const {
    return data_->selection_end;
  }
  int32_t composition_start() const {
    return data_->composition_start;
  }
  int32_t composition_end() const {
    return data_->composition_end;
  }
  bool can_compose_inline() const {
    return data_->can_compose_inline;
  }
 private:
  internal::TextInputState_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace ui

namespace std {

template <>
struct hash<::ui::mojom::TextInputType>
    : public mojo::internal::EnumHashImpl<::ui::mojom::TextInputType> {};

template <>
struct hash<::ui::mojom::TextInputFlag>
    : public mojo::internal::EnumHashImpl<::ui::mojom::TextInputFlag> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::ui::mojom::TextInputType, ::ui::mojom::TextInputType> {
  static ::ui::mojom::TextInputType ToMojom(::ui::mojom::TextInputType input) { return input; }
  static bool FromMojom(::ui::mojom::TextInputType input, ::ui::mojom::TextInputType* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ui::mojom::TextInputType, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::ui::mojom::TextInputType, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::ui::mojom::TextInputType>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::ui::mojom::TextInputFlag, ::ui::mojom::TextInputFlag> {
  static ::ui::mojom::TextInputFlag ToMojom(::ui::mojom::TextInputFlag input) { return input; }
  static bool FromMojom(::ui::mojom::TextInputFlag input, ::ui::mojom::TextInputFlag* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ui::mojom::TextInputFlag, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::ui::mojom::TextInputFlag, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::ui::mojom::TextInputFlag>(input), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ui::mojom::TextInputStateDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::ui::mojom::TextInputStateDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::ui::mojom::internal::TextInputState_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    mojo::internal::Serialize<::ui::mojom::TextInputType>(
        CallWithContext(Traits::type, input, custom_context), &(*output)->type);
    (*output)->flags = CallWithContext(Traits::flags, input, custom_context);
    decltype(CallWithContext(Traits::text, input, custom_context)) in_text = CallWithContext(Traits::text, input, custom_context);
    typename decltype((*output)->text)::BaseType::BufferWriter
        text_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_text, buffer, &text_writer, context);
    (*output)->text.Set(
        text_writer.is_null() ? nullptr : text_writer.data());
    (*output)->selection_start = CallWithContext(Traits::selection_start, input, custom_context);
    (*output)->selection_end = CallWithContext(Traits::selection_end, input, custom_context);
    (*output)->composition_start = CallWithContext(Traits::composition_start, input, custom_context);
    (*output)->composition_end = CallWithContext(Traits::composition_end, input, custom_context);
    (*output)->can_compose_inline = CallWithContext(Traits::can_compose_inline, input, custom_context);
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::ui::mojom::internal::TextInputState_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::ui::mojom::TextInputStateDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace ui {
namespace mojom {

inline void TextInputStateDataView::GetTextDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->text.Get();
  *output = mojo::StringDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace ui

#endif  // UI_PLATFORM_WINDOW_MOJO_TEXT_INPUT_STATE_MOJOM_SHARED_H_
