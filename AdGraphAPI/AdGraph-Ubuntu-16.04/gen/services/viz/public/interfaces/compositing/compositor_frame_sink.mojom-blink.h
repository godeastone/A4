// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_COMPOSITOR_FRAME_SINK_MOJOM_BLINK_H_
#define SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_COMPOSITOR_FRAME_SINK_MOJOM_BLINK_H_

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
#include "services/viz/public/interfaces/compositing/compositor_frame_sink.mojom-shared.h"
#include "mojo/public/mojom/base/time.mojom-blink.h"
#include "services/viz/public/interfaces/compositing/begin_frame_args.mojom-blink.h"
#include "services/viz/public/interfaces/compositing/compositor_frame.mojom-blink.h"
#include "services/viz/public/interfaces/compositing/local_surface_id.mojom-blink.h"
#include "services/viz/public/interfaces/compositing/returned_resource.mojom-blink.h"
#include "services/viz/public/interfaces/hit_test/hit_test_region_list.mojom-blink.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-blink.h"
#include "gpu/ipc/common/mailbox.mojom-blink.h"

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


namespace viz {
namespace mojom {
namespace blink {
class CompositorFrameSink;
using CompositorFrameSinkPtr = mojo::InterfacePtr<CompositorFrameSink>;
using RevocableCompositorFrameSinkPtr = ::blink::RevocableInterfacePtr<CompositorFrameSink>;
using CompositorFrameSinkPtrInfo = mojo::InterfacePtrInfo<CompositorFrameSink>;
using ThreadSafeCompositorFrameSinkPtr =
    mojo::ThreadSafeInterfacePtr<CompositorFrameSink>;
using CompositorFrameSinkRequest = mojo::InterfaceRequest<CompositorFrameSink>;
using CompositorFrameSinkAssociatedPtr =
    mojo::AssociatedInterfacePtr<CompositorFrameSink>;
using ThreadSafeCompositorFrameSinkAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<CompositorFrameSink>;
using CompositorFrameSinkAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<CompositorFrameSink>;
using CompositorFrameSinkAssociatedRequest =
    mojo::AssociatedInterfaceRequest<CompositorFrameSink>;

class CompositorFrameSinkClient;
using CompositorFrameSinkClientPtr = mojo::InterfacePtr<CompositorFrameSinkClient>;
using RevocableCompositorFrameSinkClientPtr = ::blink::RevocableInterfacePtr<CompositorFrameSinkClient>;
using CompositorFrameSinkClientPtrInfo = mojo::InterfacePtrInfo<CompositorFrameSinkClient>;
using ThreadSafeCompositorFrameSinkClientPtr =
    mojo::ThreadSafeInterfacePtr<CompositorFrameSinkClient>;
using CompositorFrameSinkClientRequest = mojo::InterfaceRequest<CompositorFrameSinkClient>;
using CompositorFrameSinkClientAssociatedPtr =
    mojo::AssociatedInterfacePtr<CompositorFrameSinkClient>;
using ThreadSafeCompositorFrameSinkClientAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<CompositorFrameSinkClient>;
using CompositorFrameSinkClientAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<CompositorFrameSinkClient>;
using CompositorFrameSinkClientAssociatedRequest =
    mojo::AssociatedInterfaceRequest<CompositorFrameSinkClient>;


class CompositorFrameSinkProxy;

template <typename ImplRefTraits>
class CompositorFrameSinkStub;

class CompositorFrameSinkRequestValidator;
class CompositorFrameSinkResponseValidator;

class  CompositorFrameSink
    : public CompositorFrameSinkInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = true;

  using Proxy_ = CompositorFrameSinkProxy;

  template <typename ImplRefTraits>
  using Stub_ = CompositorFrameSinkStub<ImplRefTraits>;

  using RequestValidator_ = CompositorFrameSinkRequestValidator;
  using ResponseValidator_ = CompositorFrameSinkResponseValidator;
  enum MethodMinVersions : uint32_t {
    kSetNeedsBeginFrameMinVersion = 0,
    kSetWantsAnimateOnlyBeginFramesMinVersion = 0,
    kSubmitCompositorFrameMinVersion = 0,
    kSubmitCompositorFrameSyncMinVersion = 0,
    kDidNotProduceFrameMinVersion = 0,
    kDidAllocateSharedBitmapMinVersion = 0,
    kDidDeleteSharedBitmapMinVersion = 0,
  };
  virtual ~CompositorFrameSink() {}

  virtual void SetNeedsBeginFrame(bool needs_begin_frame) = 0;

  virtual void SetWantsAnimateOnlyBeginFrames() = 0;

  virtual void SubmitCompositorFrame(const viz::LocalSurfaceId& local_surface_id, viz::CompositorFrame frame, ::viz::mojom::blink::HitTestRegionListPtr hit_test_region_list, uint64_t submit_time) = 0;

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  virtual bool SubmitCompositorFrameSync(const viz::LocalSurfaceId& local_surface_id, viz::CompositorFrame frame, ::viz::mojom::blink::HitTestRegionListPtr hit_test_region_list, uint64_t submit_time, WTF::Vector<viz::ReturnedResource>* out_resources);

  using SubmitCompositorFrameSyncCallback = base::OnceCallback<void(const WTF::Vector<viz::ReturnedResource>&)>;
  virtual void SubmitCompositorFrameSync(const viz::LocalSurfaceId& local_surface_id, viz::CompositorFrame frame, ::viz::mojom::blink::HitTestRegionListPtr hit_test_region_list, uint64_t submit_time, SubmitCompositorFrameSyncCallback callback) = 0;

  virtual void DidNotProduceFrame(const viz::BeginFrameAck& ack) = 0;

  virtual void DidAllocateSharedBitmap(mojo::ScopedSharedBufferHandle buffer, ::gpu::mojom::blink::MailboxPtr id) = 0;

  virtual void DidDeleteSharedBitmap(::gpu::mojom::blink::MailboxPtr id) = 0;
};
class  CompositorFrameSinkInterceptorForTesting : public CompositorFrameSink {
  virtual CompositorFrameSink* GetForwardingInterface() = 0;
  void SetNeedsBeginFrame(bool needs_begin_frame) override;
  void SetWantsAnimateOnlyBeginFrames() override;
  void SubmitCompositorFrame(const viz::LocalSurfaceId& local_surface_id, viz::CompositorFrame frame, ::viz::mojom::blink::HitTestRegionListPtr hit_test_region_list, uint64_t submit_time) override;
  void SubmitCompositorFrameSync(const viz::LocalSurfaceId& local_surface_id, viz::CompositorFrame frame, ::viz::mojom::blink::HitTestRegionListPtr hit_test_region_list, uint64_t submit_time, SubmitCompositorFrameSyncCallback callback) override;
  void DidNotProduceFrame(const viz::BeginFrameAck& ack) override;
  void DidAllocateSharedBitmap(mojo::ScopedSharedBufferHandle buffer, ::gpu::mojom::blink::MailboxPtr id) override;
  void DidDeleteSharedBitmap(::gpu::mojom::blink::MailboxPtr id) override;
};
class  CompositorFrameSinkAsyncWaiter {
 public:
  explicit CompositorFrameSinkAsyncWaiter(CompositorFrameSink* proxy);
  ~CompositorFrameSinkAsyncWaiter();
  void SubmitCompositorFrameSync(
      const viz::LocalSurfaceId& local_surface_id, viz::CompositorFrame frame, ::viz::mojom::blink::HitTestRegionListPtr hit_test_region_list, uint64_t submit_time, WTF::Vector<viz::ReturnedResource>* out_resources);

 private:
  CompositorFrameSink* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(CompositorFrameSinkAsyncWaiter);
};

class CompositorFrameSinkClientProxy;

template <typename ImplRefTraits>
class CompositorFrameSinkClientStub;

class CompositorFrameSinkClientRequestValidator;

class  CompositorFrameSinkClient
    : public CompositorFrameSinkClientInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = CompositorFrameSinkClientProxy;

  template <typename ImplRefTraits>
  using Stub_ = CompositorFrameSinkClientStub<ImplRefTraits>;

  using RequestValidator_ = CompositorFrameSinkClientRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kDidReceiveCompositorFrameAckMinVersion = 0,
    kDidPresentCompositorFrameMinVersion = 0,
    kDidDiscardCompositorFrameMinVersion = 0,
    kOnBeginFrameMinVersion = 0,
    kOnBeginFramePausedChangedMinVersion = 0,
    kReclaimResourcesMinVersion = 0,
  };
  virtual ~CompositorFrameSinkClient() {}

  virtual void DidReceiveCompositorFrameAck(const WTF::Vector<viz::ReturnedResource>& resources) = 0;

  virtual void DidPresentCompositorFrame(uint32_t presentation_token, ::mojo_base::mojom::blink::TimeTicksPtr time, WTF::TimeDelta refresh, uint32_t flags) = 0;

  virtual void DidDiscardCompositorFrame(uint32_t presentation_token) = 0;

  virtual void OnBeginFrame(const viz::BeginFrameArgs& args) = 0;

  virtual void OnBeginFramePausedChanged(bool paused) = 0;

  virtual void ReclaimResources(const WTF::Vector<viz::ReturnedResource>& resources) = 0;
};
class  CompositorFrameSinkClientInterceptorForTesting : public CompositorFrameSinkClient {
  virtual CompositorFrameSinkClient* GetForwardingInterface() = 0;
  void DidReceiveCompositorFrameAck(const WTF::Vector<viz::ReturnedResource>& resources) override;
  void DidPresentCompositorFrame(uint32_t presentation_token, ::mojo_base::mojom::blink::TimeTicksPtr time, WTF::TimeDelta refresh, uint32_t flags) override;
  void DidDiscardCompositorFrame(uint32_t presentation_token) override;
  void OnBeginFrame(const viz::BeginFrameArgs& args) override;
  void OnBeginFramePausedChanged(bool paused) override;
  void ReclaimResources(const WTF::Vector<viz::ReturnedResource>& resources) override;
};
class  CompositorFrameSinkClientAsyncWaiter {
 public:
  explicit CompositorFrameSinkClientAsyncWaiter(CompositorFrameSinkClient* proxy);
  ~CompositorFrameSinkClientAsyncWaiter();

 private:
  CompositorFrameSinkClient* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(CompositorFrameSinkClientAsyncWaiter);
};

class  CompositorFrameSinkProxy
    : public CompositorFrameSink {
 public:
  explicit CompositorFrameSinkProxy(mojo::MessageReceiverWithResponder* receiver);
  void SetNeedsBeginFrame(bool needs_begin_frame) final;
  void SetWantsAnimateOnlyBeginFrames() final;
  void SubmitCompositorFrame(const viz::LocalSurfaceId& local_surface_id, viz::CompositorFrame frame, ::viz::mojom::blink::HitTestRegionListPtr hit_test_region_list, uint64_t submit_time) final;
  bool SubmitCompositorFrameSync(const viz::LocalSurfaceId& local_surface_id, viz::CompositorFrame frame, ::viz::mojom::blink::HitTestRegionListPtr hit_test_region_list, uint64_t submit_time, WTF::Vector<viz::ReturnedResource>* out_resources) final;
  void SubmitCompositorFrameSync(const viz::LocalSurfaceId& local_surface_id, viz::CompositorFrame frame, ::viz::mojom::blink::HitTestRegionListPtr hit_test_region_list, uint64_t submit_time, SubmitCompositorFrameSyncCallback callback) final;
  void DidNotProduceFrame(const viz::BeginFrameAck& ack) final;
  void DidAllocateSharedBitmap(mojo::ScopedSharedBufferHandle buffer, ::gpu::mojom::blink::MailboxPtr id) final;
  void DidDeleteSharedBitmap(::gpu::mojom::blink::MailboxPtr id) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class  CompositorFrameSinkClientProxy
    : public CompositorFrameSinkClient {
 public:
  explicit CompositorFrameSinkClientProxy(mojo::MessageReceiverWithResponder* receiver);
  void DidReceiveCompositorFrameAck(const WTF::Vector<viz::ReturnedResource>& resources) final;
  void DidPresentCompositorFrame(uint32_t presentation_token, ::mojo_base::mojom::blink::TimeTicksPtr time, WTF::TimeDelta refresh, uint32_t flags) final;
  void DidDiscardCompositorFrame(uint32_t presentation_token) final;
  void OnBeginFrame(const viz::BeginFrameArgs& args) final;
  void OnBeginFramePausedChanged(bool paused) final;
  void ReclaimResources(const WTF::Vector<viz::ReturnedResource>& resources) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  CompositorFrameSinkStubDispatch {
 public:
  static bool Accept(CompositorFrameSink* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      CompositorFrameSink* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<CompositorFrameSink>>
class CompositorFrameSinkStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  CompositorFrameSinkStub() {}
  ~CompositorFrameSinkStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return CompositorFrameSinkStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return CompositorFrameSinkStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  CompositorFrameSinkClientStubDispatch {
 public:
  static bool Accept(CompositorFrameSinkClient* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      CompositorFrameSinkClient* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<CompositorFrameSinkClient>>
class CompositorFrameSinkClientStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  CompositorFrameSinkClientStub() {}
  ~CompositorFrameSinkClientStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return CompositorFrameSinkClientStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return CompositorFrameSinkClientStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  CompositorFrameSinkRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  CompositorFrameSinkClientRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  CompositorFrameSinkResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace blink
}  // namespace mojom
}  // namespace viz

namespace mojo {

}  // namespace mojo

#endif  // SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_COMPOSITOR_FRAME_SINK_MOJOM_BLINK_H_