// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let network = {};
/** @const */
network.mojom = {};
/** @implements {mojo.InterfacePtr} */
network.mojom.NetworkServiceTestPtr = class {

  /**
   * @param { !Array<network.mojom.Rule> } rules
   * @return {Promise}
   */
   addRules(rules) {}
  /**
   * @param { !network.mojom.ConnectionType } type
   * @return {Promise}
   */
   simulateNetworkChange(type) {}
  /**
   */
   simulateCrash() {}
  /**
   * @param { !number } defaultResult
   * @return {Promise}
   */
   mockCertVerifierSetDefaultResult(defaultResult) {}
  /**
   * @param { !network.mojom.X509Certificate } cert
   * @param { !string } hostPattern
   * @param { !network.mojom.CertVerifyResult } verifyResult
   * @param { !number } rv
   * @return {Promise}
   */
   mockCertVerifierAddResultForCertAndHost(cert, hostPattern, verifyResult, rv) {}
  /**
   * @param { !network.mojom.ShouldRequireCT } required
   * @return {Promise}
   */
   setShouldRequireCT(required) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
network.mojom.NetworkServiceTest;
network.mojom.Rule = class {
  constructor() {
    /** @type { !string } */
    this.hostPattern;
    /** @type { !string } */
    this.replacement;
  }
};
network.mojom.NetworkServiceTest_AddRules_Params = class {
  constructor() {
    /** @type { !Array<network.mojom.Rule> } */
    this.rules;
  }
};
network.mojom.NetworkServiceTest_AddRules_ResponseParams = class {
  constructor() {
  }
};
network.mojom.NetworkServiceTest_SimulateNetworkChange_Params = class {
  constructor() {
    /** @type { !network.mojom.ConnectionType } */
    this.type;
  }
};
network.mojom.NetworkServiceTest_SimulateNetworkChange_ResponseParams = class {
  constructor() {
  }
};
network.mojom.NetworkServiceTest_SimulateCrash_Params = class {
  constructor() {
  }
};
network.mojom.NetworkServiceTest_MockCertVerifierSetDefaultResult_Params = class {
  constructor() {
    /** @type { !number } */
    this.defaultResult;
  }
};
network.mojom.NetworkServiceTest_MockCertVerifierSetDefaultResult_ResponseParams = class {
  constructor() {
  }
};
network.mojom.NetworkServiceTest_MockCertVerifierAddResultForCertAndHost_Params = class {
  constructor() {
    /** @type { !network.mojom.X509Certificate } */
    this.cert;
    /** @type { !string } */
    this.hostPattern;
    /** @type { !network.mojom.CertVerifyResult } */
    this.verifyResult;
    /** @type { !number } */
    this.rv;
  }
};
network.mojom.NetworkServiceTest_MockCertVerifierAddResultForCertAndHost_ResponseParams = class {
  constructor() {
  }
};
network.mojom.NetworkServiceTest_SetShouldRequireCT_Params = class {
  constructor() {
    /** @type { !network.mojom.ShouldRequireCT } */
    this.required;
  }
};
network.mojom.NetworkServiceTest_SetShouldRequireCT_ResponseParams = class {
  constructor() {
  }
};
