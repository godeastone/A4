// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let blink = {};
/** @const */
blink.mojom = {};
blink.mojom.FetchAPIRequest = class {
  constructor() {
    /** @type { !network.mojom.FetchRequestMode } */
    this.mode;
    /** @type { !boolean } */
    this.isMainResourceLoad;
    /** @type { !boolean } */
    this.keepalive;
    /** @type { !boolean } */
    this.isReload;
    /** @type { !blink.mojom.RequestContextType } */
    this.requestContextType;
    /** @type { !network.mojom.RequestContextFrameType } */
    this.frameType;
    /** @type { !url.mojom.Url } */
    this.url;
    /** @type { !string } */
    this.method;
    /** @type { !Map<string, string> } */
    this.headers;
    /** @type { blink.mojom.SerializedBlob } */
    this.blob;
    /** @type { !blink.mojom.Referrer } */
    this.referrer;
    /** @type { !network.mojom.FetchCredentialsMode } */
    this.credentialsMode;
    /** @type { !blink.mojom.FetchCacheMode } */
    this.cacheMode;
    /** @type { !network.mojom.FetchRedirectMode } */
    this.redirectMode;
    /** @type { string } */
    this.integrity;
    /** @type { string } */
    this.clientId;
  }
};
