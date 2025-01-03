// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_WEBSHARE_WEBSHARE_MOJOM_H_
#define THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_WEBSHARE_WEBSHARE_MOJOM_H_

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


namespace blink {
namespace mojom {
class ShareService;
using ShareServicePtr = mojo::InterfacePtr<ShareService>;
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

class CONTENT_EXPORT ShareService
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
  virtual void Share(const std::string& title, const std::string& text, const GURL& url, ShareCallback callback) = 0;
};
class CONTENT_EXPORT ShareServiceInterceptorForTesting : public ShareService {
  virtual ShareService* GetForwardingInterface() = 0;
  void Share(const std::string& title, const std::string& text, const GURL& url, ShareCallback callback) override;
};
class CONTENT_EXPORT ShareServiceAsyncWaiter {
 public:
  explicit ShareServiceAsyncWaiter(ShareService* proxy);
  ~ShareServiceAsyncWaiter();
  void Share(
      const std::string& title, const std::string& text, const GURL& url, ShareError* out_error);

 private:
  ShareService* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(ShareServiceAsyncWaiter);
};

class CONTENT_EXPORT ShareServiceProxy
    : public ShareService {
 public:
  explicit ShareServiceProxy(mojo::MessageReceiverWithResponder* receiver);
  void Share(const std::string& title, const std::string& text, const GURL& url, ShareCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class CONTENT_EXPORT ShareServiceStubDispatch {
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
class CONTENT_EXPORT ShareServiceRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class CONTENT_EXPORT ShareServiceResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace blink

namespace mojo {

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_WEBSHARE_WEBSHARE_MOJOM_H_