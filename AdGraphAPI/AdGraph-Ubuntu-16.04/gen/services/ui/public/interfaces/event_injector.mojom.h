// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_UI_PUBLIC_INTERFACES_EVENT_INJECTOR_MOJOM_H_
#define SERVICES_UI_PUBLIC_INTERFACES_EVENT_INJECTOR_MOJOM_H_

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
#include "services/ui/public/interfaces/event_injector.mojom-shared.h"
#include "ui/events/mojo/event.mojom.h"
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
class EventInjector;
using EventInjectorPtr = mojo::InterfacePtr<EventInjector>;
using EventInjectorPtrInfo = mojo::InterfacePtrInfo<EventInjector>;
using ThreadSafeEventInjectorPtr =
    mojo::ThreadSafeInterfacePtr<EventInjector>;
using EventInjectorRequest = mojo::InterfaceRequest<EventInjector>;
using EventInjectorAssociatedPtr =
    mojo::AssociatedInterfacePtr<EventInjector>;
using ThreadSafeEventInjectorAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<EventInjector>;
using EventInjectorAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<EventInjector>;
using EventInjectorAssociatedRequest =
    mojo::AssociatedInterfaceRequest<EventInjector>;


class EventInjectorProxy;

template <typename ImplRefTraits>
class EventInjectorStub;

class EventInjectorRequestValidator;
class EventInjectorResponseValidator;

class  EventInjector
    : public EventInjectorInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = EventInjectorProxy;

  template <typename ImplRefTraits>
  using Stub_ = EventInjectorStub<ImplRefTraits>;

  using RequestValidator_ = EventInjectorRequestValidator;
  using ResponseValidator_ = EventInjectorResponseValidator;
  enum MethodMinVersions : uint32_t {
    kInjectEventMinVersion = 0,
  };
  virtual ~EventInjector() {}


  using InjectEventCallback = base::OnceCallback<void(bool)>;
  virtual void InjectEvent(int64_t display_id, std::unique_ptr<ui::Event> event, InjectEventCallback callback) = 0;
};
class  EventInjectorInterceptorForTesting : public EventInjector {
  virtual EventInjector* GetForwardingInterface() = 0;
  void InjectEvent(int64_t display_id, std::unique_ptr<ui::Event> event, InjectEventCallback callback) override;
};
class  EventInjectorAsyncWaiter {
 public:
  explicit EventInjectorAsyncWaiter(EventInjector* proxy);
  ~EventInjectorAsyncWaiter();
  void InjectEvent(
      int64_t display_id, std::unique_ptr<ui::Event> event, bool* out_result);

 private:
  EventInjector* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(EventInjectorAsyncWaiter);
};

class  EventInjectorProxy
    : public EventInjector {
 public:
  explicit EventInjectorProxy(mojo::MessageReceiverWithResponder* receiver);
  void InjectEvent(int64_t display_id, std::unique_ptr<ui::Event> event, InjectEventCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  EventInjectorStubDispatch {
 public:
  static bool Accept(EventInjector* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      EventInjector* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<EventInjector>>
class EventInjectorStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  EventInjectorStub() {}
  ~EventInjectorStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return EventInjectorStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return EventInjectorStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  EventInjectorRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  EventInjectorResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace ui

namespace mojo {

}  // namespace mojo

#endif  // SERVICES_UI_PUBLIC_INTERFACES_EVENT_INJECTOR_MOJOM_H_