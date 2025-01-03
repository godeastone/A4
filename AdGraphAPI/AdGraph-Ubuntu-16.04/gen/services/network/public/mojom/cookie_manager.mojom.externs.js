// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let network = {};
/** @const */
network.mojom = {};
/** @implements {mojo.InterfacePtr} */
network.mojom.CookieChangeListenerPtr = class {

  /**
   * @param { !network.mojom.CanonicalCookie } cookie
   * @param { !network.mojom.CookieChangeCause } cause
   */
   onCookieChange(cookie, cause) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
network.mojom.CookieChangeListener;
/** @implements {mojo.InterfacePtr} */
network.mojom.CookieManagerPtr = class {

  /**
   * @return {Promise}
   */
   getAllCookies() {}
  /**
   * @param { !url.mojom.Url } url
   * @param { !network.mojom.CookieOptions } cookieOptions
   * @return {Promise}
   */
   getCookieList(url, cookieOptions) {}
  /**
   * @param { !network.mojom.CanonicalCookie } cookie
   * @param { !boolean } secureSource
   * @param { !boolean } modifyHttpOnly
   * @return {Promise}
   */
   setCanonicalCookie(cookie, secureSource, modifyHttpOnly) {}
  /**
   * @param { !network.mojom.CookieDeletionFilter } filter
   * @return {Promise}
   */
   deleteCookies(filter) {}
  /**
   * @param { !url.mojom.Url } url
   * @param { !string } name
   * @param { !network.mojom.CookieChangeListenerPtr } listener
   */
   addCookieChangeListener(url, name, listener) {}
  /**
   * @param { !network.mojom.CookieChangeListenerPtr } notificationPointer
   */
   addGlobalChangeListener(notificationPointer) {}
  /**
   * @param { !mojo.InterfaceRequest } newInterface
   */
   cloneInterface(newInterface) {}
  /**
   * @return {Promise}
   */
   flushCookieStore() {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
network.mojom.CookieManager;
network.mojom.CookieOptions = class {
  constructor() {
    /** @type { !boolean } */
    this.excludeHttponly;
    /** @type { !boolean } */
    this.updateAccessTime;
    /** @type { !network.mojom.CookieSameSiteFilter } */
    this.cookieSameSiteFilter;
    /** @type { mojoBase.mojom.Time } */
    this.serverTime;
  }
};
network.mojom.CanonicalCookie = class {
  constructor() {
    /** @type { !string } */
    this.name;
    /** @type { !string } */
    this.value;
    /** @type { !string } */
    this.domain;
    /** @type { !string } */
    this.path;
    /** @type { mojoBase.mojom.Time } */
    this.creation;
    /** @type { mojoBase.mojom.Time } */
    this.expiry;
    /** @type { mojoBase.mojom.Time } */
    this.lastAccess;
    /** @type { !boolean } */
    this.secure;
    /** @type { !boolean } */
    this.httponly;
    /** @type { !network.mojom.CookieSameSite } */
    this.siteRestrictions;
    /** @type { !network.mojom.CookiePriority } */
    this.priority;
  }
};
network.mojom.CookieDeletionFilter = class {
  constructor() {
    /** @type { mojoBase.mojom.Time } */
    this.createdAfterTime;
    /** @type { mojoBase.mojom.Time } */
    this.createdBeforeTime;
    /** @type { Array<string> } */
    this.excludingDomains;
    /** @type { Array<string> } */
    this.includingDomains;
    /** @type { string } */
    this.cookieName;
    /** @type { string } */
    this.hostName;
    /** @type { url.mojom.Url } */
    this.url;
    /** @type { !network.mojom.CookieDeletionSessionControl } */
    this.sessionControl;
  }
};
network.mojom.CookieChangeListener_OnCookieChange_Params = class {
  constructor() {
    /** @type { !network.mojom.CanonicalCookie } */
    this.cookie;
    /** @type { !network.mojom.CookieChangeCause } */
    this.cause;
  }
};
network.mojom.CookieManager_GetAllCookies_Params = class {
  constructor() {
  }
};
network.mojom.CookieManager_GetAllCookies_ResponseParams = class {
  constructor() {
    /** @type { !Array<network.mojom.CanonicalCookie> } */
    this.cookies;
  }
};
network.mojom.CookieManager_GetCookieList_Params = class {
  constructor() {
    /** @type { !url.mojom.Url } */
    this.url;
    /** @type { !network.mojom.CookieOptions } */
    this.cookieOptions;
  }
};
network.mojom.CookieManager_GetCookieList_ResponseParams = class {
  constructor() {
    /** @type { !Array<network.mojom.CanonicalCookie> } */
    this.cookies;
  }
};
network.mojom.CookieManager_SetCanonicalCookie_Params = class {
  constructor() {
    /** @type { !network.mojom.CanonicalCookie } */
    this.cookie;
    /** @type { !boolean } */
    this.secureSource;
    /** @type { !boolean } */
    this.modifyHttpOnly;
  }
};
network.mojom.CookieManager_SetCanonicalCookie_ResponseParams = class {
  constructor() {
    /** @type { !boolean } */
    this.success;
  }
};
network.mojom.CookieManager_DeleteCookies_Params = class {
  constructor() {
    /** @type { !network.mojom.CookieDeletionFilter } */
    this.filter;
  }
};
network.mojom.CookieManager_DeleteCookies_ResponseParams = class {
  constructor() {
    /** @type { !number } */
    this.numDeleted;
  }
};
network.mojom.CookieManager_AddCookieChangeListener_Params = class {
  constructor() {
    /** @type { !url.mojom.Url } */
    this.url;
    /** @type { !string } */
    this.name;
    /** @type { !network.mojom.CookieChangeListenerPtr } */
    this.listener;
  }
};
network.mojom.CookieManager_AddGlobalChangeListener_Params = class {
  constructor() {
    /** @type { !network.mojom.CookieChangeListenerPtr } */
    this.notificationPointer;
  }
};
network.mojom.CookieManager_CloneInterface_Params = class {
  constructor() {
    /** @type { !mojo.InterfaceRequest } */
    this.newInterface;
  }
};
network.mojom.CookieManager_FlushCookieStore_Params = class {
  constructor() {
  }
};
network.mojom.CookieManager_FlushCookieStore_ResponseParams = class {
  constructor() {
  }
};
