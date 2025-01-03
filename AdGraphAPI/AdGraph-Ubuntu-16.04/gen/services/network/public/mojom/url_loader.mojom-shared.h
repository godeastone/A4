// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_URL_LOADER_MOJOM_SHARED_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_URL_LOADER_MOJOM_SHARED_H_

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
#include "services/network/public/mojom/url_loader.mojom-shared-internal.h"
#include "services/network/public/mojom/http_request_headers.mojom-shared.h"
#include "services/network/public/mojom/network_param.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"


namespace network {
namespace mojom {
using URLRequestDataView = mojo::native::NativeStructDataView;

using URLResponseHeadDataView = mojo::native::NativeStructDataView;

using URLRequestRedirectInfoDataView = mojo::native::NativeStructDataView;

using CORSErrorStatusDataView = mojo::native::NativeStructDataView;

using URLLoaderCompletionStatusDataView = mojo::native::NativeStructDataView;

class URLLoaderClientEndpointsDataView;



}  // namespace mojom
}  // namespace network

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::network::mojom::URLLoaderClientEndpointsDataView> {
  using Data = ::network::mojom::internal::URLLoaderClientEndpoints_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace network {
namespace mojom {

enum class RequestPriority : int32_t {
  kThrottled = 0,
  kIdle,
  kLowest,
  kLow,
  kMedium,
  kHighest,
  kMinValue = 0,
  kMaxValue = 5,
};

inline std::ostream& operator<<(std::ostream& os, RequestPriority value) {
  switch(value) {
    case RequestPriority::kThrottled:
      return os << "RequestPriority::kThrottled";
    case RequestPriority::kIdle:
      return os << "RequestPriority::kIdle";
    case RequestPriority::kLowest:
      return os << "RequestPriority::kLowest";
    case RequestPriority::kLow:
      return os << "RequestPriority::kLow";
    case RequestPriority::kMedium:
      return os << "RequestPriority::kMedium";
    case RequestPriority::kHighest:
      return os << "RequestPriority::kHighest";
    default:
      return os << "Unknown RequestPriority value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(RequestPriority value) {
  return internal::RequestPriority_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
// Interface base classes. They are used for type safety check.
class URLLoaderInterfaceBase {};

using URLLoaderPtrDataView =
    mojo::InterfacePtrDataView<URLLoaderInterfaceBase>;
using URLLoaderRequestDataView =
    mojo::InterfaceRequestDataView<URLLoaderInterfaceBase>;
using URLLoaderAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<URLLoaderInterfaceBase>;
using URLLoaderAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<URLLoaderInterfaceBase>;
class DownloadedTempFileInterfaceBase {};

using DownloadedTempFilePtrDataView =
    mojo::InterfacePtrDataView<DownloadedTempFileInterfaceBase>;
using DownloadedTempFileRequestDataView =
    mojo::InterfaceRequestDataView<DownloadedTempFileInterfaceBase>;
using DownloadedTempFileAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<DownloadedTempFileInterfaceBase>;
using DownloadedTempFileAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<DownloadedTempFileInterfaceBase>;
class URLLoaderClientInterfaceBase {};

using URLLoaderClientPtrDataView =
    mojo::InterfacePtrDataView<URLLoaderClientInterfaceBase>;
using URLLoaderClientRequestDataView =
    mojo::InterfaceRequestDataView<URLLoaderClientInterfaceBase>;
using URLLoaderClientAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<URLLoaderClientInterfaceBase>;
using URLLoaderClientAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<URLLoaderClientInterfaceBase>;
class URLLoaderClientEndpointsDataView {
 public:
  URLLoaderClientEndpointsDataView() {}

  URLLoaderClientEndpointsDataView(
      internal::URLLoaderClientEndpoints_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeUrlLoader() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::network::mojom::URLLoaderPtrDataView>(
            &data_->url_loader, &result, context_);
    DCHECK(ret);
    return result;
  }
  template <typename UserType>
  UserType TakeUrlLoaderClient() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::network::mojom::URLLoaderClientRequestDataView>(
            &data_->url_loader_client, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::URLLoaderClientEndpoints_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class URLLoader_FollowRedirect_ParamsDataView {
 public:
  URLLoader_FollowRedirect_ParamsDataView() {}

  URLLoader_FollowRedirect_ParamsDataView(
      internal::URLLoader_FollowRedirect_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetModifiedRequestHeadersDataView(
      ::network::mojom::HttpRequestHeadersDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadModifiedRequestHeaders(UserType* output) {
    auto* pointer = data_->modified_request_headers.Get();
    return mojo::internal::Deserialize<::network::mojom::HttpRequestHeadersDataView>(
        pointer, output, context_);
  }
 private:
  internal::URLLoader_FollowRedirect_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class URLLoader_ProceedWithResponse_ParamsDataView {
 public:
  URLLoader_ProceedWithResponse_ParamsDataView() {}

  URLLoader_ProceedWithResponse_ParamsDataView(
      internal::URLLoader_ProceedWithResponse_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::URLLoader_ProceedWithResponse_Params_Data* data_ = nullptr;
};

class URLLoader_SetPriority_ParamsDataView {
 public:
  URLLoader_SetPriority_ParamsDataView() {}

  URLLoader_SetPriority_ParamsDataView(
      internal::URLLoader_SetPriority_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPriority(UserType* output) const {
    auto data_value = data_->priority;
    return mojo::internal::Deserialize<::network::mojom::RequestPriority>(
        data_value, output);
  }

  RequestPriority priority() const {
    return static_cast<RequestPriority>(data_->priority);
  }
  int32_t intra_priority_value() const {
    return data_->intra_priority_value;
  }
 private:
  internal::URLLoader_SetPriority_Params_Data* data_ = nullptr;
};

class URLLoader_PauseReadingBodyFromNet_ParamsDataView {
 public:
  URLLoader_PauseReadingBodyFromNet_ParamsDataView() {}

  URLLoader_PauseReadingBodyFromNet_ParamsDataView(
      internal::URLLoader_PauseReadingBodyFromNet_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::URLLoader_PauseReadingBodyFromNet_Params_Data* data_ = nullptr;
};

class URLLoader_ResumeReadingBodyFromNet_ParamsDataView {
 public:
  URLLoader_ResumeReadingBodyFromNet_ParamsDataView() {}

  URLLoader_ResumeReadingBodyFromNet_ParamsDataView(
      internal::URLLoader_ResumeReadingBodyFromNet_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::URLLoader_ResumeReadingBodyFromNet_Params_Data* data_ = nullptr;
};

class URLLoaderClient_OnReceiveResponse_ParamsDataView {
 public:
  URLLoaderClient_OnReceiveResponse_ParamsDataView() {}

  URLLoaderClient_OnReceiveResponse_ParamsDataView(
      internal::URLLoaderClient_OnReceiveResponse_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetHeadDataView(
      URLResponseHeadDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadHead(UserType* output) {
    auto* pointer = data_->head.Get();
    return mojo::internal::Deserialize<::network::mojom::URLResponseHeadDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  UserType TakeDownloadedFile() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::network::mojom::DownloadedTempFilePtrDataView>(
            &data_->downloaded_file, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::URLLoaderClient_OnReceiveResponse_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class URLLoaderClient_OnReceiveRedirect_ParamsDataView {
 public:
  URLLoaderClient_OnReceiveRedirect_ParamsDataView() {}

  URLLoaderClient_OnReceiveRedirect_ParamsDataView(
      internal::URLLoaderClient_OnReceiveRedirect_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetRedirectInfoDataView(
      URLRequestRedirectInfoDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRedirectInfo(UserType* output) {
    auto* pointer = data_->redirect_info.Get();
    return mojo::internal::Deserialize<::network::mojom::URLRequestRedirectInfoDataView>(
        pointer, output, context_);
  }
  inline void GetHeadDataView(
      URLResponseHeadDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadHead(UserType* output) {
    auto* pointer = data_->head.Get();
    return mojo::internal::Deserialize<::network::mojom::URLResponseHeadDataView>(
        pointer, output, context_);
  }
 private:
  internal::URLLoaderClient_OnReceiveRedirect_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class URLLoaderClient_OnDataDownloaded_ParamsDataView {
 public:
  URLLoaderClient_OnDataDownloaded_ParamsDataView() {}

  URLLoaderClient_OnDataDownloaded_ParamsDataView(
      internal::URLLoaderClient_OnDataDownloaded_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int64_t data_length() const {
    return data_->data_length;
  }
  int64_t encoded_length() const {
    return data_->encoded_length;
  }
 private:
  internal::URLLoaderClient_OnDataDownloaded_Params_Data* data_ = nullptr;
};

class URLLoaderClient_OnUploadProgress_ParamsDataView {
 public:
  URLLoaderClient_OnUploadProgress_ParamsDataView() {}

  URLLoaderClient_OnUploadProgress_ParamsDataView(
      internal::URLLoaderClient_OnUploadProgress_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int64_t current_position() const {
    return data_->current_position;
  }
  int64_t total_size() const {
    return data_->total_size;
  }
 private:
  internal::URLLoaderClient_OnUploadProgress_Params_Data* data_ = nullptr;
};

class URLLoaderClient_OnUploadProgress_ResponseParamsDataView {
 public:
  URLLoaderClient_OnUploadProgress_ResponseParamsDataView() {}

  URLLoaderClient_OnUploadProgress_ResponseParamsDataView(
      internal::URLLoaderClient_OnUploadProgress_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::URLLoaderClient_OnUploadProgress_ResponseParams_Data* data_ = nullptr;
};

class URLLoaderClient_OnReceiveCachedMetadata_ParamsDataView {
 public:
  URLLoaderClient_OnReceiveCachedMetadata_ParamsDataView() {}

  URLLoaderClient_OnReceiveCachedMetadata_ParamsDataView(
      internal::URLLoaderClient_OnReceiveCachedMetadata_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetDataDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadData(UserType* output) {
    auto* pointer = data_->data.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
 private:
  internal::URLLoaderClient_OnReceiveCachedMetadata_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class URLLoaderClient_OnTransferSizeUpdated_ParamsDataView {
 public:
  URLLoaderClient_OnTransferSizeUpdated_ParamsDataView() {}

  URLLoaderClient_OnTransferSizeUpdated_ParamsDataView(
      internal::URLLoaderClient_OnTransferSizeUpdated_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int32_t transfer_size_diff() const {
    return data_->transfer_size_diff;
  }
 private:
  internal::URLLoaderClient_OnTransferSizeUpdated_Params_Data* data_ = nullptr;
};

class URLLoaderClient_OnStartLoadingResponseBody_ParamsDataView {
 public:
  URLLoaderClient_OnStartLoadingResponseBody_ParamsDataView() {}

  URLLoaderClient_OnStartLoadingResponseBody_ParamsDataView(
      internal::URLLoaderClient_OnStartLoadingResponseBody_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  mojo::ScopedDataPipeConsumerHandle TakeBody() {
    mojo::ScopedDataPipeConsumerHandle result;
    bool ret =
        mojo::internal::Deserialize<mojo::ScopedDataPipeConsumerHandle>(
            &data_->body, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::URLLoaderClient_OnStartLoadingResponseBody_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class URLLoaderClient_OnComplete_ParamsDataView {
 public:
  URLLoaderClient_OnComplete_ParamsDataView() {}

  URLLoaderClient_OnComplete_ParamsDataView(
      internal::URLLoaderClient_OnComplete_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetStatusDataView(
      URLLoaderCompletionStatusDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStatus(UserType* output) {
    auto* pointer = data_->status.Get();
    return mojo::internal::Deserialize<::network::mojom::URLLoaderCompletionStatusDataView>(
        pointer, output, context_);
  }
 private:
  internal::URLLoaderClient_OnComplete_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace network

namespace std {

template <>
struct hash<::network::mojom::RequestPriority>
    : public mojo::internal::EnumHashImpl<::network::mojom::RequestPriority> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::network::mojom::RequestPriority, ::network::mojom::RequestPriority> {
  static ::network::mojom::RequestPriority ToMojom(::network::mojom::RequestPriority input) { return input; }
  static bool FromMojom(::network::mojom::RequestPriority input, ::network::mojom::RequestPriority* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::network::mojom::RequestPriority, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::network::mojom::RequestPriority, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::network::mojom::RequestPriority>(input), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::network::mojom::URLLoaderClientEndpointsDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::network::mojom::URLLoaderClientEndpointsDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::network::mojom::internal::URLLoaderClientEndpoints_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    decltype(CallWithContext(Traits::url_loader, input, custom_context)) in_url_loader = CallWithContext(Traits::url_loader, input, custom_context);
    mojo::internal::Serialize<::network::mojom::URLLoaderPtrDataView>(
        in_url_loader, &(*output)->url_loader, context);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        !mojo::internal::IsHandleOrInterfaceValid((*output)->url_loader),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
        "invalid url_loader in URLLoaderClientEndpoints struct");
    decltype(CallWithContext(Traits::url_loader_client, input, custom_context)) in_url_loader_client = CallWithContext(Traits::url_loader_client, input, custom_context);
    mojo::internal::Serialize<::network::mojom::URLLoaderClientRequestDataView>(
        in_url_loader_client, &(*output)->url_loader_client, context);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        !mojo::internal::IsHandleOrInterfaceValid((*output)->url_loader_client),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
        "invalid url_loader_client in URLLoaderClientEndpoints struct");
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::network::mojom::internal::URLLoaderClientEndpoints_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::network::mojom::URLLoaderClientEndpointsDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace network {
namespace mojom {



inline void URLLoader_FollowRedirect_ParamsDataView::GetModifiedRequestHeadersDataView(
    ::network::mojom::HttpRequestHeadersDataView* output) {
  auto pointer = data_->modified_request_headers.Get();
  *output = ::network::mojom::HttpRequestHeadersDataView(pointer, context_);
}










inline void URLLoaderClient_OnReceiveResponse_ParamsDataView::GetHeadDataView(
    URLResponseHeadDataView* output) {
  auto pointer = data_->head.Get();
  *output = URLResponseHeadDataView(pointer, context_);
}


inline void URLLoaderClient_OnReceiveRedirect_ParamsDataView::GetRedirectInfoDataView(
    URLRequestRedirectInfoDataView* output) {
  auto pointer = data_->redirect_info.Get();
  *output = URLRequestRedirectInfoDataView(pointer, context_);
}
inline void URLLoaderClient_OnReceiveRedirect_ParamsDataView::GetHeadDataView(
    URLResponseHeadDataView* output) {
  auto pointer = data_->head.Get();
  *output = URLResponseHeadDataView(pointer, context_);
}








inline void URLLoaderClient_OnReceiveCachedMetadata_ParamsDataView::GetDataDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->data.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}






inline void URLLoaderClient_OnComplete_ParamsDataView::GetStatusDataView(
    URLLoaderCompletionStatusDataView* output) {
  auto pointer = data_->status.Get();
  *output = URLLoaderCompletionStatusDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_URL_LOADER_MOJOM_SHARED_H_
