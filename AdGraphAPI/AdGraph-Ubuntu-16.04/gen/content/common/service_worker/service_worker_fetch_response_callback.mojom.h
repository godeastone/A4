// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_SERVICE_WORKER_SERVICE_WORKER_FETCH_RESPONSE_CALLBACK_MOJOM_H_
#define CONTENT_COMMON_SERVICE_WORKER_SERVICE_WORKER_FETCH_RESPONSE_CALLBACK_MOJOM_H_

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
#include "content/common/service_worker/service_worker_fetch_response_callback.mojom-shared.h"
#include "mojo/public/mojom/base/time.mojom.h"
#include "third_party/blink/public/mojom/blob/blob.mojom.h"
#include "third_party/blink/public/mojom/service_worker/service_worker_stream_handle.mojom.h"
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
#include "content/common/background_fetch/background_fetch_types.h"
#include "content/common/service_worker/service_worker_status_code.h"
#include "content/common/service_worker/service_worker_types.h"
#include "content/public/common/platform_notification_data.h"
#include "content/public/common/push_event_payload.h"
#include "content/common/content_export.h"


namespace content {
namespace mojom {
class ServiceWorkerFetchResponseCallback;
using ServiceWorkerFetchResponseCallbackPtr = mojo::InterfacePtr<ServiceWorkerFetchResponseCallback>;
using ServiceWorkerFetchResponseCallbackPtrInfo = mojo::InterfacePtrInfo<ServiceWorkerFetchResponseCallback>;
using ThreadSafeServiceWorkerFetchResponseCallbackPtr =
    mojo::ThreadSafeInterfacePtr<ServiceWorkerFetchResponseCallback>;
using ServiceWorkerFetchResponseCallbackRequest = mojo::InterfaceRequest<ServiceWorkerFetchResponseCallback>;
using ServiceWorkerFetchResponseCallbackAssociatedPtr =
    mojo::AssociatedInterfacePtr<ServiceWorkerFetchResponseCallback>;
using ThreadSafeServiceWorkerFetchResponseCallbackAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<ServiceWorkerFetchResponseCallback>;
using ServiceWorkerFetchResponseCallbackAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<ServiceWorkerFetchResponseCallback>;
using ServiceWorkerFetchResponseCallbackAssociatedRequest =
    mojo::AssociatedInterfaceRequest<ServiceWorkerFetchResponseCallback>;

using ServiceWorkerResponse = mojo::native::NativeStruct;
using ServiceWorkerResponsePtr = mojo::native::NativeStructPtr;


class ServiceWorkerFetchResponseCallbackProxy;

template <typename ImplRefTraits>
class ServiceWorkerFetchResponseCallbackStub;

class ServiceWorkerFetchResponseCallbackRequestValidator;
class ServiceWorkerFetchResponseCallbackResponseValidator;

class CONTENT_EXPORT ServiceWorkerFetchResponseCallback
    : public ServiceWorkerFetchResponseCallbackInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = ServiceWorkerFetchResponseCallbackProxy;

  template <typename ImplRefTraits>
  using Stub_ = ServiceWorkerFetchResponseCallbackStub<ImplRefTraits>;

  using RequestValidator_ = ServiceWorkerFetchResponseCallbackRequestValidator;
  using ResponseValidator_ = ServiceWorkerFetchResponseCallbackResponseValidator;
  enum MethodMinVersions : uint32_t {
    kOnResponseMinVersion = 0,
    kOnResponseBlobMinVersion = 0,
    kOnResponseLegacyBlobMinVersion = 0,
    kOnResponseStreamMinVersion = 0,
    kOnFallbackMinVersion = 0,
  };
  virtual ~ServiceWorkerFetchResponseCallback() {}

  virtual void OnResponse(const ::content::ServiceWorkerResponse& response, base::Time dispatch_event_time) = 0;

  virtual void OnResponseBlob(const ::content::ServiceWorkerResponse& response, ::blink::mojom::BlobPtr body_as_blob, base::Time dispatch_event_time) = 0;


  using OnResponseLegacyBlobCallback = base::OnceCallback<void()>;
  virtual void OnResponseLegacyBlob(const ::content::ServiceWorkerResponse& response, base::Time dispatch_event_time, OnResponseLegacyBlobCallback callback) = 0;

  virtual void OnResponseStream(const ::content::ServiceWorkerResponse& response, ::blink::mojom::ServiceWorkerStreamHandlePtr body_as_stream, base::Time dispatch_event_time) = 0;

  virtual void OnFallback(base::Time dispatch_event_time) = 0;
};
class CONTENT_EXPORT ServiceWorkerFetchResponseCallbackInterceptorForTesting : public ServiceWorkerFetchResponseCallback {
  virtual ServiceWorkerFetchResponseCallback* GetForwardingInterface() = 0;
  void OnResponse(const ::content::ServiceWorkerResponse& response, base::Time dispatch_event_time) override;
  void OnResponseBlob(const ::content::ServiceWorkerResponse& response, ::blink::mojom::BlobPtr body_as_blob, base::Time dispatch_event_time) override;
  void OnResponseLegacyBlob(const ::content::ServiceWorkerResponse& response, base::Time dispatch_event_time, OnResponseLegacyBlobCallback callback) override;
  void OnResponseStream(const ::content::ServiceWorkerResponse& response, ::blink::mojom::ServiceWorkerStreamHandlePtr body_as_stream, base::Time dispatch_event_time) override;
  void OnFallback(base::Time dispatch_event_time) override;
};
class CONTENT_EXPORT ServiceWorkerFetchResponseCallbackAsyncWaiter {
 public:
  explicit ServiceWorkerFetchResponseCallbackAsyncWaiter(ServiceWorkerFetchResponseCallback* proxy);
  ~ServiceWorkerFetchResponseCallbackAsyncWaiter();
  void OnResponseLegacyBlob(
      const ::content::ServiceWorkerResponse& response, base::Time dispatch_event_time);

 private:
  ServiceWorkerFetchResponseCallback* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(ServiceWorkerFetchResponseCallbackAsyncWaiter);
};

class CONTENT_EXPORT ServiceWorkerFetchResponseCallbackProxy
    : public ServiceWorkerFetchResponseCallback {
 public:
  explicit ServiceWorkerFetchResponseCallbackProxy(mojo::MessageReceiverWithResponder* receiver);
  void OnResponse(const ::content::ServiceWorkerResponse& response, base::Time dispatch_event_time) final;
  void OnResponseBlob(const ::content::ServiceWorkerResponse& response, ::blink::mojom::BlobPtr body_as_blob, base::Time dispatch_event_time) final;
  void OnResponseLegacyBlob(const ::content::ServiceWorkerResponse& response, base::Time dispatch_event_time, OnResponseLegacyBlobCallback callback) final;
  void OnResponseStream(const ::content::ServiceWorkerResponse& response, ::blink::mojom::ServiceWorkerStreamHandlePtr body_as_stream, base::Time dispatch_event_time) final;
  void OnFallback(base::Time dispatch_event_time) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class CONTENT_EXPORT ServiceWorkerFetchResponseCallbackStubDispatch {
 public:
  static bool Accept(ServiceWorkerFetchResponseCallback* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      ServiceWorkerFetchResponseCallback* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<ServiceWorkerFetchResponseCallback>>
class ServiceWorkerFetchResponseCallbackStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  ServiceWorkerFetchResponseCallbackStub() {}
  ~ServiceWorkerFetchResponseCallbackStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ServiceWorkerFetchResponseCallbackStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ServiceWorkerFetchResponseCallbackStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class CONTENT_EXPORT ServiceWorkerFetchResponseCallbackRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class CONTENT_EXPORT ServiceWorkerFetchResponseCallbackResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};







}  // namespace mojom
}  // namespace content

namespace mojo {

}  // namespace mojo

#endif  // CONTENT_COMMON_SERVICE_WORKER_SERVICE_WORKER_FETCH_RESPONSE_CALLBACK_MOJOM_H_