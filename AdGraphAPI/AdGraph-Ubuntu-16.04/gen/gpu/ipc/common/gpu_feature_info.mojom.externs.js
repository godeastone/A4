// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let gpu = {};
/** @const */
gpu.mojom = {};
gpu.mojom.GpuFeatureInfo = class {
  constructor() {
    /** @type { !Array<gpu.mojom.GpuFeatureStatus> } */
    this.statusValues;
    /** @type { !Array<number> } */
    this.enabledGpuDriverBugWorkarounds;
    /** @type { !string } */
    this.disabledExtensions;
    /** @type { !string } */
    this.disabledWebglExtensions;
    /** @type { !Array<number> } */
    this.appliedGpuBlacklistEntries;
    /** @type { !Array<number> } */
    this.appliedGpuDriverBugListEntries;
  }
};
