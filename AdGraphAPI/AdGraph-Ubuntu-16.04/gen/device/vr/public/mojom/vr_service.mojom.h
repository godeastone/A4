// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef DEVICE_VR_PUBLIC_MOJOM_VR_SERVICE_MOJOM_H_
#define DEVICE_VR_PUBLIC_MOJOM_VR_SERVICE_MOJOM_H_

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
#include "device/vr/public/mojom/vr_service.mojom-shared.h"
#include "mojo/public/mojom/base/time.mojom.h"
#include "gpu/ipc/common/mailbox_holder.mojom.h"
#include "gpu/ipc/common/sync_token.mojom.h"
#include "ui/display/mojo/display.mojom.h"
#include "ui/gfx/geometry/mojo/geometry.mojom.h"
#include "ui/gfx/mojo/gpu_fence_handle.mojom.h"
#include "ui/gfx/mojo/transform.mojom.h"
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
#include "base/component_export.h"


namespace device {
namespace mojom {
class VRService;
using VRServicePtr = mojo::InterfacePtr<VRService>;
using VRServicePtrInfo = mojo::InterfacePtrInfo<VRService>;
using ThreadSafeVRServicePtr =
    mojo::ThreadSafeInterfacePtr<VRService>;
using VRServiceRequest = mojo::InterfaceRequest<VRService>;
using VRServiceAssociatedPtr =
    mojo::AssociatedInterfacePtr<VRService>;
using ThreadSafeVRServiceAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<VRService>;
using VRServiceAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<VRService>;
using VRServiceAssociatedRequest =
    mojo::AssociatedInterfaceRequest<VRService>;

class VRServiceClient;
using VRServiceClientPtr = mojo::InterfacePtr<VRServiceClient>;
using VRServiceClientPtrInfo = mojo::InterfacePtrInfo<VRServiceClient>;
using ThreadSafeVRServiceClientPtr =
    mojo::ThreadSafeInterfacePtr<VRServiceClient>;
using VRServiceClientRequest = mojo::InterfaceRequest<VRServiceClient>;
using VRServiceClientAssociatedPtr =
    mojo::AssociatedInterfacePtr<VRServiceClient>;
using ThreadSafeVRServiceClientAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<VRServiceClient>;
using VRServiceClientAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<VRServiceClient>;
using VRServiceClientAssociatedRequest =
    mojo::AssociatedInterfaceRequest<VRServiceClient>;

class VRSubmitFrameClient;
using VRSubmitFrameClientPtr = mojo::InterfacePtr<VRSubmitFrameClient>;
using VRSubmitFrameClientPtrInfo = mojo::InterfacePtrInfo<VRSubmitFrameClient>;
using ThreadSafeVRSubmitFrameClientPtr =
    mojo::ThreadSafeInterfacePtr<VRSubmitFrameClient>;
using VRSubmitFrameClientRequest = mojo::InterfaceRequest<VRSubmitFrameClient>;
using VRSubmitFrameClientAssociatedPtr =
    mojo::AssociatedInterfacePtr<VRSubmitFrameClient>;
using ThreadSafeVRSubmitFrameClientAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<VRSubmitFrameClient>;
using VRSubmitFrameClientAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<VRSubmitFrameClient>;
using VRSubmitFrameClientAssociatedRequest =
    mojo::AssociatedInterfaceRequest<VRSubmitFrameClient>;

class VRDisplayHost;
using VRDisplayHostPtr = mojo::InterfacePtr<VRDisplayHost>;
using VRDisplayHostPtrInfo = mojo::InterfacePtrInfo<VRDisplayHost>;
using ThreadSafeVRDisplayHostPtr =
    mojo::ThreadSafeInterfacePtr<VRDisplayHost>;
using VRDisplayHostRequest = mojo::InterfaceRequest<VRDisplayHost>;
using VRDisplayHostAssociatedPtr =
    mojo::AssociatedInterfacePtr<VRDisplayHost>;
using ThreadSafeVRDisplayHostAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<VRDisplayHost>;
using VRDisplayHostAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<VRDisplayHost>;
using VRDisplayHostAssociatedRequest =
    mojo::AssociatedInterfaceRequest<VRDisplayHost>;

class VRMagicWindowProvider;
using VRMagicWindowProviderPtr = mojo::InterfacePtr<VRMagicWindowProvider>;
using VRMagicWindowProviderPtrInfo = mojo::InterfacePtrInfo<VRMagicWindowProvider>;
using ThreadSafeVRMagicWindowProviderPtr =
    mojo::ThreadSafeInterfacePtr<VRMagicWindowProvider>;
using VRMagicWindowProviderRequest = mojo::InterfaceRequest<VRMagicWindowProvider>;
using VRMagicWindowProviderAssociatedPtr =
    mojo::AssociatedInterfacePtr<VRMagicWindowProvider>;
using ThreadSafeVRMagicWindowProviderAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<VRMagicWindowProvider>;
using VRMagicWindowProviderAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<VRMagicWindowProvider>;
using VRMagicWindowProviderAssociatedRequest =
    mojo::AssociatedInterfaceRequest<VRMagicWindowProvider>;

class VRPresentationProvider;
using VRPresentationProviderPtr = mojo::InterfacePtr<VRPresentationProvider>;
using VRPresentationProviderPtrInfo = mojo::InterfacePtrInfo<VRPresentationProvider>;
using ThreadSafeVRPresentationProviderPtr =
    mojo::ThreadSafeInterfacePtr<VRPresentationProvider>;
using VRPresentationProviderRequest = mojo::InterfaceRequest<VRPresentationProvider>;
using VRPresentationProviderAssociatedPtr =
    mojo::AssociatedInterfacePtr<VRPresentationProvider>;
using ThreadSafeVRPresentationProviderAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<VRPresentationProvider>;
using VRPresentationProviderAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<VRPresentationProvider>;
using VRPresentationProviderAssociatedRequest =
    mojo::AssociatedInterfaceRequest<VRPresentationProvider>;

class VRDisplayClient;
using VRDisplayClientPtr = mojo::InterfacePtr<VRDisplayClient>;
using VRDisplayClientPtrInfo = mojo::InterfacePtrInfo<VRDisplayClient>;
using ThreadSafeVRDisplayClientPtr =
    mojo::ThreadSafeInterfacePtr<VRDisplayClient>;
using VRDisplayClientRequest = mojo::InterfaceRequest<VRDisplayClient>;
using VRDisplayClientAssociatedPtr =
    mojo::AssociatedInterfacePtr<VRDisplayClient>;
using ThreadSafeVRDisplayClientAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<VRDisplayClient>;
using VRDisplayClientAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<VRDisplayClient>;
using VRDisplayClientAssociatedRequest =
    mojo::AssociatedInterfaceRequest<VRDisplayClient>;

class XRInputSourceDescription;
using XRInputSourceDescriptionPtr = mojo::StructPtr<XRInputSourceDescription>;

class XRInputSourceState;
using XRInputSourceStatePtr = mojo::StructPtr<XRInputSourceState>;

class VRFieldOfView;
using VRFieldOfViewPtr = mojo::InlinedStructPtr<VRFieldOfView>;

class VRPose;
using VRPosePtr = mojo::StructPtr<VRPose>;

class VRDisplayCapabilities;
using VRDisplayCapabilitiesPtr = mojo::InlinedStructPtr<VRDisplayCapabilities>;

class VREyeParameters;
using VREyeParametersPtr = mojo::StructPtr<VREyeParameters>;

class VRStageParameters;
using VRStageParametersPtr = mojo::StructPtr<VRStageParameters>;

class VRDisplayInfo;
using VRDisplayInfoPtr = mojo::StructPtr<VRDisplayInfo>;

class VRRequestPresentOptions;
using VRRequestPresentOptionsPtr = mojo::InlinedStructPtr<VRRequestPresentOptions>;

class VRDisplayFrameTransportOptions;
using VRDisplayFrameTransportOptionsPtr = mojo::InlinedStructPtr<VRDisplayFrameTransportOptions>;

class VRMagicWindowFrameData;
using VRMagicWindowFrameDataPtr = mojo::StructPtr<VRMagicWindowFrameData>;


class VRServiceProxy;

template <typename ImplRefTraits>
class VRServiceStub;

class VRServiceRequestValidator;
class VRServiceResponseValidator;

class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS) VRService
    : public VRServiceInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = VRServiceProxy;

  template <typename ImplRefTraits>
  using Stub_ = VRServiceStub<ImplRefTraits>;

  using RequestValidator_ = VRServiceRequestValidator;
  using ResponseValidator_ = VRServiceResponseValidator;
  enum MethodMinVersions : uint32_t {
    kSetClientMinVersion = 0,
    kSetListeningForActivateMinVersion = 0,
  };
  virtual ~VRService() {}


  using SetClientCallback = base::OnceCallback<void()>;
  virtual void SetClient(VRServiceClientPtr client, SetClientCallback callback) = 0;

  virtual void SetListeningForActivate(bool listening) = 0;
};
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS) VRServiceInterceptorForTesting : public VRService {
  virtual VRService* GetForwardingInterface() = 0;
  void SetClient(VRServiceClientPtr client, SetClientCallback callback) override;
  void SetListeningForActivate(bool listening) override;
};
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS) VRServiceAsyncWaiter {
 public:
  explicit VRServiceAsyncWaiter(VRService* proxy);
  ~VRServiceAsyncWaiter();
  void SetClient(
      VRServiceClientPtr client);

 private:
  VRService* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(VRServiceAsyncWaiter);
};

class VRServiceClientProxy;

template <typename ImplRefTraits>
class VRServiceClientStub;

class VRServiceClientRequestValidator;

class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS) VRServiceClient
    : public VRServiceClientInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = VRServiceClientProxy;

  template <typename ImplRefTraits>
  using Stub_ = VRServiceClientStub<ImplRefTraits>;

  using RequestValidator_ = VRServiceClientRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kOnDisplayConnectedMinVersion = 0,
  };
  virtual ~VRServiceClient() {}

  virtual void OnDisplayConnected(VRMagicWindowProviderPtr magic_window_provider, VRDisplayHostPtr display, VRDisplayClientRequest request, VRDisplayInfoPtr display_info) = 0;
};
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS) VRServiceClientInterceptorForTesting : public VRServiceClient {
  virtual VRServiceClient* GetForwardingInterface() = 0;
  void OnDisplayConnected(VRMagicWindowProviderPtr magic_window_provider, VRDisplayHostPtr display, VRDisplayClientRequest request, VRDisplayInfoPtr display_info) override;
};
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS) VRServiceClientAsyncWaiter {
 public:
  explicit VRServiceClientAsyncWaiter(VRServiceClient* proxy);
  ~VRServiceClientAsyncWaiter();

 private:
  VRServiceClient* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(VRServiceClientAsyncWaiter);
};

class VRSubmitFrameClientProxy;

template <typename ImplRefTraits>
class VRSubmitFrameClientStub;

class VRSubmitFrameClientRequestValidator;

class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS) VRSubmitFrameClient
    : public VRSubmitFrameClientInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = VRSubmitFrameClientProxy;

  template <typename ImplRefTraits>
  using Stub_ = VRSubmitFrameClientStub<ImplRefTraits>;

  using RequestValidator_ = VRSubmitFrameClientRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kOnSubmitFrameTransferredMinVersion = 0,
    kOnSubmitFrameRenderedMinVersion = 0,
    kOnSubmitFrameGpuFenceMinVersion = 0,
  };
  virtual ~VRSubmitFrameClient() {}

  virtual void OnSubmitFrameTransferred(bool success) = 0;

  virtual void OnSubmitFrameRendered() = 0;

  virtual void OnSubmitFrameGpuFence(const ::gfx::GpuFenceHandle& gpu_fence_handle) = 0;
};
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS) VRSubmitFrameClientInterceptorForTesting : public VRSubmitFrameClient {
  virtual VRSubmitFrameClient* GetForwardingInterface() = 0;
  void OnSubmitFrameTransferred(bool success) override;
  void OnSubmitFrameRendered() override;
  void OnSubmitFrameGpuFence(const ::gfx::GpuFenceHandle& gpu_fence_handle) override;
};
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS) VRSubmitFrameClientAsyncWaiter {
 public:
  explicit VRSubmitFrameClientAsyncWaiter(VRSubmitFrameClient* proxy);
  ~VRSubmitFrameClientAsyncWaiter();

 private:
  VRSubmitFrameClient* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(VRSubmitFrameClientAsyncWaiter);
};

class VRDisplayHostProxy;

template <typename ImplRefTraits>
class VRDisplayHostStub;

class VRDisplayHostRequestValidator;
class VRDisplayHostResponseValidator;

class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS) VRDisplayHost
    : public VRDisplayHostInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = VRDisplayHostProxy;

  template <typename ImplRefTraits>
  using Stub_ = VRDisplayHostStub<ImplRefTraits>;

  using RequestValidator_ = VRDisplayHostRequestValidator;
  using ResponseValidator_ = VRDisplayHostResponseValidator;
  enum MethodMinVersions : uint32_t {
    kRequestPresentMinVersion = 0,
    kExitPresentMinVersion = 0,
  };
  virtual ~VRDisplayHost() {}


  using RequestPresentCallback = base::OnceCallback<void(bool, VRDisplayFrameTransportOptionsPtr)>;
  virtual void RequestPresent(VRSubmitFrameClientPtr client, VRPresentationProviderRequest request, VRRequestPresentOptionsPtr options, bool triggered_by_displayactive, RequestPresentCallback callback) = 0;

  virtual void ExitPresent() = 0;
};
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS) VRDisplayHostInterceptorForTesting : public VRDisplayHost {
  virtual VRDisplayHost* GetForwardingInterface() = 0;
  void RequestPresent(VRSubmitFrameClientPtr client, VRPresentationProviderRequest request, VRRequestPresentOptionsPtr options, bool triggered_by_displayactive, RequestPresentCallback callback) override;
  void ExitPresent() override;
};
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS) VRDisplayHostAsyncWaiter {
 public:
  explicit VRDisplayHostAsyncWaiter(VRDisplayHost* proxy);
  ~VRDisplayHostAsyncWaiter();
  void RequestPresent(
      VRSubmitFrameClientPtr client, VRPresentationProviderRequest request, VRRequestPresentOptionsPtr options, bool triggered_by_displayactive, bool* out_success, VRDisplayFrameTransportOptionsPtr* out_transport_options);

 private:
  VRDisplayHost* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(VRDisplayHostAsyncWaiter);
};

class VRMagicWindowProviderProxy;

template <typename ImplRefTraits>
class VRMagicWindowProviderStub;

class VRMagicWindowProviderRequestValidator;
class VRMagicWindowProviderResponseValidator;

class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS) VRMagicWindowProvider
    : public VRMagicWindowProviderInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = VRMagicWindowProviderProxy;

  template <typename ImplRefTraits>
  using Stub_ = VRMagicWindowProviderStub<ImplRefTraits>;

  using RequestValidator_ = VRMagicWindowProviderRequestValidator;
  using ResponseValidator_ = VRMagicWindowProviderResponseValidator;
  enum MethodMinVersions : uint32_t {
    kGetPoseMinVersion = 0,
    kGetFrameDataMinVersion = 0,
  };
  virtual ~VRMagicWindowProvider() {}


  using GetPoseCallback = base::OnceCallback<void(VRPosePtr)>;
  virtual void GetPose(GetPoseCallback callback) = 0;


  using GetFrameDataCallback = base::OnceCallback<void(VRMagicWindowFrameDataPtr)>;
  virtual void GetFrameData(const gfx::Size& frame_size, display::Display::Rotation display_rotation, GetFrameDataCallback callback) = 0;
};
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS) VRMagicWindowProviderInterceptorForTesting : public VRMagicWindowProvider {
  virtual VRMagicWindowProvider* GetForwardingInterface() = 0;
  void GetPose(GetPoseCallback callback) override;
  void GetFrameData(const gfx::Size& frame_size, display::Display::Rotation display_rotation, GetFrameDataCallback callback) override;
};
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS) VRMagicWindowProviderAsyncWaiter {
 public:
  explicit VRMagicWindowProviderAsyncWaiter(VRMagicWindowProvider* proxy);
  ~VRMagicWindowProviderAsyncWaiter();
  void GetPose(
      VRPosePtr* out_pose);
  void GetFrameData(
      const gfx::Size& frame_size, display::Display::Rotation display_rotation, VRMagicWindowFrameDataPtr* out_frame_data);

 private:
  VRMagicWindowProvider* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(VRMagicWindowProviderAsyncWaiter);
};

class VRPresentationProviderProxy;

template <typename ImplRefTraits>
class VRPresentationProviderStub;

class VRPresentationProviderRequestValidator;
class VRPresentationProviderResponseValidator;

class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS) VRPresentationProvider
    : public VRPresentationProviderInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = VRPresentationProviderProxy;

  template <typename ImplRefTraits>
  using Stub_ = VRPresentationProviderStub<ImplRefTraits>;

  using RequestValidator_ = VRPresentationProviderRequestValidator;
  using ResponseValidator_ = VRPresentationProviderResponseValidator;
  enum MethodMinVersions : uint32_t {
    kGetVSyncMinVersion = 0,
    kUpdateLayerBoundsMinVersion = 0,
    kSubmitFrameMissingMinVersion = 0,
    kSubmitFrameMinVersion = 0,
    kSubmitFrameWithTextureHandleMinVersion = 0,
    kSubmitFrameDrawnIntoTextureMinVersion = 0,
  };
  using VSyncStatus = VRPresentationProvider_VSyncStatus;
  virtual ~VRPresentationProvider() {}


  using GetVSyncCallback = base::OnceCallback<void(VRPosePtr, base::TimeDelta, int16_t, VRPresentationProvider::VSyncStatus, const base::Optional<::gpu::MailboxHolder>&)>;
  virtual void GetVSync(GetVSyncCallback callback) = 0;

  virtual void UpdateLayerBounds(int16_t frame_id, const gfx::RectF& left_bounds, const gfx::RectF& right_bounds, const gfx::Size& source_size) = 0;

  virtual void SubmitFrameMissing(int16_t frame_id, const ::gpu::SyncToken& sync_token) = 0;

  virtual void SubmitFrame(int16_t frame_id, const ::gpu::MailboxHolder& mailbox_holder, base::TimeDelta time_waited) = 0;

  virtual void SubmitFrameWithTextureHandle(int16_t frameId, mojo::ScopedHandle texture) = 0;

  virtual void SubmitFrameDrawnIntoTexture(int16_t frameId, const ::gpu::SyncToken& sync_token, base::TimeDelta time_waited) = 0;
};
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS) VRPresentationProviderInterceptorForTesting : public VRPresentationProvider {
  virtual VRPresentationProvider* GetForwardingInterface() = 0;
  void GetVSync(GetVSyncCallback callback) override;
  void UpdateLayerBounds(int16_t frame_id, const gfx::RectF& left_bounds, const gfx::RectF& right_bounds, const gfx::Size& source_size) override;
  void SubmitFrameMissing(int16_t frame_id, const ::gpu::SyncToken& sync_token) override;
  void SubmitFrame(int16_t frame_id, const ::gpu::MailboxHolder& mailbox_holder, base::TimeDelta time_waited) override;
  void SubmitFrameWithTextureHandle(int16_t frameId, mojo::ScopedHandle texture) override;
  void SubmitFrameDrawnIntoTexture(int16_t frameId, const ::gpu::SyncToken& sync_token, base::TimeDelta time_waited) override;
};
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS) VRPresentationProviderAsyncWaiter {
 public:
  explicit VRPresentationProviderAsyncWaiter(VRPresentationProvider* proxy);
  ~VRPresentationProviderAsyncWaiter();
  void GetVSync(
      VRPosePtr* out_pose, base::TimeDelta* out_time, int16_t* out_frame_id, VRPresentationProvider::VSyncStatus* out_status, base::Optional<::gpu::MailboxHolder>* out_buffer_holder);

 private:
  VRPresentationProvider* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(VRPresentationProviderAsyncWaiter);
};

class VRDisplayClientProxy;

template <typename ImplRefTraits>
class VRDisplayClientStub;

class VRDisplayClientRequestValidator;
class VRDisplayClientResponseValidator;

class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS) VRDisplayClient
    : public VRDisplayClientInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = VRDisplayClientProxy;

  template <typename ImplRefTraits>
  using Stub_ = VRDisplayClientStub<ImplRefTraits>;

  using RequestValidator_ = VRDisplayClientRequestValidator;
  using ResponseValidator_ = VRDisplayClientResponseValidator;
  enum MethodMinVersions : uint32_t {
    kOnChangedMinVersion = 0,
    kOnExitPresentMinVersion = 0,
    kOnBlurMinVersion = 0,
    kOnFocusMinVersion = 0,
    kOnActivateMinVersion = 0,
    kOnDeactivateMinVersion = 0,
  };
  virtual ~VRDisplayClient() {}

  virtual void OnChanged(VRDisplayInfoPtr display) = 0;

  virtual void OnExitPresent() = 0;

  virtual void OnBlur() = 0;

  virtual void OnFocus() = 0;


  using OnActivateCallback = base::OnceCallback<void(bool)>;
  virtual void OnActivate(VRDisplayEventReason reason, OnActivateCallback callback) = 0;

  virtual void OnDeactivate(VRDisplayEventReason reason) = 0;
};
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS) VRDisplayClientInterceptorForTesting : public VRDisplayClient {
  virtual VRDisplayClient* GetForwardingInterface() = 0;
  void OnChanged(VRDisplayInfoPtr display) override;
  void OnExitPresent() override;
  void OnBlur() override;
  void OnFocus() override;
  void OnActivate(VRDisplayEventReason reason, OnActivateCallback callback) override;
  void OnDeactivate(VRDisplayEventReason reason) override;
};
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS) VRDisplayClientAsyncWaiter {
 public:
  explicit VRDisplayClientAsyncWaiter(VRDisplayClient* proxy);
  ~VRDisplayClientAsyncWaiter();
  void OnActivate(
      VRDisplayEventReason reason, bool* out_will_not_present);

 private:
  VRDisplayClient* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(VRDisplayClientAsyncWaiter);
};

class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS) VRServiceProxy
    : public VRService {
 public:
  explicit VRServiceProxy(mojo::MessageReceiverWithResponder* receiver);
  void SetClient(VRServiceClientPtr client, SetClientCallback callback) final;
  void SetListeningForActivate(bool listening) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS) VRServiceClientProxy
    : public VRServiceClient {
 public:
  explicit VRServiceClientProxy(mojo::MessageReceiverWithResponder* receiver);
  void OnDisplayConnected(VRMagicWindowProviderPtr magic_window_provider, VRDisplayHostPtr display, VRDisplayClientRequest request, VRDisplayInfoPtr display_info) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS) VRSubmitFrameClientProxy
    : public VRSubmitFrameClient {
 public:
  explicit VRSubmitFrameClientProxy(mojo::MessageReceiverWithResponder* receiver);
  void OnSubmitFrameTransferred(bool success) final;
  void OnSubmitFrameRendered() final;
  void OnSubmitFrameGpuFence(const ::gfx::GpuFenceHandle& gpu_fence_handle) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS) VRDisplayHostProxy
    : public VRDisplayHost {
 public:
  explicit VRDisplayHostProxy(mojo::MessageReceiverWithResponder* receiver);
  void RequestPresent(VRSubmitFrameClientPtr client, VRPresentationProviderRequest request, VRRequestPresentOptionsPtr options, bool triggered_by_displayactive, RequestPresentCallback callback) final;
  void ExitPresent() final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS) VRMagicWindowProviderProxy
    : public VRMagicWindowProvider {
 public:
  explicit VRMagicWindowProviderProxy(mojo::MessageReceiverWithResponder* receiver);
  void GetPose(GetPoseCallback callback) final;
  void GetFrameData(const gfx::Size& frame_size, display::Display::Rotation display_rotation, GetFrameDataCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS) VRPresentationProviderProxy
    : public VRPresentationProvider {
 public:
  explicit VRPresentationProviderProxy(mojo::MessageReceiverWithResponder* receiver);
  void GetVSync(GetVSyncCallback callback) final;
  void UpdateLayerBounds(int16_t frame_id, const gfx::RectF& left_bounds, const gfx::RectF& right_bounds, const gfx::Size& source_size) final;
  void SubmitFrameMissing(int16_t frame_id, const ::gpu::SyncToken& sync_token) final;
  void SubmitFrame(int16_t frame_id, const ::gpu::MailboxHolder& mailbox_holder, base::TimeDelta time_waited) final;
  void SubmitFrameWithTextureHandle(int16_t frameId, mojo::ScopedHandle texture) final;
  void SubmitFrameDrawnIntoTexture(int16_t frameId, const ::gpu::SyncToken& sync_token, base::TimeDelta time_waited) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS) VRDisplayClientProxy
    : public VRDisplayClient {
 public:
  explicit VRDisplayClientProxy(mojo::MessageReceiverWithResponder* receiver);
  void OnChanged(VRDisplayInfoPtr display) final;
  void OnExitPresent() final;
  void OnBlur() final;
  void OnFocus() final;
  void OnActivate(VRDisplayEventReason reason, OnActivateCallback callback) final;
  void OnDeactivate(VRDisplayEventReason reason) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS) VRServiceStubDispatch {
 public:
  static bool Accept(VRService* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      VRService* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<VRService>>
class VRServiceStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  VRServiceStub() {}
  ~VRServiceStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return VRServiceStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return VRServiceStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS) VRServiceClientStubDispatch {
 public:
  static bool Accept(VRServiceClient* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      VRServiceClient* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<VRServiceClient>>
class VRServiceClientStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  VRServiceClientStub() {}
  ~VRServiceClientStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return VRServiceClientStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return VRServiceClientStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS) VRSubmitFrameClientStubDispatch {
 public:
  static bool Accept(VRSubmitFrameClient* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      VRSubmitFrameClient* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<VRSubmitFrameClient>>
class VRSubmitFrameClientStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  VRSubmitFrameClientStub() {}
  ~VRSubmitFrameClientStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return VRSubmitFrameClientStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return VRSubmitFrameClientStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS) VRDisplayHostStubDispatch {
 public:
  static bool Accept(VRDisplayHost* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      VRDisplayHost* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<VRDisplayHost>>
class VRDisplayHostStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  VRDisplayHostStub() {}
  ~VRDisplayHostStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return VRDisplayHostStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return VRDisplayHostStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS) VRMagicWindowProviderStubDispatch {
 public:
  static bool Accept(VRMagicWindowProvider* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      VRMagicWindowProvider* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<VRMagicWindowProvider>>
class VRMagicWindowProviderStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  VRMagicWindowProviderStub() {}
  ~VRMagicWindowProviderStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return VRMagicWindowProviderStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return VRMagicWindowProviderStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS) VRPresentationProviderStubDispatch {
 public:
  static bool Accept(VRPresentationProvider* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      VRPresentationProvider* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<VRPresentationProvider>>
class VRPresentationProviderStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  VRPresentationProviderStub() {}
  ~VRPresentationProviderStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return VRPresentationProviderStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return VRPresentationProviderStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS) VRDisplayClientStubDispatch {
 public:
  static bool Accept(VRDisplayClient* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      VRDisplayClient* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<VRDisplayClient>>
class VRDisplayClientStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  VRDisplayClientStub() {}
  ~VRDisplayClientStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return VRDisplayClientStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return VRDisplayClientStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS) VRServiceRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS) VRServiceClientRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS) VRSubmitFrameClientRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS) VRDisplayHostRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS) VRMagicWindowProviderRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS) VRPresentationProviderRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS) VRDisplayClientRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS) VRServiceResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS) VRDisplayHostResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS) VRMagicWindowProviderResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS) VRPresentationProviderResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS) VRDisplayClientResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};




class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS) VRFieldOfView {
 public:
  using DataView = VRFieldOfViewDataView;
  using Data_ = internal::VRFieldOfView_Data;

  template <typename... Args>
  static VRFieldOfViewPtr New(Args&&... args) {
    return VRFieldOfViewPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static VRFieldOfViewPtr From(const U& u) {
    return mojo::TypeConverter<VRFieldOfViewPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, VRFieldOfView>::Convert(*this);
  }


  VRFieldOfView();

  VRFieldOfView(
      float upDegrees,
      float downDegrees,
      float leftDegrees,
      float rightDegrees);

  ~VRFieldOfView();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = VRFieldOfViewPtr>
  VRFieldOfViewPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, VRFieldOfView>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        VRFieldOfView::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        VRFieldOfView::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::VRFieldOfView_UnserializedMessageContext<
            UserType, VRFieldOfView::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<VRFieldOfView::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return VRFieldOfView::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::VRFieldOfView_UnserializedMessageContext<
            UserType, VRFieldOfView::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<VRFieldOfView::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  float upDegrees;
  float downDegrees;
  float leftDegrees;
  float rightDegrees;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};



class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS) VRDisplayCapabilities {
 public:
  using DataView = VRDisplayCapabilitiesDataView;
  using Data_ = internal::VRDisplayCapabilities_Data;

  template <typename... Args>
  static VRDisplayCapabilitiesPtr New(Args&&... args) {
    return VRDisplayCapabilitiesPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static VRDisplayCapabilitiesPtr From(const U& u) {
    return mojo::TypeConverter<VRDisplayCapabilitiesPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, VRDisplayCapabilities>::Convert(*this);
  }


  VRDisplayCapabilities();

  VRDisplayCapabilities(
      bool hasPosition,
      bool hasExternalDisplay,
      bool canPresent,
      bool can_provide_pass_through_images);

  ~VRDisplayCapabilities();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = VRDisplayCapabilitiesPtr>
  VRDisplayCapabilitiesPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, VRDisplayCapabilities>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        VRDisplayCapabilities::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        VRDisplayCapabilities::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::VRDisplayCapabilities_UnserializedMessageContext<
            UserType, VRDisplayCapabilities::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<VRDisplayCapabilities::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return VRDisplayCapabilities::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::VRDisplayCapabilities_UnserializedMessageContext<
            UserType, VRDisplayCapabilities::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<VRDisplayCapabilities::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  bool hasPosition;
  bool hasExternalDisplay;
  bool canPresent;
  bool can_provide_pass_through_images;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};





class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS) VRRequestPresentOptions {
 public:
  using DataView = VRRequestPresentOptionsDataView;
  using Data_ = internal::VRRequestPresentOptions_Data;

  template <typename... Args>
  static VRRequestPresentOptionsPtr New(Args&&... args) {
    return VRRequestPresentOptionsPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static VRRequestPresentOptionsPtr From(const U& u) {
    return mojo::TypeConverter<VRRequestPresentOptionsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, VRRequestPresentOptions>::Convert(*this);
  }


  VRRequestPresentOptions();

  VRRequestPresentOptions(
      bool preserve_drawing_buffer,
      bool webxr_input,
      bool shared_buffer_draw_supported);

  ~VRRequestPresentOptions();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = VRRequestPresentOptionsPtr>
  VRRequestPresentOptionsPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, VRRequestPresentOptions>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        VRRequestPresentOptions::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        VRRequestPresentOptions::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::VRRequestPresentOptions_UnserializedMessageContext<
            UserType, VRRequestPresentOptions::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<VRRequestPresentOptions::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return VRRequestPresentOptions::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::VRRequestPresentOptions_UnserializedMessageContext<
            UserType, VRRequestPresentOptions::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<VRRequestPresentOptions::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  bool preserve_drawing_buffer;
  bool webxr_input;
  bool shared_buffer_draw_supported;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};


class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS) VRDisplayFrameTransportOptions {
 public:
  using DataView = VRDisplayFrameTransportOptionsDataView;
  using Data_ = internal::VRDisplayFrameTransportOptions_Data;

  template <typename... Args>
  static VRDisplayFrameTransportOptionsPtr New(Args&&... args) {
    return VRDisplayFrameTransportOptionsPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static VRDisplayFrameTransportOptionsPtr From(const U& u) {
    return mojo::TypeConverter<VRDisplayFrameTransportOptionsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, VRDisplayFrameTransportOptions>::Convert(*this);
  }


  VRDisplayFrameTransportOptions();

  VRDisplayFrameTransportOptions(
      VRDisplayFrameTransportMethod transport_method,
      bool wait_for_transfer_notification,
      bool wait_for_render_notification,
      bool wait_for_gpu_fence);

  ~VRDisplayFrameTransportOptions();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = VRDisplayFrameTransportOptionsPtr>
  VRDisplayFrameTransportOptionsPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, VRDisplayFrameTransportOptions>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        VRDisplayFrameTransportOptions::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        VRDisplayFrameTransportOptions::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::VRDisplayFrameTransportOptions_UnserializedMessageContext<
            UserType, VRDisplayFrameTransportOptions::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<VRDisplayFrameTransportOptions::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return VRDisplayFrameTransportOptions::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::VRDisplayFrameTransportOptions_UnserializedMessageContext<
            UserType, VRDisplayFrameTransportOptions::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<VRDisplayFrameTransportOptions::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  VRDisplayFrameTransportMethod transport_method;
  bool wait_for_transfer_notification;
  bool wait_for_render_notification;
  bool wait_for_gpu_fence;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};





class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS) XRInputSourceDescription {
 public:
  using DataView = XRInputSourceDescriptionDataView;
  using Data_ = internal::XRInputSourceDescription_Data;

  template <typename... Args>
  static XRInputSourceDescriptionPtr New(Args&&... args) {
    return XRInputSourceDescriptionPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static XRInputSourceDescriptionPtr From(const U& u) {
    return mojo::TypeConverter<XRInputSourceDescriptionPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, XRInputSourceDescription>::Convert(*this);
  }


  XRInputSourceDescription();

  XRInputSourceDescription(
      XRPointerOrigin pointer_origin,
      XRHandedness handedness,
      bool emulated_position,
      const base::Optional<gfx::Transform>& pointer_offset);

  ~XRInputSourceDescription();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = XRInputSourceDescriptionPtr>
  XRInputSourceDescriptionPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, XRInputSourceDescription>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        XRInputSourceDescription::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        XRInputSourceDescription::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::XRInputSourceDescription_UnserializedMessageContext<
            UserType, XRInputSourceDescription::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<XRInputSourceDescription::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return XRInputSourceDescription::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::XRInputSourceDescription_UnserializedMessageContext<
            UserType, XRInputSourceDescription::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<XRInputSourceDescription::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  XRPointerOrigin pointer_origin;
  XRHandedness handedness;
  bool emulated_position;
  base::Optional<gfx::Transform> pointer_offset;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};


class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS) XRInputSourceState {
 public:
  using DataView = XRInputSourceStateDataView;
  using Data_ = internal::XRInputSourceState_Data;

  template <typename... Args>
  static XRInputSourceStatePtr New(Args&&... args) {
    return XRInputSourceStatePtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static XRInputSourceStatePtr From(const U& u) {
    return mojo::TypeConverter<XRInputSourceStatePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, XRInputSourceState>::Convert(*this);
  }


  XRInputSourceState();

  XRInputSourceState(
      uint32_t source_id,
      XRInputSourceDescriptionPtr description,
      const base::Optional<gfx::Transform>& grip,
      bool primary_input_pressed,
      bool primary_input_clicked);

  ~XRInputSourceState();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = XRInputSourceStatePtr>
  XRInputSourceStatePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, XRInputSourceState>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        XRInputSourceState::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        XRInputSourceState::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::XRInputSourceState_UnserializedMessageContext<
            UserType, XRInputSourceState::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<XRInputSourceState::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return XRInputSourceState::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::XRInputSourceState_UnserializedMessageContext<
            UserType, XRInputSourceState::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<XRInputSourceState::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  uint32_t source_id;
  XRInputSourceDescriptionPtr description;
  base::Optional<gfx::Transform> grip;
  bool primary_input_pressed;
  bool primary_input_clicked;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(XRInputSourceState);
};



class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS) VRPose {
 public:
  using DataView = VRPoseDataView;
  using Data_ = internal::VRPose_Data;

  template <typename... Args>
  static VRPosePtr New(Args&&... args) {
    return VRPosePtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static VRPosePtr From(const U& u) {
    return mojo::TypeConverter<VRPosePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, VRPose>::Convert(*this);
  }


  VRPose();

  VRPose(
      const base::Optional<std::vector<float>>& orientation,
      const base::Optional<std::vector<float>>& position,
      const base::Optional<std::vector<float>>& angularVelocity,
      const base::Optional<std::vector<float>>& linearVelocity,
      const base::Optional<std::vector<float>>& angularAcceleration,
      const base::Optional<std::vector<float>>& linearAcceleration,
      base::Optional<std::vector<XRInputSourceStatePtr>> input_state,
      bool pose_reset);

  ~VRPose();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = VRPosePtr>
  VRPosePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, VRPose>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        VRPose::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        VRPose::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::VRPose_UnserializedMessageContext<
            UserType, VRPose::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<VRPose::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return VRPose::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::VRPose_UnserializedMessageContext<
            UserType, VRPose::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<VRPose::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  base::Optional<std::vector<float>> orientation;
  base::Optional<std::vector<float>> position;
  base::Optional<std::vector<float>> angularVelocity;
  base::Optional<std::vector<float>> linearVelocity;
  base::Optional<std::vector<float>> angularAcceleration;
  base::Optional<std::vector<float>> linearAcceleration;
  base::Optional<std::vector<XRInputSourceStatePtr>> input_state;
  bool pose_reset;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(VRPose);
};



class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS) VREyeParameters {
 public:
  using DataView = VREyeParametersDataView;
  using Data_ = internal::VREyeParameters_Data;

  template <typename... Args>
  static VREyeParametersPtr New(Args&&... args) {
    return VREyeParametersPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static VREyeParametersPtr From(const U& u) {
    return mojo::TypeConverter<VREyeParametersPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, VREyeParameters>::Convert(*this);
  }


  VREyeParameters();

  VREyeParameters(
      VRFieldOfViewPtr fieldOfView,
      const std::vector<float>& offset,
      uint32_t renderWidth,
      uint32_t renderHeight);

  ~VREyeParameters();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = VREyeParametersPtr>
  VREyeParametersPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, VREyeParameters>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        VREyeParameters::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        VREyeParameters::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::VREyeParameters_UnserializedMessageContext<
            UserType, VREyeParameters::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<VREyeParameters::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return VREyeParameters::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::VREyeParameters_UnserializedMessageContext<
            UserType, VREyeParameters::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<VREyeParameters::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  VRFieldOfViewPtr fieldOfView;
  std::vector<float> offset;
  uint32_t renderWidth;
  uint32_t renderHeight;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(VREyeParameters);
};


class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS) VRStageParameters {
 public:
  using DataView = VRStageParametersDataView;
  using Data_ = internal::VRStageParameters_Data;

  template <typename... Args>
  static VRStageParametersPtr New(Args&&... args) {
    return VRStageParametersPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static VRStageParametersPtr From(const U& u) {
    return mojo::TypeConverter<VRStageParametersPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, VRStageParameters>::Convert(*this);
  }


  VRStageParameters();

  VRStageParameters(
      const std::vector<float>& standingTransform,
      float sizeX,
      float sizeZ);

  ~VRStageParameters();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = VRStageParametersPtr>
  VRStageParametersPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, VRStageParameters>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        VRStageParameters::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        VRStageParameters::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::VRStageParameters_UnserializedMessageContext<
            UserType, VRStageParameters::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<VRStageParameters::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return VRStageParameters::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::VRStageParameters_UnserializedMessageContext<
            UserType, VRStageParameters::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<VRStageParameters::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  std::vector<float> standingTransform;
  float sizeX;
  float sizeZ;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};


class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS) VRDisplayInfo {
 public:
  using DataView = VRDisplayInfoDataView;
  using Data_ = internal::VRDisplayInfo_Data;

  template <typename... Args>
  static VRDisplayInfoPtr New(Args&&... args) {
    return VRDisplayInfoPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static VRDisplayInfoPtr From(const U& u) {
    return mojo::TypeConverter<VRDisplayInfoPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, VRDisplayInfo>::Convert(*this);
  }


  VRDisplayInfo();

  VRDisplayInfo(
      uint32_t index,
      const std::string& displayName,
      VRDisplayCapabilitiesPtr capabilities,
      VRStageParametersPtr stageParameters,
      VREyeParametersPtr leftEye,
      VREyeParametersPtr rightEye,
      float webvr_default_framebuffer_scale,
      float webxr_default_framebuffer_scale);

  ~VRDisplayInfo();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = VRDisplayInfoPtr>
  VRDisplayInfoPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, VRDisplayInfo>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        VRDisplayInfo::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        VRDisplayInfo::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::VRDisplayInfo_UnserializedMessageContext<
            UserType, VRDisplayInfo::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<VRDisplayInfo::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return VRDisplayInfo::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::VRDisplayInfo_UnserializedMessageContext<
            UserType, VRDisplayInfo::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<VRDisplayInfo::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  uint32_t index;
  std::string displayName;
  VRDisplayCapabilitiesPtr capabilities;
  VRStageParametersPtr stageParameters;
  VREyeParametersPtr leftEye;
  VREyeParametersPtr rightEye;
  float webvr_default_framebuffer_scale;
  float webxr_default_framebuffer_scale;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(VRDisplayInfo);
};




class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS) VRMagicWindowFrameData {
 public:
  using DataView = VRMagicWindowFrameDataDataView;
  using Data_ = internal::VRMagicWindowFrameData_Data;

  template <typename... Args>
  static VRMagicWindowFrameDataPtr New(Args&&... args) {
    return VRMagicWindowFrameDataPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static VRMagicWindowFrameDataPtr From(const U& u) {
    return mojo::TypeConverter<VRMagicWindowFrameDataPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, VRMagicWindowFrameData>::Convert(*this);
  }


  VRMagicWindowFrameData();

  VRMagicWindowFrameData(
      VRPosePtr pose,
      const ::gpu::MailboxHolder& buffer_holder,
      const gfx::Size& buffer_size,
      base::TimeDelta time_delta,
      const std::vector<float>& projection_matrix);

  ~VRMagicWindowFrameData();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = VRMagicWindowFrameDataPtr>
  VRMagicWindowFrameDataPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, VRMagicWindowFrameData>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        VRMagicWindowFrameData::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        VRMagicWindowFrameData::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::VRMagicWindowFrameData_UnserializedMessageContext<
            UserType, VRMagicWindowFrameData::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<VRMagicWindowFrameData::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return VRMagicWindowFrameData::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::VRMagicWindowFrameData_UnserializedMessageContext<
            UserType, VRMagicWindowFrameData::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<VRMagicWindowFrameData::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  VRPosePtr pose;
  ::gpu::MailboxHolder buffer_holder;
  gfx::Size buffer_size;
  base::TimeDelta time_delta;
  std::vector<float> projection_matrix;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(VRMagicWindowFrameData);
};

template <typename StructPtrType>
XRInputSourceDescriptionPtr XRInputSourceDescription::Clone() const {
  return New(
      mojo::Clone(pointer_origin),
      mojo::Clone(handedness),
      mojo::Clone(emulated_position),
      mojo::Clone(pointer_offset)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, XRInputSourceDescription>::value>::type*>
bool XRInputSourceDescription::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->pointer_origin, other_struct.pointer_origin))
    return false;
  if (!mojo::Equals(this->handedness, other_struct.handedness))
    return false;
  if (!mojo::Equals(this->emulated_position, other_struct.emulated_position))
    return false;
  if (!mojo::Equals(this->pointer_offset, other_struct.pointer_offset))
    return false;
  return true;
}
template <typename StructPtrType>
XRInputSourceStatePtr XRInputSourceState::Clone() const {
  return New(
      mojo::Clone(source_id),
      mojo::Clone(description),
      mojo::Clone(grip),
      mojo::Clone(primary_input_pressed),
      mojo::Clone(primary_input_clicked)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, XRInputSourceState>::value>::type*>
bool XRInputSourceState::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->source_id, other_struct.source_id))
    return false;
  if (!mojo::Equals(this->description, other_struct.description))
    return false;
  if (!mojo::Equals(this->grip, other_struct.grip))
    return false;
  if (!mojo::Equals(this->primary_input_pressed, other_struct.primary_input_pressed))
    return false;
  if (!mojo::Equals(this->primary_input_clicked, other_struct.primary_input_clicked))
    return false;
  return true;
}
template <typename StructPtrType>
VRFieldOfViewPtr VRFieldOfView::Clone() const {
  return New(
      mojo::Clone(upDegrees),
      mojo::Clone(downDegrees),
      mojo::Clone(leftDegrees),
      mojo::Clone(rightDegrees)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, VRFieldOfView>::value>::type*>
bool VRFieldOfView::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->upDegrees, other_struct.upDegrees))
    return false;
  if (!mojo::Equals(this->downDegrees, other_struct.downDegrees))
    return false;
  if (!mojo::Equals(this->leftDegrees, other_struct.leftDegrees))
    return false;
  if (!mojo::Equals(this->rightDegrees, other_struct.rightDegrees))
    return false;
  return true;
}
template <typename StructPtrType>
VRPosePtr VRPose::Clone() const {
  return New(
      mojo::Clone(orientation),
      mojo::Clone(position),
      mojo::Clone(angularVelocity),
      mojo::Clone(linearVelocity),
      mojo::Clone(angularAcceleration),
      mojo::Clone(linearAcceleration),
      mojo::Clone(input_state),
      mojo::Clone(pose_reset)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, VRPose>::value>::type*>
bool VRPose::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->orientation, other_struct.orientation))
    return false;
  if (!mojo::Equals(this->position, other_struct.position))
    return false;
  if (!mojo::Equals(this->angularVelocity, other_struct.angularVelocity))
    return false;
  if (!mojo::Equals(this->linearVelocity, other_struct.linearVelocity))
    return false;
  if (!mojo::Equals(this->angularAcceleration, other_struct.angularAcceleration))
    return false;
  if (!mojo::Equals(this->linearAcceleration, other_struct.linearAcceleration))
    return false;
  if (!mojo::Equals(this->input_state, other_struct.input_state))
    return false;
  if (!mojo::Equals(this->pose_reset, other_struct.pose_reset))
    return false;
  return true;
}
template <typename StructPtrType>
VRDisplayCapabilitiesPtr VRDisplayCapabilities::Clone() const {
  return New(
      mojo::Clone(hasPosition),
      mojo::Clone(hasExternalDisplay),
      mojo::Clone(canPresent),
      mojo::Clone(can_provide_pass_through_images)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, VRDisplayCapabilities>::value>::type*>
bool VRDisplayCapabilities::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->hasPosition, other_struct.hasPosition))
    return false;
  if (!mojo::Equals(this->hasExternalDisplay, other_struct.hasExternalDisplay))
    return false;
  if (!mojo::Equals(this->canPresent, other_struct.canPresent))
    return false;
  if (!mojo::Equals(this->can_provide_pass_through_images, other_struct.can_provide_pass_through_images))
    return false;
  return true;
}
template <typename StructPtrType>
VREyeParametersPtr VREyeParameters::Clone() const {
  return New(
      mojo::Clone(fieldOfView),
      mojo::Clone(offset),
      mojo::Clone(renderWidth),
      mojo::Clone(renderHeight)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, VREyeParameters>::value>::type*>
bool VREyeParameters::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->fieldOfView, other_struct.fieldOfView))
    return false;
  if (!mojo::Equals(this->offset, other_struct.offset))
    return false;
  if (!mojo::Equals(this->renderWidth, other_struct.renderWidth))
    return false;
  if (!mojo::Equals(this->renderHeight, other_struct.renderHeight))
    return false;
  return true;
}
template <typename StructPtrType>
VRStageParametersPtr VRStageParameters::Clone() const {
  return New(
      mojo::Clone(standingTransform),
      mojo::Clone(sizeX),
      mojo::Clone(sizeZ)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, VRStageParameters>::value>::type*>
bool VRStageParameters::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->standingTransform, other_struct.standingTransform))
    return false;
  if (!mojo::Equals(this->sizeX, other_struct.sizeX))
    return false;
  if (!mojo::Equals(this->sizeZ, other_struct.sizeZ))
    return false;
  return true;
}
template <typename StructPtrType>
VRDisplayInfoPtr VRDisplayInfo::Clone() const {
  return New(
      mojo::Clone(index),
      mojo::Clone(displayName),
      mojo::Clone(capabilities),
      mojo::Clone(stageParameters),
      mojo::Clone(leftEye),
      mojo::Clone(rightEye),
      mojo::Clone(webvr_default_framebuffer_scale),
      mojo::Clone(webxr_default_framebuffer_scale)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, VRDisplayInfo>::value>::type*>
bool VRDisplayInfo::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->index, other_struct.index))
    return false;
  if (!mojo::Equals(this->displayName, other_struct.displayName))
    return false;
  if (!mojo::Equals(this->capabilities, other_struct.capabilities))
    return false;
  if (!mojo::Equals(this->stageParameters, other_struct.stageParameters))
    return false;
  if (!mojo::Equals(this->leftEye, other_struct.leftEye))
    return false;
  if (!mojo::Equals(this->rightEye, other_struct.rightEye))
    return false;
  if (!mojo::Equals(this->webvr_default_framebuffer_scale, other_struct.webvr_default_framebuffer_scale))
    return false;
  if (!mojo::Equals(this->webxr_default_framebuffer_scale, other_struct.webxr_default_framebuffer_scale))
    return false;
  return true;
}
template <typename StructPtrType>
VRRequestPresentOptionsPtr VRRequestPresentOptions::Clone() const {
  return New(
      mojo::Clone(preserve_drawing_buffer),
      mojo::Clone(webxr_input),
      mojo::Clone(shared_buffer_draw_supported)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, VRRequestPresentOptions>::value>::type*>
bool VRRequestPresentOptions::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->preserve_drawing_buffer, other_struct.preserve_drawing_buffer))
    return false;
  if (!mojo::Equals(this->webxr_input, other_struct.webxr_input))
    return false;
  if (!mojo::Equals(this->shared_buffer_draw_supported, other_struct.shared_buffer_draw_supported))
    return false;
  return true;
}
template <typename StructPtrType>
VRDisplayFrameTransportOptionsPtr VRDisplayFrameTransportOptions::Clone() const {
  return New(
      mojo::Clone(transport_method),
      mojo::Clone(wait_for_transfer_notification),
      mojo::Clone(wait_for_render_notification),
      mojo::Clone(wait_for_gpu_fence)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, VRDisplayFrameTransportOptions>::value>::type*>
bool VRDisplayFrameTransportOptions::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->transport_method, other_struct.transport_method))
    return false;
  if (!mojo::Equals(this->wait_for_transfer_notification, other_struct.wait_for_transfer_notification))
    return false;
  if (!mojo::Equals(this->wait_for_render_notification, other_struct.wait_for_render_notification))
    return false;
  if (!mojo::Equals(this->wait_for_gpu_fence, other_struct.wait_for_gpu_fence))
    return false;
  return true;
}
template <typename StructPtrType>
VRMagicWindowFrameDataPtr VRMagicWindowFrameData::Clone() const {
  return New(
      mojo::Clone(pose),
      mojo::Clone(buffer_holder),
      mojo::Clone(buffer_size),
      mojo::Clone(time_delta),
      mojo::Clone(projection_matrix)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, VRMagicWindowFrameData>::value>::type*>
bool VRMagicWindowFrameData::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->pose, other_struct.pose))
    return false;
  if (!mojo::Equals(this->buffer_holder, other_struct.buffer_holder))
    return false;
  if (!mojo::Equals(this->buffer_size, other_struct.buffer_size))
    return false;
  if (!mojo::Equals(this->time_delta, other_struct.time_delta))
    return false;
  if (!mojo::Equals(this->projection_matrix, other_struct.projection_matrix))
    return false;
  return true;
}


}  // namespace mojom
}  // namespace device

namespace mojo {


template <>
struct COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS) StructTraits<::device::mojom::XRInputSourceDescription::DataView,
                                         ::device::mojom::XRInputSourceDescriptionPtr> {
  static bool IsNull(const ::device::mojom::XRInputSourceDescriptionPtr& input) { return !input; }
  static void SetToNull(::device::mojom::XRInputSourceDescriptionPtr* output) { output->reset(); }

  static decltype(::device::mojom::XRInputSourceDescription::pointer_origin) pointer_origin(
      const ::device::mojom::XRInputSourceDescriptionPtr& input) {
    return input->pointer_origin;
  }

  static decltype(::device::mojom::XRInputSourceDescription::handedness) handedness(
      const ::device::mojom::XRInputSourceDescriptionPtr& input) {
    return input->handedness;
  }

  static decltype(::device::mojom::XRInputSourceDescription::emulated_position) emulated_position(
      const ::device::mojom::XRInputSourceDescriptionPtr& input) {
    return input->emulated_position;
  }

  static const decltype(::device::mojom::XRInputSourceDescription::pointer_offset)& pointer_offset(
      const ::device::mojom::XRInputSourceDescriptionPtr& input) {
    return input->pointer_offset;
  }

  static bool Read(::device::mojom::XRInputSourceDescription::DataView input, ::device::mojom::XRInputSourceDescriptionPtr* output);
};


template <>
struct COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS) StructTraits<::device::mojom::XRInputSourceState::DataView,
                                         ::device::mojom::XRInputSourceStatePtr> {
  static bool IsNull(const ::device::mojom::XRInputSourceStatePtr& input) { return !input; }
  static void SetToNull(::device::mojom::XRInputSourceStatePtr* output) { output->reset(); }

  static decltype(::device::mojom::XRInputSourceState::source_id) source_id(
      const ::device::mojom::XRInputSourceStatePtr& input) {
    return input->source_id;
  }

  static const decltype(::device::mojom::XRInputSourceState::description)& description(
      const ::device::mojom::XRInputSourceStatePtr& input) {
    return input->description;
  }

  static const decltype(::device::mojom::XRInputSourceState::grip)& grip(
      const ::device::mojom::XRInputSourceStatePtr& input) {
    return input->grip;
  }

  static decltype(::device::mojom::XRInputSourceState::primary_input_pressed) primary_input_pressed(
      const ::device::mojom::XRInputSourceStatePtr& input) {
    return input->primary_input_pressed;
  }

  static decltype(::device::mojom::XRInputSourceState::primary_input_clicked) primary_input_clicked(
      const ::device::mojom::XRInputSourceStatePtr& input) {
    return input->primary_input_clicked;
  }

  static bool Read(::device::mojom::XRInputSourceState::DataView input, ::device::mojom::XRInputSourceStatePtr* output);
};


template <>
struct COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS) StructTraits<::device::mojom::VRFieldOfView::DataView,
                                         ::device::mojom::VRFieldOfViewPtr> {
  static bool IsNull(const ::device::mojom::VRFieldOfViewPtr& input) { return !input; }
  static void SetToNull(::device::mojom::VRFieldOfViewPtr* output) { output->reset(); }

  static decltype(::device::mojom::VRFieldOfView::upDegrees) upDegrees(
      const ::device::mojom::VRFieldOfViewPtr& input) {
    return input->upDegrees;
  }

  static decltype(::device::mojom::VRFieldOfView::downDegrees) downDegrees(
      const ::device::mojom::VRFieldOfViewPtr& input) {
    return input->downDegrees;
  }

  static decltype(::device::mojom::VRFieldOfView::leftDegrees) leftDegrees(
      const ::device::mojom::VRFieldOfViewPtr& input) {
    return input->leftDegrees;
  }

  static decltype(::device::mojom::VRFieldOfView::rightDegrees) rightDegrees(
      const ::device::mojom::VRFieldOfViewPtr& input) {
    return input->rightDegrees;
  }

  static bool Read(::device::mojom::VRFieldOfView::DataView input, ::device::mojom::VRFieldOfViewPtr* output);
};


template <>
struct COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS) StructTraits<::device::mojom::VRPose::DataView,
                                         ::device::mojom::VRPosePtr> {
  static bool IsNull(const ::device::mojom::VRPosePtr& input) { return !input; }
  static void SetToNull(::device::mojom::VRPosePtr* output) { output->reset(); }

  static const decltype(::device::mojom::VRPose::orientation)& orientation(
      const ::device::mojom::VRPosePtr& input) {
    return input->orientation;
  }

  static const decltype(::device::mojom::VRPose::position)& position(
      const ::device::mojom::VRPosePtr& input) {
    return input->position;
  }

  static const decltype(::device::mojom::VRPose::angularVelocity)& angularVelocity(
      const ::device::mojom::VRPosePtr& input) {
    return input->angularVelocity;
  }

  static const decltype(::device::mojom::VRPose::linearVelocity)& linearVelocity(
      const ::device::mojom::VRPosePtr& input) {
    return input->linearVelocity;
  }

  static const decltype(::device::mojom::VRPose::angularAcceleration)& angularAcceleration(
      const ::device::mojom::VRPosePtr& input) {
    return input->angularAcceleration;
  }

  static const decltype(::device::mojom::VRPose::linearAcceleration)& linearAcceleration(
      const ::device::mojom::VRPosePtr& input) {
    return input->linearAcceleration;
  }

  static const decltype(::device::mojom::VRPose::input_state)& input_state(
      const ::device::mojom::VRPosePtr& input) {
    return input->input_state;
  }

  static decltype(::device::mojom::VRPose::pose_reset) pose_reset(
      const ::device::mojom::VRPosePtr& input) {
    return input->pose_reset;
  }

  static bool Read(::device::mojom::VRPose::DataView input, ::device::mojom::VRPosePtr* output);
};


template <>
struct COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS) StructTraits<::device::mojom::VRDisplayCapabilities::DataView,
                                         ::device::mojom::VRDisplayCapabilitiesPtr> {
  static bool IsNull(const ::device::mojom::VRDisplayCapabilitiesPtr& input) { return !input; }
  static void SetToNull(::device::mojom::VRDisplayCapabilitiesPtr* output) { output->reset(); }

  static decltype(::device::mojom::VRDisplayCapabilities::hasPosition) hasPosition(
      const ::device::mojom::VRDisplayCapabilitiesPtr& input) {
    return input->hasPosition;
  }

  static decltype(::device::mojom::VRDisplayCapabilities::hasExternalDisplay) hasExternalDisplay(
      const ::device::mojom::VRDisplayCapabilitiesPtr& input) {
    return input->hasExternalDisplay;
  }

  static decltype(::device::mojom::VRDisplayCapabilities::canPresent) canPresent(
      const ::device::mojom::VRDisplayCapabilitiesPtr& input) {
    return input->canPresent;
  }

  static decltype(::device::mojom::VRDisplayCapabilities::can_provide_pass_through_images) can_provide_pass_through_images(
      const ::device::mojom::VRDisplayCapabilitiesPtr& input) {
    return input->can_provide_pass_through_images;
  }

  static bool Read(::device::mojom::VRDisplayCapabilities::DataView input, ::device::mojom::VRDisplayCapabilitiesPtr* output);
};


template <>
struct COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS) StructTraits<::device::mojom::VREyeParameters::DataView,
                                         ::device::mojom::VREyeParametersPtr> {
  static bool IsNull(const ::device::mojom::VREyeParametersPtr& input) { return !input; }
  static void SetToNull(::device::mojom::VREyeParametersPtr* output) { output->reset(); }

  static const decltype(::device::mojom::VREyeParameters::fieldOfView)& fieldOfView(
      const ::device::mojom::VREyeParametersPtr& input) {
    return input->fieldOfView;
  }

  static const decltype(::device::mojom::VREyeParameters::offset)& offset(
      const ::device::mojom::VREyeParametersPtr& input) {
    return input->offset;
  }

  static decltype(::device::mojom::VREyeParameters::renderWidth) renderWidth(
      const ::device::mojom::VREyeParametersPtr& input) {
    return input->renderWidth;
  }

  static decltype(::device::mojom::VREyeParameters::renderHeight) renderHeight(
      const ::device::mojom::VREyeParametersPtr& input) {
    return input->renderHeight;
  }

  static bool Read(::device::mojom::VREyeParameters::DataView input, ::device::mojom::VREyeParametersPtr* output);
};


template <>
struct COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS) StructTraits<::device::mojom::VRStageParameters::DataView,
                                         ::device::mojom::VRStageParametersPtr> {
  static bool IsNull(const ::device::mojom::VRStageParametersPtr& input) { return !input; }
  static void SetToNull(::device::mojom::VRStageParametersPtr* output) { output->reset(); }

  static const decltype(::device::mojom::VRStageParameters::standingTransform)& standingTransform(
      const ::device::mojom::VRStageParametersPtr& input) {
    return input->standingTransform;
  }

  static decltype(::device::mojom::VRStageParameters::sizeX) sizeX(
      const ::device::mojom::VRStageParametersPtr& input) {
    return input->sizeX;
  }

  static decltype(::device::mojom::VRStageParameters::sizeZ) sizeZ(
      const ::device::mojom::VRStageParametersPtr& input) {
    return input->sizeZ;
  }

  static bool Read(::device::mojom::VRStageParameters::DataView input, ::device::mojom::VRStageParametersPtr* output);
};


template <>
struct COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS) StructTraits<::device::mojom::VRDisplayInfo::DataView,
                                         ::device::mojom::VRDisplayInfoPtr> {
  static bool IsNull(const ::device::mojom::VRDisplayInfoPtr& input) { return !input; }
  static void SetToNull(::device::mojom::VRDisplayInfoPtr* output) { output->reset(); }

  static decltype(::device::mojom::VRDisplayInfo::index) index(
      const ::device::mojom::VRDisplayInfoPtr& input) {
    return input->index;
  }

  static const decltype(::device::mojom::VRDisplayInfo::displayName)& displayName(
      const ::device::mojom::VRDisplayInfoPtr& input) {
    return input->displayName;
  }

  static const decltype(::device::mojom::VRDisplayInfo::capabilities)& capabilities(
      const ::device::mojom::VRDisplayInfoPtr& input) {
    return input->capabilities;
  }

  static const decltype(::device::mojom::VRDisplayInfo::stageParameters)& stageParameters(
      const ::device::mojom::VRDisplayInfoPtr& input) {
    return input->stageParameters;
  }

  static const decltype(::device::mojom::VRDisplayInfo::leftEye)& leftEye(
      const ::device::mojom::VRDisplayInfoPtr& input) {
    return input->leftEye;
  }

  static const decltype(::device::mojom::VRDisplayInfo::rightEye)& rightEye(
      const ::device::mojom::VRDisplayInfoPtr& input) {
    return input->rightEye;
  }

  static decltype(::device::mojom::VRDisplayInfo::webvr_default_framebuffer_scale) webvr_default_framebuffer_scale(
      const ::device::mojom::VRDisplayInfoPtr& input) {
    return input->webvr_default_framebuffer_scale;
  }

  static decltype(::device::mojom::VRDisplayInfo::webxr_default_framebuffer_scale) webxr_default_framebuffer_scale(
      const ::device::mojom::VRDisplayInfoPtr& input) {
    return input->webxr_default_framebuffer_scale;
  }

  static bool Read(::device::mojom::VRDisplayInfo::DataView input, ::device::mojom::VRDisplayInfoPtr* output);
};


template <>
struct COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS) StructTraits<::device::mojom::VRRequestPresentOptions::DataView,
                                         ::device::mojom::VRRequestPresentOptionsPtr> {
  static bool IsNull(const ::device::mojom::VRRequestPresentOptionsPtr& input) { return !input; }
  static void SetToNull(::device::mojom::VRRequestPresentOptionsPtr* output) { output->reset(); }

  static decltype(::device::mojom::VRRequestPresentOptions::preserve_drawing_buffer) preserve_drawing_buffer(
      const ::device::mojom::VRRequestPresentOptionsPtr& input) {
    return input->preserve_drawing_buffer;
  }

  static decltype(::device::mojom::VRRequestPresentOptions::webxr_input) webxr_input(
      const ::device::mojom::VRRequestPresentOptionsPtr& input) {
    return input->webxr_input;
  }

  static decltype(::device::mojom::VRRequestPresentOptions::shared_buffer_draw_supported) shared_buffer_draw_supported(
      const ::device::mojom::VRRequestPresentOptionsPtr& input) {
    return input->shared_buffer_draw_supported;
  }

  static bool Read(::device::mojom::VRRequestPresentOptions::DataView input, ::device::mojom::VRRequestPresentOptionsPtr* output);
};


template <>
struct COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS) StructTraits<::device::mojom::VRDisplayFrameTransportOptions::DataView,
                                         ::device::mojom::VRDisplayFrameTransportOptionsPtr> {
  static bool IsNull(const ::device::mojom::VRDisplayFrameTransportOptionsPtr& input) { return !input; }
  static void SetToNull(::device::mojom::VRDisplayFrameTransportOptionsPtr* output) { output->reset(); }

  static decltype(::device::mojom::VRDisplayFrameTransportOptions::transport_method) transport_method(
      const ::device::mojom::VRDisplayFrameTransportOptionsPtr& input) {
    return input->transport_method;
  }

  static decltype(::device::mojom::VRDisplayFrameTransportOptions::wait_for_transfer_notification) wait_for_transfer_notification(
      const ::device::mojom::VRDisplayFrameTransportOptionsPtr& input) {
    return input->wait_for_transfer_notification;
  }

  static decltype(::device::mojom::VRDisplayFrameTransportOptions::wait_for_render_notification) wait_for_render_notification(
      const ::device::mojom::VRDisplayFrameTransportOptionsPtr& input) {
    return input->wait_for_render_notification;
  }

  static decltype(::device::mojom::VRDisplayFrameTransportOptions::wait_for_gpu_fence) wait_for_gpu_fence(
      const ::device::mojom::VRDisplayFrameTransportOptionsPtr& input) {
    return input->wait_for_gpu_fence;
  }

  static bool Read(::device::mojom::VRDisplayFrameTransportOptions::DataView input, ::device::mojom::VRDisplayFrameTransportOptionsPtr* output);
};


template <>
struct COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS) StructTraits<::device::mojom::VRMagicWindowFrameData::DataView,
                                         ::device::mojom::VRMagicWindowFrameDataPtr> {
  static bool IsNull(const ::device::mojom::VRMagicWindowFrameDataPtr& input) { return !input; }
  static void SetToNull(::device::mojom::VRMagicWindowFrameDataPtr* output) { output->reset(); }

  static const decltype(::device::mojom::VRMagicWindowFrameData::pose)& pose(
      const ::device::mojom::VRMagicWindowFrameDataPtr& input) {
    return input->pose;
  }

  static const decltype(::device::mojom::VRMagicWindowFrameData::buffer_holder)& buffer_holder(
      const ::device::mojom::VRMagicWindowFrameDataPtr& input) {
    return input->buffer_holder;
  }

  static const decltype(::device::mojom::VRMagicWindowFrameData::buffer_size)& buffer_size(
      const ::device::mojom::VRMagicWindowFrameDataPtr& input) {
    return input->buffer_size;
  }

  static const decltype(::device::mojom::VRMagicWindowFrameData::time_delta)& time_delta(
      const ::device::mojom::VRMagicWindowFrameDataPtr& input) {
    return input->time_delta;
  }

  static const decltype(::device::mojom::VRMagicWindowFrameData::projection_matrix)& projection_matrix(
      const ::device::mojom::VRMagicWindowFrameDataPtr& input) {
    return input->projection_matrix;
  }

  static bool Read(::device::mojom::VRMagicWindowFrameData::DataView input, ::device::mojom::VRMagicWindowFrameDataPtr* output);
};

}  // namespace mojo

#endif  // DEVICE_VR_PUBLIC_MOJOM_VR_SERVICE_MOJOM_H_