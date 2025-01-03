// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_HOST_ZOOM_MOJOM_H_
#define CONTENT_COMMON_HOST_ZOOM_MOJOM_H_

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
#include "content/common/host_zoom.mojom-shared.h"
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
#include "content/common/content_export.h"


namespace content {
namespace mojom {
class HostZoom;
using HostZoomPtr = mojo::InterfacePtr<HostZoom>;
using HostZoomPtrInfo = mojo::InterfacePtrInfo<HostZoom>;
using ThreadSafeHostZoomPtr =
    mojo::ThreadSafeInterfacePtr<HostZoom>;
using HostZoomRequest = mojo::InterfaceRequest<HostZoom>;
using HostZoomAssociatedPtr =
    mojo::AssociatedInterfacePtr<HostZoom>;
using ThreadSafeHostZoomAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<HostZoom>;
using HostZoomAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<HostZoom>;
using HostZoomAssociatedRequest =
    mojo::AssociatedInterfaceRequest<HostZoom>;


class HostZoomProxy;

template <typename ImplRefTraits>
class HostZoomStub;

class HostZoomRequestValidator;

class CONTENT_EXPORT HostZoom
    : public HostZoomInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = HostZoomProxy;

  template <typename ImplRefTraits>
  using Stub_ = HostZoomStub<ImplRefTraits>;

  using RequestValidator_ = HostZoomRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kSetHostZoomLevelMinVersion = 0,
  };
  virtual ~HostZoom() {}

  virtual void SetHostZoomLevel(const GURL& url, double zoom_level) = 0;
};
class CONTENT_EXPORT HostZoomInterceptorForTesting : public HostZoom {
  virtual HostZoom* GetForwardingInterface() = 0;
  void SetHostZoomLevel(const GURL& url, double zoom_level) override;
};
class CONTENT_EXPORT HostZoomAsyncWaiter {
 public:
  explicit HostZoomAsyncWaiter(HostZoom* proxy);
  ~HostZoomAsyncWaiter();

 private:
  HostZoom* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(HostZoomAsyncWaiter);
};

class CONTENT_EXPORT HostZoomProxy
    : public HostZoom {
 public:
  explicit HostZoomProxy(mojo::MessageReceiverWithResponder* receiver);
  void SetHostZoomLevel(const GURL& url, double zoom_level) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class CONTENT_EXPORT HostZoomStubDispatch {
 public:
  static bool Accept(HostZoom* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      HostZoom* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<HostZoom>>
class HostZoomStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  HostZoomStub() {}
  ~HostZoomStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return HostZoomStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return HostZoomStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class CONTENT_EXPORT HostZoomRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace content

namespace mojo {

}  // namespace mojo

#endif  // CONTENT_COMMON_HOST_ZOOM_MOJOM_H_