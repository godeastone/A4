// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_SERVICE_WORKER_SERVICE_WORKER_EVENT_DISPATCHER_MOJOM_H_
#define CONTENT_COMMON_SERVICE_WORKER_SERVICE_WORKER_EVENT_DISPATCHER_MOJOM_H_

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
#include "content/common/service_worker/service_worker_event_dispatcher.mojom-shared.h"
#include "content/common/service_worker/dispatch_fetch_event_params.mojom.h"
#include "content/common/service_worker/service_worker_fetch_response_callback.mojom.h"
#include "mojo/public/mojom/base/string16.mojom.h"
#include "mojo/public/mojom/base/time.mojom.h"
#include "services/network/public/mojom/cookie_manager.mojom.h"
#include "third_party/blink/public/platform/modules/fetch/fetch_api_request.mojom.h"
#include "third_party/blink/public/platform/modules/payments/payment_app.mojom.h"
#include "third_party/blink/public/mojom/message_port/message_port.mojom.h"
#include "third_party/blink/public/mojom/service_worker/service_worker.mojom.h"
#include "third_party/blink/public/mojom/service_worker/service_worker_client.mojom.h"
#include "third_party/blink/public/mojom/service_worker/service_worker_event_status.mojom.h"
#include "third_party/blink/public/mojom/service_worker/service_worker_object.mojom.h"
#include "third_party/blink/public/mojom/service_worker/service_worker_registration.mojom.h"
#include "url/mojom/origin.mojom.h"
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
#include "content/common/background_fetch/background_fetch_types.h"
#include "content/common/service_worker/service_worker_status_code.h"
#include "content/common/service_worker/service_worker_types.h"
#include "content/public/common/platform_notification_data.h"
#include "content/public/common/push_event_payload.h"
#include "content/common/content_export.h"


namespace content {
namespace mojom {
constexpr int32_t kPushEventTimeoutSeconds = 90;
class ServiceWorkerEventDispatcher;
using ServiceWorkerEventDispatcherPtr = mojo::InterfacePtr<ServiceWorkerEventDispatcher>;
using ServiceWorkerEventDispatcherPtrInfo = mojo::InterfacePtrInfo<ServiceWorkerEventDispatcher>;
using ThreadSafeServiceWorkerEventDispatcherPtr =
    mojo::ThreadSafeInterfacePtr<ServiceWorkerEventDispatcher>;
using ServiceWorkerEventDispatcherRequest = mojo::InterfaceRequest<ServiceWorkerEventDispatcher>;
using ServiceWorkerEventDispatcherAssociatedPtr =
    mojo::AssociatedInterfacePtr<ServiceWorkerEventDispatcher>;
using ThreadSafeServiceWorkerEventDispatcherAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<ServiceWorkerEventDispatcher>;
using ServiceWorkerEventDispatcherAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<ServiceWorkerEventDispatcher>;
using ServiceWorkerEventDispatcherAssociatedRequest =
    mojo::AssociatedInterfaceRequest<ServiceWorkerEventDispatcher>;

using PlatformNotificationData = mojo::native::NativeStruct;
using PlatformNotificationDataPtr = mojo::native::NativeStructPtr;

using PushEventPayload = mojo::native::NativeStruct;
using PushEventPayloadPtr = mojo::native::NativeStructPtr;

using ServiceWorkerResponse = mojo::native::NativeStruct;
using ServiceWorkerResponsePtr = mojo::native::NativeStructPtr;

class BackgroundFetchSettledFetch;
using BackgroundFetchSettledFetchPtr = mojo::StructPtr<BackgroundFetchSettledFetch>;

class ExtendableMessageEvent;
using ExtendableMessageEventPtr = mojo::StructPtr<ExtendableMessageEvent>;


class ServiceWorkerEventDispatcherProxy;

template <typename ImplRefTraits>
class ServiceWorkerEventDispatcherStub;

class ServiceWorkerEventDispatcherRequestValidator;
class ServiceWorkerEventDispatcherResponseValidator;

class CONTENT_EXPORT ServiceWorkerEventDispatcher
    : public ServiceWorkerEventDispatcherInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = true;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = ServiceWorkerEventDispatcherProxy;

  template <typename ImplRefTraits>
  using Stub_ = ServiceWorkerEventDispatcherStub<ImplRefTraits>;

  using RequestValidator_ = ServiceWorkerEventDispatcherRequestValidator;
  using ResponseValidator_ = ServiceWorkerEventDispatcherResponseValidator;
  enum MethodMinVersions : uint32_t {
    kInitializeGlobalScopeMinVersion = 0,
    kDispatchInstallEventMinVersion = 0,
    kDispatchActivateEventMinVersion = 0,
    kDispatchBackgroundFetchAbortEventMinVersion = 0,
    kDispatchBackgroundFetchClickEventMinVersion = 0,
    kDispatchBackgroundFetchFailEventMinVersion = 0,
    kDispatchBackgroundFetchedEventMinVersion = 0,
    kDispatchCookieChangeEventMinVersion = 0,
    kDispatchFetchEventMinVersion = 0,
    kDispatchNotificationClickEventMinVersion = 0,
    kDispatchNotificationCloseEventMinVersion = 0,
    kDispatchPushEventMinVersion = 0,
    kDispatchSyncEventMinVersion = 0,
    kDispatchAbortPaymentEventMinVersion = 0,
    kDispatchCanMakePaymentEventMinVersion = 0,
    kDispatchPaymentRequestEventMinVersion = 0,
    kDispatchExtendableMessageEventMinVersion = 0,
    kPingMinVersion = 0,
    kSetIdleTimerDelayToZeroMinVersion = 0,
  };
  virtual ~ServiceWorkerEventDispatcher() {}

  virtual void InitializeGlobalScope(::blink::mojom::ServiceWorkerHostAssociatedPtrInfo service_worker_host, ::blink::mojom::ServiceWorkerRegistrationObjectInfoPtr registration_info) = 0;


  using DispatchInstallEventCallback = base::OnceCallback<void(::blink::mojom::ServiceWorkerEventStatus, bool, base::Time)>;
  virtual void DispatchInstallEvent(DispatchInstallEventCallback callback) = 0;


  using DispatchActivateEventCallback = base::OnceCallback<void(::blink::mojom::ServiceWorkerEventStatus, base::Time)>;
  virtual void DispatchActivateEvent(DispatchActivateEventCallback callback) = 0;


  using DispatchBackgroundFetchAbortEventCallback = base::OnceCallback<void(::blink::mojom::ServiceWorkerEventStatus, base::Time)>;
  virtual void DispatchBackgroundFetchAbortEvent(const std::string& developer_id, const std::string& unique_id, const std::vector<::content::BackgroundFetchSettledFetch>& fetches, DispatchBackgroundFetchAbortEventCallback callback) = 0;


  using DispatchBackgroundFetchClickEventCallback = base::OnceCallback<void(::blink::mojom::ServiceWorkerEventStatus, base::Time)>;
  virtual void DispatchBackgroundFetchClickEvent(const std::string& developer_id, BackgroundFetchState state, DispatchBackgroundFetchClickEventCallback callback) = 0;


  using DispatchBackgroundFetchFailEventCallback = base::OnceCallback<void(::blink::mojom::ServiceWorkerEventStatus, base::Time)>;
  virtual void DispatchBackgroundFetchFailEvent(const std::string& developer_id, const std::string& unique_id, const std::vector<::content::BackgroundFetchSettledFetch>& fetches, DispatchBackgroundFetchFailEventCallback callback) = 0;


  using DispatchBackgroundFetchedEventCallback = base::OnceCallback<void(::blink::mojom::ServiceWorkerEventStatus, base::Time)>;
  virtual void DispatchBackgroundFetchedEvent(const std::string& developer_id, const std::string& unique_id, const std::vector<::content::BackgroundFetchSettledFetch>& fetches, DispatchBackgroundFetchedEventCallback callback) = 0;


  using DispatchCookieChangeEventCallback = base::OnceCallback<void(::blink::mojom::ServiceWorkerEventStatus, base::Time)>;
  virtual void DispatchCookieChangeEvent(const net::CanonicalCookie& cookie, ::network::mojom::CookieChangeCause cause, DispatchCookieChangeEventCallback callback) = 0;


  using DispatchFetchEventCallback = base::OnceCallback<void(::blink::mojom::ServiceWorkerEventStatus, base::Time)>;
  virtual void DispatchFetchEvent(::content::mojom::DispatchFetchEventParamsPtr params, ::content::mojom::ServiceWorkerFetchResponseCallbackPtr response_callback, DispatchFetchEventCallback callback) = 0;


  using DispatchNotificationClickEventCallback = base::OnceCallback<void(::blink::mojom::ServiceWorkerEventStatus, base::Time)>;
  virtual void DispatchNotificationClickEvent(const std::string& notification_id, const ::content::PlatformNotificationData& notification_data, int32_t action_index, const base::Optional<base::string16>& reply, DispatchNotificationClickEventCallback callback) = 0;


  using DispatchNotificationCloseEventCallback = base::OnceCallback<void(::blink::mojom::ServiceWorkerEventStatus, base::Time)>;
  virtual void DispatchNotificationCloseEvent(const std::string& notification_id, const ::content::PlatformNotificationData& notification_data, DispatchNotificationCloseEventCallback callback) = 0;


  using DispatchPushEventCallback = base::OnceCallback<void(::blink::mojom::ServiceWorkerEventStatus, base::Time)>;
  virtual void DispatchPushEvent(const ::content::PushEventPayload& payload, DispatchPushEventCallback callback) = 0;


  using DispatchSyncEventCallback = base::OnceCallback<void(::blink::mojom::ServiceWorkerEventStatus, base::Time)>;
  virtual void DispatchSyncEvent(const std::string& id, bool last_chance, base::TimeDelta timeout, DispatchSyncEventCallback callback) = 0;


  using DispatchAbortPaymentEventCallback = base::OnceCallback<void(::blink::mojom::ServiceWorkerEventStatus, base::Time)>;
  virtual void DispatchAbortPaymentEvent(int32_t event_id, ::payments::mojom::PaymentHandlerResponseCallbackPtr result_of_abort_payment, DispatchAbortPaymentEventCallback callback) = 0;


  using DispatchCanMakePaymentEventCallback = base::OnceCallback<void(::blink::mojom::ServiceWorkerEventStatus, base::Time)>;
  virtual void DispatchCanMakePaymentEvent(int32_t event_id, ::payments::mojom::CanMakePaymentEventDataPtr event_data, ::payments::mojom::PaymentHandlerResponseCallbackPtr result_of_can_make_payment, DispatchCanMakePaymentEventCallback callback) = 0;


  using DispatchPaymentRequestEventCallback = base::OnceCallback<void(::blink::mojom::ServiceWorkerEventStatus, base::Time)>;
  virtual void DispatchPaymentRequestEvent(int32_t payment_request_id, ::payments::mojom::PaymentRequestEventDataPtr request_data, ::payments::mojom::PaymentHandlerResponseCallbackPtr response_callback, DispatchPaymentRequestEventCallback callback) = 0;


  using DispatchExtendableMessageEventCallback = base::OnceCallback<void(::blink::mojom::ServiceWorkerEventStatus, base::Time)>;
  virtual void DispatchExtendableMessageEvent(ExtendableMessageEventPtr event, DispatchExtendableMessageEventCallback callback) = 0;


  using PingCallback = base::OnceCallback<void()>;
  virtual void Ping(PingCallback callback) = 0;

  virtual void SetIdleTimerDelayToZero() = 0;
};
class CONTENT_EXPORT ServiceWorkerEventDispatcherInterceptorForTesting : public ServiceWorkerEventDispatcher {
  virtual ServiceWorkerEventDispatcher* GetForwardingInterface() = 0;
  void InitializeGlobalScope(::blink::mojom::ServiceWorkerHostAssociatedPtrInfo service_worker_host, ::blink::mojom::ServiceWorkerRegistrationObjectInfoPtr registration_info) override;
  void DispatchInstallEvent(DispatchInstallEventCallback callback) override;
  void DispatchActivateEvent(DispatchActivateEventCallback callback) override;
  void DispatchBackgroundFetchAbortEvent(const std::string& developer_id, const std::string& unique_id, const std::vector<::content::BackgroundFetchSettledFetch>& fetches, DispatchBackgroundFetchAbortEventCallback callback) override;
  void DispatchBackgroundFetchClickEvent(const std::string& developer_id, BackgroundFetchState state, DispatchBackgroundFetchClickEventCallback callback) override;
  void DispatchBackgroundFetchFailEvent(const std::string& developer_id, const std::string& unique_id, const std::vector<::content::BackgroundFetchSettledFetch>& fetches, DispatchBackgroundFetchFailEventCallback callback) override;
  void DispatchBackgroundFetchedEvent(const std::string& developer_id, const std::string& unique_id, const std::vector<::content::BackgroundFetchSettledFetch>& fetches, DispatchBackgroundFetchedEventCallback callback) override;
  void DispatchCookieChangeEvent(const net::CanonicalCookie& cookie, ::network::mojom::CookieChangeCause cause, DispatchCookieChangeEventCallback callback) override;
  void DispatchFetchEvent(::content::mojom::DispatchFetchEventParamsPtr params, ::content::mojom::ServiceWorkerFetchResponseCallbackPtr response_callback, DispatchFetchEventCallback callback) override;
  void DispatchNotificationClickEvent(const std::string& notification_id, const ::content::PlatformNotificationData& notification_data, int32_t action_index, const base::Optional<base::string16>& reply, DispatchNotificationClickEventCallback callback) override;
  void DispatchNotificationCloseEvent(const std::string& notification_id, const ::content::PlatformNotificationData& notification_data, DispatchNotificationCloseEventCallback callback) override;
  void DispatchPushEvent(const ::content::PushEventPayload& payload, DispatchPushEventCallback callback) override;
  void DispatchSyncEvent(const std::string& id, bool last_chance, base::TimeDelta timeout, DispatchSyncEventCallback callback) override;
  void DispatchAbortPaymentEvent(int32_t event_id, ::payments::mojom::PaymentHandlerResponseCallbackPtr result_of_abort_payment, DispatchAbortPaymentEventCallback callback) override;
  void DispatchCanMakePaymentEvent(int32_t event_id, ::payments::mojom::CanMakePaymentEventDataPtr event_data, ::payments::mojom::PaymentHandlerResponseCallbackPtr result_of_can_make_payment, DispatchCanMakePaymentEventCallback callback) override;
  void DispatchPaymentRequestEvent(int32_t payment_request_id, ::payments::mojom::PaymentRequestEventDataPtr request_data, ::payments::mojom::PaymentHandlerResponseCallbackPtr response_callback, DispatchPaymentRequestEventCallback callback) override;
  void DispatchExtendableMessageEvent(ExtendableMessageEventPtr event, DispatchExtendableMessageEventCallback callback) override;
  void Ping(PingCallback callback) override;
  void SetIdleTimerDelayToZero() override;
};
class CONTENT_EXPORT ServiceWorkerEventDispatcherAsyncWaiter {
 public:
  explicit ServiceWorkerEventDispatcherAsyncWaiter(ServiceWorkerEventDispatcher* proxy);
  ~ServiceWorkerEventDispatcherAsyncWaiter();
  void DispatchInstallEvent(
      ::blink::mojom::ServiceWorkerEventStatus* out_status, bool* out_has_fetch_handler, base::Time* out_dispatch_event_time);
  void DispatchActivateEvent(
      ::blink::mojom::ServiceWorkerEventStatus* out_status, base::Time* out_dispatch_event_time);
  void DispatchBackgroundFetchAbortEvent(
      const std::string& developer_id, const std::string& unique_id, const std::vector<::content::BackgroundFetchSettledFetch>& fetches, ::blink::mojom::ServiceWorkerEventStatus* out_status, base::Time* out_dispatch_event_time);
  void DispatchBackgroundFetchClickEvent(
      const std::string& developer_id, BackgroundFetchState state, ::blink::mojom::ServiceWorkerEventStatus* out_status, base::Time* out_dispatch_event_time);
  void DispatchBackgroundFetchFailEvent(
      const std::string& developer_id, const std::string& unique_id, const std::vector<::content::BackgroundFetchSettledFetch>& fetches, ::blink::mojom::ServiceWorkerEventStatus* out_status, base::Time* out_dispatch_event_time);
  void DispatchBackgroundFetchedEvent(
      const std::string& developer_id, const std::string& unique_id, const std::vector<::content::BackgroundFetchSettledFetch>& fetches, ::blink::mojom::ServiceWorkerEventStatus* out_status, base::Time* out_dispatch_event_time);
  void DispatchCookieChangeEvent(
      const net::CanonicalCookie& cookie, ::network::mojom::CookieChangeCause cause, ::blink::mojom::ServiceWorkerEventStatus* out_status, base::Time* out_dispatch_event_time);
  void DispatchFetchEvent(
      ::content::mojom::DispatchFetchEventParamsPtr params, ::content::mojom::ServiceWorkerFetchResponseCallbackPtr response_callback, ::blink::mojom::ServiceWorkerEventStatus* out_status, base::Time* out_dispatch_event_time);
  void DispatchNotificationClickEvent(
      const std::string& notification_id, const ::content::PlatformNotificationData& notification_data, int32_t action_index, const base::Optional<base::string16>& reply, ::blink::mojom::ServiceWorkerEventStatus* out_status, base::Time* out_dispatch_event_time);
  void DispatchNotificationCloseEvent(
      const std::string& notification_id, const ::content::PlatformNotificationData& notification_data, ::blink::mojom::ServiceWorkerEventStatus* out_status, base::Time* out_dispatch_event_time);
  void DispatchPushEvent(
      const ::content::PushEventPayload& payload, ::blink::mojom::ServiceWorkerEventStatus* out_status, base::Time* out_dispatch_event_time);
  void DispatchSyncEvent(
      const std::string& id, bool last_chance, base::TimeDelta timeout, ::blink::mojom::ServiceWorkerEventStatus* out_status, base::Time* out_dispatch_event_time);
  void DispatchAbortPaymentEvent(
      int32_t event_id, ::payments::mojom::PaymentHandlerResponseCallbackPtr result_of_abort_payment, ::blink::mojom::ServiceWorkerEventStatus* out_status, base::Time* out_dispatch_event_time);
  void DispatchCanMakePaymentEvent(
      int32_t event_id, ::payments::mojom::CanMakePaymentEventDataPtr event_data, ::payments::mojom::PaymentHandlerResponseCallbackPtr result_of_can_make_payment, ::blink::mojom::ServiceWorkerEventStatus* out_status, base::Time* out_dispatch_event_time);
  void DispatchPaymentRequestEvent(
      int32_t payment_request_id, ::payments::mojom::PaymentRequestEventDataPtr request_data, ::payments::mojom::PaymentHandlerResponseCallbackPtr response_callback, ::blink::mojom::ServiceWorkerEventStatus* out_status, base::Time* out_dispatch_event_time);
  void DispatchExtendableMessageEvent(
      ExtendableMessageEventPtr event, ::blink::mojom::ServiceWorkerEventStatus* out_status, base::Time* out_dispatch_event_time);
  void Ping(
      );

 private:
  ServiceWorkerEventDispatcher* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(ServiceWorkerEventDispatcherAsyncWaiter);
};

class CONTENT_EXPORT ServiceWorkerEventDispatcherProxy
    : public ServiceWorkerEventDispatcher {
 public:
  explicit ServiceWorkerEventDispatcherProxy(mojo::MessageReceiverWithResponder* receiver);
  void InitializeGlobalScope(::blink::mojom::ServiceWorkerHostAssociatedPtrInfo service_worker_host, ::blink::mojom::ServiceWorkerRegistrationObjectInfoPtr registration_info) final;
  void DispatchInstallEvent(DispatchInstallEventCallback callback) final;
  void DispatchActivateEvent(DispatchActivateEventCallback callback) final;
  void DispatchBackgroundFetchAbortEvent(const std::string& developer_id, const std::string& unique_id, const std::vector<::content::BackgroundFetchSettledFetch>& fetches, DispatchBackgroundFetchAbortEventCallback callback) final;
  void DispatchBackgroundFetchClickEvent(const std::string& developer_id, BackgroundFetchState state, DispatchBackgroundFetchClickEventCallback callback) final;
  void DispatchBackgroundFetchFailEvent(const std::string& developer_id, const std::string& unique_id, const std::vector<::content::BackgroundFetchSettledFetch>& fetches, DispatchBackgroundFetchFailEventCallback callback) final;
  void DispatchBackgroundFetchedEvent(const std::string& developer_id, const std::string& unique_id, const std::vector<::content::BackgroundFetchSettledFetch>& fetches, DispatchBackgroundFetchedEventCallback callback) final;
  void DispatchCookieChangeEvent(const net::CanonicalCookie& cookie, ::network::mojom::CookieChangeCause cause, DispatchCookieChangeEventCallback callback) final;
  void DispatchFetchEvent(::content::mojom::DispatchFetchEventParamsPtr params, ::content::mojom::ServiceWorkerFetchResponseCallbackPtr response_callback, DispatchFetchEventCallback callback) final;
  void DispatchNotificationClickEvent(const std::string& notification_id, const ::content::PlatformNotificationData& notification_data, int32_t action_index, const base::Optional<base::string16>& reply, DispatchNotificationClickEventCallback callback) final;
  void DispatchNotificationCloseEvent(const std::string& notification_id, const ::content::PlatformNotificationData& notification_data, DispatchNotificationCloseEventCallback callback) final;
  void DispatchPushEvent(const ::content::PushEventPayload& payload, DispatchPushEventCallback callback) final;
  void DispatchSyncEvent(const std::string& id, bool last_chance, base::TimeDelta timeout, DispatchSyncEventCallback callback) final;
  void DispatchAbortPaymentEvent(int32_t event_id, ::payments::mojom::PaymentHandlerResponseCallbackPtr result_of_abort_payment, DispatchAbortPaymentEventCallback callback) final;
  void DispatchCanMakePaymentEvent(int32_t event_id, ::payments::mojom::CanMakePaymentEventDataPtr event_data, ::payments::mojom::PaymentHandlerResponseCallbackPtr result_of_can_make_payment, DispatchCanMakePaymentEventCallback callback) final;
  void DispatchPaymentRequestEvent(int32_t payment_request_id, ::payments::mojom::PaymentRequestEventDataPtr request_data, ::payments::mojom::PaymentHandlerResponseCallbackPtr response_callback, DispatchPaymentRequestEventCallback callback) final;
  void DispatchExtendableMessageEvent(ExtendableMessageEventPtr event, DispatchExtendableMessageEventCallback callback) final;
  void Ping(PingCallback callback) final;
  void SetIdleTimerDelayToZero() final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class CONTENT_EXPORT ServiceWorkerEventDispatcherStubDispatch {
 public:
  static bool Accept(ServiceWorkerEventDispatcher* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      ServiceWorkerEventDispatcher* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<ServiceWorkerEventDispatcher>>
class ServiceWorkerEventDispatcherStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  ServiceWorkerEventDispatcherStub() {}
  ~ServiceWorkerEventDispatcherStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ServiceWorkerEventDispatcherStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ServiceWorkerEventDispatcherStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class CONTENT_EXPORT ServiceWorkerEventDispatcherRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class CONTENT_EXPORT ServiceWorkerEventDispatcherResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};












class CONTENT_EXPORT BackgroundFetchSettledFetch {
 public:
  using DataView = BackgroundFetchSettledFetchDataView;
  using Data_ = internal::BackgroundFetchSettledFetch_Data;

  template <typename... Args>
  static BackgroundFetchSettledFetchPtr New(Args&&... args) {
    return BackgroundFetchSettledFetchPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static BackgroundFetchSettledFetchPtr From(const U& u) {
    return mojo::TypeConverter<BackgroundFetchSettledFetchPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, BackgroundFetchSettledFetch>::Convert(*this);
  }


  BackgroundFetchSettledFetch();

  BackgroundFetchSettledFetch(
      const ::content::ServiceWorkerFetchRequest& request,
      const ::content::ServiceWorkerResponse& response);

  ~BackgroundFetchSettledFetch();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = BackgroundFetchSettledFetchPtr>
  BackgroundFetchSettledFetchPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, BackgroundFetchSettledFetch>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        BackgroundFetchSettledFetch::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        BackgroundFetchSettledFetch::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::BackgroundFetchSettledFetch_UnserializedMessageContext<
            UserType, BackgroundFetchSettledFetch::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<BackgroundFetchSettledFetch::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return BackgroundFetchSettledFetch::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::BackgroundFetchSettledFetch_UnserializedMessageContext<
            UserType, BackgroundFetchSettledFetch::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<BackgroundFetchSettledFetch::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  ::content::ServiceWorkerFetchRequest request;
  ::content::ServiceWorkerResponse response;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};


class CONTENT_EXPORT ExtendableMessageEvent {
 public:
  using DataView = ExtendableMessageEventDataView;
  using Data_ = internal::ExtendableMessageEvent_Data;

  template <typename... Args>
  static ExtendableMessageEventPtr New(Args&&... args) {
    return ExtendableMessageEventPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static ExtendableMessageEventPtr From(const U& u) {
    return mojo::TypeConverter<ExtendableMessageEventPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, ExtendableMessageEvent>::Convert(*this);
  }


  ExtendableMessageEvent();

  ExtendableMessageEvent(
      ::blink::TransferableMessage message,
      const url::Origin& source_origin,
      ::blink::mojom::ServiceWorkerClientInfoPtr source_info_for_client,
      ::blink::mojom::ServiceWorkerObjectInfoPtr source_info_for_service_worker);

  ~ExtendableMessageEvent();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = ExtendableMessageEventPtr>
  ExtendableMessageEventPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, ExtendableMessageEvent>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        ExtendableMessageEvent::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        ExtendableMessageEvent::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::ExtendableMessageEvent_UnserializedMessageContext<
            UserType, ExtendableMessageEvent::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<ExtendableMessageEvent::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return ExtendableMessageEvent::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::ExtendableMessageEvent_UnserializedMessageContext<
            UserType, ExtendableMessageEvent::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<ExtendableMessageEvent::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  ::blink::TransferableMessage message;
  url::Origin source_origin;
  ::blink::mojom::ServiceWorkerClientInfoPtr source_info_for_client;
  ::blink::mojom::ServiceWorkerObjectInfoPtr source_info_for_service_worker;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(ExtendableMessageEvent);
};

template <typename StructPtrType>
BackgroundFetchSettledFetchPtr BackgroundFetchSettledFetch::Clone() const {
  return New(
      mojo::Clone(request),
      mojo::Clone(response)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, BackgroundFetchSettledFetch>::value>::type*>
bool BackgroundFetchSettledFetch::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->request, other_struct.request))
    return false;
  if (!mojo::Equals(this->response, other_struct.response))
    return false;
  return true;
}
template <typename StructPtrType>
ExtendableMessageEventPtr ExtendableMessageEvent::Clone() const {
  return New(
      mojo::Clone(message),
      mojo::Clone(source_origin),
      mojo::Clone(source_info_for_client),
      mojo::Clone(source_info_for_service_worker)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, ExtendableMessageEvent>::value>::type*>
bool ExtendableMessageEvent::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->message, other_struct.message))
    return false;
  if (!mojo::Equals(this->source_origin, other_struct.source_origin))
    return false;
  if (!mojo::Equals(this->source_info_for_client, other_struct.source_info_for_client))
    return false;
  if (!mojo::Equals(this->source_info_for_service_worker, other_struct.source_info_for_service_worker))
    return false;
  return true;
}


}  // namespace mojom
}  // namespace content

namespace mojo {


template <>
struct CONTENT_EXPORT StructTraits<::content::mojom::BackgroundFetchSettledFetch::DataView,
                                         ::content::mojom::BackgroundFetchSettledFetchPtr> {
  static bool IsNull(const ::content::mojom::BackgroundFetchSettledFetchPtr& input) { return !input; }
  static void SetToNull(::content::mojom::BackgroundFetchSettledFetchPtr* output) { output->reset(); }

  static  decltype(::content::mojom::BackgroundFetchSettledFetch::request)& request(
       ::content::mojom::BackgroundFetchSettledFetchPtr& input) {
    return input->request;
  }

  static const decltype(::content::mojom::BackgroundFetchSettledFetch::response)& response(
      const ::content::mojom::BackgroundFetchSettledFetchPtr& input) {
    return input->response;
  }

  static bool Read(::content::mojom::BackgroundFetchSettledFetch::DataView input, ::content::mojom::BackgroundFetchSettledFetchPtr* output);
};


template <>
struct CONTENT_EXPORT StructTraits<::content::mojom::ExtendableMessageEvent::DataView,
                                         ::content::mojom::ExtendableMessageEventPtr> {
  static bool IsNull(const ::content::mojom::ExtendableMessageEventPtr& input) { return !input; }
  static void SetToNull(::content::mojom::ExtendableMessageEventPtr* output) { output->reset(); }

  static  decltype(::content::mojom::ExtendableMessageEvent::message)& message(
       ::content::mojom::ExtendableMessageEventPtr& input) {
    return input->message;
  }

  static const decltype(::content::mojom::ExtendableMessageEvent::source_origin)& source_origin(
      const ::content::mojom::ExtendableMessageEventPtr& input) {
    return input->source_origin;
  }

  static const decltype(::content::mojom::ExtendableMessageEvent::source_info_for_client)& source_info_for_client(
      const ::content::mojom::ExtendableMessageEventPtr& input) {
    return input->source_info_for_client;
  }

  static  decltype(::content::mojom::ExtendableMessageEvent::source_info_for_service_worker)& source_info_for_service_worker(
       ::content::mojom::ExtendableMessageEventPtr& input) {
    return input->source_info_for_service_worker;
  }

  static bool Read(::content::mojom::ExtendableMessageEvent::DataView input, ::content::mojom::ExtendableMessageEventPtr* output);
};

}  // namespace mojo

#endif  // CONTENT_COMMON_SERVICE_WORKER_SERVICE_WORKER_EVENT_DISPATCHER_MOJOM_H_