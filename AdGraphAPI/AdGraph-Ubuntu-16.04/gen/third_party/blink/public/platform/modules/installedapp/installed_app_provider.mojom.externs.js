// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let blink = {};
/** @const */
blink.mojom = {};
/** @implements {mojo.InterfacePtr} */
blink.mojom.InstalledAppProviderPtr = class {

  /**
   * @param { !Array<blink.mojom.RelatedApplication> } relatedApps
   * @return {Promise}
   */
   filterInstalledApps(relatedApps) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
blink.mojom.InstalledAppProvider;
blink.mojom.InstalledAppProvider_FilterInstalledApps_Params = class {
  constructor() {
    /** @type { !Array<blink.mojom.RelatedApplication> } */
    this.relatedApps;
  }
};
blink.mojom.InstalledAppProvider_FilterInstalledApps_ResponseParams = class {
  constructor() {
    /** @type { !Array<blink.mojom.RelatedApplication> } */
    this.installedApps;
  }
};
