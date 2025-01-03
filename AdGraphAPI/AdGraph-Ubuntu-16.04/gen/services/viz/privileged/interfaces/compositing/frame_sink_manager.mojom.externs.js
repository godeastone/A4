// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let viz = {};
/** @const */
viz.mojom = {};
/** @implements {mojo.InterfacePtr} */
viz.mojom.FrameSinkManagerPtr = class {

  /**
   * @param { !viz.mojom.FrameSinkId } frameSinkId
   */
   registerFrameSinkId(frameSinkId) {}
  /**
   * @param { !viz.mojom.FrameSinkId } frameSinkId
   */
   invalidateFrameSinkId(frameSinkId) {}
  /**
   * @param { !viz.mojom.FrameSinkId } frameSinkId
   * @param { !string } reportingLabel
   */
   enableSynchronizationReporting(frameSinkId, reportingLabel) {}
  /**
   * @param { !viz.mojom.FrameSinkId } frameSinkId
   * @param { !string } debugLabel
   */
   setFrameSinkDebugLabel(frameSinkId, debugLabel) {}
  /**
   * @param { !viz.mojom.RootCompositorFrameSinkParams } params
   */
   createRootCompositorFrameSink(params) {}
  /**
   * @param { !viz.mojom.FrameSinkId } frameSinkId
   * @param { !mojo.InterfaceRequest } compositorFrameSink
   * @param { !viz.mojom.CompositorFrameSinkClientPtr } compositorFrameSinkClient
   */
   createCompositorFrameSink(frameSinkId, compositorFrameSink, compositorFrameSinkClient) {}
  /**
   * @param { !viz.mojom.FrameSinkId } frameSinkId
   * @return {Promise}
   */
   destroyCompositorFrameSink(frameSinkId) {}
  /**
   * @param { !viz.mojom.FrameSinkId } parentFrameSinkId
   * @param { !viz.mojom.FrameSinkId } childFrameSinkId
   */
   registerFrameSinkHierarchy(parentFrameSinkId, childFrameSinkId) {}
  /**
   * @param { !viz.mojom.FrameSinkId } parentFrameSinkId
   * @param { !viz.mojom.FrameSinkId } childFrameSinkId
   */
   unregisterFrameSinkHierarchy(parentFrameSinkId, childFrameSinkId) {}
  /**
   * @param { !viz.mojom.SurfaceId } surfaceId
   * @param { !viz.mojom.FrameSinkId } owner
   */
   assignTemporaryReference(surfaceId, owner) {}
  /**
   * @param { !viz.mojom.SurfaceId } surfaceId
   */
   dropTemporaryReference(surfaceId) {}
  /**
   * @param { !viz.mojom.VideoDetectorObserverPtr } observer
   */
   addVideoDetectorObserver(observer) {}
  /**
   * @param { !mojo.InterfaceRequest } request
   */
   createVideoCapturer(request) {}
  /**
   * @param { !Array<viz.mojom.SurfaceId> } surfaceIds
   */
   evictSurfaces(surfaceIds) {}
  /**
   * @param { !viz.mojom.SurfaceId } surfaceId
   * @param { !viz.mojom.CopyOutputRequest } request
   */
   requestCopyOfOutput(surfaceId, request) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
viz.mojom.FrameSinkManager;
/** @implements {mojo.InterfacePtr} */
viz.mojom.FrameSinkManagerClientPtr = class {

  /**
   * @param { !viz.mojom.SurfaceId } surfaceId
   */
   onSurfaceCreated(surfaceId) {}
  /**
   * @param { !viz.mojom.SurfaceInfo } surfaceInfo
   */
   onFirstSurfaceActivation(surfaceInfo) {}
  /**
   * @param { !viz.mojom.FrameSinkId } frameSinkId
   * @param { !Array<viz.mojom.AggregatedHitTestRegion> } hitTestData
   */
   onAggregatedHitTestRegionListUpdated(frameSinkId, hitTestData) {}
  /**
   * @param { !viz.mojom.FrameSinkId } frameSinkId
   * @param { !number } frameToken
   */
   onFrameTokenChanged(frameSinkId, frameToken) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
viz.mojom.FrameSinkManagerClient;
viz.mojom.RootCompositorFrameSinkParams = class {
  constructor() {
    /** @type { !viz.mojom.FrameSinkId } */
    this.frameSinkId;
    /** @type { !gpu.mojom.SurfaceHandle } */
    this.widget;
    /** @type { !boolean } */
    this.gpuCompositing;
    /** @type { !mojo.AssociatedInterfaceRequest } */
    this.compositorFrameSink;
    /** @type { !viz.mojom.RendererSettings } */
    this.rendererSettings;
    /** @type { !viz.mojom.CompositorFrameSinkClientPtr } */
    this.compositorFrameSinkClient;
    /** @type { !mojo.AssociatedInterfaceRequest } */
    this.displayPrivate;
    /** @type { !viz.mojom.DisplayClientPtr } */
    this.displayClient;
    /** @type { mojo.AssociatedInterfaceRequest } */
    this.externalBeginFrameController;
    /** @type { viz.mojom.ExternalBeginFrameControllerClientPtr } */
    this.externalBeginFrameControllerClient;
  }
};
viz.mojom.FrameSinkManager_RegisterFrameSinkId_Params = class {
  constructor() {
    /** @type { !viz.mojom.FrameSinkId } */
    this.frameSinkId;
  }
};
viz.mojom.FrameSinkManager_InvalidateFrameSinkId_Params = class {
  constructor() {
    /** @type { !viz.mojom.FrameSinkId } */
    this.frameSinkId;
  }
};
viz.mojom.FrameSinkManager_EnableSynchronizationReporting_Params = class {
  constructor() {
    /** @type { !viz.mojom.FrameSinkId } */
    this.frameSinkId;
    /** @type { !string } */
    this.reportingLabel;
  }
};
viz.mojom.FrameSinkManager_SetFrameSinkDebugLabel_Params = class {
  constructor() {
    /** @type { !viz.mojom.FrameSinkId } */
    this.frameSinkId;
    /** @type { !string } */
    this.debugLabel;
  }
};
viz.mojom.FrameSinkManager_CreateRootCompositorFrameSink_Params = class {
  constructor() {
    /** @type { !viz.mojom.RootCompositorFrameSinkParams } */
    this.params;
  }
};
viz.mojom.FrameSinkManager_CreateCompositorFrameSink_Params = class {
  constructor() {
    /** @type { !viz.mojom.FrameSinkId } */
    this.frameSinkId;
    /** @type { !mojo.InterfaceRequest } */
    this.compositorFrameSink;
    /** @type { !viz.mojom.CompositorFrameSinkClientPtr } */
    this.compositorFrameSinkClient;
  }
};
viz.mojom.FrameSinkManager_DestroyCompositorFrameSink_Params = class {
  constructor() {
    /** @type { !viz.mojom.FrameSinkId } */
    this.frameSinkId;
  }
};
viz.mojom.FrameSinkManager_DestroyCompositorFrameSink_ResponseParams = class {
  constructor() {
  }
};
viz.mojom.FrameSinkManager_RegisterFrameSinkHierarchy_Params = class {
  constructor() {
    /** @type { !viz.mojom.FrameSinkId } */
    this.parentFrameSinkId;
    /** @type { !viz.mojom.FrameSinkId } */
    this.childFrameSinkId;
  }
};
viz.mojom.FrameSinkManager_UnregisterFrameSinkHierarchy_Params = class {
  constructor() {
    /** @type { !viz.mojom.FrameSinkId } */
    this.parentFrameSinkId;
    /** @type { !viz.mojom.FrameSinkId } */
    this.childFrameSinkId;
  }
};
viz.mojom.FrameSinkManager_AssignTemporaryReference_Params = class {
  constructor() {
    /** @type { !viz.mojom.SurfaceId } */
    this.surfaceId;
    /** @type { !viz.mojom.FrameSinkId } */
    this.owner;
  }
};
viz.mojom.FrameSinkManager_DropTemporaryReference_Params = class {
  constructor() {
    /** @type { !viz.mojom.SurfaceId } */
    this.surfaceId;
  }
};
viz.mojom.FrameSinkManager_AddVideoDetectorObserver_Params = class {
  constructor() {
    /** @type { !viz.mojom.VideoDetectorObserverPtr } */
    this.observer;
  }
};
viz.mojom.FrameSinkManager_CreateVideoCapturer_Params = class {
  constructor() {
    /** @type { !mojo.InterfaceRequest } */
    this.request;
  }
};
viz.mojom.FrameSinkManager_EvictSurfaces_Params = class {
  constructor() {
    /** @type { !Array<viz.mojom.SurfaceId> } */
    this.surfaceIds;
  }
};
viz.mojom.FrameSinkManager_RequestCopyOfOutput_Params = class {
  constructor() {
    /** @type { !viz.mojom.SurfaceId } */
    this.surfaceId;
    /** @type { !viz.mojom.CopyOutputRequest } */
    this.request;
  }
};
viz.mojom.FrameSinkManagerClient_OnSurfaceCreated_Params = class {
  constructor() {
    /** @type { !viz.mojom.SurfaceId } */
    this.surfaceId;
  }
};
viz.mojom.FrameSinkManagerClient_OnFirstSurfaceActivation_Params = class {
  constructor() {
    /** @type { !viz.mojom.SurfaceInfo } */
    this.surfaceInfo;
  }
};
viz.mojom.FrameSinkManagerClient_OnAggregatedHitTestRegionListUpdated_Params = class {
  constructor() {
    /** @type { !viz.mojom.FrameSinkId } */
    this.frameSinkId;
    /** @type { !Array<viz.mojom.AggregatedHitTestRegion> } */
    this.hitTestData;
  }
};
viz.mojom.FrameSinkManagerClient_OnFrameTokenChanged_Params = class {
  constructor() {
    /** @type { !viz.mojom.FrameSinkId } */
    this.frameSinkId;
    /** @type { !number } */
    this.frameToken;
  }
};
