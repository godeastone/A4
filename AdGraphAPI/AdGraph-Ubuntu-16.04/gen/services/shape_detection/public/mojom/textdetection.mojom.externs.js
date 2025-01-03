// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let shapeDetection = {};
/** @const */
shapeDetection.mojom = {};
/** @implements {mojo.InterfacePtr} */
shapeDetection.mojom.TextDetectionPtr = class {

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
shapeDetection.mojom.TextDetection;
shapeDetection.mojom.TextDetectionResult = class {
  constructor() {
    /** @type { !string } */
    this.rawValue;
    /** @type { !gfx.mojom.RectF } */
    this.boundingBox;
    /** @type { !Array<gfx.mojom.PointF> } */
    this.cornerPoints;
  }
};
shapeDetection.mojom.TextDetection_Detect_Params = class {
  constructor() {
    /** @type { !skia.mojom.Bitmap } */
    this.bitmapData;
  }
};
shapeDetection.mojom.TextDetection_Detect_ResponseParams = class {
  constructor() {
    /** @type { !Array<shapeDetection.mojom.TextDetectionResult> } */
    this.results;
  }
};
