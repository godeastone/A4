// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_SERVICE_WORKER_SERVICE_WORKER_MOJOM_H_
#define CONTENT_COMMON_SERVICE_WORKER_SERVICE_WORKER_MOJOM_H_

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
#include "content/common/service_worker/service_worker.mojom-shared.h"
#include "content/common/service_worker/service_worker_provider.mojom.h"
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
class ServiceWorkerDispatcherHost;
using ServiceWorkerDispatcherHostPtr = mojo::InterfacePtr<ServiceWorkerDispatcherHost>;
using ServiceWorkerDispatcherHostPtrInfo = mojo::InterfacePtrInfo<ServiceWorkerDispatcherHost>;
using ThreadSafeServiceWorkerDispatcherHostPtr =
    mojo::ThreadSafeInterfacePtr<ServiceWorkerDispatcherHost>;
using ServiceWorkerDispatcherHostRequest = mojo::InterfaceRequest<ServiceWorkerDispatcherHost>;
using ServiceWorkerDispatcherHostAssociatedPtr =
    mojo::AssociatedInterfacePtr<ServiceWorkerDispatcherHost>;
using ThreadSafeServiceWorkerDispatcherHostAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<ServiceWorkerDispatcherHost>;
using ServiceWorkerDispatcherHostAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<ServiceWorkerDispatcherHost>;
using ServiceWorkerDispatcherHostAssociatedRequest =
    mojo::AssociatedInterfaceRequest<ServiceWorkerDispatcherHost>;


class ServiceWorkerDispatcherHostProxy;

template <typename ImplRefTraits>
class ServiceWorkerDispatcherHostStub;

class ServiceWorkerDispatcherHostRequestValidator;

class CONTENT_EXPORT ServiceWorkerDispatcherHost
    : public ServiceWorkerDispatcherHostInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = true;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = ServiceWorkerDispatcherHostProxy;

  template <typename ImplRefTraits>
  using Stub_ = ServiceWorkerDispatcherHostStub<ImplRefTraits>;

  using RequestValidator_ = ServiceWorkerDispatcherHostRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kOnProviderCreatedMinVersion = 0,
  };
  virtual ~ServiceWorkerDispatcherHost() {}

  virtual void OnProviderCreated(::content::ServiceWorkerProviderHostInfo provider_info) = 0;
};
class CONTENT_EXPORT ServiceWorkerDispatcherHostInterceptorForTesting : public ServiceWorkerDispatcherHost {
  virtual ServiceWorkerDispatcherHost* GetForwardingInterface() = 0;
  void OnProviderCreated(::content::ServiceWorkerProviderHostInfo provider_info) override;
};
class CONTENT_EXPORT ServiceWorkerDispatcherHostAsyncWaiter {
 public:
  explicit ServiceWorkerDispatcherHostAsyncWaiter(ServiceWorkerDispatcherHost* proxy);
  ~ServiceWorkerDispatcherHostAsyncWaiter();

 private:
  ServiceWorkerDispatcherHost* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(ServiceWorkerDispatcherHostAsyncWaiter);
};

class CONTENT_EXPORT ServiceWorkerDispatcherHostProxy
    : public ServiceWorkerDispatcherHost {
 public:
  explicit ServiceWorkerDispatcherHostProxy(mojo::MessageReceiverWithResponder* receiver);
  void OnProviderCreated(::content::ServiceWorkerProviderHostInfo provider_info) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class CONTENT_EXPORT ServiceWorkerDispatcherHostStubDispatch {
 public:
  static bool Accept(ServiceWorkerDispatcherHost* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      ServiceWorkerDispatcherHost* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<ServiceWorkerDispatcherHost>>
class ServiceWorkerDispatcherHostStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  ServiceWorkerDispatcherHostStub() {}
  ~ServiceWorkerDispatcherHostStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ServiceWorkerDispatcherHostStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ServiceWorkerDispatcherHostStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class CONTENT_EXPORT ServiceWorkerDispatcherHostRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace content

namespace mojo {

}  // namespace mojo

#endif  // CONTENT_COMMON_SERVICE_WORKER_SERVICE_WORKER_MOJOM_H_