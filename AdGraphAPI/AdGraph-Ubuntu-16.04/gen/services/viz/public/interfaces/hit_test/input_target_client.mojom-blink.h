// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_VIZ_PUBLIC_INTERFACES_HIT_TEST_INPUT_TARGET_CLIENT_MOJOM_BLINK_H_
#define SERVICES_VIZ_PUBLIC_INTERFACES_HIT_TEST_INPUT_TARGET_CLIENT_MOJOM_BLINK_H_

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
#include "services/viz/public/interfaces/hit_test/input_target_client.mojom-shared.h"
#include "services/viz/public/interfaces/compositing/frame_sink_id.mojom-blink.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-blink.h"

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


namespace viz {
namespace mojom {
namespace blink {
class InputTargetClient;
using InputTargetClientPtr = mojo::InterfacePtr<InputTargetClient>;
using RevocableInputTargetClientPtr = ::blink::RevocableInterfacePtr<InputTargetClient>;
using InputTargetClientPtrInfo = mojo::InterfacePtrInfo<InputTargetClient>;
using ThreadSafeInputTargetClientPtr =
    mojo::ThreadSafeInterfacePtr<InputTargetClient>;
using InputTargetClientRequest = mojo::InterfaceRequest<InputTargetClient>;
using InputTargetClientAssociatedPtr =
    mojo::AssociatedInterfacePtr<InputTargetClient>;
using ThreadSafeInputTargetClientAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<InputTargetClient>;
using InputTargetClientAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<InputTargetClient>;
using InputTargetClientAssociatedRequest =
    mojo::AssociatedInterfaceRequest<InputTargetClient>;


class InputTargetClientProxy;

template <typename ImplRefTraits>
class InputTargetClientStub;

class InputTargetClientRequestValidator;
class InputTargetClientResponseValidator;

class  InputTargetClient
    : public InputTargetClientInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = InputTargetClientProxy;

  template <typename ImplRefTraits>
  using Stub_ = InputTargetClientStub<ImplRefTraits>;

  using RequestValidator_ = InputTargetClientRequestValidator;
  using ResponseValidator_ = InputTargetClientResponseValidator;
  enum MethodMinVersions : uint32_t {
    kFrameSinkIdAtMinVersion = 0,
  };
  virtual ~InputTargetClient() {}


  using FrameSinkIdAtCallback = base::OnceCallback<void(const viz::FrameSinkId&)>;
  virtual void FrameSinkIdAt(const ::blink::WebPoint& point, FrameSinkIdAtCallback callback) = 0;
};
class  InputTargetClientInterceptorForTesting : public InputTargetClient {
  virtual InputTargetClient* GetForwardingInterface() = 0;
  void FrameSinkIdAt(const ::blink::WebPoint& point, FrameSinkIdAtCallback callback) override;
};
class  InputTargetClientAsyncWaiter {
 public:
  explicit InputTargetClientAsyncWaiter(InputTargetClient* proxy);
  ~InputTargetClientAsyncWaiter();
  void FrameSinkIdAt(
      const ::blink::WebPoint& point, viz::FrameSinkId* out_id);

 private:
  InputTargetClient* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(InputTargetClientAsyncWaiter);
};

class  InputTargetClientProxy
    : public InputTargetClient {
 public:
  explicit InputTargetClientProxy(mojo::MessageReceiverWithResponder* receiver);
  void FrameSinkIdAt(const ::blink::WebPoint& point, FrameSinkIdAtCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  InputTargetClientStubDispatch {
 public:
  static bool Accept(InputTargetClient* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      InputTargetClient* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<InputTargetClient>>
class InputTargetClientStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  InputTargetClientStub() {}
  ~InputTargetClientStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return InputTargetClientStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return InputTargetClientStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  InputTargetClientRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  InputTargetClientResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace blink
}  // namespace mojom
}  // namespace viz

namespace mojo {

}  // namespace mojo

#endif  // SERVICES_VIZ_PUBLIC_INTERFACES_HIT_TEST_INPUT_TARGET_CLIENT_MOJOM_BLINK_H_