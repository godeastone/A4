// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef UI_DISPLAY_MOJO_DEV_DISPLAY_CONTROLLER_MOJOM_H_
#define UI_DISPLAY_MOJO_DEV_DISPLAY_CONTROLLER_MOJOM_H_

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
#include "ui/display/mojo/dev_display_controller.mojom-shared.h"
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


namespace display {
namespace mojom {
class DevDisplayController;
using DevDisplayControllerPtr = mojo::InterfacePtr<DevDisplayController>;
using DevDisplayControllerPtrInfo = mojo::InterfacePtrInfo<DevDisplayController>;
using ThreadSafeDevDisplayControllerPtr =
    mojo::ThreadSafeInterfacePtr<DevDisplayController>;
using DevDisplayControllerRequest = mojo::InterfaceRequest<DevDisplayController>;
using DevDisplayControllerAssociatedPtr =
    mojo::AssociatedInterfacePtr<DevDisplayController>;
using ThreadSafeDevDisplayControllerAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<DevDisplayController>;
using DevDisplayControllerAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<DevDisplayController>;
using DevDisplayControllerAssociatedRequest =
    mojo::AssociatedInterfaceRequest<DevDisplayController>;


class DevDisplayControllerProxy;

template <typename ImplRefTraits>
class DevDisplayControllerStub;

class DevDisplayControllerRequestValidator;

class  DevDisplayController
    : public DevDisplayControllerInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = DevDisplayControllerProxy;

  template <typename ImplRefTraits>
  using Stub_ = DevDisplayControllerStub<ImplRefTraits>;

  using RequestValidator_ = DevDisplayControllerRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kToggleAddRemoveDisplayMinVersion = 0,
  };
  virtual ~DevDisplayController() {}

  virtual void ToggleAddRemoveDisplay() = 0;
};
class  DevDisplayControllerInterceptorForTesting : public DevDisplayController {
  virtual DevDisplayController* GetForwardingInterface() = 0;
  void ToggleAddRemoveDisplay() override;
};
class  DevDisplayControllerAsyncWaiter {
 public:
  explicit DevDisplayControllerAsyncWaiter(DevDisplayController* proxy);
  ~DevDisplayControllerAsyncWaiter();

 private:
  DevDisplayController* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(DevDisplayControllerAsyncWaiter);
};

class  DevDisplayControllerProxy
    : public DevDisplayController {
 public:
  explicit DevDisplayControllerProxy(mojo::MessageReceiverWithResponder* receiver);
  void ToggleAddRemoveDisplay() final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  DevDisplayControllerStubDispatch {
 public:
  static bool Accept(DevDisplayController* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      DevDisplayController* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<DevDisplayController>>
class DevDisplayControllerStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  DevDisplayControllerStub() {}
  ~DevDisplayControllerStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return DevDisplayControllerStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return DevDisplayControllerStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  DevDisplayControllerRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace display

namespace mojo {

}  // namespace mojo

#endif  // UI_DISPLAY_MOJO_DEV_DISPLAY_CONTROLLER_MOJOM_H_