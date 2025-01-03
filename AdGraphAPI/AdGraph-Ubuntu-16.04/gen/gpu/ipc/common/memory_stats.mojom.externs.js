// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let gpu = {};
/** @const */
gpu.mojom = {};
gpu.mojom.VideoMemoryProcessStats = class {
  constructor() {
    /** @type { !number } */
    this.videoMemoryBytes;
    /** @type { !boolean } */
    this.hasDuplicates;
  }
};
gpu.mojom.VideoMemoryUsageStats = class {
  constructor() {
    /** @type { !Map<number, gpu.mojom.VideoMemoryProcessStats> } */
    this.processMap;
    /** @type { !number } */
    this.bytesAllocated;
  }
};
