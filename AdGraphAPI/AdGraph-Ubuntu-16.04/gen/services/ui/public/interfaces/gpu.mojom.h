// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_UI_PUBLIC_INTERFACES_GPU_MOJOM_H_
#define SERVICES_UI_PUBLIC_INTERFACES_GPU_MOJOM_H_

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
#include "services/ui/public/interfaces/gpu.mojom-shared.h"
#include "gpu/ipc/common/gpu_feature_info.mojom.h"
#include "gpu/ipc/common/gpu_info.mojom.h"
#include "gpu/ipc/common/sync_token.mojom.h"
#include "media/mojo/interfaces/jpeg_decode_accelerator.mojom.h"
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


namespace ui {
namespace mojom {
class Gpu;
using GpuPtr = mojo::InterfacePtr<Gpu>;
using GpuPtrInfo = mojo::InterfacePtrInfo<Gpu>;
using ThreadSafeGpuPtr =
    mojo::ThreadSafeInterfacePtr<Gpu>;
using GpuRequest = mojo::InterfaceRequest<Gpu>;
using GpuAssociatedPtr =
    mojo::AssociatedInterfacePtr<Gpu>;
using ThreadSafeGpuAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<Gpu>;
using GpuAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<Gpu>;
using GpuAssociatedRequest =
    mojo::AssociatedInterfaceRequest<Gpu>;


class GpuProxy;

template <typename ImplRefTraits>
class GpuStub;

class GpuRequestValidator;
class GpuResponseValidator;

class  Gpu
    : public GpuInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = GpuProxy;

  template <typename ImplRefTraits>
  using Stub_ = GpuStub<ImplRefTraits>;

  using RequestValidator_ = GpuRequestValidator;
  using ResponseValidator_ = GpuResponseValidator;
  enum MethodMinVersions : uint32_t {
    kEstablishGpuChannelMinVersion = 0,
    kCreateJpegDecodeAcceleratorMinVersion = 0,
    kCreateVideoEncodeAcceleratorProviderMinVersion = 0,
    kCreateGpuMemoryBufferMinVersion = 0,
    kDestroyGpuMemoryBufferMinVersion = 0,
  };
  virtual ~Gpu() {}


  using EstablishGpuChannelCallback = base::OnceCallback<void(int32_t, mojo::ScopedMessagePipeHandle, const gpu::GPUInfo&, const gpu::GpuFeatureInfo&)>;
  virtual void EstablishGpuChannel(EstablishGpuChannelCallback callback) = 0;

  virtual void CreateJpegDecodeAccelerator(::media::mojom::JpegDecodeAcceleratorRequest jda) = 0;

  virtual void CreateVideoEncodeAcceleratorProvider(::media::mojom::VideoEncodeAcceleratorProviderRequest vea_provider) = 0;


  using CreateGpuMemoryBufferCallback = base::OnceCallback<void(const gfx::GpuMemoryBufferHandle&)>;
  virtual void CreateGpuMemoryBuffer(gfx::GpuMemoryBufferId id, const gfx::Size& size, gfx::BufferFormat format, gfx::BufferUsage usage, CreateGpuMemoryBufferCallback callback) = 0;

  virtual void DestroyGpuMemoryBuffer(gfx::GpuMemoryBufferId id, const ::gpu::SyncToken& sync_token) = 0;
};
class  GpuInterceptorForTesting : public Gpu {
  virtual Gpu* GetForwardingInterface() = 0;
  void EstablishGpuChannel(EstablishGpuChannelCallback callback) override;
  void CreateJpegDecodeAccelerator(::media::mojom::JpegDecodeAcceleratorRequest jda) override;
  void CreateVideoEncodeAcceleratorProvider(::media::mojom::VideoEncodeAcceleratorProviderRequest vea_provider) override;
  void CreateGpuMemoryBuffer(gfx::GpuMemoryBufferId id, const gfx::Size& size, gfx::BufferFormat format, gfx::BufferUsage usage, CreateGpuMemoryBufferCallback callback) override;
  void DestroyGpuMemoryBuffer(gfx::GpuMemoryBufferId id, const ::gpu::SyncToken& sync_token) override;
};
class  GpuAsyncWaiter {
 public:
  explicit GpuAsyncWaiter(Gpu* proxy);
  ~GpuAsyncWaiter();
  void EstablishGpuChannel(
      int32_t* out_client_id, mojo::ScopedMessagePipeHandle* out_channel_handle, gpu::GPUInfo* out_gpu_info, gpu::GpuFeatureInfo* out_gpu_feature_info);
  void CreateGpuMemoryBuffer(
      gfx::GpuMemoryBufferId id, const gfx::Size& size, gfx::BufferFormat format, gfx::BufferUsage usage, gfx::GpuMemoryBufferHandle* out_buffer_handle);

 private:
  Gpu* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(GpuAsyncWaiter);
};

class  GpuProxy
    : public Gpu {
 public:
  explicit GpuProxy(mojo::MessageReceiverWithResponder* receiver);
  void EstablishGpuChannel(EstablishGpuChannelCallback callback) final;
  void CreateJpegDecodeAccelerator(::media::mojom::JpegDecodeAcceleratorRequest jda) final;
  void CreateVideoEncodeAcceleratorProvider(::media::mojom::VideoEncodeAcceleratorProviderRequest vea_provider) final;
  void CreateGpuMemoryBuffer(gfx::GpuMemoryBufferId id, const gfx::Size& size, gfx::BufferFormat format, gfx::BufferUsage usage, CreateGpuMemoryBufferCallback callback) final;
  void DestroyGpuMemoryBuffer(gfx::GpuMemoryBufferId id, const ::gpu::SyncToken& sync_token) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  GpuStubDispatch {
 public:
  static bool Accept(Gpu* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      Gpu* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<Gpu>>
class GpuStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  GpuStub() {}
  ~GpuStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return GpuStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return GpuStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  GpuRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  GpuResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace ui

namespace mojo {

}  // namespace mojo

#endif  // SERVICES_UI_PUBLIC_INTERFACES_GPU_MOJOM_H_