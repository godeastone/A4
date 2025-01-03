// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'services/tracing/public/mojom/perfetto_service.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('tracing.mojom');


  var kTraceEventDataSourceName = "org.chromium.trace_event";

  function ChunksToMove(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ChunksToMove.prototype.initDefaults_ = function() {
    this.page = 0;
    this.chunk = 0;
    this.targetBuffer = 0;
  };
  ChunksToMove.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ChunksToMove.generate = function(generator_) {
    var generated = new ChunksToMove;
    generated.page = generator_.generateUint32();
    generated.chunk = generator_.generateUint32();
    generated.targetBuffer = generator_.generateUint32();
    return generated;
  };

  ChunksToMove.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.page = mutator_.mutateUint32(this.page);
    }
    if (mutator_.chooseMutateField()) {
      this.chunk = mutator_.mutateUint32(this.chunk);
    }
    if (mutator_.chooseMutateField()) {
      this.targetBuffer = mutator_.mutateUint32(this.targetBuffer);
    }
    return this;
  };
  ChunksToMove.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ChunksToMove.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ChunksToMove.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ChunksToMove.validate = function(messageValidator, offset) {
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

  ChunksToMove.encodedSize = codec.kStructHeaderSize + 16;

  ChunksToMove.decode = function(decoder) {
    var packed;
    var val = new ChunksToMove();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.page = decoder.decodeStruct(codec.Uint32);
    val.chunk = decoder.decodeStruct(codec.Uint32);
    val.targetBuffer = decoder.decodeStruct(codec.Uint32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  ChunksToMove.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ChunksToMove.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint32, val.page);
    encoder.encodeStruct(codec.Uint32, val.chunk);
    encoder.encodeStruct(codec.Uint32, val.targetBuffer);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function ChunkPatch(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ChunkPatch.prototype.initDefaults_ = function() {
    this.offset = 0;
    this.data = null;
  };
  ChunkPatch.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ChunkPatch.generate = function(generator_) {
    var generated = new ChunkPatch;
    generated.offset = generator_.generateUint32();
    generated.data = generator_.generateString(false);
    return generated;
  };

  ChunkPatch.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.offset = mutator_.mutateUint32(this.offset);
    }
    if (mutator_.chooseMutateField()) {
      this.data = mutator_.mutateString(this.data, false);
    }
    return this;
  };
  ChunkPatch.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ChunkPatch.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ChunkPatch.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ChunkPatch.validate = function(messageValidator, offset) {
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



    // validate ChunkPatch.data
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ChunkPatch.encodedSize = codec.kStructHeaderSize + 16;

  ChunkPatch.decode = function(decoder) {
    var packed;
    var val = new ChunkPatch();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.offset = decoder.decodeStruct(codec.Uint32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.data = decoder.decodeStruct(codec.String);
    return val;
  };

  ChunkPatch.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ChunkPatch.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint32, val.offset);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.String, val.data);
  };
  function ChunksToPatch(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ChunksToPatch.prototype.initDefaults_ = function() {
    this.targetBuffer = 0;
    this.writerId = 0;
    this.chunkId = 0;
    this.hasMorePatches = false;
    this.patches = null;
  };
  ChunksToPatch.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ChunksToPatch.generate = function(generator_) {
    var generated = new ChunksToPatch;
    generated.targetBuffer = generator_.generateUint32();
    generated.writerId = generator_.generateUint32();
    generated.chunkId = generator_.generateUint32();
    generated.patches = generator_.generateArray(function() {
      return generator_.generateStruct(tracing.mojom.ChunkPatch, false);
    });
    generated.hasMorePatches = generator_.generateBool();
    return generated;
  };

  ChunksToPatch.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.targetBuffer = mutator_.mutateUint32(this.targetBuffer);
    }
    if (mutator_.chooseMutateField()) {
      this.writerId = mutator_.mutateUint32(this.writerId);
    }
    if (mutator_.chooseMutateField()) {
      this.chunkId = mutator_.mutateUint32(this.chunkId);
    }
    if (mutator_.chooseMutateField()) {
      this.patches = mutator_.mutateArray(this.patches, function(val) {
        return mutator_.mutateStruct(tracing.mojom.ChunkPatch, false);
      });
    }
    if (mutator_.chooseMutateField()) {
      this.hasMorePatches = mutator_.mutateBool(this.hasMorePatches);
    }
    return this;
  };
  ChunksToPatch.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ChunksToPatch.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ChunksToPatch.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ChunksToPatch.validate = function(messageValidator, offset) {
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





    // validate ChunksToPatch.patches
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 16, 8, new codec.PointerTo(ChunkPatch), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  ChunksToPatch.encodedSize = codec.kStructHeaderSize + 24;

  ChunksToPatch.decode = function(decoder) {
    var packed;
    var val = new ChunksToPatch();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.targetBuffer = decoder.decodeStruct(codec.Uint32);
    val.writerId = decoder.decodeStruct(codec.Uint32);
    val.chunkId = decoder.decodeStruct(codec.Uint32);
    packed = decoder.readUint8();
    val.hasMorePatches = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.patches = decoder.decodeArrayPointer(new codec.PointerTo(ChunkPatch));
    return val;
  };

  ChunksToPatch.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ChunksToPatch.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint32, val.targetBuffer);
    encoder.encodeStruct(codec.Uint32, val.writerId);
    encoder.encodeStruct(codec.Uint32, val.chunkId);
    packed = 0;
    packed |= (val.hasMorePatches & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeArrayPointer(new codec.PointerTo(ChunkPatch), val.patches);
  };
  function CommitDataRequest(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  CommitDataRequest.prototype.initDefaults_ = function() {
    this.chunksToMove = null;
    this.chunksToPatch = null;
  };
  CommitDataRequest.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  CommitDataRequest.generate = function(generator_) {
    var generated = new CommitDataRequest;
    generated.chunksToMove = generator_.generateArray(function() {
      return generator_.generateStruct(tracing.mojom.ChunksToMove, false);
    });
    generated.chunksToPatch = generator_.generateArray(function() {
      return generator_.generateStruct(tracing.mojom.ChunksToPatch, false);
    });
    return generated;
  };

  CommitDataRequest.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.chunksToMove = mutator_.mutateArray(this.chunksToMove, function(val) {
        return mutator_.mutateStruct(tracing.mojom.ChunksToMove, false);
      });
    }
    if (mutator_.chooseMutateField()) {
      this.chunksToPatch = mutator_.mutateArray(this.chunksToPatch, function(val) {
        return mutator_.mutateStruct(tracing.mojom.ChunksToPatch, false);
      });
    }
    return this;
  };
  CommitDataRequest.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  CommitDataRequest.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  CommitDataRequest.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  CommitDataRequest.validate = function(messageValidator, offset) {
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


    // validate CommitDataRequest.chunksToMove
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 8, new codec.PointerTo(ChunksToMove), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;


    // validate CommitDataRequest.chunksToPatch
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 8, new codec.PointerTo(ChunksToPatch), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  CommitDataRequest.encodedSize = codec.kStructHeaderSize + 16;

  CommitDataRequest.decode = function(decoder) {
    var packed;
    var val = new CommitDataRequest();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.chunksToMove = decoder.decodeArrayPointer(new codec.PointerTo(ChunksToMove));
    val.chunksToPatch = decoder.decodeArrayPointer(new codec.PointerTo(ChunksToPatch));
    return val;
  };

  CommitDataRequest.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(CommitDataRequest.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(new codec.PointerTo(ChunksToMove), val.chunksToMove);
    encoder.encodeArrayPointer(new codec.PointerTo(ChunksToPatch), val.chunksToPatch);
  };
  function DataSourceConfig(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  DataSourceConfig.prototype.initDefaults_ = function() {
    this.name = null;
    this.traceConfig = null;
    this.targetBuffer = 0;
  };
  DataSourceConfig.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  DataSourceConfig.generate = function(generator_) {
    var generated = new DataSourceConfig;
    generated.name = generator_.generateString(false);
    generated.traceConfig = generator_.generateString(false);
    generated.targetBuffer = generator_.generateUint32();
    return generated;
  };

  DataSourceConfig.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.name = mutator_.mutateString(this.name, false);
    }
    if (mutator_.chooseMutateField()) {
      this.traceConfig = mutator_.mutateString(this.traceConfig, false);
    }
    if (mutator_.chooseMutateField()) {
      this.targetBuffer = mutator_.mutateUint32(this.targetBuffer);
    }
    return this;
  };
  DataSourceConfig.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  DataSourceConfig.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  DataSourceConfig.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  DataSourceConfig.validate = function(messageValidator, offset) {
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


    // validate DataSourceConfig.name
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate DataSourceConfig.traceConfig
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  DataSourceConfig.encodedSize = codec.kStructHeaderSize + 24;

  DataSourceConfig.decode = function(decoder) {
    var packed;
    var val = new DataSourceConfig();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.name = decoder.decodeStruct(codec.String);
    val.traceConfig = decoder.decodeStruct(codec.String);
    val.targetBuffer = decoder.decodeStruct(codec.Uint32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  DataSourceConfig.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(DataSourceConfig.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.name);
    encoder.encodeStruct(codec.String, val.traceConfig);
    encoder.encodeStruct(codec.Uint32, val.targetBuffer);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function ProducerHost_CommitData_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ProducerHost_CommitData_Params.prototype.initDefaults_ = function() {
    this.dataRequest = null;
  };
  ProducerHost_CommitData_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ProducerHost_CommitData_Params.generate = function(generator_) {
    var generated = new ProducerHost_CommitData_Params;
    generated.dataRequest = generator_.generateStruct(tracing.mojom.CommitDataRequest, false);
    return generated;
  };

  ProducerHost_CommitData_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.dataRequest = mutator_.mutateStruct(tracing.mojom.CommitDataRequest, false);
    }
    return this;
  };
  ProducerHost_CommitData_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ProducerHost_CommitData_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ProducerHost_CommitData_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ProducerHost_CommitData_Params.validate = function(messageValidator, offset) {
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


    // validate ProducerHost_CommitData_Params.dataRequest
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, CommitDataRequest, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ProducerHost_CommitData_Params.encodedSize = codec.kStructHeaderSize + 8;

  ProducerHost_CommitData_Params.decode = function(decoder) {
    var packed;
    var val = new ProducerHost_CommitData_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.dataRequest = decoder.decodeStructPointer(CommitDataRequest);
    return val;
  };

  ProducerHost_CommitData_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ProducerHost_CommitData_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(CommitDataRequest, val.dataRequest);
  };
  function ProducerClient_OnTracingStart_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ProducerClient_OnTracingStart_Params.prototype.initDefaults_ = function() {
    this.sharedMemory = null;
  };
  ProducerClient_OnTracingStart_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ProducerClient_OnTracingStart_Params.generate = function(generator_) {
    var generated = new ProducerClient_OnTracingStart_Params;
    generated.sharedMemory = generator_.generateSharedBuffer(false);
    return generated;
  };

  ProducerClient_OnTracingStart_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.sharedMemory = mutator_.mutateSharedBuffer(this.sharedMemory, false);
    }
    return this;
  };
  ProducerClient_OnTracingStart_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.sharedMemory !== null) {
      Array.prototype.push.apply(handles, ["handle<shared_buffer>"]);
    }
    return handles;
  };

  ProducerClient_OnTracingStart_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ProducerClient_OnTracingStart_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.sharedMemory = handles[idx++];;
    return idx;
  };

  ProducerClient_OnTracingStart_Params.validate = function(messageValidator, offset) {
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


    // validate ProducerClient_OnTracingStart_Params.sharedMemory
    err = messageValidator.validateHandle(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ProducerClient_OnTracingStart_Params.encodedSize = codec.kStructHeaderSize + 8;

  ProducerClient_OnTracingStart_Params.decode = function(decoder) {
    var packed;
    var val = new ProducerClient_OnTracingStart_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.sharedMemory = decoder.decodeStruct(codec.Handle);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  ProducerClient_OnTracingStart_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ProducerClient_OnTracingStart_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Handle, val.sharedMemory);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function ProducerClient_CreateDataSourceInstance_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ProducerClient_CreateDataSourceInstance_Params.prototype.initDefaults_ = function() {
    this.id = 0;
    this.dataSourceConfig = null;
  };
  ProducerClient_CreateDataSourceInstance_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ProducerClient_CreateDataSourceInstance_Params.generate = function(generator_) {
    var generated = new ProducerClient_CreateDataSourceInstance_Params;
    generated.id = generator_.generateUint64();
    generated.dataSourceConfig = generator_.generateStruct(tracing.mojom.DataSourceConfig, false);
    return generated;
  };

  ProducerClient_CreateDataSourceInstance_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.id = mutator_.mutateUint64(this.id);
    }
    if (mutator_.chooseMutateField()) {
      this.dataSourceConfig = mutator_.mutateStruct(tracing.mojom.DataSourceConfig, false);
    }
    return this;
  };
  ProducerClient_CreateDataSourceInstance_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ProducerClient_CreateDataSourceInstance_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ProducerClient_CreateDataSourceInstance_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ProducerClient_CreateDataSourceInstance_Params.validate = function(messageValidator, offset) {
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



    // validate ProducerClient_CreateDataSourceInstance_Params.dataSourceConfig
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, DataSourceConfig, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ProducerClient_CreateDataSourceInstance_Params.encodedSize = codec.kStructHeaderSize + 16;

  ProducerClient_CreateDataSourceInstance_Params.decode = function(decoder) {
    var packed;
    var val = new ProducerClient_CreateDataSourceInstance_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.id = decoder.decodeStruct(codec.Uint64);
    val.dataSourceConfig = decoder.decodeStructPointer(DataSourceConfig);
    return val;
  };

  ProducerClient_CreateDataSourceInstance_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ProducerClient_CreateDataSourceInstance_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint64, val.id);
    encoder.encodeStructPointer(DataSourceConfig, val.dataSourceConfig);
  };
  function ProducerClient_TearDownDataSourceInstance_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ProducerClient_TearDownDataSourceInstance_Params.prototype.initDefaults_ = function() {
    this.id = 0;
  };
  ProducerClient_TearDownDataSourceInstance_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ProducerClient_TearDownDataSourceInstance_Params.generate = function(generator_) {
    var generated = new ProducerClient_TearDownDataSourceInstance_Params;
    generated.id = generator_.generateUint64();
    return generated;
  };

  ProducerClient_TearDownDataSourceInstance_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.id = mutator_.mutateUint64(this.id);
    }
    return this;
  };
  ProducerClient_TearDownDataSourceInstance_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ProducerClient_TearDownDataSourceInstance_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ProducerClient_TearDownDataSourceInstance_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ProducerClient_TearDownDataSourceInstance_Params.validate = function(messageValidator, offset) {
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

  ProducerClient_TearDownDataSourceInstance_Params.encodedSize = codec.kStructHeaderSize + 8;

  ProducerClient_TearDownDataSourceInstance_Params.decode = function(decoder) {
    var packed;
    var val = new ProducerClient_TearDownDataSourceInstance_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.id = decoder.decodeStruct(codec.Uint64);
    return val;
  };

  ProducerClient_TearDownDataSourceInstance_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ProducerClient_TearDownDataSourceInstance_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint64, val.id);
  };
  function ProducerClient_Flush_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ProducerClient_Flush_Params.prototype.initDefaults_ = function() {
    this.flushRequestId = 0;
    this.dataSourceIds = null;
  };
  ProducerClient_Flush_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ProducerClient_Flush_Params.generate = function(generator_) {
    var generated = new ProducerClient_Flush_Params;
    generated.flushRequestId = generator_.generateUint64();
    generated.dataSourceIds = generator_.generateArray(function() {
      return generator_.generateUint64();
    });
    return generated;
  };

  ProducerClient_Flush_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.flushRequestId = mutator_.mutateUint64(this.flushRequestId);
    }
    if (mutator_.chooseMutateField()) {
      this.dataSourceIds = mutator_.mutateArray(this.dataSourceIds, function(val) {
        return mutator_.mutateUint64(val);
      });
    }
    return this;
  };
  ProducerClient_Flush_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ProducerClient_Flush_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ProducerClient_Flush_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ProducerClient_Flush_Params.validate = function(messageValidator, offset) {
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



    // validate ProducerClient_Flush_Params.dataSourceIds
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 8, codec.Uint64, false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ProducerClient_Flush_Params.encodedSize = codec.kStructHeaderSize + 16;

  ProducerClient_Flush_Params.decode = function(decoder) {
    var packed;
    var val = new ProducerClient_Flush_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.flushRequestId = decoder.decodeStruct(codec.Uint64);
    val.dataSourceIds = decoder.decodeArrayPointer(codec.Uint64);
    return val;
  };

  ProducerClient_Flush_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ProducerClient_Flush_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint64, val.flushRequestId);
    encoder.encodeArrayPointer(codec.Uint64, val.dataSourceIds);
  };
  function PerfettoService_ConnectToProducerHost_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PerfettoService_ConnectToProducerHost_Params.prototype.initDefaults_ = function() {
    this.producerClient = new ProducerClientPtr();
    this.producerHost = new bindings.InterfaceRequest();
  };
  PerfettoService_ConnectToProducerHost_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PerfettoService_ConnectToProducerHost_Params.generate = function(generator_) {
    var generated = new PerfettoService_ConnectToProducerHost_Params;
    generated.producerClient = generator_.generateInterface("tracing.mojom.ProducerClient", false);
    generated.producerHost = generator_.generateInterfaceRequest("tracing.mojom.ProducerHost", false);
    return generated;
  };

  PerfettoService_ConnectToProducerHost_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.producerClient = mutator_.mutateInterface(this.producerClient, "tracing.mojom.ProducerClient", false);
    }
    if (mutator_.chooseMutateField()) {
      this.producerHost = mutator_.mutateInterfaceRequest(this.producerHost, "tracing.mojom.ProducerHost", false);
    }
    return this;
  };
  PerfettoService_ConnectToProducerHost_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.producerClient !== null) {
      Array.prototype.push.apply(handles, ["tracing.mojom.ProducerClientPtr"]);
    }
    if (this.producerHost !== null) {
      Array.prototype.push.apply(handles, ["tracing.mojom.ProducerHostRequest"]);
    }
    return handles;
  };

  PerfettoService_ConnectToProducerHost_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PerfettoService_ConnectToProducerHost_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.producerClient = handles[idx++];;
    this.producerHost = handles[idx++];;
    return idx;
  };

  PerfettoService_ConnectToProducerHost_Params.validate = function(messageValidator, offset) {
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


    // validate PerfettoService_ConnectToProducerHost_Params.producerClient
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 0, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate PerfettoService_ConnectToProducerHost_Params.producerHost
    err = messageValidator.validateInterfaceRequest(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PerfettoService_ConnectToProducerHost_Params.encodedSize = codec.kStructHeaderSize + 16;

  PerfettoService_ConnectToProducerHost_Params.decode = function(decoder) {
    var packed;
    var val = new PerfettoService_ConnectToProducerHost_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.producerClient = decoder.decodeStruct(new codec.Interface(ProducerClientPtr));
    val.producerHost = decoder.decodeStruct(codec.InterfaceRequest);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  PerfettoService_ConnectToProducerHost_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PerfettoService_ConnectToProducerHost_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(new codec.Interface(ProducerClientPtr), val.producerClient);
    encoder.encodeStruct(codec.InterfaceRequest, val.producerHost);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  var kProducerHost_CommitData_Name = 877999084;

  function ProducerHostPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(ProducerHost,
                                                   handleOrPtrInfo);
  }

  function ProducerHostAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        ProducerHost, associatedInterfacePtrInfo);
  }

  ProducerHostAssociatedPtr.prototype =
      Object.create(ProducerHostPtr.prototype);
  ProducerHostAssociatedPtr.prototype.constructor =
      ProducerHostAssociatedPtr;

  function ProducerHostProxy(receiver) {
    this.receiver_ = receiver;
  }
  ProducerHostPtr.prototype.commitData = function() {
    return ProducerHostProxy.prototype.commitData
        .apply(this.ptr.getProxy(), arguments);
  };

  ProducerHostProxy.prototype.commitData = function(dataRequest) {
    var params_ = new ProducerHost_CommitData_Params();
    params_.dataRequest = dataRequest;
    var builder = new codec.MessageV0Builder(
        kProducerHost_CommitData_Name,
        codec.align(ProducerHost_CommitData_Params.encodedSize));
    builder.encodeStruct(ProducerHost_CommitData_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function ProducerHostStub(delegate) {
    this.delegate_ = delegate;
  }
  ProducerHostStub.prototype.commitData = function(dataRequest) {
    return this.delegate_ && this.delegate_.commitData && this.delegate_.commitData(dataRequest);
  }

  ProducerHostStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kProducerHost_CommitData_Name:
      var params = reader.decodeStruct(ProducerHost_CommitData_Params);
      this.commitData(params.dataRequest);
      return true;
    default:
      return false;
    }
  };

  ProducerHostStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateProducerHostRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kProducerHost_CommitData_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = ProducerHost_CommitData_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateProducerHostResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var ProducerHost = {
    name: 'tracing.mojom.ProducerHost',
    kVersion: 0,
    ptrClass: ProducerHostPtr,
    proxyClass: ProducerHostProxy,
    stubClass: ProducerHostStub,
    validateRequest: validateProducerHostRequest,
    validateResponse: null,
    mojomId: 'services/tracing/public/mojom/perfetto_service.mojom',
    fuzzMethods: {
      commitData: {
        params: ProducerHost_CommitData_Params,
      },
    },
  };
  ProducerHostStub.prototype.validator = validateProducerHostRequest;
  ProducerHostProxy.prototype.validator = null;
  var kProducerClient_OnTracingStart_Name = 1517782341;
  var kProducerClient_CreateDataSourceInstance_Name = 487142254;
  var kProducerClient_TearDownDataSourceInstance_Name = 1867099224;
  var kProducerClient_Flush_Name = 1564244995;

  function ProducerClientPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(ProducerClient,
                                                   handleOrPtrInfo);
  }

  function ProducerClientAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        ProducerClient, associatedInterfacePtrInfo);
  }

  ProducerClientAssociatedPtr.prototype =
      Object.create(ProducerClientPtr.prototype);
  ProducerClientAssociatedPtr.prototype.constructor =
      ProducerClientAssociatedPtr;

  function ProducerClientProxy(receiver) {
    this.receiver_ = receiver;
  }
  ProducerClientPtr.prototype.onTracingStart = function() {
    return ProducerClientProxy.prototype.onTracingStart
        .apply(this.ptr.getProxy(), arguments);
  };

  ProducerClientProxy.prototype.onTracingStart = function(sharedMemory) {
    var params_ = new ProducerClient_OnTracingStart_Params();
    params_.sharedMemory = sharedMemory;
    var builder = new codec.MessageV0Builder(
        kProducerClient_OnTracingStart_Name,
        codec.align(ProducerClient_OnTracingStart_Params.encodedSize));
    builder.encodeStruct(ProducerClient_OnTracingStart_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  ProducerClientPtr.prototype.createDataSourceInstance = function() {
    return ProducerClientProxy.prototype.createDataSourceInstance
        .apply(this.ptr.getProxy(), arguments);
  };

  ProducerClientProxy.prototype.createDataSourceInstance = function(id, dataSourceConfig) {
    var params_ = new ProducerClient_CreateDataSourceInstance_Params();
    params_.id = id;
    params_.dataSourceConfig = dataSourceConfig;
    var builder = new codec.MessageV0Builder(
        kProducerClient_CreateDataSourceInstance_Name,
        codec.align(ProducerClient_CreateDataSourceInstance_Params.encodedSize));
    builder.encodeStruct(ProducerClient_CreateDataSourceInstance_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  ProducerClientPtr.prototype.tearDownDataSourceInstance = function() {
    return ProducerClientProxy.prototype.tearDownDataSourceInstance
        .apply(this.ptr.getProxy(), arguments);
  };

  ProducerClientProxy.prototype.tearDownDataSourceInstance = function(id) {
    var params_ = new ProducerClient_TearDownDataSourceInstance_Params();
    params_.id = id;
    var builder = new codec.MessageV0Builder(
        kProducerClient_TearDownDataSourceInstance_Name,
        codec.align(ProducerClient_TearDownDataSourceInstance_Params.encodedSize));
    builder.encodeStruct(ProducerClient_TearDownDataSourceInstance_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  ProducerClientPtr.prototype.flush = function() {
    return ProducerClientProxy.prototype.flush
        .apply(this.ptr.getProxy(), arguments);
  };

  ProducerClientProxy.prototype.flush = function(flushRequestId, dataSourceIds) {
    var params_ = new ProducerClient_Flush_Params();
    params_.flushRequestId = flushRequestId;
    params_.dataSourceIds = dataSourceIds;
    var builder = new codec.MessageV0Builder(
        kProducerClient_Flush_Name,
        codec.align(ProducerClient_Flush_Params.encodedSize));
    builder.encodeStruct(ProducerClient_Flush_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function ProducerClientStub(delegate) {
    this.delegate_ = delegate;
  }
  ProducerClientStub.prototype.onTracingStart = function(sharedMemory) {
    return this.delegate_ && this.delegate_.onTracingStart && this.delegate_.onTracingStart(sharedMemory);
  }
  ProducerClientStub.prototype.createDataSourceInstance = function(id, dataSourceConfig) {
    return this.delegate_ && this.delegate_.createDataSourceInstance && this.delegate_.createDataSourceInstance(id, dataSourceConfig);
  }
  ProducerClientStub.prototype.tearDownDataSourceInstance = function(id) {
    return this.delegate_ && this.delegate_.tearDownDataSourceInstance && this.delegate_.tearDownDataSourceInstance(id);
  }
  ProducerClientStub.prototype.flush = function(flushRequestId, dataSourceIds) {
    return this.delegate_ && this.delegate_.flush && this.delegate_.flush(flushRequestId, dataSourceIds);
  }

  ProducerClientStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kProducerClient_OnTracingStart_Name:
      var params = reader.decodeStruct(ProducerClient_OnTracingStart_Params);
      this.onTracingStart(params.sharedMemory);
      return true;
    case kProducerClient_CreateDataSourceInstance_Name:
      var params = reader.decodeStruct(ProducerClient_CreateDataSourceInstance_Params);
      this.createDataSourceInstance(params.id, params.dataSourceConfig);
      return true;
    case kProducerClient_TearDownDataSourceInstance_Name:
      var params = reader.decodeStruct(ProducerClient_TearDownDataSourceInstance_Params);
      this.tearDownDataSourceInstance(params.id);
      return true;
    case kProducerClient_Flush_Name:
      var params = reader.decodeStruct(ProducerClient_Flush_Params);
      this.flush(params.flushRequestId, params.dataSourceIds);
      return true;
    default:
      return false;
    }
  };

  ProducerClientStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateProducerClientRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kProducerClient_OnTracingStart_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = ProducerClient_OnTracingStart_Params;
      break;
      case kProducerClient_CreateDataSourceInstance_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = ProducerClient_CreateDataSourceInstance_Params;
      break;
      case kProducerClient_TearDownDataSourceInstance_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = ProducerClient_TearDownDataSourceInstance_Params;
      break;
      case kProducerClient_Flush_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = ProducerClient_Flush_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateProducerClientResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var ProducerClient = {
    name: 'tracing.mojom.ProducerClient',
    kVersion: 0,
    ptrClass: ProducerClientPtr,
    proxyClass: ProducerClientProxy,
    stubClass: ProducerClientStub,
    validateRequest: validateProducerClientRequest,
    validateResponse: null,
    mojomId: 'services/tracing/public/mojom/perfetto_service.mojom',
    fuzzMethods: {
      onTracingStart: {
        params: ProducerClient_OnTracingStart_Params,
      },
      createDataSourceInstance: {
        params: ProducerClient_CreateDataSourceInstance_Params,
      },
      tearDownDataSourceInstance: {
        params: ProducerClient_TearDownDataSourceInstance_Params,
      },
      flush: {
        params: ProducerClient_Flush_Params,
      },
    },
  };
  ProducerClientStub.prototype.validator = validateProducerClientRequest;
  ProducerClientProxy.prototype.validator = null;
  var kPerfettoService_ConnectToProducerHost_Name = 130158720;

  function PerfettoServicePtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(PerfettoService,
                                                   handleOrPtrInfo);
  }

  function PerfettoServiceAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        PerfettoService, associatedInterfacePtrInfo);
  }

  PerfettoServiceAssociatedPtr.prototype =
      Object.create(PerfettoServicePtr.prototype);
  PerfettoServiceAssociatedPtr.prototype.constructor =
      PerfettoServiceAssociatedPtr;

  function PerfettoServiceProxy(receiver) {
    this.receiver_ = receiver;
  }
  PerfettoServicePtr.prototype.connectToProducerHost = function() {
    return PerfettoServiceProxy.prototype.connectToProducerHost
        .apply(this.ptr.getProxy(), arguments);
  };

  PerfettoServiceProxy.prototype.connectToProducerHost = function(producerClient, producerHost) {
    var params_ = new PerfettoService_ConnectToProducerHost_Params();
    params_.producerClient = producerClient;
    params_.producerHost = producerHost;
    var builder = new codec.MessageV0Builder(
        kPerfettoService_ConnectToProducerHost_Name,
        codec.align(PerfettoService_ConnectToProducerHost_Params.encodedSize));
    builder.encodeStruct(PerfettoService_ConnectToProducerHost_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function PerfettoServiceStub(delegate) {
    this.delegate_ = delegate;
  }
  PerfettoServiceStub.prototype.connectToProducerHost = function(producerClient, producerHost) {
    return this.delegate_ && this.delegate_.connectToProducerHost && this.delegate_.connectToProducerHost(producerClient, producerHost);
  }

  PerfettoServiceStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kPerfettoService_ConnectToProducerHost_Name:
      var params = reader.decodeStruct(PerfettoService_ConnectToProducerHost_Params);
      this.connectToProducerHost(params.producerClient, params.producerHost);
      return true;
    default:
      return false;
    }
  };

  PerfettoServiceStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validatePerfettoServiceRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kPerfettoService_ConnectToProducerHost_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = PerfettoService_ConnectToProducerHost_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validatePerfettoServiceResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var PerfettoService = {
    name: 'tracing.mojom.PerfettoService',
    kVersion: 0,
    ptrClass: PerfettoServicePtr,
    proxyClass: PerfettoServiceProxy,
    stubClass: PerfettoServiceStub,
    validateRequest: validatePerfettoServiceRequest,
    validateResponse: null,
    mojomId: 'services/tracing/public/mojom/perfetto_service.mojom',
    fuzzMethods: {
      connectToProducerHost: {
        params: PerfettoService_ConnectToProducerHost_Params,
      },
    },
  };
  PerfettoServiceStub.prototype.validator = validatePerfettoServiceRequest;
  PerfettoServiceProxy.prototype.validator = null;
  exports.kTraceEventDataSourceName = kTraceEventDataSourceName;
  exports.ChunksToMove = ChunksToMove;
  exports.ChunkPatch = ChunkPatch;
  exports.ChunksToPatch = ChunksToPatch;
  exports.CommitDataRequest = CommitDataRequest;
  exports.DataSourceConfig = DataSourceConfig;
  exports.ProducerHost = ProducerHost;
  exports.ProducerHostPtr = ProducerHostPtr;
  exports.ProducerHostAssociatedPtr = ProducerHostAssociatedPtr;
  exports.ProducerClient = ProducerClient;
  exports.ProducerClientPtr = ProducerClientPtr;
  exports.ProducerClientAssociatedPtr = ProducerClientAssociatedPtr;
  exports.PerfettoService = PerfettoService;
  exports.PerfettoServicePtr = PerfettoServicePtr;
  exports.PerfettoServiceAssociatedPtr = PerfettoServiceAssociatedPtr;
})();