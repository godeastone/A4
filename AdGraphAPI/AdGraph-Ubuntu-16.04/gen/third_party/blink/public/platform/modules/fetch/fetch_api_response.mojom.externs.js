// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let blink = {};
/** @const */
blink.mojom = {};
blink.mojom.FetchAPIResponse = class {
  constructor() {
    /** @type { !Array<url.mojom.Url> } */
    this.urlList;
    /** @type { !number } */
    this.statusCode;
    /** @type { !network.mojom.FetchResponseType } */
    this.responseType;
    /** @type { !string } */
    this.statusText;
    /** @type { !Map<string, string> } */
    this.headers;
    /** @type { blink.mojom.SerializedBlob } */
    this.blob;
    /** @type { !blink.mojom.ServiceWorkerResponseError } */
    this.error;
    /** @type { !boolean } */
    this.isInCacheStorage;
    /** @type { !mojoBase.mojom.Time } */
    this.responseTime;
    /** @type { string } */
    this.cacheStorageCacheName;
    /** @type { !Array<string> } */
    this.corsExposedHeaderNames;
    /** @type { blink.mojom.SerializedBlob } */
    this.sideDataBlob;
  }
};
