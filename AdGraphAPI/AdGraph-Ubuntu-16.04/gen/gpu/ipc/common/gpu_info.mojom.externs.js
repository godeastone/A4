// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let gpu = {};
/** @const */
gpu.mojom = {};
gpu.mojom.GpuDevice = class {
  constructor() {
    /** @type { !number } */
    this.vendorId;
    /** @type { !number } */
    this.deviceId;
    /** @type { !boolean } */
    this.active;
    /** @type { !string } */
    this.vendorString;
    /** @type { !string } */
    this.deviceString;
  }
};
gpu.mojom.VideoDecodeAcceleratorSupportedProfile = class {
  constructor() {
    /** @type { !gpu.mojom.VideoCodecProfile } */
    this.profile;
    /** @type { !boolean } */
    this.encryptedOnly;
    /** @type { !gfx.mojom.Size } */
    this.maxResolution;
    /** @type { !gfx.mojom.Size } */
    this.minResolution;
  }
};
gpu.mojom.VideoDecodeAcceleratorCapabilities = class {
  constructor() {
    /** @type { !Array<gpu.mojom.VideoDecodeAcceleratorSupportedProfile> } */
    this.supportedProfiles;
    /** @type { !number } */
    this.flags;
  }
};
gpu.mojom.VideoEncodeAcceleratorSupportedProfile = class {
  constructor() {
    /** @type { !gpu.mojom.VideoCodecProfile } */
    this.profile;
    /** @type { !number } */
    this.maxFramerateNumerator;
    /** @type { !gfx.mojom.Size } */
    this.maxResolution;
    /** @type { !number } */
    this.maxFramerateDenominator;
  }
};
gpu.mojom.GpuInfo = class {
  constructor() {
    /** @type { !mojoBase.mojom.TimeDelta } */
    this.initializationTime;
    /** @type { !boolean } */
    this.optimus;
    /** @type { !boolean } */
    this.amdSwitchable;
    /** @type { !boolean } */
    this.softwareRendering;
    /** @type { !boolean } */
    this.directRendering;
    /** @type { !boolean } */
    this.sandboxed;
    /** @type { !boolean } */
    this.inProcessGpu;
    /** @type { !boolean } */
    this.passthroughCmdDecoder;
    /** @type { !boolean } */
    this.directComposition;
    /** @type { !boolean } */
    this.supportsOverlays;
    /** @type { !boolean } */
    this.canSupportThreadedTextureMailbox;
    /** @type { !boolean } */
    this.jpegDecodeAcceleratorSupported;
    /** @type { !number } */
    this.glResetNotificationStrategy;
    /** @type { !gpu.mojom.GpuDevice } */
    this.gpu;
    /** @type { !Array<gpu.mojom.GpuDevice> } */
    this.secondaryGpus;
    /** @type { !string } */
    this.driverVendor;
    /** @type { !string } */
    this.driverVersion;
    /** @type { !string } */
    this.driverDate;
    /** @type { !string } */
    this.pixelShaderVersion;
    /** @type { !string } */
    this.vertexShaderVersion;
    /** @type { !string } */
    this.maxMsaaSamples;
    /** @type { !string } */
    this.machineModelName;
    /** @type { !string } */
    this.machineModelVersion;
    /** @type { !string } */
    this.glVersion;
    /** @type { !string } */
    this.glVendor;
    /** @type { !string } */
    this.glRenderer;
    /** @type { !string } */
    this.glExtensions;
    /** @type { !string } */
    this.glWsVendor;
    /** @type { !string } */
    this.glWsVersion;
    /** @type { !string } */
    this.glWsExtensions;
    /** @type { !gpu.mojom.VideoDecodeAcceleratorCapabilities } */
    this.videoDecodeAcceleratorCapabilities;
    /** @type { !Array<gpu.mojom.VideoEncodeAcceleratorSupportedProfile> } */
    this.videoEncodeAcceleratorSupportedProfiles;
    /** @type { !number } */
    this.systemVisual;
    /** @type { !number } */
    this.rgbaVisual;
  }
};
