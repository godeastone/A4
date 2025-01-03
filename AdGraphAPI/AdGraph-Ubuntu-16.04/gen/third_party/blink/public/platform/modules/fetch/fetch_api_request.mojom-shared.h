// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_FETCH_FETCH_API_REQUEST_MOJOM_SHARED_H_
#define THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_FETCH_FETCH_API_REQUEST_MOJOM_SHARED_H_

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
#include "third_party/blink/public/platform/modules/fetch/fetch_api_request.mojom-shared-internal.h"
#include "services/network/public/mojom/fetch_api.mojom-shared.h"
#include "services/network/public/mojom/request_context_frame_type.mojom-shared.h"
#include "third_party/blink/public/platform/referrer.mojom-shared.h"
#include "third_party/blink/public/mojom/blob/serialized_blob.mojom-shared.h"
#include "url/mojom/url.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "base/component_export.h"


namespace blink {
namespace mojom {
class FetchAPIRequestDataView;



}  // namespace mojom
}  // namespace blink

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::blink::mojom::FetchAPIRequestDataView> {
  using Data = ::blink::mojom::internal::FetchAPIRequest_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace blink {
namespace mojom {

enum class RequestContextType : int32_t {
  UNSPECIFIED,
  AUDIO,
  BEACON,
  CSP_REPORT,
  DOWNLOAD,
  EMBED,
  EVENT_SOURCE,
  FAVICON,
  FETCH,
  FONT,
  FORM,
  FRAME,
  HYPERLINK,
  IFRAME,
  IMAGE,
  IMAGE_SET,
  IMPORT,
  INTERNAL,
  LOCATION,
  MANIFEST,
  OBJECT,
  PING,
  PLUGIN,
  PREFETCH,
  SCRIPT,
  SERVICE_WORKER,
  SHARED_WORKER,
  SUBRESOURCE,
  STYLE,
  TRACK,
  VIDEO,
  WORKER,
  XML_HTTP_REQUEST,
  XSLT,
  kMinValue = 0,
  kMaxValue = 33,
};

inline std::ostream& operator<<(std::ostream& os, RequestContextType value) {
  switch(value) {
    case RequestContextType::UNSPECIFIED:
      return os << "RequestContextType::UNSPECIFIED";
    case RequestContextType::AUDIO:
      return os << "RequestContextType::AUDIO";
    case RequestContextType::BEACON:
      return os << "RequestContextType::BEACON";
    case RequestContextType::CSP_REPORT:
      return os << "RequestContextType::CSP_REPORT";
    case RequestContextType::DOWNLOAD:
      return os << "RequestContextType::DOWNLOAD";
    case RequestContextType::EMBED:
      return os << "RequestContextType::EMBED";
    case RequestContextType::EVENT_SOURCE:
      return os << "RequestContextType::EVENT_SOURCE";
    case RequestContextType::FAVICON:
      return os << "RequestContextType::FAVICON";
    case RequestContextType::FETCH:
      return os << "RequestContextType::FETCH";
    case RequestContextType::FONT:
      return os << "RequestContextType::FONT";
    case RequestContextType::FORM:
      return os << "RequestContextType::FORM";
    case RequestContextType::FRAME:
      return os << "RequestContextType::FRAME";
    case RequestContextType::HYPERLINK:
      return os << "RequestContextType::HYPERLINK";
    case RequestContextType::IFRAME:
      return os << "RequestContextType::IFRAME";
    case RequestContextType::IMAGE:
      return os << "RequestContextType::IMAGE";
    case RequestContextType::IMAGE_SET:
      return os << "RequestContextType::IMAGE_SET";
    case RequestContextType::IMPORT:
      return os << "RequestContextType::IMPORT";
    case RequestContextType::INTERNAL:
      return os << "RequestContextType::INTERNAL";
    case RequestContextType::LOCATION:
      return os << "RequestContextType::LOCATION";
    case RequestContextType::MANIFEST:
      return os << "RequestContextType::MANIFEST";
    case RequestContextType::OBJECT:
      return os << "RequestContextType::OBJECT";
    case RequestContextType::PING:
      return os << "RequestContextType::PING";
    case RequestContextType::PLUGIN:
      return os << "RequestContextType::PLUGIN";
    case RequestContextType::PREFETCH:
      return os << "RequestContextType::PREFETCH";
    case RequestContextType::SCRIPT:
      return os << "RequestContextType::SCRIPT";
    case RequestContextType::SERVICE_WORKER:
      return os << "RequestContextType::SERVICE_WORKER";
    case RequestContextType::SHARED_WORKER:
      return os << "RequestContextType::SHARED_WORKER";
    case RequestContextType::SUBRESOURCE:
      return os << "RequestContextType::SUBRESOURCE";
    case RequestContextType::STYLE:
      return os << "RequestContextType::STYLE";
    case RequestContextType::TRACK:
      return os << "RequestContextType::TRACK";
    case RequestContextType::VIDEO:
      return os << "RequestContextType::VIDEO";
    case RequestContextType::WORKER:
      return os << "RequestContextType::WORKER";
    case RequestContextType::XML_HTTP_REQUEST:
      return os << "RequestContextType::XML_HTTP_REQUEST";
    case RequestContextType::XSLT:
      return os << "RequestContextType::XSLT";
    default:
      return os << "Unknown RequestContextType value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(RequestContextType value) {
  return internal::RequestContextType_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

enum class FetchCacheMode : int32_t {
  kDefault,
  kNoStore,
  kBypassCache,
  kValidateCache,
  kForceCache,
  kOnlyIfCached,
  kUnspecifiedOnlyIfCachedStrict,
  kUnspecifiedForceCacheMiss,
  kMinValue = 0,
  kMaxValue = 7,
};

inline std::ostream& operator<<(std::ostream& os, FetchCacheMode value) {
  switch(value) {
    case FetchCacheMode::kDefault:
      return os << "FetchCacheMode::kDefault";
    case FetchCacheMode::kNoStore:
      return os << "FetchCacheMode::kNoStore";
    case FetchCacheMode::kBypassCache:
      return os << "FetchCacheMode::kBypassCache";
    case FetchCacheMode::kValidateCache:
      return os << "FetchCacheMode::kValidateCache";
    case FetchCacheMode::kForceCache:
      return os << "FetchCacheMode::kForceCache";
    case FetchCacheMode::kOnlyIfCached:
      return os << "FetchCacheMode::kOnlyIfCached";
    case FetchCacheMode::kUnspecifiedOnlyIfCachedStrict:
      return os << "FetchCacheMode::kUnspecifiedOnlyIfCachedStrict";
    case FetchCacheMode::kUnspecifiedForceCacheMiss:
      return os << "FetchCacheMode::kUnspecifiedForceCacheMiss";
    default:
      return os << "Unknown FetchCacheMode value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(FetchCacheMode value) {
  return internal::FetchCacheMode_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

enum class FetchImportanceMode : int32_t {
  kImportanceLow,
  kImportanceAuto,
  kImportanceHigh,
  kMinValue = 0,
  kMaxValue = 2,
};

inline std::ostream& operator<<(std::ostream& os, FetchImportanceMode value) {
  switch(value) {
    case FetchImportanceMode::kImportanceLow:
      return os << "FetchImportanceMode::kImportanceLow";
    case FetchImportanceMode::kImportanceAuto:
      return os << "FetchImportanceMode::kImportanceAuto";
    case FetchImportanceMode::kImportanceHigh:
      return os << "FetchImportanceMode::kImportanceHigh";
    default:
      return os << "Unknown FetchImportanceMode value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(FetchImportanceMode value) {
  return internal::FetchImportanceMode_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
class FetchAPIRequestDataView {
 public:
  FetchAPIRequestDataView() {}

  FetchAPIRequestDataView(
      internal::FetchAPIRequest_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMode(UserType* output) const {
    auto data_value = data_->mode;
    return mojo::internal::Deserialize<::network::mojom::FetchRequestMode>(
        data_value, output);
  }

  ::network::mojom::FetchRequestMode mode() const {
    return static_cast<::network::mojom::FetchRequestMode>(data_->mode);
  }
  bool is_main_resource_load() const {
    return data_->is_main_resource_load;
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRequestContextType(UserType* output) const {
    auto data_value = data_->request_context_type;
    return mojo::internal::Deserialize<::blink::mojom::RequestContextType>(
        data_value, output);
  }

  RequestContextType request_context_type() const {
    return static_cast<RequestContextType>(data_->request_context_type);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFrameType(UserType* output) const {
    auto data_value = data_->frame_type;
    return mojo::internal::Deserialize<::network::mojom::RequestContextFrameType>(
        data_value, output);
  }

  ::network::mojom::RequestContextFrameType frame_type() const {
    return static_cast<::network::mojom::RequestContextFrameType>(data_->frame_type);
  }
  inline void GetUrlDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUrl(UserType* output) {
    auto* pointer = data_->url.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
  inline void GetMethodDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMethod(UserType* output) {
    auto* pointer = data_->method.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetHeadersDataView(
      mojo::MapDataView<mojo::StringDataView, mojo::StringDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadHeaders(UserType* output) {
    auto* pointer = data_->headers.Get();
    return mojo::internal::Deserialize<mojo::MapDataView<mojo::StringDataView, mojo::StringDataView>>(
        pointer, output, context_);
  }
  inline void GetBlobDataView(
      ::blink::mojom::SerializedBlobDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadBlob(UserType* output) {
    auto* pointer = data_->blob.Get();
    return mojo::internal::Deserialize<::blink::mojom::SerializedBlobDataView>(
        pointer, output, context_);
  }
  inline void GetReferrerDataView(
      ::blink::mojom::ReferrerDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadReferrer(UserType* output) {
    auto* pointer = data_->referrer.Get();
    return mojo::internal::Deserialize<::blink::mojom::ReferrerDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCredentialsMode(UserType* output) const {
    auto data_value = data_->credentials_mode;
    return mojo::internal::Deserialize<::network::mojom::FetchCredentialsMode>(
        data_value, output);
  }

  ::network::mojom::FetchCredentialsMode credentials_mode() const {
    return static_cast<::network::mojom::FetchCredentialsMode>(data_->credentials_mode);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCacheMode(UserType* output) const {
    auto data_value = data_->cache_mode;
    return mojo::internal::Deserialize<::blink::mojom::FetchCacheMode>(
        data_value, output);
  }

  FetchCacheMode cache_mode() const {
    return static_cast<FetchCacheMode>(data_->cache_mode);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRedirectMode(UserType* output) const {
    auto data_value = data_->redirect_mode;
    return mojo::internal::Deserialize<::network::mojom::FetchRedirectMode>(
        data_value, output);
  }

  ::network::mojom::FetchRedirectMode redirect_mode() const {
    return static_cast<::network::mojom::FetchRedirectMode>(data_->redirect_mode);
  }
  inline void GetIntegrityDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadIntegrity(UserType* output) {
    auto* pointer = data_->integrity.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  bool keepalive() const {
    return data_->keepalive;
  }
  inline void GetClientIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadClientId(UserType* output) {
    auto* pointer = data_->client_id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  bool is_reload() const {
    return data_->is_reload;
  }
 private:
  internal::FetchAPIRequest_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace blink

namespace std {

template <>
struct hash<::blink::mojom::RequestContextType>
    : public mojo::internal::EnumHashImpl<::blink::mojom::RequestContextType> {};

template <>
struct hash<::blink::mojom::FetchCacheMode>
    : public mojo::internal::EnumHashImpl<::blink::mojom::FetchCacheMode> {};

template <>
struct hash<::blink::mojom::FetchImportanceMode>
    : public mojo::internal::EnumHashImpl<::blink::mojom::FetchImportanceMode> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::blink::mojom::RequestContextType, ::blink::mojom::RequestContextType> {
  static ::blink::mojom::RequestContextType ToMojom(::blink::mojom::RequestContextType input) { return input; }
  static bool FromMojom(::blink::mojom::RequestContextType input, ::blink::mojom::RequestContextType* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::RequestContextType, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::blink::mojom::RequestContextType, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::blink::mojom::RequestContextType>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::blink::mojom::FetchCacheMode, ::blink::mojom::FetchCacheMode> {
  static ::blink::mojom::FetchCacheMode ToMojom(::blink::mojom::FetchCacheMode input) { return input; }
  static bool FromMojom(::blink::mojom::FetchCacheMode input, ::blink::mojom::FetchCacheMode* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::FetchCacheMode, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::blink::mojom::FetchCacheMode, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::blink::mojom::FetchCacheMode>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::blink::mojom::FetchImportanceMode, ::blink::mojom::FetchImportanceMode> {
  static ::blink::mojom::FetchImportanceMode ToMojom(::blink::mojom::FetchImportanceMode input) { return input; }
  static bool FromMojom(::blink::mojom::FetchImportanceMode input, ::blink::mojom::FetchImportanceMode* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::FetchImportanceMode, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::blink::mojom::FetchImportanceMode, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::blink::mojom::FetchImportanceMode>(input), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::FetchAPIRequestDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::FetchAPIRequestDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::FetchAPIRequest_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    mojo::internal::Serialize<::network::mojom::FetchRequestMode>(
        CallWithContext(Traits::mode, input, custom_context), &(*output)->mode);
    (*output)->is_main_resource_load = CallWithContext(Traits::is_main_resource_load, input, custom_context);
    mojo::internal::Serialize<::blink::mojom::RequestContextType>(
        CallWithContext(Traits::request_context_type, input, custom_context), &(*output)->request_context_type);
    mojo::internal::Serialize<::network::mojom::RequestContextFrameType>(
        CallWithContext(Traits::frame_type, input, custom_context), &(*output)->frame_type);
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
        "null url in FetchAPIRequest struct");
    decltype(CallWithContext(Traits::method, input, custom_context)) in_method = CallWithContext(Traits::method, input, custom_context);
    typename decltype((*output)->method)::BaseType::BufferWriter
        method_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_method, buffer, &method_writer, context);
    (*output)->method.Set(
        method_writer.is_null() ? nullptr : method_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->method.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null method in FetchAPIRequest struct");
    decltype(CallWithContext(Traits::headers, input, custom_context)) in_headers = CallWithContext(Traits::headers, input, custom_context);
    typename decltype((*output)->headers)::BaseType::BufferWriter
        headers_writer;
    const mojo::internal::ContainerValidateParams headers_validate_params(
        new mojo::internal::ContainerValidateParams(0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr)), new mojo::internal::ContainerValidateParams(0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr)));
    mojo::internal::Serialize<mojo::MapDataView<mojo::StringDataView, mojo::StringDataView>>(
        in_headers, buffer, &headers_writer, &headers_validate_params,
        context);
    (*output)->headers.Set(
        headers_writer.is_null() ? nullptr : headers_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->headers.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null headers in FetchAPIRequest struct");
    decltype(CallWithContext(Traits::blob, input, custom_context)) in_blob = CallWithContext(Traits::blob, input, custom_context);
    typename decltype((*output)->blob)::BaseType::BufferWriter
        blob_writer;
    mojo::internal::Serialize<::blink::mojom::SerializedBlobDataView>(
        in_blob, buffer, &blob_writer, context);
    (*output)->blob.Set(
        blob_writer.is_null() ? nullptr : blob_writer.data());
    decltype(CallWithContext(Traits::referrer, input, custom_context)) in_referrer = CallWithContext(Traits::referrer, input, custom_context);
    typename decltype((*output)->referrer)::BaseType::BufferWriter
        referrer_writer;
    mojo::internal::Serialize<::blink::mojom::ReferrerDataView>(
        in_referrer, buffer, &referrer_writer, context);
    (*output)->referrer.Set(
        referrer_writer.is_null() ? nullptr : referrer_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->referrer.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null referrer in FetchAPIRequest struct");
    mojo::internal::Serialize<::network::mojom::FetchCredentialsMode>(
        CallWithContext(Traits::credentials_mode, input, custom_context), &(*output)->credentials_mode);
    mojo::internal::Serialize<::blink::mojom::FetchCacheMode>(
        CallWithContext(Traits::cache_mode, input, custom_context), &(*output)->cache_mode);
    mojo::internal::Serialize<::network::mojom::FetchRedirectMode>(
        CallWithContext(Traits::redirect_mode, input, custom_context), &(*output)->redirect_mode);
    decltype(CallWithContext(Traits::integrity, input, custom_context)) in_integrity = CallWithContext(Traits::integrity, input, custom_context);
    typename decltype((*output)->integrity)::BaseType::BufferWriter
        integrity_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_integrity, buffer, &integrity_writer, context);
    (*output)->integrity.Set(
        integrity_writer.is_null() ? nullptr : integrity_writer.data());
    (*output)->keepalive = CallWithContext(Traits::keepalive, input, custom_context);
    decltype(CallWithContext(Traits::client_id, input, custom_context)) in_client_id = CallWithContext(Traits::client_id, input, custom_context);
    typename decltype((*output)->client_id)::BaseType::BufferWriter
        client_id_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_client_id, buffer, &client_id_writer, context);
    (*output)->client_id.Set(
        client_id_writer.is_null() ? nullptr : client_id_writer.data());
    (*output)->is_reload = CallWithContext(Traits::is_reload, input, custom_context);
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::blink::mojom::internal::FetchAPIRequest_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::FetchAPIRequestDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace blink {
namespace mojom {

inline void FetchAPIRequestDataView::GetUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->url.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}
inline void FetchAPIRequestDataView::GetMethodDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->method.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void FetchAPIRequestDataView::GetHeadersDataView(
    mojo::MapDataView<mojo::StringDataView, mojo::StringDataView>* output) {
  auto pointer = data_->headers.Get();
  *output = mojo::MapDataView<mojo::StringDataView, mojo::StringDataView>(pointer, context_);
}
inline void FetchAPIRequestDataView::GetBlobDataView(
    ::blink::mojom::SerializedBlobDataView* output) {
  auto pointer = data_->blob.Get();
  *output = ::blink::mojom::SerializedBlobDataView(pointer, context_);
}
inline void FetchAPIRequestDataView::GetReferrerDataView(
    ::blink::mojom::ReferrerDataView* output) {
  auto pointer = data_->referrer.Get();
  *output = ::blink::mojom::ReferrerDataView(pointer, context_);
}
inline void FetchAPIRequestDataView::GetIntegrityDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->integrity.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void FetchAPIRequestDataView::GetClientIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->client_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_FETCH_FETCH_API_REQUEST_MOJOM_SHARED_H_
