// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let blink = {};
/** @const */
blink.mojom = {};
/** @implements {mojo.InterfacePtr} */
blink.mojom.LeakDetectorPtr = class {

  /**
   * @return {Promise}
   */
   performLeakDetection() {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
blink.mojom.LeakDetector;
blink.mojom.LeakDetectionResult = class {
  constructor() {
    /** @type { !number } */
    this.numberOfLiveAudioNodes;
    /** @type { !number } */
    this.numberOfLiveDocuments;
    /** @type { !number } */
    this.numberOfLiveNodes;
    /** @type { !number } */
    this.numberOfLiveLayoutObjects;
    /** @type { !number } */
    this.numberOfLiveResources;
    /** @type { !number } */
    this.numberOfLivePausableObjects;
    /** @type { !number } */
    this.numberOfLiveScriptPromises;
    /** @type { !number } */
    this.numberOfLiveFrames;
    /** @type { !number } */
    this.numberOfLiveV8PerContextData;
    /** @type { !number } */
    this.numberOfWorkerGlobalScopes;
    /** @type { !number } */
    this.numberOfLiveUaCssResources;
    /** @type { !number } */
    this.numberOfLiveResourceFetchers;
  }
};
blink.mojom.LeakDetector_PerformLeakDetection_Params = class {
  constructor() {
  }
};
blink.mojom.LeakDetector_PerformLeakDetection_ResponseParams = class {
  constructor() {
    /** @type { !blink.mojom.LeakDetectionResult } */
    this.result;
  }
};
