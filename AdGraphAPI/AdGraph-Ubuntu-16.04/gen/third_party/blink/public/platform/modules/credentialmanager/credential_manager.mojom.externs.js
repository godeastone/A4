// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let passwordManager = {};
/** @const */
passwordManager.mojom = {};
/** @implements {mojo.InterfacePtr} */
passwordManager.mojom.CredentialManagerPtr = class {

  /**
   * @param { !passwordManager.mojom.CredentialInfo } credential
   * @return {Promise}
   */
   store(credential) {}
  /**
   * @return {Promise}
   */
   preventSilentAccess() {}
  /**
   * @param { !passwordManager.mojom.CredentialMediationRequirement } mediation
   * @param { !boolean } includePasswords
   * @param { !Array<url.mojom.Url> } federations
   * @return {Promise}
   */
   get(mediation, includePasswords, federations) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
passwordManager.mojom.CredentialManager;
passwordManager.mojom.CredentialInfo = class {
  constructor() {
    /** @type { !passwordManager.mojom.CredentialType } */
    this.type;
    /** @type { mojoBase.mojom.String16 } */
    this.id;
    /** @type { mojoBase.mojom.String16 } */
    this.name;
    /** @type { !url.mojom.Url } */
    this.icon;
    /** @type { mojoBase.mojom.String16 } */
    this.password;
    /** @type { !url.mojom.Origin } */
    this.federation;
  }
};
passwordManager.mojom.CredentialManager_Store_Params = class {
  constructor() {
    /** @type { !passwordManager.mojom.CredentialInfo } */
    this.credential;
  }
};
passwordManager.mojom.CredentialManager_Store_ResponseParams = class {
  constructor() {
  }
};
passwordManager.mojom.CredentialManager_PreventSilentAccess_Params = class {
  constructor() {
  }
};
passwordManager.mojom.CredentialManager_PreventSilentAccess_ResponseParams = class {
  constructor() {
  }
};
passwordManager.mojom.CredentialManager_Get_Params = class {
  constructor() {
    /** @type { !passwordManager.mojom.CredentialMediationRequirement } */
    this.mediation;
    /** @type { !boolean } */
    this.includePasswords;
    /** @type { !Array<url.mojom.Url> } */
    this.federations;
  }
};
passwordManager.mojom.CredentialManager_Get_ResponseParams = class {
  constructor() {
    /** @type { !passwordManager.mojom.CredentialManagerError } */
    this.error;
    /** @type { passwordManager.mojom.CredentialInfo } */
    this.credential;
  }
};
