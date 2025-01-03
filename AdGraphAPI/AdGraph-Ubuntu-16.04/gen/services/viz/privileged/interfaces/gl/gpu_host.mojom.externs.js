// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let viz = {};
/** @const */
viz.mojom = {};
/** @implements {mojo.InterfacePtr} */
viz.mojom.GpuHostPtr = class {

  /**
   * @param { !gpu.mojom.GpuInfo } gpuInfo
   * @param { !gpu.mojom.GpuFeatureInfo } gpuFeatureInfo
   * @param { gpu.mojom.GpuInfo } gpuInfoForHardwareGpu
   * @param { gpu.mojom.GpuFeatureInfo } gpuFeatureInfoForHardwareGpu
   */
   didInitialize(gpuInfo, gpuFeatureInfo, gpuInfoForHardwareGpu, gpuFeatureInfoForHardwareGpu) {}
  /**
   */
   didFailInitialize() {}
  /**
   */
   didCreateContextSuccessfully() {}
  /**
   * @param { !url.mojom.Url } url
   */
   didCreateOffscreenContext(url) {}
  /**
   * @param { !url.mojom.Url } url
   */
   didDestroyOffscreenContext(url) {}
  /**
   * @param { !number } clientId
   */
   didDestroyChannel(clientId) {}
  /**
   * @param { !boolean } offscreen
   * @param { !viz.mojom.ContextLostReason } reason
   * @param { !url.mojom.Url } activeUrl
   */
   didLoseContext(offscreen, reason, activeUrl) {}
  /**
   * @param { !gpu.mojom.SurfaceHandle } parent
   * @param { !gpu.mojom.SurfaceHandle } child
   */
   setChildSurface(parent, child) {}
  /**
   * @param { !number } clientId
   * @param { !string } key
   * @param { !string } shader
   */
   storeShaderToDisk(clientId, key, shader) {}
  /**
   * @param { !number } severity
   * @param { !string } header
   * @param { !string } message
   */
   recordLogMessage(severity, header, message) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
viz.mojom.GpuHost;
viz.mojom.GpuHost_DidInitialize_Params = class {
  constructor() {
    /** @type { !gpu.mojom.GpuInfo } */
    this.gpuInfo;
    /** @type { !gpu.mojom.GpuFeatureInfo } */
    this.gpuFeatureInfo;
    /** @type { gpu.mojom.GpuInfo } */
    this.gpuInfoForHardwareGpu;
    /** @type { gpu.mojom.GpuFeatureInfo } */
    this.gpuFeatureInfoForHardwareGpu;
  }
};
viz.mojom.GpuHost_DidFailInitialize_Params = class {
  constructor() {
  }
};
viz.mojom.GpuHost_DidCreateContextSuccessfully_Params = class {
  constructor() {
  }
};
viz.mojom.GpuHost_DidCreateOffscreenContext_Params = class {
  constructor() {
    /** @type { !url.mojom.Url } */
    this.url;
  }
};
viz.mojom.GpuHost_DidDestroyOffscreenContext_Params = class {
  constructor() {
    /** @type { !url.mojom.Url } */
    this.url;
  }
};
viz.mojom.GpuHost_DidDestroyChannel_Params = class {
  constructor() {
    /** @type { !number } */
    this.clientId;
  }
};
viz.mojom.GpuHost_DidLoseContext_Params = class {
  constructor() {
    /** @type { !boolean } */
    this.offscreen;
    /** @type { !viz.mojom.ContextLostReason } */
    this.reason;
    /** @type { !url.mojom.Url } */
    this.activeUrl;
  }
};
viz.mojom.GpuHost_SetChildSurface_Params = class {
  constructor() {
    /** @type { !gpu.mojom.SurfaceHandle } */
    this.parent;
    /** @type { !gpu.mojom.SurfaceHandle } */
    this.child;
  }
};
viz.mojom.GpuHost_StoreShaderToDisk_Params = class {
  constructor() {
    /** @type { !number } */
    this.clientId;
    /** @type { !string } */
    this.key;
    /** @type { !string } */
    this.shader;
  }
};
viz.mojom.GpuHost_RecordLogMessage_Params = class {
  constructor() {
    /** @type { !number } */
    this.severity;
    /** @type { !string } */
    this.header;
    /** @type { !string } */
    this.message;
  }
};
