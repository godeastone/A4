// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let rappor = {};
/** @const */
rappor.mojom = {};
/** @implements {mojo.InterfacePtr} */
rappor.mojom.RapporRecorderPtr = class {

  /**
   * @param { !string } metric
   * @param { !string } sample
   */
   recordRappor(metric, sample) {}
  /**
   * @param { !string } metric
   * @param { !url.mojom.Url } url
   */
   recordRapporURL(metric, url) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
rappor.mojom.RapporRecorder;
rappor.mojom.RapporRecorder_RecordRappor_Params = class {
  constructor() {
    /** @type { !string } */
    this.metric;
    /** @type { !string } */
    this.sample;
  }
};
rappor.mojom.RapporRecorder_RecordRapporURL_Params = class {
  constructor() {
    /** @type { !string } */
    this.metric;
    /** @type { !url.mojom.Url } */
    this.url;
  }
};
