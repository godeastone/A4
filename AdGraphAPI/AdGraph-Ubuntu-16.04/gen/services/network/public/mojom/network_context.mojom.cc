// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#elif defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4056)
#pragma warning(disable:4065)
#pragma warning(disable:4756)
#endif

#include "services/network/public/mojom/network_context.mojom.h"

#include <math.h>
#include <stdint.h>
#include <utility>

#include "base/logging.h"
#include "base/run_loop.h"
#include "mojo/public/cpp/bindings/lib/message_internal.h"
#include "mojo/public/cpp/bindings/lib/serialization_util.h"
#include "mojo/public/cpp/bindings/lib/unserialized_message_context.h"
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/interfaces/bindings/interface_control_messages.mojom.h"

#include "services/network/public/mojom/network_context.mojom-shared-message-ids.h"
#include "mojo/public/cpp/base/file_mojom_traits.h"
#include "mojo/public/cpp/base/file_path_mojom_traits.h"
#include "mojo/public/cpp/base/time_mojom_traits.h"
#include "mojo/public/cpp/base/values_mojom_traits.h"
#include "net/interfaces/address_list_mojom_traits.h"
#include "net/interfaces/ip_address_struct_traits.h"
#include "net/interfaces/ip_endpoint_struct_traits.h"
#include "services/network/public/cpp/mutable_network_traffic_annotation_tag_mojom_traits.h"
#include "services/network/public/cpp/proxy_config_mojom_traits.h"
#include "services/network/public/cpp/proxy_config_with_annotation_mojom_traits.h"
#include "url/mojom/origin_mojom_traits.h"
#include "url/mojom/url_gurl_mojom_traits.h"
namespace network {
namespace mojom {
NetworkContextParams::NetworkContextParams()
    : context_name(),
      user_agent(),
      accept_language(),
      enable_brotli(true),
      quic_user_agent_id(),
      proxy_resolver_factory(),
      cookie_path(),
      restore_old_session_cookies(false),
      persist_session_cookies(false),
      channel_id_path(),
      http_cache_enabled(true),
      http_cache_max_size(0),
      http_cache_path(),
      http_server_properties_path(),
      transport_security_persister_path(),
      enable_data_url_support(false),
      enable_file_url_support(false),
      enable_ftp_url_support(false),
      enforce_chrome_ct_policy(false),
      http_09_on_non_default_ports_enabled(false),
      initial_ssl_config(),
      ssl_config_client_request(),
      initial_proxy_config(),
      proxy_config_client_request(),
      proxy_config_poller_client(),
      pac_quick_check_enabled(true),
      dangerously_allow_pac_access_to_secure_urls(false),
      allow_gssapi_library_load(false),
      gssapi_library_name(),
      enable_certificate_reporting(false),
      ct_logs() {}

NetworkContextParams::NetworkContextParams(
    const base::Optional<std::string>& context_name_in,
    const std::string& user_agent_in,
    const std::string& accept_language_in,
    bool enable_brotli_in,
    const std::string& quic_user_agent_id_in,
    ::proxy_resolver::mojom::ProxyResolverFactoryPtrInfo proxy_resolver_factory_in,
    const base::Optional<base::FilePath>& cookie_path_in,
    bool restore_old_session_cookies_in,
    bool persist_session_cookies_in,
    const base::Optional<base::FilePath>& channel_id_path_in,
    bool http_cache_enabled_in,
    int32_t http_cache_max_size_in,
    const base::Optional<base::FilePath>& http_cache_path_in,
    const base::Optional<base::FilePath>& http_server_properties_path_in,
    const base::Optional<base::FilePath>& transport_security_persister_path_in,
    bool enable_data_url_support_in,
    bool enable_file_url_support_in,
    bool enable_ftp_url_support_in,
    bool enforce_chrome_ct_policy_in,
    bool http_09_on_non_default_ports_enabled_in,
    ::network::mojom::SSLConfigPtr initial_ssl_config_in,
    ::network::mojom::SSLConfigClientRequest ssl_config_client_request_in,
    const base::Optional<net::ProxyConfigWithAnnotation>& initial_proxy_config_in,
    ::network::mojom::ProxyConfigClientRequest proxy_config_client_request_in,
    ::network::mojom::ProxyConfigPollerClientPtrInfo proxy_config_poller_client_in,
    bool pac_quick_check_enabled_in,
    bool dangerously_allow_pac_access_to_secure_urls_in,
    bool allow_gssapi_library_load_in,
    const std::string& gssapi_library_name_in,
    bool enable_certificate_reporting_in,
    std::vector<::network::mojom::CTLogInfoPtr> ct_logs_in)
    : context_name(std::move(context_name_in)),
      user_agent(std::move(user_agent_in)),
      accept_language(std::move(accept_language_in)),
      enable_brotli(std::move(enable_brotli_in)),
      quic_user_agent_id(std::move(quic_user_agent_id_in)),
      proxy_resolver_factory(std::move(proxy_resolver_factory_in)),
      cookie_path(std::move(cookie_path_in)),
      restore_old_session_cookies(std::move(restore_old_session_cookies_in)),
      persist_session_cookies(std::move(persist_session_cookies_in)),
      channel_id_path(std::move(channel_id_path_in)),
      http_cache_enabled(std::move(http_cache_enabled_in)),
      http_cache_max_size(std::move(http_cache_max_size_in)),
      http_cache_path(std::move(http_cache_path_in)),
      http_server_properties_path(std::move(http_server_properties_path_in)),
      transport_security_persister_path(std::move(transport_security_persister_path_in)),
      enable_data_url_support(std::move(enable_data_url_support_in)),
      enable_file_url_support(std::move(enable_file_url_support_in)),
      enable_ftp_url_support(std::move(enable_ftp_url_support_in)),
      enforce_chrome_ct_policy(std::move(enforce_chrome_ct_policy_in)),
      http_09_on_non_default_ports_enabled(std::move(http_09_on_non_default_ports_enabled_in)),
      initial_ssl_config(std::move(initial_ssl_config_in)),
      ssl_config_client_request(std::move(ssl_config_client_request_in)),
      initial_proxy_config(std::move(initial_proxy_config_in)),
      proxy_config_client_request(std::move(proxy_config_client_request_in)),
      proxy_config_poller_client(std::move(proxy_config_poller_client_in)),
      pac_quick_check_enabled(std::move(pac_quick_check_enabled_in)),
      dangerously_allow_pac_access_to_secure_urls(std::move(dangerously_allow_pac_access_to_secure_urls_in)),
      allow_gssapi_library_load(std::move(allow_gssapi_library_load_in)),
      gssapi_library_name(std::move(gssapi_library_name_in)),
      enable_certificate_reporting(std::move(enable_certificate_reporting_in)),
      ct_logs(std::move(ct_logs_in)) {}

NetworkContextParams::~NetworkContextParams() = default;

bool NetworkContextParams::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
NetworkConditions::NetworkConditions()
    : offline(),
      latency(),
      download_throughput(),
      upload_throughput() {}

NetworkConditions::NetworkConditions(
    bool offline_in,
    base::TimeDelta latency_in,
    double download_throughput_in,
    double upload_throughput_in)
    : offline(std::move(offline_in)),
      latency(std::move(latency_in)),
      download_throughput(std::move(download_throughput_in)),
      upload_throughput(std::move(upload_throughput_in)) {}

NetworkConditions::~NetworkConditions() = default;

bool NetworkConditions::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
ClearDataFilter::ClearDataFilter()
    : type(),
      domains(),
      origins() {}

ClearDataFilter::ClearDataFilter(
    ClearDataFilter::Type type_in,
    const std::vector<std::string>& domains_in,
    const std::vector<url::Origin>& origins_in)
    : type(std::move(type_in)),
      domains(std::move(domains_in)),
      origins(std::move(origins_in)) {}

ClearDataFilter::~ClearDataFilter() = default;

bool ClearDataFilter::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
NetworkUsage::NetworkUsage()
    : process_id(),
      routing_id(),
      total_bytes_received(),
      total_bytes_sent() {}

NetworkUsage::NetworkUsage(
    uint32_t process_id_in,
    uint32_t routing_id_in,
    int64_t total_bytes_received_in,
    int64_t total_bytes_sent_in)
    : process_id(std::move(process_id_in)),
      routing_id(std::move(routing_id_in)),
      total_bytes_received(std::move(total_bytes_received_in)),
      total_bytes_sent(std::move(total_bytes_sent_in)) {}

NetworkUsage::~NetworkUsage() = default;
size_t NetworkUsage::Hash(size_t seed) const {
  seed = mojo::internal::Hash(seed, this->process_id);
  seed = mojo::internal::Hash(seed, this->routing_id);
  seed = mojo::internal::Hash(seed, this->total_bytes_received);
  seed = mojo::internal::Hash(seed, this->total_bytes_sent);
  return seed;
}

bool NetworkUsage::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
URLLoaderFactoryParams::URLLoaderFactoryParams()
    : process_id(kInvalidProcessId),
      is_corb_enabled(true),
      corb_excluded_initiator_scheme() {}

URLLoaderFactoryParams::URLLoaderFactoryParams(
    uint32_t process_id_in,
    bool is_corb_enabled_in,
    const std::string& corb_excluded_initiator_scheme_in)
    : process_id(std::move(process_id_in)),
      is_corb_enabled(std::move(is_corb_enabled_in)),
      corb_excluded_initiator_scheme(std::move(corb_excluded_initiator_scheme_in)) {}

URLLoaderFactoryParams::~URLLoaderFactoryParams() = default;
size_t URLLoaderFactoryParams::Hash(size_t seed) const {
  seed = mojo::internal::Hash(seed, this->process_id);
  seed = mojo::internal::Hash(seed, this->is_corb_enabled);
  seed = mojo::internal::Hash(seed, this->corb_excluded_initiator_scheme);
  return seed;
}

bool URLLoaderFactoryParams::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
const char NetLogExporter::Name_[] = "network.mojom.NetLogExporter";
constexpr uint64_t NetLogExporter::kUnlimitedFileSize;

class NetLogExporter_Start_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  NetLogExporter_Start_ForwardToCallback(
      NetLogExporter::StartCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  NetLogExporter::StartCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(NetLogExporter_Start_ForwardToCallback);
};

class NetLogExporter_Stop_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  NetLogExporter_Stop_ForwardToCallback(
      NetLogExporter::StopCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  NetLogExporter::StopCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(NetLogExporter_Stop_ForwardToCallback);
};

NetLogExporterProxy::NetLogExporterProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}
class NetLogExporterProxy_Start_Message
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  explicit NetLogExporterProxy_Start_Message(
      uint32_t message_flags
      , base::File param_destination
      , base::Value param_extra_constants
      , NetLogExporter::CaptureMode param_capture_mode
      , uint64_t param_max_file_size
  )
      : mojo::internal::UnserializedMessageContext(
          &kMessageTag,
          internal::kNetLogExporter_Start_Name,
          message_flags)
      , param_destination_(std::move(param_destination))
      , param_extra_constants_(std::move(param_extra_constants))
      , param_capture_mode_(std::move(param_capture_mode))
      , param_max_file_size_(std::move(param_max_file_size)){}
  ~NetLogExporterProxy_Start_Message() override = default;

  static mojo::Message Build(
      bool serialize,
      bool expects_response,
      bool is_sync,
      base::File param_destination, base::Value param_extra_constants, NetLogExporter::CaptureMode param_capture_mode, uint64_t param_max_file_size) {

    
  const uint32_t kFlags =
      ((expects_response) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((is_sync) ? mojo::Message::kFlagIsSync : 0);

    if (!serialize) {
      return mojo::Message(std::make_unique<NetLogExporterProxy_Start_Message>(
          kFlags
          , std::move(param_destination)
          , std::move(param_extra_constants)
          , std::move(param_capture_mode)
          , std::move(param_max_file_size)
          ));
    }

    DCHECK(serialize);
    
  mojo::Message message(
      internal::kNetLogExporter_Start_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetLogExporter_Start_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->destination)::BaseType::BufferWriter
      destination_writer;
  mojo::internal::Serialize<::mojo_base::mojom::FileDataView>(
      param_destination, buffer, &destination_writer, &serialization_context);
  params->destination.Set(
      destination_writer.is_null() ? nullptr : destination_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->destination.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null destination in NetLogExporter.Start request");
  typename decltype(params->extra_constants)::BaseType::BufferWriter
      extra_constants_writer;
  mojo::internal::Serialize<::mojo_base::mojom::DictionaryValueDataView>(
      param_extra_constants, buffer, &extra_constants_writer, &serialization_context);
  params->extra_constants.Set(
      extra_constants_writer.is_null() ? nullptr : extra_constants_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->extra_constants.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null extra_constants in NetLogExporter.Start request");
  mojo::internal::Serialize<::network::mojom::NetLogExporter_CaptureMode>(
      param_capture_mode, &params->capture_mode);
  params->max_file_size = param_max_file_size;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
    return message;
  }


  void Dispatch(NetLogExporter* impl, NetLogExporter::StartCallback callback) {
    impl->Start(
        std::move(param_destination_),
        std::move(param_extra_constants_),
        std::move(param_capture_mode_),
        std::move(param_max_file_size_), std::move(callback));
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* serialization_context,
                 mojo::internal::Buffer* buffer) override {
    ::network::mojom::internal::NetLogExporter_Start_Params_Data::BufferWriter
        params;
    params.Allocate(buffer);
  typename decltype(params->destination)::BaseType::BufferWriter
      destination_writer;
  mojo::internal::Serialize<::mojo_base::mojom::FileDataView>(
      param_destination_, buffer, &destination_writer, serialization_context);
  params->destination.Set(
      destination_writer.is_null() ? nullptr : destination_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->destination.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null destination in NetLogExporter.Start request");
  typename decltype(params->extra_constants)::BaseType::BufferWriter
      extra_constants_writer;
  mojo::internal::Serialize<::mojo_base::mojom::DictionaryValueDataView>(
      param_extra_constants_, buffer, &extra_constants_writer, serialization_context);
  params->extra_constants.Set(
      extra_constants_writer.is_null() ? nullptr : extra_constants_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->extra_constants.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null extra_constants in NetLogExporter.Start request");
  mojo::internal::Serialize<::network::mojom::NetLogExporter_CaptureMode>(
      param_capture_mode_, &params->capture_mode);
  params->max_file_size = param_max_file_size_;
  }
  base::File param_destination_;
  base::Value param_extra_constants_;
  NetLogExporter::CaptureMode param_capture_mode_;
  uint64_t param_max_file_size_;

  DISALLOW_COPY_AND_ASSIGN(NetLogExporterProxy_Start_Message);
};

const mojo::internal::UnserializedMessageContext::Tag
NetLogExporterProxy_Start_Message::kMessageTag = {};

void NetLogExporterProxy::Start(
    base::File in_destination, base::Value in_extra_constants, NetLogExporter::CaptureMode in_capture_mode, uint64_t in_max_file_size, StartCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "network::mojom::NetLogExporter::Start");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  const bool kSerialize = receiver_->PrefersSerializedMessages();
  auto message = NetLogExporterProxy_Start_Message::Build(
      kSerialize, kExpectsResponse, kIsSync, std::move(in_destination), std::move(in_extra_constants), std::move(in_capture_mode), std::move(in_max_file_size));
  std::unique_ptr<mojo::MessageReceiver> responder(
      new NetLogExporter_Start_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class NetLogExporterProxy_Stop_Message
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  explicit NetLogExporterProxy_Stop_Message(
      uint32_t message_flags
      , base::Value param_polled_values
  )
      : mojo::internal::UnserializedMessageContext(
          &kMessageTag,
          internal::kNetLogExporter_Stop_Name,
          message_flags)
      , param_polled_values_(std::move(param_polled_values)){}
  ~NetLogExporterProxy_Stop_Message() override = default;

  static mojo::Message Build(
      bool serialize,
      bool expects_response,
      bool is_sync,
      base::Value param_polled_values) {

    
  const uint32_t kFlags =
      ((expects_response) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((is_sync) ? mojo::Message::kFlagIsSync : 0);

    if (!serialize) {
      return mojo::Message(std::make_unique<NetLogExporterProxy_Stop_Message>(
          kFlags
          , std::move(param_polled_values)
          ));
    }

    DCHECK(serialize);
    
  mojo::Message message(
      internal::kNetLogExporter_Stop_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetLogExporter_Stop_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->polled_values)::BaseType::BufferWriter
      polled_values_writer;
  mojo::internal::Serialize<::mojo_base::mojom::DictionaryValueDataView>(
      param_polled_values, buffer, &polled_values_writer, &serialization_context);
  params->polled_values.Set(
      polled_values_writer.is_null() ? nullptr : polled_values_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->polled_values.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null polled_values in NetLogExporter.Stop request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
    return message;
  }


  void Dispatch(NetLogExporter* impl, NetLogExporter::StopCallback callback) {
    impl->Stop(
        std::move(param_polled_values_), std::move(callback));
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* serialization_context,
                 mojo::internal::Buffer* buffer) override {
    ::network::mojom::internal::NetLogExporter_Stop_Params_Data::BufferWriter
        params;
    params.Allocate(buffer);
  typename decltype(params->polled_values)::BaseType::BufferWriter
      polled_values_writer;
  mojo::internal::Serialize<::mojo_base::mojom::DictionaryValueDataView>(
      param_polled_values_, buffer, &polled_values_writer, serialization_context);
  params->polled_values.Set(
      polled_values_writer.is_null() ? nullptr : polled_values_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->polled_values.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null polled_values in NetLogExporter.Stop request");
  }
  base::Value param_polled_values_;

  DISALLOW_COPY_AND_ASSIGN(NetLogExporterProxy_Stop_Message);
};

const mojo::internal::UnserializedMessageContext::Tag
NetLogExporterProxy_Stop_Message::kMessageTag = {};

void NetLogExporterProxy::Stop(
    base::Value in_polled_values, StopCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "network::mojom::NetLogExporter::Stop");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  const bool kSerialize = receiver_->PrefersSerializedMessages();
  auto message = NetLogExporterProxy_Stop_Message::Build(
      kSerialize, kExpectsResponse, kIsSync, std::move(in_polled_values));
  std::unique_ptr<mojo::MessageReceiver> responder(
      new NetLogExporter_Stop_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class NetLogExporter_Start_ProxyToResponder {
 public:
  static NetLogExporter::StartCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<NetLogExporter_Start_ProxyToResponder> proxy(
        new NetLogExporter_Start_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&NetLogExporter_Start_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~NetLogExporter_Start_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // If we're being destroyed without being run, we want to ensure the
      // binding endpoint has been closed. This checks for that asynchronously.
      // We pass a bound generated callback to handle the response so that any
      // resulting DCHECK stack will have useful interface type information.
      responder_->IsConnectedAsync(base::BindOnce(&OnIsConnectedComplete));
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    responder_ = nullptr;
  }

 private:
  NetLogExporter_Start_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "NetLogExporter::StartCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      int32_t in_net_error);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(NetLogExporter_Start_ProxyToResponder);
};
class NetLogExporter_Start_Response_Message
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  explicit NetLogExporter_Start_Response_Message(
      uint32_t message_flags
      , int32_t param_net_error
  )
      : mojo::internal::UnserializedMessageContext(
          &kMessageTag,
          internal::kNetLogExporter_Start_Name,
          message_flags)
      , param_net_error_(std::move(param_net_error)){}
  ~NetLogExporter_Start_Response_Message() override = default;

  static mojo::Message Build(
      bool serialize,
      bool is_sync,
      int32_t param_net_error) {

    
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync) ? mojo::Message::kFlagIsSync : 0);

    if (!serialize) {
      return mojo::Message(std::make_unique<NetLogExporter_Start_Response_Message>(
          kFlags
          , std::move(param_net_error)
          ));
    }

    DCHECK(serialize);
    
  mojo::Message message(
      internal::kNetLogExporter_Start_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetLogExporter_Start_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->net_error = param_net_error;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
    return message;
  }


  void Dispatch(NetLogExporter::StartCallback* callback) {
    std::move(*callback).Run(
        std::move(param_net_error_));
  }



 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* serialization_context,
                 mojo::internal::Buffer* buffer) override {
    ::network::mojom::internal::NetLogExporter_Start_ResponseParams_Data::BufferWriter
        params;
    params.Allocate(buffer);
  params->net_error = param_net_error_;
  }
  int32_t param_net_error_;

  DISALLOW_COPY_AND_ASSIGN(NetLogExporter_Start_Response_Message);
};

const mojo::internal::UnserializedMessageContext::Tag
NetLogExporter_Start_Response_Message::kMessageTag = {};

bool NetLogExporter_Start_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "network::mojom::NetLogExporter::StartCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);
  if (!message->is_serialized()) {
    auto context =
        message->TakeUnserializedContext<NetLogExporter_Start_Response_Message>();
    if (!context) {
      // The Message was not of the expected type. It may be a valid message
      // which was build using a different variant of these bindings. Force
      // serialization before dispatch in this case.
      message->SerializeIfNecessary();
    } else {
      if (!callback_.is_null())
        context->Dispatch(&callback_);
      return true;
    }
  }

  DCHECK(message->is_serialized());
  internal::NetLogExporter_Start_ResponseParams_Data* params =
      reinterpret_cast<
          internal::NetLogExporter_Start_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  int32_t p_net_error{};
  NetLogExporter_Start_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_net_error = input_data_view.net_error();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "NetLogExporter::Start response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_net_error));
  return true;
}

void NetLogExporter_Start_ProxyToResponder::Run(
    int32_t in_net_error) {
  const bool kSerialize = responder_->PrefersSerializedMessages();
  auto message = NetLogExporter_Start_Response_Message::Build(kSerialize, is_sync_, std::move(in_net_error));

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)network::mojom::NetLogExporter::StartCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class NetLogExporter_Stop_ProxyToResponder {
 public:
  static NetLogExporter::StopCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<NetLogExporter_Stop_ProxyToResponder> proxy(
        new NetLogExporter_Stop_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&NetLogExporter_Stop_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~NetLogExporter_Stop_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // If we're being destroyed without being run, we want to ensure the
      // binding endpoint has been closed. This checks for that asynchronously.
      // We pass a bound generated callback to handle the response so that any
      // resulting DCHECK stack will have useful interface type information.
      responder_->IsConnectedAsync(base::BindOnce(&OnIsConnectedComplete));
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    responder_ = nullptr;
  }

 private:
  NetLogExporter_Stop_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "NetLogExporter::StopCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      int32_t in_net_error);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(NetLogExporter_Stop_ProxyToResponder);
};
class NetLogExporter_Stop_Response_Message
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  explicit NetLogExporter_Stop_Response_Message(
      uint32_t message_flags
      , int32_t param_net_error
  )
      : mojo::internal::UnserializedMessageContext(
          &kMessageTag,
          internal::kNetLogExporter_Stop_Name,
          message_flags)
      , param_net_error_(std::move(param_net_error)){}
  ~NetLogExporter_Stop_Response_Message() override = default;

  static mojo::Message Build(
      bool serialize,
      bool is_sync,
      int32_t param_net_error) {

    
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync) ? mojo::Message::kFlagIsSync : 0);

    if (!serialize) {
      return mojo::Message(std::make_unique<NetLogExporter_Stop_Response_Message>(
          kFlags
          , std::move(param_net_error)
          ));
    }

    DCHECK(serialize);
    
  mojo::Message message(
      internal::kNetLogExporter_Stop_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetLogExporter_Stop_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->net_error = param_net_error;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
    return message;
  }


  void Dispatch(NetLogExporter::StopCallback* callback) {
    std::move(*callback).Run(
        std::move(param_net_error_));
  }



 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* serialization_context,
                 mojo::internal::Buffer* buffer) override {
    ::network::mojom::internal::NetLogExporter_Stop_ResponseParams_Data::BufferWriter
        params;
    params.Allocate(buffer);
  params->net_error = param_net_error_;
  }
  int32_t param_net_error_;

  DISALLOW_COPY_AND_ASSIGN(NetLogExporter_Stop_Response_Message);
};

const mojo::internal::UnserializedMessageContext::Tag
NetLogExporter_Stop_Response_Message::kMessageTag = {};

bool NetLogExporter_Stop_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "network::mojom::NetLogExporter::StopCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);
  if (!message->is_serialized()) {
    auto context =
        message->TakeUnserializedContext<NetLogExporter_Stop_Response_Message>();
    if (!context) {
      // The Message was not of the expected type. It may be a valid message
      // which was build using a different variant of these bindings. Force
      // serialization before dispatch in this case.
      message->SerializeIfNecessary();
    } else {
      if (!callback_.is_null())
        context->Dispatch(&callback_);
      return true;
    }
  }

  DCHECK(message->is_serialized());
  internal::NetLogExporter_Stop_ResponseParams_Data* params =
      reinterpret_cast<
          internal::NetLogExporter_Stop_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  int32_t p_net_error{};
  NetLogExporter_Stop_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_net_error = input_data_view.net_error();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "NetLogExporter::Stop response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_net_error));
  return true;
}

void NetLogExporter_Stop_ProxyToResponder::Run(
    int32_t in_net_error) {
  const bool kSerialize = responder_->PrefersSerializedMessages();
  auto message = NetLogExporter_Stop_Response_Message::Build(kSerialize, is_sync_, std::move(in_net_error));

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)network::mojom::NetLogExporter::StopCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}

// static
bool NetLogExporterStubDispatch::Accept(
    NetLogExporter* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kNetLogExporter_Start_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)network::mojom::NetLogExporter::Start",
               "message", message->name());
#endif
      break;
    }
    case internal::kNetLogExporter_Stop_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)network::mojom::NetLogExporter::Stop",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

// static
bool NetLogExporterStubDispatch::AcceptWithResponder(
    NetLogExporter* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kNetLogExporter_Start_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)network::mojom::NetLogExporter::Start",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);
      if (!message->is_serialized()) {
        auto context = message->TakeUnserializedContext<
            NetLogExporterProxy_Start_Message>();
        if (!context) {
          // The Message was not of the expected type. It may be a valid message
          // which was built using a different variant of these bindings. Force
          // serialization before dispatch in this case.
          message->SerializeIfNecessary();
        } else {
          NetLogExporter::StartCallback callback =
              NetLogExporter_Start_ProxyToResponder::CreateCallback(
                  message->request_id(),
                  message->has_flag(mojo::Message::kFlagIsSync),
                  std::move(responder));
          context->Dispatch(impl, std::move(callback));
          return true;
        }
      }

      internal::NetLogExporter_Start_Params_Data* params =
          reinterpret_cast<
              internal::NetLogExporter_Start_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      base::File p_destination{};
      base::Value p_extra_constants{};
      NetLogExporter::CaptureMode p_capture_mode{};
      uint64_t p_max_file_size{};
      NetLogExporter_Start_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadDestination(&p_destination))
        success = false;
      if (!input_data_view.ReadExtraConstants(&p_extra_constants))
        success = false;
      if (!input_data_view.ReadCaptureMode(&p_capture_mode))
        success = false;
      p_max_file_size = input_data_view.max_file_size();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "NetLogExporter::Start deserializer");
        return false;
      }
      NetLogExporter::StartCallback callback =
          NetLogExporter_Start_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->Start(
std::move(p_destination), 
std::move(p_extra_constants), 
std::move(p_capture_mode), 
std::move(p_max_file_size), std::move(callback));
      return true;
    }
    case internal::kNetLogExporter_Stop_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)network::mojom::NetLogExporter::Stop",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);
      if (!message->is_serialized()) {
        auto context = message->TakeUnserializedContext<
            NetLogExporterProxy_Stop_Message>();
        if (!context) {
          // The Message was not of the expected type. It may be a valid message
          // which was built using a different variant of these bindings. Force
          // serialization before dispatch in this case.
          message->SerializeIfNecessary();
        } else {
          NetLogExporter::StopCallback callback =
              NetLogExporter_Stop_ProxyToResponder::CreateCallback(
                  message->request_id(),
                  message->has_flag(mojo::Message::kFlagIsSync),
                  std::move(responder));
          context->Dispatch(impl, std::move(callback));
          return true;
        }
      }

      internal::NetLogExporter_Stop_Params_Data* params =
          reinterpret_cast<
              internal::NetLogExporter_Stop_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      base::Value p_polled_values{};
      NetLogExporter_Stop_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadPolledValues(&p_polled_values))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "NetLogExporter::Stop deserializer");
        return false;
      }
      NetLogExporter::StopCallback callback =
          NetLogExporter_Stop_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->Stop(
std::move(p_polled_values), std::move(callback));
      return true;
    }
  }
  return false;
}

bool NetLogExporterRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "NetLogExporter RequestValidator");

  switch (message->header()->name) {
    case internal::kNetLogExporter_Start_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetLogExporter_Start_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetLogExporter_Stop_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetLogExporter_Stop_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    default:
      break;
  }

  // Unrecognized message.
  ReportValidationError(
      &validation_context,
      mojo::internal::VALIDATION_ERROR_MESSAGE_HEADER_UNKNOWN_METHOD);
  return false;
}

bool NetLogExporterResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "NetLogExporter ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kNetLogExporter_Start_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetLogExporter_Start_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetLogExporter_Stop_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetLogExporter_Stop_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    default:
      break;
  }

  // Unrecognized message.
  ReportValidationError(
      &validation_context,
      mojo::internal::VALIDATION_ERROR_MESSAGE_HEADER_UNKNOWN_METHOD);
  return false;
}
void NetLogExporterInterceptorForTesting::Start(base::File destination, base::Value extra_constants, NetLogExporter::CaptureMode capture_mode, uint64_t max_file_size, StartCallback callback) {
  GetForwardingInterface()->Start(std::move(destination), std::move(extra_constants), std::move(capture_mode), std::move(max_file_size), std::move(callback));
}
void NetLogExporterInterceptorForTesting::Stop(base::Value polled_values, StopCallback callback) {
  GetForwardingInterface()->Stop(std::move(polled_values), std::move(callback));
}
NetLogExporterAsyncWaiter::NetLogExporterAsyncWaiter(
    NetLogExporter* proxy) : proxy_(proxy) {}

NetLogExporterAsyncWaiter::~NetLogExporterAsyncWaiter() = default;

void NetLogExporterAsyncWaiter::Start(
    base::File destination, base::Value extra_constants, NetLogExporter::CaptureMode capture_mode, uint64_t max_file_size, int32_t* out_net_error) {
  base::RunLoop loop;
  proxy_->Start(std::move(destination),std::move(extra_constants),std::move(capture_mode),std::move(max_file_size),
      base::BindOnce(
          [](base::RunLoop* loop,
             int32_t* out_net_error
,
             int32_t net_error) {*out_net_error = std::move(net_error);
            loop->Quit();
          },
          &loop,
          out_net_error));
  loop.Run();
}
void NetLogExporterAsyncWaiter::Stop(
    base::Value polled_values, int32_t* out_net_error) {
  base::RunLoop loop;
  proxy_->Stop(std::move(polled_values),
      base::BindOnce(
          [](base::RunLoop* loop,
             int32_t* out_net_error
,
             int32_t net_error) {*out_net_error = std::move(net_error);
            loop->Quit();
          },
          &loop,
          out_net_error));
  loop.Run();
}

const char NetworkContext::Name_[] = "network.mojom.NetworkContext";
bool NetworkContext::AddHSTSForTesting(const std::string& host, base::Time expiry, bool include_subdomains) {
  NOTREACHED();
  return false;
}
bool NetworkContext::SetFailingHttpTransactionForTesting(int32_t rv) {
  NOTREACHED();
  return false;
}

class NetworkContext_ClearNetworkingHistorySince_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  NetworkContext_ClearNetworkingHistorySince_ForwardToCallback(
      NetworkContext::ClearNetworkingHistorySinceCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  NetworkContext::ClearNetworkingHistorySinceCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(NetworkContext_ClearNetworkingHistorySince_ForwardToCallback);
};

class NetworkContext_ClearHttpCache_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  NetworkContext_ClearHttpCache_ForwardToCallback(
      NetworkContext::ClearHttpCacheCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  NetworkContext::ClearHttpCacheCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(NetworkContext_ClearHttpCache_ForwardToCallback);
};

class NetworkContext_ClearChannelIds_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  NetworkContext_ClearChannelIds_ForwardToCallback(
      NetworkContext::ClearChannelIdsCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  NetworkContext::ClearChannelIdsCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(NetworkContext_ClearChannelIds_ForwardToCallback);
};

class NetworkContext_ClearHttpAuthCache_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  NetworkContext_ClearHttpAuthCache_ForwardToCallback(
      NetworkContext::ClearHttpAuthCacheCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  NetworkContext::ClearHttpAuthCacheCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(NetworkContext_ClearHttpAuthCache_ForwardToCallback);
};

class NetworkContext_ClearReportingCacheReports_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  NetworkContext_ClearReportingCacheReports_ForwardToCallback(
      NetworkContext::ClearReportingCacheReportsCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  NetworkContext::ClearReportingCacheReportsCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(NetworkContext_ClearReportingCacheReports_ForwardToCallback);
};

class NetworkContext_ClearReportingCacheClients_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  NetworkContext_ClearReportingCacheClients_ForwardToCallback(
      NetworkContext::ClearReportingCacheClientsCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  NetworkContext::ClearReportingCacheClientsCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(NetworkContext_ClearReportingCacheClients_ForwardToCallback);
};

class NetworkContext_ClearNetworkErrorLogging_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  NetworkContext_ClearNetworkErrorLogging_ForwardToCallback(
      NetworkContext::ClearNetworkErrorLoggingCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  NetworkContext::ClearNetworkErrorLoggingCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(NetworkContext_ClearNetworkErrorLogging_ForwardToCallback);
};

class NetworkContext_CreateTCPServerSocket_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  NetworkContext_CreateTCPServerSocket_ForwardToCallback(
      NetworkContext::CreateTCPServerSocketCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  NetworkContext::CreateTCPServerSocketCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(NetworkContext_CreateTCPServerSocket_ForwardToCallback);
};

class NetworkContext_CreateTCPConnectedSocket_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  NetworkContext_CreateTCPConnectedSocket_ForwardToCallback(
      NetworkContext::CreateTCPConnectedSocketCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  NetworkContext::CreateTCPConnectedSocketCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(NetworkContext_CreateTCPConnectedSocket_ForwardToCallback);
};
class NetworkContext_AddHSTSForTesting_HandleSyncResponse
    : public mojo::MessageReceiver {
 public:
  NetworkContext_AddHSTSForTesting_HandleSyncResponse(
      bool* result)
      : result_(result) {
    DCHECK(!*result_);
  }
  bool Accept(mojo::Message* message) override;
 private:
  bool* result_;DISALLOW_COPY_AND_ASSIGN(NetworkContext_AddHSTSForTesting_HandleSyncResponse);
};

class NetworkContext_AddHSTSForTesting_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  NetworkContext_AddHSTSForTesting_ForwardToCallback(
      NetworkContext::AddHSTSForTestingCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  NetworkContext::AddHSTSForTestingCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(NetworkContext_AddHSTSForTesting_ForwardToCallback);
};
class NetworkContext_SetFailingHttpTransactionForTesting_HandleSyncResponse
    : public mojo::MessageReceiver {
 public:
  NetworkContext_SetFailingHttpTransactionForTesting_HandleSyncResponse(
      bool* result)
      : result_(result) {
    DCHECK(!*result_);
  }
  bool Accept(mojo::Message* message) override;
 private:
  bool* result_;DISALLOW_COPY_AND_ASSIGN(NetworkContext_SetFailingHttpTransactionForTesting_HandleSyncResponse);
};

class NetworkContext_SetFailingHttpTransactionForTesting_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  NetworkContext_SetFailingHttpTransactionForTesting_ForwardToCallback(
      NetworkContext::SetFailingHttpTransactionForTestingCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  NetworkContext::SetFailingHttpTransactionForTestingCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(NetworkContext_SetFailingHttpTransactionForTesting_ForwardToCallback);
};

NetworkContextProxy::NetworkContextProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}
class NetworkContextProxy_CreateURLLoaderFactory_Message
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  explicit NetworkContextProxy_CreateURLLoaderFactory_Message(
      uint32_t message_flags
      , ::network::mojom::URLLoaderFactoryRequest param_url_loader_factory
      , URLLoaderFactoryParamsPtr param_params
  )
      : mojo::internal::UnserializedMessageContext(
          &kMessageTag,
          internal::kNetworkContext_CreateURLLoaderFactory_Name,
          message_flags)
      , param_url_loader_factory_(std::move(param_url_loader_factory))
      , param_params_(std::move(param_params)){}
  ~NetworkContextProxy_CreateURLLoaderFactory_Message() override = default;

  static mojo::Message Build(
      bool serialize,
      bool expects_response,
      bool is_sync,
      ::network::mojom::URLLoaderFactoryRequest param_url_loader_factory, URLLoaderFactoryParamsPtr param_params) {

    
  const uint32_t kFlags =
      ((expects_response) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((is_sync) ? mojo::Message::kFlagIsSync : 0);

    if (!serialize) {
      return mojo::Message(std::make_unique<NetworkContextProxy_CreateURLLoaderFactory_Message>(
          kFlags
          , std::move(param_url_loader_factory)
          , std::move(param_params)
          ));
    }

    DCHECK(serialize);
    
  mojo::Message message(
      internal::kNetworkContext_CreateURLLoaderFactory_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkContext_CreateURLLoaderFactory_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::network::mojom::URLLoaderFactoryRequestDataView>(
      param_url_loader_factory, &params->url_loader_factory, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->url_loader_factory),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid url_loader_factory in NetworkContext.CreateURLLoaderFactory request");
  typename decltype(params->params)::BaseType::BufferWriter
      params_writer;
  mojo::internal::Serialize<::network::mojom::URLLoaderFactoryParamsDataView>(
      param_params, buffer, &params_writer, &serialization_context);
  params->params.Set(
      params_writer.is_null() ? nullptr : params_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->params.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null params in NetworkContext.CreateURLLoaderFactory request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
    return message;
  }


  void Dispatch(NetworkContext* impl) {
    impl->CreateURLLoaderFactory(
        std::move(param_url_loader_factory_),
        std::move(param_params_));
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* serialization_context,
                 mojo::internal::Buffer* buffer) override {
    ::network::mojom::internal::NetworkContext_CreateURLLoaderFactory_Params_Data::BufferWriter
        params;
    params.Allocate(buffer);
  mojo::internal::Serialize<::network::mojom::URLLoaderFactoryRequestDataView>(
      param_url_loader_factory_, &params->url_loader_factory, serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->url_loader_factory),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid url_loader_factory in NetworkContext.CreateURLLoaderFactory request");
  typename decltype(params->params)::BaseType::BufferWriter
      params_writer;
  mojo::internal::Serialize<::network::mojom::URLLoaderFactoryParamsDataView>(
      param_params_, buffer, &params_writer, serialization_context);
  params->params.Set(
      params_writer.is_null() ? nullptr : params_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->params.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null params in NetworkContext.CreateURLLoaderFactory request");
  }
  ::network::mojom::URLLoaderFactoryRequest param_url_loader_factory_;
  URLLoaderFactoryParamsPtr param_params_;

  DISALLOW_COPY_AND_ASSIGN(NetworkContextProxy_CreateURLLoaderFactory_Message);
};

const mojo::internal::UnserializedMessageContext::Tag
NetworkContextProxy_CreateURLLoaderFactory_Message::kMessageTag = {};

void NetworkContextProxy::CreateURLLoaderFactory(
    ::network::mojom::URLLoaderFactoryRequest in_url_loader_factory, URLLoaderFactoryParamsPtr in_params) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "network::mojom::NetworkContext::CreateURLLoaderFactory");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  const bool kSerialize = receiver_->PrefersSerializedMessages();
  auto message = NetworkContextProxy_CreateURLLoaderFactory_Message::Build(
      kSerialize, kExpectsResponse, kIsSync, std::move(in_url_loader_factory), std::move(in_params));
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}
class NetworkContextProxy_GetCookieManager_Message
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  explicit NetworkContextProxy_GetCookieManager_Message(
      uint32_t message_flags
      , ::network::mojom::CookieManagerRequest param_cookie_manager
  )
      : mojo::internal::UnserializedMessageContext(
          &kMessageTag,
          internal::kNetworkContext_GetCookieManager_Name,
          message_flags)
      , param_cookie_manager_(std::move(param_cookie_manager)){}
  ~NetworkContextProxy_GetCookieManager_Message() override = default;

  static mojo::Message Build(
      bool serialize,
      bool expects_response,
      bool is_sync,
      ::network::mojom::CookieManagerRequest param_cookie_manager) {

    
  const uint32_t kFlags =
      ((expects_response) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((is_sync) ? mojo::Message::kFlagIsSync : 0);

    if (!serialize) {
      return mojo::Message(std::make_unique<NetworkContextProxy_GetCookieManager_Message>(
          kFlags
          , std::move(param_cookie_manager)
          ));
    }

    DCHECK(serialize);
    
  mojo::Message message(
      internal::kNetworkContext_GetCookieManager_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkContext_GetCookieManager_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::network::mojom::CookieManagerRequestDataView>(
      param_cookie_manager, &params->cookie_manager, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->cookie_manager),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid cookie_manager in NetworkContext.GetCookieManager request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
    return message;
  }


  void Dispatch(NetworkContext* impl) {
    impl->GetCookieManager(
        std::move(param_cookie_manager_));
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* serialization_context,
                 mojo::internal::Buffer* buffer) override {
    ::network::mojom::internal::NetworkContext_GetCookieManager_Params_Data::BufferWriter
        params;
    params.Allocate(buffer);
  mojo::internal::Serialize<::network::mojom::CookieManagerRequestDataView>(
      param_cookie_manager_, &params->cookie_manager, serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->cookie_manager),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid cookie_manager in NetworkContext.GetCookieManager request");
  }
  ::network::mojom::CookieManagerRequest param_cookie_manager_;

  DISALLOW_COPY_AND_ASSIGN(NetworkContextProxy_GetCookieManager_Message);
};

const mojo::internal::UnserializedMessageContext::Tag
NetworkContextProxy_GetCookieManager_Message::kMessageTag = {};

void NetworkContextProxy::GetCookieManager(
    ::network::mojom::CookieManagerRequest in_cookie_manager) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "network::mojom::NetworkContext::GetCookieManager");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  const bool kSerialize = receiver_->PrefersSerializedMessages();
  auto message = NetworkContextProxy_GetCookieManager_Message::Build(
      kSerialize, kExpectsResponse, kIsSync, std::move(in_cookie_manager));
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}
class NetworkContextProxy_GetRestrictedCookieManager_Message
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  explicit NetworkContextProxy_GetRestrictedCookieManager_Message(
      uint32_t message_flags
      , ::network::mojom::RestrictedCookieManagerRequest param_restricted_cookie_manager
      , int32_t param_render_process_id
      , int32_t param_render_frame_id
  )
      : mojo::internal::UnserializedMessageContext(
          &kMessageTag,
          internal::kNetworkContext_GetRestrictedCookieManager_Name,
          message_flags)
      , param_restricted_cookie_manager_(std::move(param_restricted_cookie_manager))
      , param_render_process_id_(std::move(param_render_process_id))
      , param_render_frame_id_(std::move(param_render_frame_id)){}
  ~NetworkContextProxy_GetRestrictedCookieManager_Message() override = default;

  static mojo::Message Build(
      bool serialize,
      bool expects_response,
      bool is_sync,
      ::network::mojom::RestrictedCookieManagerRequest param_restricted_cookie_manager, int32_t param_render_process_id, int32_t param_render_frame_id) {

    
  const uint32_t kFlags =
      ((expects_response) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((is_sync) ? mojo::Message::kFlagIsSync : 0);

    if (!serialize) {
      return mojo::Message(std::make_unique<NetworkContextProxy_GetRestrictedCookieManager_Message>(
          kFlags
          , std::move(param_restricted_cookie_manager)
          , std::move(param_render_process_id)
          , std::move(param_render_frame_id)
          ));
    }

    DCHECK(serialize);
    
  mojo::Message message(
      internal::kNetworkContext_GetRestrictedCookieManager_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkContext_GetRestrictedCookieManager_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::network::mojom::RestrictedCookieManagerRequestDataView>(
      param_restricted_cookie_manager, &params->restricted_cookie_manager, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->restricted_cookie_manager),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid restricted_cookie_manager in NetworkContext.GetRestrictedCookieManager request");
  params->render_process_id = param_render_process_id;
  params->render_frame_id = param_render_frame_id;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
    return message;
  }


  void Dispatch(NetworkContext* impl) {
    impl->GetRestrictedCookieManager(
        std::move(param_restricted_cookie_manager_),
        std::move(param_render_process_id_),
        std::move(param_render_frame_id_));
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* serialization_context,
                 mojo::internal::Buffer* buffer) override {
    ::network::mojom::internal::NetworkContext_GetRestrictedCookieManager_Params_Data::BufferWriter
        params;
    params.Allocate(buffer);
  mojo::internal::Serialize<::network::mojom::RestrictedCookieManagerRequestDataView>(
      param_restricted_cookie_manager_, &params->restricted_cookie_manager, serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->restricted_cookie_manager),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid restricted_cookie_manager in NetworkContext.GetRestrictedCookieManager request");
  params->render_process_id = param_render_process_id_;
  params->render_frame_id = param_render_frame_id_;
  }
  ::network::mojom::RestrictedCookieManagerRequest param_restricted_cookie_manager_;
  int32_t param_render_process_id_;
  int32_t param_render_frame_id_;

  DISALLOW_COPY_AND_ASSIGN(NetworkContextProxy_GetRestrictedCookieManager_Message);
};

const mojo::internal::UnserializedMessageContext::Tag
NetworkContextProxy_GetRestrictedCookieManager_Message::kMessageTag = {};

void NetworkContextProxy::GetRestrictedCookieManager(
    ::network::mojom::RestrictedCookieManagerRequest in_restricted_cookie_manager, int32_t in_render_process_id, int32_t in_render_frame_id) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "network::mojom::NetworkContext::GetRestrictedCookieManager");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  const bool kSerialize = receiver_->PrefersSerializedMessages();
  auto message = NetworkContextProxy_GetRestrictedCookieManager_Message::Build(
      kSerialize, kExpectsResponse, kIsSync, std::move(in_restricted_cookie_manager), std::move(in_render_process_id), std::move(in_render_frame_id));
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}
class NetworkContextProxy_ClearNetworkingHistorySince_Message
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  explicit NetworkContextProxy_ClearNetworkingHistorySince_Message(
      uint32_t message_flags
      , base::Time param_start_time
  )
      : mojo::internal::UnserializedMessageContext(
          &kMessageTag,
          internal::kNetworkContext_ClearNetworkingHistorySince_Name,
          message_flags)
      , param_start_time_(std::move(param_start_time)){}
  ~NetworkContextProxy_ClearNetworkingHistorySince_Message() override = default;

  static mojo::Message Build(
      bool serialize,
      bool expects_response,
      bool is_sync,
      base::Time param_start_time) {

    
  const uint32_t kFlags =
      ((expects_response) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((is_sync) ? mojo::Message::kFlagIsSync : 0);

    if (!serialize) {
      return mojo::Message(std::make_unique<NetworkContextProxy_ClearNetworkingHistorySince_Message>(
          kFlags
          , std::move(param_start_time)
          ));
    }

    DCHECK(serialize);
    
  mojo::Message message(
      internal::kNetworkContext_ClearNetworkingHistorySince_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkContext_ClearNetworkingHistorySince_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->start_time)::BaseType::BufferWriter
      start_time_writer;
  mojo::internal::Serialize<::mojo_base::mojom::TimeDataView>(
      param_start_time, buffer, &start_time_writer, &serialization_context);
  params->start_time.Set(
      start_time_writer.is_null() ? nullptr : start_time_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->start_time.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null start_time in NetworkContext.ClearNetworkingHistorySince request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
    return message;
  }


  void Dispatch(NetworkContext* impl, NetworkContext::ClearNetworkingHistorySinceCallback callback) {
    impl->ClearNetworkingHistorySince(
        std::move(param_start_time_), std::move(callback));
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* serialization_context,
                 mojo::internal::Buffer* buffer) override {
    ::network::mojom::internal::NetworkContext_ClearNetworkingHistorySince_Params_Data::BufferWriter
        params;
    params.Allocate(buffer);
  typename decltype(params->start_time)::BaseType::BufferWriter
      start_time_writer;
  mojo::internal::Serialize<::mojo_base::mojom::TimeDataView>(
      param_start_time_, buffer, &start_time_writer, serialization_context);
  params->start_time.Set(
      start_time_writer.is_null() ? nullptr : start_time_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->start_time.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null start_time in NetworkContext.ClearNetworkingHistorySince request");
  }
  base::Time param_start_time_;

  DISALLOW_COPY_AND_ASSIGN(NetworkContextProxy_ClearNetworkingHistorySince_Message);
};

const mojo::internal::UnserializedMessageContext::Tag
NetworkContextProxy_ClearNetworkingHistorySince_Message::kMessageTag = {};

void NetworkContextProxy::ClearNetworkingHistorySince(
    base::Time in_start_time, ClearNetworkingHistorySinceCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "network::mojom::NetworkContext::ClearNetworkingHistorySince");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  const bool kSerialize = receiver_->PrefersSerializedMessages();
  auto message = NetworkContextProxy_ClearNetworkingHistorySince_Message::Build(
      kSerialize, kExpectsResponse, kIsSync, std::move(in_start_time));
  std::unique_ptr<mojo::MessageReceiver> responder(
      new NetworkContext_ClearNetworkingHistorySince_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class NetworkContextProxy_ClearHttpCache_Message
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  explicit NetworkContextProxy_ClearHttpCache_Message(
      uint32_t message_flags
      , base::Time param_start_time
      , base::Time param_end_time
      , ClearDataFilterPtr param_filter
  )
      : mojo::internal::UnserializedMessageContext(
          &kMessageTag,
          internal::kNetworkContext_ClearHttpCache_Name,
          message_flags)
      , param_start_time_(std::move(param_start_time))
      , param_end_time_(std::move(param_end_time))
      , param_filter_(std::move(param_filter)){}
  ~NetworkContextProxy_ClearHttpCache_Message() override = default;

  static mojo::Message Build(
      bool serialize,
      bool expects_response,
      bool is_sync,
      base::Time param_start_time, base::Time param_end_time, ClearDataFilterPtr param_filter) {

    
  const uint32_t kFlags =
      ((expects_response) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((is_sync) ? mojo::Message::kFlagIsSync : 0);

    if (!serialize) {
      return mojo::Message(std::make_unique<NetworkContextProxy_ClearHttpCache_Message>(
          kFlags
          , std::move(param_start_time)
          , std::move(param_end_time)
          , std::move(param_filter)
          ));
    }

    DCHECK(serialize);
    
  mojo::Message message(
      internal::kNetworkContext_ClearHttpCache_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkContext_ClearHttpCache_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->start_time)::BaseType::BufferWriter
      start_time_writer;
  mojo::internal::Serialize<::mojo_base::mojom::TimeDataView>(
      param_start_time, buffer, &start_time_writer, &serialization_context);
  params->start_time.Set(
      start_time_writer.is_null() ? nullptr : start_time_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->start_time.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null start_time in NetworkContext.ClearHttpCache request");
  typename decltype(params->end_time)::BaseType::BufferWriter
      end_time_writer;
  mojo::internal::Serialize<::mojo_base::mojom::TimeDataView>(
      param_end_time, buffer, &end_time_writer, &serialization_context);
  params->end_time.Set(
      end_time_writer.is_null() ? nullptr : end_time_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->end_time.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null end_time in NetworkContext.ClearHttpCache request");
  typename decltype(params->filter)::BaseType::BufferWriter
      filter_writer;
  mojo::internal::Serialize<::network::mojom::ClearDataFilterDataView>(
      param_filter, buffer, &filter_writer, &serialization_context);
  params->filter.Set(
      filter_writer.is_null() ? nullptr : filter_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
    return message;
  }


  void Dispatch(NetworkContext* impl, NetworkContext::ClearHttpCacheCallback callback) {
    impl->ClearHttpCache(
        std::move(param_start_time_),
        std::move(param_end_time_),
        std::move(param_filter_), std::move(callback));
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* serialization_context,
                 mojo::internal::Buffer* buffer) override {
    ::network::mojom::internal::NetworkContext_ClearHttpCache_Params_Data::BufferWriter
        params;
    params.Allocate(buffer);
  typename decltype(params->start_time)::BaseType::BufferWriter
      start_time_writer;
  mojo::internal::Serialize<::mojo_base::mojom::TimeDataView>(
      param_start_time_, buffer, &start_time_writer, serialization_context);
  params->start_time.Set(
      start_time_writer.is_null() ? nullptr : start_time_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->start_time.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null start_time in NetworkContext.ClearHttpCache request");
  typename decltype(params->end_time)::BaseType::BufferWriter
      end_time_writer;
  mojo::internal::Serialize<::mojo_base::mojom::TimeDataView>(
      param_end_time_, buffer, &end_time_writer, serialization_context);
  params->end_time.Set(
      end_time_writer.is_null() ? nullptr : end_time_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->end_time.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null end_time in NetworkContext.ClearHttpCache request");
  typename decltype(params->filter)::BaseType::BufferWriter
      filter_writer;
  mojo::internal::Serialize<::network::mojom::ClearDataFilterDataView>(
      param_filter_, buffer, &filter_writer, serialization_context);
  params->filter.Set(
      filter_writer.is_null() ? nullptr : filter_writer.data());
  }
  base::Time param_start_time_;
  base::Time param_end_time_;
  ClearDataFilterPtr param_filter_;

  DISALLOW_COPY_AND_ASSIGN(NetworkContextProxy_ClearHttpCache_Message);
};

const mojo::internal::UnserializedMessageContext::Tag
NetworkContextProxy_ClearHttpCache_Message::kMessageTag = {};

void NetworkContextProxy::ClearHttpCache(
    base::Time in_start_time, base::Time in_end_time, ClearDataFilterPtr in_filter, ClearHttpCacheCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "network::mojom::NetworkContext::ClearHttpCache");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  const bool kSerialize = receiver_->PrefersSerializedMessages();
  auto message = NetworkContextProxy_ClearHttpCache_Message::Build(
      kSerialize, kExpectsResponse, kIsSync, std::move(in_start_time), std::move(in_end_time), std::move(in_filter));
  std::unique_ptr<mojo::MessageReceiver> responder(
      new NetworkContext_ClearHttpCache_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class NetworkContextProxy_ClearChannelIds_Message
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  explicit NetworkContextProxy_ClearChannelIds_Message(
      uint32_t message_flags
      , base::Time param_start_time
      , base::Time param_end_time
      , ClearDataFilterPtr param_filter
  )
      : mojo::internal::UnserializedMessageContext(
          &kMessageTag,
          internal::kNetworkContext_ClearChannelIds_Name,
          message_flags)
      , param_start_time_(std::move(param_start_time))
      , param_end_time_(std::move(param_end_time))
      , param_filter_(std::move(param_filter)){}
  ~NetworkContextProxy_ClearChannelIds_Message() override = default;

  static mojo::Message Build(
      bool serialize,
      bool expects_response,
      bool is_sync,
      base::Time param_start_time, base::Time param_end_time, ClearDataFilterPtr param_filter) {

    
  const uint32_t kFlags =
      ((expects_response) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((is_sync) ? mojo::Message::kFlagIsSync : 0);

    if (!serialize) {
      return mojo::Message(std::make_unique<NetworkContextProxy_ClearChannelIds_Message>(
          kFlags
          , std::move(param_start_time)
          , std::move(param_end_time)
          , std::move(param_filter)
          ));
    }

    DCHECK(serialize);
    
  mojo::Message message(
      internal::kNetworkContext_ClearChannelIds_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkContext_ClearChannelIds_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->start_time)::BaseType::BufferWriter
      start_time_writer;
  mojo::internal::Serialize<::mojo_base::mojom::TimeDataView>(
      param_start_time, buffer, &start_time_writer, &serialization_context);
  params->start_time.Set(
      start_time_writer.is_null() ? nullptr : start_time_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->start_time.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null start_time in NetworkContext.ClearChannelIds request");
  typename decltype(params->end_time)::BaseType::BufferWriter
      end_time_writer;
  mojo::internal::Serialize<::mojo_base::mojom::TimeDataView>(
      param_end_time, buffer, &end_time_writer, &serialization_context);
  params->end_time.Set(
      end_time_writer.is_null() ? nullptr : end_time_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->end_time.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null end_time in NetworkContext.ClearChannelIds request");
  typename decltype(params->filter)::BaseType::BufferWriter
      filter_writer;
  mojo::internal::Serialize<::network::mojom::ClearDataFilterDataView>(
      param_filter, buffer, &filter_writer, &serialization_context);
  params->filter.Set(
      filter_writer.is_null() ? nullptr : filter_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
    return message;
  }


  void Dispatch(NetworkContext* impl, NetworkContext::ClearChannelIdsCallback callback) {
    impl->ClearChannelIds(
        std::move(param_start_time_),
        std::move(param_end_time_),
        std::move(param_filter_), std::move(callback));
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* serialization_context,
                 mojo::internal::Buffer* buffer) override {
    ::network::mojom::internal::NetworkContext_ClearChannelIds_Params_Data::BufferWriter
        params;
    params.Allocate(buffer);
  typename decltype(params->start_time)::BaseType::BufferWriter
      start_time_writer;
  mojo::internal::Serialize<::mojo_base::mojom::TimeDataView>(
      param_start_time_, buffer, &start_time_writer, serialization_context);
  params->start_time.Set(
      start_time_writer.is_null() ? nullptr : start_time_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->start_time.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null start_time in NetworkContext.ClearChannelIds request");
  typename decltype(params->end_time)::BaseType::BufferWriter
      end_time_writer;
  mojo::internal::Serialize<::mojo_base::mojom::TimeDataView>(
      param_end_time_, buffer, &end_time_writer, serialization_context);
  params->end_time.Set(
      end_time_writer.is_null() ? nullptr : end_time_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->end_time.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null end_time in NetworkContext.ClearChannelIds request");
  typename decltype(params->filter)::BaseType::BufferWriter
      filter_writer;
  mojo::internal::Serialize<::network::mojom::ClearDataFilterDataView>(
      param_filter_, buffer, &filter_writer, serialization_context);
  params->filter.Set(
      filter_writer.is_null() ? nullptr : filter_writer.data());
  }
  base::Time param_start_time_;
  base::Time param_end_time_;
  ClearDataFilterPtr param_filter_;

  DISALLOW_COPY_AND_ASSIGN(NetworkContextProxy_ClearChannelIds_Message);
};

const mojo::internal::UnserializedMessageContext::Tag
NetworkContextProxy_ClearChannelIds_Message::kMessageTag = {};

void NetworkContextProxy::ClearChannelIds(
    base::Time in_start_time, base::Time in_end_time, ClearDataFilterPtr in_filter, ClearChannelIdsCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "network::mojom::NetworkContext::ClearChannelIds");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  const bool kSerialize = receiver_->PrefersSerializedMessages();
  auto message = NetworkContextProxy_ClearChannelIds_Message::Build(
      kSerialize, kExpectsResponse, kIsSync, std::move(in_start_time), std::move(in_end_time), std::move(in_filter));
  std::unique_ptr<mojo::MessageReceiver> responder(
      new NetworkContext_ClearChannelIds_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class NetworkContextProxy_ClearHttpAuthCache_Message
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  explicit NetworkContextProxy_ClearHttpAuthCache_Message(
      uint32_t message_flags
      , base::Time param_start_time
  )
      : mojo::internal::UnserializedMessageContext(
          &kMessageTag,
          internal::kNetworkContext_ClearHttpAuthCache_Name,
          message_flags)
      , param_start_time_(std::move(param_start_time)){}
  ~NetworkContextProxy_ClearHttpAuthCache_Message() override = default;

  static mojo::Message Build(
      bool serialize,
      bool expects_response,
      bool is_sync,
      base::Time param_start_time) {

    
  const uint32_t kFlags =
      ((expects_response) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((is_sync) ? mojo::Message::kFlagIsSync : 0);

    if (!serialize) {
      return mojo::Message(std::make_unique<NetworkContextProxy_ClearHttpAuthCache_Message>(
          kFlags
          , std::move(param_start_time)
          ));
    }

    DCHECK(serialize);
    
  mojo::Message message(
      internal::kNetworkContext_ClearHttpAuthCache_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkContext_ClearHttpAuthCache_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->start_time)::BaseType::BufferWriter
      start_time_writer;
  mojo::internal::Serialize<::mojo_base::mojom::TimeDataView>(
      param_start_time, buffer, &start_time_writer, &serialization_context);
  params->start_time.Set(
      start_time_writer.is_null() ? nullptr : start_time_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->start_time.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null start_time in NetworkContext.ClearHttpAuthCache request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
    return message;
  }


  void Dispatch(NetworkContext* impl, NetworkContext::ClearHttpAuthCacheCallback callback) {
    impl->ClearHttpAuthCache(
        std::move(param_start_time_), std::move(callback));
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* serialization_context,
                 mojo::internal::Buffer* buffer) override {
    ::network::mojom::internal::NetworkContext_ClearHttpAuthCache_Params_Data::BufferWriter
        params;
    params.Allocate(buffer);
  typename decltype(params->start_time)::BaseType::BufferWriter
      start_time_writer;
  mojo::internal::Serialize<::mojo_base::mojom::TimeDataView>(
      param_start_time_, buffer, &start_time_writer, serialization_context);
  params->start_time.Set(
      start_time_writer.is_null() ? nullptr : start_time_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->start_time.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null start_time in NetworkContext.ClearHttpAuthCache request");
  }
  base::Time param_start_time_;

  DISALLOW_COPY_AND_ASSIGN(NetworkContextProxy_ClearHttpAuthCache_Message);
};

const mojo::internal::UnserializedMessageContext::Tag
NetworkContextProxy_ClearHttpAuthCache_Message::kMessageTag = {};

void NetworkContextProxy::ClearHttpAuthCache(
    base::Time in_start_time, ClearHttpAuthCacheCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "network::mojom::NetworkContext::ClearHttpAuthCache");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  const bool kSerialize = receiver_->PrefersSerializedMessages();
  auto message = NetworkContextProxy_ClearHttpAuthCache_Message::Build(
      kSerialize, kExpectsResponse, kIsSync, std::move(in_start_time));
  std::unique_ptr<mojo::MessageReceiver> responder(
      new NetworkContext_ClearHttpAuthCache_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class NetworkContextProxy_ClearReportingCacheReports_Message
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  explicit NetworkContextProxy_ClearReportingCacheReports_Message(
      uint32_t message_flags
      , ClearDataFilterPtr param_filter
  )
      : mojo::internal::UnserializedMessageContext(
          &kMessageTag,
          internal::kNetworkContext_ClearReportingCacheReports_Name,
          message_flags)
      , param_filter_(std::move(param_filter)){}
  ~NetworkContextProxy_ClearReportingCacheReports_Message() override = default;

  static mojo::Message Build(
      bool serialize,
      bool expects_response,
      bool is_sync,
      ClearDataFilterPtr param_filter) {

    
  const uint32_t kFlags =
      ((expects_response) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((is_sync) ? mojo::Message::kFlagIsSync : 0);

    if (!serialize) {
      return mojo::Message(std::make_unique<NetworkContextProxy_ClearReportingCacheReports_Message>(
          kFlags
          , std::move(param_filter)
          ));
    }

    DCHECK(serialize);
    
  mojo::Message message(
      internal::kNetworkContext_ClearReportingCacheReports_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkContext_ClearReportingCacheReports_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->filter)::BaseType::BufferWriter
      filter_writer;
  mojo::internal::Serialize<::network::mojom::ClearDataFilterDataView>(
      param_filter, buffer, &filter_writer, &serialization_context);
  params->filter.Set(
      filter_writer.is_null() ? nullptr : filter_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
    return message;
  }


  void Dispatch(NetworkContext* impl, NetworkContext::ClearReportingCacheReportsCallback callback) {
    impl->ClearReportingCacheReports(
        std::move(param_filter_), std::move(callback));
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* serialization_context,
                 mojo::internal::Buffer* buffer) override {
    ::network::mojom::internal::NetworkContext_ClearReportingCacheReports_Params_Data::BufferWriter
        params;
    params.Allocate(buffer);
  typename decltype(params->filter)::BaseType::BufferWriter
      filter_writer;
  mojo::internal::Serialize<::network::mojom::ClearDataFilterDataView>(
      param_filter_, buffer, &filter_writer, serialization_context);
  params->filter.Set(
      filter_writer.is_null() ? nullptr : filter_writer.data());
  }
  ClearDataFilterPtr param_filter_;

  DISALLOW_COPY_AND_ASSIGN(NetworkContextProxy_ClearReportingCacheReports_Message);
};

const mojo::internal::UnserializedMessageContext::Tag
NetworkContextProxy_ClearReportingCacheReports_Message::kMessageTag = {};

void NetworkContextProxy::ClearReportingCacheReports(
    ClearDataFilterPtr in_filter, ClearReportingCacheReportsCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "network::mojom::NetworkContext::ClearReportingCacheReports");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  const bool kSerialize = receiver_->PrefersSerializedMessages();
  auto message = NetworkContextProxy_ClearReportingCacheReports_Message::Build(
      kSerialize, kExpectsResponse, kIsSync, std::move(in_filter));
  std::unique_ptr<mojo::MessageReceiver> responder(
      new NetworkContext_ClearReportingCacheReports_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class NetworkContextProxy_ClearReportingCacheClients_Message
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  explicit NetworkContextProxy_ClearReportingCacheClients_Message(
      uint32_t message_flags
      , ClearDataFilterPtr param_filter
  )
      : mojo::internal::UnserializedMessageContext(
          &kMessageTag,
          internal::kNetworkContext_ClearReportingCacheClients_Name,
          message_flags)
      , param_filter_(std::move(param_filter)){}
  ~NetworkContextProxy_ClearReportingCacheClients_Message() override = default;

  static mojo::Message Build(
      bool serialize,
      bool expects_response,
      bool is_sync,
      ClearDataFilterPtr param_filter) {

    
  const uint32_t kFlags =
      ((expects_response) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((is_sync) ? mojo::Message::kFlagIsSync : 0);

    if (!serialize) {
      return mojo::Message(std::make_unique<NetworkContextProxy_ClearReportingCacheClients_Message>(
          kFlags
          , std::move(param_filter)
          ));
    }

    DCHECK(serialize);
    
  mojo::Message message(
      internal::kNetworkContext_ClearReportingCacheClients_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkContext_ClearReportingCacheClients_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->filter)::BaseType::BufferWriter
      filter_writer;
  mojo::internal::Serialize<::network::mojom::ClearDataFilterDataView>(
      param_filter, buffer, &filter_writer, &serialization_context);
  params->filter.Set(
      filter_writer.is_null() ? nullptr : filter_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
    return message;
  }


  void Dispatch(NetworkContext* impl, NetworkContext::ClearReportingCacheClientsCallback callback) {
    impl->ClearReportingCacheClients(
        std::move(param_filter_), std::move(callback));
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* serialization_context,
                 mojo::internal::Buffer* buffer) override {
    ::network::mojom::internal::NetworkContext_ClearReportingCacheClients_Params_Data::BufferWriter
        params;
    params.Allocate(buffer);
  typename decltype(params->filter)::BaseType::BufferWriter
      filter_writer;
  mojo::internal::Serialize<::network::mojom::ClearDataFilterDataView>(
      param_filter_, buffer, &filter_writer, serialization_context);
  params->filter.Set(
      filter_writer.is_null() ? nullptr : filter_writer.data());
  }
  ClearDataFilterPtr param_filter_;

  DISALLOW_COPY_AND_ASSIGN(NetworkContextProxy_ClearReportingCacheClients_Message);
};

const mojo::internal::UnserializedMessageContext::Tag
NetworkContextProxy_ClearReportingCacheClients_Message::kMessageTag = {};

void NetworkContextProxy::ClearReportingCacheClients(
    ClearDataFilterPtr in_filter, ClearReportingCacheClientsCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "network::mojom::NetworkContext::ClearReportingCacheClients");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  const bool kSerialize = receiver_->PrefersSerializedMessages();
  auto message = NetworkContextProxy_ClearReportingCacheClients_Message::Build(
      kSerialize, kExpectsResponse, kIsSync, std::move(in_filter));
  std::unique_ptr<mojo::MessageReceiver> responder(
      new NetworkContext_ClearReportingCacheClients_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class NetworkContextProxy_ClearNetworkErrorLogging_Message
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  explicit NetworkContextProxy_ClearNetworkErrorLogging_Message(
      uint32_t message_flags
      , ClearDataFilterPtr param_filter
  )
      : mojo::internal::UnserializedMessageContext(
          &kMessageTag,
          internal::kNetworkContext_ClearNetworkErrorLogging_Name,
          message_flags)
      , param_filter_(std::move(param_filter)){}
  ~NetworkContextProxy_ClearNetworkErrorLogging_Message() override = default;

  static mojo::Message Build(
      bool serialize,
      bool expects_response,
      bool is_sync,
      ClearDataFilterPtr param_filter) {

    
  const uint32_t kFlags =
      ((expects_response) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((is_sync) ? mojo::Message::kFlagIsSync : 0);

    if (!serialize) {
      return mojo::Message(std::make_unique<NetworkContextProxy_ClearNetworkErrorLogging_Message>(
          kFlags
          , std::move(param_filter)
          ));
    }

    DCHECK(serialize);
    
  mojo::Message message(
      internal::kNetworkContext_ClearNetworkErrorLogging_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkContext_ClearNetworkErrorLogging_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->filter)::BaseType::BufferWriter
      filter_writer;
  mojo::internal::Serialize<::network::mojom::ClearDataFilterDataView>(
      param_filter, buffer, &filter_writer, &serialization_context);
  params->filter.Set(
      filter_writer.is_null() ? nullptr : filter_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
    return message;
  }


  void Dispatch(NetworkContext* impl, NetworkContext::ClearNetworkErrorLoggingCallback callback) {
    impl->ClearNetworkErrorLogging(
        std::move(param_filter_), std::move(callback));
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* serialization_context,
                 mojo::internal::Buffer* buffer) override {
    ::network::mojom::internal::NetworkContext_ClearNetworkErrorLogging_Params_Data::BufferWriter
        params;
    params.Allocate(buffer);
  typename decltype(params->filter)::BaseType::BufferWriter
      filter_writer;
  mojo::internal::Serialize<::network::mojom::ClearDataFilterDataView>(
      param_filter_, buffer, &filter_writer, serialization_context);
  params->filter.Set(
      filter_writer.is_null() ? nullptr : filter_writer.data());
  }
  ClearDataFilterPtr param_filter_;

  DISALLOW_COPY_AND_ASSIGN(NetworkContextProxy_ClearNetworkErrorLogging_Message);
};

const mojo::internal::UnserializedMessageContext::Tag
NetworkContextProxy_ClearNetworkErrorLogging_Message::kMessageTag = {};

void NetworkContextProxy::ClearNetworkErrorLogging(
    ClearDataFilterPtr in_filter, ClearNetworkErrorLoggingCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "network::mojom::NetworkContext::ClearNetworkErrorLogging");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  const bool kSerialize = receiver_->PrefersSerializedMessages();
  auto message = NetworkContextProxy_ClearNetworkErrorLogging_Message::Build(
      kSerialize, kExpectsResponse, kIsSync, std::move(in_filter));
  std::unique_ptr<mojo::MessageReceiver> responder(
      new NetworkContext_ClearNetworkErrorLogging_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class NetworkContextProxy_SetNetworkConditions_Message
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  explicit NetworkContextProxy_SetNetworkConditions_Message(
      uint32_t message_flags
      , const std::string& param_profile_id
      , NetworkConditionsPtr param_conditions
  )
      : mojo::internal::UnserializedMessageContext(
          &kMessageTag,
          internal::kNetworkContext_SetNetworkConditions_Name,
          message_flags)
      , param_profile_id_(std::move(param_profile_id))
      , param_conditions_(std::move(param_conditions)){}
  ~NetworkContextProxy_SetNetworkConditions_Message() override = default;

  static mojo::Message Build(
      bool serialize,
      bool expects_response,
      bool is_sync,
      const std::string& param_profile_id, NetworkConditionsPtr param_conditions) {

    
  const uint32_t kFlags =
      ((expects_response) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((is_sync) ? mojo::Message::kFlagIsSync : 0);

    if (!serialize) {
      return mojo::Message(std::make_unique<NetworkContextProxy_SetNetworkConditions_Message>(
          kFlags
          , std::move(param_profile_id)
          , std::move(param_conditions)
          ));
    }

    DCHECK(serialize);
    
  mojo::Message message(
      internal::kNetworkContext_SetNetworkConditions_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkContext_SetNetworkConditions_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->profile_id)::BaseType::BufferWriter
      profile_id_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      param_profile_id, buffer, &profile_id_writer, &serialization_context);
  params->profile_id.Set(
      profile_id_writer.is_null() ? nullptr : profile_id_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->profile_id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null profile_id in NetworkContext.SetNetworkConditions request");
  typename decltype(params->conditions)::BaseType::BufferWriter
      conditions_writer;
  mojo::internal::Serialize<::network::mojom::NetworkConditionsDataView>(
      param_conditions, buffer, &conditions_writer, &serialization_context);
  params->conditions.Set(
      conditions_writer.is_null() ? nullptr : conditions_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
    return message;
  }


  void Dispatch(NetworkContext* impl) {
    impl->SetNetworkConditions(
        std::move(param_profile_id_),
        std::move(param_conditions_));
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* serialization_context,
                 mojo::internal::Buffer* buffer) override {
    ::network::mojom::internal::NetworkContext_SetNetworkConditions_Params_Data::BufferWriter
        params;
    params.Allocate(buffer);
  typename decltype(params->profile_id)::BaseType::BufferWriter
      profile_id_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      param_profile_id_, buffer, &profile_id_writer, serialization_context);
  params->profile_id.Set(
      profile_id_writer.is_null() ? nullptr : profile_id_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->profile_id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null profile_id in NetworkContext.SetNetworkConditions request");
  typename decltype(params->conditions)::BaseType::BufferWriter
      conditions_writer;
  mojo::internal::Serialize<::network::mojom::NetworkConditionsDataView>(
      param_conditions_, buffer, &conditions_writer, serialization_context);
  params->conditions.Set(
      conditions_writer.is_null() ? nullptr : conditions_writer.data());
  }
  std::string param_profile_id_;
  NetworkConditionsPtr param_conditions_;

  DISALLOW_COPY_AND_ASSIGN(NetworkContextProxy_SetNetworkConditions_Message);
};

const mojo::internal::UnserializedMessageContext::Tag
NetworkContextProxy_SetNetworkConditions_Message::kMessageTag = {};

void NetworkContextProxy::SetNetworkConditions(
    const std::string& in_profile_id, NetworkConditionsPtr in_conditions) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "network::mojom::NetworkContext::SetNetworkConditions");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  const bool kSerialize = receiver_->PrefersSerializedMessages();
  auto message = NetworkContextProxy_SetNetworkConditions_Message::Build(
      kSerialize, kExpectsResponse, kIsSync, std::move(in_profile_id), std::move(in_conditions));
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}
class NetworkContextProxy_SetAcceptLanguage_Message
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  explicit NetworkContextProxy_SetAcceptLanguage_Message(
      uint32_t message_flags
      , const std::string& param_new_accept_language
  )
      : mojo::internal::UnserializedMessageContext(
          &kMessageTag,
          internal::kNetworkContext_SetAcceptLanguage_Name,
          message_flags)
      , param_new_accept_language_(std::move(param_new_accept_language)){}
  ~NetworkContextProxy_SetAcceptLanguage_Message() override = default;

  static mojo::Message Build(
      bool serialize,
      bool expects_response,
      bool is_sync,
      const std::string& param_new_accept_language) {

    
  const uint32_t kFlags =
      ((expects_response) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((is_sync) ? mojo::Message::kFlagIsSync : 0);

    if (!serialize) {
      return mojo::Message(std::make_unique<NetworkContextProxy_SetAcceptLanguage_Message>(
          kFlags
          , std::move(param_new_accept_language)
          ));
    }

    DCHECK(serialize);
    
  mojo::Message message(
      internal::kNetworkContext_SetAcceptLanguage_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkContext_SetAcceptLanguage_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->new_accept_language)::BaseType::BufferWriter
      new_accept_language_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      param_new_accept_language, buffer, &new_accept_language_writer, &serialization_context);
  params->new_accept_language.Set(
      new_accept_language_writer.is_null() ? nullptr : new_accept_language_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->new_accept_language.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null new_accept_language in NetworkContext.SetAcceptLanguage request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
    return message;
  }


  void Dispatch(NetworkContext* impl) {
    impl->SetAcceptLanguage(
        std::move(param_new_accept_language_));
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* serialization_context,
                 mojo::internal::Buffer* buffer) override {
    ::network::mojom::internal::NetworkContext_SetAcceptLanguage_Params_Data::BufferWriter
        params;
    params.Allocate(buffer);
  typename decltype(params->new_accept_language)::BaseType::BufferWriter
      new_accept_language_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      param_new_accept_language_, buffer, &new_accept_language_writer, serialization_context);
  params->new_accept_language.Set(
      new_accept_language_writer.is_null() ? nullptr : new_accept_language_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->new_accept_language.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null new_accept_language in NetworkContext.SetAcceptLanguage request");
  }
  std::string param_new_accept_language_;

  DISALLOW_COPY_AND_ASSIGN(NetworkContextProxy_SetAcceptLanguage_Message);
};

const mojo::internal::UnserializedMessageContext::Tag
NetworkContextProxy_SetAcceptLanguage_Message::kMessageTag = {};

void NetworkContextProxy::SetAcceptLanguage(
    const std::string& in_new_accept_language) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "network::mojom::NetworkContext::SetAcceptLanguage");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  const bool kSerialize = receiver_->PrefersSerializedMessages();
  auto message = NetworkContextProxy_SetAcceptLanguage_Message::Build(
      kSerialize, kExpectsResponse, kIsSync, std::move(in_new_accept_language));
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}
class NetworkContextProxy_SetCTPolicy_Message
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  explicit NetworkContextProxy_SetCTPolicy_Message(
      uint32_t message_flags
      , const std::vector<std::string>& param_required_hosts
      , const std::vector<std::string>& param_excluded_hosts
      , const std::vector<std::string>& param_excluded_spkis
      , const std::vector<std::string>& param_excluded_legacy_spkis
  )
      : mojo::internal::UnserializedMessageContext(
          &kMessageTag,
          internal::kNetworkContext_SetCTPolicy_Name,
          message_flags)
      , param_required_hosts_(std::move(param_required_hosts))
      , param_excluded_hosts_(std::move(param_excluded_hosts))
      , param_excluded_spkis_(std::move(param_excluded_spkis))
      , param_excluded_legacy_spkis_(std::move(param_excluded_legacy_spkis)){}
  ~NetworkContextProxy_SetCTPolicy_Message() override = default;

  static mojo::Message Build(
      bool serialize,
      bool expects_response,
      bool is_sync,
      const std::vector<std::string>& param_required_hosts, const std::vector<std::string>& param_excluded_hosts, const std::vector<std::string>& param_excluded_spkis, const std::vector<std::string>& param_excluded_legacy_spkis) {

    
  const uint32_t kFlags =
      ((expects_response) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((is_sync) ? mojo::Message::kFlagIsSync : 0);

    if (!serialize) {
      return mojo::Message(std::make_unique<NetworkContextProxy_SetCTPolicy_Message>(
          kFlags
          , std::move(param_required_hosts)
          , std::move(param_excluded_hosts)
          , std::move(param_excluded_spkis)
          , std::move(param_excluded_legacy_spkis)
          ));
    }

    DCHECK(serialize);
    
  mojo::Message message(
      internal::kNetworkContext_SetCTPolicy_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkContext_SetCTPolicy_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->required_hosts)::BaseType::BufferWriter
      required_hosts_writer;
  const mojo::internal::ContainerValidateParams required_hosts_validate_params(
      0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr));
  mojo::internal::Serialize<mojo::ArrayDataView<mojo::StringDataView>>(
      param_required_hosts, buffer, &required_hosts_writer, &required_hosts_validate_params,
      &serialization_context);
  params->required_hosts.Set(
      required_hosts_writer.is_null() ? nullptr : required_hosts_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->required_hosts.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null required_hosts in NetworkContext.SetCTPolicy request");
  typename decltype(params->excluded_hosts)::BaseType::BufferWriter
      excluded_hosts_writer;
  const mojo::internal::ContainerValidateParams excluded_hosts_validate_params(
      0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr));
  mojo::internal::Serialize<mojo::ArrayDataView<mojo::StringDataView>>(
      param_excluded_hosts, buffer, &excluded_hosts_writer, &excluded_hosts_validate_params,
      &serialization_context);
  params->excluded_hosts.Set(
      excluded_hosts_writer.is_null() ? nullptr : excluded_hosts_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->excluded_hosts.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null excluded_hosts in NetworkContext.SetCTPolicy request");
  typename decltype(params->excluded_spkis)::BaseType::BufferWriter
      excluded_spkis_writer;
  const mojo::internal::ContainerValidateParams excluded_spkis_validate_params(
      0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr));
  mojo::internal::Serialize<mojo::ArrayDataView<mojo::StringDataView>>(
      param_excluded_spkis, buffer, &excluded_spkis_writer, &excluded_spkis_validate_params,
      &serialization_context);
  params->excluded_spkis.Set(
      excluded_spkis_writer.is_null() ? nullptr : excluded_spkis_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->excluded_spkis.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null excluded_spkis in NetworkContext.SetCTPolicy request");
  typename decltype(params->excluded_legacy_spkis)::BaseType::BufferWriter
      excluded_legacy_spkis_writer;
  const mojo::internal::ContainerValidateParams excluded_legacy_spkis_validate_params(
      0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr));
  mojo::internal::Serialize<mojo::ArrayDataView<mojo::StringDataView>>(
      param_excluded_legacy_spkis, buffer, &excluded_legacy_spkis_writer, &excluded_legacy_spkis_validate_params,
      &serialization_context);
  params->excluded_legacy_spkis.Set(
      excluded_legacy_spkis_writer.is_null() ? nullptr : excluded_legacy_spkis_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->excluded_legacy_spkis.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null excluded_legacy_spkis in NetworkContext.SetCTPolicy request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
    return message;
  }


  void Dispatch(NetworkContext* impl) {
    impl->SetCTPolicy(
        std::move(param_required_hosts_),
        std::move(param_excluded_hosts_),
        std::move(param_excluded_spkis_),
        std::move(param_excluded_legacy_spkis_));
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* serialization_context,
                 mojo::internal::Buffer* buffer) override {
    ::network::mojom::internal::NetworkContext_SetCTPolicy_Params_Data::BufferWriter
        params;
    params.Allocate(buffer);
  typename decltype(params->required_hosts)::BaseType::BufferWriter
      required_hosts_writer;
  const mojo::internal::ContainerValidateParams required_hosts_validate_params(
      0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr));
  mojo::internal::Serialize<mojo::ArrayDataView<mojo::StringDataView>>(
      param_required_hosts_, buffer, &required_hosts_writer, &required_hosts_validate_params,
      serialization_context);
  params->required_hosts.Set(
      required_hosts_writer.is_null() ? nullptr : required_hosts_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->required_hosts.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null required_hosts in NetworkContext.SetCTPolicy request");
  typename decltype(params->excluded_hosts)::BaseType::BufferWriter
      excluded_hosts_writer;
  const mojo::internal::ContainerValidateParams excluded_hosts_validate_params(
      0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr));
  mojo::internal::Serialize<mojo::ArrayDataView<mojo::StringDataView>>(
      param_excluded_hosts_, buffer, &excluded_hosts_writer, &excluded_hosts_validate_params,
      serialization_context);
  params->excluded_hosts.Set(
      excluded_hosts_writer.is_null() ? nullptr : excluded_hosts_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->excluded_hosts.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null excluded_hosts in NetworkContext.SetCTPolicy request");
  typename decltype(params->excluded_spkis)::BaseType::BufferWriter
      excluded_spkis_writer;
  const mojo::internal::ContainerValidateParams excluded_spkis_validate_params(
      0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr));
  mojo::internal::Serialize<mojo::ArrayDataView<mojo::StringDataView>>(
      param_excluded_spkis_, buffer, &excluded_spkis_writer, &excluded_spkis_validate_params,
      serialization_context);
  params->excluded_spkis.Set(
      excluded_spkis_writer.is_null() ? nullptr : excluded_spkis_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->excluded_spkis.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null excluded_spkis in NetworkContext.SetCTPolicy request");
  typename decltype(params->excluded_legacy_spkis)::BaseType::BufferWriter
      excluded_legacy_spkis_writer;
  const mojo::internal::ContainerValidateParams excluded_legacy_spkis_validate_params(
      0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr));
  mojo::internal::Serialize<mojo::ArrayDataView<mojo::StringDataView>>(
      param_excluded_legacy_spkis_, buffer, &excluded_legacy_spkis_writer, &excluded_legacy_spkis_validate_params,
      serialization_context);
  params->excluded_legacy_spkis.Set(
      excluded_legacy_spkis_writer.is_null() ? nullptr : excluded_legacy_spkis_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->excluded_legacy_spkis.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null excluded_legacy_spkis in NetworkContext.SetCTPolicy request");
  }
  std::vector<std::string> param_required_hosts_;
  std::vector<std::string> param_excluded_hosts_;
  std::vector<std::string> param_excluded_spkis_;
  std::vector<std::string> param_excluded_legacy_spkis_;

  DISALLOW_COPY_AND_ASSIGN(NetworkContextProxy_SetCTPolicy_Message);
};

const mojo::internal::UnserializedMessageContext::Tag
NetworkContextProxy_SetCTPolicy_Message::kMessageTag = {};

void NetworkContextProxy::SetCTPolicy(
    const std::vector<std::string>& in_required_hosts, const std::vector<std::string>& in_excluded_hosts, const std::vector<std::string>& in_excluded_spkis, const std::vector<std::string>& in_excluded_legacy_spkis) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "network::mojom::NetworkContext::SetCTPolicy");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  const bool kSerialize = receiver_->PrefersSerializedMessages();
  auto message = NetworkContextProxy_SetCTPolicy_Message::Build(
      kSerialize, kExpectsResponse, kIsSync, std::move(in_required_hosts), std::move(in_excluded_hosts), std::move(in_excluded_spkis), std::move(in_excluded_legacy_spkis));
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}
class NetworkContextProxy_CreateUDPSocket_Message
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  explicit NetworkContextProxy_CreateUDPSocket_Message(
      uint32_t message_flags
      , ::network::mojom::UDPSocketRequest param_request
      , ::network::mojom::UDPSocketReceiverPtr param_receiver
  )
      : mojo::internal::UnserializedMessageContext(
          &kMessageTag,
          internal::kNetworkContext_CreateUDPSocket_Name,
          message_flags)
      , param_request_(std::move(param_request))
      , param_receiver_(param_receiver.PassInterface()){}
  ~NetworkContextProxy_CreateUDPSocket_Message() override = default;

  static mojo::Message Build(
      bool serialize,
      bool expects_response,
      bool is_sync,
      ::network::mojom::UDPSocketRequest param_request, ::network::mojom::UDPSocketReceiverPtr param_receiver) {

    
  const uint32_t kFlags =
      ((expects_response) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((is_sync) ? mojo::Message::kFlagIsSync : 0);

    if (!serialize) {
      return mojo::Message(std::make_unique<NetworkContextProxy_CreateUDPSocket_Message>(
          kFlags
          , std::move(param_request)
          , std::move(param_receiver)
          ));
    }

    DCHECK(serialize);
    
  mojo::Message message(
      internal::kNetworkContext_CreateUDPSocket_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkContext_CreateUDPSocket_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::network::mojom::UDPSocketRequestDataView>(
      param_request, &params->request, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->request),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid request in NetworkContext.CreateUDPSocket request");
  mojo::internal::Serialize<::network::mojom::UDPSocketReceiverPtrDataView>(
      param_receiver, &params->receiver, &serialization_context);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
    return message;
  }


  void Dispatch(NetworkContext* impl) {
    impl->CreateUDPSocket(
        std::move(param_request_),
        ::network::mojom::UDPSocketReceiverPtr(std::move(param_receiver_)));
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* serialization_context,
                 mojo::internal::Buffer* buffer) override {
    ::network::mojom::internal::NetworkContext_CreateUDPSocket_Params_Data::BufferWriter
        params;
    params.Allocate(buffer);
  mojo::internal::Serialize<::network::mojom::UDPSocketRequestDataView>(
      param_request_, &params->request, serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->request),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid request in NetworkContext.CreateUDPSocket request");
  mojo::internal::Serialize<::network::mojom::UDPSocketReceiverPtrDataView>(
      param_receiver_, &params->receiver, serialization_context);
  }
  ::network::mojom::UDPSocketRequest param_request_;
  ::network::mojom::UDPSocketReceiverPtrInfo param_receiver_;

  DISALLOW_COPY_AND_ASSIGN(NetworkContextProxy_CreateUDPSocket_Message);
};

const mojo::internal::UnserializedMessageContext::Tag
NetworkContextProxy_CreateUDPSocket_Message::kMessageTag = {};

void NetworkContextProxy::CreateUDPSocket(
    ::network::mojom::UDPSocketRequest in_request, ::network::mojom::UDPSocketReceiverPtr in_receiver) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "network::mojom::NetworkContext::CreateUDPSocket");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  const bool kSerialize = receiver_->PrefersSerializedMessages();
  auto message = NetworkContextProxy_CreateUDPSocket_Message::Build(
      kSerialize, kExpectsResponse, kIsSync, std::move(in_request), std::move(in_receiver));
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}
class NetworkContextProxy_CreateTCPServerSocket_Message
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  explicit NetworkContextProxy_CreateTCPServerSocket_Message(
      uint32_t message_flags
      , const net::IPEndPoint& param_local_addr
      , uint32_t param_backlog
      , const net::MutableNetworkTrafficAnnotationTag& param_traffic_annotation
      , ::network::mojom::TCPServerSocketRequest param_socket
  )
      : mojo::internal::UnserializedMessageContext(
          &kMessageTag,
          internal::kNetworkContext_CreateTCPServerSocket_Name,
          message_flags)
      , param_local_addr_(std::move(param_local_addr))
      , param_backlog_(std::move(param_backlog))
      , param_traffic_annotation_(std::move(param_traffic_annotation))
      , param_socket_(std::move(param_socket)){}
  ~NetworkContextProxy_CreateTCPServerSocket_Message() override = default;

  static mojo::Message Build(
      bool serialize,
      bool expects_response,
      bool is_sync,
      const net::IPEndPoint& param_local_addr, uint32_t param_backlog, const net::MutableNetworkTrafficAnnotationTag& param_traffic_annotation, ::network::mojom::TCPServerSocketRequest param_socket) {

    
  const uint32_t kFlags =
      ((expects_response) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((is_sync) ? mojo::Message::kFlagIsSync : 0);

    if (!serialize) {
      return mojo::Message(std::make_unique<NetworkContextProxy_CreateTCPServerSocket_Message>(
          kFlags
          , std::move(param_local_addr)
          , std::move(param_backlog)
          , std::move(param_traffic_annotation)
          , std::move(param_socket)
          ));
    }

    DCHECK(serialize);
    
  mojo::Message message(
      internal::kNetworkContext_CreateTCPServerSocket_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkContext_CreateTCPServerSocket_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->local_addr)::BaseType::BufferWriter
      local_addr_writer;
  mojo::internal::Serialize<::net::interfaces::IPEndPointDataView>(
      param_local_addr, buffer, &local_addr_writer, &serialization_context);
  params->local_addr.Set(
      local_addr_writer.is_null() ? nullptr : local_addr_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->local_addr.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null local_addr in NetworkContext.CreateTCPServerSocket request");
  params->backlog = param_backlog;
  typename decltype(params->traffic_annotation)::BaseType::BufferWriter
      traffic_annotation_writer;
  mojo::internal::Serialize<::network::mojom::MutableNetworkTrafficAnnotationTagDataView>(
      param_traffic_annotation, buffer, &traffic_annotation_writer, &serialization_context);
  params->traffic_annotation.Set(
      traffic_annotation_writer.is_null() ? nullptr : traffic_annotation_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->traffic_annotation.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null traffic_annotation in NetworkContext.CreateTCPServerSocket request");
  mojo::internal::Serialize<::network::mojom::TCPServerSocketRequestDataView>(
      param_socket, &params->socket, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->socket),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid socket in NetworkContext.CreateTCPServerSocket request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
    return message;
  }


  void Dispatch(NetworkContext* impl, NetworkContext::CreateTCPServerSocketCallback callback) {
    impl->CreateTCPServerSocket(
        std::move(param_local_addr_),
        std::move(param_backlog_),
        std::move(param_traffic_annotation_),
        std::move(param_socket_), std::move(callback));
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* serialization_context,
                 mojo::internal::Buffer* buffer) override {
    ::network::mojom::internal::NetworkContext_CreateTCPServerSocket_Params_Data::BufferWriter
        params;
    params.Allocate(buffer);
  typename decltype(params->local_addr)::BaseType::BufferWriter
      local_addr_writer;
  mojo::internal::Serialize<::net::interfaces::IPEndPointDataView>(
      param_local_addr_, buffer, &local_addr_writer, serialization_context);
  params->local_addr.Set(
      local_addr_writer.is_null() ? nullptr : local_addr_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->local_addr.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null local_addr in NetworkContext.CreateTCPServerSocket request");
  params->backlog = param_backlog_;
  typename decltype(params->traffic_annotation)::BaseType::BufferWriter
      traffic_annotation_writer;
  mojo::internal::Serialize<::network::mojom::MutableNetworkTrafficAnnotationTagDataView>(
      param_traffic_annotation_, buffer, &traffic_annotation_writer, serialization_context);
  params->traffic_annotation.Set(
      traffic_annotation_writer.is_null() ? nullptr : traffic_annotation_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->traffic_annotation.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null traffic_annotation in NetworkContext.CreateTCPServerSocket request");
  mojo::internal::Serialize<::network::mojom::TCPServerSocketRequestDataView>(
      param_socket_, &params->socket, serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->socket),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid socket in NetworkContext.CreateTCPServerSocket request");
  }
  net::IPEndPoint param_local_addr_;
  uint32_t param_backlog_;
  net::MutableNetworkTrafficAnnotationTag param_traffic_annotation_;
  ::network::mojom::TCPServerSocketRequest param_socket_;

  DISALLOW_COPY_AND_ASSIGN(NetworkContextProxy_CreateTCPServerSocket_Message);
};

const mojo::internal::UnserializedMessageContext::Tag
NetworkContextProxy_CreateTCPServerSocket_Message::kMessageTag = {};

void NetworkContextProxy::CreateTCPServerSocket(
    const net::IPEndPoint& in_local_addr, uint32_t in_backlog, const net::MutableNetworkTrafficAnnotationTag& in_traffic_annotation, ::network::mojom::TCPServerSocketRequest in_socket, CreateTCPServerSocketCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "network::mojom::NetworkContext::CreateTCPServerSocket");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  const bool kSerialize = receiver_->PrefersSerializedMessages();
  auto message = NetworkContextProxy_CreateTCPServerSocket_Message::Build(
      kSerialize, kExpectsResponse, kIsSync, std::move(in_local_addr), std::move(in_backlog), std::move(in_traffic_annotation), std::move(in_socket));
  std::unique_ptr<mojo::MessageReceiver> responder(
      new NetworkContext_CreateTCPServerSocket_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class NetworkContextProxy_CreateTCPConnectedSocket_Message
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  explicit NetworkContextProxy_CreateTCPConnectedSocket_Message(
      uint32_t message_flags
      , const base::Optional<net::IPEndPoint>& param_local_addr
      , const net::AddressList& param_remote_addr_list
      , const net::MutableNetworkTrafficAnnotationTag& param_traffic_annotation
      , ::network::mojom::TCPConnectedSocketRequest param_socket
      , ::network::mojom::SocketObserverPtr param_observer
  )
      : mojo::internal::UnserializedMessageContext(
          &kMessageTag,
          internal::kNetworkContext_CreateTCPConnectedSocket_Name,
          message_flags)
      , param_local_addr_(std::move(param_local_addr))
      , param_remote_addr_list_(std::move(param_remote_addr_list))
      , param_traffic_annotation_(std::move(param_traffic_annotation))
      , param_socket_(std::move(param_socket))
      , param_observer_(param_observer.PassInterface()){}
  ~NetworkContextProxy_CreateTCPConnectedSocket_Message() override = default;

  static mojo::Message Build(
      bool serialize,
      bool expects_response,
      bool is_sync,
      const base::Optional<net::IPEndPoint>& param_local_addr, const net::AddressList& param_remote_addr_list, const net::MutableNetworkTrafficAnnotationTag& param_traffic_annotation, ::network::mojom::TCPConnectedSocketRequest param_socket, ::network::mojom::SocketObserverPtr param_observer) {

    
  const uint32_t kFlags =
      ((expects_response) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((is_sync) ? mojo::Message::kFlagIsSync : 0);

    if (!serialize) {
      return mojo::Message(std::make_unique<NetworkContextProxy_CreateTCPConnectedSocket_Message>(
          kFlags
          , std::move(param_local_addr)
          , std::move(param_remote_addr_list)
          , std::move(param_traffic_annotation)
          , std::move(param_socket)
          , std::move(param_observer)
          ));
    }

    DCHECK(serialize);
    
  mojo::Message message(
      internal::kNetworkContext_CreateTCPConnectedSocket_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkContext_CreateTCPConnectedSocket_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->local_addr)::BaseType::BufferWriter
      local_addr_writer;
  mojo::internal::Serialize<::net::interfaces::IPEndPointDataView>(
      param_local_addr, buffer, &local_addr_writer, &serialization_context);
  params->local_addr.Set(
      local_addr_writer.is_null() ? nullptr : local_addr_writer.data());
  typename decltype(params->remote_addr_list)::BaseType::BufferWriter
      remote_addr_list_writer;
  mojo::internal::Serialize<::net::interfaces::AddressListDataView>(
      param_remote_addr_list, buffer, &remote_addr_list_writer, &serialization_context);
  params->remote_addr_list.Set(
      remote_addr_list_writer.is_null() ? nullptr : remote_addr_list_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->remote_addr_list.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null remote_addr_list in NetworkContext.CreateTCPConnectedSocket request");
  typename decltype(params->traffic_annotation)::BaseType::BufferWriter
      traffic_annotation_writer;
  mojo::internal::Serialize<::network::mojom::MutableNetworkTrafficAnnotationTagDataView>(
      param_traffic_annotation, buffer, &traffic_annotation_writer, &serialization_context);
  params->traffic_annotation.Set(
      traffic_annotation_writer.is_null() ? nullptr : traffic_annotation_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->traffic_annotation.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null traffic_annotation in NetworkContext.CreateTCPConnectedSocket request");
  mojo::internal::Serialize<::network::mojom::TCPConnectedSocketRequestDataView>(
      param_socket, &params->socket, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->socket),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid socket in NetworkContext.CreateTCPConnectedSocket request");
  mojo::internal::Serialize<::network::mojom::SocketObserverPtrDataView>(
      param_observer, &params->observer, &serialization_context);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
    return message;
  }


  void Dispatch(NetworkContext* impl, NetworkContext::CreateTCPConnectedSocketCallback callback) {
    impl->CreateTCPConnectedSocket(
        std::move(param_local_addr_),
        std::move(param_remote_addr_list_),
        std::move(param_traffic_annotation_),
        std::move(param_socket_),
        ::network::mojom::SocketObserverPtr(std::move(param_observer_)), std::move(callback));
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* serialization_context,
                 mojo::internal::Buffer* buffer) override {
    ::network::mojom::internal::NetworkContext_CreateTCPConnectedSocket_Params_Data::BufferWriter
        params;
    params.Allocate(buffer);
  typename decltype(params->local_addr)::BaseType::BufferWriter
      local_addr_writer;
  mojo::internal::Serialize<::net::interfaces::IPEndPointDataView>(
      param_local_addr_, buffer, &local_addr_writer, serialization_context);
  params->local_addr.Set(
      local_addr_writer.is_null() ? nullptr : local_addr_writer.data());
  typename decltype(params->remote_addr_list)::BaseType::BufferWriter
      remote_addr_list_writer;
  mojo::internal::Serialize<::net::interfaces::AddressListDataView>(
      param_remote_addr_list_, buffer, &remote_addr_list_writer, serialization_context);
  params->remote_addr_list.Set(
      remote_addr_list_writer.is_null() ? nullptr : remote_addr_list_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->remote_addr_list.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null remote_addr_list in NetworkContext.CreateTCPConnectedSocket request");
  typename decltype(params->traffic_annotation)::BaseType::BufferWriter
      traffic_annotation_writer;
  mojo::internal::Serialize<::network::mojom::MutableNetworkTrafficAnnotationTagDataView>(
      param_traffic_annotation_, buffer, &traffic_annotation_writer, serialization_context);
  params->traffic_annotation.Set(
      traffic_annotation_writer.is_null() ? nullptr : traffic_annotation_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->traffic_annotation.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null traffic_annotation in NetworkContext.CreateTCPConnectedSocket request");
  mojo::internal::Serialize<::network::mojom::TCPConnectedSocketRequestDataView>(
      param_socket_, &params->socket, serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->socket),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid socket in NetworkContext.CreateTCPConnectedSocket request");
  mojo::internal::Serialize<::network::mojom::SocketObserverPtrDataView>(
      param_observer_, &params->observer, serialization_context);
  }
  base::Optional<net::IPEndPoint> param_local_addr_;
  net::AddressList param_remote_addr_list_;
  net::MutableNetworkTrafficAnnotationTag param_traffic_annotation_;
  ::network::mojom::TCPConnectedSocketRequest param_socket_;
  ::network::mojom::SocketObserverPtrInfo param_observer_;

  DISALLOW_COPY_AND_ASSIGN(NetworkContextProxy_CreateTCPConnectedSocket_Message);
};

const mojo::internal::UnserializedMessageContext::Tag
NetworkContextProxy_CreateTCPConnectedSocket_Message::kMessageTag = {};

void NetworkContextProxy::CreateTCPConnectedSocket(
    const base::Optional<net::IPEndPoint>& in_local_addr, const net::AddressList& in_remote_addr_list, const net::MutableNetworkTrafficAnnotationTag& in_traffic_annotation, ::network::mojom::TCPConnectedSocketRequest in_socket, ::network::mojom::SocketObserverPtr in_observer, CreateTCPConnectedSocketCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "network::mojom::NetworkContext::CreateTCPConnectedSocket");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  const bool kSerialize = receiver_->PrefersSerializedMessages();
  auto message = NetworkContextProxy_CreateTCPConnectedSocket_Message::Build(
      kSerialize, kExpectsResponse, kIsSync, std::move(in_local_addr), std::move(in_remote_addr_list), std::move(in_traffic_annotation), std::move(in_socket), std::move(in_observer));
  std::unique_ptr<mojo::MessageReceiver> responder(
      new NetworkContext_CreateTCPConnectedSocket_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class NetworkContextProxy_CreateWebSocket_Message
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  explicit NetworkContextProxy_CreateWebSocket_Message(
      uint32_t message_flags
      , ::network::mojom::WebSocketRequest param_request
      , int32_t param_process_id
      , int32_t param_render_frame_id
      , const url::Origin& param_origin
  )
      : mojo::internal::UnserializedMessageContext(
          &kMessageTag,
          internal::kNetworkContext_CreateWebSocket_Name,
          message_flags)
      , param_request_(std::move(param_request))
      , param_process_id_(std::move(param_process_id))
      , param_render_frame_id_(std::move(param_render_frame_id))
      , param_origin_(std::move(param_origin)){}
  ~NetworkContextProxy_CreateWebSocket_Message() override = default;

  static mojo::Message Build(
      bool serialize,
      bool expects_response,
      bool is_sync,
      ::network::mojom::WebSocketRequest param_request, int32_t param_process_id, int32_t param_render_frame_id, const url::Origin& param_origin) {

    
  const uint32_t kFlags =
      ((expects_response) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((is_sync) ? mojo::Message::kFlagIsSync : 0);

    if (!serialize) {
      return mojo::Message(std::make_unique<NetworkContextProxy_CreateWebSocket_Message>(
          kFlags
          , std::move(param_request)
          , std::move(param_process_id)
          , std::move(param_render_frame_id)
          , std::move(param_origin)
          ));
    }

    DCHECK(serialize);
    
  mojo::Message message(
      internal::kNetworkContext_CreateWebSocket_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkContext_CreateWebSocket_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::network::mojom::WebSocketRequestDataView>(
      param_request, &params->request, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->request),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid request in NetworkContext.CreateWebSocket request");
  params->process_id = param_process_id;
  params->render_frame_id = param_render_frame_id;
  typename decltype(params->origin)::BaseType::BufferWriter
      origin_writer;
  mojo::internal::Serialize<::url::mojom::OriginDataView>(
      param_origin, buffer, &origin_writer, &serialization_context);
  params->origin.Set(
      origin_writer.is_null() ? nullptr : origin_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->origin.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null origin in NetworkContext.CreateWebSocket request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
    return message;
  }


  void Dispatch(NetworkContext* impl) {
    impl->CreateWebSocket(
        std::move(param_request_),
        std::move(param_process_id_),
        std::move(param_render_frame_id_),
        std::move(param_origin_));
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* serialization_context,
                 mojo::internal::Buffer* buffer) override {
    ::network::mojom::internal::NetworkContext_CreateWebSocket_Params_Data::BufferWriter
        params;
    params.Allocate(buffer);
  mojo::internal::Serialize<::network::mojom::WebSocketRequestDataView>(
      param_request_, &params->request, serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->request),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid request in NetworkContext.CreateWebSocket request");
  params->process_id = param_process_id_;
  params->render_frame_id = param_render_frame_id_;
  typename decltype(params->origin)::BaseType::BufferWriter
      origin_writer;
  mojo::internal::Serialize<::url::mojom::OriginDataView>(
      param_origin_, buffer, &origin_writer, serialization_context);
  params->origin.Set(
      origin_writer.is_null() ? nullptr : origin_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->origin.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null origin in NetworkContext.CreateWebSocket request");
  }
  ::network::mojom::WebSocketRequest param_request_;
  int32_t param_process_id_;
  int32_t param_render_frame_id_;
  url::Origin param_origin_;

  DISALLOW_COPY_AND_ASSIGN(NetworkContextProxy_CreateWebSocket_Message);
};

const mojo::internal::UnserializedMessageContext::Tag
NetworkContextProxy_CreateWebSocket_Message::kMessageTag = {};

void NetworkContextProxy::CreateWebSocket(
    ::network::mojom::WebSocketRequest in_request, int32_t in_process_id, int32_t in_render_frame_id, const url::Origin& in_origin) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "network::mojom::NetworkContext::CreateWebSocket");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  const bool kSerialize = receiver_->PrefersSerializedMessages();
  auto message = NetworkContextProxy_CreateWebSocket_Message::Build(
      kSerialize, kExpectsResponse, kIsSync, std::move(in_request), std::move(in_process_id), std::move(in_render_frame_id), std::move(in_origin));
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}
class NetworkContextProxy_CreateNetLogExporter_Message
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  explicit NetworkContextProxy_CreateNetLogExporter_Message(
      uint32_t message_flags
      , NetLogExporterRequest param_exporter
  )
      : mojo::internal::UnserializedMessageContext(
          &kMessageTag,
          internal::kNetworkContext_CreateNetLogExporter_Name,
          message_flags)
      , param_exporter_(std::move(param_exporter)){}
  ~NetworkContextProxy_CreateNetLogExporter_Message() override = default;

  static mojo::Message Build(
      bool serialize,
      bool expects_response,
      bool is_sync,
      NetLogExporterRequest param_exporter) {

    
  const uint32_t kFlags =
      ((expects_response) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((is_sync) ? mojo::Message::kFlagIsSync : 0);

    if (!serialize) {
      return mojo::Message(std::make_unique<NetworkContextProxy_CreateNetLogExporter_Message>(
          kFlags
          , std::move(param_exporter)
          ));
    }

    DCHECK(serialize);
    
  mojo::Message message(
      internal::kNetworkContext_CreateNetLogExporter_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkContext_CreateNetLogExporter_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::network::mojom::NetLogExporterRequestDataView>(
      param_exporter, &params->exporter, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->exporter),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid exporter in NetworkContext.CreateNetLogExporter request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
    return message;
  }


  void Dispatch(NetworkContext* impl) {
    impl->CreateNetLogExporter(
        std::move(param_exporter_));
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* serialization_context,
                 mojo::internal::Buffer* buffer) override {
    ::network::mojom::internal::NetworkContext_CreateNetLogExporter_Params_Data::BufferWriter
        params;
    params.Allocate(buffer);
  mojo::internal::Serialize<::network::mojom::NetLogExporterRequestDataView>(
      param_exporter_, &params->exporter, serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->exporter),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid exporter in NetworkContext.CreateNetLogExporter request");
  }
  NetLogExporterRequest param_exporter_;

  DISALLOW_COPY_AND_ASSIGN(NetworkContextProxy_CreateNetLogExporter_Message);
};

const mojo::internal::UnserializedMessageContext::Tag
NetworkContextProxy_CreateNetLogExporter_Message::kMessageTag = {};

void NetworkContextProxy::CreateNetLogExporter(
    NetLogExporterRequest in_exporter) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "network::mojom::NetworkContext::CreateNetLogExporter");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  const bool kSerialize = receiver_->PrefersSerializedMessages();
  auto message = NetworkContextProxy_CreateNetLogExporter_Message::Build(
      kSerialize, kExpectsResponse, kIsSync, std::move(in_exporter));
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}
class NetworkContextProxy_BlockThirdPartyCookies_Message
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  explicit NetworkContextProxy_BlockThirdPartyCookies_Message(
      uint32_t message_flags
      , bool param_block
  )
      : mojo::internal::UnserializedMessageContext(
          &kMessageTag,
          internal::kNetworkContext_BlockThirdPartyCookies_Name,
          message_flags)
      , param_block_(std::move(param_block)){}
  ~NetworkContextProxy_BlockThirdPartyCookies_Message() override = default;

  static mojo::Message Build(
      bool serialize,
      bool expects_response,
      bool is_sync,
      bool param_block) {

    
  const uint32_t kFlags =
      ((expects_response) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((is_sync) ? mojo::Message::kFlagIsSync : 0);

    if (!serialize) {
      return mojo::Message(std::make_unique<NetworkContextProxy_BlockThirdPartyCookies_Message>(
          kFlags
          , std::move(param_block)
          ));
    }

    DCHECK(serialize);
    
  mojo::Message message(
      internal::kNetworkContext_BlockThirdPartyCookies_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkContext_BlockThirdPartyCookies_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->block = param_block;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
    return message;
  }


  void Dispatch(NetworkContext* impl) {
    impl->BlockThirdPartyCookies(
        std::move(param_block_));
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* serialization_context,
                 mojo::internal::Buffer* buffer) override {
    ::network::mojom::internal::NetworkContext_BlockThirdPartyCookies_Params_Data::BufferWriter
        params;
    params.Allocate(buffer);
  params->block = param_block_;
  }
  bool param_block_;

  DISALLOW_COPY_AND_ASSIGN(NetworkContextProxy_BlockThirdPartyCookies_Message);
};

const mojo::internal::UnserializedMessageContext::Tag
NetworkContextProxy_BlockThirdPartyCookies_Message::kMessageTag = {};

void NetworkContextProxy::BlockThirdPartyCookies(
    bool in_block) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "network::mojom::NetworkContext::BlockThirdPartyCookies");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  const bool kSerialize = receiver_->PrefersSerializedMessages();
  auto message = NetworkContextProxy_BlockThirdPartyCookies_Message::Build(
      kSerialize, kExpectsResponse, kIsSync, std::move(in_block));
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}
class NetworkContextProxy_AddHSTSForTesting_Message
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  explicit NetworkContextProxy_AddHSTSForTesting_Message(
      uint32_t message_flags
      , const std::string& param_host
      , base::Time param_expiry
      , bool param_include_subdomains
  )
      : mojo::internal::UnserializedMessageContext(
          &kMessageTag,
          internal::kNetworkContext_AddHSTSForTesting_Name,
          message_flags)
      , param_host_(std::move(param_host))
      , param_expiry_(std::move(param_expiry))
      , param_include_subdomains_(std::move(param_include_subdomains)){}
  ~NetworkContextProxy_AddHSTSForTesting_Message() override = default;

  static mojo::Message Build(
      bool serialize,
      bool expects_response,
      bool is_sync,
      const std::string& param_host, base::Time param_expiry, bool param_include_subdomains) {

    
  const uint32_t kFlags =
      ((expects_response) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((is_sync) ? mojo::Message::kFlagIsSync : 0);

    if (!serialize) {
      return mojo::Message(std::make_unique<NetworkContextProxy_AddHSTSForTesting_Message>(
          kFlags
          , std::move(param_host)
          , std::move(param_expiry)
          , std::move(param_include_subdomains)
          ));
    }

    DCHECK(serialize);
    
  mojo::Message message(
      internal::kNetworkContext_AddHSTSForTesting_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkContext_AddHSTSForTesting_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->host)::BaseType::BufferWriter
      host_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      param_host, buffer, &host_writer, &serialization_context);
  params->host.Set(
      host_writer.is_null() ? nullptr : host_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->host.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null host in NetworkContext.AddHSTSForTesting request");
  typename decltype(params->expiry)::BaseType::BufferWriter
      expiry_writer;
  mojo::internal::Serialize<::mojo_base::mojom::TimeDataView>(
      param_expiry, buffer, &expiry_writer, &serialization_context);
  params->expiry.Set(
      expiry_writer.is_null() ? nullptr : expiry_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->expiry.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null expiry in NetworkContext.AddHSTSForTesting request");
  params->include_subdomains = param_include_subdomains;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
    return message;
  }


  void Dispatch(NetworkContext* impl, NetworkContext::AddHSTSForTestingCallback callback) {
    impl->AddHSTSForTesting(
        std::move(param_host_),
        std::move(param_expiry_),
        std::move(param_include_subdomains_), std::move(callback));
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* serialization_context,
                 mojo::internal::Buffer* buffer) override {
    ::network::mojom::internal::NetworkContext_AddHSTSForTesting_Params_Data::BufferWriter
        params;
    params.Allocate(buffer);
  typename decltype(params->host)::BaseType::BufferWriter
      host_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      param_host_, buffer, &host_writer, serialization_context);
  params->host.Set(
      host_writer.is_null() ? nullptr : host_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->host.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null host in NetworkContext.AddHSTSForTesting request");
  typename decltype(params->expiry)::BaseType::BufferWriter
      expiry_writer;
  mojo::internal::Serialize<::mojo_base::mojom::TimeDataView>(
      param_expiry_, buffer, &expiry_writer, serialization_context);
  params->expiry.Set(
      expiry_writer.is_null() ? nullptr : expiry_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->expiry.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null expiry in NetworkContext.AddHSTSForTesting request");
  params->include_subdomains = param_include_subdomains_;
  }
  std::string param_host_;
  base::Time param_expiry_;
  bool param_include_subdomains_;

  DISALLOW_COPY_AND_ASSIGN(NetworkContextProxy_AddHSTSForTesting_Message);
};

const mojo::internal::UnserializedMessageContext::Tag
NetworkContextProxy_AddHSTSForTesting_Message::kMessageTag = {};
bool NetworkContextProxy::AddHSTSForTesting(
    const std::string& param_host, base::Time param_expiry, bool param_include_subdomains) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "network::mojom::NetworkContext::AddHSTSForTesting");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = true;
  const bool kSerialize = receiver_->PrefersSerializedMessages();
  auto message = NetworkContextProxy_AddHSTSForTesting_Message::Build(
      kSerialize, kExpectsResponse, kIsSync, std::move(param_host), std::move(param_expiry), std::move(param_include_subdomains));

  bool result = false;
  std::unique_ptr<mojo::MessageReceiver> responder(
      new NetworkContext_AddHSTSForTesting_HandleSyncResponse(
          &result));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
  return result;
}

void NetworkContextProxy::AddHSTSForTesting(
    const std::string& in_host, base::Time in_expiry, bool in_include_subdomains, AddHSTSForTestingCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "network::mojom::NetworkContext::AddHSTSForTesting");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  const bool kSerialize = receiver_->PrefersSerializedMessages();
  auto message = NetworkContextProxy_AddHSTSForTesting_Message::Build(
      kSerialize, kExpectsResponse, kIsSync, std::move(in_host), std::move(in_expiry), std::move(in_include_subdomains));
  std::unique_ptr<mojo::MessageReceiver> responder(
      new NetworkContext_AddHSTSForTesting_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class NetworkContextProxy_SetFailingHttpTransactionForTesting_Message
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  explicit NetworkContextProxy_SetFailingHttpTransactionForTesting_Message(
      uint32_t message_flags
      , int32_t param_rv
  )
      : mojo::internal::UnserializedMessageContext(
          &kMessageTag,
          internal::kNetworkContext_SetFailingHttpTransactionForTesting_Name,
          message_flags)
      , param_rv_(std::move(param_rv)){}
  ~NetworkContextProxy_SetFailingHttpTransactionForTesting_Message() override = default;

  static mojo::Message Build(
      bool serialize,
      bool expects_response,
      bool is_sync,
      int32_t param_rv) {

    
  const uint32_t kFlags =
      ((expects_response) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((is_sync) ? mojo::Message::kFlagIsSync : 0);

    if (!serialize) {
      return mojo::Message(std::make_unique<NetworkContextProxy_SetFailingHttpTransactionForTesting_Message>(
          kFlags
          , std::move(param_rv)
          ));
    }

    DCHECK(serialize);
    
  mojo::Message message(
      internal::kNetworkContext_SetFailingHttpTransactionForTesting_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkContext_SetFailingHttpTransactionForTesting_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->rv = param_rv;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
    return message;
  }


  void Dispatch(NetworkContext* impl, NetworkContext::SetFailingHttpTransactionForTestingCallback callback) {
    impl->SetFailingHttpTransactionForTesting(
        std::move(param_rv_), std::move(callback));
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* serialization_context,
                 mojo::internal::Buffer* buffer) override {
    ::network::mojom::internal::NetworkContext_SetFailingHttpTransactionForTesting_Params_Data::BufferWriter
        params;
    params.Allocate(buffer);
  params->rv = param_rv_;
  }
  int32_t param_rv_;

  DISALLOW_COPY_AND_ASSIGN(NetworkContextProxy_SetFailingHttpTransactionForTesting_Message);
};

const mojo::internal::UnserializedMessageContext::Tag
NetworkContextProxy_SetFailingHttpTransactionForTesting_Message::kMessageTag = {};
bool NetworkContextProxy::SetFailingHttpTransactionForTesting(
    int32_t param_rv) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "network::mojom::NetworkContext::SetFailingHttpTransactionForTesting");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = true;
  const bool kSerialize = receiver_->PrefersSerializedMessages();
  auto message = NetworkContextProxy_SetFailingHttpTransactionForTesting_Message::Build(
      kSerialize, kExpectsResponse, kIsSync, std::move(param_rv));

  bool result = false;
  std::unique_ptr<mojo::MessageReceiver> responder(
      new NetworkContext_SetFailingHttpTransactionForTesting_HandleSyncResponse(
          &result));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
  return result;
}

void NetworkContextProxy::SetFailingHttpTransactionForTesting(
    int32_t in_rv, SetFailingHttpTransactionForTestingCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "network::mojom::NetworkContext::SetFailingHttpTransactionForTesting");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  const bool kSerialize = receiver_->PrefersSerializedMessages();
  auto message = NetworkContextProxy_SetFailingHttpTransactionForTesting_Message::Build(
      kSerialize, kExpectsResponse, kIsSync, std::move(in_rv));
  std::unique_ptr<mojo::MessageReceiver> responder(
      new NetworkContext_SetFailingHttpTransactionForTesting_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class NetworkContext_ClearNetworkingHistorySince_ProxyToResponder {
 public:
  static NetworkContext::ClearNetworkingHistorySinceCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<NetworkContext_ClearNetworkingHistorySince_ProxyToResponder> proxy(
        new NetworkContext_ClearNetworkingHistorySince_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&NetworkContext_ClearNetworkingHistorySince_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~NetworkContext_ClearNetworkingHistorySince_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // If we're being destroyed without being run, we want to ensure the
      // binding endpoint has been closed. This checks for that asynchronously.
      // We pass a bound generated callback to handle the response so that any
      // resulting DCHECK stack will have useful interface type information.
      responder_->IsConnectedAsync(base::BindOnce(&OnIsConnectedComplete));
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    responder_ = nullptr;
  }

 private:
  NetworkContext_ClearNetworkingHistorySince_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "NetworkContext::ClearNetworkingHistorySinceCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      );

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(NetworkContext_ClearNetworkingHistorySince_ProxyToResponder);
};
class NetworkContext_ClearNetworkingHistorySince_Response_Message
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  explicit NetworkContext_ClearNetworkingHistorySince_Response_Message(
      uint32_t message_flags
  )
      : mojo::internal::UnserializedMessageContext(
          &kMessageTag,
          internal::kNetworkContext_ClearNetworkingHistorySince_Name,
          message_flags){}
  ~NetworkContext_ClearNetworkingHistorySince_Response_Message() override = default;

  static mojo::Message Build(
      bool serialize,
      bool is_sync) {

    
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync) ? mojo::Message::kFlagIsSync : 0);

    if (!serialize) {
      return mojo::Message(std::make_unique<NetworkContext_ClearNetworkingHistorySince_Response_Message>(
          kFlags
          ));
    }

    DCHECK(serialize);
    
  mojo::Message message(
      internal::kNetworkContext_ClearNetworkingHistorySince_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkContext_ClearNetworkingHistorySince_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
    return message;
  }


  void Dispatch(NetworkContext::ClearNetworkingHistorySinceCallback* callback) {
    std::move(*callback).Run();
  }



 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* serialization_context,
                 mojo::internal::Buffer* buffer) override {
    ::network::mojom::internal::NetworkContext_ClearNetworkingHistorySince_ResponseParams_Data::BufferWriter
        params;
    params.Allocate(buffer);
  }

  DISALLOW_COPY_AND_ASSIGN(NetworkContext_ClearNetworkingHistorySince_Response_Message);
};

const mojo::internal::UnserializedMessageContext::Tag
NetworkContext_ClearNetworkingHistorySince_Response_Message::kMessageTag = {};

bool NetworkContext_ClearNetworkingHistorySince_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "network::mojom::NetworkContext::ClearNetworkingHistorySinceCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);
  if (!message->is_serialized()) {
    auto context =
        message->TakeUnserializedContext<NetworkContext_ClearNetworkingHistorySince_Response_Message>();
    if (!context) {
      // The Message was not of the expected type. It may be a valid message
      // which was build using a different variant of these bindings. Force
      // serialization before dispatch in this case.
      message->SerializeIfNecessary();
    } else {
      if (!callback_.is_null())
        context->Dispatch(&callback_);
      return true;
    }
  }

  DCHECK(message->is_serialized());
  internal::NetworkContext_ClearNetworkingHistorySince_ResponseParams_Data* params =
      reinterpret_cast<
          internal::NetworkContext_ClearNetworkingHistorySince_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  NetworkContext_ClearNetworkingHistorySince_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "NetworkContext::ClearNetworkingHistorySince response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run();
  return true;
}

void NetworkContext_ClearNetworkingHistorySince_ProxyToResponder::Run(
    ) {
  const bool kSerialize = responder_->PrefersSerializedMessages();
  auto message = NetworkContext_ClearNetworkingHistorySince_Response_Message::Build(kSerialize, is_sync_);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)network::mojom::NetworkContext::ClearNetworkingHistorySinceCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class NetworkContext_ClearHttpCache_ProxyToResponder {
 public:
  static NetworkContext::ClearHttpCacheCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<NetworkContext_ClearHttpCache_ProxyToResponder> proxy(
        new NetworkContext_ClearHttpCache_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&NetworkContext_ClearHttpCache_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~NetworkContext_ClearHttpCache_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // If we're being destroyed without being run, we want to ensure the
      // binding endpoint has been closed. This checks for that asynchronously.
      // We pass a bound generated callback to handle the response so that any
      // resulting DCHECK stack will have useful interface type information.
      responder_->IsConnectedAsync(base::BindOnce(&OnIsConnectedComplete));
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    responder_ = nullptr;
  }

 private:
  NetworkContext_ClearHttpCache_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "NetworkContext::ClearHttpCacheCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      );

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(NetworkContext_ClearHttpCache_ProxyToResponder);
};
class NetworkContext_ClearHttpCache_Response_Message
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  explicit NetworkContext_ClearHttpCache_Response_Message(
      uint32_t message_flags
  )
      : mojo::internal::UnserializedMessageContext(
          &kMessageTag,
          internal::kNetworkContext_ClearHttpCache_Name,
          message_flags){}
  ~NetworkContext_ClearHttpCache_Response_Message() override = default;

  static mojo::Message Build(
      bool serialize,
      bool is_sync) {

    
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync) ? mojo::Message::kFlagIsSync : 0);

    if (!serialize) {
      return mojo::Message(std::make_unique<NetworkContext_ClearHttpCache_Response_Message>(
          kFlags
          ));
    }

    DCHECK(serialize);
    
  mojo::Message message(
      internal::kNetworkContext_ClearHttpCache_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkContext_ClearHttpCache_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
    return message;
  }


  void Dispatch(NetworkContext::ClearHttpCacheCallback* callback) {
    std::move(*callback).Run();
  }



 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* serialization_context,
                 mojo::internal::Buffer* buffer) override {
    ::network::mojom::internal::NetworkContext_ClearHttpCache_ResponseParams_Data::BufferWriter
        params;
    params.Allocate(buffer);
  }

  DISALLOW_COPY_AND_ASSIGN(NetworkContext_ClearHttpCache_Response_Message);
};

const mojo::internal::UnserializedMessageContext::Tag
NetworkContext_ClearHttpCache_Response_Message::kMessageTag = {};

bool NetworkContext_ClearHttpCache_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "network::mojom::NetworkContext::ClearHttpCacheCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);
  if (!message->is_serialized()) {
    auto context =
        message->TakeUnserializedContext<NetworkContext_ClearHttpCache_Response_Message>();
    if (!context) {
      // The Message was not of the expected type. It may be a valid message
      // which was build using a different variant of these bindings. Force
      // serialization before dispatch in this case.
      message->SerializeIfNecessary();
    } else {
      if (!callback_.is_null())
        context->Dispatch(&callback_);
      return true;
    }
  }

  DCHECK(message->is_serialized());
  internal::NetworkContext_ClearHttpCache_ResponseParams_Data* params =
      reinterpret_cast<
          internal::NetworkContext_ClearHttpCache_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  NetworkContext_ClearHttpCache_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "NetworkContext::ClearHttpCache response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run();
  return true;
}

void NetworkContext_ClearHttpCache_ProxyToResponder::Run(
    ) {
  const bool kSerialize = responder_->PrefersSerializedMessages();
  auto message = NetworkContext_ClearHttpCache_Response_Message::Build(kSerialize, is_sync_);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)network::mojom::NetworkContext::ClearHttpCacheCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class NetworkContext_ClearChannelIds_ProxyToResponder {
 public:
  static NetworkContext::ClearChannelIdsCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<NetworkContext_ClearChannelIds_ProxyToResponder> proxy(
        new NetworkContext_ClearChannelIds_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&NetworkContext_ClearChannelIds_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~NetworkContext_ClearChannelIds_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // If we're being destroyed without being run, we want to ensure the
      // binding endpoint has been closed. This checks for that asynchronously.
      // We pass a bound generated callback to handle the response so that any
      // resulting DCHECK stack will have useful interface type information.
      responder_->IsConnectedAsync(base::BindOnce(&OnIsConnectedComplete));
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    responder_ = nullptr;
  }

 private:
  NetworkContext_ClearChannelIds_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "NetworkContext::ClearChannelIdsCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      );

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(NetworkContext_ClearChannelIds_ProxyToResponder);
};
class NetworkContext_ClearChannelIds_Response_Message
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  explicit NetworkContext_ClearChannelIds_Response_Message(
      uint32_t message_flags
  )
      : mojo::internal::UnserializedMessageContext(
          &kMessageTag,
          internal::kNetworkContext_ClearChannelIds_Name,
          message_flags){}
  ~NetworkContext_ClearChannelIds_Response_Message() override = default;

  static mojo::Message Build(
      bool serialize,
      bool is_sync) {

    
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync) ? mojo::Message::kFlagIsSync : 0);

    if (!serialize) {
      return mojo::Message(std::make_unique<NetworkContext_ClearChannelIds_Response_Message>(
          kFlags
          ));
    }

    DCHECK(serialize);
    
  mojo::Message message(
      internal::kNetworkContext_ClearChannelIds_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkContext_ClearChannelIds_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
    return message;
  }


  void Dispatch(NetworkContext::ClearChannelIdsCallback* callback) {
    std::move(*callback).Run();
  }



 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* serialization_context,
                 mojo::internal::Buffer* buffer) override {
    ::network::mojom::internal::NetworkContext_ClearChannelIds_ResponseParams_Data::BufferWriter
        params;
    params.Allocate(buffer);
  }

  DISALLOW_COPY_AND_ASSIGN(NetworkContext_ClearChannelIds_Response_Message);
};

const mojo::internal::UnserializedMessageContext::Tag
NetworkContext_ClearChannelIds_Response_Message::kMessageTag = {};

bool NetworkContext_ClearChannelIds_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "network::mojom::NetworkContext::ClearChannelIdsCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);
  if (!message->is_serialized()) {
    auto context =
        message->TakeUnserializedContext<NetworkContext_ClearChannelIds_Response_Message>();
    if (!context) {
      // The Message was not of the expected type. It may be a valid message
      // which was build using a different variant of these bindings. Force
      // serialization before dispatch in this case.
      message->SerializeIfNecessary();
    } else {
      if (!callback_.is_null())
        context->Dispatch(&callback_);
      return true;
    }
  }

  DCHECK(message->is_serialized());
  internal::NetworkContext_ClearChannelIds_ResponseParams_Data* params =
      reinterpret_cast<
          internal::NetworkContext_ClearChannelIds_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  NetworkContext_ClearChannelIds_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "NetworkContext::ClearChannelIds response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run();
  return true;
}

void NetworkContext_ClearChannelIds_ProxyToResponder::Run(
    ) {
  const bool kSerialize = responder_->PrefersSerializedMessages();
  auto message = NetworkContext_ClearChannelIds_Response_Message::Build(kSerialize, is_sync_);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)network::mojom::NetworkContext::ClearChannelIdsCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class NetworkContext_ClearHttpAuthCache_ProxyToResponder {
 public:
  static NetworkContext::ClearHttpAuthCacheCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<NetworkContext_ClearHttpAuthCache_ProxyToResponder> proxy(
        new NetworkContext_ClearHttpAuthCache_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&NetworkContext_ClearHttpAuthCache_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~NetworkContext_ClearHttpAuthCache_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // If we're being destroyed without being run, we want to ensure the
      // binding endpoint has been closed. This checks for that asynchronously.
      // We pass a bound generated callback to handle the response so that any
      // resulting DCHECK stack will have useful interface type information.
      responder_->IsConnectedAsync(base::BindOnce(&OnIsConnectedComplete));
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    responder_ = nullptr;
  }

 private:
  NetworkContext_ClearHttpAuthCache_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "NetworkContext::ClearHttpAuthCacheCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      );

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(NetworkContext_ClearHttpAuthCache_ProxyToResponder);
};
class NetworkContext_ClearHttpAuthCache_Response_Message
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  explicit NetworkContext_ClearHttpAuthCache_Response_Message(
      uint32_t message_flags
  )
      : mojo::internal::UnserializedMessageContext(
          &kMessageTag,
          internal::kNetworkContext_ClearHttpAuthCache_Name,
          message_flags){}
  ~NetworkContext_ClearHttpAuthCache_Response_Message() override = default;

  static mojo::Message Build(
      bool serialize,
      bool is_sync) {

    
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync) ? mojo::Message::kFlagIsSync : 0);

    if (!serialize) {
      return mojo::Message(std::make_unique<NetworkContext_ClearHttpAuthCache_Response_Message>(
          kFlags
          ));
    }

    DCHECK(serialize);
    
  mojo::Message message(
      internal::kNetworkContext_ClearHttpAuthCache_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkContext_ClearHttpAuthCache_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
    return message;
  }


  void Dispatch(NetworkContext::ClearHttpAuthCacheCallback* callback) {
    std::move(*callback).Run();
  }



 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* serialization_context,
                 mojo::internal::Buffer* buffer) override {
    ::network::mojom::internal::NetworkContext_ClearHttpAuthCache_ResponseParams_Data::BufferWriter
        params;
    params.Allocate(buffer);
  }

  DISALLOW_COPY_AND_ASSIGN(NetworkContext_ClearHttpAuthCache_Response_Message);
};

const mojo::internal::UnserializedMessageContext::Tag
NetworkContext_ClearHttpAuthCache_Response_Message::kMessageTag = {};

bool NetworkContext_ClearHttpAuthCache_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "network::mojom::NetworkContext::ClearHttpAuthCacheCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);
  if (!message->is_serialized()) {
    auto context =
        message->TakeUnserializedContext<NetworkContext_ClearHttpAuthCache_Response_Message>();
    if (!context) {
      // The Message was not of the expected type. It may be a valid message
      // which was build using a different variant of these bindings. Force
      // serialization before dispatch in this case.
      message->SerializeIfNecessary();
    } else {
      if (!callback_.is_null())
        context->Dispatch(&callback_);
      return true;
    }
  }

  DCHECK(message->is_serialized());
  internal::NetworkContext_ClearHttpAuthCache_ResponseParams_Data* params =
      reinterpret_cast<
          internal::NetworkContext_ClearHttpAuthCache_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  NetworkContext_ClearHttpAuthCache_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "NetworkContext::ClearHttpAuthCache response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run();
  return true;
}

void NetworkContext_ClearHttpAuthCache_ProxyToResponder::Run(
    ) {
  const bool kSerialize = responder_->PrefersSerializedMessages();
  auto message = NetworkContext_ClearHttpAuthCache_Response_Message::Build(kSerialize, is_sync_);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)network::mojom::NetworkContext::ClearHttpAuthCacheCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class NetworkContext_ClearReportingCacheReports_ProxyToResponder {
 public:
  static NetworkContext::ClearReportingCacheReportsCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<NetworkContext_ClearReportingCacheReports_ProxyToResponder> proxy(
        new NetworkContext_ClearReportingCacheReports_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&NetworkContext_ClearReportingCacheReports_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~NetworkContext_ClearReportingCacheReports_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // If we're being destroyed without being run, we want to ensure the
      // binding endpoint has been closed. This checks for that asynchronously.
      // We pass a bound generated callback to handle the response so that any
      // resulting DCHECK stack will have useful interface type information.
      responder_->IsConnectedAsync(base::BindOnce(&OnIsConnectedComplete));
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    responder_ = nullptr;
  }

 private:
  NetworkContext_ClearReportingCacheReports_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "NetworkContext::ClearReportingCacheReportsCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      );

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(NetworkContext_ClearReportingCacheReports_ProxyToResponder);
};
class NetworkContext_ClearReportingCacheReports_Response_Message
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  explicit NetworkContext_ClearReportingCacheReports_Response_Message(
      uint32_t message_flags
  )
      : mojo::internal::UnserializedMessageContext(
          &kMessageTag,
          internal::kNetworkContext_ClearReportingCacheReports_Name,
          message_flags){}
  ~NetworkContext_ClearReportingCacheReports_Response_Message() override = default;

  static mojo::Message Build(
      bool serialize,
      bool is_sync) {

    
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync) ? mojo::Message::kFlagIsSync : 0);

    if (!serialize) {
      return mojo::Message(std::make_unique<NetworkContext_ClearReportingCacheReports_Response_Message>(
          kFlags
          ));
    }

    DCHECK(serialize);
    
  mojo::Message message(
      internal::kNetworkContext_ClearReportingCacheReports_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkContext_ClearReportingCacheReports_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
    return message;
  }


  void Dispatch(NetworkContext::ClearReportingCacheReportsCallback* callback) {
    std::move(*callback).Run();
  }



 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* serialization_context,
                 mojo::internal::Buffer* buffer) override {
    ::network::mojom::internal::NetworkContext_ClearReportingCacheReports_ResponseParams_Data::BufferWriter
        params;
    params.Allocate(buffer);
  }

  DISALLOW_COPY_AND_ASSIGN(NetworkContext_ClearReportingCacheReports_Response_Message);
};

const mojo::internal::UnserializedMessageContext::Tag
NetworkContext_ClearReportingCacheReports_Response_Message::kMessageTag = {};

bool NetworkContext_ClearReportingCacheReports_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "network::mojom::NetworkContext::ClearReportingCacheReportsCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);
  if (!message->is_serialized()) {
    auto context =
        message->TakeUnserializedContext<NetworkContext_ClearReportingCacheReports_Response_Message>();
    if (!context) {
      // The Message was not of the expected type. It may be a valid message
      // which was build using a different variant of these bindings. Force
      // serialization before dispatch in this case.
      message->SerializeIfNecessary();
    } else {
      if (!callback_.is_null())
        context->Dispatch(&callback_);
      return true;
    }
  }

  DCHECK(message->is_serialized());
  internal::NetworkContext_ClearReportingCacheReports_ResponseParams_Data* params =
      reinterpret_cast<
          internal::NetworkContext_ClearReportingCacheReports_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  NetworkContext_ClearReportingCacheReports_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "NetworkContext::ClearReportingCacheReports response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run();
  return true;
}

void NetworkContext_ClearReportingCacheReports_ProxyToResponder::Run(
    ) {
  const bool kSerialize = responder_->PrefersSerializedMessages();
  auto message = NetworkContext_ClearReportingCacheReports_Response_Message::Build(kSerialize, is_sync_);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)network::mojom::NetworkContext::ClearReportingCacheReportsCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class NetworkContext_ClearReportingCacheClients_ProxyToResponder {
 public:
  static NetworkContext::ClearReportingCacheClientsCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<NetworkContext_ClearReportingCacheClients_ProxyToResponder> proxy(
        new NetworkContext_ClearReportingCacheClients_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&NetworkContext_ClearReportingCacheClients_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~NetworkContext_ClearReportingCacheClients_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // If we're being destroyed without being run, we want to ensure the
      // binding endpoint has been closed. This checks for that asynchronously.
      // We pass a bound generated callback to handle the response so that any
      // resulting DCHECK stack will have useful interface type information.
      responder_->IsConnectedAsync(base::BindOnce(&OnIsConnectedComplete));
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    responder_ = nullptr;
  }

 private:
  NetworkContext_ClearReportingCacheClients_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "NetworkContext::ClearReportingCacheClientsCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      );

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(NetworkContext_ClearReportingCacheClients_ProxyToResponder);
};
class NetworkContext_ClearReportingCacheClients_Response_Message
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  explicit NetworkContext_ClearReportingCacheClients_Response_Message(
      uint32_t message_flags
  )
      : mojo::internal::UnserializedMessageContext(
          &kMessageTag,
          internal::kNetworkContext_ClearReportingCacheClients_Name,
          message_flags){}
  ~NetworkContext_ClearReportingCacheClients_Response_Message() override = default;

  static mojo::Message Build(
      bool serialize,
      bool is_sync) {

    
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync) ? mojo::Message::kFlagIsSync : 0);

    if (!serialize) {
      return mojo::Message(std::make_unique<NetworkContext_ClearReportingCacheClients_Response_Message>(
          kFlags
          ));
    }

    DCHECK(serialize);
    
  mojo::Message message(
      internal::kNetworkContext_ClearReportingCacheClients_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkContext_ClearReportingCacheClients_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
    return message;
  }


  void Dispatch(NetworkContext::ClearReportingCacheClientsCallback* callback) {
    std::move(*callback).Run();
  }



 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* serialization_context,
                 mojo::internal::Buffer* buffer) override {
    ::network::mojom::internal::NetworkContext_ClearReportingCacheClients_ResponseParams_Data::BufferWriter
        params;
    params.Allocate(buffer);
  }

  DISALLOW_COPY_AND_ASSIGN(NetworkContext_ClearReportingCacheClients_Response_Message);
};

const mojo::internal::UnserializedMessageContext::Tag
NetworkContext_ClearReportingCacheClients_Response_Message::kMessageTag = {};

bool NetworkContext_ClearReportingCacheClients_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "network::mojom::NetworkContext::ClearReportingCacheClientsCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);
  if (!message->is_serialized()) {
    auto context =
        message->TakeUnserializedContext<NetworkContext_ClearReportingCacheClients_Response_Message>();
    if (!context) {
      // The Message was not of the expected type. It may be a valid message
      // which was build using a different variant of these bindings. Force
      // serialization before dispatch in this case.
      message->SerializeIfNecessary();
    } else {
      if (!callback_.is_null())
        context->Dispatch(&callback_);
      return true;
    }
  }

  DCHECK(message->is_serialized());
  internal::NetworkContext_ClearReportingCacheClients_ResponseParams_Data* params =
      reinterpret_cast<
          internal::NetworkContext_ClearReportingCacheClients_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  NetworkContext_ClearReportingCacheClients_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "NetworkContext::ClearReportingCacheClients response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run();
  return true;
}

void NetworkContext_ClearReportingCacheClients_ProxyToResponder::Run(
    ) {
  const bool kSerialize = responder_->PrefersSerializedMessages();
  auto message = NetworkContext_ClearReportingCacheClients_Response_Message::Build(kSerialize, is_sync_);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)network::mojom::NetworkContext::ClearReportingCacheClientsCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class NetworkContext_ClearNetworkErrorLogging_ProxyToResponder {
 public:
  static NetworkContext::ClearNetworkErrorLoggingCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<NetworkContext_ClearNetworkErrorLogging_ProxyToResponder> proxy(
        new NetworkContext_ClearNetworkErrorLogging_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&NetworkContext_ClearNetworkErrorLogging_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~NetworkContext_ClearNetworkErrorLogging_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // If we're being destroyed without being run, we want to ensure the
      // binding endpoint has been closed. This checks for that asynchronously.
      // We pass a bound generated callback to handle the response so that any
      // resulting DCHECK stack will have useful interface type information.
      responder_->IsConnectedAsync(base::BindOnce(&OnIsConnectedComplete));
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    responder_ = nullptr;
  }

 private:
  NetworkContext_ClearNetworkErrorLogging_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "NetworkContext::ClearNetworkErrorLoggingCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      );

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(NetworkContext_ClearNetworkErrorLogging_ProxyToResponder);
};
class NetworkContext_ClearNetworkErrorLogging_Response_Message
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  explicit NetworkContext_ClearNetworkErrorLogging_Response_Message(
      uint32_t message_flags
  )
      : mojo::internal::UnserializedMessageContext(
          &kMessageTag,
          internal::kNetworkContext_ClearNetworkErrorLogging_Name,
          message_flags){}
  ~NetworkContext_ClearNetworkErrorLogging_Response_Message() override = default;

  static mojo::Message Build(
      bool serialize,
      bool is_sync) {

    
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync) ? mojo::Message::kFlagIsSync : 0);

    if (!serialize) {
      return mojo::Message(std::make_unique<NetworkContext_ClearNetworkErrorLogging_Response_Message>(
          kFlags
          ));
    }

    DCHECK(serialize);
    
  mojo::Message message(
      internal::kNetworkContext_ClearNetworkErrorLogging_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkContext_ClearNetworkErrorLogging_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
    return message;
  }


  void Dispatch(NetworkContext::ClearNetworkErrorLoggingCallback* callback) {
    std::move(*callback).Run();
  }



 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* serialization_context,
                 mojo::internal::Buffer* buffer) override {
    ::network::mojom::internal::NetworkContext_ClearNetworkErrorLogging_ResponseParams_Data::BufferWriter
        params;
    params.Allocate(buffer);
  }

  DISALLOW_COPY_AND_ASSIGN(NetworkContext_ClearNetworkErrorLogging_Response_Message);
};

const mojo::internal::UnserializedMessageContext::Tag
NetworkContext_ClearNetworkErrorLogging_Response_Message::kMessageTag = {};

bool NetworkContext_ClearNetworkErrorLogging_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "network::mojom::NetworkContext::ClearNetworkErrorLoggingCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);
  if (!message->is_serialized()) {
    auto context =
        message->TakeUnserializedContext<NetworkContext_ClearNetworkErrorLogging_Response_Message>();
    if (!context) {
      // The Message was not of the expected type. It may be a valid message
      // which was build using a different variant of these bindings. Force
      // serialization before dispatch in this case.
      message->SerializeIfNecessary();
    } else {
      if (!callback_.is_null())
        context->Dispatch(&callback_);
      return true;
    }
  }

  DCHECK(message->is_serialized());
  internal::NetworkContext_ClearNetworkErrorLogging_ResponseParams_Data* params =
      reinterpret_cast<
          internal::NetworkContext_ClearNetworkErrorLogging_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  NetworkContext_ClearNetworkErrorLogging_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "NetworkContext::ClearNetworkErrorLogging response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run();
  return true;
}

void NetworkContext_ClearNetworkErrorLogging_ProxyToResponder::Run(
    ) {
  const bool kSerialize = responder_->PrefersSerializedMessages();
  auto message = NetworkContext_ClearNetworkErrorLogging_Response_Message::Build(kSerialize, is_sync_);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)network::mojom::NetworkContext::ClearNetworkErrorLoggingCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class NetworkContext_CreateTCPServerSocket_ProxyToResponder {
 public:
  static NetworkContext::CreateTCPServerSocketCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<NetworkContext_CreateTCPServerSocket_ProxyToResponder> proxy(
        new NetworkContext_CreateTCPServerSocket_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&NetworkContext_CreateTCPServerSocket_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~NetworkContext_CreateTCPServerSocket_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // If we're being destroyed without being run, we want to ensure the
      // binding endpoint has been closed. This checks for that asynchronously.
      // We pass a bound generated callback to handle the response so that any
      // resulting DCHECK stack will have useful interface type information.
      responder_->IsConnectedAsync(base::BindOnce(&OnIsConnectedComplete));
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    responder_ = nullptr;
  }

 private:
  NetworkContext_CreateTCPServerSocket_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "NetworkContext::CreateTCPServerSocketCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      int32_t in_result, const base::Optional<net::IPEndPoint>& in_local_addr_out);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(NetworkContext_CreateTCPServerSocket_ProxyToResponder);
};
class NetworkContext_CreateTCPServerSocket_Response_Message
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  explicit NetworkContext_CreateTCPServerSocket_Response_Message(
      uint32_t message_flags
      , int32_t param_result
      , const base::Optional<net::IPEndPoint>& param_local_addr_out
  )
      : mojo::internal::UnserializedMessageContext(
          &kMessageTag,
          internal::kNetworkContext_CreateTCPServerSocket_Name,
          message_flags)
      , param_result_(std::move(param_result))
      , param_local_addr_out_(std::move(param_local_addr_out)){}
  ~NetworkContext_CreateTCPServerSocket_Response_Message() override = default;

  static mojo::Message Build(
      bool serialize,
      bool is_sync,
      int32_t param_result, const base::Optional<net::IPEndPoint>& param_local_addr_out) {

    
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync) ? mojo::Message::kFlagIsSync : 0);

    if (!serialize) {
      return mojo::Message(std::make_unique<NetworkContext_CreateTCPServerSocket_Response_Message>(
          kFlags
          , std::move(param_result)
          , std::move(param_local_addr_out)
          ));
    }

    DCHECK(serialize);
    
  mojo::Message message(
      internal::kNetworkContext_CreateTCPServerSocket_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkContext_CreateTCPServerSocket_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->result = param_result;
  typename decltype(params->local_addr_out)::BaseType::BufferWriter
      local_addr_out_writer;
  mojo::internal::Serialize<::net::interfaces::IPEndPointDataView>(
      param_local_addr_out, buffer, &local_addr_out_writer, &serialization_context);
  params->local_addr_out.Set(
      local_addr_out_writer.is_null() ? nullptr : local_addr_out_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
    return message;
  }


  void Dispatch(NetworkContext::CreateTCPServerSocketCallback* callback) {
    std::move(*callback).Run(
        std::move(param_result_), 
        std::move(param_local_addr_out_));
  }



 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* serialization_context,
                 mojo::internal::Buffer* buffer) override {
    ::network::mojom::internal::NetworkContext_CreateTCPServerSocket_ResponseParams_Data::BufferWriter
        params;
    params.Allocate(buffer);
  params->result = param_result_;
  typename decltype(params->local_addr_out)::BaseType::BufferWriter
      local_addr_out_writer;
  mojo::internal::Serialize<::net::interfaces::IPEndPointDataView>(
      param_local_addr_out_, buffer, &local_addr_out_writer, serialization_context);
  params->local_addr_out.Set(
      local_addr_out_writer.is_null() ? nullptr : local_addr_out_writer.data());
  }
  int32_t param_result_;
  base::Optional<net::IPEndPoint> param_local_addr_out_;

  DISALLOW_COPY_AND_ASSIGN(NetworkContext_CreateTCPServerSocket_Response_Message);
};

const mojo::internal::UnserializedMessageContext::Tag
NetworkContext_CreateTCPServerSocket_Response_Message::kMessageTag = {};

bool NetworkContext_CreateTCPServerSocket_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "network::mojom::NetworkContext::CreateTCPServerSocketCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);
  if (!message->is_serialized()) {
    auto context =
        message->TakeUnserializedContext<NetworkContext_CreateTCPServerSocket_Response_Message>();
    if (!context) {
      // The Message was not of the expected type. It may be a valid message
      // which was build using a different variant of these bindings. Force
      // serialization before dispatch in this case.
      message->SerializeIfNecessary();
    } else {
      if (!callback_.is_null())
        context->Dispatch(&callback_);
      return true;
    }
  }

  DCHECK(message->is_serialized());
  internal::NetworkContext_CreateTCPServerSocket_ResponseParams_Data* params =
      reinterpret_cast<
          internal::NetworkContext_CreateTCPServerSocket_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  int32_t p_result{};
  base::Optional<net::IPEndPoint> p_local_addr_out{};
  NetworkContext_CreateTCPServerSocket_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_result = input_data_view.result();
  if (!input_data_view.ReadLocalAddrOut(&p_local_addr_out))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "NetworkContext::CreateTCPServerSocket response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_result), 
std::move(p_local_addr_out));
  return true;
}

void NetworkContext_CreateTCPServerSocket_ProxyToResponder::Run(
    int32_t in_result, const base::Optional<net::IPEndPoint>& in_local_addr_out) {
  const bool kSerialize = responder_->PrefersSerializedMessages();
  auto message = NetworkContext_CreateTCPServerSocket_Response_Message::Build(kSerialize, is_sync_, std::move(in_result), std::move(in_local_addr_out));

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)network::mojom::NetworkContext::CreateTCPServerSocketCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class NetworkContext_CreateTCPConnectedSocket_ProxyToResponder {
 public:
  static NetworkContext::CreateTCPConnectedSocketCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<NetworkContext_CreateTCPConnectedSocket_ProxyToResponder> proxy(
        new NetworkContext_CreateTCPConnectedSocket_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&NetworkContext_CreateTCPConnectedSocket_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~NetworkContext_CreateTCPConnectedSocket_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // If we're being destroyed without being run, we want to ensure the
      // binding endpoint has been closed. This checks for that asynchronously.
      // We pass a bound generated callback to handle the response so that any
      // resulting DCHECK stack will have useful interface type information.
      responder_->IsConnectedAsync(base::BindOnce(&OnIsConnectedComplete));
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    responder_ = nullptr;
  }

 private:
  NetworkContext_CreateTCPConnectedSocket_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "NetworkContext::CreateTCPConnectedSocketCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      int32_t in_result, mojo::ScopedDataPipeConsumerHandle in_receive_stream, mojo::ScopedDataPipeProducerHandle in_send_stream);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(NetworkContext_CreateTCPConnectedSocket_ProxyToResponder);
};
class NetworkContext_CreateTCPConnectedSocket_Response_Message
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  explicit NetworkContext_CreateTCPConnectedSocket_Response_Message(
      uint32_t message_flags
      , int32_t param_result
      , mojo::ScopedDataPipeConsumerHandle param_receive_stream
      , mojo::ScopedDataPipeProducerHandle param_send_stream
  )
      : mojo::internal::UnserializedMessageContext(
          &kMessageTag,
          internal::kNetworkContext_CreateTCPConnectedSocket_Name,
          message_flags)
      , param_result_(std::move(param_result))
      , param_receive_stream_(std::move(param_receive_stream))
      , param_send_stream_(std::move(param_send_stream)){}
  ~NetworkContext_CreateTCPConnectedSocket_Response_Message() override = default;

  static mojo::Message Build(
      bool serialize,
      bool is_sync,
      int32_t param_result, mojo::ScopedDataPipeConsumerHandle param_receive_stream, mojo::ScopedDataPipeProducerHandle param_send_stream) {

    
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync) ? mojo::Message::kFlagIsSync : 0);

    if (!serialize) {
      return mojo::Message(std::make_unique<NetworkContext_CreateTCPConnectedSocket_Response_Message>(
          kFlags
          , std::move(param_result)
          , std::move(param_receive_stream)
          , std::move(param_send_stream)
          ));
    }

    DCHECK(serialize);
    
  mojo::Message message(
      internal::kNetworkContext_CreateTCPConnectedSocket_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkContext_CreateTCPConnectedSocket_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->result = param_result;
  mojo::internal::Serialize<mojo::ScopedDataPipeConsumerHandle>(
      param_receive_stream, &params->receive_stream, &serialization_context);
  mojo::internal::Serialize<mojo::ScopedDataPipeProducerHandle>(
      param_send_stream, &params->send_stream, &serialization_context);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
    return message;
  }


  void Dispatch(NetworkContext::CreateTCPConnectedSocketCallback* callback) {
    std::move(*callback).Run(
        std::move(param_result_), 
        std::move(param_receive_stream_), 
        std::move(param_send_stream_));
  }



 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* serialization_context,
                 mojo::internal::Buffer* buffer) override {
    ::network::mojom::internal::NetworkContext_CreateTCPConnectedSocket_ResponseParams_Data::BufferWriter
        params;
    params.Allocate(buffer);
  params->result = param_result_;
  mojo::internal::Serialize<mojo::ScopedDataPipeConsumerHandle>(
      param_receive_stream_, &params->receive_stream, serialization_context);
  mojo::internal::Serialize<mojo::ScopedDataPipeProducerHandle>(
      param_send_stream_, &params->send_stream, serialization_context);
  }
  int32_t param_result_;
  mojo::ScopedDataPipeConsumerHandle param_receive_stream_;
  mojo::ScopedDataPipeProducerHandle param_send_stream_;

  DISALLOW_COPY_AND_ASSIGN(NetworkContext_CreateTCPConnectedSocket_Response_Message);
};

const mojo::internal::UnserializedMessageContext::Tag
NetworkContext_CreateTCPConnectedSocket_Response_Message::kMessageTag = {};

bool NetworkContext_CreateTCPConnectedSocket_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "network::mojom::NetworkContext::CreateTCPConnectedSocketCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);
  if (!message->is_serialized()) {
    auto context =
        message->TakeUnserializedContext<NetworkContext_CreateTCPConnectedSocket_Response_Message>();
    if (!context) {
      // The Message was not of the expected type. It may be a valid message
      // which was build using a different variant of these bindings. Force
      // serialization before dispatch in this case.
      message->SerializeIfNecessary();
    } else {
      if (!callback_.is_null())
        context->Dispatch(&callback_);
      return true;
    }
  }

  DCHECK(message->is_serialized());
  internal::NetworkContext_CreateTCPConnectedSocket_ResponseParams_Data* params =
      reinterpret_cast<
          internal::NetworkContext_CreateTCPConnectedSocket_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  int32_t p_result{};
  mojo::ScopedDataPipeConsumerHandle p_receive_stream{};
  mojo::ScopedDataPipeProducerHandle p_send_stream{};
  NetworkContext_CreateTCPConnectedSocket_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_result = input_data_view.result();
  p_receive_stream = input_data_view.TakeReceiveStream();
  p_send_stream = input_data_view.TakeSendStream();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "NetworkContext::CreateTCPConnectedSocket response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_result), 
std::move(p_receive_stream), 
std::move(p_send_stream));
  return true;
}

void NetworkContext_CreateTCPConnectedSocket_ProxyToResponder::Run(
    int32_t in_result, mojo::ScopedDataPipeConsumerHandle in_receive_stream, mojo::ScopedDataPipeProducerHandle in_send_stream) {
  const bool kSerialize = responder_->PrefersSerializedMessages();
  auto message = NetworkContext_CreateTCPConnectedSocket_Response_Message::Build(kSerialize, is_sync_, std::move(in_result), std::move(in_receive_stream), std::move(in_send_stream));

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)network::mojom::NetworkContext::CreateTCPConnectedSocketCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class NetworkContext_AddHSTSForTesting_ProxyToResponder {
 public:
  static NetworkContext::AddHSTSForTestingCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<NetworkContext_AddHSTSForTesting_ProxyToResponder> proxy(
        new NetworkContext_AddHSTSForTesting_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&NetworkContext_AddHSTSForTesting_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~NetworkContext_AddHSTSForTesting_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // If we're being destroyed without being run, we want to ensure the
      // binding endpoint has been closed. This checks for that asynchronously.
      // We pass a bound generated callback to handle the response so that any
      // resulting DCHECK stack will have useful interface type information.
      responder_->IsConnectedAsync(base::BindOnce(&OnIsConnectedComplete));
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    responder_ = nullptr;
  }

 private:
  NetworkContext_AddHSTSForTesting_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "NetworkContext::AddHSTSForTestingCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      );

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(NetworkContext_AddHSTSForTesting_ProxyToResponder);
};
class NetworkContext_AddHSTSForTesting_Response_Message
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  explicit NetworkContext_AddHSTSForTesting_Response_Message(
      uint32_t message_flags
  )
      : mojo::internal::UnserializedMessageContext(
          &kMessageTag,
          internal::kNetworkContext_AddHSTSForTesting_Name,
          message_flags){}
  ~NetworkContext_AddHSTSForTesting_Response_Message() override = default;

  static mojo::Message Build(
      bool serialize,
      bool is_sync) {

    
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync) ? mojo::Message::kFlagIsSync : 0);

    if (!serialize) {
      return mojo::Message(std::make_unique<NetworkContext_AddHSTSForTesting_Response_Message>(
          kFlags
          ));
    }

    DCHECK(serialize);
    
  mojo::Message message(
      internal::kNetworkContext_AddHSTSForTesting_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkContext_AddHSTSForTesting_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
    return message;
  }


  void Dispatch(NetworkContext::AddHSTSForTestingCallback* callback) {
    std::move(*callback).Run();
  }


  void HandleSyncResponse(
) {

  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* serialization_context,
                 mojo::internal::Buffer* buffer) override {
    ::network::mojom::internal::NetworkContext_AddHSTSForTesting_ResponseParams_Data::BufferWriter
        params;
    params.Allocate(buffer);
  }

  DISALLOW_COPY_AND_ASSIGN(NetworkContext_AddHSTSForTesting_Response_Message);
};

const mojo::internal::UnserializedMessageContext::Tag
NetworkContext_AddHSTSForTesting_Response_Message::kMessageTag = {};

bool NetworkContext_AddHSTSForTesting_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "network::mojom::NetworkContext::AddHSTSForTestingCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);
  if (!message->is_serialized()) {
    auto context =
        message->TakeUnserializedContext<NetworkContext_AddHSTSForTesting_Response_Message>();
    if (!context) {
      // The Message was not of the expected type. It may be a valid message
      // which was build using a different variant of these bindings. Force
      // serialization before dispatch in this case.
      message->SerializeIfNecessary();
    } else {
      if (!callback_.is_null())
        context->Dispatch(&callback_);
      return true;
    }
  }

  DCHECK(message->is_serialized());
  internal::NetworkContext_AddHSTSForTesting_ResponseParams_Data* params =
      reinterpret_cast<
          internal::NetworkContext_AddHSTSForTesting_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  NetworkContext_AddHSTSForTesting_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "NetworkContext::AddHSTSForTesting response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run();
  return true;
}

void NetworkContext_AddHSTSForTesting_ProxyToResponder::Run(
    ) {
  const bool kSerialize = responder_->PrefersSerializedMessages();
  auto message = NetworkContext_AddHSTSForTesting_Response_Message::Build(kSerialize, is_sync_);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)network::mojom::NetworkContext::AddHSTSForTestingCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
bool NetworkContext_AddHSTSForTesting_HandleSyncResponse::Accept(
    mojo::Message* message) {
  if (!message->is_serialized()) {
    auto context =
        message->TakeUnserializedContext<NetworkContext_AddHSTSForTesting_Response_Message>();
    if (!context) {
      // The Message was not of the expected type. It may be a valid message
      // which was built using a different variant of these bindings. Force
      // serialization before dispatch in this case.
      message->SerializeIfNecessary();
    } else {
      context->HandleSyncResponse();
      *result_ = true;
      mojo::internal::SyncMessageResponseSetup::SetCurrentSyncResponseMessage(
          message);
      return true;
    }
  }

  DCHECK(message->is_serialized());
  internal::NetworkContext_AddHSTSForTesting_ResponseParams_Data* params =
      reinterpret_cast<internal::NetworkContext_AddHSTSForTesting_ResponseParams_Data*>(
          message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  NetworkContext_AddHSTSForTesting_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "NetworkContext::AddHSTSForTesting response deserializer");
    return false;
  }
  mojo::internal::SyncMessageResponseSetup::SetCurrentSyncResponseMessage(
      message);
  *result_ = true;
  return true;
}
class NetworkContext_SetFailingHttpTransactionForTesting_ProxyToResponder {
 public:
  static NetworkContext::SetFailingHttpTransactionForTestingCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<NetworkContext_SetFailingHttpTransactionForTesting_ProxyToResponder> proxy(
        new NetworkContext_SetFailingHttpTransactionForTesting_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&NetworkContext_SetFailingHttpTransactionForTesting_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~NetworkContext_SetFailingHttpTransactionForTesting_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // If we're being destroyed without being run, we want to ensure the
      // binding endpoint has been closed. This checks for that asynchronously.
      // We pass a bound generated callback to handle the response so that any
      // resulting DCHECK stack will have useful interface type information.
      responder_->IsConnectedAsync(base::BindOnce(&OnIsConnectedComplete));
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    responder_ = nullptr;
  }

 private:
  NetworkContext_SetFailingHttpTransactionForTesting_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "NetworkContext::SetFailingHttpTransactionForTestingCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      );

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(NetworkContext_SetFailingHttpTransactionForTesting_ProxyToResponder);
};
class NetworkContext_SetFailingHttpTransactionForTesting_Response_Message
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  explicit NetworkContext_SetFailingHttpTransactionForTesting_Response_Message(
      uint32_t message_flags
  )
      : mojo::internal::UnserializedMessageContext(
          &kMessageTag,
          internal::kNetworkContext_SetFailingHttpTransactionForTesting_Name,
          message_flags){}
  ~NetworkContext_SetFailingHttpTransactionForTesting_Response_Message() override = default;

  static mojo::Message Build(
      bool serialize,
      bool is_sync) {

    
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync) ? mojo::Message::kFlagIsSync : 0);

    if (!serialize) {
      return mojo::Message(std::make_unique<NetworkContext_SetFailingHttpTransactionForTesting_Response_Message>(
          kFlags
          ));
    }

    DCHECK(serialize);
    
  mojo::Message message(
      internal::kNetworkContext_SetFailingHttpTransactionForTesting_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkContext_SetFailingHttpTransactionForTesting_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
    return message;
  }


  void Dispatch(NetworkContext::SetFailingHttpTransactionForTestingCallback* callback) {
    std::move(*callback).Run();
  }


  void HandleSyncResponse(
) {

  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* serialization_context,
                 mojo::internal::Buffer* buffer) override {
    ::network::mojom::internal::NetworkContext_SetFailingHttpTransactionForTesting_ResponseParams_Data::BufferWriter
        params;
    params.Allocate(buffer);
  }

  DISALLOW_COPY_AND_ASSIGN(NetworkContext_SetFailingHttpTransactionForTesting_Response_Message);
};

const mojo::internal::UnserializedMessageContext::Tag
NetworkContext_SetFailingHttpTransactionForTesting_Response_Message::kMessageTag = {};

bool NetworkContext_SetFailingHttpTransactionForTesting_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "network::mojom::NetworkContext::SetFailingHttpTransactionForTestingCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);
  if (!message->is_serialized()) {
    auto context =
        message->TakeUnserializedContext<NetworkContext_SetFailingHttpTransactionForTesting_Response_Message>();
    if (!context) {
      // The Message was not of the expected type. It may be a valid message
      // which was build using a different variant of these bindings. Force
      // serialization before dispatch in this case.
      message->SerializeIfNecessary();
    } else {
      if (!callback_.is_null())
        context->Dispatch(&callback_);
      return true;
    }
  }

  DCHECK(message->is_serialized());
  internal::NetworkContext_SetFailingHttpTransactionForTesting_ResponseParams_Data* params =
      reinterpret_cast<
          internal::NetworkContext_SetFailingHttpTransactionForTesting_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  NetworkContext_SetFailingHttpTransactionForTesting_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "NetworkContext::SetFailingHttpTransactionForTesting response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run();
  return true;
}

void NetworkContext_SetFailingHttpTransactionForTesting_ProxyToResponder::Run(
    ) {
  const bool kSerialize = responder_->PrefersSerializedMessages();
  auto message = NetworkContext_SetFailingHttpTransactionForTesting_Response_Message::Build(kSerialize, is_sync_);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)network::mojom::NetworkContext::SetFailingHttpTransactionForTestingCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
bool NetworkContext_SetFailingHttpTransactionForTesting_HandleSyncResponse::Accept(
    mojo::Message* message) {
  if (!message->is_serialized()) {
    auto context =
        message->TakeUnserializedContext<NetworkContext_SetFailingHttpTransactionForTesting_Response_Message>();
    if (!context) {
      // The Message was not of the expected type. It may be a valid message
      // which was built using a different variant of these bindings. Force
      // serialization before dispatch in this case.
      message->SerializeIfNecessary();
    } else {
      context->HandleSyncResponse();
      *result_ = true;
      mojo::internal::SyncMessageResponseSetup::SetCurrentSyncResponseMessage(
          message);
      return true;
    }
  }

  DCHECK(message->is_serialized());
  internal::NetworkContext_SetFailingHttpTransactionForTesting_ResponseParams_Data* params =
      reinterpret_cast<internal::NetworkContext_SetFailingHttpTransactionForTesting_ResponseParams_Data*>(
          message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  NetworkContext_SetFailingHttpTransactionForTesting_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "NetworkContext::SetFailingHttpTransactionForTesting response deserializer");
    return false;
  }
  mojo::internal::SyncMessageResponseSetup::SetCurrentSyncResponseMessage(
      message);
  *result_ = true;
  return true;
}

// static
bool NetworkContextStubDispatch::Accept(
    NetworkContext* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kNetworkContext_CreateURLLoaderFactory_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)network::mojom::NetworkContext::CreateURLLoaderFactory",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);
      if (!message->is_serialized()) {
        auto context = message->TakeUnserializedContext<
            NetworkContextProxy_CreateURLLoaderFactory_Message>();
        if (!context) {
          // The Message was not of the expected type. It may be a valid message
          // which was serialized using a different variant of these bindings.
          // Force serialization before dispatch in this case.
          message->SerializeIfNecessary();
        } else {
          context->Dispatch(impl);
          return true;
        }
      }

      DCHECK(message->is_serialized());
      internal::NetworkContext_CreateURLLoaderFactory_Params_Data* params =
          reinterpret_cast<internal::NetworkContext_CreateURLLoaderFactory_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::network::mojom::URLLoaderFactoryRequest p_url_loader_factory{};
      URLLoaderFactoryParamsPtr p_params{};
      NetworkContext_CreateURLLoaderFactory_ParamsDataView input_data_view(params, &serialization_context);
      
      p_url_loader_factory =
          input_data_view.TakeUrlLoaderFactory<decltype(p_url_loader_factory)>();
      if (!input_data_view.ReadParams(&p_params))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "NetworkContext::CreateURLLoaderFactory deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->CreateURLLoaderFactory(
std::move(p_url_loader_factory), 
std::move(p_params));
      return true;
    }
    case internal::kNetworkContext_GetCookieManager_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)network::mojom::NetworkContext::GetCookieManager",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);
      if (!message->is_serialized()) {
        auto context = message->TakeUnserializedContext<
            NetworkContextProxy_GetCookieManager_Message>();
        if (!context) {
          // The Message was not of the expected type. It may be a valid message
          // which was serialized using a different variant of these bindings.
          // Force serialization before dispatch in this case.
          message->SerializeIfNecessary();
        } else {
          context->Dispatch(impl);
          return true;
        }
      }

      DCHECK(message->is_serialized());
      internal::NetworkContext_GetCookieManager_Params_Data* params =
          reinterpret_cast<internal::NetworkContext_GetCookieManager_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::network::mojom::CookieManagerRequest p_cookie_manager{};
      NetworkContext_GetCookieManager_ParamsDataView input_data_view(params, &serialization_context);
      
      p_cookie_manager =
          input_data_view.TakeCookieManager<decltype(p_cookie_manager)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "NetworkContext::GetCookieManager deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->GetCookieManager(
std::move(p_cookie_manager));
      return true;
    }
    case internal::kNetworkContext_GetRestrictedCookieManager_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)network::mojom::NetworkContext::GetRestrictedCookieManager",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);
      if (!message->is_serialized()) {
        auto context = message->TakeUnserializedContext<
            NetworkContextProxy_GetRestrictedCookieManager_Message>();
        if (!context) {
          // The Message was not of the expected type. It may be a valid message
          // which was serialized using a different variant of these bindings.
          // Force serialization before dispatch in this case.
          message->SerializeIfNecessary();
        } else {
          context->Dispatch(impl);
          return true;
        }
      }

      DCHECK(message->is_serialized());
      internal::NetworkContext_GetRestrictedCookieManager_Params_Data* params =
          reinterpret_cast<internal::NetworkContext_GetRestrictedCookieManager_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::network::mojom::RestrictedCookieManagerRequest p_restricted_cookie_manager{};
      int32_t p_render_process_id{};
      int32_t p_render_frame_id{};
      NetworkContext_GetRestrictedCookieManager_ParamsDataView input_data_view(params, &serialization_context);
      
      p_restricted_cookie_manager =
          input_data_view.TakeRestrictedCookieManager<decltype(p_restricted_cookie_manager)>();
      p_render_process_id = input_data_view.render_process_id();
      p_render_frame_id = input_data_view.render_frame_id();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "NetworkContext::GetRestrictedCookieManager deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->GetRestrictedCookieManager(
std::move(p_restricted_cookie_manager), 
std::move(p_render_process_id), 
std::move(p_render_frame_id));
      return true;
    }
    case internal::kNetworkContext_ClearNetworkingHistorySince_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)network::mojom::NetworkContext::ClearNetworkingHistorySince",
               "message", message->name());
#endif
      break;
    }
    case internal::kNetworkContext_ClearHttpCache_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)network::mojom::NetworkContext::ClearHttpCache",
               "message", message->name());
#endif
      break;
    }
    case internal::kNetworkContext_ClearChannelIds_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)network::mojom::NetworkContext::ClearChannelIds",
               "message", message->name());
#endif
      break;
    }
    case internal::kNetworkContext_ClearHttpAuthCache_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)network::mojom::NetworkContext::ClearHttpAuthCache",
               "message", message->name());
#endif
      break;
    }
    case internal::kNetworkContext_ClearReportingCacheReports_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)network::mojom::NetworkContext::ClearReportingCacheReports",
               "message", message->name());
#endif
      break;
    }
    case internal::kNetworkContext_ClearReportingCacheClients_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)network::mojom::NetworkContext::ClearReportingCacheClients",
               "message", message->name());
#endif
      break;
    }
    case internal::kNetworkContext_ClearNetworkErrorLogging_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)network::mojom::NetworkContext::ClearNetworkErrorLogging",
               "message", message->name());
#endif
      break;
    }
    case internal::kNetworkContext_SetNetworkConditions_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)network::mojom::NetworkContext::SetNetworkConditions",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);
      if (!message->is_serialized()) {
        auto context = message->TakeUnserializedContext<
            NetworkContextProxy_SetNetworkConditions_Message>();
        if (!context) {
          // The Message was not of the expected type. It may be a valid message
          // which was serialized using a different variant of these bindings.
          // Force serialization before dispatch in this case.
          message->SerializeIfNecessary();
        } else {
          context->Dispatch(impl);
          return true;
        }
      }

      DCHECK(message->is_serialized());
      internal::NetworkContext_SetNetworkConditions_Params_Data* params =
          reinterpret_cast<internal::NetworkContext_SetNetworkConditions_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::string p_profile_id{};
      NetworkConditionsPtr p_conditions{};
      NetworkContext_SetNetworkConditions_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadProfileId(&p_profile_id))
        success = false;
      if (!input_data_view.ReadConditions(&p_conditions))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "NetworkContext::SetNetworkConditions deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->SetNetworkConditions(
std::move(p_profile_id), 
std::move(p_conditions));
      return true;
    }
    case internal::kNetworkContext_SetAcceptLanguage_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)network::mojom::NetworkContext::SetAcceptLanguage",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);
      if (!message->is_serialized()) {
        auto context = message->TakeUnserializedContext<
            NetworkContextProxy_SetAcceptLanguage_Message>();
        if (!context) {
          // The Message was not of the expected type. It may be a valid message
          // which was serialized using a different variant of these bindings.
          // Force serialization before dispatch in this case.
          message->SerializeIfNecessary();
        } else {
          context->Dispatch(impl);
          return true;
        }
      }

      DCHECK(message->is_serialized());
      internal::NetworkContext_SetAcceptLanguage_Params_Data* params =
          reinterpret_cast<internal::NetworkContext_SetAcceptLanguage_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::string p_new_accept_language{};
      NetworkContext_SetAcceptLanguage_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadNewAcceptLanguage(&p_new_accept_language))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "NetworkContext::SetAcceptLanguage deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->SetAcceptLanguage(
std::move(p_new_accept_language));
      return true;
    }
    case internal::kNetworkContext_SetCTPolicy_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)network::mojom::NetworkContext::SetCTPolicy",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);
      if (!message->is_serialized()) {
        auto context = message->TakeUnserializedContext<
            NetworkContextProxy_SetCTPolicy_Message>();
        if (!context) {
          // The Message was not of the expected type. It may be a valid message
          // which was serialized using a different variant of these bindings.
          // Force serialization before dispatch in this case.
          message->SerializeIfNecessary();
        } else {
          context->Dispatch(impl);
          return true;
        }
      }

      DCHECK(message->is_serialized());
      internal::NetworkContext_SetCTPolicy_Params_Data* params =
          reinterpret_cast<internal::NetworkContext_SetCTPolicy_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::vector<std::string> p_required_hosts{};
      std::vector<std::string> p_excluded_hosts{};
      std::vector<std::string> p_excluded_spkis{};
      std::vector<std::string> p_excluded_legacy_spkis{};
      NetworkContext_SetCTPolicy_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadRequiredHosts(&p_required_hosts))
        success = false;
      if (!input_data_view.ReadExcludedHosts(&p_excluded_hosts))
        success = false;
      if (!input_data_view.ReadExcludedSpkis(&p_excluded_spkis))
        success = false;
      if (!input_data_view.ReadExcludedLegacySpkis(&p_excluded_legacy_spkis))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "NetworkContext::SetCTPolicy deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->SetCTPolicy(
std::move(p_required_hosts), 
std::move(p_excluded_hosts), 
std::move(p_excluded_spkis), 
std::move(p_excluded_legacy_spkis));
      return true;
    }
    case internal::kNetworkContext_CreateUDPSocket_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)network::mojom::NetworkContext::CreateUDPSocket",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);
      if (!message->is_serialized()) {
        auto context = message->TakeUnserializedContext<
            NetworkContextProxy_CreateUDPSocket_Message>();
        if (!context) {
          // The Message was not of the expected type. It may be a valid message
          // which was serialized using a different variant of these bindings.
          // Force serialization before dispatch in this case.
          message->SerializeIfNecessary();
        } else {
          context->Dispatch(impl);
          return true;
        }
      }

      DCHECK(message->is_serialized());
      internal::NetworkContext_CreateUDPSocket_Params_Data* params =
          reinterpret_cast<internal::NetworkContext_CreateUDPSocket_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::network::mojom::UDPSocketRequest p_request{};
      ::network::mojom::UDPSocketReceiverPtr p_receiver{};
      NetworkContext_CreateUDPSocket_ParamsDataView input_data_view(params, &serialization_context);
      
      p_request =
          input_data_view.TakeRequest<decltype(p_request)>();
      p_receiver =
          input_data_view.TakeReceiver<decltype(p_receiver)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "NetworkContext::CreateUDPSocket deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->CreateUDPSocket(
std::move(p_request), 
std::move(p_receiver));
      return true;
    }
    case internal::kNetworkContext_CreateTCPServerSocket_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)network::mojom::NetworkContext::CreateTCPServerSocket",
               "message", message->name());
#endif
      break;
    }
    case internal::kNetworkContext_CreateTCPConnectedSocket_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)network::mojom::NetworkContext::CreateTCPConnectedSocket",
               "message", message->name());
#endif
      break;
    }
    case internal::kNetworkContext_CreateWebSocket_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)network::mojom::NetworkContext::CreateWebSocket",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);
      if (!message->is_serialized()) {
        auto context = message->TakeUnserializedContext<
            NetworkContextProxy_CreateWebSocket_Message>();
        if (!context) {
          // The Message was not of the expected type. It may be a valid message
          // which was serialized using a different variant of these bindings.
          // Force serialization before dispatch in this case.
          message->SerializeIfNecessary();
        } else {
          context->Dispatch(impl);
          return true;
        }
      }

      DCHECK(message->is_serialized());
      internal::NetworkContext_CreateWebSocket_Params_Data* params =
          reinterpret_cast<internal::NetworkContext_CreateWebSocket_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::network::mojom::WebSocketRequest p_request{};
      int32_t p_process_id{};
      int32_t p_render_frame_id{};
      url::Origin p_origin{};
      NetworkContext_CreateWebSocket_ParamsDataView input_data_view(params, &serialization_context);
      
      p_request =
          input_data_view.TakeRequest<decltype(p_request)>();
      p_process_id = input_data_view.process_id();
      p_render_frame_id = input_data_view.render_frame_id();
      if (!input_data_view.ReadOrigin(&p_origin))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "NetworkContext::CreateWebSocket deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->CreateWebSocket(
std::move(p_request), 
std::move(p_process_id), 
std::move(p_render_frame_id), 
std::move(p_origin));
      return true;
    }
    case internal::kNetworkContext_CreateNetLogExporter_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)network::mojom::NetworkContext::CreateNetLogExporter",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);
      if (!message->is_serialized()) {
        auto context = message->TakeUnserializedContext<
            NetworkContextProxy_CreateNetLogExporter_Message>();
        if (!context) {
          // The Message was not of the expected type. It may be a valid message
          // which was serialized using a different variant of these bindings.
          // Force serialization before dispatch in this case.
          message->SerializeIfNecessary();
        } else {
          context->Dispatch(impl);
          return true;
        }
      }

      DCHECK(message->is_serialized());
      internal::NetworkContext_CreateNetLogExporter_Params_Data* params =
          reinterpret_cast<internal::NetworkContext_CreateNetLogExporter_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      NetLogExporterRequest p_exporter{};
      NetworkContext_CreateNetLogExporter_ParamsDataView input_data_view(params, &serialization_context);
      
      p_exporter =
          input_data_view.TakeExporter<decltype(p_exporter)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "NetworkContext::CreateNetLogExporter deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->CreateNetLogExporter(
std::move(p_exporter));
      return true;
    }
    case internal::kNetworkContext_BlockThirdPartyCookies_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)network::mojom::NetworkContext::BlockThirdPartyCookies",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);
      if (!message->is_serialized()) {
        auto context = message->TakeUnserializedContext<
            NetworkContextProxy_BlockThirdPartyCookies_Message>();
        if (!context) {
          // The Message was not of the expected type. It may be a valid message
          // which was serialized using a different variant of these bindings.
          // Force serialization before dispatch in this case.
          message->SerializeIfNecessary();
        } else {
          context->Dispatch(impl);
          return true;
        }
      }

      DCHECK(message->is_serialized());
      internal::NetworkContext_BlockThirdPartyCookies_Params_Data* params =
          reinterpret_cast<internal::NetworkContext_BlockThirdPartyCookies_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      bool p_block{};
      NetworkContext_BlockThirdPartyCookies_ParamsDataView input_data_view(params, &serialization_context);
      
      p_block = input_data_view.block();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "NetworkContext::BlockThirdPartyCookies deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->BlockThirdPartyCookies(
std::move(p_block));
      return true;
    }
    case internal::kNetworkContext_AddHSTSForTesting_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)network::mojom::NetworkContext::AddHSTSForTesting",
               "message", message->name());
#endif
      break;
    }
    case internal::kNetworkContext_SetFailingHttpTransactionForTesting_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)network::mojom::NetworkContext::SetFailingHttpTransactionForTesting",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

// static
bool NetworkContextStubDispatch::AcceptWithResponder(
    NetworkContext* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kNetworkContext_CreateURLLoaderFactory_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)network::mojom::NetworkContext::CreateURLLoaderFactory",
               "message", message->name());
#endif
      break;
    }
    case internal::kNetworkContext_GetCookieManager_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)network::mojom::NetworkContext::GetCookieManager",
               "message", message->name());
#endif
      break;
    }
    case internal::kNetworkContext_GetRestrictedCookieManager_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)network::mojom::NetworkContext::GetRestrictedCookieManager",
               "message", message->name());
#endif
      break;
    }
    case internal::kNetworkContext_ClearNetworkingHistorySince_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)network::mojom::NetworkContext::ClearNetworkingHistorySince",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);
      if (!message->is_serialized()) {
        auto context = message->TakeUnserializedContext<
            NetworkContextProxy_ClearNetworkingHistorySince_Message>();
        if (!context) {
          // The Message was not of the expected type. It may be a valid message
          // which was built using a different variant of these bindings. Force
          // serialization before dispatch in this case.
          message->SerializeIfNecessary();
        } else {
          NetworkContext::ClearNetworkingHistorySinceCallback callback =
              NetworkContext_ClearNetworkingHistorySince_ProxyToResponder::CreateCallback(
                  message->request_id(),
                  message->has_flag(mojo::Message::kFlagIsSync),
                  std::move(responder));
          context->Dispatch(impl, std::move(callback));
          return true;
        }
      }

      internal::NetworkContext_ClearNetworkingHistorySince_Params_Data* params =
          reinterpret_cast<
              internal::NetworkContext_ClearNetworkingHistorySince_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      base::Time p_start_time{};
      NetworkContext_ClearNetworkingHistorySince_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadStartTime(&p_start_time))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "NetworkContext::ClearNetworkingHistorySince deserializer");
        return false;
      }
      NetworkContext::ClearNetworkingHistorySinceCallback callback =
          NetworkContext_ClearNetworkingHistorySince_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->ClearNetworkingHistorySince(
std::move(p_start_time), std::move(callback));
      return true;
    }
    case internal::kNetworkContext_ClearHttpCache_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)network::mojom::NetworkContext::ClearHttpCache",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);
      if (!message->is_serialized()) {
        auto context = message->TakeUnserializedContext<
            NetworkContextProxy_ClearHttpCache_Message>();
        if (!context) {
          // The Message was not of the expected type. It may be a valid message
          // which was built using a different variant of these bindings. Force
          // serialization before dispatch in this case.
          message->SerializeIfNecessary();
        } else {
          NetworkContext::ClearHttpCacheCallback callback =
              NetworkContext_ClearHttpCache_ProxyToResponder::CreateCallback(
                  message->request_id(),
                  message->has_flag(mojo::Message::kFlagIsSync),
                  std::move(responder));
          context->Dispatch(impl, std::move(callback));
          return true;
        }
      }

      internal::NetworkContext_ClearHttpCache_Params_Data* params =
          reinterpret_cast<
              internal::NetworkContext_ClearHttpCache_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      base::Time p_start_time{};
      base::Time p_end_time{};
      ClearDataFilterPtr p_filter{};
      NetworkContext_ClearHttpCache_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadStartTime(&p_start_time))
        success = false;
      if (!input_data_view.ReadEndTime(&p_end_time))
        success = false;
      if (!input_data_view.ReadFilter(&p_filter))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "NetworkContext::ClearHttpCache deserializer");
        return false;
      }
      NetworkContext::ClearHttpCacheCallback callback =
          NetworkContext_ClearHttpCache_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->ClearHttpCache(
std::move(p_start_time), 
std::move(p_end_time), 
std::move(p_filter), std::move(callback));
      return true;
    }
    case internal::kNetworkContext_ClearChannelIds_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)network::mojom::NetworkContext::ClearChannelIds",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);
      if (!message->is_serialized()) {
        auto context = message->TakeUnserializedContext<
            NetworkContextProxy_ClearChannelIds_Message>();
        if (!context) {
          // The Message was not of the expected type. It may be a valid message
          // which was built using a different variant of these bindings. Force
          // serialization before dispatch in this case.
          message->SerializeIfNecessary();
        } else {
          NetworkContext::ClearChannelIdsCallback callback =
              NetworkContext_ClearChannelIds_ProxyToResponder::CreateCallback(
                  message->request_id(),
                  message->has_flag(mojo::Message::kFlagIsSync),
                  std::move(responder));
          context->Dispatch(impl, std::move(callback));
          return true;
        }
      }

      internal::NetworkContext_ClearChannelIds_Params_Data* params =
          reinterpret_cast<
              internal::NetworkContext_ClearChannelIds_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      base::Time p_start_time{};
      base::Time p_end_time{};
      ClearDataFilterPtr p_filter{};
      NetworkContext_ClearChannelIds_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadStartTime(&p_start_time))
        success = false;
      if (!input_data_view.ReadEndTime(&p_end_time))
        success = false;
      if (!input_data_view.ReadFilter(&p_filter))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "NetworkContext::ClearChannelIds deserializer");
        return false;
      }
      NetworkContext::ClearChannelIdsCallback callback =
          NetworkContext_ClearChannelIds_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->ClearChannelIds(
std::move(p_start_time), 
std::move(p_end_time), 
std::move(p_filter), std::move(callback));
      return true;
    }
    case internal::kNetworkContext_ClearHttpAuthCache_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)network::mojom::NetworkContext::ClearHttpAuthCache",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);
      if (!message->is_serialized()) {
        auto context = message->TakeUnserializedContext<
            NetworkContextProxy_ClearHttpAuthCache_Message>();
        if (!context) {
          // The Message was not of the expected type. It may be a valid message
          // which was built using a different variant of these bindings. Force
          // serialization before dispatch in this case.
          message->SerializeIfNecessary();
        } else {
          NetworkContext::ClearHttpAuthCacheCallback callback =
              NetworkContext_ClearHttpAuthCache_ProxyToResponder::CreateCallback(
                  message->request_id(),
                  message->has_flag(mojo::Message::kFlagIsSync),
                  std::move(responder));
          context->Dispatch(impl, std::move(callback));
          return true;
        }
      }

      internal::NetworkContext_ClearHttpAuthCache_Params_Data* params =
          reinterpret_cast<
              internal::NetworkContext_ClearHttpAuthCache_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      base::Time p_start_time{};
      NetworkContext_ClearHttpAuthCache_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadStartTime(&p_start_time))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "NetworkContext::ClearHttpAuthCache deserializer");
        return false;
      }
      NetworkContext::ClearHttpAuthCacheCallback callback =
          NetworkContext_ClearHttpAuthCache_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->ClearHttpAuthCache(
std::move(p_start_time), std::move(callback));
      return true;
    }
    case internal::kNetworkContext_ClearReportingCacheReports_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)network::mojom::NetworkContext::ClearReportingCacheReports",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);
      if (!message->is_serialized()) {
        auto context = message->TakeUnserializedContext<
            NetworkContextProxy_ClearReportingCacheReports_Message>();
        if (!context) {
          // The Message was not of the expected type. It may be a valid message
          // which was built using a different variant of these bindings. Force
          // serialization before dispatch in this case.
          message->SerializeIfNecessary();
        } else {
          NetworkContext::ClearReportingCacheReportsCallback callback =
              NetworkContext_ClearReportingCacheReports_ProxyToResponder::CreateCallback(
                  message->request_id(),
                  message->has_flag(mojo::Message::kFlagIsSync),
                  std::move(responder));
          context->Dispatch(impl, std::move(callback));
          return true;
        }
      }

      internal::NetworkContext_ClearReportingCacheReports_Params_Data* params =
          reinterpret_cast<
              internal::NetworkContext_ClearReportingCacheReports_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ClearDataFilterPtr p_filter{};
      NetworkContext_ClearReportingCacheReports_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadFilter(&p_filter))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "NetworkContext::ClearReportingCacheReports deserializer");
        return false;
      }
      NetworkContext::ClearReportingCacheReportsCallback callback =
          NetworkContext_ClearReportingCacheReports_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->ClearReportingCacheReports(
std::move(p_filter), std::move(callback));
      return true;
    }
    case internal::kNetworkContext_ClearReportingCacheClients_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)network::mojom::NetworkContext::ClearReportingCacheClients",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);
      if (!message->is_serialized()) {
        auto context = message->TakeUnserializedContext<
            NetworkContextProxy_ClearReportingCacheClients_Message>();
        if (!context) {
          // The Message was not of the expected type. It may be a valid message
          // which was built using a different variant of these bindings. Force
          // serialization before dispatch in this case.
          message->SerializeIfNecessary();
        } else {
          NetworkContext::ClearReportingCacheClientsCallback callback =
              NetworkContext_ClearReportingCacheClients_ProxyToResponder::CreateCallback(
                  message->request_id(),
                  message->has_flag(mojo::Message::kFlagIsSync),
                  std::move(responder));
          context->Dispatch(impl, std::move(callback));
          return true;
        }
      }

      internal::NetworkContext_ClearReportingCacheClients_Params_Data* params =
          reinterpret_cast<
              internal::NetworkContext_ClearReportingCacheClients_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ClearDataFilterPtr p_filter{};
      NetworkContext_ClearReportingCacheClients_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadFilter(&p_filter))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "NetworkContext::ClearReportingCacheClients deserializer");
        return false;
      }
      NetworkContext::ClearReportingCacheClientsCallback callback =
          NetworkContext_ClearReportingCacheClients_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->ClearReportingCacheClients(
std::move(p_filter), std::move(callback));
      return true;
    }
    case internal::kNetworkContext_ClearNetworkErrorLogging_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)network::mojom::NetworkContext::ClearNetworkErrorLogging",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);
      if (!message->is_serialized()) {
        auto context = message->TakeUnserializedContext<
            NetworkContextProxy_ClearNetworkErrorLogging_Message>();
        if (!context) {
          // The Message was not of the expected type. It may be a valid message
          // which was built using a different variant of these bindings. Force
          // serialization before dispatch in this case.
          message->SerializeIfNecessary();
        } else {
          NetworkContext::ClearNetworkErrorLoggingCallback callback =
              NetworkContext_ClearNetworkErrorLogging_ProxyToResponder::CreateCallback(
                  message->request_id(),
                  message->has_flag(mojo::Message::kFlagIsSync),
                  std::move(responder));
          context->Dispatch(impl, std::move(callback));
          return true;
        }
      }

      internal::NetworkContext_ClearNetworkErrorLogging_Params_Data* params =
          reinterpret_cast<
              internal::NetworkContext_ClearNetworkErrorLogging_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ClearDataFilterPtr p_filter{};
      NetworkContext_ClearNetworkErrorLogging_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadFilter(&p_filter))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "NetworkContext::ClearNetworkErrorLogging deserializer");
        return false;
      }
      NetworkContext::ClearNetworkErrorLoggingCallback callback =
          NetworkContext_ClearNetworkErrorLogging_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->ClearNetworkErrorLogging(
std::move(p_filter), std::move(callback));
      return true;
    }
    case internal::kNetworkContext_SetNetworkConditions_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)network::mojom::NetworkContext::SetNetworkConditions",
               "message", message->name());
#endif
      break;
    }
    case internal::kNetworkContext_SetAcceptLanguage_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)network::mojom::NetworkContext::SetAcceptLanguage",
               "message", message->name());
#endif
      break;
    }
    case internal::kNetworkContext_SetCTPolicy_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)network::mojom::NetworkContext::SetCTPolicy",
               "message", message->name());
#endif
      break;
    }
    case internal::kNetworkContext_CreateUDPSocket_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)network::mojom::NetworkContext::CreateUDPSocket",
               "message", message->name());
#endif
      break;
    }
    case internal::kNetworkContext_CreateTCPServerSocket_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)network::mojom::NetworkContext::CreateTCPServerSocket",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);
      if (!message->is_serialized()) {
        auto context = message->TakeUnserializedContext<
            NetworkContextProxy_CreateTCPServerSocket_Message>();
        if (!context) {
          // The Message was not of the expected type. It may be a valid message
          // which was built using a different variant of these bindings. Force
          // serialization before dispatch in this case.
          message->SerializeIfNecessary();
        } else {
          NetworkContext::CreateTCPServerSocketCallback callback =
              NetworkContext_CreateTCPServerSocket_ProxyToResponder::CreateCallback(
                  message->request_id(),
                  message->has_flag(mojo::Message::kFlagIsSync),
                  std::move(responder));
          context->Dispatch(impl, std::move(callback));
          return true;
        }
      }

      internal::NetworkContext_CreateTCPServerSocket_Params_Data* params =
          reinterpret_cast<
              internal::NetworkContext_CreateTCPServerSocket_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      net::IPEndPoint p_local_addr{};
      uint32_t p_backlog{};
      net::MutableNetworkTrafficAnnotationTag p_traffic_annotation{};
      ::network::mojom::TCPServerSocketRequest p_socket{};
      NetworkContext_CreateTCPServerSocket_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadLocalAddr(&p_local_addr))
        success = false;
      p_backlog = input_data_view.backlog();
      if (!input_data_view.ReadTrafficAnnotation(&p_traffic_annotation))
        success = false;
      p_socket =
          input_data_view.TakeSocket<decltype(p_socket)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "NetworkContext::CreateTCPServerSocket deserializer");
        return false;
      }
      NetworkContext::CreateTCPServerSocketCallback callback =
          NetworkContext_CreateTCPServerSocket_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->CreateTCPServerSocket(
std::move(p_local_addr), 
std::move(p_backlog), 
std::move(p_traffic_annotation), 
std::move(p_socket), std::move(callback));
      return true;
    }
    case internal::kNetworkContext_CreateTCPConnectedSocket_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)network::mojom::NetworkContext::CreateTCPConnectedSocket",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);
      if (!message->is_serialized()) {
        auto context = message->TakeUnserializedContext<
            NetworkContextProxy_CreateTCPConnectedSocket_Message>();
        if (!context) {
          // The Message was not of the expected type. It may be a valid message
          // which was built using a different variant of these bindings. Force
          // serialization before dispatch in this case.
          message->SerializeIfNecessary();
        } else {
          NetworkContext::CreateTCPConnectedSocketCallback callback =
              NetworkContext_CreateTCPConnectedSocket_ProxyToResponder::CreateCallback(
                  message->request_id(),
                  message->has_flag(mojo::Message::kFlagIsSync),
                  std::move(responder));
          context->Dispatch(impl, std::move(callback));
          return true;
        }
      }

      internal::NetworkContext_CreateTCPConnectedSocket_Params_Data* params =
          reinterpret_cast<
              internal::NetworkContext_CreateTCPConnectedSocket_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      base::Optional<net::IPEndPoint> p_local_addr{};
      net::AddressList p_remote_addr_list{};
      net::MutableNetworkTrafficAnnotationTag p_traffic_annotation{};
      ::network::mojom::TCPConnectedSocketRequest p_socket{};
      ::network::mojom::SocketObserverPtr p_observer{};
      NetworkContext_CreateTCPConnectedSocket_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadLocalAddr(&p_local_addr))
        success = false;
      if (!input_data_view.ReadRemoteAddrList(&p_remote_addr_list))
        success = false;
      if (!input_data_view.ReadTrafficAnnotation(&p_traffic_annotation))
        success = false;
      p_socket =
          input_data_view.TakeSocket<decltype(p_socket)>();
      p_observer =
          input_data_view.TakeObserver<decltype(p_observer)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "NetworkContext::CreateTCPConnectedSocket deserializer");
        return false;
      }
      NetworkContext::CreateTCPConnectedSocketCallback callback =
          NetworkContext_CreateTCPConnectedSocket_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->CreateTCPConnectedSocket(
std::move(p_local_addr), 
std::move(p_remote_addr_list), 
std::move(p_traffic_annotation), 
std::move(p_socket), 
std::move(p_observer), std::move(callback));
      return true;
    }
    case internal::kNetworkContext_CreateWebSocket_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)network::mojom::NetworkContext::CreateWebSocket",
               "message", message->name());
#endif
      break;
    }
    case internal::kNetworkContext_CreateNetLogExporter_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)network::mojom::NetworkContext::CreateNetLogExporter",
               "message", message->name());
#endif
      break;
    }
    case internal::kNetworkContext_BlockThirdPartyCookies_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)network::mojom::NetworkContext::BlockThirdPartyCookies",
               "message", message->name());
#endif
      break;
    }
    case internal::kNetworkContext_AddHSTSForTesting_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)network::mojom::NetworkContext::AddHSTSForTesting",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);
      if (!message->is_serialized()) {
        auto context = message->TakeUnserializedContext<
            NetworkContextProxy_AddHSTSForTesting_Message>();
        if (!context) {
          // The Message was not of the expected type. It may be a valid message
          // which was built using a different variant of these bindings. Force
          // serialization before dispatch in this case.
          message->SerializeIfNecessary();
        } else {
          NetworkContext::AddHSTSForTestingCallback callback =
              NetworkContext_AddHSTSForTesting_ProxyToResponder::CreateCallback(
                  message->request_id(),
                  message->has_flag(mojo::Message::kFlagIsSync),
                  std::move(responder));
          context->Dispatch(impl, std::move(callback));
          return true;
        }
      }

      internal::NetworkContext_AddHSTSForTesting_Params_Data* params =
          reinterpret_cast<
              internal::NetworkContext_AddHSTSForTesting_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::string p_host{};
      base::Time p_expiry{};
      bool p_include_subdomains{};
      NetworkContext_AddHSTSForTesting_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadHost(&p_host))
        success = false;
      if (!input_data_view.ReadExpiry(&p_expiry))
        success = false;
      p_include_subdomains = input_data_view.include_subdomains();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "NetworkContext::AddHSTSForTesting deserializer");
        return false;
      }
      NetworkContext::AddHSTSForTestingCallback callback =
          NetworkContext_AddHSTSForTesting_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->AddHSTSForTesting(
std::move(p_host), 
std::move(p_expiry), 
std::move(p_include_subdomains), std::move(callback));
      return true;
    }
    case internal::kNetworkContext_SetFailingHttpTransactionForTesting_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)network::mojom::NetworkContext::SetFailingHttpTransactionForTesting",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);
      if (!message->is_serialized()) {
        auto context = message->TakeUnserializedContext<
            NetworkContextProxy_SetFailingHttpTransactionForTesting_Message>();
        if (!context) {
          // The Message was not of the expected type. It may be a valid message
          // which was built using a different variant of these bindings. Force
          // serialization before dispatch in this case.
          message->SerializeIfNecessary();
        } else {
          NetworkContext::SetFailingHttpTransactionForTestingCallback callback =
              NetworkContext_SetFailingHttpTransactionForTesting_ProxyToResponder::CreateCallback(
                  message->request_id(),
                  message->has_flag(mojo::Message::kFlagIsSync),
                  std::move(responder));
          context->Dispatch(impl, std::move(callback));
          return true;
        }
      }

      internal::NetworkContext_SetFailingHttpTransactionForTesting_Params_Data* params =
          reinterpret_cast<
              internal::NetworkContext_SetFailingHttpTransactionForTesting_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int32_t p_rv{};
      NetworkContext_SetFailingHttpTransactionForTesting_ParamsDataView input_data_view(params, &serialization_context);
      
      p_rv = input_data_view.rv();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "NetworkContext::SetFailingHttpTransactionForTesting deserializer");
        return false;
      }
      NetworkContext::SetFailingHttpTransactionForTestingCallback callback =
          NetworkContext_SetFailingHttpTransactionForTesting_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->SetFailingHttpTransactionForTesting(
std::move(p_rv), std::move(callback));
      return true;
    }
  }
  return false;
}

bool NetworkContextRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "NetworkContext RequestValidator");

  switch (message->header()->name) {
    case internal::kNetworkContext_CreateURLLoaderFactory_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkContext_CreateURLLoaderFactory_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetworkContext_GetCookieManager_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkContext_GetCookieManager_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetworkContext_GetRestrictedCookieManager_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkContext_GetRestrictedCookieManager_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetworkContext_ClearNetworkingHistorySince_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkContext_ClearNetworkingHistorySince_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetworkContext_ClearHttpCache_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkContext_ClearHttpCache_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetworkContext_ClearChannelIds_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkContext_ClearChannelIds_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetworkContext_ClearHttpAuthCache_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkContext_ClearHttpAuthCache_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetworkContext_ClearReportingCacheReports_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkContext_ClearReportingCacheReports_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetworkContext_ClearReportingCacheClients_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkContext_ClearReportingCacheClients_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetworkContext_ClearNetworkErrorLogging_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkContext_ClearNetworkErrorLogging_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetworkContext_SetNetworkConditions_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkContext_SetNetworkConditions_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetworkContext_SetAcceptLanguage_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkContext_SetAcceptLanguage_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetworkContext_SetCTPolicy_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkContext_SetCTPolicy_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetworkContext_CreateUDPSocket_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkContext_CreateUDPSocket_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetworkContext_CreateTCPServerSocket_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkContext_CreateTCPServerSocket_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetworkContext_CreateTCPConnectedSocket_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkContext_CreateTCPConnectedSocket_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetworkContext_CreateWebSocket_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkContext_CreateWebSocket_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetworkContext_CreateNetLogExporter_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkContext_CreateNetLogExporter_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetworkContext_BlockThirdPartyCookies_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkContext_BlockThirdPartyCookies_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetworkContext_AddHSTSForTesting_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkContext_AddHSTSForTesting_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetworkContext_SetFailingHttpTransactionForTesting_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkContext_SetFailingHttpTransactionForTesting_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    default:
      break;
  }

  // Unrecognized message.
  ReportValidationError(
      &validation_context,
      mojo::internal::VALIDATION_ERROR_MESSAGE_HEADER_UNKNOWN_METHOD);
  return false;
}

bool NetworkContextResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "NetworkContext ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kNetworkContext_ClearNetworkingHistorySince_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkContext_ClearNetworkingHistorySince_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetworkContext_ClearHttpCache_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkContext_ClearHttpCache_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetworkContext_ClearChannelIds_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkContext_ClearChannelIds_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetworkContext_ClearHttpAuthCache_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkContext_ClearHttpAuthCache_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetworkContext_ClearReportingCacheReports_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkContext_ClearReportingCacheReports_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetworkContext_ClearReportingCacheClients_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkContext_ClearReportingCacheClients_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetworkContext_ClearNetworkErrorLogging_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkContext_ClearNetworkErrorLogging_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetworkContext_CreateTCPServerSocket_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkContext_CreateTCPServerSocket_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetworkContext_CreateTCPConnectedSocket_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkContext_CreateTCPConnectedSocket_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetworkContext_AddHSTSForTesting_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkContext_AddHSTSForTesting_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetworkContext_SetFailingHttpTransactionForTesting_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkContext_SetFailingHttpTransactionForTesting_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    default:
      break;
  }

  // Unrecognized message.
  ReportValidationError(
      &validation_context,
      mojo::internal::VALIDATION_ERROR_MESSAGE_HEADER_UNKNOWN_METHOD);
  return false;
}
void NetworkContextInterceptorForTesting::CreateURLLoaderFactory(::network::mojom::URLLoaderFactoryRequest url_loader_factory, URLLoaderFactoryParamsPtr params) {
  GetForwardingInterface()->CreateURLLoaderFactory(std::move(url_loader_factory), std::move(params));
}
void NetworkContextInterceptorForTesting::GetCookieManager(::network::mojom::CookieManagerRequest cookie_manager) {
  GetForwardingInterface()->GetCookieManager(std::move(cookie_manager));
}
void NetworkContextInterceptorForTesting::GetRestrictedCookieManager(::network::mojom::RestrictedCookieManagerRequest restricted_cookie_manager, int32_t render_process_id, int32_t render_frame_id) {
  GetForwardingInterface()->GetRestrictedCookieManager(std::move(restricted_cookie_manager), std::move(render_process_id), std::move(render_frame_id));
}
void NetworkContextInterceptorForTesting::ClearNetworkingHistorySince(base::Time start_time, ClearNetworkingHistorySinceCallback callback) {
  GetForwardingInterface()->ClearNetworkingHistorySince(std::move(start_time), std::move(callback));
}
void NetworkContextInterceptorForTesting::ClearHttpCache(base::Time start_time, base::Time end_time, ClearDataFilterPtr filter, ClearHttpCacheCallback callback) {
  GetForwardingInterface()->ClearHttpCache(std::move(start_time), std::move(end_time), std::move(filter), std::move(callback));
}
void NetworkContextInterceptorForTesting::ClearChannelIds(base::Time start_time, base::Time end_time, ClearDataFilterPtr filter, ClearChannelIdsCallback callback) {
  GetForwardingInterface()->ClearChannelIds(std::move(start_time), std::move(end_time), std::move(filter), std::move(callback));
}
void NetworkContextInterceptorForTesting::ClearHttpAuthCache(base::Time start_time, ClearHttpAuthCacheCallback callback) {
  GetForwardingInterface()->ClearHttpAuthCache(std::move(start_time), std::move(callback));
}
void NetworkContextInterceptorForTesting::ClearReportingCacheReports(ClearDataFilterPtr filter, ClearReportingCacheReportsCallback callback) {
  GetForwardingInterface()->ClearReportingCacheReports(std::move(filter), std::move(callback));
}
void NetworkContextInterceptorForTesting::ClearReportingCacheClients(ClearDataFilterPtr filter, ClearReportingCacheClientsCallback callback) {
  GetForwardingInterface()->ClearReportingCacheClients(std::move(filter), std::move(callback));
}
void NetworkContextInterceptorForTesting::ClearNetworkErrorLogging(ClearDataFilterPtr filter, ClearNetworkErrorLoggingCallback callback) {
  GetForwardingInterface()->ClearNetworkErrorLogging(std::move(filter), std::move(callback));
}
void NetworkContextInterceptorForTesting::SetNetworkConditions(const std::string& profile_id, NetworkConditionsPtr conditions) {
  GetForwardingInterface()->SetNetworkConditions(std::move(profile_id), std::move(conditions));
}
void NetworkContextInterceptorForTesting::SetAcceptLanguage(const std::string& new_accept_language) {
  GetForwardingInterface()->SetAcceptLanguage(std::move(new_accept_language));
}
void NetworkContextInterceptorForTesting::SetCTPolicy(const std::vector<std::string>& required_hosts, const std::vector<std::string>& excluded_hosts, const std::vector<std::string>& excluded_spkis, const std::vector<std::string>& excluded_legacy_spkis) {
  GetForwardingInterface()->SetCTPolicy(std::move(required_hosts), std::move(excluded_hosts), std::move(excluded_spkis), std::move(excluded_legacy_spkis));
}
void NetworkContextInterceptorForTesting::CreateUDPSocket(::network::mojom::UDPSocketRequest request, ::network::mojom::UDPSocketReceiverPtr receiver) {
  GetForwardingInterface()->CreateUDPSocket(std::move(request), std::move(receiver));
}
void NetworkContextInterceptorForTesting::CreateTCPServerSocket(const net::IPEndPoint& local_addr, uint32_t backlog, const net::MutableNetworkTrafficAnnotationTag& traffic_annotation, ::network::mojom::TCPServerSocketRequest socket, CreateTCPServerSocketCallback callback) {
  GetForwardingInterface()->CreateTCPServerSocket(std::move(local_addr), std::move(backlog), std::move(traffic_annotation), std::move(socket), std::move(callback));
}
void NetworkContextInterceptorForTesting::CreateTCPConnectedSocket(const base::Optional<net::IPEndPoint>& local_addr, const net::AddressList& remote_addr_list, const net::MutableNetworkTrafficAnnotationTag& traffic_annotation, ::network::mojom::TCPConnectedSocketRequest socket, ::network::mojom::SocketObserverPtr observer, CreateTCPConnectedSocketCallback callback) {
  GetForwardingInterface()->CreateTCPConnectedSocket(std::move(local_addr), std::move(remote_addr_list), std::move(traffic_annotation), std::move(socket), std::move(observer), std::move(callback));
}
void NetworkContextInterceptorForTesting::CreateWebSocket(::network::mojom::WebSocketRequest request, int32_t process_id, int32_t render_frame_id, const url::Origin& origin) {
  GetForwardingInterface()->CreateWebSocket(std::move(request), std::move(process_id), std::move(render_frame_id), std::move(origin));
}
void NetworkContextInterceptorForTesting::CreateNetLogExporter(NetLogExporterRequest exporter) {
  GetForwardingInterface()->CreateNetLogExporter(std::move(exporter));
}
void NetworkContextInterceptorForTesting::BlockThirdPartyCookies(bool block) {
  GetForwardingInterface()->BlockThirdPartyCookies(std::move(block));
}
void NetworkContextInterceptorForTesting::AddHSTSForTesting(const std::string& host, base::Time expiry, bool include_subdomains, AddHSTSForTestingCallback callback) {
  GetForwardingInterface()->AddHSTSForTesting(std::move(host), std::move(expiry), std::move(include_subdomains), std::move(callback));
}
void NetworkContextInterceptorForTesting::SetFailingHttpTransactionForTesting(int32_t rv, SetFailingHttpTransactionForTestingCallback callback) {
  GetForwardingInterface()->SetFailingHttpTransactionForTesting(std::move(rv), std::move(callback));
}
NetworkContextAsyncWaiter::NetworkContextAsyncWaiter(
    NetworkContext* proxy) : proxy_(proxy) {}

NetworkContextAsyncWaiter::~NetworkContextAsyncWaiter() = default;

void NetworkContextAsyncWaiter::ClearNetworkingHistorySince(
    base::Time start_time) {
  base::RunLoop loop;
  proxy_->ClearNetworkingHistorySince(std::move(start_time),
      base::BindOnce(
          [](base::RunLoop* loop) {
            loop->Quit();
          },
          &loop));
  loop.Run();
}
void NetworkContextAsyncWaiter::ClearHttpCache(
    base::Time start_time, base::Time end_time, ClearDataFilterPtr filter) {
  base::RunLoop loop;
  proxy_->ClearHttpCache(std::move(start_time),std::move(end_time),std::move(filter),
      base::BindOnce(
          [](base::RunLoop* loop) {
            loop->Quit();
          },
          &loop));
  loop.Run();
}
void NetworkContextAsyncWaiter::ClearChannelIds(
    base::Time start_time, base::Time end_time, ClearDataFilterPtr filter) {
  base::RunLoop loop;
  proxy_->ClearChannelIds(std::move(start_time),std::move(end_time),std::move(filter),
      base::BindOnce(
          [](base::RunLoop* loop) {
            loop->Quit();
          },
          &loop));
  loop.Run();
}
void NetworkContextAsyncWaiter::ClearHttpAuthCache(
    base::Time start_time) {
  base::RunLoop loop;
  proxy_->ClearHttpAuthCache(std::move(start_time),
      base::BindOnce(
          [](base::RunLoop* loop) {
            loop->Quit();
          },
          &loop));
  loop.Run();
}
void NetworkContextAsyncWaiter::ClearReportingCacheReports(
    ClearDataFilterPtr filter) {
  base::RunLoop loop;
  proxy_->ClearReportingCacheReports(std::move(filter),
      base::BindOnce(
          [](base::RunLoop* loop) {
            loop->Quit();
          },
          &loop));
  loop.Run();
}
void NetworkContextAsyncWaiter::ClearReportingCacheClients(
    ClearDataFilterPtr filter) {
  base::RunLoop loop;
  proxy_->ClearReportingCacheClients(std::move(filter),
      base::BindOnce(
          [](base::RunLoop* loop) {
            loop->Quit();
          },
          &loop));
  loop.Run();
}
void NetworkContextAsyncWaiter::ClearNetworkErrorLogging(
    ClearDataFilterPtr filter) {
  base::RunLoop loop;
  proxy_->ClearNetworkErrorLogging(std::move(filter),
      base::BindOnce(
          [](base::RunLoop* loop) {
            loop->Quit();
          },
          &loop));
  loop.Run();
}
void NetworkContextAsyncWaiter::CreateTCPServerSocket(
    const net::IPEndPoint& local_addr, uint32_t backlog, const net::MutableNetworkTrafficAnnotationTag& traffic_annotation, ::network::mojom::TCPServerSocketRequest socket, int32_t* out_result, base::Optional<net::IPEndPoint>* out_local_addr_out) {
  base::RunLoop loop;
  proxy_->CreateTCPServerSocket(std::move(local_addr),std::move(backlog),std::move(traffic_annotation),std::move(socket),
      base::BindOnce(
          [](base::RunLoop* loop,
             int32_t* out_result
,
             base::Optional<net::IPEndPoint>* out_local_addr_out
,
             int32_t result,
             const base::Optional<net::IPEndPoint>& local_addr_out) {*out_result = std::move(result);*out_local_addr_out = std::move(local_addr_out);
            loop->Quit();
          },
          &loop,
          out_result,
          out_local_addr_out));
  loop.Run();
}
void NetworkContextAsyncWaiter::CreateTCPConnectedSocket(
    const base::Optional<net::IPEndPoint>& local_addr, const net::AddressList& remote_addr_list, const net::MutableNetworkTrafficAnnotationTag& traffic_annotation, ::network::mojom::TCPConnectedSocketRequest socket, ::network::mojom::SocketObserverPtr observer, int32_t* out_result, mojo::ScopedDataPipeConsumerHandle* out_receive_stream, mojo::ScopedDataPipeProducerHandle* out_send_stream) {
  base::RunLoop loop;
  proxy_->CreateTCPConnectedSocket(std::move(local_addr),std::move(remote_addr_list),std::move(traffic_annotation),std::move(socket),std::move(observer),
      base::BindOnce(
          [](base::RunLoop* loop,
             int32_t* out_result
,
             mojo::ScopedDataPipeConsumerHandle* out_receive_stream
,
             mojo::ScopedDataPipeProducerHandle* out_send_stream
,
             int32_t result,
             mojo::ScopedDataPipeConsumerHandle receive_stream,
             mojo::ScopedDataPipeProducerHandle send_stream) {*out_result = std::move(result);*out_receive_stream = std::move(receive_stream);*out_send_stream = std::move(send_stream);
            loop->Quit();
          },
          &loop,
          out_result,
          out_receive_stream,
          out_send_stream));
  loop.Run();
}
void NetworkContextAsyncWaiter::AddHSTSForTesting(
    const std::string& host, base::Time expiry, bool include_subdomains) {
  base::RunLoop loop;
  proxy_->AddHSTSForTesting(std::move(host),std::move(expiry),std::move(include_subdomains),
      base::BindOnce(
          [](base::RunLoop* loop) {
            loop->Quit();
          },
          &loop));
  loop.Run();
}
void NetworkContextAsyncWaiter::SetFailingHttpTransactionForTesting(
    int32_t rv) {
  base::RunLoop loop;
  proxy_->SetFailingHttpTransactionForTesting(std::move(rv),
      base::BindOnce(
          [](base::RunLoop* loop) {
            loop->Quit();
          },
          &loop));
  loop.Run();
}

}  // namespace mojom
}  // namespace network

namespace mojo {


// static
bool StructTraits<::network::mojom::NetworkContextParams::DataView, ::network::mojom::NetworkContextParamsPtr>::Read(
    ::network::mojom::NetworkContextParams::DataView input,
    ::network::mojom::NetworkContextParamsPtr* output) {
  bool success = true;
  ::network::mojom::NetworkContextParamsPtr result(::network::mojom::NetworkContextParams::New());
  
      if (!input.ReadContextName(&result->context_name))
        success = false;
      if (!input.ReadUserAgent(&result->user_agent))
        success = false;
      if (!input.ReadAcceptLanguage(&result->accept_language))
        success = false;
      result->enable_brotli = input.enable_brotli();
      if (!input.ReadQuicUserAgentId(&result->quic_user_agent_id))
        success = false;
      result->proxy_resolver_factory =
          input.TakeProxyResolverFactory<decltype(result->proxy_resolver_factory)>();
      if (!input.ReadCookiePath(&result->cookie_path))
        success = false;
      result->restore_old_session_cookies = input.restore_old_session_cookies();
      result->persist_session_cookies = input.persist_session_cookies();
      if (!input.ReadChannelIdPath(&result->channel_id_path))
        success = false;
      result->http_cache_enabled = input.http_cache_enabled();
      result->http_cache_max_size = input.http_cache_max_size();
      if (!input.ReadHttpCachePath(&result->http_cache_path))
        success = false;
      if (!input.ReadHttpServerPropertiesPath(&result->http_server_properties_path))
        success = false;
      if (!input.ReadTransportSecurityPersisterPath(&result->transport_security_persister_path))
        success = false;
      result->enable_data_url_support = input.enable_data_url_support();
      result->enable_file_url_support = input.enable_file_url_support();
      result->enable_ftp_url_support = input.enable_ftp_url_support();
      result->enforce_chrome_ct_policy = input.enforce_chrome_ct_policy();
      result->http_09_on_non_default_ports_enabled = input.http_09_on_non_default_ports_enabled();
      if (!input.ReadInitialSslConfig(&result->initial_ssl_config))
        success = false;
      result->ssl_config_client_request =
          input.TakeSslConfigClientRequest<decltype(result->ssl_config_client_request)>();
      if (!input.ReadInitialProxyConfig(&result->initial_proxy_config))
        success = false;
      result->proxy_config_client_request =
          input.TakeProxyConfigClientRequest<decltype(result->proxy_config_client_request)>();
      result->proxy_config_poller_client =
          input.TakeProxyConfigPollerClient<decltype(result->proxy_config_poller_client)>();
      result->pac_quick_check_enabled = input.pac_quick_check_enabled();
      result->dangerously_allow_pac_access_to_secure_urls = input.dangerously_allow_pac_access_to_secure_urls();
      result->allow_gssapi_library_load = input.allow_gssapi_library_load();
      if (!input.ReadGssapiLibraryName(&result->gssapi_library_name))
        success = false;
      result->enable_certificate_reporting = input.enable_certificate_reporting();
      if (!input.ReadCtLogs(&result->ct_logs))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::network::mojom::NetworkConditions::DataView, ::network::mojom::NetworkConditionsPtr>::Read(
    ::network::mojom::NetworkConditions::DataView input,
    ::network::mojom::NetworkConditionsPtr* output) {
  bool success = true;
  ::network::mojom::NetworkConditionsPtr result(::network::mojom::NetworkConditions::New());
  
      result->offline = input.offline();
      if (!input.ReadLatency(&result->latency))
        success = false;
      result->download_throughput = input.download_throughput();
      result->upload_throughput = input.upload_throughput();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::network::mojom::ClearDataFilter::DataView, ::network::mojom::ClearDataFilterPtr>::Read(
    ::network::mojom::ClearDataFilter::DataView input,
    ::network::mojom::ClearDataFilterPtr* output) {
  bool success = true;
  ::network::mojom::ClearDataFilterPtr result(::network::mojom::ClearDataFilter::New());
  
      if (!input.ReadType(&result->type))
        success = false;
      if (!input.ReadDomains(&result->domains))
        success = false;
      if (!input.ReadOrigins(&result->origins))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::network::mojom::NetworkUsage::DataView, ::network::mojom::NetworkUsagePtr>::Read(
    ::network::mojom::NetworkUsage::DataView input,
    ::network::mojom::NetworkUsagePtr* output) {
  bool success = true;
  ::network::mojom::NetworkUsagePtr result(::network::mojom::NetworkUsage::New());
  
      result->process_id = input.process_id();
      result->routing_id = input.routing_id();
      result->total_bytes_received = input.total_bytes_received();
      result->total_bytes_sent = input.total_bytes_sent();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::network::mojom::URLLoaderFactoryParams::DataView, ::network::mojom::URLLoaderFactoryParamsPtr>::Read(
    ::network::mojom::URLLoaderFactoryParams::DataView input,
    ::network::mojom::URLLoaderFactoryParamsPtr* output) {
  bool success = true;
  ::network::mojom::URLLoaderFactoryParamsPtr result(::network::mojom::URLLoaderFactoryParams::New());
  
      result->process_id = input.process_id();
      result->is_corb_enabled = input.is_corb_enabled();
      if (!input.ReadCorbExcludedInitiatorScheme(&result->corb_excluded_initiator_scheme))
        success = false;
  *output = std::move(result);
  return success;
}

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif