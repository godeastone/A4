// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_UI_PUBLIC_INTERFACES_VIDEO_DETECTOR_MOJOM_H_
#define SERVICES_UI_PUBLIC_INTERFACES_VIDEO_DETECTOR_MOJOM_H_

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
#include "services/ui/public/interfaces/video_detector.mojom-shared.h"
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


namespace ui {
namespace mojom {
class VideoDetector;
using VideoDetectorPtr = mojo::InterfacePtr<VideoDetector>;
using VideoDetectorPtrInfo = mojo::InterfacePtrInfo<VideoDetector>;
using ThreadSafeVideoDetectorPtr =
    mojo::ThreadSafeInterfacePtr<VideoDetector>;
using VideoDetectorRequest = mojo::InterfaceRequest<VideoDetector>;
using VideoDetectorAssociatedPtr =
    mojo::AssociatedInterfacePtr<VideoDetector>;
using ThreadSafeVideoDetectorAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<VideoDetector>;
using VideoDetectorAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<VideoDetector>;
using VideoDetectorAssociatedRequest =
    mojo::AssociatedInterfaceRequest<VideoDetector>;


class VideoDetectorProxy;

template <typename ImplRefTraits>
class VideoDetectorStub;

class VideoDetectorRequestValidator;

class  VideoDetector
    : public VideoDetectorInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = VideoDetectorProxy;

  template <typename ImplRefTraits>
  using Stub_ = VideoDetectorStub<ImplRefTraits>;

  using RequestValidator_ = VideoDetectorRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kAddObserverMinVersion = 0,
  };
  virtual ~VideoDetector() {}

  virtual void AddObserver(::viz::mojom::VideoDetectorObserverPtr observer) = 0;
};
class  VideoDetectorInterceptorForTesting : public VideoDetector {
  virtual VideoDetector* GetForwardingInterface() = 0;
  void AddObserver(::viz::mojom::VideoDetectorObserverPtr observer) override;
};
class  VideoDetectorAsyncWaiter {
 public:
  explicit VideoDetectorAsyncWaiter(VideoDetector* proxy);
  ~VideoDetectorAsyncWaiter();

 private:
  VideoDetector* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(VideoDetectorAsyncWaiter);
};

class  VideoDetectorProxy
    : public VideoDetector {
 public:
  explicit VideoDetectorProxy(mojo::MessageReceiverWithResponder* receiver);
  void AddObserver(::viz::mojom::VideoDetectorObserverPtr observer) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  VideoDetectorStubDispatch {
 public:
  static bool Accept(VideoDetector* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      VideoDetector* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<VideoDetector>>
class VideoDetectorStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  VideoDetectorStub() {}
  ~VideoDetectorStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return VideoDetectorStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return VideoDetectorStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  VideoDetectorRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace ui

namespace mojo {

}  // namespace mojo

#endif  // SERVICES_UI_PUBLIC_INTERFACES_VIDEO_DETECTOR_MOJOM_H_