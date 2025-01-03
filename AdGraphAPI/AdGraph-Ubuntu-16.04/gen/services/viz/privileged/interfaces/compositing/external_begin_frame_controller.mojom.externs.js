// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let viz = {};
/** @const */
viz.mojom = {};
/** @implements {mojo.InterfacePtr} */
viz.mojom.ExternalBeginFrameControllerPtr = class {

  /**
   * @param { !viz.mojom.BeginFrameArgs } args
   */
   issueExternalBeginFrame(args) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
viz.mojom.ExternalBeginFrameController;
/** @implements {mojo.InterfacePtr} */
viz.mojom.ExternalBeginFrameControllerClientPtr = class {

  /**
   * @param { !boolean } needsBeginFrames
   */
   onNeedsBeginFrames(needsBeginFrames) {}
  /**
   * @param { !viz.mojom.BeginFrameAck } ack
   */
   onDisplayDidFinishFrame(ack) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
viz.mojom.ExternalBeginFrameControllerClient;
viz.mojom.ExternalBeginFrameController_IssueExternalBeginFrame_Params = class {
  constructor() {
    /** @type { !viz.mojom.BeginFrameArgs } */
    this.args;
  }
};
viz.mojom.ExternalBeginFrameControllerClient_OnNeedsBeginFrames_Params = class {
  constructor() {
    /** @type { !boolean } */
    this.needsBeginFrames;
  }
};
viz.mojom.ExternalBeginFrameControllerClient_OnDisplayDidFinishFrame_Params = class {
  constructor() {
    /** @type { !viz.mojom.BeginFrameAck } */
    this.ack;
  }
};
