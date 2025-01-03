// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_CONTEXT_MOJOM_SHARED_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_CONTEXT_MOJOM_SHARED_H_

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
#include "services/network/public/mojom/network_context.mojom-shared-internal.h"
#include "mojo/public/mojom/base/file.mojom-shared.h"
#include "mojo/public/mojom/base/file_path.mojom-shared.h"
#include "mojo/public/mojom/base/values.mojom-shared.h"
#include "mojo/public/mojom/base/time.mojom-shared.h"
#include "net/interfaces/address_list.mojom-shared.h"
#include "net/interfaces/ip_endpoint.mojom-shared.h"
#include "services/network/public/mojom/cookie_manager.mojom-shared.h"
#include "services/network/public/mojom/ct_log_info.mojom-shared.h"
#include "services/network/public/mojom/mutable_network_traffic_annotation_tag.mojom-shared.h"
#include "services/network/public/mojom/proxy_config.mojom-shared.h"
#include "services/network/public/mojom/proxy_config_with_annotation.mojom-shared.h"
#include "services/network/public/mojom/ssl_config.mojom-shared.h"
#include "services/network/public/mojom/tcp_socket.mojom-shared.h"
#include "services/network/public/mojom/udp_socket.mojom-shared.h"
#include "services/network/public/mojom/url_loader.mojom-shared.h"
#include "services/network/public/mojom/url_loader_factory.mojom-shared.h"
#include "services/network/public/mojom/websocket.mojom-shared.h"
#include "services/proxy_resolver/public/mojom/proxy_resolver.mojom-shared.h"
#include "services/network/public/mojom/restricted_cookie_manager.mojom-shared.h"
#include "url/mojom/origin.mojom-shared.h"
#include "url/mojom/url.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"


namespace network {
namespace mojom {
class NetworkContextParamsDataView;

class NetworkConditionsDataView;

class ClearDataFilterDataView;

class NetworkUsageDataView;

class URLLoaderFactoryParamsDataView;



}  // namespace mojom
}  // namespace network

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::network::mojom::NetworkContextParamsDataView> {
  using Data = ::network::mojom::internal::NetworkContextParams_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::network::mojom::NetworkConditionsDataView> {
  using Data = ::network::mojom::internal::NetworkConditions_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::network::mojom::ClearDataFilterDataView> {
  using Data = ::network::mojom::internal::ClearDataFilter_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::network::mojom::NetworkUsageDataView> {
  using Data = ::network::mojom::internal::NetworkUsage_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::network::mojom::URLLoaderFactoryParamsDataView> {
  using Data = ::network::mojom::internal::URLLoaderFactoryParams_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace network {
namespace mojom {

enum class ClearDataFilter_Type : int32_t {
  DELETE_MATCHES,
  KEEP_MATCHES,
  kMinValue = 0,
  kMaxValue = 1,
};

inline std::ostream& operator<<(std::ostream& os, ClearDataFilter_Type value) {
  switch(value) {
    case ClearDataFilter_Type::DELETE_MATCHES:
      return os << "ClearDataFilter_Type::DELETE_MATCHES";
    case ClearDataFilter_Type::KEEP_MATCHES:
      return os << "ClearDataFilter_Type::KEEP_MATCHES";
    default:
      return os << "Unknown ClearDataFilter_Type value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(ClearDataFilter_Type value) {
  return internal::ClearDataFilter_Type_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

enum class NetLogExporter_CaptureMode : int32_t {
  DEFAULT,
  INCLUDE_COOKIES_AND_CREDENTIALS,
  INCLUDE_SOCKET_BYTES,
  kMinValue = 0,
  kMaxValue = 2,
};

inline std::ostream& operator<<(std::ostream& os, NetLogExporter_CaptureMode value) {
  switch(value) {
    case NetLogExporter_CaptureMode::DEFAULT:
      return os << "NetLogExporter_CaptureMode::DEFAULT";
    case NetLogExporter_CaptureMode::INCLUDE_COOKIES_AND_CREDENTIALS:
      return os << "NetLogExporter_CaptureMode::INCLUDE_COOKIES_AND_CREDENTIALS";
    case NetLogExporter_CaptureMode::INCLUDE_SOCKET_BYTES:
      return os << "NetLogExporter_CaptureMode::INCLUDE_SOCKET_BYTES";
    default:
      return os << "Unknown NetLogExporter_CaptureMode value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(NetLogExporter_CaptureMode value) {
  return internal::NetLogExporter_CaptureMode_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
// Interface base classes. They are used for type safety check.
class NetLogExporterInterfaceBase {};

using NetLogExporterPtrDataView =
    mojo::InterfacePtrDataView<NetLogExporterInterfaceBase>;
using NetLogExporterRequestDataView =
    mojo::InterfaceRequestDataView<NetLogExporterInterfaceBase>;
using NetLogExporterAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<NetLogExporterInterfaceBase>;
using NetLogExporterAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<NetLogExporterInterfaceBase>;
class NetworkContextInterfaceBase {};

using NetworkContextPtrDataView =
    mojo::InterfacePtrDataView<NetworkContextInterfaceBase>;
using NetworkContextRequestDataView =
    mojo::InterfaceRequestDataView<NetworkContextInterfaceBase>;
using NetworkContextAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<NetworkContextInterfaceBase>;
using NetworkContextAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<NetworkContextInterfaceBase>;
class NetworkContextParamsDataView {
 public:
  NetworkContextParamsDataView() {}

  NetworkContextParamsDataView(
      internal::NetworkContextParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetContextNameDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadContextName(UserType* output) {
    auto* pointer = data_->context_name.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetUserAgentDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUserAgent(UserType* output) {
    auto* pointer = data_->user_agent.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetAcceptLanguageDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadAcceptLanguage(UserType* output) {
    auto* pointer = data_->accept_language.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  bool enable_brotli() const {
    return data_->enable_brotli;
  }
  inline void GetQuicUserAgentIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadQuicUserAgentId(UserType* output) {
    auto* pointer = data_->quic_user_agent_id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  UserType TakeProxyResolverFactory() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::proxy_resolver::mojom::ProxyResolverFactoryPtrDataView>(
            &data_->proxy_resolver_factory, &result, context_);
    DCHECK(ret);
    return result;
  }
  inline void GetCookiePathDataView(
      ::mojo_base::mojom::FilePathDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCookiePath(UserType* output) {
    auto* pointer = data_->cookie_path.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::FilePathDataView>(
        pointer, output, context_);
  }
  bool restore_old_session_cookies() const {
    return data_->restore_old_session_cookies;
  }
  bool persist_session_cookies() const {
    return data_->persist_session_cookies;
  }
  inline void GetChannelIdPathDataView(
      ::mojo_base::mojom::FilePathDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadChannelIdPath(UserType* output) {
    auto* pointer = data_->channel_id_path.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::FilePathDataView>(
        pointer, output, context_);
  }
  bool http_cache_enabled() const {
    return data_->http_cache_enabled;
  }
  int32_t http_cache_max_size() const {
    return data_->http_cache_max_size;
  }
  inline void GetHttpCachePathDataView(
      ::mojo_base::mojom::FilePathDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadHttpCachePath(UserType* output) {
    auto* pointer = data_->http_cache_path.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::FilePathDataView>(
        pointer, output, context_);
  }
  inline void GetHttpServerPropertiesPathDataView(
      ::mojo_base::mojom::FilePathDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadHttpServerPropertiesPath(UserType* output) {
    auto* pointer = data_->http_server_properties_path.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::FilePathDataView>(
        pointer, output, context_);
  }
  inline void GetTransportSecurityPersisterPathDataView(
      ::mojo_base::mojom::FilePathDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTransportSecurityPersisterPath(UserType* output) {
    auto* pointer = data_->transport_security_persister_path.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::FilePathDataView>(
        pointer, output, context_);
  }
  bool enable_data_url_support() const {
    return data_->enable_data_url_support;
  }
  bool enable_file_url_support() const {
    return data_->enable_file_url_support;
  }
  bool enable_ftp_url_support() const {
    return data_->enable_ftp_url_support;
  }
  bool enforce_chrome_ct_policy() const {
    return data_->enforce_chrome_ct_policy;
  }
  bool http_09_on_non_default_ports_enabled() const {
    return data_->http_09_on_non_default_ports_enabled;
  }
  inline void GetInitialSslConfigDataView(
      ::network::mojom::SSLConfigDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadInitialSslConfig(UserType* output) {
    auto* pointer = data_->initial_ssl_config.Get();
    return mojo::internal::Deserialize<::network::mojom::SSLConfigDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  UserType TakeSslConfigClientRequest() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::network::mojom::SSLConfigClientRequestDataView>(
            &data_->ssl_config_client_request, &result, context_);
    DCHECK(ret);
    return result;
  }
  inline void GetInitialProxyConfigDataView(
      ::network::mojom::ProxyConfigWithAnnotationDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadInitialProxyConfig(UserType* output) {
    auto* pointer = data_->initial_proxy_config.Get();
    return mojo::internal::Deserialize<::network::mojom::ProxyConfigWithAnnotationDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  UserType TakeProxyConfigClientRequest() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::network::mojom::ProxyConfigClientRequestDataView>(
            &data_->proxy_config_client_request, &result, context_);
    DCHECK(ret);
    return result;
  }
  template <typename UserType>
  UserType TakeProxyConfigPollerClient() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::network::mojom::ProxyConfigPollerClientPtrDataView>(
            &data_->proxy_config_poller_client, &result, context_);
    DCHECK(ret);
    return result;
  }
  bool pac_quick_check_enabled() const {
    return data_->pac_quick_check_enabled;
  }
  bool dangerously_allow_pac_access_to_secure_urls() const {
    return data_->dangerously_allow_pac_access_to_secure_urls;
  }
  bool allow_gssapi_library_load() const {
    return data_->allow_gssapi_library_load;
  }
  inline void GetGssapiLibraryNameDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadGssapiLibraryName(UserType* output) {
    auto* pointer = data_->gssapi_library_name.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  bool enable_certificate_reporting() const {
    return data_->enable_certificate_reporting;
  }
  inline void GetCtLogsDataView(
      mojo::ArrayDataView<::network::mojom::CTLogInfoDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCtLogs(UserType* output) {
    auto* pointer = data_->ct_logs.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::network::mojom::CTLogInfoDataView>>(
        pointer, output, context_);
  }
 private:
  internal::NetworkContextParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class NetworkConditionsDataView {
 public:
  NetworkConditionsDataView() {}

  NetworkConditionsDataView(
      internal::NetworkConditions_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  bool offline() const {
    return data_->offline;
  }
  inline void GetLatencyDataView(
      ::mojo_base::mojom::TimeDeltaDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadLatency(UserType* output) {
    auto* pointer = data_->latency.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeDeltaDataView>(
        pointer, output, context_);
  }
  double download_throughput() const {
    return data_->download_throughput;
  }
  double upload_throughput() const {
    return data_->upload_throughput;
  }
 private:
  internal::NetworkConditions_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ClearDataFilterDataView {
 public:
  ClearDataFilterDataView() {}

  ClearDataFilterDataView(
      internal::ClearDataFilter_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadType(UserType* output) const {
    auto data_value = data_->type;
    return mojo::internal::Deserialize<::network::mojom::ClearDataFilter_Type>(
        data_value, output);
  }

  ClearDataFilter_Type type() const {
    return static_cast<ClearDataFilter_Type>(data_->type);
  }
  inline void GetDomainsDataView(
      mojo::ArrayDataView<mojo::StringDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDomains(UserType* output) {
    auto* pointer = data_->domains.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<mojo::StringDataView>>(
        pointer, output, context_);
  }
  inline void GetOriginsDataView(
      mojo::ArrayDataView<::url::mojom::OriginDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadOrigins(UserType* output) {
    auto* pointer = data_->origins.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::url::mojom::OriginDataView>>(
        pointer, output, context_);
  }
 private:
  internal::ClearDataFilter_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class NetworkUsageDataView {
 public:
  NetworkUsageDataView() {}

  NetworkUsageDataView(
      internal::NetworkUsage_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint32_t process_id() const {
    return data_->process_id;
  }
  uint32_t routing_id() const {
    return data_->routing_id;
  }
  int64_t total_bytes_received() const {
    return data_->total_bytes_received;
  }
  int64_t total_bytes_sent() const {
    return data_->total_bytes_sent;
  }
 private:
  internal::NetworkUsage_Data* data_ = nullptr;
};

class URLLoaderFactoryParamsDataView {
 public:
  URLLoaderFactoryParamsDataView() {}

  URLLoaderFactoryParamsDataView(
      internal::URLLoaderFactoryParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  uint32_t process_id() const {
    return data_->process_id;
  }
  bool is_corb_enabled() const {
    return data_->is_corb_enabled;
  }
  inline void GetCorbExcludedInitiatorSchemeDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCorbExcludedInitiatorScheme(UserType* output) {
    auto* pointer = data_->corb_excluded_initiator_scheme.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::URLLoaderFactoryParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class NetLogExporter_Start_ParamsDataView {
 public:
  NetLogExporter_Start_ParamsDataView() {}

  NetLogExporter_Start_ParamsDataView(
      internal::NetLogExporter_Start_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetDestinationDataView(
      ::mojo_base::mojom::FileDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDestination(UserType* output) {
    auto* pointer = data_->destination.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::FileDataView>(
        pointer, output, context_);
  }
  inline void GetExtraConstantsDataView(
      ::mojo_base::mojom::DictionaryValueDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadExtraConstants(UserType* output) {
    auto* pointer = data_->extra_constants.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::DictionaryValueDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCaptureMode(UserType* output) const {
    auto data_value = data_->capture_mode;
    return mojo::internal::Deserialize<::network::mojom::NetLogExporter_CaptureMode>(
        data_value, output);
  }

  NetLogExporter_CaptureMode capture_mode() const {
    return static_cast<NetLogExporter_CaptureMode>(data_->capture_mode);
  }
  uint64_t max_file_size() const {
    return data_->max_file_size;
  }
 private:
  internal::NetLogExporter_Start_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class NetLogExporter_Start_ResponseParamsDataView {
 public:
  NetLogExporter_Start_ResponseParamsDataView() {}

  NetLogExporter_Start_ResponseParamsDataView(
      internal::NetLogExporter_Start_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int32_t net_error() const {
    return data_->net_error;
  }
 private:
  internal::NetLogExporter_Start_ResponseParams_Data* data_ = nullptr;
};

class NetLogExporter_Stop_ParamsDataView {
 public:
  NetLogExporter_Stop_ParamsDataView() {}

  NetLogExporter_Stop_ParamsDataView(
      internal::NetLogExporter_Stop_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetPolledValuesDataView(
      ::mojo_base::mojom::DictionaryValueDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPolledValues(UserType* output) {
    auto* pointer = data_->polled_values.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::DictionaryValueDataView>(
        pointer, output, context_);
  }
 private:
  internal::NetLogExporter_Stop_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class NetLogExporter_Stop_ResponseParamsDataView {
 public:
  NetLogExporter_Stop_ResponseParamsDataView() {}

  NetLogExporter_Stop_ResponseParamsDataView(
      internal::NetLogExporter_Stop_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int32_t net_error() const {
    return data_->net_error;
  }
 private:
  internal::NetLogExporter_Stop_ResponseParams_Data* data_ = nullptr;
};

class NetworkContext_CreateURLLoaderFactory_ParamsDataView {
 public:
  NetworkContext_CreateURLLoaderFactory_ParamsDataView() {}

  NetworkContext_CreateURLLoaderFactory_ParamsDataView(
      internal::NetworkContext_CreateURLLoaderFactory_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeUrlLoaderFactory() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::network::mojom::URLLoaderFactoryRequestDataView>(
            &data_->url_loader_factory, &result, context_);
    DCHECK(ret);
    return result;
  }
  inline void GetParamsDataView(
      URLLoaderFactoryParamsDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadParams(UserType* output) {
    auto* pointer = data_->params.Get();
    return mojo::internal::Deserialize<::network::mojom::URLLoaderFactoryParamsDataView>(
        pointer, output, context_);
  }
 private:
  internal::NetworkContext_CreateURLLoaderFactory_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class NetworkContext_GetCookieManager_ParamsDataView {
 public:
  NetworkContext_GetCookieManager_ParamsDataView() {}

  NetworkContext_GetCookieManager_ParamsDataView(
      internal::NetworkContext_GetCookieManager_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeCookieManager() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::network::mojom::CookieManagerRequestDataView>(
            &data_->cookie_manager, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::NetworkContext_GetCookieManager_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class NetworkContext_GetRestrictedCookieManager_ParamsDataView {
 public:
  NetworkContext_GetRestrictedCookieManager_ParamsDataView() {}

  NetworkContext_GetRestrictedCookieManager_ParamsDataView(
      internal::NetworkContext_GetRestrictedCookieManager_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeRestrictedCookieManager() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::network::mojom::RestrictedCookieManagerRequestDataView>(
            &data_->restricted_cookie_manager, &result, context_);
    DCHECK(ret);
    return result;
  }
  int32_t render_process_id() const {
    return data_->render_process_id;
  }
  int32_t render_frame_id() const {
    return data_->render_frame_id;
  }
 private:
  internal::NetworkContext_GetRestrictedCookieManager_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class NetworkContext_ClearNetworkingHistorySince_ParamsDataView {
 public:
  NetworkContext_ClearNetworkingHistorySince_ParamsDataView() {}

  NetworkContext_ClearNetworkingHistorySince_ParamsDataView(
      internal::NetworkContext_ClearNetworkingHistorySince_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetStartTimeDataView(
      ::mojo_base::mojom::TimeDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStartTime(UserType* output) {
    auto* pointer = data_->start_time.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeDataView>(
        pointer, output, context_);
  }
 private:
  internal::NetworkContext_ClearNetworkingHistorySince_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class NetworkContext_ClearNetworkingHistorySince_ResponseParamsDataView {
 public:
  NetworkContext_ClearNetworkingHistorySince_ResponseParamsDataView() {}

  NetworkContext_ClearNetworkingHistorySince_ResponseParamsDataView(
      internal::NetworkContext_ClearNetworkingHistorySince_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::NetworkContext_ClearNetworkingHistorySince_ResponseParams_Data* data_ = nullptr;
};

class NetworkContext_ClearHttpCache_ParamsDataView {
 public:
  NetworkContext_ClearHttpCache_ParamsDataView() {}

  NetworkContext_ClearHttpCache_ParamsDataView(
      internal::NetworkContext_ClearHttpCache_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetStartTimeDataView(
      ::mojo_base::mojom::TimeDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStartTime(UserType* output) {
    auto* pointer = data_->start_time.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeDataView>(
        pointer, output, context_);
  }
  inline void GetEndTimeDataView(
      ::mojo_base::mojom::TimeDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadEndTime(UserType* output) {
    auto* pointer = data_->end_time.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeDataView>(
        pointer, output, context_);
  }
  inline void GetFilterDataView(
      ClearDataFilterDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFilter(UserType* output) {
    auto* pointer = data_->filter.Get();
    return mojo::internal::Deserialize<::network::mojom::ClearDataFilterDataView>(
        pointer, output, context_);
  }
 private:
  internal::NetworkContext_ClearHttpCache_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class NetworkContext_ClearHttpCache_ResponseParamsDataView {
 public:
  NetworkContext_ClearHttpCache_ResponseParamsDataView() {}

  NetworkContext_ClearHttpCache_ResponseParamsDataView(
      internal::NetworkContext_ClearHttpCache_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::NetworkContext_ClearHttpCache_ResponseParams_Data* data_ = nullptr;
};

class NetworkContext_ClearChannelIds_ParamsDataView {
 public:
  NetworkContext_ClearChannelIds_ParamsDataView() {}

  NetworkContext_ClearChannelIds_ParamsDataView(
      internal::NetworkContext_ClearChannelIds_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetStartTimeDataView(
      ::mojo_base::mojom::TimeDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStartTime(UserType* output) {
    auto* pointer = data_->start_time.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeDataView>(
        pointer, output, context_);
  }
  inline void GetEndTimeDataView(
      ::mojo_base::mojom::TimeDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadEndTime(UserType* output) {
    auto* pointer = data_->end_time.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeDataView>(
        pointer, output, context_);
  }
  inline void GetFilterDataView(
      ClearDataFilterDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFilter(UserType* output) {
    auto* pointer = data_->filter.Get();
    return mojo::internal::Deserialize<::network::mojom::ClearDataFilterDataView>(
        pointer, output, context_);
  }
 private:
  internal::NetworkContext_ClearChannelIds_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class NetworkContext_ClearChannelIds_ResponseParamsDataView {
 public:
  NetworkContext_ClearChannelIds_ResponseParamsDataView() {}

  NetworkContext_ClearChannelIds_ResponseParamsDataView(
      internal::NetworkContext_ClearChannelIds_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::NetworkContext_ClearChannelIds_ResponseParams_Data* data_ = nullptr;
};

class NetworkContext_ClearHttpAuthCache_ParamsDataView {
 public:
  NetworkContext_ClearHttpAuthCache_ParamsDataView() {}

  NetworkContext_ClearHttpAuthCache_ParamsDataView(
      internal::NetworkContext_ClearHttpAuthCache_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetStartTimeDataView(
      ::mojo_base::mojom::TimeDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStartTime(UserType* output) {
    auto* pointer = data_->start_time.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeDataView>(
        pointer, output, context_);
  }
 private:
  internal::NetworkContext_ClearHttpAuthCache_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class NetworkContext_ClearHttpAuthCache_ResponseParamsDataView {
 public:
  NetworkContext_ClearHttpAuthCache_ResponseParamsDataView() {}

  NetworkContext_ClearHttpAuthCache_ResponseParamsDataView(
      internal::NetworkContext_ClearHttpAuthCache_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::NetworkContext_ClearHttpAuthCache_ResponseParams_Data* data_ = nullptr;
};

class NetworkContext_ClearReportingCacheReports_ParamsDataView {
 public:
  NetworkContext_ClearReportingCacheReports_ParamsDataView() {}

  NetworkContext_ClearReportingCacheReports_ParamsDataView(
      internal::NetworkContext_ClearReportingCacheReports_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetFilterDataView(
      ClearDataFilterDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFilter(UserType* output) {
    auto* pointer = data_->filter.Get();
    return mojo::internal::Deserialize<::network::mojom::ClearDataFilterDataView>(
        pointer, output, context_);
  }
 private:
  internal::NetworkContext_ClearReportingCacheReports_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class NetworkContext_ClearReportingCacheReports_ResponseParamsDataView {
 public:
  NetworkContext_ClearReportingCacheReports_ResponseParamsDataView() {}

  NetworkContext_ClearReportingCacheReports_ResponseParamsDataView(
      internal::NetworkContext_ClearReportingCacheReports_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::NetworkContext_ClearReportingCacheReports_ResponseParams_Data* data_ = nullptr;
};

class NetworkContext_ClearReportingCacheClients_ParamsDataView {
 public:
  NetworkContext_ClearReportingCacheClients_ParamsDataView() {}

  NetworkContext_ClearReportingCacheClients_ParamsDataView(
      internal::NetworkContext_ClearReportingCacheClients_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetFilterDataView(
      ClearDataFilterDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFilter(UserType* output) {
    auto* pointer = data_->filter.Get();
    return mojo::internal::Deserialize<::network::mojom::ClearDataFilterDataView>(
        pointer, output, context_);
  }
 private:
  internal::NetworkContext_ClearReportingCacheClients_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class NetworkContext_ClearReportingCacheClients_ResponseParamsDataView {
 public:
  NetworkContext_ClearReportingCacheClients_ResponseParamsDataView() {}

  NetworkContext_ClearReportingCacheClients_ResponseParamsDataView(
      internal::NetworkContext_ClearReportingCacheClients_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::NetworkContext_ClearReportingCacheClients_ResponseParams_Data* data_ = nullptr;
};

class NetworkContext_ClearNetworkErrorLogging_ParamsDataView {
 public:
  NetworkContext_ClearNetworkErrorLogging_ParamsDataView() {}

  NetworkContext_ClearNetworkErrorLogging_ParamsDataView(
      internal::NetworkContext_ClearNetworkErrorLogging_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetFilterDataView(
      ClearDataFilterDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFilter(UserType* output) {
    auto* pointer = data_->filter.Get();
    return mojo::internal::Deserialize<::network::mojom::ClearDataFilterDataView>(
        pointer, output, context_);
  }
 private:
  internal::NetworkContext_ClearNetworkErrorLogging_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class NetworkContext_ClearNetworkErrorLogging_ResponseParamsDataView {
 public:
  NetworkContext_ClearNetworkErrorLogging_ResponseParamsDataView() {}

  NetworkContext_ClearNetworkErrorLogging_ResponseParamsDataView(
      internal::NetworkContext_ClearNetworkErrorLogging_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::NetworkContext_ClearNetworkErrorLogging_ResponseParams_Data* data_ = nullptr;
};

class NetworkContext_SetNetworkConditions_ParamsDataView {
 public:
  NetworkContext_SetNetworkConditions_ParamsDataView() {}

  NetworkContext_SetNetworkConditions_ParamsDataView(
      internal::NetworkContext_SetNetworkConditions_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetProfileIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadProfileId(UserType* output) {
    auto* pointer = data_->profile_id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetConditionsDataView(
      NetworkConditionsDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadConditions(UserType* output) {
    auto* pointer = data_->conditions.Get();
    return mojo::internal::Deserialize<::network::mojom::NetworkConditionsDataView>(
        pointer, output, context_);
  }
 private:
  internal::NetworkContext_SetNetworkConditions_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class NetworkContext_SetAcceptLanguage_ParamsDataView {
 public:
  NetworkContext_SetAcceptLanguage_ParamsDataView() {}

  NetworkContext_SetAcceptLanguage_ParamsDataView(
      internal::NetworkContext_SetAcceptLanguage_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetNewAcceptLanguageDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadNewAcceptLanguage(UserType* output) {
    auto* pointer = data_->new_accept_language.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::NetworkContext_SetAcceptLanguage_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class NetworkContext_SetCTPolicy_ParamsDataView {
 public:
  NetworkContext_SetCTPolicy_ParamsDataView() {}

  NetworkContext_SetCTPolicy_ParamsDataView(
      internal::NetworkContext_SetCTPolicy_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetRequiredHostsDataView(
      mojo::ArrayDataView<mojo::StringDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRequiredHosts(UserType* output) {
    auto* pointer = data_->required_hosts.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<mojo::StringDataView>>(
        pointer, output, context_);
  }
  inline void GetExcludedHostsDataView(
      mojo::ArrayDataView<mojo::StringDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadExcludedHosts(UserType* output) {
    auto* pointer = data_->excluded_hosts.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<mojo::StringDataView>>(
        pointer, output, context_);
  }
  inline void GetExcludedSpkisDataView(
      mojo::ArrayDataView<mojo::StringDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadExcludedSpkis(UserType* output) {
    auto* pointer = data_->excluded_spkis.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<mojo::StringDataView>>(
        pointer, output, context_);
  }
  inline void GetExcludedLegacySpkisDataView(
      mojo::ArrayDataView<mojo::StringDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadExcludedLegacySpkis(UserType* output) {
    auto* pointer = data_->excluded_legacy_spkis.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<mojo::StringDataView>>(
        pointer, output, context_);
  }
 private:
  internal::NetworkContext_SetCTPolicy_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class NetworkContext_CreateUDPSocket_ParamsDataView {
 public:
  NetworkContext_CreateUDPSocket_ParamsDataView() {}

  NetworkContext_CreateUDPSocket_ParamsDataView(
      internal::NetworkContext_CreateUDPSocket_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeRequest() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::network::mojom::UDPSocketRequestDataView>(
            &data_->request, &result, context_);
    DCHECK(ret);
    return result;
  }
  template <typename UserType>
  UserType TakeReceiver() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::network::mojom::UDPSocketReceiverPtrDataView>(
            &data_->receiver, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::NetworkContext_CreateUDPSocket_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class NetworkContext_CreateTCPServerSocket_ParamsDataView {
 public:
  NetworkContext_CreateTCPServerSocket_ParamsDataView() {}

  NetworkContext_CreateTCPServerSocket_ParamsDataView(
      internal::NetworkContext_CreateTCPServerSocket_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetLocalAddrDataView(
      ::net::interfaces::IPEndPointDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadLocalAddr(UserType* output) {
    auto* pointer = data_->local_addr.Get();
    return mojo::internal::Deserialize<::net::interfaces::IPEndPointDataView>(
        pointer, output, context_);
  }
  uint32_t backlog() const {
    return data_->backlog;
  }
  inline void GetTrafficAnnotationDataView(
      ::network::mojom::MutableNetworkTrafficAnnotationTagDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTrafficAnnotation(UserType* output) {
    auto* pointer = data_->traffic_annotation.Get();
    return mojo::internal::Deserialize<::network::mojom::MutableNetworkTrafficAnnotationTagDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  UserType TakeSocket() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::network::mojom::TCPServerSocketRequestDataView>(
            &data_->socket, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::NetworkContext_CreateTCPServerSocket_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class NetworkContext_CreateTCPServerSocket_ResponseParamsDataView {
 public:
  NetworkContext_CreateTCPServerSocket_ResponseParamsDataView() {}

  NetworkContext_CreateTCPServerSocket_ResponseParamsDataView(
      internal::NetworkContext_CreateTCPServerSocket_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int32_t result() const {
    return data_->result;
  }
  inline void GetLocalAddrOutDataView(
      ::net::interfaces::IPEndPointDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadLocalAddrOut(UserType* output) {
    auto* pointer = data_->local_addr_out.Get();
    return mojo::internal::Deserialize<::net::interfaces::IPEndPointDataView>(
        pointer, output, context_);
  }
 private:
  internal::NetworkContext_CreateTCPServerSocket_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class NetworkContext_CreateTCPConnectedSocket_ParamsDataView {
 public:
  NetworkContext_CreateTCPConnectedSocket_ParamsDataView() {}

  NetworkContext_CreateTCPConnectedSocket_ParamsDataView(
      internal::NetworkContext_CreateTCPConnectedSocket_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetLocalAddrDataView(
      ::net::interfaces::IPEndPointDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadLocalAddr(UserType* output) {
    auto* pointer = data_->local_addr.Get();
    return mojo::internal::Deserialize<::net::interfaces::IPEndPointDataView>(
        pointer, output, context_);
  }
  inline void GetRemoteAddrListDataView(
      ::net::interfaces::AddressListDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRemoteAddrList(UserType* output) {
    auto* pointer = data_->remote_addr_list.Get();
    return mojo::internal::Deserialize<::net::interfaces::AddressListDataView>(
        pointer, output, context_);
  }
  inline void GetTrafficAnnotationDataView(
      ::network::mojom::MutableNetworkTrafficAnnotationTagDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTrafficAnnotation(UserType* output) {
    auto* pointer = data_->traffic_annotation.Get();
    return mojo::internal::Deserialize<::network::mojom::MutableNetworkTrafficAnnotationTagDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  UserType TakeSocket() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::network::mojom::TCPConnectedSocketRequestDataView>(
            &data_->socket, &result, context_);
    DCHECK(ret);
    return result;
  }
  template <typename UserType>
  UserType TakeObserver() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::network::mojom::SocketObserverPtrDataView>(
            &data_->observer, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::NetworkContext_CreateTCPConnectedSocket_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class NetworkContext_CreateTCPConnectedSocket_ResponseParamsDataView {
 public:
  NetworkContext_CreateTCPConnectedSocket_ResponseParamsDataView() {}

  NetworkContext_CreateTCPConnectedSocket_ResponseParamsDataView(
      internal::NetworkContext_CreateTCPConnectedSocket_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int32_t result() const {
    return data_->result;
  }
  mojo::ScopedDataPipeConsumerHandle TakeReceiveStream() {
    mojo::ScopedDataPipeConsumerHandle result;
    bool ret =
        mojo::internal::Deserialize<mojo::ScopedDataPipeConsumerHandle>(
            &data_->receive_stream, &result, context_);
    DCHECK(ret);
    return result;
  }
  mojo::ScopedDataPipeProducerHandle TakeSendStream() {
    mojo::ScopedDataPipeProducerHandle result;
    bool ret =
        mojo::internal::Deserialize<mojo::ScopedDataPipeProducerHandle>(
            &data_->send_stream, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::NetworkContext_CreateTCPConnectedSocket_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class NetworkContext_CreateWebSocket_ParamsDataView {
 public:
  NetworkContext_CreateWebSocket_ParamsDataView() {}

  NetworkContext_CreateWebSocket_ParamsDataView(
      internal::NetworkContext_CreateWebSocket_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeRequest() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::network::mojom::WebSocketRequestDataView>(
            &data_->request, &result, context_);
    DCHECK(ret);
    return result;
  }
  int32_t process_id() const {
    return data_->process_id;
  }
  int32_t render_frame_id() const {
    return data_->render_frame_id;
  }
  inline void GetOriginDataView(
      ::url::mojom::OriginDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadOrigin(UserType* output) {
    auto* pointer = data_->origin.Get();
    return mojo::internal::Deserialize<::url::mojom::OriginDataView>(
        pointer, output, context_);
  }
 private:
  internal::NetworkContext_CreateWebSocket_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class NetworkContext_CreateNetLogExporter_ParamsDataView {
 public:
  NetworkContext_CreateNetLogExporter_ParamsDataView() {}

  NetworkContext_CreateNetLogExporter_ParamsDataView(
      internal::NetworkContext_CreateNetLogExporter_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeExporter() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::network::mojom::NetLogExporterRequestDataView>(
            &data_->exporter, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::NetworkContext_CreateNetLogExporter_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class NetworkContext_BlockThirdPartyCookies_ParamsDataView {
 public:
  NetworkContext_BlockThirdPartyCookies_ParamsDataView() {}

  NetworkContext_BlockThirdPartyCookies_ParamsDataView(
      internal::NetworkContext_BlockThirdPartyCookies_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool block() const {
    return data_->block;
  }
 private:
  internal::NetworkContext_BlockThirdPartyCookies_Params_Data* data_ = nullptr;
};

class NetworkContext_AddHSTSForTesting_ParamsDataView {
 public:
  NetworkContext_AddHSTSForTesting_ParamsDataView() {}

  NetworkContext_AddHSTSForTesting_ParamsDataView(
      internal::NetworkContext_AddHSTSForTesting_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetHostDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadHost(UserType* output) {
    auto* pointer = data_->host.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetExpiryDataView(
      ::mojo_base::mojom::TimeDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadExpiry(UserType* output) {
    auto* pointer = data_->expiry.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeDataView>(
        pointer, output, context_);
  }
  bool include_subdomains() const {
    return data_->include_subdomains;
  }
 private:
  internal::NetworkContext_AddHSTSForTesting_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class NetworkContext_AddHSTSForTesting_ResponseParamsDataView {
 public:
  NetworkContext_AddHSTSForTesting_ResponseParamsDataView() {}

  NetworkContext_AddHSTSForTesting_ResponseParamsDataView(
      internal::NetworkContext_AddHSTSForTesting_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::NetworkContext_AddHSTSForTesting_ResponseParams_Data* data_ = nullptr;
};

class NetworkContext_SetFailingHttpTransactionForTesting_ParamsDataView {
 public:
  NetworkContext_SetFailingHttpTransactionForTesting_ParamsDataView() {}

  NetworkContext_SetFailingHttpTransactionForTesting_ParamsDataView(
      internal::NetworkContext_SetFailingHttpTransactionForTesting_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int32_t rv() const {
    return data_->rv;
  }
 private:
  internal::NetworkContext_SetFailingHttpTransactionForTesting_Params_Data* data_ = nullptr;
};

class NetworkContext_SetFailingHttpTransactionForTesting_ResponseParamsDataView {
 public:
  NetworkContext_SetFailingHttpTransactionForTesting_ResponseParamsDataView() {}

  NetworkContext_SetFailingHttpTransactionForTesting_ResponseParamsDataView(
      internal::NetworkContext_SetFailingHttpTransactionForTesting_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::NetworkContext_SetFailingHttpTransactionForTesting_ResponseParams_Data* data_ = nullptr;
};



}  // namespace mojom
}  // namespace network

namespace std {

template <>
struct hash<::network::mojom::ClearDataFilter_Type>
    : public mojo::internal::EnumHashImpl<::network::mojom::ClearDataFilter_Type> {};

template <>
struct hash<::network::mojom::NetLogExporter_CaptureMode>
    : public mojo::internal::EnumHashImpl<::network::mojom::NetLogExporter_CaptureMode> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::network::mojom::ClearDataFilter_Type, ::network::mojom::ClearDataFilter_Type> {
  static ::network::mojom::ClearDataFilter_Type ToMojom(::network::mojom::ClearDataFilter_Type input) { return input; }
  static bool FromMojom(::network::mojom::ClearDataFilter_Type input, ::network::mojom::ClearDataFilter_Type* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::network::mojom::ClearDataFilter_Type, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::network::mojom::ClearDataFilter_Type, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::network::mojom::ClearDataFilter_Type>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::network::mojom::NetLogExporter_CaptureMode, ::network::mojom::NetLogExporter_CaptureMode> {
  static ::network::mojom::NetLogExporter_CaptureMode ToMojom(::network::mojom::NetLogExporter_CaptureMode input) { return input; }
  static bool FromMojom(::network::mojom::NetLogExporter_CaptureMode input, ::network::mojom::NetLogExporter_CaptureMode* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::network::mojom::NetLogExporter_CaptureMode, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::network::mojom::NetLogExporter_CaptureMode, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::network::mojom::NetLogExporter_CaptureMode>(input), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::network::mojom::NetworkContextParamsDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::network::mojom::NetworkContextParamsDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::network::mojom::internal::NetworkContextParams_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    decltype(CallWithContext(Traits::context_name, input, custom_context)) in_context_name = CallWithContext(Traits::context_name, input, custom_context);
    typename decltype((*output)->context_name)::BaseType::BufferWriter
        context_name_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_context_name, buffer, &context_name_writer, context);
    (*output)->context_name.Set(
        context_name_writer.is_null() ? nullptr : context_name_writer.data());
    decltype(CallWithContext(Traits::user_agent, input, custom_context)) in_user_agent = CallWithContext(Traits::user_agent, input, custom_context);
    typename decltype((*output)->user_agent)::BaseType::BufferWriter
        user_agent_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_user_agent, buffer, &user_agent_writer, context);
    (*output)->user_agent.Set(
        user_agent_writer.is_null() ? nullptr : user_agent_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->user_agent.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null user_agent in NetworkContextParams struct");
    decltype(CallWithContext(Traits::accept_language, input, custom_context)) in_accept_language = CallWithContext(Traits::accept_language, input, custom_context);
    typename decltype((*output)->accept_language)::BaseType::BufferWriter
        accept_language_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_accept_language, buffer, &accept_language_writer, context);
    (*output)->accept_language.Set(
        accept_language_writer.is_null() ? nullptr : accept_language_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->accept_language.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null accept_language in NetworkContextParams struct");
    (*output)->enable_brotli = CallWithContext(Traits::enable_brotli, input, custom_context);
    decltype(CallWithContext(Traits::quic_user_agent_id, input, custom_context)) in_quic_user_agent_id = CallWithContext(Traits::quic_user_agent_id, input, custom_context);
    typename decltype((*output)->quic_user_agent_id)::BaseType::BufferWriter
        quic_user_agent_id_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_quic_user_agent_id, buffer, &quic_user_agent_id_writer, context);
    (*output)->quic_user_agent_id.Set(
        quic_user_agent_id_writer.is_null() ? nullptr : quic_user_agent_id_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->quic_user_agent_id.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null quic_user_agent_id in NetworkContextParams struct");
    decltype(CallWithContext(Traits::proxy_resolver_factory, input, custom_context)) in_proxy_resolver_factory = CallWithContext(Traits::proxy_resolver_factory, input, custom_context);
    mojo::internal::Serialize<::proxy_resolver::mojom::ProxyResolverFactoryPtrDataView>(
        in_proxy_resolver_factory, &(*output)->proxy_resolver_factory, context);
    decltype(CallWithContext(Traits::cookie_path, input, custom_context)) in_cookie_path = CallWithContext(Traits::cookie_path, input, custom_context);
    typename decltype((*output)->cookie_path)::BaseType::BufferWriter
        cookie_path_writer;
    mojo::internal::Serialize<::mojo_base::mojom::FilePathDataView>(
        in_cookie_path, buffer, &cookie_path_writer, context);
    (*output)->cookie_path.Set(
        cookie_path_writer.is_null() ? nullptr : cookie_path_writer.data());
    (*output)->restore_old_session_cookies = CallWithContext(Traits::restore_old_session_cookies, input, custom_context);
    (*output)->persist_session_cookies = CallWithContext(Traits::persist_session_cookies, input, custom_context);
    decltype(CallWithContext(Traits::channel_id_path, input, custom_context)) in_channel_id_path = CallWithContext(Traits::channel_id_path, input, custom_context);
    typename decltype((*output)->channel_id_path)::BaseType::BufferWriter
        channel_id_path_writer;
    mojo::internal::Serialize<::mojo_base::mojom::FilePathDataView>(
        in_channel_id_path, buffer, &channel_id_path_writer, context);
    (*output)->channel_id_path.Set(
        channel_id_path_writer.is_null() ? nullptr : channel_id_path_writer.data());
    (*output)->http_cache_enabled = CallWithContext(Traits::http_cache_enabled, input, custom_context);
    (*output)->http_cache_max_size = CallWithContext(Traits::http_cache_max_size, input, custom_context);
    decltype(CallWithContext(Traits::http_cache_path, input, custom_context)) in_http_cache_path = CallWithContext(Traits::http_cache_path, input, custom_context);
    typename decltype((*output)->http_cache_path)::BaseType::BufferWriter
        http_cache_path_writer;
    mojo::internal::Serialize<::mojo_base::mojom::FilePathDataView>(
        in_http_cache_path, buffer, &http_cache_path_writer, context);
    (*output)->http_cache_path.Set(
        http_cache_path_writer.is_null() ? nullptr : http_cache_path_writer.data());
    decltype(CallWithContext(Traits::http_server_properties_path, input, custom_context)) in_http_server_properties_path = CallWithContext(Traits::http_server_properties_path, input, custom_context);
    typename decltype((*output)->http_server_properties_path)::BaseType::BufferWriter
        http_server_properties_path_writer;
    mojo::internal::Serialize<::mojo_base::mojom::FilePathDataView>(
        in_http_server_properties_path, buffer, &http_server_properties_path_writer, context);
    (*output)->http_server_properties_path.Set(
        http_server_properties_path_writer.is_null() ? nullptr : http_server_properties_path_writer.data());
    decltype(CallWithContext(Traits::transport_security_persister_path, input, custom_context)) in_transport_security_persister_path = CallWithContext(Traits::transport_security_persister_path, input, custom_context);
    typename decltype((*output)->transport_security_persister_path)::BaseType::BufferWriter
        transport_security_persister_path_writer;
    mojo::internal::Serialize<::mojo_base::mojom::FilePathDataView>(
        in_transport_security_persister_path, buffer, &transport_security_persister_path_writer, context);
    (*output)->transport_security_persister_path.Set(
        transport_security_persister_path_writer.is_null() ? nullptr : transport_security_persister_path_writer.data());
    (*output)->enable_data_url_support = CallWithContext(Traits::enable_data_url_support, input, custom_context);
    (*output)->enable_file_url_support = CallWithContext(Traits::enable_file_url_support, input, custom_context);
    (*output)->enable_ftp_url_support = CallWithContext(Traits::enable_ftp_url_support, input, custom_context);
    (*output)->enforce_chrome_ct_policy = CallWithContext(Traits::enforce_chrome_ct_policy, input, custom_context);
    (*output)->http_09_on_non_default_ports_enabled = CallWithContext(Traits::http_09_on_non_default_ports_enabled, input, custom_context);
    decltype(CallWithContext(Traits::initial_ssl_config, input, custom_context)) in_initial_ssl_config = CallWithContext(Traits::initial_ssl_config, input, custom_context);
    typename decltype((*output)->initial_ssl_config)::BaseType::BufferWriter
        initial_ssl_config_writer;
    mojo::internal::Serialize<::network::mojom::SSLConfigDataView>(
        in_initial_ssl_config, buffer, &initial_ssl_config_writer, context);
    (*output)->initial_ssl_config.Set(
        initial_ssl_config_writer.is_null() ? nullptr : initial_ssl_config_writer.data());
    decltype(CallWithContext(Traits::ssl_config_client_request, input, custom_context)) in_ssl_config_client_request = CallWithContext(Traits::ssl_config_client_request, input, custom_context);
    mojo::internal::Serialize<::network::mojom::SSLConfigClientRequestDataView>(
        in_ssl_config_client_request, &(*output)->ssl_config_client_request, context);
    decltype(CallWithContext(Traits::initial_proxy_config, input, custom_context)) in_initial_proxy_config = CallWithContext(Traits::initial_proxy_config, input, custom_context);
    typename decltype((*output)->initial_proxy_config)::BaseType::BufferWriter
        initial_proxy_config_writer;
    mojo::internal::Serialize<::network::mojom::ProxyConfigWithAnnotationDataView>(
        in_initial_proxy_config, buffer, &initial_proxy_config_writer, context);
    (*output)->initial_proxy_config.Set(
        initial_proxy_config_writer.is_null() ? nullptr : initial_proxy_config_writer.data());
    decltype(CallWithContext(Traits::proxy_config_client_request, input, custom_context)) in_proxy_config_client_request = CallWithContext(Traits::proxy_config_client_request, input, custom_context);
    mojo::internal::Serialize<::network::mojom::ProxyConfigClientRequestDataView>(
        in_proxy_config_client_request, &(*output)->proxy_config_client_request, context);
    decltype(CallWithContext(Traits::proxy_config_poller_client, input, custom_context)) in_proxy_config_poller_client = CallWithContext(Traits::proxy_config_poller_client, input, custom_context);
    mojo::internal::Serialize<::network::mojom::ProxyConfigPollerClientPtrDataView>(
        in_proxy_config_poller_client, &(*output)->proxy_config_poller_client, context);
    (*output)->pac_quick_check_enabled = CallWithContext(Traits::pac_quick_check_enabled, input, custom_context);
    (*output)->dangerously_allow_pac_access_to_secure_urls = CallWithContext(Traits::dangerously_allow_pac_access_to_secure_urls, input, custom_context);
    (*output)->allow_gssapi_library_load = CallWithContext(Traits::allow_gssapi_library_load, input, custom_context);
    decltype(CallWithContext(Traits::gssapi_library_name, input, custom_context)) in_gssapi_library_name = CallWithContext(Traits::gssapi_library_name, input, custom_context);
    typename decltype((*output)->gssapi_library_name)::BaseType::BufferWriter
        gssapi_library_name_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_gssapi_library_name, buffer, &gssapi_library_name_writer, context);
    (*output)->gssapi_library_name.Set(
        gssapi_library_name_writer.is_null() ? nullptr : gssapi_library_name_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->gssapi_library_name.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null gssapi_library_name in NetworkContextParams struct");
    (*output)->enable_certificate_reporting = CallWithContext(Traits::enable_certificate_reporting, input, custom_context);
    decltype(CallWithContext(Traits::ct_logs, input, custom_context)) in_ct_logs = CallWithContext(Traits::ct_logs, input, custom_context);
    typename decltype((*output)->ct_logs)::BaseType::BufferWriter
        ct_logs_writer;
    const mojo::internal::ContainerValidateParams ct_logs_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::network::mojom::CTLogInfoDataView>>(
        in_ct_logs, buffer, &ct_logs_writer, &ct_logs_validate_params,
        context);
    (*output)->ct_logs.Set(
        ct_logs_writer.is_null() ? nullptr : ct_logs_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->ct_logs.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null ct_logs in NetworkContextParams struct");
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::network::mojom::internal::NetworkContextParams_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::network::mojom::NetworkContextParamsDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::network::mojom::NetworkConditionsDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::network::mojom::NetworkConditionsDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::network::mojom::internal::NetworkConditions_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    (*output)->offline = CallWithContext(Traits::offline, input, custom_context);
    decltype(CallWithContext(Traits::latency, input, custom_context)) in_latency = CallWithContext(Traits::latency, input, custom_context);
    typename decltype((*output)->latency)::BaseType::BufferWriter
        latency_writer;
    mojo::internal::Serialize<::mojo_base::mojom::TimeDeltaDataView>(
        in_latency, buffer, &latency_writer, context);
    (*output)->latency.Set(
        latency_writer.is_null() ? nullptr : latency_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->latency.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null latency in NetworkConditions struct");
    (*output)->download_throughput = CallWithContext(Traits::download_throughput, input, custom_context);
    (*output)->upload_throughput = CallWithContext(Traits::upload_throughput, input, custom_context);
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::network::mojom::internal::NetworkConditions_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::network::mojom::NetworkConditionsDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::network::mojom::ClearDataFilterDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::network::mojom::ClearDataFilterDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::network::mojom::internal::ClearDataFilter_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    mojo::internal::Serialize<::network::mojom::ClearDataFilter_Type>(
        CallWithContext(Traits::type, input, custom_context), &(*output)->type);
    decltype(CallWithContext(Traits::domains, input, custom_context)) in_domains = CallWithContext(Traits::domains, input, custom_context);
    typename decltype((*output)->domains)::BaseType::BufferWriter
        domains_writer;
    const mojo::internal::ContainerValidateParams domains_validate_params(
        0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr));
    mojo::internal::Serialize<mojo::ArrayDataView<mojo::StringDataView>>(
        in_domains, buffer, &domains_writer, &domains_validate_params,
        context);
    (*output)->domains.Set(
        domains_writer.is_null() ? nullptr : domains_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->domains.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null domains in ClearDataFilter struct");
    decltype(CallWithContext(Traits::origins, input, custom_context)) in_origins = CallWithContext(Traits::origins, input, custom_context);
    typename decltype((*output)->origins)::BaseType::BufferWriter
        origins_writer;
    const mojo::internal::ContainerValidateParams origins_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::url::mojom::OriginDataView>>(
        in_origins, buffer, &origins_writer, &origins_validate_params,
        context);
    (*output)->origins.Set(
        origins_writer.is_null() ? nullptr : origins_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->origins.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null origins in ClearDataFilter struct");
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::network::mojom::internal::ClearDataFilter_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::network::mojom::ClearDataFilterDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::network::mojom::NetworkUsageDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::network::mojom::NetworkUsageDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::network::mojom::internal::NetworkUsage_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    (*output)->process_id = CallWithContext(Traits::process_id, input, custom_context);
    (*output)->routing_id = CallWithContext(Traits::routing_id, input, custom_context);
    (*output)->total_bytes_received = CallWithContext(Traits::total_bytes_received, input, custom_context);
    (*output)->total_bytes_sent = CallWithContext(Traits::total_bytes_sent, input, custom_context);
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::network::mojom::internal::NetworkUsage_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::network::mojom::NetworkUsageDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::network::mojom::URLLoaderFactoryParamsDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::network::mojom::URLLoaderFactoryParamsDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::network::mojom::internal::URLLoaderFactoryParams_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    (*output)->process_id = CallWithContext(Traits::process_id, input, custom_context);
    (*output)->is_corb_enabled = CallWithContext(Traits::is_corb_enabled, input, custom_context);
    decltype(CallWithContext(Traits::corb_excluded_initiator_scheme, input, custom_context)) in_corb_excluded_initiator_scheme = CallWithContext(Traits::corb_excluded_initiator_scheme, input, custom_context);
    typename decltype((*output)->corb_excluded_initiator_scheme)::BaseType::BufferWriter
        corb_excluded_initiator_scheme_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_corb_excluded_initiator_scheme, buffer, &corb_excluded_initiator_scheme_writer, context);
    (*output)->corb_excluded_initiator_scheme.Set(
        corb_excluded_initiator_scheme_writer.is_null() ? nullptr : corb_excluded_initiator_scheme_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->corb_excluded_initiator_scheme.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null corb_excluded_initiator_scheme in URLLoaderFactoryParams struct");
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::network::mojom::internal::URLLoaderFactoryParams_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::network::mojom::URLLoaderFactoryParamsDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace network {
namespace mojom {

inline void NetworkContextParamsDataView::GetContextNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->context_name.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void NetworkContextParamsDataView::GetUserAgentDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->user_agent.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void NetworkContextParamsDataView::GetAcceptLanguageDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->accept_language.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void NetworkContextParamsDataView::GetQuicUserAgentIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->quic_user_agent_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void NetworkContextParamsDataView::GetCookiePathDataView(
    ::mojo_base::mojom::FilePathDataView* output) {
  auto pointer = data_->cookie_path.Get();
  *output = ::mojo_base::mojom::FilePathDataView(pointer, context_);
}
inline void NetworkContextParamsDataView::GetChannelIdPathDataView(
    ::mojo_base::mojom::FilePathDataView* output) {
  auto pointer = data_->channel_id_path.Get();
  *output = ::mojo_base::mojom::FilePathDataView(pointer, context_);
}
inline void NetworkContextParamsDataView::GetHttpCachePathDataView(
    ::mojo_base::mojom::FilePathDataView* output) {
  auto pointer = data_->http_cache_path.Get();
  *output = ::mojo_base::mojom::FilePathDataView(pointer, context_);
}
inline void NetworkContextParamsDataView::GetHttpServerPropertiesPathDataView(
    ::mojo_base::mojom::FilePathDataView* output) {
  auto pointer = data_->http_server_properties_path.Get();
  *output = ::mojo_base::mojom::FilePathDataView(pointer, context_);
}
inline void NetworkContextParamsDataView::GetTransportSecurityPersisterPathDataView(
    ::mojo_base::mojom::FilePathDataView* output) {
  auto pointer = data_->transport_security_persister_path.Get();
  *output = ::mojo_base::mojom::FilePathDataView(pointer, context_);
}
inline void NetworkContextParamsDataView::GetInitialSslConfigDataView(
    ::network::mojom::SSLConfigDataView* output) {
  auto pointer = data_->initial_ssl_config.Get();
  *output = ::network::mojom::SSLConfigDataView(pointer, context_);
}
inline void NetworkContextParamsDataView::GetInitialProxyConfigDataView(
    ::network::mojom::ProxyConfigWithAnnotationDataView* output) {
  auto pointer = data_->initial_proxy_config.Get();
  *output = ::network::mojom::ProxyConfigWithAnnotationDataView(pointer, context_);
}
inline void NetworkContextParamsDataView::GetGssapiLibraryNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->gssapi_library_name.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void NetworkContextParamsDataView::GetCtLogsDataView(
    mojo::ArrayDataView<::network::mojom::CTLogInfoDataView>* output) {
  auto pointer = data_->ct_logs.Get();
  *output = mojo::ArrayDataView<::network::mojom::CTLogInfoDataView>(pointer, context_);
}


inline void NetworkConditionsDataView::GetLatencyDataView(
    ::mojo_base::mojom::TimeDeltaDataView* output) {
  auto pointer = data_->latency.Get();
  *output = ::mojo_base::mojom::TimeDeltaDataView(pointer, context_);
}


inline void ClearDataFilterDataView::GetDomainsDataView(
    mojo::ArrayDataView<mojo::StringDataView>* output) {
  auto pointer = data_->domains.Get();
  *output = mojo::ArrayDataView<mojo::StringDataView>(pointer, context_);
}
inline void ClearDataFilterDataView::GetOriginsDataView(
    mojo::ArrayDataView<::url::mojom::OriginDataView>* output) {
  auto pointer = data_->origins.Get();
  *output = mojo::ArrayDataView<::url::mojom::OriginDataView>(pointer, context_);
}




inline void URLLoaderFactoryParamsDataView::GetCorbExcludedInitiatorSchemeDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->corb_excluded_initiator_scheme.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void NetLogExporter_Start_ParamsDataView::GetDestinationDataView(
    ::mojo_base::mojom::FileDataView* output) {
  auto pointer = data_->destination.Get();
  *output = ::mojo_base::mojom::FileDataView(pointer, context_);
}
inline void NetLogExporter_Start_ParamsDataView::GetExtraConstantsDataView(
    ::mojo_base::mojom::DictionaryValueDataView* output) {
  auto pointer = data_->extra_constants.Get();
  *output = ::mojo_base::mojom::DictionaryValueDataView(pointer, context_);
}




inline void NetLogExporter_Stop_ParamsDataView::GetPolledValuesDataView(
    ::mojo_base::mojom::DictionaryValueDataView* output) {
  auto pointer = data_->polled_values.Get();
  *output = ::mojo_base::mojom::DictionaryValueDataView(pointer, context_);
}




inline void NetworkContext_CreateURLLoaderFactory_ParamsDataView::GetParamsDataView(
    URLLoaderFactoryParamsDataView* output) {
  auto pointer = data_->params.Get();
  *output = URLLoaderFactoryParamsDataView(pointer, context_);
}






inline void NetworkContext_ClearNetworkingHistorySince_ParamsDataView::GetStartTimeDataView(
    ::mojo_base::mojom::TimeDataView* output) {
  auto pointer = data_->start_time.Get();
  *output = ::mojo_base::mojom::TimeDataView(pointer, context_);
}




inline void NetworkContext_ClearHttpCache_ParamsDataView::GetStartTimeDataView(
    ::mojo_base::mojom::TimeDataView* output) {
  auto pointer = data_->start_time.Get();
  *output = ::mojo_base::mojom::TimeDataView(pointer, context_);
}
inline void NetworkContext_ClearHttpCache_ParamsDataView::GetEndTimeDataView(
    ::mojo_base::mojom::TimeDataView* output) {
  auto pointer = data_->end_time.Get();
  *output = ::mojo_base::mojom::TimeDataView(pointer, context_);
}
inline void NetworkContext_ClearHttpCache_ParamsDataView::GetFilterDataView(
    ClearDataFilterDataView* output) {
  auto pointer = data_->filter.Get();
  *output = ClearDataFilterDataView(pointer, context_);
}




inline void NetworkContext_ClearChannelIds_ParamsDataView::GetStartTimeDataView(
    ::mojo_base::mojom::TimeDataView* output) {
  auto pointer = data_->start_time.Get();
  *output = ::mojo_base::mojom::TimeDataView(pointer, context_);
}
inline void NetworkContext_ClearChannelIds_ParamsDataView::GetEndTimeDataView(
    ::mojo_base::mojom::TimeDataView* output) {
  auto pointer = data_->end_time.Get();
  *output = ::mojo_base::mojom::TimeDataView(pointer, context_);
}
inline void NetworkContext_ClearChannelIds_ParamsDataView::GetFilterDataView(
    ClearDataFilterDataView* output) {
  auto pointer = data_->filter.Get();
  *output = ClearDataFilterDataView(pointer, context_);
}




inline void NetworkContext_ClearHttpAuthCache_ParamsDataView::GetStartTimeDataView(
    ::mojo_base::mojom::TimeDataView* output) {
  auto pointer = data_->start_time.Get();
  *output = ::mojo_base::mojom::TimeDataView(pointer, context_);
}




inline void NetworkContext_ClearReportingCacheReports_ParamsDataView::GetFilterDataView(
    ClearDataFilterDataView* output) {
  auto pointer = data_->filter.Get();
  *output = ClearDataFilterDataView(pointer, context_);
}




inline void NetworkContext_ClearReportingCacheClients_ParamsDataView::GetFilterDataView(
    ClearDataFilterDataView* output) {
  auto pointer = data_->filter.Get();
  *output = ClearDataFilterDataView(pointer, context_);
}




inline void NetworkContext_ClearNetworkErrorLogging_ParamsDataView::GetFilterDataView(
    ClearDataFilterDataView* output) {
  auto pointer = data_->filter.Get();
  *output = ClearDataFilterDataView(pointer, context_);
}




inline void NetworkContext_SetNetworkConditions_ParamsDataView::GetProfileIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->profile_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void NetworkContext_SetNetworkConditions_ParamsDataView::GetConditionsDataView(
    NetworkConditionsDataView* output) {
  auto pointer = data_->conditions.Get();
  *output = NetworkConditionsDataView(pointer, context_);
}


inline void NetworkContext_SetAcceptLanguage_ParamsDataView::GetNewAcceptLanguageDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->new_accept_language.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void NetworkContext_SetCTPolicy_ParamsDataView::GetRequiredHostsDataView(
    mojo::ArrayDataView<mojo::StringDataView>* output) {
  auto pointer = data_->required_hosts.Get();
  *output = mojo::ArrayDataView<mojo::StringDataView>(pointer, context_);
}
inline void NetworkContext_SetCTPolicy_ParamsDataView::GetExcludedHostsDataView(
    mojo::ArrayDataView<mojo::StringDataView>* output) {
  auto pointer = data_->excluded_hosts.Get();
  *output = mojo::ArrayDataView<mojo::StringDataView>(pointer, context_);
}
inline void NetworkContext_SetCTPolicy_ParamsDataView::GetExcludedSpkisDataView(
    mojo::ArrayDataView<mojo::StringDataView>* output) {
  auto pointer = data_->excluded_spkis.Get();
  *output = mojo::ArrayDataView<mojo::StringDataView>(pointer, context_);
}
inline void NetworkContext_SetCTPolicy_ParamsDataView::GetExcludedLegacySpkisDataView(
    mojo::ArrayDataView<mojo::StringDataView>* output) {
  auto pointer = data_->excluded_legacy_spkis.Get();
  *output = mojo::ArrayDataView<mojo::StringDataView>(pointer, context_);
}




inline void NetworkContext_CreateTCPServerSocket_ParamsDataView::GetLocalAddrDataView(
    ::net::interfaces::IPEndPointDataView* output) {
  auto pointer = data_->local_addr.Get();
  *output = ::net::interfaces::IPEndPointDataView(pointer, context_);
}
inline void NetworkContext_CreateTCPServerSocket_ParamsDataView::GetTrafficAnnotationDataView(
    ::network::mojom::MutableNetworkTrafficAnnotationTagDataView* output) {
  auto pointer = data_->traffic_annotation.Get();
  *output = ::network::mojom::MutableNetworkTrafficAnnotationTagDataView(pointer, context_);
}


inline void NetworkContext_CreateTCPServerSocket_ResponseParamsDataView::GetLocalAddrOutDataView(
    ::net::interfaces::IPEndPointDataView* output) {
  auto pointer = data_->local_addr_out.Get();
  *output = ::net::interfaces::IPEndPointDataView(pointer, context_);
}


inline void NetworkContext_CreateTCPConnectedSocket_ParamsDataView::GetLocalAddrDataView(
    ::net::interfaces::IPEndPointDataView* output) {
  auto pointer = data_->local_addr.Get();
  *output = ::net::interfaces::IPEndPointDataView(pointer, context_);
}
inline void NetworkContext_CreateTCPConnectedSocket_ParamsDataView::GetRemoteAddrListDataView(
    ::net::interfaces::AddressListDataView* output) {
  auto pointer = data_->remote_addr_list.Get();
  *output = ::net::interfaces::AddressListDataView(pointer, context_);
}
inline void NetworkContext_CreateTCPConnectedSocket_ParamsDataView::GetTrafficAnnotationDataView(
    ::network::mojom::MutableNetworkTrafficAnnotationTagDataView* output) {
  auto pointer = data_->traffic_annotation.Get();
  *output = ::network::mojom::MutableNetworkTrafficAnnotationTagDataView(pointer, context_);
}




inline void NetworkContext_CreateWebSocket_ParamsDataView::GetOriginDataView(
    ::url::mojom::OriginDataView* output) {
  auto pointer = data_->origin.Get();
  *output = ::url::mojom::OriginDataView(pointer, context_);
}






inline void NetworkContext_AddHSTSForTesting_ParamsDataView::GetHostDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->host.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void NetworkContext_AddHSTSForTesting_ParamsDataView::GetExpiryDataView(
    ::mojo_base::mojom::TimeDataView* output) {
  auto pointer = data_->expiry.Get();
  *output = ::mojo_base::mojom::TimeDataView(pointer, context_);
}









}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_CONTEXT_MOJOM_SHARED_H_
