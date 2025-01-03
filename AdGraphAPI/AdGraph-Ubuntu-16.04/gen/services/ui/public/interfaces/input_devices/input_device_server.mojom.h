// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_UI_PUBLIC_INTERFACES_INPUT_DEVICES_INPUT_DEVICE_SERVER_MOJOM_H_
#define SERVICES_UI_PUBLIC_INTERFACES_INPUT_DEVICES_INPUT_DEVICE_SERVER_MOJOM_H_

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
#include "services/ui/public/interfaces/input_devices/input_device_server.mojom-shared.h"
#include "ui/events/devices/mojo/input_devices.mojom.h"
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
class InputDeviceObserverMojo;
using InputDeviceObserverMojoPtr = mojo::InterfacePtr<InputDeviceObserverMojo>;
using InputDeviceObserverMojoPtrInfo = mojo::InterfacePtrInfo<InputDeviceObserverMojo>;
using ThreadSafeInputDeviceObserverMojoPtr =
    mojo::ThreadSafeInterfacePtr<InputDeviceObserverMojo>;
using InputDeviceObserverMojoRequest = mojo::InterfaceRequest<InputDeviceObserverMojo>;
using InputDeviceObserverMojoAssociatedPtr =
    mojo::AssociatedInterfacePtr<InputDeviceObserverMojo>;
using ThreadSafeInputDeviceObserverMojoAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<InputDeviceObserverMojo>;
using InputDeviceObserverMojoAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<InputDeviceObserverMojo>;
using InputDeviceObserverMojoAssociatedRequest =
    mojo::AssociatedInterfaceRequest<InputDeviceObserverMojo>;

class InputDeviceServer;
using InputDeviceServerPtr = mojo::InterfacePtr<InputDeviceServer>;
using InputDeviceServerPtrInfo = mojo::InterfacePtrInfo<InputDeviceServer>;
using ThreadSafeInputDeviceServerPtr =
    mojo::ThreadSafeInterfacePtr<InputDeviceServer>;
using InputDeviceServerRequest = mojo::InterfaceRequest<InputDeviceServer>;
using InputDeviceServerAssociatedPtr =
    mojo::AssociatedInterfacePtr<InputDeviceServer>;
using ThreadSafeInputDeviceServerAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<InputDeviceServer>;
using InputDeviceServerAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<InputDeviceServer>;
using InputDeviceServerAssociatedRequest =
    mojo::AssociatedInterfaceRequest<InputDeviceServer>;


class InputDeviceObserverMojoProxy;

template <typename ImplRefTraits>
class InputDeviceObserverMojoStub;

class InputDeviceObserverMojoRequestValidator;

class  InputDeviceObserverMojo
    : public InputDeviceObserverMojoInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = InputDeviceObserverMojoProxy;

  template <typename ImplRefTraits>
  using Stub_ = InputDeviceObserverMojoStub<ImplRefTraits>;

  using RequestValidator_ = InputDeviceObserverMojoRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kOnKeyboardDeviceConfigurationChangedMinVersion = 0,
    kOnTouchscreenDeviceConfigurationChangedMinVersion = 0,
    kOnMouseDeviceConfigurationChangedMinVersion = 0,
    kOnTouchpadDeviceConfigurationChangedMinVersion = 0,
    kOnDeviceListsCompleteMinVersion = 0,
    kOnStylusStateChangedMinVersion = 0,
  };
  virtual ~InputDeviceObserverMojo() {}

  virtual void OnKeyboardDeviceConfigurationChanged(const std::vector<ui::InputDevice>& devices) = 0;

  virtual void OnTouchscreenDeviceConfigurationChanged(const std::vector<ui::TouchscreenDevice>& devices, bool touchscreen_target_display_ids_changed) = 0;

  virtual void OnMouseDeviceConfigurationChanged(const std::vector<ui::InputDevice>& devices) = 0;

  virtual void OnTouchpadDeviceConfigurationChanged(const std::vector<ui::InputDevice>& devices) = 0;

  virtual void OnDeviceListsComplete(const std::vector<ui::InputDevice>& keyboard_devices, const std::vector<ui::TouchscreenDevice>& touchscreen_devices, const std::vector<ui::InputDevice>& mouse_devices, const std::vector<ui::InputDevice>& touchpad_devices, bool are_touchscreen_target_displays_valid) = 0;

  virtual void OnStylusStateChanged(ui::StylusState state) = 0;
};
class  InputDeviceObserverMojoInterceptorForTesting : public InputDeviceObserverMojo {
  virtual InputDeviceObserverMojo* GetForwardingInterface() = 0;
  void OnKeyboardDeviceConfigurationChanged(const std::vector<ui::InputDevice>& devices) override;
  void OnTouchscreenDeviceConfigurationChanged(const std::vector<ui::TouchscreenDevice>& devices, bool touchscreen_target_display_ids_changed) override;
  void OnMouseDeviceConfigurationChanged(const std::vector<ui::InputDevice>& devices) override;
  void OnTouchpadDeviceConfigurationChanged(const std::vector<ui::InputDevice>& devices) override;
  void OnDeviceListsComplete(const std::vector<ui::InputDevice>& keyboard_devices, const std::vector<ui::TouchscreenDevice>& touchscreen_devices, const std::vector<ui::InputDevice>& mouse_devices, const std::vector<ui::InputDevice>& touchpad_devices, bool are_touchscreen_target_displays_valid) override;
  void OnStylusStateChanged(ui::StylusState state) override;
};
class  InputDeviceObserverMojoAsyncWaiter {
 public:
  explicit InputDeviceObserverMojoAsyncWaiter(InputDeviceObserverMojo* proxy);
  ~InputDeviceObserverMojoAsyncWaiter();

 private:
  InputDeviceObserverMojo* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(InputDeviceObserverMojoAsyncWaiter);
};

class InputDeviceServerProxy;

template <typename ImplRefTraits>
class InputDeviceServerStub;

class InputDeviceServerRequestValidator;

class  InputDeviceServer
    : public InputDeviceServerInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = InputDeviceServerProxy;

  template <typename ImplRefTraits>
  using Stub_ = InputDeviceServerStub<ImplRefTraits>;

  using RequestValidator_ = InputDeviceServerRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kAddObserverMinVersion = 0,
  };
  virtual ~InputDeviceServer() {}

  virtual void AddObserver(InputDeviceObserverMojoPtr observer) = 0;
};
class  InputDeviceServerInterceptorForTesting : public InputDeviceServer {
  virtual InputDeviceServer* GetForwardingInterface() = 0;
  void AddObserver(InputDeviceObserverMojoPtr observer) override;
};
class  InputDeviceServerAsyncWaiter {
 public:
  explicit InputDeviceServerAsyncWaiter(InputDeviceServer* proxy);
  ~InputDeviceServerAsyncWaiter();

 private:
  InputDeviceServer* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(InputDeviceServerAsyncWaiter);
};

class  InputDeviceObserverMojoProxy
    : public InputDeviceObserverMojo {
 public:
  explicit InputDeviceObserverMojoProxy(mojo::MessageReceiverWithResponder* receiver);
  void OnKeyboardDeviceConfigurationChanged(const std::vector<ui::InputDevice>& devices) final;
  void OnTouchscreenDeviceConfigurationChanged(const std::vector<ui::TouchscreenDevice>& devices, bool touchscreen_target_display_ids_changed) final;
  void OnMouseDeviceConfigurationChanged(const std::vector<ui::InputDevice>& devices) final;
  void OnTouchpadDeviceConfigurationChanged(const std::vector<ui::InputDevice>& devices) final;
  void OnDeviceListsComplete(const std::vector<ui::InputDevice>& keyboard_devices, const std::vector<ui::TouchscreenDevice>& touchscreen_devices, const std::vector<ui::InputDevice>& mouse_devices, const std::vector<ui::InputDevice>& touchpad_devices, bool are_touchscreen_target_displays_valid) final;
  void OnStylusStateChanged(ui::StylusState state) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class  InputDeviceServerProxy
    : public InputDeviceServer {
 public:
  explicit InputDeviceServerProxy(mojo::MessageReceiverWithResponder* receiver);
  void AddObserver(InputDeviceObserverMojoPtr observer) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  InputDeviceObserverMojoStubDispatch {
 public:
  static bool Accept(InputDeviceObserverMojo* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      InputDeviceObserverMojo* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<InputDeviceObserverMojo>>
class InputDeviceObserverMojoStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  InputDeviceObserverMojoStub() {}
  ~InputDeviceObserverMojoStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return InputDeviceObserverMojoStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return InputDeviceObserverMojoStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  InputDeviceServerStubDispatch {
 public:
  static bool Accept(InputDeviceServer* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      InputDeviceServer* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<InputDeviceServer>>
class InputDeviceServerStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  InputDeviceServerStub() {}
  ~InputDeviceServerStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return InputDeviceServerStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return InputDeviceServerStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  InputDeviceObserverMojoRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  InputDeviceServerRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace ui

namespace mojo {

}  // namespace mojo

#endif  // SERVICES_UI_PUBLIC_INTERFACES_INPUT_DEVICES_INPUT_DEVICE_SERVER_MOJOM_H_