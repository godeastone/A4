// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let content = {};
/** @const */
content.mojom = {};
/** @implements {mojo.InterfacePtr} */
content.mojom.WidgetPtr = class {

  /**
   * @param { !mojo.InterfaceRequest } request
   * @param { !content.mojom.WidgetInputHandlerHostPtr } host
   */
   setupWidgetInputHandler(request, host) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
content.mojom.Widget;
content.mojom.Widget_SetupWidgetInputHandler_Params = class {
  constructor() {
    /** @type { !mojo.InterfaceRequest } */
    this.request;
    /** @type { !content.mojom.WidgetInputHandlerHostPtr } */
    this.host;
  }
};
