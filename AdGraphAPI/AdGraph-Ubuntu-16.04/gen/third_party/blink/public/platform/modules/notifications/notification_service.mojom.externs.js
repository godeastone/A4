// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let blink = {};
/** @const */
blink.mojom = {};
/** @implements {mojo.InterfacePtr} */
blink.mojom.NonPersistentNotificationListenerPtr = class {

  /**
   */
   onShow() {}
  /**
   */
   onClick() {}
  /**
   * @return {Promise}
   */
   onClose() {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
blink.mojom.NonPersistentNotificationListener;
/** @implements {mojo.InterfacePtr} */
blink.mojom.NotificationServicePtr = class {

  /**
   * @return {Promise}
   */
   getPermissionStatus() {}
  /**
   * @param { !string } token
   * @param { !blink.mojom.NotificationData } notificationData
   * @param { !blink.mojom.NotificationResources } notificationResources
   * @param { !blink.mojom.NonPersistentNotificationListenerPtr } eventListener
   */
   displayNonPersistentNotification(token, notificationData, notificationResources, eventListener) {}
  /**
   * @param { !string } token
   */
   closeNonPersistentNotification(token) {}
  /**
   * @param { !number } serviceWorkerRegistrationId
   * @param { !blink.mojom.NotificationData } notificationData
   * @param { !blink.mojom.NotificationResources } notificationResources
   * @return {Promise}
   */
   displayPersistentNotification(serviceWorkerRegistrationId, notificationData, notificationResources) {}
  /**
   * @param { !string } notificationId
   */
   closePersistentNotification(notificationId) {}
  /**
   * @param { !number } serviceWorkerRegistrationId
   * @param { !string } filterTag
   * @return {Promise}
   */
   getNotifications(serviceWorkerRegistrationId, filterTag) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
blink.mojom.NotificationService;
blink.mojom.NonPersistentNotificationListener_OnShow_Params = class {
  constructor() {
  }
};
blink.mojom.NonPersistentNotificationListener_OnClick_Params = class {
  constructor() {
  }
};
blink.mojom.NonPersistentNotificationListener_OnClose_Params = class {
  constructor() {
  }
};
blink.mojom.NonPersistentNotificationListener_OnClose_ResponseParams = class {
  constructor() {
  }
};
blink.mojom.NotificationService_GetPermissionStatus_Params = class {
  constructor() {
  }
};
blink.mojom.NotificationService_GetPermissionStatus_ResponseParams = class {
  constructor() {
    /** @type { !blink.mojom.PermissionStatus } */
    this.status;
  }
};
blink.mojom.NotificationService_DisplayNonPersistentNotification_Params = class {
  constructor() {
    /** @type { !string } */
    this.token;
    /** @type { !blink.mojom.NotificationData } */
    this.notificationData;
    /** @type { !blink.mojom.NotificationResources } */
    this.notificationResources;
    /** @type { !blink.mojom.NonPersistentNotificationListenerPtr } */
    this.eventListener;
  }
};
blink.mojom.NotificationService_CloseNonPersistentNotification_Params = class {
  constructor() {
    /** @type { !string } */
    this.token;
  }
};
blink.mojom.NotificationService_DisplayPersistentNotification_Params = class {
  constructor() {
    /** @type { !number } */
    this.serviceWorkerRegistrationId;
    /** @type { !blink.mojom.NotificationData } */
    this.notificationData;
    /** @type { !blink.mojom.NotificationResources } */
    this.notificationResources;
  }
};
blink.mojom.NotificationService_DisplayPersistentNotification_ResponseParams = class {
  constructor() {
    /** @type { !blink.mojom.PersistentNotificationError } */
    this.error;
  }
};
blink.mojom.NotificationService_ClosePersistentNotification_Params = class {
  constructor() {
    /** @type { !string } */
    this.notificationId;
  }
};
blink.mojom.NotificationService_GetNotifications_Params = class {
  constructor() {
    /** @type { !number } */
    this.serviceWorkerRegistrationId;
    /** @type { !string } */
    this.filterTag;
  }
};
blink.mojom.NotificationService_GetNotifications_ResponseParams = class {
  constructor() {
    /** @type { !Array<string> } */
    this.notificationIds;
    /** @type { !Array<blink.mojom.NotificationData> } */
    this.notificationDatas;
  }
};
