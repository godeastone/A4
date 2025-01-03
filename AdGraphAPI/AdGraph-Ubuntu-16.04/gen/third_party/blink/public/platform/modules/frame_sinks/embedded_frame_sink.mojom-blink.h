// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_FRAME_SINKS_EMBEDDED_FRAME_SINK_MOJOM_BLINK_H_
#define THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_FRAME_SINKS_EMBEDDED_FRAME_SINK_MOJOM_BLINK_H_

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
#include "third_party/blink/public/platform/modules/frame_sinks/embedded_frame_sink.mojom-shared.h"
#include "services/viz/public/interfaces/compositing/compositor_frame_sink.mojom-blink.h"
#include "services/viz/public/interfaces/compositing/frame_sink_id.mojom-blink.h"
#include "services/viz/public/interfaces/compositing/surface_info.mojom-blink.h"

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
#include "third_party/blink/public/platform/web_common.h"


namespace blink {
namespace mojom {
namespace blink {
class EmbeddedFrameSinkClient;
using EmbeddedFrameSinkClientPtr = mojo::InterfacePtr<EmbeddedFrameSinkClient>;
using RevocableEmbeddedFrameSinkClientPtr = ::blink::RevocableInterfacePtr<EmbeddedFrameSinkClient>;
using EmbeddedFrameSinkClientPtrInfo = mojo::InterfacePtrInfo<EmbeddedFrameSinkClient>;
using ThreadSafeEmbeddedFrameSinkClientPtr =
    mojo::ThreadSafeInterfacePtr<EmbeddedFrameSinkClient>;
using EmbeddedFrameSinkClientRequest = mojo::InterfaceRequest<EmbeddedFrameSinkClient>;
using EmbeddedFrameSinkClientAssociatedPtr =
    mojo::AssociatedInterfacePtr<EmbeddedFrameSinkClient>;
using ThreadSafeEmbeddedFrameSinkClientAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<EmbeddedFrameSinkClient>;
using EmbeddedFrameSinkClientAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<EmbeddedFrameSinkClient>;
using EmbeddedFrameSinkClientAssociatedRequest =
    mojo::AssociatedInterfaceRequest<EmbeddedFrameSinkClient>;

class EmbeddedFrameSinkProvider;
using EmbeddedFrameSinkProviderPtr = mojo::InterfacePtr<EmbeddedFrameSinkProvider>;
using RevocableEmbeddedFrameSinkProviderPtr = ::blink::RevocableInterfacePtr<EmbeddedFrameSinkProvider>;
using EmbeddedFrameSinkProviderPtrInfo = mojo::InterfacePtrInfo<EmbeddedFrameSinkProvider>;
using ThreadSafeEmbeddedFrameSinkProviderPtr =
    mojo::ThreadSafeInterfacePtr<EmbeddedFrameSinkProvider>;
using EmbeddedFrameSinkProviderRequest = mojo::InterfaceRequest<EmbeddedFrameSinkProvider>;
using EmbeddedFrameSinkProviderAssociatedPtr =
    mojo::AssociatedInterfacePtr<EmbeddedFrameSinkProvider>;
using ThreadSafeEmbeddedFrameSinkProviderAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<EmbeddedFrameSinkProvider>;
using EmbeddedFrameSinkProviderAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<EmbeddedFrameSinkProvider>;
using EmbeddedFrameSinkProviderAssociatedRequest =
    mojo::AssociatedInterfaceRequest<EmbeddedFrameSinkProvider>;


class EmbeddedFrameSinkClientProxy;

template <typename ImplRefTraits>
class EmbeddedFrameSinkClientStub;

class EmbeddedFrameSinkClientRequestValidator;

class BLINK_PLATFORM_EXPORT EmbeddedFrameSinkClient
    : public EmbeddedFrameSinkClientInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = EmbeddedFrameSinkClientProxy;

  template <typename ImplRefTraits>
  using Stub_ = EmbeddedFrameSinkClientStub<ImplRefTraits>;

  using RequestValidator_ = EmbeddedFrameSinkClientRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kOnFirstSurfaceActivationMinVersion = 0,
  };
  virtual ~EmbeddedFrameSinkClient() {}

  virtual void OnFirstSurfaceActivation(const viz::SurfaceInfo& surface_info) = 0;
};
class BLINK_PLATFORM_EXPORT EmbeddedFrameSinkClientInterceptorForTesting : public EmbeddedFrameSinkClient {
  virtual EmbeddedFrameSinkClient* GetForwardingInterface() = 0;
  void OnFirstSurfaceActivation(const viz::SurfaceInfo& surface_info) override;
};
class BLINK_PLATFORM_EXPORT EmbeddedFrameSinkClientAsyncWaiter {
 public:
  explicit EmbeddedFrameSinkClientAsyncWaiter(EmbeddedFrameSinkClient* proxy);
  ~EmbeddedFrameSinkClientAsyncWaiter();

 private:
  EmbeddedFrameSinkClient* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(EmbeddedFrameSinkClientAsyncWaiter);
};

class EmbeddedFrameSinkProviderProxy;

template <typename ImplRefTraits>
class EmbeddedFrameSinkProviderStub;

class EmbeddedFrameSinkProviderRequestValidator;

class BLINK_PLATFORM_EXPORT EmbeddedFrameSinkProvider
    : public EmbeddedFrameSinkProviderInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = EmbeddedFrameSinkProviderProxy;

  template <typename ImplRefTraits>
  using Stub_ = EmbeddedFrameSinkProviderStub<ImplRefTraits>;

  using RequestValidator_ = EmbeddedFrameSinkProviderRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kRegisterEmbeddedFrameSinkMinVersion = 0,
    kCreateCompositorFrameSinkMinVersion = 0,
    kCreateSimpleCompositorFrameSinkMinVersion = 0,
  };
  virtual ~EmbeddedFrameSinkProvider() {}

  virtual void RegisterEmbeddedFrameSink(const viz::FrameSinkId& parent_frame_sink_id, const viz::FrameSinkId& frame_sink_id, EmbeddedFrameSinkClientPtr client) = 0;

  virtual void CreateCompositorFrameSink(const viz::FrameSinkId& frame_sink_id, ::viz::mojom::blink::CompositorFrameSinkClientPtr client, ::viz::mojom::blink::CompositorFrameSinkRequest sink) = 0;

  virtual void CreateSimpleCompositorFrameSink(const viz::FrameSinkId& parent_frame_sink_id, const viz::FrameSinkId& frame_sink_id, EmbeddedFrameSinkClientPtr surface_client, ::viz::mojom::blink::CompositorFrameSinkClientPtr client, ::viz::mojom::blink::CompositorFrameSinkRequest sink) = 0;
};
class BLINK_PLATFORM_EXPORT EmbeddedFrameSinkProviderInterceptorForTesting : public EmbeddedFrameSinkProvider {
  virtual EmbeddedFrameSinkProvider* GetForwardingInterface() = 0;
  void RegisterEmbeddedFrameSink(const viz::FrameSinkId& parent_frame_sink_id, const viz::FrameSinkId& frame_sink_id, EmbeddedFrameSinkClientPtr client) override;
  void CreateCompositorFrameSink(const viz::FrameSinkId& frame_sink_id, ::viz::mojom::blink::CompositorFrameSinkClientPtr client, ::viz::mojom::blink::CompositorFrameSinkRequest sink) override;
  void CreateSimpleCompositorFrameSink(const viz::FrameSinkId& parent_frame_sink_id, const viz::FrameSinkId& frame_sink_id, EmbeddedFrameSinkClientPtr surface_client, ::viz::mojom::blink::CompositorFrameSinkClientPtr client, ::viz::mojom::blink::CompositorFrameSinkRequest sink) override;
};
class BLINK_PLATFORM_EXPORT EmbeddedFrameSinkProviderAsyncWaiter {
 public:
  explicit EmbeddedFrameSinkProviderAsyncWaiter(EmbeddedFrameSinkProvider* proxy);
  ~EmbeddedFrameSinkProviderAsyncWaiter();

 private:
  EmbeddedFrameSinkProvider* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(EmbeddedFrameSinkProviderAsyncWaiter);
};

class BLINK_PLATFORM_EXPORT EmbeddedFrameSinkClientProxy
    : public EmbeddedFrameSinkClient {
 public:
  explicit EmbeddedFrameSinkClientProxy(mojo::MessageReceiverWithResponder* receiver);
  void OnFirstSurfaceActivation(const viz::SurfaceInfo& surface_info) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class BLINK_PLATFORM_EXPORT EmbeddedFrameSinkProviderProxy
    : public EmbeddedFrameSinkProvider {
 public:
  explicit EmbeddedFrameSinkProviderProxy(mojo::MessageReceiverWithResponder* receiver);
  void RegisterEmbeddedFrameSink(const viz::FrameSinkId& parent_frame_sink_id, const viz::FrameSinkId& frame_sink_id, EmbeddedFrameSinkClientPtr client) final;
  void CreateCompositorFrameSink(const viz::FrameSinkId& frame_sink_id, ::viz::mojom::blink::CompositorFrameSinkClientPtr client, ::viz::mojom::blink::CompositorFrameSinkRequest sink) final;
  void CreateSimpleCompositorFrameSink(const viz::FrameSinkId& parent_frame_sink_id, const viz::FrameSinkId& frame_sink_id, EmbeddedFrameSinkClientPtr surface_client, ::viz::mojom::blink::CompositorFrameSinkClientPtr client, ::viz::mojom::blink::CompositorFrameSinkRequest sink) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class BLINK_PLATFORM_EXPORT EmbeddedFrameSinkClientStubDispatch {
 public:
  static bool Accept(EmbeddedFrameSinkClient* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      EmbeddedFrameSinkClient* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<EmbeddedFrameSinkClient>>
class EmbeddedFrameSinkClientStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  EmbeddedFrameSinkClientStub() {}
  ~EmbeddedFrameSinkClientStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return EmbeddedFrameSinkClientStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return EmbeddedFrameSinkClientStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class BLINK_PLATFORM_EXPORT EmbeddedFrameSinkProviderStubDispatch {
 public:
  static bool Accept(EmbeddedFrameSinkProvider* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      EmbeddedFrameSinkProvider* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<EmbeddedFrameSinkProvider>>
class EmbeddedFrameSinkProviderStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  EmbeddedFrameSinkProviderStub() {}
  ~EmbeddedFrameSinkProviderStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return EmbeddedFrameSinkProviderStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return EmbeddedFrameSinkProviderStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class BLINK_PLATFORM_EXPORT EmbeddedFrameSinkClientRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class BLINK_PLATFORM_EXPORT EmbeddedFrameSinkProviderRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace blink
}  // namespace mojom
}  // namespace blink

namespace mojo {

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_FRAME_SINKS_EMBEDDED_FRAME_SINK_MOJOM_BLINK_H_