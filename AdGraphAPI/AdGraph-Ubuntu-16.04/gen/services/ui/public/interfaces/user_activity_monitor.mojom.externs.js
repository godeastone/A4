// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let ui = {};
/** @const */
ui.mojom = {};
/** @implements {mojo.InterfacePtr} */
ui.mojom.UserActivityObserverPtr = class {

  /**
   */
   onUserActivity() {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
ui.mojom.UserActivityObserver;
/** @implements {mojo.InterfacePtr} */
ui.mojom.UserIdleObserverPtr = class {

  /**
   * @param { !ui.mojom.IdleState } newState
   */
   onUserIdleStateChanged(newState) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
ui.mojom.UserIdleObserver;
/** @implements {mojo.InterfacePtr} */
ui.mojom.UserActivityMonitorPtr = class {

  /**
   * @param { !number } delayBetweenNotifySecs
   * @param { !ui.mojom.UserActivityObserverPtr } observer
   */
   addUserActivityObserver(delayBetweenNotifySecs, observer) {}
  /**
   * @param { !number } idleTimeInMinutes
   * @param { !ui.mojom.UserIdleObserverPtr } observer
   */
   addUserIdleObserver(idleTimeInMinutes, observer) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
ui.mojom.UserActivityMonitor;
ui.mojom.UserActivityObserver_OnUserActivity_Params = class {
  constructor() {
  }
};
ui.mojom.UserIdleObserver_OnUserIdleStateChanged_Params = class {
  constructor() {
    /** @type { !ui.mojom.IdleState } */
    this.newState;
  }
};
ui.mojom.UserActivityMonitor_AddUserActivityObserver_Params = class {
  constructor() {
    /** @type { !number } */
    this.delayBetweenNotifySecs;
    /** @type { !ui.mojom.UserActivityObserverPtr } */
    this.observer;
  }
};
ui.mojom.UserActivityMonitor_AddUserIdleObserver_Params = class {
  constructor() {
    /** @type { !number } */
    this.idleTimeInMinutes;
    /** @type { !ui.mojom.UserIdleObserverPtr } */
    this.observer;
  }
};
