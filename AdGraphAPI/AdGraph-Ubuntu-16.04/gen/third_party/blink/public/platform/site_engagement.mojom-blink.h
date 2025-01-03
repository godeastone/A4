// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_PLATFORM_SITE_ENGAGEMENT_MOJOM_BLINK_H_
#define THIRD_PARTY_BLINK_PUBLIC_PLATFORM_SITE_ENGAGEMENT_MOJOM_BLINK_H_

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
#include "url/mojom/origin.mojom-blink.h"

#include "mojo/public/cpp/bindings/lib/wtf_clone_equals_util.h"
#include "mojo/public/cpp/bindings/lib/wtf_hash_util.h"
#include "third_party/blink/renderer/platform/mojo/revocable_interface_ptr.h"
#include "third_party/blink/renderer/platform/wtf/hash_functions.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

#include "mojo/public/cpp/bindings/associated_interface_ptr.h"
#include "mojo/public/cpp/bindings/associated_interface_ptr_info.h"
#include "mojo/public/cpp/bindings/associated_interface_request.h"
#include "mojo/public/cpp/bindings/interface_ptr.h"
#include "mojo/public/cpp/bindings/interface_request.h"
#include "mojo/public/cpp/bindings/lib/control_message_handler.h"
#include "mojo/public/cpp/bindings/raw_ptr_impl_ref_traits.h"
#include "mojo/public/cpp/bindings/thread_safe_interface_ptr.h"
#include "third_party/blink/renderer/platform/mojo/revocable_interface_ptr.h"


#include "mojo/public/cpp/bindings/lib/native_enum_serialization.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "third_party/blink/public/platform/web_common.h"


namespace WTF {
struct blink_mojom_internal_EngagementLevel_DataHashFn {
  static unsigned GetHash(const ::blink::mojom::EngagementLevel& value) {
    using utype = std::underlying_type<::blink::mojom::EngagementLevel>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::blink::mojom::EngagementLevel& left, const ::blink::mojom::EngagementLevel& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct DefaultHash<::blink::mojom::EngagementLevel> {
  using Hash = blink_mojom_internal_EngagementLevel_DataHashFn;
};

template <>
struct HashTraits<::blink::mojom::EngagementLevel>
    : public GenericHashTraits<::blink::mojom::EngagementLevel> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::blink::mojom::EngagementLevel& value) {
    return value == static_cast<::blink::mojom::EngagementLevel>(-1000000);
  }
  static void ConstructDeletedValue(::blink::mojom::EngagementLevel& slot, bool) {
    slot = static_cast<::blink::mojom::EngagementLevel>(-1000001);
  }
  static bool IsDeletedValue(const ::blink::mojom::EngagementLevel& value) {
    return value == static_cast<::blink::mojom::EngagementLevel>(-1000001);
  }
};
}  // namespace WTF


namespace blink {
namespace mojom {
namespace blink {
using EngagementLevel = EngagementLevel;  // Alias for definition in the parent namespace.
class EngagementClient;
using EngagementClientPtr = mojo::InterfacePtr<EngagementClient>;
using RevocableEngagementClientPtr = ::blink::RevocableInterfacePtr<EngagementClient>;
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

class BLINK_PLATFORM_EXPORT EngagementClient
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

  virtual void SetEngagementLevel(const scoped_refptr<const ::blink::SecurityOrigin>& origin, EngagementLevel level) = 0;
};
class BLINK_PLATFORM_EXPORT EngagementClientInterceptorForTesting : public EngagementClient {
  virtual EngagementClient* GetForwardingInterface() = 0;
  void SetEngagementLevel(const scoped_refptr<const ::blink::SecurityOrigin>& origin, EngagementLevel level) override;
};
class BLINK_PLATFORM_EXPORT EngagementClientAsyncWaiter {
 public:
  explicit EngagementClientAsyncWaiter(EngagementClient* proxy);
  ~EngagementClientAsyncWaiter();

 private:
  EngagementClient* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(EngagementClientAsyncWaiter);
};

class BLINK_PLATFORM_EXPORT EngagementClientProxy
    : public EngagementClient {
 public:
  explicit EngagementClientProxy(mojo::MessageReceiverWithResponder* receiver);
  void SetEngagementLevel(const scoped_refptr<const ::blink::SecurityOrigin>& origin, EngagementLevel level) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class BLINK_PLATFORM_EXPORT EngagementClientStubDispatch {
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
class BLINK_PLATFORM_EXPORT EngagementClientRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace blink
}  // namespace mojom
}  // namespace blink

namespace mojo {

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_PUBLIC_PLATFORM_SITE_ENGAGEMENT_MOJOM_BLINK_H_