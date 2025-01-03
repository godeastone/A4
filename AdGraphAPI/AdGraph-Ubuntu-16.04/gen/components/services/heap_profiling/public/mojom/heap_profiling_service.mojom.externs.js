// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let heapProfiling = {};
/** @const */
heapProfiling.mojom = {};
/** @implements {mojo.InterfacePtr} */
heapProfiling.mojom.ProfilingServicePtr = class {

  /**
   * @param { !mojoBase.mojom.ProcessId } pid
   * @param { !heapProfiling.mojom.ProfilingClientPtr } client
   * @param { !mojo.MojoHandle } memlogPipeReceiver
   * @param { !heapProfiling.mojom.ProcessType } processType
   * @param { !heapProfiling.mojom.ProfilingParams } params
   */
   addProfilingClient(pid, client, memlogPipeReceiver, processType, params) {}
  /**
   * @param { !boolean } keepSmallAllocations
   */
   setKeepSmallAllocations(keepSmallAllocations) {}
  /**
   * @return {Promise}
   */
   getProfiledPids() {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
heapProfiling.mojom.ProfilingService;
heapProfiling.mojom.ProfilingService_AddProfilingClient_Params = class {
  constructor() {
    /** @type { !mojoBase.mojom.ProcessId } */
    this.pid;
    /** @type { !heapProfiling.mojom.ProfilingClientPtr } */
    this.client;
    /** @type { !mojo.MojoHandle } */
    this.memlogPipeReceiver;
    /** @type { !heapProfiling.mojom.ProcessType } */
    this.processType;
    /** @type { !heapProfiling.mojom.ProfilingParams } */
    this.params;
  }
};
heapProfiling.mojom.ProfilingService_SetKeepSmallAllocations_Params = class {
  constructor() {
    /** @type { !boolean } */
    this.keepSmallAllocations;
  }
};
heapProfiling.mojom.ProfilingService_GetProfiledPids_Params = class {
  constructor() {
  }
};
heapProfiling.mojom.ProfilingService_GetProfiledPids_ResponseParams = class {
  constructor() {
    /** @type { !Array<mojoBase.mojom.ProcessId> } */
    this.pids;
  }
};
