// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_PUBLIC_COMMON_RESOURCE_LOAD_INFO_MOJOM_SHARED_H_
#define CONTENT_PUBLIC_COMMON_RESOURCE_LOAD_INFO_MOJOM_SHARED_H_

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
#include "content/public/common/resource_load_info.mojom-shared-internal.h"
#include "content/public/common/load_timing_info.mojom-shared.h"
#include "content/public/common/resource_type.mojom-shared.h"
#include "net/interfaces/ip_address.mojom-shared.h"
#include "services/network/public/mojom/network_param.mojom-shared.h"
#include "url/mojom/url.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "base/component_export.h"


namespace content {
namespace mojom {
class CommonNetworkInfoDataView;

class RedirectInfoDataView;

class ResourceLoadInfoDataView;



}  // namespace mojom
}  // namespace content

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::content::mojom::CommonNetworkInfoDataView> {
  using Data = ::content::mojom::internal::CommonNetworkInfo_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::content::mojom::RedirectInfoDataView> {
  using Data = ::content::mojom::internal::RedirectInfo_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::content::mojom::ResourceLoadInfoDataView> {
  using Data = ::content::mojom::internal::ResourceLoadInfo_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace content {
namespace mojom {
class CommonNetworkInfoDataView {
 public:
  CommonNetworkInfoDataView() {}

  CommonNetworkInfoDataView(
      internal::CommonNetworkInfo_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  bool network_accessed() const {
    return data_->network_accessed;
  }
  bool always_access_network() const {
    return data_->always_access_network;
  }
  inline void GetIpPortPairDataView(
      ::network::mojom::HostPortPairDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadIpPortPair(UserType* output) {
    auto* pointer = data_->ip_port_pair.Get();
    return mojo::internal::Deserialize<::network::mojom::HostPortPairDataView>(
        pointer, output, context_);
  }
 private:
  internal::CommonNetworkInfo_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class RedirectInfoDataView {
 public:
  RedirectInfoDataView() {}

  RedirectInfoDataView(
      internal::RedirectInfo_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetUrlDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUrl(UserType* output) {
    auto* pointer = data_->url.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
  inline void GetNetworkInfoDataView(
      CommonNetworkInfoDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadNetworkInfo(UserType* output) {
    auto* pointer = data_->network_info.Get();
    return mojo::internal::Deserialize<::content::mojom::CommonNetworkInfoDataView>(
        pointer, output, context_);
  }
 private:
  internal::RedirectInfo_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ResourceLoadInfoDataView {
 public:
  ResourceLoadInfoDataView() {}

  ResourceLoadInfoDataView(
      internal::ResourceLoadInfo_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int64_t request_id() const {
    return data_->request_id;
  }
  inline void GetUrlDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUrl(UserType* output) {
    auto* pointer = data_->url.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
  inline void GetReferrerDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadReferrer(UserType* output) {
    auto* pointer = data_->referrer.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
  inline void GetOriginalUrlDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadOriginalUrl(UserType* output) {
    auto* pointer = data_->original_url.Get();
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
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadResourceType(UserType* output) const {
    auto data_value = data_->resource_type;
    return mojo::internal::Deserialize<::content::mojom::ResourceType>(
        data_value, output);
  }

  ::content::mojom::ResourceType resource_type() const {
    return static_cast<::content::mojom::ResourceType>(data_->resource_type);
  }
  inline void GetMimeTypeDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMimeType(UserType* output) {
    auto* pointer = data_->mime_type.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  bool was_cached() const {
    return data_->was_cached;
  }
  inline void GetNetworkInfoDataView(
      CommonNetworkInfoDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadNetworkInfo(UserType* output) {
    auto* pointer = data_->network_info.Get();
    return mojo::internal::Deserialize<::content::mojom::CommonNetworkInfoDataView>(
        pointer, output, context_);
  }
  int32_t net_error() const {
    return data_->net_error;
  }
  inline void GetLoadTimingInfoDataView(
      ::content::mojom::LoadTimingInfoDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadLoadTimingInfo(UserType* output) {
    auto* pointer = data_->load_timing_info.Get();
    return mojo::internal::Deserialize<::content::mojom::LoadTimingInfoDataView>(
        pointer, output, context_);
  }
  int64_t raw_body_bytes() const {
    return data_->raw_body_bytes;
  }
  int64_t total_received_bytes() const {
    return data_->total_received_bytes;
  }
  inline void GetRedirectInfoChainDataView(
      mojo::ArrayDataView<RedirectInfoDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRedirectInfoChain(UserType* output) {
    auto* pointer = data_->redirect_info_chain.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::content::mojom::RedirectInfoDataView>>(
        pointer, output, context_);
  }
 private:
  internal::ResourceLoadInfo_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace content

namespace std {

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::content::mojom::CommonNetworkInfoDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::content::mojom::CommonNetworkInfoDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::content::mojom::internal::CommonNetworkInfo_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    (*output)->network_accessed = CallWithContext(Traits::network_accessed, input, custom_context);
    (*output)->always_access_network = CallWithContext(Traits::always_access_network, input, custom_context);
    decltype(CallWithContext(Traits::ip_port_pair, input, custom_context)) in_ip_port_pair = CallWithContext(Traits::ip_port_pair, input, custom_context);
    typename decltype((*output)->ip_port_pair)::BaseType::BufferWriter
        ip_port_pair_writer;
    mojo::internal::Serialize<::network::mojom::HostPortPairDataView>(
        in_ip_port_pair, buffer, &ip_port_pair_writer, context);
    (*output)->ip_port_pair.Set(
        ip_port_pair_writer.is_null() ? nullptr : ip_port_pair_writer.data());
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::content::mojom::internal::CommonNetworkInfo_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::content::mojom::CommonNetworkInfoDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::content::mojom::RedirectInfoDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::content::mojom::RedirectInfoDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::content::mojom::internal::RedirectInfo_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
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
        "null url in RedirectInfo struct");
    decltype(CallWithContext(Traits::network_info, input, custom_context)) in_network_info = CallWithContext(Traits::network_info, input, custom_context);
    typename decltype((*output)->network_info)::BaseType::BufferWriter
        network_info_writer;
    mojo::internal::Serialize<::content::mojom::CommonNetworkInfoDataView>(
        in_network_info, buffer, &network_info_writer, context);
    (*output)->network_info.Set(
        network_info_writer.is_null() ? nullptr : network_info_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->network_info.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null network_info in RedirectInfo struct");
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::content::mojom::internal::RedirectInfo_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::content::mojom::RedirectInfoDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::content::mojom::ResourceLoadInfoDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::content::mojom::ResourceLoadInfoDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::content::mojom::internal::ResourceLoadInfo_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    (*output)->request_id = CallWithContext(Traits::request_id, input, custom_context);
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
        "null url in ResourceLoadInfo struct");
    decltype(CallWithContext(Traits::referrer, input, custom_context)) in_referrer = CallWithContext(Traits::referrer, input, custom_context);
    typename decltype((*output)->referrer)::BaseType::BufferWriter
        referrer_writer;
    mojo::internal::Serialize<::url::mojom::UrlDataView>(
        in_referrer, buffer, &referrer_writer, context);
    (*output)->referrer.Set(
        referrer_writer.is_null() ? nullptr : referrer_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->referrer.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null referrer in ResourceLoadInfo struct");
    decltype(CallWithContext(Traits::original_url, input, custom_context)) in_original_url = CallWithContext(Traits::original_url, input, custom_context);
    typename decltype((*output)->original_url)::BaseType::BufferWriter
        original_url_writer;
    mojo::internal::Serialize<::url::mojom::UrlDataView>(
        in_original_url, buffer, &original_url_writer, context);
    (*output)->original_url.Set(
        original_url_writer.is_null() ? nullptr : original_url_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->original_url.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null original_url in ResourceLoadInfo struct");
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
        "null method in ResourceLoadInfo struct");
    mojo::internal::Serialize<::content::mojom::ResourceType>(
        CallWithContext(Traits::resource_type, input, custom_context), &(*output)->resource_type);
    decltype(CallWithContext(Traits::mime_type, input, custom_context)) in_mime_type = CallWithContext(Traits::mime_type, input, custom_context);
    typename decltype((*output)->mime_type)::BaseType::BufferWriter
        mime_type_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_mime_type, buffer, &mime_type_writer, context);
    (*output)->mime_type.Set(
        mime_type_writer.is_null() ? nullptr : mime_type_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->mime_type.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null mime_type in ResourceLoadInfo struct");
    (*output)->was_cached = CallWithContext(Traits::was_cached, input, custom_context);
    decltype(CallWithContext(Traits::network_info, input, custom_context)) in_network_info = CallWithContext(Traits::network_info, input, custom_context);
    typename decltype((*output)->network_info)::BaseType::BufferWriter
        network_info_writer;
    mojo::internal::Serialize<::content::mojom::CommonNetworkInfoDataView>(
        in_network_info, buffer, &network_info_writer, context);
    (*output)->network_info.Set(
        network_info_writer.is_null() ? nullptr : network_info_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->network_info.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null network_info in ResourceLoadInfo struct");
    (*output)->net_error = CallWithContext(Traits::net_error, input, custom_context);
    decltype(CallWithContext(Traits::load_timing_info, input, custom_context)) in_load_timing_info = CallWithContext(Traits::load_timing_info, input, custom_context);
    typename decltype((*output)->load_timing_info)::BaseType::BufferWriter
        load_timing_info_writer;
    mojo::internal::Serialize<::content::mojom::LoadTimingInfoDataView>(
        in_load_timing_info, buffer, &load_timing_info_writer, context);
    (*output)->load_timing_info.Set(
        load_timing_info_writer.is_null() ? nullptr : load_timing_info_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->load_timing_info.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null load_timing_info in ResourceLoadInfo struct");
    (*output)->raw_body_bytes = CallWithContext(Traits::raw_body_bytes, input, custom_context);
    (*output)->total_received_bytes = CallWithContext(Traits::total_received_bytes, input, custom_context);
    decltype(CallWithContext(Traits::redirect_info_chain, input, custom_context)) in_redirect_info_chain = CallWithContext(Traits::redirect_info_chain, input, custom_context);
    typename decltype((*output)->redirect_info_chain)::BaseType::BufferWriter
        redirect_info_chain_writer;
    const mojo::internal::ContainerValidateParams redirect_info_chain_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::content::mojom::RedirectInfoDataView>>(
        in_redirect_info_chain, buffer, &redirect_info_chain_writer, &redirect_info_chain_validate_params,
        context);
    (*output)->redirect_info_chain.Set(
        redirect_info_chain_writer.is_null() ? nullptr : redirect_info_chain_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->redirect_info_chain.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null redirect_info_chain in ResourceLoadInfo struct");
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::content::mojom::internal::ResourceLoadInfo_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::content::mojom::ResourceLoadInfoDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace content {
namespace mojom {

inline void CommonNetworkInfoDataView::GetIpPortPairDataView(
    ::network::mojom::HostPortPairDataView* output) {
  auto pointer = data_->ip_port_pair.Get();
  *output = ::network::mojom::HostPortPairDataView(pointer, context_);
}


inline void RedirectInfoDataView::GetUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->url.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}
inline void RedirectInfoDataView::GetNetworkInfoDataView(
    CommonNetworkInfoDataView* output) {
  auto pointer = data_->network_info.Get();
  *output = CommonNetworkInfoDataView(pointer, context_);
}


inline void ResourceLoadInfoDataView::GetUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->url.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}
inline void ResourceLoadInfoDataView::GetReferrerDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->referrer.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}
inline void ResourceLoadInfoDataView::GetOriginalUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->original_url.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}
inline void ResourceLoadInfoDataView::GetMethodDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->method.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void ResourceLoadInfoDataView::GetMimeTypeDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->mime_type.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void ResourceLoadInfoDataView::GetNetworkInfoDataView(
    CommonNetworkInfoDataView* output) {
  auto pointer = data_->network_info.Get();
  *output = CommonNetworkInfoDataView(pointer, context_);
}
inline void ResourceLoadInfoDataView::GetLoadTimingInfoDataView(
    ::content::mojom::LoadTimingInfoDataView* output) {
  auto pointer = data_->load_timing_info.Get();
  *output = ::content::mojom::LoadTimingInfoDataView(pointer, context_);
}
inline void ResourceLoadInfoDataView::GetRedirectInfoChainDataView(
    mojo::ArrayDataView<RedirectInfoDataView>* output) {
  auto pointer = data_->redirect_info_chain.Get();
  *output = mojo::ArrayDataView<RedirectInfoDataView>(pointer, context_);
}



}  // namespace mojom
}  // namespace content

#endif  // CONTENT_PUBLIC_COMMON_RESOURCE_LOAD_INFO_MOJOM_SHARED_H_
