// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let chrome = {};
/** @const */
chrome.mojom = {};
/** @implements {mojo.InterfacePtr} */
chrome.mojom.ChromeRenderFramePtr = class {

  /**
   * @param { !blink.mojom.WindowFeatures } windowFeatures
   */
   setWindowFeatures(windowFeatures) {}
  /**
   */
   requestReloadImageForContextNode() {}
  /**
   * @param { !number } thumbnailMinAreaPixels
   * @param { !gfx.mojom.Size } thumbnailMaxSizePixels
   * @param { !chrome.mojom.ImageFormat } imageFormat
   * @return {Promise}
   */
   requestThumbnailForContextNode(thumbnailMinAreaPixels, thumbnailMaxSizePixels, imageFormat) {}
  /**
   * @param { !mojoBase.mojom.String16 } javascript
   */
   executeWebUIJavaScript(javascript) {}
  /**
   * @param { !boolean } enablePhishingDetection
   */
   setClientSidePhishingDetection(enablePhishingDetection) {}
  /**
   * @return {Promise}
   */
   getWebApplicationInfo() {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
chrome.mojom.ChromeRenderFrame;
chrome.mojom.WebApplicationInfo = class {
  constructor() {
  }
};
chrome.mojom.ChromeRenderFrame_SetWindowFeatures_Params = class {
  constructor() {
    /** @type { !blink.mojom.WindowFeatures } */
    this.windowFeatures;
  }
};
chrome.mojom.ChromeRenderFrame_RequestReloadImageForContextNode_Params = class {
  constructor() {
  }
};
chrome.mojom.ChromeRenderFrame_RequestThumbnailForContextNode_Params = class {
  constructor() {
    /** @type { !number } */
    this.thumbnailMinAreaPixels;
    /** @type { !chrome.mojom.ImageFormat } */
    this.imageFormat;
    /** @type { !gfx.mojom.Size } */
    this.thumbnailMaxSizePixels;
  }
};
chrome.mojom.ChromeRenderFrame_RequestThumbnailForContextNode_ResponseParams = class {
  constructor() {
    /** @type { !Array<number> } */
    this.thumbnailData;
    /** @type { !gfx.mojom.Size } */
    this.originalSize;
  }
};
chrome.mojom.ChromeRenderFrame_ExecuteWebUIJavaScript_Params = class {
  constructor() {
    /** @type { !mojoBase.mojom.String16 } */
    this.javascript;
  }
};
chrome.mojom.ChromeRenderFrame_SetClientSidePhishingDetection_Params = class {
  constructor() {
    /** @type { !boolean } */
    this.enablePhishingDetection;
  }
};
chrome.mojom.ChromeRenderFrame_GetWebApplicationInfo_Params = class {
  constructor() {
  }
};
chrome.mojom.ChromeRenderFrame_GetWebApplicationInfo_ResponseParams = class {
  constructor() {
    /** @type { !chrome.mojom.WebApplicationInfo } */
    this.webApplicationInfo;
  }
};
