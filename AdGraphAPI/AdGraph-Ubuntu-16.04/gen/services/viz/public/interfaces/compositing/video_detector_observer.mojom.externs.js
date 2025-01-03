// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let viz = {};
/** @const */
viz.mojom = {};
/** @implements {mojo.InterfacePtr} */
viz.mojom.VideoDetectorObserverPtr = class {

  /**
   */
   onVideoActivityStarted() {}
  /**
   */
   onVideoActivityEnded() {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
viz.mojom.VideoDetectorObserver;
viz.mojom.VideoDetectorObserver_OnVideoActivityStarted_Params = class {
  constructor() {
  }
};
viz.mojom.VideoDetectorObserver_OnVideoActivityEnded_Params = class {
  constructor() {
  }
};
