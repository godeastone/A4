// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let resourceCoordinator = {};
/** @const */
resourceCoordinator.mojom = {};
/** @implements {mojo.InterfacePtr} */
resourceCoordinator.mojom.FrameCoordinationUnitPtr = class {

  /**
   * @return {Promise}
   */
   getID() {}
  /**
   * @param { !mojo.InterfaceRequest } request
   */
   addBinding(request) {}
  /**
   * @param { !resourceCoordinator.mojom.CoordinationUnitID } cuId
   */
   addChildFrame(cuId) {}
  /**
   * @param { !resourceCoordinator.mojom.CoordinationUnitID } cuId
   */
   removeChildFrame(cuId) {}
  /**
   * @param { !boolean } audible
   */
   setAudibility(audible) {}
  /**
   * @param { !boolean } idle
   */
   setNetworkAlmostIdle(idle) {}
  /**
   * @param { !resourceCoordinator.mojom.LifecycleState } state
   */
   setLifecycleState(state) {}
  /**
   */
   onAlertFired() {}
  /**
   */
   onNonPersistentNotificationCreated() {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
resourceCoordinator.mojom.FrameCoordinationUnit;
/** @implements {mojo.InterfacePtr} */
resourceCoordinator.mojom.PageCoordinationUnitPtr = class {

  /**
   * @return {Promise}
   */
   getID() {}
  /**
   * @param { !mojo.InterfaceRequest } request
   */
   addBinding(request) {}
  /**
   * @param { !resourceCoordinator.mojom.CoordinationUnitID } cuId
   */
   addFrame(cuId) {}
  /**
   * @param { !resourceCoordinator.mojom.CoordinationUnitID } cuId
   */
   removeFrame(cuId) {}
  /**
   * @param { !boolean } isLoading
   */
   setIsLoading(isLoading) {}
  /**
   * @param { !boolean } visible
   */
   setVisibility(visible) {}
  /**
   * @param { !number } ukmSourceId
   */
   setUKMSourceId(ukmSourceId) {}
  /**
   */
   onFaviconUpdated() {}
  /**
   */
   onTitleUpdated() {}
  /**
   */
   onMainFrameNavigationCommitted() {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
resourceCoordinator.mojom.PageCoordinationUnit;
/** @implements {mojo.InterfacePtr} */
resourceCoordinator.mojom.ProcessCoordinationUnitPtr = class {

  /**
   * @return {Promise}
   */
   getID() {}
  /**
   * @param { !mojo.InterfaceRequest } request
   */
   addBinding(request) {}
  /**
   * @param { !resourceCoordinator.mojom.CoordinationUnitID } cuId
   */
   addFrame(cuId) {}
  /**
   * @param { !resourceCoordinator.mojom.CoordinationUnitID } cuId
   */
   removeFrame(cuId) {}
  /**
   * @param { !number } cpuUsage
   */
   setCPUUsage(cpuUsage) {}
  /**
   * @param { !mojoBase.mojom.TimeDelta } duration
   */
   setExpectedTaskQueueingDuration(duration) {}
  /**
   * @param { !mojoBase.mojom.Time } launchTime
   */
   setLaunchTime(launchTime) {}
  /**
   * @param { !boolean } mainThreadTaskLoadIsLow
   */
   setMainThreadTaskLoadIsLow(mainThreadTaskLoadIsLow) {}
  /**
   * @param { !number } pid
   */
   setPID(pid) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
resourceCoordinator.mojom.ProcessCoordinationUnit;
/** @implements {mojo.InterfacePtr} */
resourceCoordinator.mojom.SystemCoordinationUnitPtr = class {

  /**
   * @return {Promise}
   */
   getID() {}
  /**
   * @param { !mojo.InterfaceRequest } request
   */
   addBinding(request) {}
  /**
   */
   onProcessCPUUsageReady() {}
  /**
   * @param { !resourceCoordinator.mojom.ProcessResourceMeasurementBatch } measurementBatch
   */
   distributeMeasurementBatch(measurementBatch) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
resourceCoordinator.mojom.SystemCoordinationUnit;
resourceCoordinator.mojom.CoordinationUnitID = class {
  constructor() {
    /** @type { !resourceCoordinator.mojom.CoordinationUnitType } */
    this.type;
    /** @type { !number } */
    this.id;
  }
};
resourceCoordinator.mojom.ProcessResourceMeasurement = class {
  constructor() {
    /** @type { !mojoBase.mojom.ProcessId } */
    this.pid;
    /** @type { !mojoBase.mojom.TimeDelta } */
    this.cpuUsage;
    /** @type { !number } */
    this.privateFootprintKb;
  }
};
resourceCoordinator.mojom.ProcessResourceMeasurementBatch = class {
  constructor() {
    /** @type { !mojoBase.mojom.TimeTicks } */
    this.batchStartedTime;
    /** @type { !mojoBase.mojom.TimeTicks } */
    this.batchEndedTime;
    /** @type { !Array<resourceCoordinator.mojom.ProcessResourceMeasurement> } */
    this.measurements;
  }
};
resourceCoordinator.mojom.FrameCoordinationUnit_GetID_Params = class {
  constructor() {
  }
};
resourceCoordinator.mojom.FrameCoordinationUnit_GetID_ResponseParams = class {
  constructor() {
    /** @type { !resourceCoordinator.mojom.CoordinationUnitID } */
    this.id;
  }
};
resourceCoordinator.mojom.FrameCoordinationUnit_AddBinding_Params = class {
  constructor() {
    /** @type { !mojo.InterfaceRequest } */
    this.request;
  }
};
resourceCoordinator.mojom.FrameCoordinationUnit_AddChildFrame_Params = class {
  constructor() {
    /** @type { !resourceCoordinator.mojom.CoordinationUnitID } */
    this.cuId;
  }
};
resourceCoordinator.mojom.FrameCoordinationUnit_RemoveChildFrame_Params = class {
  constructor() {
    /** @type { !resourceCoordinator.mojom.CoordinationUnitID } */
    this.cuId;
  }
};
resourceCoordinator.mojom.FrameCoordinationUnit_SetAudibility_Params = class {
  constructor() {
    /** @type { !boolean } */
    this.audible;
  }
};
resourceCoordinator.mojom.FrameCoordinationUnit_SetNetworkAlmostIdle_Params = class {
  constructor() {
    /** @type { !boolean } */
    this.idle;
  }
};
resourceCoordinator.mojom.FrameCoordinationUnit_SetLifecycleState_Params = class {
  constructor() {
    /** @type { !resourceCoordinator.mojom.LifecycleState } */
    this.state;
  }
};
resourceCoordinator.mojom.FrameCoordinationUnit_OnAlertFired_Params = class {
  constructor() {
  }
};
resourceCoordinator.mojom.FrameCoordinationUnit_OnNonPersistentNotificationCreated_Params = class {
  constructor() {
  }
};
resourceCoordinator.mojom.PageCoordinationUnit_GetID_Params = class {
  constructor() {
  }
};
resourceCoordinator.mojom.PageCoordinationUnit_GetID_ResponseParams = class {
  constructor() {
    /** @type { !resourceCoordinator.mojom.CoordinationUnitID } */
    this.id;
  }
};
resourceCoordinator.mojom.PageCoordinationUnit_AddBinding_Params = class {
  constructor() {
    /** @type { !mojo.InterfaceRequest } */
    this.request;
  }
};
resourceCoordinator.mojom.PageCoordinationUnit_AddFrame_Params = class {
  constructor() {
    /** @type { !resourceCoordinator.mojom.CoordinationUnitID } */
    this.cuId;
  }
};
resourceCoordinator.mojom.PageCoordinationUnit_RemoveFrame_Params = class {
  constructor() {
    /** @type { !resourceCoordinator.mojom.CoordinationUnitID } */
    this.cuId;
  }
};
resourceCoordinator.mojom.PageCoordinationUnit_SetIsLoading_Params = class {
  constructor() {
    /** @type { !boolean } */
    this.isLoading;
  }
};
resourceCoordinator.mojom.PageCoordinationUnit_SetVisibility_Params = class {
  constructor() {
    /** @type { !boolean } */
    this.visible;
  }
};
resourceCoordinator.mojom.PageCoordinationUnit_SetUKMSourceId_Params = class {
  constructor() {
    /** @type { !number } */
    this.ukmSourceId;
  }
};
resourceCoordinator.mojom.PageCoordinationUnit_OnFaviconUpdated_Params = class {
  constructor() {
  }
};
resourceCoordinator.mojom.PageCoordinationUnit_OnTitleUpdated_Params = class {
  constructor() {
  }
};
resourceCoordinator.mojom.PageCoordinationUnit_OnMainFrameNavigationCommitted_Params = class {
  constructor() {
  }
};
resourceCoordinator.mojom.ProcessCoordinationUnit_GetID_Params = class {
  constructor() {
  }
};
resourceCoordinator.mojom.ProcessCoordinationUnit_GetID_ResponseParams = class {
  constructor() {
    /** @type { !resourceCoordinator.mojom.CoordinationUnitID } */
    this.id;
  }
};
resourceCoordinator.mojom.ProcessCoordinationUnit_AddBinding_Params = class {
  constructor() {
    /** @type { !mojo.InterfaceRequest } */
    this.request;
  }
};
resourceCoordinator.mojom.ProcessCoordinationUnit_AddFrame_Params = class {
  constructor() {
    /** @type { !resourceCoordinator.mojom.CoordinationUnitID } */
    this.cuId;
  }
};
resourceCoordinator.mojom.ProcessCoordinationUnit_RemoveFrame_Params = class {
  constructor() {
    /** @type { !resourceCoordinator.mojom.CoordinationUnitID } */
    this.cuId;
  }
};
resourceCoordinator.mojom.ProcessCoordinationUnit_SetCPUUsage_Params = class {
  constructor() {
    /** @type { !number } */
    this.cpuUsage;
  }
};
resourceCoordinator.mojom.ProcessCoordinationUnit_SetExpectedTaskQueueingDuration_Params = class {
  constructor() {
    /** @type { !mojoBase.mojom.TimeDelta } */
    this.duration;
  }
};
resourceCoordinator.mojom.ProcessCoordinationUnit_SetLaunchTime_Params = class {
  constructor() {
    /** @type { !mojoBase.mojom.Time } */
    this.launchTime;
  }
};
resourceCoordinator.mojom.ProcessCoordinationUnit_SetMainThreadTaskLoadIsLow_Params = class {
  constructor() {
    /** @type { !boolean } */
    this.mainThreadTaskLoadIsLow;
  }
};
resourceCoordinator.mojom.ProcessCoordinationUnit_SetPID_Params = class {
  constructor() {
    /** @type { !number } */
    this.pid;
  }
};
resourceCoordinator.mojom.SystemCoordinationUnit_GetID_Params = class {
  constructor() {
  }
};
resourceCoordinator.mojom.SystemCoordinationUnit_GetID_ResponseParams = class {
  constructor() {
    /** @type { !resourceCoordinator.mojom.CoordinationUnitID } */
    this.id;
  }
};
resourceCoordinator.mojom.SystemCoordinationUnit_AddBinding_Params = class {
  constructor() {
    /** @type { !mojo.InterfaceRequest } */
    this.request;
  }
};
resourceCoordinator.mojom.SystemCoordinationUnit_OnProcessCPUUsageReady_Params = class {
  constructor() {
  }
};
resourceCoordinator.mojom.SystemCoordinationUnit_DistributeMeasurementBatch_Params = class {
  constructor() {
    /** @type { !resourceCoordinator.mojom.ProcessResourceMeasurementBatch } */
    this.measurementBatch;
  }
};
