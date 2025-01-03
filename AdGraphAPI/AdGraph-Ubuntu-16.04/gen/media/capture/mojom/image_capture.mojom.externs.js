// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let media = {};
/** @const */
media.mojom = {};
/** @implements {mojo.InterfacePtr} */
media.mojom.ImageCapturePtr = class {

  /**
   * @param { !string } sourceId
   * @return {Promise}
   */
   getPhotoState(sourceId) {}
  /**
   * @param { !string } sourceId
   * @param { !media.mojom.PhotoSettings } settings
   * @return {Promise}
   */
   setOptions(sourceId, settings) {}
  /**
   * @param { !string } sourceId
   * @return {Promise}
   */
   takePhoto(sourceId) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
media.mojom.ImageCapture;
media.mojom.Range = class {
  constructor() {
    /** @type { !number } */
    this.max;
    /** @type { !number } */
    this.min;
    /** @type { !number } */
    this.current;
    /** @type { !number } */
    this.step;
  }
};
media.mojom.PhotoState = class {
  constructor() {
    /** @type { !Array<media.mojom.MeteringMode> } */
    this.supportedWhiteBalanceModes;
    /** @type { !media.mojom.MeteringMode } */
    this.currentWhiteBalanceMode;
    /** @type { !media.mojom.MeteringMode } */
    this.currentExposureMode;
    /** @type { !Array<media.mojom.MeteringMode> } */
    this.supportedExposureModes;
    /** @type { !Array<media.mojom.MeteringMode> } */
    this.supportedFocusModes;
    /** @type { !media.mojom.MeteringMode } */
    this.currentFocusMode;
    /** @type { !boolean } */
    this.supportsTorch;
    /** @type { !boolean } */
    this.torch;
    /** @type { !Array<media.mojom.Point2D> } */
    this.pointsOfInterest;
    /** @type { !media.mojom.Range } */
    this.exposureCompensation;
    /** @type { !media.mojom.Range } */
    this.colorTemperature;
    /** @type { !media.mojom.Range } */
    this.iso;
    /** @type { !media.mojom.Range } */
    this.brightness;
    /** @type { !media.mojom.Range } */
    this.contrast;
    /** @type { !media.mojom.Range } */
    this.saturation;
    /** @type { !media.mojom.Range } */
    this.sharpness;
    /** @type { !media.mojom.Range } */
    this.zoom;
    /** @type { !media.mojom.RedEyeReduction } */
    this.redEyeReduction;
    /** @type { !media.mojom.Range } */
    this.height;
    /** @type { !media.mojom.Range } */
    this.width;
    /** @type { !Array<media.mojom.FillLightMode> } */
    this.fillLightMode;
  }
};
media.mojom.Point2D = class {
  constructor() {
    /** @type { !number } */
    this.x;
    /** @type { !number } */
    this.y;
  }
};
media.mojom.PhotoSettings = class {
  constructor() {
    /** @type { !boolean } */
    this.hasWhiteBalanceMode;
    /** @type { !boolean } */
    this.hasExposureMode;
    /** @type { !boolean } */
    this.hasFocusMode;
    /** @type { !boolean } */
    this.hasExposureCompensation;
    /** @type { !boolean } */
    this.hasColorTemperature;
    /** @type { !boolean } */
    this.hasIso;
    /** @type { !boolean } */
    this.hasBrightness;
    /** @type { !boolean } */
    this.hasContrast;
    /** @type { !boolean } */
    this.hasSaturation;
    /** @type { !boolean } */
    this.hasSharpness;
    /** @type { !boolean } */
    this.hasZoom;
    /** @type { !boolean } */
    this.hasTorch;
    /** @type { !boolean } */
    this.torch;
    /** @type { !boolean } */
    this.hasFillLightMode;
    /** @type { !boolean } */
    this.hasWidth;
    /** @type { !boolean } */
    this.hasHeight;
    /** @type { !boolean } */
    this.hasRedEyeReduction;
    /** @type { !boolean } */
    this.redEyeReduction;
    /** @type { !media.mojom.MeteringMode } */
    this.whiteBalanceMode;
    /** @type { !media.mojom.MeteringMode } */
    this.exposureMode;
    /** @type { !media.mojom.MeteringMode } */
    this.focusMode;
    /** @type { !Array<media.mojom.Point2D> } */
    this.pointsOfInterest;
    /** @type { !number } */
    this.exposureCompensation;
    /** @type { !number } */
    this.colorTemperature;
    /** @type { !number } */
    this.iso;
    /** @type { !number } */
    this.brightness;
    /** @type { !number } */
    this.contrast;
    /** @type { !number } */
    this.saturation;
    /** @type { !number } */
    this.sharpness;
    /** @type { !number } */
    this.zoom;
    /** @type { !media.mojom.FillLightMode } */
    this.fillLightMode;
    /** @type { !number } */
    this.width;
    /** @type { !number } */
    this.height;
  }
};
media.mojom.Blob = class {
  constructor() {
    /** @type { !string } */
    this.mimeType;
    /** @type { !Array<number> } */
    this.data;
  }
};
media.mojom.ImageCapture_GetPhotoState_Params = class {
  constructor() {
    /** @type { !string } */
    this.sourceId;
  }
};
media.mojom.ImageCapture_GetPhotoState_ResponseParams = class {
  constructor() {
    /** @type { !media.mojom.PhotoState } */
    this.state;
  }
};
media.mojom.ImageCapture_SetOptions_Params = class {
  constructor() {
    /** @type { !string } */
    this.sourceId;
    /** @type { !media.mojom.PhotoSettings } */
    this.settings;
  }
};
media.mojom.ImageCapture_SetOptions_ResponseParams = class {
  constructor() {
    /** @type { !boolean } */
    this.success;
  }
};
media.mojom.ImageCapture_TakePhoto_Params = class {
  constructor() {
    /** @type { !string } */
    this.sourceId;
  }
};
media.mojom.ImageCapture_TakePhoto_ResponseParams = class {
  constructor() {
    /** @type { !media.mojom.Blob } */
    this.blob;
  }
};
