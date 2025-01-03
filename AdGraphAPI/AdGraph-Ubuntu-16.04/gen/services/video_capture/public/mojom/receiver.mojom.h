// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_VIDEO_CAPTURE_PUBLIC_MOJOM_RECEIVER_MOJOM_H_
#define SERVICES_VIDEO_CAPTURE_PUBLIC_MOJOM_RECEIVER_MOJOM_H_

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
#include "services/video_capture/public/mojom/receiver.mojom-shared.h"
#include "media/capture/mojom/video_capture_types.mojom.h"
#include "services/video_capture/public/mojom/scoped_access_permission.mojom.h"
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


namespace video_capture {
namespace mojom {
class Receiver;
using ReceiverPtr = mojo::InterfacePtr<Receiver>;
using ReceiverPtrInfo = mojo::InterfacePtrInfo<Receiver>;
using ThreadSafeReceiverPtr =
    mojo::ThreadSafeInterfacePtr<Receiver>;
using ReceiverRequest = mojo::InterfaceRequest<Receiver>;
using ReceiverAssociatedPtr =
    mojo::AssociatedInterfacePtr<Receiver>;
using ThreadSafeReceiverAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<Receiver>;
using ReceiverAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<Receiver>;
using ReceiverAssociatedRequest =
    mojo::AssociatedInterfaceRequest<Receiver>;


class ReceiverProxy;

template <typename ImplRefTraits>
class ReceiverStub;

class ReceiverRequestValidator;

class  Receiver
    : public ReceiverInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = ReceiverProxy;

  template <typename ImplRefTraits>
  using Stub_ = ReceiverStub<ImplRefTraits>;

  using RequestValidator_ = ReceiverRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kOnNewBufferMinVersion = 0,
    kOnFrameReadyInBufferMinVersion = 0,
    kOnBufferRetiredMinVersion = 0,
    kOnErrorMinVersion = 0,
    kOnLogMinVersion = 0,
    kOnStartedMinVersion = 0,
    kOnStartedUsingGpuDecodeMinVersion = 0,
  };
  virtual ~Receiver() {}

  virtual void OnNewBuffer(int32_t buffer_id, ::media::mojom::VideoBufferHandlePtr buffer_handle) = 0;

  virtual void OnFrameReadyInBuffer(int32_t buffer_id, int32_t frame_feedback_id, ::video_capture::mojom::ScopedAccessPermissionPtr access_permission, ::media::mojom::VideoFrameInfoPtr frame_info) = 0;

  virtual void OnBufferRetired(int32_t buffer_id) = 0;

  virtual void OnError() = 0;

  virtual void OnLog(const std::string& message) = 0;

  virtual void OnStarted() = 0;

  virtual void OnStartedUsingGpuDecode() = 0;
};
class  ReceiverInterceptorForTesting : public Receiver {
  virtual Receiver* GetForwardingInterface() = 0;
  void OnNewBuffer(int32_t buffer_id, ::media::mojom::VideoBufferHandlePtr buffer_handle) override;
  void OnFrameReadyInBuffer(int32_t buffer_id, int32_t frame_feedback_id, ::video_capture::mojom::ScopedAccessPermissionPtr access_permission, ::media::mojom::VideoFrameInfoPtr frame_info) override;
  void OnBufferRetired(int32_t buffer_id) override;
  void OnError() override;
  void OnLog(const std::string& message) override;
  void OnStarted() override;
  void OnStartedUsingGpuDecode() override;
};
class  ReceiverAsyncWaiter {
 public:
  explicit ReceiverAsyncWaiter(Receiver* proxy);
  ~ReceiverAsyncWaiter();

 private:
  Receiver* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(ReceiverAsyncWaiter);
};

class  ReceiverProxy
    : public Receiver {
 public:
  explicit ReceiverProxy(mojo::MessageReceiverWithResponder* receiver);
  void OnNewBuffer(int32_t buffer_id, ::media::mojom::VideoBufferHandlePtr buffer_handle) final;
  void OnFrameReadyInBuffer(int32_t buffer_id, int32_t frame_feedback_id, ::video_capture::mojom::ScopedAccessPermissionPtr access_permission, ::media::mojom::VideoFrameInfoPtr frame_info) final;
  void OnBufferRetired(int32_t buffer_id) final;
  void OnError() final;
  void OnLog(const std::string& message) final;
  void OnStarted() final;
  void OnStartedUsingGpuDecode() final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  ReceiverStubDispatch {
 public:
  static bool Accept(Receiver* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      Receiver* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<Receiver>>
class ReceiverStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  ReceiverStub() {}
  ~ReceiverStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ReceiverStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ReceiverStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  ReceiverRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace video_capture

namespace mojo {

}  // namespace mojo

#endif  // SERVICES_VIDEO_CAPTURE_PUBLIC_MOJOM_RECEIVER_MOJOM_H_