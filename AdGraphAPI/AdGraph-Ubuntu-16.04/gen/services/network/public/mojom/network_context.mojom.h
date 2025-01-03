// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_CONTEXT_MOJOM_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_CONTEXT_MOJOM_H_

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
#include "services/network/public/mojom/network_context.mojom-shared.h"
#include "mojo/public/mojom/base/file.mojom.h"
#include "mojo/public/mojom/base/file_path.mojom.h"
#include "mojo/public/mojom/base/values.mojom.h"
#include "mojo/public/mojom/base/time.mojom.h"
#include "net/interfaces/address_list.mojom.h"
#include "net/interfaces/ip_endpoint.mojom.h"
#include "services/network/public/mojom/cookie_manager.mojom.h"
#include "services/network/public/mojom/ct_log_info.mojom.h"
#include "services/network/public/mojom/mutable_network_traffic_annotation_tag.mojom.h"
#include "services/network/public/mojom/proxy_config.mojom.h"
#include "services/network/public/mojom/proxy_config_with_annotation.mojom.h"
#include "services/network/public/mojom/ssl_config.mojom.h"
#include "services/network/public/mojom/tcp_socket.mojom.h"
#include "services/network/public/mojom/udp_socket.mojom.h"
#include "services/network/public/mojom/url_loader.mojom.h"
#include "services/network/public/mojom/url_loader_factory.mojom.h"
#include "services/network/public/mojom/websocket.mojom.h"
#include "services/proxy_resolver/public/mojom/proxy_resolver.mojom.h"
#include "services/network/public/mojom/restricted_cookie_manager.mojom.h"
#include "url/mojom/origin.mojom.h"
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


namespace network {
namespace mojom {
constexpr uint32_t kBrowserProcessId = 0U;
constexpr uint32_t kInvalidProcessId = 0xffffffffU;
class NetLogExporter;
using NetLogExporterPtr = mojo::InterfacePtr<NetLogExporter>;
using NetLogExporterPtrInfo = mojo::InterfacePtrInfo<NetLogExporter>;
using ThreadSafeNetLogExporterPtr =
    mojo::ThreadSafeInterfacePtr<NetLogExporter>;
using NetLogExporterRequest = mojo::InterfaceRequest<NetLogExporter>;
using NetLogExporterAssociatedPtr =
    mojo::AssociatedInterfacePtr<NetLogExporter>;
using ThreadSafeNetLogExporterAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<NetLogExporter>;
using NetLogExporterAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<NetLogExporter>;
using NetLogExporterAssociatedRequest =
    mojo::AssociatedInterfaceRequest<NetLogExporter>;

class NetworkContext;
using NetworkContextPtr = mojo::InterfacePtr<NetworkContext>;
using NetworkContextPtrInfo = mojo::InterfacePtrInfo<NetworkContext>;
using ThreadSafeNetworkContextPtr =
    mojo::ThreadSafeInterfacePtr<NetworkContext>;
using NetworkContextRequest = mojo::InterfaceRequest<NetworkContext>;
using NetworkContextAssociatedPtr =
    mojo::AssociatedInterfacePtr<NetworkContext>;
using ThreadSafeNetworkContextAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<NetworkContext>;
using NetworkContextAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<NetworkContext>;
using NetworkContextAssociatedRequest =
    mojo::AssociatedInterfaceRequest<NetworkContext>;

class NetworkContextParams;
using NetworkContextParamsPtr = mojo::StructPtr<NetworkContextParams>;

class NetworkConditions;
using NetworkConditionsPtr = mojo::StructPtr<NetworkConditions>;

class ClearDataFilter;
using ClearDataFilterPtr = mojo::StructPtr<ClearDataFilter>;

class NetworkUsage;
using NetworkUsagePtr = mojo::InlinedStructPtr<NetworkUsage>;

class URLLoaderFactoryParams;
using URLLoaderFactoryParamsPtr = mojo::InlinedStructPtr<URLLoaderFactoryParams>;


class NetLogExporterProxy;

template <typename ImplRefTraits>
class NetLogExporterStub;

class NetLogExporterRequestValidator;
class NetLogExporterResponseValidator;

class  NetLogExporter
    : public NetLogExporterInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = NetLogExporterProxy;

  template <typename ImplRefTraits>
  using Stub_ = NetLogExporterStub<ImplRefTraits>;

  using RequestValidator_ = NetLogExporterRequestValidator;
  using ResponseValidator_ = NetLogExporterResponseValidator;
  enum MethodMinVersions : uint32_t {
    kStartMinVersion = 0,
    kStopMinVersion = 0,
  };
  using CaptureMode = NetLogExporter_CaptureMode;
  static constexpr uint64_t kUnlimitedFileSize = 0xFFFFFFFFFFFFFFFFULL;
  virtual ~NetLogExporter() {}


  using StartCallback = base::OnceCallback<void(int32_t)>;
  virtual void Start(base::File destination, base::Value extra_constants, NetLogExporter::CaptureMode capture_mode, uint64_t max_file_size, StartCallback callback) = 0;


  using StopCallback = base::OnceCallback<void(int32_t)>;
  virtual void Stop(base::Value polled_values, StopCallback callback) = 0;
};
class  NetLogExporterInterceptorForTesting : public NetLogExporter {
  virtual NetLogExporter* GetForwardingInterface() = 0;
  void Start(base::File destination, base::Value extra_constants, NetLogExporter::CaptureMode capture_mode, uint64_t max_file_size, StartCallback callback) override;
  void Stop(base::Value polled_values, StopCallback callback) override;
};
class  NetLogExporterAsyncWaiter {
 public:
  explicit NetLogExporterAsyncWaiter(NetLogExporter* proxy);
  ~NetLogExporterAsyncWaiter();
  void Start(
      base::File destination, base::Value extra_constants, NetLogExporter::CaptureMode capture_mode, uint64_t max_file_size, int32_t* out_net_error);
  void Stop(
      base::Value polled_values, int32_t* out_net_error);

 private:
  NetLogExporter* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(NetLogExporterAsyncWaiter);
};

class NetworkContextProxy;

template <typename ImplRefTraits>
class NetworkContextStub;

class NetworkContextRequestValidator;
class NetworkContextResponseValidator;

class  NetworkContext
    : public NetworkContextInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = true;

  using Proxy_ = NetworkContextProxy;

  template <typename ImplRefTraits>
  using Stub_ = NetworkContextStub<ImplRefTraits>;

  using RequestValidator_ = NetworkContextRequestValidator;
  using ResponseValidator_ = NetworkContextResponseValidator;
  enum MethodMinVersions : uint32_t {
    kCreateURLLoaderFactoryMinVersion = 0,
    kGetCookieManagerMinVersion = 0,
    kGetRestrictedCookieManagerMinVersion = 0,
    kClearNetworkingHistorySinceMinVersion = 0,
    kClearHttpCacheMinVersion = 0,
    kClearChannelIdsMinVersion = 0,
    kClearHttpAuthCacheMinVersion = 0,
    kClearReportingCacheReportsMinVersion = 0,
    kClearReportingCacheClientsMinVersion = 0,
    kClearNetworkErrorLoggingMinVersion = 0,
    kSetNetworkConditionsMinVersion = 0,
    kSetAcceptLanguageMinVersion = 0,
    kSetCTPolicyMinVersion = 0,
    kCreateUDPSocketMinVersion = 0,
    kCreateTCPServerSocketMinVersion = 0,
    kCreateTCPConnectedSocketMinVersion = 0,
    kCreateWebSocketMinVersion = 0,
    kCreateNetLogExporterMinVersion = 0,
    kBlockThirdPartyCookiesMinVersion = 0,
    kAddHSTSForTestingMinVersion = 0,
    kSetFailingHttpTransactionForTestingMinVersion = 0,
  };
  virtual ~NetworkContext() {}

  virtual void CreateURLLoaderFactory(::network::mojom::URLLoaderFactoryRequest url_loader_factory, URLLoaderFactoryParamsPtr params) = 0;

  virtual void GetCookieManager(::network::mojom::CookieManagerRequest cookie_manager) = 0;

  virtual void GetRestrictedCookieManager(::network::mojom::RestrictedCookieManagerRequest restricted_cookie_manager, int32_t render_process_id, int32_t render_frame_id) = 0;


  using ClearNetworkingHistorySinceCallback = base::OnceCallback<void()>;
  virtual void ClearNetworkingHistorySince(base::Time start_time, ClearNetworkingHistorySinceCallback callback) = 0;


  using ClearHttpCacheCallback = base::OnceCallback<void()>;
  virtual void ClearHttpCache(base::Time start_time, base::Time end_time, ClearDataFilterPtr filter, ClearHttpCacheCallback callback) = 0;


  using ClearChannelIdsCallback = base::OnceCallback<void()>;
  virtual void ClearChannelIds(base::Time start_time, base::Time end_time, ClearDataFilterPtr filter, ClearChannelIdsCallback callback) = 0;


  using ClearHttpAuthCacheCallback = base::OnceCallback<void()>;
  virtual void ClearHttpAuthCache(base::Time start_time, ClearHttpAuthCacheCallback callback) = 0;


  using ClearReportingCacheReportsCallback = base::OnceCallback<void()>;
  virtual void ClearReportingCacheReports(ClearDataFilterPtr filter, ClearReportingCacheReportsCallback callback) = 0;


  using ClearReportingCacheClientsCallback = base::OnceCallback<void()>;
  virtual void ClearReportingCacheClients(ClearDataFilterPtr filter, ClearReportingCacheClientsCallback callback) = 0;


  using ClearNetworkErrorLoggingCallback = base::OnceCallback<void()>;
  virtual void ClearNetworkErrorLogging(ClearDataFilterPtr filter, ClearNetworkErrorLoggingCallback callback) = 0;

  virtual void SetNetworkConditions(const std::string& profile_id, NetworkConditionsPtr conditions) = 0;

  virtual void SetAcceptLanguage(const std::string& new_accept_language) = 0;

  virtual void SetCTPolicy(const std::vector<std::string>& required_hosts, const std::vector<std::string>& excluded_hosts, const std::vector<std::string>& excluded_spkis, const std::vector<std::string>& excluded_legacy_spkis) = 0;

  virtual void CreateUDPSocket(::network::mojom::UDPSocketRequest request, ::network::mojom::UDPSocketReceiverPtr receiver) = 0;


  using CreateTCPServerSocketCallback = base::OnceCallback<void(int32_t, const base::Optional<net::IPEndPoint>&)>;
  virtual void CreateTCPServerSocket(const net::IPEndPoint& local_addr, uint32_t backlog, const net::MutableNetworkTrafficAnnotationTag& traffic_annotation, ::network::mojom::TCPServerSocketRequest socket, CreateTCPServerSocketCallback callback) = 0;


  using CreateTCPConnectedSocketCallback = base::OnceCallback<void(int32_t, mojo::ScopedDataPipeConsumerHandle, mojo::ScopedDataPipeProducerHandle)>;
  virtual void CreateTCPConnectedSocket(const base::Optional<net::IPEndPoint>& local_addr, const net::AddressList& remote_addr_list, const net::MutableNetworkTrafficAnnotationTag& traffic_annotation, ::network::mojom::TCPConnectedSocketRequest socket, ::network::mojom::SocketObserverPtr observer, CreateTCPConnectedSocketCallback callback) = 0;

  virtual void CreateWebSocket(::network::mojom::WebSocketRequest request, int32_t process_id, int32_t render_frame_id, const url::Origin& origin) = 0;

  virtual void CreateNetLogExporter(NetLogExporterRequest exporter) = 0;

  virtual void BlockThirdPartyCookies(bool block) = 0;

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  virtual bool AddHSTSForTesting(const std::string& host, base::Time expiry, bool include_subdomains);

  using AddHSTSForTestingCallback = base::OnceCallback<void()>;
  virtual void AddHSTSForTesting(const std::string& host, base::Time expiry, bool include_subdomains, AddHSTSForTestingCallback callback) = 0;

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  virtual bool SetFailingHttpTransactionForTesting(int32_t rv);

  using SetFailingHttpTransactionForTestingCallback = base::OnceCallback<void()>;
  virtual void SetFailingHttpTransactionForTesting(int32_t rv, SetFailingHttpTransactionForTestingCallback callback) = 0;
};
class  NetworkContextInterceptorForTesting : public NetworkContext {
  virtual NetworkContext* GetForwardingInterface() = 0;
  void CreateURLLoaderFactory(::network::mojom::URLLoaderFactoryRequest url_loader_factory, URLLoaderFactoryParamsPtr params) override;
  void GetCookieManager(::network::mojom::CookieManagerRequest cookie_manager) override;
  void GetRestrictedCookieManager(::network::mojom::RestrictedCookieManagerRequest restricted_cookie_manager, int32_t render_process_id, int32_t render_frame_id) override;
  void ClearNetworkingHistorySince(base::Time start_time, ClearNetworkingHistorySinceCallback callback) override;
  void ClearHttpCache(base::Time start_time, base::Time end_time, ClearDataFilterPtr filter, ClearHttpCacheCallback callback) override;
  void ClearChannelIds(base::Time start_time, base::Time end_time, ClearDataFilterPtr filter, ClearChannelIdsCallback callback) override;
  void ClearHttpAuthCache(base::Time start_time, ClearHttpAuthCacheCallback callback) override;
  void ClearReportingCacheReports(ClearDataFilterPtr filter, ClearReportingCacheReportsCallback callback) override;
  void ClearReportingCacheClients(ClearDataFilterPtr filter, ClearReportingCacheClientsCallback callback) override;
  void ClearNetworkErrorLogging(ClearDataFilterPtr filter, ClearNetworkErrorLoggingCallback callback) override;
  void SetNetworkConditions(const std::string& profile_id, NetworkConditionsPtr conditions) override;
  void SetAcceptLanguage(const std::string& new_accept_language) override;
  void SetCTPolicy(const std::vector<std::string>& required_hosts, const std::vector<std::string>& excluded_hosts, const std::vector<std::string>& excluded_spkis, const std::vector<std::string>& excluded_legacy_spkis) override;
  void CreateUDPSocket(::network::mojom::UDPSocketRequest request, ::network::mojom::UDPSocketReceiverPtr receiver) override;
  void CreateTCPServerSocket(const net::IPEndPoint& local_addr, uint32_t backlog, const net::MutableNetworkTrafficAnnotationTag& traffic_annotation, ::network::mojom::TCPServerSocketRequest socket, CreateTCPServerSocketCallback callback) override;
  void CreateTCPConnectedSocket(const base::Optional<net::IPEndPoint>& local_addr, const net::AddressList& remote_addr_list, const net::MutableNetworkTrafficAnnotationTag& traffic_annotation, ::network::mojom::TCPConnectedSocketRequest socket, ::network::mojom::SocketObserverPtr observer, CreateTCPConnectedSocketCallback callback) override;
  void CreateWebSocket(::network::mojom::WebSocketRequest request, int32_t process_id, int32_t render_frame_id, const url::Origin& origin) override;
  void CreateNetLogExporter(NetLogExporterRequest exporter) override;
  void BlockThirdPartyCookies(bool block) override;
  void AddHSTSForTesting(const std::string& host, base::Time expiry, bool include_subdomains, AddHSTSForTestingCallback callback) override;
  void SetFailingHttpTransactionForTesting(int32_t rv, SetFailingHttpTransactionForTestingCallback callback) override;
};
class  NetworkContextAsyncWaiter {
 public:
  explicit NetworkContextAsyncWaiter(NetworkContext* proxy);
  ~NetworkContextAsyncWaiter();
  void ClearNetworkingHistorySince(
      base::Time start_time);
  void ClearHttpCache(
      base::Time start_time, base::Time end_time, ClearDataFilterPtr filter);
  void ClearChannelIds(
      base::Time start_time, base::Time end_time, ClearDataFilterPtr filter);
  void ClearHttpAuthCache(
      base::Time start_time);
  void ClearReportingCacheReports(
      ClearDataFilterPtr filter);
  void ClearReportingCacheClients(
      ClearDataFilterPtr filter);
  void ClearNetworkErrorLogging(
      ClearDataFilterPtr filter);
  void CreateTCPServerSocket(
      const net::IPEndPoint& local_addr, uint32_t backlog, const net::MutableNetworkTrafficAnnotationTag& traffic_annotation, ::network::mojom::TCPServerSocketRequest socket, int32_t* out_result, base::Optional<net::IPEndPoint>* out_local_addr_out);
  void CreateTCPConnectedSocket(
      const base::Optional<net::IPEndPoint>& local_addr, const net::AddressList& remote_addr_list, const net::MutableNetworkTrafficAnnotationTag& traffic_annotation, ::network::mojom::TCPConnectedSocketRequest socket, ::network::mojom::SocketObserverPtr observer, int32_t* out_result, mojo::ScopedDataPipeConsumerHandle* out_receive_stream, mojo::ScopedDataPipeProducerHandle* out_send_stream);
  void AddHSTSForTesting(
      const std::string& host, base::Time expiry, bool include_subdomains);
  void SetFailingHttpTransactionForTesting(
      int32_t rv);

 private:
  NetworkContext* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(NetworkContextAsyncWaiter);
};

class  NetLogExporterProxy
    : public NetLogExporter {
 public:
  explicit NetLogExporterProxy(mojo::MessageReceiverWithResponder* receiver);
  void Start(base::File destination, base::Value extra_constants, NetLogExporter::CaptureMode capture_mode, uint64_t max_file_size, StartCallback callback) final;
  void Stop(base::Value polled_values, StopCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class  NetworkContextProxy
    : public NetworkContext {
 public:
  explicit NetworkContextProxy(mojo::MessageReceiverWithResponder* receiver);
  void CreateURLLoaderFactory(::network::mojom::URLLoaderFactoryRequest url_loader_factory, URLLoaderFactoryParamsPtr params) final;
  void GetCookieManager(::network::mojom::CookieManagerRequest cookie_manager) final;
  void GetRestrictedCookieManager(::network::mojom::RestrictedCookieManagerRequest restricted_cookie_manager, int32_t render_process_id, int32_t render_frame_id) final;
  void ClearNetworkingHistorySince(base::Time start_time, ClearNetworkingHistorySinceCallback callback) final;
  void ClearHttpCache(base::Time start_time, base::Time end_time, ClearDataFilterPtr filter, ClearHttpCacheCallback callback) final;
  void ClearChannelIds(base::Time start_time, base::Time end_time, ClearDataFilterPtr filter, ClearChannelIdsCallback callback) final;
  void ClearHttpAuthCache(base::Time start_time, ClearHttpAuthCacheCallback callback) final;
  void ClearReportingCacheReports(ClearDataFilterPtr filter, ClearReportingCacheReportsCallback callback) final;
  void ClearReportingCacheClients(ClearDataFilterPtr filter, ClearReportingCacheClientsCallback callback) final;
  void ClearNetworkErrorLogging(ClearDataFilterPtr filter, ClearNetworkErrorLoggingCallback callback) final;
  void SetNetworkConditions(const std::string& profile_id, NetworkConditionsPtr conditions) final;
  void SetAcceptLanguage(const std::string& new_accept_language) final;
  void SetCTPolicy(const std::vector<std::string>& required_hosts, const std::vector<std::string>& excluded_hosts, const std::vector<std::string>& excluded_spkis, const std::vector<std::string>& excluded_legacy_spkis) final;
  void CreateUDPSocket(::network::mojom::UDPSocketRequest request, ::network::mojom::UDPSocketReceiverPtr receiver) final;
  void CreateTCPServerSocket(const net::IPEndPoint& local_addr, uint32_t backlog, const net::MutableNetworkTrafficAnnotationTag& traffic_annotation, ::network::mojom::TCPServerSocketRequest socket, CreateTCPServerSocketCallback callback) final;
  void CreateTCPConnectedSocket(const base::Optional<net::IPEndPoint>& local_addr, const net::AddressList& remote_addr_list, const net::MutableNetworkTrafficAnnotationTag& traffic_annotation, ::network::mojom::TCPConnectedSocketRequest socket, ::network::mojom::SocketObserverPtr observer, CreateTCPConnectedSocketCallback callback) final;
  void CreateWebSocket(::network::mojom::WebSocketRequest request, int32_t process_id, int32_t render_frame_id, const url::Origin& origin) final;
  void CreateNetLogExporter(NetLogExporterRequest exporter) final;
  void BlockThirdPartyCookies(bool block) final;
  bool AddHSTSForTesting(const std::string& host, base::Time expiry, bool include_subdomains) final;
  void AddHSTSForTesting(const std::string& host, base::Time expiry, bool include_subdomains, AddHSTSForTestingCallback callback) final;
  bool SetFailingHttpTransactionForTesting(int32_t rv) final;
  void SetFailingHttpTransactionForTesting(int32_t rv, SetFailingHttpTransactionForTestingCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  NetLogExporterStubDispatch {
 public:
  static bool Accept(NetLogExporter* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      NetLogExporter* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<NetLogExporter>>
class NetLogExporterStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  NetLogExporterStub() {}
  ~NetLogExporterStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return NetLogExporterStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return NetLogExporterStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  NetworkContextStubDispatch {
 public:
  static bool Accept(NetworkContext* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      NetworkContext* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<NetworkContext>>
class NetworkContextStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  NetworkContextStub() {}
  ~NetworkContextStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return NetworkContextStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return NetworkContextStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  NetLogExporterRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  NetworkContextRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  NetLogExporterResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  NetworkContextResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





class  NetworkUsage {
 public:
  using DataView = NetworkUsageDataView;
  using Data_ = internal::NetworkUsage_Data;

  template <typename... Args>
  static NetworkUsagePtr New(Args&&... args) {
    return NetworkUsagePtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static NetworkUsagePtr From(const U& u) {
    return mojo::TypeConverter<NetworkUsagePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, NetworkUsage>::Convert(*this);
  }


  NetworkUsage();

  NetworkUsage(
      uint32_t process_id,
      uint32_t routing_id,
      int64_t total_bytes_received,
      int64_t total_bytes_sent);

  ~NetworkUsage();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = NetworkUsagePtr>
  NetworkUsagePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, NetworkUsage>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        NetworkUsage::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        NetworkUsage::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::NetworkUsage_UnserializedMessageContext<
            UserType, NetworkUsage::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<NetworkUsage::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return NetworkUsage::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::NetworkUsage_UnserializedMessageContext<
            UserType, NetworkUsage::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<NetworkUsage::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  uint32_t process_id;
  uint32_t routing_id;
  int64_t total_bytes_received;
  int64_t total_bytes_sent;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};


class  URLLoaderFactoryParams {
 public:
  using DataView = URLLoaderFactoryParamsDataView;
  using Data_ = internal::URLLoaderFactoryParams_Data;

  template <typename... Args>
  static URLLoaderFactoryParamsPtr New(Args&&... args) {
    return URLLoaderFactoryParamsPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static URLLoaderFactoryParamsPtr From(const U& u) {
    return mojo::TypeConverter<URLLoaderFactoryParamsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, URLLoaderFactoryParams>::Convert(*this);
  }


  URLLoaderFactoryParams();

  URLLoaderFactoryParams(
      uint32_t process_id,
      bool is_corb_enabled,
      const std::string& corb_excluded_initiator_scheme);

  ~URLLoaderFactoryParams();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = URLLoaderFactoryParamsPtr>
  URLLoaderFactoryParamsPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, URLLoaderFactoryParams>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        URLLoaderFactoryParams::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        URLLoaderFactoryParams::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::URLLoaderFactoryParams_UnserializedMessageContext<
            UserType, URLLoaderFactoryParams::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<URLLoaderFactoryParams::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return URLLoaderFactoryParams::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::URLLoaderFactoryParams_UnserializedMessageContext<
            UserType, URLLoaderFactoryParams::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<URLLoaderFactoryParams::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  uint32_t process_id;
  bool is_corb_enabled;
  std::string corb_excluded_initiator_scheme;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};




class  NetworkContextParams {
 public:
  using DataView = NetworkContextParamsDataView;
  using Data_ = internal::NetworkContextParams_Data;

  template <typename... Args>
  static NetworkContextParamsPtr New(Args&&... args) {
    return NetworkContextParamsPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static NetworkContextParamsPtr From(const U& u) {
    return mojo::TypeConverter<NetworkContextParamsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, NetworkContextParams>::Convert(*this);
  }


  NetworkContextParams();

  NetworkContextParams(
      const base::Optional<std::string>& context_name,
      const std::string& user_agent,
      const std::string& accept_language,
      bool enable_brotli,
      const std::string& quic_user_agent_id,
      ::proxy_resolver::mojom::ProxyResolverFactoryPtrInfo proxy_resolver_factory,
      const base::Optional<base::FilePath>& cookie_path,
      bool restore_old_session_cookies,
      bool persist_session_cookies,
      const base::Optional<base::FilePath>& channel_id_path,
      bool http_cache_enabled,
      int32_t http_cache_max_size,
      const base::Optional<base::FilePath>& http_cache_path,
      const base::Optional<base::FilePath>& http_server_properties_path,
      const base::Optional<base::FilePath>& transport_security_persister_path,
      bool enable_data_url_support,
      bool enable_file_url_support,
      bool enable_ftp_url_support,
      bool enforce_chrome_ct_policy,
      bool http_09_on_non_default_ports_enabled,
      ::network::mojom::SSLConfigPtr initial_ssl_config,
      ::network::mojom::SSLConfigClientRequest ssl_config_client_request,
      const base::Optional<net::ProxyConfigWithAnnotation>& initial_proxy_config,
      ::network::mojom::ProxyConfigClientRequest proxy_config_client_request,
      ::network::mojom::ProxyConfigPollerClientPtrInfo proxy_config_poller_client,
      bool pac_quick_check_enabled,
      bool dangerously_allow_pac_access_to_secure_urls,
      bool allow_gssapi_library_load,
      const std::string& gssapi_library_name,
      bool enable_certificate_reporting,
      std::vector<::network::mojom::CTLogInfoPtr> ct_logs);

  ~NetworkContextParams();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = NetworkContextParamsPtr>
  NetworkContextParamsPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, NetworkContextParams>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        NetworkContextParams::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        NetworkContextParams::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::NetworkContextParams_UnserializedMessageContext<
            UserType, NetworkContextParams::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<NetworkContextParams::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return NetworkContextParams::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::NetworkContextParams_UnserializedMessageContext<
            UserType, NetworkContextParams::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<NetworkContextParams::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  base::Optional<std::string> context_name;
  std::string user_agent;
  std::string accept_language;
  bool enable_brotli;
  std::string quic_user_agent_id;
  ::proxy_resolver::mojom::ProxyResolverFactoryPtrInfo proxy_resolver_factory;
  base::Optional<base::FilePath> cookie_path;
  bool restore_old_session_cookies;
  bool persist_session_cookies;
  base::Optional<base::FilePath> channel_id_path;
  bool http_cache_enabled;
  int32_t http_cache_max_size;
  base::Optional<base::FilePath> http_cache_path;
  base::Optional<base::FilePath> http_server_properties_path;
  base::Optional<base::FilePath> transport_security_persister_path;
  bool enable_data_url_support;
  bool enable_file_url_support;
  bool enable_ftp_url_support;
  bool enforce_chrome_ct_policy;
  bool http_09_on_non_default_ports_enabled;
  ::network::mojom::SSLConfigPtr initial_ssl_config;
  ::network::mojom::SSLConfigClientRequest ssl_config_client_request;
  base::Optional<net::ProxyConfigWithAnnotation> initial_proxy_config;
  ::network::mojom::ProxyConfigClientRequest proxy_config_client_request;
  ::network::mojom::ProxyConfigPollerClientPtrInfo proxy_config_poller_client;
  bool pac_quick_check_enabled;
  bool dangerously_allow_pac_access_to_secure_urls;
  bool allow_gssapi_library_load;
  std::string gssapi_library_name;
  bool enable_certificate_reporting;
  std::vector<::network::mojom::CTLogInfoPtr> ct_logs;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(NetworkContextParams);
};


class  NetworkConditions {
 public:
  using DataView = NetworkConditionsDataView;
  using Data_ = internal::NetworkConditions_Data;

  template <typename... Args>
  static NetworkConditionsPtr New(Args&&... args) {
    return NetworkConditionsPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static NetworkConditionsPtr From(const U& u) {
    return mojo::TypeConverter<NetworkConditionsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, NetworkConditions>::Convert(*this);
  }


  NetworkConditions();

  NetworkConditions(
      bool offline,
      base::TimeDelta latency,
      double download_throughput,
      double upload_throughput);

  ~NetworkConditions();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = NetworkConditionsPtr>
  NetworkConditionsPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, NetworkConditions>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        NetworkConditions::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        NetworkConditions::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::NetworkConditions_UnserializedMessageContext<
            UserType, NetworkConditions::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<NetworkConditions::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return NetworkConditions::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::NetworkConditions_UnserializedMessageContext<
            UserType, NetworkConditions::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<NetworkConditions::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  bool offline;
  base::TimeDelta latency;
  double download_throughput;
  double upload_throughput;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};


class  ClearDataFilter {
 public:
  using DataView = ClearDataFilterDataView;
  using Data_ = internal::ClearDataFilter_Data;using Type = ClearDataFilter_Type;

  template <typename... Args>
  static ClearDataFilterPtr New(Args&&... args) {
    return ClearDataFilterPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static ClearDataFilterPtr From(const U& u) {
    return mojo::TypeConverter<ClearDataFilterPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, ClearDataFilter>::Convert(*this);
  }


  ClearDataFilter();

  ClearDataFilter(
      ClearDataFilter::Type type,
      const std::vector<std::string>& domains,
      const std::vector<url::Origin>& origins);

  ~ClearDataFilter();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = ClearDataFilterPtr>
  ClearDataFilterPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, ClearDataFilter>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        ClearDataFilter::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        ClearDataFilter::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::ClearDataFilter_UnserializedMessageContext<
            UserType, ClearDataFilter::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<ClearDataFilter::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return ClearDataFilter::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::ClearDataFilter_UnserializedMessageContext<
            UserType, ClearDataFilter::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<ClearDataFilter::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  ClearDataFilter::Type type;
  std::vector<std::string> domains;
  std::vector<url::Origin> origins;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};



template <typename StructPtrType>
NetworkContextParamsPtr NetworkContextParams::Clone() const {
  return New(
      mojo::Clone(context_name),
      mojo::Clone(user_agent),
      mojo::Clone(accept_language),
      mojo::Clone(enable_brotli),
      mojo::Clone(quic_user_agent_id),
      mojo::Clone(proxy_resolver_factory),
      mojo::Clone(cookie_path),
      mojo::Clone(restore_old_session_cookies),
      mojo::Clone(persist_session_cookies),
      mojo::Clone(channel_id_path),
      mojo::Clone(http_cache_enabled),
      mojo::Clone(http_cache_max_size),
      mojo::Clone(http_cache_path),
      mojo::Clone(http_server_properties_path),
      mojo::Clone(transport_security_persister_path),
      mojo::Clone(enable_data_url_support),
      mojo::Clone(enable_file_url_support),
      mojo::Clone(enable_ftp_url_support),
      mojo::Clone(enforce_chrome_ct_policy),
      mojo::Clone(http_09_on_non_default_ports_enabled),
      mojo::Clone(initial_ssl_config),
      mojo::Clone(ssl_config_client_request),
      mojo::Clone(initial_proxy_config),
      mojo::Clone(proxy_config_client_request),
      mojo::Clone(proxy_config_poller_client),
      mojo::Clone(pac_quick_check_enabled),
      mojo::Clone(dangerously_allow_pac_access_to_secure_urls),
      mojo::Clone(allow_gssapi_library_load),
      mojo::Clone(gssapi_library_name),
      mojo::Clone(enable_certificate_reporting),
      mojo::Clone(ct_logs)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, NetworkContextParams>::value>::type*>
bool NetworkContextParams::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->context_name, other_struct.context_name))
    return false;
  if (!mojo::Equals(this->user_agent, other_struct.user_agent))
    return false;
  if (!mojo::Equals(this->accept_language, other_struct.accept_language))
    return false;
  if (!mojo::Equals(this->enable_brotli, other_struct.enable_brotli))
    return false;
  if (!mojo::Equals(this->quic_user_agent_id, other_struct.quic_user_agent_id))
    return false;
  if (!mojo::Equals(this->proxy_resolver_factory, other_struct.proxy_resolver_factory))
    return false;
  if (!mojo::Equals(this->cookie_path, other_struct.cookie_path))
    return false;
  if (!mojo::Equals(this->restore_old_session_cookies, other_struct.restore_old_session_cookies))
    return false;
  if (!mojo::Equals(this->persist_session_cookies, other_struct.persist_session_cookies))
    return false;
  if (!mojo::Equals(this->channel_id_path, other_struct.channel_id_path))
    return false;
  if (!mojo::Equals(this->http_cache_enabled, other_struct.http_cache_enabled))
    return false;
  if (!mojo::Equals(this->http_cache_max_size, other_struct.http_cache_max_size))
    return false;
  if (!mojo::Equals(this->http_cache_path, other_struct.http_cache_path))
    return false;
  if (!mojo::Equals(this->http_server_properties_path, other_struct.http_server_properties_path))
    return false;
  if (!mojo::Equals(this->transport_security_persister_path, other_struct.transport_security_persister_path))
    return false;
  if (!mojo::Equals(this->enable_data_url_support, other_struct.enable_data_url_support))
    return false;
  if (!mojo::Equals(this->enable_file_url_support, other_struct.enable_file_url_support))
    return false;
  if (!mojo::Equals(this->enable_ftp_url_support, other_struct.enable_ftp_url_support))
    return false;
  if (!mojo::Equals(this->enforce_chrome_ct_policy, other_struct.enforce_chrome_ct_policy))
    return false;
  if (!mojo::Equals(this->http_09_on_non_default_ports_enabled, other_struct.http_09_on_non_default_ports_enabled))
    return false;
  if (!mojo::Equals(this->initial_ssl_config, other_struct.initial_ssl_config))
    return false;
  if (!mojo::Equals(this->ssl_config_client_request, other_struct.ssl_config_client_request))
    return false;
  if (!mojo::Equals(this->initial_proxy_config, other_struct.initial_proxy_config))
    return false;
  if (!mojo::Equals(this->proxy_config_client_request, other_struct.proxy_config_client_request))
    return false;
  if (!mojo::Equals(this->proxy_config_poller_client, other_struct.proxy_config_poller_client))
    return false;
  if (!mojo::Equals(this->pac_quick_check_enabled, other_struct.pac_quick_check_enabled))
    return false;
  if (!mojo::Equals(this->dangerously_allow_pac_access_to_secure_urls, other_struct.dangerously_allow_pac_access_to_secure_urls))
    return false;
  if (!mojo::Equals(this->allow_gssapi_library_load, other_struct.allow_gssapi_library_load))
    return false;
  if (!mojo::Equals(this->gssapi_library_name, other_struct.gssapi_library_name))
    return false;
  if (!mojo::Equals(this->enable_certificate_reporting, other_struct.enable_certificate_reporting))
    return false;
  if (!mojo::Equals(this->ct_logs, other_struct.ct_logs))
    return false;
  return true;
}
template <typename StructPtrType>
NetworkConditionsPtr NetworkConditions::Clone() const {
  return New(
      mojo::Clone(offline),
      mojo::Clone(latency),
      mojo::Clone(download_throughput),
      mojo::Clone(upload_throughput)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, NetworkConditions>::value>::type*>
bool NetworkConditions::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->offline, other_struct.offline))
    return false;
  if (!mojo::Equals(this->latency, other_struct.latency))
    return false;
  if (!mojo::Equals(this->download_throughput, other_struct.download_throughput))
    return false;
  if (!mojo::Equals(this->upload_throughput, other_struct.upload_throughput))
    return false;
  return true;
}
template <typename StructPtrType>
ClearDataFilterPtr ClearDataFilter::Clone() const {
  return New(
      mojo::Clone(type),
      mojo::Clone(domains),
      mojo::Clone(origins)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, ClearDataFilter>::value>::type*>
bool ClearDataFilter::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->type, other_struct.type))
    return false;
  if (!mojo::Equals(this->domains, other_struct.domains))
    return false;
  if (!mojo::Equals(this->origins, other_struct.origins))
    return false;
  return true;
}
template <typename StructPtrType>
NetworkUsagePtr NetworkUsage::Clone() const {
  return New(
      mojo::Clone(process_id),
      mojo::Clone(routing_id),
      mojo::Clone(total_bytes_received),
      mojo::Clone(total_bytes_sent)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, NetworkUsage>::value>::type*>
bool NetworkUsage::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->process_id, other_struct.process_id))
    return false;
  if (!mojo::Equals(this->routing_id, other_struct.routing_id))
    return false;
  if (!mojo::Equals(this->total_bytes_received, other_struct.total_bytes_received))
    return false;
  if (!mojo::Equals(this->total_bytes_sent, other_struct.total_bytes_sent))
    return false;
  return true;
}
template <typename StructPtrType>
URLLoaderFactoryParamsPtr URLLoaderFactoryParams::Clone() const {
  return New(
      mojo::Clone(process_id),
      mojo::Clone(is_corb_enabled),
      mojo::Clone(corb_excluded_initiator_scheme)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, URLLoaderFactoryParams>::value>::type*>
bool URLLoaderFactoryParams::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->process_id, other_struct.process_id))
    return false;
  if (!mojo::Equals(this->is_corb_enabled, other_struct.is_corb_enabled))
    return false;
  if (!mojo::Equals(this->corb_excluded_initiator_scheme, other_struct.corb_excluded_initiator_scheme))
    return false;
  return true;
}


}  // namespace mojom
}  // namespace network

namespace mojo {


template <>
struct  StructTraits<::network::mojom::NetworkContextParams::DataView,
                                         ::network::mojom::NetworkContextParamsPtr> {
  static bool IsNull(const ::network::mojom::NetworkContextParamsPtr& input) { return !input; }
  static void SetToNull(::network::mojom::NetworkContextParamsPtr* output) { output->reset(); }

  static const decltype(::network::mojom::NetworkContextParams::context_name)& context_name(
      const ::network::mojom::NetworkContextParamsPtr& input) {
    return input->context_name;
  }

  static const decltype(::network::mojom::NetworkContextParams::user_agent)& user_agent(
      const ::network::mojom::NetworkContextParamsPtr& input) {
    return input->user_agent;
  }

  static const decltype(::network::mojom::NetworkContextParams::accept_language)& accept_language(
      const ::network::mojom::NetworkContextParamsPtr& input) {
    return input->accept_language;
  }

  static decltype(::network::mojom::NetworkContextParams::enable_brotli) enable_brotli(
      const ::network::mojom::NetworkContextParamsPtr& input) {
    return input->enable_brotli;
  }

  static const decltype(::network::mojom::NetworkContextParams::quic_user_agent_id)& quic_user_agent_id(
      const ::network::mojom::NetworkContextParamsPtr& input) {
    return input->quic_user_agent_id;
  }

  static  decltype(::network::mojom::NetworkContextParams::proxy_resolver_factory)& proxy_resolver_factory(
       ::network::mojom::NetworkContextParamsPtr& input) {
    return input->proxy_resolver_factory;
  }

  static const decltype(::network::mojom::NetworkContextParams::cookie_path)& cookie_path(
      const ::network::mojom::NetworkContextParamsPtr& input) {
    return input->cookie_path;
  }

  static decltype(::network::mojom::NetworkContextParams::restore_old_session_cookies) restore_old_session_cookies(
      const ::network::mojom::NetworkContextParamsPtr& input) {
    return input->restore_old_session_cookies;
  }

  static decltype(::network::mojom::NetworkContextParams::persist_session_cookies) persist_session_cookies(
      const ::network::mojom::NetworkContextParamsPtr& input) {
    return input->persist_session_cookies;
  }

  static const decltype(::network::mojom::NetworkContextParams::channel_id_path)& channel_id_path(
      const ::network::mojom::NetworkContextParamsPtr& input) {
    return input->channel_id_path;
  }

  static decltype(::network::mojom::NetworkContextParams::http_cache_enabled) http_cache_enabled(
      const ::network::mojom::NetworkContextParamsPtr& input) {
    return input->http_cache_enabled;
  }

  static decltype(::network::mojom::NetworkContextParams::http_cache_max_size) http_cache_max_size(
      const ::network::mojom::NetworkContextParamsPtr& input) {
    return input->http_cache_max_size;
  }

  static const decltype(::network::mojom::NetworkContextParams::http_cache_path)& http_cache_path(
      const ::network::mojom::NetworkContextParamsPtr& input) {
    return input->http_cache_path;
  }

  static const decltype(::network::mojom::NetworkContextParams::http_server_properties_path)& http_server_properties_path(
      const ::network::mojom::NetworkContextParamsPtr& input) {
    return input->http_server_properties_path;
  }

  static const decltype(::network::mojom::NetworkContextParams::transport_security_persister_path)& transport_security_persister_path(
      const ::network::mojom::NetworkContextParamsPtr& input) {
    return input->transport_security_persister_path;
  }

  static decltype(::network::mojom::NetworkContextParams::enable_data_url_support) enable_data_url_support(
      const ::network::mojom::NetworkContextParamsPtr& input) {
    return input->enable_data_url_support;
  }

  static decltype(::network::mojom::NetworkContextParams::enable_file_url_support) enable_file_url_support(
      const ::network::mojom::NetworkContextParamsPtr& input) {
    return input->enable_file_url_support;
  }

  static decltype(::network::mojom::NetworkContextParams::enable_ftp_url_support) enable_ftp_url_support(
      const ::network::mojom::NetworkContextParamsPtr& input) {
    return input->enable_ftp_url_support;
  }

  static decltype(::network::mojom::NetworkContextParams::enforce_chrome_ct_policy) enforce_chrome_ct_policy(
      const ::network::mojom::NetworkContextParamsPtr& input) {
    return input->enforce_chrome_ct_policy;
  }

  static decltype(::network::mojom::NetworkContextParams::http_09_on_non_default_ports_enabled) http_09_on_non_default_ports_enabled(
      const ::network::mojom::NetworkContextParamsPtr& input) {
    return input->http_09_on_non_default_ports_enabled;
  }

  static const decltype(::network::mojom::NetworkContextParams::initial_ssl_config)& initial_ssl_config(
      const ::network::mojom::NetworkContextParamsPtr& input) {
    return input->initial_ssl_config;
  }

  static  decltype(::network::mojom::NetworkContextParams::ssl_config_client_request)& ssl_config_client_request(
       ::network::mojom::NetworkContextParamsPtr& input) {
    return input->ssl_config_client_request;
  }

  static const decltype(::network::mojom::NetworkContextParams::initial_proxy_config)& initial_proxy_config(
      const ::network::mojom::NetworkContextParamsPtr& input) {
    return input->initial_proxy_config;
  }

  static  decltype(::network::mojom::NetworkContextParams::proxy_config_client_request)& proxy_config_client_request(
       ::network::mojom::NetworkContextParamsPtr& input) {
    return input->proxy_config_client_request;
  }

  static  decltype(::network::mojom::NetworkContextParams::proxy_config_poller_client)& proxy_config_poller_client(
       ::network::mojom::NetworkContextParamsPtr& input) {
    return input->proxy_config_poller_client;
  }

  static decltype(::network::mojom::NetworkContextParams::pac_quick_check_enabled) pac_quick_check_enabled(
      const ::network::mojom::NetworkContextParamsPtr& input) {
    return input->pac_quick_check_enabled;
  }

  static decltype(::network::mojom::NetworkContextParams::dangerously_allow_pac_access_to_secure_urls) dangerously_allow_pac_access_to_secure_urls(
      const ::network::mojom::NetworkContextParamsPtr& input) {
    return input->dangerously_allow_pac_access_to_secure_urls;
  }

  static decltype(::network::mojom::NetworkContextParams::allow_gssapi_library_load) allow_gssapi_library_load(
      const ::network::mojom::NetworkContextParamsPtr& input) {
    return input->allow_gssapi_library_load;
  }

  static const decltype(::network::mojom::NetworkContextParams::gssapi_library_name)& gssapi_library_name(
      const ::network::mojom::NetworkContextParamsPtr& input) {
    return input->gssapi_library_name;
  }

  static decltype(::network::mojom::NetworkContextParams::enable_certificate_reporting) enable_certificate_reporting(
      const ::network::mojom::NetworkContextParamsPtr& input) {
    return input->enable_certificate_reporting;
  }

  static const decltype(::network::mojom::NetworkContextParams::ct_logs)& ct_logs(
      const ::network::mojom::NetworkContextParamsPtr& input) {
    return input->ct_logs;
  }

  static bool Read(::network::mojom::NetworkContextParams::DataView input, ::network::mojom::NetworkContextParamsPtr* output);
};


template <>
struct  StructTraits<::network::mojom::NetworkConditions::DataView,
                                         ::network::mojom::NetworkConditionsPtr> {
  static bool IsNull(const ::network::mojom::NetworkConditionsPtr& input) { return !input; }
  static void SetToNull(::network::mojom::NetworkConditionsPtr* output) { output->reset(); }

  static decltype(::network::mojom::NetworkConditions::offline) offline(
      const ::network::mojom::NetworkConditionsPtr& input) {
    return input->offline;
  }

  static const decltype(::network::mojom::NetworkConditions::latency)& latency(
      const ::network::mojom::NetworkConditionsPtr& input) {
    return input->latency;
  }

  static decltype(::network::mojom::NetworkConditions::download_throughput) download_throughput(
      const ::network::mojom::NetworkConditionsPtr& input) {
    return input->download_throughput;
  }

  static decltype(::network::mojom::NetworkConditions::upload_throughput) upload_throughput(
      const ::network::mojom::NetworkConditionsPtr& input) {
    return input->upload_throughput;
  }

  static bool Read(::network::mojom::NetworkConditions::DataView input, ::network::mojom::NetworkConditionsPtr* output);
};


template <>
struct  StructTraits<::network::mojom::ClearDataFilter::DataView,
                                         ::network::mojom::ClearDataFilterPtr> {
  static bool IsNull(const ::network::mojom::ClearDataFilterPtr& input) { return !input; }
  static void SetToNull(::network::mojom::ClearDataFilterPtr* output) { output->reset(); }

  static decltype(::network::mojom::ClearDataFilter::type) type(
      const ::network::mojom::ClearDataFilterPtr& input) {
    return input->type;
  }

  static const decltype(::network::mojom::ClearDataFilter::domains)& domains(
      const ::network::mojom::ClearDataFilterPtr& input) {
    return input->domains;
  }

  static const decltype(::network::mojom::ClearDataFilter::origins)& origins(
      const ::network::mojom::ClearDataFilterPtr& input) {
    return input->origins;
  }

  static bool Read(::network::mojom::ClearDataFilter::DataView input, ::network::mojom::ClearDataFilterPtr* output);
};


template <>
struct  StructTraits<::network::mojom::NetworkUsage::DataView,
                                         ::network::mojom::NetworkUsagePtr> {
  static bool IsNull(const ::network::mojom::NetworkUsagePtr& input) { return !input; }
  static void SetToNull(::network::mojom::NetworkUsagePtr* output) { output->reset(); }

  static decltype(::network::mojom::NetworkUsage::process_id) process_id(
      const ::network::mojom::NetworkUsagePtr& input) {
    return input->process_id;
  }

  static decltype(::network::mojom::NetworkUsage::routing_id) routing_id(
      const ::network::mojom::NetworkUsagePtr& input) {
    return input->routing_id;
  }

  static decltype(::network::mojom::NetworkUsage::total_bytes_received) total_bytes_received(
      const ::network::mojom::NetworkUsagePtr& input) {
    return input->total_bytes_received;
  }

  static decltype(::network::mojom::NetworkUsage::total_bytes_sent) total_bytes_sent(
      const ::network::mojom::NetworkUsagePtr& input) {
    return input->total_bytes_sent;
  }

  static bool Read(::network::mojom::NetworkUsage::DataView input, ::network::mojom::NetworkUsagePtr* output);
};


template <>
struct  StructTraits<::network::mojom::URLLoaderFactoryParams::DataView,
                                         ::network::mojom::URLLoaderFactoryParamsPtr> {
  static bool IsNull(const ::network::mojom::URLLoaderFactoryParamsPtr& input) { return !input; }
  static void SetToNull(::network::mojom::URLLoaderFactoryParamsPtr* output) { output->reset(); }

  static decltype(::network::mojom::URLLoaderFactoryParams::process_id) process_id(
      const ::network::mojom::URLLoaderFactoryParamsPtr& input) {
    return input->process_id;
  }

  static decltype(::network::mojom::URLLoaderFactoryParams::is_corb_enabled) is_corb_enabled(
      const ::network::mojom::URLLoaderFactoryParamsPtr& input) {
    return input->is_corb_enabled;
  }

  static const decltype(::network::mojom::URLLoaderFactoryParams::corb_excluded_initiator_scheme)& corb_excluded_initiator_scheme(
      const ::network::mojom::URLLoaderFactoryParamsPtr& input) {
    return input->corb_excluded_initiator_scheme;
  }

  static bool Read(::network::mojom::URLLoaderFactoryParams::DataView input, ::network::mojom::URLLoaderFactoryParamsPtr* output);
};

}  // namespace mojo

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_CONTEXT_MOJOM_H_