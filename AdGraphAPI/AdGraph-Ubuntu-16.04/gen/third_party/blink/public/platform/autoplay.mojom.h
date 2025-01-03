// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_PLATFORM_AUTOPLAY_MOJOM_H_
#define THIRD_PARTY_BLINK_PUBLIC_PLATFORM_AUTOPLAY_MOJOM_H_

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
#include "third_party/blink/public/platform/autoplay.mojom-shared.h"
#include "url/mojom/origin.mojom.h"
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


namespace blink {
namespace mojom {
constexpr int32_t kAutoplayFlagNone = 0x00000;
constexpr int32_t kAutoplayFlagHighMediaEngagement = 0x00001;
constexpr int32_t kAutoplayFlagForceAllow = 0x00002;
class AutoplayConfigurationClient;
using AutoplayConfigurationClientPtr = mojo::InterfacePtr<AutoplayConfigurationClient>;
using AutoplayConfigurationClientPtrInfo = mojo::InterfacePtrInfo<AutoplayConfigurationClient>;
using ThreadSafeAutoplayConfigurationClientPtr =
    mojo::ThreadSafeInterfacePtr<AutoplayConfigurationClient>;
using AutoplayConfigurationClientRequest = mojo::InterfaceRequest<AutoplayConfigurationClient>;
using AutoplayConfigurationClientAssociatedPtr =
    mojo::AssociatedInterfacePtr<AutoplayConfigurationClient>;
using ThreadSafeAutoplayConfigurationClientAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<AutoplayConfigurationClient>;
using AutoplayConfigurationClientAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<AutoplayConfigurationClient>;
using AutoplayConfigurationClientAssociatedRequest =
    mojo::AssociatedInterfaceRequest<AutoplayConfigurationClient>;


class AutoplayConfigurationClientProxy;

template <typename ImplRefTraits>
class AutoplayConfigurationClientStub;

class AutoplayConfigurationClientRequestValidator;

class CONTENT_EXPORT AutoplayConfigurationClient
    : public AutoplayConfigurationClientInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = AutoplayConfigurationClientProxy;

  template <typename ImplRefTraits>
  using Stub_ = AutoplayConfigurationClientStub<ImplRefTraits>;

  using RequestValidator_ = AutoplayConfigurationClientRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kAddAutoplayFlagsMinVersion = 0,
  };
  virtual ~AutoplayConfigurationClient() {}

  virtual void AddAutoplayFlags(const url::Origin& origin, int32_t flags) = 0;
};
class CONTENT_EXPORT AutoplayConfigurationClientInterceptorForTesting : public AutoplayConfigurationClient {
  virtual AutoplayConfigurationClient* GetForwardingInterface() = 0;
  void AddAutoplayFlags(const url::Origin& origin, int32_t flags) override;
};
class CONTENT_EXPORT AutoplayConfigurationClientAsyncWaiter {
 public:
  explicit AutoplayConfigurationClientAsyncWaiter(AutoplayConfigurationClient* proxy);
  ~AutoplayConfigurationClientAsyncWaiter();

 private:
  AutoplayConfigurationClient* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(AutoplayConfigurationClientAsyncWaiter);
};

class CONTENT_EXPORT AutoplayConfigurationClientProxy
    : public AutoplayConfigurationClient {
 public:
  explicit AutoplayConfigurationClientProxy(mojo::MessageReceiverWithResponder* receiver);
  void AddAutoplayFlags(const url::Origin& origin, int32_t flags) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class CONTENT_EXPORT AutoplayConfigurationClientStubDispatch {
 public:
  static bool Accept(AutoplayConfigurationClient* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      AutoplayConfigurationClient* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<AutoplayConfigurationClient>>
class AutoplayConfigurationClientStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  AutoplayConfigurationClientStub() {}
  ~AutoplayConfigurationClientStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return AutoplayConfigurationClientStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return AutoplayConfigurationClientStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class CONTENT_EXPORT AutoplayConfigurationClientRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace blink

namespace mojo {

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_PUBLIC_PLATFORM_AUTOPLAY_MOJOM_H_