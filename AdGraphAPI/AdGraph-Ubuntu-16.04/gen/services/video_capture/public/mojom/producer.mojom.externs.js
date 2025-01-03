// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let videoCapture = {};
/** @const */
videoCapture.mojom = {};
/** @implements {mojo.InterfacePtr} */
videoCapture.mojom.ProducerPtr = class {

  /**
   * @param { !number } bufferId
   * @param { !mojo.MojoHandle } bufferHandle
   * @return {Promise}
   */
   onNewBufferHandle(bufferId, bufferHandle) {}
  /**
   * @param { !number } bufferId
   */
   onBufferRetired(bufferId) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
videoCapture.mojom.Producer;
videoCapture.mojom.Producer_OnNewBufferHandle_Params = class {
  constructor() {
    /** @type { !number } */
    this.bufferId;
    /** @type { !mojo.MojoHandle } */
    this.bufferHandle;
  }
};
videoCapture.mojom.Producer_OnNewBufferHandle_ResponseParams = class {
  constructor() {
  }
};
videoCapture.mojom.Producer_OnBufferRetired_Params = class {
  constructor() {
    /** @type { !number } */
    this.bufferId;
  }
};
