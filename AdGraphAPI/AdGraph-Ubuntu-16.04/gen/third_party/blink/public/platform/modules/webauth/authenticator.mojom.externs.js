// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let webauth = {};
/** @const */
webauth.mojom = {};
/** @implements {mojo.InterfacePtr} */
webauth.mojom.AuthenticatorPtr = class {

  /**
   * @param { !webauth.mojom.PublicKeyCredentialCreationOptions } options
   * @return {Promise}
   */
   makeCredential(options) {}
  /**
   * @param { !webauth.mojom.PublicKeyCredentialRequestOptions } options
   * @return {Promise}
   */
   getAssertion(options) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
webauth.mojom.Authenticator;
webauth.mojom.CommonCredentialInfo = class {
  constructor() {
    /** @type { !string } */
    this.id;
    /** @type { !Array<number> } */
    this.rawId;
    /** @type { !Array<number> } */
    this.clientDataJson;
  }
};
webauth.mojom.MakeCredentialAuthenticatorResponse = class {
  constructor() {
    /** @type { !webauth.mojom.CommonCredentialInfo } */
    this.info;
    /** @type { !Array<number> } */
    this.attestationObject;
  }
};
webauth.mojom.GetAssertionAuthenticatorResponse = class {
  constructor() {
    /** @type { !webauth.mojom.CommonCredentialInfo } */
    this.info;
    /** @type { !Array<number> } */
    this.authenticatorData;
    /** @type { !Array<number> } */
    this.signature;
    /** @type { Array<number> } */
    this.userHandle;
    /** @type { !boolean } */
    this.echoAppidExtension;
  }
};
webauth.mojom.PublicKeyCredentialRpEntity = class {
  constructor() {
    /** @type { !string } */
    this.id;
    /** @type { !string } */
    this.name;
    /** @type { url.mojom.Url } */
    this.icon;
  }
};
webauth.mojom.PublicKeyCredentialUserEntity = class {
  constructor() {
    /** @type { !Array<number> } */
    this.id;
    /** @type { !string } */
    this.name;
    /** @type { url.mojom.Url } */
    this.icon;
    /** @type { !string } */
    this.displayName;
  }
};
webauth.mojom.PublicKeyCredentialParameters = class {
  constructor() {
    /** @type { !webauth.mojom.PublicKeyCredentialType } */
    this.type;
    /** @type { !number } */
    this.algorithmIdentifier;
  }
};
webauth.mojom.CableAuthentication = class {
  constructor() {
    /** @type { !number } */
    this.version;
    /** @type { !Array<number> } */
    this.clientEid;
    /** @type { !Array<number> } */
    this.authenticatorEid;
    /** @type { !Array<number> } */
    this.sessionPreKey;
  }
};
webauth.mojom.CableRegistration = class {
  constructor() {
    /** @type { !number } */
    this.version;
    /** @type { !Array<number> } */
    this.relyingPartyPublicKey;
  }
};
webauth.mojom.PublicKeyCredentialRequestOptions = class {
  constructor() {
    /** @type { !Array<number> } */
    this.challenge;
    /** @type { !mojoBase.mojom.TimeDelta } */
    this.adjustedTimeout;
    /** @type { !string } */
    this.relyingPartyId;
    /** @type { !Array<webauth.mojom.PublicKeyCredentialDescriptor> } */
    this.allowCredentials;
    /** @type { !webauth.mojom.UserVerificationRequirement } */
    this.userVerification;
    /** @type { string } */
    this.appid;
    /** @type { !Array<webauth.mojom.CableAuthentication> } */
    this.cableAuthenticationData;
  }
};
webauth.mojom.AuthenticatorSelectionCriteria = class {
  constructor() {
    /** @type { !webauth.mojom.AuthenticatorAttachment } */
    this.authenticatorAttachment;
    /** @type { !boolean } */
    this.requireResidentKey;
    /** @type { !webauth.mojom.UserVerificationRequirement } */
    this.userVerification;
  }
};
webauth.mojom.PublicKeyCredentialCreationOptions = class {
  constructor() {
    /** @type { !webauth.mojom.PublicKeyCredentialRpEntity } */
    this.relyingParty;
    /** @type { !webauth.mojom.PublicKeyCredentialUserEntity } */
    this.user;
    /** @type { !Array<number> } */
    this.challenge;
    /** @type { !Array<webauth.mojom.PublicKeyCredentialParameters> } */
    this.publicKeyParameters;
    /** @type { !mojoBase.mojom.TimeDelta } */
    this.adjustedTimeout;
    /** @type { !Array<webauth.mojom.PublicKeyCredentialDescriptor> } */
    this.excludeCredentials;
    /** @type { webauth.mojom.AuthenticatorSelectionCriteria } */
    this.authenticatorSelection;
    /** @type { !webauth.mojom.AttestationConveyancePreference } */
    this.attestation;
    /** @type { webauth.mojom.CableRegistration } */
    this.cableRegistrationData;
  }
};
webauth.mojom.PublicKeyCredentialDescriptor = class {
  constructor() {
    /** @type { !webauth.mojom.PublicKeyCredentialType } */
    this.type;
    /** @type { !Array<number> } */
    this.id;
    /** @type { !Array<webauth.mojom.AuthenticatorTransport> } */
    this.transports;
  }
};
webauth.mojom.Authenticator_MakeCredential_Params = class {
  constructor() {
    /** @type { !webauth.mojom.PublicKeyCredentialCreationOptions } */
    this.options;
  }
};
webauth.mojom.Authenticator_MakeCredential_ResponseParams = class {
  constructor() {
    /** @type { !webauth.mojom.AuthenticatorStatus } */
    this.status;
    /** @type { webauth.mojom.MakeCredentialAuthenticatorResponse } */
    this.credential;
  }
};
webauth.mojom.Authenticator_GetAssertion_Params = class {
  constructor() {
    /** @type { !webauth.mojom.PublicKeyCredentialRequestOptions } */
    this.options;
  }
};
webauth.mojom.Authenticator_GetAssertion_ResponseParams = class {
  constructor() {
    /** @type { !webauth.mojom.AuthenticatorStatus } */
    this.status;
    /** @type { webauth.mojom.GetAssertionAuthenticatorResponse } */
    this.credential;
  }
};
