// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_UI_PUBLIC_INTERFACES_WINDOW_MANAGER_WINDOW_TREE_FACTORY_MOJOM_H_
#define SERVICES_UI_PUBLIC_INTERFACES_WINDOW_MANAGER_WINDOW_TREE_FACTORY_MOJOM_H_

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
#include "services/ui/public/interfaces/window_manager_window_tree_factory.mojom-shared.h"
#include "services/ui/public/interfaces/window_manager_constants.mojom.h"
#include "services/ui/public/interfaces/window_tree.mojom.h"
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
class WindowManagerWindowTreeFactory;
using WindowManagerWindowTreeFactoryPtr = mojo::InterfacePtr<WindowManagerWindowTreeFactory>;
using WindowManagerWindowTreeFactoryPtrInfo = mojo::InterfacePtrInfo<WindowManagerWindowTreeFactory>;
using ThreadSafeWindowManagerWindowTreeFactoryPtr =
    mojo::ThreadSafeInterfacePtr<WindowManagerWindowTreeFactory>;
using WindowManagerWindowTreeFactoryRequest = mojo::InterfaceRequest<WindowManagerWindowTreeFactory>;
using WindowManagerWindowTreeFactoryAssociatedPtr =
    mojo::AssociatedInterfacePtr<WindowManagerWindowTreeFactory>;
using ThreadSafeWindowManagerWindowTreeFactoryAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<WindowManagerWindowTreeFactory>;
using WindowManagerWindowTreeFactoryAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<WindowManagerWindowTreeFactory>;
using WindowManagerWindowTreeFactoryAssociatedRequest =
    mojo::AssociatedInterfaceRequest<WindowManagerWindowTreeFactory>;


class WindowManagerWindowTreeFactoryProxy;

template <typename ImplRefTraits>
class WindowManagerWindowTreeFactoryStub;

class WindowManagerWindowTreeFactoryRequestValidator;

class  WindowManagerWindowTreeFactory
    : public WindowManagerWindowTreeFactoryInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = WindowManagerWindowTreeFactoryProxy;

  template <typename ImplRefTraits>
  using Stub_ = WindowManagerWindowTreeFactoryStub<ImplRefTraits>;

  using RequestValidator_ = WindowManagerWindowTreeFactoryRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kCreateWindowTreeMinVersion = 0,
  };
  virtual ~WindowManagerWindowTreeFactory() {}

  virtual void CreateWindowTree(::ui::mojom::WindowTreeRequest tree_request, ::ui::mojom::WindowTreeClientPtr client, bool automatically_create_display_roots) = 0;
};
class  WindowManagerWindowTreeFactoryInterceptorForTesting : public WindowManagerWindowTreeFactory {
  virtual WindowManagerWindowTreeFactory* GetForwardingInterface() = 0;
  void CreateWindowTree(::ui::mojom::WindowTreeRequest tree_request, ::ui::mojom::WindowTreeClientPtr client, bool automatically_create_display_roots) override;
};
class  WindowManagerWindowTreeFactoryAsyncWaiter {
 public:
  explicit WindowManagerWindowTreeFactoryAsyncWaiter(WindowManagerWindowTreeFactory* proxy);
  ~WindowManagerWindowTreeFactoryAsyncWaiter();

 private:
  WindowManagerWindowTreeFactory* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(WindowManagerWindowTreeFactoryAsyncWaiter);
};

class  WindowManagerWindowTreeFactoryProxy
    : public WindowManagerWindowTreeFactory {
 public:
  explicit WindowManagerWindowTreeFactoryProxy(mojo::MessageReceiverWithResponder* receiver);
  void CreateWindowTree(::ui::mojom::WindowTreeRequest tree_request, ::ui::mojom::WindowTreeClientPtr client, bool automatically_create_display_roots) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  WindowManagerWindowTreeFactoryStubDispatch {
 public:
  static bool Accept(WindowManagerWindowTreeFactory* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      WindowManagerWindowTreeFactory* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<WindowManagerWindowTreeFactory>>
class WindowManagerWindowTreeFactoryStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  WindowManagerWindowTreeFactoryStub() {}
  ~WindowManagerWindowTreeFactoryStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return WindowManagerWindowTreeFactoryStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return WindowManagerWindowTreeFactoryStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  WindowManagerWindowTreeFactoryRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace ui

namespace mojo {

}  // namespace mojo

#endif  // SERVICES_UI_PUBLIC_INTERFACES_WINDOW_MANAGER_WINDOW_TREE_FACTORY_MOJOM_H_