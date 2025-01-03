// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_WEB_PACKAGE_WEB_PACKAGE_INTERNALS_MOJOM_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_WEB_PACKAGE_WEB_PACKAGE_INTERNALS_MOJOM_H_

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
#include "third_party/blink/public/mojom/web_package/web_package_internals.mojom-shared.h"
#include "mojo/public/mojom/base/time.mojom.h"
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
namespace test {
namespace mojom {
class WebPackageInternals;
using WebPackageInternalsPtr = mojo::InterfacePtr<WebPackageInternals>;
using WebPackageInternalsPtrInfo = mojo::InterfacePtrInfo<WebPackageInternals>;
using ThreadSafeWebPackageInternalsPtr =
    mojo::ThreadSafeInterfacePtr<WebPackageInternals>;
using WebPackageInternalsRequest = mojo::InterfaceRequest<WebPackageInternals>;
using WebPackageInternalsAssociatedPtr =
    mojo::AssociatedInterfacePtr<WebPackageInternals>;
using ThreadSafeWebPackageInternalsAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<WebPackageInternals>;
using WebPackageInternalsAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<WebPackageInternals>;
using WebPackageInternalsAssociatedRequest =
    mojo::AssociatedInterfaceRequest<WebPackageInternals>;


class WebPackageInternalsProxy;

template <typename ImplRefTraits>
class WebPackageInternalsStub;

class WebPackageInternalsRequestValidator;
class WebPackageInternalsResponseValidator;

class BLINK_COMMON_EXPORT WebPackageInternals
    : public WebPackageInternalsInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = WebPackageInternalsProxy;

  template <typename ImplRefTraits>
  using Stub_ = WebPackageInternalsStub<ImplRefTraits>;

  using RequestValidator_ = WebPackageInternalsRequestValidator;
  using ResponseValidator_ = WebPackageInternalsResponseValidator;
  enum MethodMinVersions : uint32_t {
    kSetSignedExchangeVerificationTimeMinVersion = 0,
  };
  virtual ~WebPackageInternals() {}


  using SetSignedExchangeVerificationTimeCallback = base::OnceCallback<void()>;
  virtual void SetSignedExchangeVerificationTime(base::Time time, SetSignedExchangeVerificationTimeCallback callback) = 0;
};
class BLINK_COMMON_EXPORT WebPackageInternalsInterceptorForTesting : public WebPackageInternals {
  virtual WebPackageInternals* GetForwardingInterface() = 0;
  void SetSignedExchangeVerificationTime(base::Time time, SetSignedExchangeVerificationTimeCallback callback) override;
};
class BLINK_COMMON_EXPORT WebPackageInternalsAsyncWaiter {
 public:
  explicit WebPackageInternalsAsyncWaiter(WebPackageInternals* proxy);
  ~WebPackageInternalsAsyncWaiter();
  void SetSignedExchangeVerificationTime(
      base::Time time);

 private:
  WebPackageInternals* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(WebPackageInternalsAsyncWaiter);
};

class BLINK_COMMON_EXPORT WebPackageInternalsProxy
    : public WebPackageInternals {
 public:
  explicit WebPackageInternalsProxy(mojo::MessageReceiverWithResponder* receiver);
  void SetSignedExchangeVerificationTime(base::Time time, SetSignedExchangeVerificationTimeCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class BLINK_COMMON_EXPORT WebPackageInternalsStubDispatch {
 public:
  static bool Accept(WebPackageInternals* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      WebPackageInternals* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<WebPackageInternals>>
class WebPackageInternalsStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  WebPackageInternalsStub() {}
  ~WebPackageInternalsStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return WebPackageInternalsStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return WebPackageInternalsStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class BLINK_COMMON_EXPORT WebPackageInternalsRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class BLINK_COMMON_EXPORT WebPackageInternalsResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace test
}  // namespace blink

namespace mojo {

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_WEB_PACKAGE_WEB_PACKAGE_INTERNALS_MOJOM_H_