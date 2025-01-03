// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let videoCapture = {};
/** @const */
videoCapture.mojom = {};
/** @implements {mojo.InterfacePtr} */
videoCapture.mojom.TestingControlsPtr = class {

  /**
   */
   crash() {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
videoCapture.mojom.TestingControls;
videoCapture.mojom.TestingControls_Crash_Params = class {
  constructor() {
  }
};
