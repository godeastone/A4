// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_NOTIFICATIONS_NOTIFICATION_SERVICE_MOJOM_SHARED_MESSAGE_IDS_H_
#define THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_NOTIFICATIONS_NOTIFICATION_SERVICE_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace blink {
namespace mojom {

namespace internal {


// The 2062207738 value is based on sha256(salt + "NonPersistentNotificationListener1").
constexpr uint32_t kNonPersistentNotificationListener_OnShow_Name = 2062207738;
// The 920549624 value is based on sha256(salt + "NonPersistentNotificationListener2").
constexpr uint32_t kNonPersistentNotificationListener_OnClick_Name = 920549624;
// The 1399709157 value is based on sha256(salt + "NonPersistentNotificationListener3").
constexpr uint32_t kNonPersistentNotificationListener_OnClose_Name = 1399709157;
// The 977188745 value is based on sha256(salt + "NotificationService1").
constexpr uint32_t kNotificationService_GetPermissionStatus_Name = 977188745;
// The 2027264328 value is based on sha256(salt + "NotificationService2").
constexpr uint32_t kNotificationService_DisplayNonPersistentNotification_Name = 2027264328;
// The 873958401 value is based on sha256(salt + "NotificationService3").
constexpr uint32_t kNotificationService_CloseNonPersistentNotification_Name = 873958401;
// The 1475590281 value is based on sha256(salt + "NotificationService4").
constexpr uint32_t kNotificationService_DisplayPersistentNotification_Name = 1475590281;
// The 289077306 value is based on sha256(salt + "NotificationService5").
constexpr uint32_t kNotificationService_ClosePersistentNotification_Name = 289077306;
// The 127789112 value is based on sha256(salt + "NotificationService6").
constexpr uint32_t kNotificationService_GetNotifications_Name = 127789112;

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_NOTIFICATIONS_NOTIFICATION_SERVICE_MOJOM_SHARED_MESSAGE_IDS_H_