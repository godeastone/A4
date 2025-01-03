// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let chrome = {};
/** @const */
chrome.mojom = {};
/** @implements {mojo.InterfacePtr} */
chrome.mojom.NavigationCorrectorPtr = class {

  /**
   * @param { !url.mojom.Url } navigationCorrectionUrl
   * @param { !string } language
   * @param { !string } countryCode
   * @param { !string } apiKey
   * @param { !url.mojom.Url } searchUrl
   */
   setNavigationCorrectionInfo(navigationCorrectionUrl, language, countryCode, apiKey, searchUrl) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
chrome.mojom.NavigationCorrector;
chrome.mojom.NavigationCorrector_SetNavigationCorrectionInfo_Params = class {
  constructor() {
    /** @type { !url.mojom.Url } */
    this.navigationCorrectionUrl;
    /** @type { !string } */
    this.language;
    /** @type { !string } */
    this.countryCode;
    /** @type { !string } */
    this.apiKey;
    /** @type { !url.mojom.Url } */
    this.searchUrl;
  }
};
