// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_ARC_COMMON_VIDEO_MOJOM_H_
#define COMPONENTS_ARC_COMMON_VIDEO_MOJOM_H_

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
#include "components/arc/common/video.mojom-shared.h"
#include "components/arc/common/video_decode_accelerator.mojom.h"
#include "components/arc/common/video_encode_accelerator.mojom.h"
#include "components/arc/common/video_protected_buffer_allocator.mojom.h"
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
class VideoHost;
using VideoHostPtr = mojo::InterfacePtr<VideoHost>;
using VideoHostPtrInfo = mojo::InterfacePtrInfo<VideoHost>;
using ThreadSafeVideoHostPtr =
    mojo::ThreadSafeInterfacePtr<VideoHost>;
using VideoHostRequest = mojo::InterfaceRequest<VideoHost>;
using VideoHostAssociatedPtr =
    mojo::AssociatedInterfacePtr<VideoHost>;
using ThreadSafeVideoHostAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<VideoHost>;
using VideoHostAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<VideoHost>;
using VideoHostAssociatedRequest =
    mojo::AssociatedInterfaceRequest<VideoHost>;

class VideoInstance;
using VideoInstancePtr = mojo::InterfacePtr<VideoInstance>;
using VideoInstancePtrInfo = mojo::InterfacePtrInfo<VideoInstance>;
using ThreadSafeVideoInstancePtr =
    mojo::ThreadSafeInterfacePtr<VideoInstance>;
using VideoInstanceRequest = mojo::InterfaceRequest<VideoInstance>;
using VideoInstanceAssociatedPtr =
    mojo::AssociatedInterfacePtr<VideoInstance>;
using ThreadSafeVideoInstanceAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<VideoInstance>;
using VideoInstanceAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<VideoInstance>;
using VideoInstanceAssociatedRequest =
    mojo::AssociatedInterfaceRequest<VideoInstance>;

class VideoAcceleratorFactory;
using VideoAcceleratorFactoryPtr = mojo::InterfacePtr<VideoAcceleratorFactory>;
using VideoAcceleratorFactoryPtrInfo = mojo::InterfacePtrInfo<VideoAcceleratorFactory>;
using ThreadSafeVideoAcceleratorFactoryPtr =
    mojo::ThreadSafeInterfacePtr<VideoAcceleratorFactory>;
using VideoAcceleratorFactoryRequest = mojo::InterfaceRequest<VideoAcceleratorFactory>;
using VideoAcceleratorFactoryAssociatedPtr =
    mojo::AssociatedInterfacePtr<VideoAcceleratorFactory>;
using ThreadSafeVideoAcceleratorFactoryAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<VideoAcceleratorFactory>;
using VideoAcceleratorFactoryAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<VideoAcceleratorFactory>;
using VideoAcceleratorFactoryAssociatedRequest =
    mojo::AssociatedInterfaceRequest<VideoAcceleratorFactory>;


class VideoHostProxy;

template <typename ImplRefTraits>
class VideoHostStub;

class VideoHostRequestValidator;
class VideoHostResponseValidator;

class  VideoHost
    : public VideoHostInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 4;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = VideoHostProxy;

  template <typename ImplRefTraits>
  using Stub_ = VideoHostStub<ImplRefTraits>;

  using RequestValidator_ = VideoHostRequestValidator;
  using ResponseValidator_ = VideoHostResponseValidator;
  enum MethodMinVersions : uint32_t {
    kOnBootstrapVideoAcceleratorFactoryMinVersion = 4,
  };
  virtual ~VideoHost() {}


  using OnBootstrapVideoAcceleratorFactoryCallback = base::OnceCallback<void(mojo::ScopedHandle, const std::string&)>;
  virtual void OnBootstrapVideoAcceleratorFactory(OnBootstrapVideoAcceleratorFactoryCallback callback) = 0;
};
class  VideoHostInterceptorForTesting : public VideoHost {
  virtual VideoHost* GetForwardingInterface() = 0;
  void OnBootstrapVideoAcceleratorFactory(OnBootstrapVideoAcceleratorFactoryCallback callback) override;
};
class  VideoHostAsyncWaiter {
 public:
  explicit VideoHostAsyncWaiter(VideoHost* proxy);
  ~VideoHostAsyncWaiter();
  void OnBootstrapVideoAcceleratorFactory(
      mojo::ScopedHandle* out_channel_handle, std::string* out_token);

 private:
  VideoHost* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(VideoHostAsyncWaiter);
};

class VideoInstanceProxy;

template <typename ImplRefTraits>
class VideoInstanceStub;

class VideoInstanceRequestValidator;
class VideoInstanceResponseValidator;

class  VideoInstance
    : public VideoInstanceInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 5;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = VideoInstanceProxy;

  template <typename ImplRefTraits>
  using Stub_ = VideoInstanceStub<ImplRefTraits>;

  using RequestValidator_ = VideoInstanceRequestValidator;
  using ResponseValidator_ = VideoInstanceResponseValidator;
  enum MethodMinVersions : uint32_t {
    kInitDeprecatedMinVersion = 0,
    kInitMinVersion = 5,
  };
  virtual ~VideoInstance() {}

  virtual void InitDeprecated(VideoHostPtr host_ptr) = 0;


  using InitCallback = base::OnceCallback<void()>;
  virtual void Init(VideoHostPtr host_ptr, InitCallback callback) = 0;
};
class  VideoInstanceInterceptorForTesting : public VideoInstance {
  virtual VideoInstance* GetForwardingInterface() = 0;
  void InitDeprecated(VideoHostPtr host_ptr) override;
  void Init(VideoHostPtr host_ptr, InitCallback callback) override;
};
class  VideoInstanceAsyncWaiter {
 public:
  explicit VideoInstanceAsyncWaiter(VideoInstance* proxy);
  ~VideoInstanceAsyncWaiter();
  void Init(
      VideoHostPtr host_ptr);

 private:
  VideoInstance* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(VideoInstanceAsyncWaiter);
};

class VideoAcceleratorFactoryProxy;

template <typename ImplRefTraits>
class VideoAcceleratorFactoryStub;

class VideoAcceleratorFactoryRequestValidator;

class  VideoAcceleratorFactory
    : public VideoAcceleratorFactoryInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 6;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = VideoAcceleratorFactoryProxy;

  template <typename ImplRefTraits>
  using Stub_ = VideoAcceleratorFactoryStub<ImplRefTraits>;

  using RequestValidator_ = VideoAcceleratorFactoryRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kCreateEncodeAcceleratorMinVersion = 1,
    kCreateDecodeAcceleratorMinVersion = 6,
    kCreateProtectedBufferAllocatorMinVersion = 0,
  };
  virtual ~VideoAcceleratorFactory() {}

  virtual void CreateEncodeAccelerator(::arc::mojom::VideoEncodeAcceleratorRequest video_encoder) = 0;

  virtual void CreateDecodeAccelerator(::arc::mojom::VideoDecodeAcceleratorRequest video_decoder) = 0;

  virtual void CreateProtectedBufferAllocator(::arc::mojom::VideoProtectedBufferAllocatorRequest video_protected_buffer_allocator) = 0;
};
class  VideoAcceleratorFactoryInterceptorForTesting : public VideoAcceleratorFactory {
  virtual VideoAcceleratorFactory* GetForwardingInterface() = 0;
  void CreateEncodeAccelerator(::arc::mojom::VideoEncodeAcceleratorRequest video_encoder) override;
  void CreateDecodeAccelerator(::arc::mojom::VideoDecodeAcceleratorRequest video_decoder) override;
  void CreateProtectedBufferAllocator(::arc::mojom::VideoProtectedBufferAllocatorRequest video_protected_buffer_allocator) override;
};
class  VideoAcceleratorFactoryAsyncWaiter {
 public:
  explicit VideoAcceleratorFactoryAsyncWaiter(VideoAcceleratorFactory* proxy);
  ~VideoAcceleratorFactoryAsyncWaiter();

 private:
  VideoAcceleratorFactory* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(VideoAcceleratorFactoryAsyncWaiter);
};

class  VideoHostProxy
    : public VideoHost {
 public:
  explicit VideoHostProxy(mojo::MessageReceiverWithResponder* receiver);
  void OnBootstrapVideoAcceleratorFactory(OnBootstrapVideoAcceleratorFactoryCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class  VideoInstanceProxy
    : public VideoInstance {
 public:
  explicit VideoInstanceProxy(mojo::MessageReceiverWithResponder* receiver);
  void InitDeprecated(VideoHostPtr host_ptr) final;
  void Init(VideoHostPtr host_ptr, InitCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class  VideoAcceleratorFactoryProxy
    : public VideoAcceleratorFactory {
 public:
  explicit VideoAcceleratorFactoryProxy(mojo::MessageReceiverWithResponder* receiver);
  void CreateEncodeAccelerator(::arc::mojom::VideoEncodeAcceleratorRequest video_encoder) final;
  void CreateDecodeAccelerator(::arc::mojom::VideoDecodeAcceleratorRequest video_decoder) final;
  void CreateProtectedBufferAllocator(::arc::mojom::VideoProtectedBufferAllocatorRequest video_protected_buffer_allocator) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  VideoHostStubDispatch {
 public:
  static bool Accept(VideoHost* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      VideoHost* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<VideoHost>>
class VideoHostStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  VideoHostStub() {}
  ~VideoHostStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return VideoHostStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return VideoHostStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  VideoInstanceStubDispatch {
 public:
  static bool Accept(VideoInstance* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      VideoInstance* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<VideoInstance>>
class VideoInstanceStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  VideoInstanceStub() {}
  ~VideoInstanceStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return VideoInstanceStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return VideoInstanceStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  VideoAcceleratorFactoryStubDispatch {
 public:
  static bool Accept(VideoAcceleratorFactory* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      VideoAcceleratorFactory* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<VideoAcceleratorFactory>>
class VideoAcceleratorFactoryStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  VideoAcceleratorFactoryStub() {}
  ~VideoAcceleratorFactoryStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return VideoAcceleratorFactoryStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return VideoAcceleratorFactoryStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  VideoHostRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  VideoInstanceRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  VideoAcceleratorFactoryRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  VideoHostResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  VideoInstanceResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace arc

namespace mojo {

}  // namespace mojo

#endif  // COMPONENTS_ARC_COMMON_VIDEO_MOJOM_H_