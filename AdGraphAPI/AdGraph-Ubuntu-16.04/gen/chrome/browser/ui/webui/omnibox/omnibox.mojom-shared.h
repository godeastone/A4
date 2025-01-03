// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CHROME_BROWSER_UI_WEBUI_OMNIBOX_OMNIBOX_MOJOM_SHARED_H_
#define CHROME_BROWSER_UI_WEBUI_OMNIBOX_OMNIBOX_MOJOM_SHARED_H_

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
#include "chrome/browser/ui/webui/omnibox/omnibox.mojom-shared-internal.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"


namespace mojom {
class AutocompleteAdditionalInfoDataView;

class AutocompleteMatchDataView;

class AutocompleteResultsForProviderDataView;

class OmniboxResultDataView;



}  // namespace mojom

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::mojom::AutocompleteAdditionalInfoDataView> {
  using Data = ::mojom::internal::AutocompleteAdditionalInfo_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::mojom::AutocompleteMatchDataView> {
  using Data = ::mojom::internal::AutocompleteMatch_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::mojom::AutocompleteResultsForProviderDataView> {
  using Data = ::mojom::internal::AutocompleteResultsForProvider_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::mojom::OmniboxResultDataView> {
  using Data = ::mojom::internal::OmniboxResult_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace mojom {
// Interface base classes. They are used for type safety check.
class OmniboxPageHandlerInterfaceBase {};

using OmniboxPageHandlerPtrDataView =
    mojo::InterfacePtrDataView<OmniboxPageHandlerInterfaceBase>;
using OmniboxPageHandlerRequestDataView =
    mojo::InterfaceRequestDataView<OmniboxPageHandlerInterfaceBase>;
using OmniboxPageHandlerAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<OmniboxPageHandlerInterfaceBase>;
using OmniboxPageHandlerAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<OmniboxPageHandlerInterfaceBase>;
class OmniboxPageInterfaceBase {};

using OmniboxPagePtrDataView =
    mojo::InterfacePtrDataView<OmniboxPageInterfaceBase>;
using OmniboxPageRequestDataView =
    mojo::InterfaceRequestDataView<OmniboxPageInterfaceBase>;
using OmniboxPageAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<OmniboxPageInterfaceBase>;
using OmniboxPageAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<OmniboxPageInterfaceBase>;
class AutocompleteAdditionalInfoDataView {
 public:
  AutocompleteAdditionalInfoDataView() {}

  AutocompleteAdditionalInfoDataView(
      internal::AutocompleteAdditionalInfo_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetKeyDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadKey(UserType* output) {
    auto* pointer = data_->key.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetValueDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadValue(UserType* output) {
    auto* pointer = data_->value.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::AutocompleteAdditionalInfo_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class AutocompleteMatchDataView {
 public:
  AutocompleteMatchDataView() {}

  AutocompleteMatchDataView(
      internal::AutocompleteMatch_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetProviderNameDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadProviderName(UserType* output) {
    auto* pointer = data_->provider_name.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  bool provider_done() const {
    return data_->provider_done;
  }
  int32_t relevance() const {
    return data_->relevance;
  }
  bool deletable() const {
    return data_->deletable;
  }
  inline void GetFillIntoEditDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFillIntoEdit(UserType* output) {
    auto* pointer = data_->fill_into_edit.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetInlineAutocompletionDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadInlineAutocompletion(UserType* output) {
    auto* pointer = data_->inline_autocompletion.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetDestinationUrlDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDestinationUrl(UserType* output) {
    auto* pointer = data_->destination_url.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetContentsDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadContents(UserType* output) {
    auto* pointer = data_->contents.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetDescriptionDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDescription(UserType* output) {
    auto* pointer = data_->description.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  int32_t transition() const {
    return data_->transition;
  }
  bool allowed_to_be_default_match() const {
    return data_->allowed_to_be_default_match;
  }
  inline void GetTypeDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadType(UserType* output) {
    auto* pointer = data_->type.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  bool has_tab_match() const {
    return data_->has_tab_match;
  }
  inline void GetAssociatedKeywordDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadAssociatedKeyword(UserType* output) {
    auto* pointer = data_->associated_keyword.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetKeywordDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadKeyword(UserType* output) {
    auto* pointer = data_->keyword.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  bool starred() const {
    return data_->starred;
  }
  int32_t duplicates() const {
    return data_->duplicates;
  }
  bool from_previous() const {
    return data_->from_previous;
  }
  inline void GetAdditionalInfoDataView(
      mojo::ArrayDataView<AutocompleteAdditionalInfoDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadAdditionalInfo(UserType* output) {
    auto* pointer = data_->additional_info.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::mojom::AutocompleteAdditionalInfoDataView>>(
        pointer, output, context_);
  }
 private:
  internal::AutocompleteMatch_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class AutocompleteResultsForProviderDataView {
 public:
  AutocompleteResultsForProviderDataView() {}

  AutocompleteResultsForProviderDataView(
      internal::AutocompleteResultsForProvider_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetProviderNameDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadProviderName(UserType* output) {
    auto* pointer = data_->provider_name.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetResultsDataView(
      mojo::ArrayDataView<AutocompleteMatchDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadResults(UserType* output) {
    auto* pointer = data_->results.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::mojom::AutocompleteMatchDataView>>(
        pointer, output, context_);
  }
 private:
  internal::AutocompleteResultsForProvider_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class OmniboxResultDataView {
 public:
  OmniboxResultDataView() {}

  OmniboxResultDataView(
      internal::OmniboxResult_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  bool done() const {
    return data_->done;
  }
  int32_t time_since_omnibox_started_ms() const {
    return data_->time_since_omnibox_started_ms;
  }
  inline void GetHostDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadHost(UserType* output) {
    auto* pointer = data_->host.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  bool is_typed_host() const {
    return data_->is_typed_host;
  }
  inline void GetCombinedResultsDataView(
      mojo::ArrayDataView<AutocompleteMatchDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCombinedResults(UserType* output) {
    auto* pointer = data_->combined_results.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::mojom::AutocompleteMatchDataView>>(
        pointer, output, context_);
  }
  inline void GetResultsByProviderDataView(
      mojo::ArrayDataView<AutocompleteResultsForProviderDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadResultsByProvider(UserType* output) {
    auto* pointer = data_->results_by_provider.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::mojom::AutocompleteResultsForProviderDataView>>(
        pointer, output, context_);
  }
 private:
  internal::OmniboxResult_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class OmniboxPageHandler_SetClientPage_ParamsDataView {
 public:
  OmniboxPageHandler_SetClientPage_ParamsDataView() {}

  OmniboxPageHandler_SetClientPage_ParamsDataView(
      internal::OmniboxPageHandler_SetClientPage_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakePage() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::mojom::OmniboxPagePtrDataView>(
            &data_->page, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::OmniboxPageHandler_SetClientPage_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class OmniboxPageHandler_StartOmniboxQuery_ParamsDataView {
 public:
  OmniboxPageHandler_StartOmniboxQuery_ParamsDataView() {}

  OmniboxPageHandler_StartOmniboxQuery_ParamsDataView(
      internal::OmniboxPageHandler_StartOmniboxQuery_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetInputStringDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadInputString(UserType* output) {
    auto* pointer = data_->input_string.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  int32_t cursor_position() const {
    return data_->cursor_position;
  }
  bool prevent_inline_autocomplete() const {
    return data_->prevent_inline_autocomplete;
  }
  bool prefer_keyword() const {
    return data_->prefer_keyword;
  }
  int32_t page_classification() const {
    return data_->page_classification;
  }
 private:
  internal::OmniboxPageHandler_StartOmniboxQuery_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class OmniboxPage_HandleNewAutocompleteResult_ParamsDataView {
 public:
  OmniboxPage_HandleNewAutocompleteResult_ParamsDataView() {}

  OmniboxPage_HandleNewAutocompleteResult_ParamsDataView(
      internal::OmniboxPage_HandleNewAutocompleteResult_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetResultDataView(
      OmniboxResultDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadResult(UserType* output) {
    auto* pointer = data_->result.Get();
    return mojo::internal::Deserialize<::mojom::OmniboxResultDataView>(
        pointer, output, context_);
  }
 private:
  internal::OmniboxPage_HandleNewAutocompleteResult_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom

namespace std {

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::mojom::AutocompleteAdditionalInfoDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::mojom::AutocompleteAdditionalInfoDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::mojom::internal::AutocompleteAdditionalInfo_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    decltype(CallWithContext(Traits::key, input, custom_context)) in_key = CallWithContext(Traits::key, input, custom_context);
    typename decltype((*output)->key)::BaseType::BufferWriter
        key_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_key, buffer, &key_writer, context);
    (*output)->key.Set(
        key_writer.is_null() ? nullptr : key_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->key.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null key in AutocompleteAdditionalInfo struct");
    decltype(CallWithContext(Traits::value, input, custom_context)) in_value = CallWithContext(Traits::value, input, custom_context);
    typename decltype((*output)->value)::BaseType::BufferWriter
        value_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_value, buffer, &value_writer, context);
    (*output)->value.Set(
        value_writer.is_null() ? nullptr : value_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->value.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null value in AutocompleteAdditionalInfo struct");
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::mojom::internal::AutocompleteAdditionalInfo_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::mojom::AutocompleteAdditionalInfoDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::mojom::AutocompleteMatchDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::mojom::AutocompleteMatchDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::mojom::internal::AutocompleteMatch_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    decltype(CallWithContext(Traits::provider_name, input, custom_context)) in_provider_name = CallWithContext(Traits::provider_name, input, custom_context);
    typename decltype((*output)->provider_name)::BaseType::BufferWriter
        provider_name_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_provider_name, buffer, &provider_name_writer, context);
    (*output)->provider_name.Set(
        provider_name_writer.is_null() ? nullptr : provider_name_writer.data());
    (*output)->provider_done = CallWithContext(Traits::provider_done, input, custom_context);
    (*output)->relevance = CallWithContext(Traits::relevance, input, custom_context);
    (*output)->deletable = CallWithContext(Traits::deletable, input, custom_context);
    decltype(CallWithContext(Traits::fill_into_edit, input, custom_context)) in_fill_into_edit = CallWithContext(Traits::fill_into_edit, input, custom_context);
    typename decltype((*output)->fill_into_edit)::BaseType::BufferWriter
        fill_into_edit_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_fill_into_edit, buffer, &fill_into_edit_writer, context);
    (*output)->fill_into_edit.Set(
        fill_into_edit_writer.is_null() ? nullptr : fill_into_edit_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->fill_into_edit.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null fill_into_edit in AutocompleteMatch struct");
    decltype(CallWithContext(Traits::inline_autocompletion, input, custom_context)) in_inline_autocompletion = CallWithContext(Traits::inline_autocompletion, input, custom_context);
    typename decltype((*output)->inline_autocompletion)::BaseType::BufferWriter
        inline_autocompletion_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_inline_autocompletion, buffer, &inline_autocompletion_writer, context);
    (*output)->inline_autocompletion.Set(
        inline_autocompletion_writer.is_null() ? nullptr : inline_autocompletion_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->inline_autocompletion.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null inline_autocompletion in AutocompleteMatch struct");
    decltype(CallWithContext(Traits::destination_url, input, custom_context)) in_destination_url = CallWithContext(Traits::destination_url, input, custom_context);
    typename decltype((*output)->destination_url)::BaseType::BufferWriter
        destination_url_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_destination_url, buffer, &destination_url_writer, context);
    (*output)->destination_url.Set(
        destination_url_writer.is_null() ? nullptr : destination_url_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->destination_url.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null destination_url in AutocompleteMatch struct");
    decltype(CallWithContext(Traits::contents, input, custom_context)) in_contents = CallWithContext(Traits::contents, input, custom_context);
    typename decltype((*output)->contents)::BaseType::BufferWriter
        contents_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_contents, buffer, &contents_writer, context);
    (*output)->contents.Set(
        contents_writer.is_null() ? nullptr : contents_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->contents.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null contents in AutocompleteMatch struct");
    decltype(CallWithContext(Traits::description, input, custom_context)) in_description = CallWithContext(Traits::description, input, custom_context);
    typename decltype((*output)->description)::BaseType::BufferWriter
        description_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_description, buffer, &description_writer, context);
    (*output)->description.Set(
        description_writer.is_null() ? nullptr : description_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->description.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null description in AutocompleteMatch struct");
    (*output)->transition = CallWithContext(Traits::transition, input, custom_context);
    (*output)->allowed_to_be_default_match = CallWithContext(Traits::allowed_to_be_default_match, input, custom_context);
    decltype(CallWithContext(Traits::type, input, custom_context)) in_type = CallWithContext(Traits::type, input, custom_context);
    typename decltype((*output)->type)::BaseType::BufferWriter
        type_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_type, buffer, &type_writer, context);
    (*output)->type.Set(
        type_writer.is_null() ? nullptr : type_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->type.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null type in AutocompleteMatch struct");
    (*output)->has_tab_match = CallWithContext(Traits::has_tab_match, input, custom_context);
    decltype(CallWithContext(Traits::associated_keyword, input, custom_context)) in_associated_keyword = CallWithContext(Traits::associated_keyword, input, custom_context);
    typename decltype((*output)->associated_keyword)::BaseType::BufferWriter
        associated_keyword_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_associated_keyword, buffer, &associated_keyword_writer, context);
    (*output)->associated_keyword.Set(
        associated_keyword_writer.is_null() ? nullptr : associated_keyword_writer.data());
    decltype(CallWithContext(Traits::keyword, input, custom_context)) in_keyword = CallWithContext(Traits::keyword, input, custom_context);
    typename decltype((*output)->keyword)::BaseType::BufferWriter
        keyword_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_keyword, buffer, &keyword_writer, context);
    (*output)->keyword.Set(
        keyword_writer.is_null() ? nullptr : keyword_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->keyword.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null keyword in AutocompleteMatch struct");
    (*output)->starred = CallWithContext(Traits::starred, input, custom_context);
    (*output)->duplicates = CallWithContext(Traits::duplicates, input, custom_context);
    (*output)->from_previous = CallWithContext(Traits::from_previous, input, custom_context);
    decltype(CallWithContext(Traits::additional_info, input, custom_context)) in_additional_info = CallWithContext(Traits::additional_info, input, custom_context);
    typename decltype((*output)->additional_info)::BaseType::BufferWriter
        additional_info_writer;
    const mojo::internal::ContainerValidateParams additional_info_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::mojom::AutocompleteAdditionalInfoDataView>>(
        in_additional_info, buffer, &additional_info_writer, &additional_info_validate_params,
        context);
    (*output)->additional_info.Set(
        additional_info_writer.is_null() ? nullptr : additional_info_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->additional_info.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null additional_info in AutocompleteMatch struct");
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::mojom::internal::AutocompleteMatch_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::mojom::AutocompleteMatchDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::mojom::AutocompleteResultsForProviderDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::mojom::AutocompleteResultsForProviderDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::mojom::internal::AutocompleteResultsForProvider_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    decltype(CallWithContext(Traits::provider_name, input, custom_context)) in_provider_name = CallWithContext(Traits::provider_name, input, custom_context);
    typename decltype((*output)->provider_name)::BaseType::BufferWriter
        provider_name_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_provider_name, buffer, &provider_name_writer, context);
    (*output)->provider_name.Set(
        provider_name_writer.is_null() ? nullptr : provider_name_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->provider_name.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null provider_name in AutocompleteResultsForProvider struct");
    decltype(CallWithContext(Traits::results, input, custom_context)) in_results = CallWithContext(Traits::results, input, custom_context);
    typename decltype((*output)->results)::BaseType::BufferWriter
        results_writer;
    const mojo::internal::ContainerValidateParams results_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::mojom::AutocompleteMatchDataView>>(
        in_results, buffer, &results_writer, &results_validate_params,
        context);
    (*output)->results.Set(
        results_writer.is_null() ? nullptr : results_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->results.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null results in AutocompleteResultsForProvider struct");
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::mojom::internal::AutocompleteResultsForProvider_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::mojom::AutocompleteResultsForProviderDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::mojom::OmniboxResultDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::mojom::OmniboxResultDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::mojom::internal::OmniboxResult_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    (*output)->done = CallWithContext(Traits::done, input, custom_context);
    (*output)->time_since_omnibox_started_ms = CallWithContext(Traits::time_since_omnibox_started_ms, input, custom_context);
    decltype(CallWithContext(Traits::host, input, custom_context)) in_host = CallWithContext(Traits::host, input, custom_context);
    typename decltype((*output)->host)::BaseType::BufferWriter
        host_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_host, buffer, &host_writer, context);
    (*output)->host.Set(
        host_writer.is_null() ? nullptr : host_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->host.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null host in OmniboxResult struct");
    (*output)->is_typed_host = CallWithContext(Traits::is_typed_host, input, custom_context);
    decltype(CallWithContext(Traits::combined_results, input, custom_context)) in_combined_results = CallWithContext(Traits::combined_results, input, custom_context);
    typename decltype((*output)->combined_results)::BaseType::BufferWriter
        combined_results_writer;
    const mojo::internal::ContainerValidateParams combined_results_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::mojom::AutocompleteMatchDataView>>(
        in_combined_results, buffer, &combined_results_writer, &combined_results_validate_params,
        context);
    (*output)->combined_results.Set(
        combined_results_writer.is_null() ? nullptr : combined_results_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->combined_results.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null combined_results in OmniboxResult struct");
    decltype(CallWithContext(Traits::results_by_provider, input, custom_context)) in_results_by_provider = CallWithContext(Traits::results_by_provider, input, custom_context);
    typename decltype((*output)->results_by_provider)::BaseType::BufferWriter
        results_by_provider_writer;
    const mojo::internal::ContainerValidateParams results_by_provider_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::mojom::AutocompleteResultsForProviderDataView>>(
        in_results_by_provider, buffer, &results_by_provider_writer, &results_by_provider_validate_params,
        context);
    (*output)->results_by_provider.Set(
        results_by_provider_writer.is_null() ? nullptr : results_by_provider_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->results_by_provider.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null results_by_provider in OmniboxResult struct");
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::mojom::internal::OmniboxResult_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::mojom::OmniboxResultDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace mojom {

inline void AutocompleteAdditionalInfoDataView::GetKeyDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->key.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void AutocompleteAdditionalInfoDataView::GetValueDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->value.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void AutocompleteMatchDataView::GetProviderNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->provider_name.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void AutocompleteMatchDataView::GetFillIntoEditDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->fill_into_edit.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void AutocompleteMatchDataView::GetInlineAutocompletionDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->inline_autocompletion.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void AutocompleteMatchDataView::GetDestinationUrlDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->destination_url.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void AutocompleteMatchDataView::GetContentsDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->contents.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void AutocompleteMatchDataView::GetDescriptionDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->description.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void AutocompleteMatchDataView::GetTypeDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->type.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void AutocompleteMatchDataView::GetAssociatedKeywordDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->associated_keyword.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void AutocompleteMatchDataView::GetKeywordDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->keyword.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void AutocompleteMatchDataView::GetAdditionalInfoDataView(
    mojo::ArrayDataView<AutocompleteAdditionalInfoDataView>* output) {
  auto pointer = data_->additional_info.Get();
  *output = mojo::ArrayDataView<AutocompleteAdditionalInfoDataView>(pointer, context_);
}


inline void AutocompleteResultsForProviderDataView::GetProviderNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->provider_name.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void AutocompleteResultsForProviderDataView::GetResultsDataView(
    mojo::ArrayDataView<AutocompleteMatchDataView>* output) {
  auto pointer = data_->results.Get();
  *output = mojo::ArrayDataView<AutocompleteMatchDataView>(pointer, context_);
}


inline void OmniboxResultDataView::GetHostDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->host.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void OmniboxResultDataView::GetCombinedResultsDataView(
    mojo::ArrayDataView<AutocompleteMatchDataView>* output) {
  auto pointer = data_->combined_results.Get();
  *output = mojo::ArrayDataView<AutocompleteMatchDataView>(pointer, context_);
}
inline void OmniboxResultDataView::GetResultsByProviderDataView(
    mojo::ArrayDataView<AutocompleteResultsForProviderDataView>* output) {
  auto pointer = data_->results_by_provider.Get();
  *output = mojo::ArrayDataView<AutocompleteResultsForProviderDataView>(pointer, context_);
}




inline void OmniboxPageHandler_StartOmniboxQuery_ParamsDataView::GetInputStringDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->input_string.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void OmniboxPage_HandleNewAutocompleteResult_ParamsDataView::GetResultDataView(
    OmniboxResultDataView* output) {
  auto pointer = data_->result.Get();
  *output = OmniboxResultDataView(pointer, context_);
}



}  // namespace mojom

#endif  // CHROME_BROWSER_UI_WEBUI_OMNIBOX_OMNIBOX_MOJOM_SHARED_H_
