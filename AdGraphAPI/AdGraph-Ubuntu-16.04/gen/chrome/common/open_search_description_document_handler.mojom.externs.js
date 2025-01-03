// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let chrome = {};
/** @const */
chrome.mojom = {};
/** @implements {mojo.InterfacePtr} */
chrome.mojom.OpenSearchDescriptionDocumentHandlerPtr = class {

  /**
   * @param { !url.mojom.Url } pageUrl
   * @param { !url.mojom.Url } osddUrl
   */
   pageHasOpenSearchDescriptionDocument(pageUrl, osddUrl) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
chrome.mojom.OpenSearchDescriptionDocumentHandler;
chrome.mojom.OpenSearchDescriptionDocumentHandler_PageHasOpenSearchDescriptionDocument_Params = class {
  constructor() {
    /** @type { !url.mojom.Url } */
    this.pageUrl;
    /** @type { !url.mojom.Url } */
    this.osddUrl;
  }
};
