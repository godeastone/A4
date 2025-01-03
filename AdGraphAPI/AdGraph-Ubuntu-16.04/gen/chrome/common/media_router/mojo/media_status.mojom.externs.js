// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let mediaRouter = {};
/** @const */
mediaRouter.mojom = {};
/** @implements {mojo.InterfacePtr} */
mediaRouter.mojom.MediaStatusObserverPtr = class {

  /**
   * @param { !mediaRouter.mojom.MediaStatus } status
   */
   onMediaStatusUpdated(status) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
mediaRouter.mojom.MediaStatusObserver;
mediaRouter.mojom.MediaStatus = class {
  constructor() {
    /** @type { !string } */
    this.title;
    /** @type { !boolean } */
    this.canPlayPause;
    /** @type { !boolean } */
    this.canMute;
    /** @type { !boolean } */
    this.canSetVolume;
    /** @type { !boolean } */
    this.canSeek;
    /** @type { !boolean } */
    this.isMuted;
    /** @type { !mediaRouter.mojom.PlayState } */
    this.playState;
    /** @type { !number } */
    this.volume;
    /** @type { !mojoBase.mojom.TimeDelta } */
    this.duration;
    /** @type { !mojoBase.mojom.TimeDelta } */
    this.currentTime;
    /** @type { mediaRouter.mojom.HangoutsMediaStatusExtraData } */
    this.hangoutsExtraData;
  }
};
mediaRouter.mojom.HangoutsMediaStatusExtraData = class {
  constructor() {
    /** @type { !boolean } */
    this.localPresent;
  }
};
mediaRouter.mojom.MediaStatusObserver_OnMediaStatusUpdated_Params = class {
  constructor() {
    /** @type { !mediaRouter.mojom.MediaStatus } */
    this.status;
  }
};
