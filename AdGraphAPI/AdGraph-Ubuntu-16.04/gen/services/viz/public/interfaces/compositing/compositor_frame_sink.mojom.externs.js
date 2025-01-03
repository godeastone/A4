// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let viz = {};
/** @const */
viz.mojom = {};
/** @implements {mojo.InterfacePtr} */
viz.mojom.CompositorFrameSinkPtr = class {

  /**
   * @param { !boolean } needsBeginFrame
   */
   setNeedsBeginFrame(needsBeginFrame) {}
  /**
   */
   setWantsAnimateOnlyBeginFrames() {}
  /**
   * @param { !viz.mojom.LocalSurfaceId } localSurfaceId
   * @param { !viz.mojom.CompositorFrame } frame
   * @param { viz.mojom.HitTestRegionList } hitTestRegionList
   * @param { !number } submitTime
   */
   submitCompositorFrame(localSurfaceId, frame, hitTestRegionList, submitTime) {}
  /**
   * @param { !viz.mojom.LocalSurfaceId } localSurfaceId
   * @param { !viz.mojom.CompositorFrame } frame
   * @param { viz.mojom.HitTestRegionList } hitTestRegionList
   * @param { !number } submitTime
   * @return {Promise}
   */
   submitCompositorFrameSync(localSurfaceId, frame, hitTestRegionList, submitTime) {}
  /**
   * @param { !viz.mojom.BeginFrameAck } ack
   */
   didNotProduceFrame(ack) {}
  /**
   * @param { !mojo.MojoHandle } buffer
   * @param { !gpu.mojom.Mailbox } id
   */
   didAllocateSharedBitmap(buffer, id) {}
  /**
   * @param { !gpu.mojom.Mailbox } id
   */
   didDeleteSharedBitmap(id) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
viz.mojom.CompositorFrameSink;
/** @implements {mojo.InterfacePtr} */
viz.mojom.CompositorFrameSinkClientPtr = class {

  /**
   * @param { !Array<viz.mojom.ReturnedResource> } resources
   */
   didReceiveCompositorFrameAck(resources) {}
  /**
   * @param { !number } presentationToken
   * @param { !mojoBase.mojom.TimeTicks } time
   * @param { !mojoBase.mojom.TimeDelta } refresh
   * @param { !number } flags
   */
   didPresentCompositorFrame(presentationToken, time, refresh, flags) {}
  /**
   * @param { !number } presentationToken
   */
   didDiscardCompositorFrame(presentationToken) {}
  /**
   * @param { !viz.mojom.BeginFrameArgs } args
   */
   onBeginFrame(args) {}
  /**
   * @param { !boolean } paused
   */
   onBeginFramePausedChanged(paused) {}
  /**
   * @param { !Array<viz.mojom.ReturnedResource> } resources
   */
   reclaimResources(resources) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
viz.mojom.CompositorFrameSinkClient;
viz.mojom.CompositorFrameSink_SetNeedsBeginFrame_Params = class {
  constructor() {
    /** @type { !boolean } */
    this.needsBeginFrame;
  }
};
viz.mojom.CompositorFrameSink_SetWantsAnimateOnlyBeginFrames_Params = class {
  constructor() {
  }
};
viz.mojom.CompositorFrameSink_SubmitCompositorFrame_Params = class {
  constructor() {
    /** @type { !viz.mojom.LocalSurfaceId } */
    this.localSurfaceId;
    /** @type { !viz.mojom.CompositorFrame } */
    this.frame;
    /** @type { viz.mojom.HitTestRegionList } */
    this.hitTestRegionList;
    /** @type { !number } */
    this.submitTime;
  }
};
viz.mojom.CompositorFrameSink_SubmitCompositorFrameSync_Params = class {
  constructor() {
    /** @type { !viz.mojom.LocalSurfaceId } */
    this.localSurfaceId;
    /** @type { !viz.mojom.CompositorFrame } */
    this.frame;
    /** @type { viz.mojom.HitTestRegionList } */
    this.hitTestRegionList;
    /** @type { !number } */
    this.submitTime;
  }
};
viz.mojom.CompositorFrameSink_SubmitCompositorFrameSync_ResponseParams = class {
  constructor() {
    /** @type { !Array<viz.mojom.ReturnedResource> } */
    this.resources;
  }
};
viz.mojom.CompositorFrameSink_DidNotProduceFrame_Params = class {
  constructor() {
    /** @type { !viz.mojom.BeginFrameAck } */
    this.ack;
  }
};
viz.mojom.CompositorFrameSink_DidAllocateSharedBitmap_Params = class {
  constructor() {
    /** @type { !mojo.MojoHandle } */
    this.buffer;
    /** @type { !gpu.mojom.Mailbox } */
    this.id;
  }
};
viz.mojom.CompositorFrameSink_DidDeleteSharedBitmap_Params = class {
  constructor() {
    /** @type { !gpu.mojom.Mailbox } */
    this.id;
  }
};
viz.mojom.CompositorFrameSinkClient_DidReceiveCompositorFrameAck_Params = class {
  constructor() {
    /** @type { !Array<viz.mojom.ReturnedResource> } */
    this.resources;
  }
};
viz.mojom.CompositorFrameSinkClient_DidPresentCompositorFrame_Params = class {
  constructor() {
    /** @type { !number } */
    this.presentationToken;
    /** @type { !number } */
    this.flags;
    /** @type { !mojoBase.mojom.TimeTicks } */
    this.time;
    /** @type { !mojoBase.mojom.TimeDelta } */
    this.refresh;
  }
};
viz.mojom.CompositorFrameSinkClient_DidDiscardCompositorFrame_Params = class {
  constructor() {
    /** @type { !number } */
    this.presentationToken;
  }
};
viz.mojom.CompositorFrameSinkClient_OnBeginFrame_Params = class {
  constructor() {
    /** @type { !viz.mojom.BeginFrameArgs } */
    this.args;
  }
};
viz.mojom.CompositorFrameSinkClient_OnBeginFramePausedChanged_Params = class {
  constructor() {
    /** @type { !boolean } */
    this.paused;
  }
};
viz.mojom.CompositorFrameSinkClient_ReclaimResources_Params = class {
  constructor() {
    /** @type { !Array<viz.mojom.ReturnedResource> } */
    this.resources;
  }
};
