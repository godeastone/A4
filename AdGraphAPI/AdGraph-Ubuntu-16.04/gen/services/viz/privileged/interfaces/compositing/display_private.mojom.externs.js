// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let viz = {};
/** @const */
viz.mojom = {};
/** @implements {mojo.InterfacePtr} */
viz.mojom.DisplayPrivatePtr = class {

  /**
   * @param { !boolean } visible
   */
   setDisplayVisible(visible) {}
  /**
   * @param { !gfx.mojom.Transform } colorMatrix
   */
   setDisplayColorMatrix(colorMatrix) {}
  /**
   * @param { !gfx.mojom.ColorSpace } blendingColorSpace
   * @param { !gfx.mojom.ColorSpace } deviceColorSpace
   */
   setDisplayColorSpace(blendingColorSpace, deviceColorSpace) {}
  /**
   * @param { !boolean } secure
   */
   setOutputIsSecure(secure) {}
  /**
   * @param { !mojoBase.mojom.TimeDelta } interval
   */
   setAuthoritativeVSyncInterval(interval) {}
  /**
   * @param { !mojoBase.mojom.TimeTicks } timebase
   * @param { !mojoBase.mojom.TimeDelta } interval
   */
   setDisplayVSyncParameters(timebase, interval) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
viz.mojom.DisplayPrivate;
/** @implements {mojo.InterfacePtr} */
viz.mojom.DisplayClientPtr = class {

  /**
   * @param { !gfx.mojom.CALayerParams } caLayerParams
   */
   onDisplayReceivedCALayerParams(caLayerParams) {}
  /**
   * @param { !Array<ui.mojom.LatencyInfo> } latencyInfo
   */
   didSwapAfterSnapshotRequestReceived(latencyInfo) {}
  /**
   * @param { !mojo.InterfaceRequest } layeredWindowUpdater
   */
   createLayeredWindowUpdater(layeredWindowUpdater) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
viz.mojom.DisplayClient;
viz.mojom.DisplayPrivate_SetDisplayVisible_Params = class {
  constructor() {
    /** @type { !boolean } */
    this.visible;
  }
};
viz.mojom.DisplayPrivate_SetDisplayColorMatrix_Params = class {
  constructor() {
    /** @type { !gfx.mojom.Transform } */
    this.colorMatrix;
  }
};
viz.mojom.DisplayPrivate_SetDisplayColorSpace_Params = class {
  constructor() {
    /** @type { !gfx.mojom.ColorSpace } */
    this.blendingColorSpace;
    /** @type { !gfx.mojom.ColorSpace } */
    this.deviceColorSpace;
  }
};
viz.mojom.DisplayPrivate_SetOutputIsSecure_Params = class {
  constructor() {
    /** @type { !boolean } */
    this.secure;
  }
};
viz.mojom.DisplayPrivate_SetAuthoritativeVSyncInterval_Params = class {
  constructor() {
    /** @type { !mojoBase.mojom.TimeDelta } */
    this.interval;
  }
};
viz.mojom.DisplayPrivate_SetDisplayVSyncParameters_Params = class {
  constructor() {
    /** @type { !mojoBase.mojom.TimeTicks } */
    this.timebase;
    /** @type { !mojoBase.mojom.TimeDelta } */
    this.interval;
  }
};
viz.mojom.DisplayClient_OnDisplayReceivedCALayerParams_Params = class {
  constructor() {
    /** @type { !gfx.mojom.CALayerParams } */
    this.caLayerParams;
  }
};
viz.mojom.DisplayClient_DidSwapAfterSnapshotRequestReceived_Params = class {
  constructor() {
    /** @type { !Array<ui.mojom.LatencyInfo> } */
    this.latencyInfo;
  }
};
viz.mojom.DisplayClient_CreateLayeredWindowUpdater_Params = class {
  constructor() {
    /** @type { !mojo.InterfaceRequest } */
    this.layeredWindowUpdater;
  }
};
