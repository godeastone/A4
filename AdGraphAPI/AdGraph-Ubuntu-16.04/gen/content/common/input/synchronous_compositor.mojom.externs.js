// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let content = {};
/** @const */
content.mojom = {};
/** @implements {mojo.InterfacePtr} */
content.mojom.SynchronousCompositorPtr = class {

  /**
   * @param { !mojoBase.mojom.TimeTicks } time
   */
   computeScroll(time) {}
  /**
   * @param { !content.mojom.SyncCompositorDemandDrawHwParams } drawParams
   */
   demandDrawHwAsync(drawParams) {}
  /**
   * @param { !content.mojom.SyncCompositorDemandDrawHwParams } drawParams
   * @return {Promise}
   */
   demandDrawHw(drawParams) {}
  /**
   * @param { !content.mojom.SyncCompositorSetSharedMemoryParams } params
   * @return {Promise}
   */
   setSharedMemory(params) {}
  /**
   * @param { !content.mojom.SyncCompositorDemandDrawSwParams } drawParams
   * @return {Promise}
   */
   demandDrawSw(drawParams) {}
  /**
   */
   zeroSharedMemory() {}
  /**
   * @param { !number } delta
   * @param { !gfx.mojom.Point } anchor
   * @return {Promise}
   */
   zoomBy(delta, anchor) {}
  /**
   * @param { !number } bytesLimit
   */
   setMemoryPolicy(bytesLimit) {}
  /**
   * @param { !number } layerTreeFrameSinkId
   * @param { !Array<viz.mojom.ReturnedResource> } resources
   */
   reclaimResources(layerTreeFrameSinkId, resources) {}
  /**
   * @param { !gfx.mojom.ScrollOffset } offset
   */
   setScroll(offset) {}
  /**
   * @param { !viz.mojom.BeginFrameArgs } args
   */
   beginFrame(args) {}
  /**
   * @param { !boolean } paused
   */
   setBeginFrameSourcePaused(paused) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
content.mojom.SynchronousCompositor;
/** @implements {mojo.InterfacePtr} */
content.mojom.SynchronousCompositorHostPtr = class {

  /**
   */
   layerTreeFrameSinkCreated() {}
  /**
   * @param { !content.mojom.SyncCompositorCommonRendererParams } params
   */
   updateState(params) {}
  /**
   * @param { !boolean } needsBeginFrames
   */
   setNeedsBeginFrames(needsBeginFrames) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
content.mojom.SynchronousCompositorHost;
/** @implements {mojo.InterfacePtr} */
content.mojom.SynchronousCompositorControlHostPtr = class {

  /**
   * @param { !number } layerTreeFrameSinkId
   * @param { !number } metadataVersion
   * @param { viz.mojom.CompositorFrame } frame
   */
   returnFrame(layerTreeFrameSinkId, metadataVersion, frame) {}
  /**
   * @param { !content.mojom.SyncCompositorCommonRendererParams } params
   */
   beginFrameResponse(params) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
content.mojom.SynchronousCompositorControlHost;
content.mojom.SyncCompositorDemandDrawHwParams = class {
  constructor() {
  }
};
content.mojom.SyncCompositorSetSharedMemoryParams = class {
  constructor() {
  }
};
content.mojom.SyncCompositorDemandDrawSwParams = class {
  constructor() {
  }
};
content.mojom.SyncCompositorCommonRendererParams = class {
  constructor() {
  }
};
content.mojom.SynchronousCompositor_ComputeScroll_Params = class {
  constructor() {
    /** @type { !mojoBase.mojom.TimeTicks } */
    this.time;
  }
};
content.mojom.SynchronousCompositor_DemandDrawHwAsync_Params = class {
  constructor() {
    /** @type { !content.mojom.SyncCompositorDemandDrawHwParams } */
    this.drawParams;
  }
};
content.mojom.SynchronousCompositor_DemandDrawHw_Params = class {
  constructor() {
    /** @type { !content.mojom.SyncCompositorDemandDrawHwParams } */
    this.drawParams;
  }
};
content.mojom.SynchronousCompositor_DemandDrawHw_ResponseParams = class {
  constructor() {
    /** @type { !content.mojom.SyncCompositorCommonRendererParams } */
    this.result;
    /** @type { !number } */
    this.layerTreeFrameSinkId;
    /** @type { !number } */
    this.metadataVersion;
    /** @type { viz.mojom.CompositorFrame } */
    this.frame;
  }
};
content.mojom.SynchronousCompositor_SetSharedMemory_Params = class {
  constructor() {
    /** @type { !content.mojom.SyncCompositorSetSharedMemoryParams } */
    this.params;
  }
};
content.mojom.SynchronousCompositor_SetSharedMemory_ResponseParams = class {
  constructor() {
    /** @type { !boolean } */
    this.success;
    /** @type { !content.mojom.SyncCompositorCommonRendererParams } */
    this.result;
  }
};
content.mojom.SynchronousCompositor_DemandDrawSw_Params = class {
  constructor() {
    /** @type { !content.mojom.SyncCompositorDemandDrawSwParams } */
    this.drawParams;
  }
};
content.mojom.SynchronousCompositor_DemandDrawSw_ResponseParams = class {
  constructor() {
    /** @type { !content.mojom.SyncCompositorCommonRendererParams } */
    this.result;
    /** @type { !number } */
    this.metadataVersion;
    /** @type { viz.mojom.CompositorFrameMetadata } */
    this.metaData;
  }
};
content.mojom.SynchronousCompositor_ZeroSharedMemory_Params = class {
  constructor() {
  }
};
content.mojom.SynchronousCompositor_ZoomBy_Params = class {
  constructor() {
    /** @type { !number } */
    this.delta;
    /** @type { !gfx.mojom.Point } */
    this.anchor;
  }
};
content.mojom.SynchronousCompositor_ZoomBy_ResponseParams = class {
  constructor() {
    /** @type { !content.mojom.SyncCompositorCommonRendererParams } */
    this.result;
  }
};
content.mojom.SynchronousCompositor_SetMemoryPolicy_Params = class {
  constructor() {
    /** @type { !number } */
    this.bytesLimit;
  }
};
content.mojom.SynchronousCompositor_ReclaimResources_Params = class {
  constructor() {
    /** @type { !number } */
    this.layerTreeFrameSinkId;
    /** @type { !Array<viz.mojom.ReturnedResource> } */
    this.resources;
  }
};
content.mojom.SynchronousCompositor_SetScroll_Params = class {
  constructor() {
    /** @type { !gfx.mojom.ScrollOffset } */
    this.offset;
  }
};
content.mojom.SynchronousCompositor_BeginFrame_Params = class {
  constructor() {
    /** @type { !viz.mojom.BeginFrameArgs } */
    this.args;
  }
};
content.mojom.SynchronousCompositor_SetBeginFrameSourcePaused_Params = class {
  constructor() {
    /** @type { !boolean } */
    this.paused;
  }
};
content.mojom.SynchronousCompositorHost_LayerTreeFrameSinkCreated_Params = class {
  constructor() {
  }
};
content.mojom.SynchronousCompositorHost_UpdateState_Params = class {
  constructor() {
    /** @type { !content.mojom.SyncCompositorCommonRendererParams } */
    this.params;
  }
};
content.mojom.SynchronousCompositorHost_SetNeedsBeginFrames_Params = class {
  constructor() {
    /** @type { !boolean } */
    this.needsBeginFrames;
  }
};
content.mojom.SynchronousCompositorControlHost_ReturnFrame_Params = class {
  constructor() {
    /** @type { !number } */
    this.layerTreeFrameSinkId;
    /** @type { !number } */
    this.metadataVersion;
    /** @type { viz.mojom.CompositorFrame } */
    this.frame;
  }
};
content.mojom.SynchronousCompositorControlHost_BeginFrameResponse_Params = class {
  constructor() {
    /** @type { !content.mojom.SyncCompositorCommonRendererParams } */
    this.params;
  }
};
