// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let resourceCoordinator = {};
/** @const */
resourceCoordinator.mojom = {};
/** @implements {mojo.InterfacePtr} */
resourceCoordinator.mojom.PageSignalReceiverPtr = class {

  /**
   * @param { !resourceCoordinator.mojom.CoordinationUnitID } cuId
   */
   notifyPageAlmostIdle(cuId) {}
  /**
   * @param { !resourceCoordinator.mojom.CoordinationUnitID } cuId
   * @param { !mojoBase.mojom.TimeDelta } duration
   */
   setExpectedTaskQueueingDuration(cuId, duration) {}
  /**
   * @param { !resourceCoordinator.mojom.CoordinationUnitID } cuId
   * @param { !resourceCoordinator.mojom.LifecycleState } state
   */
   setLifecycleState(cuId, state) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
resourceCoordinator.mojom.PageSignalReceiver;
/** @implements {mojo.InterfacePtr} */
resourceCoordinator.mojom.PageSignalGeneratorPtr = class {

  /**
   * @param { !resourceCoordinator.mojom.PageSignalReceiverPtr } receiver
   */
   addReceiver(receiver) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
resourceCoordinator.mojom.PageSignalGenerator;
resourceCoordinator.mojom.PageSignalReceiver_NotifyPageAlmostIdle_Params = class {
  constructor() {
    /** @type { !resourceCoordinator.mojom.CoordinationUnitID } */
    this.cuId;
  }
};
resourceCoordinator.mojom.PageSignalReceiver_SetExpectedTaskQueueingDuration_Params = class {
  constructor() {
    /** @type { !resourceCoordinator.mojom.CoordinationUnitID } */
    this.cuId;
    /** @type { !mojoBase.mojom.TimeDelta } */
    this.duration;
  }
};
resourceCoordinator.mojom.PageSignalReceiver_SetLifecycleState_Params = class {
  constructor() {
    /** @type { !resourceCoordinator.mojom.CoordinationUnitID } */
    this.cuId;
    /** @type { !resourceCoordinator.mojom.LifecycleState } */
    this.state;
  }
};
resourceCoordinator.mojom.PageSignalGenerator_AddReceiver_Params = class {
  constructor() {
    /** @type { !resourceCoordinator.mojom.PageSignalReceiverPtr } */
    this.receiver;
  }
};
