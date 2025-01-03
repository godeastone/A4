// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let arc = {};
/** @const */
arc.mojom = {};
/** @implements {mojo.InterfacePtr} */
arc.mojom.ProtectedBufferManagerPtr = class {

  /**
   * @param { !mojo.MojoHandle } dummyHandle
   * @return {Promise}
   */
   getProtectedSharedMemoryFromHandle(dummyHandle) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
arc.mojom.ProtectedBufferManager;
arc.mojom.ProtectedBufferManager_GetProtectedSharedMemoryFromHandle_Params = class {
  constructor() {
    /** @type { !mojo.MojoHandle } */
    this.dummyHandle;
  }
};
arc.mojom.ProtectedBufferManager_GetProtectedSharedMemoryFromHandle_ResponseParams = class {
  constructor() {
    /** @type { !mojo.MojoHandle } */
    this.sharedMemoryHandle;
  }
};
