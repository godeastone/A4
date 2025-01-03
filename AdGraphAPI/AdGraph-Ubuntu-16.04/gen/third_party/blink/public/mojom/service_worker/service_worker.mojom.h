// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_MOJOM_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_MOJOM_H_

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
#include "third_party/blink/public/mojom/service_worker/service_worker.mojom-shared.h"
#include "third_party/blink/public/mojom/message_port/message_port.mojom.h"
#include "third_party/blink/public/mojom/service_worker/service_worker_error_type.mojom.h"
#include "third_party/blink/public/mojom/service_worker/service_worker_client.mojom.h"
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
#include "third_party/blink/common/common_export.h"


namespace blink {
namespace mojom {
class ServiceWorkerHost;
using ServiceWorkerHostPtr = mojo::InterfacePtr<ServiceWorkerHost>;
using ServiceWorkerHostPtrInfo = mojo::InterfacePtrInfo<ServiceWorkerHost>;
using ThreadSafeServiceWorkerHostPtr =
    mojo::ThreadSafeInterfacePtr<ServiceWorkerHost>;
using ServiceWorkerHostRequest = mojo::InterfaceRequest<ServiceWorkerHost>;
using ServiceWorkerHostAssociatedPtr =
    mojo::AssociatedInterfacePtr<ServiceWorkerHost>;
using ThreadSafeServiceWorkerHostAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<ServiceWorkerHost>;
using ServiceWorkerHostAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<ServiceWorkerHost>;
using ServiceWorkerHostAssociatedRequest =
    mojo::AssociatedInterfaceRequest<ServiceWorkerHost>;


class ServiceWorkerHostProxy;

template <typename ImplRefTraits>
class ServiceWorkerHostStub;

class ServiceWorkerHostRequestValidator;
class ServiceWorkerHostResponseValidator;

class BLINK_COMMON_EXPORT ServiceWorkerHost
    : public ServiceWorkerHostInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = ServiceWorkerHostProxy;

  template <typename ImplRefTraits>
  using Stub_ = ServiceWorkerHostStub<ImplRefTraits>;

  using RequestValidator_ = ServiceWorkerHostRequestValidator;
  using ResponseValidator_ = ServiceWorkerHostResponseValidator;
  enum MethodMinVersions : uint32_t {
    kSetCachedMetadataMinVersion = 0,
    kClearCachedMetadataMinVersion = 0,
    kGetClientsMinVersion = 0,
    kGetClientMinVersion = 0,
    kOpenNewTabMinVersion = 0,
    kOpenPaymentHandlerWindowMinVersion = 0,
    kPostMessageToClientMinVersion = 0,
    kFocusClientMinVersion = 0,
    kNavigateClientMinVersion = 0,
    kSkipWaitingMinVersion = 0,
    kClaimClientsMinVersion = 0,
  };
  virtual ~ServiceWorkerHost() {}

  virtual void SetCachedMetadata(const GURL& url, const std::vector<uint8_t>& data) = 0;

  virtual void ClearCachedMetadata(const GURL& url) = 0;


  using GetClientsCallback = base::OnceCallback<void(std::vector<::blink::mojom::ServiceWorkerClientInfoPtr>)>;
  virtual void GetClients(::blink::mojom::ServiceWorkerClientQueryOptionsPtr options, GetClientsCallback callback) = 0;


  using GetClientCallback = base::OnceCallback<void(::blink::mojom::ServiceWorkerClientInfoPtr)>;
  virtual void GetClient(const std::string& client_uuid, GetClientCallback callback) = 0;


  using OpenNewTabCallback = base::OnceCallback<void(bool, ::blink::mojom::ServiceWorkerClientInfoPtr, const base::Optional<std::string>&)>;
  virtual void OpenNewTab(const GURL& url, OpenNewTabCallback callback) = 0;


  using OpenPaymentHandlerWindowCallback = base::OnceCallback<void(bool, ::blink::mojom::ServiceWorkerClientInfoPtr, const base::Optional<std::string>&)>;
  virtual void OpenPaymentHandlerWindow(const GURL& url, OpenPaymentHandlerWindowCallback callback) = 0;

  virtual void PostMessageToClient(const std::string& client_uuid, ::blink::TransferableMessage message) = 0;


  using FocusClientCallback = base::OnceCallback<void(::blink::mojom::ServiceWorkerClientInfoPtr)>;
  virtual void FocusClient(const std::string& client_uuid, FocusClientCallback callback) = 0;


  using NavigateClientCallback = base::OnceCallback<void(bool, ::blink::mojom::ServiceWorkerClientInfoPtr, const base::Optional<std::string>&)>;
  virtual void NavigateClient(const std::string& client_uuid, const GURL& url, NavigateClientCallback callback) = 0;


  using SkipWaitingCallback = base::OnceCallback<void(bool)>;
  virtual void SkipWaiting(SkipWaitingCallback callback) = 0;


  using ClaimClientsCallback = base::OnceCallback<void(::blink::mojom::ServiceWorkerErrorType, const base::Optional<std::string>&)>;
  virtual void ClaimClients(ClaimClientsCallback callback) = 0;
};
class BLINK_COMMON_EXPORT ServiceWorkerHostInterceptorForTesting : public ServiceWorkerHost {
  virtual ServiceWorkerHost* GetForwardingInterface() = 0;
  void SetCachedMetadata(const GURL& url, const std::vector<uint8_t>& data) override;
  void ClearCachedMetadata(const GURL& url) override;
  void GetClients(::blink::mojom::ServiceWorkerClientQueryOptionsPtr options, GetClientsCallback callback) override;
  void GetClient(const std::string& client_uuid, GetClientCallback callback) override;
  void OpenNewTab(const GURL& url, OpenNewTabCallback callback) override;
  void OpenPaymentHandlerWindow(const GURL& url, OpenPaymentHandlerWindowCallback callback) override;
  void PostMessageToClient(const std::string& client_uuid, ::blink::TransferableMessage message) override;
  void FocusClient(const std::string& client_uuid, FocusClientCallback callback) override;
  void NavigateClient(const std::string& client_uuid, const GURL& url, NavigateClientCallback callback) override;
  void SkipWaiting(SkipWaitingCallback callback) override;
  void ClaimClients(ClaimClientsCallback callback) override;
};
class BLINK_COMMON_EXPORT ServiceWorkerHostAsyncWaiter {
 public:
  explicit ServiceWorkerHostAsyncWaiter(ServiceWorkerHost* proxy);
  ~ServiceWorkerHostAsyncWaiter();
  void GetClients(
      ::blink::mojom::ServiceWorkerClientQueryOptionsPtr options, std::vector<::blink::mojom::ServiceWorkerClientInfoPtr>* out_clients);
  void GetClient(
      const std::string& client_uuid, ::blink::mojom::ServiceWorkerClientInfoPtr* out_client);
  void OpenNewTab(
      const GURL& url, bool* out_success, ::blink::mojom::ServiceWorkerClientInfoPtr* out_client, base::Optional<std::string>* out_error_msg);
  void OpenPaymentHandlerWindow(
      const GURL& url, bool* out_success, ::blink::mojom::ServiceWorkerClientInfoPtr* out_client, base::Optional<std::string>* out_error_msg);
  void FocusClient(
      const std::string& client_uuid, ::blink::mojom::ServiceWorkerClientInfoPtr* out_client);
  void NavigateClient(
      const std::string& client_uuid, const GURL& url, bool* out_success, ::blink::mojom::ServiceWorkerClientInfoPtr* out_client, base::Optional<std::string>* out_error_msg);
  void SkipWaiting(
      bool* out_success);
  void ClaimClients(
      ::blink::mojom::ServiceWorkerErrorType* out_error, base::Optional<std::string>* out_error_msg);

 private:
  ServiceWorkerHost* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(ServiceWorkerHostAsyncWaiter);
};

class BLINK_COMMON_EXPORT ServiceWorkerHostProxy
    : public ServiceWorkerHost {
 public:
  explicit ServiceWorkerHostProxy(mojo::MessageReceiverWithResponder* receiver);
  void SetCachedMetadata(const GURL& url, const std::vector<uint8_t>& data) final;
  void ClearCachedMetadata(const GURL& url) final;
  void GetClients(::blink::mojom::ServiceWorkerClientQueryOptionsPtr options, GetClientsCallback callback) final;
  void GetClient(const std::string& client_uuid, GetClientCallback callback) final;
  void OpenNewTab(const GURL& url, OpenNewTabCallback callback) final;
  void OpenPaymentHandlerWindow(const GURL& url, OpenPaymentHandlerWindowCallback callback) final;
  void PostMessageToClient(const std::string& client_uuid, ::blink::TransferableMessage message) final;
  void FocusClient(const std::string& client_uuid, FocusClientCallback callback) final;
  void NavigateClient(const std::string& client_uuid, const GURL& url, NavigateClientCallback callback) final;
  void SkipWaiting(SkipWaitingCallback callback) final;
  void ClaimClients(ClaimClientsCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class BLINK_COMMON_EXPORT ServiceWorkerHostStubDispatch {
 public:
  static bool Accept(ServiceWorkerHost* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      ServiceWorkerHost* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<ServiceWorkerHost>>
class ServiceWorkerHostStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  ServiceWorkerHostStub() {}
  ~ServiceWorkerHostStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ServiceWorkerHostStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ServiceWorkerHostStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class BLINK_COMMON_EXPORT ServiceWorkerHostRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class BLINK_COMMON_EXPORT ServiceWorkerHostResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace blink

namespace mojo {

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_MOJOM_H_