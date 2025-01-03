// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let identity = {};
/** @const */
identity.mojom = {};
/** @implements {mojo.InterfacePtr} */
identity.mojom.IdentityManagerPtr = class {

  /**
   * @return {Promise}
   */
   getPrimaryAccountInfo() {}
  /**
   * @return {Promise}
   */
   getPrimaryAccountWhenAvailable() {}
  /**
   * @param { !string } gaiaId
   * @return {Promise}
   */
   getAccountInfoFromGaiaId(gaiaId) {}
  /**
   * @return {Promise}
   */
   getAccounts() {}
  /**
   * @param { !string } accountId
   * @param { !identity.mojom.ScopeSet } scopes
   * @param { !string } consumerId
   * @return {Promise}
   */
   getAccessToken(accountId, scopes, consumerId) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
identity.mojom.IdentityManager;
identity.mojom.IdentityManager_GetPrimaryAccountInfo_Params = class {
  constructor() {
  }
};
identity.mojom.IdentityManager_GetPrimaryAccountInfo_ResponseParams = class {
  constructor() {
    /** @type { identity.mojom.AccountInfo } */
    this.accountInfo;
    /** @type { !identity.mojom.AccountState } */
    this.accountState;
  }
};
identity.mojom.IdentityManager_GetPrimaryAccountWhenAvailable_Params = class {
  constructor() {
  }
};
identity.mojom.IdentityManager_GetPrimaryAccountWhenAvailable_ResponseParams = class {
  constructor() {
    /** @type { !identity.mojom.AccountInfo } */
    this.accountInfo;
    /** @type { !identity.mojom.AccountState } */
    this.accountState;
  }
};
identity.mojom.IdentityManager_GetAccountInfoFromGaiaId_Params = class {
  constructor() {
    /** @type { !string } */
    this.gaiaId;
  }
};
identity.mojom.IdentityManager_GetAccountInfoFromGaiaId_ResponseParams = class {
  constructor() {
    /** @type { identity.mojom.AccountInfo } */
    this.accountInfo;
    /** @type { !identity.mojom.AccountState } */
    this.accountState;
  }
};
identity.mojom.IdentityManager_GetAccounts_Params = class {
  constructor() {
  }
};
identity.mojom.IdentityManager_GetAccounts_ResponseParams = class {
  constructor() {
    /** @type { !Array<identity.mojom.Account> } */
    this.accounts;
  }
};
identity.mojom.IdentityManager_GetAccessToken_Params = class {
  constructor() {
    /** @type { !string } */
    this.accountId;
    /** @type { !identity.mojom.ScopeSet } */
    this.scopes;
    /** @type { !string } */
    this.consumerId;
  }
};
identity.mojom.IdentityManager_GetAccessToken_ResponseParams = class {
  constructor() {
    /** @type { string } */
    this.token;
    /** @type { !mojoBase.mojom.Time } */
    this.expirationTime;
    /** @type { !identity.mojom.GoogleServiceAuthError } */
    this.error;
  }
};
