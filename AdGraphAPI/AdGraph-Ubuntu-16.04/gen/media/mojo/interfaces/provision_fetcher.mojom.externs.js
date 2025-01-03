// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let media = {};
/** @const */
media.mojom = {};
/** @implements {mojo.InterfacePtr} */
media.mojom.ProvisionFetcherPtr = class {

  /**
   * @param { !string } defaultUrl
   * @param { !string } requestData
   * @return {Promise}
   */
   retrieve(defaultUrl, requestData) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
media.mojom.ProvisionFetcher;
media.mojom.ProvisionFetcher_Retrieve_Params = class {
  constructor() {
    /** @type { !string } */
    this.defaultUrl;
    /** @type { !string } */
    this.requestData;
  }
};
media.mojom.ProvisionFetcher_Retrieve_ResponseParams = class {
  constructor() {
    /** @type { !boolean } */
    this.result;
    /** @type { !string } */
    this.response;
  }
};
