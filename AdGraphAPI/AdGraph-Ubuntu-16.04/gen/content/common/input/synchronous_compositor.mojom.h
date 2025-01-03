// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_INPUT_SYNCHRONOUS_COMPOSITOR_MOJOM_H_
#define CONTENT_COMMON_INPUT_SYNCHRONOUS_COMPOSITOR_MOJOM_H_

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
#include "content/common/input/synchronous_compositor.mojom-shared.h"
#include "mojo/public/mojom/base/time.mojom.h"
#include "ui/gfx/geometry/mojo/geometry.mojom.h"
#include "services/viz/public/interfaces/compositing/begin_frame_args.mojom.h"
#include "services/viz/public/interfaces/compositing/compositor_frame.mojom.h"
#include "services/viz/public/interfaces/compositing/compositor_frame_metadata.mojom.h"
#include "services/viz/public/interfaces/compositing/returned_resource.mojom.h"
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
#include "content/common/input/sync_compositor_messages.h"
#include "content/common/content_export.h"


namespace content {
namespace mojom {
class SynchronousCompositor;
using SynchronousCompositorPtr = mojo::InterfacePtr<SynchronousCompositor>;
using SynchronousCompositorPtrInfo = mojo::InterfacePtrInfo<SynchronousCompositor>;
using ThreadSafeSynchronousCompositorPtr =
    mojo::ThreadSafeInterfacePtr<SynchronousCompositor>;
using SynchronousCompositorRequest = mojo::InterfaceRequest<SynchronousCompositor>;
using SynchronousCompositorAssociatedPtr =
    mojo::AssociatedInterfacePtr<SynchronousCompositor>;
using ThreadSafeSynchronousCompositorAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<SynchronousCompositor>;
using SynchronousCompositorAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<SynchronousCompositor>;
using SynchronousCompositorAssociatedRequest =
    mojo::AssociatedInterfaceRequest<SynchronousCompositor>;

class SynchronousCompositorHost;
using SynchronousCompositorHostPtr = mojo::InterfacePtr<SynchronousCompositorHost>;
using SynchronousCompositorHostPtrInfo = mojo::InterfacePtrInfo<SynchronousCompositorHost>;
using ThreadSafeSynchronousCompositorHostPtr =
    mojo::ThreadSafeInterfacePtr<SynchronousCompositorHost>;
using SynchronousCompositorHostRequest = mojo::InterfaceRequest<SynchronousCompositorHost>;
using SynchronousCompositorHostAssociatedPtr =
    mojo::AssociatedInterfacePtr<SynchronousCompositorHost>;
using ThreadSafeSynchronousCompositorHostAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<SynchronousCompositorHost>;
using SynchronousCompositorHostAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<SynchronousCompositorHost>;
using SynchronousCompositorHostAssociatedRequest =
    mojo::AssociatedInterfaceRequest<SynchronousCompositorHost>;

class SynchronousCompositorControlHost;
using SynchronousCompositorControlHostPtr = mojo::InterfacePtr<SynchronousCompositorControlHost>;
using SynchronousCompositorControlHostPtrInfo = mojo::InterfacePtrInfo<SynchronousCompositorControlHost>;
using ThreadSafeSynchronousCompositorControlHostPtr =
    mojo::ThreadSafeInterfacePtr<SynchronousCompositorControlHost>;
using SynchronousCompositorControlHostRequest = mojo::InterfaceRequest<SynchronousCompositorControlHost>;
using SynchronousCompositorControlHostAssociatedPtr =
    mojo::AssociatedInterfacePtr<SynchronousCompositorControlHost>;
using ThreadSafeSynchronousCompositorControlHostAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<SynchronousCompositorControlHost>;
using SynchronousCompositorControlHostAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<SynchronousCompositorControlHost>;
using SynchronousCompositorControlHostAssociatedRequest =
    mojo::AssociatedInterfaceRequest<SynchronousCompositorControlHost>;

using SyncCompositorDemandDrawHwParams = mojo::native::NativeStruct;
using SyncCompositorDemandDrawHwParamsPtr = mojo::native::NativeStructPtr;

using SyncCompositorSetSharedMemoryParams = mojo::native::NativeStruct;
using SyncCompositorSetSharedMemoryParamsPtr = mojo::native::NativeStructPtr;

using SyncCompositorDemandDrawSwParams = mojo::native::NativeStruct;
using SyncCompositorDemandDrawSwParamsPtr = mojo::native::NativeStructPtr;

using SyncCompositorCommonRendererParams = mojo::native::NativeStruct;
using SyncCompositorCommonRendererParamsPtr = mojo::native::NativeStructPtr;


class SynchronousCompositorProxy;

template <typename ImplRefTraits>
class SynchronousCompositorStub;

class SynchronousCompositorRequestValidator;
class SynchronousCompositorResponseValidator;

class CONTENT_EXPORT SynchronousCompositor
    : public SynchronousCompositorInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = true;

  using Proxy_ = SynchronousCompositorProxy;

  template <typename ImplRefTraits>
  using Stub_ = SynchronousCompositorStub<ImplRefTraits>;

  using RequestValidator_ = SynchronousCompositorRequestValidator;
  using ResponseValidator_ = SynchronousCompositorResponseValidator;
  enum MethodMinVersions : uint32_t {
    kComputeScrollMinVersion = 0,
    kDemandDrawHwAsyncMinVersion = 0,
    kDemandDrawHwMinVersion = 0,
    kSetSharedMemoryMinVersion = 0,
    kDemandDrawSwMinVersion = 0,
    kZeroSharedMemoryMinVersion = 0,
    kZoomByMinVersion = 0,
    kSetMemoryPolicyMinVersion = 0,
    kReclaimResourcesMinVersion = 0,
    kSetScrollMinVersion = 0,
    kBeginFrameMinVersion = 0,
    kSetBeginFrameSourcePausedMinVersion = 0,
  };
  virtual ~SynchronousCompositor() {}

  virtual void ComputeScroll(base::TimeTicks time) = 0;

  virtual void DemandDrawHwAsync(const content::SyncCompositorDemandDrawHwParams& draw_params) = 0;

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  virtual bool DemandDrawHw(const content::SyncCompositorDemandDrawHwParams& draw_params, content::SyncCompositorCommonRendererParams* out_result, uint32_t* out_layer_tree_frame_sink_id, uint32_t* out_metadata_version, base::Optional<viz::CompositorFrame>* out_frame);

  using DemandDrawHwCallback = base::OnceCallback<void(const content::SyncCompositorCommonRendererParams&, uint32_t, uint32_t, base::Optional<viz::CompositorFrame>)>;
  virtual void DemandDrawHw(const content::SyncCompositorDemandDrawHwParams& draw_params, DemandDrawHwCallback callback) = 0;

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  virtual bool SetSharedMemory(const content::SyncCompositorSetSharedMemoryParams& params, bool* out_success, content::SyncCompositorCommonRendererParams* out_result);

  using SetSharedMemoryCallback = base::OnceCallback<void(bool, const content::SyncCompositorCommonRendererParams&)>;
  virtual void SetSharedMemory(const content::SyncCompositorSetSharedMemoryParams& params, SetSharedMemoryCallback callback) = 0;

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  virtual bool DemandDrawSw(const content::SyncCompositorDemandDrawSwParams& draw_params, content::SyncCompositorCommonRendererParams* out_result, uint32_t* out_metadata_version, base::Optional<viz::CompositorFrameMetadata>* out_meta_data);

  using DemandDrawSwCallback = base::OnceCallback<void(const content::SyncCompositorCommonRendererParams&, uint32_t, base::Optional<viz::CompositorFrameMetadata>)>;
  virtual void DemandDrawSw(const content::SyncCompositorDemandDrawSwParams& draw_params, DemandDrawSwCallback callback) = 0;

  virtual void ZeroSharedMemory() = 0;

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  virtual bool ZoomBy(float delta, const gfx::Point& anchor, content::SyncCompositorCommonRendererParams* out_result);

  using ZoomByCallback = base::OnceCallback<void(const content::SyncCompositorCommonRendererParams&)>;
  virtual void ZoomBy(float delta, const gfx::Point& anchor, ZoomByCallback callback) = 0;

  virtual void SetMemoryPolicy(uint32_t bytes_limit) = 0;

  virtual void ReclaimResources(uint32_t layer_tree_frame_sink_id, const std::vector<viz::ReturnedResource>& resources) = 0;

  virtual void SetScroll(const gfx::ScrollOffset& offset) = 0;

  virtual void BeginFrame(const viz::BeginFrameArgs& args) = 0;

  virtual void SetBeginFrameSourcePaused(bool paused) = 0;
};
class CONTENT_EXPORT SynchronousCompositorInterceptorForTesting : public SynchronousCompositor {
  virtual SynchronousCompositor* GetForwardingInterface() = 0;
  void ComputeScroll(base::TimeTicks time) override;
  void DemandDrawHwAsync(const content::SyncCompositorDemandDrawHwParams& draw_params) override;
  void DemandDrawHw(const content::SyncCompositorDemandDrawHwParams& draw_params, DemandDrawHwCallback callback) override;
  void SetSharedMemory(const content::SyncCompositorSetSharedMemoryParams& params, SetSharedMemoryCallback callback) override;
  void DemandDrawSw(const content::SyncCompositorDemandDrawSwParams& draw_params, DemandDrawSwCallback callback) override;
  void ZeroSharedMemory() override;
  void ZoomBy(float delta, const gfx::Point& anchor, ZoomByCallback callback) override;
  void SetMemoryPolicy(uint32_t bytes_limit) override;
  void ReclaimResources(uint32_t layer_tree_frame_sink_id, const std::vector<viz::ReturnedResource>& resources) override;
  void SetScroll(const gfx::ScrollOffset& offset) override;
  void BeginFrame(const viz::BeginFrameArgs& args) override;
  void SetBeginFrameSourcePaused(bool paused) override;
};
class CONTENT_EXPORT SynchronousCompositorAsyncWaiter {
 public:
  explicit SynchronousCompositorAsyncWaiter(SynchronousCompositor* proxy);
  ~SynchronousCompositorAsyncWaiter();
  void DemandDrawHw(
      const content::SyncCompositorDemandDrawHwParams& draw_params, content::SyncCompositorCommonRendererParams* out_result, uint32_t* out_layer_tree_frame_sink_id, uint32_t* out_metadata_version, base::Optional<viz::CompositorFrame>* out_frame);
  void SetSharedMemory(
      const content::SyncCompositorSetSharedMemoryParams& params, bool* out_success, content::SyncCompositorCommonRendererParams* out_result);
  void DemandDrawSw(
      const content::SyncCompositorDemandDrawSwParams& draw_params, content::SyncCompositorCommonRendererParams* out_result, uint32_t* out_metadata_version, base::Optional<viz::CompositorFrameMetadata>* out_meta_data);
  void ZoomBy(
      float delta, const gfx::Point& anchor, content::SyncCompositorCommonRendererParams* out_result);

 private:
  SynchronousCompositor* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(SynchronousCompositorAsyncWaiter);
};

class SynchronousCompositorHostProxy;

template <typename ImplRefTraits>
class SynchronousCompositorHostStub;

class SynchronousCompositorHostRequestValidator;

class CONTENT_EXPORT SynchronousCompositorHost
    : public SynchronousCompositorHostInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = SynchronousCompositorHostProxy;

  template <typename ImplRefTraits>
  using Stub_ = SynchronousCompositorHostStub<ImplRefTraits>;

  using RequestValidator_ = SynchronousCompositorHostRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kLayerTreeFrameSinkCreatedMinVersion = 0,
    kUpdateStateMinVersion = 0,
    kSetNeedsBeginFramesMinVersion = 0,
  };
  virtual ~SynchronousCompositorHost() {}

  virtual void LayerTreeFrameSinkCreated() = 0;

  virtual void UpdateState(const content::SyncCompositorCommonRendererParams& params) = 0;

  virtual void SetNeedsBeginFrames(bool needs_begin_frames) = 0;
};
class CONTENT_EXPORT SynchronousCompositorHostInterceptorForTesting : public SynchronousCompositorHost {
  virtual SynchronousCompositorHost* GetForwardingInterface() = 0;
  void LayerTreeFrameSinkCreated() override;
  void UpdateState(const content::SyncCompositorCommonRendererParams& params) override;
  void SetNeedsBeginFrames(bool needs_begin_frames) override;
};
class CONTENT_EXPORT SynchronousCompositorHostAsyncWaiter {
 public:
  explicit SynchronousCompositorHostAsyncWaiter(SynchronousCompositorHost* proxy);
  ~SynchronousCompositorHostAsyncWaiter();

 private:
  SynchronousCompositorHost* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(SynchronousCompositorHostAsyncWaiter);
};

class SynchronousCompositorControlHostProxy;

template <typename ImplRefTraits>
class SynchronousCompositorControlHostStub;

class SynchronousCompositorControlHostRequestValidator;

class CONTENT_EXPORT SynchronousCompositorControlHost
    : public SynchronousCompositorControlHostInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = SynchronousCompositorControlHostProxy;

  template <typename ImplRefTraits>
  using Stub_ = SynchronousCompositorControlHostStub<ImplRefTraits>;

  using RequestValidator_ = SynchronousCompositorControlHostRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kReturnFrameMinVersion = 0,
    kBeginFrameResponseMinVersion = 0,
  };
  virtual ~SynchronousCompositorControlHost() {}

  virtual void ReturnFrame(uint32_t layer_tree_frame_sink_id, uint32_t metadata_version, base::Optional<viz::CompositorFrame> frame) = 0;

  virtual void BeginFrameResponse(const content::SyncCompositorCommonRendererParams& params) = 0;
};
class CONTENT_EXPORT SynchronousCompositorControlHostInterceptorForTesting : public SynchronousCompositorControlHost {
  virtual SynchronousCompositorControlHost* GetForwardingInterface() = 0;
  void ReturnFrame(uint32_t layer_tree_frame_sink_id, uint32_t metadata_version, base::Optional<viz::CompositorFrame> frame) override;
  void BeginFrameResponse(const content::SyncCompositorCommonRendererParams& params) override;
};
class CONTENT_EXPORT SynchronousCompositorControlHostAsyncWaiter {
 public:
  explicit SynchronousCompositorControlHostAsyncWaiter(SynchronousCompositorControlHost* proxy);
  ~SynchronousCompositorControlHostAsyncWaiter();

 private:
  SynchronousCompositorControlHost* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(SynchronousCompositorControlHostAsyncWaiter);
};

class CONTENT_EXPORT SynchronousCompositorProxy
    : public SynchronousCompositor {
 public:
  explicit SynchronousCompositorProxy(mojo::MessageReceiverWithResponder* receiver);
  void ComputeScroll(base::TimeTicks time) final;
  void DemandDrawHwAsync(const content::SyncCompositorDemandDrawHwParams& draw_params) final;
  bool DemandDrawHw(const content::SyncCompositorDemandDrawHwParams& draw_params, content::SyncCompositorCommonRendererParams* out_result, uint32_t* out_layer_tree_frame_sink_id, uint32_t* out_metadata_version, base::Optional<viz::CompositorFrame>* out_frame) final;
  void DemandDrawHw(const content::SyncCompositorDemandDrawHwParams& draw_params, DemandDrawHwCallback callback) final;
  bool SetSharedMemory(const content::SyncCompositorSetSharedMemoryParams& params, bool* out_success, content::SyncCompositorCommonRendererParams* out_result) final;
  void SetSharedMemory(const content::SyncCompositorSetSharedMemoryParams& params, SetSharedMemoryCallback callback) final;
  bool DemandDrawSw(const content::SyncCompositorDemandDrawSwParams& draw_params, content::SyncCompositorCommonRendererParams* out_result, uint32_t* out_metadata_version, base::Optional<viz::CompositorFrameMetadata>* out_meta_data) final;
  void DemandDrawSw(const content::SyncCompositorDemandDrawSwParams& draw_params, DemandDrawSwCallback callback) final;
  void ZeroSharedMemory() final;
  bool ZoomBy(float delta, const gfx::Point& anchor, content::SyncCompositorCommonRendererParams* out_result) final;
  void ZoomBy(float delta, const gfx::Point& anchor, ZoomByCallback callback) final;
  void SetMemoryPolicy(uint32_t bytes_limit) final;
  void ReclaimResources(uint32_t layer_tree_frame_sink_id, const std::vector<viz::ReturnedResource>& resources) final;
  void SetScroll(const gfx::ScrollOffset& offset) final;
  void BeginFrame(const viz::BeginFrameArgs& args) final;
  void SetBeginFrameSourcePaused(bool paused) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class CONTENT_EXPORT SynchronousCompositorHostProxy
    : public SynchronousCompositorHost {
 public:
  explicit SynchronousCompositorHostProxy(mojo::MessageReceiverWithResponder* receiver);
  void LayerTreeFrameSinkCreated() final;
  void UpdateState(const content::SyncCompositorCommonRendererParams& params) final;
  void SetNeedsBeginFrames(bool needs_begin_frames) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class CONTENT_EXPORT SynchronousCompositorControlHostProxy
    : public SynchronousCompositorControlHost {
 public:
  explicit SynchronousCompositorControlHostProxy(mojo::MessageReceiverWithResponder* receiver);
  void ReturnFrame(uint32_t layer_tree_frame_sink_id, uint32_t metadata_version, base::Optional<viz::CompositorFrame> frame) final;
  void BeginFrameResponse(const content::SyncCompositorCommonRendererParams& params) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class CONTENT_EXPORT SynchronousCompositorStubDispatch {
 public:
  static bool Accept(SynchronousCompositor* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      SynchronousCompositor* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<SynchronousCompositor>>
class SynchronousCompositorStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  SynchronousCompositorStub() {}
  ~SynchronousCompositorStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return SynchronousCompositorStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return SynchronousCompositorStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class CONTENT_EXPORT SynchronousCompositorHostStubDispatch {
 public:
  static bool Accept(SynchronousCompositorHost* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      SynchronousCompositorHost* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<SynchronousCompositorHost>>
class SynchronousCompositorHostStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  SynchronousCompositorHostStub() {}
  ~SynchronousCompositorHostStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return SynchronousCompositorHostStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return SynchronousCompositorHostStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class CONTENT_EXPORT SynchronousCompositorControlHostStubDispatch {
 public:
  static bool Accept(SynchronousCompositorControlHost* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      SynchronousCompositorControlHost* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<SynchronousCompositorControlHost>>
class SynchronousCompositorControlHostStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  SynchronousCompositorControlHostStub() {}
  ~SynchronousCompositorControlHostStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return SynchronousCompositorControlHostStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return SynchronousCompositorControlHostStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class CONTENT_EXPORT SynchronousCompositorRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class CONTENT_EXPORT SynchronousCompositorHostRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class CONTENT_EXPORT SynchronousCompositorControlHostRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class CONTENT_EXPORT SynchronousCompositorResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};













}  // namespace mojom
}  // namespace content

namespace mojo {

}  // namespace mojo

#endif  // CONTENT_COMMON_INPUT_SYNCHRONOUS_COMPOSITOR_MOJOM_H_