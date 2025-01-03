// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let content = {};
/** @const */
content.mojom = {};
content.mojom.FetchEventPreloadHandle = class {
  constructor() {
    /** @type { !network.mojom.URLLoaderPtr } */
    this.urlLoader;
    /** @type { !mojo.InterfaceRequest } */
    this.urlLoaderClientRequest;
  }
};
content.mojom.DispatchFetchEventParams = class {
  constructor() {
    /** @type { !network.mojom.URLRequest } */
    this.request;
    /** @type { !Array<blink.mojom.BlobPtr> } */
    this.requestBodyBlobPtrs;
    /** @type { !string } */
    this.requestBodyBlobUuid;
    /** @type { !number } */
    this.requestBodyBlobSize;
    /** @type { blink.mojom.BlobPtr } */
    this.requestBodyBlob;
    /** @type { !string } */
    this.clientId;
    /** @type { content.mojom.FetchEventPreloadHandle } */
    this.preloadHandle;
  }
};
