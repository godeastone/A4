// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let ui = {};
/** @const */
ui.mojom = {};
/** @implements {mojo.InterfacePtr} */
ui.mojom.ScreenProviderObserverPtr = class {

  /**
   * @param { !Array<ui.mojom.WsDisplay> } displays
   * @param { !number } primaryDisplayId
   * @param { !number } internalDisplayId
   */
   onDisplaysChanged(displays, primaryDisplayId, internalDisplayId) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
ui.mojom.ScreenProviderObserver;
/** @implements {mojo.InterfacePtr} */
ui.mojom.ScreenProviderPtr = class {

  /**
   * @param { !ui.mojom.ScreenProviderObserverPtr } observer
   */
   addObserver(observer) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
ui.mojom.ScreenProvider;
ui.mojom.ScreenProviderObserver_OnDisplaysChanged_Params = class {
  constructor() {
    /** @type { !Array<ui.mojom.WsDisplay> } */
    this.displays;
    /** @type { !number } */
    this.primaryDisplayId;
    /** @type { !number } */
    this.internalDisplayId;
  }
};
ui.mojom.ScreenProvider_AddObserver_Params = class {
  constructor() {
    /** @type { !ui.mojom.ScreenProviderObserverPtr } */
    this.observer;
  }
};
