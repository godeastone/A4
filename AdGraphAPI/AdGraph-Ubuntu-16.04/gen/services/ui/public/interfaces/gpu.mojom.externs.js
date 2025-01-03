// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let ui = {};
/** @const */
ui.mojom = {};
/** @implements {mojo.InterfacePtr} */
ui.mojom.GpuPtr = class {

  /**
   * @return {Promise}
   */
   establishGpuChannel() {}
  /**
   * @param { !mojo.InterfaceRequest } jda
   */
   createJpegDecodeAccelerator(jda) {}
  /**
   * @param { !mojo.InterfaceRequest } veaProvider
   */
   createVideoEncodeAcceleratorProvider(veaProvider) {}
  /**
   * @param { !gfx.mojom.GpuMemoryBufferId } id
   * @param { !gfx.mojom.Size } size
   * @param { !gfx.mojom.BufferFormat } format
   * @param { !gfx.mojom.BufferUsage } usage
   * @return {Promise}
   */
   createGpuMemoryBuffer(id, size, format, usage) {}
  /**
   * @param { !gfx.mojom.GpuMemoryBufferId } id
   * @param { !gpu.mojom.SyncToken } syncToken
   */
   destroyGpuMemoryBuffer(id, syncToken) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
ui.mojom.Gpu;
ui.mojom.Gpu_EstablishGpuChannel_Params = class {
  constructor() {
  }
};
ui.mojom.Gpu_EstablishGpuChannel_ResponseParams = class {
  constructor() {
    /** @type { !number } */
    this.clientId;
    /** @type { mojo.MojoHandle } */
    this.channelHandle;
    /** @type { !gpu.mojom.GpuInfo } */
    this.gpuInfo;
    /** @type { !gpu.mojom.GpuFeatureInfo } */
    this.gpuFeatureInfo;
  }
};
ui.mojom.Gpu_CreateJpegDecodeAccelerator_Params = class {
  constructor() {
    /** @type { !mojo.InterfaceRequest } */
    this.jda;
  }
};
ui.mojom.Gpu_CreateVideoEncodeAcceleratorProvider_Params = class {
  constructor() {
    /** @type { !mojo.InterfaceRequest } */
    this.veaProvider;
  }
};
ui.mojom.Gpu_CreateGpuMemoryBuffer_Params = class {
  constructor() {
    /** @type { !gfx.mojom.GpuMemoryBufferId } */
    this.id;
    /** @type { !gfx.mojom.Size } */
    this.size;
    /** @type { !gfx.mojom.BufferFormat } */
    this.format;
    /** @type { !gfx.mojom.BufferUsage } */
    this.usage;
  }
};
ui.mojom.Gpu_CreateGpuMemoryBuffer_ResponseParams = class {
  constructor() {
    /** @type { !gfx.mojom.GpuMemoryBufferHandle } */
    this.bufferHandle;
  }
};
ui.mojom.Gpu_DestroyGpuMemoryBuffer_Params = class {
  constructor() {
    /** @type { !gfx.mojom.GpuMemoryBufferId } */
    this.id;
    /** @type { !gpu.mojom.SyncToken } */
    this.syncToken;
  }
};
