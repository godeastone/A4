// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_INSECURE_INPUT_INSECURE_INPUT_SERVICE_MOJOM_H_
#define THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_INSECURE_INPUT_INSECURE_INPUT_SERVICE_MOJOM_H_

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
#include "third_party/blink/public/platform/modules/insecure_input/insecure_input_service.mojom-shared.h"
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
class InsecureInputService;
using InsecureInputServicePtr = mojo::InterfacePtr<InsecureInputService>;
using InsecureInputServicePtrInfo = mojo::InterfacePtrInfo<InsecureInputService>;
using ThreadSafeInsecureInputServicePtr =
    mojo::ThreadSafeInterfacePtr<InsecureInputService>;
using InsecureInputServiceRequest = mojo::InterfaceRequest<InsecureInputService>;
using InsecureInputServiceAssociatedPtr =
    mojo::AssociatedInterfacePtr<InsecureInputService>;
using ThreadSafeInsecureInputServiceAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<InsecureInputService>;
using InsecureInputServiceAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<InsecureInputService>;
using InsecureInputServiceAssociatedRequest =
    mojo::AssociatedInterfaceRequest<InsecureInputService>;


class InsecureInputServiceProxy;

template <typename ImplRefTraits>
class InsecureInputServiceStub;

class InsecureInputServiceRequestValidator;

class CONTENT_EXPORT InsecureInputService
    : public InsecureInputServiceInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = InsecureInputServiceProxy;

  template <typename ImplRefTraits>
  using Stub_ = InsecureInputServiceStub<ImplRefTraits>;

  using RequestValidator_ = InsecureInputServiceRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kPasswordFieldVisibleInInsecureContextMinVersion = 0,
    kAllPasswordFieldsInInsecureContextInvisibleMinVersion = 0,
    kDidEditFieldInInsecureContextMinVersion = 0,
  };
  virtual ~InsecureInputService() {}

  virtual void PasswordFieldVisibleInInsecureContext() = 0;

  virtual void AllPasswordFieldsInInsecureContextInvisible() = 0;

  virtual void DidEditFieldInInsecureContext() = 0;
};
class CONTENT_EXPORT InsecureInputServiceInterceptorForTesting : public InsecureInputService {
  virtual InsecureInputService* GetForwardingInterface() = 0;
  void PasswordFieldVisibleInInsecureContext() override;
  void AllPasswordFieldsInInsecureContextInvisible() override;
  void DidEditFieldInInsecureContext() override;
};
class CONTENT_EXPORT InsecureInputServiceAsyncWaiter {
 public:
  explicit InsecureInputServiceAsyncWaiter(InsecureInputService* proxy);
  ~InsecureInputServiceAsyncWaiter();

 private:
  InsecureInputService* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(InsecureInputServiceAsyncWaiter);
};

class CONTENT_EXPORT InsecureInputServiceProxy
    : public InsecureInputService {
 public:
  explicit InsecureInputServiceProxy(mojo::MessageReceiverWithResponder* receiver);
  void PasswordFieldVisibleInInsecureContext() final;
  void AllPasswordFieldsInInsecureContextInvisible() final;
  void DidEditFieldInInsecureContext() final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class CONTENT_EXPORT InsecureInputServiceStubDispatch {
 public:
  static bool Accept(InsecureInputService* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      InsecureInputService* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<InsecureInputService>>
class InsecureInputServiceStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  InsecureInputServiceStub() {}
  ~InsecureInputServiceStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return InsecureInputServiceStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return InsecureInputServiceStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class CONTENT_EXPORT InsecureInputServiceRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace blink

namespace mojo {

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_INSECURE_INPUT_INSECURE_INPUT_SERVICE_MOJOM_H_