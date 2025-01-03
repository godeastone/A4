// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let viz = {};
/** @const */
viz.mojom = {};
/** @implements {mojo.InterfacePtr} */
viz.mojom.VizMainPtr = class {

  /**
   * @param { !viz.mojom.FrameSinkManagerParams } params
   */
   createFrameSinkManager(params) {}
  /**
   * @param { !mojo.InterfaceRequest } gpuService
   * @param { !viz.mojom.GpuHostPtr } gpuHost
   * @param { !discardableMemory.mojom.DiscardableSharedMemoryManagerPtr } discardableMemoryManager
   * @param { mojo.MojoHandle } activityFlags
   */
   createGpuService(gpuService, gpuHost, discardableMemoryManager, activityFlags) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
viz.mojom.VizMain;
viz.mojom.FrameSinkManagerParams = class {
  constructor() {
    /** @type { !number } */
    this.restartId;
    /** @type { !boolean } */
    this.useActivationDeadline;
    /** @type { !number } */
    this.activationDeadlineInFrames;
    /** @type { !mojo.InterfaceRequest } */
    this.frameSinkManager;
    /** @type { !viz.mojom.FrameSinkManagerClientPtr } */
    this.frameSinkManagerClient;
  }
};
viz.mojom.VizMain_CreateFrameSinkManager_Params = class {
  constructor() {
    /** @type { !viz.mojom.FrameSinkManagerParams } */
    this.params;
  }
};
viz.mojom.VizMain_CreateGpuService_Params = class {
  constructor() {
    /** @type { !mojo.InterfaceRequest } */
    this.gpuService;
    /** @type { !viz.mojom.GpuHostPtr } */
    this.gpuHost;
    /** @type { !discardableMemory.mojom.DiscardableSharedMemoryManagerPtr } */
    this.discardableMemoryManager;
    /** @type { mojo.MojoHandle } */
    this.activityFlags;
  }
};
