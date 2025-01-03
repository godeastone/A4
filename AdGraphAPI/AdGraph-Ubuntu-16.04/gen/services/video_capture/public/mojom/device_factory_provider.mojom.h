// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_VIDEO_CAPTURE_PUBLIC_MOJOM_DEVICE_FACTORY_PROVIDER_MOJOM_H_
#define SERVICES_VIDEO_CAPTURE_PUBLIC_MOJOM_DEVICE_FACTORY_PROVIDER_MOJOM_H_

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
#include "services/video_capture/public/mojom/device_factory_provider.mojom-shared.h"
#include "services/video_capture/public/mojom/device_factory.mojom.h"
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
class DeviceFactoryProvider;
using DeviceFactoryProviderPtr = mojo::InterfacePtr<DeviceFactoryProvider>;
using DeviceFactoryProviderPtrInfo = mojo::InterfacePtrInfo<DeviceFactoryProvider>;
using ThreadSafeDeviceFactoryProviderPtr =
    mojo::ThreadSafeInterfacePtr<DeviceFactoryProvider>;
using DeviceFactoryProviderRequest = mojo::InterfaceRequest<DeviceFactoryProvider>;
using DeviceFactoryProviderAssociatedPtr =
    mojo::AssociatedInterfacePtr<DeviceFactoryProvider>;
using ThreadSafeDeviceFactoryProviderAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<DeviceFactoryProvider>;
using DeviceFactoryProviderAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<DeviceFactoryProvider>;
using DeviceFactoryProviderAssociatedRequest =
    mojo::AssociatedInterfaceRequest<DeviceFactoryProvider>;


class DeviceFactoryProviderProxy;

template <typename ImplRefTraits>
class DeviceFactoryProviderStub;

class DeviceFactoryProviderRequestValidator;

class  DeviceFactoryProvider
    : public DeviceFactoryProviderInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = DeviceFactoryProviderProxy;

  template <typename ImplRefTraits>
  using Stub_ = DeviceFactoryProviderStub<ImplRefTraits>;

  using RequestValidator_ = DeviceFactoryProviderRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kConnectToDeviceFactoryMinVersion = 0,
    kSetShutdownDelayInSecondsMinVersion = 0,
  };
  virtual ~DeviceFactoryProvider() {}

  virtual void ConnectToDeviceFactory(::video_capture::mojom::DeviceFactoryRequest request) = 0;

  virtual void SetShutdownDelayInSeconds(float seconds) = 0;
};
class  DeviceFactoryProviderInterceptorForTesting : public DeviceFactoryProvider {
  virtual DeviceFactoryProvider* GetForwardingInterface() = 0;
  void ConnectToDeviceFactory(::video_capture::mojom::DeviceFactoryRequest request) override;
  void SetShutdownDelayInSeconds(float seconds) override;
};
class  DeviceFactoryProviderAsyncWaiter {
 public:
  explicit DeviceFactoryProviderAsyncWaiter(DeviceFactoryProvider* proxy);
  ~DeviceFactoryProviderAsyncWaiter();

 private:
  DeviceFactoryProvider* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(DeviceFactoryProviderAsyncWaiter);
};

class  DeviceFactoryProviderProxy
    : public DeviceFactoryProvider {
 public:
  explicit DeviceFactoryProviderProxy(mojo::MessageReceiverWithResponder* receiver);
  void ConnectToDeviceFactory(::video_capture::mojom::DeviceFactoryRequest request) final;
  void SetShutdownDelayInSeconds(float seconds) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  DeviceFactoryProviderStubDispatch {
 public:
  static bool Accept(DeviceFactoryProvider* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      DeviceFactoryProvider* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<DeviceFactoryProvider>>
class DeviceFactoryProviderStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  DeviceFactoryProviderStub() {}
  ~DeviceFactoryProviderStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return DeviceFactoryProviderStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return DeviceFactoryProviderStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  DeviceFactoryProviderRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace video_capture

namespace mojo {

}  // namespace mojo

#endif  // SERVICES_VIDEO_CAPTURE_PUBLIC_MOJOM_DEVICE_FACTORY_PROVIDER_MOJOM_H_