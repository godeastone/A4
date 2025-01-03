// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let printing = {};
/** @const */
printing.mojom = {};
/** @implements {mojo.InterfacePtr} */
printing.mojom.PdfCompositorPtr = class {

  /**
   * @param { !number } frameGuid
   */
   notifyUnavailableSubframe(frameGuid) {}
  /**
   * @param { !number } frameGuid
   * @param { !mojo.MojoHandle } serializedContent
   * @param { !Map<number, number> } subframeContentInfo
   */
   addSubframeContent(frameGuid, serializedContent, subframeContentInfo) {}
  /**
   * @param { !number } frameGuid
   * @param { !number } pageNum
   * @param { !mojo.MojoHandle } skHandle
   * @param { !Map<number, number> } subframeContentInfo
   * @return {Promise}
   */
   compositePageToPdf(frameGuid, pageNum, skHandle, subframeContentInfo) {}
  /**
   * @param { !number } frameGuid
   * @param { !mojo.MojoHandle } skHandle
   * @param { !Map<number, number> } subframeContentInfo
   * @return {Promise}
   */
   compositeDocumentToPdf(frameGuid, skHandle, subframeContentInfo) {}
  /**
   * @param { !url.mojom.Url } url
   */
   setWebContentsURL(url) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
printing.mojom.PdfCompositor;
printing.mojom.PdfCompositor_NotifyUnavailableSubframe_Params = class {
  constructor() {
    /** @type { !number } */
    this.frameGuid;
  }
};
printing.mojom.PdfCompositor_AddSubframeContent_Params = class {
  constructor() {
    /** @type { !number } */
    this.frameGuid;
    /** @type { !mojo.MojoHandle } */
    this.serializedContent;
    /** @type { !Map<number, number> } */
    this.subframeContentInfo;
  }
};
printing.mojom.PdfCompositor_CompositePageToPdf_Params = class {
  constructor() {
    /** @type { !number } */
    this.frameGuid;
    /** @type { !number } */
    this.pageNum;
    /** @type { !mojo.MojoHandle } */
    this.skHandle;
    /** @type { !Map<number, number> } */
    this.subframeContentInfo;
  }
};
printing.mojom.PdfCompositor_CompositePageToPdf_ResponseParams = class {
  constructor() {
    /** @type { !printing.mojom.Status } */
    this.status;
    /** @type { mojoBase.mojom.ReadOnlySharedMemoryRegion } */
    this.pdfRegion;
  }
};
printing.mojom.PdfCompositor_CompositeDocumentToPdf_Params = class {
  constructor() {
    /** @type { !number } */
    this.frameGuid;
    /** @type { !mojo.MojoHandle } */
    this.skHandle;
    /** @type { !Map<number, number> } */
    this.subframeContentInfo;
  }
};
printing.mojom.PdfCompositor_CompositeDocumentToPdf_ResponseParams = class {
  constructor() {
    /** @type { !printing.mojom.Status } */
    this.status;
    /** @type { mojoBase.mojom.ReadOnlySharedMemoryRegion } */
    this.pdfRegion;
  }
};
printing.mojom.PdfCompositor_SetWebContentsURL_Params = class {
  constructor() {
    /** @type { !url.mojom.Url } */
    this.url;
  }
};
