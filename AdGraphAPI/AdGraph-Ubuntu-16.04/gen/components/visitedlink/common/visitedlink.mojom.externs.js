// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let visitedlink = {};
/** @const */
visitedlink.mojom = {};
/** @implements {mojo.InterfacePtr} */
visitedlink.mojom.VisitedLinkNotificationSinkPtr = class {

  /**
   * @param { !mojoBase.mojom.ReadOnlySharedMemoryRegion } tableRegion
   */
   updateVisitedLinks(tableRegion) {}
  /**
   * @param { !Array<number> } linkHashes
   */
   addVisitedLinks(linkHashes) {}
  /**
   * @param { !boolean } invalidateCachedHashes
   */
   resetVisitedLinks(invalidateCachedHashes) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
visitedlink.mojom.VisitedLinkNotificationSink;
visitedlink.mojom.VisitedLinkNotificationSink_UpdateVisitedLinks_Params = class {
  constructor() {
    /** @type { !mojoBase.mojom.ReadOnlySharedMemoryRegion } */
    this.tableRegion;
  }
};
visitedlink.mojom.VisitedLinkNotificationSink_AddVisitedLinks_Params = class {
  constructor() {
    /** @type { !Array<number> } */
    this.linkHashes;
  }
};
visitedlink.mojom.VisitedLinkNotificationSink_ResetVisitedLinks_Params = class {
  constructor() {
    /** @type { !boolean } */
    this.invalidateCachedHashes;
  }
};
