// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let arc = {};
/** @const */
arc.mojom = {};
/** @implements {mojo.InterfacePtr} */
arc.mojom.VideoProtectedBufferAllocatorPtr = class {

  /**
   * @param { !mojo.MojoHandle } handleFd
   * @param { !number } size
   * @return {Promise}
   */
   allocateProtectedSharedMemory(handleFd, size) {}
  /**
   * @param { !mojo.MojoHandle } handleFd
   * @param { !arc.mojom.HalPixelFormat } pixelFormat
   * @param { !arc.mojom.Size } pictureSize
   * @return {Promise}
   */
   allocateProtectedNativePixmap(handleFd, pixelFormat, pictureSize) {}
  /**
   * @param { !mojo.MojoHandle } handleFd
   */
   releaseProtectedBuffer(handleFd) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
arc.mojom.VideoProtectedBufferAllocator;
arc.mojom.VideoProtectedBufferAllocator_AllocateProtectedSharedMemory_Params = class {
  constructor() {
    /** @type { !mojo.MojoHandle } */
    this.handleFd;
    /** @type { !number } */
    this.size;
  }
};
arc.mojom.VideoProtectedBufferAllocator_AllocateProtectedSharedMemory_ResponseParams = class {
  constructor() {
    /** @type { !boolean } */
    this.result;
  }
};
arc.mojom.VideoProtectedBufferAllocator_AllocateProtectedNativePixmap_Params = class {
  constructor() {
    /** @type { !mojo.MojoHandle } */
    this.handleFd;
    /** @type { !arc.mojom.HalPixelFormat } */
    this.pixelFormat;
    /** @type { !arc.mojom.Size } */
    this.pictureSize;
  }
};
arc.mojom.VideoProtectedBufferAllocator_AllocateProtectedNativePixmap_ResponseParams = class {
  constructor() {
    /** @type { !boolean } */
    this.result;
  }
};
arc.mojom.VideoProtectedBufferAllocator_ReleaseProtectedBuffer_Params = class {
  constructor() {
    /** @type { !mojo.MojoHandle } */
    this.handleFd;
  }
};
