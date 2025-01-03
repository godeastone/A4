// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let resourceCoordinator = {};
/** @const */
resourceCoordinator.mojom = {};
/** @implements {mojo.InterfacePtr} */
resourceCoordinator.mojom.CoordinationUnitIntrospectorPtr = class {

  /**
   * @return {Promise}
   */
   getProcessToURLMap() {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
resourceCoordinator.mojom.CoordinationUnitIntrospector;
resourceCoordinator.mojom.PageInfo = class {
  constructor() {
    /** @type { !number } */
    this.ukmSourceId;
    /** @type { !boolean } */
    this.isVisible;
    /** @type { !mojoBase.mojom.TimeDelta } */
    this.timeSinceLastNavigation;
    /** @type { !mojoBase.mojom.TimeDelta } */
    this.timeSinceLastVisibilityChange;
  }
};
resourceCoordinator.mojom.ProcessInfo = class {
  constructor() {
    /** @type { !mojoBase.mojom.ProcessId } */
    this.pid;
    /** @type { !Array<resourceCoordinator.mojom.PageInfo> } */
    this.pageInfos;
    /** @type { mojoBase.mojom.Time } */
    this.launchTime;
  }
};
resourceCoordinator.mojom.CoordinationUnitIntrospector_GetProcessToURLMap_Params = class {
  constructor() {
  }
};
resourceCoordinator.mojom.CoordinationUnitIntrospector_GetProcessToURLMap_ResponseParams = class {
  constructor() {
    /** @type { !Array<resourceCoordinator.mojom.ProcessInfo> } */
    this.processInfos;
  }
};
