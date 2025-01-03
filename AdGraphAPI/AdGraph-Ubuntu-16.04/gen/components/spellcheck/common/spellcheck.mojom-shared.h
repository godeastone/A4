// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_SPELLCHECK_COMMON_SPELLCHECK_MOJOM_SHARED_H_
#define COMPONENTS_SPELLCHECK_COMMON_SPELLCHECK_MOJOM_SHARED_H_

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
#include "components/spellcheck/common/spellcheck.mojom-shared-internal.h"
#include "mojo/public/mojom/base/file.mojom-shared.h"
#include "mojo/public/mojom/base/string16.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"


namespace spellcheck {
namespace mojom {
class SpellCheckBDictLanguageDataView;

class SpellCheckResultDataView;



}  // namespace mojom
}  // namespace spellcheck

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::spellcheck::mojom::SpellCheckBDictLanguageDataView> {
  using Data = ::spellcheck::mojom::internal::SpellCheckBDictLanguage_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::spellcheck::mojom::SpellCheckResultDataView> {
  using Data = ::spellcheck::mojom::internal::SpellCheckResult_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace spellcheck {
namespace mojom {

enum class Decoration : int32_t {
  kSpelling,
  kGrammar,
  kMinValue = 0,
  kMaxValue = 1,
};

inline std::ostream& operator<<(std::ostream& os, Decoration value) {
  switch(value) {
    case Decoration::kSpelling:
      return os << "Decoration::kSpelling";
    case Decoration::kGrammar:
      return os << "Decoration::kGrammar";
    default:
      return os << "Unknown Decoration value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(Decoration value) {
  return internal::Decoration_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
// Interface base classes. They are used for type safety check.
class SpellCheckerInterfaceBase {};

using SpellCheckerPtrDataView =
    mojo::InterfacePtrDataView<SpellCheckerInterfaceBase>;
using SpellCheckerRequestDataView =
    mojo::InterfaceRequestDataView<SpellCheckerInterfaceBase>;
using SpellCheckerAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<SpellCheckerInterfaceBase>;
using SpellCheckerAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<SpellCheckerInterfaceBase>;
class SpellCheckHostInterfaceBase {};

using SpellCheckHostPtrDataView =
    mojo::InterfacePtrDataView<SpellCheckHostInterfaceBase>;
using SpellCheckHostRequestDataView =
    mojo::InterfaceRequestDataView<SpellCheckHostInterfaceBase>;
using SpellCheckHostAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<SpellCheckHostInterfaceBase>;
using SpellCheckHostAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<SpellCheckHostInterfaceBase>;
class SpellCheckBDictLanguageDataView {
 public:
  SpellCheckBDictLanguageDataView() {}

  SpellCheckBDictLanguageDataView(
      internal::SpellCheckBDictLanguage_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetFileDataView(
      ::mojo_base::mojom::FileDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFile(UserType* output) {
    auto* pointer = data_->file.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::FileDataView>(
        pointer, output, context_);
  }
  inline void GetLanguageDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadLanguage(UserType* output) {
    auto* pointer = data_->language.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::SpellCheckBDictLanguage_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class SpellCheckResultDataView {
 public:
  SpellCheckResultDataView() {}

  SpellCheckResultDataView(
      internal::SpellCheckResult_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDecoration(UserType* output) const {
    auto data_value = data_->decoration;
    return mojo::internal::Deserialize<::spellcheck::mojom::Decoration>(
        data_value, output);
  }

  Decoration decoration() const {
    return static_cast<Decoration>(data_->decoration);
  }
  int32_t location() const {
    return data_->location;
  }
  int32_t length() const {
    return data_->length;
  }
  inline void GetReplacementsDataView(
      mojo::ArrayDataView<::mojo_base::mojom::String16DataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadReplacements(UserType* output) {
    auto* pointer = data_->replacements.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::mojo_base::mojom::String16DataView>>(
        pointer, output, context_);
  }
 private:
  internal::SpellCheckResult_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class SpellChecker_Initialize_ParamsDataView {
 public:
  SpellChecker_Initialize_ParamsDataView() {}

  SpellChecker_Initialize_ParamsDataView(
      internal::SpellChecker_Initialize_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetDictionariesDataView(
      mojo::ArrayDataView<SpellCheckBDictLanguageDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDictionaries(UserType* output) {
    auto* pointer = data_->dictionaries.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::spellcheck::mojom::SpellCheckBDictLanguageDataView>>(
        pointer, output, context_);
  }
  inline void GetCustomWordsDataView(
      mojo::ArrayDataView<mojo::StringDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCustomWords(UserType* output) {
    auto* pointer = data_->custom_words.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<mojo::StringDataView>>(
        pointer, output, context_);
  }
  bool enable() const {
    return data_->enable;
  }
 private:
  internal::SpellChecker_Initialize_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class SpellChecker_CustomDictionaryChanged_ParamsDataView {
 public:
  SpellChecker_CustomDictionaryChanged_ParamsDataView() {}

  SpellChecker_CustomDictionaryChanged_ParamsDataView(
      internal::SpellChecker_CustomDictionaryChanged_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetWordsAddedDataView(
      mojo::ArrayDataView<mojo::StringDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadWordsAdded(UserType* output) {
    auto* pointer = data_->words_added.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<mojo::StringDataView>>(
        pointer, output, context_);
  }
  inline void GetWordsRemovedDataView(
      mojo::ArrayDataView<mojo::StringDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadWordsRemoved(UserType* output) {
    auto* pointer = data_->words_removed.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<mojo::StringDataView>>(
        pointer, output, context_);
  }
 private:
  internal::SpellChecker_CustomDictionaryChanged_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class SpellCheckHost_RequestDictionary_ParamsDataView {
 public:
  SpellCheckHost_RequestDictionary_ParamsDataView() {}

  SpellCheckHost_RequestDictionary_ParamsDataView(
      internal::SpellCheckHost_RequestDictionary_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::SpellCheckHost_RequestDictionary_Params_Data* data_ = nullptr;
};

class SpellCheckHost_NotifyChecked_ParamsDataView {
 public:
  SpellCheckHost_NotifyChecked_ParamsDataView() {}

  SpellCheckHost_NotifyChecked_ParamsDataView(
      internal::SpellCheckHost_NotifyChecked_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetWordDataView(
      ::mojo_base::mojom::String16DataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadWord(UserType* output) {
    auto* pointer = data_->word.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::String16DataView>(
        pointer, output, context_);
  }
  bool misspelled() const {
    return data_->misspelled;
  }
 private:
  internal::SpellCheckHost_NotifyChecked_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class SpellCheckHost_CallSpellingService_ParamsDataView {
 public:
  SpellCheckHost_CallSpellingService_ParamsDataView() {}

  SpellCheckHost_CallSpellingService_ParamsDataView(
      internal::SpellCheckHost_CallSpellingService_Params_Data* data,
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
  internal::SpellCheckHost_CallSpellingService_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class SpellCheckHost_CallSpellingService_ResponseParamsDataView {
 public:
  SpellCheckHost_CallSpellingService_ResponseParamsDataView() {}

  SpellCheckHost_CallSpellingService_ResponseParamsDataView(
      internal::SpellCheckHost_CallSpellingService_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  bool success() const {
    return data_->success;
  }
  inline void GetResultsDataView(
      mojo::ArrayDataView<SpellCheckResultDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadResults(UserType* output) {
    auto* pointer = data_->results.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::spellcheck::mojom::SpellCheckResultDataView>>(
        pointer, output, context_);
  }
 private:
  internal::SpellCheckHost_CallSpellingService_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace spellcheck

namespace std {

template <>
struct hash<::spellcheck::mojom::Decoration>
    : public mojo::internal::EnumHashImpl<::spellcheck::mojom::Decoration> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::spellcheck::mojom::Decoration, ::spellcheck::mojom::Decoration> {
  static ::spellcheck::mojom::Decoration ToMojom(::spellcheck::mojom::Decoration input) { return input; }
  static bool FromMojom(::spellcheck::mojom::Decoration input, ::spellcheck::mojom::Decoration* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::spellcheck::mojom::Decoration, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::spellcheck::mojom::Decoration, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::spellcheck::mojom::Decoration>(input), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::spellcheck::mojom::SpellCheckBDictLanguageDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::spellcheck::mojom::SpellCheckBDictLanguageDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::spellcheck::mojom::internal::SpellCheckBDictLanguage_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    decltype(CallWithContext(Traits::file, input, custom_context)) in_file = CallWithContext(Traits::file, input, custom_context);
    typename decltype((*output)->file)::BaseType::BufferWriter
        file_writer;
    mojo::internal::Serialize<::mojo_base::mojom::FileDataView>(
        in_file, buffer, &file_writer, context);
    (*output)->file.Set(
        file_writer.is_null() ? nullptr : file_writer.data());
    decltype(CallWithContext(Traits::language, input, custom_context)) in_language = CallWithContext(Traits::language, input, custom_context);
    typename decltype((*output)->language)::BaseType::BufferWriter
        language_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_language, buffer, &language_writer, context);
    (*output)->language.Set(
        language_writer.is_null() ? nullptr : language_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->language.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null language in SpellCheckBDictLanguage struct");
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::spellcheck::mojom::internal::SpellCheckBDictLanguage_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::spellcheck::mojom::SpellCheckBDictLanguageDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::spellcheck::mojom::SpellCheckResultDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::spellcheck::mojom::SpellCheckResultDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::spellcheck::mojom::internal::SpellCheckResult_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    mojo::internal::Serialize<::spellcheck::mojom::Decoration>(
        CallWithContext(Traits::decoration, input, custom_context), &(*output)->decoration);
    (*output)->location = CallWithContext(Traits::location, input, custom_context);
    (*output)->length = CallWithContext(Traits::length, input, custom_context);
    decltype(CallWithContext(Traits::replacements, input, custom_context)) in_replacements = CallWithContext(Traits::replacements, input, custom_context);
    typename decltype((*output)->replacements)::BaseType::BufferWriter
        replacements_writer;
    const mojo::internal::ContainerValidateParams replacements_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::mojo_base::mojom::String16DataView>>(
        in_replacements, buffer, &replacements_writer, &replacements_validate_params,
        context);
    (*output)->replacements.Set(
        replacements_writer.is_null() ? nullptr : replacements_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->replacements.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null replacements in SpellCheckResult struct");
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::spellcheck::mojom::internal::SpellCheckResult_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::spellcheck::mojom::SpellCheckResultDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace spellcheck {
namespace mojom {

inline void SpellCheckBDictLanguageDataView::GetFileDataView(
    ::mojo_base::mojom::FileDataView* output) {
  auto pointer = data_->file.Get();
  *output = ::mojo_base::mojom::FileDataView(pointer, context_);
}
inline void SpellCheckBDictLanguageDataView::GetLanguageDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->language.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void SpellCheckResultDataView::GetReplacementsDataView(
    mojo::ArrayDataView<::mojo_base::mojom::String16DataView>* output) {
  auto pointer = data_->replacements.Get();
  *output = mojo::ArrayDataView<::mojo_base::mojom::String16DataView>(pointer, context_);
}


inline void SpellChecker_Initialize_ParamsDataView::GetDictionariesDataView(
    mojo::ArrayDataView<SpellCheckBDictLanguageDataView>* output) {
  auto pointer = data_->dictionaries.Get();
  *output = mojo::ArrayDataView<SpellCheckBDictLanguageDataView>(pointer, context_);
}
inline void SpellChecker_Initialize_ParamsDataView::GetCustomWordsDataView(
    mojo::ArrayDataView<mojo::StringDataView>* output) {
  auto pointer = data_->custom_words.Get();
  *output = mojo::ArrayDataView<mojo::StringDataView>(pointer, context_);
}


inline void SpellChecker_CustomDictionaryChanged_ParamsDataView::GetWordsAddedDataView(
    mojo::ArrayDataView<mojo::StringDataView>* output) {
  auto pointer = data_->words_added.Get();
  *output = mojo::ArrayDataView<mojo::StringDataView>(pointer, context_);
}
inline void SpellChecker_CustomDictionaryChanged_ParamsDataView::GetWordsRemovedDataView(
    mojo::ArrayDataView<mojo::StringDataView>* output) {
  auto pointer = data_->words_removed.Get();
  *output = mojo::ArrayDataView<mojo::StringDataView>(pointer, context_);
}




inline void SpellCheckHost_NotifyChecked_ParamsDataView::GetWordDataView(
    ::mojo_base::mojom::String16DataView* output) {
  auto pointer = data_->word.Get();
  *output = ::mojo_base::mojom::String16DataView(pointer, context_);
}


inline void SpellCheckHost_CallSpellingService_ParamsDataView::GetTextDataView(
    ::mojo_base::mojom::String16DataView* output) {
  auto pointer = data_->text.Get();
  *output = ::mojo_base::mojom::String16DataView(pointer, context_);
}


inline void SpellCheckHost_CallSpellingService_ResponseParamsDataView::GetResultsDataView(
    mojo::ArrayDataView<SpellCheckResultDataView>* output) {
  auto pointer = data_->results.Get();
  *output = mojo::ArrayDataView<SpellCheckResultDataView>(pointer, context_);
}



}  // namespace mojom
}  // namespace spellcheck

#endif  // COMPONENTS_SPELLCHECK_COMMON_SPELLCHECK_MOJOM_SHARED_H_
