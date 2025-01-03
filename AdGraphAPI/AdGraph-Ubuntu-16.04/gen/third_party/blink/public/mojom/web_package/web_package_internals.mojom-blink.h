// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_WEB_PACKAGE_WEB_PACKAGE_INTERNALS_MOJOM_BLINK_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_WEB_PACKAGE_WEB_PACKAGE_INTERNALS_MOJOM_BLINK_H_

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
#include "mojo/public/mojom/base/time.mojom-blink.h"

#include "mojo/public/cpp/bindings/lib/wtf_clone_equals_util.h"
#include "mojo/public/cpp/bindings/lib/wtf_hash_util.h"
#include "third_party/blink/renderer/platform/mojo/revocable_interface_ptr.h"
#include "third_party/blink/renderer/platform/wtf/hash_functions.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

#include "mojo/public/cpp/bindings/associated_interface_ptr.h"
#include "mojo/public/cpp/bindings/associated_interface_ptr_info.h"
#include "mojo/public/cpp/bindings/associated_interface_request.h"
#include "mojo/public/cpp/bindings/interface_ptr.h"
#include "mojo/public/cpp/bindings/interface_request.h"
#include "mojo/public/cpp/bindings/lib/control_message_handler.h"
#include "mojo/public/cpp/bindings/raw_ptr_impl_ref_traits.h"
#include "mojo/public/cpp/bindings/thread_safe_interface_ptr.h"
#include "third_party/blink/renderer/platform/mojo/revocable_interface_ptr.h"


#include "mojo/public/cpp/bindings/lib/native_enum_serialization.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "third_party/blink/renderer/platform/platform_export.h"


namespace blink {
namespace test {
namespace mojom {
namespace blink {
class WebPackageInternals;
using WebPackageInternalsPtr = mojo::InterfacePtr<WebPackageInternals>;
using RevocableWebPackageInternalsPtr = ::blink::RevocableInterfacePtr<WebPackageInternals>;
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

class PLATFORM_EXPORT WebPackageInternals
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
  virtual void SetSignedExchangeVerificationTime(WTF::Time time, SetSignedExchangeVerificationTimeCallback callback) = 0;
};
class PLATFORM_EXPORT WebPackageInternalsInterceptorForTesting : public WebPackageInternals {
  virtual WebPackageInternals* GetForwardingInterface() = 0;
  void SetSignedExchangeVerificationTime(WTF::Time time, SetSignedExchangeVerificationTimeCallback callback) override;
};
class PLATFORM_EXPORT WebPackageInternalsAsyncWaiter {
 public:
  explicit WebPackageInternalsAsyncWaiter(WebPackageInternals* proxy);
  ~WebPackageInternalsAsyncWaiter();
  void SetSignedExchangeVerificationTime(
      WTF::Time time);

 private:
  WebPackageInternals* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(WebPackageInternalsAsyncWaiter);
};

class PLATFORM_EXPORT WebPackageInternalsProxy
    : public WebPackageInternals {
 public:
  explicit WebPackageInternalsProxy(mojo::MessageReceiverWithResponder* receiver);
  void SetSignedExchangeVerificationTime(WTF::Time time, SetSignedExchangeVerificationTimeCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class PLATFORM_EXPORT WebPackageInternalsStubDispatch {
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
class PLATFORM_EXPORT WebPackageInternalsRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class PLATFORM_EXPORT WebPackageInternalsResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace blink
}  // namespace mojom
}  // namespace test
}  // namespace blink

namespace mojo {

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_WEB_PACKAGE_WEB_PACKAGE_INTERNALS_MOJOM_BLINK_H_