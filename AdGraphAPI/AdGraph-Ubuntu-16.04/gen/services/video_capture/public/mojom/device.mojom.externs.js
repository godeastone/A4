// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let videoCapture = {};
/** @const */
videoCapture.mojom = {};
/** @implements {mojo.InterfacePtr} */
videoCapture.mojom.DevicePtr = class {

  /**
   * @param { !media.mojom.VideoCaptureParams } requestedSettings
   * @param { !videoCapture.mojom.ReceiverPtr } receiver
   */
   start(requestedSettings, receiver) {}
  /**
   * @param { !number } frameFeedbackId
   * @param { !number } utilization
   */
   onReceiverReportingUtilization(frameFeedbackId, utilization) {}
  /**
   */
   requestRefreshFrame() {}
  /**
   */
   maybeSuspend() {}
  /**
   */
   resume() {}
  /**
   * @return {Promise}
   */
   getPhotoState() {}
  /**
   * @param { !media.mojom.PhotoSettings } settings
   * @return {Promise}
   */
   setPhotoOptions(settings) {}
  /**
   * @return {Promise}
   */
   takePhoto() {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
videoCapture.mojom.Device;
videoCapture.mojom.Device_Start_Params = class {
  constructor() {
    /** @type { !media.mojom.VideoCaptureParams } */
    this.requestedSettings;
    /** @type { !videoCapture.mojom.ReceiverPtr } */
    this.receiver;
  }
};
videoCapture.mojom.Device_OnReceiverReportingUtilization_Params = class {
  constructor() {
    /** @type { !number } */
    this.frameFeedbackId;
    /** @type { !number } */
    this.utilization;
  }
};
videoCapture.mojom.Device_RequestRefreshFrame_Params = class {
  constructor() {
  }
};
videoCapture.mojom.Device_MaybeSuspend_Params = class {
  constructor() {
  }
};
videoCapture.mojom.Device_Resume_Params = class {
  constructor() {
  }
};
videoCapture.mojom.Device_GetPhotoState_Params = class {
  constructor() {
  }
};
videoCapture.mojom.Device_GetPhotoState_ResponseParams = class {
  constructor() {
    /** @type { media.mojom.PhotoState } */
    this.capabilities;
  }
};
videoCapture.mojom.Device_SetPhotoOptions_Params = class {
  constructor() {
    /** @type { !media.mojom.PhotoSettings } */
    this.settings;
  }
};
videoCapture.mojom.Device_SetPhotoOptions_ResponseParams = class {
  constructor() {
    /** @type { !boolean } */
    this.success;
  }
};
videoCapture.mojom.Device_TakePhoto_Params = class {
  constructor() {
  }
};
videoCapture.mojom.Device_TakePhoto_ResponseParams = class {
  constructor() {
    /** @type { media.mojom.Blob } */
    this.blob;
  }
};
