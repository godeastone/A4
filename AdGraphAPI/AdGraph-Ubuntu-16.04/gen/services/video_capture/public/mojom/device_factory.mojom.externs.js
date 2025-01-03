// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let videoCapture = {};
/** @const */
videoCapture.mojom = {};
/** @implements {mojo.InterfacePtr} */
videoCapture.mojom.DeviceFactoryPtr = class {

  /**
   * @return {Promise}
   */
   getDeviceInfos() {}
  /**
   * @param { !string } deviceId
   * @param { !mojo.InterfaceRequest } deviceRequest
   * @return {Promise}
   */
   createDevice(deviceId, deviceRequest) {}
  /**
   * @param { !media.mojom.VideoCaptureDeviceInfo } deviceInfo
   * @param { !videoCapture.mojom.ProducerPtr } producer
   * @param { !mojo.InterfaceRequest } virtualDevice
   */
   addSharedMemoryVirtualDevice(deviceInfo, producer, virtualDevice) {}
  /**
   * @param { !media.mojom.VideoCaptureDeviceInfo } deviceInfo
   * @param { !mojo.InterfaceRequest } virtualDevice
   */
   addTextureVirtualDevice(deviceInfo, virtualDevice) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
videoCapture.mojom.DeviceFactory;
videoCapture.mojom.DeviceFactory_GetDeviceInfos_Params = class {
  constructor() {
  }
};
videoCapture.mojom.DeviceFactory_GetDeviceInfos_ResponseParams = class {
  constructor() {
    /** @type { !Array<media.mojom.VideoCaptureDeviceInfo> } */
    this.deviceInfos;
  }
};
videoCapture.mojom.DeviceFactory_CreateDevice_Params = class {
  constructor() {
    /** @type { !string } */
    this.deviceId;
    /** @type { !mojo.InterfaceRequest } */
    this.deviceRequest;
  }
};
videoCapture.mojom.DeviceFactory_CreateDevice_ResponseParams = class {
  constructor() {
    /** @type { !videoCapture.mojom.DeviceAccessResultCode } */
    this.resultCode;
  }
};
videoCapture.mojom.DeviceFactory_AddSharedMemoryVirtualDevice_Params = class {
  constructor() {
    /** @type { !media.mojom.VideoCaptureDeviceInfo } */
    this.deviceInfo;
    /** @type { !videoCapture.mojom.ProducerPtr } */
    this.producer;
    /** @type { !mojo.InterfaceRequest } */
    this.virtualDevice;
  }
};
videoCapture.mojom.DeviceFactory_AddTextureVirtualDevice_Params = class {
  constructor() {
    /** @type { !media.mojom.VideoCaptureDeviceInfo } */
    this.deviceInfo;
    /** @type { !mojo.InterfaceRequest } */
    this.virtualDevice;
  }
};
