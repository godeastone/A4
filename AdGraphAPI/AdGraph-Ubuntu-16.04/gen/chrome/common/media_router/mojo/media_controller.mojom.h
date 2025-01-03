// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CHROME_COMMON_MEDIA_ROUTER_MOJO_MEDIA_CONTROLLER_MOJOM_H_
#define CHROME_COMMON_MEDIA_ROUTER_MOJO_MEDIA_CONTROLLER_MOJOM_H_

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
#include "chrome/common/media_router/mojo/media_controller.mojom-shared.h"
#include "chrome/common/media_router/mojo/media_status.mojom.h"
#include "mojo/public/mojom/base/time.mojom.h"
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


namespace media_router {
namespace mojom {
class MediaController;
using MediaControllerPtr = mojo::InterfacePtr<MediaController>;
using MediaControllerPtrInfo = mojo::InterfacePtrInfo<MediaController>;
using ThreadSafeMediaControllerPtr =
    mojo::ThreadSafeInterfacePtr<MediaController>;
using MediaControllerRequest = mojo::InterfaceRequest<MediaController>;
using MediaControllerAssociatedPtr =
    mojo::AssociatedInterfacePtr<MediaController>;
using ThreadSafeMediaControllerAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<MediaController>;
using MediaControllerAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<MediaController>;
using MediaControllerAssociatedRequest =
    mojo::AssociatedInterfaceRequest<MediaController>;

class HangoutsMediaRouteController;
using HangoutsMediaRouteControllerPtr = mojo::InterfacePtr<HangoutsMediaRouteController>;
using HangoutsMediaRouteControllerPtrInfo = mojo::InterfacePtrInfo<HangoutsMediaRouteController>;
using ThreadSafeHangoutsMediaRouteControllerPtr =
    mojo::ThreadSafeInterfacePtr<HangoutsMediaRouteController>;
using HangoutsMediaRouteControllerRequest = mojo::InterfaceRequest<HangoutsMediaRouteController>;
using HangoutsMediaRouteControllerAssociatedPtr =
    mojo::AssociatedInterfacePtr<HangoutsMediaRouteController>;
using ThreadSafeHangoutsMediaRouteControllerAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<HangoutsMediaRouteController>;
using HangoutsMediaRouteControllerAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<HangoutsMediaRouteController>;
using HangoutsMediaRouteControllerAssociatedRequest =
    mojo::AssociatedInterfaceRequest<HangoutsMediaRouteController>;


class MediaControllerProxy;

template <typename ImplRefTraits>
class MediaControllerStub;

class MediaControllerRequestValidator;

class  MediaController
    : public MediaControllerInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = MediaControllerProxy;

  template <typename ImplRefTraits>
  using Stub_ = MediaControllerStub<ImplRefTraits>;

  using RequestValidator_ = MediaControllerRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kPlayMinVersion = 0,
    kPauseMinVersion = 0,
    kSetMuteMinVersion = 0,
    kSetVolumeMinVersion = 0,
    kSeekMinVersion = 0,
    kConnectHangoutsMediaRouteControllerMinVersion = 0,
  };
  virtual ~MediaController() {}

  virtual void Play() = 0;

  virtual void Pause() = 0;

  virtual void SetMute(bool mute) = 0;

  virtual void SetVolume(float volume) = 0;

  virtual void Seek(base::TimeDelta time) = 0;

  virtual void ConnectHangoutsMediaRouteController(HangoutsMediaRouteControllerRequest controller_request) = 0;
};
class  MediaControllerInterceptorForTesting : public MediaController {
  virtual MediaController* GetForwardingInterface() = 0;
  void Play() override;
  void Pause() override;
  void SetMute(bool mute) override;
  void SetVolume(float volume) override;
  void Seek(base::TimeDelta time) override;
  void ConnectHangoutsMediaRouteController(HangoutsMediaRouteControllerRequest controller_request) override;
};
class  MediaControllerAsyncWaiter {
 public:
  explicit MediaControllerAsyncWaiter(MediaController* proxy);
  ~MediaControllerAsyncWaiter();

 private:
  MediaController* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(MediaControllerAsyncWaiter);
};

class HangoutsMediaRouteControllerProxy;

template <typename ImplRefTraits>
class HangoutsMediaRouteControllerStub;

class HangoutsMediaRouteControllerRequestValidator;

class  HangoutsMediaRouteController
    : public HangoutsMediaRouteControllerInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = HangoutsMediaRouteControllerProxy;

  template <typename ImplRefTraits>
  using Stub_ = HangoutsMediaRouteControllerStub<ImplRefTraits>;

  using RequestValidator_ = HangoutsMediaRouteControllerRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kSetLocalPresentMinVersion = 0,
  };
  virtual ~HangoutsMediaRouteController() {}

  virtual void SetLocalPresent(bool local_present) = 0;
};
class  HangoutsMediaRouteControllerInterceptorForTesting : public HangoutsMediaRouteController {
  virtual HangoutsMediaRouteController* GetForwardingInterface() = 0;
  void SetLocalPresent(bool local_present) override;
};
class  HangoutsMediaRouteControllerAsyncWaiter {
 public:
  explicit HangoutsMediaRouteControllerAsyncWaiter(HangoutsMediaRouteController* proxy);
  ~HangoutsMediaRouteControllerAsyncWaiter();

 private:
  HangoutsMediaRouteController* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(HangoutsMediaRouteControllerAsyncWaiter);
};

class  MediaControllerProxy
    : public MediaController {
 public:
  explicit MediaControllerProxy(mojo::MessageReceiverWithResponder* receiver);
  void Play() final;
  void Pause() final;
  void SetMute(bool mute) final;
  void SetVolume(float volume) final;
  void Seek(base::TimeDelta time) final;
  void ConnectHangoutsMediaRouteController(HangoutsMediaRouteControllerRequest controller_request) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class  HangoutsMediaRouteControllerProxy
    : public HangoutsMediaRouteController {
 public:
  explicit HangoutsMediaRouteControllerProxy(mojo::MessageReceiverWithResponder* receiver);
  void SetLocalPresent(bool local_present) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  MediaControllerStubDispatch {
 public:
  static bool Accept(MediaController* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      MediaController* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<MediaController>>
class MediaControllerStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  MediaControllerStub() {}
  ~MediaControllerStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return MediaControllerStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return MediaControllerStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  HangoutsMediaRouteControllerStubDispatch {
 public:
  static bool Accept(HangoutsMediaRouteController* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      HangoutsMediaRouteController* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<HangoutsMediaRouteController>>
class HangoutsMediaRouteControllerStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  HangoutsMediaRouteControllerStub() {}
  ~HangoutsMediaRouteControllerStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return HangoutsMediaRouteControllerStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return HangoutsMediaRouteControllerStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  MediaControllerRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  HangoutsMediaRouteControllerRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace media_router

namespace mojo {

}  // namespace mojo

#endif  // CHROME_COMMON_MEDIA_ROUTER_MOJO_MEDIA_CONTROLLER_MOJOM_H_