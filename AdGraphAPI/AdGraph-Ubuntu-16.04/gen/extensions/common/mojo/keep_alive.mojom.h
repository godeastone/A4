// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef EXTENSIONS_COMMON_MOJO_KEEP_ALIVE_MOJOM_H_
#define EXTENSIONS_COMMON_MOJO_KEEP_ALIVE_MOJOM_H_

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
#include "extensions/common/mojo/keep_alive.mojom-shared.h"
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


namespace extensions {
class KeepAlive;
using KeepAlivePtr = mojo::InterfacePtr<KeepAlive>;
using KeepAlivePtrInfo = mojo::InterfacePtrInfo<KeepAlive>;
using ThreadSafeKeepAlivePtr =
    mojo::ThreadSafeInterfacePtr<KeepAlive>;
using KeepAliveRequest = mojo::InterfaceRequest<KeepAlive>;
using KeepAliveAssociatedPtr =
    mojo::AssociatedInterfacePtr<KeepAlive>;
using ThreadSafeKeepAliveAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<KeepAlive>;
using KeepAliveAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<KeepAlive>;
using KeepAliveAssociatedRequest =
    mojo::AssociatedInterfaceRequest<KeepAlive>;


class KeepAliveProxy;

template <typename ImplRefTraits>
class KeepAliveStub;

class KeepAliveRequestValidator;

class  KeepAlive
    : public KeepAliveInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = KeepAliveProxy;

  template <typename ImplRefTraits>
  using Stub_ = KeepAliveStub<ImplRefTraits>;

  using RequestValidator_ = KeepAliveRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
  };
  virtual ~KeepAlive() {}
};
class  KeepAliveInterceptorForTesting : public KeepAlive {
  virtual KeepAlive* GetForwardingInterface() = 0;
};
class  KeepAliveAsyncWaiter {
 public:
  explicit KeepAliveAsyncWaiter(KeepAlive* proxy);
  ~KeepAliveAsyncWaiter();

 private:
  KeepAlive* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(KeepAliveAsyncWaiter);
};

class  KeepAliveProxy
    : public KeepAlive {
 public:
  explicit KeepAliveProxy(mojo::MessageReceiverWithResponder* receiver);

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  KeepAliveStubDispatch {
 public:
  static bool Accept(KeepAlive* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      KeepAlive* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<KeepAlive>>
class KeepAliveStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  KeepAliveStub() {}
  ~KeepAliveStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return KeepAliveStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return KeepAliveStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  KeepAliveRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace extensions

namespace mojo {

}  // namespace mojo

#endif  // EXTENSIONS_COMMON_MOJO_KEEP_ALIVE_MOJOM_H_