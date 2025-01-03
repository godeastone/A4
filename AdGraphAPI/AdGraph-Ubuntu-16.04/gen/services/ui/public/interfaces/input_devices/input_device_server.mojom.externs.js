// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let ui = {};
/** @const */
ui.mojom = {};
/** @implements {mojo.InterfacePtr} */
ui.mojom.InputDeviceObserverMojoPtr = class {

  /**
   * @param { !Array<ui.mojom.InputDevice> } devices
   */
   onKeyboardDeviceConfigurationChanged(devices) {}
  /**
   * @param { !Array<ui.mojom.TouchscreenDevice> } devices
   * @param { !boolean } touchscreenTargetDisplayIdsChanged
   */
   onTouchscreenDeviceConfigurationChanged(devices, touchscreenTargetDisplayIdsChanged) {}
  /**
   * @param { !Array<ui.mojom.InputDevice> } devices
   */
   onMouseDeviceConfigurationChanged(devices) {}
  /**
   * @param { !Array<ui.mojom.InputDevice> } devices
   */
   onTouchpadDeviceConfigurationChanged(devices) {}
  /**
   * @param { !Array<ui.mojom.InputDevice> } keyboardDevices
   * @param { !Array<ui.mojom.TouchscreenDevice> } touchscreenDevices
   * @param { !Array<ui.mojom.InputDevice> } mouseDevices
   * @param { !Array<ui.mojom.InputDevice> } touchpadDevices
   * @param { !boolean } areTouchscreenTargetDisplaysValid
   */
   onDeviceListsComplete(keyboardDevices, touchscreenDevices, mouseDevices, touchpadDevices, areTouchscreenTargetDisplaysValid) {}
  /**
   * @param { !ui.mojom.StylusState } state
   */
   onStylusStateChanged(state) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
ui.mojom.InputDeviceObserverMojo;
/** @implements {mojo.InterfacePtr} */
ui.mojom.InputDeviceServerPtr = class {

  /**
   * @param { !ui.mojom.InputDeviceObserverMojoPtr } observer
   */
   addObserver(observer) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
ui.mojom.InputDeviceServer;
ui.mojom.InputDeviceObserverMojo_OnKeyboardDeviceConfigurationChanged_Params = class {
  constructor() {
    /** @type { !Array<ui.mojom.InputDevice> } */
    this.devices;
  }
};
ui.mojom.InputDeviceObserverMojo_OnTouchscreenDeviceConfigurationChanged_Params = class {
  constructor() {
    /** @type { !Array<ui.mojom.TouchscreenDevice> } */
    this.devices;
    /** @type { !boolean } */
    this.touchscreenTargetDisplayIdsChanged;
  }
};
ui.mojom.InputDeviceObserverMojo_OnMouseDeviceConfigurationChanged_Params = class {
  constructor() {
    /** @type { !Array<ui.mojom.InputDevice> } */
    this.devices;
  }
};
ui.mojom.InputDeviceObserverMojo_OnTouchpadDeviceConfigurationChanged_Params = class {
  constructor() {
    /** @type { !Array<ui.mojom.InputDevice> } */
    this.devices;
  }
};
ui.mojom.InputDeviceObserverMojo_OnDeviceListsComplete_Params = class {
  constructor() {
    /** @type { !Array<ui.mojom.InputDevice> } */
    this.keyboardDevices;
    /** @type { !Array<ui.mojom.TouchscreenDevice> } */
    this.touchscreenDevices;
    /** @type { !Array<ui.mojom.InputDevice> } */
    this.mouseDevices;
    /** @type { !Array<ui.mojom.InputDevice> } */
    this.touchpadDevices;
    /** @type { !boolean } */
    this.areTouchscreenTargetDisplaysValid;
  }
};
ui.mojom.InputDeviceObserverMojo_OnStylusStateChanged_Params = class {
  constructor() {
    /** @type { !ui.mojom.StylusState } */
    this.state;
  }
};
ui.mojom.InputDeviceServer_AddObserver_Params = class {
  constructor() {
    /** @type { !ui.mojom.InputDeviceObserverMojoPtr } */
    this.observer;
  }
};
