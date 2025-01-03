// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let videoCapture = {};
/** @const */
videoCapture.mojom = {};
/** @implements {mojo.InterfacePtr} */
videoCapture.mojom.SharedMemoryVirtualDevicePtr = class {

  /**
   * @param { !gfx.mojom.Size } dimension
   * @param { !media.mojom.VideoCapturePixelFormat } pixelFormat
   * @return {Promise}
   */
   requestFrameBuffer(dimension, pixelFormat) {}
  /**
   * @param { !number } bufferId
   * @param { !media.mojom.VideoFrameInfo } frameInfo
   */
   onFrameReadyInBuffer(bufferId, frameInfo) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
videoCapture.mojom.SharedMemoryVirtualDevice;
/** @implements {mojo.InterfacePtr} */
videoCapture.mojom.TextureVirtualDevicePtr = class {

  /**
   * @param { !number } bufferId
   * @param { !media.mojom.MailboxBufferHandleSet } mailboxHandles
   */
   onNewMailboxHolderBufferHandle(bufferId, mailboxHandles) {}
  /**
   * @param { !number } bufferId
   * @param { !videoCapture.mojom.ScopedAccessPermissionPtr } accessPermission
   * @param { !media.mojom.VideoFrameInfo } frameInfo
   */
   onFrameReadyInBuffer(bufferId, accessPermission, frameInfo) {}
  /**
   * @param { !number } bufferId
   */
   onBufferRetired(bufferId) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
videoCapture.mojom.TextureVirtualDevice;
videoCapture.mojom.SharedMemoryVirtualDevice_RequestFrameBuffer_Params = class {
  constructor() {
    /** @type { !gfx.mojom.Size } */
    this.dimension;
    /** @type { !media.mojom.VideoCapturePixelFormat } */
    this.pixelFormat;
  }
};
videoCapture.mojom.SharedMemoryVirtualDevice_RequestFrameBuffer_ResponseParams = class {
  constructor() {
    /** @type { !number } */
    this.bufferId;
  }
};
videoCapture.mojom.SharedMemoryVirtualDevice_OnFrameReadyInBuffer_Params = class {
  constructor() {
    /** @type { !number } */
    this.bufferId;
    /** @type { !media.mojom.VideoFrameInfo } */
    this.frameInfo;
  }
};
videoCapture.mojom.TextureVirtualDevice_OnNewMailboxHolderBufferHandle_Params = class {
  constructor() {
    /** @type { !number } */
    this.bufferId;
    /** @type { !media.mojom.MailboxBufferHandleSet } */
    this.mailboxHandles;
  }
};
videoCapture.mojom.TextureVirtualDevice_OnFrameReadyInBuffer_Params = class {
  constructor() {
    /** @type { !number } */
    this.bufferId;
    /** @type { !videoCapture.mojom.ScopedAccessPermissionPtr } */
    this.accessPermission;
    /** @type { !media.mojom.VideoFrameInfo } */
    this.frameInfo;
  }
};
videoCapture.mojom.TextureVirtualDevice_OnBufferRetired_Params = class {
  constructor() {
    /** @type { !number } */
    this.bufferId;
  }
};
