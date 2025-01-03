// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_UI_PUBLIC_INTERFACES_DISPLAY_DISPLAY_CONTROLLER_MOJOM_H_
#define SERVICES_UI_PUBLIC_INTERFACES_DISPLAY_DISPLAY_CONTROLLER_MOJOM_H_

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
#include "services/ui/public/interfaces/display/display_controller.mojom-shared.h"
#include "ui/gfx/geometry/mojo/geometry.mojom.h"
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
class DisplayController;
using DisplayControllerPtr = mojo::InterfacePtr<DisplayController>;
using DisplayControllerPtrInfo = mojo::InterfacePtrInfo<DisplayController>;
using ThreadSafeDisplayControllerPtr =
    mojo::ThreadSafeInterfacePtr<DisplayController>;
using DisplayControllerRequest = mojo::InterfaceRequest<DisplayController>;
using DisplayControllerAssociatedPtr =
    mojo::AssociatedInterfacePtr<DisplayController>;
using ThreadSafeDisplayControllerAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<DisplayController>;
using DisplayControllerAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<DisplayController>;
using DisplayControllerAssociatedRequest =
    mojo::AssociatedInterfaceRequest<DisplayController>;


class DisplayControllerProxy;

template <typename ImplRefTraits>
class DisplayControllerStub;

class DisplayControllerRequestValidator;
class DisplayControllerResponseValidator;

class  DisplayController
    : public DisplayControllerInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = DisplayControllerProxy;

  template <typename ImplRefTraits>
  using Stub_ = DisplayControllerStub<ImplRefTraits>;

  using RequestValidator_ = DisplayControllerRequestValidator;
  using ResponseValidator_ = DisplayControllerResponseValidator;
  enum MethodMinVersions : uint32_t {
    kIncreaseInternalDisplayZoomMinVersion = 0,
    kDecreaseInternalDisplayZoomMinVersion = 0,
    kResetInternalDisplayZoomMinVersion = 0,
    kRotateCurrentDisplayCWMinVersion = 0,
    kSwapPrimaryDisplayMinVersion = 0,
    kToggleMirrorModeMinVersion = 0,
    kTakeDisplayControlMinVersion = 0,
    kRelinquishDisplayControlMinVersion = 0,
    kSetDisplayWorkAreaMinVersion = 0,
  };
  virtual ~DisplayController() {}

  virtual void IncreaseInternalDisplayZoom() = 0;

  virtual void DecreaseInternalDisplayZoom() = 0;

  virtual void ResetInternalDisplayZoom() = 0;

  virtual void RotateCurrentDisplayCW() = 0;

  virtual void SwapPrimaryDisplay() = 0;

  virtual void ToggleMirrorMode() = 0;


  using TakeDisplayControlCallback = base::Callback<void(bool)>;
  virtual void TakeDisplayControl(const TakeDisplayControlCallback& callback) = 0;


  using RelinquishDisplayControlCallback = base::Callback<void(bool)>;
  virtual void RelinquishDisplayControl(const RelinquishDisplayControlCallback& callback) = 0;

  virtual void SetDisplayWorkArea(int64_t display_id, const gfx::Size& size, const gfx::Insets& insets) = 0;
};
class  DisplayControllerInterceptorForTesting : public DisplayController {
  virtual DisplayController* GetForwardingInterface() = 0;
  void IncreaseInternalDisplayZoom() override;
  void DecreaseInternalDisplayZoom() override;
  void ResetInternalDisplayZoom() override;
  void RotateCurrentDisplayCW() override;
  void SwapPrimaryDisplay() override;
  void ToggleMirrorMode() override;
  void TakeDisplayControl(const TakeDisplayControlCallback& callback) override;
  void RelinquishDisplayControl(const RelinquishDisplayControlCallback& callback) override;
  void SetDisplayWorkArea(int64_t display_id, const gfx::Size& size, const gfx::Insets& insets) override;
};
class  DisplayControllerAsyncWaiter {
 public:
  explicit DisplayControllerAsyncWaiter(DisplayController* proxy);
  ~DisplayControllerAsyncWaiter();
  void TakeDisplayControl(
      bool* out_status);
  void RelinquishDisplayControl(
      bool* out_status);

 private:
  DisplayController* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(DisplayControllerAsyncWaiter);
};

class  DisplayControllerProxy
    : public DisplayController {
 public:
  explicit DisplayControllerProxy(mojo::MessageReceiverWithResponder* receiver);
  void IncreaseInternalDisplayZoom() final;
  void DecreaseInternalDisplayZoom() final;
  void ResetInternalDisplayZoom() final;
  void RotateCurrentDisplayCW() final;
  void SwapPrimaryDisplay() final;
  void ToggleMirrorMode() final;
  void TakeDisplayControl(const TakeDisplayControlCallback& callback) final;
  void RelinquishDisplayControl(const RelinquishDisplayControlCallback& callback) final;
  void SetDisplayWorkArea(int64_t display_id, const gfx::Size& size, const gfx::Insets& insets) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  DisplayControllerStubDispatch {
 public:
  static bool Accept(DisplayController* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      DisplayController* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<DisplayController>>
class DisplayControllerStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  DisplayControllerStub() {}
  ~DisplayControllerStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return DisplayControllerStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return DisplayControllerStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  DisplayControllerRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  DisplayControllerResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace display

namespace mojo {

}  // namespace mojo

#endif  // SERVICES_UI_PUBLIC_INTERFACES_DISPLAY_DISPLAY_CONTROLLER_MOJOM_H_