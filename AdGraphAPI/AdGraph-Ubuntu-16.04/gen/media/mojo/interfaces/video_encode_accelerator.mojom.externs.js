// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let media = {};
/** @const */
media.mojom = {};
/** @implements {mojo.InterfacePtr} */
media.mojom.VideoEncodeAcceleratorProviderPtr = class {

  /**
   * @param { !mojo.InterfaceRequest } request
   */
   createVideoEncodeAccelerator(request) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
media.mojom.VideoEncodeAcceleratorProvider;
/** @implements {mojo.InterfacePtr} */
media.mojom.VideoEncodeAcceleratorPtr = class {

  /**
   * @param { !media.mojom.VideoPixelFormat } inputFormat
   * @param { !gfx.mojom.Size } inputVisibleSize
   * @param { !media.mojom.VideoCodecProfile } outputProfile
   * @param { !number } initialBitrate
   * @param { !media.mojom.VideoEncodeAcceleratorClientPtr } client
   * @return {Promise}
   */
   initialize(inputFormat, inputVisibleSize, outputProfile, initialBitrate, client) {}
  /**
   * @param { !media.mojom.VideoFrame } frame
   * @param { !boolean } forceKeyframe
   * @return {Promise}
   */
   encode(frame, forceKeyframe) {}
  /**
   * @param { !number } bitstreamBufferId
   * @param { !mojo.MojoHandle } buffer
   */
   useOutputBitstreamBuffer(bitstreamBufferId, buffer) {}
  /**
   * @param { !number } bitrate
   * @param { !number } framerate
   */
   requestEncodingParametersChange(bitrate, framerate) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
media.mojom.VideoEncodeAccelerator;
/** @implements {mojo.InterfacePtr} */
media.mojom.VideoEncodeAcceleratorClientPtr = class {

  /**
   * @param { !number } inputCount
   * @param { !gfx.mojom.Size } inputCodedSize
   * @param { !number } outputBufferSize
   */
   requireBitstreamBuffers(inputCount, inputCodedSize, outputBufferSize) {}
  /**
   * @param { !number } bitstreamBufferId
   * @param { !number } payloadSize
   * @param { !boolean } keyFrame
   * @param { !mojoBase.mojom.TimeDelta } timestamp
   */
   bitstreamBufferReady(bitstreamBufferId, payloadSize, keyFrame, timestamp) {}
  /**
   * @param { !media.mojom.Error } error
   */
   notifyError(error) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
media.mojom.VideoEncodeAcceleratorClient;
media.mojom.VideoEncodeAcceleratorProvider_CreateVideoEncodeAccelerator_Params = class {
  constructor() {
    /** @type { !mojo.InterfaceRequest } */
    this.request;
  }
};
media.mojom.VideoEncodeAccelerator_Initialize_Params = class {
  constructor() {
    /** @type { !media.mojom.VideoPixelFormat } */
    this.inputFormat;
    /** @type { !media.mojom.VideoCodecProfile } */
    this.outputProfile;
    /** @type { !gfx.mojom.Size } */
    this.inputVisibleSize;
    /** @type { !number } */
    this.initialBitrate;
    /** @type { !media.mojom.VideoEncodeAcceleratorClientPtr } */
    this.client;
  }
};
media.mojom.VideoEncodeAccelerator_Initialize_ResponseParams = class {
  constructor() {
    /** @type { !boolean } */
    this.result;
  }
};
media.mojom.VideoEncodeAccelerator_Encode_Params = class {
  constructor() {
    /** @type { !media.mojom.VideoFrame } */
    this.frame;
    /** @type { !boolean } */
    this.forceKeyframe;
  }
};
media.mojom.VideoEncodeAccelerator_Encode_ResponseParams = class {
  constructor() {
  }
};
media.mojom.VideoEncodeAccelerator_UseOutputBitstreamBuffer_Params = class {
  constructor() {
    /** @type { !number } */
    this.bitstreamBufferId;
    /** @type { !mojo.MojoHandle } */
    this.buffer;
  }
};
media.mojom.VideoEncodeAccelerator_RequestEncodingParametersChange_Params = class {
  constructor() {
    /** @type { !number } */
    this.bitrate;
    /** @type { !number } */
    this.framerate;
  }
};
media.mojom.VideoEncodeAcceleratorClient_RequireBitstreamBuffers_Params = class {
  constructor() {
    /** @type { !number } */
    this.inputCount;
    /** @type { !number } */
    this.outputBufferSize;
    /** @type { !gfx.mojom.Size } */
    this.inputCodedSize;
  }
};
media.mojom.VideoEncodeAcceleratorClient_BitstreamBufferReady_Params = class {
  constructor() {
    /** @type { !number } */
    this.bitstreamBufferId;
    /** @type { !number } */
    this.payloadSize;
    /** @type { !boolean } */
    this.keyFrame;
    /** @type { !mojoBase.mojom.TimeDelta } */
    this.timestamp;
  }
};
media.mojom.VideoEncodeAcceleratorClient_NotifyError_Params = class {
  constructor() {
    /** @type { !media.mojom.Error } */
    this.error;
  }
};
