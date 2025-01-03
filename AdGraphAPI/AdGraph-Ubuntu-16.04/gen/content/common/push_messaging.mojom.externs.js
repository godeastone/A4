// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let content = {};
/** @const */
content.mojom = {};
/** @implements {mojo.InterfacePtr} */
content.mojom.PushMessagingPtr = class {

  /**
   * @param { !number } renderFrameId
   * @param { !number } serviceWorkerRegistrationId
   * @param { !content.mojom.PushSubscriptionOptions } options
   * @param { !boolean } userGesture
   * @return {Promise}
   */
   subscribe(renderFrameId, serviceWorkerRegistrationId, options, userGesture) {}
  /**
   * @param { !number } serviceWorkerRegistrationId
   * @return {Promise}
   */
   unsubscribe(serviceWorkerRegistrationId) {}
  /**
   * @param { !number } serviceWorkerRegistrationId
   * @return {Promise}
   */
   getSubscription(serviceWorkerRegistrationId) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
content.mojom.PushMessaging;
content.mojom.PushSubscriptionOptions = class {
  constructor() {
    /** @type { !boolean } */
    this.userVisibleOnly;
    /** @type { !string } */
    this.senderInfo;
  }
};
content.mojom.PushMessaging_Subscribe_Params = class {
  constructor() {
    /** @type { !number } */
    this.renderFrameId;
    /** @type { !boolean } */
    this.userGesture;
    /** @type { !number } */
    this.serviceWorkerRegistrationId;
    /** @type { !content.mojom.PushSubscriptionOptions } */
    this.options;
  }
};
content.mojom.PushMessaging_Subscribe_ResponseParams = class {
  constructor() {
    /** @type { !content.mojom.PushRegistrationStatus } */
    this.status;
    /** @type { url.mojom.Url } */
    this.endpoint;
    /** @type { content.mojom.PushSubscriptionOptions } */
    this.options;
    /** @type { Array<number> } */
    this.p256dh;
    /** @type { Array<number> } */
    this.auth;
  }
};
content.mojom.PushMessaging_Unsubscribe_Params = class {
  constructor() {
    /** @type { !number } */
    this.serviceWorkerRegistrationId;
  }
};
content.mojom.PushMessaging_Unsubscribe_ResponseParams = class {
  constructor() {
    /** @type { !content.mojom.PushErrorType } */
    this.errorType;
    /** @type { !boolean } */
    this.didUnsubscribe;
    /** @type { string } */
    this.errorMessage;
  }
};
content.mojom.PushMessaging_GetSubscription_Params = class {
  constructor() {
    /** @type { !number } */
    this.serviceWorkerRegistrationId;
  }
};
content.mojom.PushMessaging_GetSubscription_ResponseParams = class {
  constructor() {
    /** @type { !content.mojom.PushGetRegistrationStatus } */
    this.status;
    /** @type { url.mojom.Url } */
    this.endpoint;
    /** @type { content.mojom.PushSubscriptionOptions } */
    this.options;
    /** @type { Array<number> } */
    this.p256dh;
    /** @type { Array<number> } */
    this.auth;
  }
};
