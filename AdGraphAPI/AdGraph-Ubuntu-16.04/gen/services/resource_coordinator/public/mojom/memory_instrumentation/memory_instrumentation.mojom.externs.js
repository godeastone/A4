// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let memoryInstrumentation = {};
/** @const */
memoryInstrumentation.mojom = {};
/** @implements {mojo.InterfacePtr} */
memoryInstrumentation.mojom.ClientProcessPtr = class {

  /**
   * @param { !memoryInstrumentation.mojom.RequestArgs } args
   * @return {Promise}
   */
   requestChromeMemoryDump(args) {}
  /**
   * @param { !memoryInstrumentation.mojom.HeapProfilingMode } mode
   * @return {Promise}
   */
   enableHeapProfiling(mode) {}
  /**
   * @param { !memoryInstrumentation.mojom.MemoryMapOption } option
   * @param { !Array<mojoBase.mojom.ProcessId> } pids
   * @return {Promise}
   */
   requestOSMemoryDump(option, pids) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
memoryInstrumentation.mojom.ClientProcess;
/** @implements {mojo.InterfacePtr} */
memoryInstrumentation.mojom.HeapProfilerPtr = class {

  /**
   * @param { !boolean } stripPathFromMappedFiles
   * @return {Promise}
   */
   dumpProcessesForTracing(stripPathFromMappedFiles) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
memoryInstrumentation.mojom.HeapProfiler;
/** @implements {mojo.InterfacePtr} */
memoryInstrumentation.mojom.HeapProfilerHelperPtr = class {

  /**
   * @param { !Array<mojoBase.mojom.ProcessId> } pids
   * @return {Promise}
   */
   getVmRegionsForHeapProfiler(pids) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
memoryInstrumentation.mojom.HeapProfilerHelper;
/** @implements {mojo.InterfacePtr} */
memoryInstrumentation.mojom.CoordinatorPtr = class {

  /**
   * @param { !memoryInstrumentation.mojom.ClientProcessPtr } clientProcess
   * @param { !memoryInstrumentation.mojom.ProcessType } processType
   */
   registerClientProcess(clientProcess, processType) {}
  /**
   * @param { !memoryInstrumentation.mojom.DumpType } dumpType
   * @param { !memoryInstrumentation.mojom.LevelOfDetail } levelOfDetail
   * @param { !Array<string> } allocatorDumpNames
   * @return {Promise}
   */
   requestGlobalMemoryDump(dumpType, levelOfDetail, allocatorDumpNames) {}
  /**
   * @param { !mojoBase.mojom.ProcessId } pid
   * @param { !Array<string> } allocatorDumpNames
   * @return {Promise}
   */
   requestGlobalMemoryDumpForPid(pid, allocatorDumpNames) {}
  /**
   * @param { !memoryInstrumentation.mojom.DumpType } dumpType
   * @param { !memoryInstrumentation.mojom.LevelOfDetail } levelOfDetail
   * @return {Promise}
   */
   requestGlobalMemoryDumpAndAppendToTrace(dumpType, levelOfDetail) {}
  /**
   * @param { !memoryInstrumentation.mojom.HeapProfilerPtr } heapProfiler
   */
   registerHeapProfiler(heapProfiler) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
memoryInstrumentation.mojom.Coordinator;
memoryInstrumentation.mojom.RequestArgs = class {
  constructor() {
    /** @type { !number } */
    this.dumpGuid;
    /** @type { !memoryInstrumentation.mojom.DumpType } */
    this.dumpType;
    /** @type { !memoryInstrumentation.mojom.LevelOfDetail } */
    this.levelOfDetail;
  }
};
memoryInstrumentation.mojom.RawAllocatorDumpEdge = class {
  constructor() {
    /** @type { !number } */
    this.sourceId;
    /** @type { !number } */
    this.targetId;
    /** @type { !number } */
    this.importance;
    /** @type { !boolean } */
    this.overridable;
  }
};
memoryInstrumentation.mojom.RawAllocatorDumpEntry = class {
  constructor() {
    /** @type { !string } */
    this.name;
    /** @type { !string } */
    this.units;
    /** @type { !Object } */
    this.value;
  }
};
memoryInstrumentation.mojom.RawAllocatorDump = class {
  constructor() {
    /** @type { !number } */
    this.id;
    /** @type { !string } */
    this.absoluteName;
    /** @type { !boolean } */
    this.weak;
    /** @type { !memoryInstrumentation.mojom.LevelOfDetail } */
    this.levelOfDetail;
    /** @type { !Array<memoryInstrumentation.mojom.RawAllocatorDumpEntry> } */
    this.entries;
  }
};
memoryInstrumentation.mojom.RawProcessMemoryDump = class {
  constructor() {
    /** @type { !memoryInstrumentation.mojom.LevelOfDetail } */
    this.levelOfDetail;
    /** @type { !Array<memoryInstrumentation.mojom.RawAllocatorDumpEdge> } */
    this.allocatorDumpEdges;
    /** @type { !Array<memoryInstrumentation.mojom.RawAllocatorDump> } */
    this.allocatorDumps;
  }
};
memoryInstrumentation.mojom.VmRegion = class {
  constructor() {
    /** @type { !number } */
    this.startAddress;
    /** @type { !number } */
    this.sizeInBytes;
    /** @type { !number } */
    this.moduleTimestamp;
    /** @type { !string } */
    this.moduleDebugid;
    /** @type { !string } */
    this.moduleDebugPath;
    /** @type { !number } */
    this.protectionFlags;
    /** @type { !string } */
    this.mappedFile;
    /** @type { !number } */
    this.byteStatsPrivateDirtyResident;
    /** @type { !number } */
    this.byteStatsPrivateCleanResident;
    /** @type { !number } */
    this.byteStatsSharedDirtyResident;
    /** @type { !number } */
    this.byteStatsSharedCleanResident;
    /** @type { !number } */
    this.byteStatsSwapped;
    /** @type { !number } */
    this.byteStatsProportionalResident;
  }
};
memoryInstrumentation.mojom.PlatformPrivateFootprint = class {
  constructor() {
    /** @type { !number } */
    this.physFootprintBytes;
    /** @type { !number } */
    this.internalBytes;
    /** @type { !number } */
    this.compressedBytes;
    /** @type { !number } */
    this.rssAnonBytes;
    /** @type { !number } */
    this.vmSwapBytes;
    /** @type { !number } */
    this.privateBytes;
  }
};
memoryInstrumentation.mojom.RawOSMemDump = class {
  constructor() {
    /** @type { !number } */
    this.residentSetKb;
    /** @type { !memoryInstrumentation.mojom.PlatformPrivateFootprint } */
    this.platformPrivateFootprint;
    /** @type { !Array<memoryInstrumentation.mojom.VmRegion> } */
    this.memoryMaps;
  }
};
memoryInstrumentation.mojom.OSMemDump = class {
  constructor() {
    /** @type { !number } */
    this.residentSetKb;
    /** @type { !number } */
    this.privateFootprintKb;
    /** @type { !number } */
    this.sharedFootprintKb;
    /** @type { !number } */
    this.privateFootprintSwapKb;
  }
};
memoryInstrumentation.mojom.AllocatorMemDump = class {
  constructor() {
    /** @type { !Map<string, number> } */
    this.numericEntries;
  }
};
memoryInstrumentation.mojom.ProcessMemoryDump = class {
  constructor() {
    /** @type { !memoryInstrumentation.mojom.ProcessType } */
    this.processType;
    /** @type { !memoryInstrumentation.mojom.OSMemDump } */
    this.osDump;
    /** @type { !Map<string, memoryInstrumentation.mojom.AllocatorMemDump> } */
    this.chromeAllocatorDumps;
    /** @type { !mojoBase.mojom.ProcessId } */
    this.pid;
  }
};
memoryInstrumentation.mojom.GlobalMemoryDump = class {
  constructor() {
    /** @type { !Array<memoryInstrumentation.mojom.ProcessMemoryDump> } */
    this.processDumps;
  }
};
memoryInstrumentation.mojom.SharedBufferWithSize = class {
  constructor() {
    /** @type { !mojo.MojoHandle } */
    this.buffer;
    /** @type { !number } */
    this.size;
    /** @type { !mojoBase.mojom.ProcessId } */
    this.pid;
  }
};
memoryInstrumentation.mojom.ClientProcess_RequestChromeMemoryDump_Params = class {
  constructor() {
    /** @type { !memoryInstrumentation.mojom.RequestArgs } */
    this.args;
  }
};
memoryInstrumentation.mojom.ClientProcess_RequestChromeMemoryDump_ResponseParams = class {
  constructor() {
    /** @type { !boolean } */
    this.success;
    /** @type { !number } */
    this.dumpId;
    /** @type { memoryInstrumentation.mojom.RawProcessMemoryDump } */
    this.rawProcessMemoryDump;
  }
};
memoryInstrumentation.mojom.ClientProcess_EnableHeapProfiling_Params = class {
  constructor() {
    /** @type { !memoryInstrumentation.mojom.HeapProfilingMode } */
    this.mode;
  }
};
memoryInstrumentation.mojom.ClientProcess_EnableHeapProfiling_ResponseParams = class {
  constructor() {
    /** @type { !boolean } */
    this.success;
  }
};
memoryInstrumentation.mojom.ClientProcess_RequestOSMemoryDump_Params = class {
  constructor() {
    /** @type { !memoryInstrumentation.mojom.MemoryMapOption } */
    this.option;
    /** @type { !Array<mojoBase.mojom.ProcessId> } */
    this.pids;
  }
};
memoryInstrumentation.mojom.ClientProcess_RequestOSMemoryDump_ResponseParams = class {
  constructor() {
    /** @type { !boolean } */
    this.success;
    /** @type { !Map<mojoBase.mojom.ProcessId, memoryInstrumentation.mojom.RawOSMemDump> } */
    this.dumps;
  }
};
memoryInstrumentation.mojom.HeapProfiler_DumpProcessesForTracing_Params = class {
  constructor() {
    /** @type { !boolean } */
    this.stripPathFromMappedFiles;
  }
};
memoryInstrumentation.mojom.HeapProfiler_DumpProcessesForTracing_ResponseParams = class {
  constructor() {
    /** @type { !Array<memoryInstrumentation.mojom.SharedBufferWithSize> } */
    this.buffers;
  }
};
memoryInstrumentation.mojom.HeapProfilerHelper_GetVmRegionsForHeapProfiler_Params = class {
  constructor() {
    /** @type { !Array<mojoBase.mojom.ProcessId> } */
    this.pids;
  }
};
memoryInstrumentation.mojom.HeapProfilerHelper_GetVmRegionsForHeapProfiler_ResponseParams = class {
  constructor() {
    /** @type { !Map<mojoBase.mojom.ProcessId, Array<memoryInstrumentation.mojom.VmRegion>> } */
    this.vmRegions;
  }
};
memoryInstrumentation.mojom.Coordinator_RegisterClientProcess_Params = class {
  constructor() {
    /** @type { !memoryInstrumentation.mojom.ClientProcessPtr } */
    this.clientProcess;
    /** @type { !memoryInstrumentation.mojom.ProcessType } */
    this.processType;
  }
};
memoryInstrumentation.mojom.Coordinator_RequestGlobalMemoryDump_Params = class {
  constructor() {
    /** @type { !memoryInstrumentation.mojom.DumpType } */
    this.dumpType;
    /** @type { !memoryInstrumentation.mojom.LevelOfDetail } */
    this.levelOfDetail;
    /** @type { !Array<string> } */
    this.allocatorDumpNames;
  }
};
memoryInstrumentation.mojom.Coordinator_RequestGlobalMemoryDump_ResponseParams = class {
  constructor() {
    /** @type { !boolean } */
    this.success;
    /** @type { memoryInstrumentation.mojom.GlobalMemoryDump } */
    this.globalMemoryDump;
  }
};
memoryInstrumentation.mojom.Coordinator_RequestGlobalMemoryDumpForPid_Params = class {
  constructor() {
    /** @type { !mojoBase.mojom.ProcessId } */
    this.pid;
    /** @type { !Array<string> } */
    this.allocatorDumpNames;
  }
};
memoryInstrumentation.mojom.Coordinator_RequestGlobalMemoryDumpForPid_ResponseParams = class {
  constructor() {
    /** @type { !boolean } */
    this.success;
    /** @type { memoryInstrumentation.mojom.GlobalMemoryDump } */
    this.globalMemoryDump;
  }
};
memoryInstrumentation.mojom.Coordinator_RequestGlobalMemoryDumpAndAppendToTrace_Params = class {
  constructor() {
    /** @type { !memoryInstrumentation.mojom.DumpType } */
    this.dumpType;
    /** @type { !memoryInstrumentation.mojom.LevelOfDetail } */
    this.levelOfDetail;
  }
};
memoryInstrumentation.mojom.Coordinator_RequestGlobalMemoryDumpAndAppendToTrace_ResponseParams = class {
  constructor() {
    /** @type { !boolean } */
    this.success;
    /** @type { !number } */
    this.dumpId;
  }
};
memoryInstrumentation.mojom.Coordinator_RegisterHeapProfiler_Params = class {
  constructor() {
    /** @type { !memoryInstrumentation.mojom.HeapProfilerPtr } */
    this.heapProfiler;
  }
};
