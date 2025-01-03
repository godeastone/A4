// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let media = {};
/** @const */
media.mojom = {};
/** @implements {mojo.InterfacePtr} */
media.mojom.MediaMetricsProviderPtr = class {

  /**
   * @param { !boolean } isMse
   * @param { !boolean } isTopFrame
   * @param { !url.mojom.Origin } untrustedTopOrigin
   */
   initialize(isMse, isTopFrame, untrustedTopOrigin) {}
  /**
   * @param { !media.mojom.PipelineStatus } status
   */
   onError(status) {}
  /**
   */
   setIsEME() {}
  /**
   * @param { !mojoBase.mojom.TimeDelta } elapsed
   */
   setTimeToMetadata(elapsed) {}
  /**
   * @param { !mojoBase.mojom.TimeDelta } elapsed
   */
   setTimeToFirstFrame(elapsed) {}
  /**
   * @param { !mojoBase.mojom.TimeDelta } elapsed
   */
   setTimeToPlayReady(elapsed) {}
  /**
   * @param { !media.mojom.PlaybackProperties } properties
   * @param { !mojo.InterfaceRequest } recorder
   */
   acquireWatchTimeRecorder(properties, recorder) {}
  /**
   * @param { !mojo.InterfaceRequest } recorder
   */
   acquireVideoDecodeStatsRecorder(recorder) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
media.mojom.MediaMetricsProvider;
media.mojom.MediaMetricsProvider_Initialize_Params = class {
  constructor() {
    /** @type { !boolean } */
    this.isMse;
    /** @type { !boolean } */
    this.isTopFrame;
    /** @type { !url.mojom.Origin } */
    this.untrustedTopOrigin;
  }
};
media.mojom.MediaMetricsProvider_OnError_Params = class {
  constructor() {
    /** @type { !media.mojom.PipelineStatus } */
    this.status;
  }
};
media.mojom.MediaMetricsProvider_SetIsEME_Params = class {
  constructor() {
  }
};
media.mojom.MediaMetricsProvider_SetTimeToMetadata_Params = class {
  constructor() {
    /** @type { !mojoBase.mojom.TimeDelta } */
    this.elapsed;
  }
};
media.mojom.MediaMetricsProvider_SetTimeToFirstFrame_Params = class {
  constructor() {
    /** @type { !mojoBase.mojom.TimeDelta } */
    this.elapsed;
  }
};
media.mojom.MediaMetricsProvider_SetTimeToPlayReady_Params = class {
  constructor() {
    /** @type { !mojoBase.mojom.TimeDelta } */
    this.elapsed;
  }
};
media.mojom.MediaMetricsProvider_AcquireWatchTimeRecorder_Params = class {
  constructor() {
    /** @type { !media.mojom.PlaybackProperties } */
    this.properties;
    /** @type { !mojo.InterfaceRequest } */
    this.recorder;
  }
};
media.mojom.MediaMetricsProvider_AcquireVideoDecodeStatsRecorder_Params = class {
  constructor() {
    /** @type { !mojo.InterfaceRequest } */
    this.recorder;
  }
};
