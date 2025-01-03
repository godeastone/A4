// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_DOM_DISTILLER_CONTENT_COMMON_DISTILLABILITY_SERVICE_MOJOM_H_
#define COMPONENTS_DOM_DISTILLER_CONTENT_COMMON_DISTILLABILITY_SERVICE_MOJOM_H_

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
#include "components/dom_distiller/content/common/distillability_service.mojom-shared.h"
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


namespace dom_distiller {
namespace mojom {
class DistillabilityService;
using DistillabilityServicePtr = mojo::InterfacePtr<DistillabilityService>;
using DistillabilityServicePtrInfo = mojo::InterfacePtrInfo<DistillabilityService>;
using ThreadSafeDistillabilityServicePtr =
    mojo::ThreadSafeInterfacePtr<DistillabilityService>;
using DistillabilityServiceRequest = mojo::InterfaceRequest<DistillabilityService>;
using DistillabilityServiceAssociatedPtr =
    mojo::AssociatedInterfacePtr<DistillabilityService>;
using ThreadSafeDistillabilityServiceAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<DistillabilityService>;
using DistillabilityServiceAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<DistillabilityService>;
using DistillabilityServiceAssociatedRequest =
    mojo::AssociatedInterfaceRequest<DistillabilityService>;


class DistillabilityServiceProxy;

template <typename ImplRefTraits>
class DistillabilityServiceStub;

class DistillabilityServiceRequestValidator;

class  DistillabilityService
    : public DistillabilityServiceInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = DistillabilityServiceProxy;

  template <typename ImplRefTraits>
  using Stub_ = DistillabilityServiceStub<ImplRefTraits>;

  using RequestValidator_ = DistillabilityServiceRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kNotifyIsDistillableMinVersion = 0,
  };
  virtual ~DistillabilityService() {}

  virtual void NotifyIsDistillable(bool page_is_distillable, bool is_last_update, bool is_mobile_friendly) = 0;
};
class  DistillabilityServiceInterceptorForTesting : public DistillabilityService {
  virtual DistillabilityService* GetForwardingInterface() = 0;
  void NotifyIsDistillable(bool page_is_distillable, bool is_last_update, bool is_mobile_friendly) override;
};
class  DistillabilityServiceAsyncWaiter {
 public:
  explicit DistillabilityServiceAsyncWaiter(DistillabilityService* proxy);
  ~DistillabilityServiceAsyncWaiter();

 private:
  DistillabilityService* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(DistillabilityServiceAsyncWaiter);
};

class  DistillabilityServiceProxy
    : public DistillabilityService {
 public:
  explicit DistillabilityServiceProxy(mojo::MessageReceiverWithResponder* receiver);
  void NotifyIsDistillable(bool page_is_distillable, bool is_last_update, bool is_mobile_friendly) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  DistillabilityServiceStubDispatch {
 public:
  static bool Accept(DistillabilityService* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      DistillabilityService* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<DistillabilityService>>
class DistillabilityServiceStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  DistillabilityServiceStub() {}
  ~DistillabilityServiceStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return DistillabilityServiceStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return DistillabilityServiceStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  DistillabilityServiceRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace dom_distiller

namespace mojo {

}  // namespace mojo

#endif  // COMPONENTS_DOM_DISTILLER_CONTENT_COMMON_DISTILLABILITY_SERVICE_MOJOM_H_