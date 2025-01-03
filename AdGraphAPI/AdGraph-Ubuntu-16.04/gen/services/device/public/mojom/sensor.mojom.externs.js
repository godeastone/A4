// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let device = {};
/** @const */
device.mojom = {};
/** @implements {mojo.InterfacePtr} */
device.mojom.SensorPtr = class {

  /**
   * @return {Promise}
   */
   getDefaultConfiguration() {}
  /**
   * @param { !device.mojom.SensorConfiguration } configuration
   * @return {Promise}
   */
   addConfiguration(configuration) {}
  /**
   * @param { !device.mojom.SensorConfiguration } configuration
   */
   removeConfiguration(configuration) {}
  /**
   */
   suspend() {}
  /**
   */
   resume() {}
  /**
   * @param { !boolean } enabled
   */
   configureReadingChangeNotifications(enabled) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
device.mojom.Sensor;
/** @implements {mojo.InterfacePtr} */
device.mojom.SensorClientPtr = class {

  /**
   */
   raiseError() {}
  /**
   */
   sensorReadingChanged() {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
device.mojom.SensorClient;
device.mojom.SensorConfiguration = class {
  constructor() {
    /** @type { !number } */
    this.frequency;
  }
};
device.mojom.Sensor_GetDefaultConfiguration_Params = class {
  constructor() {
  }
};
device.mojom.Sensor_GetDefaultConfiguration_ResponseParams = class {
  constructor() {
    /** @type { !device.mojom.SensorConfiguration } */
    this.configuration;
  }
};
device.mojom.Sensor_AddConfiguration_Params = class {
  constructor() {
    /** @type { !device.mojom.SensorConfiguration } */
    this.configuration;
  }
};
device.mojom.Sensor_AddConfiguration_ResponseParams = class {
  constructor() {
    /** @type { !boolean } */
    this.success;
  }
};
device.mojom.Sensor_RemoveConfiguration_Params = class {
  constructor() {
    /** @type { !device.mojom.SensorConfiguration } */
    this.configuration;
  }
};
device.mojom.Sensor_Suspend_Params = class {
  constructor() {
  }
};
device.mojom.Sensor_Resume_Params = class {
  constructor() {
  }
};
device.mojom.Sensor_ConfigureReadingChangeNotifications_Params = class {
  constructor() {
    /** @type { !boolean } */
    this.enabled;
  }
};
device.mojom.SensorClient_RaiseError_Params = class {
  constructor() {
  }
};
device.mojom.SensorClient_SensorReadingChanged_Params = class {
  constructor() {
  }
};
