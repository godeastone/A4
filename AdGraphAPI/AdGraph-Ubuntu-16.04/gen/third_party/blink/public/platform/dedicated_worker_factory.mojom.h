// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_PLATFORM_DEDICATED_WORKER_FACTORY_MOJOM_H_
#define THIRD_PARTY_BLINK_PUBLIC_PLATFORM_DEDICATED_WORKER_FACTORY_MOJOM_H_

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
#include "third_party/blink/public/platform/dedicated_worker_factory.mojom-shared.h"
#include "services/service_manager/public/mojom/interface_provider.mojom.h"
#include "url/mojom/origin.mojom.h"
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


namespace blink {
namespace mojom {
CONTENT_EXPORT extern const char kNavigation_DedicatedWorkerSpec[];
class DedicatedWorkerFactory;
using DedicatedWorkerFactoryPtr = mojo::InterfacePtr<DedicatedWorkerFactory>;
using DedicatedWorkerFactoryPtrInfo = mojo::InterfacePtrInfo<DedicatedWorkerFactory>;
using ThreadSafeDedicatedWorkerFactoryPtr =
    mojo::ThreadSafeInterfacePtr<DedicatedWorkerFactory>;
using DedicatedWorkerFactoryRequest = mojo::InterfaceRequest<DedicatedWorkerFactory>;
using DedicatedWorkerFactoryAssociatedPtr =
    mojo::AssociatedInterfacePtr<DedicatedWorkerFactory>;
using ThreadSafeDedicatedWorkerFactoryAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<DedicatedWorkerFactory>;
using DedicatedWorkerFactoryAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<DedicatedWorkerFactory>;
using DedicatedWorkerFactoryAssociatedRequest =
    mojo::AssociatedInterfaceRequest<DedicatedWorkerFactory>;


class DedicatedWorkerFactoryProxy;

template <typename ImplRefTraits>
class DedicatedWorkerFactoryStub;

class DedicatedWorkerFactoryRequestValidator;

class CONTENT_EXPORT DedicatedWorkerFactory
    : public DedicatedWorkerFactoryInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = DedicatedWorkerFactoryProxy;

  template <typename ImplRefTraits>
  using Stub_ = DedicatedWorkerFactoryStub<ImplRefTraits>;

  using RequestValidator_ = DedicatedWorkerFactoryRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kCreateDedicatedWorkerMinVersion = 0,
  };
  virtual ~DedicatedWorkerFactory() {}

  virtual void CreateDedicatedWorker(const url::Origin& origin, ::service_manager::mojom::InterfaceProviderRequest worker_interface_provider) = 0;
};
class CONTENT_EXPORT DedicatedWorkerFactoryInterceptorForTesting : public DedicatedWorkerFactory {
  virtual DedicatedWorkerFactory* GetForwardingInterface() = 0;
  void CreateDedicatedWorker(const url::Origin& origin, ::service_manager::mojom::InterfaceProviderRequest worker_interface_provider) override;
};
class CONTENT_EXPORT DedicatedWorkerFactoryAsyncWaiter {
 public:
  explicit DedicatedWorkerFactoryAsyncWaiter(DedicatedWorkerFactory* proxy);
  ~DedicatedWorkerFactoryAsyncWaiter();

 private:
  DedicatedWorkerFactory* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(DedicatedWorkerFactoryAsyncWaiter);
};

class CONTENT_EXPORT DedicatedWorkerFactoryProxy
    : public DedicatedWorkerFactory {
 public:
  explicit DedicatedWorkerFactoryProxy(mojo::MessageReceiverWithResponder* receiver);
  void CreateDedicatedWorker(const url::Origin& origin, ::service_manager::mojom::InterfaceProviderRequest worker_interface_provider) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class CONTENT_EXPORT DedicatedWorkerFactoryStubDispatch {
 public:
  static bool Accept(DedicatedWorkerFactory* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      DedicatedWorkerFactory* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<DedicatedWorkerFactory>>
class DedicatedWorkerFactoryStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  DedicatedWorkerFactoryStub() {}
  ~DedicatedWorkerFactoryStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return DedicatedWorkerFactoryStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return DedicatedWorkerFactoryStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class CONTENT_EXPORT DedicatedWorkerFactoryRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace blink

namespace mojo {

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_PUBLIC_PLATFORM_DEDICATED_WORKER_FACTORY_MOJOM_H_