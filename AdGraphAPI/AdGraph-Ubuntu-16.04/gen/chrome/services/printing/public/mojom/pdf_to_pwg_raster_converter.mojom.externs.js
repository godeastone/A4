// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let printing = {};
/** @const */
printing.mojom = {};
/** @implements {mojo.InterfacePtr} */
printing.mojom.PdfToPwgRasterConverterPtr = class {

  /**
   * @param { !mojoBase.mojom.ReadOnlySharedMemoryRegion } pdfRegion
   * @param { !printing.mojom.PdfRenderSettings } pdfSettings
   * @param { !printing.mojom.PwgRasterSettings } pwgRasterSettings
   * @return {Promise}
   */
   convert(pdfRegion, pdfSettings, pwgRasterSettings) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
printing.mojom.PdfToPwgRasterConverter;
printing.mojom.PwgRasterSettings = class {
  constructor() {
    /** @type { !printing.mojom.TransformType } */
    this.oddPageTransform;
    /** @type { !boolean } */
    this.rotateAllPages;
    /** @type { !boolean } */
    this.reversePageOrder;
    /** @type { !boolean } */
    this.useColor;
  }
};
printing.mojom.PdfToPwgRasterConverter_Convert_Params = class {
  constructor() {
    /** @type { !mojoBase.mojom.ReadOnlySharedMemoryRegion } */
    this.pdfRegion;
    /** @type { !printing.mojom.PdfRenderSettings } */
    this.pdfSettings;
    /** @type { !printing.mojom.PwgRasterSettings } */
    this.pwgRasterSettings;
  }
};
printing.mojom.PdfToPwgRasterConverter_Convert_ResponseParams = class {
  constructor() {
    /** @type { mojoBase.mojom.ReadOnlySharedMemoryRegion } */
    this.pwgRasterRegion;
    /** @type { !number } */
    this.pageCount;
  }
};
