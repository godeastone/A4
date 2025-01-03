// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_RESOURCE_COORDINATOR_PUBLIC_MOJOM_COORDINATION_UNIT_PROVIDER_MOJOM_H_
#define SERVICES_RESOURCE_COORDINATOR_PUBLIC_MOJOM_COORDINATION_UNIT_PROVIDER_MOJOM_H_

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
#include "services/resource_coordinator/public/mojom/coordination_unit_provider.mojom-shared.h"
#include "services/resource_coordinator/public/mojom/coordination_unit.mojom.h"
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


namespace resource_coordinator {
namespace mojom {
class CoordinationUnitProvider;
using CoordinationUnitProviderPtr = mojo::InterfacePtr<CoordinationUnitProvider>;
using CoordinationUnitProviderPtrInfo = mojo::InterfacePtrInfo<CoordinationUnitProvider>;
using ThreadSafeCoordinationUnitProviderPtr =
    mojo::ThreadSafeInterfacePtr<CoordinationUnitProvider>;
using CoordinationUnitProviderRequest = mojo::InterfaceRequest<CoordinationUnitProvider>;
using CoordinationUnitProviderAssociatedPtr =
    mojo::AssociatedInterfacePtr<CoordinationUnitProvider>;
using ThreadSafeCoordinationUnitProviderAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<CoordinationUnitProvider>;
using CoordinationUnitProviderAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<CoordinationUnitProvider>;
using CoordinationUnitProviderAssociatedRequest =
    mojo::AssociatedInterfaceRequest<CoordinationUnitProvider>;


class CoordinationUnitProviderProxy;

template <typename ImplRefTraits>
class CoordinationUnitProviderStub;

class CoordinationUnitProviderRequestValidator;

class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM) CoordinationUnitProvider
    : public CoordinationUnitProviderInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = CoordinationUnitProviderProxy;

  template <typename ImplRefTraits>
  using Stub_ = CoordinationUnitProviderStub<ImplRefTraits>;

  using RequestValidator_ = CoordinationUnitProviderRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kCreateFrameCoordinationUnitMinVersion = 0,
    kCreatePageCoordinationUnitMinVersion = 0,
    kCreateProcessCoordinationUnitMinVersion = 0,
    kGetSystemCoordinationUnitMinVersion = 0,
  };
  virtual ~CoordinationUnitProvider() {}

  virtual void CreateFrameCoordinationUnit(::resource_coordinator::mojom::FrameCoordinationUnitRequest request, const ::resource_coordinator::CoordinationUnitID& id) = 0;

  virtual void CreatePageCoordinationUnit(::resource_coordinator::mojom::PageCoordinationUnitRequest request, const ::resource_coordinator::CoordinationUnitID& id) = 0;

  virtual void CreateProcessCoordinationUnit(::resource_coordinator::mojom::ProcessCoordinationUnitRequest request, const ::resource_coordinator::CoordinationUnitID& id) = 0;

  virtual void GetSystemCoordinationUnit(::resource_coordinator::mojom::SystemCoordinationUnitRequest request) = 0;
};
class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM) CoordinationUnitProviderInterceptorForTesting : public CoordinationUnitProvider {
  virtual CoordinationUnitProvider* GetForwardingInterface() = 0;
  void CreateFrameCoordinationUnit(::resource_coordinator::mojom::FrameCoordinationUnitRequest request, const ::resource_coordinator::CoordinationUnitID& id) override;
  void CreatePageCoordinationUnit(::resource_coordinator::mojom::PageCoordinationUnitRequest request, const ::resource_coordinator::CoordinationUnitID& id) override;
  void CreateProcessCoordinationUnit(::resource_coordinator::mojom::ProcessCoordinationUnitRequest request, const ::resource_coordinator::CoordinationUnitID& id) override;
  void GetSystemCoordinationUnit(::resource_coordinator::mojom::SystemCoordinationUnitRequest request) override;
};
class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM) CoordinationUnitProviderAsyncWaiter {
 public:
  explicit CoordinationUnitProviderAsyncWaiter(CoordinationUnitProvider* proxy);
  ~CoordinationUnitProviderAsyncWaiter();

 private:
  CoordinationUnitProvider* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(CoordinationUnitProviderAsyncWaiter);
};

class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM) CoordinationUnitProviderProxy
    : public CoordinationUnitProvider {
 public:
  explicit CoordinationUnitProviderProxy(mojo::MessageReceiverWithResponder* receiver);
  void CreateFrameCoordinationUnit(::resource_coordinator::mojom::FrameCoordinationUnitRequest request, const ::resource_coordinator::CoordinationUnitID& id) final;
  void CreatePageCoordinationUnit(::resource_coordinator::mojom::PageCoordinationUnitRequest request, const ::resource_coordinator::CoordinationUnitID& id) final;
  void CreateProcessCoordinationUnit(::resource_coordinator::mojom::ProcessCoordinationUnitRequest request, const ::resource_coordinator::CoordinationUnitID& id) final;
  void GetSystemCoordinationUnit(::resource_coordinator::mojom::SystemCoordinationUnitRequest request) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM) CoordinationUnitProviderStubDispatch {
 public:
  static bool Accept(CoordinationUnitProvider* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      CoordinationUnitProvider* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<CoordinationUnitProvider>>
class CoordinationUnitProviderStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  CoordinationUnitProviderStub() {}
  ~CoordinationUnitProviderStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return CoordinationUnitProviderStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return CoordinationUnitProviderStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM) CoordinationUnitProviderRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace resource_coordinator

namespace mojo {

}  // namespace mojo

#endif  // SERVICES_RESOURCE_COORDINATOR_PUBLIC_MOJOM_COORDINATION_UNIT_PROVIDER_MOJOM_H_