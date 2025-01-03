// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let videoCapture = {};
/** @const */
videoCapture.mojom = {};
/** @implements {mojo.InterfacePtr} */
videoCapture.mojom.ReceiverPtr = class {

  /**
   * @param { !number } bufferId
   * @param { !Object } bufferHandle
   */
   onNewBuffer(bufferId, bufferHandle) {}
  /**
   * @param { !number } bufferId
   * @param { !number } frameFeedbackId
   * @param { !videoCapture.mojom.ScopedAccessPermissionPtr } accessPermission
   * @param { !media.mojom.VideoFrameInfo } frameInfo
   */
   onFrameReadyInBuffer(bufferId, frameFeedbackId, accessPermission, frameInfo) {}
  /**
   * @param { !number } bufferId
   */
   onBufferRetired(bufferId) {}
  /**
   */
   onError() {}
  /**
   * @param { !string } message
   */
   onLog(message) {}
  /**
   */
   onStarted() {}
  /**
   */
   onStartedUsingGpuDecode() {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
videoCapture.mojom.Receiver;
videoCapture.mojom.Receiver_OnNewBuffer_Params = class {
  constructor() {
    /** @type { !number } */
    this.bufferId;
    /** @type { !Object } */
    this.bufferHandle;
  }
};
videoCapture.mojom.Receiver_OnFrameReadyInBuffer_Params = class {
  constructor() {
    /** @type { !number } */
    this.bufferId;
    /** @type { !number } */
    this.frameFeedbackId;
    /** @type { !videoCapture.mojom.ScopedAccessPermissionPtr } */
    this.accessPermission;
    /** @type { !media.mojom.VideoFrameInfo } */
    this.frameInfo;
  }
};
videoCapture.mojom.Receiver_OnBufferRetired_Params = class {
  constructor() {
    /** @type { !number } */
    this.bufferId;
  }
};
videoCapture.mojom.Receiver_OnError_Params = class {
  constructor() {
  }
};
videoCapture.mojom.Receiver_OnLog_Params = class {
  constructor() {
    /** @type { !string } */
    this.message;
  }
};
videoCapture.mojom.Receiver_OnStarted_Params = class {
  constructor() {
  }
};
videoCapture.mojom.Receiver_OnStartedUsingGpuDecode_Params = class {
  constructor() {
  }
};
