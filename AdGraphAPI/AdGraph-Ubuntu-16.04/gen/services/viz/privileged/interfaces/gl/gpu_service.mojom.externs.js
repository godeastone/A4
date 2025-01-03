// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let viz = {};
/** @const */
viz.mojom = {};
/** @implements {mojo.InterfacePtr} */
viz.mojom.GpuServicePtr = class {

  /**
   * @param { !number } clientId
   * @param { !number } clientTracingId
   * @param { !boolean } isGpuHost
   * @return {Promise}
   */
   establishGpuChannel(clientId, clientTracingId, isGpuHost) {}
  /**
   * @param { !number } clientId
   */
   closeChannel(clientId) {}
  /**
   * @param { !mojo.InterfaceRequest } jda
   */
   createJpegDecodeAccelerator(jda) {}
  /**
   * @param { !mojo.InterfaceRequest } jea
   */
   createJpegEncodeAccelerator(jea) {}
  /**
   * @param { !mojo.InterfaceRequest } veaProvider
   */
   createVideoEncodeAcceleratorProvider(veaProvider) {}
  /**
   * @param { !gfx.mojom.GpuMemoryBufferId } id
   * @param { !gfx.mojom.Size } size
   * @param { !gfx.mojom.BufferFormat } format
   * @param { !gfx.mojom.BufferUsage } usage
   * @param { !number } clientId
   * @param { !gpu.mojom.SurfaceHandle } surfaceHandle
   * @return {Promise}
   */
   createGpuMemoryBuffer(id, size, format, usage, clientId, surfaceHandle) {}
  /**
   * @param { !gfx.mojom.GpuMemoryBufferId } id
   * @param { !number } clientId
   * @param { !gpu.mojom.SyncToken } syncToken
   */
   destroyGpuMemoryBuffer(id, clientId, syncToken) {}
  /**
   * @return {Promise}
   */
   getVideoMemoryUsageStats() {}
  /**
   * @return {Promise}
   */
   requestCompleteGpuInfo() {}
  /**
   * @return {Promise}
   */
   getGpuSupportedRuntimeVersion() {}
  /**
   * @return {Promise}
   */
   requestHDRStatus() {}
  /**
   * @param { !string } key
   * @param { !string } data
   */
   loadedShader(key, data) {}
  /**
   * @param { !number } surfaceId
   * @return {Promise}
   */
   destroyingVideoSurface(surfaceId) {}
  /**
   */
   wakeUpGpu() {}
  /**
   */
   gpuSwitched() {}
  /**
   */
   destroyAllChannels() {}
  /**
   */
   onBackgroundCleanup() {}
  /**
   */
   onBackgrounded() {}
  /**
   */
   onForegrounded() {}
  /**
   */
   crash() {}
  /**
   */
   hang() {}
  /**
   */
   throwJavaException() {}
  /**
   * @return {Promise}
   */
   stop() {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
viz.mojom.GpuService;
viz.mojom.GpuService_EstablishGpuChannel_Params = class {
  constructor() {
    /** @type { !number } */
    this.clientId;
    /** @type { !boolean } */
    this.isGpuHost;
    /** @type { !number } */
    this.clientTracingId;
  }
};
viz.mojom.GpuService_EstablishGpuChannel_ResponseParams = class {
  constructor() {
    /** @type { mojo.MojoHandle } */
    this.channelHandle;
  }
};
viz.mojom.GpuService_CloseChannel_Params = class {
  constructor() {
    /** @type { !number } */
    this.clientId;
  }
};
viz.mojom.GpuService_CreateJpegDecodeAccelerator_Params = class {
  constructor() {
    /** @type { !mojo.InterfaceRequest } */
    this.jda;
  }
};
viz.mojom.GpuService_CreateJpegEncodeAccelerator_Params = class {
  constructor() {
    /** @type { !mojo.InterfaceRequest } */
    this.jea;
  }
};
viz.mojom.GpuService_CreateVideoEncodeAcceleratorProvider_Params = class {
  constructor() {
    /** @type { !mojo.InterfaceRequest } */
    this.veaProvider;
  }
};
viz.mojom.GpuService_CreateGpuMemoryBuffer_Params = class {
  constructor() {
    /** @type { !gfx.mojom.GpuMemoryBufferId } */
    this.id;
    /** @type { !gfx.mojom.Size } */
    this.size;
    /** @type { !gfx.mojom.BufferFormat } */
    this.format;
    /** @type { !gfx.mojom.BufferUsage } */
    this.usage;
    /** @type { !number } */
    this.clientId;
    /** @type { !gpu.mojom.SurfaceHandle } */
    this.surfaceHandle;
  }
};
viz.mojom.GpuService_CreateGpuMemoryBuffer_ResponseParams = class {
  constructor() {
    /** @type { !gfx.mojom.GpuMemoryBufferHandle } */
    this.bufferHandle;
  }
};
viz.mojom.GpuService_DestroyGpuMemoryBuffer_Params = class {
  constructor() {
    /** @type { !gfx.mojom.GpuMemoryBufferId } */
    this.id;
    /** @type { !number } */
    this.clientId;
    /** @type { !gpu.mojom.SyncToken } */
    this.syncToken;
  }
};
viz.mojom.GpuService_GetVideoMemoryUsageStats_Params = class {
  constructor() {
  }
};
viz.mojom.GpuService_GetVideoMemoryUsageStats_ResponseParams = class {
  constructor() {
    /** @type { !gpu.mojom.VideoMemoryUsageStats } */
    this.stats;
  }
};
viz.mojom.GpuService_RequestCompleteGpuInfo_Params = class {
  constructor() {
  }
};
viz.mojom.GpuService_RequestCompleteGpuInfo_ResponseParams = class {
  constructor() {
    /** @type { !gpu.mojom.GpuInfo } */
    this.gpuInfo;
  }
};
viz.mojom.GpuService_GetGpuSupportedRuntimeVersion_Params = class {
  constructor() {
  }
};
viz.mojom.GpuService_GetGpuSupportedRuntimeVersion_ResponseParams = class {
  constructor() {
    /** @type { !gpu.mojom.GpuInfo } */
    this.gpuInfo;
  }
};
viz.mojom.GpuService_RequestHDRStatus_Params = class {
  constructor() {
  }
};
viz.mojom.GpuService_RequestHDRStatus_ResponseParams = class {
  constructor() {
    /** @type { !boolean } */
    this.hdrEnabled;
  }
};
viz.mojom.GpuService_LoadedShader_Params = class {
  constructor() {
    /** @type { !string } */
    this.key;
    /** @type { !string } */
    this.data;
  }
};
viz.mojom.GpuService_DestroyingVideoSurface_Params = class {
  constructor() {
    /** @type { !number } */
    this.surfaceId;
  }
};
viz.mojom.GpuService_DestroyingVideoSurface_ResponseParams = class {
  constructor() {
  }
};
viz.mojom.GpuService_WakeUpGpu_Params = class {
  constructor() {
  }
};
viz.mojom.GpuService_GpuSwitched_Params = class {
  constructor() {
  }
};
viz.mojom.GpuService_DestroyAllChannels_Params = class {
  constructor() {
  }
};
viz.mojom.GpuService_OnBackgroundCleanup_Params = class {
  constructor() {
  }
};
viz.mojom.GpuService_OnBackgrounded_Params = class {
  constructor() {
  }
};
viz.mojom.GpuService_OnForegrounded_Params = class {
  constructor() {
  }
};
viz.mojom.GpuService_Crash_Params = class {
  constructor() {
  }
};
viz.mojom.GpuService_Hang_Params = class {
  constructor() {
  }
};
viz.mojom.GpuService_ThrowJavaException_Params = class {
  constructor() {
  }
};
viz.mojom.GpuService_Stop_Params = class {
  constructor() {
  }
};
viz.mojom.GpuService_Stop_ResponseParams = class {
  constructor() {
  }
};
