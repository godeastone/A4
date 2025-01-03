// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_NOTIFICATIONS_NOTIFICATION_SERVICE_MOJOM_H_
#define THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_NOTIFICATIONS_NOTIFICATION_SERVICE_MOJOM_H_

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
#include "third_party/blink/public/platform/modules/notifications/notification_service.mojom-shared.h"
#include "third_party/blink/public/platform/modules/notifications/notification.mojom.h"
#include "third_party/blink/public/platform/modules/permissions/permission_status.mojom.h"
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
class NonPersistentNotificationListener;
using NonPersistentNotificationListenerPtr = mojo::InterfacePtr<NonPersistentNotificationListener>;
using NonPersistentNotificationListenerPtrInfo = mojo::InterfacePtrInfo<NonPersistentNotificationListener>;
using ThreadSafeNonPersistentNotificationListenerPtr =
    mojo::ThreadSafeInterfacePtr<NonPersistentNotificationListener>;
using NonPersistentNotificationListenerRequest = mojo::InterfaceRequest<NonPersistentNotificationListener>;
using NonPersistentNotificationListenerAssociatedPtr =
    mojo::AssociatedInterfacePtr<NonPersistentNotificationListener>;
using ThreadSafeNonPersistentNotificationListenerAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<NonPersistentNotificationListener>;
using NonPersistentNotificationListenerAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<NonPersistentNotificationListener>;
using NonPersistentNotificationListenerAssociatedRequest =
    mojo::AssociatedInterfaceRequest<NonPersistentNotificationListener>;

class NotificationService;
using NotificationServicePtr = mojo::InterfacePtr<NotificationService>;
using NotificationServicePtrInfo = mojo::InterfacePtrInfo<NotificationService>;
using ThreadSafeNotificationServicePtr =
    mojo::ThreadSafeInterfacePtr<NotificationService>;
using NotificationServiceRequest = mojo::InterfaceRequest<NotificationService>;
using NotificationServiceAssociatedPtr =
    mojo::AssociatedInterfacePtr<NotificationService>;
using ThreadSafeNotificationServiceAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<NotificationService>;
using NotificationServiceAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<NotificationService>;
using NotificationServiceAssociatedRequest =
    mojo::AssociatedInterfaceRequest<NotificationService>;


class NonPersistentNotificationListenerProxy;

template <typename ImplRefTraits>
class NonPersistentNotificationListenerStub;

class NonPersistentNotificationListenerRequestValidator;
class NonPersistentNotificationListenerResponseValidator;

class CONTENT_EXPORT NonPersistentNotificationListener
    : public NonPersistentNotificationListenerInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = NonPersistentNotificationListenerProxy;

  template <typename ImplRefTraits>
  using Stub_ = NonPersistentNotificationListenerStub<ImplRefTraits>;

  using RequestValidator_ = NonPersistentNotificationListenerRequestValidator;
  using ResponseValidator_ = NonPersistentNotificationListenerResponseValidator;
  enum MethodMinVersions : uint32_t {
    kOnShowMinVersion = 0,
    kOnClickMinVersion = 0,
    kOnCloseMinVersion = 0,
  };
  virtual ~NonPersistentNotificationListener() {}

  virtual void OnShow() = 0;

  virtual void OnClick() = 0;


  using OnCloseCallback = base::OnceCallback<void()>;
  virtual void OnClose(OnCloseCallback callback) = 0;
};
class CONTENT_EXPORT NonPersistentNotificationListenerInterceptorForTesting : public NonPersistentNotificationListener {
  virtual NonPersistentNotificationListener* GetForwardingInterface() = 0;
  void OnShow() override;
  void OnClick() override;
  void OnClose(OnCloseCallback callback) override;
};
class CONTENT_EXPORT NonPersistentNotificationListenerAsyncWaiter {
 public:
  explicit NonPersistentNotificationListenerAsyncWaiter(NonPersistentNotificationListener* proxy);
  ~NonPersistentNotificationListenerAsyncWaiter();
  void OnClose(
      );

 private:
  NonPersistentNotificationListener* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(NonPersistentNotificationListenerAsyncWaiter);
};

class NotificationServiceProxy;

template <typename ImplRefTraits>
class NotificationServiceStub;

class NotificationServiceRequestValidator;
class NotificationServiceResponseValidator;

class CONTENT_EXPORT NotificationService
    : public NotificationServiceInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = true;

  using Proxy_ = NotificationServiceProxy;

  template <typename ImplRefTraits>
  using Stub_ = NotificationServiceStub<ImplRefTraits>;

  using RequestValidator_ = NotificationServiceRequestValidator;
  using ResponseValidator_ = NotificationServiceResponseValidator;
  enum MethodMinVersions : uint32_t {
    kGetPermissionStatusMinVersion = 0,
    kDisplayNonPersistentNotificationMinVersion = 0,
    kCloseNonPersistentNotificationMinVersion = 0,
    kDisplayPersistentNotificationMinVersion = 0,
    kClosePersistentNotificationMinVersion = 0,
    kGetNotificationsMinVersion = 0,
  };
  virtual ~NotificationService() {}

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  virtual bool GetPermissionStatus(::blink::mojom::PermissionStatus* out_status);

  using GetPermissionStatusCallback = base::OnceCallback<void(::blink::mojom::PermissionStatus)>;
  virtual void GetPermissionStatus(GetPermissionStatusCallback callback) = 0;

  virtual void DisplayNonPersistentNotification(const std::string& token, const content::PlatformNotificationData& notification_data, const content::NotificationResources& notification_resources, NonPersistentNotificationListenerPtr event_listener) = 0;

  virtual void CloseNonPersistentNotification(const std::string& token) = 0;


  using DisplayPersistentNotificationCallback = base::OnceCallback<void(PersistentNotificationError)>;
  virtual void DisplayPersistentNotification(int64_t service_worker_registration_id, const content::PlatformNotificationData& notification_data, const content::NotificationResources& notification_resources, DisplayPersistentNotificationCallback callback) = 0;

  virtual void ClosePersistentNotification(const std::string& notification_id) = 0;


  using GetNotificationsCallback = base::OnceCallback<void(const std::vector<std::string>&, const std::vector<content::PlatformNotificationData>&)>;
  virtual void GetNotifications(int64_t service_worker_registration_id, const std::string& filter_tag, GetNotificationsCallback callback) = 0;
};
class CONTENT_EXPORT NotificationServiceInterceptorForTesting : public NotificationService {
  virtual NotificationService* GetForwardingInterface() = 0;
  void GetPermissionStatus(GetPermissionStatusCallback callback) override;
  void DisplayNonPersistentNotification(const std::string& token, const content::PlatformNotificationData& notification_data, const content::NotificationResources& notification_resources, NonPersistentNotificationListenerPtr event_listener) override;
  void CloseNonPersistentNotification(const std::string& token) override;
  void DisplayPersistentNotification(int64_t service_worker_registration_id, const content::PlatformNotificationData& notification_data, const content::NotificationResources& notification_resources, DisplayPersistentNotificationCallback callback) override;
  void ClosePersistentNotification(const std::string& notification_id) override;
  void GetNotifications(int64_t service_worker_registration_id, const std::string& filter_tag, GetNotificationsCallback callback) override;
};
class CONTENT_EXPORT NotificationServiceAsyncWaiter {
 public:
  explicit NotificationServiceAsyncWaiter(NotificationService* proxy);
  ~NotificationServiceAsyncWaiter();
  void GetPermissionStatus(
      ::blink::mojom::PermissionStatus* out_status);
  void DisplayPersistentNotification(
      int64_t service_worker_registration_id, const content::PlatformNotificationData& notification_data, const content::NotificationResources& notification_resources, PersistentNotificationError* out_error);
  void GetNotifications(
      int64_t service_worker_registration_id, const std::string& filter_tag, std::vector<std::string>* out_notification_ids, std::vector<content::PlatformNotificationData>* out_notification_datas);

 private:
  NotificationService* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(NotificationServiceAsyncWaiter);
};

class CONTENT_EXPORT NonPersistentNotificationListenerProxy
    : public NonPersistentNotificationListener {
 public:
  explicit NonPersistentNotificationListenerProxy(mojo::MessageReceiverWithResponder* receiver);
  void OnShow() final;
  void OnClick() final;
  void OnClose(OnCloseCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class CONTENT_EXPORT NotificationServiceProxy
    : public NotificationService {
 public:
  explicit NotificationServiceProxy(mojo::MessageReceiverWithResponder* receiver);
  bool GetPermissionStatus(::blink::mojom::PermissionStatus* out_status) final;
  void GetPermissionStatus(GetPermissionStatusCallback callback) final;
  void DisplayNonPersistentNotification(const std::string& token, const content::PlatformNotificationData& notification_data, const content::NotificationResources& notification_resources, NonPersistentNotificationListenerPtr event_listener) final;
  void CloseNonPersistentNotification(const std::string& token) final;
  void DisplayPersistentNotification(int64_t service_worker_registration_id, const content::PlatformNotificationData& notification_data, const content::NotificationResources& notification_resources, DisplayPersistentNotificationCallback callback) final;
  void ClosePersistentNotification(const std::string& notification_id) final;
  void GetNotifications(int64_t service_worker_registration_id, const std::string& filter_tag, GetNotificationsCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class CONTENT_EXPORT NonPersistentNotificationListenerStubDispatch {
 public:
  static bool Accept(NonPersistentNotificationListener* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      NonPersistentNotificationListener* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<NonPersistentNotificationListener>>
class NonPersistentNotificationListenerStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  NonPersistentNotificationListenerStub() {}
  ~NonPersistentNotificationListenerStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return NonPersistentNotificationListenerStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return NonPersistentNotificationListenerStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class CONTENT_EXPORT NotificationServiceStubDispatch {
 public:
  static bool Accept(NotificationService* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      NotificationService* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<NotificationService>>
class NotificationServiceStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  NotificationServiceStub() {}
  ~NotificationServiceStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return NotificationServiceStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return NotificationServiceStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class CONTENT_EXPORT NonPersistentNotificationListenerRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class CONTENT_EXPORT NotificationServiceRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class CONTENT_EXPORT NonPersistentNotificationListenerResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class CONTENT_EXPORT NotificationServiceResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace blink

namespace mojo {

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_NOTIFICATIONS_NOTIFICATION_SERVICE_MOJOM_H_