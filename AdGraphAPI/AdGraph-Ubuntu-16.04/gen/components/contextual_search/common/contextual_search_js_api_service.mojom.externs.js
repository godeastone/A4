// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let contextualSearch = {};
/** @const */
contextualSearch.mojom = {};
/** @implements {mojo.InterfacePtr} */
contextualSearch.mojom.ContextualSearchJsApiServicePtr = class {

  /**
   * @param { !url.mojom.Url } url
   * @return {Promise}
   */
   shouldEnableJsApi(url) {}
  /**
   * @param { !string } message
   * @param { !boolean } doesAnswer
   */
   handleSetCaption(message, doesAnswer) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
contextualSearch.mojom.ContextualSearchJsApiService;
contextualSearch.mojom.ContextualSearchJsApiService_ShouldEnableJsApi_Params = class {
  constructor() {
    /** @type { !url.mojom.Url } */
    this.url;
  }
};
contextualSearch.mojom.ContextualSearchJsApiService_ShouldEnableJsApi_ResponseParams = class {
  constructor() {
    /** @type { !boolean } */
    this.shouldEnable;
  }
};
contextualSearch.mojom.ContextualSearchJsApiService_HandleSetCaption_Params = class {
  constructor() {
    /** @type { !string } */
    this.message;
    /** @type { !boolean } */
    this.doesAnswer;
  }
};
