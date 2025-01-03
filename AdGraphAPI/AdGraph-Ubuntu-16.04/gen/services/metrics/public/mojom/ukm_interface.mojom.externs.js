// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let ukm = {};
/** @const */
ukm.mojom = {};
/** @implements {mojo.InterfacePtr} */
ukm.mojom.UkmRecorderInterfacePtr = class {

  /**
   * @param { !ukm.mojom.UkmEntry } entry
   */
   addEntry(entry) {}
  /**
   * @param { !number } sourceId
   * @param { !string } url
   */
   updateSourceURL(sourceId, url) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
ukm.mojom.UkmRecorderInterface;
ukm.mojom.UkmEntry = class {
  constructor() {
    /** @type { !number } */
    this.sourceId;
    /** @type { !number } */
    this.eventHash;
    /** @type { !Map<number, number> } */
    this.metrics;
  }
};
ukm.mojom.UkmRecorderInterface_AddEntry_Params = class {
  constructor() {
    /** @type { !ukm.mojom.UkmEntry } */
    this.entry;
  }
};
ukm.mojom.UkmRecorderInterface_UpdateSourceURL_Params = class {
  constructor() {
    /** @type { !number } */
    this.sourceId;
    /** @type { !string } */
    this.url;
  }
};
