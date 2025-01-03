// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let content = {};
/** @const */
content.mojom = {};
/** @implements {mojo.InterfacePtr} */
content.mojom.FullscreenVideoElementHandlerPtr = class {

  /**
   */
   requestFullscreenVideoElement() {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
content.mojom.FullscreenVideoElementHandler;
content.mojom.FullscreenVideoElementHandler_RequestFullscreenVideoElement_Params = class {
  constructor() {
  }
};
