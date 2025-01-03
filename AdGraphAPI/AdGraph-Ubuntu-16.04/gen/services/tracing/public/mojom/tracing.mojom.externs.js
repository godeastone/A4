// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let tracing = {};
/** @const */
tracing.mojom = {};
/** @implements {mojo.InterfacePtr} */
tracing.mojom.AgentRegistryPtr = class {

  /**
   * @param { !tracing.mojom.AgentPtr } agent
   * @param { !string } label
   * @param { !tracing.mojom.TraceDataType } type
   * @param { !boolean } supportsExplicitClockSync
   */
   registerAgent(agent, label, type, supportsExplicitClockSync) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
tracing.mojom.AgentRegistry;
/** @implements {mojo.InterfacePtr} */
tracing.mojom.AgentPtr = class {

  /**
   * @param { !string } config
   * @param { !mojoBase.mojom.TimeTicks } coordinatorTime
   * @return {Promise}
   */
   startTracing(config, coordinatorTime) {}
  /**
   * @param { !tracing.mojom.RecorderPtr } recorder
   */
   stopAndFlush(recorder) {}
  /**
   * @param { !string } syncId
   * @return {Promise}
   */
   requestClockSyncMarker(syncId) {}
  /**
   * @return {Promise}
   */
   requestBufferStatus() {}
  /**
   * @return {Promise}
   */
   getCategories() {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
tracing.mojom.Agent;
/** @implements {mojo.InterfacePtr} */
tracing.mojom.RecorderPtr = class {

  /**
   * @param { !string } chunk
   */
   addChunk(chunk) {}
  /**
   * @param { !mojoBase.mojom.DictionaryValue } metadata
   */
   addMetadata(metadata) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
tracing.mojom.Recorder;
/** @implements {mojo.InterfacePtr} */
tracing.mojom.CoordinatorPtr = class {

  /**
   * @param { !string } config
   * @return {Promise}
   */
   startTracing(config) {}
  /**
   * @param { !mojo.MojoHandle } stream
   * @return {Promise}
   */
   stopAndFlush(stream) {}
  /**
   * @param { !mojo.MojoHandle } stream
   * @param { !string } agentLabel
   * @return {Promise}
   */
   stopAndFlushAgent(stream, agentLabel) {}
  /**
   * @return {Promise}
   */
   isTracing() {}
  /**
   * @return {Promise}
   */
   requestBufferUsage() {}
  /**
   * @return {Promise}
   */
   getCategories() {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
tracing.mojom.Coordinator;
tracing.mojom.AgentRegistry_RegisterAgent_Params = class {
  constructor() {
    /** @type { !tracing.mojom.AgentPtr } */
    this.agent;
    /** @type { !string } */
    this.label;
    /** @type { !tracing.mojom.TraceDataType } */
    this.type;
    /** @type { !boolean } */
    this.supportsExplicitClockSync;
  }
};
tracing.mojom.Agent_StartTracing_Params = class {
  constructor() {
    /** @type { !string } */
    this.config;
    /** @type { !mojoBase.mojom.TimeTicks } */
    this.coordinatorTime;
  }
};
tracing.mojom.Agent_StartTracing_ResponseParams = class {
  constructor() {
    /** @type { !boolean } */
    this.success;
  }
};
tracing.mojom.Agent_StopAndFlush_Params = class {
  constructor() {
    /** @type { !tracing.mojom.RecorderPtr } */
    this.recorder;
  }
};
tracing.mojom.Agent_RequestClockSyncMarker_Params = class {
  constructor() {
    /** @type { !string } */
    this.syncId;
  }
};
tracing.mojom.Agent_RequestClockSyncMarker_ResponseParams = class {
  constructor() {
    /** @type { !mojoBase.mojom.TimeTicks } */
    this.issueTs;
    /** @type { !mojoBase.mojom.TimeTicks } */
    this.issueEndTs;
  }
};
tracing.mojom.Agent_RequestBufferStatus_Params = class {
  constructor() {
  }
};
tracing.mojom.Agent_RequestBufferStatus_ResponseParams = class {
  constructor() {
    /** @type { !number } */
    this.capacity;
    /** @type { !number } */
    this.count;
  }
};
tracing.mojom.Agent_GetCategories_Params = class {
  constructor() {
  }
};
tracing.mojom.Agent_GetCategories_ResponseParams = class {
  constructor() {
    /** @type { !string } */
    this.categories;
  }
};
tracing.mojom.Recorder_AddChunk_Params = class {
  constructor() {
    /** @type { !string } */
    this.chunk;
  }
};
tracing.mojom.Recorder_AddMetadata_Params = class {
  constructor() {
    /** @type { !mojoBase.mojom.DictionaryValue } */
    this.metadata;
  }
};
tracing.mojom.Coordinator_StartTracing_Params = class {
  constructor() {
    /** @type { !string } */
    this.config;
  }
};
tracing.mojom.Coordinator_StartTracing_ResponseParams = class {
  constructor() {
    /** @type { !boolean } */
    this.success;
  }
};
tracing.mojom.Coordinator_StopAndFlush_Params = class {
  constructor() {
    /** @type { !mojo.MojoHandle } */
    this.stream;
  }
};
tracing.mojom.Coordinator_StopAndFlush_ResponseParams = class {
  constructor() {
    /** @type { !mojoBase.mojom.DictionaryValue } */
    this.metadata;
  }
};
tracing.mojom.Coordinator_StopAndFlushAgent_Params = class {
  constructor() {
    /** @type { !mojo.MojoHandle } */
    this.stream;
    /** @type { !string } */
    this.agentLabel;
  }
};
tracing.mojom.Coordinator_StopAndFlushAgent_ResponseParams = class {
  constructor() {
    /** @type { !mojoBase.mojom.DictionaryValue } */
    this.metadata;
  }
};
tracing.mojom.Coordinator_IsTracing_Params = class {
  constructor() {
  }
};
tracing.mojom.Coordinator_IsTracing_ResponseParams = class {
  constructor() {
    /** @type { !boolean } */
    this.isTracing;
  }
};
tracing.mojom.Coordinator_RequestBufferUsage_Params = class {
  constructor() {
  }
};
tracing.mojom.Coordinator_RequestBufferUsage_ResponseParams = class {
  constructor() {
    /** @type { !boolean } */
    this.success;
    /** @type { !number } */
    this.percentFull;
    /** @type { !number } */
    this.approximateCount;
  }
};
tracing.mojom.Coordinator_GetCategories_Params = class {
  constructor() {
  }
};
tracing.mojom.Coordinator_GetCategories_ResponseParams = class {
  constructor() {
    /** @type { !boolean } */
    this.success;
    /** @type { !string } */
    this.categories;
  }
};
