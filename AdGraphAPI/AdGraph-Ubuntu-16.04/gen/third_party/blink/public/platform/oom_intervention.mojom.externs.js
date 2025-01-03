// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let blink = {};
/** @const */
blink.mojom = {};
/** @implements {mojo.InterfacePtr} */
blink.mojom.OomInterventionHostPtr = class {

  /**
   * @param { !boolean } interventionTriggered
   */
   onHighMemoryUsage(interventionTriggered) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
blink.mojom.OomInterventionHost;
/** @implements {mojo.InterfacePtr} */
blink.mojom.OomInterventionPtr = class {

  /**
   * @param { !blink.mojom.OomInterventionHostPtr } host
   * @param { !mojoBase.mojom.UnsafeSharedMemoryRegion } sharedMetricsBuffer
   * @param { !number } memoryWorkloadThreshold
   * @param { !boolean } triggerIntervention
   */
   startDetection(host, sharedMetricsBuffer, memoryWorkloadThreshold, triggerIntervention) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
blink.mojom.OomIntervention;
blink.mojom.OomInterventionHost_OnHighMemoryUsage_Params = class {
  constructor() {
    /** @type { !boolean } */
    this.interventionTriggered;
  }
};
blink.mojom.OomIntervention_StartDetection_Params = class {
  constructor() {
    /** @type { !blink.mojom.OomInterventionHostPtr } */
    this.host;
    /** @type { !mojoBase.mojom.UnsafeSharedMemoryRegion } */
    this.sharedMetricsBuffer;
    /** @type { !number } */
    this.memoryWorkloadThreshold;
    /** @type { !boolean } */
    this.triggerIntervention;
  }
};
