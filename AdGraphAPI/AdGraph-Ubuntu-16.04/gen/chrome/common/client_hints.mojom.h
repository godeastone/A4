// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CHROME_COMMON_CLIENT_HINTS_MOJOM_H_
#define CHROME_COMMON_CLIENT_HINTS_MOJOM_H_

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
#include "chrome/common/client_hints.mojom-shared.h"
#include "mojo/public/mojom/base/time.mojom.h"
#include "third_party/blink/public/platform/web_client_hints_types.mojom.h"
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


namespace client_hints {
namespace mojom {
class ClientHints;
using ClientHintsPtr = mojo::InterfacePtr<ClientHints>;
using ClientHintsPtrInfo = mojo::InterfacePtrInfo<ClientHints>;
using ThreadSafeClientHintsPtr =
    mojo::ThreadSafeInterfacePtr<ClientHints>;
using ClientHintsRequest = mojo::InterfaceRequest<ClientHints>;
using ClientHintsAssociatedPtr =
    mojo::AssociatedInterfacePtr<ClientHints>;
using ThreadSafeClientHintsAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<ClientHints>;
using ClientHintsAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<ClientHints>;
using ClientHintsAssociatedRequest =
    mojo::AssociatedInterfaceRequest<ClientHints>;


class ClientHintsProxy;

template <typename ImplRefTraits>
class ClientHintsStub;

class ClientHintsRequestValidator;

class  ClientHints
    : public ClientHintsInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = ClientHintsProxy;

  template <typename ImplRefTraits>
  using Stub_ = ClientHintsStub<ImplRefTraits>;

  using RequestValidator_ = ClientHintsRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kPersistClientHintsMinVersion = 0,
  };
  virtual ~ClientHints() {}

  virtual void PersistClientHints(const url::Origin& primary_origin, const std::vector<::blink::mojom::WebClientHintsType>& client_hints, base::TimeDelta expiration_duration) = 0;
};
class  ClientHintsInterceptorForTesting : public ClientHints {
  virtual ClientHints* GetForwardingInterface() = 0;
  void PersistClientHints(const url::Origin& primary_origin, const std::vector<::blink::mojom::WebClientHintsType>& client_hints, base::TimeDelta expiration_duration) override;
};
class  ClientHintsAsyncWaiter {
 public:
  explicit ClientHintsAsyncWaiter(ClientHints* proxy);
  ~ClientHintsAsyncWaiter();

 private:
  ClientHints* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(ClientHintsAsyncWaiter);
};

class  ClientHintsProxy
    : public ClientHints {
 public:
  explicit ClientHintsProxy(mojo::MessageReceiverWithResponder* receiver);
  void PersistClientHints(const url::Origin& primary_origin, const std::vector<::blink::mojom::WebClientHintsType>& client_hints, base::TimeDelta expiration_duration) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  ClientHintsStubDispatch {
 public:
  static bool Accept(ClientHints* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      ClientHints* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<ClientHints>>
class ClientHintsStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  ClientHintsStub() {}
  ~ClientHintsStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ClientHintsStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ClientHintsStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  ClientHintsRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace client_hints

namespace mojo {

}  // namespace mojo

#endif  // CHROME_COMMON_CLIENT_HINTS_MOJOM_H_