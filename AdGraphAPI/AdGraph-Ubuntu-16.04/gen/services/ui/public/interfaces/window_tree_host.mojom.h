// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_UI_PUBLIC_INTERFACES_WINDOW_TREE_HOST_MOJOM_H_
#define SERVICES_UI_PUBLIC_INTERFACES_WINDOW_TREE_HOST_MOJOM_H_

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
#include "services/ui/public/interfaces/window_tree_host.mojom-shared.h"
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


namespace ui {
namespace mojom {
class WindowTreeHost;
using WindowTreeHostPtr = mojo::InterfacePtr<WindowTreeHost>;
using WindowTreeHostPtrInfo = mojo::InterfacePtrInfo<WindowTreeHost>;
using ThreadSafeWindowTreeHostPtr =
    mojo::ThreadSafeInterfacePtr<WindowTreeHost>;
using WindowTreeHostRequest = mojo::InterfaceRequest<WindowTreeHost>;
using WindowTreeHostAssociatedPtr =
    mojo::AssociatedInterfacePtr<WindowTreeHost>;
using ThreadSafeWindowTreeHostAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<WindowTreeHost>;
using WindowTreeHostAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<WindowTreeHost>;
using WindowTreeHostAssociatedRequest =
    mojo::AssociatedInterfaceRequest<WindowTreeHost>;


class WindowTreeHostProxy;

template <typename ImplRefTraits>
class WindowTreeHostStub;

class WindowTreeHostRequestValidator;

class  WindowTreeHost
    : public WindowTreeHostInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = WindowTreeHostProxy;

  template <typename ImplRefTraits>
  using Stub_ = WindowTreeHostStub<ImplRefTraits>;

  using RequestValidator_ = WindowTreeHostRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kSetSizeMinVersion = 0,
    kSetTitleMinVersion = 0,
  };
  virtual ~WindowTreeHost() {}

  virtual void SetSize(const gfx::Size& size) = 0;

  virtual void SetTitle(const std::string& title) = 0;
};
class  WindowTreeHostInterceptorForTesting : public WindowTreeHost {
  virtual WindowTreeHost* GetForwardingInterface() = 0;
  void SetSize(const gfx::Size& size) override;
  void SetTitle(const std::string& title) override;
};
class  WindowTreeHostAsyncWaiter {
 public:
  explicit WindowTreeHostAsyncWaiter(WindowTreeHost* proxy);
  ~WindowTreeHostAsyncWaiter();

 private:
  WindowTreeHost* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(WindowTreeHostAsyncWaiter);
};

class  WindowTreeHostProxy
    : public WindowTreeHost {
 public:
  explicit WindowTreeHostProxy(mojo::MessageReceiverWithResponder* receiver);
  void SetSize(const gfx::Size& size) final;
  void SetTitle(const std::string& title) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  WindowTreeHostStubDispatch {
 public:
  static bool Accept(WindowTreeHost* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      WindowTreeHost* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<WindowTreeHost>>
class WindowTreeHostStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  WindowTreeHostStub() {}
  ~WindowTreeHostStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return WindowTreeHostStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return WindowTreeHostStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  WindowTreeHostRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace ui

namespace mojo {

}  // namespace mojo

#endif  // SERVICES_UI_PUBLIC_INTERFACES_WINDOW_TREE_HOST_MOJOM_H_