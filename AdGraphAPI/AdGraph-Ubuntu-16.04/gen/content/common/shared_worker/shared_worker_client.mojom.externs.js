// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let content = {};
/** @const */
content.mojom = {};
/** @implements {mojo.InterfacePtr} */
content.mojom.SharedWorkerClientPtr = class {

  /**
   * @param { !blink.mojom.SharedWorkerCreationContextType } creationContextType
   */
   onCreated(creationContextType) {}
  /**
   * @param { !Array<blink.mojom.WebFeature> } featuresUsed
   */
   onConnected(featuresUsed) {}
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
content.mojom.SharedWorkerClient;
content.mojom.SharedWorkerClient_OnCreated_Params = class {
  constructor() {
    /** @type { !blink.mojom.SharedWorkerCreationContextType } */
    this.creationContextType;
  }
};
content.mojom.SharedWorkerClient_OnConnected_Params = class {
  constructor() {
    /** @type { !Array<blink.mojom.WebFeature> } */
    this.featuresUsed;
  }
};
content.mojom.SharedWorkerClient_OnScriptLoadFailed_Params = class {
  constructor() {
  }
};
content.mojom.SharedWorkerClient_OnFeatureUsed_Params = class {
  constructor() {
    /** @type { !blink.mojom.WebFeature } */
    this.feature;
  }
};
