// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let media = {};
/** @const */
media.mojom = {};
/** @implements {mojo.InterfacePtr} */
media.mojom.ContentDecryptionModulePtr = class {

  /**
   * @param { !media.mojom.ContentDecryptionModuleClientPtr } client
   */
   setClient(client) {}
  /**
   * @param { !string } keySystem
   * @param { !url.mojom.Origin } securityOrigin
   * @param { !media.mojom.CdmConfig } cdmConfig
   * @return {Promise}
   */
   initialize(keySystem, securityOrigin, cdmConfig) {}
  /**
   * @param { !Array<number> } certificateData
   * @return {Promise}
   */
   setServerCertificate(certificateData) {}
  /**
   * @param { !media.mojom.HdcpVersion } minHdcpVersion
   * @return {Promise}
   */
   getStatusForPolicy(minHdcpVersion) {}
  /**
   * @param { !media.mojom.CdmSessionType } sessionType
   * @param { !media.mojom.EmeInitDataType } initDataType
   * @param { !Array<number> } initData
   * @return {Promise}
   */
   createSessionAndGenerateRequest(sessionType, initDataType, initData) {}
  /**
   * @param { !media.mojom.CdmSessionType } sessionType
   * @param { !string } sessionId
   * @return {Promise}
   */
   loadSession(sessionType, sessionId) {}
  /**
   * @param { !string } sessionId
   * @param { !Array<number> } response
   * @return {Promise}
   */
   updateSession(sessionId, response) {}
  /**
   * @param { !string } sessionId
   * @return {Promise}
   */
   closeSession(sessionId) {}
  /**
   * @param { !string } sessionId
   * @return {Promise}
   */
   removeSession(sessionId) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
media.mojom.ContentDecryptionModule;
/** @implements {mojo.InterfacePtr} */
media.mojom.ContentDecryptionModuleClientPtr = class {

  /**
   * @param { !string } sessionId
   * @param { !media.mojom.CdmMessageType } messageType
   * @param { !Array<number> } message
   */
   onSessionMessage(sessionId, messageType, message) {}
  /**
   * @param { !string } sessionId
   */
   onSessionClosed(sessionId) {}
  /**
   * @param { !string } sessionId
   * @param { !boolean } hasAdditionalUsableKey
   * @param { !Array<media.mojom.CdmKeyInformation> } keysInfo
   */
   onSessionKeysChange(sessionId, hasAdditionalUsableKey, keysInfo) {}
  /**
   * @param { !string } sessionId
   * @param { !number } newExpiryTimeSec
   */
   onSessionExpirationUpdate(sessionId, newExpiryTimeSec) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
media.mojom.ContentDecryptionModuleClient;
/** @implements {mojo.InterfacePtr} */
media.mojom.CdmFactoryPtr = class {

  /**
   * @param { !string } keySystem
   * @param { !mojo.InterfaceRequest } cdm
   */
   createCdm(keySystem, cdm) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
media.mojom.CdmFactory;
media.mojom.CdmConfig = class {
  constructor() {
  }
};
media.mojom.CdmPromiseResult = class {
  constructor() {
    /** @type { !boolean } */
    this.success;
    /** @type { !media.mojom.Exception } */
    this.exception;
    /** @type { !number } */
    this.systemCode;
    /** @type { !string } */
    this.errorMessage;
  }
};
media.mojom.CdmKeyInformation = class {
  constructor() {
    /** @type { !Array<number> } */
    this.keyId;
    /** @type { !media.mojom.CdmKeyStatus } */
    this.status;
    /** @type { !number } */
    this.systemCode;
  }
};
media.mojom.ContentDecryptionModule_SetClient_Params = class {
  constructor() {
    /** @type { !media.mojom.ContentDecryptionModuleClientPtr } */
    this.client;
  }
};
media.mojom.ContentDecryptionModule_Initialize_Params = class {
  constructor() {
    /** @type { !string } */
    this.keySystem;
    /** @type { !url.mojom.Origin } */
    this.securityOrigin;
    /** @type { !media.mojom.CdmConfig } */
    this.cdmConfig;
  }
};
media.mojom.ContentDecryptionModule_Initialize_ResponseParams = class {
  constructor() {
    /** @type { !media.mojom.CdmPromiseResult } */
    this.result;
    /** @type { !number } */
    this.cdmId;
    /** @type { media.mojom.DecryptorPtr } */
    this.decryptor;
  }
};
media.mojom.ContentDecryptionModule_SetServerCertificate_Params = class {
  constructor() {
    /** @type { !Array<number> } */
    this.certificateData;
  }
};
media.mojom.ContentDecryptionModule_SetServerCertificate_ResponseParams = class {
  constructor() {
    /** @type { !media.mojom.CdmPromiseResult } */
    this.result;
  }
};
media.mojom.ContentDecryptionModule_GetStatusForPolicy_Params = class {
  constructor() {
    /** @type { !media.mojom.HdcpVersion } */
    this.minHdcpVersion;
  }
};
media.mojom.ContentDecryptionModule_GetStatusForPolicy_ResponseParams = class {
  constructor() {
    /** @type { !media.mojom.CdmPromiseResult } */
    this.result;
    /** @type { !media.mojom.CdmKeyStatus } */
    this.keyStatus;
  }
};
media.mojom.ContentDecryptionModule_CreateSessionAndGenerateRequest_Params = class {
  constructor() {
    /** @type { !media.mojom.CdmSessionType } */
    this.sessionType;
    /** @type { !media.mojom.EmeInitDataType } */
    this.initDataType;
    /** @type { !Array<number> } */
    this.initData;
  }
};
media.mojom.ContentDecryptionModule_CreateSessionAndGenerateRequest_ResponseParams = class {
  constructor() {
    /** @type { !media.mojom.CdmPromiseResult } */
    this.result;
    /** @type { !string } */
    this.sessionId;
  }
};
media.mojom.ContentDecryptionModule_LoadSession_Params = class {
  constructor() {
    /** @type { !media.mojom.CdmSessionType } */
    this.sessionType;
    /** @type { !string } */
    this.sessionId;
  }
};
media.mojom.ContentDecryptionModule_LoadSession_ResponseParams = class {
  constructor() {
    /** @type { !media.mojom.CdmPromiseResult } */
    this.result;
    /** @type { !string } */
    this.sessionId;
  }
};
media.mojom.ContentDecryptionModule_UpdateSession_Params = class {
  constructor() {
    /** @type { !string } */
    this.sessionId;
    /** @type { !Array<number> } */
    this.response;
  }
};
media.mojom.ContentDecryptionModule_UpdateSession_ResponseParams = class {
  constructor() {
    /** @type { !media.mojom.CdmPromiseResult } */
    this.result;
  }
};
media.mojom.ContentDecryptionModule_CloseSession_Params = class {
  constructor() {
    /** @type { !string } */
    this.sessionId;
  }
};
media.mojom.ContentDecryptionModule_CloseSession_ResponseParams = class {
  constructor() {
    /** @type { !media.mojom.CdmPromiseResult } */
    this.result;
  }
};
media.mojom.ContentDecryptionModule_RemoveSession_Params = class {
  constructor() {
    /** @type { !string } */
    this.sessionId;
  }
};
media.mojom.ContentDecryptionModule_RemoveSession_ResponseParams = class {
  constructor() {
    /** @type { !media.mojom.CdmPromiseResult } */
    this.result;
  }
};
media.mojom.ContentDecryptionModuleClient_OnSessionMessage_Params = class {
  constructor() {
    /** @type { !string } */
    this.sessionId;
    /** @type { !media.mojom.CdmMessageType } */
    this.messageType;
    /** @type { !Array<number> } */
    this.message;
  }
};
media.mojom.ContentDecryptionModuleClient_OnSessionClosed_Params = class {
  constructor() {
    /** @type { !string } */
    this.sessionId;
  }
};
media.mojom.ContentDecryptionModuleClient_OnSessionKeysChange_Params = class {
  constructor() {
    /** @type { !string } */
    this.sessionId;
    /** @type { !boolean } */
    this.hasAdditionalUsableKey;
    /** @type { !Array<media.mojom.CdmKeyInformation> } */
    this.keysInfo;
  }
};
media.mojom.ContentDecryptionModuleClient_OnSessionExpirationUpdate_Params = class {
  constructor() {
    /** @type { !string } */
    this.sessionId;
    /** @type { !number } */
    this.newExpiryTimeSec;
  }
};
media.mojom.CdmFactory_CreateCdm_Params = class {
  constructor() {
    /** @type { !string } */
    this.keySystem;
    /** @type { !mojo.InterfaceRequest } */
    this.cdm;
  }
};
