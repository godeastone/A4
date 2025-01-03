// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_PUBLIC_COMMON_RESOURCE_LOAD_INFO_MOJOM_H_
#define CONTENT_PUBLIC_COMMON_RESOURCE_LOAD_INFO_MOJOM_H_

#include <stdint.h>

#include <limits>
#include <type_traits>
#include <utility>

#include "base/callback.h"
#include "base/macros.h"
#include "base/optional.h"

#include "mojo/public/cpp/bindings/mojo_buildflags.h"
#if BUILDFLAG(MOJO_TRACE_ENABLED)
#include "base/trace_event/trace_event.h"
#endif
#include "mojo/public/cpp/bindings/clone_traits.h"
#include "mojo/public/cpp/bindings/equals_traits.h"
#include "mojo/public/cpp/bindings/lib/serialization.h"
#include "mojo/public/cpp/bindings/struct_ptr.h"
#include "mojo/public/cpp/bindings/struct_traits.h"
#include "mojo/public/cpp/bindings/union_traits.h"
#include "content/public/common/resource_load_info.mojom-shared.h"
#include "content/public/common/load_timing_info.mojom.h"
#include "content/public/common/resource_type.mojom.h"
#include "net/interfaces/ip_address.mojom.h"
#include "services/network/public/mojom/network_param.mojom.h"
#include "url/mojom/url.mojom.h"
#include <string>
#include <vector>

#include "mojo/public/cpp/bindings/associated_interface_ptr.h"
#include "mojo/public/cpp/bindings/associated_interface_ptr_info.h"
#include "mojo/public/cpp/bindings/associated_interface_request.h"
#include "mojo/public/cpp/bindings/interface_ptr.h"
#include "mojo/public/cpp/bindings/interface_request.h"
#include "mojo/public/cpp/bindings/lib/control_message_handler.h"
#include "mojo/public/cpp/bindings/raw_ptr_impl_ref_traits.h"
#include "mojo/public/cpp/bindings/thread_safe_interface_ptr.h"


#include "mojo/public/cpp/bindings/lib/native_enum_serialization.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "content/common/content_export.h"


namespace content {
namespace mojom {
class CommonNetworkInfo;
using CommonNetworkInfoPtr = mojo::StructPtr<CommonNetworkInfo>;

class RedirectInfo;
using RedirectInfoPtr = mojo::StructPtr<RedirectInfo>;

class ResourceLoadInfo;
using ResourceLoadInfoPtr = mojo::StructPtr<ResourceLoadInfo>;








class CONTENT_EXPORT CommonNetworkInfo {
 public:
  using DataView = CommonNetworkInfoDataView;
  using Data_ = internal::CommonNetworkInfo_Data;

  template <typename... Args>
  static CommonNetworkInfoPtr New(Args&&... args) {
    return CommonNetworkInfoPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static CommonNetworkInfoPtr From(const U& u) {
    return mojo::TypeConverter<CommonNetworkInfoPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, CommonNetworkInfo>::Convert(*this);
  }


  CommonNetworkInfo();

  CommonNetworkInfo(
      bool network_accessed,
      bool always_access_network,
      const base::Optional<net::HostPortPair>& ip_port_pair);

  ~CommonNetworkInfo();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = CommonNetworkInfoPtr>
  CommonNetworkInfoPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, CommonNetworkInfo>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        CommonNetworkInfo::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        CommonNetworkInfo::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::CommonNetworkInfo_UnserializedMessageContext<
            UserType, CommonNetworkInfo::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<CommonNetworkInfo::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return CommonNetworkInfo::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::CommonNetworkInfo_UnserializedMessageContext<
            UserType, CommonNetworkInfo::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<CommonNetworkInfo::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  bool network_accessed;
  bool always_access_network;
  base::Optional<net::HostPortPair> ip_port_pair;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};


class CONTENT_EXPORT RedirectInfo {
 public:
  using DataView = RedirectInfoDataView;
  using Data_ = internal::RedirectInfo_Data;

  template <typename... Args>
  static RedirectInfoPtr New(Args&&... args) {
    return RedirectInfoPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static RedirectInfoPtr From(const U& u) {
    return mojo::TypeConverter<RedirectInfoPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, RedirectInfo>::Convert(*this);
  }


  RedirectInfo();

  RedirectInfo(
      const GURL& url,
      CommonNetworkInfoPtr network_info);

  ~RedirectInfo();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = RedirectInfoPtr>
  RedirectInfoPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, RedirectInfo>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        RedirectInfo::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        RedirectInfo::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::RedirectInfo_UnserializedMessageContext<
            UserType, RedirectInfo::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<RedirectInfo::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return RedirectInfo::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::RedirectInfo_UnserializedMessageContext<
            UserType, RedirectInfo::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<RedirectInfo::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  GURL url;
  CommonNetworkInfoPtr network_info;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(RedirectInfo);
};


class CONTENT_EXPORT ResourceLoadInfo {
 public:
  using DataView = ResourceLoadInfoDataView;
  using Data_ = internal::ResourceLoadInfo_Data;

  template <typename... Args>
  static ResourceLoadInfoPtr New(Args&&... args) {
    return ResourceLoadInfoPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static ResourceLoadInfoPtr From(const U& u) {
    return mojo::TypeConverter<ResourceLoadInfoPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, ResourceLoadInfo>::Convert(*this);
  }


  ResourceLoadInfo();

  ResourceLoadInfo(
      int64_t request_id,
      const GURL& url,
      const GURL& referrer,
      const GURL& original_url,
      const std::string& method,
      content::ResourceType resource_type,
      const std::string& mime_type,
      bool was_cached,
      CommonNetworkInfoPtr network_info,
      int32_t net_error,
      const net::LoadTimingInfo& load_timing_info,
      int64_t raw_body_bytes,
      int64_t total_received_bytes,
      std::vector<RedirectInfoPtr> redirect_info_chain);

  ~ResourceLoadInfo();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = ResourceLoadInfoPtr>
  ResourceLoadInfoPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, ResourceLoadInfo>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        ResourceLoadInfo::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        ResourceLoadInfo::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::ResourceLoadInfo_UnserializedMessageContext<
            UserType, ResourceLoadInfo::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<ResourceLoadInfo::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return ResourceLoadInfo::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::ResourceLoadInfo_UnserializedMessageContext<
            UserType, ResourceLoadInfo::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<ResourceLoadInfo::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  int64_t request_id;
  GURL url;
  GURL referrer;
  GURL original_url;
  std::string method;
  content::ResourceType resource_type;
  std::string mime_type;
  bool was_cached;
  CommonNetworkInfoPtr network_info;
  int32_t net_error;
  net::LoadTimingInfo load_timing_info;
  int64_t raw_body_bytes;
  int64_t total_received_bytes;
  std::vector<RedirectInfoPtr> redirect_info_chain;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(ResourceLoadInfo);
};

template <typename StructPtrType>
CommonNetworkInfoPtr CommonNetworkInfo::Clone() const {
  return New(
      mojo::Clone(network_accessed),
      mojo::Clone(always_access_network),
      mojo::Clone(ip_port_pair)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, CommonNetworkInfo>::value>::type*>
bool CommonNetworkInfo::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->network_accessed, other_struct.network_accessed))
    return false;
  if (!mojo::Equals(this->always_access_network, other_struct.always_access_network))
    return false;
  if (!mojo::Equals(this->ip_port_pair, other_struct.ip_port_pair))
    return false;
  return true;
}
template <typename StructPtrType>
RedirectInfoPtr RedirectInfo::Clone() const {
  return New(
      mojo::Clone(url),
      mojo::Clone(network_info)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, RedirectInfo>::value>::type*>
bool RedirectInfo::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->url, other_struct.url))
    return false;
  if (!mojo::Equals(this->network_info, other_struct.network_info))
    return false;
  return true;
}
template <typename StructPtrType>
ResourceLoadInfoPtr ResourceLoadInfo::Clone() const {
  return New(
      mojo::Clone(request_id),
      mojo::Clone(url),
      mojo::Clone(referrer),
      mojo::Clone(original_url),
      mojo::Clone(method),
      mojo::Clone(resource_type),
      mojo::Clone(mime_type),
      mojo::Clone(was_cached),
      mojo::Clone(network_info),
      mojo::Clone(net_error),
      mojo::Clone(load_timing_info),
      mojo::Clone(raw_body_bytes),
      mojo::Clone(total_received_bytes),
      mojo::Clone(redirect_info_chain)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, ResourceLoadInfo>::value>::type*>
bool ResourceLoadInfo::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->request_id, other_struct.request_id))
    return false;
  if (!mojo::Equals(this->url, other_struct.url))
    return false;
  if (!mojo::Equals(this->referrer, other_struct.referrer))
    return false;
  if (!mojo::Equals(this->original_url, other_struct.original_url))
    return false;
  if (!mojo::Equals(this->method, other_struct.method))
    return false;
  if (!mojo::Equals(this->resource_type, other_struct.resource_type))
    return false;
  if (!mojo::Equals(this->mime_type, other_struct.mime_type))
    return false;
  if (!mojo::Equals(this->was_cached, other_struct.was_cached))
    return false;
  if (!mojo::Equals(this->network_info, other_struct.network_info))
    return false;
  if (!mojo::Equals(this->net_error, other_struct.net_error))
    return false;
  if (!mojo::Equals(this->load_timing_info, other_struct.load_timing_info))
    return false;
  if (!mojo::Equals(this->raw_body_bytes, other_struct.raw_body_bytes))
    return false;
  if (!mojo::Equals(this->total_received_bytes, other_struct.total_received_bytes))
    return false;
  if (!mojo::Equals(this->redirect_info_chain, other_struct.redirect_info_chain))
    return false;
  return true;
}


}  // namespace mojom
}  // namespace content

namespace mojo {


template <>
struct CONTENT_EXPORT StructTraits<::content::mojom::CommonNetworkInfo::DataView,
                                         ::content::mojom::CommonNetworkInfoPtr> {
  static bool IsNull(const ::content::mojom::CommonNetworkInfoPtr& input) { return !input; }
  static void SetToNull(::content::mojom::CommonNetworkInfoPtr* output) { output->reset(); }

  static decltype(::content::mojom::CommonNetworkInfo::network_accessed) network_accessed(
      const ::content::mojom::CommonNetworkInfoPtr& input) {
    return input->network_accessed;
  }

  static decltype(::content::mojom::CommonNetworkInfo::always_access_network) always_access_network(
      const ::content::mojom::CommonNetworkInfoPtr& input) {
    return input->always_access_network;
  }

  static const decltype(::content::mojom::CommonNetworkInfo::ip_port_pair)& ip_port_pair(
      const ::content::mojom::CommonNetworkInfoPtr& input) {
    return input->ip_port_pair;
  }

  static bool Read(::content::mojom::CommonNetworkInfo::DataView input, ::content::mojom::CommonNetworkInfoPtr* output);
};


template <>
struct CONTENT_EXPORT StructTraits<::content::mojom::RedirectInfo::DataView,
                                         ::content::mojom::RedirectInfoPtr> {
  static bool IsNull(const ::content::mojom::RedirectInfoPtr& input) { return !input; }
  static void SetToNull(::content::mojom::RedirectInfoPtr* output) { output->reset(); }

  static const decltype(::content::mojom::RedirectInfo::url)& url(
      const ::content::mojom::RedirectInfoPtr& input) {
    return input->url;
  }

  static const decltype(::content::mojom::RedirectInfo::network_info)& network_info(
      const ::content::mojom::RedirectInfoPtr& input) {
    return input->network_info;
  }

  static bool Read(::content::mojom::RedirectInfo::DataView input, ::content::mojom::RedirectInfoPtr* output);
};


template <>
struct CONTENT_EXPORT StructTraits<::content::mojom::ResourceLoadInfo::DataView,
                                         ::content::mojom::ResourceLoadInfoPtr> {
  static bool IsNull(const ::content::mojom::ResourceLoadInfoPtr& input) { return !input; }
  static void SetToNull(::content::mojom::ResourceLoadInfoPtr* output) { output->reset(); }

  static decltype(::content::mojom::ResourceLoadInfo::request_id) request_id(
      const ::content::mojom::ResourceLoadInfoPtr& input) {
    return input->request_id;
  }

  static const decltype(::content::mojom::ResourceLoadInfo::url)& url(
      const ::content::mojom::ResourceLoadInfoPtr& input) {
    return input->url;
  }

  static const decltype(::content::mojom::ResourceLoadInfo::referrer)& referrer(
      const ::content::mojom::ResourceLoadInfoPtr& input) {
    return input->referrer;
  }

  static const decltype(::content::mojom::ResourceLoadInfo::original_url)& original_url(
      const ::content::mojom::ResourceLoadInfoPtr& input) {
    return input->original_url;
  }

  static const decltype(::content::mojom::ResourceLoadInfo::method)& method(
      const ::content::mojom::ResourceLoadInfoPtr& input) {
    return input->method;
  }

  static decltype(::content::mojom::ResourceLoadInfo::resource_type) resource_type(
      const ::content::mojom::ResourceLoadInfoPtr& input) {
    return input->resource_type;
  }

  static const decltype(::content::mojom::ResourceLoadInfo::mime_type)& mime_type(
      const ::content::mojom::ResourceLoadInfoPtr& input) {
    return input->mime_type;
  }

  static decltype(::content::mojom::ResourceLoadInfo::was_cached) was_cached(
      const ::content::mojom::ResourceLoadInfoPtr& input) {
    return input->was_cached;
  }

  static const decltype(::content::mojom::ResourceLoadInfo::network_info)& network_info(
      const ::content::mojom::ResourceLoadInfoPtr& input) {
    return input->network_info;
  }

  static decltype(::content::mojom::ResourceLoadInfo::net_error) net_error(
      const ::content::mojom::ResourceLoadInfoPtr& input) {
    return input->net_error;
  }

  static const decltype(::content::mojom::ResourceLoadInfo::load_timing_info)& load_timing_info(
      const ::content::mojom::ResourceLoadInfoPtr& input) {
    return input->load_timing_info;
  }

  static decltype(::content::mojom::ResourceLoadInfo::raw_body_bytes) raw_body_bytes(
      const ::content::mojom::ResourceLoadInfoPtr& input) {
    return input->raw_body_bytes;
  }

  static decltype(::content::mojom::ResourceLoadInfo::total_received_bytes) total_received_bytes(
      const ::content::mojom::ResourceLoadInfoPtr& input) {
    return input->total_received_bytes;
  }

  static const decltype(::content::mojom::ResourceLoadInfo::redirect_info_chain)& redirect_info_chain(
      const ::content::mojom::ResourceLoadInfoPtr& input) {
    return input->redirect_info_chain;
  }

  static bool Read(::content::mojom::ResourceLoadInfo::DataView input, ::content::mojom::ResourceLoadInfoPtr* output);
};

}  // namespace mojo

#endif  // CONTENT_PUBLIC_COMMON_RESOURCE_LOAD_INFO_MOJOM_H_