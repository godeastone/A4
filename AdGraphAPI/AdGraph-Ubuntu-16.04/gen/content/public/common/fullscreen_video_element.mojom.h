// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_PUBLIC_COMMON_FULLSCREEN_VIDEO_ELEMENT_MOJOM_H_
#define CONTENT_PUBLIC_COMMON_FULLSCREEN_VIDEO_ELEMENT_MOJOM_H_

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
#include "content/public/common/fullscreen_video_element.mojom-shared.h"
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
class FullscreenVideoElementHandler;
using FullscreenVideoElementHandlerPtr = mojo::InterfacePtr<FullscreenVideoElementHandler>;
using FullscreenVideoElementHandlerPtrInfo = mojo::InterfacePtrInfo<FullscreenVideoElementHandler>;
using ThreadSafeFullscreenVideoElementHandlerPtr =
    mojo::ThreadSafeInterfacePtr<FullscreenVideoElementHandler>;
using FullscreenVideoElementHandlerRequest = mojo::InterfaceRequest<FullscreenVideoElementHandler>;
using FullscreenVideoElementHandlerAssociatedPtr =
    mojo::AssociatedInterfacePtr<FullscreenVideoElementHandler>;
using ThreadSafeFullscreenVideoElementHandlerAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<FullscreenVideoElementHandler>;
using FullscreenVideoElementHandlerAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<FullscreenVideoElementHandler>;
using FullscreenVideoElementHandlerAssociatedRequest =
    mojo::AssociatedInterfaceRequest<FullscreenVideoElementHandler>;


class FullscreenVideoElementHandlerProxy;

template <typename ImplRefTraits>
class FullscreenVideoElementHandlerStub;

class FullscreenVideoElementHandlerRequestValidator;

class CONTENT_EXPORT FullscreenVideoElementHandler
    : public FullscreenVideoElementHandlerInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = FullscreenVideoElementHandlerProxy;

  template <typename ImplRefTraits>
  using Stub_ = FullscreenVideoElementHandlerStub<ImplRefTraits>;

  using RequestValidator_ = FullscreenVideoElementHandlerRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kRequestFullscreenVideoElementMinVersion = 0,
  };
  virtual ~FullscreenVideoElementHandler() {}

  virtual void RequestFullscreenVideoElement() = 0;
};
class CONTENT_EXPORT FullscreenVideoElementHandlerInterceptorForTesting : public FullscreenVideoElementHandler {
  virtual FullscreenVideoElementHandler* GetForwardingInterface() = 0;
  void RequestFullscreenVideoElement() override;
};
class CONTENT_EXPORT FullscreenVideoElementHandlerAsyncWaiter {
 public:
  explicit FullscreenVideoElementHandlerAsyncWaiter(FullscreenVideoElementHandler* proxy);
  ~FullscreenVideoElementHandlerAsyncWaiter();

 private:
  FullscreenVideoElementHandler* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(FullscreenVideoElementHandlerAsyncWaiter);
};

class CONTENT_EXPORT FullscreenVideoElementHandlerProxy
    : public FullscreenVideoElementHandler {
 public:
  explicit FullscreenVideoElementHandlerProxy(mojo::MessageReceiverWithResponder* receiver);
  void RequestFullscreenVideoElement() final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class CONTENT_EXPORT FullscreenVideoElementHandlerStubDispatch {
 public:
  static bool Accept(FullscreenVideoElementHandler* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      FullscreenVideoElementHandler* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<FullscreenVideoElementHandler>>
class FullscreenVideoElementHandlerStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  FullscreenVideoElementHandlerStub() {}
  ~FullscreenVideoElementHandlerStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return FullscreenVideoElementHandlerStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return FullscreenVideoElementHandlerStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class CONTENT_EXPORT FullscreenVideoElementHandlerRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace content

namespace mojo {

}  // namespace mojo

#endif  // CONTENT_PUBLIC_COMMON_FULLSCREEN_VIDEO_ELEMENT_MOJOM_H_