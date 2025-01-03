// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_RENDER_FRAME_MESSAGE_FILTER_MOJOM_H_
#define CONTENT_COMMON_RENDER_FRAME_MESSAGE_FILTER_MOJOM_H_

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
#include "content/common/render_frame_message_filter.mojom-shared.h"
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
class RenderFrameMessageFilter;
using RenderFrameMessageFilterPtr = mojo::InterfacePtr<RenderFrameMessageFilter>;
using RenderFrameMessageFilterPtrInfo = mojo::InterfacePtrInfo<RenderFrameMessageFilter>;
using ThreadSafeRenderFrameMessageFilterPtr =
    mojo::ThreadSafeInterfacePtr<RenderFrameMessageFilter>;
using RenderFrameMessageFilterRequest = mojo::InterfaceRequest<RenderFrameMessageFilter>;
using RenderFrameMessageFilterAssociatedPtr =
    mojo::AssociatedInterfacePtr<RenderFrameMessageFilter>;
using ThreadSafeRenderFrameMessageFilterAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<RenderFrameMessageFilter>;
using RenderFrameMessageFilterAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<RenderFrameMessageFilter>;
using RenderFrameMessageFilterAssociatedRequest =
    mojo::AssociatedInterfaceRequest<RenderFrameMessageFilter>;


class RenderFrameMessageFilterProxy;

template <typename ImplRefTraits>
class RenderFrameMessageFilterStub;

class RenderFrameMessageFilterRequestValidator;
class RenderFrameMessageFilterResponseValidator;

class CONTENT_EXPORT RenderFrameMessageFilter
    : public RenderFrameMessageFilterInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = true;

  using Proxy_ = RenderFrameMessageFilterProxy;

  template <typename ImplRefTraits>
  using Stub_ = RenderFrameMessageFilterStub<ImplRefTraits>;

  using RequestValidator_ = RenderFrameMessageFilterRequestValidator;
  using ResponseValidator_ = RenderFrameMessageFilterResponseValidator;
  enum MethodMinVersions : uint32_t {
    kSetCookieMinVersion = 0,
    kGetCookiesMinVersion = 0,
  };
  virtual ~RenderFrameMessageFilter() {}

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  virtual bool SetCookie(int32_t render_frame_id, const GURL& url, const GURL& first_party_for_cookies, const std::string& cookie);

  using SetCookieCallback = base::OnceCallback<void()>;
  virtual void SetCookie(int32_t render_frame_id, const GURL& url, const GURL& first_party_for_cookies, const std::string& cookie, SetCookieCallback callback) = 0;

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  virtual bool GetCookies(int32_t render_frame_id, const GURL& url, const GURL& first_party_for_cookies, std::string* out_cookies);

  using GetCookiesCallback = base::OnceCallback<void(const std::string&)>;
  virtual void GetCookies(int32_t render_frame_id, const GURL& url, const GURL& first_party_for_cookies, GetCookiesCallback callback) = 0;
};
class CONTENT_EXPORT RenderFrameMessageFilterInterceptorForTesting : public RenderFrameMessageFilter {
  virtual RenderFrameMessageFilter* GetForwardingInterface() = 0;
  void SetCookie(int32_t render_frame_id, const GURL& url, const GURL& first_party_for_cookies, const std::string& cookie, SetCookieCallback callback) override;
  void GetCookies(int32_t render_frame_id, const GURL& url, const GURL& first_party_for_cookies, GetCookiesCallback callback) override;
};
class CONTENT_EXPORT RenderFrameMessageFilterAsyncWaiter {
 public:
  explicit RenderFrameMessageFilterAsyncWaiter(RenderFrameMessageFilter* proxy);
  ~RenderFrameMessageFilterAsyncWaiter();
  void SetCookie(
      int32_t render_frame_id, const GURL& url, const GURL& first_party_for_cookies, const std::string& cookie);
  void GetCookies(
      int32_t render_frame_id, const GURL& url, const GURL& first_party_for_cookies, std::string* out_cookies);

 private:
  RenderFrameMessageFilter* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(RenderFrameMessageFilterAsyncWaiter);
};

class CONTENT_EXPORT RenderFrameMessageFilterProxy
    : public RenderFrameMessageFilter {
 public:
  explicit RenderFrameMessageFilterProxy(mojo::MessageReceiverWithResponder* receiver);
  bool SetCookie(int32_t render_frame_id, const GURL& url, const GURL& first_party_for_cookies, const std::string& cookie) final;
  void SetCookie(int32_t render_frame_id, const GURL& url, const GURL& first_party_for_cookies, const std::string& cookie, SetCookieCallback callback) final;
  bool GetCookies(int32_t render_frame_id, const GURL& url, const GURL& first_party_for_cookies, std::string* out_cookies) final;
  void GetCookies(int32_t render_frame_id, const GURL& url, const GURL& first_party_for_cookies, GetCookiesCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class CONTENT_EXPORT RenderFrameMessageFilterStubDispatch {
 public:
  static bool Accept(RenderFrameMessageFilter* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      RenderFrameMessageFilter* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<RenderFrameMessageFilter>>
class RenderFrameMessageFilterStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  RenderFrameMessageFilterStub() {}
  ~RenderFrameMessageFilterStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return RenderFrameMessageFilterStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return RenderFrameMessageFilterStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class CONTENT_EXPORT RenderFrameMessageFilterRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class CONTENT_EXPORT RenderFrameMessageFilterResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace content

namespace mojo {

}  // namespace mojo

#endif  // CONTENT_COMMON_RENDER_FRAME_MESSAGE_FILTER_MOJOM_H_