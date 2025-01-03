// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let content = {};
/** @const */
content.mojom = {};
content.mojom.LoadTimingInfoConnectTiming = class {
  constructor() {
    /** @type { !mojoBase.mojom.TimeTicks } */
    this.dnsStart;
    /** @type { !mojoBase.mojom.TimeTicks } */
    this.dnsEnd;
    /** @type { !mojoBase.mojom.TimeTicks } */
    this.connectStart;
    /** @type { !mojoBase.mojom.TimeTicks } */
    this.connectEnd;
    /** @type { !mojoBase.mojom.TimeTicks } */
    this.sslStart;
    /** @type { !mojoBase.mojom.TimeTicks } */
    this.sslEnd;
  }
};
content.mojom.LoadTimingInfo = class {
  constructor() {
    /** @type { !boolean } */
    this.socketReused;
    /** @type { !number } */
    this.socketLogId;
    /** @type { !mojoBase.mojom.Time } */
    this.requestStartTime;
    /** @type { !mojoBase.mojom.TimeTicks } */
    this.requestStart;
    /** @type { !mojoBase.mojom.TimeTicks } */
    this.proxyResolveStart;
    /** @type { !mojoBase.mojom.TimeTicks } */
    this.proxyResolveEnd;
    /** @type { !content.mojom.LoadTimingInfoConnectTiming } */
    this.connectTiming;
    /** @type { !mojoBase.mojom.TimeTicks } */
    this.sendStart;
    /** @type { !mojoBase.mojom.TimeTicks } */
    this.sendEnd;
    /** @type { !mojoBase.mojom.TimeTicks } */
    this.receiveHeadersEnd;
    /** @type { !mojoBase.mojom.TimeTicks } */
    this.pushStart;
    /** @type { !mojoBase.mojom.TimeTicks } */
    this.pushEnd;
  }
};
