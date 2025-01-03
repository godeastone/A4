// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let media = {};
/** @const */
media.mojom = {};
media.mojom.VideoCaptureFormat = class {
  constructor() {
    /** @type { !gfx.mojom.Size } */
    this.frameSize;
    /** @type { !number } */
    this.frameRate;
    /** @type { !media.mojom.VideoCapturePixelFormat } */
    this.pixelFormat;
  }
};
media.mojom.VideoCaptureParams = class {
  constructor() {
    /** @type { !media.mojom.VideoCaptureFormat } */
    this.requestedFormat;
    /** @type { !media.mojom.ResolutionChangePolicy } */
    this.resolutionChangePolicy;
    /** @type { !media.mojom.PowerLineFrequency } */
    this.powerLineFrequency;
  }
};
media.mojom.VideoFrameInfo = class {
  constructor() {
    /** @type { !mojoBase.mojom.TimeDelta } */
    this.timestamp;
    /** @type { !mojoBase.mojom.DictionaryValue } */
    this.metadata;
    /** @type { !media.mojom.VideoCapturePixelFormat } */
    this.pixelFormat;
    /** @type { !gfx.mojom.Size } */
    this.codedSize;
    /** @type { !gfx.mojom.Rect } */
    this.visibleRect;
  }
};
media.mojom.VideoCaptureDeviceDescriptorCameraCalibration = class {
  constructor() {
    /** @type { !number } */
    this.focalLengthX;
    /** @type { !number } */
    this.focalLengthY;
    /** @type { !number } */
    this.depthNear;
    /** @type { !number } */
    this.depthFar;
  }
};
media.mojom.VideoCaptureDeviceDescriptor = class {
  constructor() {
    /** @type { !string } */
    this.displayName;
    /** @type { !string } */
    this.deviceId;
    /** @type { !string } */
    this.modelId;
    /** @type { !media.mojom.VideoCaptureApi } */
    this.captureApi;
    /** @type { !media.mojom.VideoCaptureTransportType } */
    this.transportType;
    /** @type { media.mojom.VideoCaptureDeviceDescriptorCameraCalibration } */
    this.cameraCalibration;
  }
};
media.mojom.VideoCaptureDeviceInfo = class {
  constructor() {
    /** @type { !media.mojom.VideoCaptureDeviceDescriptor } */
    this.descriptor;
    /** @type { !Array<media.mojom.VideoCaptureFormat> } */
    this.supportedFormats;
  }
};
media.mojom.MailboxBufferHandleSet = class {
  constructor() {
    /** @type { !Array<gpu.mojom.MailboxHolder> } */
    this.mailboxHolder;
  }
};
