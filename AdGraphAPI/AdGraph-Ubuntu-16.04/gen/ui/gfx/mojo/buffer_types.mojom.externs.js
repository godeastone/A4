// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let gfx = {};
/** @const */
gfx.mojom = {};
gfx.mojom.BufferUsageAndFormat = class {
  constructor() {
    /** @type { !gfx.mojom.BufferUsage } */
    this.usage;
    /** @type { !gfx.mojom.BufferFormat } */
    this.format;
  }
};
gfx.mojom.GpuMemoryBufferId = class {
  constructor() {
    /** @type { !number } */
    this.id;
  }
};
gfx.mojom.NativePixmapPlane = class {
  constructor() {
    /** @type { !number } */
    this.stride;
    /** @type { !number } */
    this.offset;
    /** @type { !number } */
    this.size;
    /** @type { !number } */
    this.modifier;
  }
};
gfx.mojom.NativePixmapHandle = class {
  constructor() {
    /** @type { !Array<mojo.MojoHandle> } */
    this.fds;
    /** @type { !Array<gfx.mojom.NativePixmapPlane> } */
    this.planes;
  }
};
gfx.mojom.GpuMemoryBufferHandle = class {
  constructor() {
    /** @type { !gfx.mojom.GpuMemoryBufferType } */
    this.type;
    /** @type { mojo.MojoHandle } */
    this.sharedMemoryHandle;
    /** @type { !gfx.mojom.GpuMemoryBufferId } */
    this.id;
    /** @type { !number } */
    this.offset;
    /** @type { !number } */
    this.stride;
    /** @type { gfx.mojom.NativePixmapHandle } */
    this.nativePixmapHandle;
    /** @type { mojo.MojoHandle } */
    this.machPort;
  }
};
