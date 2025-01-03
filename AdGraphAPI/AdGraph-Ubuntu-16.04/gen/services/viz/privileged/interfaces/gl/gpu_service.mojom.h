// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_VIZ_PRIVILEGED_INTERFACES_GL_GPU_SERVICE_MOJOM_H_
#define SERVICES_VIZ_PRIVILEGED_INTERFACES_GL_GPU_SERVICE_MOJOM_H_

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
#include "services/viz/privileged/interfaces/gl/gpu_service.mojom-shared.h"
#include "components/arc/common/protected_buffer_manager.mojom.h"
#include "components/arc/common/video_decode_accelerator.mojom.h"
#include "components/arc/common/video_encode_accelerator.mojom.h"
#include "components/arc/common/video_protected_buffer_allocator.mojom.h"
#include "gpu/ipc/common/gpu_info.mojom.h"
#include "gpu/ipc/common/memory_stats.mojom.h"
#include "gpu/ipc/common/surface_handle.mojom.h"
#include "gpu/ipc/common/sync_token.mojom.h"
#include "media/mojo/interfaces/jpeg_decode_accelerator.mojom.h"
#include "media/mojo/interfaces/jpeg_encode_accelerator.mojom.h"
#include "media/mojo/interfaces/video_encode_accelerator.mojom.h"
#include "ui/gfx/geometry/mojo/geometry.mojom.h"
#include "ui/gfx/mojo/buffer_types.mojom.h"
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
class GpuService;
using GpuServicePtr = mojo::InterfacePtr<GpuService>;
using GpuServicePtrInfo = mojo::InterfacePtrInfo<GpuService>;
using ThreadSafeGpuServicePtr =
    mojo::ThreadSafeInterfacePtr<GpuService>;
using GpuServiceRequest = mojo::InterfaceRequest<GpuService>;
using GpuServiceAssociatedPtr =
    mojo::AssociatedInterfacePtr<GpuService>;
using ThreadSafeGpuServiceAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<GpuService>;
using GpuServiceAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<GpuService>;
using GpuServiceAssociatedRequest =
    mojo::AssociatedInterfaceRequest<GpuService>;


class GpuServiceProxy;

template <typename ImplRefTraits>
class GpuServiceStub;

class GpuServiceRequestValidator;
class GpuServiceResponseValidator;

class  GpuService
    : public GpuServiceInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = GpuServiceProxy;

  template <typename ImplRefTraits>
  using Stub_ = GpuServiceStub<ImplRefTraits>;

  using RequestValidator_ = GpuServiceRequestValidator;
  using ResponseValidator_ = GpuServiceResponseValidator;
  enum MethodMinVersions : uint32_t {
    kEstablishGpuChannelMinVersion = 0,
    kCloseChannelMinVersion = 0,
    kCreateJpegDecodeAcceleratorMinVersion = 0,
    kCreateJpegEncodeAcceleratorMinVersion = 0,
    kCreateVideoEncodeAcceleratorProviderMinVersion = 0,
    kCreateGpuMemoryBufferMinVersion = 0,
    kDestroyGpuMemoryBufferMinVersion = 0,
    kGetVideoMemoryUsageStatsMinVersion = 0,
    kRequestCompleteGpuInfoMinVersion = 0,
    kGetGpuSupportedRuntimeVersionMinVersion = 0,
    kRequestHDRStatusMinVersion = 0,
    kLoadedShaderMinVersion = 0,
    kDestroyingVideoSurfaceMinVersion = 0,
    kWakeUpGpuMinVersion = 0,
    kGpuSwitchedMinVersion = 0,
    kDestroyAllChannelsMinVersion = 0,
    kOnBackgroundCleanupMinVersion = 0,
    kOnBackgroundedMinVersion = 0,
    kOnForegroundedMinVersion = 0,
    kCrashMinVersion = 0,
    kHangMinVersion = 0,
    kThrowJavaExceptionMinVersion = 0,
    kStopMinVersion = 0,
  };
  virtual ~GpuService() {}


  using EstablishGpuChannelCallback = base::OnceCallback<void(mojo::ScopedMessagePipeHandle)>;
  virtual void EstablishGpuChannel(int32_t client_id, uint64_t client_tracing_id, bool is_gpu_host, EstablishGpuChannelCallback callback) = 0;

  virtual void CloseChannel(int32_t client_id) = 0;

  virtual void CreateJpegDecodeAccelerator(::media::mojom::JpegDecodeAcceleratorRequest jda) = 0;

  virtual void CreateJpegEncodeAccelerator(::media::mojom::JpegEncodeAcceleratorRequest jea) = 0;

  virtual void CreateVideoEncodeAcceleratorProvider(::media::mojom::VideoEncodeAcceleratorProviderRequest vea_provider) = 0;


  using CreateGpuMemoryBufferCallback = base::OnceCallback<void(const gfx::GpuMemoryBufferHandle&)>;
  virtual void CreateGpuMemoryBuffer(gfx::GpuMemoryBufferId id, const gfx::Size& size, gfx::BufferFormat format, gfx::BufferUsage usage, int32_t client_id, ::gpu::SurfaceHandle surface_handle, CreateGpuMemoryBufferCallback callback) = 0;

  virtual void DestroyGpuMemoryBuffer(gfx::GpuMemoryBufferId id, int32_t client_id, const ::gpu::SyncToken& sync_token) = 0;


  using GetVideoMemoryUsageStatsCallback = base::OnceCallback<void(const gpu::VideoMemoryUsageStats&)>;
  virtual void GetVideoMemoryUsageStats(GetVideoMemoryUsageStatsCallback callback) = 0;


  using RequestCompleteGpuInfoCallback = base::OnceCallback<void(const gpu::GPUInfo&)>;
  virtual void RequestCompleteGpuInfo(RequestCompleteGpuInfoCallback callback) = 0;


  using GetGpuSupportedRuntimeVersionCallback = base::OnceCallback<void(const gpu::GPUInfo&)>;
  virtual void GetGpuSupportedRuntimeVersion(GetGpuSupportedRuntimeVersionCallback callback) = 0;


  using RequestHDRStatusCallback = base::OnceCallback<void(bool)>;
  virtual void RequestHDRStatus(RequestHDRStatusCallback callback) = 0;

  virtual void LoadedShader(const std::string& key, const std::string& data) = 0;


  using DestroyingVideoSurfaceCallback = base::OnceCallback<void()>;
  virtual void DestroyingVideoSurface(int32_t surface_id, DestroyingVideoSurfaceCallback callback) = 0;

  virtual void WakeUpGpu() = 0;

  virtual void GpuSwitched() = 0;

  virtual void DestroyAllChannels() = 0;

  virtual void OnBackgroundCleanup() = 0;

  virtual void OnBackgrounded() = 0;

  virtual void OnForegrounded() = 0;

  virtual void Crash() = 0;

  virtual void Hang() = 0;

  virtual void ThrowJavaException() = 0;


  using StopCallback = base::OnceCallback<void()>;
  virtual void Stop(StopCallback callback) = 0;
};
class  GpuServiceInterceptorForTesting : public GpuService {
  virtual GpuService* GetForwardingInterface() = 0;
  void EstablishGpuChannel(int32_t client_id, uint64_t client_tracing_id, bool is_gpu_host, EstablishGpuChannelCallback callback) override;
  void CloseChannel(int32_t client_id) override;
  void CreateJpegDecodeAccelerator(::media::mojom::JpegDecodeAcceleratorRequest jda) override;
  void CreateJpegEncodeAccelerator(::media::mojom::JpegEncodeAcceleratorRequest jea) override;
  void CreateVideoEncodeAcceleratorProvider(::media::mojom::VideoEncodeAcceleratorProviderRequest vea_provider) override;
  void CreateGpuMemoryBuffer(gfx::GpuMemoryBufferId id, const gfx::Size& size, gfx::BufferFormat format, gfx::BufferUsage usage, int32_t client_id, ::gpu::SurfaceHandle surface_handle, CreateGpuMemoryBufferCallback callback) override;
  void DestroyGpuMemoryBuffer(gfx::GpuMemoryBufferId id, int32_t client_id, const ::gpu::SyncToken& sync_token) override;
  void GetVideoMemoryUsageStats(GetVideoMemoryUsageStatsCallback callback) override;
  void RequestCompleteGpuInfo(RequestCompleteGpuInfoCallback callback) override;
  void GetGpuSupportedRuntimeVersion(GetGpuSupportedRuntimeVersionCallback callback) override;
  void RequestHDRStatus(RequestHDRStatusCallback callback) override;
  void LoadedShader(const std::string& key, const std::string& data) override;
  void DestroyingVideoSurface(int32_t surface_id, DestroyingVideoSurfaceCallback callback) override;
  void WakeUpGpu() override;
  void GpuSwitched() override;
  void DestroyAllChannels() override;
  void OnBackgroundCleanup() override;
  void OnBackgrounded() override;
  void OnForegrounded() override;
  void Crash() override;
  void Hang() override;
  void ThrowJavaException() override;
  void Stop(StopCallback callback) override;
};
class  GpuServiceAsyncWaiter {
 public:
  explicit GpuServiceAsyncWaiter(GpuService* proxy);
  ~GpuServiceAsyncWaiter();
  void EstablishGpuChannel(
      int32_t client_id, uint64_t client_tracing_id, bool is_gpu_host, mojo::ScopedMessagePipeHandle* out_channel_handle);
  void CreateGpuMemoryBuffer(
      gfx::GpuMemoryBufferId id, const gfx::Size& size, gfx::BufferFormat format, gfx::BufferUsage usage, int32_t client_id, ::gpu::SurfaceHandle surface_handle, gfx::GpuMemoryBufferHandle* out_buffer_handle);
  void GetVideoMemoryUsageStats(
      gpu::VideoMemoryUsageStats* out_stats);
  void RequestCompleteGpuInfo(
      gpu::GPUInfo* out_gpu_info);
  void GetGpuSupportedRuntimeVersion(
      gpu::GPUInfo* out_gpu_info);
  void RequestHDRStatus(
      bool* out_hdr_enabled);
  void DestroyingVideoSurface(
      int32_t surface_id);
  void Stop(
      );

 private:
  GpuService* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(GpuServiceAsyncWaiter);
};

class  GpuServiceProxy
    : public GpuService {
 public:
  explicit GpuServiceProxy(mojo::MessageReceiverWithResponder* receiver);
  void EstablishGpuChannel(int32_t client_id, uint64_t client_tracing_id, bool is_gpu_host, EstablishGpuChannelCallback callback) final;
  void CloseChannel(int32_t client_id) final;
  void CreateJpegDecodeAccelerator(::media::mojom::JpegDecodeAcceleratorRequest jda) final;
  void CreateJpegEncodeAccelerator(::media::mojom::JpegEncodeAcceleratorRequest jea) final;
  void CreateVideoEncodeAcceleratorProvider(::media::mojom::VideoEncodeAcceleratorProviderRequest vea_provider) final;
  void CreateGpuMemoryBuffer(gfx::GpuMemoryBufferId id, const gfx::Size& size, gfx::BufferFormat format, gfx::BufferUsage usage, int32_t client_id, ::gpu::SurfaceHandle surface_handle, CreateGpuMemoryBufferCallback callback) final;
  void DestroyGpuMemoryBuffer(gfx::GpuMemoryBufferId id, int32_t client_id, const ::gpu::SyncToken& sync_token) final;
  void GetVideoMemoryUsageStats(GetVideoMemoryUsageStatsCallback callback) final;
  void RequestCompleteGpuInfo(RequestCompleteGpuInfoCallback callback) final;
  void GetGpuSupportedRuntimeVersion(GetGpuSupportedRuntimeVersionCallback callback) final;
  void RequestHDRStatus(RequestHDRStatusCallback callback) final;
  void LoadedShader(const std::string& key, const std::string& data) final;
  void DestroyingVideoSurface(int32_t surface_id, DestroyingVideoSurfaceCallback callback) final;
  void WakeUpGpu() final;
  void GpuSwitched() final;
  void DestroyAllChannels() final;
  void OnBackgroundCleanup() final;
  void OnBackgrounded() final;
  void OnForegrounded() final;
  void Crash() final;
  void Hang() final;
  void ThrowJavaException() final;
  void Stop(StopCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  GpuServiceStubDispatch {
 public:
  static bool Accept(GpuService* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      GpuService* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<GpuService>>
class GpuServiceStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  GpuServiceStub() {}
  ~GpuServiceStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return GpuServiceStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return GpuServiceStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  GpuServiceRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  GpuServiceResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace viz

namespace mojo {

}  // namespace mojo

#endif  // SERVICES_VIZ_PRIVILEGED_INTERFACES_GL_GPU_SERVICE_MOJOM_H_