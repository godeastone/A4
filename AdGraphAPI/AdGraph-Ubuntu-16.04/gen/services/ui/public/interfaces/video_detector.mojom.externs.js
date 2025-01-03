// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let ui = {};
/** @const */
ui.mojom = {};
/** @implements {mojo.InterfacePtr} */
ui.mojom.VideoDetectorPtr = class {

  /**
   * @param { !viz.mojom.VideoDetectorObserverPtr } observer
   */
   addObserver(observer) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
ui.mojom.VideoDetector;
ui.mojom.VideoDetector_AddObserver_Params = class {
  constructor() {
    /** @type { !viz.mojom.VideoDetectorObserverPtr } */
    this.observer;
  }
};
