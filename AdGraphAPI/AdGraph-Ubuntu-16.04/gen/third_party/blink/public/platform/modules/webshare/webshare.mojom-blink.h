// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_WEBSHARE_WEBSHARE_MOJOM_BLINK_H_
#define THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_WEBSHARE_WEBSHARE_MOJOM_BLINK_H_

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
#include "third_party/blink/public/platform/modules/webshare/webshare.mojom-shared.h"
#include "url/mojom/url.mojom-blink.h"

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
struct blink_mojom_internal_ShareError_DataHashFn {
  static unsigned GetHash(const ::blink::mojom::ShareError& value) {
    using utype = std::underlying_type<::blink::mojom::ShareError>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::blink::mojom::ShareError& left, const ::blink::mojom::ShareError& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct DefaultHash<::blink::mojom::ShareError> {
  using Hash = blink_mojom_internal_ShareError_DataHashFn;
};

template <>
struct HashTraits<::blink::mojom::ShareError>
    : public GenericHashTraits<::blink::mojom::ShareError> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::blink::mojom::ShareError& value) {
    return value == static_cast<::blink::mojom::ShareError>(-1000000);
  }
  static void ConstructDeletedValue(::blink::mojom::ShareError& slot, bool) {
    slot = static_cast<::blink::mojom::ShareError>(-1000001);
  }
  static bool IsDeletedValue(const ::blink::mojom::ShareError& value) {
    return value == static_cast<::blink::mojom::ShareError>(-1000001);
  }
};
}  // namespace WTF


namespace blink {
namespace mojom {
namespace blink {
using ShareError = ShareError;  // Alias for definition in the parent namespace.
class ShareService;
using ShareServicePtr = mojo::InterfacePtr<ShareService>;
using RevocableShareServicePtr = ::blink::RevocableInterfacePtr<ShareService>;
using ShareServicePtrInfo = mojo::InterfacePtrInfo<ShareService>;
using ThreadSafeShareServicePtr =
    mojo::ThreadSafeInterfacePtr<ShareService>;
using ShareServiceRequest = mojo::InterfaceRequest<ShareService>;
using ShareServiceAssociatedPtr =
    mojo::AssociatedInterfacePtr<ShareService>;
using ThreadSafeShareServiceAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<ShareService>;
using ShareServiceAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<ShareService>;
using ShareServiceAssociatedRequest =
    mojo::AssociatedInterfaceRequest<ShareService>;


class ShareServiceProxy;

template <typename ImplRefTraits>
class ShareServiceStub;

class ShareServiceRequestValidator;
class ShareServiceResponseValidator;

class BLINK_PLATFORM_EXPORT ShareService
    : public ShareServiceInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = ShareServiceProxy;

  template <typename ImplRefTraits>
  using Stub_ = ShareServiceStub<ImplRefTraits>;

  using RequestValidator_ = ShareServiceRequestValidator;
  using ResponseValidator_ = ShareServiceResponseValidator;
  enum MethodMinVersions : uint32_t {
    kShareMinVersion = 0,
  };
  virtual ~ShareService() {}


  using ShareCallback = base::OnceCallback<void(ShareError)>;
  virtual void Share(const WTF::String& title, const WTF::String& text, const ::blink::KURL& url, ShareCallback callback) = 0;
};
class BLINK_PLATFORM_EXPORT ShareServiceInterceptorForTesting : public ShareService {
  virtual ShareService* GetForwardingInterface() = 0;
  void Share(const WTF::String& title, const WTF::String& text, const ::blink::KURL& url, ShareCallback callback) override;
};
class BLINK_PLATFORM_EXPORT ShareServiceAsyncWaiter {
 public:
  explicit ShareServiceAsyncWaiter(ShareService* proxy);
  ~ShareServiceAsyncWaiter();
  void Share(
      const WTF::String& title, const WTF::String& text, const ::blink::KURL& url, ShareError* out_error);

 private:
  ShareService* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(ShareServiceAsyncWaiter);
};

class BLINK_PLATFORM_EXPORT ShareServiceProxy
    : public ShareService {
 public:
  explicit ShareServiceProxy(mojo::MessageReceiverWithResponder* receiver);
  void Share(const WTF::String& title, const WTF::String& text, const ::blink::KURL& url, ShareCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class BLINK_PLATFORM_EXPORT ShareServiceStubDispatch {
 public:
  static bool Accept(ShareService* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      ShareService* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<ShareService>>
class ShareServiceStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  ShareServiceStub() {}
  ~ShareServiceStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ShareServiceStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ShareServiceStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class BLINK_PLATFORM_EXPORT ShareServiceRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class BLINK_PLATFORM_EXPORT ShareServiceResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace blink
}  // namespace mojom
}  // namespace blink

namespace mojo {

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_WEBSHARE_WEBSHARE_MOJOM_BLINK_H_