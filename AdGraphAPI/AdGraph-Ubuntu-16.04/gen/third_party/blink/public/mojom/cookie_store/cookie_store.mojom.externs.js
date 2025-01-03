// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let blink = {};
/** @const */
blink.mojom = {};
/** @implements {mojo.InterfacePtr} */
blink.mojom.CookieStorePtr = class {

  /**
   * @param { !number } serviceWorkerRegistrationId
   * @param { !Array<blink.mojom.CookieChangeSubscription> } subscriptions
   * @return {Promise}
   */
   appendSubscriptions(serviceWorkerRegistrationId, subscriptions) {}
  /**
   * @param { !number } serviceWorkerRegistrationId
   * @return {Promise}
   */
   getSubscriptions(serviceWorkerRegistrationId) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
blink.mojom.CookieStore;
blink.mojom.CookieChangeSubscription = class {
  constructor() {
    /** @type { !url.mojom.Url } */
    this.url;
    /** @type { !network.mojom.CookieMatchType } */
    this.matchType;
    /** @type { !string } */
    this.name;
  }
};
blink.mojom.CookieStore_AppendSubscriptions_Params = class {
  constructor() {
    /** @type { !number } */
    this.serviceWorkerRegistrationId;
    /** @type { !Array<blink.mojom.CookieChangeSubscription> } */
    this.subscriptions;
  }
};
blink.mojom.CookieStore_AppendSubscriptions_ResponseParams = class {
  constructor() {
    /** @type { !boolean } */
    this.success;
  }
};
blink.mojom.CookieStore_GetSubscriptions_Params = class {
  constructor() {
    /** @type { !number } */
    this.serviceWorkerRegistrationId;
  }
};
blink.mojom.CookieStore_GetSubscriptions_ResponseParams = class {
  constructor() {
    /** @type { !Array<blink.mojom.CookieChangeSubscription> } */
    this.subscriptions;
    /** @type { !boolean } */
    this.success;
  }
};
