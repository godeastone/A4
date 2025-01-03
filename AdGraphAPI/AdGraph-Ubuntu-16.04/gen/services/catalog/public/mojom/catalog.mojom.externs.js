// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let catalog = {};
/** @const */
catalog.mojom = {};
/** @implements {mojo.InterfacePtr} */
catalog.mojom.CatalogPtr = class {

  /**
   * @param { Array<string> } names
   * @return {Promise}
   */
   getEntries(names) {}
  /**
   * @param { !string } capability
   * @return {Promise}
   */
   getEntriesProvidingCapability(capability) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
catalog.mojom.Catalog;
catalog.mojom.Entry = class {
  constructor() {
    /** @type { !string } */
    this.name;
    /** @type { !string } */
    this.displayName;
  }
};
catalog.mojom.Catalog_GetEntries_Params = class {
  constructor() {
    /** @type { Array<string> } */
    this.names;
  }
};
catalog.mojom.Catalog_GetEntries_ResponseParams = class {
  constructor() {
    /** @type { !Array<catalog.mojom.Entry> } */
    this.entries;
  }
};
catalog.mojom.Catalog_GetEntriesProvidingCapability_Params = class {
  constructor() {
    /** @type { !string } */
    this.capability;
  }
};
catalog.mojom.Catalog_GetEntriesProvidingCapability_ResponseParams = class {
  constructor() {
    /** @type { !Array<catalog.mojom.Entry> } */
    this.entries;
  }
};
