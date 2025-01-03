// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_AUDIO_PUBLIC_MOJOM_DEVICE_NOTIFICATIONS_MOJOM_H_
#define SERVICES_AUDIO_PUBLIC_MOJOM_DEVICE_NOTIFICATIONS_MOJOM_H_

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
#include "services/audio/public/mojom/device_notifications.mojom-shared.h"
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


namespace audio {
namespace mojom {
class DeviceListener;
using DeviceListenerPtr = mojo::InterfacePtr<DeviceListener>;
using DeviceListenerPtrInfo = mojo::InterfacePtrInfo<DeviceListener>;
using ThreadSafeDeviceListenerPtr =
    mojo::ThreadSafeInterfacePtr<DeviceListener>;
using DeviceListenerRequest = mojo::InterfaceRequest<DeviceListener>;
using DeviceListenerAssociatedPtr =
    mojo::AssociatedInterfacePtr<DeviceListener>;
using ThreadSafeDeviceListenerAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<DeviceListener>;
using DeviceListenerAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<DeviceListener>;
using DeviceListenerAssociatedRequest =
    mojo::AssociatedInterfaceRequest<DeviceListener>;

class DeviceNotifier;
using DeviceNotifierPtr = mojo::InterfacePtr<DeviceNotifier>;
using DeviceNotifierPtrInfo = mojo::InterfacePtrInfo<DeviceNotifier>;
using ThreadSafeDeviceNotifierPtr =
    mojo::ThreadSafeInterfacePtr<DeviceNotifier>;
using DeviceNotifierRequest = mojo::InterfaceRequest<DeviceNotifier>;
using DeviceNotifierAssociatedPtr =
    mojo::AssociatedInterfacePtr<DeviceNotifier>;
using ThreadSafeDeviceNotifierAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<DeviceNotifier>;
using DeviceNotifierAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<DeviceNotifier>;
using DeviceNotifierAssociatedRequest =
    mojo::AssociatedInterfaceRequest<DeviceNotifier>;


class DeviceListenerProxy;

template <typename ImplRefTraits>
class DeviceListenerStub;

class DeviceListenerRequestValidator;

class  DeviceListener
    : public DeviceListenerInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = DeviceListenerProxy;

  template <typename ImplRefTraits>
  using Stub_ = DeviceListenerStub<ImplRefTraits>;

  using RequestValidator_ = DeviceListenerRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kDevicesChangedMinVersion = 0,
  };
  virtual ~DeviceListener() {}

  virtual void DevicesChanged() = 0;
};
class  DeviceListenerInterceptorForTesting : public DeviceListener {
  virtual DeviceListener* GetForwardingInterface() = 0;
  void DevicesChanged() override;
};
class  DeviceListenerAsyncWaiter {
 public:
  explicit DeviceListenerAsyncWaiter(DeviceListener* proxy);
  ~DeviceListenerAsyncWaiter();

 private:
  DeviceListener* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(DeviceListenerAsyncWaiter);
};

class DeviceNotifierProxy;

template <typename ImplRefTraits>
class DeviceNotifierStub;

class DeviceNotifierRequestValidator;

class  DeviceNotifier
    : public DeviceNotifierInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = DeviceNotifierProxy;

  template <typename ImplRefTraits>
  using Stub_ = DeviceNotifierStub<ImplRefTraits>;

  using RequestValidator_ = DeviceNotifierRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kRegisterListenerMinVersion = 0,
  };
  virtual ~DeviceNotifier() {}

  virtual void RegisterListener(DeviceListenerPtr listener) = 0;
};
class  DeviceNotifierInterceptorForTesting : public DeviceNotifier {
  virtual DeviceNotifier* GetForwardingInterface() = 0;
  void RegisterListener(DeviceListenerPtr listener) override;
};
class  DeviceNotifierAsyncWaiter {
 public:
  explicit DeviceNotifierAsyncWaiter(DeviceNotifier* proxy);
  ~DeviceNotifierAsyncWaiter();

 private:
  DeviceNotifier* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(DeviceNotifierAsyncWaiter);
};

class  DeviceListenerProxy
    : public DeviceListener {
 public:
  explicit DeviceListenerProxy(mojo::MessageReceiverWithResponder* receiver);
  void DevicesChanged() final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class  DeviceNotifierProxy
    : public DeviceNotifier {
 public:
  explicit DeviceNotifierProxy(mojo::MessageReceiverWithResponder* receiver);
  void RegisterListener(DeviceListenerPtr listener) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  DeviceListenerStubDispatch {
 public:
  static bool Accept(DeviceListener* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      DeviceListener* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<DeviceListener>>
class DeviceListenerStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  DeviceListenerStub() {}
  ~DeviceListenerStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return DeviceListenerStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return DeviceListenerStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  DeviceNotifierStubDispatch {
 public:
  static bool Accept(DeviceNotifier* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      DeviceNotifier* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<DeviceNotifier>>
class DeviceNotifierStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  DeviceNotifierStub() {}
  ~DeviceNotifierStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return DeviceNotifierStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return DeviceNotifierStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  DeviceListenerRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  DeviceNotifierRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace audio

namespace mojo {

}  // namespace mojo

#endif  // SERVICES_AUDIO_PUBLIC_MOJOM_DEVICE_NOTIFICATIONS_MOJOM_H_