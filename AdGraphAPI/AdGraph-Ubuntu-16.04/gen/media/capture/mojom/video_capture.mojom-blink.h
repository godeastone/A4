// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_CAPTURE_MOJOM_VIDEO_CAPTURE_MOJOM_BLINK_H_
#define MEDIA_CAPTURE_MOJOM_VIDEO_CAPTURE_MOJOM_BLINK_H_

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
#include "media/capture/mojom/video_capture.mojom-shared.h"
#include "media/capture/mojom/video_capture_types.mojom-blink.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-blink.h"

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


namespace WTF {
struct media_mojom_internal_VideoCaptureState_DataHashFn {
  static unsigned GetHash(const ::media::mojom::VideoCaptureState& value) {
    using utype = std::underlying_type<::media::mojom::VideoCaptureState>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::media::mojom::VideoCaptureState& left, const ::media::mojom::VideoCaptureState& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct DefaultHash<::media::mojom::VideoCaptureState> {
  using Hash = media_mojom_internal_VideoCaptureState_DataHashFn;
};

template <>
struct HashTraits<::media::mojom::VideoCaptureState>
    : public GenericHashTraits<::media::mojom::VideoCaptureState> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::media::mojom::VideoCaptureState& value) {
    return value == static_cast<::media::mojom::VideoCaptureState>(-1000000);
  }
  static void ConstructDeletedValue(::media::mojom::VideoCaptureState& slot, bool) {
    slot = static_cast<::media::mojom::VideoCaptureState>(-1000001);
  }
  static bool IsDeletedValue(const ::media::mojom::VideoCaptureState& value) {
    return value == static_cast<::media::mojom::VideoCaptureState>(-1000001);
  }
};
}  // namespace WTF


namespace media {
namespace mojom {
namespace blink {
using VideoCaptureState = VideoCaptureState;  // Alias for definition in the parent namespace.
class VideoCaptureObserver;
using VideoCaptureObserverPtr = mojo::InterfacePtr<VideoCaptureObserver>;
using RevocableVideoCaptureObserverPtr = ::blink::RevocableInterfacePtr<VideoCaptureObserver>;
using VideoCaptureObserverPtrInfo = mojo::InterfacePtrInfo<VideoCaptureObserver>;
using ThreadSafeVideoCaptureObserverPtr =
    mojo::ThreadSafeInterfacePtr<VideoCaptureObserver>;
using VideoCaptureObserverRequest = mojo::InterfaceRequest<VideoCaptureObserver>;
using VideoCaptureObserverAssociatedPtr =
    mojo::AssociatedInterfacePtr<VideoCaptureObserver>;
using ThreadSafeVideoCaptureObserverAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<VideoCaptureObserver>;
using VideoCaptureObserverAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<VideoCaptureObserver>;
using VideoCaptureObserverAssociatedRequest =
    mojo::AssociatedInterfaceRequest<VideoCaptureObserver>;

class VideoCaptureHost;
using VideoCaptureHostPtr = mojo::InterfacePtr<VideoCaptureHost>;
using RevocableVideoCaptureHostPtr = ::blink::RevocableInterfacePtr<VideoCaptureHost>;
using VideoCaptureHostPtrInfo = mojo::InterfacePtrInfo<VideoCaptureHost>;
using ThreadSafeVideoCaptureHostPtr =
    mojo::ThreadSafeInterfacePtr<VideoCaptureHost>;
using VideoCaptureHostRequest = mojo::InterfaceRequest<VideoCaptureHost>;
using VideoCaptureHostAssociatedPtr =
    mojo::AssociatedInterfacePtr<VideoCaptureHost>;
using ThreadSafeVideoCaptureHostAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<VideoCaptureHost>;
using VideoCaptureHostAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<VideoCaptureHost>;
using VideoCaptureHostAssociatedRequest =
    mojo::AssociatedInterfaceRequest<VideoCaptureHost>;


class VideoCaptureObserverProxy;

template <typename ImplRefTraits>
class VideoCaptureObserverStub;

class VideoCaptureObserverRequestValidator;

class  VideoCaptureObserver
    : public VideoCaptureObserverInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = VideoCaptureObserverProxy;

  template <typename ImplRefTraits>
  using Stub_ = VideoCaptureObserverStub<ImplRefTraits>;

  using RequestValidator_ = VideoCaptureObserverRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kOnStateChangedMinVersion = 0,
    kOnNewBufferMinVersion = 0,
    kOnBufferReadyMinVersion = 0,
    kOnBufferDestroyedMinVersion = 0,
  };
  virtual ~VideoCaptureObserver() {}

  virtual void OnStateChanged(VideoCaptureState state) = 0;

  virtual void OnNewBuffer(int32_t buffer_id, ::media::mojom::blink::VideoBufferHandlePtr buffer_handle) = 0;

  virtual void OnBufferReady(int32_t buffer_id, ::media::mojom::blink::VideoFrameInfoPtr info) = 0;

  virtual void OnBufferDestroyed(int32_t buffer_id) = 0;
};
class  VideoCaptureObserverInterceptorForTesting : public VideoCaptureObserver {
  virtual VideoCaptureObserver* GetForwardingInterface() = 0;
  void OnStateChanged(VideoCaptureState state) override;
  void OnNewBuffer(int32_t buffer_id, ::media::mojom::blink::VideoBufferHandlePtr buffer_handle) override;
  void OnBufferReady(int32_t buffer_id, ::media::mojom::blink::VideoFrameInfoPtr info) override;
  void OnBufferDestroyed(int32_t buffer_id) override;
};
class  VideoCaptureObserverAsyncWaiter {
 public:
  explicit VideoCaptureObserverAsyncWaiter(VideoCaptureObserver* proxy);
  ~VideoCaptureObserverAsyncWaiter();

 private:
  VideoCaptureObserver* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(VideoCaptureObserverAsyncWaiter);
};

class VideoCaptureHostProxy;

template <typename ImplRefTraits>
class VideoCaptureHostStub;

class VideoCaptureHostRequestValidator;
class VideoCaptureHostResponseValidator;

class  VideoCaptureHost
    : public VideoCaptureHostInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = VideoCaptureHostProxy;

  template <typename ImplRefTraits>
  using Stub_ = VideoCaptureHostStub<ImplRefTraits>;

  using RequestValidator_ = VideoCaptureHostRequestValidator;
  using ResponseValidator_ = VideoCaptureHostResponseValidator;
  enum MethodMinVersions : uint32_t {
    kStartMinVersion = 0,
    kStopMinVersion = 0,
    kPauseMinVersion = 0,
    kResumeMinVersion = 0,
    kRequestRefreshFrameMinVersion = 0,
    kReleaseBufferMinVersion = 0,
    kGetDeviceSupportedFormatsMinVersion = 0,
    kGetDeviceFormatsInUseMinVersion = 0,
  };
  virtual ~VideoCaptureHost() {}

  virtual void Start(int32_t device_id, int32_t session_id, ::media::mojom::blink::VideoCaptureParamsPtr params, VideoCaptureObserverPtr observer) = 0;

  virtual void Stop(int32_t device_id) = 0;

  virtual void Pause(int32_t device_id) = 0;

  virtual void Resume(int32_t device_id, int32_t session_id, ::media::mojom::blink::VideoCaptureParamsPtr params) = 0;

  virtual void RequestRefreshFrame(int32_t device_id) = 0;

  virtual void ReleaseBuffer(int32_t device_id, int32_t buffer_id, double consumer_resource_utilization) = 0;


  using GetDeviceSupportedFormatsCallback = base::OnceCallback<void(WTF::Vector<::media::mojom::blink::VideoCaptureFormatPtr>)>;
  virtual void GetDeviceSupportedFormats(int32_t device_id, int32_t session_id, GetDeviceSupportedFormatsCallback callback) = 0;


  using GetDeviceFormatsInUseCallback = base::OnceCallback<void(WTF::Vector<::media::mojom::blink::VideoCaptureFormatPtr>)>;
  virtual void GetDeviceFormatsInUse(int32_t device_id, int32_t session_id, GetDeviceFormatsInUseCallback callback) = 0;
};
class  VideoCaptureHostInterceptorForTesting : public VideoCaptureHost {
  virtual VideoCaptureHost* GetForwardingInterface() = 0;
  void Start(int32_t device_id, int32_t session_id, ::media::mojom::blink::VideoCaptureParamsPtr params, VideoCaptureObserverPtr observer) override;
  void Stop(int32_t device_id) override;
  void Pause(int32_t device_id) override;
  void Resume(int32_t device_id, int32_t session_id, ::media::mojom::blink::VideoCaptureParamsPtr params) override;
  void RequestRefreshFrame(int32_t device_id) override;
  void ReleaseBuffer(int32_t device_id, int32_t buffer_id, double consumer_resource_utilization) override;
  void GetDeviceSupportedFormats(int32_t device_id, int32_t session_id, GetDeviceSupportedFormatsCallback callback) override;
  void GetDeviceFormatsInUse(int32_t device_id, int32_t session_id, GetDeviceFormatsInUseCallback callback) override;
};
class  VideoCaptureHostAsyncWaiter {
 public:
  explicit VideoCaptureHostAsyncWaiter(VideoCaptureHost* proxy);
  ~VideoCaptureHostAsyncWaiter();
  void GetDeviceSupportedFormats(
      int32_t device_id, int32_t session_id, WTF::Vector<::media::mojom::blink::VideoCaptureFormatPtr>* out_formats_supported);
  void GetDeviceFormatsInUse(
      int32_t device_id, int32_t session_id, WTF::Vector<::media::mojom::blink::VideoCaptureFormatPtr>* out_formats_in_use);

 private:
  VideoCaptureHost* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(VideoCaptureHostAsyncWaiter);
};

class  VideoCaptureObserverProxy
    : public VideoCaptureObserver {
 public:
  explicit VideoCaptureObserverProxy(mojo::MessageReceiverWithResponder* receiver);
  void OnStateChanged(VideoCaptureState state) final;
  void OnNewBuffer(int32_t buffer_id, ::media::mojom::blink::VideoBufferHandlePtr buffer_handle) final;
  void OnBufferReady(int32_t buffer_id, ::media::mojom::blink::VideoFrameInfoPtr info) final;
  void OnBufferDestroyed(int32_t buffer_id) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class  VideoCaptureHostProxy
    : public VideoCaptureHost {
 public:
  explicit VideoCaptureHostProxy(mojo::MessageReceiverWithResponder* receiver);
  void Start(int32_t device_id, int32_t session_id, ::media::mojom::blink::VideoCaptureParamsPtr params, VideoCaptureObserverPtr observer) final;
  void Stop(int32_t device_id) final;
  void Pause(int32_t device_id) final;
  void Resume(int32_t device_id, int32_t session_id, ::media::mojom::blink::VideoCaptureParamsPtr params) final;
  void RequestRefreshFrame(int32_t device_id) final;
  void ReleaseBuffer(int32_t device_id, int32_t buffer_id, double consumer_resource_utilization) final;
  void GetDeviceSupportedFormats(int32_t device_id, int32_t session_id, GetDeviceSupportedFormatsCallback callback) final;
  void GetDeviceFormatsInUse(int32_t device_id, int32_t session_id, GetDeviceFormatsInUseCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  VideoCaptureObserverStubDispatch {
 public:
  static bool Accept(VideoCaptureObserver* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      VideoCaptureObserver* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<VideoCaptureObserver>>
class VideoCaptureObserverStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  VideoCaptureObserverStub() {}
  ~VideoCaptureObserverStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return VideoCaptureObserverStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return VideoCaptureObserverStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  VideoCaptureHostStubDispatch {
 public:
  static bool Accept(VideoCaptureHost* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      VideoCaptureHost* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<VideoCaptureHost>>
class VideoCaptureHostStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  VideoCaptureHostStub() {}
  ~VideoCaptureHostStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return VideoCaptureHostStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return VideoCaptureHostStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  VideoCaptureObserverRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  VideoCaptureHostRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  VideoCaptureHostResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace blink
}  // namespace mojom
}  // namespace media

namespace mojo {

}  // namespace mojo

#endif  // MEDIA_CAPTURE_MOJOM_VIDEO_CAPTURE_MOJOM_BLINK_H_