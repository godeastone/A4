// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_CHILD_MOJOM_H_
#define CONTENT_COMMON_CHILD_MOJOM_H_

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
#include "content/common/child.mojom-shared.h"
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


namespace content {
namespace mojom {
class Child;
using ChildPtr = mojo::InterfacePtr<Child>;
using ChildPtrInfo = mojo::InterfacePtrInfo<Child>;
using ThreadSafeChildPtr =
    mojo::ThreadSafeInterfacePtr<Child>;
using ChildRequest = mojo::InterfaceRequest<Child>;
using ChildAssociatedPtr =
    mojo::AssociatedInterfacePtr<Child>;
using ThreadSafeChildAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<Child>;
using ChildAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<Child>;
using ChildAssociatedRequest =
    mojo::AssociatedInterfaceRequest<Child>;


class ChildProxy;

template <typename ImplRefTraits>
class ChildStub;

class ChildRequestValidator;

class CONTENT_EXPORT Child
    : public ChildInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = ChildProxy;

  template <typename ImplRefTraits>
  using Stub_ = ChildStub<ImplRefTraits>;

  using RequestValidator_ = ChildRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
  };
  virtual ~Child() {}
};
class CONTENT_EXPORT ChildInterceptorForTesting : public Child {
  virtual Child* GetForwardingInterface() = 0;
};
class CONTENT_EXPORT ChildAsyncWaiter {
 public:
  explicit ChildAsyncWaiter(Child* proxy);
  ~ChildAsyncWaiter();

 private:
  Child* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(ChildAsyncWaiter);
};

class CONTENT_EXPORT ChildProxy
    : public Child {
 public:
  explicit ChildProxy(mojo::MessageReceiverWithResponder* receiver);

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class CONTENT_EXPORT ChildStubDispatch {
 public:
  static bool Accept(Child* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      Child* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<Child>>
class ChildStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  ChildStub() {}
  ~ChildStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ChildStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ChildStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class CONTENT_EXPORT ChildRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace content

namespace mojo {

}  // namespace mojo

#endif  // CONTENT_COMMON_CHILD_MOJOM_H_