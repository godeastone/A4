// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let blink = {};
/** @const */
blink.mojom = {};
/** @implements {mojo.InterfacePtr} */
blink.mojom.MediaDevicesDispatcherHostPtr = class {

  /**
   * @param { !boolean } requestAudioInput
   * @param { !boolean } requestVideoInput
   * @param { !boolean } requestAudioOutput
   * @param { !boolean } requestVideoInputCapabilities
   * @return {Promise}
   */
   enumerateDevices(requestAudioInput, requestVideoInput, requestAudioOutput, requestVideoInputCapabilities) {}
  /**
   * @return {Promise}
   */
   getVideoInputCapabilities() {}
  /**
   * @param { !string } deviceId
   * @return {Promise}
   */
   getAllVideoInputDeviceFormats(deviceId) {}
  /**
   * @param { !string } deviceId
   * @return {Promise}
   */
   getAvailableVideoInputDeviceFormats(deviceId) {}
  /**
   * @return {Promise}
   */
   getAudioInputCapabilities() {}
  /**
   * @param { !boolean } subscribeAudioInput
   * @param { !boolean } subscribeVideoInput
   * @param { !boolean } subscribeAudioOutput
   * @param { !blink.mojom.MediaDevicesListenerPtr } listener
   */
   addMediaDevicesListener(subscribeAudioInput, subscribeVideoInput, subscribeAudioOutput, listener) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
blink.mojom.MediaDevicesDispatcherHost;
/** @implements {mojo.InterfacePtr} */
blink.mojom.MediaDevicesListenerPtr = class {

  /**
   * @param { !blink.mojom.MediaDeviceType } type
   * @param { !Array<blink.mojom.MediaDeviceInfo> } deviceInfos
   */
   onDevicesChanged(type, deviceInfos) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
blink.mojom.MediaDevicesListener;
blink.mojom.MediaDeviceInfo = class {
  constructor() {
    /** @type { !string } */
    this.deviceId;
    /** @type { !string } */
    this.label;
    /** @type { !string } */
    this.groupId;
  }
};
blink.mojom.VideoInputDeviceCapabilities = class {
  constructor() {
    /** @type { !string } */
    this.deviceId;
    /** @type { !string } */
    this.groupId;
    /** @type { !Array<media.mojom.VideoCaptureFormat> } */
    this.formats;
    /** @type { !blink.mojom.FacingMode } */
    this.facingMode;
  }
};
blink.mojom.AudioInputDeviceCapabilities = class {
  constructor() {
    /** @type { !string } */
    this.deviceId;
    /** @type { !media.mojom.AudioParameters } */
    this.parameters;
  }
};
blink.mojom.MediaDevicesDispatcherHost_EnumerateDevices_Params = class {
  constructor() {
    /** @type { !boolean } */
    this.requestAudioInput;
    /** @type { !boolean } */
    this.requestVideoInput;
    /** @type { !boolean } */
    this.requestAudioOutput;
    /** @type { !boolean } */
    this.requestVideoInputCapabilities;
  }
};
blink.mojom.MediaDevicesDispatcherHost_EnumerateDevices_ResponseParams = class {
  constructor() {
    /** @type { !Array<Array<blink.mojom.MediaDeviceInfo>> } */
    this.enumeration;
    /** @type { !Array<blink.mojom.VideoInputDeviceCapabilities> } */
    this.videoInputDeviceCapabilities;
  }
};
blink.mojom.MediaDevicesDispatcherHost_GetVideoInputCapabilities_Params = class {
  constructor() {
  }
};
blink.mojom.MediaDevicesDispatcherHost_GetVideoInputCapabilities_ResponseParams = class {
  constructor() {
    /** @type { !Array<blink.mojom.VideoInputDeviceCapabilities> } */
    this.videoInputDeviceCapabilities;
  }
};
blink.mojom.MediaDevicesDispatcherHost_GetAllVideoInputDeviceFormats_Params = class {
  constructor() {
    /** @type { !string } */
    this.deviceId;
  }
};
blink.mojom.MediaDevicesDispatcherHost_GetAllVideoInputDeviceFormats_ResponseParams = class {
  constructor() {
    /** @type { !Array<media.mojom.VideoCaptureFormat> } */
    this.formats;
  }
};
blink.mojom.MediaDevicesDispatcherHost_GetAvailableVideoInputDeviceFormats_Params = class {
  constructor() {
    /** @type { !string } */
    this.deviceId;
  }
};
blink.mojom.MediaDevicesDispatcherHost_GetAvailableVideoInputDeviceFormats_ResponseParams = class {
  constructor() {
    /** @type { !Array<media.mojom.VideoCaptureFormat> } */
    this.formats;
  }
};
blink.mojom.MediaDevicesDispatcherHost_GetAudioInputCapabilities_Params = class {
  constructor() {
  }
};
blink.mojom.MediaDevicesDispatcherHost_GetAudioInputCapabilities_ResponseParams = class {
  constructor() {
    /** @type { !Array<blink.mojom.AudioInputDeviceCapabilities> } */
    this.audioInputDeviceCapabilities;
  }
};
blink.mojom.MediaDevicesDispatcherHost_AddMediaDevicesListener_Params = class {
  constructor() {
    /** @type { !boolean } */
    this.subscribeAudioInput;
    /** @type { !boolean } */
    this.subscribeVideoInput;
    /** @type { !boolean } */
    this.subscribeAudioOutput;
    /** @type { !blink.mojom.MediaDevicesListenerPtr } */
    this.listener;
  }
};
blink.mojom.MediaDevicesListener_OnDevicesChanged_Params = class {
  constructor() {
    /** @type { !blink.mojom.MediaDeviceType } */
    this.type;
    /** @type { !Array<blink.mojom.MediaDeviceInfo> } */
    this.deviceInfos;
  }
};
