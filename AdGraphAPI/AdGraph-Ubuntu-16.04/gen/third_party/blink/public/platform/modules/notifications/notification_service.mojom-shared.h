// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_NOTIFICATIONS_NOTIFICATION_SERVICE_MOJOM_SHARED_H_
#define THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_NOTIFICATIONS_NOTIFICATION_SERVICE_MOJOM_SHARED_H_

#include <stdint.h>

#include <functional>
#include <ostream>
#include <type_traits>
#include <utility>

#include "base/compiler_specific.h"
#include "base/containers/flat_map.h"
#include "mojo/public/cpp/bindings/array_data_view.h"
#include "mojo/public/cpp/bindings/enum_traits.h"
#include "mojo/public/cpp/bindings/interface_data_view.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/serialization.h"
#include "mojo/public/cpp/bindings/map_data_view.h"
#include "mojo/public/cpp/bindings/string_data_view.h"
#include "third_party/blink/public/platform/modules/notifications/notification_service.mojom-shared-internal.h"
#include "third_party/blink/public/platform/modules/notifications/notification.mojom-shared.h"
#include "third_party/blink/public/platform/modules/permissions/permission_status.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "base/component_export.h"


namespace blink {
namespace mojom {


}  // namespace mojom
}  // namespace blink

namespace mojo {
namespace internal {

}  // namespace internal
}  // namespace mojo


namespace blink {
namespace mojom {

enum class PersistentNotificationError : int32_t {
  NONE,
  INTERNAL_ERROR,
  PERMISSION_DENIED,
  kMinValue = 0,
  kMaxValue = 2,
};

inline std::ostream& operator<<(std::ostream& os, PersistentNotificationError value) {
  switch(value) {
    case PersistentNotificationError::NONE:
      return os << "PersistentNotificationError::NONE";
    case PersistentNotificationError::INTERNAL_ERROR:
      return os << "PersistentNotificationError::INTERNAL_ERROR";
    case PersistentNotificationError::PERMISSION_DENIED:
      return os << "PersistentNotificationError::PERMISSION_DENIED";
    default:
      return os << "Unknown PersistentNotificationError value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(PersistentNotificationError value) {
  return internal::PersistentNotificationError_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
// Interface base classes. They are used for type safety check.
class NonPersistentNotificationListenerInterfaceBase {};

using NonPersistentNotificationListenerPtrDataView =
    mojo::InterfacePtrDataView<NonPersistentNotificationListenerInterfaceBase>;
using NonPersistentNotificationListenerRequestDataView =
    mojo::InterfaceRequestDataView<NonPersistentNotificationListenerInterfaceBase>;
using NonPersistentNotificationListenerAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<NonPersistentNotificationListenerInterfaceBase>;
using NonPersistentNotificationListenerAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<NonPersistentNotificationListenerInterfaceBase>;
class NotificationServiceInterfaceBase {};

using NotificationServicePtrDataView =
    mojo::InterfacePtrDataView<NotificationServiceInterfaceBase>;
using NotificationServiceRequestDataView =
    mojo::InterfaceRequestDataView<NotificationServiceInterfaceBase>;
using NotificationServiceAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<NotificationServiceInterfaceBase>;
using NotificationServiceAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<NotificationServiceInterfaceBase>;
class NonPersistentNotificationListener_OnShow_ParamsDataView {
 public:
  NonPersistentNotificationListener_OnShow_ParamsDataView() {}

  NonPersistentNotificationListener_OnShow_ParamsDataView(
      internal::NonPersistentNotificationListener_OnShow_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::NonPersistentNotificationListener_OnShow_Params_Data* data_ = nullptr;
};

class NonPersistentNotificationListener_OnClick_ParamsDataView {
 public:
  NonPersistentNotificationListener_OnClick_ParamsDataView() {}

  NonPersistentNotificationListener_OnClick_ParamsDataView(
      internal::NonPersistentNotificationListener_OnClick_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::NonPersistentNotificationListener_OnClick_Params_Data* data_ = nullptr;
};

class NonPersistentNotificationListener_OnClose_ParamsDataView {
 public:
  NonPersistentNotificationListener_OnClose_ParamsDataView() {}

  NonPersistentNotificationListener_OnClose_ParamsDataView(
      internal::NonPersistentNotificationListener_OnClose_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::NonPersistentNotificationListener_OnClose_Params_Data* data_ = nullptr;
};

class NonPersistentNotificationListener_OnClose_ResponseParamsDataView {
 public:
  NonPersistentNotificationListener_OnClose_ResponseParamsDataView() {}

  NonPersistentNotificationListener_OnClose_ResponseParamsDataView(
      internal::NonPersistentNotificationListener_OnClose_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::NonPersistentNotificationListener_OnClose_ResponseParams_Data* data_ = nullptr;
};

class NotificationService_GetPermissionStatus_ParamsDataView {
 public:
  NotificationService_GetPermissionStatus_ParamsDataView() {}

  NotificationService_GetPermissionStatus_ParamsDataView(
      internal::NotificationService_GetPermissionStatus_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::NotificationService_GetPermissionStatus_Params_Data* data_ = nullptr;
};

class NotificationService_GetPermissionStatus_ResponseParamsDataView {
 public:
  NotificationService_GetPermissionStatus_ResponseParamsDataView() {}

  NotificationService_GetPermissionStatus_ResponseParamsDataView(
      internal::NotificationService_GetPermissionStatus_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStatus(UserType* output) const {
    auto data_value = data_->status;
    return mojo::internal::Deserialize<::blink::mojom::PermissionStatus>(
        data_value, output);
  }

  ::blink::mojom::PermissionStatus status() const {
    return static_cast<::blink::mojom::PermissionStatus>(data_->status);
  }
 private:
  internal::NotificationService_GetPermissionStatus_ResponseParams_Data* data_ = nullptr;
};

class NotificationService_DisplayNonPersistentNotification_ParamsDataView {
 public:
  NotificationService_DisplayNonPersistentNotification_ParamsDataView() {}

  NotificationService_DisplayNonPersistentNotification_ParamsDataView(
      internal::NotificationService_DisplayNonPersistentNotification_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetTokenDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadToken(UserType* output) {
    auto* pointer = data_->token.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetNotificationDataDataView(
      ::blink::mojom::NotificationDataDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadNotificationData(UserType* output) {
    auto* pointer = data_->notification_data.Get();
    return mojo::internal::Deserialize<::blink::mojom::NotificationDataDataView>(
        pointer, output, context_);
  }
  inline void GetNotificationResourcesDataView(
      ::blink::mojom::NotificationResourcesDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadNotificationResources(UserType* output) {
    auto* pointer = data_->notification_resources.Get();
    return mojo::internal::Deserialize<::blink::mojom::NotificationResourcesDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  UserType TakeEventListener() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::blink::mojom::NonPersistentNotificationListenerPtrDataView>(
            &data_->event_listener, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::NotificationService_DisplayNonPersistentNotification_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class NotificationService_CloseNonPersistentNotification_ParamsDataView {
 public:
  NotificationService_CloseNonPersistentNotification_ParamsDataView() {}

  NotificationService_CloseNonPersistentNotification_ParamsDataView(
      internal::NotificationService_CloseNonPersistentNotification_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetTokenDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadToken(UserType* output) {
    auto* pointer = data_->token.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::NotificationService_CloseNonPersistentNotification_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class NotificationService_DisplayPersistentNotification_ParamsDataView {
 public:
  NotificationService_DisplayPersistentNotification_ParamsDataView() {}

  NotificationService_DisplayPersistentNotification_ParamsDataView(
      internal::NotificationService_DisplayPersistentNotification_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int64_t service_worker_registration_id() const {
    return data_->service_worker_registration_id;
  }
  inline void GetNotificationDataDataView(
      ::blink::mojom::NotificationDataDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadNotificationData(UserType* output) {
    auto* pointer = data_->notification_data.Get();
    return mojo::internal::Deserialize<::blink::mojom::NotificationDataDataView>(
        pointer, output, context_);
  }
  inline void GetNotificationResourcesDataView(
      ::blink::mojom::NotificationResourcesDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadNotificationResources(UserType* output) {
    auto* pointer = data_->notification_resources.Get();
    return mojo::internal::Deserialize<::blink::mojom::NotificationResourcesDataView>(
        pointer, output, context_);
  }
 private:
  internal::NotificationService_DisplayPersistentNotification_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class NotificationService_DisplayPersistentNotification_ResponseParamsDataView {
 public:
  NotificationService_DisplayPersistentNotification_ResponseParamsDataView() {}

  NotificationService_DisplayPersistentNotification_ResponseParamsDataView(
      internal::NotificationService_DisplayPersistentNotification_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadError(UserType* output) const {
    auto data_value = data_->error;
    return mojo::internal::Deserialize<::blink::mojom::PersistentNotificationError>(
        data_value, output);
  }

  PersistentNotificationError error() const {
    return static_cast<PersistentNotificationError>(data_->error);
  }
 private:
  internal::NotificationService_DisplayPersistentNotification_ResponseParams_Data* data_ = nullptr;
};

class NotificationService_ClosePersistentNotification_ParamsDataView {
 public:
  NotificationService_ClosePersistentNotification_ParamsDataView() {}

  NotificationService_ClosePersistentNotification_ParamsDataView(
      internal::NotificationService_ClosePersistentNotification_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetNotificationIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadNotificationId(UserType* output) {
    auto* pointer = data_->notification_id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::NotificationService_ClosePersistentNotification_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class NotificationService_GetNotifications_ParamsDataView {
 public:
  NotificationService_GetNotifications_ParamsDataView() {}

  NotificationService_GetNotifications_ParamsDataView(
      internal::NotificationService_GetNotifications_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int64_t service_worker_registration_id() const {
    return data_->service_worker_registration_id;
  }
  inline void GetFilterTagDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFilterTag(UserType* output) {
    auto* pointer = data_->filter_tag.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::NotificationService_GetNotifications_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class NotificationService_GetNotifications_ResponseParamsDataView {
 public:
  NotificationService_GetNotifications_ResponseParamsDataView() {}

  NotificationService_GetNotifications_ResponseParamsDataView(
      internal::NotificationService_GetNotifications_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetNotificationIdsDataView(
      mojo::ArrayDataView<mojo::StringDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadNotificationIds(UserType* output) {
    auto* pointer = data_->notification_ids.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<mojo::StringDataView>>(
        pointer, output, context_);
  }
  inline void GetNotificationDatasDataView(
      mojo::ArrayDataView<::blink::mojom::NotificationDataDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadNotificationDatas(UserType* output) {
    auto* pointer = data_->notification_datas.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::blink::mojom::NotificationDataDataView>>(
        pointer, output, context_);
  }
 private:
  internal::NotificationService_GetNotifications_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace blink

namespace std {

template <>
struct hash<::blink::mojom::PersistentNotificationError>
    : public mojo::internal::EnumHashImpl<::blink::mojom::PersistentNotificationError> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::blink::mojom::PersistentNotificationError, ::blink::mojom::PersistentNotificationError> {
  static ::blink::mojom::PersistentNotificationError ToMojom(::blink::mojom::PersistentNotificationError input) { return input; }
  static bool FromMojom(::blink::mojom::PersistentNotificationError input, ::blink::mojom::PersistentNotificationError* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::PersistentNotificationError, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::blink::mojom::PersistentNotificationError, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::blink::mojom::PersistentNotificationError>(input), output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace blink {
namespace mojom {













inline void NotificationService_DisplayNonPersistentNotification_ParamsDataView::GetTokenDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->token.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void NotificationService_DisplayNonPersistentNotification_ParamsDataView::GetNotificationDataDataView(
    ::blink::mojom::NotificationDataDataView* output) {
  auto pointer = data_->notification_data.Get();
  *output = ::blink::mojom::NotificationDataDataView(pointer, context_);
}
inline void NotificationService_DisplayNonPersistentNotification_ParamsDataView::GetNotificationResourcesDataView(
    ::blink::mojom::NotificationResourcesDataView* output) {
  auto pointer = data_->notification_resources.Get();
  *output = ::blink::mojom::NotificationResourcesDataView(pointer, context_);
}


inline void NotificationService_CloseNonPersistentNotification_ParamsDataView::GetTokenDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->token.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void NotificationService_DisplayPersistentNotification_ParamsDataView::GetNotificationDataDataView(
    ::blink::mojom::NotificationDataDataView* output) {
  auto pointer = data_->notification_data.Get();
  *output = ::blink::mojom::NotificationDataDataView(pointer, context_);
}
inline void NotificationService_DisplayPersistentNotification_ParamsDataView::GetNotificationResourcesDataView(
    ::blink::mojom::NotificationResourcesDataView* output) {
  auto pointer = data_->notification_resources.Get();
  *output = ::blink::mojom::NotificationResourcesDataView(pointer, context_);
}




inline void NotificationService_ClosePersistentNotification_ParamsDataView::GetNotificationIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->notification_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void NotificationService_GetNotifications_ParamsDataView::GetFilterTagDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->filter_tag.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void NotificationService_GetNotifications_ResponseParamsDataView::GetNotificationIdsDataView(
    mojo::ArrayDataView<mojo::StringDataView>* output) {
  auto pointer = data_->notification_ids.Get();
  *output = mojo::ArrayDataView<mojo::StringDataView>(pointer, context_);
}
inline void NotificationService_GetNotifications_ResponseParamsDataView::GetNotificationDatasDataView(
    mojo::ArrayDataView<::blink::mojom::NotificationDataDataView>* output) {
  auto pointer = data_->notification_datas.Get();
  *output = mojo::ArrayDataView<::blink::mojom::NotificationDataDataView>(pointer, context_);
}



}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_NOTIFICATIONS_NOTIFICATION_SERVICE_MOJOM_SHARED_H_
