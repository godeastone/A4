// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let viz = {};
/** @const */
viz.mojom = {};
viz.mojom.FrameDeadline = class {
  constructor() {
    /** @type { !mojoBase.mojom.TimeTicks } */
    this.frameStartTime;
    /** @type { !number } */
    this.deadlineInFrames;
    /** @type { !boolean } */
    this.useDefaultLowerBoundDeadline;
    /** @type { !mojoBase.mojom.TimeDelta } */
    this.frameInterval;
  }
};
