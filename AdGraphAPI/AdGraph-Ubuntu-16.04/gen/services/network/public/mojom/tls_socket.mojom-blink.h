// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_TLS_SOCKET_MOJOM_BLINK_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_TLS_SOCKET_MOJOM_BLINK_H_

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
#include "services/network/public/mojom/tls_socket.mojom-shared.h"
#include "net/interfaces/ip_endpoint.mojom-blink.h"

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
#include "third_party/blink/public/platform/web_common.h"


namespace network {
namespace mojom {
namespace blink {
class TLSClientSocket;
using TLSClientSocketPtr = mojo::InterfacePtr<TLSClientSocket>;
using RevocableTLSClientSocketPtr = ::blink::RevocableInterfacePtr<TLSClientSocket>;
using TLSClientSocketPtrInfo = mojo::InterfacePtrInfo<TLSClientSocket>;
using ThreadSafeTLSClientSocketPtr =
    mojo::ThreadSafeInterfacePtr<TLSClientSocket>;
using TLSClientSocketRequest = mojo::InterfaceRequest<TLSClientSocket>;
using TLSClientSocketAssociatedPtr =
    mojo::AssociatedInterfacePtr<TLSClientSocket>;
using ThreadSafeTLSClientSocketAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<TLSClientSocket>;
using TLSClientSocketAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<TLSClientSocket>;
using TLSClientSocketAssociatedRequest =
    mojo::AssociatedInterfaceRequest<TLSClientSocket>;


class TLSClientSocketProxy;

template <typename ImplRefTraits>
class TLSClientSocketStub;

class TLSClientSocketRequestValidator;

class BLINK_PLATFORM_EXPORT TLSClientSocket
    : public TLSClientSocketInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = TLSClientSocketProxy;

  template <typename ImplRefTraits>
  using Stub_ = TLSClientSocketStub<ImplRefTraits>;

  using RequestValidator_ = TLSClientSocketRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
  };
  virtual ~TLSClientSocket() {}
};
class BLINK_PLATFORM_EXPORT TLSClientSocketInterceptorForTesting : public TLSClientSocket {
  virtual TLSClientSocket* GetForwardingInterface() = 0;
};
class BLINK_PLATFORM_EXPORT TLSClientSocketAsyncWaiter {
 public:
  explicit TLSClientSocketAsyncWaiter(TLSClientSocket* proxy);
  ~TLSClientSocketAsyncWaiter();

 private:
  TLSClientSocket* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(TLSClientSocketAsyncWaiter);
};

class BLINK_PLATFORM_EXPORT TLSClientSocketProxy
    : public TLSClientSocket {
 public:
  explicit TLSClientSocketProxy(mojo::MessageReceiverWithResponder* receiver);

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class BLINK_PLATFORM_EXPORT TLSClientSocketStubDispatch {
 public:
  static bool Accept(TLSClientSocket* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      TLSClientSocket* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<TLSClientSocket>>
class TLSClientSocketStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  TLSClientSocketStub() {}
  ~TLSClientSocketStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return TLSClientSocketStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return TLSClientSocketStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class BLINK_PLATFORM_EXPORT TLSClientSocketRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace blink
}  // namespace mojom
}  // namespace network

namespace mojo {

}  // namespace mojo

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_TLS_SOCKET_MOJOM_BLINK_H_