// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let blink = {};
/** @const */
blink.mojom = {};
/** @implements {mojo.InterfacePtr} */
blink.mojom.MediaDownloadInProductHelpPtr = class {

  /**
   * @param { !gfx.mojom.Rect } buttonRect
   */
   showInProductHelpWidget(buttonRect) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
blink.mojom.MediaDownloadInProductHelp;
blink.mojom.MediaDownloadInProductHelp_ShowInProductHelpWidget_Params = class {
  constructor() {
    /** @type { !gfx.mojom.Rect } */
    this.buttonRect;
  }
};
