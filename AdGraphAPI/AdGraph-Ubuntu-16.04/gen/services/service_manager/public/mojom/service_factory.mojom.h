// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_SERVICE_MANAGER_PUBLIC_MOJOM_SERVICE_FACTORY_MOJOM_H_
#define SERVICES_SERVICE_MANAGER_PUBLIC_MOJOM_SERVICE_FACTORY_MOJOM_H_

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
#include "services/service_manager/public/mojom/service_factory.mojom-shared.h"
#include "services/service_manager/public/mojom/connector.mojom.h"
#include "services/service_manager/public/mojom/service.mojom.h"
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
#include "base/component_export.h"


namespace service_manager {
namespace mojom {
class ServiceFactory;
using ServiceFactoryPtr = mojo::InterfacePtr<ServiceFactory>;
using ServiceFactoryPtrInfo = mojo::InterfacePtrInfo<ServiceFactory>;
using ThreadSafeServiceFactoryPtr =
    mojo::ThreadSafeInterfacePtr<ServiceFactory>;
using ServiceFactoryRequest = mojo::InterfaceRequest<ServiceFactory>;
using ServiceFactoryAssociatedPtr =
    mojo::AssociatedInterfacePtr<ServiceFactory>;
using ThreadSafeServiceFactoryAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<ServiceFactory>;
using ServiceFactoryAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<ServiceFactory>;
using ServiceFactoryAssociatedRequest =
    mojo::AssociatedInterfaceRequest<ServiceFactory>;


class ServiceFactoryProxy;

template <typename ImplRefTraits>
class ServiceFactoryStub;

class ServiceFactoryRequestValidator;

class COMPONENT_EXPORT(SERVICE_MANAGER_MOJOM) ServiceFactory
    : public ServiceFactoryInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = ServiceFactoryProxy;

  template <typename ImplRefTraits>
  using Stub_ = ServiceFactoryStub<ImplRefTraits>;

  using RequestValidator_ = ServiceFactoryRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kCreateServiceMinVersion = 0,
  };
  virtual ~ServiceFactory() {}

  virtual void CreateService(::service_manager::mojom::ServiceRequest service, const std::string& name, ::service_manager::mojom::PIDReceiverPtr pid_receiver) = 0;
};
class COMPONENT_EXPORT(SERVICE_MANAGER_MOJOM) ServiceFactoryInterceptorForTesting : public ServiceFactory {
  virtual ServiceFactory* GetForwardingInterface() = 0;
  void CreateService(::service_manager::mojom::ServiceRequest service, const std::string& name, ::service_manager::mojom::PIDReceiverPtr pid_receiver) override;
};
class COMPONENT_EXPORT(SERVICE_MANAGER_MOJOM) ServiceFactoryAsyncWaiter {
 public:
  explicit ServiceFactoryAsyncWaiter(ServiceFactory* proxy);
  ~ServiceFactoryAsyncWaiter();

 private:
  ServiceFactory* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(ServiceFactoryAsyncWaiter);
};

class COMPONENT_EXPORT(SERVICE_MANAGER_MOJOM) ServiceFactoryProxy
    : public ServiceFactory {
 public:
  explicit ServiceFactoryProxy(mojo::MessageReceiverWithResponder* receiver);
  void CreateService(::service_manager::mojom::ServiceRequest service, const std::string& name, ::service_manager::mojom::PIDReceiverPtr pid_receiver) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class COMPONENT_EXPORT(SERVICE_MANAGER_MOJOM) ServiceFactoryStubDispatch {
 public:
  static bool Accept(ServiceFactory* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      ServiceFactory* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<ServiceFactory>>
class ServiceFactoryStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  ServiceFactoryStub() {}
  ~ServiceFactoryStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ServiceFactoryStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ServiceFactoryStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class COMPONENT_EXPORT(SERVICE_MANAGER_MOJOM) ServiceFactoryRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace service_manager

namespace mojo {

}  // namespace mojo

#endif  // SERVICES_SERVICE_MANAGER_PUBLIC_MOJOM_SERVICE_FACTORY_MOJOM_H_