// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef EXTENSIONS_COMMON_MOJO_GUEST_VIEW_MOJOM_H_
#define EXTENSIONS_COMMON_MOJO_GUEST_VIEW_MOJOM_H_

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
#include "extensions/common/mojo/guest_view.mojom-shared.h"
#include "content/public/common/transferrable_url_loader.mojom.h"
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


namespace extensions {
namespace mojom {
class GuestView;
using GuestViewPtr = mojo::InterfacePtr<GuestView>;
using GuestViewPtrInfo = mojo::InterfacePtrInfo<GuestView>;
using ThreadSafeGuestViewPtr =
    mojo::ThreadSafeInterfacePtr<GuestView>;
using GuestViewRequest = mojo::InterfaceRequest<GuestView>;
using GuestViewAssociatedPtr =
    mojo::AssociatedInterfacePtr<GuestView>;
using ThreadSafeGuestViewAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<GuestView>;
using GuestViewAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<GuestView>;
using GuestViewAssociatedRequest =
    mojo::AssociatedInterfaceRequest<GuestView>;


class GuestViewProxy;

template <typename ImplRefTraits>
class GuestViewStub;

class GuestViewRequestValidator;

class  GuestView
    : public GuestViewInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = GuestViewProxy;

  template <typename ImplRefTraits>
  using Stub_ = GuestViewStub<ImplRefTraits>;

  using RequestValidator_ = GuestViewRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kCreateEmbeddedMimeHandlerViewGuestMinVersion = 0,
  };
  virtual ~GuestView() {}

  virtual void CreateEmbeddedMimeHandlerViewGuest(int32_t render_frame_id, int32_t tab_id, const GURL& original_url, int32_t element_instance_id, const gfx::Size& element_size, ::content::mojom::TransferrableURLLoaderPtr transferrable_url_loader) = 0;
};
class  GuestViewInterceptorForTesting : public GuestView {
  virtual GuestView* GetForwardingInterface() = 0;
  void CreateEmbeddedMimeHandlerViewGuest(int32_t render_frame_id, int32_t tab_id, const GURL& original_url, int32_t element_instance_id, const gfx::Size& element_size, ::content::mojom::TransferrableURLLoaderPtr transferrable_url_loader) override;
};
class  GuestViewAsyncWaiter {
 public:
  explicit GuestViewAsyncWaiter(GuestView* proxy);
  ~GuestViewAsyncWaiter();

 private:
  GuestView* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(GuestViewAsyncWaiter);
};

class  GuestViewProxy
    : public GuestView {
 public:
  explicit GuestViewProxy(mojo::MessageReceiverWithResponder* receiver);
  void CreateEmbeddedMimeHandlerViewGuest(int32_t render_frame_id, int32_t tab_id, const GURL& original_url, int32_t element_instance_id, const gfx::Size& element_size, ::content::mojom::TransferrableURLLoaderPtr transferrable_url_loader) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  GuestViewStubDispatch {
 public:
  static bool Accept(GuestView* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      GuestView* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<GuestView>>
class GuestViewStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  GuestViewStub() {}
  ~GuestViewStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return GuestViewStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return GuestViewStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  GuestViewRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace extensions

namespace mojo {

}  // namespace mojo

#endif  // EXTENSIONS_COMMON_MOJO_GUEST_VIEW_MOJOM_H_