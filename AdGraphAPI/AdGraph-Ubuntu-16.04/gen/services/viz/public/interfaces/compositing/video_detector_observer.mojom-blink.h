// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_VIDEO_DETECTOR_OBSERVER_MOJOM_BLINK_H_
#define SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_VIDEO_DETECTOR_OBSERVER_MOJOM_BLINK_H_

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
#include "services/viz/public/interfaces/compositing/video_detector_observer.mojom-shared.h"

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
class VideoDetectorObserver;
using VideoDetectorObserverPtr = mojo::InterfacePtr<VideoDetectorObserver>;
using RevocableVideoDetectorObserverPtr = ::blink::RevocableInterfacePtr<VideoDetectorObserver>;
using VideoDetectorObserverPtrInfo = mojo::InterfacePtrInfo<VideoDetectorObserver>;
using ThreadSafeVideoDetectorObserverPtr =
    mojo::ThreadSafeInterfacePtr<VideoDetectorObserver>;
using VideoDetectorObserverRequest = mojo::InterfaceRequest<VideoDetectorObserver>;
using VideoDetectorObserverAssociatedPtr =
    mojo::AssociatedInterfacePtr<VideoDetectorObserver>;
using ThreadSafeVideoDetectorObserverAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<VideoDetectorObserver>;
using VideoDetectorObserverAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<VideoDetectorObserver>;
using VideoDetectorObserverAssociatedRequest =
    mojo::AssociatedInterfaceRequest<VideoDetectorObserver>;


class VideoDetectorObserverProxy;

template <typename ImplRefTraits>
class VideoDetectorObserverStub;

class VideoDetectorObserverRequestValidator;

class  VideoDetectorObserver
    : public VideoDetectorObserverInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = VideoDetectorObserverProxy;

  template <typename ImplRefTraits>
  using Stub_ = VideoDetectorObserverStub<ImplRefTraits>;

  using RequestValidator_ = VideoDetectorObserverRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kOnVideoActivityStartedMinVersion = 0,
    kOnVideoActivityEndedMinVersion = 0,
  };
  virtual ~VideoDetectorObserver() {}

  virtual void OnVideoActivityStarted() = 0;

  virtual void OnVideoActivityEnded() = 0;
};
class  VideoDetectorObserverInterceptorForTesting : public VideoDetectorObserver {
  virtual VideoDetectorObserver* GetForwardingInterface() = 0;
  void OnVideoActivityStarted() override;
  void OnVideoActivityEnded() override;
};
class  VideoDetectorObserverAsyncWaiter {
 public:
  explicit VideoDetectorObserverAsyncWaiter(VideoDetectorObserver* proxy);
  ~VideoDetectorObserverAsyncWaiter();

 private:
  VideoDetectorObserver* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(VideoDetectorObserverAsyncWaiter);
};

class  VideoDetectorObserverProxy
    : public VideoDetectorObserver {
 public:
  explicit VideoDetectorObserverProxy(mojo::MessageReceiverWithResponder* receiver);
  void OnVideoActivityStarted() final;
  void OnVideoActivityEnded() final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  VideoDetectorObserverStubDispatch {
 public:
  static bool Accept(VideoDetectorObserver* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      VideoDetectorObserver* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<VideoDetectorObserver>>
class VideoDetectorObserverStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  VideoDetectorObserverStub() {}
  ~VideoDetectorObserverStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return VideoDetectorObserverStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return VideoDetectorObserverStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  VideoDetectorObserverRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace blink
}  // namespace mojom
}  // namespace viz

namespace mojo {

}  // namespace mojo

#endif  // SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_VIDEO_DETECTOR_OBSERVER_MOJOM_BLINK_H_