// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_FRAME_SINK_PROVIDER_MOJOM_H_
#define CONTENT_COMMON_FRAME_SINK_PROVIDER_MOJOM_H_

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
#include "content/common/frame_sink_provider.mojom-shared.h"
#include "content/common/render_frame_metadata.mojom.h"
#include "services/viz/public/interfaces/compositing/compositor_frame_sink.mojom.h"
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
class FrameSinkProvider;
using FrameSinkProviderPtr = mojo::InterfacePtr<FrameSinkProvider>;
using FrameSinkProviderPtrInfo = mojo::InterfacePtrInfo<FrameSinkProvider>;
using ThreadSafeFrameSinkProviderPtr =
    mojo::ThreadSafeInterfacePtr<FrameSinkProvider>;
using FrameSinkProviderRequest = mojo::InterfaceRequest<FrameSinkProvider>;
using FrameSinkProviderAssociatedPtr =
    mojo::AssociatedInterfacePtr<FrameSinkProvider>;
using ThreadSafeFrameSinkProviderAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<FrameSinkProvider>;
using FrameSinkProviderAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<FrameSinkProvider>;
using FrameSinkProviderAssociatedRequest =
    mojo::AssociatedInterfaceRequest<FrameSinkProvider>;


class FrameSinkProviderProxy;

template <typename ImplRefTraits>
class FrameSinkProviderStub;

class FrameSinkProviderRequestValidator;

class CONTENT_EXPORT FrameSinkProvider
    : public FrameSinkProviderInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = FrameSinkProviderProxy;

  template <typename ImplRefTraits>
  using Stub_ = FrameSinkProviderStub<ImplRefTraits>;

  using RequestValidator_ = FrameSinkProviderRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kCreateForWidgetMinVersion = 0,
    kRegisterRenderFrameMetadataObserverMinVersion = 0,
  };
  virtual ~FrameSinkProvider() {}

  virtual void CreateForWidget(int32_t widget_id, ::viz::mojom::CompositorFrameSinkRequest compositor_frame_sink_request, ::viz::mojom::CompositorFrameSinkClientPtr compositor_frame_sink_client) = 0;

  virtual void RegisterRenderFrameMetadataObserver(int32_t widget_id, ::content::mojom::RenderFrameMetadataObserverClientRequest render_frame_metadata_observer_client_request, ::content::mojom::RenderFrameMetadataObserverPtr render_frame_metadata_observer) = 0;
};
class CONTENT_EXPORT FrameSinkProviderInterceptorForTesting : public FrameSinkProvider {
  virtual FrameSinkProvider* GetForwardingInterface() = 0;
  void CreateForWidget(int32_t widget_id, ::viz::mojom::CompositorFrameSinkRequest compositor_frame_sink_request, ::viz::mojom::CompositorFrameSinkClientPtr compositor_frame_sink_client) override;
  void RegisterRenderFrameMetadataObserver(int32_t widget_id, ::content::mojom::RenderFrameMetadataObserverClientRequest render_frame_metadata_observer_client_request, ::content::mojom::RenderFrameMetadataObserverPtr render_frame_metadata_observer) override;
};
class CONTENT_EXPORT FrameSinkProviderAsyncWaiter {
 public:
  explicit FrameSinkProviderAsyncWaiter(FrameSinkProvider* proxy);
  ~FrameSinkProviderAsyncWaiter();

 private:
  FrameSinkProvider* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(FrameSinkProviderAsyncWaiter);
};

class CONTENT_EXPORT FrameSinkProviderProxy
    : public FrameSinkProvider {
 public:
  explicit FrameSinkProviderProxy(mojo::MessageReceiverWithResponder* receiver);
  void CreateForWidget(int32_t widget_id, ::viz::mojom::CompositorFrameSinkRequest compositor_frame_sink_request, ::viz::mojom::CompositorFrameSinkClientPtr compositor_frame_sink_client) final;
  void RegisterRenderFrameMetadataObserver(int32_t widget_id, ::content::mojom::RenderFrameMetadataObserverClientRequest render_frame_metadata_observer_client_request, ::content::mojom::RenderFrameMetadataObserverPtr render_frame_metadata_observer) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class CONTENT_EXPORT FrameSinkProviderStubDispatch {
 public:
  static bool Accept(FrameSinkProvider* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      FrameSinkProvider* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<FrameSinkProvider>>
class FrameSinkProviderStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  FrameSinkProviderStub() {}
  ~FrameSinkProviderStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return FrameSinkProviderStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return FrameSinkProviderStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class CONTENT_EXPORT FrameSinkProviderRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace content

namespace mojo {

}  // namespace mojo

#endif  // CONTENT_COMMON_FRAME_SINK_PROVIDER_MOJOM_H_