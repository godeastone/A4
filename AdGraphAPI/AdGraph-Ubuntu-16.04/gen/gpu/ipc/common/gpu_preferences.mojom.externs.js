// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let gpu = {};
/** @const */
gpu.mojom = {};
gpu.mojom.GpuPreferences = class {
  constructor() {
    /** @type { !boolean } */
    this.singleProcess;
    /** @type { !boolean } */
    this.inProcessGpu;
    /** @type { !boolean } */
    this.disableAcceleratedVideoDecode;
    /** @type { !boolean } */
    this.disableAcceleratedVideoEncode;
    /** @type { !boolean } */
    this.gpuStartupDialog;
    /** @type { !boolean } */
    this.disableGpuWatchdog;
    /** @type { !boolean } */
    this.gpuSandboxStartEarly;
    /** @type { !boolean } */
    this.enableLowLatencyDxva;
    /** @type { !boolean } */
    this.enableZeroCopyDxgiVideo;
    /** @type { !boolean } */
    this.enableNv12DxgiVideo;
    /** @type { !boolean } */
    this.enableMediaFoundationVeaOnWindows7;
    /** @type { !boolean } */
    this.disableSoftwareRasterizer;
    /** @type { !boolean } */
    this.logGpuControlListDecisions;
    /** @type { !boolean } */
    this.compileShaderAlwaysSucceeds;
    /** @type { !boolean } */
    this.disableGlErrorLimit;
    /** @type { !boolean } */
    this.disableGlslTranslator;
    /** @type { !boolean } */
    this.disableShaderNameHashing;
    /** @type { !boolean } */
    this.enableGpuCommandLogging;
    /** @type { !boolean } */
    this.enableGpuDebugging;
    /** @type { !boolean } */
    this.enableGpuServiceLoggingGpu;
    /** @type { !boolean } */
    this.enableGpuDriverDebugLogging;
    /** @type { !boolean } */
    this.disableGpuProgramCache;
    /** @type { !boolean } */
    this.enforceGlMinimums;
    /** @type { !boolean } */
    this.disableGpuShaderDiskCache;
    /** @type { !boolean } */
    this.enableThreadedTextureMailboxes;
    /** @type { !boolean } */
    this.glShaderIntermOutput;
    /** @type { !boolean } */
    this.emulateShaderPrecision;
    /** @type { !boolean } */
    this.enableGpuServiceLogging;
    /** @type { !boolean } */
    this.enableGpuServiceTracing;
    /** @type { !boolean } */
    this.usePassthroughCmdDecoder;
    /** @type { !boolean } */
    this.disableBiplanarGpuMemoryBuffersForVideoFrames;
    /** @type { !boolean } */
    this.disableGpuDriverBugWorkarounds;
    /** @type { !gpu.mojom.VpxDecodeVendors } */
    this.enableAcceleratedVpxDecode;
    /** @type { !number } */
    this.forceGpuMemAvailable;
    /** @type { !number } */
    this.gpuProgramCacheSize;
    /** @type { !Array<gfx.mojom.BufferUsageAndFormat> } */
    this.textureTargetExceptionList;
    /** @type { !boolean } */
    this.ignoreGpuBlacklist;
    /** @type { !boolean } */
    this.enableOopRasterization;
    /** @type { !boolean } */
    this.useGpuFencesForOverlayPlanes;
  }
};
