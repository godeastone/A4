// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_UI_PUBLIC_INTERFACES_WINDOW_TREE_HOST_FACTORY_MOJOM_H_
#define SERVICES_UI_PUBLIC_INTERFACES_WINDOW_TREE_HOST_FACTORY_MOJOM_H_

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
#include "services/ui/public/interfaces/window_tree_host_factory.mojom-shared.h"
#include "services/ui/public/interfaces/window_tree.mojom.h"
#include "services/ui/public/interfaces/window_tree_host.mojom.h"
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
class WindowTreeHostFactory;
using WindowTreeHostFactoryPtr = mojo::InterfacePtr<WindowTreeHostFactory>;
using WindowTreeHostFactoryPtrInfo = mojo::InterfacePtrInfo<WindowTreeHostFactory>;
using ThreadSafeWindowTreeHostFactoryPtr =
    mojo::ThreadSafeInterfacePtr<WindowTreeHostFactory>;
using WindowTreeHostFactoryRequest = mojo::InterfaceRequest<WindowTreeHostFactory>;
using WindowTreeHostFactoryAssociatedPtr =
    mojo::AssociatedInterfacePtr<WindowTreeHostFactory>;
using ThreadSafeWindowTreeHostFactoryAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<WindowTreeHostFactory>;
using WindowTreeHostFactoryAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<WindowTreeHostFactory>;
using WindowTreeHostFactoryAssociatedRequest =
    mojo::AssociatedInterfaceRequest<WindowTreeHostFactory>;


class WindowTreeHostFactoryProxy;

template <typename ImplRefTraits>
class WindowTreeHostFactoryStub;

class WindowTreeHostFactoryRequestValidator;

class  WindowTreeHostFactory
    : public WindowTreeHostFactoryInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = WindowTreeHostFactoryProxy;

  template <typename ImplRefTraits>
  using Stub_ = WindowTreeHostFactoryStub<ImplRefTraits>;

  using RequestValidator_ = WindowTreeHostFactoryRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kCreateWindowTreeHostMinVersion = 0,
  };
  virtual ~WindowTreeHostFactory() {}

  virtual void CreateWindowTreeHost(::ui::mojom::WindowTreeHostRequest window_tree_host, ::ui::mojom::WindowTreeClientPtr tree_client) = 0;
};
class  WindowTreeHostFactoryInterceptorForTesting : public WindowTreeHostFactory {
  virtual WindowTreeHostFactory* GetForwardingInterface() = 0;
  void CreateWindowTreeHost(::ui::mojom::WindowTreeHostRequest window_tree_host, ::ui::mojom::WindowTreeClientPtr tree_client) override;
};
class  WindowTreeHostFactoryAsyncWaiter {
 public:
  explicit WindowTreeHostFactoryAsyncWaiter(WindowTreeHostFactory* proxy);
  ~WindowTreeHostFactoryAsyncWaiter();

 private:
  WindowTreeHostFactory* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(WindowTreeHostFactoryAsyncWaiter);
};

class  WindowTreeHostFactoryProxy
    : public WindowTreeHostFactory {
 public:
  explicit WindowTreeHostFactoryProxy(mojo::MessageReceiverWithResponder* receiver);
  void CreateWindowTreeHost(::ui::mojom::WindowTreeHostRequest window_tree_host, ::ui::mojom::WindowTreeClientPtr tree_client) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  WindowTreeHostFactoryStubDispatch {
 public:
  static bool Accept(WindowTreeHostFactory* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      WindowTreeHostFactory* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<WindowTreeHostFactory>>
class WindowTreeHostFactoryStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  WindowTreeHostFactoryStub() {}
  ~WindowTreeHostFactoryStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return WindowTreeHostFactoryStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return WindowTreeHostFactoryStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  WindowTreeHostFactoryRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace ui

namespace mojo {

}  // namespace mojo

#endif  // SERVICES_UI_PUBLIC_INTERFACES_WINDOW_TREE_HOST_FACTORY_MOJOM_H_