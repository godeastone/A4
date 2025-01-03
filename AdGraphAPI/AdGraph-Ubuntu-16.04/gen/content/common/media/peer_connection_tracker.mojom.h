// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_MEDIA_PEER_CONNECTION_TRACKER_MOJOM_H_
#define CONTENT_COMMON_MEDIA_PEER_CONNECTION_TRACKER_MOJOM_H_

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
#include "content/common/media/peer_connection_tracker.mojom-shared.h"
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
#include "content/common/content_export.h"


namespace content {
namespace mojom {
class PeerConnectionTrackerHost;
using PeerConnectionTrackerHostPtr = mojo::InterfacePtr<PeerConnectionTrackerHost>;
using PeerConnectionTrackerHostPtrInfo = mojo::InterfacePtrInfo<PeerConnectionTrackerHost>;
using ThreadSafePeerConnectionTrackerHostPtr =
    mojo::ThreadSafeInterfacePtr<PeerConnectionTrackerHost>;
using PeerConnectionTrackerHostRequest = mojo::InterfaceRequest<PeerConnectionTrackerHost>;
using PeerConnectionTrackerHostAssociatedPtr =
    mojo::AssociatedInterfacePtr<PeerConnectionTrackerHost>;
using ThreadSafePeerConnectionTrackerHostAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<PeerConnectionTrackerHost>;
using PeerConnectionTrackerHostAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<PeerConnectionTrackerHost>;
using PeerConnectionTrackerHostAssociatedRequest =
    mojo::AssociatedInterfaceRequest<PeerConnectionTrackerHost>;


class PeerConnectionTrackerHostProxy;

template <typename ImplRefTraits>
class PeerConnectionTrackerHostStub;

class PeerConnectionTrackerHostRequestValidator;

class CONTENT_EXPORT PeerConnectionTrackerHost
    : public PeerConnectionTrackerHostInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = PeerConnectionTrackerHostProxy;

  template <typename ImplRefTraits>
  using Stub_ = PeerConnectionTrackerHostStub<ImplRefTraits>;

  using RequestValidator_ = PeerConnectionTrackerHostRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kRemovePeerConnectionMinVersion = 0,
    kUpdatePeerConnectionMinVersion = 0,
    kGetUserMediaMinVersion = 0,
    kWebRtcEventLogWriteMinVersion = 0,
  };
  virtual ~PeerConnectionTrackerHost() {}

  virtual void RemovePeerConnection(int32_t lid) = 0;

  virtual void UpdatePeerConnection(int32_t lid, const std::string& type, const std::string& value) = 0;

  virtual void GetUserMedia(const std::string& origin, bool audio, bool video, const std::string& audio_constraints, const std::string& video_constraints) = 0;

  virtual void WebRtcEventLogWrite(int32_t lid, const std::string& output) = 0;
};
class CONTENT_EXPORT PeerConnectionTrackerHostInterceptorForTesting : public PeerConnectionTrackerHost {
  virtual PeerConnectionTrackerHost* GetForwardingInterface() = 0;
  void RemovePeerConnection(int32_t lid) override;
  void UpdatePeerConnection(int32_t lid, const std::string& type, const std::string& value) override;
  void GetUserMedia(const std::string& origin, bool audio, bool video, const std::string& audio_constraints, const std::string& video_constraints) override;
  void WebRtcEventLogWrite(int32_t lid, const std::string& output) override;
};
class CONTENT_EXPORT PeerConnectionTrackerHostAsyncWaiter {
 public:
  explicit PeerConnectionTrackerHostAsyncWaiter(PeerConnectionTrackerHost* proxy);
  ~PeerConnectionTrackerHostAsyncWaiter();

 private:
  PeerConnectionTrackerHost* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(PeerConnectionTrackerHostAsyncWaiter);
};

class CONTENT_EXPORT PeerConnectionTrackerHostProxy
    : public PeerConnectionTrackerHost {
 public:
  explicit PeerConnectionTrackerHostProxy(mojo::MessageReceiverWithResponder* receiver);
  void RemovePeerConnection(int32_t lid) final;
  void UpdatePeerConnection(int32_t lid, const std::string& type, const std::string& value) final;
  void GetUserMedia(const std::string& origin, bool audio, bool video, const std::string& audio_constraints, const std::string& video_constraints) final;
  void WebRtcEventLogWrite(int32_t lid, const std::string& output) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class CONTENT_EXPORT PeerConnectionTrackerHostStubDispatch {
 public:
  static bool Accept(PeerConnectionTrackerHost* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      PeerConnectionTrackerHost* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<PeerConnectionTrackerHost>>
class PeerConnectionTrackerHostStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  PeerConnectionTrackerHostStub() {}
  ~PeerConnectionTrackerHostStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return PeerConnectionTrackerHostStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return PeerConnectionTrackerHostStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class CONTENT_EXPORT PeerConnectionTrackerHostRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace content

namespace mojo {

}  // namespace mojo

#endif  // CONTENT_COMMON_MEDIA_PEER_CONNECTION_TRACKER_MOJOM_H_