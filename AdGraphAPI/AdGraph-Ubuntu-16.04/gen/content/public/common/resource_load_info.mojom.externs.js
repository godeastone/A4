// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let content = {};
/** @const */
content.mojom = {};
content.mojom.CommonNetworkInfo = class {
  constructor() {
    /** @type { !boolean } */
    this.networkAccessed;
    /** @type { !boolean } */
    this.alwaysAccessNetwork;
    /** @type { network.mojom.HostPortPair } */
    this.ipPortPair;
  }
};
content.mojom.RedirectInfo = class {
  constructor() {
    /** @type { !url.mojom.Url } */
    this.url;
    /** @type { !content.mojom.CommonNetworkInfo } */
    this.networkInfo;
  }
};
content.mojom.ResourceLoadInfo = class {
  constructor() {
    /** @type { !number } */
    this.requestId;
    /** @type { !url.mojom.Url } */
    this.url;
    /** @type { !url.mojom.Url } */
    this.referrer;
    /** @type { !url.mojom.Url } */
    this.originalUrl;
    /** @type { !string } */
    this.method;
    /** @type { !content.mojom.ResourceType } */
    this.resourceType;
    /** @type { !boolean } */
    this.wasCached;
    /** @type { !string } */
    this.mimeType;
    /** @type { !content.mojom.CommonNetworkInfo } */
    this.networkInfo;
    /** @type { !number } */
    this.netError;
    /** @type { !content.mojom.LoadTimingInfo } */
    this.loadTimingInfo;
    /** @type { !number } */
    this.rawBodyBytes;
    /** @type { !number } */
    this.totalReceivedBytes;
    /** @type { !Array<content.mojom.RedirectInfo> } */
    this.redirectInfoChain;
  }
};
