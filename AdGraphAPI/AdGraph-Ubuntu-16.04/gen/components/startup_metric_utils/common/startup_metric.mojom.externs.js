// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let startupMetricUtils = {};
/** @const */
startupMetricUtils.mojom = {};
/** @implements {mojo.InterfacePtr} */
startupMetricUtils.mojom.StartupMetricHostPtr = class {

  /**
   * @param { !mojoBase.mojom.TimeTicks } rendererMainEntryTime
   */
   recordRendererMainEntryTime(rendererMainEntryTime) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
startupMetricUtils.mojom.StartupMetricHost;
startupMetricUtils.mojom.StartupMetricHost_RecordRendererMainEntryTime_Params = class {
  constructor() {
    /** @type { !mojoBase.mojom.TimeTicks } */
    this.rendererMainEntryTime;
  }
};
