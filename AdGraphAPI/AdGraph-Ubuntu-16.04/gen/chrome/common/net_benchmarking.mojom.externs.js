// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let chrome = {};
/** @const */
chrome.mojom = {};
/** @implements {mojo.InterfacePtr} */
chrome.mojom.NetBenchmarkingPtr = class {

  /**
   * @return {Promise}
   */
   closeCurrentConnections() {}
  /**
   * @return {Promise}
   */
   clearCache() {}
  /**
   * @return {Promise}
   */
   clearHostResolverCache() {}
  /**
   * @return {Promise}
   */
   clearPredictorCache() {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
chrome.mojom.NetBenchmarking;
chrome.mojom.NetBenchmarking_CloseCurrentConnections_Params = class {
  constructor() {
  }
};
chrome.mojom.NetBenchmarking_CloseCurrentConnections_ResponseParams = class {
  constructor() {
  }
};
chrome.mojom.NetBenchmarking_ClearCache_Params = class {
  constructor() {
  }
};
chrome.mojom.NetBenchmarking_ClearCache_ResponseParams = class {
  constructor() {
    /** @type { !number } */
    this.result;
  }
};
chrome.mojom.NetBenchmarking_ClearHostResolverCache_Params = class {
  constructor() {
  }
};
chrome.mojom.NetBenchmarking_ClearHostResolverCache_ResponseParams = class {
  constructor() {
  }
};
chrome.mojom.NetBenchmarking_ClearPredictorCache_Params = class {
  constructor() {
  }
};
chrome.mojom.NetBenchmarking_ClearPredictorCache_ResponseParams = class {
  constructor() {
  }
};
