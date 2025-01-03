// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let webCache = {};
/** @const */
webCache.mojom = {};
/** @implements {mojo.InterfacePtr} */
webCache.mojom.WebCachePtr = class {

  /**
   * @param { !number } capacity
   */
   setCacheCapacity(capacity) {}
  /**
   * @param { !boolean } onNavigation
   */
   clearCache(onNavigation) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
webCache.mojom.WebCache;
webCache.mojom.WebCache_SetCacheCapacity_Params = class {
  constructor() {
    /** @type { !number } */
    this.capacity;
  }
};
webCache.mojom.WebCache_ClearCache_Params = class {
  constructor() {
    /** @type { !boolean } */
    this.onNavigation;
  }
};
