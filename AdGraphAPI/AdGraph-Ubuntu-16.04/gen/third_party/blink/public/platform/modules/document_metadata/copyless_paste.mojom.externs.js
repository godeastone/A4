// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let blink = {};
/** @const */
blink.mojom = {};
/** @const */
blink.mojom.documentMetadata = {};
/** @implements {mojo.InterfacePtr} */
blink.mojom.documentMetadata.CopylessPastePtr = class {

  /**
   * @return {Promise}
   */
   getEntities() {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
blink.mojom.documentMetadata.CopylessPaste;
blink.mojom.documentMetadata.Property = class {
  constructor() {
    /** @type { !string } */
    this.name;
    /** @type { !Object } */
    this.values;
  }
};
blink.mojom.documentMetadata.Entity = class {
  constructor() {
    /** @type { !string } */
    this.type;
    /** @type { !Array<blink.mojom.documentMetadata.Property> } */
    this.properties;
  }
};
blink.mojom.documentMetadata.WebPage = class {
  constructor() {
    /** @type { !url.mojom.Url } */
    this.url;
    /** @type { !string } */
    this.title;
    /** @type { !Array<blink.mojom.documentMetadata.Entity> } */
    this.entities;
  }
};
blink.mojom.documentMetadata.CopylessPaste_GetEntities_Params = class {
  constructor() {
  }
};
blink.mojom.documentMetadata.CopylessPaste_GetEntities_ResponseParams = class {
  constructor() {
    /** @type { blink.mojom.documentMetadata.WebPage } */
    this.page;
  }
};
