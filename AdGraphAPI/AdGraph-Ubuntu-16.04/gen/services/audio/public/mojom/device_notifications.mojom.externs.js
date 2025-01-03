// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let audio = {};
/** @const */
audio.mojom = {};
/** @implements {mojo.InterfacePtr} */
audio.mojom.DeviceListenerPtr = class {

  /**
   */
   devicesChanged() {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
audio.mojom.DeviceListener;
/** @implements {mojo.InterfacePtr} */
audio.mojom.DeviceNotifierPtr = class {

  /**
   * @param { !audio.mojom.DeviceListenerPtr } listener
   */
   registerListener(listener) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
audio.mojom.DeviceNotifier;
audio.mojom.DeviceListener_DevicesChanged_Params = class {
  constructor() {
  }
};
audio.mojom.DeviceNotifier_RegisterListener_Params = class {
  constructor() {
    /** @type { !audio.mojom.DeviceListenerPtr } */
    this.listener;
  }
};
