// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_VIZ_PRIVILEGED_INTERFACES_COMPOSITING_FRAME_SINK_VIDEO_CAPTURE_MOJOM_H_
#define SERVICES_VIZ_PRIVILEGED_INTERFACES_COMPOSITING_FRAME_SINK_VIDEO_CAPTURE_MOJOM_H_

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
#include "services/viz/privileged/interfaces/compositing/frame_sink_video_capture.mojom-shared.h"
#include "media/capture/mojom/video_capture_types.mojom.h"
#include "media/mojo/interfaces/media_types.mojom.h"
#include "mojo/public/mojom/base/time.mojom.h"
#include "services/viz/public/interfaces/compositing/frame_sink_id.mojom.h"
#include "ui/gfx/geometry/mojo/geometry.mojom.h"
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
class FrameSinkVideoConsumerFrameCallbacks;
using FrameSinkVideoConsumerFrameCallbacksPtr = mojo::InterfacePtr<FrameSinkVideoConsumerFrameCallbacks>;
using FrameSinkVideoConsumerFrameCallbacksPtrInfo = mojo::InterfacePtrInfo<FrameSinkVideoConsumerFrameCallbacks>;
using ThreadSafeFrameSinkVideoConsumerFrameCallbacksPtr =
    mojo::ThreadSafeInterfacePtr<FrameSinkVideoConsumerFrameCallbacks>;
using FrameSinkVideoConsumerFrameCallbacksRequest = mojo::InterfaceRequest<FrameSinkVideoConsumerFrameCallbacks>;
using FrameSinkVideoConsumerFrameCallbacksAssociatedPtr =
    mojo::AssociatedInterfacePtr<FrameSinkVideoConsumerFrameCallbacks>;
using ThreadSafeFrameSinkVideoConsumerFrameCallbacksAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<FrameSinkVideoConsumerFrameCallbacks>;
using FrameSinkVideoConsumerFrameCallbacksAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<FrameSinkVideoConsumerFrameCallbacks>;
using FrameSinkVideoConsumerFrameCallbacksAssociatedRequest =
    mojo::AssociatedInterfaceRequest<FrameSinkVideoConsumerFrameCallbacks>;

class FrameSinkVideoConsumer;
using FrameSinkVideoConsumerPtr = mojo::InterfacePtr<FrameSinkVideoConsumer>;
using FrameSinkVideoConsumerPtrInfo = mojo::InterfacePtrInfo<FrameSinkVideoConsumer>;
using ThreadSafeFrameSinkVideoConsumerPtr =
    mojo::ThreadSafeInterfacePtr<FrameSinkVideoConsumer>;
using FrameSinkVideoConsumerRequest = mojo::InterfaceRequest<FrameSinkVideoConsumer>;
using FrameSinkVideoConsumerAssociatedPtr =
    mojo::AssociatedInterfacePtr<FrameSinkVideoConsumer>;
using ThreadSafeFrameSinkVideoConsumerAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<FrameSinkVideoConsumer>;
using FrameSinkVideoConsumerAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<FrameSinkVideoConsumer>;
using FrameSinkVideoConsumerAssociatedRequest =
    mojo::AssociatedInterfaceRequest<FrameSinkVideoConsumer>;

class FrameSinkVideoCapturer;
using FrameSinkVideoCapturerPtr = mojo::InterfacePtr<FrameSinkVideoCapturer>;
using FrameSinkVideoCapturerPtrInfo = mojo::InterfacePtrInfo<FrameSinkVideoCapturer>;
using ThreadSafeFrameSinkVideoCapturerPtr =
    mojo::ThreadSafeInterfacePtr<FrameSinkVideoCapturer>;
using FrameSinkVideoCapturerRequest = mojo::InterfaceRequest<FrameSinkVideoCapturer>;
using FrameSinkVideoCapturerAssociatedPtr =
    mojo::AssociatedInterfacePtr<FrameSinkVideoCapturer>;
using ThreadSafeFrameSinkVideoCapturerAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<FrameSinkVideoCapturer>;
using FrameSinkVideoCapturerAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<FrameSinkVideoCapturer>;
using FrameSinkVideoCapturerAssociatedRequest =
    mojo::AssociatedInterfaceRequest<FrameSinkVideoCapturer>;


class FrameSinkVideoConsumerFrameCallbacksProxy;

template <typename ImplRefTraits>
class FrameSinkVideoConsumerFrameCallbacksStub;

class FrameSinkVideoConsumerFrameCallbacksRequestValidator;

class  FrameSinkVideoConsumerFrameCallbacks
    : public FrameSinkVideoConsumerFrameCallbacksInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = FrameSinkVideoConsumerFrameCallbacksProxy;

  template <typename ImplRefTraits>
  using Stub_ = FrameSinkVideoConsumerFrameCallbacksStub<ImplRefTraits>;

  using RequestValidator_ = FrameSinkVideoConsumerFrameCallbacksRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kDoneMinVersion = 0,
    kProvideFeedbackMinVersion = 0,
  };
  virtual ~FrameSinkVideoConsumerFrameCallbacks() {}

  virtual void Done() = 0;

  virtual void ProvideFeedback(double utilization) = 0;
};
class  FrameSinkVideoConsumerFrameCallbacksInterceptorForTesting : public FrameSinkVideoConsumerFrameCallbacks {
  virtual FrameSinkVideoConsumerFrameCallbacks* GetForwardingInterface() = 0;
  void Done() override;
  void ProvideFeedback(double utilization) override;
};
class  FrameSinkVideoConsumerFrameCallbacksAsyncWaiter {
 public:
  explicit FrameSinkVideoConsumerFrameCallbacksAsyncWaiter(FrameSinkVideoConsumerFrameCallbacks* proxy);
  ~FrameSinkVideoConsumerFrameCallbacksAsyncWaiter();

 private:
  FrameSinkVideoConsumerFrameCallbacks* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(FrameSinkVideoConsumerFrameCallbacksAsyncWaiter);
};

class FrameSinkVideoConsumerProxy;

template <typename ImplRefTraits>
class FrameSinkVideoConsumerStub;

class FrameSinkVideoConsumerRequestValidator;

class  FrameSinkVideoConsumer
    : public FrameSinkVideoConsumerInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = FrameSinkVideoConsumerProxy;

  template <typename ImplRefTraits>
  using Stub_ = FrameSinkVideoConsumerStub<ImplRefTraits>;

  using RequestValidator_ = FrameSinkVideoConsumerRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kOnFrameCapturedMinVersion = 0,
    kOnTargetLostMinVersion = 0,
    kOnStoppedMinVersion = 0,
  };
  virtual ~FrameSinkVideoConsumer() {}

  virtual void OnFrameCaptured(mojo::ScopedSharedBufferHandle buffer, uint32_t buffer_size, ::media::mojom::VideoFrameInfoPtr info, const gfx::Rect& update_rect, const gfx::Rect& content_rect, FrameSinkVideoConsumerFrameCallbacksPtr callbacks) = 0;

  virtual void OnTargetLost(const viz::FrameSinkId& frame_sink_id) = 0;

  virtual void OnStopped() = 0;
};
class  FrameSinkVideoConsumerInterceptorForTesting : public FrameSinkVideoConsumer {
  virtual FrameSinkVideoConsumer* GetForwardingInterface() = 0;
  void OnFrameCaptured(mojo::ScopedSharedBufferHandle buffer, uint32_t buffer_size, ::media::mojom::VideoFrameInfoPtr info, const gfx::Rect& update_rect, const gfx::Rect& content_rect, FrameSinkVideoConsumerFrameCallbacksPtr callbacks) override;
  void OnTargetLost(const viz::FrameSinkId& frame_sink_id) override;
  void OnStopped() override;
};
class  FrameSinkVideoConsumerAsyncWaiter {
 public:
  explicit FrameSinkVideoConsumerAsyncWaiter(FrameSinkVideoConsumer* proxy);
  ~FrameSinkVideoConsumerAsyncWaiter();

 private:
  FrameSinkVideoConsumer* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(FrameSinkVideoConsumerAsyncWaiter);
};

class FrameSinkVideoCapturerProxy;

template <typename ImplRefTraits>
class FrameSinkVideoCapturerStub;

class FrameSinkVideoCapturerRequestValidator;

class  FrameSinkVideoCapturer
    : public FrameSinkVideoCapturerInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = FrameSinkVideoCapturerProxy;

  template <typename ImplRefTraits>
  using Stub_ = FrameSinkVideoCapturerStub<ImplRefTraits>;

  using RequestValidator_ = FrameSinkVideoCapturerRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kSetFormatMinVersion = 0,
    kSetMinCapturePeriodMinVersion = 0,
    kSetMinSizeChangePeriodMinVersion = 0,
    kSetResolutionConstraintsMinVersion = 0,
    kSetAutoThrottlingEnabledMinVersion = 0,
    kChangeTargetMinVersion = 0,
    kStartMinVersion = 0,
    kStopMinVersion = 0,
    kRequestRefreshFrameMinVersion = 0,
  };
  virtual ~FrameSinkVideoCapturer() {}

  virtual void SetFormat(media::VideoPixelFormat format, media::ColorSpace color_space) = 0;

  virtual void SetMinCapturePeriod(base::TimeDelta min_period) = 0;

  virtual void SetMinSizeChangePeriod(base::TimeDelta min_period) = 0;

  virtual void SetResolutionConstraints(const gfx::Size& min_size, const gfx::Size& max_size, bool use_fixed_aspect_ratio) = 0;

  virtual void SetAutoThrottlingEnabled(bool enabled) = 0;

  virtual void ChangeTarget(const viz::FrameSinkId& frame_sink_id) = 0;

  virtual void Start(FrameSinkVideoConsumerPtr consumer) = 0;

  virtual void Stop() = 0;

  virtual void RequestRefreshFrame() = 0;
};
class  FrameSinkVideoCapturerInterceptorForTesting : public FrameSinkVideoCapturer {
  virtual FrameSinkVideoCapturer* GetForwardingInterface() = 0;
  void SetFormat(media::VideoPixelFormat format, media::ColorSpace color_space) override;
  void SetMinCapturePeriod(base::TimeDelta min_period) override;
  void SetMinSizeChangePeriod(base::TimeDelta min_period) override;
  void SetResolutionConstraints(const gfx::Size& min_size, const gfx::Size& max_size, bool use_fixed_aspect_ratio) override;
  void SetAutoThrottlingEnabled(bool enabled) override;
  void ChangeTarget(const viz::FrameSinkId& frame_sink_id) override;
  void Start(FrameSinkVideoConsumerPtr consumer) override;
  void Stop() override;
  void RequestRefreshFrame() override;
};
class  FrameSinkVideoCapturerAsyncWaiter {
 public:
  explicit FrameSinkVideoCapturerAsyncWaiter(FrameSinkVideoCapturer* proxy);
  ~FrameSinkVideoCapturerAsyncWaiter();

 private:
  FrameSinkVideoCapturer* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(FrameSinkVideoCapturerAsyncWaiter);
};

class  FrameSinkVideoConsumerFrameCallbacksProxy
    : public FrameSinkVideoConsumerFrameCallbacks {
 public:
  explicit FrameSinkVideoConsumerFrameCallbacksProxy(mojo::MessageReceiverWithResponder* receiver);
  void Done() final;
  void ProvideFeedback(double utilization) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class  FrameSinkVideoConsumerProxy
    : public FrameSinkVideoConsumer {
 public:
  explicit FrameSinkVideoConsumerProxy(mojo::MessageReceiverWithResponder* receiver);
  void OnFrameCaptured(mojo::ScopedSharedBufferHandle buffer, uint32_t buffer_size, ::media::mojom::VideoFrameInfoPtr info, const gfx::Rect& update_rect, const gfx::Rect& content_rect, FrameSinkVideoConsumerFrameCallbacksPtr callbacks) final;
  void OnTargetLost(const viz::FrameSinkId& frame_sink_id) final;
  void OnStopped() final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class  FrameSinkVideoCapturerProxy
    : public FrameSinkVideoCapturer {
 public:
  explicit FrameSinkVideoCapturerProxy(mojo::MessageReceiverWithResponder* receiver);
  void SetFormat(media::VideoPixelFormat format, media::ColorSpace color_space) final;
  void SetMinCapturePeriod(base::TimeDelta min_period) final;
  void SetMinSizeChangePeriod(base::TimeDelta min_period) final;
  void SetResolutionConstraints(const gfx::Size& min_size, const gfx::Size& max_size, bool use_fixed_aspect_ratio) final;
  void SetAutoThrottlingEnabled(bool enabled) final;
  void ChangeTarget(const viz::FrameSinkId& frame_sink_id) final;
  void Start(FrameSinkVideoConsumerPtr consumer) final;
  void Stop() final;
  void RequestRefreshFrame() final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  FrameSinkVideoConsumerFrameCallbacksStubDispatch {
 public:
  static bool Accept(FrameSinkVideoConsumerFrameCallbacks* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      FrameSinkVideoConsumerFrameCallbacks* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<FrameSinkVideoConsumerFrameCallbacks>>
class FrameSinkVideoConsumerFrameCallbacksStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  FrameSinkVideoConsumerFrameCallbacksStub() {}
  ~FrameSinkVideoConsumerFrameCallbacksStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return FrameSinkVideoConsumerFrameCallbacksStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return FrameSinkVideoConsumerFrameCallbacksStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  FrameSinkVideoConsumerStubDispatch {
 public:
  static bool Accept(FrameSinkVideoConsumer* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      FrameSinkVideoConsumer* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<FrameSinkVideoConsumer>>
class FrameSinkVideoConsumerStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  FrameSinkVideoConsumerStub() {}
  ~FrameSinkVideoConsumerStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return FrameSinkVideoConsumerStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return FrameSinkVideoConsumerStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  FrameSinkVideoCapturerStubDispatch {
 public:
  static bool Accept(FrameSinkVideoCapturer* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      FrameSinkVideoCapturer* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<FrameSinkVideoCapturer>>
class FrameSinkVideoCapturerStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  FrameSinkVideoCapturerStub() {}
  ~FrameSinkVideoCapturerStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return FrameSinkVideoCapturerStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return FrameSinkVideoCapturerStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  FrameSinkVideoConsumerFrameCallbacksRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  FrameSinkVideoConsumerRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  FrameSinkVideoCapturerRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace viz

namespace mojo {

}  // namespace mojo

#endif  // SERVICES_VIZ_PRIVILEGED_INTERFACES_COMPOSITING_FRAME_SINK_VIDEO_CAPTURE_MOJOM_H_