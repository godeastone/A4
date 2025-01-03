// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_UI_PUBLIC_INTERFACES_ACCESSIBILITY_MANAGER_MOJOM_H_
#define SERVICES_UI_PUBLIC_INTERFACES_ACCESSIBILITY_MANAGER_MOJOM_H_

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
#include "services/ui/public/interfaces/accessibility_manager.mojom-shared.h"
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
class AccessibilityManager;
using AccessibilityManagerPtr = mojo::InterfacePtr<AccessibilityManager>;
using AccessibilityManagerPtrInfo = mojo::InterfacePtrInfo<AccessibilityManager>;
using ThreadSafeAccessibilityManagerPtr =
    mojo::ThreadSafeInterfacePtr<AccessibilityManager>;
using AccessibilityManagerRequest = mojo::InterfaceRequest<AccessibilityManager>;
using AccessibilityManagerAssociatedPtr =
    mojo::AssociatedInterfacePtr<AccessibilityManager>;
using ThreadSafeAccessibilityManagerAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<AccessibilityManager>;
using AccessibilityManagerAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<AccessibilityManager>;
using AccessibilityManagerAssociatedRequest =
    mojo::AssociatedInterfaceRequest<AccessibilityManager>;


class AccessibilityManagerProxy;

template <typename ImplRefTraits>
class AccessibilityManagerStub;

class AccessibilityManagerRequestValidator;

class  AccessibilityManager
    : public AccessibilityManagerInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = AccessibilityManagerProxy;

  template <typename ImplRefTraits>
  using Stub_ = AccessibilityManagerStub<ImplRefTraits>;

  using RequestValidator_ = AccessibilityManagerRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kSetHighContrastModeMinVersion = 0,
  };
  virtual ~AccessibilityManager() {}

  virtual void SetHighContrastMode(bool enabled) = 0;
};
class  AccessibilityManagerInterceptorForTesting : public AccessibilityManager {
  virtual AccessibilityManager* GetForwardingInterface() = 0;
  void SetHighContrastMode(bool enabled) override;
};
class  AccessibilityManagerAsyncWaiter {
 public:
  explicit AccessibilityManagerAsyncWaiter(AccessibilityManager* proxy);
  ~AccessibilityManagerAsyncWaiter();

 private:
  AccessibilityManager* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(AccessibilityManagerAsyncWaiter);
};

class  AccessibilityManagerProxy
    : public AccessibilityManager {
 public:
  explicit AccessibilityManagerProxy(mojo::MessageReceiverWithResponder* receiver);
  void SetHighContrastMode(bool enabled) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  AccessibilityManagerStubDispatch {
 public:
  static bool Accept(AccessibilityManager* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      AccessibilityManager* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<AccessibilityManager>>
class AccessibilityManagerStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  AccessibilityManagerStub() {}
  ~AccessibilityManagerStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return AccessibilityManagerStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return AccessibilityManagerStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  AccessibilityManagerRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace ui

namespace mojo {

}  // namespace mojo

#endif  // SERVICES_UI_PUBLIC_INTERFACES_ACCESSIBILITY_MANAGER_MOJOM_H_