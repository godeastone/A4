// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let media = {};
/** @const */
media.mojom = {};
/** @implements {mojo.InterfacePtr} */
media.mojom.VideoDecodeStatsRecorderPtr = class {

  /**
   * @param { !media.mojom.PredictionFeatures } features
   */
   startNewRecord(features) {}
  /**
   * @param { !media.mojom.PredictionTargets } targets
   */
   updateRecord(targets) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
media.mojom.VideoDecodeStatsRecorder;
media.mojom.VideoDecodeStatsRecorder_StartNewRecord_Params = class {
  constructor() {
    /** @type { !media.mojom.PredictionFeatures } */
    this.features;
  }
};
media.mojom.VideoDecodeStatsRecorder_UpdateRecord_Params = class {
  constructor() {
    /** @type { !media.mojom.PredictionTargets } */
    this.targets;
  }
};
