// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let pdf = {};
/** @const */
pdf.mojom = {};
/** @implements {mojo.InterfacePtr} */
pdf.mojom.PdfListenerPtr = class {

  /**
   * @param { !gfx.mojom.PointF } position
   */
   setCaretPosition(position) {}
  /**
   * @param { !gfx.mojom.PointF } extent
   */
   moveRangeSelectionExtent(extent) {}
  /**
   * @param { !gfx.mojom.PointF } base
   * @param { !gfx.mojom.PointF } extent
   */
   setSelectionBounds(base, extent) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
pdf.mojom.PdfListener;
/** @implements {mojo.InterfacePtr} */
pdf.mojom.PdfServicePtr = class {

  /**
   * @param { !pdf.mojom.PdfListenerPtr } client
   */
   setListener(client) {}
  /**
   * @param { !number } restrictions
   */
   updateContentRestrictions(restrictions) {}
  /**
   */
   hasUnsupportedFeature() {}
  /**
   * @param { !url.mojom.Url } url
   * @param { !blink.mojom.Referrer } referrer
   */
   saveUrlAs(url, referrer) {}
  /**
   * @param { !gfx.mojom.PointF } left
   * @param { !number } leftHeight
   * @param { !gfx.mojom.PointF } right
   * @param { !number } rightHeight
   */
   selectionChanged(left, leftHeight, right, rightHeight) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
pdf.mojom.PdfService;
pdf.mojom.PdfListener_SetCaretPosition_Params = class {
  constructor() {
    /** @type { !gfx.mojom.PointF } */
    this.position;
  }
};
pdf.mojom.PdfListener_MoveRangeSelectionExtent_Params = class {
  constructor() {
    /** @type { !gfx.mojom.PointF } */
    this.extent;
  }
};
pdf.mojom.PdfListener_SetSelectionBounds_Params = class {
  constructor() {
    /** @type { !gfx.mojom.PointF } */
    this.base;
    /** @type { !gfx.mojom.PointF } */
    this.extent;
  }
};
pdf.mojom.PdfService_SetListener_Params = class {
  constructor() {
    /** @type { !pdf.mojom.PdfListenerPtr } */
    this.client;
  }
};
pdf.mojom.PdfService_UpdateContentRestrictions_Params = class {
  constructor() {
    /** @type { !number } */
    this.restrictions;
  }
};
pdf.mojom.PdfService_HasUnsupportedFeature_Params = class {
  constructor() {
  }
};
pdf.mojom.PdfService_SaveUrlAs_Params = class {
  constructor() {
    /** @type { !url.mojom.Url } */
    this.url;
    /** @type { !blink.mojom.Referrer } */
    this.referrer;
  }
};
pdf.mojom.PdfService_SelectionChanged_Params = class {
  constructor() {
    /** @type { !gfx.mojom.PointF } */
    this.left;
    /** @type { !number } */
    this.leftHeight;
    /** @type { !number } */
    this.rightHeight;
    /** @type { !gfx.mojom.PointF } */
    this.right;
  }
};
