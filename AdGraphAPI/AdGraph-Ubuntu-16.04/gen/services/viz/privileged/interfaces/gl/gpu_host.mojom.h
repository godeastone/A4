// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_VIZ_PRIVILEGED_INTERFACES_GL_GPU_HOST_MOJOM_H_
#define SERVICES_VIZ_PRIVILEGED_INTERFACES_GL_GPU_HOST_MOJOM_H_

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
#include "services/viz/privileged/interfaces/gl/gpu_host.mojom-shared.h"
#include "gpu/ipc/common/gpu_feature_info.mojom.h"
#include "gpu/ipc/common/gpu_info.mojom.h"
#include "gpu/ipc/common/surface_handle.mojom.h"
#include "services/viz/privileged/interfaces/gl/context_lost_reason.mojom.h"
#include "url/mojom/url.mojom.h"
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
class GpuHost;
using GpuHostPtr = mojo::InterfacePtr<GpuHost>;
using GpuHostPtrInfo = mojo::InterfacePtrInfo<GpuHost>;
using ThreadSafeGpuHostPtr =
    mojo::ThreadSafeInterfacePtr<GpuHost>;
using GpuHostRequest = mojo::InterfaceRequest<GpuHost>;
using GpuHostAssociatedPtr =
    mojo::AssociatedInterfacePtr<GpuHost>;
using ThreadSafeGpuHostAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<GpuHost>;
using GpuHostAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<GpuHost>;
using GpuHostAssociatedRequest =
    mojo::AssociatedInterfaceRequest<GpuHost>;


class GpuHostProxy;

template <typename ImplRefTraits>
class GpuHostStub;

class GpuHostRequestValidator;

class  GpuHost
    : public GpuHostInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = GpuHostProxy;

  template <typename ImplRefTraits>
  using Stub_ = GpuHostStub<ImplRefTraits>;

  using RequestValidator_ = GpuHostRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kDidInitializeMinVersion = 0,
    kDidFailInitializeMinVersion = 0,
    kDidCreateContextSuccessfullyMinVersion = 0,
    kDidCreateOffscreenContextMinVersion = 0,
    kDidDestroyOffscreenContextMinVersion = 0,
    kDidDestroyChannelMinVersion = 0,
    kDidLoseContextMinVersion = 0,
    kSetChildSurfaceMinVersion = 0,
    kStoreShaderToDiskMinVersion = 0,
    kRecordLogMessageMinVersion = 0,
  };
  virtual ~GpuHost() {}

  virtual void DidInitialize(const gpu::GPUInfo& gpu_info, const gpu::GpuFeatureInfo& gpu_feature_info, const base::Optional<gpu::GPUInfo>& gpu_info_for_hardware_gpu, const base::Optional<gpu::GpuFeatureInfo>& gpu_feature_info_for_hardware_gpu) = 0;

  virtual void DidFailInitialize() = 0;

  virtual void DidCreateContextSuccessfully() = 0;

  virtual void DidCreateOffscreenContext(const GURL& url) = 0;

  virtual void DidDestroyOffscreenContext(const GURL& url) = 0;

  virtual void DidDestroyChannel(int32_t client_id) = 0;

  virtual void DidLoseContext(bool offscreen, gpu::error::ContextLostReason reason, const GURL& active_url) = 0;

  virtual void SetChildSurface(::gpu::SurfaceHandle parent, ::gpu::SurfaceHandle child) = 0;

  virtual void StoreShaderToDisk(int32_t client_id, const std::string& key, const std::string& shader) = 0;

  virtual void RecordLogMessage(int32_t severity, const std::string& header, const std::string& message) = 0;
};
class  GpuHostInterceptorForTesting : public GpuHost {
  virtual GpuHost* GetForwardingInterface() = 0;
  void DidInitialize(const gpu::GPUInfo& gpu_info, const gpu::GpuFeatureInfo& gpu_feature_info, const base::Optional<gpu::GPUInfo>& gpu_info_for_hardware_gpu, const base::Optional<gpu::GpuFeatureInfo>& gpu_feature_info_for_hardware_gpu) override;
  void DidFailInitialize() override;
  void DidCreateContextSuccessfully() override;
  void DidCreateOffscreenContext(const GURL& url) override;
  void DidDestroyOffscreenContext(const GURL& url) override;
  void DidDestroyChannel(int32_t client_id) override;
  void DidLoseContext(bool offscreen, gpu::error::ContextLostReason reason, const GURL& active_url) override;
  void SetChildSurface(::gpu::SurfaceHandle parent, ::gpu::SurfaceHandle child) override;
  void StoreShaderToDisk(int32_t client_id, const std::string& key, const std::string& shader) override;
  void RecordLogMessage(int32_t severity, const std::string& header, const std::string& message) override;
};
class  GpuHostAsyncWaiter {
 public:
  explicit GpuHostAsyncWaiter(GpuHost* proxy);
  ~GpuHostAsyncWaiter();

 private:
  GpuHost* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(GpuHostAsyncWaiter);
};

class  GpuHostProxy
    : public GpuHost {
 public:
  explicit GpuHostProxy(mojo::MessageReceiverWithResponder* receiver);
  void DidInitialize(const gpu::GPUInfo& gpu_info, const gpu::GpuFeatureInfo& gpu_feature_info, const base::Optional<gpu::GPUInfo>& gpu_info_for_hardware_gpu, const base::Optional<gpu::GpuFeatureInfo>& gpu_feature_info_for_hardware_gpu) final;
  void DidFailInitialize() final;
  void DidCreateContextSuccessfully() final;
  void DidCreateOffscreenContext(const GURL& url) final;
  void DidDestroyOffscreenContext(const GURL& url) final;
  void DidDestroyChannel(int32_t client_id) final;
  void DidLoseContext(bool offscreen, gpu::error::ContextLostReason reason, const GURL& active_url) final;
  void SetChildSurface(::gpu::SurfaceHandle parent, ::gpu::SurfaceHandle child) final;
  void StoreShaderToDisk(int32_t client_id, const std::string& key, const std::string& shader) final;
  void RecordLogMessage(int32_t severity, const std::string& header, const std::string& message) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  GpuHostStubDispatch {
 public:
  static bool Accept(GpuHost* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      GpuHost* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<GpuHost>>
class GpuHostStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  GpuHostStub() {}
  ~GpuHostStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return GpuHostStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return GpuHostStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  GpuHostRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace viz

namespace mojo {

}  // namespace mojo

#endif  // SERVICES_VIZ_PRIVILEGED_INTERFACES_GL_GPU_HOST_MOJOM_H_