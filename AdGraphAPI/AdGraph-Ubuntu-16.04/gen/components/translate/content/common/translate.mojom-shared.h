// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_TRANSLATE_CONTENT_COMMON_TRANSLATE_MOJOM_SHARED_H_
#define COMPONENTS_TRANSLATE_CONTENT_COMMON_TRANSLATE_MOJOM_SHARED_H_

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
#include "components/translate/content/common/translate.mojom-shared-internal.h"
#include "mojo/public/mojom/base/time.mojom-shared.h"
#include "mojo/public/mojom/base/string16.mojom-shared.h"
#include "url/mojom/url.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"


namespace translate {
namespace mojom {
class LanguageDetectionDetailsDataView;



}  // namespace mojom
}  // namespace translate

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::translate::mojom::LanguageDetectionDetailsDataView> {
  using Data = ::translate::mojom::internal::LanguageDetectionDetails_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace translate {
namespace mojom {

enum class TranslateError : int32_t {
  NONE,
  NETWORK,
  INITIALIZATION_ERROR,
  UNKNOWN_LANGUAGE,
  UNSUPPORTED_LANGUAGE,
  IDENTICAL_LANGUAGES,
  TRANSLATION_ERROR,
  TRANSLATION_TIMEOUT,
  UNEXPECTED_SCRIPT_ERROR,
  BAD_ORIGIN,
  SCRIPT_LOAD_ERROR,
  TRANSLATE_ERROR_MAX,
  kMinValue = 0,
  kMaxValue = 11,
};

inline std::ostream& operator<<(std::ostream& os, TranslateError value) {
  switch(value) {
    case TranslateError::NONE:
      return os << "TranslateError::NONE";
    case TranslateError::NETWORK:
      return os << "TranslateError::NETWORK";
    case TranslateError::INITIALIZATION_ERROR:
      return os << "TranslateError::INITIALIZATION_ERROR";
    case TranslateError::UNKNOWN_LANGUAGE:
      return os << "TranslateError::UNKNOWN_LANGUAGE";
    case TranslateError::UNSUPPORTED_LANGUAGE:
      return os << "TranslateError::UNSUPPORTED_LANGUAGE";
    case TranslateError::IDENTICAL_LANGUAGES:
      return os << "TranslateError::IDENTICAL_LANGUAGES";
    case TranslateError::TRANSLATION_ERROR:
      return os << "TranslateError::TRANSLATION_ERROR";
    case TranslateError::TRANSLATION_TIMEOUT:
      return os << "TranslateError::TRANSLATION_TIMEOUT";
    case TranslateError::UNEXPECTED_SCRIPT_ERROR:
      return os << "TranslateError::UNEXPECTED_SCRIPT_ERROR";
    case TranslateError::BAD_ORIGIN:
      return os << "TranslateError::BAD_ORIGIN";
    case TranslateError::SCRIPT_LOAD_ERROR:
      return os << "TranslateError::SCRIPT_LOAD_ERROR";
    case TranslateError::TRANSLATE_ERROR_MAX:
      return os << "TranslateError::TRANSLATE_ERROR_MAX";
    default:
      return os << "Unknown TranslateError value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(TranslateError value) {
  return internal::TranslateError_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
// Interface base classes. They are used for type safety check.
class PageInterfaceBase {};

using PagePtrDataView =
    mojo::InterfacePtrDataView<PageInterfaceBase>;
using PageRequestDataView =
    mojo::InterfaceRequestDataView<PageInterfaceBase>;
using PageAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<PageInterfaceBase>;
using PageAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<PageInterfaceBase>;
class ContentTranslateDriverInterfaceBase {};

using ContentTranslateDriverPtrDataView =
    mojo::InterfacePtrDataView<ContentTranslateDriverInterfaceBase>;
using ContentTranslateDriverRequestDataView =
    mojo::InterfaceRequestDataView<ContentTranslateDriverInterfaceBase>;
using ContentTranslateDriverAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<ContentTranslateDriverInterfaceBase>;
using ContentTranslateDriverAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<ContentTranslateDriverInterfaceBase>;
class LanguageDetectionDetailsDataView {
 public:
  LanguageDetectionDetailsDataView() {}

  LanguageDetectionDetailsDataView(
      internal::LanguageDetectionDetails_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetTimeDataView(
      ::mojo_base::mojom::TimeDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTime(UserType* output) {
    auto* pointer = data_->time.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeDataView>(
        pointer, output, context_);
  }
  inline void GetUrlDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUrl(UserType* output) {
    auto* pointer = data_->url.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
  inline void GetContentLanguageDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadContentLanguage(UserType* output) {
    auto* pointer = data_->content_language.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetCldLanguageDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCldLanguage(UserType* output) {
    auto* pointer = data_->cld_language.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  bool is_cld_reliable() const {
    return data_->is_cld_reliable;
  }
  bool has_notranslate() const {
    return data_->has_notranslate;
  }
  inline void GetHtmlRootLanguageDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadHtmlRootLanguage(UserType* output) {
    auto* pointer = data_->html_root_language.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetAdoptedLanguageDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadAdoptedLanguage(UserType* output) {
    auto* pointer = data_->adopted_language.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetContentsDataView(
      ::mojo_base::mojom::String16DataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadContents(UserType* output) {
    auto* pointer = data_->contents.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::String16DataView>(
        pointer, output, context_);
  }
 private:
  internal::LanguageDetectionDetails_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Page_Translate_ParamsDataView {
 public:
  Page_Translate_ParamsDataView() {}

  Page_Translate_ParamsDataView(
      internal::Page_Translate_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetTranslateScriptDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTranslateScript(UserType* output) {
    auto* pointer = data_->translate_script.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetSourceLangDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSourceLang(UserType* output) {
    auto* pointer = data_->source_lang.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetTargetLangDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTargetLang(UserType* output) {
    auto* pointer = data_->target_lang.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::Page_Translate_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Page_Translate_ResponseParamsDataView {
 public:
  Page_Translate_ResponseParamsDataView() {}

  Page_Translate_ResponseParamsDataView(
      internal::Page_Translate_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  bool cancelled() const {
    return data_->cancelled;
  }
  inline void GetOriginalLangDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadOriginalLang(UserType* output) {
    auto* pointer = data_->original_lang.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetTranslatedLangDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTranslatedLang(UserType* output) {
    auto* pointer = data_->translated_lang.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadError(UserType* output) const {
    auto data_value = data_->error;
    return mojo::internal::Deserialize<::translate::mojom::TranslateError>(
        data_value, output);
  }

  TranslateError error() const {
    return static_cast<TranslateError>(data_->error);
  }
 private:
  internal::Page_Translate_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Page_RevertTranslation_ParamsDataView {
 public:
  Page_RevertTranslation_ParamsDataView() {}

  Page_RevertTranslation_ParamsDataView(
      internal::Page_RevertTranslation_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::Page_RevertTranslation_Params_Data* data_ = nullptr;
};

class ContentTranslateDriver_RegisterPage_ParamsDataView {
 public:
  ContentTranslateDriver_RegisterPage_ParamsDataView() {}

  ContentTranslateDriver_RegisterPage_ParamsDataView(
      internal::ContentTranslateDriver_RegisterPage_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakePage() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::translate::mojom::PagePtrDataView>(
            &data_->page, &result, context_);
    DCHECK(ret);
    return result;
  }
  inline void GetDetailsDataView(
      LanguageDetectionDetailsDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDetails(UserType* output) {
    auto* pointer = data_->details.Get();
    return mojo::internal::Deserialize<::translate::mojom::LanguageDetectionDetailsDataView>(
        pointer, output, context_);
  }
  bool page_needs_translation() const {
    return data_->page_needs_translation;
  }
 private:
  internal::ContentTranslateDriver_RegisterPage_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace translate

namespace std {

template <>
struct hash<::translate::mojom::TranslateError>
    : public mojo::internal::EnumHashImpl<::translate::mojom::TranslateError> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::translate::mojom::TranslateError, ::translate::mojom::TranslateError> {
  static ::translate::mojom::TranslateError ToMojom(::translate::mojom::TranslateError input) { return input; }
  static bool FromMojom(::translate::mojom::TranslateError input, ::translate::mojom::TranslateError* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::translate::mojom::TranslateError, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::translate::mojom::TranslateError, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::translate::mojom::TranslateError>(input), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::translate::mojom::LanguageDetectionDetailsDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::translate::mojom::LanguageDetectionDetailsDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::translate::mojom::internal::LanguageDetectionDetails_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    decltype(CallWithContext(Traits::time, input, custom_context)) in_time = CallWithContext(Traits::time, input, custom_context);
    typename decltype((*output)->time)::BaseType::BufferWriter
        time_writer;
    mojo::internal::Serialize<::mojo_base::mojom::TimeDataView>(
        in_time, buffer, &time_writer, context);
    (*output)->time.Set(
        time_writer.is_null() ? nullptr : time_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->time.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null time in LanguageDetectionDetails struct");
    decltype(CallWithContext(Traits::url, input, custom_context)) in_url = CallWithContext(Traits::url, input, custom_context);
    typename decltype((*output)->url)::BaseType::BufferWriter
        url_writer;
    mojo::internal::Serialize<::url::mojom::UrlDataView>(
        in_url, buffer, &url_writer, context);
    (*output)->url.Set(
        url_writer.is_null() ? nullptr : url_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->url.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null url in LanguageDetectionDetails struct");
    decltype(CallWithContext(Traits::content_language, input, custom_context)) in_content_language = CallWithContext(Traits::content_language, input, custom_context);
    typename decltype((*output)->content_language)::BaseType::BufferWriter
        content_language_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_content_language, buffer, &content_language_writer, context);
    (*output)->content_language.Set(
        content_language_writer.is_null() ? nullptr : content_language_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->content_language.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null content_language in LanguageDetectionDetails struct");
    decltype(CallWithContext(Traits::cld_language, input, custom_context)) in_cld_language = CallWithContext(Traits::cld_language, input, custom_context);
    typename decltype((*output)->cld_language)::BaseType::BufferWriter
        cld_language_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_cld_language, buffer, &cld_language_writer, context);
    (*output)->cld_language.Set(
        cld_language_writer.is_null() ? nullptr : cld_language_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->cld_language.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null cld_language in LanguageDetectionDetails struct");
    (*output)->is_cld_reliable = CallWithContext(Traits::is_cld_reliable, input, custom_context);
    (*output)->has_notranslate = CallWithContext(Traits::has_notranslate, input, custom_context);
    decltype(CallWithContext(Traits::html_root_language, input, custom_context)) in_html_root_language = CallWithContext(Traits::html_root_language, input, custom_context);
    typename decltype((*output)->html_root_language)::BaseType::BufferWriter
        html_root_language_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_html_root_language, buffer, &html_root_language_writer, context);
    (*output)->html_root_language.Set(
        html_root_language_writer.is_null() ? nullptr : html_root_language_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->html_root_language.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null html_root_language in LanguageDetectionDetails struct");
    decltype(CallWithContext(Traits::adopted_language, input, custom_context)) in_adopted_language = CallWithContext(Traits::adopted_language, input, custom_context);
    typename decltype((*output)->adopted_language)::BaseType::BufferWriter
        adopted_language_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_adopted_language, buffer, &adopted_language_writer, context);
    (*output)->adopted_language.Set(
        adopted_language_writer.is_null() ? nullptr : adopted_language_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->adopted_language.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null adopted_language in LanguageDetectionDetails struct");
    decltype(CallWithContext(Traits::contents, input, custom_context)) in_contents = CallWithContext(Traits::contents, input, custom_context);
    typename decltype((*output)->contents)::BaseType::BufferWriter
        contents_writer;
    mojo::internal::Serialize<::mojo_base::mojom::String16DataView>(
        in_contents, buffer, &contents_writer, context);
    (*output)->contents.Set(
        contents_writer.is_null() ? nullptr : contents_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->contents.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null contents in LanguageDetectionDetails struct");
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::translate::mojom::internal::LanguageDetectionDetails_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::translate::mojom::LanguageDetectionDetailsDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace translate {
namespace mojom {

inline void LanguageDetectionDetailsDataView::GetTimeDataView(
    ::mojo_base::mojom::TimeDataView* output) {
  auto pointer = data_->time.Get();
  *output = ::mojo_base::mojom::TimeDataView(pointer, context_);
}
inline void LanguageDetectionDetailsDataView::GetUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->url.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}
inline void LanguageDetectionDetailsDataView::GetContentLanguageDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->content_language.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void LanguageDetectionDetailsDataView::GetCldLanguageDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->cld_language.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void LanguageDetectionDetailsDataView::GetHtmlRootLanguageDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->html_root_language.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void LanguageDetectionDetailsDataView::GetAdoptedLanguageDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->adopted_language.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void LanguageDetectionDetailsDataView::GetContentsDataView(
    ::mojo_base::mojom::String16DataView* output) {
  auto pointer = data_->contents.Get();
  *output = ::mojo_base::mojom::String16DataView(pointer, context_);
}


inline void Page_Translate_ParamsDataView::GetTranslateScriptDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->translate_script.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void Page_Translate_ParamsDataView::GetSourceLangDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->source_lang.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void Page_Translate_ParamsDataView::GetTargetLangDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->target_lang.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void Page_Translate_ResponseParamsDataView::GetOriginalLangDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->original_lang.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void Page_Translate_ResponseParamsDataView::GetTranslatedLangDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->translated_lang.Get();
  *output = mojo::StringDataView(pointer, context_);
}




inline void ContentTranslateDriver_RegisterPage_ParamsDataView::GetDetailsDataView(
    LanguageDetectionDetailsDataView* output) {
  auto pointer = data_->details.Get();
  *output = LanguageDetectionDetailsDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace translate

#endif  // COMPONENTS_TRANSLATE_CONTENT_COMMON_TRANSLATE_MOJOM_SHARED_H_
