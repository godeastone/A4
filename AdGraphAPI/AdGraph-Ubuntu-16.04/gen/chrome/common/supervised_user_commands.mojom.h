// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CHROME_COMMON_SUPERVISED_USER_COMMANDS_MOJOM_H_
#define CHROME_COMMON_SUPERVISED_USER_COMMANDS_MOJOM_H_

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
#include "chrome/common/supervised_user_commands.mojom-shared.h"
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


namespace supervised_user {
namespace mojom {
class SupervisedUserCommands;
using SupervisedUserCommandsPtr = mojo::InterfacePtr<SupervisedUserCommands>;
using SupervisedUserCommandsPtrInfo = mojo::InterfacePtrInfo<SupervisedUserCommands>;
using ThreadSafeSupervisedUserCommandsPtr =
    mojo::ThreadSafeInterfacePtr<SupervisedUserCommands>;
using SupervisedUserCommandsRequest = mojo::InterfaceRequest<SupervisedUserCommands>;
using SupervisedUserCommandsAssociatedPtr =
    mojo::AssociatedInterfacePtr<SupervisedUserCommands>;
using ThreadSafeSupervisedUserCommandsAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<SupervisedUserCommands>;
using SupervisedUserCommandsAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<SupervisedUserCommands>;
using SupervisedUserCommandsAssociatedRequest =
    mojo::AssociatedInterfaceRequest<SupervisedUserCommands>;


class SupervisedUserCommandsProxy;

template <typename ImplRefTraits>
class SupervisedUserCommandsStub;

class SupervisedUserCommandsRequestValidator;
class SupervisedUserCommandsResponseValidator;

class  SupervisedUserCommands
    : public SupervisedUserCommandsInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = SupervisedUserCommandsProxy;

  template <typename ImplRefTraits>
  using Stub_ = SupervisedUserCommandsStub<ImplRefTraits>;

  using RequestValidator_ = SupervisedUserCommandsRequestValidator;
  using ResponseValidator_ = SupervisedUserCommandsResponseValidator;
  enum MethodMinVersions : uint32_t {
    kGoBackMinVersion = 0,
    kRequestPermissionMinVersion = 0,
    kFeedbackMinVersion = 0,
  };
  virtual ~SupervisedUserCommands() {}

  virtual void GoBack() = 0;


  using RequestPermissionCallback = base::OnceCallback<void(bool)>;
  virtual void RequestPermission(RequestPermissionCallback callback) = 0;

  virtual void Feedback() = 0;
};
class  SupervisedUserCommandsInterceptorForTesting : public SupervisedUserCommands {
  virtual SupervisedUserCommands* GetForwardingInterface() = 0;
  void GoBack() override;
  void RequestPermission(RequestPermissionCallback callback) override;
  void Feedback() override;
};
class  SupervisedUserCommandsAsyncWaiter {
 public:
  explicit SupervisedUserCommandsAsyncWaiter(SupervisedUserCommands* proxy);
  ~SupervisedUserCommandsAsyncWaiter();
  void RequestPermission(
      bool* out_success);

 private:
  SupervisedUserCommands* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(SupervisedUserCommandsAsyncWaiter);
};

class  SupervisedUserCommandsProxy
    : public SupervisedUserCommands {
 public:
  explicit SupervisedUserCommandsProxy(mojo::MessageReceiverWithResponder* receiver);
  void GoBack() final;
  void RequestPermission(RequestPermissionCallback callback) final;
  void Feedback() final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  SupervisedUserCommandsStubDispatch {
 public:
  static bool Accept(SupervisedUserCommands* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      SupervisedUserCommands* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<SupervisedUserCommands>>
class SupervisedUserCommandsStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  SupervisedUserCommandsStub() {}
  ~SupervisedUserCommandsStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return SupervisedUserCommandsStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return SupervisedUserCommandsStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  SupervisedUserCommandsRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  SupervisedUserCommandsResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace supervised_user

namespace mojo {

}  // namespace mojo

#endif  // CHROME_COMMON_SUPERVISED_USER_COMMANDS_MOJOM_H_