// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'services/resource_coordinator/public/mojom/memory_instrumentation/memory_instrumentation.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('memoryInstrumentation.mojom');
  var process_id$ =
      mojo.internal.exposeNamespace('mojoBase.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'mojo/public/mojom/base/process_id.mojom', '../../../../../mojo/public/mojom/base/process_id.mojom.js');
  }


  var DumpType = {};
  DumpType.PERIODIC_INTERVAL = 0;
  DumpType.EXPLICITLY_TRIGGERED = DumpType.PERIODIC_INTERVAL + 1;
  DumpType.PEAK_MEMORY_USAGE = DumpType.EXPLICITLY_TRIGGERED + 1;
  DumpType.SUMMARY_ONLY = DumpType.PEAK_MEMORY_USAGE + 1;

  DumpType.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
      return true;
    }
    return false;
  };

  DumpType.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };
  var LevelOfDetail = {};
  LevelOfDetail.BACKGROUND = 0;
  LevelOfDetail.LIGHT = LevelOfDetail.BACKGROUND + 1;
  LevelOfDetail.DETAILED = LevelOfDetail.LIGHT + 1;

  LevelOfDetail.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    }
    return false;
  };

  LevelOfDetail.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };
  var ProcessType = {};
  ProcessType.OTHER = 0;
  ProcessType.BROWSER = ProcessType.OTHER + 1;
  ProcessType.RENDERER = ProcessType.BROWSER + 1;
  ProcessType.GPU = ProcessType.RENDERER + 1;
  ProcessType.UTILITY = ProcessType.GPU + 1;
  ProcessType.PLUGIN = ProcessType.UTILITY + 1;

  ProcessType.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
      return true;
    }
    return false;
  };

  ProcessType.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };
  var HeapProfilingMode = {};
  HeapProfilingMode.DISABLED = 0;
  HeapProfilingMode.TASK_PROFILER = HeapProfilingMode.DISABLED + 1;
  HeapProfilingMode.BACKGROUND = HeapProfilingMode.TASK_PROFILER + 1;
  HeapProfilingMode.PSEUDO_STACK = HeapProfilingMode.BACKGROUND + 1;
  HeapProfilingMode.NATIVE_STACK = HeapProfilingMode.PSEUDO_STACK + 1;

  HeapProfilingMode.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
      return true;
    }
    return false;
  };

  HeapProfilingMode.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };
  var MemoryMapOption = {};
  MemoryMapOption.NONE = 0;
  MemoryMapOption.MODULES = MemoryMapOption.NONE + 1;
  MemoryMapOption.FULL = MemoryMapOption.MODULES + 1;

  MemoryMapOption.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    }
    return false;
  };

  MemoryMapOption.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };

  function RequestArgs(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  RequestArgs.prototype.initDefaults_ = function() {
    this.dumpGuid = 0;
    this.dumpType = 0;
    this.levelOfDetail = 0;
  };
  RequestArgs.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  RequestArgs.generate = function(generator_) {
    var generated = new RequestArgs;
    generated.dumpGuid = generator_.generateUint64();
    generated.dumpType = generator_.generateEnum(0, 3);
    generated.levelOfDetail = generator_.generateEnum(0, 2);
    return generated;
  };

  RequestArgs.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.dumpGuid = mutator_.mutateUint64(this.dumpGuid);
    }
    if (mutator_.chooseMutateField()) {
      this.dumpType = mutator_.mutateEnum(this.dumpType, 0, 3);
    }
    if (mutator_.chooseMutateField()) {
      this.levelOfDetail = mutator_.mutateEnum(this.levelOfDetail, 0, 2);
    }
    return this;
  };
  RequestArgs.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  RequestArgs.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  RequestArgs.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  RequestArgs.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 24}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;



    // validate RequestArgs.dumpType
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 8, DumpType);
    if (err !== validator.validationError.NONE)
        return err;


    // validate RequestArgs.levelOfDetail
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 12, LevelOfDetail);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  RequestArgs.encodedSize = codec.kStructHeaderSize + 16;

  RequestArgs.decode = function(decoder) {
    var packed;
    var val = new RequestArgs();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.dumpGuid = decoder.decodeStruct(codec.Uint64);
    val.dumpType = decoder.decodeStruct(codec.Int32);
    val.levelOfDetail = decoder.decodeStruct(codec.Int32);
    return val;
  };

  RequestArgs.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(RequestArgs.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint64, val.dumpGuid);
    encoder.encodeStruct(codec.Int32, val.dumpType);
    encoder.encodeStruct(codec.Int32, val.levelOfDetail);
  };
  function RawAllocatorDumpEdge(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  RawAllocatorDumpEdge.prototype.initDefaults_ = function() {
    this.sourceId = 0;
    this.targetId = 0;
    this.importance = 0;
    this.overridable = false;
  };
  RawAllocatorDumpEdge.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  RawAllocatorDumpEdge.generate = function(generator_) {
    var generated = new RawAllocatorDumpEdge;
    generated.sourceId = generator_.generateUint64();
    generated.targetId = generator_.generateUint64();
    generated.importance = generator_.generateInt64();
    generated.overridable = generator_.generateBool();
    return generated;
  };

  RawAllocatorDumpEdge.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.sourceId = mutator_.mutateUint64(this.sourceId);
    }
    if (mutator_.chooseMutateField()) {
      this.targetId = mutator_.mutateUint64(this.targetId);
    }
    if (mutator_.chooseMutateField()) {
      this.importance = mutator_.mutateInt64(this.importance);
    }
    if (mutator_.chooseMutateField()) {
      this.overridable = mutator_.mutateBool(this.overridable);
    }
    return this;
  };
  RawAllocatorDumpEdge.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  RawAllocatorDumpEdge.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  RawAllocatorDumpEdge.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  RawAllocatorDumpEdge.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 40}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;





    return validator.validationError.NONE;
  };

  RawAllocatorDumpEdge.encodedSize = codec.kStructHeaderSize + 32;

  RawAllocatorDumpEdge.decode = function(decoder) {
    var packed;
    var val = new RawAllocatorDumpEdge();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.sourceId = decoder.decodeStruct(codec.Uint64);
    val.targetId = decoder.decodeStruct(codec.Uint64);
    val.importance = decoder.decodeStruct(codec.Int64);
    packed = decoder.readUint8();
    val.overridable = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  RawAllocatorDumpEdge.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(RawAllocatorDumpEdge.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint64, val.sourceId);
    encoder.encodeStruct(codec.Uint64, val.targetId);
    encoder.encodeStruct(codec.Int64, val.importance);
    packed = 0;
    packed |= (val.overridable & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function RawAllocatorDumpEntry(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  RawAllocatorDumpEntry.prototype.initDefaults_ = function() {
    this.name = null;
    this.units = null;
    this.value = null;
  };
  RawAllocatorDumpEntry.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  RawAllocatorDumpEntry.generate = function(generator_) {
    var generated = new RawAllocatorDumpEntry;
    generated.name = generator_.generateString(false);
    generated.units = generator_.generateString(false);
    generated.value = generator_.generateUnion(memoryInstrumentation.mojom.RawAllocatorDumpEntryValue, false);
    return generated;
  };

  RawAllocatorDumpEntry.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.name = mutator_.mutateString(this.name, false);
    }
    if (mutator_.chooseMutateField()) {
      this.units = mutator_.mutateString(this.units, false);
    }
    if (mutator_.chooseMutateField()) {
      this.value = mutator_.mutateUnion(memoryInstrumentation.mojom.RawAllocatorDumpEntryValue, false);
    }
    return this;
  };
  RawAllocatorDumpEntry.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  RawAllocatorDumpEntry.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  RawAllocatorDumpEntry.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  RawAllocatorDumpEntry.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 40}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;


    // validate RawAllocatorDumpEntry.name
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate RawAllocatorDumpEntry.units
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate RawAllocatorDumpEntry.value
    err = messageValidator.validateUnion(offset + codec.kStructHeaderSize + 16, RawAllocatorDumpEntryValue, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  RawAllocatorDumpEntry.encodedSize = codec.kStructHeaderSize + 32;

  RawAllocatorDumpEntry.decode = function(decoder) {
    var packed;
    var val = new RawAllocatorDumpEntry();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.name = decoder.decodeStruct(codec.String);
    val.units = decoder.decodeStruct(codec.String);
    val.value = decoder.decodeStruct(RawAllocatorDumpEntryValue);
    return val;
  };

  RawAllocatorDumpEntry.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(RawAllocatorDumpEntry.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.name);
    encoder.encodeStruct(codec.String, val.units);
    encoder.encodeStruct(RawAllocatorDumpEntryValue, val.value);
  };
  function RawAllocatorDump(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  RawAllocatorDump.prototype.initDefaults_ = function() {
    this.id = 0;
    this.absoluteName = null;
    this.weak = false;
    this.levelOfDetail = 0;
    this.entries = null;
  };
  RawAllocatorDump.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  RawAllocatorDump.generate = function(generator_) {
    var generated = new RawAllocatorDump;
    generated.id = generator_.generateUint64();
    generated.absoluteName = generator_.generateString(false);
    generated.weak = generator_.generateBool();
    generated.levelOfDetail = generator_.generateEnum(0, 2);
    generated.entries = generator_.generateArray(function() {
      return generator_.generateStruct(memoryInstrumentation.mojom.RawAllocatorDumpEntry, false);
    });
    return generated;
  };

  RawAllocatorDump.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.id = mutator_.mutateUint64(this.id);
    }
    if (mutator_.chooseMutateField()) {
      this.absoluteName = mutator_.mutateString(this.absoluteName, false);
    }
    if (mutator_.chooseMutateField()) {
      this.weak = mutator_.mutateBool(this.weak);
    }
    if (mutator_.chooseMutateField()) {
      this.levelOfDetail = mutator_.mutateEnum(this.levelOfDetail, 0, 2);
    }
    if (mutator_.chooseMutateField()) {
      this.entries = mutator_.mutateArray(this.entries, function(val) {
        return mutator_.mutateStruct(memoryInstrumentation.mojom.RawAllocatorDumpEntry, false);
      });
    }
    return this;
  };
  RawAllocatorDump.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  RawAllocatorDump.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  RawAllocatorDump.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  RawAllocatorDump.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 40}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;



    // validate RawAllocatorDump.absoluteName
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;



    // validate RawAllocatorDump.levelOfDetail
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 20, LevelOfDetail);
    if (err !== validator.validationError.NONE)
        return err;


    // validate RawAllocatorDump.entries
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 24, 8, new codec.PointerTo(RawAllocatorDumpEntry), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  RawAllocatorDump.encodedSize = codec.kStructHeaderSize + 32;

  RawAllocatorDump.decode = function(decoder) {
    var packed;
    var val = new RawAllocatorDump();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.id = decoder.decodeStruct(codec.Uint64);
    val.absoluteName = decoder.decodeStruct(codec.String);
    packed = decoder.readUint8();
    val.weak = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.levelOfDetail = decoder.decodeStruct(codec.Int32);
    val.entries = decoder.decodeArrayPointer(new codec.PointerTo(RawAllocatorDumpEntry));
    return val;
  };

  RawAllocatorDump.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(RawAllocatorDump.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint64, val.id);
    encoder.encodeStruct(codec.String, val.absoluteName);
    packed = 0;
    packed |= (val.weak & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.Int32, val.levelOfDetail);
    encoder.encodeArrayPointer(new codec.PointerTo(RawAllocatorDumpEntry), val.entries);
  };
  function RawProcessMemoryDump(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  RawProcessMemoryDump.prototype.initDefaults_ = function() {
    this.levelOfDetail = 0;
    this.allocatorDumpEdges = null;
    this.allocatorDumps = null;
  };
  RawProcessMemoryDump.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  RawProcessMemoryDump.generate = function(generator_) {
    var generated = new RawProcessMemoryDump;
    generated.levelOfDetail = generator_.generateEnum(0, 2);
    generated.allocatorDumpEdges = generator_.generateArray(function() {
      return generator_.generateStruct(memoryInstrumentation.mojom.RawAllocatorDumpEdge, false);
    });
    generated.allocatorDumps = generator_.generateArray(function() {
      return generator_.generateStruct(memoryInstrumentation.mojom.RawAllocatorDump, false);
    });
    return generated;
  };

  RawProcessMemoryDump.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.levelOfDetail = mutator_.mutateEnum(this.levelOfDetail, 0, 2);
    }
    if (mutator_.chooseMutateField()) {
      this.allocatorDumpEdges = mutator_.mutateArray(this.allocatorDumpEdges, function(val) {
        return mutator_.mutateStruct(memoryInstrumentation.mojom.RawAllocatorDumpEdge, false);
      });
    }
    if (mutator_.chooseMutateField()) {
      this.allocatorDumps = mutator_.mutateArray(this.allocatorDumps, function(val) {
        return mutator_.mutateStruct(memoryInstrumentation.mojom.RawAllocatorDump, false);
      });
    }
    return this;
  };
  RawProcessMemoryDump.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  RawProcessMemoryDump.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  RawProcessMemoryDump.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  RawProcessMemoryDump.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 32}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;


    // validate RawProcessMemoryDump.levelOfDetail
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, LevelOfDetail);
    if (err !== validator.validationError.NONE)
        return err;


    // validate RawProcessMemoryDump.allocatorDumpEdges
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 8, new codec.PointerTo(RawAllocatorDumpEdge), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;


    // validate RawProcessMemoryDump.allocatorDumps
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 16, 8, new codec.PointerTo(RawAllocatorDump), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  RawProcessMemoryDump.encodedSize = codec.kStructHeaderSize + 24;

  RawProcessMemoryDump.decode = function(decoder) {
    var packed;
    var val = new RawProcessMemoryDump();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.levelOfDetail = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.allocatorDumpEdges = decoder.decodeArrayPointer(new codec.PointerTo(RawAllocatorDumpEdge));
    val.allocatorDumps = decoder.decodeArrayPointer(new codec.PointerTo(RawAllocatorDump));
    return val;
  };

  RawProcessMemoryDump.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(RawProcessMemoryDump.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.levelOfDetail);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeArrayPointer(new codec.PointerTo(RawAllocatorDumpEdge), val.allocatorDumpEdges);
    encoder.encodeArrayPointer(new codec.PointerTo(RawAllocatorDump), val.allocatorDumps);
  };
  function VmRegion(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  VmRegion.kProtectionFlagsRead = 4;
  VmRegion.kProtectionFlagsWrite = 2;
  VmRegion.kProtectionFlagsExec = 1;
  VmRegion.kProtectionFlagsMayshare = 128;
  VmRegion.prototype.initDefaults_ = function() {
    this.startAddress = 0;
    this.sizeInBytes = 0;
    this.moduleTimestamp = 0;
    this.moduleDebugid = null;
    this.moduleDebugPath = null;
    this.protectionFlags = 0;
    this.mappedFile = null;
    this.byteStatsPrivateDirtyResident = 0;
    this.byteStatsPrivateCleanResident = 0;
    this.byteStatsSharedDirtyResident = 0;
    this.byteStatsSharedCleanResident = 0;
    this.byteStatsSwapped = 0;
    this.byteStatsProportionalResident = 0;
  };
  VmRegion.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  VmRegion.generate = function(generator_) {
    var generated = new VmRegion;
    generated.startAddress = generator_.generateUint64();
    generated.sizeInBytes = generator_.generateUint64();
    generated.moduleTimestamp = generator_.generateUint64();
    generated.moduleDebugid = generator_.generateString(false);
    generated.moduleDebugPath = generator_.generateString(false);
    generated.protectionFlags = generator_.generateUint32();
    generated.mappedFile = generator_.generateString(false);
    generated.byteStatsPrivateDirtyResident = generator_.generateUint64();
    generated.byteStatsPrivateCleanResident = generator_.generateUint64();
    generated.byteStatsSharedDirtyResident = generator_.generateUint64();
    generated.byteStatsSharedCleanResident = generator_.generateUint64();
    generated.byteStatsSwapped = generator_.generateUint64();
    generated.byteStatsProportionalResident = generator_.generateUint64();
    return generated;
  };

  VmRegion.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.startAddress = mutator_.mutateUint64(this.startAddress);
    }
    if (mutator_.chooseMutateField()) {
      this.sizeInBytes = mutator_.mutateUint64(this.sizeInBytes);
    }
    if (mutator_.chooseMutateField()) {
      this.moduleTimestamp = mutator_.mutateUint64(this.moduleTimestamp);
    }
    if (mutator_.chooseMutateField()) {
      this.moduleDebugid = mutator_.mutateString(this.moduleDebugid, false);
    }
    if (mutator_.chooseMutateField()) {
      this.moduleDebugPath = mutator_.mutateString(this.moduleDebugPath, false);
    }
    if (mutator_.chooseMutateField()) {
      this.protectionFlags = mutator_.mutateUint32(this.protectionFlags);
    }
    if (mutator_.chooseMutateField()) {
      this.mappedFile = mutator_.mutateString(this.mappedFile, false);
    }
    if (mutator_.chooseMutateField()) {
      this.byteStatsPrivateDirtyResident = mutator_.mutateUint64(this.byteStatsPrivateDirtyResident);
    }
    if (mutator_.chooseMutateField()) {
      this.byteStatsPrivateCleanResident = mutator_.mutateUint64(this.byteStatsPrivateCleanResident);
    }
    if (mutator_.chooseMutateField()) {
      this.byteStatsSharedDirtyResident = mutator_.mutateUint64(this.byteStatsSharedDirtyResident);
    }
    if (mutator_.chooseMutateField()) {
      this.byteStatsSharedCleanResident = mutator_.mutateUint64(this.byteStatsSharedCleanResident);
    }
    if (mutator_.chooseMutateField()) {
      this.byteStatsSwapped = mutator_.mutateUint64(this.byteStatsSwapped);
    }
    if (mutator_.chooseMutateField()) {
      this.byteStatsProportionalResident = mutator_.mutateUint64(this.byteStatsProportionalResident);
    }
    return this;
  };
  VmRegion.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  VmRegion.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  VmRegion.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  VmRegion.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 112}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;





    // validate VmRegion.moduleDebugid
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 24, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate VmRegion.moduleDebugPath
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 32, false)
    if (err !== validator.validationError.NONE)
        return err;



    // validate VmRegion.mappedFile
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 48, false)
    if (err !== validator.validationError.NONE)
        return err;







    return validator.validationError.NONE;
  };

  VmRegion.encodedSize = codec.kStructHeaderSize + 104;

  VmRegion.decode = function(decoder) {
    var packed;
    var val = new VmRegion();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.startAddress = decoder.decodeStruct(codec.Uint64);
    val.sizeInBytes = decoder.decodeStruct(codec.Uint64);
    val.moduleTimestamp = decoder.decodeStruct(codec.Uint64);
    val.moduleDebugid = decoder.decodeStruct(codec.String);
    val.moduleDebugPath = decoder.decodeStruct(codec.String);
    val.protectionFlags = decoder.decodeStruct(codec.Uint32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.mappedFile = decoder.decodeStruct(codec.String);
    val.byteStatsPrivateDirtyResident = decoder.decodeStruct(codec.Uint64);
    val.byteStatsPrivateCleanResident = decoder.decodeStruct(codec.Uint64);
    val.byteStatsSharedDirtyResident = decoder.decodeStruct(codec.Uint64);
    val.byteStatsSharedCleanResident = decoder.decodeStruct(codec.Uint64);
    val.byteStatsSwapped = decoder.decodeStruct(codec.Uint64);
    val.byteStatsProportionalResident = decoder.decodeStruct(codec.Uint64);
    return val;
  };

  VmRegion.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(VmRegion.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint64, val.startAddress);
    encoder.encodeStruct(codec.Uint64, val.sizeInBytes);
    encoder.encodeStruct(codec.Uint64, val.moduleTimestamp);
    encoder.encodeStruct(codec.String, val.moduleDebugid);
    encoder.encodeStruct(codec.String, val.moduleDebugPath);
    encoder.encodeStruct(codec.Uint32, val.protectionFlags);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.String, val.mappedFile);
    encoder.encodeStruct(codec.Uint64, val.byteStatsPrivateDirtyResident);
    encoder.encodeStruct(codec.Uint64, val.byteStatsPrivateCleanResident);
    encoder.encodeStruct(codec.Uint64, val.byteStatsSharedDirtyResident);
    encoder.encodeStruct(codec.Uint64, val.byteStatsSharedCleanResident);
    encoder.encodeStruct(codec.Uint64, val.byteStatsSwapped);
    encoder.encodeStruct(codec.Uint64, val.byteStatsProportionalResident);
  };
  function PlatformPrivateFootprint(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PlatformPrivateFootprint.prototype.initDefaults_ = function() {
    this.physFootprintBytes = 0;
    this.internalBytes = 0;
    this.compressedBytes = 0;
    this.rssAnonBytes = 0;
    this.vmSwapBytes = 0;
    this.privateBytes = 0;
  };
  PlatformPrivateFootprint.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PlatformPrivateFootprint.generate = function(generator_) {
    var generated = new PlatformPrivateFootprint;
    generated.physFootprintBytes = generator_.generateUint64();
    generated.internalBytes = generator_.generateUint64();
    generated.compressedBytes = generator_.generateUint64();
    generated.rssAnonBytes = generator_.generateUint64();
    generated.vmSwapBytes = generator_.generateUint64();
    generated.privateBytes = generator_.generateUint64();
    return generated;
  };

  PlatformPrivateFootprint.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.physFootprintBytes = mutator_.mutateUint64(this.physFootprintBytes);
    }
    if (mutator_.chooseMutateField()) {
      this.internalBytes = mutator_.mutateUint64(this.internalBytes);
    }
    if (mutator_.chooseMutateField()) {
      this.compressedBytes = mutator_.mutateUint64(this.compressedBytes);
    }
    if (mutator_.chooseMutateField()) {
      this.rssAnonBytes = mutator_.mutateUint64(this.rssAnonBytes);
    }
    if (mutator_.chooseMutateField()) {
      this.vmSwapBytes = mutator_.mutateUint64(this.vmSwapBytes);
    }
    if (mutator_.chooseMutateField()) {
      this.privateBytes = mutator_.mutateUint64(this.privateBytes);
    }
    return this;
  };
  PlatformPrivateFootprint.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PlatformPrivateFootprint.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PlatformPrivateFootprint.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PlatformPrivateFootprint.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 56}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;







    return validator.validationError.NONE;
  };

  PlatformPrivateFootprint.encodedSize = codec.kStructHeaderSize + 48;

  PlatformPrivateFootprint.decode = function(decoder) {
    var packed;
    var val = new PlatformPrivateFootprint();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.physFootprintBytes = decoder.decodeStruct(codec.Uint64);
    val.internalBytes = decoder.decodeStruct(codec.Uint64);
    val.compressedBytes = decoder.decodeStruct(codec.Uint64);
    val.rssAnonBytes = decoder.decodeStruct(codec.Uint64);
    val.vmSwapBytes = decoder.decodeStruct(codec.Uint64);
    val.privateBytes = decoder.decodeStruct(codec.Uint64);
    return val;
  };

  PlatformPrivateFootprint.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PlatformPrivateFootprint.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint64, val.physFootprintBytes);
    encoder.encodeStruct(codec.Uint64, val.internalBytes);
    encoder.encodeStruct(codec.Uint64, val.compressedBytes);
    encoder.encodeStruct(codec.Uint64, val.rssAnonBytes);
    encoder.encodeStruct(codec.Uint64, val.vmSwapBytes);
    encoder.encodeStruct(codec.Uint64, val.privateBytes);
  };
  function RawOSMemDump(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  RawOSMemDump.prototype.initDefaults_ = function() {
    this.residentSetKb = 0;
    this.platformPrivateFootprint = null;
    this.memoryMaps = null;
  };
  RawOSMemDump.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  RawOSMemDump.generate = function(generator_) {
    var generated = new RawOSMemDump;
    generated.residentSetKb = generator_.generateUint32();
    generated.platformPrivateFootprint = generator_.generateStruct(memoryInstrumentation.mojom.PlatformPrivateFootprint, false);
    generated.memoryMaps = generator_.generateArray(function() {
      return generator_.generateStruct(memoryInstrumentation.mojom.VmRegion, false);
    });
    return generated;
  };

  RawOSMemDump.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.residentSetKb = mutator_.mutateUint32(this.residentSetKb);
    }
    if (mutator_.chooseMutateField()) {
      this.platformPrivateFootprint = mutator_.mutateStruct(memoryInstrumentation.mojom.PlatformPrivateFootprint, false);
    }
    if (mutator_.chooseMutateField()) {
      this.memoryMaps = mutator_.mutateArray(this.memoryMaps, function(val) {
        return mutator_.mutateStruct(memoryInstrumentation.mojom.VmRegion, false);
      });
    }
    return this;
  };
  RawOSMemDump.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  RawOSMemDump.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  RawOSMemDump.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  RawOSMemDump.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 32}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;



    // validate RawOSMemDump.platformPrivateFootprint
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, PlatformPrivateFootprint, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate RawOSMemDump.memoryMaps
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 16, 8, new codec.PointerTo(VmRegion), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  RawOSMemDump.encodedSize = codec.kStructHeaderSize + 24;

  RawOSMemDump.decode = function(decoder) {
    var packed;
    var val = new RawOSMemDump();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.residentSetKb = decoder.decodeStruct(codec.Uint32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.platformPrivateFootprint = decoder.decodeStructPointer(PlatformPrivateFootprint);
    val.memoryMaps = decoder.decodeArrayPointer(new codec.PointerTo(VmRegion));
    return val;
  };

  RawOSMemDump.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(RawOSMemDump.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint32, val.residentSetKb);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(PlatformPrivateFootprint, val.platformPrivateFootprint);
    encoder.encodeArrayPointer(new codec.PointerTo(VmRegion), val.memoryMaps);
  };
  function OSMemDump(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  OSMemDump.prototype.initDefaults_ = function() {
    this.residentSetKb = 0;
    this.privateFootprintKb = 0;
    this.sharedFootprintKb = 0;
    this.privateFootprintSwapKb = 0;
  };
  OSMemDump.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  OSMemDump.generate = function(generator_) {
    var generated = new OSMemDump;
    generated.residentSetKb = generator_.generateUint32();
    generated.privateFootprintKb = generator_.generateUint32();
    generated.sharedFootprintKb = generator_.generateUint32();
    generated.privateFootprintSwapKb = generator_.generateUint32();
    return generated;
  };

  OSMemDump.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.residentSetKb = mutator_.mutateUint32(this.residentSetKb);
    }
    if (mutator_.chooseMutateField()) {
      this.privateFootprintKb = mutator_.mutateUint32(this.privateFootprintKb);
    }
    if (mutator_.chooseMutateField()) {
      this.sharedFootprintKb = mutator_.mutateUint32(this.sharedFootprintKb);
    }
    if (mutator_.chooseMutateField()) {
      this.privateFootprintSwapKb = mutator_.mutateUint32(this.privateFootprintSwapKb);
    }
    return this;
  };
  OSMemDump.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  OSMemDump.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  OSMemDump.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  OSMemDump.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 24}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;





    return validator.validationError.NONE;
  };

  OSMemDump.encodedSize = codec.kStructHeaderSize + 16;

  OSMemDump.decode = function(decoder) {
    var packed;
    var val = new OSMemDump();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.residentSetKb = decoder.decodeStruct(codec.Uint32);
    val.privateFootprintKb = decoder.decodeStruct(codec.Uint32);
    val.sharedFootprintKb = decoder.decodeStruct(codec.Uint32);
    val.privateFootprintSwapKb = decoder.decodeStruct(codec.Uint32);
    return val;
  };

  OSMemDump.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(OSMemDump.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint32, val.residentSetKb);
    encoder.encodeStruct(codec.Uint32, val.privateFootprintKb);
    encoder.encodeStruct(codec.Uint32, val.sharedFootprintKb);
    encoder.encodeStruct(codec.Uint32, val.privateFootprintSwapKb);
  };
  function AllocatorMemDump(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  AllocatorMemDump.prototype.initDefaults_ = function() {
    this.numericEntries = null;
  };
  AllocatorMemDump.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  AllocatorMemDump.generate = function(generator_) {
    var generated = new AllocatorMemDump;
    generated.numericEntries = generator_.generateMap(
      function() {
        return generator_.generateString(false);
      },
      function() {
        return generator_.generateUint64();
      });
    return generated;
  };

  AllocatorMemDump.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.numericEntries = mutator_.mutateMap(this.numericEntries,
        function(val) {
          return mutator_.mutateString(val, false);
        },
        function(val) {
          return mutator_.mutateUint64(val);
        });
    }
    return this;
  };
  AllocatorMemDump.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  AllocatorMemDump.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  AllocatorMemDump.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  AllocatorMemDump.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 16}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;


    // validate AllocatorMemDump.numericEntries
    err = messageValidator.validateMapPointer(offset + codec.kStructHeaderSize + 0, false, codec.String, codec.Uint64, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  AllocatorMemDump.encodedSize = codec.kStructHeaderSize + 8;

  AllocatorMemDump.decode = function(decoder) {
    var packed;
    var val = new AllocatorMemDump();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.numericEntries = decoder.decodeMapPointer(codec.String, codec.Uint64);
    return val;
  };

  AllocatorMemDump.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(AllocatorMemDump.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeMapPointer(codec.String, codec.Uint64, val.numericEntries);
  };
  function ProcessMemoryDump(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ProcessMemoryDump.prototype.initDefaults_ = function() {
    this.processType = 0;
    this.osDump = null;
    this.chromeAllocatorDumps = null;
    this.pid = null;
  };
  ProcessMemoryDump.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ProcessMemoryDump.generate = function(generator_) {
    var generated = new ProcessMemoryDump;
    generated.processType = generator_.generateEnum(0, 5);
    generated.osDump = generator_.generateStruct(memoryInstrumentation.mojom.OSMemDump, false);
    generated.chromeAllocatorDumps = generator_.generateMap(
      function() {
        return generator_.generateString(false);
      },
      function() {
        return generator_.generateStruct(memoryInstrumentation.mojom.AllocatorMemDump, false);
      });
    generated.pid = generator_.generateStruct(mojoBase.mojom.ProcessId, false);
    return generated;
  };

  ProcessMemoryDump.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.processType = mutator_.mutateEnum(this.processType, 0, 5);
    }
    if (mutator_.chooseMutateField()) {
      this.osDump = mutator_.mutateStruct(memoryInstrumentation.mojom.OSMemDump, false);
    }
    if (mutator_.chooseMutateField()) {
      this.chromeAllocatorDumps = mutator_.mutateMap(this.chromeAllocatorDumps,
        function(val) {
          return mutator_.mutateString(val, false);
        },
        function(val) {
          return mutator_.mutateStruct(memoryInstrumentation.mojom.AllocatorMemDump, false);
        });
    }
    if (mutator_.chooseMutateField()) {
      this.pid = mutator_.mutateStruct(mojoBase.mojom.ProcessId, false);
    }
    return this;
  };
  ProcessMemoryDump.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ProcessMemoryDump.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ProcessMemoryDump.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ProcessMemoryDump.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 40}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;


    // validate ProcessMemoryDump.processType
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, ProcessType);
    if (err !== validator.validationError.NONE)
        return err;


    // validate ProcessMemoryDump.osDump
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, OSMemDump, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate ProcessMemoryDump.chromeAllocatorDumps
    err = messageValidator.validateMapPointer(offset + codec.kStructHeaderSize + 16, false, codec.String, new codec.PointerTo(AllocatorMemDump), false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate ProcessMemoryDump.pid
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 24, process_id$.ProcessId, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ProcessMemoryDump.encodedSize = codec.kStructHeaderSize + 32;

  ProcessMemoryDump.decode = function(decoder) {
    var packed;
    var val = new ProcessMemoryDump();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.processType = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.osDump = decoder.decodeStructPointer(OSMemDump);
    val.chromeAllocatorDumps = decoder.decodeMapPointer(codec.String, new codec.PointerTo(AllocatorMemDump));
    val.pid = decoder.decodeStructPointer(process_id$.ProcessId);
    return val;
  };

  ProcessMemoryDump.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ProcessMemoryDump.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.processType);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(OSMemDump, val.osDump);
    encoder.encodeMapPointer(codec.String, new codec.PointerTo(AllocatorMemDump), val.chromeAllocatorDumps);
    encoder.encodeStructPointer(process_id$.ProcessId, val.pid);
  };
  function GlobalMemoryDump(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  GlobalMemoryDump.prototype.initDefaults_ = function() {
    this.processDumps = null;
  };
  GlobalMemoryDump.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  GlobalMemoryDump.generate = function(generator_) {
    var generated = new GlobalMemoryDump;
    generated.processDumps = generator_.generateArray(function() {
      return generator_.generateStruct(memoryInstrumentation.mojom.ProcessMemoryDump, false);
    });
    return generated;
  };

  GlobalMemoryDump.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.processDumps = mutator_.mutateArray(this.processDumps, function(val) {
        return mutator_.mutateStruct(memoryInstrumentation.mojom.ProcessMemoryDump, false);
      });
    }
    return this;
  };
  GlobalMemoryDump.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  GlobalMemoryDump.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  GlobalMemoryDump.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  GlobalMemoryDump.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 16}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;


    // validate GlobalMemoryDump.processDumps
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 8, new codec.PointerTo(ProcessMemoryDump), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  GlobalMemoryDump.encodedSize = codec.kStructHeaderSize + 8;

  GlobalMemoryDump.decode = function(decoder) {
    var packed;
    var val = new GlobalMemoryDump();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.processDumps = decoder.decodeArrayPointer(new codec.PointerTo(ProcessMemoryDump));
    return val;
  };

  GlobalMemoryDump.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(GlobalMemoryDump.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(new codec.PointerTo(ProcessMemoryDump), val.processDumps);
  };
  function SharedBufferWithSize(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  SharedBufferWithSize.prototype.initDefaults_ = function() {
    this.buffer = null;
    this.size = 0;
    this.pid = null;
  };
  SharedBufferWithSize.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  SharedBufferWithSize.generate = function(generator_) {
    var generated = new SharedBufferWithSize;
    generated.buffer = generator_.generateSharedBuffer(false);
    generated.size = generator_.generateUint32();
    generated.pid = generator_.generateStruct(mojoBase.mojom.ProcessId, false);
    return generated;
  };

  SharedBufferWithSize.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.buffer = mutator_.mutateSharedBuffer(this.buffer, false);
    }
    if (mutator_.chooseMutateField()) {
      this.size = mutator_.mutateUint32(this.size);
    }
    if (mutator_.chooseMutateField()) {
      this.pid = mutator_.mutateStruct(mojoBase.mojom.ProcessId, false);
    }
    return this;
  };
  SharedBufferWithSize.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.buffer !== null) {
      Array.prototype.push.apply(handles, ["handle<shared_buffer>"]);
    }
    return handles;
  };

  SharedBufferWithSize.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  SharedBufferWithSize.prototype.setHandlesInternal_ = function(handles, idx) {
    this.buffer = handles[idx++];;
    return idx;
  };

  SharedBufferWithSize.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 24}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;


    // validate SharedBufferWithSize.buffer
    err = messageValidator.validateHandle(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;



    // validate SharedBufferWithSize.pid
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, process_id$.ProcessId, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  SharedBufferWithSize.encodedSize = codec.kStructHeaderSize + 16;

  SharedBufferWithSize.decode = function(decoder) {
    var packed;
    var val = new SharedBufferWithSize();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.buffer = decoder.decodeStruct(codec.Handle);
    val.size = decoder.decodeStruct(codec.Uint32);
    val.pid = decoder.decodeStructPointer(process_id$.ProcessId);
    return val;
  };

  SharedBufferWithSize.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(SharedBufferWithSize.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Handle, val.buffer);
    encoder.encodeStruct(codec.Uint32, val.size);
    encoder.encodeStructPointer(process_id$.ProcessId, val.pid);
  };
  function ClientProcess_RequestChromeMemoryDump_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ClientProcess_RequestChromeMemoryDump_Params.prototype.initDefaults_ = function() {
    this.args = null;
  };
  ClientProcess_RequestChromeMemoryDump_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ClientProcess_RequestChromeMemoryDump_Params.generate = function(generator_) {
    var generated = new ClientProcess_RequestChromeMemoryDump_Params;
    generated.args = generator_.generateStruct(memoryInstrumentation.mojom.RequestArgs, false);
    return generated;
  };

  ClientProcess_RequestChromeMemoryDump_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.args = mutator_.mutateStruct(memoryInstrumentation.mojom.RequestArgs, false);
    }
    return this;
  };
  ClientProcess_RequestChromeMemoryDump_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ClientProcess_RequestChromeMemoryDump_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ClientProcess_RequestChromeMemoryDump_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ClientProcess_RequestChromeMemoryDump_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 16}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;


    // validate ClientProcess_RequestChromeMemoryDump_Params.args
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, RequestArgs, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ClientProcess_RequestChromeMemoryDump_Params.encodedSize = codec.kStructHeaderSize + 8;

  ClientProcess_RequestChromeMemoryDump_Params.decode = function(decoder) {
    var packed;
    var val = new ClientProcess_RequestChromeMemoryDump_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.args = decoder.decodeStructPointer(RequestArgs);
    return val;
  };

  ClientProcess_RequestChromeMemoryDump_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ClientProcess_RequestChromeMemoryDump_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(RequestArgs, val.args);
  };
  function ClientProcess_RequestChromeMemoryDump_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ClientProcess_RequestChromeMemoryDump_ResponseParams.prototype.initDefaults_ = function() {
    this.success = false;
    this.dumpId = 0;
    this.rawProcessMemoryDump = null;
  };
  ClientProcess_RequestChromeMemoryDump_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ClientProcess_RequestChromeMemoryDump_ResponseParams.generate = function(generator_) {
    var generated = new ClientProcess_RequestChromeMemoryDump_ResponseParams;
    generated.success = generator_.generateBool();
    generated.dumpId = generator_.generateUint64();
    generated.rawProcessMemoryDump = generator_.generateStruct(memoryInstrumentation.mojom.RawProcessMemoryDump, true);
    return generated;
  };

  ClientProcess_RequestChromeMemoryDump_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.success = mutator_.mutateBool(this.success);
    }
    if (mutator_.chooseMutateField()) {
      this.dumpId = mutator_.mutateUint64(this.dumpId);
    }
    if (mutator_.chooseMutateField()) {
      this.rawProcessMemoryDump = mutator_.mutateStruct(memoryInstrumentation.mojom.RawProcessMemoryDump, true);
    }
    return this;
  };
  ClientProcess_RequestChromeMemoryDump_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ClientProcess_RequestChromeMemoryDump_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ClientProcess_RequestChromeMemoryDump_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ClientProcess_RequestChromeMemoryDump_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 32}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;




    // validate ClientProcess_RequestChromeMemoryDump_ResponseParams.rawProcessMemoryDump
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, RawProcessMemoryDump, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ClientProcess_RequestChromeMemoryDump_ResponseParams.encodedSize = codec.kStructHeaderSize + 24;

  ClientProcess_RequestChromeMemoryDump_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new ClientProcess_RequestChromeMemoryDump_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.success = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.dumpId = decoder.decodeStruct(codec.Uint64);
    val.rawProcessMemoryDump = decoder.decodeStructPointer(RawProcessMemoryDump);
    return val;
  };

  ClientProcess_RequestChromeMemoryDump_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ClientProcess_RequestChromeMemoryDump_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.success & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.Uint64, val.dumpId);
    encoder.encodeStructPointer(RawProcessMemoryDump, val.rawProcessMemoryDump);
  };
  function ClientProcess_EnableHeapProfiling_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ClientProcess_EnableHeapProfiling_Params.prototype.initDefaults_ = function() {
    this.mode = 0;
  };
  ClientProcess_EnableHeapProfiling_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ClientProcess_EnableHeapProfiling_Params.generate = function(generator_) {
    var generated = new ClientProcess_EnableHeapProfiling_Params;
    generated.mode = generator_.generateEnum(0, 4);
    return generated;
  };

  ClientProcess_EnableHeapProfiling_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.mode = mutator_.mutateEnum(this.mode, 0, 4);
    }
    return this;
  };
  ClientProcess_EnableHeapProfiling_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ClientProcess_EnableHeapProfiling_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ClientProcess_EnableHeapProfiling_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ClientProcess_EnableHeapProfiling_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 16}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;


    // validate ClientProcess_EnableHeapProfiling_Params.mode
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, HeapProfilingMode);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ClientProcess_EnableHeapProfiling_Params.encodedSize = codec.kStructHeaderSize + 8;

  ClientProcess_EnableHeapProfiling_Params.decode = function(decoder) {
    var packed;
    var val = new ClientProcess_EnableHeapProfiling_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.mode = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  ClientProcess_EnableHeapProfiling_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ClientProcess_EnableHeapProfiling_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.mode);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function ClientProcess_EnableHeapProfiling_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ClientProcess_EnableHeapProfiling_ResponseParams.prototype.initDefaults_ = function() {
    this.success = false;
  };
  ClientProcess_EnableHeapProfiling_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ClientProcess_EnableHeapProfiling_ResponseParams.generate = function(generator_) {
    var generated = new ClientProcess_EnableHeapProfiling_ResponseParams;
    generated.success = generator_.generateBool();
    return generated;
  };

  ClientProcess_EnableHeapProfiling_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.success = mutator_.mutateBool(this.success);
    }
    return this;
  };
  ClientProcess_EnableHeapProfiling_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ClientProcess_EnableHeapProfiling_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ClientProcess_EnableHeapProfiling_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ClientProcess_EnableHeapProfiling_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 16}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  ClientProcess_EnableHeapProfiling_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  ClientProcess_EnableHeapProfiling_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new ClientProcess_EnableHeapProfiling_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.success = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  ClientProcess_EnableHeapProfiling_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ClientProcess_EnableHeapProfiling_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.success & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function ClientProcess_RequestOSMemoryDump_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ClientProcess_RequestOSMemoryDump_Params.prototype.initDefaults_ = function() {
    this.option = 0;
    this.pids = null;
  };
  ClientProcess_RequestOSMemoryDump_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ClientProcess_RequestOSMemoryDump_Params.generate = function(generator_) {
    var generated = new ClientProcess_RequestOSMemoryDump_Params;
    generated.option = generator_.generateEnum(0, 2);
    generated.pids = generator_.generateArray(function() {
      return generator_.generateStruct(mojoBase.mojom.ProcessId, false);
    });
    return generated;
  };

  ClientProcess_RequestOSMemoryDump_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.option = mutator_.mutateEnum(this.option, 0, 2);
    }
    if (mutator_.chooseMutateField()) {
      this.pids = mutator_.mutateArray(this.pids, function(val) {
        return mutator_.mutateStruct(mojoBase.mojom.ProcessId, false);
      });
    }
    return this;
  };
  ClientProcess_RequestOSMemoryDump_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ClientProcess_RequestOSMemoryDump_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ClientProcess_RequestOSMemoryDump_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ClientProcess_RequestOSMemoryDump_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 24}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;


    // validate ClientProcess_RequestOSMemoryDump_Params.option
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, MemoryMapOption);
    if (err !== validator.validationError.NONE)
        return err;


    // validate ClientProcess_RequestOSMemoryDump_Params.pids
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 8, new codec.PointerTo(process_id$.ProcessId), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ClientProcess_RequestOSMemoryDump_Params.encodedSize = codec.kStructHeaderSize + 16;

  ClientProcess_RequestOSMemoryDump_Params.decode = function(decoder) {
    var packed;
    var val = new ClientProcess_RequestOSMemoryDump_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.option = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.pids = decoder.decodeArrayPointer(new codec.PointerTo(process_id$.ProcessId));
    return val;
  };

  ClientProcess_RequestOSMemoryDump_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ClientProcess_RequestOSMemoryDump_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.option);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeArrayPointer(new codec.PointerTo(process_id$.ProcessId), val.pids);
  };
  function ClientProcess_RequestOSMemoryDump_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ClientProcess_RequestOSMemoryDump_ResponseParams.prototype.initDefaults_ = function() {
    this.success = false;
    this.dumps = null;
  };
  ClientProcess_RequestOSMemoryDump_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ClientProcess_RequestOSMemoryDump_ResponseParams.generate = function(generator_) {
    var generated = new ClientProcess_RequestOSMemoryDump_ResponseParams;
    generated.success = generator_.generateBool();
    generated.dumps = generator_.generateMap(
      function() {
        return generator_.generateStruct(mojoBase.mojom.ProcessId, false);
      },
      function() {
        return generator_.generateStruct(memoryInstrumentation.mojom.RawOSMemDump, false);
      });
    return generated;
  };

  ClientProcess_RequestOSMemoryDump_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.success = mutator_.mutateBool(this.success);
    }
    if (mutator_.chooseMutateField()) {
      this.dumps = mutator_.mutateMap(this.dumps,
        function(val) {
          return mutator_.mutateStruct(mojoBase.mojom.ProcessId, false);
        },
        function(val) {
          return mutator_.mutateStruct(memoryInstrumentation.mojom.RawOSMemDump, false);
        });
    }
    return this;
  };
  ClientProcess_RequestOSMemoryDump_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ClientProcess_RequestOSMemoryDump_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ClientProcess_RequestOSMemoryDump_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ClientProcess_RequestOSMemoryDump_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 24}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;



    // validate ClientProcess_RequestOSMemoryDump_ResponseParams.dumps
    err = messageValidator.validateMapPointer(offset + codec.kStructHeaderSize + 8, false, new codec.PointerTo(process_id$.ProcessId), new codec.PointerTo(RawOSMemDump), false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ClientProcess_RequestOSMemoryDump_ResponseParams.encodedSize = codec.kStructHeaderSize + 16;

  ClientProcess_RequestOSMemoryDump_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new ClientProcess_RequestOSMemoryDump_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.success = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.dumps = decoder.decodeMapPointer(new codec.PointerTo(process_id$.ProcessId), new codec.PointerTo(RawOSMemDump));
    return val;
  };

  ClientProcess_RequestOSMemoryDump_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ClientProcess_RequestOSMemoryDump_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.success & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeMapPointer(new codec.PointerTo(process_id$.ProcessId), new codec.PointerTo(RawOSMemDump), val.dumps);
  };
  function HeapProfiler_DumpProcessesForTracing_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  HeapProfiler_DumpProcessesForTracing_Params.prototype.initDefaults_ = function() {
    this.stripPathFromMappedFiles = false;
  };
  HeapProfiler_DumpProcessesForTracing_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  HeapProfiler_DumpProcessesForTracing_Params.generate = function(generator_) {
    var generated = new HeapProfiler_DumpProcessesForTracing_Params;
    generated.stripPathFromMappedFiles = generator_.generateBool();
    return generated;
  };

  HeapProfiler_DumpProcessesForTracing_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.stripPathFromMappedFiles = mutator_.mutateBool(this.stripPathFromMappedFiles);
    }
    return this;
  };
  HeapProfiler_DumpProcessesForTracing_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  HeapProfiler_DumpProcessesForTracing_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  HeapProfiler_DumpProcessesForTracing_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  HeapProfiler_DumpProcessesForTracing_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 16}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  HeapProfiler_DumpProcessesForTracing_Params.encodedSize = codec.kStructHeaderSize + 8;

  HeapProfiler_DumpProcessesForTracing_Params.decode = function(decoder) {
    var packed;
    var val = new HeapProfiler_DumpProcessesForTracing_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.stripPathFromMappedFiles = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  HeapProfiler_DumpProcessesForTracing_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(HeapProfiler_DumpProcessesForTracing_Params.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.stripPathFromMappedFiles & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function HeapProfiler_DumpProcessesForTracing_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  HeapProfiler_DumpProcessesForTracing_ResponseParams.prototype.initDefaults_ = function() {
    this.buffers = null;
  };
  HeapProfiler_DumpProcessesForTracing_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  HeapProfiler_DumpProcessesForTracing_ResponseParams.generate = function(generator_) {
    var generated = new HeapProfiler_DumpProcessesForTracing_ResponseParams;
    generated.buffers = generator_.generateArray(function() {
      return generator_.generateStruct(memoryInstrumentation.mojom.SharedBufferWithSize, false);
    });
    return generated;
  };

  HeapProfiler_DumpProcessesForTracing_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.buffers = mutator_.mutateArray(this.buffers, function(val) {
        return mutator_.mutateStruct(memoryInstrumentation.mojom.SharedBufferWithSize, false);
      });
    }
    return this;
  };
  HeapProfiler_DumpProcessesForTracing_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.buffers !== null) {
      Array.prototype.push.apply(handles, [].concat.apply([], this.buffers.map(function(val) {
        if (val) {
          return val.getHandleDeps();
        }
        return [];
      })));
    }
    return handles;
  };

  HeapProfiler_DumpProcessesForTracing_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  HeapProfiler_DumpProcessesForTracing_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    this.buffers.forEach(function(val) {
      idx = val.setHandlesInternal_(handles, idx);
    });
    return idx;
  };

  HeapProfiler_DumpProcessesForTracing_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 16}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;


    // validate HeapProfiler_DumpProcessesForTracing_ResponseParams.buffers
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 8, new codec.PointerTo(SharedBufferWithSize), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  HeapProfiler_DumpProcessesForTracing_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  HeapProfiler_DumpProcessesForTracing_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new HeapProfiler_DumpProcessesForTracing_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.buffers = decoder.decodeArrayPointer(new codec.PointerTo(SharedBufferWithSize));
    return val;
  };

  HeapProfiler_DumpProcessesForTracing_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(HeapProfiler_DumpProcessesForTracing_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(new codec.PointerTo(SharedBufferWithSize), val.buffers);
  };
  function HeapProfilerHelper_GetVmRegionsForHeapProfiler_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  HeapProfilerHelper_GetVmRegionsForHeapProfiler_Params.prototype.initDefaults_ = function() {
    this.pids = null;
  };
  HeapProfilerHelper_GetVmRegionsForHeapProfiler_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  HeapProfilerHelper_GetVmRegionsForHeapProfiler_Params.generate = function(generator_) {
    var generated = new HeapProfilerHelper_GetVmRegionsForHeapProfiler_Params;
    generated.pids = generator_.generateArray(function() {
      return generator_.generateStruct(mojoBase.mojom.ProcessId, false);
    });
    return generated;
  };

  HeapProfilerHelper_GetVmRegionsForHeapProfiler_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.pids = mutator_.mutateArray(this.pids, function(val) {
        return mutator_.mutateStruct(mojoBase.mojom.ProcessId, false);
      });
    }
    return this;
  };
  HeapProfilerHelper_GetVmRegionsForHeapProfiler_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  HeapProfilerHelper_GetVmRegionsForHeapProfiler_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  HeapProfilerHelper_GetVmRegionsForHeapProfiler_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  HeapProfilerHelper_GetVmRegionsForHeapProfiler_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 16}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;


    // validate HeapProfilerHelper_GetVmRegionsForHeapProfiler_Params.pids
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 8, new codec.PointerTo(process_id$.ProcessId), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  HeapProfilerHelper_GetVmRegionsForHeapProfiler_Params.encodedSize = codec.kStructHeaderSize + 8;

  HeapProfilerHelper_GetVmRegionsForHeapProfiler_Params.decode = function(decoder) {
    var packed;
    var val = new HeapProfilerHelper_GetVmRegionsForHeapProfiler_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.pids = decoder.decodeArrayPointer(new codec.PointerTo(process_id$.ProcessId));
    return val;
  };

  HeapProfilerHelper_GetVmRegionsForHeapProfiler_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(HeapProfilerHelper_GetVmRegionsForHeapProfiler_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(new codec.PointerTo(process_id$.ProcessId), val.pids);
  };
  function HeapProfilerHelper_GetVmRegionsForHeapProfiler_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  HeapProfilerHelper_GetVmRegionsForHeapProfiler_ResponseParams.prototype.initDefaults_ = function() {
    this.vmRegions = null;
  };
  HeapProfilerHelper_GetVmRegionsForHeapProfiler_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  HeapProfilerHelper_GetVmRegionsForHeapProfiler_ResponseParams.generate = function(generator_) {
    var generated = new HeapProfilerHelper_GetVmRegionsForHeapProfiler_ResponseParams;
    generated.vmRegions = generator_.generateMap(
      function() {
        return generator_.generateStruct(mojoBase.mojom.ProcessId, false);
      },
      function() {
        return generator_.generateArray(function() {
          return generator_.generateStruct(memoryInstrumentation.mojom.VmRegion, false);
        });
      });
    return generated;
  };

  HeapProfilerHelper_GetVmRegionsForHeapProfiler_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.vmRegions = mutator_.mutateMap(this.vmRegions,
        function(val) {
          return mutator_.mutateStruct(mojoBase.mojom.ProcessId, false);
        },
        function(val) {
          return mutator_.mutateArray(val, function(val) {
            return mutator_.mutateStruct(memoryInstrumentation.mojom.VmRegion, false);
          });
        });
    }
    return this;
  };
  HeapProfilerHelper_GetVmRegionsForHeapProfiler_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  HeapProfilerHelper_GetVmRegionsForHeapProfiler_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  HeapProfilerHelper_GetVmRegionsForHeapProfiler_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  HeapProfilerHelper_GetVmRegionsForHeapProfiler_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 16}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;


    // validate HeapProfilerHelper_GetVmRegionsForHeapProfiler_ResponseParams.vmRegions
    err = messageValidator.validateMapPointer(offset + codec.kStructHeaderSize + 0, false, new codec.PointerTo(process_id$.ProcessId), new codec.ArrayOf(new codec.PointerTo(VmRegion)), false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  HeapProfilerHelper_GetVmRegionsForHeapProfiler_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  HeapProfilerHelper_GetVmRegionsForHeapProfiler_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new HeapProfilerHelper_GetVmRegionsForHeapProfiler_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.vmRegions = decoder.decodeMapPointer(new codec.PointerTo(process_id$.ProcessId), new codec.ArrayOf(new codec.PointerTo(VmRegion)));
    return val;
  };

  HeapProfilerHelper_GetVmRegionsForHeapProfiler_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(HeapProfilerHelper_GetVmRegionsForHeapProfiler_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeMapPointer(new codec.PointerTo(process_id$.ProcessId), new codec.ArrayOf(new codec.PointerTo(VmRegion)), val.vmRegions);
  };
  function Coordinator_RegisterClientProcess_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Coordinator_RegisterClientProcess_Params.prototype.initDefaults_ = function() {
    this.clientProcess = new ClientProcessPtr();
    this.processType = 0;
  };
  Coordinator_RegisterClientProcess_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Coordinator_RegisterClientProcess_Params.generate = function(generator_) {
    var generated = new Coordinator_RegisterClientProcess_Params;
    generated.clientProcess = generator_.generateInterface("memoryInstrumentation.mojom.ClientProcess", false);
    generated.processType = generator_.generateEnum(0, 5);
    return generated;
  };

  Coordinator_RegisterClientProcess_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.clientProcess = mutator_.mutateInterface(this.clientProcess, "memoryInstrumentation.mojom.ClientProcess", false);
    }
    if (mutator_.chooseMutateField()) {
      this.processType = mutator_.mutateEnum(this.processType, 0, 5);
    }
    return this;
  };
  Coordinator_RegisterClientProcess_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.clientProcess !== null) {
      Array.prototype.push.apply(handles, ["memoryInstrumentation.mojom.ClientProcessPtr"]);
    }
    return handles;
  };

  Coordinator_RegisterClientProcess_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Coordinator_RegisterClientProcess_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.clientProcess = handles[idx++];;
    return idx;
  };

  Coordinator_RegisterClientProcess_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 24}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;


    // validate Coordinator_RegisterClientProcess_Params.clientProcess
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 0, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate Coordinator_RegisterClientProcess_Params.processType
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 8, ProcessType);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Coordinator_RegisterClientProcess_Params.encodedSize = codec.kStructHeaderSize + 16;

  Coordinator_RegisterClientProcess_Params.decode = function(decoder) {
    var packed;
    var val = new Coordinator_RegisterClientProcess_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.clientProcess = decoder.decodeStruct(new codec.Interface(ClientProcessPtr));
    val.processType = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  Coordinator_RegisterClientProcess_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Coordinator_RegisterClientProcess_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(new codec.Interface(ClientProcessPtr), val.clientProcess);
    encoder.encodeStruct(codec.Int32, val.processType);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function Coordinator_RequestGlobalMemoryDump_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Coordinator_RequestGlobalMemoryDump_Params.prototype.initDefaults_ = function() {
    this.dumpType = 0;
    this.levelOfDetail = 0;
    this.allocatorDumpNames = null;
  };
  Coordinator_RequestGlobalMemoryDump_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Coordinator_RequestGlobalMemoryDump_Params.generate = function(generator_) {
    var generated = new Coordinator_RequestGlobalMemoryDump_Params;
    generated.dumpType = generator_.generateEnum(0, 3);
    generated.levelOfDetail = generator_.generateEnum(0, 2);
    generated.allocatorDumpNames = generator_.generateArray(function() {
      return generator_.generateString(false);
    });
    return generated;
  };

  Coordinator_RequestGlobalMemoryDump_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.dumpType = mutator_.mutateEnum(this.dumpType, 0, 3);
    }
    if (mutator_.chooseMutateField()) {
      this.levelOfDetail = mutator_.mutateEnum(this.levelOfDetail, 0, 2);
    }
    if (mutator_.chooseMutateField()) {
      this.allocatorDumpNames = mutator_.mutateArray(this.allocatorDumpNames, function(val) {
        return mutator_.mutateString(val, false);
      });
    }
    return this;
  };
  Coordinator_RequestGlobalMemoryDump_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Coordinator_RequestGlobalMemoryDump_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Coordinator_RequestGlobalMemoryDump_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Coordinator_RequestGlobalMemoryDump_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 24}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;


    // validate Coordinator_RequestGlobalMemoryDump_Params.dumpType
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, DumpType);
    if (err !== validator.validationError.NONE)
        return err;


    // validate Coordinator_RequestGlobalMemoryDump_Params.levelOfDetail
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 4, LevelOfDetail);
    if (err !== validator.validationError.NONE)
        return err;


    // validate Coordinator_RequestGlobalMemoryDump_Params.allocatorDumpNames
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 8, codec.String, false, [0, 0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Coordinator_RequestGlobalMemoryDump_Params.encodedSize = codec.kStructHeaderSize + 16;

  Coordinator_RequestGlobalMemoryDump_Params.decode = function(decoder) {
    var packed;
    var val = new Coordinator_RequestGlobalMemoryDump_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.dumpType = decoder.decodeStruct(codec.Int32);
    val.levelOfDetail = decoder.decodeStruct(codec.Int32);
    val.allocatorDumpNames = decoder.decodeArrayPointer(codec.String);
    return val;
  };

  Coordinator_RequestGlobalMemoryDump_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Coordinator_RequestGlobalMemoryDump_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.dumpType);
    encoder.encodeStruct(codec.Int32, val.levelOfDetail);
    encoder.encodeArrayPointer(codec.String, val.allocatorDumpNames);
  };
  function Coordinator_RequestGlobalMemoryDump_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Coordinator_RequestGlobalMemoryDump_ResponseParams.prototype.initDefaults_ = function() {
    this.success = false;
    this.globalMemoryDump = null;
  };
  Coordinator_RequestGlobalMemoryDump_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Coordinator_RequestGlobalMemoryDump_ResponseParams.generate = function(generator_) {
    var generated = new Coordinator_RequestGlobalMemoryDump_ResponseParams;
    generated.success = generator_.generateBool();
    generated.globalMemoryDump = generator_.generateStruct(memoryInstrumentation.mojom.GlobalMemoryDump, true);
    return generated;
  };

  Coordinator_RequestGlobalMemoryDump_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.success = mutator_.mutateBool(this.success);
    }
    if (mutator_.chooseMutateField()) {
      this.globalMemoryDump = mutator_.mutateStruct(memoryInstrumentation.mojom.GlobalMemoryDump, true);
    }
    return this;
  };
  Coordinator_RequestGlobalMemoryDump_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Coordinator_RequestGlobalMemoryDump_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Coordinator_RequestGlobalMemoryDump_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Coordinator_RequestGlobalMemoryDump_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 24}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;



    // validate Coordinator_RequestGlobalMemoryDump_ResponseParams.globalMemoryDump
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, GlobalMemoryDump, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Coordinator_RequestGlobalMemoryDump_ResponseParams.encodedSize = codec.kStructHeaderSize + 16;

  Coordinator_RequestGlobalMemoryDump_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new Coordinator_RequestGlobalMemoryDump_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.success = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.globalMemoryDump = decoder.decodeStructPointer(GlobalMemoryDump);
    return val;
  };

  Coordinator_RequestGlobalMemoryDump_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Coordinator_RequestGlobalMemoryDump_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.success & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(GlobalMemoryDump, val.globalMemoryDump);
  };
  function Coordinator_RequestGlobalMemoryDumpForPid_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Coordinator_RequestGlobalMemoryDumpForPid_Params.prototype.initDefaults_ = function() {
    this.pid = null;
    this.allocatorDumpNames = null;
  };
  Coordinator_RequestGlobalMemoryDumpForPid_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Coordinator_RequestGlobalMemoryDumpForPid_Params.generate = function(generator_) {
    var generated = new Coordinator_RequestGlobalMemoryDumpForPid_Params;
    generated.pid = generator_.generateStruct(mojoBase.mojom.ProcessId, false);
    generated.allocatorDumpNames = generator_.generateArray(function() {
      return generator_.generateString(false);
    });
    return generated;
  };

  Coordinator_RequestGlobalMemoryDumpForPid_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.pid = mutator_.mutateStruct(mojoBase.mojom.ProcessId, false);
    }
    if (mutator_.chooseMutateField()) {
      this.allocatorDumpNames = mutator_.mutateArray(this.allocatorDumpNames, function(val) {
        return mutator_.mutateString(val, false);
      });
    }
    return this;
  };
  Coordinator_RequestGlobalMemoryDumpForPid_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Coordinator_RequestGlobalMemoryDumpForPid_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Coordinator_RequestGlobalMemoryDumpForPid_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Coordinator_RequestGlobalMemoryDumpForPid_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 24}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;


    // validate Coordinator_RequestGlobalMemoryDumpForPid_Params.pid
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, process_id$.ProcessId, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate Coordinator_RequestGlobalMemoryDumpForPid_Params.allocatorDumpNames
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 8, codec.String, false, [0, 0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Coordinator_RequestGlobalMemoryDumpForPid_Params.encodedSize = codec.kStructHeaderSize + 16;

  Coordinator_RequestGlobalMemoryDumpForPid_Params.decode = function(decoder) {
    var packed;
    var val = new Coordinator_RequestGlobalMemoryDumpForPid_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.pid = decoder.decodeStructPointer(process_id$.ProcessId);
    val.allocatorDumpNames = decoder.decodeArrayPointer(codec.String);
    return val;
  };

  Coordinator_RequestGlobalMemoryDumpForPid_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Coordinator_RequestGlobalMemoryDumpForPid_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(process_id$.ProcessId, val.pid);
    encoder.encodeArrayPointer(codec.String, val.allocatorDumpNames);
  };
  function Coordinator_RequestGlobalMemoryDumpForPid_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Coordinator_RequestGlobalMemoryDumpForPid_ResponseParams.prototype.initDefaults_ = function() {
    this.success = false;
    this.globalMemoryDump = null;
  };
  Coordinator_RequestGlobalMemoryDumpForPid_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Coordinator_RequestGlobalMemoryDumpForPid_ResponseParams.generate = function(generator_) {
    var generated = new Coordinator_RequestGlobalMemoryDumpForPid_ResponseParams;
    generated.success = generator_.generateBool();
    generated.globalMemoryDump = generator_.generateStruct(memoryInstrumentation.mojom.GlobalMemoryDump, true);
    return generated;
  };

  Coordinator_RequestGlobalMemoryDumpForPid_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.success = mutator_.mutateBool(this.success);
    }
    if (mutator_.chooseMutateField()) {
      this.globalMemoryDump = mutator_.mutateStruct(memoryInstrumentation.mojom.GlobalMemoryDump, true);
    }
    return this;
  };
  Coordinator_RequestGlobalMemoryDumpForPid_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Coordinator_RequestGlobalMemoryDumpForPid_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Coordinator_RequestGlobalMemoryDumpForPid_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Coordinator_RequestGlobalMemoryDumpForPid_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 24}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;



    // validate Coordinator_RequestGlobalMemoryDumpForPid_ResponseParams.globalMemoryDump
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, GlobalMemoryDump, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Coordinator_RequestGlobalMemoryDumpForPid_ResponseParams.encodedSize = codec.kStructHeaderSize + 16;

  Coordinator_RequestGlobalMemoryDumpForPid_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new Coordinator_RequestGlobalMemoryDumpForPid_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.success = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.globalMemoryDump = decoder.decodeStructPointer(GlobalMemoryDump);
    return val;
  };

  Coordinator_RequestGlobalMemoryDumpForPid_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Coordinator_RequestGlobalMemoryDumpForPid_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.success & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(GlobalMemoryDump, val.globalMemoryDump);
  };
  function Coordinator_RequestGlobalMemoryDumpAndAppendToTrace_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Coordinator_RequestGlobalMemoryDumpAndAppendToTrace_Params.prototype.initDefaults_ = function() {
    this.dumpType = 0;
    this.levelOfDetail = 0;
  };
  Coordinator_RequestGlobalMemoryDumpAndAppendToTrace_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Coordinator_RequestGlobalMemoryDumpAndAppendToTrace_Params.generate = function(generator_) {
    var generated = new Coordinator_RequestGlobalMemoryDumpAndAppendToTrace_Params;
    generated.dumpType = generator_.generateEnum(0, 3);
    generated.levelOfDetail = generator_.generateEnum(0, 2);
    return generated;
  };

  Coordinator_RequestGlobalMemoryDumpAndAppendToTrace_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.dumpType = mutator_.mutateEnum(this.dumpType, 0, 3);
    }
    if (mutator_.chooseMutateField()) {
      this.levelOfDetail = mutator_.mutateEnum(this.levelOfDetail, 0, 2);
    }
    return this;
  };
  Coordinator_RequestGlobalMemoryDumpAndAppendToTrace_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Coordinator_RequestGlobalMemoryDumpAndAppendToTrace_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Coordinator_RequestGlobalMemoryDumpAndAppendToTrace_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Coordinator_RequestGlobalMemoryDumpAndAppendToTrace_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 16}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;


    // validate Coordinator_RequestGlobalMemoryDumpAndAppendToTrace_Params.dumpType
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, DumpType);
    if (err !== validator.validationError.NONE)
        return err;


    // validate Coordinator_RequestGlobalMemoryDumpAndAppendToTrace_Params.levelOfDetail
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 4, LevelOfDetail);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Coordinator_RequestGlobalMemoryDumpAndAppendToTrace_Params.encodedSize = codec.kStructHeaderSize + 8;

  Coordinator_RequestGlobalMemoryDumpAndAppendToTrace_Params.decode = function(decoder) {
    var packed;
    var val = new Coordinator_RequestGlobalMemoryDumpAndAppendToTrace_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.dumpType = decoder.decodeStruct(codec.Int32);
    val.levelOfDetail = decoder.decodeStruct(codec.Int32);
    return val;
  };

  Coordinator_RequestGlobalMemoryDumpAndAppendToTrace_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Coordinator_RequestGlobalMemoryDumpAndAppendToTrace_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.dumpType);
    encoder.encodeStruct(codec.Int32, val.levelOfDetail);
  };
  function Coordinator_RequestGlobalMemoryDumpAndAppendToTrace_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Coordinator_RequestGlobalMemoryDumpAndAppendToTrace_ResponseParams.prototype.initDefaults_ = function() {
    this.success = false;
    this.dumpId = 0;
  };
  Coordinator_RequestGlobalMemoryDumpAndAppendToTrace_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Coordinator_RequestGlobalMemoryDumpAndAppendToTrace_ResponseParams.generate = function(generator_) {
    var generated = new Coordinator_RequestGlobalMemoryDumpAndAppendToTrace_ResponseParams;
    generated.success = generator_.generateBool();
    generated.dumpId = generator_.generateUint64();
    return generated;
  };

  Coordinator_RequestGlobalMemoryDumpAndAppendToTrace_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.success = mutator_.mutateBool(this.success);
    }
    if (mutator_.chooseMutateField()) {
      this.dumpId = mutator_.mutateUint64(this.dumpId);
    }
    return this;
  };
  Coordinator_RequestGlobalMemoryDumpAndAppendToTrace_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Coordinator_RequestGlobalMemoryDumpAndAppendToTrace_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Coordinator_RequestGlobalMemoryDumpAndAppendToTrace_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Coordinator_RequestGlobalMemoryDumpAndAppendToTrace_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 24}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;



    return validator.validationError.NONE;
  };

  Coordinator_RequestGlobalMemoryDumpAndAppendToTrace_ResponseParams.encodedSize = codec.kStructHeaderSize + 16;

  Coordinator_RequestGlobalMemoryDumpAndAppendToTrace_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new Coordinator_RequestGlobalMemoryDumpAndAppendToTrace_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.success = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.dumpId = decoder.decodeStruct(codec.Uint64);
    return val;
  };

  Coordinator_RequestGlobalMemoryDumpAndAppendToTrace_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Coordinator_RequestGlobalMemoryDumpAndAppendToTrace_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.success & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.Uint64, val.dumpId);
  };
  function Coordinator_RegisterHeapProfiler_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Coordinator_RegisterHeapProfiler_Params.prototype.initDefaults_ = function() {
    this.heapProfiler = new HeapProfilerPtr();
  };
  Coordinator_RegisterHeapProfiler_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Coordinator_RegisterHeapProfiler_Params.generate = function(generator_) {
    var generated = new Coordinator_RegisterHeapProfiler_Params;
    generated.heapProfiler = generator_.generateInterface("memoryInstrumentation.mojom.HeapProfiler", false);
    return generated;
  };

  Coordinator_RegisterHeapProfiler_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.heapProfiler = mutator_.mutateInterface(this.heapProfiler, "memoryInstrumentation.mojom.HeapProfiler", false);
    }
    return this;
  };
  Coordinator_RegisterHeapProfiler_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.heapProfiler !== null) {
      Array.prototype.push.apply(handles, ["memoryInstrumentation.mojom.HeapProfilerPtr"]);
    }
    return handles;
  };

  Coordinator_RegisterHeapProfiler_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Coordinator_RegisterHeapProfiler_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.heapProfiler = handles[idx++];;
    return idx;
  };

  Coordinator_RegisterHeapProfiler_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 16}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;


    // validate Coordinator_RegisterHeapProfiler_Params.heapProfiler
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 0, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Coordinator_RegisterHeapProfiler_Params.encodedSize = codec.kStructHeaderSize + 8;

  Coordinator_RegisterHeapProfiler_Params.decode = function(decoder) {
    var packed;
    var val = new Coordinator_RegisterHeapProfiler_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.heapProfiler = decoder.decodeStruct(new codec.Interface(HeapProfilerPtr));
    return val;
  };

  Coordinator_RegisterHeapProfiler_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Coordinator_RegisterHeapProfiler_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(new codec.Interface(HeapProfilerPtr), val.heapProfiler);
  };

  function RawAllocatorDumpEntryValue(value) {
    this.initDefault_();
    this.initValue_(value);
  }


  RawAllocatorDumpEntryValue.Tags = {
    valueUint64: 0,
    valueString: 1,
  };

  RawAllocatorDumpEntryValue.prototype.initDefault_ = function() {
    this.$data = null;
    this.$tag = undefined;
  }

  RawAllocatorDumpEntryValue.prototype.initValue_ = function(value) {
    if (value == undefined) {
      return;
    }

    var keys = Object.keys(value);
    if (keys.length == 0) {
      return;
    }

    if (keys.length > 1) {
      throw new TypeError("You may set only one member on a union.");
    }

    var fields = [
        "valueUint64",
        "valueString",
    ];

    if (fields.indexOf(keys[0]) < 0) {
      throw new ReferenceError(keys[0] + " is not a RawAllocatorDumpEntryValue member.");

    }

    this[keys[0]] = value[keys[0]];
  }
  RawAllocatorDumpEntryValue.generate = function(generator_) {
    var generated = new RawAllocatorDumpEntryValue;
    var generators = [
      {
        field: "valueUint64",

        generator: function() { return generator_.generateUint64(); },
      },
      {
        field: "valueString",

        generator: function() { return generator_.generateString(false); },
      },
    ];

    var result = generator_.generateUnionField(generators);
    generated[result.field] = result.value;
    return generated;
  }

  RawAllocatorDumpEntryValue.prototype.mutate = function(mutator_) {
    var mutators = [
      {
        field: "valueUint64",

        mutator: function() { return mutator_.mutateUint64(this.valueUint64); },
      },
      {
        field: "valueString",

        mutator: function() { return mutator_.mutateString(this.valueString, false); },
      },
    ];

    var result = mutator_.mutateUnionField(this, mutators);
    generated[result.field] = result.value;
    return this;
  }
  RawAllocatorDumpEntryValue.prototype.getHandleDeps = function() {
    return [];
  }
  RawAllocatorDumpEntryValue.prototype.setHandles = function() {
    return [];
  }
  Object.defineProperty(RawAllocatorDumpEntryValue.prototype, "valueUint64", {
    get: function() {
      if (this.$tag != RawAllocatorDumpEntryValue.Tags.valueUint64) {
        throw new ReferenceError(
            "RawAllocatorDumpEntryValue.valueUint64 is not currently set.");
      }
      return this.$data;
    },

    set: function(value) {
      this.$tag = RawAllocatorDumpEntryValue.Tags.valueUint64;
      this.$data = value;
    }
  });
  Object.defineProperty(RawAllocatorDumpEntryValue.prototype, "valueString", {
    get: function() {
      if (this.$tag != RawAllocatorDumpEntryValue.Tags.valueString) {
        throw new ReferenceError(
            "RawAllocatorDumpEntryValue.valueString is not currently set.");
      }
      return this.$data;
    },

    set: function(value) {
      this.$tag = RawAllocatorDumpEntryValue.Tags.valueString;
      this.$data = value;
    }
  });


    RawAllocatorDumpEntryValue.encode = function(encoder, val) {
      if (val == null) {
        encoder.writeUint64(0);
        encoder.writeUint64(0);
        return;
      }
      if (val.$tag == undefined) {
        throw new TypeError("Cannot encode unions with an unknown member set.");
      }

      encoder.writeUint32(16);
      encoder.writeUint32(val.$tag);
      switch (val.$tag) {
        case RawAllocatorDumpEntryValue.Tags.valueUint64:
          encoder.encodeStruct(codec.Uint64, val.valueUint64);
          break;
        case RawAllocatorDumpEntryValue.Tags.valueString:
          encoder.encodeStruct(codec.String, val.valueString);
          break;
      }
      encoder.align();
    };


    RawAllocatorDumpEntryValue.decode = function(decoder) {
      var size = decoder.readUint32();
      if (size == 0) {
        decoder.readUint32();
        decoder.readUint64();
        return null;
      }

      var result = new RawAllocatorDumpEntryValue();
      var tag = decoder.readUint32();
      switch (tag) {
        case RawAllocatorDumpEntryValue.Tags.valueUint64:
          result.valueUint64 = decoder.decodeStruct(codec.Uint64);
          break;
        case RawAllocatorDumpEntryValue.Tags.valueString:
          result.valueString = decoder.decodeStruct(codec.String);
          break;
      }
      decoder.align();

      return result;
    };


    RawAllocatorDumpEntryValue.validate = function(messageValidator, offset) {
      var size = messageValidator.decodeUnionSize(offset);
      if (size != 16) {
        return validator.validationError.INVALID_UNION_SIZE;
      }

      var tag = messageValidator.decodeUnionTag(offset);
      var data_offset = offset + 8;
      var err;
      switch (tag) {
        case RawAllocatorDumpEntryValue.Tags.valueUint64:
          

          break;
        case RawAllocatorDumpEntryValue.Tags.valueString:
          

    // validate RawAllocatorDumpEntryValue.valueString
    err = messageValidator.validateStringPointer(data_offset, false)
    if (err !== validator.validationError.NONE)
        return err;
          break;
      }

      return validator.validationError.NONE;
    };

  RawAllocatorDumpEntryValue.encodedSize = 16;
  var kClientProcess_RequestChromeMemoryDump_Name = 1734704789;
  var kClientProcess_EnableHeapProfiling_Name = 38350103;
  var kClientProcess_RequestOSMemoryDump_Name = 1163127121;

  function ClientProcessPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(ClientProcess,
                                                   handleOrPtrInfo);
  }

  function ClientProcessAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        ClientProcess, associatedInterfacePtrInfo);
  }

  ClientProcessAssociatedPtr.prototype =
      Object.create(ClientProcessPtr.prototype);
  ClientProcessAssociatedPtr.prototype.constructor =
      ClientProcessAssociatedPtr;

  function ClientProcessProxy(receiver) {
    this.receiver_ = receiver;
  }
  ClientProcessPtr.prototype.requestChromeMemoryDump = function() {
    return ClientProcessProxy.prototype.requestChromeMemoryDump
        .apply(this.ptr.getProxy(), arguments);
  };

  ClientProcessProxy.prototype.requestChromeMemoryDump = function(args) {
    var params_ = new ClientProcess_RequestChromeMemoryDump_Params();
    params_.args = args;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kClientProcess_RequestChromeMemoryDump_Name,
          codec.align(ClientProcess_RequestChromeMemoryDump_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(ClientProcess_RequestChromeMemoryDump_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(ClientProcess_RequestChromeMemoryDump_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  ClientProcessPtr.prototype.enableHeapProfiling = function() {
    return ClientProcessProxy.prototype.enableHeapProfiling
        .apply(this.ptr.getProxy(), arguments);
  };

  ClientProcessProxy.prototype.enableHeapProfiling = function(mode) {
    var params_ = new ClientProcess_EnableHeapProfiling_Params();
    params_.mode = mode;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kClientProcess_EnableHeapProfiling_Name,
          codec.align(ClientProcess_EnableHeapProfiling_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(ClientProcess_EnableHeapProfiling_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(ClientProcess_EnableHeapProfiling_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  ClientProcessPtr.prototype.requestOSMemoryDump = function() {
    return ClientProcessProxy.prototype.requestOSMemoryDump
        .apply(this.ptr.getProxy(), arguments);
  };

  ClientProcessProxy.prototype.requestOSMemoryDump = function(option, pids) {
    var params_ = new ClientProcess_RequestOSMemoryDump_Params();
    params_.option = option;
    params_.pids = pids;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kClientProcess_RequestOSMemoryDump_Name,
          codec.align(ClientProcess_RequestOSMemoryDump_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(ClientProcess_RequestOSMemoryDump_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(ClientProcess_RequestOSMemoryDump_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };

  function ClientProcessStub(delegate) {
    this.delegate_ = delegate;
  }
  ClientProcessStub.prototype.requestChromeMemoryDump = function(args) {
    return this.delegate_ && this.delegate_.requestChromeMemoryDump && this.delegate_.requestChromeMemoryDump(args);
  }
  ClientProcessStub.prototype.enableHeapProfiling = function(mode) {
    return this.delegate_ && this.delegate_.enableHeapProfiling && this.delegate_.enableHeapProfiling(mode);
  }
  ClientProcessStub.prototype.requestOSMemoryDump = function(option, pids) {
    return this.delegate_ && this.delegate_.requestOSMemoryDump && this.delegate_.requestOSMemoryDump(option, pids);
  }

  ClientProcessStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  ClientProcessStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kClientProcess_RequestChromeMemoryDump_Name:
      var params = reader.decodeStruct(ClientProcess_RequestChromeMemoryDump_Params);
      this.requestChromeMemoryDump(params.args).then(function(response) {
        var responseParams =
            new ClientProcess_RequestChromeMemoryDump_ResponseParams();
        responseParams.success = response.success;
        responseParams.dumpId = response.dumpId;
        responseParams.rawProcessMemoryDump = response.rawProcessMemoryDump;
        var builder = new codec.MessageV1Builder(
            kClientProcess_RequestChromeMemoryDump_Name,
            codec.align(ClientProcess_RequestChromeMemoryDump_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(ClientProcess_RequestChromeMemoryDump_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kClientProcess_EnableHeapProfiling_Name:
      var params = reader.decodeStruct(ClientProcess_EnableHeapProfiling_Params);
      this.enableHeapProfiling(params.mode).then(function(response) {
        var responseParams =
            new ClientProcess_EnableHeapProfiling_ResponseParams();
        responseParams.success = response.success;
        var builder = new codec.MessageV1Builder(
            kClientProcess_EnableHeapProfiling_Name,
            codec.align(ClientProcess_EnableHeapProfiling_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(ClientProcess_EnableHeapProfiling_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kClientProcess_RequestOSMemoryDump_Name:
      var params = reader.decodeStruct(ClientProcess_RequestOSMemoryDump_Params);
      this.requestOSMemoryDump(params.option, params.pids).then(function(response) {
        var responseParams =
            new ClientProcess_RequestOSMemoryDump_ResponseParams();
        responseParams.success = response.success;
        responseParams.dumps = response.dumps;
        var builder = new codec.MessageV1Builder(
            kClientProcess_RequestOSMemoryDump_Name,
            codec.align(ClientProcess_RequestOSMemoryDump_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(ClientProcess_RequestOSMemoryDump_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    default:
      return false;
    }
  };

  function validateClientProcessRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kClientProcess_RequestChromeMemoryDump_Name:
        if (message.expectsResponse())
          paramsClass = ClientProcess_RequestChromeMemoryDump_Params;
      break;
      case kClientProcess_EnableHeapProfiling_Name:
        if (message.expectsResponse())
          paramsClass = ClientProcess_EnableHeapProfiling_Params;
      break;
      case kClientProcess_RequestOSMemoryDump_Name:
        if (message.expectsResponse())
          paramsClass = ClientProcess_RequestOSMemoryDump_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateClientProcessResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kClientProcess_RequestChromeMemoryDump_Name:
        if (message.isResponse())
          paramsClass = ClientProcess_RequestChromeMemoryDump_ResponseParams;
        break;
      case kClientProcess_EnableHeapProfiling_Name:
        if (message.isResponse())
          paramsClass = ClientProcess_EnableHeapProfiling_ResponseParams;
        break;
      case kClientProcess_RequestOSMemoryDump_Name:
        if (message.isResponse())
          paramsClass = ClientProcess_RequestOSMemoryDump_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var ClientProcess = {
    name: 'memory_instrumentation.mojom.ClientProcess',
    kVersion: 0,
    ptrClass: ClientProcessPtr,
    proxyClass: ClientProcessProxy,
    stubClass: ClientProcessStub,
    validateRequest: validateClientProcessRequest,
    validateResponse: validateClientProcessResponse,
    mojomId: 'services/resource_coordinator/public/mojom/memory_instrumentation/memory_instrumentation.mojom',
    fuzzMethods: {
      requestChromeMemoryDump: {
        params: ClientProcess_RequestChromeMemoryDump_Params,
      },
      enableHeapProfiling: {
        params: ClientProcess_EnableHeapProfiling_Params,
      },
      requestOSMemoryDump: {
        params: ClientProcess_RequestOSMemoryDump_Params,
      },
    },
  };
  ClientProcessStub.prototype.validator = validateClientProcessRequest;
  ClientProcessProxy.prototype.validator = validateClientProcessResponse;
  var kHeapProfiler_DumpProcessesForTracing_Name = 486807395;

  function HeapProfilerPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(HeapProfiler,
                                                   handleOrPtrInfo);
  }

  function HeapProfilerAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        HeapProfiler, associatedInterfacePtrInfo);
  }

  HeapProfilerAssociatedPtr.prototype =
      Object.create(HeapProfilerPtr.prototype);
  HeapProfilerAssociatedPtr.prototype.constructor =
      HeapProfilerAssociatedPtr;

  function HeapProfilerProxy(receiver) {
    this.receiver_ = receiver;
  }
  HeapProfilerPtr.prototype.dumpProcessesForTracing = function() {
    return HeapProfilerProxy.prototype.dumpProcessesForTracing
        .apply(this.ptr.getProxy(), arguments);
  };

  HeapProfilerProxy.prototype.dumpProcessesForTracing = function(stripPathFromMappedFiles) {
    var params_ = new HeapProfiler_DumpProcessesForTracing_Params();
    params_.stripPathFromMappedFiles = stripPathFromMappedFiles;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kHeapProfiler_DumpProcessesForTracing_Name,
          codec.align(HeapProfiler_DumpProcessesForTracing_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(HeapProfiler_DumpProcessesForTracing_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(HeapProfiler_DumpProcessesForTracing_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };

  function HeapProfilerStub(delegate) {
    this.delegate_ = delegate;
  }
  HeapProfilerStub.prototype.dumpProcessesForTracing = function(stripPathFromMappedFiles) {
    return this.delegate_ && this.delegate_.dumpProcessesForTracing && this.delegate_.dumpProcessesForTracing(stripPathFromMappedFiles);
  }

  HeapProfilerStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  HeapProfilerStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kHeapProfiler_DumpProcessesForTracing_Name:
      var params = reader.decodeStruct(HeapProfiler_DumpProcessesForTracing_Params);
      this.dumpProcessesForTracing(params.stripPathFromMappedFiles).then(function(response) {
        var responseParams =
            new HeapProfiler_DumpProcessesForTracing_ResponseParams();
        responseParams.buffers = response.buffers;
        var builder = new codec.MessageV1Builder(
            kHeapProfiler_DumpProcessesForTracing_Name,
            codec.align(HeapProfiler_DumpProcessesForTracing_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(HeapProfiler_DumpProcessesForTracing_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    default:
      return false;
    }
  };

  function validateHeapProfilerRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kHeapProfiler_DumpProcessesForTracing_Name:
        if (message.expectsResponse())
          paramsClass = HeapProfiler_DumpProcessesForTracing_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateHeapProfilerResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kHeapProfiler_DumpProcessesForTracing_Name:
        if (message.isResponse())
          paramsClass = HeapProfiler_DumpProcessesForTracing_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var HeapProfiler = {
    name: 'memory_instrumentation.mojom.HeapProfiler',
    kVersion: 0,
    ptrClass: HeapProfilerPtr,
    proxyClass: HeapProfilerProxy,
    stubClass: HeapProfilerStub,
    validateRequest: validateHeapProfilerRequest,
    validateResponse: validateHeapProfilerResponse,
    mojomId: 'services/resource_coordinator/public/mojom/memory_instrumentation/memory_instrumentation.mojom',
    fuzzMethods: {
      dumpProcessesForTracing: {
        params: HeapProfiler_DumpProcessesForTracing_Params,
      },
    },
  };
  HeapProfilerStub.prototype.validator = validateHeapProfilerRequest;
  HeapProfilerProxy.prototype.validator = validateHeapProfilerResponse;
  var kHeapProfilerHelper_GetVmRegionsForHeapProfiler_Name = 1503289514;

  function HeapProfilerHelperPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(HeapProfilerHelper,
                                                   handleOrPtrInfo);
  }

  function HeapProfilerHelperAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        HeapProfilerHelper, associatedInterfacePtrInfo);
  }

  HeapProfilerHelperAssociatedPtr.prototype =
      Object.create(HeapProfilerHelperPtr.prototype);
  HeapProfilerHelperAssociatedPtr.prototype.constructor =
      HeapProfilerHelperAssociatedPtr;

  function HeapProfilerHelperProxy(receiver) {
    this.receiver_ = receiver;
  }
  HeapProfilerHelperPtr.prototype.getVmRegionsForHeapProfiler = function() {
    return HeapProfilerHelperProxy.prototype.getVmRegionsForHeapProfiler
        .apply(this.ptr.getProxy(), arguments);
  };

  HeapProfilerHelperProxy.prototype.getVmRegionsForHeapProfiler = function(pids) {
    var params_ = new HeapProfilerHelper_GetVmRegionsForHeapProfiler_Params();
    params_.pids = pids;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kHeapProfilerHelper_GetVmRegionsForHeapProfiler_Name,
          codec.align(HeapProfilerHelper_GetVmRegionsForHeapProfiler_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(HeapProfilerHelper_GetVmRegionsForHeapProfiler_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(HeapProfilerHelper_GetVmRegionsForHeapProfiler_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };

  function HeapProfilerHelperStub(delegate) {
    this.delegate_ = delegate;
  }
  HeapProfilerHelperStub.prototype.getVmRegionsForHeapProfiler = function(pids) {
    return this.delegate_ && this.delegate_.getVmRegionsForHeapProfiler && this.delegate_.getVmRegionsForHeapProfiler(pids);
  }

  HeapProfilerHelperStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  HeapProfilerHelperStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kHeapProfilerHelper_GetVmRegionsForHeapProfiler_Name:
      var params = reader.decodeStruct(HeapProfilerHelper_GetVmRegionsForHeapProfiler_Params);
      this.getVmRegionsForHeapProfiler(params.pids).then(function(response) {
        var responseParams =
            new HeapProfilerHelper_GetVmRegionsForHeapProfiler_ResponseParams();
        responseParams.vmRegions = response.vmRegions;
        var builder = new codec.MessageV1Builder(
            kHeapProfilerHelper_GetVmRegionsForHeapProfiler_Name,
            codec.align(HeapProfilerHelper_GetVmRegionsForHeapProfiler_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(HeapProfilerHelper_GetVmRegionsForHeapProfiler_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    default:
      return false;
    }
  };

  function validateHeapProfilerHelperRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kHeapProfilerHelper_GetVmRegionsForHeapProfiler_Name:
        if (message.expectsResponse())
          paramsClass = HeapProfilerHelper_GetVmRegionsForHeapProfiler_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateHeapProfilerHelperResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kHeapProfilerHelper_GetVmRegionsForHeapProfiler_Name:
        if (message.isResponse())
          paramsClass = HeapProfilerHelper_GetVmRegionsForHeapProfiler_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var HeapProfilerHelper = {
    name: 'memory_instrumentation.mojom.HeapProfilerHelper',
    kVersion: 0,
    ptrClass: HeapProfilerHelperPtr,
    proxyClass: HeapProfilerHelperProxy,
    stubClass: HeapProfilerHelperStub,
    validateRequest: validateHeapProfilerHelperRequest,
    validateResponse: validateHeapProfilerHelperResponse,
    mojomId: 'services/resource_coordinator/public/mojom/memory_instrumentation/memory_instrumentation.mojom',
    fuzzMethods: {
      getVmRegionsForHeapProfiler: {
        params: HeapProfilerHelper_GetVmRegionsForHeapProfiler_Params,
      },
    },
  };
  HeapProfilerHelperStub.prototype.validator = validateHeapProfilerHelperRequest;
  HeapProfilerHelperProxy.prototype.validator = validateHeapProfilerHelperResponse;
  var kCoordinator_RegisterClientProcess_Name = 1421760957;
  var kCoordinator_RequestGlobalMemoryDump_Name = 174269745;
  var kCoordinator_RequestGlobalMemoryDumpForPid_Name = 2015672563;
  var kCoordinator_RequestGlobalMemoryDumpAndAppendToTrace_Name = 1146331625;
  var kCoordinator_RegisterHeapProfiler_Name = 1702669038;

  function CoordinatorPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(Coordinator,
                                                   handleOrPtrInfo);
  }

  function CoordinatorAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        Coordinator, associatedInterfacePtrInfo);
  }

  CoordinatorAssociatedPtr.prototype =
      Object.create(CoordinatorPtr.prototype);
  CoordinatorAssociatedPtr.prototype.constructor =
      CoordinatorAssociatedPtr;

  function CoordinatorProxy(receiver) {
    this.receiver_ = receiver;
  }
  CoordinatorPtr.prototype.registerClientProcess = function() {
    return CoordinatorProxy.prototype.registerClientProcess
        .apply(this.ptr.getProxy(), arguments);
  };

  CoordinatorProxy.prototype.registerClientProcess = function(clientProcess, processType) {
    var params_ = new Coordinator_RegisterClientProcess_Params();
    params_.clientProcess = clientProcess;
    params_.processType = processType;
    var builder = new codec.MessageV0Builder(
        kCoordinator_RegisterClientProcess_Name,
        codec.align(Coordinator_RegisterClientProcess_Params.encodedSize));
    builder.encodeStruct(Coordinator_RegisterClientProcess_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  CoordinatorPtr.prototype.requestGlobalMemoryDump = function() {
    return CoordinatorProxy.prototype.requestGlobalMemoryDump
        .apply(this.ptr.getProxy(), arguments);
  };

  CoordinatorProxy.prototype.requestGlobalMemoryDump = function(dumpType, levelOfDetail, allocatorDumpNames) {
    var params_ = new Coordinator_RequestGlobalMemoryDump_Params();
    params_.dumpType = dumpType;
    params_.levelOfDetail = levelOfDetail;
    params_.allocatorDumpNames = allocatorDumpNames;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kCoordinator_RequestGlobalMemoryDump_Name,
          codec.align(Coordinator_RequestGlobalMemoryDump_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(Coordinator_RequestGlobalMemoryDump_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(Coordinator_RequestGlobalMemoryDump_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  CoordinatorPtr.prototype.requestGlobalMemoryDumpForPid = function() {
    return CoordinatorProxy.prototype.requestGlobalMemoryDumpForPid
        .apply(this.ptr.getProxy(), arguments);
  };

  CoordinatorProxy.prototype.requestGlobalMemoryDumpForPid = function(pid, allocatorDumpNames) {
    var params_ = new Coordinator_RequestGlobalMemoryDumpForPid_Params();
    params_.pid = pid;
    params_.allocatorDumpNames = allocatorDumpNames;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kCoordinator_RequestGlobalMemoryDumpForPid_Name,
          codec.align(Coordinator_RequestGlobalMemoryDumpForPid_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(Coordinator_RequestGlobalMemoryDumpForPid_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(Coordinator_RequestGlobalMemoryDumpForPid_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  CoordinatorPtr.prototype.requestGlobalMemoryDumpAndAppendToTrace = function() {
    return CoordinatorProxy.prototype.requestGlobalMemoryDumpAndAppendToTrace
        .apply(this.ptr.getProxy(), arguments);
  };

  CoordinatorProxy.prototype.requestGlobalMemoryDumpAndAppendToTrace = function(dumpType, levelOfDetail) {
    var params_ = new Coordinator_RequestGlobalMemoryDumpAndAppendToTrace_Params();
    params_.dumpType = dumpType;
    params_.levelOfDetail = levelOfDetail;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kCoordinator_RequestGlobalMemoryDumpAndAppendToTrace_Name,
          codec.align(Coordinator_RequestGlobalMemoryDumpAndAppendToTrace_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(Coordinator_RequestGlobalMemoryDumpAndAppendToTrace_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(Coordinator_RequestGlobalMemoryDumpAndAppendToTrace_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  CoordinatorPtr.prototype.registerHeapProfiler = function() {
    return CoordinatorProxy.prototype.registerHeapProfiler
        .apply(this.ptr.getProxy(), arguments);
  };

  CoordinatorProxy.prototype.registerHeapProfiler = function(heapProfiler) {
    var params_ = new Coordinator_RegisterHeapProfiler_Params();
    params_.heapProfiler = heapProfiler;
    var builder = new codec.MessageV0Builder(
        kCoordinator_RegisterHeapProfiler_Name,
        codec.align(Coordinator_RegisterHeapProfiler_Params.encodedSize));
    builder.encodeStruct(Coordinator_RegisterHeapProfiler_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function CoordinatorStub(delegate) {
    this.delegate_ = delegate;
  }
  CoordinatorStub.prototype.registerClientProcess = function(clientProcess, processType) {
    return this.delegate_ && this.delegate_.registerClientProcess && this.delegate_.registerClientProcess(clientProcess, processType);
  }
  CoordinatorStub.prototype.requestGlobalMemoryDump = function(dumpType, levelOfDetail, allocatorDumpNames) {
    return this.delegate_ && this.delegate_.requestGlobalMemoryDump && this.delegate_.requestGlobalMemoryDump(dumpType, levelOfDetail, allocatorDumpNames);
  }
  CoordinatorStub.prototype.requestGlobalMemoryDumpForPid = function(pid, allocatorDumpNames) {
    return this.delegate_ && this.delegate_.requestGlobalMemoryDumpForPid && this.delegate_.requestGlobalMemoryDumpForPid(pid, allocatorDumpNames);
  }
  CoordinatorStub.prototype.requestGlobalMemoryDumpAndAppendToTrace = function(dumpType, levelOfDetail) {
    return this.delegate_ && this.delegate_.requestGlobalMemoryDumpAndAppendToTrace && this.delegate_.requestGlobalMemoryDumpAndAppendToTrace(dumpType, levelOfDetail);
  }
  CoordinatorStub.prototype.registerHeapProfiler = function(heapProfiler) {
    return this.delegate_ && this.delegate_.registerHeapProfiler && this.delegate_.registerHeapProfiler(heapProfiler);
  }

  CoordinatorStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kCoordinator_RegisterClientProcess_Name:
      var params = reader.decodeStruct(Coordinator_RegisterClientProcess_Params);
      this.registerClientProcess(params.clientProcess, params.processType);
      return true;
    case kCoordinator_RegisterHeapProfiler_Name:
      var params = reader.decodeStruct(Coordinator_RegisterHeapProfiler_Params);
      this.registerHeapProfiler(params.heapProfiler);
      return true;
    default:
      return false;
    }
  };

  CoordinatorStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kCoordinator_RequestGlobalMemoryDump_Name:
      var params = reader.decodeStruct(Coordinator_RequestGlobalMemoryDump_Params);
      this.requestGlobalMemoryDump(params.dumpType, params.levelOfDetail, params.allocatorDumpNames).then(function(response) {
        var responseParams =
            new Coordinator_RequestGlobalMemoryDump_ResponseParams();
        responseParams.success = response.success;
        responseParams.globalMemoryDump = response.globalMemoryDump;
        var builder = new codec.MessageV1Builder(
            kCoordinator_RequestGlobalMemoryDump_Name,
            codec.align(Coordinator_RequestGlobalMemoryDump_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(Coordinator_RequestGlobalMemoryDump_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kCoordinator_RequestGlobalMemoryDumpForPid_Name:
      var params = reader.decodeStruct(Coordinator_RequestGlobalMemoryDumpForPid_Params);
      this.requestGlobalMemoryDumpForPid(params.pid, params.allocatorDumpNames).then(function(response) {
        var responseParams =
            new Coordinator_RequestGlobalMemoryDumpForPid_ResponseParams();
        responseParams.success = response.success;
        responseParams.globalMemoryDump = response.globalMemoryDump;
        var builder = new codec.MessageV1Builder(
            kCoordinator_RequestGlobalMemoryDumpForPid_Name,
            codec.align(Coordinator_RequestGlobalMemoryDumpForPid_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(Coordinator_RequestGlobalMemoryDumpForPid_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kCoordinator_RequestGlobalMemoryDumpAndAppendToTrace_Name:
      var params = reader.decodeStruct(Coordinator_RequestGlobalMemoryDumpAndAppendToTrace_Params);
      this.requestGlobalMemoryDumpAndAppendToTrace(params.dumpType, params.levelOfDetail).then(function(response) {
        var responseParams =
            new Coordinator_RequestGlobalMemoryDumpAndAppendToTrace_ResponseParams();
        responseParams.success = response.success;
        responseParams.dumpId = response.dumpId;
        var builder = new codec.MessageV1Builder(
            kCoordinator_RequestGlobalMemoryDumpAndAppendToTrace_Name,
            codec.align(Coordinator_RequestGlobalMemoryDumpAndAppendToTrace_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(Coordinator_RequestGlobalMemoryDumpAndAppendToTrace_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    default:
      return false;
    }
  };

  function validateCoordinatorRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kCoordinator_RegisterClientProcess_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = Coordinator_RegisterClientProcess_Params;
      break;
      case kCoordinator_RequestGlobalMemoryDump_Name:
        if (message.expectsResponse())
          paramsClass = Coordinator_RequestGlobalMemoryDump_Params;
      break;
      case kCoordinator_RequestGlobalMemoryDumpForPid_Name:
        if (message.expectsResponse())
          paramsClass = Coordinator_RequestGlobalMemoryDumpForPid_Params;
      break;
      case kCoordinator_RequestGlobalMemoryDumpAndAppendToTrace_Name:
        if (message.expectsResponse())
          paramsClass = Coordinator_RequestGlobalMemoryDumpAndAppendToTrace_Params;
      break;
      case kCoordinator_RegisterHeapProfiler_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = Coordinator_RegisterHeapProfiler_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateCoordinatorResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kCoordinator_RequestGlobalMemoryDump_Name:
        if (message.isResponse())
          paramsClass = Coordinator_RequestGlobalMemoryDump_ResponseParams;
        break;
      case kCoordinator_RequestGlobalMemoryDumpForPid_Name:
        if (message.isResponse())
          paramsClass = Coordinator_RequestGlobalMemoryDumpForPid_ResponseParams;
        break;
      case kCoordinator_RequestGlobalMemoryDumpAndAppendToTrace_Name:
        if (message.isResponse())
          paramsClass = Coordinator_RequestGlobalMemoryDumpAndAppendToTrace_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var Coordinator = {
    name: 'memory_instrumentation.mojom.Coordinator',
    kVersion: 0,
    ptrClass: CoordinatorPtr,
    proxyClass: CoordinatorProxy,
    stubClass: CoordinatorStub,
    validateRequest: validateCoordinatorRequest,
    validateResponse: validateCoordinatorResponse,
    mojomId: 'services/resource_coordinator/public/mojom/memory_instrumentation/memory_instrumentation.mojom',
    fuzzMethods: {
      registerClientProcess: {
        params: Coordinator_RegisterClientProcess_Params,
      },
      requestGlobalMemoryDump: {
        params: Coordinator_RequestGlobalMemoryDump_Params,
      },
      requestGlobalMemoryDumpForPid: {
        params: Coordinator_RequestGlobalMemoryDumpForPid_Params,
      },
      requestGlobalMemoryDumpAndAppendToTrace: {
        params: Coordinator_RequestGlobalMemoryDumpAndAppendToTrace_Params,
      },
      registerHeapProfiler: {
        params: Coordinator_RegisterHeapProfiler_Params,
      },
    },
  };
  CoordinatorStub.prototype.validator = validateCoordinatorRequest;
  CoordinatorProxy.prototype.validator = validateCoordinatorResponse;
  exports.DumpType = DumpType;
  exports.LevelOfDetail = LevelOfDetail;
  exports.ProcessType = ProcessType;
  exports.HeapProfilingMode = HeapProfilingMode;
  exports.MemoryMapOption = MemoryMapOption;
  exports.RequestArgs = RequestArgs;
  exports.RawAllocatorDumpEdge = RawAllocatorDumpEdge;
  exports.RawAllocatorDumpEntry = RawAllocatorDumpEntry;
  exports.RawAllocatorDump = RawAllocatorDump;
  exports.RawProcessMemoryDump = RawProcessMemoryDump;
  exports.VmRegion = VmRegion;
  exports.PlatformPrivateFootprint = PlatformPrivateFootprint;
  exports.RawOSMemDump = RawOSMemDump;
  exports.OSMemDump = OSMemDump;
  exports.AllocatorMemDump = AllocatorMemDump;
  exports.ProcessMemoryDump = ProcessMemoryDump;
  exports.GlobalMemoryDump = GlobalMemoryDump;
  exports.SharedBufferWithSize = SharedBufferWithSize;
  exports.RawAllocatorDumpEntryValue = RawAllocatorDumpEntryValue;
  exports.ClientProcess = ClientProcess;
  exports.ClientProcessPtr = ClientProcessPtr;
  exports.ClientProcessAssociatedPtr = ClientProcessAssociatedPtr;
  exports.HeapProfiler = HeapProfiler;
  exports.HeapProfilerPtr = HeapProfilerPtr;
  exports.HeapProfilerAssociatedPtr = HeapProfilerAssociatedPtr;
  exports.HeapProfilerHelper = HeapProfilerHelper;
  exports.HeapProfilerHelperPtr = HeapProfilerHelperPtr;
  exports.HeapProfilerHelperAssociatedPtr = HeapProfilerHelperAssociatedPtr;
  exports.Coordinator = Coordinator;
  exports.CoordinatorPtr = CoordinatorPtr;
  exports.CoordinatorAssociatedPtr = CoordinatorAssociatedPtr;
})();