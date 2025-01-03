// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_FRAME_FIND_IN_PAGE_MOJOM_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_FRAME_FIND_IN_PAGE_MOJOM_H_

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
#include "ui/gfx/geometry/mojo/geometry.mojom.h"
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
#include "third_party/blink/common/common_export.h"


namespace blink {
namespace mojom {
class FindInPage;
using FindInPagePtr = mojo::InterfacePtr<FindInPage>;
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

class BLINK_COMMON_EXPORT FindInPage
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
  virtual void GetNearestFindResult(const gfx::PointF& point, GetNearestFindResultCallback callback) = 0;


  using ActivateNearestFindResultCallback = base::OnceCallback<void(const gfx::Rect&, int32_t, int32_t, bool)>;
  virtual void ActivateNearestFindResult(const gfx::PointF& point, ActivateNearestFindResultCallback callback) = 0;


  using FindMatchRectsCallback = base::OnceCallback<void(int32_t, const std::vector<gfx::RectF>&, const gfx::RectF&)>;
  virtual void FindMatchRects(int32_t current_version, FindMatchRectsCallback callback) = 0;
};
class BLINK_COMMON_EXPORT FindInPageInterceptorForTesting : public FindInPage {
  virtual FindInPage* GetForwardingInterface() = 0;
  void StopFinding(StopFindAction action) override;
  void ClearActiveFindMatch() override;
  void GetNearestFindResult(const gfx::PointF& point, GetNearestFindResultCallback callback) override;
  void ActivateNearestFindResult(const gfx::PointF& point, ActivateNearestFindResultCallback callback) override;
  void FindMatchRects(int32_t current_version, FindMatchRectsCallback callback) override;
};
class BLINK_COMMON_EXPORT FindInPageAsyncWaiter {
 public:
  explicit FindInPageAsyncWaiter(FindInPage* proxy);
  ~FindInPageAsyncWaiter();
  void GetNearestFindResult(
      const gfx::PointF& point, float* out_distance);
  void ActivateNearestFindResult(
      const gfx::PointF& point, gfx::Rect* out_active_match_rect, int32_t* out_number_of_matches, int32_t* out_active_match_ordinal, bool* out_final_update);
  void FindMatchRects(
      int32_t current_version, int32_t* out_version, std::vector<gfx::RectF>* out_rects, gfx::RectF* out_active_match_rect);

 private:
  FindInPage* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(FindInPageAsyncWaiter);
};

class BLINK_COMMON_EXPORT FindInPageProxy
    : public FindInPage {
 public:
  explicit FindInPageProxy(mojo::MessageReceiverWithResponder* receiver);
  void StopFinding(StopFindAction action) final;
  void ClearActiveFindMatch() final;
  void GetNearestFindResult(const gfx::PointF& point, GetNearestFindResultCallback callback) final;
  void ActivateNearestFindResult(const gfx::PointF& point, ActivateNearestFindResultCallback callback) final;
  void FindMatchRects(int32_t current_version, FindMatchRectsCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class BLINK_COMMON_EXPORT FindInPageStubDispatch {
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
class BLINK_COMMON_EXPORT FindInPageRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class BLINK_COMMON_EXPORT FindInPageResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace blink

namespace mojo {

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_FRAME_FIND_IN_PAGE_MOJOM_H_