// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let shapeDetection = {};
/** @const */
shapeDetection.mojom = {};
/** @implements {mojo.InterfacePtr} */
shapeDetection.mojom.FaceDetectionPtr = class {

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
shapeDetection.mojom.FaceDetection;
shapeDetection.mojom.Landmark = class {
  constructor() {
    /** @type { !Array<gfx.mojom.PointF> } */
    this.locations;
    /** @type { !shapeDetection.mojom.LandmarkType } */
    this.type;
  }
};
shapeDetection.mojom.FaceDetectionResult = class {
  constructor() {
    /** @type { !gfx.mojom.RectF } */
    this.boundingBox;
    /** @type { !Array<shapeDetection.mojom.Landmark> } */
    this.landmarks;
  }
};
shapeDetection.mojom.FaceDetectorOptions = class {
  constructor() {
    /** @type { !number } */
    this.maxDetectedFaces;
    /** @type { !boolean } */
    this.fastMode;
  }
};
shapeDetection.mojom.FaceDetection_Detect_Params = class {
  constructor() {
    /** @type { !skia.mojom.Bitmap } */
    this.bitmapData;
  }
};
shapeDetection.mojom.FaceDetection_Detect_ResponseParams = class {
  constructor() {
    /** @type { !Array<shapeDetection.mojom.FaceDetectionResult> } */
    this.results;
  }
};
