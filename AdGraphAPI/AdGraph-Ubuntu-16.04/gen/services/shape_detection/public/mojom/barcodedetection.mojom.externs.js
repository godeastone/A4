// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let shapeDetection = {};
/** @const */
shapeDetection.mojom = {};
/** @implements {mojo.InterfacePtr} */
shapeDetection.mojom.BarcodeDetectionPtr = class {

  /**
   * @param { !skia.mojom.Bitmap } bitmapData
   * @return {Promise}
   */
   detect(bitmapData) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
shapeDetection.mojom.BarcodeDetection;
shapeDetection.mojom.BarcodeDetectionResult = class {
  constructor() {
    /** @type { !string } */
    this.rawValue;
    /** @type { !gfx.mojom.RectF } */
    this.boundingBox;
    /** @type { !Array<gfx.mojom.PointF> } */
    this.cornerPoints;
  }
};
shapeDetection.mojom.BarcodeDetection_Detect_Params = class {
  constructor() {
    /** @type { !skia.mojom.Bitmap } */
    this.bitmapData;
  }
};
shapeDetection.mojom.BarcodeDetection_Detect_ResponseParams = class {
  constructor() {
    /** @type { !Array<shapeDetection.mojom.BarcodeDetectionResult> } */
    this.results;
  }
};
