// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_SHARED_WORKER_SHARED_WORKER_CONNECTOR_MOJOM_H_
#define CONTENT_COMMON_SHARED_WORKER_SHARED_WORKER_CONNECTOR_MOJOM_H_

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
#include "content/common/shared_worker/shared_worker_connector.mojom-shared.h"
#include "content/common/shared_worker/shared_worker_client.mojom.h"
#include "content/common/shared_worker/shared_worker_info.mojom.h"
#include "third_party/blink/public/mojom/shared_worker/shared_worker_creation_context_type.mojom.h"
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
class SharedWorkerConnector;
using SharedWorkerConnectorPtr = mojo::InterfacePtr<SharedWorkerConnector>;
using SharedWorkerConnectorPtrInfo = mojo::InterfacePtrInfo<SharedWorkerConnector>;
using ThreadSafeSharedWorkerConnectorPtr =
    mojo::ThreadSafeInterfacePtr<SharedWorkerConnector>;
using SharedWorkerConnectorRequest = mojo::InterfaceRequest<SharedWorkerConnector>;
using SharedWorkerConnectorAssociatedPtr =
    mojo::AssociatedInterfacePtr<SharedWorkerConnector>;
using ThreadSafeSharedWorkerConnectorAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<SharedWorkerConnector>;
using SharedWorkerConnectorAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<SharedWorkerConnector>;
using SharedWorkerConnectorAssociatedRequest =
    mojo::AssociatedInterfaceRequest<SharedWorkerConnector>;


class SharedWorkerConnectorProxy;

template <typename ImplRefTraits>
class SharedWorkerConnectorStub;

class SharedWorkerConnectorRequestValidator;

class CONTENT_EXPORT SharedWorkerConnector
    : public SharedWorkerConnectorInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = SharedWorkerConnectorProxy;

  template <typename ImplRefTraits>
  using Stub_ = SharedWorkerConnectorStub<ImplRefTraits>;

  using RequestValidator_ = SharedWorkerConnectorRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kConnectMinVersion = 0,
  };
  virtual ~SharedWorkerConnector() {}

  virtual void Connect(::content::mojom::SharedWorkerInfoPtr info, ::content::mojom::SharedWorkerClientPtr client, ::blink::mojom::SharedWorkerCreationContextType creation_context_type, mojo::ScopedMessagePipeHandle message_port) = 0;
};
class CONTENT_EXPORT SharedWorkerConnectorInterceptorForTesting : public SharedWorkerConnector {
  virtual SharedWorkerConnector* GetForwardingInterface() = 0;
  void Connect(::content::mojom::SharedWorkerInfoPtr info, ::content::mojom::SharedWorkerClientPtr client, ::blink::mojom::SharedWorkerCreationContextType creation_context_type, mojo::ScopedMessagePipeHandle message_port) override;
};
class CONTENT_EXPORT SharedWorkerConnectorAsyncWaiter {
 public:
  explicit SharedWorkerConnectorAsyncWaiter(SharedWorkerConnector* proxy);
  ~SharedWorkerConnectorAsyncWaiter();

 private:
  SharedWorkerConnector* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(SharedWorkerConnectorAsyncWaiter);
};

class CONTENT_EXPORT SharedWorkerConnectorProxy
    : public SharedWorkerConnector {
 public:
  explicit SharedWorkerConnectorProxy(mojo::MessageReceiverWithResponder* receiver);
  void Connect(::content::mojom::SharedWorkerInfoPtr info, ::content::mojom::SharedWorkerClientPtr client, ::blink::mojom::SharedWorkerCreationContextType creation_context_type, mojo::ScopedMessagePipeHandle message_port) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class CONTENT_EXPORT SharedWorkerConnectorStubDispatch {
 public:
  static bool Accept(SharedWorkerConnector* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      SharedWorkerConnector* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<SharedWorkerConnector>>
class SharedWorkerConnectorStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  SharedWorkerConnectorStub() {}
  ~SharedWorkerConnectorStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return SharedWorkerConnectorStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return SharedWorkerConnectorStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class CONTENT_EXPORT SharedWorkerConnectorRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace content

namespace mojo {

}  // namespace mojo

#endif  // CONTENT_COMMON_SHARED_WORKER_SHARED_WORKER_CONNECTOR_MOJOM_H_