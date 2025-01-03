// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let media = {};
/** @const */
media.mojom = {};
/** @implements {mojo.InterfacePtr} */
media.mojom.VideoDecodePerfHistoryPtr = class {

  /**
   * @param { !media.mojom.PredictionFeatures } features
   * @return {Promise}
   */
   getPerfInfo(features) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
media.mojom.VideoDecodePerfHistory;
media.mojom.VideoDecodePerfHistory_GetPerfInfo_Params = class {
  constructor() {
    /** @type { !media.mojom.PredictionFeatures } */
    this.features;
  }
};
media.mojom.VideoDecodePerfHistory_GetPerfInfo_ResponseParams = class {
  constructor() {
    /** @type { !boolean } */
    this.isSmooth;
    /** @type { !boolean } */
    this.isPowerEfficient;
  }
};
