// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let content = {};
/** @const */
content.mojom = {};
/** @implements {mojo.InterfacePtr} */
content.mojom.ResourceUsageReporterPtr = class {

  /**
   * @return {Promise}
   */
   getUsageData() {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
content.mojom.ResourceUsageReporter;
content.mojom.ResourceTypeStat = class {
  constructor() {
    /** @type { !number } */
    this.count;
    /** @type { !number } */
    this.size;
    /** @type { !number } */
    this.liveSize;
    /** @type { !number } */
    this.decodedSize;
  }
};
content.mojom.ResourceTypeStats = class {
  constructor() {
    /** @type { !content.mojom.ResourceTypeStat } */
    this.images;
    /** @type { !content.mojom.ResourceTypeStat } */
    this.cssStyleSheets;
    /** @type { !content.mojom.ResourceTypeStat } */
    this.scripts;
    /** @type { !content.mojom.ResourceTypeStat } */
    this.xslStyleSheets;
    /** @type { !content.mojom.ResourceTypeStat } */
    this.fonts;
    /** @type { !content.mojom.ResourceTypeStat } */
    this.other;
  }
};
content.mojom.ResourceUsageData = class {
  constructor() {
    /** @type { !boolean } */
    this.reportsV8Stats;
    /** @type { !number } */
    this.v8BytesAllocated;
    /** @type { !number } */
    this.v8BytesUsed;
    /** @type { content.mojom.ResourceTypeStats } */
    this.webCacheStats;
  }
};
content.mojom.ResourceUsageReporter_GetUsageData_Params = class {
  constructor() {
  }
};
content.mojom.ResourceUsageReporter_GetUsageData_ResponseParams = class {
  constructor() {
    /** @type { !content.mojom.ResourceUsageData } */
    this.data;
  }
};
