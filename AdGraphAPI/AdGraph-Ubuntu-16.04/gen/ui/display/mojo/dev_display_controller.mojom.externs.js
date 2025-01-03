// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let display = {};
/** @const */
display.mojom = {};
/** @implements {mojo.InterfacePtr} */
display.mojom.DevDisplayControllerPtr = class {

  /**
   */
   toggleAddRemoveDisplay() {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
display.mojom.DevDisplayController;
display.mojom.DevDisplayController_ToggleAddRemoveDisplay_Params = class {
  constructor() {
  }
};
