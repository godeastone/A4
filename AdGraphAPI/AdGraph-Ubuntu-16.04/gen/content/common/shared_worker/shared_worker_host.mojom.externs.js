// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let content = {};
/** @const */
content.mojom = {};
/** @implements {mojo.InterfacePtr} */
content.mojom.SharedWorkerHostPtr = class {

  /**
   * @param { !number } connectionId
   */
   onConnected(connectionId) {}
  /**
   */
   onContextClosed() {}
  /**
   */
   onReadyForInspection() {}
  /**
   */
   onScriptLoaded() {}
  /**
   */
   onScriptLoadFailed() {}
  /**
   * @param { !blink.mojom.WebFeature } feature
   */
   onFeatureUsed(feature) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
content.mojom.SharedWorkerHost;
content.mojom.SharedWorkerHost_OnConnected_Params = class {
  constructor() {
    /** @type { !number } */
    this.connectionId;
  }
};
content.mojom.SharedWorkerHost_OnContextClosed_Params = class {
  constructor() {
  }
};
content.mojom.SharedWorkerHost_OnReadyForInspection_Params = class {
  constructor() {
  }
};
content.mojom.SharedWorkerHost_OnScriptLoaded_Params = class {
  constructor() {
  }
};
content.mojom.SharedWorkerHost_OnScriptLoadFailed_Params = class {
  constructor() {
  }
};
content.mojom.SharedWorkerHost_OnFeatureUsed_Params = class {
  constructor() {
    /** @type { !blink.mojom.WebFeature } */
    this.feature;
  }
};
