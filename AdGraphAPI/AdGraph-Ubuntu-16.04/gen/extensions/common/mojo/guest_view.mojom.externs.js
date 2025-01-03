// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let extensions = {};
/** @const */
extensions.mojom = {};
/** @implements {mojo.InterfacePtr} */
extensions.mojom.GuestViewPtr = class {

  /**
   * @param { !number } renderFrameId
   * @param { !number } tabId
   * @param { !url.mojom.Url } originalUrl
   * @param { !number } elementInstanceId
   * @param { !gfx.mojom.Size } elementSize
   * @param { !content.mojom.TransferrableURLLoader } transferrableUrlLoader
   */
   createEmbeddedMimeHandlerViewGuest(renderFrameId, tabId, originalUrl, elementInstanceId, elementSize, transferrableUrlLoader) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
extensions.mojom.GuestView;
extensions.mojom.GuestView_CreateEmbeddedMimeHandlerViewGuest_Params = class {
  constructor() {
    /** @type { !number } */
    this.renderFrameId;
    /** @type { !number } */
    this.tabId;
    /** @type { !url.mojom.Url } */
    this.originalUrl;
    /** @type { !number } */
    this.elementInstanceId;
    /** @type { !gfx.mojom.Size } */
    this.elementSize;
    /** @type { !content.mojom.TransferrableURLLoader } */
    this.transferrableUrlLoader;
  }
};
