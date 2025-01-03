// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let media = {};
/** @const */
media.mojom = {};
/** @implements {mojo.InterfacePtr} */
media.mojom.CdmProxyPtr = class {

  /**
   * @param { !mojo.AssociatedInterfacePtrInfo } client
   * @return {Promise}
   */
   initialize(client) {}
  /**
   * @param { !media.mojom.Function } function_
   * @param { !number } cryptoSessionId
   * @param { !Array<number> } inputData
   * @param { !number } outputDataSize
   * @return {Promise}
   */
   process(function_, cryptoSessionId, inputData, outputDataSize) {}
  /**
   * @param { !Array<number> } inputData
   * @return {Promise}
   */
   createMediaCryptoSession(inputData) {}
  /**
   * @param { !number } cryptoSessionId
   * @param { !Array<number> } keyId
   * @param { !Array<number> } keyBlob
   */
   setKey(cryptoSessionId, keyId, keyBlob) {}
  /**
   * @param { !number } cryptoSessionId
   * @param { !Array<number> } keyId
   */
   removeKey(cryptoSessionId, keyId) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
media.mojom.CdmProxy;
/** @implements {mojo.InterfacePtr} */
media.mojom.CdmProxyClientPtr = class {

  /**
   */
   notifyHardwareReset() {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
media.mojom.CdmProxyClient;
media.mojom.CdmProxy_Initialize_Params = class {
  constructor() {
    /** @type { !mojo.AssociatedInterfacePtrInfo } */
    this.client;
  }
};
media.mojom.CdmProxy_Initialize_ResponseParams = class {
  constructor() {
    /** @type { !media.mojom.Status } */
    this.status;
    /** @type { !media.mojom.Protocol } */
    this.protocol;
    /** @type { !number } */
    this.cryptoSessionId;
    /** @type { !number } */
    this.cdmId;
  }
};
media.mojom.CdmProxy_Process_Params = class {
  constructor() {
    /** @type { !media.mojom.Function } */
    this.function;
    /** @type { !number } */
    this.cryptoSessionId;
    /** @type { !Array<number> } */
    this.inputData;
    /** @type { !number } */
    this.outputDataSize;
  }
};
media.mojom.CdmProxy_Process_ResponseParams = class {
  constructor() {
    /** @type { !media.mojom.Status } */
    this.status;
    /** @type { !Array<number> } */
    this.outputData;
  }
};
media.mojom.CdmProxy_CreateMediaCryptoSession_Params = class {
  constructor() {
    /** @type { !Array<number> } */
    this.inputData;
  }
};
media.mojom.CdmProxy_CreateMediaCryptoSession_ResponseParams = class {
  constructor() {
    /** @type { !media.mojom.Status } */
    this.status;
    /** @type { !number } */
    this.cryptoSessionId;
    /** @type { !number } */
    this.outputData;
  }
};
media.mojom.CdmProxy_SetKey_Params = class {
  constructor() {
    /** @type { !number } */
    this.cryptoSessionId;
    /** @type { !Array<number> } */
    this.keyId;
    /** @type { !Array<number> } */
    this.keyBlob;
  }
};
media.mojom.CdmProxy_RemoveKey_Params = class {
  constructor() {
    /** @type { !number } */
    this.cryptoSessionId;
    /** @type { !Array<number> } */
    this.keyId;
  }
};
media.mojom.CdmProxyClient_NotifyHardwareReset_Params = class {
  constructor() {
  }
};
