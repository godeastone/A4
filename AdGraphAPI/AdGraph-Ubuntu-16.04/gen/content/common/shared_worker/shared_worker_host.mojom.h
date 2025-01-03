// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_SHARED_WORKER_SHARED_WORKER_HOST_MOJOM_H_
#define CONTENT_COMMON_SHARED_WORKER_SHARED_WORKER_HOST_MOJOM_H_

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
#include "content/common/shared_worker/shared_worker_host.mojom-shared.h"
#include "third_party/blink/public/platform/web_feature.mojom.h"
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
class SharedWorkerHost;
using SharedWorkerHostPtr = mojo::InterfacePtr<SharedWorkerHost>;
using SharedWorkerHostPtrInfo = mojo::InterfacePtrInfo<SharedWorkerHost>;
using ThreadSafeSharedWorkerHostPtr =
    mojo::ThreadSafeInterfacePtr<SharedWorkerHost>;
using SharedWorkerHostRequest = mojo::InterfaceRequest<SharedWorkerHost>;
using SharedWorkerHostAssociatedPtr =
    mojo::AssociatedInterfacePtr<SharedWorkerHost>;
using ThreadSafeSharedWorkerHostAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<SharedWorkerHost>;
using SharedWorkerHostAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<SharedWorkerHost>;
using SharedWorkerHostAssociatedRequest =
    mojo::AssociatedInterfaceRequest<SharedWorkerHost>;


class SharedWorkerHostProxy;

template <typename ImplRefTraits>
class SharedWorkerHostStub;

class SharedWorkerHostRequestValidator;

class CONTENT_EXPORT SharedWorkerHost
    : public SharedWorkerHostInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = SharedWorkerHostProxy;

  template <typename ImplRefTraits>
  using Stub_ = SharedWorkerHostStub<ImplRefTraits>;

  using RequestValidator_ = SharedWorkerHostRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kOnConnectedMinVersion = 0,
    kOnContextClosedMinVersion = 0,
    kOnReadyForInspectionMinVersion = 0,
    kOnScriptLoadedMinVersion = 0,
    kOnScriptLoadFailedMinVersion = 0,
    kOnFeatureUsedMinVersion = 0,
  };
  virtual ~SharedWorkerHost() {}

  virtual void OnConnected(int32_t connection_id) = 0;

  virtual void OnContextClosed() = 0;

  virtual void OnReadyForInspection() = 0;

  virtual void OnScriptLoaded() = 0;

  virtual void OnScriptLoadFailed() = 0;

  virtual void OnFeatureUsed(::blink::mojom::WebFeature feature) = 0;
};
class CONTENT_EXPORT SharedWorkerHostInterceptorForTesting : public SharedWorkerHost {
  virtual SharedWorkerHost* GetForwardingInterface() = 0;
  void OnConnected(int32_t connection_id) override;
  void OnContextClosed() override;
  void OnReadyForInspection() override;
  void OnScriptLoaded() override;
  void OnScriptLoadFailed() override;
  void OnFeatureUsed(::blink::mojom::WebFeature feature) override;
};
class CONTENT_EXPORT SharedWorkerHostAsyncWaiter {
 public:
  explicit SharedWorkerHostAsyncWaiter(SharedWorkerHost* proxy);
  ~SharedWorkerHostAsyncWaiter();

 private:
  SharedWorkerHost* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(SharedWorkerHostAsyncWaiter);
};

class CONTENT_EXPORT SharedWorkerHostProxy
    : public SharedWorkerHost {
 public:
  explicit SharedWorkerHostProxy(mojo::MessageReceiverWithResponder* receiver);
  void OnConnected(int32_t connection_id) final;
  void OnContextClosed() final;
  void OnReadyForInspection() final;
  void OnScriptLoaded() final;
  void OnScriptLoadFailed() final;
  void OnFeatureUsed(::blink::mojom::WebFeature feature) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class CONTENT_EXPORT SharedWorkerHostStubDispatch {
 public:
  static bool Accept(SharedWorkerHost* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      SharedWorkerHost* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<SharedWorkerHost>>
class SharedWorkerHostStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  SharedWorkerHostStub() {}
  ~SharedWorkerHostStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return SharedWorkerHostStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return SharedWorkerHostStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class CONTENT_EXPORT SharedWorkerHostRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace content

namespace mojo {

}  // namespace mojo

#endif  // CONTENT_COMMON_SHARED_WORKER_SHARED_WORKER_HOST_MOJOM_H_