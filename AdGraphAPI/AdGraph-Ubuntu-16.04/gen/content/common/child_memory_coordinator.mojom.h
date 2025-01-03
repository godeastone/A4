// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_CHILD_MEMORY_COORDINATOR_MOJOM_H_
#define CONTENT_COMMON_CHILD_MEMORY_COORDINATOR_MOJOM_H_

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
#include "content/common/child_memory_coordinator.mojom-shared.h"
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
class ChildMemoryCoordinator;
using ChildMemoryCoordinatorPtr = mojo::InterfacePtr<ChildMemoryCoordinator>;
using ChildMemoryCoordinatorPtrInfo = mojo::InterfacePtrInfo<ChildMemoryCoordinator>;
using ThreadSafeChildMemoryCoordinatorPtr =
    mojo::ThreadSafeInterfacePtr<ChildMemoryCoordinator>;
using ChildMemoryCoordinatorRequest = mojo::InterfaceRequest<ChildMemoryCoordinator>;
using ChildMemoryCoordinatorAssociatedPtr =
    mojo::AssociatedInterfacePtr<ChildMemoryCoordinator>;
using ThreadSafeChildMemoryCoordinatorAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<ChildMemoryCoordinator>;
using ChildMemoryCoordinatorAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<ChildMemoryCoordinator>;
using ChildMemoryCoordinatorAssociatedRequest =
    mojo::AssociatedInterfaceRequest<ChildMemoryCoordinator>;


class ChildMemoryCoordinatorProxy;

template <typename ImplRefTraits>
class ChildMemoryCoordinatorStub;

class ChildMemoryCoordinatorRequestValidator;

class CONTENT_EXPORT ChildMemoryCoordinator
    : public ChildMemoryCoordinatorInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = ChildMemoryCoordinatorProxy;

  template <typename ImplRefTraits>
  using Stub_ = ChildMemoryCoordinatorStub<ImplRefTraits>;

  using RequestValidator_ = ChildMemoryCoordinatorRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kOnStateChangeMinVersion = 0,
    kPurgeMemoryMinVersion = 0,
  };
  virtual ~ChildMemoryCoordinator() {}

  virtual void OnStateChange(MemoryState state) = 0;

  virtual void PurgeMemory() = 0;
};
class CONTENT_EXPORT ChildMemoryCoordinatorInterceptorForTesting : public ChildMemoryCoordinator {
  virtual ChildMemoryCoordinator* GetForwardingInterface() = 0;
  void OnStateChange(MemoryState state) override;
  void PurgeMemory() override;
};
class CONTENT_EXPORT ChildMemoryCoordinatorAsyncWaiter {
 public:
  explicit ChildMemoryCoordinatorAsyncWaiter(ChildMemoryCoordinator* proxy);
  ~ChildMemoryCoordinatorAsyncWaiter();

 private:
  ChildMemoryCoordinator* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(ChildMemoryCoordinatorAsyncWaiter);
};

class CONTENT_EXPORT ChildMemoryCoordinatorProxy
    : public ChildMemoryCoordinator {
 public:
  explicit ChildMemoryCoordinatorProxy(mojo::MessageReceiverWithResponder* receiver);
  void OnStateChange(MemoryState state) final;
  void PurgeMemory() final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class CONTENT_EXPORT ChildMemoryCoordinatorStubDispatch {
 public:
  static bool Accept(ChildMemoryCoordinator* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      ChildMemoryCoordinator* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<ChildMemoryCoordinator>>
class ChildMemoryCoordinatorStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  ChildMemoryCoordinatorStub() {}
  ~ChildMemoryCoordinatorStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ChildMemoryCoordinatorStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ChildMemoryCoordinatorStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class CONTENT_EXPORT ChildMemoryCoordinatorRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace content

namespace mojo {

}  // namespace mojo

#endif  // CONTENT_COMMON_CHILD_MEMORY_COORDINATOR_MOJOM_H_