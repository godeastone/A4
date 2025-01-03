// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let content = {};
/** @const */
content.mojom = {};
/** @implements {mojo.InterfacePtr} */
content.mojom.MemoryCoordinatorHandlePtr = class {

  /**
   * @param { !content.mojom.ChildMemoryCoordinatorPtr } child
   */
   addChild(child) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
content.mojom.MemoryCoordinatorHandle;
content.mojom.MemoryCoordinatorHandle_AddChild_Params = class {
  constructor() {
    /** @type { !content.mojom.ChildMemoryCoordinatorPtr } */
    this.child;
  }
};
