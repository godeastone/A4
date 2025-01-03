// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let audio = {};
/** @const */
audio.mojom = {};
/** @implements {mojo.InterfacePtr} */
audio.mojom.SystemInfoPtr = class {

  /**
   * @param { !string } deviceId
   * @return {Promise}
   */
   getInputStreamParameters(deviceId) {}
  /**
   * @param { !string } deviceId
   * @return {Promise}
   */
   getOutputStreamParameters(deviceId) {}
  /**
   * @return {Promise}
   */
   hasInputDevices() {}
  /**
   * @return {Promise}
   */
   hasOutputDevices() {}
  /**
   * @return {Promise}
   */
   getInputDeviceDescriptions() {}
  /**
   * @return {Promise}
   */
   getOutputDeviceDescriptions() {}
  /**
   * @param { !string } inputDeviceId
   * @return {Promise}
   */
   getAssociatedOutputDeviceID(inputDeviceId) {}
  /**
   * @param { !string } inputDeviceId
   * @return {Promise}
   */
   getInputDeviceInfo(inputDeviceId) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
audio.mojom.SystemInfo;
audio.mojom.SystemInfo_GetInputStreamParameters_Params = class {
  constructor() {
    /** @type { !string } */
    this.deviceId;
  }
};
audio.mojom.SystemInfo_GetInputStreamParameters_ResponseParams = class {
  constructor() {
    /** @type { media.mojom.AudioParameters } */
    this.params;
  }
};
audio.mojom.SystemInfo_GetOutputStreamParameters_Params = class {
  constructor() {
    /** @type { !string } */
    this.deviceId;
  }
};
audio.mojom.SystemInfo_GetOutputStreamParameters_ResponseParams = class {
  constructor() {
    /** @type { media.mojom.AudioParameters } */
    this.params;
  }
};
audio.mojom.SystemInfo_HasInputDevices_Params = class {
  constructor() {
  }
};
audio.mojom.SystemInfo_HasInputDevices_ResponseParams = class {
  constructor() {
    /** @type { !boolean } */
    this.hasInputDevices;
  }
};
audio.mojom.SystemInfo_HasOutputDevices_Params = class {
  constructor() {
  }
};
audio.mojom.SystemInfo_HasOutputDevices_ResponseParams = class {
  constructor() {
    /** @type { !boolean } */
    this.hasOutputDevices;
  }
};
audio.mojom.SystemInfo_GetInputDeviceDescriptions_Params = class {
  constructor() {
  }
};
audio.mojom.SystemInfo_GetInputDeviceDescriptions_ResponseParams = class {
  constructor() {
    /** @type { !Array<audio.mojom.AudioDeviceDescription> } */
    this.deviceDescriptions;
  }
};
audio.mojom.SystemInfo_GetOutputDeviceDescriptions_Params = class {
  constructor() {
  }
};
audio.mojom.SystemInfo_GetOutputDeviceDescriptions_ResponseParams = class {
  constructor() {
    /** @type { !Array<audio.mojom.AudioDeviceDescription> } */
    this.deviceDescriptions;
  }
};
audio.mojom.SystemInfo_GetAssociatedOutputDeviceID_Params = class {
  constructor() {
    /** @type { !string } */
    this.inputDeviceId;
  }
};
audio.mojom.SystemInfo_GetAssociatedOutputDeviceID_ResponseParams = class {
  constructor() {
    /** @type { string } */
    this.associatedOutputDeviceId;
  }
};
audio.mojom.SystemInfo_GetInputDeviceInfo_Params = class {
  constructor() {
    /** @type { !string } */
    this.inputDeviceId;
  }
};
audio.mojom.SystemInfo_GetInputDeviceInfo_ResponseParams = class {
  constructor() {
    /** @type { media.mojom.AudioParameters } */
    this.inputParams;
    /** @type { string } */
    this.associatedOutputDeviceId;
  }
};
