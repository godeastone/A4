// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef EXTENSIONS_COMMON_MOJO_APP_WINDOW_MOJOM_H_
#define EXTENSIONS_COMMON_MOJO_APP_WINDOW_MOJOM_H_

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
#include "extensions/common/mojo/app_window.mojom-shared.h"
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


namespace extensions {
namespace mojom {
class AppWindow;
using AppWindowPtr = mojo::InterfacePtr<AppWindow>;
using AppWindowPtrInfo = mojo::InterfacePtrInfo<AppWindow>;
using ThreadSafeAppWindowPtr =
    mojo::ThreadSafeInterfacePtr<AppWindow>;
using AppWindowRequest = mojo::InterfaceRequest<AppWindow>;
using AppWindowAssociatedPtr =
    mojo::AssociatedInterfacePtr<AppWindow>;
using ThreadSafeAppWindowAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<AppWindow>;
using AppWindowAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<AppWindow>;
using AppWindowAssociatedRequest =
    mojo::AssociatedInterfaceRequest<AppWindow>;


class AppWindowProxy;

template <typename ImplRefTraits>
class AppWindowStub;

class AppWindowRequestValidator;

class  AppWindow
    : public AppWindowInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = AppWindowProxy;

  template <typename ImplRefTraits>
  using Stub_ = AppWindowStub<ImplRefTraits>;

  using RequestValidator_ = AppWindowRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kSetVisuallyDeemphasizedMinVersion = 0,
  };
  virtual ~AppWindow() {}

  virtual void SetVisuallyDeemphasized(bool deemphasized) = 0;
};
class  AppWindowInterceptorForTesting : public AppWindow {
  virtual AppWindow* GetForwardingInterface() = 0;
  void SetVisuallyDeemphasized(bool deemphasized) override;
};
class  AppWindowAsyncWaiter {
 public:
  explicit AppWindowAsyncWaiter(AppWindow* proxy);
  ~AppWindowAsyncWaiter();

 private:
  AppWindow* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(AppWindowAsyncWaiter);
};

class  AppWindowProxy
    : public AppWindow {
 public:
  explicit AppWindowProxy(mojo::MessageReceiverWithResponder* receiver);
  void SetVisuallyDeemphasized(bool deemphasized) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  AppWindowStubDispatch {
 public:
  static bool Accept(AppWindow* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      AppWindow* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<AppWindow>>
class AppWindowStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  AppWindowStub() {}
  ~AppWindowStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return AppWindowStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return AppWindowStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  AppWindowRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace extensions

namespace mojo {

}  // namespace mojo

#endif  // EXTENSIONS_COMMON_MOJO_APP_WINDOW_MOJOM_H_