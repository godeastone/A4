// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let chrome = {};
/** @const */
chrome.mojom = {};
/** @implements {mojo.InterfacePtr} */
chrome.mojom.CacheStatsRecorderPtr = class {

  /**
   * @param { !number } capacity
   * @param { !number } size
   */
   recordCacheStats(capacity, size) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
chrome.mojom.CacheStatsRecorder;
chrome.mojom.CacheStatsRecorder_RecordCacheStats_Params = class {
  constructor() {
    /** @type { !number } */
    this.capacity;
    /** @type { !number } */
    this.size;
  }
};
