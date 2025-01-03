// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let network = {};
/** @const */
network.mojom = {};
/** @implements {mojo.InterfacePtr} */
network.mojom.SSLPrivateKeyPtr = class {

  /**
   * @param { !number } algorithm
   * @param { !Array<number> } input
   * @return {Promise}
   */
   sign(algorithm, input) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
network.mojom.SSLPrivateKey;
/** @implements {mojo.InterfacePtr} */
network.mojom.AuthChallengeResponderPtr = class {

  /**
   * @param { network.mojom.AuthCredentials } credentials
   */
   onAuthCredentials(credentials) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
network.mojom.AuthChallengeResponder;
/** @implements {mojo.InterfacePtr} */
network.mojom.NetworkServiceClientPtr = class {

  /**
   * @param { !number } processId
   * @param { !number } routingId
   * @param { !number } requestId
   * @param { !url.mojom.Url } url
   * @param { !url.mojom.Url } siteForCookies
   * @param { !boolean } firstAuthAttempt
   * @param { !network.mojom.AuthChallengeInfo } authInfo
   * @param { !number } resourceType
   * @param { !network.mojom.AuthChallengeResponderPtr } authChallengeResponder
   */
   onAuthRequired(processId, routingId, requestId, url, siteForCookies, firstAuthAttempt, authInfo, resourceType, authChallengeResponder) {}
  /**
   * @param { !number } processId
   * @param { !number } routingId
   * @param { !number } requestId
   * @param { !network.mojom.SSLCertRequestInfo } certInfo
   * @return {Promise}
   */
   onCertificateRequested(processId, routingId, requestId, certInfo) {}
  /**
   * @param { !number } processId
   * @param { !number } routingId
   * @param { !number } requestId
   * @param { !number } resourceType
   * @param { !url.mojom.Url } url
   * @param { !network.mojom.SSLInfo } sslInfo
   * @param { !boolean } fatal
   * @return {Promise}
   */
   onSSLCertificateError(processId, routingId, requestId, resourceType, url, sslInfo, fatal) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
network.mojom.NetworkServiceClient;
/** @implements {mojo.InterfacePtr} */
network.mojom.NetworkServicePtr = class {

  /**
   * @param { !network.mojom.NetworkServiceClientPtr } client
   */
   setClient(client) {}
  /**
   * @param { !mojo.InterfaceRequest } context
   * @param { !network.mojom.NetworkContextParams } params
   */
   createNetworkContext(context, params) {}
  /**
   */
   disableQuic() {}
  /**
   * @param { !number } processId
   * @param { !boolean } allow
   */
   setRawHeadersAccess(processId, allow) {}
  /**
   * @param { !mojo.InterfaceRequest } networkChangeManager
   */
   getNetworkChangeManager(networkChangeManager) {}
  /**
   * @return {Promise}
   */
   getTotalNetworkUsages() {}
  /**
   * @param { !network.mojom.SignedTreeHead } signedTreeHead
   */
   updateSignedTreeHead(signedTreeHead) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
network.mojom.NetworkService;
network.mojom.SSLPrivateKey_Sign_Params = class {
  constructor() {
    /** @type { !number } */
    this.algorithm;
    /** @type { !Array<number> } */
    this.input;
  }
};
network.mojom.SSLPrivateKey_Sign_ResponseParams = class {
  constructor() {
    /** @type { !number } */
    this.netError;
    /** @type { !Array<number> } */
    this.signature;
  }
};
network.mojom.AuthChallengeResponder_OnAuthCredentials_Params = class {
  constructor() {
    /** @type { network.mojom.AuthCredentials } */
    this.credentials;
  }
};
network.mojom.NetworkServiceClient_OnAuthRequired_Params = class {
  constructor() {
    /** @type { !number } */
    this.processId;
    /** @type { !number } */
    this.routingId;
    /** @type { !number } */
    this.requestId;
    /** @type { !boolean } */
    this.firstAuthAttempt;
    /** @type { !url.mojom.Url } */
    this.url;
    /** @type { !url.mojom.Url } */
    this.siteForCookies;
    /** @type { !network.mojom.AuthChallengeInfo } */
    this.authInfo;
    /** @type { !number } */
    this.resourceType;
    /** @type { !network.mojom.AuthChallengeResponderPtr } */
    this.authChallengeResponder;
  }
};
network.mojom.NetworkServiceClient_OnCertificateRequested_Params = class {
  constructor() {
    /** @type { !number } */
    this.processId;
    /** @type { !number } */
    this.routingId;
    /** @type { !number } */
    this.requestId;
    /** @type { !network.mojom.SSLCertRequestInfo } */
    this.certInfo;
  }
};
network.mojom.NetworkServiceClient_OnCertificateRequested_ResponseParams = class {
  constructor() {
    /** @type { !network.mojom.X509Certificate } */
    this.x509Certificate;
    /** @type { !Array<number> } */
    this.algorithmPreferences;
    /** @type { !network.mojom.SSLPrivateKeyPtr } */
    this.sslPrivateKey;
    /** @type { !boolean } */
    this.cancelCertificateSelection;
  }
};
network.mojom.NetworkServiceClient_OnSSLCertificateError_Params = class {
  constructor() {
    /** @type { !number } */
    this.processId;
    /** @type { !number } */
    this.routingId;
    /** @type { !number } */
    this.requestId;
    /** @type { !number } */
    this.resourceType;
    /** @type { !url.mojom.Url } */
    this.url;
    /** @type { !network.mojom.SSLInfo } */
    this.sslInfo;
    /** @type { !boolean } */
    this.fatal;
  }
};
network.mojom.NetworkServiceClient_OnSSLCertificateError_ResponseParams = class {
  constructor() {
    /** @type { !number } */
    this.netError;
  }
};
network.mojom.NetworkService_SetClient_Params = class {
  constructor() {
    /** @type { !network.mojom.NetworkServiceClientPtr } */
    this.client;
  }
};
network.mojom.NetworkService_CreateNetworkContext_Params = class {
  constructor() {
    /** @type { !mojo.InterfaceRequest } */
    this.context;
    /** @type { !network.mojom.NetworkContextParams } */
    this.params;
  }
};
network.mojom.NetworkService_DisableQuic_Params = class {
  constructor() {
  }
};
network.mojom.NetworkService_SetRawHeadersAccess_Params = class {
  constructor() {
    /** @type { !number } */
    this.processId;
    /** @type { !boolean } */
    this.allow;
  }
};
network.mojom.NetworkService_GetNetworkChangeManager_Params = class {
  constructor() {
    /** @type { !mojo.InterfaceRequest } */
    this.networkChangeManager;
  }
};
network.mojom.NetworkService_GetTotalNetworkUsages_Params = class {
  constructor() {
  }
};
network.mojom.NetworkService_GetTotalNetworkUsages_ResponseParams = class {
  constructor() {
    /** @type { !Array<network.mojom.NetworkUsage> } */
    this.totalNetworkUsages;
  }
};
network.mojom.NetworkService_UpdateSignedTreeHead_Params = class {
  constructor() {
    /** @type { !network.mojom.SignedTreeHead } */
    this.signedTreeHead;
  }
};
