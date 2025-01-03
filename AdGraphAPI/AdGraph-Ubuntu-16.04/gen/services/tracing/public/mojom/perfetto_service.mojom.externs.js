// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let tracing = {};
/** @const */
tracing.mojom = {};
/** @implements {mojo.InterfacePtr} */
tracing.mojom.ProducerHostPtr = class {

  /**
   * @param { !tracing.mojom.CommitDataRequest } dataRequest
   */
   commitData(dataRequest) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
tracing.mojom.ProducerHost;
/** @implements {mojo.InterfacePtr} */
tracing.mojom.ProducerClientPtr = class {

  /**
   * @param { !mojo.MojoHandle } sharedMemory
   */
   onTracingStart(sharedMemory) {}
  /**
   * @param { !number } id
   * @param { !tracing.mojom.DataSourceConfig } dataSourceConfig
   */
   createDataSourceInstance(id, dataSourceConfig) {}
  /**
   * @param { !number } id
   */
   tearDownDataSourceInstance(id) {}
  /**
   * @param { !number } flushRequestId
   * @param { !Array<number> } dataSourceIds
   */
   flush(flushRequestId, dataSourceIds) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
tracing.mojom.ProducerClient;
/** @implements {mojo.InterfacePtr} */
tracing.mojom.PerfettoServicePtr = class {

  /**
   * @param { !tracing.mojom.ProducerClientPtr } producerClient
   * @param { !mojo.InterfaceRequest } producerHost
   */
   connectToProducerHost(producerClient, producerHost) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
tracing.mojom.PerfettoService;
tracing.mojom.ChunksToMove = class {
  constructor() {
    /** @type { !number } */
    this.page;
    /** @type { !number } */
    this.chunk;
    /** @type { !number } */
    this.targetBuffer;
  }
};
tracing.mojom.ChunkPatch = class {
  constructor() {
    /** @type { !number } */
    this.offset;
    /** @type { !string } */
    this.data;
  }
};
tracing.mojom.ChunksToPatch = class {
  constructor() {
    /** @type { !number } */
    this.targetBuffer;
    /** @type { !number } */
    this.writerId;
    /** @type { !number } */
    this.chunkId;
    /** @type { !boolean } */
    this.hasMorePatches;
    /** @type { !Array<tracing.mojom.ChunkPatch> } */
    this.patches;
  }
};
tracing.mojom.CommitDataRequest = class {
  constructor() {
    /** @type { !Array<tracing.mojom.ChunksToMove> } */
    this.chunksToMove;
    /** @type { !Array<tracing.mojom.ChunksToPatch> } */
    this.chunksToPatch;
  }
};
tracing.mojom.DataSourceConfig = class {
  constructor() {
    /** @type { !string } */
    this.name;
    /** @type { !string } */
    this.traceConfig;
    /** @type { !number } */
    this.targetBuffer;
  }
};
tracing.mojom.ProducerHost_CommitData_Params = class {
  constructor() {
    /** @type { !tracing.mojom.CommitDataRequest } */
    this.dataRequest;
  }
};
tracing.mojom.ProducerClient_OnTracingStart_Params = class {
  constructor() {
    /** @type { !mojo.MojoHandle } */
    this.sharedMemory;
  }
};
tracing.mojom.ProducerClient_CreateDataSourceInstance_Params = class {
  constructor() {
    /** @type { !number } */
    this.id;
    /** @type { !tracing.mojom.DataSourceConfig } */
    this.dataSourceConfig;
  }
};
tracing.mojom.ProducerClient_TearDownDataSourceInstance_Params = class {
  constructor() {
    /** @type { !number } */
    this.id;
  }
};
tracing.mojom.ProducerClient_Flush_Params = class {
  constructor() {
    /** @type { !number } */
    this.flushRequestId;
    /** @type { !Array<number> } */
    this.dataSourceIds;
  }
};
tracing.mojom.PerfettoService_ConnectToProducerHost_Params = class {
  constructor() {
    /** @type { !tracing.mojom.ProducerClientPtr } */
    this.producerClient;
    /** @type { !mojo.InterfaceRequest } */
    this.producerHost;
  }
};
