// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef DEVICE_USB_PUBLIC_MOJOM_CHOOSER_SERVICE_MOJOM_H_
#define DEVICE_USB_PUBLIC_MOJOM_CHOOSER_SERVICE_MOJOM_H_

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
#include "device/usb/public/mojom/chooser_service.mojom-shared.h"
#include "device/usb/public/mojom/device.mojom.h"
#include "device/usb/public/mojom/device_manager.mojom.h"
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


namespace device {
namespace mojom {
class UsbChooserService;
using UsbChooserServicePtr = mojo::InterfacePtr<UsbChooserService>;
using UsbChooserServicePtrInfo = mojo::InterfacePtrInfo<UsbChooserService>;
using ThreadSafeUsbChooserServicePtr =
    mojo::ThreadSafeInterfacePtr<UsbChooserService>;
using UsbChooserServiceRequest = mojo::InterfaceRequest<UsbChooserService>;
using UsbChooserServiceAssociatedPtr =
    mojo::AssociatedInterfacePtr<UsbChooserService>;
using ThreadSafeUsbChooserServiceAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<UsbChooserService>;
using UsbChooserServiceAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<UsbChooserService>;
using UsbChooserServiceAssociatedRequest =
    mojo::AssociatedInterfaceRequest<UsbChooserService>;


class UsbChooserServiceProxy;

template <typename ImplRefTraits>
class UsbChooserServiceStub;

class UsbChooserServiceRequestValidator;
class UsbChooserServiceResponseValidator;

class  UsbChooserService
    : public UsbChooserServiceInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = UsbChooserServiceProxy;

  template <typename ImplRefTraits>
  using Stub_ = UsbChooserServiceStub<ImplRefTraits>;

  using RequestValidator_ = UsbChooserServiceRequestValidator;
  using ResponseValidator_ = UsbChooserServiceResponseValidator;
  enum MethodMinVersions : uint32_t {
    kGetPermissionMinVersion = 0,
  };
  virtual ~UsbChooserService() {}


  using GetPermissionCallback = base::OnceCallback<void(::device::mojom::UsbDeviceInfoPtr)>;
  virtual void GetPermission(std::vector<::device::mojom::UsbDeviceFilterPtr> device_filters, GetPermissionCallback callback) = 0;
};
class  UsbChooserServiceInterceptorForTesting : public UsbChooserService {
  virtual UsbChooserService* GetForwardingInterface() = 0;
  void GetPermission(std::vector<::device::mojom::UsbDeviceFilterPtr> device_filters, GetPermissionCallback callback) override;
};
class  UsbChooserServiceAsyncWaiter {
 public:
  explicit UsbChooserServiceAsyncWaiter(UsbChooserService* proxy);
  ~UsbChooserServiceAsyncWaiter();
  void GetPermission(
      std::vector<::device::mojom::UsbDeviceFilterPtr> device_filters, ::device::mojom::UsbDeviceInfoPtr* out_result);

 private:
  UsbChooserService* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(UsbChooserServiceAsyncWaiter);
};

class  UsbChooserServiceProxy
    : public UsbChooserService {
 public:
  explicit UsbChooserServiceProxy(mojo::MessageReceiverWithResponder* receiver);
  void GetPermission(std::vector<::device::mojom::UsbDeviceFilterPtr> device_filters, GetPermissionCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  UsbChooserServiceStubDispatch {
 public:
  static bool Accept(UsbChooserService* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      UsbChooserService* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<UsbChooserService>>
class UsbChooserServiceStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  UsbChooserServiceStub() {}
  ~UsbChooserServiceStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return UsbChooserServiceStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return UsbChooserServiceStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  UsbChooserServiceRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  UsbChooserServiceResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace device

namespace mojo {

}  // namespace mojo

#endif  // DEVICE_USB_PUBLIC_MOJOM_CHOOSER_SERVICE_MOJOM_H_