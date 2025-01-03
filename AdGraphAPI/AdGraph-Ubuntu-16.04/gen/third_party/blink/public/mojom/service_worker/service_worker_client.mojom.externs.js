// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let blink = {};
/** @const */
blink.mojom = {};
blink.mojom.ServiceWorkerClientQueryOptions = class {
  constructor() {
    /** @type { !boolean } */
    this.includeUncontrolled;
    /** @type { !blink.mojom.ServiceWorkerClientType } */
    this.clientType;
  }
};
blink.mojom.ServiceWorkerClientInfo = class {
  constructor() {
    /** @type { !url.mojom.Url } */
    this.url;
    /** @type { !string } */
    this.clientUuid;
    /** @type { !blink.mojom.ServiceWorkerClientType } */
    this.clientType;
    /** @type { !blink.mojom.PageVisibilityState } */
    this.pageVisibilityState;
    /** @type { !boolean } */
    this.isFocused;
    /** @type { !network.mojom.RequestContextFrameType } */
    this.frameType;
    /** @type { !mojoBase.mojom.TimeTicks } */
    this.lastFocusTime;
    /** @type { !mojoBase.mojom.TimeTicks } */
    this.creationTime;
  }
};
