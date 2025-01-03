// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let blink = {};
/** @const */
blink.mojom = {};
/** @implements {mojo.InterfacePtr} */
blink.mojom.ManifestManagerPtr = class {

  /**
   * @return {Promise}
   */
   requestManifest() {}
  /**
   * @return {Promise}
   */
   requestManifestDebugInfo() {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
blink.mojom.ManifestManager;
blink.mojom.ManifestManager_RequestManifest_Params = class {
  constructor() {
  }
};
blink.mojom.ManifestManager_RequestManifest_ResponseParams = class {
  constructor() {
    /** @type { !url.mojom.Url } */
    this.url;
    /** @type { blink.mojom.Manifest } */
    this.manifest;
  }
};
blink.mojom.ManifestManager_RequestManifestDebugInfo_Params = class {
  constructor() {
  }
};
blink.mojom.ManifestManager_RequestManifestDebugInfo_ResponseParams = class {
  constructor() {
    /** @type { !url.mojom.Url } */
    this.url;
    /** @type { blink.mojom.ManifestDebugInfo } */
    this.debugInfo;
  }
};
