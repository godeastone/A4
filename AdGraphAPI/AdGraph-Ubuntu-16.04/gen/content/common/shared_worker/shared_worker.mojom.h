// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_SHARED_WORKER_SHARED_WORKER_MOJOM_H_
#define CONTENT_COMMON_SHARED_WORKER_SHARED_WORKER_MOJOM_H_

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
#include "content/common/shared_worker/shared_worker.mojom-shared.h"
#include "third_party/blink/public/web/devtools_agent.mojom.h"
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
class SharedWorker;
using SharedWorkerPtr = mojo::InterfacePtr<SharedWorker>;
using SharedWorkerPtrInfo = mojo::InterfacePtrInfo<SharedWorker>;
using ThreadSafeSharedWorkerPtr =
    mojo::ThreadSafeInterfacePtr<SharedWorker>;
using SharedWorkerRequest = mojo::InterfaceRequest<SharedWorker>;
using SharedWorkerAssociatedPtr =
    mojo::AssociatedInterfacePtr<SharedWorker>;
using ThreadSafeSharedWorkerAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<SharedWorker>;
using SharedWorkerAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<SharedWorker>;
using SharedWorkerAssociatedRequest =
    mojo::AssociatedInterfaceRequest<SharedWorker>;


class SharedWorkerProxy;

template <typename ImplRefTraits>
class SharedWorkerStub;

class SharedWorkerRequestValidator;

class CONTENT_EXPORT SharedWorker
    : public SharedWorkerInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = true;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = SharedWorkerProxy;

  template <typename ImplRefTraits>
  using Stub_ = SharedWorkerStub<ImplRefTraits>;

  using RequestValidator_ = SharedWorkerRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kConnectMinVersion = 0,
    kTerminateMinVersion = 0,
    kBindDevToolsAgentMinVersion = 0,
  };
  virtual ~SharedWorker() {}

  virtual void Connect(int32_t connection_id, mojo::ScopedMessagePipeHandle message_port) = 0;

  virtual void Terminate() = 0;

  virtual void BindDevToolsAgent(::blink::mojom::DevToolsAgentAssociatedRequest devtools_agent) = 0;
};
class CONTENT_EXPORT SharedWorkerInterceptorForTesting : public SharedWorker {
  virtual SharedWorker* GetForwardingInterface() = 0;
  void Connect(int32_t connection_id, mojo::ScopedMessagePipeHandle message_port) override;
  void Terminate() override;
  void BindDevToolsAgent(::blink::mojom::DevToolsAgentAssociatedRequest devtools_agent) override;
};
class CONTENT_EXPORT SharedWorkerAsyncWaiter {
 public:
  explicit SharedWorkerAsyncWaiter(SharedWorker* proxy);
  ~SharedWorkerAsyncWaiter();

 private:
  SharedWorker* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(SharedWorkerAsyncWaiter);
};

class CONTENT_EXPORT SharedWorkerProxy
    : public SharedWorker {
 public:
  explicit SharedWorkerProxy(mojo::MessageReceiverWithResponder* receiver);
  void Connect(int32_t connection_id, mojo::ScopedMessagePipeHandle message_port) final;
  void Terminate() final;
  void BindDevToolsAgent(::blink::mojom::DevToolsAgentAssociatedRequest devtools_agent) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class CONTENT_EXPORT SharedWorkerStubDispatch {
 public:
  static bool Accept(SharedWorker* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      SharedWorker* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<SharedWorker>>
class SharedWorkerStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  SharedWorkerStub() {}
  ~SharedWorkerStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return SharedWorkerStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return SharedWorkerStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class CONTENT_EXPORT SharedWorkerRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace content

namespace mojo {

}  // namespace mojo

#endif  // CONTENT_COMMON_SHARED_WORKER_SHARED_WORKER_MOJOM_H_