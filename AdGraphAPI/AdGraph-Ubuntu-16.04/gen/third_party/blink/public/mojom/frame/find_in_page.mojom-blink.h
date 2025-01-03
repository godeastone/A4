// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_FRAME_FIND_IN_PAGE_MOJOM_BLINK_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_FRAME_FIND_IN_PAGE_MOJOM_BLINK_H_

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
#include "third_party/blink/public/mojom/frame/find_in_page.mojom-shared.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-blink.h"

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
#include "third_party/blink/renderer/platform/platform_export.h"


namespace WTF {
struct blink_mojom_internal_StopFindAction_DataHashFn {
  static unsigned GetHash(const ::blink::mojom::StopFindAction& value) {
    using utype = std::underlying_type<::blink::mojom::StopFindAction>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::blink::mojom::StopFindAction& left, const ::blink::mojom::StopFindAction& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct DefaultHash<::blink::mojom::StopFindAction> {
  using Hash = blink_mojom_internal_StopFindAction_DataHashFn;
};

template <>
struct HashTraits<::blink::mojom::StopFindAction>
    : public GenericHashTraits<::blink::mojom::StopFindAction> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::blink::mojom::StopFindAction& value) {
    return value == static_cast<::blink::mojom::StopFindAction>(-1000000);
  }
  static void ConstructDeletedValue(::blink::mojom::StopFindAction& slot, bool) {
    slot = static_cast<::blink::mojom::StopFindAction>(-1000001);
  }
  static bool IsDeletedValue(const ::blink::mojom::StopFindAction& value) {
    return value == static_cast<::blink::mojom::StopFindAction>(-1000001);
  }
};
}  // namespace WTF


namespace blink {
namespace mojom {
namespace blink {
using StopFindAction = StopFindAction;  // Alias for definition in the parent namespace.
class FindInPage;
using FindInPagePtr = mojo::InterfacePtr<FindInPage>;
using RevocableFindInPagePtr = ::blink::RevocableInterfacePtr<FindInPage>;
using FindInPagePtrInfo = mojo::InterfacePtrInfo<FindInPage>;
using ThreadSafeFindInPagePtr =
    mojo::ThreadSafeInterfacePtr<FindInPage>;
using FindInPageRequest = mojo::InterfaceRequest<FindInPage>;
using FindInPageAssociatedPtr =
    mojo::AssociatedInterfacePtr<FindInPage>;
using ThreadSafeFindInPageAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<FindInPage>;
using FindInPageAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<FindInPage>;
using FindInPageAssociatedRequest =
    mojo::AssociatedInterfaceRequest<FindInPage>;


class FindInPageProxy;

template <typename ImplRefTraits>
class FindInPageStub;

class FindInPageRequestValidator;
class FindInPageResponseValidator;

class PLATFORM_EXPORT FindInPage
    : public FindInPageInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = FindInPageProxy;

  template <typename ImplRefTraits>
  using Stub_ = FindInPageStub<ImplRefTraits>;

  using RequestValidator_ = FindInPageRequestValidator;
  using ResponseValidator_ = FindInPageResponseValidator;
  enum MethodMinVersions : uint32_t {
    kStopFindingMinVersion = 0,
    kClearActiveFindMatchMinVersion = 0,
    kGetNearestFindResultMinVersion = 0,
    kActivateNearestFindResultMinVersion = 0,
    kFindMatchRectsMinVersion = 0,
  };
  virtual ~FindInPage() {}

  virtual void StopFinding(StopFindAction action) = 0;

  virtual void ClearActiveFindMatch() = 0;


  using GetNearestFindResultCallback = base::OnceCallback<void(float)>;
  virtual void GetNearestFindResult(const ::blink::WebFloatPoint& point, GetNearestFindResultCallback callback) = 0;


  using ActivateNearestFindResultCallback = base::OnceCallback<void(const ::blink::WebRect&, int32_t, int32_t, bool)>;
  virtual void ActivateNearestFindResult(const ::blink::WebFloatPoint& point, ActivateNearestFindResultCallback callback) = 0;


  using FindMatchRectsCallback = base::OnceCallback<void(int32_t, const WTF::Vector<::blink::WebFloatRect>&, const ::blink::WebFloatRect&)>;
  virtual void FindMatchRects(int32_t current_version, FindMatchRectsCallback callback) = 0;
};
class PLATFORM_EXPORT FindInPageInterceptorForTesting : public FindInPage {
  virtual FindInPage* GetForwardingInterface() = 0;
  void StopFinding(StopFindAction action) override;
  void ClearActiveFindMatch() override;
  void GetNearestFindResult(const ::blink::WebFloatPoint& point, GetNearestFindResultCallback callback) override;
  void ActivateNearestFindResult(const ::blink::WebFloatPoint& point, ActivateNearestFindResultCallback callback) override;
  void FindMatchRects(int32_t current_version, FindMatchRectsCallback callback) override;
};
class PLATFORM_EXPORT FindInPageAsyncWaiter {
 public:
  explicit FindInPageAsyncWaiter(FindInPage* proxy);
  ~FindInPageAsyncWaiter();
  void GetNearestFindResult(
      const ::blink::WebFloatPoint& point, float* out_distance);
  void ActivateNearestFindResult(
      const ::blink::WebFloatPoint& point, ::blink::WebRect* out_active_match_rect, int32_t* out_number_of_matches, int32_t* out_active_match_ordinal, bool* out_final_update);
  void FindMatchRects(
      int32_t current_version, int32_t* out_version, WTF::Vector<::blink::WebFloatRect>* out_rects, ::blink::WebFloatRect* out_active_match_rect);

 private:
  FindInPage* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(FindInPageAsyncWaiter);
};

class PLATFORM_EXPORT FindInPageProxy
    : public FindInPage {
 public:
  explicit FindInPageProxy(mojo::MessageReceiverWithResponder* receiver);
  void StopFinding(StopFindAction action) final;
  void ClearActiveFindMatch() final;
  void GetNearestFindResult(const ::blink::WebFloatPoint& point, GetNearestFindResultCallback callback) final;
  void ActivateNearestFindResult(const ::blink::WebFloatPoint& point, ActivateNearestFindResultCallback callback) final;
  void FindMatchRects(int32_t current_version, FindMatchRectsCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class PLATFORM_EXPORT FindInPageStubDispatch {
 public:
  static bool Accept(FindInPage* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      FindInPage* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<FindInPage>>
class FindInPageStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  FindInPageStub() {}
  ~FindInPageStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return FindInPageStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return FindInPageStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class PLATFORM_EXPORT FindInPageRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class PLATFORM_EXPORT FindInPageResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace blink
}  // namespace mojom
}  // namespace blink

namespace mojo {

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_FRAME_FIND_IN_PAGE_MOJOM_BLINK_H_