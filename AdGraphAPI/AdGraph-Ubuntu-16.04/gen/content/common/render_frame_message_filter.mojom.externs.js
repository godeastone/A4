// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let content = {};
/** @const */
content.mojom = {};
/** @implements {mojo.InterfacePtr} */
content.mojom.RenderFrameMessageFilterPtr = class {

  /**
   * @param { !number } renderFrameId
   * @param { !url.mojom.Url } url
   * @param { !url.mojom.Url } firstPartyForCookies
   * @param { !string } cookie
   * @return {Promise}
   */
   setCookie(renderFrameId, url, firstPartyForCookies, cookie) {}
  /**
   * @param { !number } renderFrameId
   * @param { !url.mojom.Url } url
   * @param { !url.mojom.Url } firstPartyForCookies
   * @return {Promise}
   */
   getCookies(renderFrameId, url, firstPartyForCookies) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
content.mojom.RenderFrameMessageFilter;
content.mojom.RenderFrameMessageFilter_SetCookie_Params = class {
  constructor() {
    /** @type { !number } */
    this.renderFrameId;
    /** @type { !url.mojom.Url } */
    this.url;
    /** @type { !url.mojom.Url } */
    this.firstPartyForCookies;
    /** @type { !string } */
    this.cookie;
  }
};
content.mojom.RenderFrameMessageFilter_SetCookie_ResponseParams = class {
  constructor() {
  }
};
content.mojom.RenderFrameMessageFilter_GetCookies_Params = class {
  constructor() {
    /** @type { !number } */
    this.renderFrameId;
    /** @type { !url.mojom.Url } */
    this.url;
    /** @type { !url.mojom.Url } */
    this.firstPartyForCookies;
  }
};
content.mojom.RenderFrameMessageFilter_GetCookies_ResponseParams = class {
  constructor() {
    /** @type { !string } */
    this.cookies;
  }
};
