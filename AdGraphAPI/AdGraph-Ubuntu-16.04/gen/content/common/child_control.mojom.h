// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_CHILD_CONTROL_MOJOM_H_
#define CONTENT_COMMON_CHILD_CONTROL_MOJOM_H_

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
#include "content/common/child_control.mojom-shared.h"
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
class ChildControl;
using ChildControlPtr = mojo::InterfacePtr<ChildControl>;
using ChildControlPtrInfo = mojo::InterfacePtrInfo<ChildControl>;
using ThreadSafeChildControlPtr =
    mojo::ThreadSafeInterfacePtr<ChildControl>;
using ChildControlRequest = mojo::InterfaceRequest<ChildControl>;
using ChildControlAssociatedPtr =
    mojo::AssociatedInterfacePtr<ChildControl>;
using ThreadSafeChildControlAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<ChildControl>;
using ChildControlAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<ChildControl>;
using ChildControlAssociatedRequest =
    mojo::AssociatedInterfaceRequest<ChildControl>;


class ChildControlProxy;

template <typename ImplRefTraits>
class ChildControlStub;

class ChildControlRequestValidator;

class CONTENT_EXPORT ChildControl
    : public ChildControlInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = ChildControlProxy;

  template <typename ImplRefTraits>
  using Stub_ = ChildControlStub<ImplRefTraits>;

  using RequestValidator_ = ChildControlRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kProcessShutdownMinVersion = 0,
  };
  virtual ~ChildControl() {}

  virtual void ProcessShutdown() = 0;
};
class CONTENT_EXPORT ChildControlInterceptorForTesting : public ChildControl {
  virtual ChildControl* GetForwardingInterface() = 0;
  void ProcessShutdown() override;
};
class CONTENT_EXPORT ChildControlAsyncWaiter {
 public:
  explicit ChildControlAsyncWaiter(ChildControl* proxy);
  ~ChildControlAsyncWaiter();

 private:
  ChildControl* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(ChildControlAsyncWaiter);
};

class CONTENT_EXPORT ChildControlProxy
    : public ChildControl {
 public:
  explicit ChildControlProxy(mojo::MessageReceiverWithResponder* receiver);
  void ProcessShutdown() final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class CONTENT_EXPORT ChildControlStubDispatch {
 public:
  static bool Accept(ChildControl* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      ChildControl* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<ChildControl>>
class ChildControlStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  ChildControlStub() {}
  ~ChildControlStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ChildControlStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ChildControlStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class CONTENT_EXPORT ChildControlRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace content

namespace mojo {

}  // namespace mojo

#endif  // CONTENT_COMMON_CHILD_CONTROL_MOJOM_H_