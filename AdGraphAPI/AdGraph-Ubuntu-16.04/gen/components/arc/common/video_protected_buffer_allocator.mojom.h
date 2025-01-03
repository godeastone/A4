// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_ARC_COMMON_VIDEO_PROTECTED_BUFFER_ALLOCATOR_MOJOM_H_
#define COMPONENTS_ARC_COMMON_VIDEO_PROTECTED_BUFFER_ALLOCATOR_MOJOM_H_

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
#include "components/arc/common/video_protected_buffer_allocator.mojom-shared.h"
#include "components/arc/common/video_common.mojom.h"
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


namespace arc {
namespace mojom {
class VideoProtectedBufferAllocator;
using VideoProtectedBufferAllocatorPtr = mojo::InterfacePtr<VideoProtectedBufferAllocator>;
using VideoProtectedBufferAllocatorPtrInfo = mojo::InterfacePtrInfo<VideoProtectedBufferAllocator>;
using ThreadSafeVideoProtectedBufferAllocatorPtr =
    mojo::ThreadSafeInterfacePtr<VideoProtectedBufferAllocator>;
using VideoProtectedBufferAllocatorRequest = mojo::InterfaceRequest<VideoProtectedBufferAllocator>;
using VideoProtectedBufferAllocatorAssociatedPtr =
    mojo::AssociatedInterfacePtr<VideoProtectedBufferAllocator>;
using ThreadSafeVideoProtectedBufferAllocatorAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<VideoProtectedBufferAllocator>;
using VideoProtectedBufferAllocatorAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<VideoProtectedBufferAllocator>;
using VideoProtectedBufferAllocatorAssociatedRequest =
    mojo::AssociatedInterfaceRequest<VideoProtectedBufferAllocator>;


class VideoProtectedBufferAllocatorProxy;

template <typename ImplRefTraits>
class VideoProtectedBufferAllocatorStub;

class VideoProtectedBufferAllocatorRequestValidator;
class VideoProtectedBufferAllocatorResponseValidator;

class  VideoProtectedBufferAllocator
    : public VideoProtectedBufferAllocatorInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = VideoProtectedBufferAllocatorProxy;

  template <typename ImplRefTraits>
  using Stub_ = VideoProtectedBufferAllocatorStub<ImplRefTraits>;

  using RequestValidator_ = VideoProtectedBufferAllocatorRequestValidator;
  using ResponseValidator_ = VideoProtectedBufferAllocatorResponseValidator;
  enum MethodMinVersions : uint32_t {
    kAllocateProtectedSharedMemoryMinVersion = 0,
    kAllocateProtectedNativePixmapMinVersion = 0,
    kReleaseProtectedBufferMinVersion = 0,
  };
  virtual ~VideoProtectedBufferAllocator() {}


  using AllocateProtectedSharedMemoryCallback = base::OnceCallback<void(bool)>;
  virtual void AllocateProtectedSharedMemory(mojo::ScopedHandle handle_fd, uint64_t size, AllocateProtectedSharedMemoryCallback callback) = 0;


  using AllocateProtectedNativePixmapCallback = base::OnceCallback<void(bool)>;
  virtual void AllocateProtectedNativePixmap(mojo::ScopedHandle handle_fd, ::arc::mojom::HalPixelFormat pixel_format, const gfx::Size& picture_size, AllocateProtectedNativePixmapCallback callback) = 0;

  virtual void ReleaseProtectedBuffer(mojo::ScopedHandle handle_fd) = 0;
};
class  VideoProtectedBufferAllocatorInterceptorForTesting : public VideoProtectedBufferAllocator {
  virtual VideoProtectedBufferAllocator* GetForwardingInterface() = 0;
  void AllocateProtectedSharedMemory(mojo::ScopedHandle handle_fd, uint64_t size, AllocateProtectedSharedMemoryCallback callback) override;
  void AllocateProtectedNativePixmap(mojo::ScopedHandle handle_fd, ::arc::mojom::HalPixelFormat pixel_format, const gfx::Size& picture_size, AllocateProtectedNativePixmapCallback callback) override;
  void ReleaseProtectedBuffer(mojo::ScopedHandle handle_fd) override;
};
class  VideoProtectedBufferAllocatorAsyncWaiter {
 public:
  explicit VideoProtectedBufferAllocatorAsyncWaiter(VideoProtectedBufferAllocator* proxy);
  ~VideoProtectedBufferAllocatorAsyncWaiter();
  void AllocateProtectedSharedMemory(
      mojo::ScopedHandle handle_fd, uint64_t size, bool* out_result);
  void AllocateProtectedNativePixmap(
      mojo::ScopedHandle handle_fd, ::arc::mojom::HalPixelFormat pixel_format, const gfx::Size& picture_size, bool* out_result);

 private:
  VideoProtectedBufferAllocator* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(VideoProtectedBufferAllocatorAsyncWaiter);
};

class  VideoProtectedBufferAllocatorProxy
    : public VideoProtectedBufferAllocator {
 public:
  explicit VideoProtectedBufferAllocatorProxy(mojo::MessageReceiverWithResponder* receiver);
  void AllocateProtectedSharedMemory(mojo::ScopedHandle handle_fd, uint64_t size, AllocateProtectedSharedMemoryCallback callback) final;
  void AllocateProtectedNativePixmap(mojo::ScopedHandle handle_fd, ::arc::mojom::HalPixelFormat pixel_format, const gfx::Size& picture_size, AllocateProtectedNativePixmapCallback callback) final;
  void ReleaseProtectedBuffer(mojo::ScopedHandle handle_fd) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  VideoProtectedBufferAllocatorStubDispatch {
 public:
  static bool Accept(VideoProtectedBufferAllocator* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      VideoProtectedBufferAllocator* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<VideoProtectedBufferAllocator>>
class VideoProtectedBufferAllocatorStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  VideoProtectedBufferAllocatorStub() {}
  ~VideoProtectedBufferAllocatorStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return VideoProtectedBufferAllocatorStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return VideoProtectedBufferAllocatorStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  VideoProtectedBufferAllocatorRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  VideoProtectedBufferAllocatorResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace arc

namespace mojo {

}  // namespace mojo

#endif  // COMPONENTS_ARC_COMMON_VIDEO_PROTECTED_BUFFER_ALLOCATOR_MOJOM_H_