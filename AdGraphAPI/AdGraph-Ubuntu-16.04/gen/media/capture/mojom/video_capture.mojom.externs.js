// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let media = {};
/** @const */
media.mojom = {};
/** @implements {mojo.InterfacePtr} */
media.mojom.VideoCaptureObserverPtr = class {

  /**
   * @param { !media.mojom.VideoCaptureState } state
   */
   onStateChanged(state) {}
  /**
   * @param { !number } bufferId
   * @param { !Object } bufferHandle
   */
   onNewBuffer(bufferId, bufferHandle) {}
  /**
   * @param { !number } bufferId
   * @param { !media.mojom.VideoFrameInfo } info
   */
   onBufferReady(bufferId, info) {}
  /**
   * @param { !number } bufferId
   */
   onBufferDestroyed(bufferId) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
media.mojom.VideoCaptureObserver;
/** @implements {mojo.InterfacePtr} */
media.mojom.VideoCaptureHostPtr = class {

  /**
   * @param { !number } deviceId
   * @param { !number } sessionId
   * @param { !media.mojom.VideoCaptureParams } params
   * @param { !media.mojom.VideoCaptureObserverPtr } observer
   */
   start(deviceId, sessionId, params, observer) {}
  /**
   * @param { !number } deviceId
   */
   stop(deviceId) {}
  /**
   * @param { !number } deviceId
   */
   pause(deviceId) {}
  /**
   * @param { !number } deviceId
   * @param { !number } sessionId
   * @param { !media.mojom.VideoCaptureParams } params
   */
   resume(deviceId, sessionId, params) {}
  /**
   * @param { !number } deviceId
   */
   requestRefreshFrame(deviceId) {}
  /**
   * @param { !number } deviceId
   * @param { !number } bufferId
   * @param { !number } consumerResourceUtilization
   */
   releaseBuffer(deviceId, bufferId, consumerResourceUtilization) {}
  /**
   * @param { !number } deviceId
   * @param { !number } sessionId
   * @return {Promise}
   */
   getDeviceSupportedFormats(deviceId, sessionId) {}
  /**
   * @param { !number } deviceId
   * @param { !number } sessionId
   * @return {Promise}
   */
   getDeviceFormatsInUse(deviceId, sessionId) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
media.mojom.VideoCaptureHost;
media.mojom.VideoCaptureObserver_OnStateChanged_Params = class {
  constructor() {
    /** @type { !media.mojom.VideoCaptureState } */
    this.state;
  }
};
media.mojom.VideoCaptureObserver_OnNewBuffer_Params = class {
  constructor() {
    /** @type { !number } */
    this.bufferId;
    /** @type { !Object } */
    this.bufferHandle;
  }
};
media.mojom.VideoCaptureObserver_OnBufferReady_Params = class {
  constructor() {
    /** @type { !number } */
    this.bufferId;
    /** @type { !media.mojom.VideoFrameInfo } */
    this.info;
  }
};
media.mojom.VideoCaptureObserver_OnBufferDestroyed_Params = class {
  constructor() {
    /** @type { !number } */
    this.bufferId;
  }
};
media.mojom.VideoCaptureHost_Start_Params = class {
  constructor() {
    /** @type { !number } */
    this.deviceId;
    /** @type { !number } */
    this.sessionId;
    /** @type { !media.mojom.VideoCaptureParams } */
    this.params;
    /** @type { !media.mojom.VideoCaptureObserverPtr } */
    this.observer;
  }
};
media.mojom.VideoCaptureHost_Stop_Params = class {
  constructor() {
    /** @type { !number } */
    this.deviceId;
  }
};
media.mojom.VideoCaptureHost_Pause_Params = class {
  constructor() {
    /** @type { !number } */
    this.deviceId;
  }
};
media.mojom.VideoCaptureHost_Resume_Params = class {
  constructor() {
    /** @type { !number } */
    this.deviceId;
    /** @type { !number } */
    this.sessionId;
    /** @type { !media.mojom.VideoCaptureParams } */
    this.params;
  }
};
media.mojom.VideoCaptureHost_RequestRefreshFrame_Params = class {
  constructor() {
    /** @type { !number } */
    this.deviceId;
  }
};
media.mojom.VideoCaptureHost_ReleaseBuffer_Params = class {
  constructor() {
    /** @type { !number } */
    this.deviceId;
    /** @type { !number } */
    this.bufferId;
    /** @type { !number } */
    this.consumerResourceUtilization;
  }
};
media.mojom.VideoCaptureHost_GetDeviceSupportedFormats_Params = class {
  constructor() {
    /** @type { !number } */
    this.deviceId;
    /** @type { !number } */
    this.sessionId;
  }
};
media.mojom.VideoCaptureHost_GetDeviceSupportedFormats_ResponseParams = class {
  constructor() {
    /** @type { !Array<media.mojom.VideoCaptureFormat> } */
    this.formatsSupported;
  }
};
media.mojom.VideoCaptureHost_GetDeviceFormatsInUse_Params = class {
  constructor() {
    /** @type { !number } */
    this.deviceId;
    /** @type { !number } */
    this.sessionId;
  }
};
media.mojom.VideoCaptureHost_GetDeviceFormatsInUse_ResponseParams = class {
  constructor() {
    /** @type { !Array<media.mojom.VideoCaptureFormat> } */
    this.formatsInUse;
  }
};
