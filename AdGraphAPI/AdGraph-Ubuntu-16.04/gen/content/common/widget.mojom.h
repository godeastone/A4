// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_WIDGET_MOJOM_H_
#define CONTENT_COMMON_WIDGET_MOJOM_H_

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
#include "content/common/widget.mojom-shared.h"
#include "content/common/input/input_handler.mojom.h"
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
#include "content/common/content_export.h"


namespace content {
namespace mojom {
class Widget;
using WidgetPtr = mojo::InterfacePtr<Widget>;
using WidgetPtrInfo = mojo::InterfacePtrInfo<Widget>;
using ThreadSafeWidgetPtr =
    mojo::ThreadSafeInterfacePtr<Widget>;
using WidgetRequest = mojo::InterfaceRequest<Widget>;
using WidgetAssociatedPtr =
    mojo::AssociatedInterfacePtr<Widget>;
using ThreadSafeWidgetAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<Widget>;
using WidgetAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<Widget>;
using WidgetAssociatedRequest =
    mojo::AssociatedInterfaceRequest<Widget>;


class WidgetProxy;

template <typename ImplRefTraits>
class WidgetStub;

class WidgetRequestValidator;

class CONTENT_EXPORT Widget
    : public WidgetInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = WidgetProxy;

  template <typename ImplRefTraits>
  using Stub_ = WidgetStub<ImplRefTraits>;

  using RequestValidator_ = WidgetRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kSetupWidgetInputHandlerMinVersion = 0,
  };
  virtual ~Widget() {}

  virtual void SetupWidgetInputHandler(::content::mojom::WidgetInputHandlerRequest request, ::content::mojom::WidgetInputHandlerHostPtr host) = 0;
};
class CONTENT_EXPORT WidgetInterceptorForTesting : public Widget {
  virtual Widget* GetForwardingInterface() = 0;
  void SetupWidgetInputHandler(::content::mojom::WidgetInputHandlerRequest request, ::content::mojom::WidgetInputHandlerHostPtr host) override;
};
class CONTENT_EXPORT WidgetAsyncWaiter {
 public:
  explicit WidgetAsyncWaiter(Widget* proxy);
  ~WidgetAsyncWaiter();

 private:
  Widget* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(WidgetAsyncWaiter);
};

class CONTENT_EXPORT WidgetProxy
    : public Widget {
 public:
  explicit WidgetProxy(mojo::MessageReceiverWithResponder* receiver);
  void SetupWidgetInputHandler(::content::mojom::WidgetInputHandlerRequest request, ::content::mojom::WidgetInputHandlerHostPtr host) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class CONTENT_EXPORT WidgetStubDispatch {
 public:
  static bool Accept(Widget* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      Widget* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<Widget>>
class WidgetStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  WidgetStub() {}
  ~WidgetStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return WidgetStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return WidgetStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class CONTENT_EXPORT WidgetRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace content

namespace mojo {

}  // namespace mojo

#endif  // CONTENT_COMMON_WIDGET_MOJOM_H_