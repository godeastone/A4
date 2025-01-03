// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_PLATFORM_SITE_ENGAGEMENT_MOJOM_H_
#define THIRD_PARTY_BLINK_PUBLIC_PLATFORM_SITE_ENGAGEMENT_MOJOM_H_

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
#include "third_party/blink/public/platform/site_engagement.mojom-shared.h"
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
class EngagementClient;
using EngagementClientPtr = mojo::InterfacePtr<EngagementClient>;
using EngagementClientPtrInfo = mojo::InterfacePtrInfo<EngagementClient>;
using ThreadSafeEngagementClientPtr =
    mojo::ThreadSafeInterfacePtr<EngagementClient>;
using EngagementClientRequest = mojo::InterfaceRequest<EngagementClient>;
using EngagementClientAssociatedPtr =
    mojo::AssociatedInterfacePtr<EngagementClient>;
using ThreadSafeEngagementClientAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<EngagementClient>;
using EngagementClientAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<EngagementClient>;
using EngagementClientAssociatedRequest =
    mojo::AssociatedInterfaceRequest<EngagementClient>;


class EngagementClientProxy;

template <typename ImplRefTraits>
class EngagementClientStub;

class EngagementClientRequestValidator;

class CONTENT_EXPORT EngagementClient
    : public EngagementClientInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = EngagementClientProxy;

  template <typename ImplRefTraits>
  using Stub_ = EngagementClientStub<ImplRefTraits>;

  using RequestValidator_ = EngagementClientRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kSetEngagementLevelMinVersion = 0,
  };
  virtual ~EngagementClient() {}

  virtual void SetEngagementLevel(const url::Origin& origin, EngagementLevel level) = 0;
};
class CONTENT_EXPORT EngagementClientInterceptorForTesting : public EngagementClient {
  virtual EngagementClient* GetForwardingInterface() = 0;
  void SetEngagementLevel(const url::Origin& origin, EngagementLevel level) override;
};
class CONTENT_EXPORT EngagementClientAsyncWaiter {
 public:
  explicit EngagementClientAsyncWaiter(EngagementClient* proxy);
  ~EngagementClientAsyncWaiter();

 private:
  EngagementClient* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(EngagementClientAsyncWaiter);
};

class CONTENT_EXPORT EngagementClientProxy
    : public EngagementClient {
 public:
  explicit EngagementClientProxy(mojo::MessageReceiverWithResponder* receiver);
  void SetEngagementLevel(const url::Origin& origin, EngagementLevel level) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class CONTENT_EXPORT EngagementClientStubDispatch {
 public:
  static bool Accept(EngagementClient* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      EngagementClient* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<EngagementClient>>
class EngagementClientStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  EngagementClientStub() {}
  ~EngagementClientStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return EngagementClientStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return EngagementClientStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class CONTENT_EXPORT EngagementClientRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace blink

namespace mojo {

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_PUBLIC_PLATFORM_SITE_ENGAGEMENT_MOJOM_H_