// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let fontService = {};
/** @const */
fontService.mojom = {};
/** @implements {mojo.InterfacePtr} */
fontService.mojom.FontServicePtr = class {

  /**
   * @param { !string } familyName
   * @param { !fontService.mojom.TypefaceStyle } style
   * @return {Promise}
   */
   matchFamilyName(familyName, style) {}
  /**
   * @param { !number } idNumber
   * @return {Promise}
   */
   openStream(idNumber) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
fontService.mojom.FontService;
fontService.mojom.TypefaceStyle = class {
  constructor() {
    /** @type { !number } */
    this.weight;
    /** @type { !number } */
    this.width;
    /** @type { !fontService.mojom.TypefaceSlant } */
    this.slant;
  }
};
fontService.mojom.FontIdentity = class {
  constructor() {
    /** @type { !number } */
    this.id;
    /** @type { !number } */
    this.ttcIndex;
    /** @type { !string } */
    this.strRepresentation;
  }
};
fontService.mojom.FontService_MatchFamilyName_Params = class {
  constructor() {
    /** @type { !string } */
    this.familyName;
    /** @type { !fontService.mojom.TypefaceStyle } */
    this.style;
  }
};
fontService.mojom.FontService_MatchFamilyName_ResponseParams = class {
  constructor() {
    /** @type { fontService.mojom.FontIdentity } */
    this.identity;
    /** @type { !string } */
    this.familyName;
    /** @type { !fontService.mojom.TypefaceStyle } */
    this.style;
  }
};
fontService.mojom.FontService_OpenStream_Params = class {
  constructor() {
    /** @type { !number } */
    this.idNumber;
  }
};
fontService.mojom.FontService_OpenStream_ResponseParams = class {
  constructor() {
    /** @type { mojoBase.mojom.File } */
    this.fontHandle;
  }
};
