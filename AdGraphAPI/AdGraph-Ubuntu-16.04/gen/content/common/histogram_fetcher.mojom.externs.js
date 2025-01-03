// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let content = {};
/** @const */
content.mojom = {};
/** @implements {mojo.InterfacePtr} */
content.mojom.ChildHistogramFetcherFactoryPtr = class {

  /**
   * @param { mojo.MojoHandle } shmHandle
   * @param { !mojo.InterfaceRequest } childHistogramFetcher
   */
   createFetcher(shmHandle, childHistogramFetcher) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
content.mojom.ChildHistogramFetcherFactory;
/** @implements {mojo.InterfacePtr} */
content.mojom.ChildHistogramFetcherPtr = class {

  /**
   * @return {Promise}
   */
   getChildNonPersistentHistogramData() {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
content.mojom.ChildHistogramFetcher;
content.mojom.ChildHistogramFetcherFactory_CreateFetcher_Params = class {
  constructor() {
    /** @type { mojo.MojoHandle } */
    this.shmHandle;
    /** @type { !mojo.InterfaceRequest } */
    this.childHistogramFetcher;
  }
};
content.mojom.ChildHistogramFetcher_GetChildNonPersistentHistogramData_Params = class {
  constructor() {
  }
};
content.mojom.ChildHistogramFetcher_GetChildNonPersistentHistogramData_ResponseParams = class {
  constructor() {
    /** @type { !Array<string> } */
    this.deltas;
  }
};
