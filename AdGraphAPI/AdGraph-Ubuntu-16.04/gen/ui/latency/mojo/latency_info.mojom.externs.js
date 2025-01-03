// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let ui = {};
/** @const */
ui.mojom = {};
ui.mojom.LatencyComponentId = class {
  constructor() {
    /** @type { !ui.mojom.LatencyComponentType } */
    this.type;
    /** @type { !number } */
    this.id;
  }
};
ui.mojom.LatencyComponent = class {
  constructor() {
    /** @type { !mojoBase.mojom.TimeTicks } */
    this.eventTime;
    /** @type { !number } */
    this.eventCount;
    /** @type { !mojoBase.mojom.TimeTicks } */
    this.firstEventTime;
    /** @type { !mojoBase.mojom.TimeTicks } */
    this.lastEventTime;
  }
};
ui.mojom.LatencyComponentPair = class {
  constructor() {
    /** @type { !ui.mojom.LatencyComponentId } */
    this.key;
    /** @type { !ui.mojom.LatencyComponent } */
    this.value;
  }
};
ui.mojom.LatencyInfo = class {
  constructor() {
    /** @type { !string } */
    this.traceName;
    /** @type { !Array<ui.mojom.LatencyComponentPair> } */
    this.latencyComponents;
    /** @type { !number } */
    this.traceId;
    /** @type { !Map<number, number> } */
    this.snapshots;
    /** @type { !number } */
    this.ukmSourceId;
    /** @type { !boolean } */
    this.coalesced;
    /** @type { !boolean } */
    this.began;
    /** @type { !boolean } */
    this.terminated;
    /** @type { !ui.mojom.SourceEventType } */
    this.sourceEventType;
  }
};
