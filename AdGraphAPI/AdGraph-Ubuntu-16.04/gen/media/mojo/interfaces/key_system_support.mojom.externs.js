// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let media = {};
/** @const */
media.mojom = {};
/** @implements {mojo.InterfacePtr} */
media.mojom.KeySystemSupportPtr = class {

  /**
   * @param { !string } keySystem
   * @return {Promise}
   */
   isKeySystemSupported(keySystem) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
media.mojom.KeySystemSupport;
media.mojom.KeySystemSupport_IsKeySystemSupported_Params = class {
  constructor() {
    /** @type { !string } */
    this.keySystem;
  }
};
media.mojom.KeySystemSupport_IsKeySystemSupported_ResponseParams = class {
  constructor() {
    /** @type { !boolean } */
    this.isSupported;
    /** @type { !boolean } */
    this.supportsPersistentLicense;
    /** @type { !Array<media.mojom.VideoCodec> } */
    this.supportedVideoCodecs;
    /** @type { !Array<media.mojom.EncryptionMode> } */
    this.supportedEncryptionSchemes;
  }
};
