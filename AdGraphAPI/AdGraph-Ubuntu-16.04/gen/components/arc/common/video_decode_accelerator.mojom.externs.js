// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let arc = {};
/** @const */
arc.mojom = {};
/** @implements {mojo.InterfacePtr} */
arc.mojom.VideoDecodeAcceleratorPtr = class {

  /**
   * @param { !arc.mojom.VideoDecodeAcceleratorConfig } config
   * @param { !arc.mojom.VideoDecodeClientPtr } client
   * @return {Promise}
   */
   initialize(config, client) {}
  /**
   * @param { !arc.mojom.BitstreamBuffer } bitstreamBuffer
   */
   decode(bitstreamBuffer) {}
  /**
   * @param { !number } count
   */
   assignPictureBuffers(count) {}
  /**
   * @param { !number } pictureBufferId
   * @param { !arc.mojom.HalPixelFormat } format
   * @param { !mojo.MojoHandle } handleFd
   * @param { !Array<arc.mojom.VideoFramePlane> } planes
   */
   importBufferForPicture(pictureBufferId, format, handleFd, planes) {}
  /**
   * @param { !number } pictureBufferId
   */
   reusePictureBuffer(pictureBufferId) {}
  /**
   * @return {Promise}
   */
   reset() {}
  /**
   * @return {Promise}
   */
   flush() {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
arc.mojom.VideoDecodeAccelerator;
/** @implements {mojo.InterfacePtr} */
arc.mojom.VideoDecodeClientPtr = class {

  /**
   * @param { !arc.mojom.PictureBufferFormat } format
   */
   providePictureBuffers(format) {}
  /**
   * @param { !arc.mojom.Picture } picture
   */
   pictureReady(picture) {}
  /**
   * @param { !number } bitstreamId
   */
   notifyEndOfBitstreamBuffer(bitstreamId) {}
  /**
   * @param { !arc.mojom.Result } error
   */
   notifyError(error) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
arc.mojom.VideoDecodeClient;
arc.mojom.BitstreamBuffer = class {
  constructor() {
    /** @type { !number } */
    this.bitstreamId;
    /** @type { !mojo.MojoHandle } */
    this.handleFd;
    /** @type { !number } */
    this.offset;
    /** @type { !number } */
    this.bytesUsed;
  }
};
arc.mojom.Picture = class {
  constructor() {
    /** @type { !number } */
    this.pictureBufferId;
    /** @type { !number } */
    this.bitstreamId;
    /** @type { !arc.mojom.Rect } */
    this.cropRect;
  }
};
arc.mojom.PictureBufferFormat = class {
  constructor() {
    /** @type { !number } */
    this.minNumBuffers;
    /** @type { !arc.mojom.Size } */
    this.codedSize;
  }
};
arc.mojom.VideoDecodeAcceleratorConfig = class {
  constructor() {
    /** @type { !arc.mojom.VideoCodecProfile } */
    this.profile;
    /** @type { !boolean } */
    this.secureMode;
  }
};
arc.mojom.VideoDecodeAccelerator_Initialize_Params = class {
  constructor() {
    /** @type { !arc.mojom.VideoDecodeAcceleratorConfig } */
    this.config;
    /** @type { !arc.mojom.VideoDecodeClientPtr } */
    this.client;
  }
};
arc.mojom.VideoDecodeAccelerator_Initialize_ResponseParams = class {
  constructor() {
    /** @type { !arc.mojom.Result } */
    this.result;
  }
};
arc.mojom.VideoDecodeAccelerator_Decode_Params = class {
  constructor() {
    /** @type { !arc.mojom.BitstreamBuffer } */
    this.bitstreamBuffer;
  }
};
arc.mojom.VideoDecodeAccelerator_AssignPictureBuffers_Params = class {
  constructor() {
    /** @type { !number } */
    this.count;
  }
};
arc.mojom.VideoDecodeAccelerator_ImportBufferForPicture_Params = class {
  constructor() {
    /** @type { !number } */
    this.pictureBufferId;
    /** @type { !arc.mojom.HalPixelFormat } */
    this.format;
    /** @type { !mojo.MojoHandle } */
    this.handleFd;
    /** @type { !Array<arc.mojom.VideoFramePlane> } */
    this.planes;
  }
};
arc.mojom.VideoDecodeAccelerator_ReusePictureBuffer_Params = class {
  constructor() {
    /** @type { !number } */
    this.pictureBufferId;
  }
};
arc.mojom.VideoDecodeAccelerator_Reset_Params = class {
  constructor() {
  }
};
arc.mojom.VideoDecodeAccelerator_Reset_ResponseParams = class {
  constructor() {
    /** @type { !arc.mojom.Result } */
    this.result;
  }
};
arc.mojom.VideoDecodeAccelerator_Flush_Params = class {
  constructor() {
  }
};
arc.mojom.VideoDecodeAccelerator_Flush_ResponseParams = class {
  constructor() {
    /** @type { !arc.mojom.Result } */
    this.result;
  }
};
arc.mojom.VideoDecodeClient_ProvidePictureBuffers_Params = class {
  constructor() {
    /** @type { !arc.mojom.PictureBufferFormat } */
    this.format;
  }
};
arc.mojom.VideoDecodeClient_PictureReady_Params = class {
  constructor() {
    /** @type { !arc.mojom.Picture } */
    this.picture;
  }
};
arc.mojom.VideoDecodeClient_NotifyEndOfBitstreamBuffer_Params = class {
  constructor() {
    /** @type { !number } */
    this.bitstreamId;
  }
};
arc.mojom.VideoDecodeClient_NotifyError_Params = class {
  constructor() {
    /** @type { !arc.mojom.Result } */
    this.error;
  }
};
