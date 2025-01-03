// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_SERVICE_WORKER_SERVICE_WORKER_CONTAINER_MOJOM_H_
#define CONTENT_COMMON_SERVICE_WORKER_SERVICE_WORKER_CONTAINER_MOJOM_H_

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
#include "content/common/service_worker/service_worker_container.mojom-shared.h"
#include "content/common/service_worker/controller_service_worker.mojom.h"
#include "mojo/public/mojom/base/string16.mojom.h"
#include "third_party/blink/public/mojom/message_port/message_port.mojom.h"
#include "third_party/blink/public/mojom/service_worker/service_worker_error_type.mojom.h"
#include "third_party/blink/public/mojom/service_worker/service_worker_object.mojom.h"
#include "third_party/blink/public/mojom/service_worker/service_worker_registration.mojom.h"
#include "third_party/blink/public/platform/web_feature.mojom.h"
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
class ServiceWorkerContainerHost;
using ServiceWorkerContainerHostPtr = mojo::InterfacePtr<ServiceWorkerContainerHost>;
using ServiceWorkerContainerHostPtrInfo = mojo::InterfacePtrInfo<ServiceWorkerContainerHost>;
using ThreadSafeServiceWorkerContainerHostPtr =
    mojo::ThreadSafeInterfacePtr<ServiceWorkerContainerHost>;
using ServiceWorkerContainerHostRequest = mojo::InterfaceRequest<ServiceWorkerContainerHost>;
using ServiceWorkerContainerHostAssociatedPtr =
    mojo::AssociatedInterfacePtr<ServiceWorkerContainerHost>;
using ThreadSafeServiceWorkerContainerHostAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<ServiceWorkerContainerHost>;
using ServiceWorkerContainerHostAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<ServiceWorkerContainerHost>;
using ServiceWorkerContainerHostAssociatedRequest =
    mojo::AssociatedInterfaceRequest<ServiceWorkerContainerHost>;

class ServiceWorkerContainer;
using ServiceWorkerContainerPtr = mojo::InterfacePtr<ServiceWorkerContainer>;
using ServiceWorkerContainerPtrInfo = mojo::InterfacePtrInfo<ServiceWorkerContainer>;
using ThreadSafeServiceWorkerContainerPtr =
    mojo::ThreadSafeInterfacePtr<ServiceWorkerContainer>;
using ServiceWorkerContainerRequest = mojo::InterfaceRequest<ServiceWorkerContainer>;
using ServiceWorkerContainerAssociatedPtr =
    mojo::AssociatedInterfacePtr<ServiceWorkerContainer>;
using ThreadSafeServiceWorkerContainerAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<ServiceWorkerContainer>;
using ServiceWorkerContainerAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<ServiceWorkerContainer>;
using ServiceWorkerContainerAssociatedRequest =
    mojo::AssociatedInterfaceRequest<ServiceWorkerContainer>;


class ServiceWorkerContainerHostProxy;

template <typename ImplRefTraits>
class ServiceWorkerContainerHostStub;

class ServiceWorkerContainerHostRequestValidator;
class ServiceWorkerContainerHostResponseValidator;

class CONTENT_EXPORT ServiceWorkerContainerHost
    : public ServiceWorkerContainerHostInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = true;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = ServiceWorkerContainerHostProxy;

  template <typename ImplRefTraits>
  using Stub_ = ServiceWorkerContainerHostStub<ImplRefTraits>;

  using RequestValidator_ = ServiceWorkerContainerHostRequestValidator;
  using ResponseValidator_ = ServiceWorkerContainerHostResponseValidator;
  enum MethodMinVersions : uint32_t {
    kRegisterMinVersion = 0,
    kGetRegistrationMinVersion = 0,
    kGetRegistrationsMinVersion = 0,
    kGetRegistrationForReadyMinVersion = 0,
    kEnsureControllerServiceWorkerMinVersion = 0,
    kCloneForWorkerMinVersion = 0,
    kPingMinVersion = 0,
  };
  virtual ~ServiceWorkerContainerHost() {}


  using RegisterCallback = base::OnceCallback<void(::blink::mojom::ServiceWorkerErrorType, const base::Optional<std::string>&, ::blink::mojom::ServiceWorkerRegistrationObjectInfoPtr)>;
  virtual void Register(const GURL& script_url, ::blink::mojom::ServiceWorkerRegistrationOptionsPtr options, RegisterCallback callback) = 0;


  using GetRegistrationCallback = base::OnceCallback<void(::blink::mojom::ServiceWorkerErrorType, const base::Optional<std::string>&, ::blink::mojom::ServiceWorkerRegistrationObjectInfoPtr)>;
  virtual void GetRegistration(const GURL& client_url, GetRegistrationCallback callback) = 0;


  using GetRegistrationsCallback = base::OnceCallback<void(::blink::mojom::ServiceWorkerErrorType, const base::Optional<std::string>&, base::Optional<std::vector<::blink::mojom::ServiceWorkerRegistrationObjectInfoPtr>>)>;
  virtual void GetRegistrations(GetRegistrationsCallback callback) = 0;


  using GetRegistrationForReadyCallback = base::OnceCallback<void(::blink::mojom::ServiceWorkerRegistrationObjectInfoPtr)>;
  virtual void GetRegistrationForReady(GetRegistrationForReadyCallback callback) = 0;

  virtual void EnsureControllerServiceWorker(::content::mojom::ControllerServiceWorkerRequest controller, ControllerServiceWorkerPurpose purpose) = 0;

  virtual void CloneForWorker(ServiceWorkerContainerHostRequest container_host_for_worker) = 0;


  using PingCallback = base::OnceCallback<void()>;
  virtual void Ping(PingCallback callback) = 0;
};
class CONTENT_EXPORT ServiceWorkerContainerHostInterceptorForTesting : public ServiceWorkerContainerHost {
  virtual ServiceWorkerContainerHost* GetForwardingInterface() = 0;
  void Register(const GURL& script_url, ::blink::mojom::ServiceWorkerRegistrationOptionsPtr options, RegisterCallback callback) override;
  void GetRegistration(const GURL& client_url, GetRegistrationCallback callback) override;
  void GetRegistrations(GetRegistrationsCallback callback) override;
  void GetRegistrationForReady(GetRegistrationForReadyCallback callback) override;
  void EnsureControllerServiceWorker(::content::mojom::ControllerServiceWorkerRequest controller, ControllerServiceWorkerPurpose purpose) override;
  void CloneForWorker(ServiceWorkerContainerHostRequest container_host_for_worker) override;
  void Ping(PingCallback callback) override;
};
class CONTENT_EXPORT ServiceWorkerContainerHostAsyncWaiter {
 public:
  explicit ServiceWorkerContainerHostAsyncWaiter(ServiceWorkerContainerHost* proxy);
  ~ServiceWorkerContainerHostAsyncWaiter();
  void Register(
      const GURL& script_url, ::blink::mojom::ServiceWorkerRegistrationOptionsPtr options, ::blink::mojom::ServiceWorkerErrorType* out_error, base::Optional<std::string>* out_error_msg, ::blink::mojom::ServiceWorkerRegistrationObjectInfoPtr* out_registration);
  void GetRegistration(
      const GURL& client_url, ::blink::mojom::ServiceWorkerErrorType* out_error, base::Optional<std::string>* out_error_msg, ::blink::mojom::ServiceWorkerRegistrationObjectInfoPtr* out_registration);
  void GetRegistrations(
      ::blink::mojom::ServiceWorkerErrorType* out_error, base::Optional<std::string>* out_error_msg, base::Optional<std::vector<::blink::mojom::ServiceWorkerRegistrationObjectInfoPtr>>* out_infos);
  void GetRegistrationForReady(
      ::blink::mojom::ServiceWorkerRegistrationObjectInfoPtr* out_registration);
  void Ping(
      );

 private:
  ServiceWorkerContainerHost* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(ServiceWorkerContainerHostAsyncWaiter);
};

class ServiceWorkerContainerProxy;

template <typename ImplRefTraits>
class ServiceWorkerContainerStub;

class ServiceWorkerContainerRequestValidator;

class CONTENT_EXPORT ServiceWorkerContainer
    : public ServiceWorkerContainerInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = true;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = ServiceWorkerContainerProxy;

  template <typename ImplRefTraits>
  using Stub_ = ServiceWorkerContainerStub<ImplRefTraits>;

  using RequestValidator_ = ServiceWorkerContainerRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kSetControllerMinVersion = 0,
    kPostMessageToClientMinVersion = 0,
    kCountFeatureMinVersion = 0,
  };
  virtual ~ServiceWorkerContainer() {}

  virtual void SetController(::content::mojom::ControllerServiceWorkerInfoPtr controller_info, const std::vector<::blink::mojom::WebFeature>& used_features, bool should_notify_controllerchange) = 0;

  virtual void PostMessageToClient(::blink::mojom::ServiceWorkerObjectInfoPtr source, ::blink::TransferableMessage message) = 0;

  virtual void CountFeature(::blink::mojom::WebFeature feature) = 0;
};
class CONTENT_EXPORT ServiceWorkerContainerInterceptorForTesting : public ServiceWorkerContainer {
  virtual ServiceWorkerContainer* GetForwardingInterface() = 0;
  void SetController(::content::mojom::ControllerServiceWorkerInfoPtr controller_info, const std::vector<::blink::mojom::WebFeature>& used_features, bool should_notify_controllerchange) override;
  void PostMessageToClient(::blink::mojom::ServiceWorkerObjectInfoPtr source, ::blink::TransferableMessage message) override;
  void CountFeature(::blink::mojom::WebFeature feature) override;
};
class CONTENT_EXPORT ServiceWorkerContainerAsyncWaiter {
 public:
  explicit ServiceWorkerContainerAsyncWaiter(ServiceWorkerContainer* proxy);
  ~ServiceWorkerContainerAsyncWaiter();

 private:
  ServiceWorkerContainer* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(ServiceWorkerContainerAsyncWaiter);
};

class CONTENT_EXPORT ServiceWorkerContainerHostProxy
    : public ServiceWorkerContainerHost {
 public:
  explicit ServiceWorkerContainerHostProxy(mojo::MessageReceiverWithResponder* receiver);
  void Register(const GURL& script_url, ::blink::mojom::ServiceWorkerRegistrationOptionsPtr options, RegisterCallback callback) final;
  void GetRegistration(const GURL& client_url, GetRegistrationCallback callback) final;
  void GetRegistrations(GetRegistrationsCallback callback) final;
  void GetRegistrationForReady(GetRegistrationForReadyCallback callback) final;
  void EnsureControllerServiceWorker(::content::mojom::ControllerServiceWorkerRequest controller, ControllerServiceWorkerPurpose purpose) final;
  void CloneForWorker(ServiceWorkerContainerHostRequest container_host_for_worker) final;
  void Ping(PingCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class CONTENT_EXPORT ServiceWorkerContainerProxy
    : public ServiceWorkerContainer {
 public:
  explicit ServiceWorkerContainerProxy(mojo::MessageReceiverWithResponder* receiver);
  void SetController(::content::mojom::ControllerServiceWorkerInfoPtr controller_info, const std::vector<::blink::mojom::WebFeature>& used_features, bool should_notify_controllerchange) final;
  void PostMessageToClient(::blink::mojom::ServiceWorkerObjectInfoPtr source, ::blink::TransferableMessage message) final;
  void CountFeature(::blink::mojom::WebFeature feature) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class CONTENT_EXPORT ServiceWorkerContainerHostStubDispatch {
 public:
  static bool Accept(ServiceWorkerContainerHost* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      ServiceWorkerContainerHost* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<ServiceWorkerContainerHost>>
class ServiceWorkerContainerHostStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  ServiceWorkerContainerHostStub() {}
  ~ServiceWorkerContainerHostStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ServiceWorkerContainerHostStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ServiceWorkerContainerHostStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class CONTENT_EXPORT ServiceWorkerContainerStubDispatch {
 public:
  static bool Accept(ServiceWorkerContainer* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      ServiceWorkerContainer* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<ServiceWorkerContainer>>
class ServiceWorkerContainerStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  ServiceWorkerContainerStub() {}
  ~ServiceWorkerContainerStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ServiceWorkerContainerStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ServiceWorkerContainerStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class CONTENT_EXPORT ServiceWorkerContainerHostRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class CONTENT_EXPORT ServiceWorkerContainerRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class CONTENT_EXPORT ServiceWorkerContainerHostResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace content

namespace mojo {

}  // namespace mojo

#endif  // CONTENT_COMMON_SERVICE_WORKER_SERVICE_WORKER_CONTAINER_MOJOM_H_