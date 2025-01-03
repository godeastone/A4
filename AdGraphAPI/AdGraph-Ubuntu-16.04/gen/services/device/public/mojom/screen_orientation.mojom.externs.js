// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let device = {};
/** @const */
device.mojom = {};
/** @implements {mojo.InterfacePtr} */
device.mojom.ScreenOrientationPtr = class {

  /**
   * @param { !device.mojom.ScreenOrientationLockType } orientation
   * @return {Promise}
   */
   lockOrientation(orientation) {}
  /**
   */
   unlockOrientation() {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
device.mojom.ScreenOrientation;
/** @implements {mojo.InterfacePtr} */
device.mojom.ScreenOrientationListenerPtr = class {

  /**
   */
   start() {}
  /**
   */
   stop() {}
  /**
   * @return {Promise}
   */
   isAutoRotateEnabledByUser() {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
device.mojom.ScreenOrientationListener;
device.mojom.ScreenOrientation_LockOrientation_Params = class {
  constructor() {
    /** @type { !device.mojom.ScreenOrientationLockType } */
    this.orientation;
  }
};
device.mojom.ScreenOrientation_LockOrientation_ResponseParams = class {
  constructor() {
    /** @type { !device.mojom.ScreenOrientationLockResult } */
    this.result;
  }
};
device.mojom.ScreenOrientation_UnlockOrientation_Params = class {
  constructor() {
  }
};
device.mojom.ScreenOrientationListener_Start_Params = class {
  constructor() {
  }
};
device.mojom.ScreenOrientationListener_Stop_Params = class {
  constructor() {
  }
};
device.mojom.ScreenOrientationListener_IsAutoRotateEnabledByUser_Params = class {
  constructor() {
  }
};
device.mojom.ScreenOrientationListener_IsAutoRotateEnabledByUser_ResponseParams = class {
  constructor() {
    /** @type { !boolean } */
    this.enabled;
  }
};
