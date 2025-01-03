// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let media = {};
/** @const */
media.mojom = {};
/** @implements {mojo.InterfacePtr} */
media.mojom.JpegEncodeAcceleratorPtr = class {

  /**
   * @return {Promise}
   */
   initialize() {}
  /**
   * @param { !number } bufferId
   * @param { !mojo.MojoHandle } inputFd
   * @param { !number } inputBufferSize
   * @param { !number } codedSizeWidth
   * @param { !number } codedSizeHeight
   * @param { !mojo.MojoHandle } exifFd
   * @param { !number } exifBufferSize
   * @param { !mojo.MojoHandle } outputFd
   * @param { !number } outputBufferSize
   * @return {Promise}
   */
   encodeWithFD(bufferId, inputFd, inputBufferSize, codedSizeWidth, codedSizeHeight, exifFd, exifBufferSize, outputFd, outputBufferSize) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
media.mojom.JpegEncodeAccelerator;
media.mojom.JpegEncodeAccelerator_Initialize_Params = class {
  constructor() {
  }
};
media.mojom.JpegEncodeAccelerator_Initialize_ResponseParams = class {
  constructor() {
    /** @type { !boolean } */
    this.success;
  }
};
media.mojom.JpegEncodeAccelerator_EncodeWithFD_Params = class {
  constructor() {
    /** @type { !number } */
    this.bufferId;
    /** @type { !mojo.MojoHandle } */
    this.inputFd;
    /** @type { !number } */
    this.inputBufferSize;
    /** @type { !number } */
    this.codedSizeWidth;
    /** @type { !number } */
    this.codedSizeHeight;
    /** @type { !mojo.MojoHandle } */
    this.exifFd;
    /** @type { !number } */
    this.exifBufferSize;
    /** @type { !mojo.MojoHandle } */
    this.outputFd;
    /** @type { !number } */
    this.outputBufferSize;
  }
};
media.mojom.JpegEncodeAccelerator_EncodeWithFD_ResponseParams = class {
  constructor() {
    /** @type { !number } */
    this.bufferId;
    /** @type { !number } */
    this.encodedBufferSize;
    /** @type { !media.mojom.EncodeStatus } */
    this.status;
  }
};
