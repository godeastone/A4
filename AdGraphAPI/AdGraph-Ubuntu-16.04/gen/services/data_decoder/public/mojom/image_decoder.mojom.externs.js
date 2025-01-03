// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let dataDecoder = {};
/** @const */
dataDecoder.mojom = {};
/** @implements {mojo.InterfacePtr} */
dataDecoder.mojom.ImageDecoderPtr = class {

  /**
   * @param { !Array<number> } encodedData
   * @param { !dataDecoder.mojom.ImageCodec } codec
   * @param { !boolean } shrinkToFit
   * @param { !number } maxSizeInBytes
   * @param { !gfx.mojom.Size } desiredImageFrameSize
   * @return {Promise}
   */
   decodeImage(encodedData, codec, shrinkToFit, maxSizeInBytes, desiredImageFrameSize) {}
  /**
   * @param { !Array<number> } encodedData
   * @param { !boolean } shrinkToFit
   * @param { !number } maxSizeInBytes
   * @return {Promise}
   */
   decodeAnimation(encodedData, shrinkToFit, maxSizeInBytes) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
dataDecoder.mojom.ImageDecoder;
dataDecoder.mojom.AnimationFrame = class {
  constructor() {
    /** @type { !skia.mojom.InlineBitmap } */
    this.bitmap;
    /** @type { !mojoBase.mojom.TimeDelta } */
    this.duration;
  }
};
dataDecoder.mojom.ImageDecoder_DecodeImage_Params = class {
  constructor() {
    /** @type { !Array<number> } */
    this.encodedData;
    /** @type { !dataDecoder.mojom.ImageCodec } */
    this.codec;
    /** @type { !boolean } */
    this.shrinkToFit;
    /** @type { !number } */
    this.maxSizeInBytes;
    /** @type { !gfx.mojom.Size } */
    this.desiredImageFrameSize;
  }
};
dataDecoder.mojom.ImageDecoder_DecodeImage_ResponseParams = class {
  constructor() {
    /** @type { skia.mojom.Bitmap } */
    this.decodedImage;
  }
};
dataDecoder.mojom.ImageDecoder_DecodeAnimation_Params = class {
  constructor() {
    /** @type { !Array<number> } */
    this.encodedData;
    /** @type { !boolean } */
    this.shrinkToFit;
    /** @type { !number } */
    this.maxSizeInBytes;
  }
};
dataDecoder.mojom.ImageDecoder_DecodeAnimation_ResponseParams = class {
  constructor() {
    /** @type { !Array<dataDecoder.mojom.AnimationFrame> } */
    this.decodedImage;
  }
};
