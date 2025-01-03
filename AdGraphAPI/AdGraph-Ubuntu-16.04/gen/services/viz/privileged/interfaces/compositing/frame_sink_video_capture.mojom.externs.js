// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let viz = {};
/** @const */
viz.mojom = {};
/** @implements {mojo.InterfacePtr} */
viz.mojom.FrameSinkVideoConsumerFrameCallbacksPtr = class {

  /**
   */
   done() {}
  /**
   * @param { !number } utilization
   */
   provideFeedback(utilization) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
viz.mojom.FrameSinkVideoConsumerFrameCallbacks;
/** @implements {mojo.InterfacePtr} */
viz.mojom.FrameSinkVideoConsumerPtr = class {

  /**
   * @param { !mojo.MojoHandle } buffer
   * @param { !number } bufferSize
   * @param { !media.mojom.VideoFrameInfo } info
   * @param { !gfx.mojom.Rect } updateRect
   * @param { !gfx.mojom.Rect } contentRect
   * @param { !viz.mojom.FrameSinkVideoConsumerFrameCallbacksPtr } callbacks
   */
   onFrameCaptured(buffer, bufferSize, info, updateRect, contentRect, callbacks) {}
  /**
   * @param { !viz.mojom.FrameSinkId } frameSinkId
   */
   onTargetLost(frameSinkId) {}
  /**
   */
   onStopped() {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
viz.mojom.FrameSinkVideoConsumer;
/** @implements {mojo.InterfacePtr} */
viz.mojom.FrameSinkVideoCapturerPtr = class {

  /**
   * @param { !media.mojom.VideoPixelFormat } format
   * @param { !media.mojom.ColorSpace } colorSpace
   */
   setFormat(format, colorSpace) {}
  /**
   * @param { !mojoBase.mojom.TimeDelta } minPeriod
   */
   setMinCapturePeriod(minPeriod) {}
  /**
   * @param { !mojoBase.mojom.TimeDelta } minPeriod
   */
   setMinSizeChangePeriod(minPeriod) {}
  /**
   * @param { !gfx.mojom.Size } minSize
   * @param { !gfx.mojom.Size } maxSize
   * @param { !boolean } useFixedAspectRatio
   */
   setResolutionConstraints(minSize, maxSize, useFixedAspectRatio) {}
  /**
   * @param { !boolean } enabled
   */
   setAutoThrottlingEnabled(enabled) {}
  /**
   * @param { !viz.mojom.FrameSinkId } frameSinkId
   */
   changeTarget(frameSinkId) {}
  /**
   * @param { !viz.mojom.FrameSinkVideoConsumerPtr } consumer
   */
   start(consumer) {}
  /**
   */
   stop() {}
  /**
   */
   requestRefreshFrame() {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
viz.mojom.FrameSinkVideoCapturer;
viz.mojom.FrameSinkVideoConsumerFrameCallbacks_Done_Params = class {
  constructor() {
  }
};
viz.mojom.FrameSinkVideoConsumerFrameCallbacks_ProvideFeedback_Params = class {
  constructor() {
    /** @type { !number } */
    this.utilization;
  }
};
viz.mojom.FrameSinkVideoConsumer_OnFrameCaptured_Params = class {
  constructor() {
    /** @type { !mojo.MojoHandle } */
    this.buffer;
    /** @type { !number } */
    this.bufferSize;
    /** @type { !media.mojom.VideoFrameInfo } */
    this.info;
    /** @type { !gfx.mojom.Rect } */
    this.updateRect;
    /** @type { !gfx.mojom.Rect } */
    this.contentRect;
    /** @type { !viz.mojom.FrameSinkVideoConsumerFrameCallbacksPtr } */
    this.callbacks;
  }
};
viz.mojom.FrameSinkVideoConsumer_OnTargetLost_Params = class {
  constructor() {
    /** @type { !viz.mojom.FrameSinkId } */
    this.frameSinkId;
  }
};
viz.mojom.FrameSinkVideoConsumer_OnStopped_Params = class {
  constructor() {
  }
};
viz.mojom.FrameSinkVideoCapturer_SetFormat_Params = class {
  constructor() {
    /** @type { !media.mojom.VideoPixelFormat } */
    this.format;
    /** @type { !media.mojom.ColorSpace } */
    this.colorSpace;
  }
};
viz.mojom.FrameSinkVideoCapturer_SetMinCapturePeriod_Params = class {
  constructor() {
    /** @type { !mojoBase.mojom.TimeDelta } */
    this.minPeriod;
  }
};
viz.mojom.FrameSinkVideoCapturer_SetMinSizeChangePeriod_Params = class {
  constructor() {
    /** @type { !mojoBase.mojom.TimeDelta } */
    this.minPeriod;
  }
};
viz.mojom.FrameSinkVideoCapturer_SetResolutionConstraints_Params = class {
  constructor() {
    /** @type { !gfx.mojom.Size } */
    this.minSize;
    /** @type { !gfx.mojom.Size } */
    this.maxSize;
    /** @type { !boolean } */
    this.useFixedAspectRatio;
  }
};
viz.mojom.FrameSinkVideoCapturer_SetAutoThrottlingEnabled_Params = class {
  constructor() {
    /** @type { !boolean } */
    this.enabled;
  }
};
viz.mojom.FrameSinkVideoCapturer_ChangeTarget_Params = class {
  constructor() {
    /** @type { !viz.mojom.FrameSinkId } */
    this.frameSinkId;
  }
};
viz.mojom.FrameSinkVideoCapturer_Start_Params = class {
  constructor() {
    /** @type { !viz.mojom.FrameSinkVideoConsumerPtr } */
    this.consumer;
  }
};
viz.mojom.FrameSinkVideoCapturer_Stop_Params = class {
  constructor() {
  }
};
viz.mojom.FrameSinkVideoCapturer_RequestRefreshFrame_Params = class {
  constructor() {
  }
};
