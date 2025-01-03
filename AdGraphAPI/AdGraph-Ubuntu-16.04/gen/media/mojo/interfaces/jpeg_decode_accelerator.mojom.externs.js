// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let media = {};
/** @const */
media.mojom = {};
/** @implements {mojo.InterfacePtr} */
media.mojom.JpegDecodeAcceleratorPtr = class {

  /**
   * @return {Promise}
   */
   initialize() {}
  /**
   * @param { !media.mojom.BitstreamBuffer } inputBuffer
   * @param { !gfx.mojom.Size } codedSize
   * @param { !mojo.MojoHandle } outputHandle
   * @param { !number } outputBufferSize
   * @return {Promise}
   */
   decode(inputBuffer, codedSize, outputHandle, outputBufferSize) {}
  /**
   * @param { !number } bufferId
   * @param { !mojo.MojoHandle } inputFd
   * @param { !number } inputBufferSize
   * @param { !number } codedSizeWidth
   * @param { !number } codedSizeHeight
   * @param { !mojo.MojoHandle } outputFd
   * @param { !number } outputBufferSize
   * @return {Promise}
   */
   decodeWithFD(bufferId, inputFd, inputBufferSize, codedSizeWidth, codedSizeHeight, outputFd, outputBufferSize) {}
  /**
   */
   uninitialize() {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
media.mojom.JpegDecodeAccelerator;
media.mojom.BitstreamBuffer = class {
  constructor() {
    /** @type { !number } */
    this.id;
    /** @type { !mojo.MojoHandle } */
    this.memoryHandle;
    /** @type { !number } */
    this.size;
    /** @type { !number } */
    this.offset;
    /** @type { !mojoBase.mojom.TimeDelta } */
    this.timestamp;
    /** @type { !string } */
    this.keyId;
    /** @type { !string } */
    this.iv;
    /** @type { !Array<media.mojom.SubsampleEntry> } */
    this.subsamples;
  }
};
media.mojom.JpegDecodeAccelerator_Initialize_Params = class {
  constructor() {
  }
};
media.mojom.JpegDecodeAccelerator_Initialize_ResponseParams = class {
  constructor() {
    /** @type { !boolean } */
    this.success;
  }
};
media.mojom.JpegDecodeAccelerator_Decode_Params = class {
  constructor() {
    /** @type { !media.mojom.BitstreamBuffer } */
    this.inputBuffer;
    /** @type { !gfx.mojom.Size } */
    this.codedSize;
    /** @type { !mojo.MojoHandle } */
    this.outputHandle;
    /** @type { !number } */
    this.outputBufferSize;
  }
};
media.mojom.JpegDecodeAccelerator_Decode_ResponseParams = class {
  constructor() {
    /** @type { !number } */
    this.bitstreamBufferId;
    /** @type { !media.mojom.DecodeError } */
    this.error;
  }
};
media.mojom.JpegDecodeAccelerator_DecodeWithFD_Params = class {
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
    this.outputFd;
    /** @type { !number } */
    this.outputBufferSize;
  }
};
media.mojom.JpegDecodeAccelerator_DecodeWithFD_ResponseParams = class {
  constructor() {
    /** @type { !number } */
    this.bufferId;
    /** @type { !media.mojom.DecodeError } */
    this.error;
  }
};
media.mojom.JpegDecodeAccelerator_Uninitialize_Params = class {
  constructor() {
  }
};
