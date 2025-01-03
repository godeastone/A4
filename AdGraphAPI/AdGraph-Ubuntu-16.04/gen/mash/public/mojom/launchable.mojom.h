// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MASH_PUBLIC_MOJOM_LAUNCHABLE_MOJOM_H_
#define MASH_PUBLIC_MOJOM_LAUNCHABLE_MOJOM_H_

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
#include "mash/public/mojom/launchable.mojom-shared.h"
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


namespace mash {
namespace mojom {
constexpr uint32_t kWindow = 1U;
constexpr uint32_t kIncognitoWindow = 2U;
class Launchable;
using LaunchablePtr = mojo::InterfacePtr<Launchable>;
using LaunchablePtrInfo = mojo::InterfacePtrInfo<Launchable>;
using ThreadSafeLaunchablePtr =
    mojo::ThreadSafeInterfacePtr<Launchable>;
using LaunchableRequest = mojo::InterfaceRequest<Launchable>;
using LaunchableAssociatedPtr =
    mojo::AssociatedInterfacePtr<Launchable>;
using ThreadSafeLaunchableAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<Launchable>;
using LaunchableAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<Launchable>;
using LaunchableAssociatedRequest =
    mojo::AssociatedInterfaceRequest<Launchable>;


class LaunchableProxy;

template <typename ImplRefTraits>
class LaunchableStub;

class LaunchableRequestValidator;

class  Launchable
    : public LaunchableInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = LaunchableProxy;

  template <typename ImplRefTraits>
  using Stub_ = LaunchableStub<ImplRefTraits>;

  using RequestValidator_ = LaunchableRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kLaunchMinVersion = 0,
  };
  virtual ~Launchable() {}

  virtual void Launch(uint32_t what, LaunchMode how) = 0;
};
class  LaunchableInterceptorForTesting : public Launchable {
  virtual Launchable* GetForwardingInterface() = 0;
  void Launch(uint32_t what, LaunchMode how) override;
};
class  LaunchableAsyncWaiter {
 public:
  explicit LaunchableAsyncWaiter(Launchable* proxy);
  ~LaunchableAsyncWaiter();

 private:
  Launchable* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(LaunchableAsyncWaiter);
};

class  LaunchableProxy
    : public Launchable {
 public:
  explicit LaunchableProxy(mojo::MessageReceiverWithResponder* receiver);
  void Launch(uint32_t what, LaunchMode how) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  LaunchableStubDispatch {
 public:
  static bool Accept(Launchable* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      Launchable* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<Launchable>>
class LaunchableStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  LaunchableStub() {}
  ~LaunchableStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return LaunchableStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return LaunchableStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  LaunchableRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace mash

namespace mojo {

}  // namespace mojo

#endif  // MASH_PUBLIC_MOJOM_LAUNCHABLE_MOJOM_H_