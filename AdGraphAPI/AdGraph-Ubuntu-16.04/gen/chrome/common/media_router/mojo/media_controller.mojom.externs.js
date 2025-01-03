// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let mediaRouter = {};
/** @const */
mediaRouter.mojom = {};
/** @implements {mojo.InterfacePtr} */
mediaRouter.mojom.MediaControllerPtr = class {

  /**
   */
   play() {}
  /**
   */
   pause() {}
  /**
   * @param { !boolean } mute
   */
   setMute(mute) {}
  /**
   * @param { !number } volume
   */
   setVolume(volume) {}
  /**
   * @param { !mojoBase.mojom.TimeDelta } time
   */
   seek(time) {}
  /**
   * @param { !mojo.InterfaceRequest } controllerRequest
   */
   connectHangoutsMediaRouteController(controllerRequest) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
mediaRouter.mojom.MediaController;
/** @implements {mojo.InterfacePtr} */
mediaRouter.mojom.HangoutsMediaRouteControllerPtr = class {

  /**
   * @param { !boolean } localPresent
   */
   setLocalPresent(localPresent) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
mediaRouter.mojom.HangoutsMediaRouteController;
mediaRouter.mojom.MediaController_Play_Params = class {
  constructor() {
  }
};
mediaRouter.mojom.MediaController_Pause_Params = class {
  constructor() {
  }
};
mediaRouter.mojom.MediaController_SetMute_Params = class {
  constructor() {
    /** @type { !boolean } */
    this.mute;
  }
};
mediaRouter.mojom.MediaController_SetVolume_Params = class {
  constructor() {
    /** @type { !number } */
    this.volume;
  }
};
mediaRouter.mojom.MediaController_Seek_Params = class {
  constructor() {
    /** @type { !mojoBase.mojom.TimeDelta } */
    this.time;
  }
};
mediaRouter.mojom.MediaController_ConnectHangoutsMediaRouteController_Params = class {
  constructor() {
    /** @type { !mojo.InterfaceRequest } */
    this.controllerRequest;
  }
};
mediaRouter.mojom.HangoutsMediaRouteController_SetLocalPresent_Params = class {
  constructor() {
    /** @type { !boolean } */
    this.localPresent;
  }
};
