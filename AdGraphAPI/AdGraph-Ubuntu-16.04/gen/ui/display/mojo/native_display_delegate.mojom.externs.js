// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let display = {};
/** @const */
display.mojom = {};
/** @implements {mojo.InterfacePtr} */
display.mojom.NativeDisplayObserverPtr = class {

  /**
   */
   onConfigurationChanged() {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
display.mojom.NativeDisplayObserver;
/** @implements {mojo.InterfacePtr} */
display.mojom.NativeDisplayDelegatePtr = class {

  /**
   * @param { !display.mojom.NativeDisplayObserverPtr } observer
   * @return {Promise}
   */
   initialize(observer) {}
  /**
   * @return {Promise}
   */
   takeDisplayControl() {}
  /**
   * @return {Promise}
   */
   relinquishDisplayControl() {}
  /**
   * @return {Promise}
   */
   getDisplays() {}
  /**
   * @param { !number } displayId
   * @param { display.mojom.DisplayMode } mode
   * @param { !gfx.mojom.Point } origin
   * @return {Promise}
   */
   configure(displayId, mode, origin) {}
  /**
   * @param { !number } displayId
   * @return {Promise}
   */
   getHDCPState(displayId) {}
  /**
   * @param { !number } displayId
   * @param { !display.mojom.HDCPState } state
   * @return {Promise}
   */
   setHDCPState(displayId, state) {}
  /**
   * @param { !number } displayId
   * @param { !Array<display.mojom.GammaRampRGBEntry> } degammaLut
   * @param { !Array<display.mojom.GammaRampRGBEntry> } gammaLut
   * @param { !Array<number> } correctionMatrix
   */
   setColorCorrection(displayId, degammaLut, gammaLut, correctionMatrix) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
display.mojom.NativeDisplayDelegate;
display.mojom.NativeDisplayObserver_OnConfigurationChanged_Params = class {
  constructor() {
  }
};
display.mojom.NativeDisplayDelegate_Initialize_Params = class {
  constructor() {
    /** @type { !display.mojom.NativeDisplayObserverPtr } */
    this.observer;
  }
};
display.mojom.NativeDisplayDelegate_Initialize_ResponseParams = class {
  constructor() {
    /** @type { !Array<display.mojom.DisplaySnapshot> } */
    this.snapshots;
  }
};
display.mojom.NativeDisplayDelegate_TakeDisplayControl_Params = class {
  constructor() {
  }
};
display.mojom.NativeDisplayDelegate_TakeDisplayControl_ResponseParams = class {
  constructor() {
    /** @type { !boolean } */
    this.result;
  }
};
display.mojom.NativeDisplayDelegate_RelinquishDisplayControl_Params = class {
  constructor() {
  }
};
display.mojom.NativeDisplayDelegate_RelinquishDisplayControl_ResponseParams = class {
  constructor() {
    /** @type { !boolean } */
    this.result;
  }
};
display.mojom.NativeDisplayDelegate_GetDisplays_Params = class {
  constructor() {
  }
};
display.mojom.NativeDisplayDelegate_GetDisplays_ResponseParams = class {
  constructor() {
    /** @type { !Array<display.mojom.DisplaySnapshot> } */
    this.snapshots;
  }
};
display.mojom.NativeDisplayDelegate_Configure_Params = class {
  constructor() {
    /** @type { !number } */
    this.displayId;
    /** @type { display.mojom.DisplayMode } */
    this.mode;
    /** @type { !gfx.mojom.Point } */
    this.origin;
  }
};
display.mojom.NativeDisplayDelegate_Configure_ResponseParams = class {
  constructor() {
    /** @type { !boolean } */
    this.status;
  }
};
display.mojom.NativeDisplayDelegate_GetHDCPState_Params = class {
  constructor() {
    /** @type { !number } */
    this.displayId;
  }
};
display.mojom.NativeDisplayDelegate_GetHDCPState_ResponseParams = class {
  constructor() {
    /** @type { !boolean } */
    this.status;
    /** @type { !display.mojom.HDCPState } */
    this.state;
  }
};
display.mojom.NativeDisplayDelegate_SetHDCPState_Params = class {
  constructor() {
    /** @type { !number } */
    this.displayId;
    /** @type { !display.mojom.HDCPState } */
    this.state;
  }
};
display.mojom.NativeDisplayDelegate_SetHDCPState_ResponseParams = class {
  constructor() {
    /** @type { !boolean } */
    this.status;
  }
};
display.mojom.NativeDisplayDelegate_SetColorCorrection_Params = class {
  constructor() {
    /** @type { !number } */
    this.displayId;
    /** @type { !Array<display.mojom.GammaRampRGBEntry> } */
    this.degammaLut;
    /** @type { !Array<display.mojom.GammaRampRGBEntry> } */
    this.gammaLut;
    /** @type { !Array<number> } */
    this.correctionMatrix;
  }
};
