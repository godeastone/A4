// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let display = {};
/** @const */
display.mojom = {};
/** @implements {mojo.InterfacePtr} */
display.mojom.DisplayControllerPtr = class {

  /**
   */
   increaseInternalDisplayZoom() {}
  /**
   */
   decreaseInternalDisplayZoom() {}
  /**
   */
   resetInternalDisplayZoom() {}
  /**
   */
   rotateCurrentDisplayCW() {}
  /**
   */
   swapPrimaryDisplay() {}
  /**
   */
   toggleMirrorMode() {}
  /**
   * @return {Promise}
   */
   takeDisplayControl() {}
  /**
   * @return {Promise}
   */
   relinquishDisplayControl() {}
  /**
   * @param { !number } displayId
   * @param { !gfx.mojom.Size } size
   * @param { !gfx.mojom.Insets } insets
   */
   setDisplayWorkArea(displayId, size, insets) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
display.mojom.DisplayController;
display.mojom.DisplayController_IncreaseInternalDisplayZoom_Params = class {
  constructor() {
  }
};
display.mojom.DisplayController_DecreaseInternalDisplayZoom_Params = class {
  constructor() {
  }
};
display.mojom.DisplayController_ResetInternalDisplayZoom_Params = class {
  constructor() {
  }
};
display.mojom.DisplayController_RotateCurrentDisplayCW_Params = class {
  constructor() {
  }
};
display.mojom.DisplayController_SwapPrimaryDisplay_Params = class {
  constructor() {
  }
};
display.mojom.DisplayController_ToggleMirrorMode_Params = class {
  constructor() {
  }
};
display.mojom.DisplayController_TakeDisplayControl_Params = class {
  constructor() {
  }
};
display.mojom.DisplayController_TakeDisplayControl_ResponseParams = class {
  constructor() {
    /** @type { !boolean } */
    this.status;
  }
};
display.mojom.DisplayController_RelinquishDisplayControl_Params = class {
  constructor() {
  }
};
display.mojom.DisplayController_RelinquishDisplayControl_ResponseParams = class {
  constructor() {
    /** @type { !boolean } */
    this.status;
  }
};
display.mojom.DisplayController_SetDisplayWorkArea_Params = class {
  constructor() {
    /** @type { !number } */
    this.displayId;
    /** @type { !gfx.mojom.Size } */
    this.size;
    /** @type { !gfx.mojom.Insets } */
    this.insets;
  }
};
