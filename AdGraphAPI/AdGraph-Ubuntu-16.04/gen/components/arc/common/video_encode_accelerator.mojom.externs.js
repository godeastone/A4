// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let arc = {};
/** @const */
arc.mojom = {};
/** @implements {mojo.InterfacePtr} */
arc.mojom.VideoEncodeAcceleratorPtr = class {

  /**
   * @return {Promise}
   */
   getSupportedProfiles() {}
  /**
   * @param { !arc.mojom.VideoPixelFormat } inputFormat
   * @param { !arc.mojom.Size } visibleSize
   * @param { !arc.mojom.StorageType } inputStorage
   * @param { !arc.mojom.VideoCodecProfile } outputProfile
   * @param { !number } initialBitrate
   * @param { !arc.mojom.VideoEncodeClientPtr } client
   * @return {Promise}
   */
   initialize(inputFormat, visibleSize, inputStorage, outputProfile, initialBitrate, client) {}
  /**
   * @param { !mojo.MojoHandle } frameFd
   * @param { !Array<arc.mojom.VideoFramePlane> } planes
   * @param { !number } timestamp
   * @param { !boolean } forceKeyframe
   * @return {Promise}
   */
   encode(frameFd, planes, timestamp, forceKeyframe) {}
  /**
   * @param { !mojo.MojoHandle } shmemFd
   * @param { !number } offset
   * @param { !number } size
   * @return {Promise}
   */
   useBitstreamBuffer(shmemFd, offset, size) {}
  /**
   * @param { !number } bitrate
   * @param { !number } framerate
   */
   requestEncodingParametersChange(bitrate, framerate) {}
  /**
   * @return {Promise}
   */
   flush() {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
arc.mojom.VideoEncodeAccelerator;
/** @implements {mojo.InterfacePtr} */
arc.mojom.VideoEncodeClientPtr = class {

  /**
   * @param { !number } inputCount
   * @param { !arc.mojom.Size } inputCodedSize
   * @param { !number } outputBufferSize
   */
   requireBitstreamBuffers(inputCount, inputCodedSize, outputBufferSize) {}
  /**
   * @param { !arc.mojom.Error } error
   */
   notifyError(error) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
arc.mojom.VideoEncodeClient;
arc.mojom.VideoEncodeProfile = class {
  constructor() {
    /** @type { !arc.mojom.VideoCodecProfile } */
    this.profile;
    /** @type { !number } */
    this.maxFramerateNumerator;
    /** @type { !arc.mojom.Size } */
    this.maxResolution;
    /** @type { !number } */
    this.maxFramerateDenominator;
  }
};
arc.mojom.VideoEncodeAccelerator_GetSupportedProfiles_Params = class {
  constructor() {
  }
};
arc.mojom.VideoEncodeAccelerator_GetSupportedProfiles_ResponseParams = class {
  constructor() {
    /** @type { !Array<arc.mojom.VideoEncodeProfile> } */
    this.profiles;
  }
};
arc.mojom.VideoEncodeAccelerator_Initialize_Params = class {
  constructor() {
    /** @type { !arc.mojom.VideoPixelFormat } */
    this.inputFormat;
    /** @type { !arc.mojom.StorageType } */
    this.inputStorage;
    /** @type { !arc.mojom.Size } */
    this.visibleSize;
    /** @type { !arc.mojom.VideoCodecProfile } */
    this.outputProfile;
    /** @type { !number } */
    this.initialBitrate;
    /** @type { !arc.mojom.VideoEncodeClientPtr } */
    this.client;
  }
};
arc.mojom.VideoEncodeAccelerator_Initialize_ResponseParams = class {
  constructor() {
    /** @type { !boolean } */
    this.success;
  }
};
arc.mojom.VideoEncodeAccelerator_Encode_Params = class {
  constructor() {
    /** @type { !mojo.MojoHandle } */
    this.frameFd;
    /** @type { !boolean } */
    this.forceKeyframe;
    /** @type { !Array<arc.mojom.VideoFramePlane> } */
    this.planes;
    /** @type { !number } */
    this.timestamp;
  }
};
arc.mojom.VideoEncodeAccelerator_Encode_ResponseParams = class {
  constructor() {
  }
};
arc.mojom.VideoEncodeAccelerator_UseBitstreamBuffer_Params = class {
  constructor() {
    /** @type { !mojo.MojoHandle } */
    this.shmemFd;
    /** @type { !number } */
    this.offset;
    /** @type { !number } */
    this.size;
  }
};
arc.mojom.VideoEncodeAccelerator_UseBitstreamBuffer_ResponseParams = class {
  constructor() {
    /** @type { !number } */
    this.payloadSize;
    /** @type { !boolean } */
    this.keyFrame;
    /** @type { !number } */
    this.timestamp;
  }
};
arc.mojom.VideoEncodeAccelerator_RequestEncodingParametersChange_Params = class {
  constructor() {
    /** @type { !number } */
    this.bitrate;
    /** @type { !number } */
    this.framerate;
  }
};
arc.mojom.VideoEncodeAccelerator_Flush_Params = class {
  constructor() {
  }
};
arc.mojom.VideoEncodeAccelerator_Flush_ResponseParams = class {
  constructor() {
    /** @type { !boolean } */
    this.flushDone;
  }
};
arc.mojom.VideoEncodeClient_RequireBitstreamBuffers_Params = class {
  constructor() {
    /** @type { !number } */
    this.inputCount;
    /** @type { !number } */
    this.outputBufferSize;
    /** @type { !arc.mojom.Size } */
    this.inputCodedSize;
  }
};
arc.mojom.VideoEncodeClient_NotifyError_Params = class {
  constructor() {
    /** @type { !arc.mojom.Error } */
    this.error;
  }
};
