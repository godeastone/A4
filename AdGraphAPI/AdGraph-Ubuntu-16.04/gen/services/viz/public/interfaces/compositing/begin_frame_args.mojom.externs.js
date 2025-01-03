// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let viz = {};
/** @const */
viz.mojom = {};
viz.mojom.BeginFrameArgs = class {
  constructor() {
    /** @type { !mojoBase.mojom.TimeTicks } */
    this.frameTime;
    /** @type { !mojoBase.mojom.TimeTicks } */
    this.deadline;
    /** @type { !mojoBase.mojom.TimeDelta } */
    this.interval;
    /** @type { !number } */
    this.sourceId;
    /** @type { !number } */
    this.sequenceNumber;
    /** @type { !viz.mojom.BeginFrameArgsType } */
    this.type;
    /** @type { !boolean } */
    this.onCriticalPath;
    /** @type { !boolean } */
    this.animateOnly;
  }
};
viz.mojom.BeginFrameAck = class {
  constructor() {
    /** @type { !number } */
    this.sourceId;
    /** @type { !number } */
    this.sequenceNumber;
    /** @type { !boolean } */
    this.hasDamage;
  }
};
