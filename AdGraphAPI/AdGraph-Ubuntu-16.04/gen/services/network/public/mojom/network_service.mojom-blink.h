// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_SERVICE_MOJOM_BLINK_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_SERVICE_MOJOM_BLINK_H_

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
#include "services/network/public/mojom/network_service.mojom-shared.h"
#include "services/network/public/mojom/network_change_manager.mojom-blink.h"
#include "services/network/public/mojom/network_context.mojom-blink.h"
#include "services/network/public/mojom/url_loader.mojom-blink.h"
#include "services/network/public/mojom/network_param.mojom-blink.h"
#include "services/network/public/mojom/signed_tree_head.mojom-blink.h"
#include "services/network/public/mojom/url_loader_factory.mojom-blink.h"
#include "url/mojom/origin.mojom-blink.h"
#include "url/mojom/url.mojom-blink.h"

#include "mojo/public/cpp/bindings/lib/wtf_clone_equals_util.h"
#include "mojo/public/cpp/bindings/lib/wtf_hash_util.h"
#include "third_party/blink/renderer/platform/mojo/revocable_interface_ptr.h"
#include "third_party/blink/renderer/platform/wtf/hash_functions.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

#include "mojo/public/cpp/bindings/associated_interface_ptr.h"
#include "mojo/public/cpp/bindings/associated_interface_ptr_info.h"
#include "mojo/public/cpp/bindings/associated_interface_request.h"
#include "mojo/public/cpp/bindings/interface_ptr.h"
#include "mojo/public/cpp/bindings/interface_request.h"
#include "mojo/public/cpp/bindings/lib/control_message_handler.h"
#include "mojo/public/cpp/bindings/raw_ptr_impl_ref_traits.h"
#include "mojo/public/cpp/bindings/thread_safe_interface_ptr.h"
#include "third_party/blink/renderer/platform/mojo/revocable_interface_ptr.h"


#include "mojo/public/cpp/bindings/lib/native_enum_serialization.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "third_party/blink/public/platform/web_common.h"


namespace network {
namespace mojom {
namespace blink {
class SSLPrivateKey;
using SSLPrivateKeyPtr = mojo::InterfacePtr<SSLPrivateKey>;
using RevocableSSLPrivateKeyPtr = ::blink::RevocableInterfacePtr<SSLPrivateKey>;
using SSLPrivateKeyPtrInfo = mojo::InterfacePtrInfo<SSLPrivateKey>;
using ThreadSafeSSLPrivateKeyPtr =
    mojo::ThreadSafeInterfacePtr<SSLPrivateKey>;
using SSLPrivateKeyRequest = mojo::InterfaceRequest<SSLPrivateKey>;
using SSLPrivateKeyAssociatedPtr =
    mojo::AssociatedInterfacePtr<SSLPrivateKey>;
using ThreadSafeSSLPrivateKeyAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<SSLPrivateKey>;
using SSLPrivateKeyAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<SSLPrivateKey>;
using SSLPrivateKeyAssociatedRequest =
    mojo::AssociatedInterfaceRequest<SSLPrivateKey>;

class AuthChallengeResponder;
using AuthChallengeResponderPtr = mojo::InterfacePtr<AuthChallengeResponder>;
using RevocableAuthChallengeResponderPtr = ::blink::RevocableInterfacePtr<AuthChallengeResponder>;
using AuthChallengeResponderPtrInfo = mojo::InterfacePtrInfo<AuthChallengeResponder>;
using ThreadSafeAuthChallengeResponderPtr =
    mojo::ThreadSafeInterfacePtr<AuthChallengeResponder>;
using AuthChallengeResponderRequest = mojo::InterfaceRequest<AuthChallengeResponder>;
using AuthChallengeResponderAssociatedPtr =
    mojo::AssociatedInterfacePtr<AuthChallengeResponder>;
using ThreadSafeAuthChallengeResponderAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<AuthChallengeResponder>;
using AuthChallengeResponderAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<AuthChallengeResponder>;
using AuthChallengeResponderAssociatedRequest =
    mojo::AssociatedInterfaceRequest<AuthChallengeResponder>;

class NetworkServiceClient;
using NetworkServiceClientPtr = mojo::InterfacePtr<NetworkServiceClient>;
using RevocableNetworkServiceClientPtr = ::blink::RevocableInterfacePtr<NetworkServiceClient>;
using NetworkServiceClientPtrInfo = mojo::InterfacePtrInfo<NetworkServiceClient>;
using ThreadSafeNetworkServiceClientPtr =
    mojo::ThreadSafeInterfacePtr<NetworkServiceClient>;
using NetworkServiceClientRequest = mojo::InterfaceRequest<NetworkServiceClient>;
using NetworkServiceClientAssociatedPtr =
    mojo::AssociatedInterfacePtr<NetworkServiceClient>;
using ThreadSafeNetworkServiceClientAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<NetworkServiceClient>;
using NetworkServiceClientAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<NetworkServiceClient>;
using NetworkServiceClientAssociatedRequest =
    mojo::AssociatedInterfaceRequest<NetworkServiceClient>;

class NetworkService;
using NetworkServicePtr = mojo::InterfacePtr<NetworkService>;
using RevocableNetworkServicePtr = ::blink::RevocableInterfacePtr<NetworkService>;
using NetworkServicePtrInfo = mojo::InterfacePtrInfo<NetworkService>;
using ThreadSafeNetworkServicePtr =
    mojo::ThreadSafeInterfacePtr<NetworkService>;
using NetworkServiceRequest = mojo::InterfaceRequest<NetworkService>;
using NetworkServiceAssociatedPtr =
    mojo::AssociatedInterfacePtr<NetworkService>;
using ThreadSafeNetworkServiceAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<NetworkService>;
using NetworkServiceAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<NetworkService>;
using NetworkServiceAssociatedRequest =
    mojo::AssociatedInterfaceRequest<NetworkService>;


class SSLPrivateKeyProxy;

template <typename ImplRefTraits>
class SSLPrivateKeyStub;

class SSLPrivateKeyRequestValidator;
class SSLPrivateKeyResponseValidator;

class BLINK_PLATFORM_EXPORT SSLPrivateKey
    : public SSLPrivateKeyInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = SSLPrivateKeyProxy;

  template <typename ImplRefTraits>
  using Stub_ = SSLPrivateKeyStub<ImplRefTraits>;

  using RequestValidator_ = SSLPrivateKeyRequestValidator;
  using ResponseValidator_ = SSLPrivateKeyResponseValidator;
  enum MethodMinVersions : uint32_t {
    kSignMinVersion = 0,
  };
  virtual ~SSLPrivateKey() {}


  using SignCallback = base::OnceCallback<void(int32_t, const WTF::Vector<uint8_t>&)>;
  virtual void Sign(uint16_t algorithm, const WTF::Vector<uint8_t>& input, SignCallback callback) = 0;
};
class BLINK_PLATFORM_EXPORT SSLPrivateKeyInterceptorForTesting : public SSLPrivateKey {
  virtual SSLPrivateKey* GetForwardingInterface() = 0;
  void Sign(uint16_t algorithm, const WTF::Vector<uint8_t>& input, SignCallback callback) override;
};
class BLINK_PLATFORM_EXPORT SSLPrivateKeyAsyncWaiter {
 public:
  explicit SSLPrivateKeyAsyncWaiter(SSLPrivateKey* proxy);
  ~SSLPrivateKeyAsyncWaiter();
  void Sign(
      uint16_t algorithm, const WTF::Vector<uint8_t>& input, int32_t* out_net_error, WTF::Vector<uint8_t>* out_signature);

 private:
  SSLPrivateKey* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(SSLPrivateKeyAsyncWaiter);
};

class AuthChallengeResponderProxy;

template <typename ImplRefTraits>
class AuthChallengeResponderStub;

class AuthChallengeResponderRequestValidator;

class BLINK_PLATFORM_EXPORT AuthChallengeResponder
    : public AuthChallengeResponderInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = AuthChallengeResponderProxy;

  template <typename ImplRefTraits>
  using Stub_ = AuthChallengeResponderStub<ImplRefTraits>;

  using RequestValidator_ = AuthChallengeResponderRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kOnAuthCredentialsMinVersion = 0,
  };
  virtual ~AuthChallengeResponder() {}

  virtual void OnAuthCredentials(::network::mojom::blink::AuthCredentialsPtr credentials) = 0;
};
class BLINK_PLATFORM_EXPORT AuthChallengeResponderInterceptorForTesting : public AuthChallengeResponder {
  virtual AuthChallengeResponder* GetForwardingInterface() = 0;
  void OnAuthCredentials(::network::mojom::blink::AuthCredentialsPtr credentials) override;
};
class BLINK_PLATFORM_EXPORT AuthChallengeResponderAsyncWaiter {
 public:
  explicit AuthChallengeResponderAsyncWaiter(AuthChallengeResponder* proxy);
  ~AuthChallengeResponderAsyncWaiter();

 private:
  AuthChallengeResponder* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(AuthChallengeResponderAsyncWaiter);
};

class NetworkServiceClientProxy;

template <typename ImplRefTraits>
class NetworkServiceClientStub;

class NetworkServiceClientRequestValidator;
class NetworkServiceClientResponseValidator;

class BLINK_PLATFORM_EXPORT NetworkServiceClient
    : public NetworkServiceClientInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = NetworkServiceClientProxy;

  template <typename ImplRefTraits>
  using Stub_ = NetworkServiceClientStub<ImplRefTraits>;

  using RequestValidator_ = NetworkServiceClientRequestValidator;
  using ResponseValidator_ = NetworkServiceClientResponseValidator;
  enum MethodMinVersions : uint32_t {
    kOnAuthRequiredMinVersion = 0,
    kOnCertificateRequestedMinVersion = 0,
    kOnSSLCertificateErrorMinVersion = 0,
  };
  virtual ~NetworkServiceClient() {}

  virtual void OnAuthRequired(uint32_t process_id, uint32_t routing_id, uint32_t request_id, const ::blink::KURL& url, const ::blink::KURL& site_for_cookies, bool first_auth_attempt, ::network::mojom::blink::AuthChallengeInfoPtr auth_info, int32_t resource_type, AuthChallengeResponderPtr auth_challenge_responder) = 0;


  using OnCertificateRequestedCallback = base::OnceCallback<void(::network::mojom::blink::X509CertificatePtr, const WTF::Vector<uint16_t>&, SSLPrivateKeyPtr, bool)>;
  virtual void OnCertificateRequested(uint32_t process_id, uint32_t routing_id, uint32_t request_id, ::network::mojom::blink::SSLCertRequestInfoPtr cert_info, OnCertificateRequestedCallback callback) = 0;


  using OnSSLCertificateErrorCallback = base::OnceCallback<void(int32_t)>;
  virtual void OnSSLCertificateError(uint32_t process_id, uint32_t routing_id, uint32_t request_id, int32_t resource_type, const ::blink::KURL& url, ::network::mojom::blink::SSLInfoPtr ssl_info, bool fatal, OnSSLCertificateErrorCallback callback) = 0;
};
class BLINK_PLATFORM_EXPORT NetworkServiceClientInterceptorForTesting : public NetworkServiceClient {
  virtual NetworkServiceClient* GetForwardingInterface() = 0;
  void OnAuthRequired(uint32_t process_id, uint32_t routing_id, uint32_t request_id, const ::blink::KURL& url, const ::blink::KURL& site_for_cookies, bool first_auth_attempt, ::network::mojom::blink::AuthChallengeInfoPtr auth_info, int32_t resource_type, AuthChallengeResponderPtr auth_challenge_responder) override;
  void OnCertificateRequested(uint32_t process_id, uint32_t routing_id, uint32_t request_id, ::network::mojom::blink::SSLCertRequestInfoPtr cert_info, OnCertificateRequestedCallback callback) override;
  void OnSSLCertificateError(uint32_t process_id, uint32_t routing_id, uint32_t request_id, int32_t resource_type, const ::blink::KURL& url, ::network::mojom::blink::SSLInfoPtr ssl_info, bool fatal, OnSSLCertificateErrorCallback callback) override;
};
class BLINK_PLATFORM_EXPORT NetworkServiceClientAsyncWaiter {
 public:
  explicit NetworkServiceClientAsyncWaiter(NetworkServiceClient* proxy);
  ~NetworkServiceClientAsyncWaiter();
  void OnCertificateRequested(
      uint32_t process_id, uint32_t routing_id, uint32_t request_id, ::network::mojom::blink::SSLCertRequestInfoPtr cert_info, ::network::mojom::blink::X509CertificatePtr* out_x509_certificate, WTF::Vector<uint16_t>* out_algorithm_preferences, SSLPrivateKeyPtr* out_ssl_private_key, bool* out_cancel_certificate_selection);
  void OnSSLCertificateError(
      uint32_t process_id, uint32_t routing_id, uint32_t request_id, int32_t resource_type, const ::blink::KURL& url, ::network::mojom::blink::SSLInfoPtr ssl_info, bool fatal, int32_t* out_net_error);

 private:
  NetworkServiceClient* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(NetworkServiceClientAsyncWaiter);
};

class NetworkServiceProxy;

template <typename ImplRefTraits>
class NetworkServiceStub;

class NetworkServiceRequestValidator;
class NetworkServiceResponseValidator;

class BLINK_PLATFORM_EXPORT NetworkService
    : public NetworkServiceInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = NetworkServiceProxy;

  template <typename ImplRefTraits>
  using Stub_ = NetworkServiceStub<ImplRefTraits>;

  using RequestValidator_ = NetworkServiceRequestValidator;
  using ResponseValidator_ = NetworkServiceResponseValidator;
  enum MethodMinVersions : uint32_t {
    kSetClientMinVersion = 0,
    kCreateNetworkContextMinVersion = 0,
    kDisableQuicMinVersion = 0,
    kSetRawHeadersAccessMinVersion = 0,
    kGetNetworkChangeManagerMinVersion = 0,
    kGetTotalNetworkUsagesMinVersion = 0,
    kUpdateSignedTreeHeadMinVersion = 0,
  };
  virtual ~NetworkService() {}

  virtual void SetClient(NetworkServiceClientPtr client) = 0;

  virtual void CreateNetworkContext(::network::mojom::blink::NetworkContextRequest context, ::network::mojom::blink::NetworkContextParamsPtr params) = 0;

  virtual void DisableQuic() = 0;

  virtual void SetRawHeadersAccess(uint32_t process_id, bool allow) = 0;

  virtual void GetNetworkChangeManager(::network::mojom::blink::NetworkChangeManagerRequest network_change_manager) = 0;


  using GetTotalNetworkUsagesCallback = base::OnceCallback<void(WTF::Vector<::network::mojom::blink::NetworkUsagePtr>)>;
  virtual void GetTotalNetworkUsages(GetTotalNetworkUsagesCallback callback) = 0;

  virtual void UpdateSignedTreeHead(::network::mojom::blink::SignedTreeHeadPtr signed_tree_head) = 0;
};
class BLINK_PLATFORM_EXPORT NetworkServiceInterceptorForTesting : public NetworkService {
  virtual NetworkService* GetForwardingInterface() = 0;
  void SetClient(NetworkServiceClientPtr client) override;
  void CreateNetworkContext(::network::mojom::blink::NetworkContextRequest context, ::network::mojom::blink::NetworkContextParamsPtr params) override;
  void DisableQuic() override;
  void SetRawHeadersAccess(uint32_t process_id, bool allow) override;
  void GetNetworkChangeManager(::network::mojom::blink::NetworkChangeManagerRequest network_change_manager) override;
  void GetTotalNetworkUsages(GetTotalNetworkUsagesCallback callback) override;
  void UpdateSignedTreeHead(::network::mojom::blink::SignedTreeHeadPtr signed_tree_head) override;
};
class BLINK_PLATFORM_EXPORT NetworkServiceAsyncWaiter {
 public:
  explicit NetworkServiceAsyncWaiter(NetworkService* proxy);
  ~NetworkServiceAsyncWaiter();
  void GetTotalNetworkUsages(
      WTF::Vector<::network::mojom::blink::NetworkUsagePtr>* out_total_network_usages);

 private:
  NetworkService* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(NetworkServiceAsyncWaiter);
};

class BLINK_PLATFORM_EXPORT SSLPrivateKeyProxy
    : public SSLPrivateKey {
 public:
  explicit SSLPrivateKeyProxy(mojo::MessageReceiverWithResponder* receiver);
  void Sign(uint16_t algorithm, const WTF::Vector<uint8_t>& input, SignCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class BLINK_PLATFORM_EXPORT AuthChallengeResponderProxy
    : public AuthChallengeResponder {
 public:
  explicit AuthChallengeResponderProxy(mojo::MessageReceiverWithResponder* receiver);
  void OnAuthCredentials(::network::mojom::blink::AuthCredentialsPtr credentials) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class BLINK_PLATFORM_EXPORT NetworkServiceClientProxy
    : public NetworkServiceClient {
 public:
  explicit NetworkServiceClientProxy(mojo::MessageReceiverWithResponder* receiver);
  void OnAuthRequired(uint32_t process_id, uint32_t routing_id, uint32_t request_id, const ::blink::KURL& url, const ::blink::KURL& site_for_cookies, bool first_auth_attempt, ::network::mojom::blink::AuthChallengeInfoPtr auth_info, int32_t resource_type, AuthChallengeResponderPtr auth_challenge_responder) final;
  void OnCertificateRequested(uint32_t process_id, uint32_t routing_id, uint32_t request_id, ::network::mojom::blink::SSLCertRequestInfoPtr cert_info, OnCertificateRequestedCallback callback) final;
  void OnSSLCertificateError(uint32_t process_id, uint32_t routing_id, uint32_t request_id, int32_t resource_type, const ::blink::KURL& url, ::network::mojom::blink::SSLInfoPtr ssl_info, bool fatal, OnSSLCertificateErrorCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class BLINK_PLATFORM_EXPORT NetworkServiceProxy
    : public NetworkService {
 public:
  explicit NetworkServiceProxy(mojo::MessageReceiverWithResponder* receiver);
  void SetClient(NetworkServiceClientPtr client) final;
  void CreateNetworkContext(::network::mojom::blink::NetworkContextRequest context, ::network::mojom::blink::NetworkContextParamsPtr params) final;
  void DisableQuic() final;
  void SetRawHeadersAccess(uint32_t process_id, bool allow) final;
  void GetNetworkChangeManager(::network::mojom::blink::NetworkChangeManagerRequest network_change_manager) final;
  void GetTotalNetworkUsages(GetTotalNetworkUsagesCallback callback) final;
  void UpdateSignedTreeHead(::network::mojom::blink::SignedTreeHeadPtr signed_tree_head) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class BLINK_PLATFORM_EXPORT SSLPrivateKeyStubDispatch {
 public:
  static bool Accept(SSLPrivateKey* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      SSLPrivateKey* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<SSLPrivateKey>>
class SSLPrivateKeyStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  SSLPrivateKeyStub() {}
  ~SSLPrivateKeyStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return SSLPrivateKeyStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return SSLPrivateKeyStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class BLINK_PLATFORM_EXPORT AuthChallengeResponderStubDispatch {
 public:
  static bool Accept(AuthChallengeResponder* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      AuthChallengeResponder* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<AuthChallengeResponder>>
class AuthChallengeResponderStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  AuthChallengeResponderStub() {}
  ~AuthChallengeResponderStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return AuthChallengeResponderStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return AuthChallengeResponderStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class BLINK_PLATFORM_EXPORT NetworkServiceClientStubDispatch {
 public:
  static bool Accept(NetworkServiceClient* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      NetworkServiceClient* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<NetworkServiceClient>>
class NetworkServiceClientStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  NetworkServiceClientStub() {}
  ~NetworkServiceClientStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return NetworkServiceClientStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return NetworkServiceClientStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class BLINK_PLATFORM_EXPORT NetworkServiceStubDispatch {
 public:
  static bool Accept(NetworkService* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      NetworkService* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<NetworkService>>
class NetworkServiceStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  NetworkServiceStub() {}
  ~NetworkServiceStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return NetworkServiceStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return NetworkServiceStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class BLINK_PLATFORM_EXPORT SSLPrivateKeyRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class BLINK_PLATFORM_EXPORT AuthChallengeResponderRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class BLINK_PLATFORM_EXPORT NetworkServiceClientRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class BLINK_PLATFORM_EXPORT NetworkServiceRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class BLINK_PLATFORM_EXPORT SSLPrivateKeyResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class BLINK_PLATFORM_EXPORT NetworkServiceClientResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class BLINK_PLATFORM_EXPORT NetworkServiceResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace blink
}  // namespace mojom
}  // namespace network

namespace mojo {

}  // namespace mojo

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_SERVICE_MOJOM_BLINK_H_