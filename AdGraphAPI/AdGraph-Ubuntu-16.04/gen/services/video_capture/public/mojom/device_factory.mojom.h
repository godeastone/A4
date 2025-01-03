// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_VIDEO_CAPTURE_PUBLIC_MOJOM_DEVICE_FACTORY_MOJOM_H_
#define SERVICES_VIDEO_CAPTURE_PUBLIC_MOJOM_DEVICE_FACTORY_MOJOM_H_

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
#include "services/video_capture/public/mojom/device_factory.mojom-shared.h"
#include "media/capture/mojom/video_capture_types.mojom.h"
#include "services/video_capture/public/mojom/device.mojom.h"
#include "services/video_capture/public/mojom/producer.mojom.h"
#include "services/video_capture/public/mojom/virtual_device.mojom.h"
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
class DeviceFactory;
using DeviceFactoryPtr = mojo::InterfacePtr<DeviceFactory>;
using DeviceFactoryPtrInfo = mojo::InterfacePtrInfo<DeviceFactory>;
using ThreadSafeDeviceFactoryPtr =
    mojo::ThreadSafeInterfacePtr<DeviceFactory>;
using DeviceFactoryRequest = mojo::InterfaceRequest<DeviceFactory>;
using DeviceFactoryAssociatedPtr =
    mojo::AssociatedInterfacePtr<DeviceFactory>;
using ThreadSafeDeviceFactoryAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<DeviceFactory>;
using DeviceFactoryAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<DeviceFactory>;
using DeviceFactoryAssociatedRequest =
    mojo::AssociatedInterfaceRequest<DeviceFactory>;


class DeviceFactoryProxy;

template <typename ImplRefTraits>
class DeviceFactoryStub;

class DeviceFactoryRequestValidator;
class DeviceFactoryResponseValidator;

class  DeviceFactory
    : public DeviceFactoryInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = DeviceFactoryProxy;

  template <typename ImplRefTraits>
  using Stub_ = DeviceFactoryStub<ImplRefTraits>;

  using RequestValidator_ = DeviceFactoryRequestValidator;
  using ResponseValidator_ = DeviceFactoryResponseValidator;
  enum MethodMinVersions : uint32_t {
    kGetDeviceInfosMinVersion = 0,
    kCreateDeviceMinVersion = 0,
    kAddSharedMemoryVirtualDeviceMinVersion = 0,
    kAddTextureVirtualDeviceMinVersion = 0,
  };
  virtual ~DeviceFactory() {}


  using GetDeviceInfosCallback = base::OnceCallback<void(const std::vector<media::VideoCaptureDeviceInfo>&)>;
  virtual void GetDeviceInfos(GetDeviceInfosCallback callback) = 0;


  using CreateDeviceCallback = base::OnceCallback<void(DeviceAccessResultCode)>;
  virtual void CreateDevice(const std::string& device_id, ::video_capture::mojom::DeviceRequest device_request, CreateDeviceCallback callback) = 0;

  virtual void AddSharedMemoryVirtualDevice(const media::VideoCaptureDeviceInfo& device_info, ::video_capture::mojom::ProducerPtr producer, ::video_capture::mojom::SharedMemoryVirtualDeviceRequest virtual_device) = 0;

  virtual void AddTextureVirtualDevice(const media::VideoCaptureDeviceInfo& device_info, ::video_capture::mojom::TextureVirtualDeviceRequest virtual_device) = 0;
};
class  DeviceFactoryInterceptorForTesting : public DeviceFactory {
  virtual DeviceFactory* GetForwardingInterface() = 0;
  void GetDeviceInfos(GetDeviceInfosCallback callback) override;
  void CreateDevice(const std::string& device_id, ::video_capture::mojom::DeviceRequest device_request, CreateDeviceCallback callback) override;
  void AddSharedMemoryVirtualDevice(const media::VideoCaptureDeviceInfo& device_info, ::video_capture::mojom::ProducerPtr producer, ::video_capture::mojom::SharedMemoryVirtualDeviceRequest virtual_device) override;
  void AddTextureVirtualDevice(const media::VideoCaptureDeviceInfo& device_info, ::video_capture::mojom::TextureVirtualDeviceRequest virtual_device) override;
};
class  DeviceFactoryAsyncWaiter {
 public:
  explicit DeviceFactoryAsyncWaiter(DeviceFactory* proxy);
  ~DeviceFactoryAsyncWaiter();
  void GetDeviceInfos(
      std::vector<media::VideoCaptureDeviceInfo>* out_device_infos);
  void CreateDevice(
      const std::string& device_id, ::video_capture::mojom::DeviceRequest device_request, DeviceAccessResultCode* out_result_code);

 private:
  DeviceFactory* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(DeviceFactoryAsyncWaiter);
};

class  DeviceFactoryProxy
    : public DeviceFactory {
 public:
  explicit DeviceFactoryProxy(mojo::MessageReceiverWithResponder* receiver);
  void GetDeviceInfos(GetDeviceInfosCallback callback) final;
  void CreateDevice(const std::string& device_id, ::video_capture::mojom::DeviceRequest device_request, CreateDeviceCallback callback) final;
  void AddSharedMemoryVirtualDevice(const media::VideoCaptureDeviceInfo& device_info, ::video_capture::mojom::ProducerPtr producer, ::video_capture::mojom::SharedMemoryVirtualDeviceRequest virtual_device) final;
  void AddTextureVirtualDevice(const media::VideoCaptureDeviceInfo& device_info, ::video_capture::mojom::TextureVirtualDeviceRequest virtual_device) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  DeviceFactoryStubDispatch {
 public:
  static bool Accept(DeviceFactory* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      DeviceFactory* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<DeviceFactory>>
class DeviceFactoryStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  DeviceFactoryStub() {}
  ~DeviceFactoryStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return DeviceFactoryStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return DeviceFactoryStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  DeviceFactoryRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  DeviceFactoryResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace video_capture

namespace mojo {

}  // namespace mojo

#endif  // SERVICES_VIDEO_CAPTURE_PUBLIC_MOJOM_DEVICE_FACTORY_MOJOM_H_