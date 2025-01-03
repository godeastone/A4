// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let domDistiller = {};
/** @const */
domDistiller.mojom = {};
/** @implements {mojo.InterfacePtr} */
domDistiller.mojom.DistillabilityServicePtr = class {

  /**
   * @param { !boolean } pageIsDistillable
   * @param { !boolean } isLastUpdate
   * @param { !boolean } isMobileFriendly
   */
   notifyIsDistillable(pageIsDistillable, isLastUpdate, isMobileFriendly) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
domDistiller.mojom.DistillabilityService;
domDistiller.mojom.DistillabilityService_NotifyIsDistillable_Params = class {
  constructor() {
    /** @type { !boolean } */
    this.pageIsDistillable;
    /** @type { !boolean } */
    this.isLastUpdate;
    /** @type { !boolean } */
    this.isMobileFriendly;
  }
};
