// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let ui = {};
/** @const */
ui.mojom = {};
/** @implements {mojo.InterfacePtr} */
ui.mojom.AccessibilityManagerPtr = class {

  /**
   * @param { !boolean } enabled
   */
   setHighContrastMode(enabled) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
ui.mojom.AccessibilityManager;
ui.mojom.AccessibilityManager_SetHighContrastMode_Params = class {
  constructor() {
    /** @type { !boolean } */
    this.enabled;
  }
};
