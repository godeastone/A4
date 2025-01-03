// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_VIDEO_CAPTURE_PUBLIC_MOJOM_DEVICE_MOJOM_H_
#define SERVICES_VIDEO_CAPTURE_PUBLIC_MOJOM_DEVICE_MOJOM_H_

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
#include "services/video_capture/public/mojom/device.mojom-shared.h"
#include "media/capture/mojom/video_capture_types.mojom.h"
#include "media/capture/mojom/image_capture.mojom.h"
#include "services/video_capture/public/mojom/receiver.mojom.h"
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
class Device;
using DevicePtr = mojo::InterfacePtr<Device>;
using DevicePtrInfo = mojo::InterfacePtrInfo<Device>;
using ThreadSafeDevicePtr =
    mojo::ThreadSafeInterfacePtr<Device>;
using DeviceRequest = mojo::InterfaceRequest<Device>;
using DeviceAssociatedPtr =
    mojo::AssociatedInterfacePtr<Device>;
using ThreadSafeDeviceAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<Device>;
using DeviceAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<Device>;
using DeviceAssociatedRequest =
    mojo::AssociatedInterfaceRequest<Device>;


class DeviceProxy;

template <typename ImplRefTraits>
class DeviceStub;

class DeviceRequestValidator;
class DeviceResponseValidator;

class  Device
    : public DeviceInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = DeviceProxy;

  template <typename ImplRefTraits>
  using Stub_ = DeviceStub<ImplRefTraits>;

  using RequestValidator_ = DeviceRequestValidator;
  using ResponseValidator_ = DeviceResponseValidator;
  enum MethodMinVersions : uint32_t {
    kStartMinVersion = 0,
    kOnReceiverReportingUtilizationMinVersion = 0,
    kRequestRefreshFrameMinVersion = 0,
    kMaybeSuspendMinVersion = 0,
    kResumeMinVersion = 0,
    kGetPhotoStateMinVersion = 0,
    kSetPhotoOptionsMinVersion = 0,
    kTakePhotoMinVersion = 0,
  };
  virtual ~Device() {}

  virtual void Start(const media::VideoCaptureParams& requested_settings, ::video_capture::mojom::ReceiverPtr receiver) = 0;

  virtual void OnReceiverReportingUtilization(int32_t frame_feedback_id, double utilization) = 0;

  virtual void RequestRefreshFrame() = 0;

  virtual void MaybeSuspend() = 0;

  virtual void Resume() = 0;


  using GetPhotoStateCallback = base::OnceCallback<void(::media::mojom::PhotoStatePtr)>;
  virtual void GetPhotoState(GetPhotoStateCallback callback) = 0;


  using SetPhotoOptionsCallback = base::OnceCallback<void(bool)>;
  virtual void SetPhotoOptions(::media::mojom::PhotoSettingsPtr settings, SetPhotoOptionsCallback callback) = 0;


  using TakePhotoCallback = base::OnceCallback<void(::media::mojom::BlobPtr)>;
  virtual void TakePhoto(TakePhotoCallback callback) = 0;
};
class  DeviceInterceptorForTesting : public Device {
  virtual Device* GetForwardingInterface() = 0;
  void Start(const media::VideoCaptureParams& requested_settings, ::video_capture::mojom::ReceiverPtr receiver) override;
  void OnReceiverReportingUtilization(int32_t frame_feedback_id, double utilization) override;
  void RequestRefreshFrame() override;
  void MaybeSuspend() override;
  void Resume() override;
  void GetPhotoState(GetPhotoStateCallback callback) override;
  void SetPhotoOptions(::media::mojom::PhotoSettingsPtr settings, SetPhotoOptionsCallback callback) override;
  void TakePhoto(TakePhotoCallback callback) override;
};
class  DeviceAsyncWaiter {
 public:
  explicit DeviceAsyncWaiter(Device* proxy);
  ~DeviceAsyncWaiter();
  void GetPhotoState(
      ::media::mojom::PhotoStatePtr* out_capabilities);
  void SetPhotoOptions(
      ::media::mojom::PhotoSettingsPtr settings, bool* out_success);
  void TakePhoto(
      ::media::mojom::BlobPtr* out_blob);

 private:
  Device* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(DeviceAsyncWaiter);
};

class  DeviceProxy
    : public Device {
 public:
  explicit DeviceProxy(mojo::MessageReceiverWithResponder* receiver);
  void Start(const media::VideoCaptureParams& requested_settings, ::video_capture::mojom::ReceiverPtr receiver) final;
  void OnReceiverReportingUtilization(int32_t frame_feedback_id, double utilization) final;
  void RequestRefreshFrame() final;
  void MaybeSuspend() final;
  void Resume() final;
  void GetPhotoState(GetPhotoStateCallback callback) final;
  void SetPhotoOptions(::media::mojom::PhotoSettingsPtr settings, SetPhotoOptionsCallback callback) final;
  void TakePhoto(TakePhotoCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  DeviceStubDispatch {
 public:
  static bool Accept(Device* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      Device* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<Device>>
class DeviceStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  DeviceStub() {}
  ~DeviceStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return DeviceStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return DeviceStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  DeviceRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  DeviceResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace video_capture

namespace mojo {

}  // namespace mojo

#endif  // SERVICES_VIDEO_CAPTURE_PUBLIC_MOJOM_DEVICE_MOJOM_H_