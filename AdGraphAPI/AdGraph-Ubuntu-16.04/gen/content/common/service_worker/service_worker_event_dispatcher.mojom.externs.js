// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let content = {};
/** @const */
content.mojom = {};
/** @implements {mojo.InterfacePtr} */
content.mojom.ServiceWorkerEventDispatcherPtr = class {

  /**
   * @param { !mojo.AssociatedInterfacePtrInfo } serviceWorkerHost
   * @param { !blink.mojom.ServiceWorkerRegistrationObjectInfo } registrationInfo
   */
   initializeGlobalScope(serviceWorkerHost, registrationInfo) {}
  /**
   * @return {Promise}
   */
   dispatchInstallEvent() {}
  /**
   * @return {Promise}
   */
   dispatchActivateEvent() {}
  /**
   * @param { !string } developerId
   * @param { !string } uniqueId
   * @param { !Array<content.mojom.BackgroundFetchSettledFetch> } fetches
   * @return {Promise}
   */
   dispatchBackgroundFetchAbortEvent(developerId, uniqueId, fetches) {}
  /**
   * @param { !string } developerId
   * @param { !content.mojom.BackgroundFetchState } state
   * @return {Promise}
   */
   dispatchBackgroundFetchClickEvent(developerId, state) {}
  /**
   * @param { !string } developerId
   * @param { !string } uniqueId
   * @param { !Array<content.mojom.BackgroundFetchSettledFetch> } fetches
   * @return {Promise}
   */
   dispatchBackgroundFetchFailEvent(developerId, uniqueId, fetches) {}
  /**
   * @param { !string } developerId
   * @param { !string } uniqueId
   * @param { !Array<content.mojom.BackgroundFetchSettledFetch> } fetches
   * @return {Promise}
   */
   dispatchBackgroundFetchedEvent(developerId, uniqueId, fetches) {}
  /**
   * @param { !network.mojom.CanonicalCookie } cookie
   * @param { !network.mojom.CookieChangeCause } cause
   * @return {Promise}
   */
   dispatchCookieChangeEvent(cookie, cause) {}
  /**
   * @param { !content.mojom.DispatchFetchEventParams } params
   * @param { !content.mojom.ServiceWorkerFetchResponseCallbackPtr } responseCallback
   * @return {Promise}
   */
   dispatchFetchEvent(params, responseCallback) {}
  /**
   * @param { !string } notificationId
   * @param { !content.mojom.PlatformNotificationData } notificationData
   * @param { !number } actionIndex
   * @param { mojoBase.mojom.String16 } reply
   * @return {Promise}
   */
   dispatchNotificationClickEvent(notificationId, notificationData, actionIndex, reply) {}
  /**
   * @param { !string } notificationId
   * @param { !content.mojom.PlatformNotificationData } notificationData
   * @return {Promise}
   */
   dispatchNotificationCloseEvent(notificationId, notificationData) {}
  /**
   * @param { !content.mojom.PushEventPayload } payload
   * @return {Promise}
   */
   dispatchPushEvent(payload) {}
  /**
   * @param { !string } id
   * @param { !boolean } lastChance
   * @param { !mojoBase.mojom.TimeDelta } timeout
   * @return {Promise}
   */
   dispatchSyncEvent(id, lastChance, timeout) {}
  /**
   * @param { !number } eventId
   * @param { !payments.mojom.PaymentHandlerResponseCallbackPtr } resultOfAbortPayment
   * @return {Promise}
   */
   dispatchAbortPaymentEvent(eventId, resultOfAbortPayment) {}
  /**
   * @param { !number } eventId
   * @param { !payments.mojom.CanMakePaymentEventData } eventData
   * @param { !payments.mojom.PaymentHandlerResponseCallbackPtr } resultOfCanMakePayment
   * @return {Promise}
   */
   dispatchCanMakePaymentEvent(eventId, eventData, resultOfCanMakePayment) {}
  /**
   * @param { !number } paymentRequestId
   * @param { !payments.mojom.PaymentRequestEventData } requestData
   * @param { !payments.mojom.PaymentHandlerResponseCallbackPtr } responseCallback
   * @return {Promise}
   */
   dispatchPaymentRequestEvent(paymentRequestId, requestData, responseCallback) {}
  /**
   * @param { !content.mojom.ExtendableMessageEvent } event
   * @return {Promise}
   */
   dispatchExtendableMessageEvent(event) {}
  /**
   * @return {Promise}
   */
   ping() {}
  /**
   */
   setIdleTimerDelayToZero() {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
content.mojom.ServiceWorkerEventDispatcher;
content.mojom.PlatformNotificationData = class {
  constructor() {
  }
};
content.mojom.PushEventPayload = class {
  constructor() {
  }
};
content.mojom.ServiceWorkerResponse = class {
  constructor() {
  }
};
content.mojom.BackgroundFetchSettledFetch = class {
  constructor() {
    /** @type { !blink.mojom.FetchAPIRequest } */
    this.request;
    /** @type { !content.mojom.ServiceWorkerResponse } */
    this.response;
  }
};
content.mojom.ExtendableMessageEvent = class {
  constructor() {
    /** @type { !blink.mojom.TransferableMessage } */
    this.message;
    /** @type { !url.mojom.Origin } */
    this.sourceOrigin;
    /** @type { blink.mojom.ServiceWorkerClientInfo } */
    this.sourceInfoForClient;
    /** @type { blink.mojom.ServiceWorkerObjectInfo } */
    this.sourceInfoForServiceWorker;
  }
};
content.mojom.ServiceWorkerEventDispatcher_InitializeGlobalScope_Params = class {
  constructor() {
    /** @type { !mojo.AssociatedInterfacePtrInfo } */
    this.serviceWorkerHost;
    /** @type { !blink.mojom.ServiceWorkerRegistrationObjectInfo } */
    this.registrationInfo;
  }
};
content.mojom.ServiceWorkerEventDispatcher_DispatchInstallEvent_Params = class {
  constructor() {
  }
};
content.mojom.ServiceWorkerEventDispatcher_DispatchInstallEvent_ResponseParams = class {
  constructor() {
    /** @type { !blink.mojom.ServiceWorkerEventStatus } */
    this.status;
    /** @type { !boolean } */
    this.hasFetchHandler;
    /** @type { !mojoBase.mojom.Time } */
    this.dispatchEventTime;
  }
};
content.mojom.ServiceWorkerEventDispatcher_DispatchActivateEvent_Params = class {
  constructor() {
  }
};
content.mojom.ServiceWorkerEventDispatcher_DispatchActivateEvent_ResponseParams = class {
  constructor() {
    /** @type { !blink.mojom.ServiceWorkerEventStatus } */
    this.status;
    /** @type { !mojoBase.mojom.Time } */
    this.dispatchEventTime;
  }
};
content.mojom.ServiceWorkerEventDispatcher_DispatchBackgroundFetchAbortEvent_Params = class {
  constructor() {
    /** @type { !string } */
    this.developerId;
    /** @type { !string } */
    this.uniqueId;
    /** @type { !Array<content.mojom.BackgroundFetchSettledFetch> } */
    this.fetches;
  }
};
content.mojom.ServiceWorkerEventDispatcher_DispatchBackgroundFetchAbortEvent_ResponseParams = class {
  constructor() {
    /** @type { !blink.mojom.ServiceWorkerEventStatus } */
    this.status;
    /** @type { !mojoBase.mojom.Time } */
    this.dispatchEventTime;
  }
};
content.mojom.ServiceWorkerEventDispatcher_DispatchBackgroundFetchClickEvent_Params = class {
  constructor() {
    /** @type { !string } */
    this.developerId;
    /** @type { !content.mojom.BackgroundFetchState } */
    this.state;
  }
};
content.mojom.ServiceWorkerEventDispatcher_DispatchBackgroundFetchClickEvent_ResponseParams = class {
  constructor() {
    /** @type { !blink.mojom.ServiceWorkerEventStatus } */
    this.status;
    /** @type { !mojoBase.mojom.Time } */
    this.dispatchEventTime;
  }
};
content.mojom.ServiceWorkerEventDispatcher_DispatchBackgroundFetchFailEvent_Params = class {
  constructor() {
    /** @type { !string } */
    this.developerId;
    /** @type { !string } */
    this.uniqueId;
    /** @type { !Array<content.mojom.BackgroundFetchSettledFetch> } */
    this.fetches;
  }
};
content.mojom.ServiceWorkerEventDispatcher_DispatchBackgroundFetchFailEvent_ResponseParams = class {
  constructor() {
    /** @type { !blink.mojom.ServiceWorkerEventStatus } */
    this.status;
    /** @type { !mojoBase.mojom.Time } */
    this.dispatchEventTime;
  }
};
content.mojom.ServiceWorkerEventDispatcher_DispatchBackgroundFetchedEvent_Params = class {
  constructor() {
    /** @type { !string } */
    this.developerId;
    /** @type { !string } */
    this.uniqueId;
    /** @type { !Array<content.mojom.BackgroundFetchSettledFetch> } */
    this.fetches;
  }
};
content.mojom.ServiceWorkerEventDispatcher_DispatchBackgroundFetchedEvent_ResponseParams = class {
  constructor() {
    /** @type { !blink.mojom.ServiceWorkerEventStatus } */
    this.status;
    /** @type { !mojoBase.mojom.Time } */
    this.dispatchEventTime;
  }
};
content.mojom.ServiceWorkerEventDispatcher_DispatchCookieChangeEvent_Params = class {
  constructor() {
    /** @type { !network.mojom.CanonicalCookie } */
    this.cookie;
    /** @type { !network.mojom.CookieChangeCause } */
    this.cause;
  }
};
content.mojom.ServiceWorkerEventDispatcher_DispatchCookieChangeEvent_ResponseParams = class {
  constructor() {
    /** @type { !blink.mojom.ServiceWorkerEventStatus } */
    this.status;
    /** @type { !mojoBase.mojom.Time } */
    this.dispatchEventTime;
  }
};
content.mojom.ServiceWorkerEventDispatcher_DispatchFetchEvent_Params = class {
  constructor() {
    /** @type { !content.mojom.DispatchFetchEventParams } */
    this.params;
    /** @type { !content.mojom.ServiceWorkerFetchResponseCallbackPtr } */
    this.responseCallback;
  }
};
content.mojom.ServiceWorkerEventDispatcher_DispatchFetchEvent_ResponseParams = class {
  constructor() {
    /** @type { !blink.mojom.ServiceWorkerEventStatus } */
    this.status;
    /** @type { !mojoBase.mojom.Time } */
    this.dispatchEventTime;
  }
};
content.mojom.ServiceWorkerEventDispatcher_DispatchNotificationClickEvent_Params = class {
  constructor() {
    /** @type { !string } */
    this.notificationId;
    /** @type { !content.mojom.PlatformNotificationData } */
    this.notificationData;
    /** @type { !number } */
    this.actionIndex;
    /** @type { mojoBase.mojom.String16 } */
    this.reply;
  }
};
content.mojom.ServiceWorkerEventDispatcher_DispatchNotificationClickEvent_ResponseParams = class {
  constructor() {
    /** @type { !blink.mojom.ServiceWorkerEventStatus } */
    this.status;
    /** @type { !mojoBase.mojom.Time } */
    this.dispatchEventTime;
  }
};
content.mojom.ServiceWorkerEventDispatcher_DispatchNotificationCloseEvent_Params = class {
  constructor() {
    /** @type { !string } */
    this.notificationId;
    /** @type { !content.mojom.PlatformNotificationData } */
    this.notificationData;
  }
};
content.mojom.ServiceWorkerEventDispatcher_DispatchNotificationCloseEvent_ResponseParams = class {
  constructor() {
    /** @type { !blink.mojom.ServiceWorkerEventStatus } */
    this.status;
    /** @type { !mojoBase.mojom.Time } */
    this.dispatchEventTime;
  }
};
content.mojom.ServiceWorkerEventDispatcher_DispatchPushEvent_Params = class {
  constructor() {
    /** @type { !content.mojom.PushEventPayload } */
    this.payload;
  }
};
content.mojom.ServiceWorkerEventDispatcher_DispatchPushEvent_ResponseParams = class {
  constructor() {
    /** @type { !blink.mojom.ServiceWorkerEventStatus } */
    this.status;
    /** @type { !mojoBase.mojom.Time } */
    this.dispatchEventTime;
  }
};
content.mojom.ServiceWorkerEventDispatcher_DispatchSyncEvent_Params = class {
  constructor() {
    /** @type { !string } */
    this.id;
    /** @type { !boolean } */
    this.lastChance;
    /** @type { !mojoBase.mojom.TimeDelta } */
    this.timeout;
  }
};
content.mojom.ServiceWorkerEventDispatcher_DispatchSyncEvent_ResponseParams = class {
  constructor() {
    /** @type { !blink.mojom.ServiceWorkerEventStatus } */
    this.status;
    /** @type { !mojoBase.mojom.Time } */
    this.dispatchEventTime;
  }
};
content.mojom.ServiceWorkerEventDispatcher_DispatchAbortPaymentEvent_Params = class {
  constructor() {
    /** @type { !number } */
    this.eventId;
    /** @type { !payments.mojom.PaymentHandlerResponseCallbackPtr } */
    this.resultOfAbortPayment;
  }
};
content.mojom.ServiceWorkerEventDispatcher_DispatchAbortPaymentEvent_ResponseParams = class {
  constructor() {
    /** @type { !blink.mojom.ServiceWorkerEventStatus } */
    this.status;
    /** @type { !mojoBase.mojom.Time } */
    this.dispatchEventTime;
  }
};
content.mojom.ServiceWorkerEventDispatcher_DispatchCanMakePaymentEvent_Params = class {
  constructor() {
    /** @type { !number } */
    this.eventId;
    /** @type { !payments.mojom.CanMakePaymentEventData } */
    this.eventData;
    /** @type { !payments.mojom.PaymentHandlerResponseCallbackPtr } */
    this.resultOfCanMakePayment;
  }
};
content.mojom.ServiceWorkerEventDispatcher_DispatchCanMakePaymentEvent_ResponseParams = class {
  constructor() {
    /** @type { !blink.mojom.ServiceWorkerEventStatus } */
    this.status;
    /** @type { !mojoBase.mojom.Time } */
    this.dispatchEventTime;
  }
};
content.mojom.ServiceWorkerEventDispatcher_DispatchPaymentRequestEvent_Params = class {
  constructor() {
    /** @type { !number } */
    this.paymentRequestId;
    /** @type { !payments.mojom.PaymentRequestEventData } */
    this.requestData;
    /** @type { !payments.mojom.PaymentHandlerResponseCallbackPtr } */
    this.responseCallback;
  }
};
content.mojom.ServiceWorkerEventDispatcher_DispatchPaymentRequestEvent_ResponseParams = class {
  constructor() {
    /** @type { !blink.mojom.ServiceWorkerEventStatus } */
    this.status;
    /** @type { !mojoBase.mojom.Time } */
    this.dispatchEventTime;
  }
};
content.mojom.ServiceWorkerEventDispatcher_DispatchExtendableMessageEvent_Params = class {
  constructor() {
    /** @type { !content.mojom.ExtendableMessageEvent } */
    this.event;
  }
};
content.mojom.ServiceWorkerEventDispatcher_DispatchExtendableMessageEvent_ResponseParams = class {
  constructor() {
    /** @type { !blink.mojom.ServiceWorkerEventStatus } */
    this.status;
    /** @type { !mojoBase.mojom.Time } */
    this.dispatchEventTime;
  }
};
content.mojom.ServiceWorkerEventDispatcher_Ping_Params = class {
  constructor() {
  }
};
content.mojom.ServiceWorkerEventDispatcher_Ping_ResponseParams = class {
  constructor() {
  }
};
content.mojom.ServiceWorkerEventDispatcher_SetIdleTimerDelayToZero_Params = class {
  constructor() {
  }
};
