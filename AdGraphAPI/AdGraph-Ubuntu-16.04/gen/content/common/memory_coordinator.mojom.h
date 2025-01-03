// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_MEMORY_COORDINATOR_MOJOM_H_
#define CONTENT_COMMON_MEMORY_COORDINATOR_MOJOM_H_

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
#include "content/common/memory_coordinator.mojom-shared.h"
#include "content/common/child_memory_coordinator.mojom.h"
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
class MemoryCoordinatorHandle;
using MemoryCoordinatorHandlePtr = mojo::InterfacePtr<MemoryCoordinatorHandle>;
using MemoryCoordinatorHandlePtrInfo = mojo::InterfacePtrInfo<MemoryCoordinatorHandle>;
using ThreadSafeMemoryCoordinatorHandlePtr =
    mojo::ThreadSafeInterfacePtr<MemoryCoordinatorHandle>;
using MemoryCoordinatorHandleRequest = mojo::InterfaceRequest<MemoryCoordinatorHandle>;
using MemoryCoordinatorHandleAssociatedPtr =
    mojo::AssociatedInterfacePtr<MemoryCoordinatorHandle>;
using ThreadSafeMemoryCoordinatorHandleAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<MemoryCoordinatorHandle>;
using MemoryCoordinatorHandleAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<MemoryCoordinatorHandle>;
using MemoryCoordinatorHandleAssociatedRequest =
    mojo::AssociatedInterfaceRequest<MemoryCoordinatorHandle>;


class MemoryCoordinatorHandleProxy;

template <typename ImplRefTraits>
class MemoryCoordinatorHandleStub;

class MemoryCoordinatorHandleRequestValidator;

class CONTENT_EXPORT MemoryCoordinatorHandle
    : public MemoryCoordinatorHandleInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = MemoryCoordinatorHandleProxy;

  template <typename ImplRefTraits>
  using Stub_ = MemoryCoordinatorHandleStub<ImplRefTraits>;

  using RequestValidator_ = MemoryCoordinatorHandleRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kAddChildMinVersion = 0,
  };
  virtual ~MemoryCoordinatorHandle() {}

  virtual void AddChild(::content::mojom::ChildMemoryCoordinatorPtr child) = 0;
};
class CONTENT_EXPORT MemoryCoordinatorHandleInterceptorForTesting : public MemoryCoordinatorHandle {
  virtual MemoryCoordinatorHandle* GetForwardingInterface() = 0;
  void AddChild(::content::mojom::ChildMemoryCoordinatorPtr child) override;
};
class CONTENT_EXPORT MemoryCoordinatorHandleAsyncWaiter {
 public:
  explicit MemoryCoordinatorHandleAsyncWaiter(MemoryCoordinatorHandle* proxy);
  ~MemoryCoordinatorHandleAsyncWaiter();

 private:
  MemoryCoordinatorHandle* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(MemoryCoordinatorHandleAsyncWaiter);
};

class CONTENT_EXPORT MemoryCoordinatorHandleProxy
    : public MemoryCoordinatorHandle {
 public:
  explicit MemoryCoordinatorHandleProxy(mojo::MessageReceiverWithResponder* receiver);
  void AddChild(::content::mojom::ChildMemoryCoordinatorPtr child) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class CONTENT_EXPORT MemoryCoordinatorHandleStubDispatch {
 public:
  static bool Accept(MemoryCoordinatorHandle* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      MemoryCoordinatorHandle* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<MemoryCoordinatorHandle>>
class MemoryCoordinatorHandleStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  MemoryCoordinatorHandleStub() {}
  ~MemoryCoordinatorHandleStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return MemoryCoordinatorHandleStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return MemoryCoordinatorHandleStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class CONTENT_EXPORT MemoryCoordinatorHandleRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace content

namespace mojo {

}  // namespace mojo

#endif  // CONTENT_COMMON_MEMORY_COORDINATOR_MOJOM_H_