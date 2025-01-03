// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let network = {};
/** @const */
network.mojom = {};
/** @implements {mojo.InterfacePtr} */
network.mojom.SSLConfigClientPtr = class {

  /**
   * @param { !network.mojom.SSLConfig } sslConfig
   */
   onSSLConfigUpdated(sslConfig) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
network.mojom.SSLConfigClient;
network.mojom.SSLConfig = class {
  constructor() {
    /** @type { !boolean } */
    this.revCheckingEnabled;
    /** @type { !boolean } */
    this.revCheckingRequiredLocalAnchors;
    /** @type { !boolean } */
    this.sha1LocalAnchorsEnabled;
    /** @type { !boolean } */
    this.symantecEnforcementDisabled;
    /** @type { !network.mojom.SSLVersion } */
    this.versionMin;
    /** @type { !network.mojom.SSLVersion } */
    this.versionMax;
    /** @type { !network.mojom.TLS13Variant } */
    this.tls13Variant;
    /** @type { !Array<number> } */
    this.disabledCipherSuites;
  }
};
network.mojom.SSLConfigClient_OnSSLConfigUpdated_Params = class {
  constructor() {
    /** @type { !network.mojom.SSLConfig } */
    this.sslConfig;
  }
};
