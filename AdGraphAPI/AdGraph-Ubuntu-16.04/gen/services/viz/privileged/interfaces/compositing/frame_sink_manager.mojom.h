// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_VIZ_PRIVILEGED_INTERFACES_COMPOSITING_FRAME_SINK_MANAGER_MOJOM_H_
#define SERVICES_VIZ_PRIVILEGED_INTERFACES_COMPOSITING_FRAME_SINK_MANAGER_MOJOM_H_

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
#include "services/viz/privileged/interfaces/compositing/frame_sink_manager.mojom-shared.h"
#include "gpu/ipc/common/surface_handle.mojom.h"
#include "mojo/public/mojom/base/time.mojom.h"
#include "services/viz/privileged/interfaces/compositing/display_private.mojom.h"
#include "services/viz/privileged/interfaces/compositing/external_begin_frame_controller.mojom.h"
#include "services/viz/privileged/interfaces/compositing/frame_sink_video_capture.mojom.h"
#include "services/viz/privileged/interfaces/compositing/renderer_settings.mojom.h"
#include "services/viz/public/interfaces/compositing/compositor_frame_sink.mojom.h"
#include "services/viz/public/interfaces/compositing/copy_output_request.mojom.h"
#include "services/viz/public/interfaces/compositing/frame_sink_id.mojom.h"
#include "services/viz/public/interfaces/compositing/local_surface_id.mojom.h"
#include "services/viz/public/interfaces/compositing/surface_id.mojom.h"
#include "services/viz/public/interfaces/compositing/surface_info.mojom.h"
#include "services/viz/public/interfaces/hit_test/aggregated_hit_test_region.mojom.h"
#include "ui/gfx/geometry/mojo/geometry.mojom.h"
#include "services/viz/public/interfaces/compositing/video_detector_observer.mojom.h"
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


namespace viz {
namespace mojom {
class FrameSinkManager;
using FrameSinkManagerPtr = mojo::InterfacePtr<FrameSinkManager>;
using FrameSinkManagerPtrInfo = mojo::InterfacePtrInfo<FrameSinkManager>;
using ThreadSafeFrameSinkManagerPtr =
    mojo::ThreadSafeInterfacePtr<FrameSinkManager>;
using FrameSinkManagerRequest = mojo::InterfaceRequest<FrameSinkManager>;
using FrameSinkManagerAssociatedPtr =
    mojo::AssociatedInterfacePtr<FrameSinkManager>;
using ThreadSafeFrameSinkManagerAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<FrameSinkManager>;
using FrameSinkManagerAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<FrameSinkManager>;
using FrameSinkManagerAssociatedRequest =
    mojo::AssociatedInterfaceRequest<FrameSinkManager>;

class FrameSinkManagerClient;
using FrameSinkManagerClientPtr = mojo::InterfacePtr<FrameSinkManagerClient>;
using FrameSinkManagerClientPtrInfo = mojo::InterfacePtrInfo<FrameSinkManagerClient>;
using ThreadSafeFrameSinkManagerClientPtr =
    mojo::ThreadSafeInterfacePtr<FrameSinkManagerClient>;
using FrameSinkManagerClientRequest = mojo::InterfaceRequest<FrameSinkManagerClient>;
using FrameSinkManagerClientAssociatedPtr =
    mojo::AssociatedInterfacePtr<FrameSinkManagerClient>;
using ThreadSafeFrameSinkManagerClientAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<FrameSinkManagerClient>;
using FrameSinkManagerClientAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<FrameSinkManagerClient>;
using FrameSinkManagerClientAssociatedRequest =
    mojo::AssociatedInterfaceRequest<FrameSinkManagerClient>;

class RootCompositorFrameSinkParams;
using RootCompositorFrameSinkParamsPtr = mojo::StructPtr<RootCompositorFrameSinkParams>;


class FrameSinkManagerProxy;

template <typename ImplRefTraits>
class FrameSinkManagerStub;

class FrameSinkManagerRequestValidator;
class FrameSinkManagerResponseValidator;

class  FrameSinkManager
    : public FrameSinkManagerInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = true;
  static constexpr bool HasSyncMethods_ = true;

  using Proxy_ = FrameSinkManagerProxy;

  template <typename ImplRefTraits>
  using Stub_ = FrameSinkManagerStub<ImplRefTraits>;

  using RequestValidator_ = FrameSinkManagerRequestValidator;
  using ResponseValidator_ = FrameSinkManagerResponseValidator;
  enum MethodMinVersions : uint32_t {
    kRegisterFrameSinkIdMinVersion = 0,
    kInvalidateFrameSinkIdMinVersion = 0,
    kEnableSynchronizationReportingMinVersion = 0,
    kSetFrameSinkDebugLabelMinVersion = 0,
    kCreateRootCompositorFrameSinkMinVersion = 0,
    kCreateCompositorFrameSinkMinVersion = 0,
    kDestroyCompositorFrameSinkMinVersion = 0,
    kRegisterFrameSinkHierarchyMinVersion = 0,
    kUnregisterFrameSinkHierarchyMinVersion = 0,
    kAssignTemporaryReferenceMinVersion = 0,
    kDropTemporaryReferenceMinVersion = 0,
    kAddVideoDetectorObserverMinVersion = 0,
    kCreateVideoCapturerMinVersion = 0,
    kEvictSurfacesMinVersion = 0,
    kRequestCopyOfOutputMinVersion = 0,
  };
  virtual ~FrameSinkManager() {}

  virtual void RegisterFrameSinkId(const viz::FrameSinkId& frame_sink_id) = 0;

  virtual void InvalidateFrameSinkId(const viz::FrameSinkId& frame_sink_id) = 0;

  virtual void EnableSynchronizationReporting(const viz::FrameSinkId& frame_sink_id, const std::string& reporting_label) = 0;

  virtual void SetFrameSinkDebugLabel(const viz::FrameSinkId& frame_sink_id, const std::string& debug_label) = 0;

  virtual void CreateRootCompositorFrameSink(RootCompositorFrameSinkParamsPtr params) = 0;

  virtual void CreateCompositorFrameSink(const viz::FrameSinkId& frame_sink_id, ::viz::mojom::CompositorFrameSinkRequest compositor_frame_sink, ::viz::mojom::CompositorFrameSinkClientPtr compositor_frame_sink_client) = 0;

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  virtual bool DestroyCompositorFrameSink(const viz::FrameSinkId& frame_sink_id);

  using DestroyCompositorFrameSinkCallback = base::OnceCallback<void()>;
  virtual void DestroyCompositorFrameSink(const viz::FrameSinkId& frame_sink_id, DestroyCompositorFrameSinkCallback callback) = 0;

  virtual void RegisterFrameSinkHierarchy(const viz::FrameSinkId& parent_frame_sink_id, const viz::FrameSinkId& child_frame_sink_id) = 0;

  virtual void UnregisterFrameSinkHierarchy(const viz::FrameSinkId& parent_frame_sink_id, const viz::FrameSinkId& child_frame_sink_id) = 0;

  virtual void AssignTemporaryReference(const viz::SurfaceId& surface_id, const viz::FrameSinkId& owner) = 0;

  virtual void DropTemporaryReference(const viz::SurfaceId& surface_id) = 0;

  virtual void AddVideoDetectorObserver(::viz::mojom::VideoDetectorObserverPtr observer) = 0;

  virtual void CreateVideoCapturer(::viz::mojom::FrameSinkVideoCapturerRequest request) = 0;

  virtual void EvictSurfaces(const std::vector<viz::SurfaceId>& surface_ids) = 0;

  virtual void RequestCopyOfOutput(const viz::SurfaceId& surface_id, std::unique_ptr<viz::CopyOutputRequest> request) = 0;
};
class  FrameSinkManagerInterceptorForTesting : public FrameSinkManager {
  virtual FrameSinkManager* GetForwardingInterface() = 0;
  void RegisterFrameSinkId(const viz::FrameSinkId& frame_sink_id) override;
  void InvalidateFrameSinkId(const viz::FrameSinkId& frame_sink_id) override;
  void EnableSynchronizationReporting(const viz::FrameSinkId& frame_sink_id, const std::string& reporting_label) override;
  void SetFrameSinkDebugLabel(const viz::FrameSinkId& frame_sink_id, const std::string& debug_label) override;
  void CreateRootCompositorFrameSink(RootCompositorFrameSinkParamsPtr params) override;
  void CreateCompositorFrameSink(const viz::FrameSinkId& frame_sink_id, ::viz::mojom::CompositorFrameSinkRequest compositor_frame_sink, ::viz::mojom::CompositorFrameSinkClientPtr compositor_frame_sink_client) override;
  void DestroyCompositorFrameSink(const viz::FrameSinkId& frame_sink_id, DestroyCompositorFrameSinkCallback callback) override;
  void RegisterFrameSinkHierarchy(const viz::FrameSinkId& parent_frame_sink_id, const viz::FrameSinkId& child_frame_sink_id) override;
  void UnregisterFrameSinkHierarchy(const viz::FrameSinkId& parent_frame_sink_id, const viz::FrameSinkId& child_frame_sink_id) override;
  void AssignTemporaryReference(const viz::SurfaceId& surface_id, const viz::FrameSinkId& owner) override;
  void DropTemporaryReference(const viz::SurfaceId& surface_id) override;
  void AddVideoDetectorObserver(::viz::mojom::VideoDetectorObserverPtr observer) override;
  void CreateVideoCapturer(::viz::mojom::FrameSinkVideoCapturerRequest request) override;
  void EvictSurfaces(const std::vector<viz::SurfaceId>& surface_ids) override;
  void RequestCopyOfOutput(const viz::SurfaceId& surface_id, std::unique_ptr<viz::CopyOutputRequest> request) override;
};
class  FrameSinkManagerAsyncWaiter {
 public:
  explicit FrameSinkManagerAsyncWaiter(FrameSinkManager* proxy);
  ~FrameSinkManagerAsyncWaiter();
  void DestroyCompositorFrameSink(
      const viz::FrameSinkId& frame_sink_id);

 private:
  FrameSinkManager* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(FrameSinkManagerAsyncWaiter);
};

class FrameSinkManagerClientProxy;

template <typename ImplRefTraits>
class FrameSinkManagerClientStub;

class FrameSinkManagerClientRequestValidator;

class  FrameSinkManagerClient
    : public FrameSinkManagerClientInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = FrameSinkManagerClientProxy;

  template <typename ImplRefTraits>
  using Stub_ = FrameSinkManagerClientStub<ImplRefTraits>;

  using RequestValidator_ = FrameSinkManagerClientRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kOnSurfaceCreatedMinVersion = 0,
    kOnFirstSurfaceActivationMinVersion = 0,
    kOnAggregatedHitTestRegionListUpdatedMinVersion = 0,
    kOnFrameTokenChangedMinVersion = 0,
  };
  virtual ~FrameSinkManagerClient() {}

  virtual void OnSurfaceCreated(const viz::SurfaceId& surface_id) = 0;

  virtual void OnFirstSurfaceActivation(const viz::SurfaceInfo& surface_info) = 0;

  virtual void OnAggregatedHitTestRegionListUpdated(const viz::FrameSinkId& frame_sink_id, const std::vector<viz::AggregatedHitTestRegion>& hit_test_data) = 0;

  virtual void OnFrameTokenChanged(const viz::FrameSinkId& frame_sink_id, uint32_t frame_token) = 0;
};
class  FrameSinkManagerClientInterceptorForTesting : public FrameSinkManagerClient {
  virtual FrameSinkManagerClient* GetForwardingInterface() = 0;
  void OnSurfaceCreated(const viz::SurfaceId& surface_id) override;
  void OnFirstSurfaceActivation(const viz::SurfaceInfo& surface_info) override;
  void OnAggregatedHitTestRegionListUpdated(const viz::FrameSinkId& frame_sink_id, const std::vector<viz::AggregatedHitTestRegion>& hit_test_data) override;
  void OnFrameTokenChanged(const viz::FrameSinkId& frame_sink_id, uint32_t frame_token) override;
};
class  FrameSinkManagerClientAsyncWaiter {
 public:
  explicit FrameSinkManagerClientAsyncWaiter(FrameSinkManagerClient* proxy);
  ~FrameSinkManagerClientAsyncWaiter();

 private:
  FrameSinkManagerClient* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(FrameSinkManagerClientAsyncWaiter);
};

class  FrameSinkManagerProxy
    : public FrameSinkManager {
 public:
  explicit FrameSinkManagerProxy(mojo::MessageReceiverWithResponder* receiver);
  void RegisterFrameSinkId(const viz::FrameSinkId& frame_sink_id) final;
  void InvalidateFrameSinkId(const viz::FrameSinkId& frame_sink_id) final;
  void EnableSynchronizationReporting(const viz::FrameSinkId& frame_sink_id, const std::string& reporting_label) final;
  void SetFrameSinkDebugLabel(const viz::FrameSinkId& frame_sink_id, const std::string& debug_label) final;
  void CreateRootCompositorFrameSink(RootCompositorFrameSinkParamsPtr params) final;
  void CreateCompositorFrameSink(const viz::FrameSinkId& frame_sink_id, ::viz::mojom::CompositorFrameSinkRequest compositor_frame_sink, ::viz::mojom::CompositorFrameSinkClientPtr compositor_frame_sink_client) final;
  bool DestroyCompositorFrameSink(const viz::FrameSinkId& frame_sink_id) final;
  void DestroyCompositorFrameSink(const viz::FrameSinkId& frame_sink_id, DestroyCompositorFrameSinkCallback callback) final;
  void RegisterFrameSinkHierarchy(const viz::FrameSinkId& parent_frame_sink_id, const viz::FrameSinkId& child_frame_sink_id) final;
  void UnregisterFrameSinkHierarchy(const viz::FrameSinkId& parent_frame_sink_id, const viz::FrameSinkId& child_frame_sink_id) final;
  void AssignTemporaryReference(const viz::SurfaceId& surface_id, const viz::FrameSinkId& owner) final;
  void DropTemporaryReference(const viz::SurfaceId& surface_id) final;
  void AddVideoDetectorObserver(::viz::mojom::VideoDetectorObserverPtr observer) final;
  void CreateVideoCapturer(::viz::mojom::FrameSinkVideoCapturerRequest request) final;
  void EvictSurfaces(const std::vector<viz::SurfaceId>& surface_ids) final;
  void RequestCopyOfOutput(const viz::SurfaceId& surface_id, std::unique_ptr<viz::CopyOutputRequest> request) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class  FrameSinkManagerClientProxy
    : public FrameSinkManagerClient {
 public:
  explicit FrameSinkManagerClientProxy(mojo::MessageReceiverWithResponder* receiver);
  void OnSurfaceCreated(const viz::SurfaceId& surface_id) final;
  void OnFirstSurfaceActivation(const viz::SurfaceInfo& surface_info) final;
  void OnAggregatedHitTestRegionListUpdated(const viz::FrameSinkId& frame_sink_id, const std::vector<viz::AggregatedHitTestRegion>& hit_test_data) final;
  void OnFrameTokenChanged(const viz::FrameSinkId& frame_sink_id, uint32_t frame_token) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  FrameSinkManagerStubDispatch {
 public:
  static bool Accept(FrameSinkManager* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      FrameSinkManager* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<FrameSinkManager>>
class FrameSinkManagerStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  FrameSinkManagerStub() {}
  ~FrameSinkManagerStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return FrameSinkManagerStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return FrameSinkManagerStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  FrameSinkManagerClientStubDispatch {
 public:
  static bool Accept(FrameSinkManagerClient* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      FrameSinkManagerClient* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<FrameSinkManagerClient>>
class FrameSinkManagerClientStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  FrameSinkManagerClientStub() {}
  ~FrameSinkManagerClientStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return FrameSinkManagerClientStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return FrameSinkManagerClientStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  FrameSinkManagerRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  FrameSinkManagerClientRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  FrameSinkManagerResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





class  RootCompositorFrameSinkParams {
 public:
  using DataView = RootCompositorFrameSinkParamsDataView;
  using Data_ = internal::RootCompositorFrameSinkParams_Data;

  template <typename... Args>
  static RootCompositorFrameSinkParamsPtr New(Args&&... args) {
    return RootCompositorFrameSinkParamsPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static RootCompositorFrameSinkParamsPtr From(const U& u) {
    return mojo::TypeConverter<RootCompositorFrameSinkParamsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, RootCompositorFrameSinkParams>::Convert(*this);
  }


  RootCompositorFrameSinkParams();

  RootCompositorFrameSinkParams(
      const viz::FrameSinkId& frame_sink_id,
      ::gpu::SurfaceHandle widget,
      bool gpu_compositing,
      const viz::RendererSettings& renderer_settings,
      ::viz::mojom::CompositorFrameSinkAssociatedRequest compositor_frame_sink,
      ::viz::mojom::CompositorFrameSinkClientPtrInfo compositor_frame_sink_client,
      ::viz::mojom::DisplayPrivateAssociatedRequest display_private,
      ::viz::mojom::DisplayClientPtrInfo display_client,
      ::viz::mojom::ExternalBeginFrameControllerAssociatedRequest external_begin_frame_controller,
      ::viz::mojom::ExternalBeginFrameControllerClientPtrInfo external_begin_frame_controller_client);

  ~RootCompositorFrameSinkParams();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = RootCompositorFrameSinkParamsPtr>
  RootCompositorFrameSinkParamsPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, RootCompositorFrameSinkParams>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        RootCompositorFrameSinkParams::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        RootCompositorFrameSinkParams::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::RootCompositorFrameSinkParams_UnserializedMessageContext<
            UserType, RootCompositorFrameSinkParams::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<RootCompositorFrameSinkParams::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return RootCompositorFrameSinkParams::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::RootCompositorFrameSinkParams_UnserializedMessageContext<
            UserType, RootCompositorFrameSinkParams::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<RootCompositorFrameSinkParams::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  viz::FrameSinkId frame_sink_id;
  ::gpu::SurfaceHandle widget;
  bool gpu_compositing;
  viz::RendererSettings renderer_settings;
  ::viz::mojom::CompositorFrameSinkAssociatedRequest compositor_frame_sink;
  ::viz::mojom::CompositorFrameSinkClientPtrInfo compositor_frame_sink_client;
  ::viz::mojom::DisplayPrivateAssociatedRequest display_private;
  ::viz::mojom::DisplayClientPtrInfo display_client;
  ::viz::mojom::ExternalBeginFrameControllerAssociatedRequest external_begin_frame_controller;
  ::viz::mojom::ExternalBeginFrameControllerClientPtrInfo external_begin_frame_controller_client;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(RootCompositorFrameSinkParams);
};

template <typename StructPtrType>
RootCompositorFrameSinkParamsPtr RootCompositorFrameSinkParams::Clone() const {
  return New(
      mojo::Clone(frame_sink_id),
      mojo::Clone(widget),
      mojo::Clone(gpu_compositing),
      mojo::Clone(renderer_settings),
      mojo::Clone(compositor_frame_sink),
      mojo::Clone(compositor_frame_sink_client),
      mojo::Clone(display_private),
      mojo::Clone(display_client),
      mojo::Clone(external_begin_frame_controller),
      mojo::Clone(external_begin_frame_controller_client)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, RootCompositorFrameSinkParams>::value>::type*>
bool RootCompositorFrameSinkParams::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->frame_sink_id, other_struct.frame_sink_id))
    return false;
  if (!mojo::Equals(this->widget, other_struct.widget))
    return false;
  if (!mojo::Equals(this->gpu_compositing, other_struct.gpu_compositing))
    return false;
  if (!mojo::Equals(this->renderer_settings, other_struct.renderer_settings))
    return false;
  if (!mojo::Equals(this->compositor_frame_sink, other_struct.compositor_frame_sink))
    return false;
  if (!mojo::Equals(this->compositor_frame_sink_client, other_struct.compositor_frame_sink_client))
    return false;
  if (!mojo::Equals(this->display_private, other_struct.display_private))
    return false;
  if (!mojo::Equals(this->display_client, other_struct.display_client))
    return false;
  if (!mojo::Equals(this->external_begin_frame_controller, other_struct.external_begin_frame_controller))
    return false;
  if (!mojo::Equals(this->external_begin_frame_controller_client, other_struct.external_begin_frame_controller_client))
    return false;
  return true;
}


}  // namespace mojom
}  // namespace viz

namespace mojo {


template <>
struct  StructTraits<::viz::mojom::RootCompositorFrameSinkParams::DataView,
                                         ::viz::mojom::RootCompositorFrameSinkParamsPtr> {
  static bool IsNull(const ::viz::mojom::RootCompositorFrameSinkParamsPtr& input) { return !input; }
  static void SetToNull(::viz::mojom::RootCompositorFrameSinkParamsPtr* output) { output->reset(); }

  static const decltype(::viz::mojom::RootCompositorFrameSinkParams::frame_sink_id)& frame_sink_id(
      const ::viz::mojom::RootCompositorFrameSinkParamsPtr& input) {
    return input->frame_sink_id;
  }

  static const decltype(::viz::mojom::RootCompositorFrameSinkParams::widget)& widget(
      const ::viz::mojom::RootCompositorFrameSinkParamsPtr& input) {
    return input->widget;
  }

  static decltype(::viz::mojom::RootCompositorFrameSinkParams::gpu_compositing) gpu_compositing(
      const ::viz::mojom::RootCompositorFrameSinkParamsPtr& input) {
    return input->gpu_compositing;
  }

  static const decltype(::viz::mojom::RootCompositorFrameSinkParams::renderer_settings)& renderer_settings(
      const ::viz::mojom::RootCompositorFrameSinkParamsPtr& input) {
    return input->renderer_settings;
  }

  static  decltype(::viz::mojom::RootCompositorFrameSinkParams::compositor_frame_sink)& compositor_frame_sink(
       ::viz::mojom::RootCompositorFrameSinkParamsPtr& input) {
    return input->compositor_frame_sink;
  }

  static  decltype(::viz::mojom::RootCompositorFrameSinkParams::compositor_frame_sink_client)& compositor_frame_sink_client(
       ::viz::mojom::RootCompositorFrameSinkParamsPtr& input) {
    return input->compositor_frame_sink_client;
  }

  static  decltype(::viz::mojom::RootCompositorFrameSinkParams::display_private)& display_private(
       ::viz::mojom::RootCompositorFrameSinkParamsPtr& input) {
    return input->display_private;
  }

  static  decltype(::viz::mojom::RootCompositorFrameSinkParams::display_client)& display_client(
       ::viz::mojom::RootCompositorFrameSinkParamsPtr& input) {
    return input->display_client;
  }

  static  decltype(::viz::mojom::RootCompositorFrameSinkParams::external_begin_frame_controller)& external_begin_frame_controller(
       ::viz::mojom::RootCompositorFrameSinkParamsPtr& input) {
    return input->external_begin_frame_controller;
  }

  static  decltype(::viz::mojom::RootCompositorFrameSinkParams::external_begin_frame_controller_client)& external_begin_frame_controller_client(
       ::viz::mojom::RootCompositorFrameSinkParamsPtr& input) {
    return input->external_begin_frame_controller_client;
  }

  static bool Read(::viz::mojom::RootCompositorFrameSinkParams::DataView input, ::viz::mojom::RootCompositorFrameSinkParamsPtr* output);
};

}  // namespace mojo

#endif  // SERVICES_VIZ_PRIVILEGED_INTERFACES_COMPOSITING_FRAME_SINK_MANAGER_MOJOM_H_