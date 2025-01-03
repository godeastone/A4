// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let device = {};
/** @const */
device.mojom = {};
/** @implements {mojo.InterfacePtr} */
device.mojom.GamepadObserverPtr = class {

  /**
   * @param { !number } index
   * @param { !device.mojom.Gamepad } gamepad
   */
   gamepadConnected(index, gamepad) {}
  /**
   * @param { !number } index
   * @param { !device.mojom.Gamepad } gamepad
   */
   gamepadDisconnected(index, gamepad) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
device.mojom.GamepadObserver;
/** @implements {mojo.InterfacePtr} */
device.mojom.GamepadMonitorPtr = class {

  /**
   * @return {Promise}
   */
   gamepadStartPolling() {}
  /**
   * @return {Promise}
   */
   gamepadStopPolling() {}
  /**
   * @param { !device.mojom.GamepadObserverPtr } gamepadObserver
   */
   setObserver(gamepadObserver) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
device.mojom.GamepadMonitor;
/** @implements {mojo.InterfacePtr} */
device.mojom.GamepadHapticsManagerPtr = class {

  /**
   * @param { !number } padIndex
   * @param { !device.mojom.GamepadHapticEffectType } type
   * @param { !device.mojom.GamepadEffectParameters } params
   * @return {Promise}
   */
   playVibrationEffectOnce(padIndex, type, params) {}
  /**
   * @param { !number } padIndex
   * @return {Promise}
   */
   resetVibrationActuator(padIndex) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
device.mojom.GamepadHapticsManager;
device.mojom.GamepadQuaternion = class {
  constructor() {
    /** @type { !number } */
    this.x;
    /** @type { !number } */
    this.y;
    /** @type { !number } */
    this.z;
    /** @type { !number } */
    this.w;
  }
};
device.mojom.GamepadVector = class {
  constructor() {
    /** @type { !number } */
    this.x;
    /** @type { !number } */
    this.y;
    /** @type { !number } */
    this.z;
  }
};
device.mojom.GamepadButton = class {
  constructor() {
    /** @type { !boolean } */
    this.pressed;
    /** @type { !boolean } */
    this.touched;
    /** @type { !number } */
    this.value;
  }
};
device.mojom.GamepadPose = class {
  constructor() {
    /** @type { device.mojom.GamepadQuaternion } */
    this.orientation;
    /** @type { device.mojom.GamepadVector } */
    this.position;
    /** @type { device.mojom.GamepadVector } */
    this.angularVelocity;
    /** @type { device.mojom.GamepadVector } */
    this.linearVelocity;
    /** @type { device.mojom.GamepadVector } */
    this.angularAcceleration;
    /** @type { device.mojom.GamepadVector } */
    this.linearAcceleration;
  }
};
device.mojom.GamepadHapticActuator = class {
  constructor() {
    /** @type { !device.mojom.GamepadHapticActuatorType } */
    this.type;
  }
};
device.mojom.Gamepad = class {
  constructor() {
    /** @type { !boolean } */
    this.connected;
    /** @type { !device.mojom.GamepadHand } */
    this.hand;
    /** @type { !Array<number> } */
    this.id;
    /** @type { !number } */
    this.timestamp;
    /** @type { !Array<number> } */
    this.axes;
    /** @type { !Array<device.mojom.GamepadButton> } */
    this.buttons;
    /** @type { device.mojom.GamepadHapticActuator } */
    this.vibrationActuator;
    /** @type { !Array<number> } */
    this.mapping;
    /** @type { device.mojom.GamepadPose } */
    this.pose;
    /** @type { !number } */
    this.displayId;
  }
};
device.mojom.GamepadEffectParameters = class {
  constructor() {
    /** @type { !number } */
    this.duration;
    /** @type { !number } */
    this.startDelay;
    /** @type { !number } */
    this.strongMagnitude;
    /** @type { !number } */
    this.weakMagnitude;
  }
};
device.mojom.GamepadObserver_GamepadConnected_Params = class {
  constructor() {
    /** @type { !number } */
    this.index;
    /** @type { !device.mojom.Gamepad } */
    this.gamepad;
  }
};
device.mojom.GamepadObserver_GamepadDisconnected_Params = class {
  constructor() {
    /** @type { !number } */
    this.index;
    /** @type { !device.mojom.Gamepad } */
    this.gamepad;
  }
};
device.mojom.GamepadMonitor_GamepadStartPolling_Params = class {
  constructor() {
  }
};
device.mojom.GamepadMonitor_GamepadStartPolling_ResponseParams = class {
  constructor() {
    /** @type { !mojo.MojoHandle } */
    this.memoryHandle;
  }
};
device.mojom.GamepadMonitor_GamepadStopPolling_Params = class {
  constructor() {
  }
};
device.mojom.GamepadMonitor_GamepadStopPolling_ResponseParams = class {
  constructor() {
  }
};
device.mojom.GamepadMonitor_SetObserver_Params = class {
  constructor() {
    /** @type { !device.mojom.GamepadObserverPtr } */
    this.gamepadObserver;
  }
};
device.mojom.GamepadHapticsManager_PlayVibrationEffectOnce_Params = class {
  constructor() {
    /** @type { !number } */
    this.padIndex;
    /** @type { !device.mojom.GamepadHapticEffectType } */
    this.type;
    /** @type { !device.mojom.GamepadEffectParameters } */
    this.params;
  }
};
device.mojom.GamepadHapticsManager_PlayVibrationEffectOnce_ResponseParams = class {
  constructor() {
    /** @type { !device.mojom.GamepadHapticsResult } */
    this.result;
  }
};
device.mojom.GamepadHapticsManager_ResetVibrationActuator_Params = class {
  constructor() {
    /** @type { !number } */
    this.padIndex;
  }
};
device.mojom.GamepadHapticsManager_ResetVibrationActuator_ResponseParams = class {
  constructor() {
    /** @type { !device.mojom.GamepadHapticsResult } */
    this.result;
  }
};
