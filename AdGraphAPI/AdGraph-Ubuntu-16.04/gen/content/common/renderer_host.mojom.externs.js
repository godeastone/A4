// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let content = {};
/** @const */
content.mojom = {};
/** @implements {mojo.InterfacePtr} */
content.mojom.RendererHostPtr = class {

  /**
   * @param { !mojo.InterfaceRequest } loader
   */
   getBlobURLLoaderFactory(loader) {}
  /**
   * @param { !string } name
   * @return {Promise}
   */
   getBrowserHistogram(name) {}
  /**
   * @param { !boolean } enabled
   */
   suddenTerminationChanged(enabled) {}
  /**
   */
   shutdownRequest() {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
content.mojom.RendererHost;
content.mojom.RendererHost_GetBlobURLLoaderFactory_Params = class {
  constructor() {
    /** @type { !mojo.InterfaceRequest } */
    this.loader;
  }
};
content.mojom.RendererHost_GetBrowserHistogram_Params = class {
  constructor() {
    /** @type { !string } */
    this.name;
  }
};
content.mojom.RendererHost_GetBrowserHistogram_ResponseParams = class {
  constructor() {
    /** @type { !string } */
    this.histogramJson;
  }
};
content.mojom.RendererHost_SuddenTerminationChanged_Params = class {
  constructor() {
    /** @type { !boolean } */
    this.enabled;
  }
};
content.mojom.RendererHost_ShutdownRequest_Params = class {
  constructor() {
  }
};
