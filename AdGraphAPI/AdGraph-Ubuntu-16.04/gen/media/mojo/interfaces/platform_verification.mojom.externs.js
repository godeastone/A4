// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let media = {};
/** @const */
media.mojom = {};
/** @implements {mojo.InterfacePtr} */
media.mojom.PlatformVerificationPtr = class {

  /**
   * @param { !string } serviceId
   * @param { !string } challenge
   * @return {Promise}
   */
   challengePlatform(serviceId, challenge) {}
  /**
   * @param { !number } version
   * @return {Promise}
   */
   getStorageId(version) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
media.mojom.PlatformVerification;
media.mojom.PlatformVerification_ChallengePlatform_Params = class {
  constructor() {
    /** @type { !string } */
    this.serviceId;
    /** @type { !string } */
    this.challenge;
  }
};
media.mojom.PlatformVerification_ChallengePlatform_ResponseParams = class {
  constructor() {
    /** @type { !boolean } */
    this.success;
    /** @type { !string } */
    this.signedData;
    /** @type { !string } */
    this.signedDataSignature;
    /** @type { !string } */
    this.platformKeyCertificate;
  }
};
media.mojom.PlatformVerification_GetStorageId_Params = class {
  constructor() {
    /** @type { !number } */
    this.version;
  }
};
media.mojom.PlatformVerification_GetStorageId_ResponseParams = class {
  constructor() {
    /** @type { !number } */
    this.version;
    /** @type { !Array<number> } */
    this.storageId;
  }
};
