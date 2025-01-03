// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_SHARED_WORKER_SHARED_WORKER_FACTORY_MOJOM_H_
#define CONTENT_COMMON_SHARED_WORKER_SHARED_WORKER_FACTORY_MOJOM_H_

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
#include "content/common/shared_worker/shared_worker_factory.mojom-shared.h"
#include "content/common/service_worker/service_worker_provider.mojom.h"
#include "content/common/shared_worker/shared_worker.mojom.h"
#include "content/common/shared_worker/shared_worker_host.mojom.h"
#include "content/common/shared_worker/shared_worker_info.mojom.h"
#include "mojo/public/mojom/base/unguessable_token.mojom.h"
#include "services/network/public/mojom/url_loader_factory.mojom.h"
#include "services/service_manager/public/mojom/interface_provider.mojom.h"
#include "third_party/blink/public/web/worker_content_settings_proxy.mojom.h"
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
CONTENT_EXPORT extern const char kNavigation_SharedWorkerSpec[];
class SharedWorkerFactory;
using SharedWorkerFactoryPtr = mojo::InterfacePtr<SharedWorkerFactory>;
using SharedWorkerFactoryPtrInfo = mojo::InterfacePtrInfo<SharedWorkerFactory>;
using ThreadSafeSharedWorkerFactoryPtr =
    mojo::ThreadSafeInterfacePtr<SharedWorkerFactory>;
using SharedWorkerFactoryRequest = mojo::InterfaceRequest<SharedWorkerFactory>;
using SharedWorkerFactoryAssociatedPtr =
    mojo::AssociatedInterfacePtr<SharedWorkerFactory>;
using ThreadSafeSharedWorkerFactoryAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<SharedWorkerFactory>;
using SharedWorkerFactoryAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<SharedWorkerFactory>;
using SharedWorkerFactoryAssociatedRequest =
    mojo::AssociatedInterfaceRequest<SharedWorkerFactory>;


class SharedWorkerFactoryProxy;

template <typename ImplRefTraits>
class SharedWorkerFactoryStub;

class SharedWorkerFactoryRequestValidator;

class CONTENT_EXPORT SharedWorkerFactory
    : public SharedWorkerFactoryInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = true;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = SharedWorkerFactoryProxy;

  template <typename ImplRefTraits>
  using Stub_ = SharedWorkerFactoryStub<ImplRefTraits>;

  using RequestValidator_ = SharedWorkerFactoryRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kCreateSharedWorkerMinVersion = 0,
  };
  virtual ~SharedWorkerFactory() {}

  virtual void CreateSharedWorker(::content::mojom::SharedWorkerInfoPtr info, bool pause_on_start, const base::UnguessableToken& devtools_worker_token, ::blink::mojom::WorkerContentSettingsProxyPtr content_settings, ::content::mojom::ServiceWorkerProviderInfoForSharedWorkerPtr service_worker_provider_info, ::network::mojom::URLLoaderFactoryAssociatedPtrInfo script_loader_factory_ptr_info, ::content::mojom::SharedWorkerHostPtr host, ::content::mojom::SharedWorkerRequest shared_worker, ::service_manager::mojom::InterfaceProviderPtr interface_provider) = 0;
};
class CONTENT_EXPORT SharedWorkerFactoryInterceptorForTesting : public SharedWorkerFactory {
  virtual SharedWorkerFactory* GetForwardingInterface() = 0;
  void CreateSharedWorker(::content::mojom::SharedWorkerInfoPtr info, bool pause_on_start, const base::UnguessableToken& devtools_worker_token, ::blink::mojom::WorkerContentSettingsProxyPtr content_settings, ::content::mojom::ServiceWorkerProviderInfoForSharedWorkerPtr service_worker_provider_info, ::network::mojom::URLLoaderFactoryAssociatedPtrInfo script_loader_factory_ptr_info, ::content::mojom::SharedWorkerHostPtr host, ::content::mojom::SharedWorkerRequest shared_worker, ::service_manager::mojom::InterfaceProviderPtr interface_provider) override;
};
class CONTENT_EXPORT SharedWorkerFactoryAsyncWaiter {
 public:
  explicit SharedWorkerFactoryAsyncWaiter(SharedWorkerFactory* proxy);
  ~SharedWorkerFactoryAsyncWaiter();

 private:
  SharedWorkerFactory* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(SharedWorkerFactoryAsyncWaiter);
};

class CONTENT_EXPORT SharedWorkerFactoryProxy
    : public SharedWorkerFactory {
 public:
  explicit SharedWorkerFactoryProxy(mojo::MessageReceiverWithResponder* receiver);
  void CreateSharedWorker(::content::mojom::SharedWorkerInfoPtr info, bool pause_on_start, const base::UnguessableToken& devtools_worker_token, ::blink::mojom::WorkerContentSettingsProxyPtr content_settings, ::content::mojom::ServiceWorkerProviderInfoForSharedWorkerPtr service_worker_provider_info, ::network::mojom::URLLoaderFactoryAssociatedPtrInfo script_loader_factory_ptr_info, ::content::mojom::SharedWorkerHostPtr host, ::content::mojom::SharedWorkerRequest shared_worker, ::service_manager::mojom::InterfaceProviderPtr interface_provider) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class CONTENT_EXPORT SharedWorkerFactoryStubDispatch {
 public:
  static bool Accept(SharedWorkerFactory* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      SharedWorkerFactory* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<SharedWorkerFactory>>
class SharedWorkerFactoryStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  SharedWorkerFactoryStub() {}
  ~SharedWorkerFactoryStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return SharedWorkerFactoryStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return SharedWorkerFactoryStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class CONTENT_EXPORT SharedWorkerFactoryRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace content

namespace mojo {

}  // namespace mojo

#endif  // CONTENT_COMMON_SHARED_WORKER_SHARED_WORKER_FACTORY_MOJOM_H_