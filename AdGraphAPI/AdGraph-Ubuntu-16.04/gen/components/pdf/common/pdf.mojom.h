// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_PDF_COMMON_PDF_MOJOM_H_
#define COMPONENTS_PDF_COMMON_PDF_MOJOM_H_

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
#include "components/pdf/common/pdf.mojom-shared.h"
#include "third_party/blink/public/platform/referrer.mojom.h"
#include "ui/gfx/geometry/mojo/geometry.mojom.h"
#include "url/mojom/url.mojom.h"
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


namespace pdf {
namespace mojom {
class PdfListener;
using PdfListenerPtr = mojo::InterfacePtr<PdfListener>;
using PdfListenerPtrInfo = mojo::InterfacePtrInfo<PdfListener>;
using ThreadSafePdfListenerPtr =
    mojo::ThreadSafeInterfacePtr<PdfListener>;
using PdfListenerRequest = mojo::InterfaceRequest<PdfListener>;
using PdfListenerAssociatedPtr =
    mojo::AssociatedInterfacePtr<PdfListener>;
using ThreadSafePdfListenerAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<PdfListener>;
using PdfListenerAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<PdfListener>;
using PdfListenerAssociatedRequest =
    mojo::AssociatedInterfaceRequest<PdfListener>;

class PdfService;
using PdfServicePtr = mojo::InterfacePtr<PdfService>;
using PdfServicePtrInfo = mojo::InterfacePtrInfo<PdfService>;
using ThreadSafePdfServicePtr =
    mojo::ThreadSafeInterfacePtr<PdfService>;
using PdfServiceRequest = mojo::InterfaceRequest<PdfService>;
using PdfServiceAssociatedPtr =
    mojo::AssociatedInterfacePtr<PdfService>;
using ThreadSafePdfServiceAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<PdfService>;
using PdfServiceAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<PdfService>;
using PdfServiceAssociatedRequest =
    mojo::AssociatedInterfaceRequest<PdfService>;


class PdfListenerProxy;

template <typename ImplRefTraits>
class PdfListenerStub;

class PdfListenerRequestValidator;

class  PdfListener
    : public PdfListenerInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = PdfListenerProxy;

  template <typename ImplRefTraits>
  using Stub_ = PdfListenerStub<ImplRefTraits>;

  using RequestValidator_ = PdfListenerRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kSetCaretPositionMinVersion = 0,
    kMoveRangeSelectionExtentMinVersion = 0,
    kSetSelectionBoundsMinVersion = 0,
  };
  virtual ~PdfListener() {}

  virtual void SetCaretPosition(const gfx::PointF& position) = 0;

  virtual void MoveRangeSelectionExtent(const gfx::PointF& extent) = 0;

  virtual void SetSelectionBounds(const gfx::PointF& base, const gfx::PointF& extent) = 0;
};
class  PdfListenerInterceptorForTesting : public PdfListener {
  virtual PdfListener* GetForwardingInterface() = 0;
  void SetCaretPosition(const gfx::PointF& position) override;
  void MoveRangeSelectionExtent(const gfx::PointF& extent) override;
  void SetSelectionBounds(const gfx::PointF& base, const gfx::PointF& extent) override;
};
class  PdfListenerAsyncWaiter {
 public:
  explicit PdfListenerAsyncWaiter(PdfListener* proxy);
  ~PdfListenerAsyncWaiter();

 private:
  PdfListener* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(PdfListenerAsyncWaiter);
};

class PdfServiceProxy;

template <typename ImplRefTraits>
class PdfServiceStub;

class PdfServiceRequestValidator;

class  PdfService
    : public PdfServiceInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = PdfServiceProxy;

  template <typename ImplRefTraits>
  using Stub_ = PdfServiceStub<ImplRefTraits>;

  using RequestValidator_ = PdfServiceRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kSetListenerMinVersion = 0,
    kUpdateContentRestrictionsMinVersion = 0,
    kHasUnsupportedFeatureMinVersion = 0,
    kSaveUrlAsMinVersion = 0,
    kSelectionChangedMinVersion = 0,
  };
  virtual ~PdfService() {}

  virtual void SetListener(PdfListenerPtr client) = 0;

  virtual void UpdateContentRestrictions(int32_t restrictions) = 0;

  virtual void HasUnsupportedFeature() = 0;

  virtual void SaveUrlAs(const GURL& url, const content::Referrer& referrer) = 0;

  virtual void SelectionChanged(const gfx::PointF& left, int32_t left_height, const gfx::PointF& right, int32_t right_height) = 0;
};
class  PdfServiceInterceptorForTesting : public PdfService {
  virtual PdfService* GetForwardingInterface() = 0;
  void SetListener(PdfListenerPtr client) override;
  void UpdateContentRestrictions(int32_t restrictions) override;
  void HasUnsupportedFeature() override;
  void SaveUrlAs(const GURL& url, const content::Referrer& referrer) override;
  void SelectionChanged(const gfx::PointF& left, int32_t left_height, const gfx::PointF& right, int32_t right_height) override;
};
class  PdfServiceAsyncWaiter {
 public:
  explicit PdfServiceAsyncWaiter(PdfService* proxy);
  ~PdfServiceAsyncWaiter();

 private:
  PdfService* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(PdfServiceAsyncWaiter);
};

class  PdfListenerProxy
    : public PdfListener {
 public:
  explicit PdfListenerProxy(mojo::MessageReceiverWithResponder* receiver);
  void SetCaretPosition(const gfx::PointF& position) final;
  void MoveRangeSelectionExtent(const gfx::PointF& extent) final;
  void SetSelectionBounds(const gfx::PointF& base, const gfx::PointF& extent) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class  PdfServiceProxy
    : public PdfService {
 public:
  explicit PdfServiceProxy(mojo::MessageReceiverWithResponder* receiver);
  void SetListener(PdfListenerPtr client) final;
  void UpdateContentRestrictions(int32_t restrictions) final;
  void HasUnsupportedFeature() final;
  void SaveUrlAs(const GURL& url, const content::Referrer& referrer) final;
  void SelectionChanged(const gfx::PointF& left, int32_t left_height, const gfx::PointF& right, int32_t right_height) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  PdfListenerStubDispatch {
 public:
  static bool Accept(PdfListener* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      PdfListener* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<PdfListener>>
class PdfListenerStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  PdfListenerStub() {}
  ~PdfListenerStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return PdfListenerStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return PdfListenerStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  PdfServiceStubDispatch {
 public:
  static bool Accept(PdfService* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      PdfService* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<PdfService>>
class PdfServiceStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  PdfServiceStub() {}
  ~PdfServiceStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return PdfServiceStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return PdfServiceStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  PdfListenerRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  PdfServiceRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace pdf

namespace mojo {

}  // namespace mojo

#endif  // COMPONENTS_PDF_COMMON_PDF_MOJOM_H_