// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let viz = {};
/** @const */
viz.mojom = {};
/** @implements {mojo.InterfacePtr} */
viz.mojom.LayeredWindowUpdaterPtr = class {

  /**
   * @param { !gfx.mojom.Size } pixelSize
   * @param { !mojo.MojoHandle } scopedBufferHandle
   */
   onAllocatedSharedMemory(pixelSize, scopedBufferHandle) {}
  /**
   * @return {Promise}
   */
   draw() {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
viz.mojom.LayeredWindowUpdater;
viz.mojom.LayeredWindowUpdater_OnAllocatedSharedMemory_Params = class {
  constructor() {
    /** @type { !gfx.mojom.Size } */
    this.pixelSize;
    /** @type { !mojo.MojoHandle } */
    this.scopedBufferHandle;
  }
};
viz.mojom.LayeredWindowUpdater_Draw_Params = class {
  constructor() {
  }
};
viz.mojom.LayeredWindowUpdater_Draw_ResponseParams = class {
  constructor() {
  }
};
