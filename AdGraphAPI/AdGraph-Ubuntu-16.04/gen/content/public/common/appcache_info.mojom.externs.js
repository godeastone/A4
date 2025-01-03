// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let content = {};
/** @const */
content.mojom = {};
content.mojom.AppCacheInfo = class {
  constructor() {
    /** @type { !url.mojom.Url } */
    this.manifestUrl;
    /** @type { !mojoBase.mojom.Time } */
    this.creationTime;
    /** @type { !mojoBase.mojom.Time } */
    this.lastUpdateTime;
    /** @type { !mojoBase.mojom.Time } */
    this.lastAccessTime;
    /** @type { !number } */
    this.cacheId;
    /** @type { !number } */
    this.groupId;
    /** @type { !content.mojom.AppCacheStatus } */
    this.status;
    /** @type { !boolean } */
    this.isComplete;
    /** @type { !number } */
    this.size;
  }
};
