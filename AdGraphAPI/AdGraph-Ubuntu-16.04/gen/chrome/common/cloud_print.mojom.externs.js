// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let cloudPrint = {};
/** @const */
cloudPrint.mojom = {};
/** @implements {mojo.InterfacePtr} */
cloudPrint.mojom.CloudPrintPtr = class {

  /**
   * @param { !string } robotAuthCode
   * @param { !string } robotEmail
   * @param { !string } userEmail
   * @param { !mojoBase.mojom.DictionaryValue } userSettings
   */
   enableCloudPrintProxyWithRobot(robotAuthCode, robotEmail, userEmail, userSettings) {}
  /**
   */
   disableCloudPrintProxy() {}
  /**
   * @return {Promise}
   */
   getCloudPrintProxyInfo() {}
  /**
   * @return {Promise}
   */
   getPrinters() {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
cloudPrint.mojom.CloudPrint;
cloudPrint.mojom.CloudPrint_EnableCloudPrintProxyWithRobot_Params = class {
  constructor() {
    /** @type { !string } */
    this.robotAuthCode;
    /** @type { !string } */
    this.robotEmail;
    /** @type { !string } */
    this.userEmail;
    /** @type { !mojoBase.mojom.DictionaryValue } */
    this.userSettings;
  }
};
cloudPrint.mojom.CloudPrint_DisableCloudPrintProxy_Params = class {
  constructor() {
  }
};
cloudPrint.mojom.CloudPrint_GetCloudPrintProxyInfo_Params = class {
  constructor() {
  }
};
cloudPrint.mojom.CloudPrint_GetCloudPrintProxyInfo_ResponseParams = class {
  constructor() {
    /** @type { !boolean } */
    this.enabled;
    /** @type { !string } */
    this.email;
    /** @type { !string } */
    this.proxyId;
  }
};
cloudPrint.mojom.CloudPrint_GetPrinters_Params = class {
  constructor() {
  }
};
cloudPrint.mojom.CloudPrint_GetPrinters_ResponseParams = class {
  constructor() {
    /** @type { !Array<string> } */
    this.printers;
  }
};
