// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CHROME_BROWSER_UI_WEBUI_RESET_PASSWORD_RESET_PASSWORD_MOJOM_H_
#define CHROME_BROWSER_UI_WEBUI_RESET_PASSWORD_RESET_PASSWORD_MOJOM_H_

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
#include "chrome/browser/ui/webui/reset_password/reset_password.mojom-shared.h"
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


namespace mojom {
class ResetPasswordHandler;
using ResetPasswordHandlerPtr = mojo::InterfacePtr<ResetPasswordHandler>;
using ResetPasswordHandlerPtrInfo = mojo::InterfacePtrInfo<ResetPasswordHandler>;
using ThreadSafeResetPasswordHandlerPtr =
    mojo::ThreadSafeInterfacePtr<ResetPasswordHandler>;
using ResetPasswordHandlerRequest = mojo::InterfaceRequest<ResetPasswordHandler>;
using ResetPasswordHandlerAssociatedPtr =
    mojo::AssociatedInterfacePtr<ResetPasswordHandler>;
using ThreadSafeResetPasswordHandlerAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<ResetPasswordHandler>;
using ResetPasswordHandlerAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<ResetPasswordHandler>;
using ResetPasswordHandlerAssociatedRequest =
    mojo::AssociatedInterfaceRequest<ResetPasswordHandler>;


class ResetPasswordHandlerProxy;

template <typename ImplRefTraits>
class ResetPasswordHandlerStub;

class ResetPasswordHandlerRequestValidator;

class  ResetPasswordHandler
    : public ResetPasswordHandlerInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = ResetPasswordHandlerProxy;

  template <typename ImplRefTraits>
  using Stub_ = ResetPasswordHandlerStub<ImplRefTraits>;

  using RequestValidator_ = ResetPasswordHandlerRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kHandlePasswordResetMinVersion = 0,
  };
  virtual ~ResetPasswordHandler() {}

  virtual void HandlePasswordReset() = 0;
};
class  ResetPasswordHandlerInterceptorForTesting : public ResetPasswordHandler {
  virtual ResetPasswordHandler* GetForwardingInterface() = 0;
  void HandlePasswordReset() override;
};
class  ResetPasswordHandlerAsyncWaiter {
 public:
  explicit ResetPasswordHandlerAsyncWaiter(ResetPasswordHandler* proxy);
  ~ResetPasswordHandlerAsyncWaiter();

 private:
  ResetPasswordHandler* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(ResetPasswordHandlerAsyncWaiter);
};

class  ResetPasswordHandlerProxy
    : public ResetPasswordHandler {
 public:
  explicit ResetPasswordHandlerProxy(mojo::MessageReceiverWithResponder* receiver);
  void HandlePasswordReset() final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  ResetPasswordHandlerStubDispatch {
 public:
  static bool Accept(ResetPasswordHandler* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      ResetPasswordHandler* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<ResetPasswordHandler>>
class ResetPasswordHandlerStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  ResetPasswordHandlerStub() {}
  ~ResetPasswordHandlerStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ResetPasswordHandlerStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ResetPasswordHandlerStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  ResetPasswordHandlerRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom

namespace mojo {

}  // namespace mojo

#endif  // CHROME_BROWSER_UI_WEBUI_RESET_PASSWORD_RESET_PASSWORD_MOJOM_H_