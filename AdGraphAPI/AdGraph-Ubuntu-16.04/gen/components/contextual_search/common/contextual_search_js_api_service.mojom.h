// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_CONTEXTUAL_SEARCH_COMMON_CONTEXTUAL_SEARCH_JS_API_SERVICE_MOJOM_H_
#define COMPONENTS_CONTEXTUAL_SEARCH_COMMON_CONTEXTUAL_SEARCH_JS_API_SERVICE_MOJOM_H_

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
#include "components/contextual_search/common/contextual_search_js_api_service.mojom-shared.h"
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


namespace contextual_search {
namespace mojom {
class ContextualSearchJsApiService;
using ContextualSearchJsApiServicePtr = mojo::InterfacePtr<ContextualSearchJsApiService>;
using ContextualSearchJsApiServicePtrInfo = mojo::InterfacePtrInfo<ContextualSearchJsApiService>;
using ThreadSafeContextualSearchJsApiServicePtr =
    mojo::ThreadSafeInterfacePtr<ContextualSearchJsApiService>;
using ContextualSearchJsApiServiceRequest = mojo::InterfaceRequest<ContextualSearchJsApiService>;
using ContextualSearchJsApiServiceAssociatedPtr =
    mojo::AssociatedInterfacePtr<ContextualSearchJsApiService>;
using ThreadSafeContextualSearchJsApiServiceAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<ContextualSearchJsApiService>;
using ContextualSearchJsApiServiceAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<ContextualSearchJsApiService>;
using ContextualSearchJsApiServiceAssociatedRequest =
    mojo::AssociatedInterfaceRequest<ContextualSearchJsApiService>;


class ContextualSearchJsApiServiceProxy;

template <typename ImplRefTraits>
class ContextualSearchJsApiServiceStub;

class ContextualSearchJsApiServiceRequestValidator;
class ContextualSearchJsApiServiceResponseValidator;

class  ContextualSearchJsApiService
    : public ContextualSearchJsApiServiceInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = ContextualSearchJsApiServiceProxy;

  template <typename ImplRefTraits>
  using Stub_ = ContextualSearchJsApiServiceStub<ImplRefTraits>;

  using RequestValidator_ = ContextualSearchJsApiServiceRequestValidator;
  using ResponseValidator_ = ContextualSearchJsApiServiceResponseValidator;
  enum MethodMinVersions : uint32_t {
    kShouldEnableJsApiMinVersion = 0,
    kHandleSetCaptionMinVersion = 0,
  };
  virtual ~ContextualSearchJsApiService() {}


  using ShouldEnableJsApiCallback = base::OnceCallback<void(bool)>;
  virtual void ShouldEnableJsApi(const GURL& url, ShouldEnableJsApiCallback callback) = 0;

  virtual void HandleSetCaption(const std::string& message, bool does_answer) = 0;
};
class  ContextualSearchJsApiServiceInterceptorForTesting : public ContextualSearchJsApiService {
  virtual ContextualSearchJsApiService* GetForwardingInterface() = 0;
  void ShouldEnableJsApi(const GURL& url, ShouldEnableJsApiCallback callback) override;
  void HandleSetCaption(const std::string& message, bool does_answer) override;
};
class  ContextualSearchJsApiServiceAsyncWaiter {
 public:
  explicit ContextualSearchJsApiServiceAsyncWaiter(ContextualSearchJsApiService* proxy);
  ~ContextualSearchJsApiServiceAsyncWaiter();
  void ShouldEnableJsApi(
      const GURL& url, bool* out_should_enable);

 private:
  ContextualSearchJsApiService* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(ContextualSearchJsApiServiceAsyncWaiter);
};

class  ContextualSearchJsApiServiceProxy
    : public ContextualSearchJsApiService {
 public:
  explicit ContextualSearchJsApiServiceProxy(mojo::MessageReceiverWithResponder* receiver);
  void ShouldEnableJsApi(const GURL& url, ShouldEnableJsApiCallback callback) final;
  void HandleSetCaption(const std::string& message, bool does_answer) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  ContextualSearchJsApiServiceStubDispatch {
 public:
  static bool Accept(ContextualSearchJsApiService* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      ContextualSearchJsApiService* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<ContextualSearchJsApiService>>
class ContextualSearchJsApiServiceStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  ContextualSearchJsApiServiceStub() {}
  ~ContextualSearchJsApiServiceStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ContextualSearchJsApiServiceStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ContextualSearchJsApiServiceStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  ContextualSearchJsApiServiceRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  ContextualSearchJsApiServiceResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace contextual_search

namespace mojo {

}  // namespace mojo

#endif  // COMPONENTS_CONTEXTUAL_SEARCH_COMMON_CONTEXTUAL_SEARCH_JS_API_SERVICE_MOJOM_H_