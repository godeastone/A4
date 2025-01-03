// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let metrics = {};
/** @const */
metrics.mojom = {};
/** @implements {mojo.InterfacePtr} */
metrics.mojom.CallStackProfileCollectorPtr = class {

  /**
   * @param { !metrics.mojom.CallStackProfileParams } params
   * @param { !mojoBase.mojom.TimeTicks } startTimestamp
   * @param { !Array<metrics.mojom.CallStackProfile> } profiles
   */
   collect(params, startTimestamp, profiles) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
metrics.mojom.CallStackProfileCollector;
metrics.mojom.CallStackModule = class {
  constructor() {
    /** @type { !number } */
    this.baseAddress;
    /** @type { !string } */
    this.id;
    /** @type { !mojoBase.mojom.FilePath } */
    this.filename;
  }
};
metrics.mojom.CallStackFrame = class {
  constructor() {
    /** @type { !number } */
    this.instructionPointer;
    /** @type { !number } */
    this.moduleIndex;
  }
};
metrics.mojom.CallStackSample = class {
  constructor() {
    /** @type { !Array<metrics.mojom.CallStackFrame> } */
    this.frames;
    /** @type { !number } */
    this.processMilestones;
  }
};
metrics.mojom.CallStackProfile = class {
  constructor() {
    /** @type { !Array<metrics.mojom.CallStackModule> } */
    this.modules;
    /** @type { !Array<metrics.mojom.CallStackSample> } */
    this.samples;
    /** @type { !mojoBase.mojom.TimeDelta } */
    this.profileDuration;
    /** @type { !mojoBase.mojom.TimeDelta } */
    this.samplingPeriod;
  }
};
metrics.mojom.CallStackProfileParams = class {
  constructor() {
    /** @type { !metrics.mojom.Process } */
    this.process;
    /** @type { !metrics.mojom.Thread } */
    this.thread;
    /** @type { !metrics.mojom.Trigger } */
    this.trigger;
    /** @type { !metrics.mojom.SampleOrderingSpec } */
    this.orderingSpec;
  }
};
metrics.mojom.CallStackProfileCollector_Collect_Params = class {
  constructor() {
    /** @type { !metrics.mojom.CallStackProfileParams } */
    this.params;
    /** @type { !mojoBase.mojom.TimeTicks } */
    this.startTimestamp;
    /** @type { !Array<metrics.mojom.CallStackProfile> } */
    this.profiles;
  }
};
