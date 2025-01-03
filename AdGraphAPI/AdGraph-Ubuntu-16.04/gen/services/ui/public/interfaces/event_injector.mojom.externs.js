// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let ui = {};
/** @const */
ui.mojom = {};
/** @implements {mojo.InterfacePtr} */
ui.mojom.EventInjectorPtr = class {

  /**
   * @param { !number } displayId
   * @param { !ui.mojom.Event } event
   * @return {Promise}
   */
   injectEvent(displayId, event) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
ui.mojom.EventInjector;
ui.mojom.EventInjector_InjectEvent_Params = class {
  constructor() {
    /** @type { !number } */
    this.displayId;
    /** @type { !ui.mojom.Event } */
    this.event;
  }
};
ui.mojom.EventInjector_InjectEvent_ResponseParams = class {
  constructor() {
    /** @type { !boolean } */
    this.result;
  }
};
