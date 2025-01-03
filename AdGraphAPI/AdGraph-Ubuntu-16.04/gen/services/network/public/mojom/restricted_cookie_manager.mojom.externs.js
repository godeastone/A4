// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let network = {};
/** @const */
network.mojom = {};
/** @implements {mojo.InterfacePtr} */
network.mojom.RestrictedCookieManagerPtr = class {

  /**
   * @param { !url.mojom.Url } url
   * @param { !url.mojom.Url } siteForCookies
   * @param { !network.mojom.CookieManagerGetOptions } options
   * @return {Promise}
   */
   getAllForUrl(url, siteForCookies, options) {}
  /**
   * @param { !network.mojom.CanonicalCookie } cookie
   * @param { !url.mojom.Url } url
   * @param { !url.mojom.Url } siteForCookies
   * @return {Promise}
   */
   setCanonicalCookie(cookie, url, siteForCookies) {}
  /**
   * @param { !url.mojom.Url } url
   * @param { !url.mojom.Url } siteForCookies
   * @param { !network.mojom.CookieChangeListenerPtr } listener
   */
   addChangeListener(url, siteForCookies, listener) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
network.mojom.RestrictedCookieManager;
network.mojom.CookieManagerGetOptions = class {
  constructor() {
    /** @type { !string } */
    this.name;
    /** @type { !network.mojom.CookieMatchType } */
    this.matchType;
  }
};
network.mojom.RestrictedCookieManager_GetAllForUrl_Params = class {
  constructor() {
    /** @type { !url.mojom.Url } */
    this.url;
    /** @type { !url.mojom.Url } */
    this.siteForCookies;
    /** @type { !network.mojom.CookieManagerGetOptions } */
    this.options;
  }
};
network.mojom.RestrictedCookieManager_GetAllForUrl_ResponseParams = class {
  constructor() {
    /** @type { !Array<network.mojom.CanonicalCookie> } */
    this.cookies;
  }
};
network.mojom.RestrictedCookieManager_SetCanonicalCookie_Params = class {
  constructor() {
    /** @type { !network.mojom.CanonicalCookie } */
    this.cookie;
    /** @type { !url.mojom.Url } */
    this.url;
    /** @type { !url.mojom.Url } */
    this.siteForCookies;
  }
};
network.mojom.RestrictedCookieManager_SetCanonicalCookie_ResponseParams = class {
  constructor() {
    /** @type { !boolean } */
    this.success;
  }
};
network.mojom.RestrictedCookieManager_AddChangeListener_Params = class {
  constructor() {
    /** @type { !url.mojom.Url } */
    this.url;
    /** @type { !url.mojom.Url } */
    this.siteForCookies;
    /** @type { !network.mojom.CookieChangeListenerPtr } */
    this.listener;
  }
};
