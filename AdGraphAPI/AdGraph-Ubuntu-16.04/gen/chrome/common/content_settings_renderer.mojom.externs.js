// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let chrome = {};
/** @const */
chrome.mojom = {};
/** @implements {mojo.InterfacePtr} */
chrome.mojom.ContentSettingsRendererPtr = class {

  /**
   */
   setAllowRunningInsecureContent() {}
  /**
   */
   setAsInterstitial() {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
chrome.mojom.ContentSettingsRenderer;
chrome.mojom.ContentSettingsRenderer_SetAllowRunningInsecureContent_Params = class {
  constructor() {
  }
};
chrome.mojom.ContentSettingsRenderer_SetAsInterstitial_Params = class {
  constructor() {
  }
};
