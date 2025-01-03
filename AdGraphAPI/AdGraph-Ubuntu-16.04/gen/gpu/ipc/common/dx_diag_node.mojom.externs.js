// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let gpu = {};
/** @const */
gpu.mojom = {};
gpu.mojom.DxDiagNode = class {
  constructor() {
    /** @type { !Map<string, string> } */
    this.values;
    /** @type { !Map<string, gpu.mojom.DxDiagNode> } */
    this.children;
  }
};
