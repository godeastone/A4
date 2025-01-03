// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let shapeDetection = {};
/** @const */
shapeDetection.mojom = {};
/** @implements {mojo.InterfacePtr} */
shapeDetection.mojom.FaceDetectionProviderPtr = class {

  /**
   * @param { !mojo.InterfaceRequest } request
   * @param { !shapeDetection.mojom.FaceDetectorOptions } options
   */
   createFaceDetection(request, options) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
shapeDetection.mojom.FaceDetectionProvider;
shapeDetection.mojom.FaceDetectionProvider_CreateFaceDetection_Params = class {
  constructor() {
    /** @type { !mojo.InterfaceRequest } */
    this.request;
    /** @type { !shapeDetection.mojom.FaceDetectorOptions } */
    this.options;
  }
};
