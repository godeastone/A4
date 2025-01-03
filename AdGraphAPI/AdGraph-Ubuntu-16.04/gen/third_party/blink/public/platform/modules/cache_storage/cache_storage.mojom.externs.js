// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let blink = {};
/** @const */
blink.mojom = {};
/** @implements {mojo.InterfacePtr} */
blink.mojom.CacheStorageCachePtr = class {

  /**
   * @param { !blink.mojom.FetchAPIRequest } request
   * @param { !blink.mojom.QueryParams } queryParams
   * @return {Promise}
   */
   match(request, queryParams) {}
  /**
   * @param { blink.mojom.FetchAPIRequest } request
   * @param { !blink.mojom.QueryParams } queryParams
   * @return {Promise}
   */
   matchAll(request, queryParams) {}
  /**
   * @param { blink.mojom.FetchAPIRequest } request
   * @param { !blink.mojom.QueryParams } queryParams
   * @return {Promise}
   */
   keys(request, queryParams) {}
  /**
   * @param { !Array<blink.mojom.BatchOperation> } batchOperations
   * @return {Promise}
   */
   batch(batchOperations) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
blink.mojom.CacheStorageCache;
/** @implements {mojo.InterfacePtr} */
blink.mojom.CacheStoragePtr = class {

  /**
   * @param { !mojoBase.mojom.String16 } cacheName
   * @return {Promise}
   */
   has(cacheName) {}
  /**
   * @param { !mojoBase.mojom.String16 } cacheName
   * @return {Promise}
   */
   delete(cacheName) {}
  /**
   * @return {Promise}
   */
   keys() {}
  /**
   * @param { !blink.mojom.FetchAPIRequest } request
   * @param { !blink.mojom.QueryParams } matchParams
   * @return {Promise}
   */
   match(request, matchParams) {}
  /**
   * @param { !mojoBase.mojom.String16 } cacheName
   * @return {Promise}
   */
   open(cacheName) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
blink.mojom.CacheStorage;
blink.mojom.QueryParams = class {
  constructor() {
    /** @type { !boolean } */
    this.ignoreSearch;
    /** @type { !boolean } */
    this.ignoreMethod;
    /** @type { !boolean } */
    this.ignoreVary;
    /** @type { mojoBase.mojom.String16 } */
    this.cacheName;
  }
};
blink.mojom.BatchOperation = class {
  constructor() {
    /** @type { !blink.mojom.OperationType } */
    this.operationType;
    /** @type { !blink.mojom.FetchAPIRequest } */
    this.request;
    /** @type { blink.mojom.FetchAPIResponse } */
    this.response;
    /** @type { blink.mojom.QueryParams } */
    this.matchParams;
  }
};
blink.mojom.CacheStorageCache_Match_Params = class {
  constructor() {
    /** @type { !blink.mojom.FetchAPIRequest } */
    this.request;
    /** @type { !blink.mojom.QueryParams } */
    this.queryParams;
  }
};
blink.mojom.CacheStorageCache_Match_ResponseParams = class {
  constructor() {
    /** @type { !Object } */
    this.result;
  }
};
blink.mojom.CacheStorageCache_MatchAll_Params = class {
  constructor() {
    /** @type { blink.mojom.FetchAPIRequest } */
    this.request;
    /** @type { !blink.mojom.QueryParams } */
    this.queryParams;
  }
};
blink.mojom.CacheStorageCache_MatchAll_ResponseParams = class {
  constructor() {
    /** @type { !Object } */
    this.result;
  }
};
blink.mojom.CacheStorageCache_Keys_Params = class {
  constructor() {
    /** @type { blink.mojom.FetchAPIRequest } */
    this.request;
    /** @type { !blink.mojom.QueryParams } */
    this.queryParams;
  }
};
blink.mojom.CacheStorageCache_Keys_ResponseParams = class {
  constructor() {
    /** @type { !Object } */
    this.result;
  }
};
blink.mojom.CacheStorageCache_Batch_Params = class {
  constructor() {
    /** @type { !Array<blink.mojom.BatchOperation> } */
    this.batchOperations;
  }
};
blink.mojom.CacheStorageCache_Batch_ResponseParams = class {
  constructor() {
    /** @type { !blink.mojom.CacheStorageError } */
    this.result;
  }
};
blink.mojom.CacheStorage_Has_Params = class {
  constructor() {
    /** @type { !mojoBase.mojom.String16 } */
    this.cacheName;
  }
};
blink.mojom.CacheStorage_Has_ResponseParams = class {
  constructor() {
    /** @type { !blink.mojom.CacheStorageError } */
    this.result;
  }
};
blink.mojom.CacheStorage_Delete_Params = class {
  constructor() {
    /** @type { !mojoBase.mojom.String16 } */
    this.cacheName;
  }
};
blink.mojom.CacheStorage_Delete_ResponseParams = class {
  constructor() {
    /** @type { !blink.mojom.CacheStorageError } */
    this.result;
  }
};
blink.mojom.CacheStorage_Keys_Params = class {
  constructor() {
  }
};
blink.mojom.CacheStorage_Keys_ResponseParams = class {
  constructor() {
    /** @type { !Array<mojoBase.mojom.String16> } */
    this.keys;
  }
};
blink.mojom.CacheStorage_Match_Params = class {
  constructor() {
    /** @type { !blink.mojom.FetchAPIRequest } */
    this.request;
    /** @type { !blink.mojom.QueryParams } */
    this.matchParams;
  }
};
blink.mojom.CacheStorage_Match_ResponseParams = class {
  constructor() {
    /** @type { !Object } */
    this.result;
  }
};
blink.mojom.CacheStorage_Open_Params = class {
  constructor() {
    /** @type { !mojoBase.mojom.String16 } */
    this.cacheName;
  }
};
blink.mojom.CacheStorage_Open_ResponseParams = class {
  constructor() {
    /** @type { !Object } */
    this.result;
  }
};
