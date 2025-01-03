// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let discardableMemory = {};
/** @const */
discardableMemory.mojom = {};
/** @implements {mojo.InterfacePtr} */
discardableMemory.mojom.DiscardableSharedMemoryManagerPtr = class {

  /**
   * @param { !number } size
   * @param { !number } id
   * @return {Promise}
   */
   allocateLockedDiscardableSharedMemory(size, id) {}
  /**
   * @param { !number } id
   */
   deletedDiscardableSharedMemory(id) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
discardableMemory.mojom.DiscardableSharedMemoryManager;
discardableMemory.mojom.DiscardableSharedMemoryManager_AllocateLockedDiscardableSharedMemory_Params = class {
  constructor() {
    /** @type { !number } */
    this.size;
    /** @type { !number } */
    this.id;
  }
};
discardableMemory.mojom.DiscardableSharedMemoryManager_AllocateLockedDiscardableSharedMemory_ResponseParams = class {
  constructor() {
    /** @type { !mojoBase.mojom.UnsafeSharedMemoryRegion } */
    this.region;
  }
};
discardableMemory.mojom.DiscardableSharedMemoryManager_DeletedDiscardableSharedMemory_Params = class {
  constructor() {
    /** @type { !number } */
    this.id;
  }
};
