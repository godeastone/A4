// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let content = {};
/** @const */
content.mojom = {};
/** @implements {mojo.InterfacePtr} */
content.mojom.ChildMemoryCoordinatorPtr = class {

  /**
   * @param { !content.mojom.MemoryState } state
   */
   onStateChange(state) {}
  /**
   */
   purgeMemory() {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
content.mojom.ChildMemoryCoordinator;
content.mojom.ChildMemoryCoordinator_OnStateChange_Params = class {
  constructor() {
    /** @type { !content.mojom.MemoryState } */
    this.state;
  }
};
content.mojom.ChildMemoryCoordinator_PurgeMemory_Params = class {
  constructor() {
  }
};