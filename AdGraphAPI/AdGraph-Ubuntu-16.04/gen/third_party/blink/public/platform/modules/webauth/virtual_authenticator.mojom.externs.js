// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let webauth = {};
/** @const */
webauth.test = {};
/** @const */
webauth.test.mojom = {};
/** @implements {mojo.InterfacePtr} */
webauth.test.mojom.VirtualAuthenticatorPtr = class {

  /**
   * @return {Promise}
   */
   getUniqueId() {}
  /**
   * @param { !webauth.test.mojom.RegisteredKey } key
   * @return {Promise}
   */
   addRegistration(key) {}
  /**
   * @return {Promise}
   */
   getRegistrations() {}
  /**
   * @return {Promise}
   */
   clearRegistrations() {}
  /**
   * @param { !boolean } present
   * @return {Promise}
   */
   setUserPresence(present) {}
  /**
   * @return {Promise}
   */
   getUserPresence() {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
webauth.test.mojom.VirtualAuthenticator;
/** @implements {mojo.InterfacePtr} */
webauth.test.mojom.VirtualAuthenticatorManagerPtr = class {

  /**
   * @param { !webauth.test.mojom.VirtualAuthenticatorOptions } options
   * @return {Promise}
   */
   createAuthenticator(options) {}
  /**
   * @return {Promise}
   */
   getAuthenticators() {}
  /**
   * @param { !string } id
   * @return {Promise}
   */
   removeAuthenticator(id) {}
  /**
   * @return {Promise}
   */
   clearAuthenticators() {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
webauth.test.mojom.VirtualAuthenticatorManager;
webauth.test.mojom.VirtualAuthenticatorOptions = class {
  constructor() {
    /** @type { !webauth.test.mojom.ClientToAuthenticatorProtocol } */
    this.protocol;
    /** @type { !webauth.mojom.AuthenticatorTransport } */
    this.transport;
    /** @type { !webauth.mojom.AuthenticatorAttachment } */
    this.attachment;
    /** @type { !boolean } */
    this.hasResidentKey;
    /** @type { !boolean } */
    this.hasUserVerification;
  }
};
webauth.test.mojom.RegisteredKey = class {
  constructor() {
    /** @type { !Array<number> } */
    this.keyHandle;
    /** @type { !Array<number> } */
    this.applicationParameter;
    /** @type { !Array<number> } */
    this.privateKey;
    /** @type { !number } */
    this.counter;
  }
};
webauth.test.mojom.VirtualAuthenticator_GetUniqueId_Params = class {
  constructor() {
  }
};
webauth.test.mojom.VirtualAuthenticator_GetUniqueId_ResponseParams = class {
  constructor() {
    /** @type { !string } */
    this.id;
  }
};
webauth.test.mojom.VirtualAuthenticator_AddRegistration_Params = class {
  constructor() {
    /** @type { !webauth.test.mojom.RegisteredKey } */
    this.key;
  }
};
webauth.test.mojom.VirtualAuthenticator_AddRegistration_ResponseParams = class {
  constructor() {
    /** @type { !boolean } */
    this.added;
  }
};
webauth.test.mojom.VirtualAuthenticator_GetRegistrations_Params = class {
  constructor() {
  }
};
webauth.test.mojom.VirtualAuthenticator_GetRegistrations_ResponseParams = class {
  constructor() {
    /** @type { !Array<webauth.test.mojom.RegisteredKey> } */
    this.keys;
  }
};
webauth.test.mojom.VirtualAuthenticator_ClearRegistrations_Params = class {
  constructor() {
  }
};
webauth.test.mojom.VirtualAuthenticator_ClearRegistrations_ResponseParams = class {
  constructor() {
  }
};
webauth.test.mojom.VirtualAuthenticator_SetUserPresence_Params = class {
  constructor() {
    /** @type { !boolean } */
    this.present;
  }
};
webauth.test.mojom.VirtualAuthenticator_SetUserPresence_ResponseParams = class {
  constructor() {
  }
};
webauth.test.mojom.VirtualAuthenticator_GetUserPresence_Params = class {
  constructor() {
  }
};
webauth.test.mojom.VirtualAuthenticator_GetUserPresence_ResponseParams = class {
  constructor() {
    /** @type { !boolean } */
    this.present;
  }
};
webauth.test.mojom.VirtualAuthenticatorManager_CreateAuthenticator_Params = class {
  constructor() {
    /** @type { !webauth.test.mojom.VirtualAuthenticatorOptions } */
    this.options;
  }
};
webauth.test.mojom.VirtualAuthenticatorManager_CreateAuthenticator_ResponseParams = class {
  constructor() {
    /** @type { !webauth.test.mojom.VirtualAuthenticatorPtr } */
    this.authenticator;
  }
};
webauth.test.mojom.VirtualAuthenticatorManager_GetAuthenticators_Params = class {
  constructor() {
  }
};
webauth.test.mojom.VirtualAuthenticatorManager_GetAuthenticators_ResponseParams = class {
  constructor() {
    /** @type { !Array<webauth.test.mojom.VirtualAuthenticatorPtr> } */
    this.authenticators;
  }
};
webauth.test.mojom.VirtualAuthenticatorManager_RemoveAuthenticator_Params = class {
  constructor() {
    /** @type { !string } */
    this.id;
  }
};
webauth.test.mojom.VirtualAuthenticatorManager_RemoveAuthenticator_ResponseParams = class {
  constructor() {
    /** @type { !boolean } */
    this.removed;
  }
};
webauth.test.mojom.VirtualAuthenticatorManager_ClearAuthenticators_Params = class {
  constructor() {
  }
};
webauth.test.mojom.VirtualAuthenticatorManager_ClearAuthenticators_ResponseParams = class {
  constructor() {
  }
};
