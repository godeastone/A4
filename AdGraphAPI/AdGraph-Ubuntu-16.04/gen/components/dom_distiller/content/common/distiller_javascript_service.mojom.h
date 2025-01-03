// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_DOM_DISTILLER_CONTENT_COMMON_DISTILLER_JAVASCRIPT_SERVICE_MOJOM_H_
#define COMPONENTS_DOM_DISTILLER_CONTENT_COMMON_DISTILLER_JAVASCRIPT_SERVICE_MOJOM_H_

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
#include "components/dom_distiller/content/common/distiller_javascript_service.mojom-shared.h"
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
class DistillerJavaScriptService;
using DistillerJavaScriptServicePtr = mojo::InterfacePtr<DistillerJavaScriptService>;
using DistillerJavaScriptServicePtrInfo = mojo::InterfacePtrInfo<DistillerJavaScriptService>;
using ThreadSafeDistillerJavaScriptServicePtr =
    mojo::ThreadSafeInterfacePtr<DistillerJavaScriptService>;
using DistillerJavaScriptServiceRequest = mojo::InterfaceRequest<DistillerJavaScriptService>;
using DistillerJavaScriptServiceAssociatedPtr =
    mojo::AssociatedInterfacePtr<DistillerJavaScriptService>;
using ThreadSafeDistillerJavaScriptServiceAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<DistillerJavaScriptService>;
using DistillerJavaScriptServiceAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<DistillerJavaScriptService>;
using DistillerJavaScriptServiceAssociatedRequest =
    mojo::AssociatedInterfaceRequest<DistillerJavaScriptService>;


class DistillerJavaScriptServiceProxy;

template <typename ImplRefTraits>
class DistillerJavaScriptServiceStub;

class DistillerJavaScriptServiceRequestValidator;

class  DistillerJavaScriptService
    : public DistillerJavaScriptServiceInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = DistillerJavaScriptServiceProxy;

  template <typename ImplRefTraits>
  using Stub_ = DistillerJavaScriptServiceStub<ImplRefTraits>;

  using RequestValidator_ = DistillerJavaScriptServiceRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kHandleDistillerOpenSettingsCallMinVersion = 0,
  };
  virtual ~DistillerJavaScriptService() {}

  virtual void HandleDistillerOpenSettingsCall() = 0;
};
class  DistillerJavaScriptServiceInterceptorForTesting : public DistillerJavaScriptService {
  virtual DistillerJavaScriptService* GetForwardingInterface() = 0;
  void HandleDistillerOpenSettingsCall() override;
};
class  DistillerJavaScriptServiceAsyncWaiter {
 public:
  explicit DistillerJavaScriptServiceAsyncWaiter(DistillerJavaScriptService* proxy);
  ~DistillerJavaScriptServiceAsyncWaiter();

 private:
  DistillerJavaScriptService* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(DistillerJavaScriptServiceAsyncWaiter);
};

class  DistillerJavaScriptServiceProxy
    : public DistillerJavaScriptService {
 public:
  explicit DistillerJavaScriptServiceProxy(mojo::MessageReceiverWithResponder* receiver);
  void HandleDistillerOpenSettingsCall() final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  DistillerJavaScriptServiceStubDispatch {
 public:
  static bool Accept(DistillerJavaScriptService* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      DistillerJavaScriptService* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<DistillerJavaScriptService>>
class DistillerJavaScriptServiceStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  DistillerJavaScriptServiceStub() {}
  ~DistillerJavaScriptServiceStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return DistillerJavaScriptServiceStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return DistillerJavaScriptServiceStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  DistillerJavaScriptServiceRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace dom_distiller

namespace mojo {

}  // namespace mojo

#endif  // COMPONENTS_DOM_DISTILLER_CONTENT_COMMON_DISTILLER_JAVASCRIPT_SERVICE_MOJOM_H_