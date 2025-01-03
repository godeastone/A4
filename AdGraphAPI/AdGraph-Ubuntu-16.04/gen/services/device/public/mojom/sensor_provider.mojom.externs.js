// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let device = {};
/** @const */
device.mojom = {};
/** @implements {mojo.InterfacePtr} */
device.mojom.SensorProviderPtr = class {

  /**
   * @param { !device.mojom.SensorType } type
   * @return {Promise}
   */
   getSensor(type) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
device.mojom.SensorProvider;
device.mojom.SensorInitParams = class {
  constructor() {
    /** @type { !device.mojom.SensorPtr } */
    this.sensor;
    /** @type { !mojo.InterfaceRequest } */
    this.clientRequest;
    /** @type { !mojo.MojoHandle } */
    this.memory;
    /** @type { !number } */
    this.bufferOffset;
    /** @type { !device.mojom.ReportingMode } */
    this.mode;
    /** @type { !device.mojom.SensorConfiguration } */
    this.defaultConfiguration;
    /** @type { !number } */
    this.maximumFrequency;
    /** @type { !number } */
    this.minimumFrequency;
  }
};
device.mojom.SensorProvider_GetSensor_Params = class {
  constructor() {
    /** @type { !device.mojom.SensorType } */
    this.type;
  }
};
device.mojom.SensorProvider_GetSensor_ResponseParams = class {
  constructor() {
    /** @type { !device.mojom.SensorCreationResult } */
    this.result;
    /** @type { device.mojom.SensorInitParams } */
    this.initParams;
  }
};
