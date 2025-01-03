// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let viz = {};
/** @const */
viz.mojom = {};
/** @implements {mojo.InterfacePtr} */
viz.mojom.CompositingModeWatcherPtr = class {

  /**
   */
   compositingModeFallbackToSoftware() {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
viz.mojom.CompositingModeWatcher;
/** @implements {mojo.InterfacePtr} */
viz.mojom.CompositingModeReporterPtr = class {

  /**
   * @param { !viz.mojom.CompositingModeWatcherPtr } watcher
   */
   addCompositingModeWatcher(watcher) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
viz.mojom.CompositingModeReporter;
viz.mojom.CompositingModeWatcher_CompositingModeFallbackToSoftware_Params = class {
  constructor() {
  }
};
viz.mojom.CompositingModeReporter_AddCompositingModeWatcher_Params = class {
  constructor() {
    /** @type { !viz.mojom.CompositingModeWatcherPtr } */
    this.watcher;
  }
};
