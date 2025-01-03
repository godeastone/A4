// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let blink = {};
/** @const */
blink.mojom = {};
/** @implements {mojo.InterfacePtr} */
blink.mojom.QuotaDispatcherHostPtr = class {

  /**
   * @param { !url.mojom.Origin } origin
   * @param { !blink.mojom.StorageType } storageType
   * @return {Promise}
   */
   queryStorageUsageAndQuota(origin, storageType) {}
  /**
   * @param { !url.mojom.Origin } origin
   * @param { !blink.mojom.StorageType } storageType
   * @param { !number } requestedSize
   * @return {Promise}
   */
   requestStorageQuota(origin, storageType, requestedSize) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
blink.mojom.QuotaDispatcherHost;
blink.mojom.QuotaDispatcherHost_QueryStorageUsageAndQuota_Params = class {
  constructor() {
    /** @type { !url.mojom.Origin } */
    this.origin;
    /** @type { !blink.mojom.StorageType } */
    this.storageType;
  }
};
blink.mojom.QuotaDispatcherHost_QueryStorageUsageAndQuota_ResponseParams = class {
  constructor() {
    /** @type { !blink.mojom.QuotaStatusCode } */
    this.error;
    /** @type { !number } */
    this.currentUsage;
    /** @type { !number } */
    this.currentQuota;
  }
};
blink.mojom.QuotaDispatcherHost_RequestStorageQuota_Params = class {
  constructor() {
    /** @type { !url.mojom.Origin } */
    this.origin;
    /** @type { !blink.mojom.StorageType } */
    this.storageType;
    /** @type { !number } */
    this.requestedSize;
  }
};
blink.mojom.QuotaDispatcherHost_RequestStorageQuota_ResponseParams = class {
  constructor() {
    /** @type { !blink.mojom.QuotaStatusCode } */
    this.error;
    /** @type { !number } */
    this.currentUsage;
    /** @type { !number } */
    this.grantedQuota;
  }
};
