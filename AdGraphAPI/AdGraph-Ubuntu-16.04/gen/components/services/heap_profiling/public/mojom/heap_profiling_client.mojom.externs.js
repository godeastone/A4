// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let heapProfiling = {};
/** @const */
heapProfiling.mojom = {};
/** @implements {mojo.InterfacePtr} */
heapProfiling.mojom.ProfilingClientPtr = class {

  /**
   * @param { !heapProfiling.mojom.ProfilingParams } params
   */
   startProfiling(params) {}
  /**
   * @param { !number } barrierId
   */
   flushMemlogPipe(barrierId) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
heapProfiling.mojom.ProfilingClient;
heapProfiling.mojom.ProfilingParams = class {
  constructor() {
    /** @type { !mojo.MojoHandle } */
    this.senderPipe;
    /** @type { !heapProfiling.mojom.StackMode } */
    this.stackMode;
    /** @type { !number } */
    this.samplingRate;
  }
};
heapProfiling.mojom.ProfilingClient_StartProfiling_Params = class {
  constructor() {
    /** @type { !heapProfiling.mojom.ProfilingParams } */
    this.params;
  }
};
heapProfiling.mojom.ProfilingClient_FlushMemlogPipe_Params = class {
  constructor() {
    /** @type { !number } */
    this.barrierId;
  }
};
