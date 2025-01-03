// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_NAVIGATION_PARAMS_MOJOM_SHARED_H_
#define CONTENT_COMMON_NAVIGATION_PARAMS_MOJOM_SHARED_H_

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
#include "content/common/navigation_params.mojom-shared-internal.h"
#include "mojo/public/mojom/base/values.mojom-shared.h"
#include "third_party/blink/public/platform/modules/fetch/fetch_api_request.mojom-shared.h"
#include "url/mojom/origin.mojom-shared.h"
#include "url/mojom/url.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "base/component_export.h"


namespace content {
namespace mojom {
class BeginNavigationParamsDataView;



}  // namespace mojom
}  // namespace content

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::content::mojom::BeginNavigationParamsDataView> {
  using Data = ::content::mojom::internal::BeginNavigationParams_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace content {
namespace mojom {
using MixedContentContextType = mojo::NativeEnum;
class BeginNavigationParamsDataView {
 public:
  BeginNavigationParamsDataView() {}

  BeginNavigationParamsDataView(
      internal::BeginNavigationParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetHeadersDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadHeaders(UserType* output) {
    auto* pointer = data_->headers.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  int32_t load_flags() const {
    return data_->load_flags;
  }
  bool skip_service_worker() const {
    return data_->skip_service_worker;
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRequestContextType(UserType* output) const {
    auto data_value = data_->request_context_type;
    return mojo::internal::Deserialize<::blink::mojom::RequestContextType>(
        data_value, output);
  }

  ::blink::mojom::RequestContextType request_context_type() const {
    return static_cast<::blink::mojom::RequestContextType>(data_->request_context_type);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMixedContentContextType(UserType* output) const {
    auto data_value = data_->mixed_content_context_type;
    return mojo::internal::Deserialize<::content::mojom::MixedContentContextType>(
        data_value, output);
  }

  MixedContentContextType mixed_content_context_type() const {
    return static_cast<MixedContentContextType>(data_->mixed_content_context_type);
  }
  bool is_form_submission() const {
    return data_->is_form_submission;
  }
  inline void GetSearchableFormUrlDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSearchableFormUrl(UserType* output) {
    auto* pointer = data_->searchable_form_url.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
  inline void GetSearchableFormEncodingDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSearchableFormEncoding(UserType* output) {
    auto* pointer = data_->searchable_form_encoding.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetInitiatorOriginDataView(
      ::url::mojom::OriginDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadInitiatorOrigin(UserType* output) {
    auto* pointer = data_->initiator_origin.Get();
    return mojo::internal::Deserialize<::url::mojom::OriginDataView>(
        pointer, output, context_);
  }
  inline void GetClientSideRedirectUrlDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadClientSideRedirectUrl(UserType* output) {
    auto* pointer = data_->client_side_redirect_url.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
  inline void GetDevtoolsInitiatorDataView(
      ::mojo_base::mojom::DictionaryValueDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDevtoolsInitiator(UserType* output) {
    auto* pointer = data_->devtools_initiator.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::DictionaryValueDataView>(
        pointer, output, context_);
  }
 private:
  internal::BeginNavigationParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace content

namespace std {

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::content::mojom::BeginNavigationParamsDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::content::mojom::BeginNavigationParamsDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::content::mojom::internal::BeginNavigationParams_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    decltype(CallWithContext(Traits::headers, input, custom_context)) in_headers = CallWithContext(Traits::headers, input, custom_context);
    typename decltype((*output)->headers)::BaseType::BufferWriter
        headers_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_headers, buffer, &headers_writer, context);
    (*output)->headers.Set(
        headers_writer.is_null() ? nullptr : headers_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->headers.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null headers in BeginNavigationParams struct");
    (*output)->load_flags = CallWithContext(Traits::load_flags, input, custom_context);
    (*output)->skip_service_worker = CallWithContext(Traits::skip_service_worker, input, custom_context);
    mojo::internal::Serialize<::blink::mojom::RequestContextType>(
        CallWithContext(Traits::request_context_type, input, custom_context), &(*output)->request_context_type);
    mojo::internal::Serialize<::content::mojom::MixedContentContextType>(
        CallWithContext(Traits::mixed_content_context_type, input, custom_context), &(*output)->mixed_content_context_type);
    (*output)->is_form_submission = CallWithContext(Traits::is_form_submission, input, custom_context);
    decltype(CallWithContext(Traits::searchable_form_url, input, custom_context)) in_searchable_form_url = CallWithContext(Traits::searchable_form_url, input, custom_context);
    typename decltype((*output)->searchable_form_url)::BaseType::BufferWriter
        searchable_form_url_writer;
    mojo::internal::Serialize<::url::mojom::UrlDataView>(
        in_searchable_form_url, buffer, &searchable_form_url_writer, context);
    (*output)->searchable_form_url.Set(
        searchable_form_url_writer.is_null() ? nullptr : searchable_form_url_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->searchable_form_url.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null searchable_form_url in BeginNavigationParams struct");
    decltype(CallWithContext(Traits::searchable_form_encoding, input, custom_context)) in_searchable_form_encoding = CallWithContext(Traits::searchable_form_encoding, input, custom_context);
    typename decltype((*output)->searchable_form_encoding)::BaseType::BufferWriter
        searchable_form_encoding_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_searchable_form_encoding, buffer, &searchable_form_encoding_writer, context);
    (*output)->searchable_form_encoding.Set(
        searchable_form_encoding_writer.is_null() ? nullptr : searchable_form_encoding_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->searchable_form_encoding.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null searchable_form_encoding in BeginNavigationParams struct");
    decltype(CallWithContext(Traits::initiator_origin, input, custom_context)) in_initiator_origin = CallWithContext(Traits::initiator_origin, input, custom_context);
    typename decltype((*output)->initiator_origin)::BaseType::BufferWriter
        initiator_origin_writer;
    mojo::internal::Serialize<::url::mojom::OriginDataView>(
        in_initiator_origin, buffer, &initiator_origin_writer, context);
    (*output)->initiator_origin.Set(
        initiator_origin_writer.is_null() ? nullptr : initiator_origin_writer.data());
    decltype(CallWithContext(Traits::client_side_redirect_url, input, custom_context)) in_client_side_redirect_url = CallWithContext(Traits::client_side_redirect_url, input, custom_context);
    typename decltype((*output)->client_side_redirect_url)::BaseType::BufferWriter
        client_side_redirect_url_writer;
    mojo::internal::Serialize<::url::mojom::UrlDataView>(
        in_client_side_redirect_url, buffer, &client_side_redirect_url_writer, context);
    (*output)->client_side_redirect_url.Set(
        client_side_redirect_url_writer.is_null() ? nullptr : client_side_redirect_url_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->client_side_redirect_url.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null client_side_redirect_url in BeginNavigationParams struct");
    decltype(CallWithContext(Traits::devtools_initiator, input, custom_context)) in_devtools_initiator = CallWithContext(Traits::devtools_initiator, input, custom_context);
    typename decltype((*output)->devtools_initiator)::BaseType::BufferWriter
        devtools_initiator_writer;
    mojo::internal::Serialize<::mojo_base::mojom::DictionaryValueDataView>(
        in_devtools_initiator, buffer, &devtools_initiator_writer, context);
    (*output)->devtools_initiator.Set(
        devtools_initiator_writer.is_null() ? nullptr : devtools_initiator_writer.data());
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::content::mojom::internal::BeginNavigationParams_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::content::mojom::BeginNavigationParamsDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace content {
namespace mojom {

inline void BeginNavigationParamsDataView::GetHeadersDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->headers.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void BeginNavigationParamsDataView::GetSearchableFormUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->searchable_form_url.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}
inline void BeginNavigationParamsDataView::GetSearchableFormEncodingDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->searchable_form_encoding.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void BeginNavigationParamsDataView::GetInitiatorOriginDataView(
    ::url::mojom::OriginDataView* output) {
  auto pointer = data_->initiator_origin.Get();
  *output = ::url::mojom::OriginDataView(pointer, context_);
}
inline void BeginNavigationParamsDataView::GetClientSideRedirectUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->client_side_redirect_url.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}
inline void BeginNavigationParamsDataView::GetDevtoolsInitiatorDataView(
    ::mojo_base::mojom::DictionaryValueDataView* output) {
  auto pointer = data_->devtools_initiator.Get();
  *output = ::mojo_base::mojom::DictionaryValueDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace content

#endif  // CONTENT_COMMON_NAVIGATION_PARAMS_MOJOM_SHARED_H_
