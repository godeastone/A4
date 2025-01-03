// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'components/services/leveldb/public/interfaces/leveldb.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('leveldb.mojom');
  var directory$ =
      mojo.internal.exposeNamespace('filesystem.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'components/services/filesystem/public/interfaces/directory.mojom', '../../../filesystem/public/interfaces/directory.mojom.js');
  }
  var memory_allocator_dump_cross_process_uid$ =
      mojo.internal.exposeNamespace('mojoBase.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'mojo/public/mojom/base/memory_allocator_dump_cross_process_uid.mojom', '../../../../../mojo/public/mojom/base/memory_allocator_dump_cross_process_uid.mojom.js');
  }
  var unguessable_token$ =
      mojo.internal.exposeNamespace('mojoBase.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'mojo/public/mojom/base/unguessable_token.mojom', '../../../../../mojo/public/mojom/base/unguessable_token.mojom.js');
  }


  var DatabaseError = {};
  DatabaseError.OK = 0;
  DatabaseError.NOT_FOUND = DatabaseError.OK + 1;
  DatabaseError.CORRUPTION = DatabaseError.NOT_FOUND + 1;
  DatabaseError.NOT_SUPPORTED = DatabaseError.CORRUPTION + 1;
  DatabaseError.INVALID_ARGUMENT = DatabaseError.NOT_SUPPORTED + 1;
  DatabaseError.IO_ERROR = DatabaseError.INVALID_ARGUMENT + 1;

  DatabaseError.isKnownEnumValue = function(value) {
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

  DatabaseError.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };
  var BatchOperationType = {};
  BatchOperationType.PUT_KEY = 0;
  BatchOperationType.DELETE_KEY = BatchOperationType.PUT_KEY + 1;
  BatchOperationType.DELETE_PREFIXED_KEY = BatchOperationType.DELETE_KEY + 1;
  BatchOperationType.COPY_PREFIXED_KEY = BatchOperationType.DELETE_PREFIXED_KEY + 1;

  BatchOperationType.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
      return true;
    }
    return false;
  };

  BatchOperationType.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };
  var SharedReadCache = {};
  SharedReadCache.Default = 0;
  SharedReadCache.Web = SharedReadCache.Default + 1;

  SharedReadCache.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
      return true;
    }
    return false;
  };

  SharedReadCache.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };

  function BatchedOperation(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  BatchedOperation.prototype.initDefaults_ = function() {
    this.type = 0;
    this.key = null;
    this.value = null;
  };
  BatchedOperation.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  BatchedOperation.generate = function(generator_) {
    var generated = new BatchedOperation;
    generated.type = generator_.generateEnum(0, 3);
    generated.key = generator_.generateArray(function() {
      return generator_.generateUint8();
    });
    generated.value = generator_.generateArray(function() {
      return generator_.generateUint8();
    });
    return generated;
  };

  BatchedOperation.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.type = mutator_.mutateEnum(this.type, 0, 3);
    }
    if (mutator_.chooseMutateField()) {
      this.key = mutator_.mutateArray(this.key, function(val) {
        return mutator_.mutateUint8(val);
      });
    }
    if (mutator_.chooseMutateField()) {
      this.value = mutator_.mutateArray(this.value, function(val) {
        return mutator_.mutateUint8(val);
      });
    }
    return this;
  };
  BatchedOperation.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  BatchedOperation.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  BatchedOperation.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  BatchedOperation.validate = function(messageValidator, offset) {
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


    // validate BatchedOperation.type
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, BatchOperationType);
    if (err !== validator.validationError.NONE)
        return err;


    // validate BatchedOperation.key
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 1, codec.Uint8, false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;


    // validate BatchedOperation.value
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 16, 1, codec.Uint8, true, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  BatchedOperation.encodedSize = codec.kStructHeaderSize + 24;

  BatchedOperation.decode = function(decoder) {
    var packed;
    var val = new BatchedOperation();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.type = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.key = decoder.decodeArrayPointer(codec.Uint8);
    val.value = decoder.decodeArrayPointer(codec.Uint8);
    return val;
  };

  BatchedOperation.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(BatchedOperation.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.type);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeArrayPointer(codec.Uint8, val.key);
    encoder.encodeArrayPointer(codec.Uint8, val.value);
  };
  function KeyValue(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  KeyValue.prototype.initDefaults_ = function() {
    this.key = null;
    this.value = null;
  };
  KeyValue.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  KeyValue.generate = function(generator_) {
    var generated = new KeyValue;
    generated.key = generator_.generateArray(function() {
      return generator_.generateUint8();
    });
    generated.value = generator_.generateArray(function() {
      return generator_.generateUint8();
    });
    return generated;
  };

  KeyValue.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.key = mutator_.mutateArray(this.key, function(val) {
        return mutator_.mutateUint8(val);
      });
    }
    if (mutator_.chooseMutateField()) {
      this.value = mutator_.mutateArray(this.value, function(val) {
        return mutator_.mutateUint8(val);
      });
    }
    return this;
  };
  KeyValue.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  KeyValue.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  KeyValue.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  KeyValue.validate = function(messageValidator, offset) {
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


    // validate KeyValue.key
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 1, codec.Uint8, false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;


    // validate KeyValue.value
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 1, codec.Uint8, false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  KeyValue.encodedSize = codec.kStructHeaderSize + 16;

  KeyValue.decode = function(decoder) {
    var packed;
    var val = new KeyValue();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.key = decoder.decodeArrayPointer(codec.Uint8);
    val.value = decoder.decodeArrayPointer(codec.Uint8);
    return val;
  };

  KeyValue.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(KeyValue.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(codec.Uint8, val.key);
    encoder.encodeArrayPointer(codec.Uint8, val.value);
  };
  function OpenOptions(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  OpenOptions.prototype.initDefaults_ = function() {
    this.createIfMissing = false;
    this.errorIfExists = false;
    this.paranoidChecks = false;
    this.maxOpenFiles = 0;
    this.writeBufferSize = 0;
    this.sharedBlockReadCache = SharedReadCache.Default;
  };
  OpenOptions.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  OpenOptions.generate = function(generator_) {
    var generated = new OpenOptions;
    generated.createIfMissing = generator_.generateBool();
    generated.errorIfExists = generator_.generateBool();
    generated.paranoidChecks = generator_.generateBool();
    generated.writeBufferSize = generator_.generateUint64();
    generated.maxOpenFiles = generator_.generateInt32();
    generated.sharedBlockReadCache = generator_.generateEnum(0, 1);
    return generated;
  };

  OpenOptions.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.createIfMissing = mutator_.mutateBool(this.createIfMissing);
    }
    if (mutator_.chooseMutateField()) {
      this.errorIfExists = mutator_.mutateBool(this.errorIfExists);
    }
    if (mutator_.chooseMutateField()) {
      this.paranoidChecks = mutator_.mutateBool(this.paranoidChecks);
    }
    if (mutator_.chooseMutateField()) {
      this.writeBufferSize = mutator_.mutateUint64(this.writeBufferSize);
    }
    if (mutator_.chooseMutateField()) {
      this.maxOpenFiles = mutator_.mutateInt32(this.maxOpenFiles);
    }
    if (mutator_.chooseMutateField()) {
      this.sharedBlockReadCache = mutator_.mutateEnum(this.sharedBlockReadCache, 0, 1);
    }
    return this;
  };
  OpenOptions.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  OpenOptions.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  OpenOptions.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  OpenOptions.validate = function(messageValidator, offset) {
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







    // validate OpenOptions.sharedBlockReadCache
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 16, SharedReadCache);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  OpenOptions.encodedSize = codec.kStructHeaderSize + 24;

  OpenOptions.decode = function(decoder) {
    var packed;
    var val = new OpenOptions();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.createIfMissing = (packed >> 0) & 1 ? true : false;
    val.errorIfExists = (packed >> 1) & 1 ? true : false;
    val.paranoidChecks = (packed >> 2) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.maxOpenFiles = decoder.decodeStruct(codec.Int32);
    val.writeBufferSize = decoder.decodeStruct(codec.Uint64);
    val.sharedBlockReadCache = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  OpenOptions.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(OpenOptions.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.createIfMissing & 1) << 0
    packed |= (val.errorIfExists & 1) << 1
    packed |= (val.paranoidChecks & 1) << 2
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.Int32, val.maxOpenFiles);
    encoder.encodeStruct(codec.Uint64, val.writeBufferSize);
    encoder.encodeStruct(codec.Int32, val.sharedBlockReadCache);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function LevelDBService_Open_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  LevelDBService_Open_Params.prototype.initDefaults_ = function() {
    this.directory = new directory$.DirectoryPtr();
    this.dbname = null;
    this.memoryDumpId = null;
    this.database = new associatedBindings.AssociatedInterfaceRequest();
  };
  LevelDBService_Open_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  LevelDBService_Open_Params.generate = function(generator_) {
    var generated = new LevelDBService_Open_Params;
    generated.directory = generator_.generateInterface("filesystem.mojom.Directory", false);
    generated.dbname = generator_.generateString(false);
    generated.memoryDumpId = generator_.generateStruct(mojoBase.mojom.MemoryAllocatorDumpCrossProcessUid, true);
    generated.database = generator_.generateAssociatedInterfaceRequest("leveldb.mojom.LevelDBDatabase", false);
    return generated;
  };

  LevelDBService_Open_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.directory = mutator_.mutateInterface(this.directory, "filesystem.mojom.Directory", false);
    }
    if (mutator_.chooseMutateField()) {
      this.dbname = mutator_.mutateString(this.dbname, false);
    }
    if (mutator_.chooseMutateField()) {
      this.memoryDumpId = mutator_.mutateStruct(mojoBase.mojom.MemoryAllocatorDumpCrossProcessUid, true);
    }
    if (mutator_.chooseMutateField()) {
      this.database = mutator_.mutateAssociatedInterfaceRequest(this.database, "leveldb.mojom.LevelDBDatabase", false);
    }
    return this;
  };
  LevelDBService_Open_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.directory !== null) {
      Array.prototype.push.apply(handles, ["filesystem.mojom.DirectoryPtr"]);
    }
    if (this.database !== null) {
      Array.prototype.push.apply(handles, ["leveldb.mojom.LevelDBDatabaseAssociatedRequest"]);
    }
    return handles;
  };

  LevelDBService_Open_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  LevelDBService_Open_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.directory = handles[idx++];;
    this.database = handles[idx++];;
    return idx;
  };

  LevelDBService_Open_Params.validate = function(messageValidator, offset) {
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


    // validate LevelDBService_Open_Params.directory
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 0, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate LevelDBService_Open_Params.dbname
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate LevelDBService_Open_Params.memoryDumpId
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, memory_allocator_dump_cross_process_uid$.MemoryAllocatorDumpCrossProcessUid, true);
    if (err !== validator.validationError.NONE)
        return err;


    // validate LevelDBService_Open_Params.database
    err = messageValidator.validateAssociatedInterfaceRequest(offset + codec.kStructHeaderSize + 24, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  LevelDBService_Open_Params.encodedSize = codec.kStructHeaderSize + 32;

  LevelDBService_Open_Params.decode = function(decoder) {
    var packed;
    var val = new LevelDBService_Open_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.directory = decoder.decodeStruct(new codec.Interface(directory$.DirectoryPtr));
    val.dbname = decoder.decodeStruct(codec.String);
    val.memoryDumpId = decoder.decodeStructPointer(memory_allocator_dump_cross_process_uid$.MemoryAllocatorDumpCrossProcessUid);
    val.database = decoder.decodeStruct(codec.AssociatedInterfaceRequest);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  LevelDBService_Open_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(LevelDBService_Open_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(new codec.Interface(directory$.DirectoryPtr), val.directory);
    encoder.encodeStruct(codec.String, val.dbname);
    encoder.encodeStructPointer(memory_allocator_dump_cross_process_uid$.MemoryAllocatorDumpCrossProcessUid, val.memoryDumpId);
    encoder.encodeStruct(codec.AssociatedInterfaceRequest, val.database);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function LevelDBService_Open_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  LevelDBService_Open_ResponseParams.prototype.initDefaults_ = function() {
    this.status = 0;
  };
  LevelDBService_Open_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  LevelDBService_Open_ResponseParams.generate = function(generator_) {
    var generated = new LevelDBService_Open_ResponseParams;
    generated.status = generator_.generateEnum(0, 5);
    return generated;
  };

  LevelDBService_Open_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.status = mutator_.mutateEnum(this.status, 0, 5);
    }
    return this;
  };
  LevelDBService_Open_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  LevelDBService_Open_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  LevelDBService_Open_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  LevelDBService_Open_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate LevelDBService_Open_ResponseParams.status
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, DatabaseError);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  LevelDBService_Open_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  LevelDBService_Open_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new LevelDBService_Open_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.status = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  LevelDBService_Open_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(LevelDBService_Open_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.status);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function LevelDBService_OpenWithOptions_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  LevelDBService_OpenWithOptions_Params.prototype.initDefaults_ = function() {
    this.options = null;
    this.directory = new directory$.DirectoryPtr();
    this.dbname = null;
    this.memoryDumpId = null;
    this.database = new associatedBindings.AssociatedInterfaceRequest();
  };
  LevelDBService_OpenWithOptions_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  LevelDBService_OpenWithOptions_Params.generate = function(generator_) {
    var generated = new LevelDBService_OpenWithOptions_Params;
    generated.options = generator_.generateStruct(leveldb.mojom.OpenOptions, false);
    generated.directory = generator_.generateInterface("filesystem.mojom.Directory", false);
    generated.dbname = generator_.generateString(false);
    generated.memoryDumpId = generator_.generateStruct(mojoBase.mojom.MemoryAllocatorDumpCrossProcessUid, true);
    generated.database = generator_.generateAssociatedInterfaceRequest("leveldb.mojom.LevelDBDatabase", false);
    return generated;
  };

  LevelDBService_OpenWithOptions_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.options = mutator_.mutateStruct(leveldb.mojom.OpenOptions, false);
    }
    if (mutator_.chooseMutateField()) {
      this.directory = mutator_.mutateInterface(this.directory, "filesystem.mojom.Directory", false);
    }
    if (mutator_.chooseMutateField()) {
      this.dbname = mutator_.mutateString(this.dbname, false);
    }
    if (mutator_.chooseMutateField()) {
      this.memoryDumpId = mutator_.mutateStruct(mojoBase.mojom.MemoryAllocatorDumpCrossProcessUid, true);
    }
    if (mutator_.chooseMutateField()) {
      this.database = mutator_.mutateAssociatedInterfaceRequest(this.database, "leveldb.mojom.LevelDBDatabase", false);
    }
    return this;
  };
  LevelDBService_OpenWithOptions_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.directory !== null) {
      Array.prototype.push.apply(handles, ["filesystem.mojom.DirectoryPtr"]);
    }
    if (this.database !== null) {
      Array.prototype.push.apply(handles, ["leveldb.mojom.LevelDBDatabaseAssociatedRequest"]);
    }
    return handles;
  };

  LevelDBService_OpenWithOptions_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  LevelDBService_OpenWithOptions_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.directory = handles[idx++];;
    this.database = handles[idx++];;
    return idx;
  };

  LevelDBService_OpenWithOptions_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 48}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;


    // validate LevelDBService_OpenWithOptions_Params.options
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, OpenOptions, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate LevelDBService_OpenWithOptions_Params.directory
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 8, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate LevelDBService_OpenWithOptions_Params.dbname
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 16, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate LevelDBService_OpenWithOptions_Params.memoryDumpId
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 24, memory_allocator_dump_cross_process_uid$.MemoryAllocatorDumpCrossProcessUid, true);
    if (err !== validator.validationError.NONE)
        return err;


    // validate LevelDBService_OpenWithOptions_Params.database
    err = messageValidator.validateAssociatedInterfaceRequest(offset + codec.kStructHeaderSize + 32, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  LevelDBService_OpenWithOptions_Params.encodedSize = codec.kStructHeaderSize + 40;

  LevelDBService_OpenWithOptions_Params.decode = function(decoder) {
    var packed;
    var val = new LevelDBService_OpenWithOptions_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.options = decoder.decodeStructPointer(OpenOptions);
    val.directory = decoder.decodeStruct(new codec.Interface(directory$.DirectoryPtr));
    val.dbname = decoder.decodeStruct(codec.String);
    val.memoryDumpId = decoder.decodeStructPointer(memory_allocator_dump_cross_process_uid$.MemoryAllocatorDumpCrossProcessUid);
    val.database = decoder.decodeStruct(codec.AssociatedInterfaceRequest);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  LevelDBService_OpenWithOptions_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(LevelDBService_OpenWithOptions_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(OpenOptions, val.options);
    encoder.encodeStruct(new codec.Interface(directory$.DirectoryPtr), val.directory);
    encoder.encodeStruct(codec.String, val.dbname);
    encoder.encodeStructPointer(memory_allocator_dump_cross_process_uid$.MemoryAllocatorDumpCrossProcessUid, val.memoryDumpId);
    encoder.encodeStruct(codec.AssociatedInterfaceRequest, val.database);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function LevelDBService_OpenWithOptions_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  LevelDBService_OpenWithOptions_ResponseParams.prototype.initDefaults_ = function() {
    this.status = 0;
  };
  LevelDBService_OpenWithOptions_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  LevelDBService_OpenWithOptions_ResponseParams.generate = function(generator_) {
    var generated = new LevelDBService_OpenWithOptions_ResponseParams;
    generated.status = generator_.generateEnum(0, 5);
    return generated;
  };

  LevelDBService_OpenWithOptions_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.status = mutator_.mutateEnum(this.status, 0, 5);
    }
    return this;
  };
  LevelDBService_OpenWithOptions_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  LevelDBService_OpenWithOptions_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  LevelDBService_OpenWithOptions_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  LevelDBService_OpenWithOptions_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate LevelDBService_OpenWithOptions_ResponseParams.status
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, DatabaseError);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  LevelDBService_OpenWithOptions_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  LevelDBService_OpenWithOptions_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new LevelDBService_OpenWithOptions_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.status = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  LevelDBService_OpenWithOptions_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(LevelDBService_OpenWithOptions_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.status);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function LevelDBService_OpenInMemory_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  LevelDBService_OpenInMemory_Params.prototype.initDefaults_ = function() {
    this.memoryDumpId = null;
    this.trackingName = null;
    this.database = new associatedBindings.AssociatedInterfaceRequest();
  };
  LevelDBService_OpenInMemory_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  LevelDBService_OpenInMemory_Params.generate = function(generator_) {
    var generated = new LevelDBService_OpenInMemory_Params;
    generated.memoryDumpId = generator_.generateStruct(mojoBase.mojom.MemoryAllocatorDumpCrossProcessUid, true);
    generated.trackingName = generator_.generateString(false);
    generated.database = generator_.generateAssociatedInterfaceRequest("leveldb.mojom.LevelDBDatabase", false);
    return generated;
  };

  LevelDBService_OpenInMemory_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.memoryDumpId = mutator_.mutateStruct(mojoBase.mojom.MemoryAllocatorDumpCrossProcessUid, true);
    }
    if (mutator_.chooseMutateField()) {
      this.trackingName = mutator_.mutateString(this.trackingName, false);
    }
    if (mutator_.chooseMutateField()) {
      this.database = mutator_.mutateAssociatedInterfaceRequest(this.database, "leveldb.mojom.LevelDBDatabase", false);
    }
    return this;
  };
  LevelDBService_OpenInMemory_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.database !== null) {
      Array.prototype.push.apply(handles, ["leveldb.mojom.LevelDBDatabaseAssociatedRequest"]);
    }
    return handles;
  };

  LevelDBService_OpenInMemory_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  LevelDBService_OpenInMemory_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.database = handles[idx++];;
    return idx;
  };

  LevelDBService_OpenInMemory_Params.validate = function(messageValidator, offset) {
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


    // validate LevelDBService_OpenInMemory_Params.memoryDumpId
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, memory_allocator_dump_cross_process_uid$.MemoryAllocatorDumpCrossProcessUid, true);
    if (err !== validator.validationError.NONE)
        return err;


    // validate LevelDBService_OpenInMemory_Params.trackingName
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate LevelDBService_OpenInMemory_Params.database
    err = messageValidator.validateAssociatedInterfaceRequest(offset + codec.kStructHeaderSize + 16, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  LevelDBService_OpenInMemory_Params.encodedSize = codec.kStructHeaderSize + 24;

  LevelDBService_OpenInMemory_Params.decode = function(decoder) {
    var packed;
    var val = new LevelDBService_OpenInMemory_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.memoryDumpId = decoder.decodeStructPointer(memory_allocator_dump_cross_process_uid$.MemoryAllocatorDumpCrossProcessUid);
    val.trackingName = decoder.decodeStruct(codec.String);
    val.database = decoder.decodeStruct(codec.AssociatedInterfaceRequest);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  LevelDBService_OpenInMemory_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(LevelDBService_OpenInMemory_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(memory_allocator_dump_cross_process_uid$.MemoryAllocatorDumpCrossProcessUid, val.memoryDumpId);
    encoder.encodeStruct(codec.String, val.trackingName);
    encoder.encodeStruct(codec.AssociatedInterfaceRequest, val.database);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function LevelDBService_OpenInMemory_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  LevelDBService_OpenInMemory_ResponseParams.prototype.initDefaults_ = function() {
    this.status = 0;
  };
  LevelDBService_OpenInMemory_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  LevelDBService_OpenInMemory_ResponseParams.generate = function(generator_) {
    var generated = new LevelDBService_OpenInMemory_ResponseParams;
    generated.status = generator_.generateEnum(0, 5);
    return generated;
  };

  LevelDBService_OpenInMemory_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.status = mutator_.mutateEnum(this.status, 0, 5);
    }
    return this;
  };
  LevelDBService_OpenInMemory_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  LevelDBService_OpenInMemory_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  LevelDBService_OpenInMemory_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  LevelDBService_OpenInMemory_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate LevelDBService_OpenInMemory_ResponseParams.status
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, DatabaseError);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  LevelDBService_OpenInMemory_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  LevelDBService_OpenInMemory_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new LevelDBService_OpenInMemory_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.status = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  LevelDBService_OpenInMemory_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(LevelDBService_OpenInMemory_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.status);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function LevelDBService_Destroy_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  LevelDBService_Destroy_Params.prototype.initDefaults_ = function() {
    this.directory = new directory$.DirectoryPtr();
    this.dbname = null;
  };
  LevelDBService_Destroy_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  LevelDBService_Destroy_Params.generate = function(generator_) {
    var generated = new LevelDBService_Destroy_Params;
    generated.directory = generator_.generateInterface("filesystem.mojom.Directory", false);
    generated.dbname = generator_.generateString(false);
    return generated;
  };

  LevelDBService_Destroy_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.directory = mutator_.mutateInterface(this.directory, "filesystem.mojom.Directory", false);
    }
    if (mutator_.chooseMutateField()) {
      this.dbname = mutator_.mutateString(this.dbname, false);
    }
    return this;
  };
  LevelDBService_Destroy_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.directory !== null) {
      Array.prototype.push.apply(handles, ["filesystem.mojom.DirectoryPtr"]);
    }
    return handles;
  };

  LevelDBService_Destroy_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  LevelDBService_Destroy_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.directory = handles[idx++];;
    return idx;
  };

  LevelDBService_Destroy_Params.validate = function(messageValidator, offset) {
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


    // validate LevelDBService_Destroy_Params.directory
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 0, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate LevelDBService_Destroy_Params.dbname
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  LevelDBService_Destroy_Params.encodedSize = codec.kStructHeaderSize + 16;

  LevelDBService_Destroy_Params.decode = function(decoder) {
    var packed;
    var val = new LevelDBService_Destroy_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.directory = decoder.decodeStruct(new codec.Interface(directory$.DirectoryPtr));
    val.dbname = decoder.decodeStruct(codec.String);
    return val;
  };

  LevelDBService_Destroy_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(LevelDBService_Destroy_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(new codec.Interface(directory$.DirectoryPtr), val.directory);
    encoder.encodeStruct(codec.String, val.dbname);
  };
  function LevelDBService_Destroy_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  LevelDBService_Destroy_ResponseParams.prototype.initDefaults_ = function() {
    this.status = 0;
  };
  LevelDBService_Destroy_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  LevelDBService_Destroy_ResponseParams.generate = function(generator_) {
    var generated = new LevelDBService_Destroy_ResponseParams;
    generated.status = generator_.generateEnum(0, 5);
    return generated;
  };

  LevelDBService_Destroy_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.status = mutator_.mutateEnum(this.status, 0, 5);
    }
    return this;
  };
  LevelDBService_Destroy_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  LevelDBService_Destroy_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  LevelDBService_Destroy_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  LevelDBService_Destroy_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate LevelDBService_Destroy_ResponseParams.status
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, DatabaseError);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  LevelDBService_Destroy_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  LevelDBService_Destroy_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new LevelDBService_Destroy_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.status = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  LevelDBService_Destroy_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(LevelDBService_Destroy_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.status);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function LevelDBDatabase_Put_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  LevelDBDatabase_Put_Params.prototype.initDefaults_ = function() {
    this.key = null;
    this.value = null;
  };
  LevelDBDatabase_Put_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  LevelDBDatabase_Put_Params.generate = function(generator_) {
    var generated = new LevelDBDatabase_Put_Params;
    generated.key = generator_.generateArray(function() {
      return generator_.generateUint8();
    });
    generated.value = generator_.generateArray(function() {
      return generator_.generateUint8();
    });
    return generated;
  };

  LevelDBDatabase_Put_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.key = mutator_.mutateArray(this.key, function(val) {
        return mutator_.mutateUint8(val);
      });
    }
    if (mutator_.chooseMutateField()) {
      this.value = mutator_.mutateArray(this.value, function(val) {
        return mutator_.mutateUint8(val);
      });
    }
    return this;
  };
  LevelDBDatabase_Put_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  LevelDBDatabase_Put_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  LevelDBDatabase_Put_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  LevelDBDatabase_Put_Params.validate = function(messageValidator, offset) {
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


    // validate LevelDBDatabase_Put_Params.key
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 1, codec.Uint8, false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;


    // validate LevelDBDatabase_Put_Params.value
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 1, codec.Uint8, false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  LevelDBDatabase_Put_Params.encodedSize = codec.kStructHeaderSize + 16;

  LevelDBDatabase_Put_Params.decode = function(decoder) {
    var packed;
    var val = new LevelDBDatabase_Put_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.key = decoder.decodeArrayPointer(codec.Uint8);
    val.value = decoder.decodeArrayPointer(codec.Uint8);
    return val;
  };

  LevelDBDatabase_Put_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(LevelDBDatabase_Put_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(codec.Uint8, val.key);
    encoder.encodeArrayPointer(codec.Uint8, val.value);
  };
  function LevelDBDatabase_Put_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  LevelDBDatabase_Put_ResponseParams.prototype.initDefaults_ = function() {
    this.status = 0;
  };
  LevelDBDatabase_Put_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  LevelDBDatabase_Put_ResponseParams.generate = function(generator_) {
    var generated = new LevelDBDatabase_Put_ResponseParams;
    generated.status = generator_.generateEnum(0, 5);
    return generated;
  };

  LevelDBDatabase_Put_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.status = mutator_.mutateEnum(this.status, 0, 5);
    }
    return this;
  };
  LevelDBDatabase_Put_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  LevelDBDatabase_Put_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  LevelDBDatabase_Put_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  LevelDBDatabase_Put_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate LevelDBDatabase_Put_ResponseParams.status
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, DatabaseError);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  LevelDBDatabase_Put_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  LevelDBDatabase_Put_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new LevelDBDatabase_Put_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.status = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  LevelDBDatabase_Put_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(LevelDBDatabase_Put_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.status);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function LevelDBDatabase_Delete_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  LevelDBDatabase_Delete_Params.prototype.initDefaults_ = function() {
    this.key = null;
  };
  LevelDBDatabase_Delete_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  LevelDBDatabase_Delete_Params.generate = function(generator_) {
    var generated = new LevelDBDatabase_Delete_Params;
    generated.key = generator_.generateArray(function() {
      return generator_.generateUint8();
    });
    return generated;
  };

  LevelDBDatabase_Delete_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.key = mutator_.mutateArray(this.key, function(val) {
        return mutator_.mutateUint8(val);
      });
    }
    return this;
  };
  LevelDBDatabase_Delete_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  LevelDBDatabase_Delete_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  LevelDBDatabase_Delete_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  LevelDBDatabase_Delete_Params.validate = function(messageValidator, offset) {
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


    // validate LevelDBDatabase_Delete_Params.key
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 1, codec.Uint8, false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  LevelDBDatabase_Delete_Params.encodedSize = codec.kStructHeaderSize + 8;

  LevelDBDatabase_Delete_Params.decode = function(decoder) {
    var packed;
    var val = new LevelDBDatabase_Delete_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.key = decoder.decodeArrayPointer(codec.Uint8);
    return val;
  };

  LevelDBDatabase_Delete_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(LevelDBDatabase_Delete_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(codec.Uint8, val.key);
  };
  function LevelDBDatabase_Delete_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  LevelDBDatabase_Delete_ResponseParams.prototype.initDefaults_ = function() {
    this.status = 0;
  };
  LevelDBDatabase_Delete_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  LevelDBDatabase_Delete_ResponseParams.generate = function(generator_) {
    var generated = new LevelDBDatabase_Delete_ResponseParams;
    generated.status = generator_.generateEnum(0, 5);
    return generated;
  };

  LevelDBDatabase_Delete_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.status = mutator_.mutateEnum(this.status, 0, 5);
    }
    return this;
  };
  LevelDBDatabase_Delete_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  LevelDBDatabase_Delete_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  LevelDBDatabase_Delete_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  LevelDBDatabase_Delete_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate LevelDBDatabase_Delete_ResponseParams.status
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, DatabaseError);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  LevelDBDatabase_Delete_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  LevelDBDatabase_Delete_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new LevelDBDatabase_Delete_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.status = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  LevelDBDatabase_Delete_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(LevelDBDatabase_Delete_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.status);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function LevelDBDatabase_DeletePrefixed_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  LevelDBDatabase_DeletePrefixed_Params.prototype.initDefaults_ = function() {
    this.keyPrefix = null;
  };
  LevelDBDatabase_DeletePrefixed_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  LevelDBDatabase_DeletePrefixed_Params.generate = function(generator_) {
    var generated = new LevelDBDatabase_DeletePrefixed_Params;
    generated.keyPrefix = generator_.generateArray(function() {
      return generator_.generateUint8();
    });
    return generated;
  };

  LevelDBDatabase_DeletePrefixed_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.keyPrefix = mutator_.mutateArray(this.keyPrefix, function(val) {
        return mutator_.mutateUint8(val);
      });
    }
    return this;
  };
  LevelDBDatabase_DeletePrefixed_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  LevelDBDatabase_DeletePrefixed_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  LevelDBDatabase_DeletePrefixed_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  LevelDBDatabase_DeletePrefixed_Params.validate = function(messageValidator, offset) {
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


    // validate LevelDBDatabase_DeletePrefixed_Params.keyPrefix
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 1, codec.Uint8, false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  LevelDBDatabase_DeletePrefixed_Params.encodedSize = codec.kStructHeaderSize + 8;

  LevelDBDatabase_DeletePrefixed_Params.decode = function(decoder) {
    var packed;
    var val = new LevelDBDatabase_DeletePrefixed_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.keyPrefix = decoder.decodeArrayPointer(codec.Uint8);
    return val;
  };

  LevelDBDatabase_DeletePrefixed_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(LevelDBDatabase_DeletePrefixed_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(codec.Uint8, val.keyPrefix);
  };
  function LevelDBDatabase_DeletePrefixed_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  LevelDBDatabase_DeletePrefixed_ResponseParams.prototype.initDefaults_ = function() {
    this.status = 0;
  };
  LevelDBDatabase_DeletePrefixed_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  LevelDBDatabase_DeletePrefixed_ResponseParams.generate = function(generator_) {
    var generated = new LevelDBDatabase_DeletePrefixed_ResponseParams;
    generated.status = generator_.generateEnum(0, 5);
    return generated;
  };

  LevelDBDatabase_DeletePrefixed_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.status = mutator_.mutateEnum(this.status, 0, 5);
    }
    return this;
  };
  LevelDBDatabase_DeletePrefixed_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  LevelDBDatabase_DeletePrefixed_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  LevelDBDatabase_DeletePrefixed_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  LevelDBDatabase_DeletePrefixed_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate LevelDBDatabase_DeletePrefixed_ResponseParams.status
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, DatabaseError);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  LevelDBDatabase_DeletePrefixed_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  LevelDBDatabase_DeletePrefixed_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new LevelDBDatabase_DeletePrefixed_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.status = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  LevelDBDatabase_DeletePrefixed_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(LevelDBDatabase_DeletePrefixed_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.status);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function LevelDBDatabase_Write_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  LevelDBDatabase_Write_Params.prototype.initDefaults_ = function() {
    this.operations = null;
  };
  LevelDBDatabase_Write_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  LevelDBDatabase_Write_Params.generate = function(generator_) {
    var generated = new LevelDBDatabase_Write_Params;
    generated.operations = generator_.generateArray(function() {
      return generator_.generateStruct(leveldb.mojom.BatchedOperation, false);
    });
    return generated;
  };

  LevelDBDatabase_Write_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.operations = mutator_.mutateArray(this.operations, function(val) {
        return mutator_.mutateStruct(leveldb.mojom.BatchedOperation, false);
      });
    }
    return this;
  };
  LevelDBDatabase_Write_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  LevelDBDatabase_Write_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  LevelDBDatabase_Write_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  LevelDBDatabase_Write_Params.validate = function(messageValidator, offset) {
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


    // validate LevelDBDatabase_Write_Params.operations
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 8, new codec.PointerTo(BatchedOperation), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  LevelDBDatabase_Write_Params.encodedSize = codec.kStructHeaderSize + 8;

  LevelDBDatabase_Write_Params.decode = function(decoder) {
    var packed;
    var val = new LevelDBDatabase_Write_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.operations = decoder.decodeArrayPointer(new codec.PointerTo(BatchedOperation));
    return val;
  };

  LevelDBDatabase_Write_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(LevelDBDatabase_Write_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(new codec.PointerTo(BatchedOperation), val.operations);
  };
  function LevelDBDatabase_Write_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  LevelDBDatabase_Write_ResponseParams.prototype.initDefaults_ = function() {
    this.status = 0;
  };
  LevelDBDatabase_Write_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  LevelDBDatabase_Write_ResponseParams.generate = function(generator_) {
    var generated = new LevelDBDatabase_Write_ResponseParams;
    generated.status = generator_.generateEnum(0, 5);
    return generated;
  };

  LevelDBDatabase_Write_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.status = mutator_.mutateEnum(this.status, 0, 5);
    }
    return this;
  };
  LevelDBDatabase_Write_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  LevelDBDatabase_Write_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  LevelDBDatabase_Write_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  LevelDBDatabase_Write_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate LevelDBDatabase_Write_ResponseParams.status
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, DatabaseError);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  LevelDBDatabase_Write_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  LevelDBDatabase_Write_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new LevelDBDatabase_Write_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.status = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  LevelDBDatabase_Write_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(LevelDBDatabase_Write_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.status);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function LevelDBDatabase_Get_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  LevelDBDatabase_Get_Params.prototype.initDefaults_ = function() {
    this.key = null;
  };
  LevelDBDatabase_Get_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  LevelDBDatabase_Get_Params.generate = function(generator_) {
    var generated = new LevelDBDatabase_Get_Params;
    generated.key = generator_.generateArray(function() {
      return generator_.generateUint8();
    });
    return generated;
  };

  LevelDBDatabase_Get_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.key = mutator_.mutateArray(this.key, function(val) {
        return mutator_.mutateUint8(val);
      });
    }
    return this;
  };
  LevelDBDatabase_Get_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  LevelDBDatabase_Get_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  LevelDBDatabase_Get_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  LevelDBDatabase_Get_Params.validate = function(messageValidator, offset) {
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


    // validate LevelDBDatabase_Get_Params.key
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 1, codec.Uint8, false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  LevelDBDatabase_Get_Params.encodedSize = codec.kStructHeaderSize + 8;

  LevelDBDatabase_Get_Params.decode = function(decoder) {
    var packed;
    var val = new LevelDBDatabase_Get_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.key = decoder.decodeArrayPointer(codec.Uint8);
    return val;
  };

  LevelDBDatabase_Get_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(LevelDBDatabase_Get_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(codec.Uint8, val.key);
  };
  function LevelDBDatabase_Get_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  LevelDBDatabase_Get_ResponseParams.prototype.initDefaults_ = function() {
    this.status = 0;
    this.value = null;
  };
  LevelDBDatabase_Get_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  LevelDBDatabase_Get_ResponseParams.generate = function(generator_) {
    var generated = new LevelDBDatabase_Get_ResponseParams;
    generated.status = generator_.generateEnum(0, 5);
    generated.value = generator_.generateArray(function() {
      return generator_.generateUint8();
    });
    return generated;
  };

  LevelDBDatabase_Get_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.status = mutator_.mutateEnum(this.status, 0, 5);
    }
    if (mutator_.chooseMutateField()) {
      this.value = mutator_.mutateArray(this.value, function(val) {
        return mutator_.mutateUint8(val);
      });
    }
    return this;
  };
  LevelDBDatabase_Get_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  LevelDBDatabase_Get_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  LevelDBDatabase_Get_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  LevelDBDatabase_Get_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate LevelDBDatabase_Get_ResponseParams.status
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, DatabaseError);
    if (err !== validator.validationError.NONE)
        return err;


    // validate LevelDBDatabase_Get_ResponseParams.value
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 1, codec.Uint8, false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  LevelDBDatabase_Get_ResponseParams.encodedSize = codec.kStructHeaderSize + 16;

  LevelDBDatabase_Get_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new LevelDBDatabase_Get_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.status = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.value = decoder.decodeArrayPointer(codec.Uint8);
    return val;
  };

  LevelDBDatabase_Get_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(LevelDBDatabase_Get_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.status);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeArrayPointer(codec.Uint8, val.value);
  };
  function LevelDBDatabase_GetPrefixed_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  LevelDBDatabase_GetPrefixed_Params.prototype.initDefaults_ = function() {
    this.keyPrefix = null;
  };
  LevelDBDatabase_GetPrefixed_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  LevelDBDatabase_GetPrefixed_Params.generate = function(generator_) {
    var generated = new LevelDBDatabase_GetPrefixed_Params;
    generated.keyPrefix = generator_.generateArray(function() {
      return generator_.generateUint8();
    });
    return generated;
  };

  LevelDBDatabase_GetPrefixed_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.keyPrefix = mutator_.mutateArray(this.keyPrefix, function(val) {
        return mutator_.mutateUint8(val);
      });
    }
    return this;
  };
  LevelDBDatabase_GetPrefixed_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  LevelDBDatabase_GetPrefixed_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  LevelDBDatabase_GetPrefixed_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  LevelDBDatabase_GetPrefixed_Params.validate = function(messageValidator, offset) {
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


    // validate LevelDBDatabase_GetPrefixed_Params.keyPrefix
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 1, codec.Uint8, false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  LevelDBDatabase_GetPrefixed_Params.encodedSize = codec.kStructHeaderSize + 8;

  LevelDBDatabase_GetPrefixed_Params.decode = function(decoder) {
    var packed;
    var val = new LevelDBDatabase_GetPrefixed_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.keyPrefix = decoder.decodeArrayPointer(codec.Uint8);
    return val;
  };

  LevelDBDatabase_GetPrefixed_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(LevelDBDatabase_GetPrefixed_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(codec.Uint8, val.keyPrefix);
  };
  function LevelDBDatabase_GetPrefixed_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  LevelDBDatabase_GetPrefixed_ResponseParams.prototype.initDefaults_ = function() {
    this.status = 0;
    this.data = null;
  };
  LevelDBDatabase_GetPrefixed_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  LevelDBDatabase_GetPrefixed_ResponseParams.generate = function(generator_) {
    var generated = new LevelDBDatabase_GetPrefixed_ResponseParams;
    generated.status = generator_.generateEnum(0, 5);
    generated.data = generator_.generateArray(function() {
      return generator_.generateStruct(leveldb.mojom.KeyValue, false);
    });
    return generated;
  };

  LevelDBDatabase_GetPrefixed_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.status = mutator_.mutateEnum(this.status, 0, 5);
    }
    if (mutator_.chooseMutateField()) {
      this.data = mutator_.mutateArray(this.data, function(val) {
        return mutator_.mutateStruct(leveldb.mojom.KeyValue, false);
      });
    }
    return this;
  };
  LevelDBDatabase_GetPrefixed_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  LevelDBDatabase_GetPrefixed_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  LevelDBDatabase_GetPrefixed_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  LevelDBDatabase_GetPrefixed_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate LevelDBDatabase_GetPrefixed_ResponseParams.status
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, DatabaseError);
    if (err !== validator.validationError.NONE)
        return err;


    // validate LevelDBDatabase_GetPrefixed_ResponseParams.data
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 8, new codec.PointerTo(KeyValue), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  LevelDBDatabase_GetPrefixed_ResponseParams.encodedSize = codec.kStructHeaderSize + 16;

  LevelDBDatabase_GetPrefixed_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new LevelDBDatabase_GetPrefixed_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.status = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.data = decoder.decodeArrayPointer(new codec.PointerTo(KeyValue));
    return val;
  };

  LevelDBDatabase_GetPrefixed_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(LevelDBDatabase_GetPrefixed_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.status);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeArrayPointer(new codec.PointerTo(KeyValue), val.data);
  };
  function LevelDBDatabase_CopyPrefixed_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  LevelDBDatabase_CopyPrefixed_Params.prototype.initDefaults_ = function() {
    this.sourceKeyPrefix = null;
    this.destinationKeyPrefix = null;
  };
  LevelDBDatabase_CopyPrefixed_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  LevelDBDatabase_CopyPrefixed_Params.generate = function(generator_) {
    var generated = new LevelDBDatabase_CopyPrefixed_Params;
    generated.sourceKeyPrefix = generator_.generateArray(function() {
      return generator_.generateUint8();
    });
    generated.destinationKeyPrefix = generator_.generateArray(function() {
      return generator_.generateUint8();
    });
    return generated;
  };

  LevelDBDatabase_CopyPrefixed_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.sourceKeyPrefix = mutator_.mutateArray(this.sourceKeyPrefix, function(val) {
        return mutator_.mutateUint8(val);
      });
    }
    if (mutator_.chooseMutateField()) {
      this.destinationKeyPrefix = mutator_.mutateArray(this.destinationKeyPrefix, function(val) {
        return mutator_.mutateUint8(val);
      });
    }
    return this;
  };
  LevelDBDatabase_CopyPrefixed_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  LevelDBDatabase_CopyPrefixed_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  LevelDBDatabase_CopyPrefixed_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  LevelDBDatabase_CopyPrefixed_Params.validate = function(messageValidator, offset) {
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


    // validate LevelDBDatabase_CopyPrefixed_Params.sourceKeyPrefix
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 1, codec.Uint8, false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;


    // validate LevelDBDatabase_CopyPrefixed_Params.destinationKeyPrefix
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 1, codec.Uint8, false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  LevelDBDatabase_CopyPrefixed_Params.encodedSize = codec.kStructHeaderSize + 16;

  LevelDBDatabase_CopyPrefixed_Params.decode = function(decoder) {
    var packed;
    var val = new LevelDBDatabase_CopyPrefixed_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.sourceKeyPrefix = decoder.decodeArrayPointer(codec.Uint8);
    val.destinationKeyPrefix = decoder.decodeArrayPointer(codec.Uint8);
    return val;
  };

  LevelDBDatabase_CopyPrefixed_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(LevelDBDatabase_CopyPrefixed_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(codec.Uint8, val.sourceKeyPrefix);
    encoder.encodeArrayPointer(codec.Uint8, val.destinationKeyPrefix);
  };
  function LevelDBDatabase_CopyPrefixed_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  LevelDBDatabase_CopyPrefixed_ResponseParams.prototype.initDefaults_ = function() {
    this.status = 0;
  };
  LevelDBDatabase_CopyPrefixed_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  LevelDBDatabase_CopyPrefixed_ResponseParams.generate = function(generator_) {
    var generated = new LevelDBDatabase_CopyPrefixed_ResponseParams;
    generated.status = generator_.generateEnum(0, 5);
    return generated;
  };

  LevelDBDatabase_CopyPrefixed_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.status = mutator_.mutateEnum(this.status, 0, 5);
    }
    return this;
  };
  LevelDBDatabase_CopyPrefixed_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  LevelDBDatabase_CopyPrefixed_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  LevelDBDatabase_CopyPrefixed_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  LevelDBDatabase_CopyPrefixed_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate LevelDBDatabase_CopyPrefixed_ResponseParams.status
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, DatabaseError);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  LevelDBDatabase_CopyPrefixed_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  LevelDBDatabase_CopyPrefixed_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new LevelDBDatabase_CopyPrefixed_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.status = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  LevelDBDatabase_CopyPrefixed_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(LevelDBDatabase_CopyPrefixed_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.status);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function LevelDBDatabase_GetSnapshot_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  LevelDBDatabase_GetSnapshot_Params.prototype.initDefaults_ = function() {
  };
  LevelDBDatabase_GetSnapshot_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  LevelDBDatabase_GetSnapshot_Params.generate = function(generator_) {
    var generated = new LevelDBDatabase_GetSnapshot_Params;
    return generated;
  };

  LevelDBDatabase_GetSnapshot_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  LevelDBDatabase_GetSnapshot_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  LevelDBDatabase_GetSnapshot_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  LevelDBDatabase_GetSnapshot_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  LevelDBDatabase_GetSnapshot_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 8}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  LevelDBDatabase_GetSnapshot_Params.encodedSize = codec.kStructHeaderSize + 0;

  LevelDBDatabase_GetSnapshot_Params.decode = function(decoder) {
    var packed;
    var val = new LevelDBDatabase_GetSnapshot_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  LevelDBDatabase_GetSnapshot_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(LevelDBDatabase_GetSnapshot_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function LevelDBDatabase_GetSnapshot_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  LevelDBDatabase_GetSnapshot_ResponseParams.prototype.initDefaults_ = function() {
    this.snapshot = null;
  };
  LevelDBDatabase_GetSnapshot_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  LevelDBDatabase_GetSnapshot_ResponseParams.generate = function(generator_) {
    var generated = new LevelDBDatabase_GetSnapshot_ResponseParams;
    generated.snapshot = generator_.generateStruct(mojoBase.mojom.UnguessableToken, false);
    return generated;
  };

  LevelDBDatabase_GetSnapshot_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.snapshot = mutator_.mutateStruct(mojoBase.mojom.UnguessableToken, false);
    }
    return this;
  };
  LevelDBDatabase_GetSnapshot_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  LevelDBDatabase_GetSnapshot_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  LevelDBDatabase_GetSnapshot_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  LevelDBDatabase_GetSnapshot_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate LevelDBDatabase_GetSnapshot_ResponseParams.snapshot
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, unguessable_token$.UnguessableToken, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  LevelDBDatabase_GetSnapshot_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  LevelDBDatabase_GetSnapshot_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new LevelDBDatabase_GetSnapshot_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.snapshot = decoder.decodeStructPointer(unguessable_token$.UnguessableToken);
    return val;
  };

  LevelDBDatabase_GetSnapshot_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(LevelDBDatabase_GetSnapshot_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(unguessable_token$.UnguessableToken, val.snapshot);
  };
  function LevelDBDatabase_ReleaseSnapshot_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  LevelDBDatabase_ReleaseSnapshot_Params.prototype.initDefaults_ = function() {
    this.snapshot = null;
  };
  LevelDBDatabase_ReleaseSnapshot_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  LevelDBDatabase_ReleaseSnapshot_Params.generate = function(generator_) {
    var generated = new LevelDBDatabase_ReleaseSnapshot_Params;
    generated.snapshot = generator_.generateStruct(mojoBase.mojom.UnguessableToken, false);
    return generated;
  };

  LevelDBDatabase_ReleaseSnapshot_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.snapshot = mutator_.mutateStruct(mojoBase.mojom.UnguessableToken, false);
    }
    return this;
  };
  LevelDBDatabase_ReleaseSnapshot_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  LevelDBDatabase_ReleaseSnapshot_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  LevelDBDatabase_ReleaseSnapshot_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  LevelDBDatabase_ReleaseSnapshot_Params.validate = function(messageValidator, offset) {
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


    // validate LevelDBDatabase_ReleaseSnapshot_Params.snapshot
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, unguessable_token$.UnguessableToken, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  LevelDBDatabase_ReleaseSnapshot_Params.encodedSize = codec.kStructHeaderSize + 8;

  LevelDBDatabase_ReleaseSnapshot_Params.decode = function(decoder) {
    var packed;
    var val = new LevelDBDatabase_ReleaseSnapshot_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.snapshot = decoder.decodeStructPointer(unguessable_token$.UnguessableToken);
    return val;
  };

  LevelDBDatabase_ReleaseSnapshot_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(LevelDBDatabase_ReleaseSnapshot_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(unguessable_token$.UnguessableToken, val.snapshot);
  };
  function LevelDBDatabase_GetFromSnapshot_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  LevelDBDatabase_GetFromSnapshot_Params.prototype.initDefaults_ = function() {
    this.snapshot = null;
    this.key = null;
  };
  LevelDBDatabase_GetFromSnapshot_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  LevelDBDatabase_GetFromSnapshot_Params.generate = function(generator_) {
    var generated = new LevelDBDatabase_GetFromSnapshot_Params;
    generated.snapshot = generator_.generateStruct(mojoBase.mojom.UnguessableToken, false);
    generated.key = generator_.generateArray(function() {
      return generator_.generateUint8();
    });
    return generated;
  };

  LevelDBDatabase_GetFromSnapshot_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.snapshot = mutator_.mutateStruct(mojoBase.mojom.UnguessableToken, false);
    }
    if (mutator_.chooseMutateField()) {
      this.key = mutator_.mutateArray(this.key, function(val) {
        return mutator_.mutateUint8(val);
      });
    }
    return this;
  };
  LevelDBDatabase_GetFromSnapshot_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  LevelDBDatabase_GetFromSnapshot_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  LevelDBDatabase_GetFromSnapshot_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  LevelDBDatabase_GetFromSnapshot_Params.validate = function(messageValidator, offset) {
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


    // validate LevelDBDatabase_GetFromSnapshot_Params.snapshot
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, unguessable_token$.UnguessableToken, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate LevelDBDatabase_GetFromSnapshot_Params.key
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 1, codec.Uint8, false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  LevelDBDatabase_GetFromSnapshot_Params.encodedSize = codec.kStructHeaderSize + 16;

  LevelDBDatabase_GetFromSnapshot_Params.decode = function(decoder) {
    var packed;
    var val = new LevelDBDatabase_GetFromSnapshot_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.snapshot = decoder.decodeStructPointer(unguessable_token$.UnguessableToken);
    val.key = decoder.decodeArrayPointer(codec.Uint8);
    return val;
  };

  LevelDBDatabase_GetFromSnapshot_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(LevelDBDatabase_GetFromSnapshot_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(unguessable_token$.UnguessableToken, val.snapshot);
    encoder.encodeArrayPointer(codec.Uint8, val.key);
  };
  function LevelDBDatabase_GetFromSnapshot_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  LevelDBDatabase_GetFromSnapshot_ResponseParams.prototype.initDefaults_ = function() {
    this.status = 0;
    this.value = null;
  };
  LevelDBDatabase_GetFromSnapshot_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  LevelDBDatabase_GetFromSnapshot_ResponseParams.generate = function(generator_) {
    var generated = new LevelDBDatabase_GetFromSnapshot_ResponseParams;
    generated.status = generator_.generateEnum(0, 5);
    generated.value = generator_.generateArray(function() {
      return generator_.generateUint8();
    });
    return generated;
  };

  LevelDBDatabase_GetFromSnapshot_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.status = mutator_.mutateEnum(this.status, 0, 5);
    }
    if (mutator_.chooseMutateField()) {
      this.value = mutator_.mutateArray(this.value, function(val) {
        return mutator_.mutateUint8(val);
      });
    }
    return this;
  };
  LevelDBDatabase_GetFromSnapshot_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  LevelDBDatabase_GetFromSnapshot_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  LevelDBDatabase_GetFromSnapshot_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  LevelDBDatabase_GetFromSnapshot_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate LevelDBDatabase_GetFromSnapshot_ResponseParams.status
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, DatabaseError);
    if (err !== validator.validationError.NONE)
        return err;


    // validate LevelDBDatabase_GetFromSnapshot_ResponseParams.value
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 1, codec.Uint8, false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  LevelDBDatabase_GetFromSnapshot_ResponseParams.encodedSize = codec.kStructHeaderSize + 16;

  LevelDBDatabase_GetFromSnapshot_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new LevelDBDatabase_GetFromSnapshot_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.status = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.value = decoder.decodeArrayPointer(codec.Uint8);
    return val;
  };

  LevelDBDatabase_GetFromSnapshot_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(LevelDBDatabase_GetFromSnapshot_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.status);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeArrayPointer(codec.Uint8, val.value);
  };
  function LevelDBDatabase_NewIterator_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  LevelDBDatabase_NewIterator_Params.prototype.initDefaults_ = function() {
  };
  LevelDBDatabase_NewIterator_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  LevelDBDatabase_NewIterator_Params.generate = function(generator_) {
    var generated = new LevelDBDatabase_NewIterator_Params;
    return generated;
  };

  LevelDBDatabase_NewIterator_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  LevelDBDatabase_NewIterator_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  LevelDBDatabase_NewIterator_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  LevelDBDatabase_NewIterator_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  LevelDBDatabase_NewIterator_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 8}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  LevelDBDatabase_NewIterator_Params.encodedSize = codec.kStructHeaderSize + 0;

  LevelDBDatabase_NewIterator_Params.decode = function(decoder) {
    var packed;
    var val = new LevelDBDatabase_NewIterator_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  LevelDBDatabase_NewIterator_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(LevelDBDatabase_NewIterator_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function LevelDBDatabase_NewIterator_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  LevelDBDatabase_NewIterator_ResponseParams.prototype.initDefaults_ = function() {
    this.iterator = null;
  };
  LevelDBDatabase_NewIterator_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  LevelDBDatabase_NewIterator_ResponseParams.generate = function(generator_) {
    var generated = new LevelDBDatabase_NewIterator_ResponseParams;
    generated.iterator = generator_.generateStruct(mojoBase.mojom.UnguessableToken, false);
    return generated;
  };

  LevelDBDatabase_NewIterator_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.iterator = mutator_.mutateStruct(mojoBase.mojom.UnguessableToken, false);
    }
    return this;
  };
  LevelDBDatabase_NewIterator_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  LevelDBDatabase_NewIterator_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  LevelDBDatabase_NewIterator_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  LevelDBDatabase_NewIterator_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate LevelDBDatabase_NewIterator_ResponseParams.iterator
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, unguessable_token$.UnguessableToken, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  LevelDBDatabase_NewIterator_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  LevelDBDatabase_NewIterator_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new LevelDBDatabase_NewIterator_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.iterator = decoder.decodeStructPointer(unguessable_token$.UnguessableToken);
    return val;
  };

  LevelDBDatabase_NewIterator_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(LevelDBDatabase_NewIterator_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(unguessable_token$.UnguessableToken, val.iterator);
  };
  function LevelDBDatabase_NewIteratorFromSnapshot_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  LevelDBDatabase_NewIteratorFromSnapshot_Params.prototype.initDefaults_ = function() {
    this.snapshot = null;
  };
  LevelDBDatabase_NewIteratorFromSnapshot_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  LevelDBDatabase_NewIteratorFromSnapshot_Params.generate = function(generator_) {
    var generated = new LevelDBDatabase_NewIteratorFromSnapshot_Params;
    generated.snapshot = generator_.generateStruct(mojoBase.mojom.UnguessableToken, false);
    return generated;
  };

  LevelDBDatabase_NewIteratorFromSnapshot_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.snapshot = mutator_.mutateStruct(mojoBase.mojom.UnguessableToken, false);
    }
    return this;
  };
  LevelDBDatabase_NewIteratorFromSnapshot_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  LevelDBDatabase_NewIteratorFromSnapshot_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  LevelDBDatabase_NewIteratorFromSnapshot_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  LevelDBDatabase_NewIteratorFromSnapshot_Params.validate = function(messageValidator, offset) {
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


    // validate LevelDBDatabase_NewIteratorFromSnapshot_Params.snapshot
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, unguessable_token$.UnguessableToken, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  LevelDBDatabase_NewIteratorFromSnapshot_Params.encodedSize = codec.kStructHeaderSize + 8;

  LevelDBDatabase_NewIteratorFromSnapshot_Params.decode = function(decoder) {
    var packed;
    var val = new LevelDBDatabase_NewIteratorFromSnapshot_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.snapshot = decoder.decodeStructPointer(unguessable_token$.UnguessableToken);
    return val;
  };

  LevelDBDatabase_NewIteratorFromSnapshot_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(LevelDBDatabase_NewIteratorFromSnapshot_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(unguessable_token$.UnguessableToken, val.snapshot);
  };
  function LevelDBDatabase_NewIteratorFromSnapshot_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  LevelDBDatabase_NewIteratorFromSnapshot_ResponseParams.prototype.initDefaults_ = function() {
    this.iterator = null;
  };
  LevelDBDatabase_NewIteratorFromSnapshot_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  LevelDBDatabase_NewIteratorFromSnapshot_ResponseParams.generate = function(generator_) {
    var generated = new LevelDBDatabase_NewIteratorFromSnapshot_ResponseParams;
    generated.iterator = generator_.generateStruct(mojoBase.mojom.UnguessableToken, true);
    return generated;
  };

  LevelDBDatabase_NewIteratorFromSnapshot_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.iterator = mutator_.mutateStruct(mojoBase.mojom.UnguessableToken, true);
    }
    return this;
  };
  LevelDBDatabase_NewIteratorFromSnapshot_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  LevelDBDatabase_NewIteratorFromSnapshot_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  LevelDBDatabase_NewIteratorFromSnapshot_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  LevelDBDatabase_NewIteratorFromSnapshot_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate LevelDBDatabase_NewIteratorFromSnapshot_ResponseParams.iterator
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, unguessable_token$.UnguessableToken, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  LevelDBDatabase_NewIteratorFromSnapshot_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  LevelDBDatabase_NewIteratorFromSnapshot_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new LevelDBDatabase_NewIteratorFromSnapshot_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.iterator = decoder.decodeStructPointer(unguessable_token$.UnguessableToken);
    return val;
  };

  LevelDBDatabase_NewIteratorFromSnapshot_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(LevelDBDatabase_NewIteratorFromSnapshot_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(unguessable_token$.UnguessableToken, val.iterator);
  };
  function LevelDBDatabase_ReleaseIterator_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  LevelDBDatabase_ReleaseIterator_Params.prototype.initDefaults_ = function() {
    this.iterator = null;
  };
  LevelDBDatabase_ReleaseIterator_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  LevelDBDatabase_ReleaseIterator_Params.generate = function(generator_) {
    var generated = new LevelDBDatabase_ReleaseIterator_Params;
    generated.iterator = generator_.generateStruct(mojoBase.mojom.UnguessableToken, false);
    return generated;
  };

  LevelDBDatabase_ReleaseIterator_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.iterator = mutator_.mutateStruct(mojoBase.mojom.UnguessableToken, false);
    }
    return this;
  };
  LevelDBDatabase_ReleaseIterator_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  LevelDBDatabase_ReleaseIterator_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  LevelDBDatabase_ReleaseIterator_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  LevelDBDatabase_ReleaseIterator_Params.validate = function(messageValidator, offset) {
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


    // validate LevelDBDatabase_ReleaseIterator_Params.iterator
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, unguessable_token$.UnguessableToken, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  LevelDBDatabase_ReleaseIterator_Params.encodedSize = codec.kStructHeaderSize + 8;

  LevelDBDatabase_ReleaseIterator_Params.decode = function(decoder) {
    var packed;
    var val = new LevelDBDatabase_ReleaseIterator_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.iterator = decoder.decodeStructPointer(unguessable_token$.UnguessableToken);
    return val;
  };

  LevelDBDatabase_ReleaseIterator_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(LevelDBDatabase_ReleaseIterator_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(unguessable_token$.UnguessableToken, val.iterator);
  };
  function LevelDBDatabase_IteratorSeekToFirst_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  LevelDBDatabase_IteratorSeekToFirst_Params.prototype.initDefaults_ = function() {
    this.iterator = null;
  };
  LevelDBDatabase_IteratorSeekToFirst_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  LevelDBDatabase_IteratorSeekToFirst_Params.generate = function(generator_) {
    var generated = new LevelDBDatabase_IteratorSeekToFirst_Params;
    generated.iterator = generator_.generateStruct(mojoBase.mojom.UnguessableToken, false);
    return generated;
  };

  LevelDBDatabase_IteratorSeekToFirst_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.iterator = mutator_.mutateStruct(mojoBase.mojom.UnguessableToken, false);
    }
    return this;
  };
  LevelDBDatabase_IteratorSeekToFirst_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  LevelDBDatabase_IteratorSeekToFirst_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  LevelDBDatabase_IteratorSeekToFirst_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  LevelDBDatabase_IteratorSeekToFirst_Params.validate = function(messageValidator, offset) {
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


    // validate LevelDBDatabase_IteratorSeekToFirst_Params.iterator
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, unguessable_token$.UnguessableToken, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  LevelDBDatabase_IteratorSeekToFirst_Params.encodedSize = codec.kStructHeaderSize + 8;

  LevelDBDatabase_IteratorSeekToFirst_Params.decode = function(decoder) {
    var packed;
    var val = new LevelDBDatabase_IteratorSeekToFirst_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.iterator = decoder.decodeStructPointer(unguessable_token$.UnguessableToken);
    return val;
  };

  LevelDBDatabase_IteratorSeekToFirst_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(LevelDBDatabase_IteratorSeekToFirst_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(unguessable_token$.UnguessableToken, val.iterator);
  };
  function LevelDBDatabase_IteratorSeekToFirst_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  LevelDBDatabase_IteratorSeekToFirst_ResponseParams.prototype.initDefaults_ = function() {
    this.valid = false;
    this.status = 0;
    this.key = null;
    this.value = null;
  };
  LevelDBDatabase_IteratorSeekToFirst_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  LevelDBDatabase_IteratorSeekToFirst_ResponseParams.generate = function(generator_) {
    var generated = new LevelDBDatabase_IteratorSeekToFirst_ResponseParams;
    generated.valid = generator_.generateBool();
    generated.status = generator_.generateEnum(0, 5);
    generated.key = generator_.generateArray(function() {
      return generator_.generateUint8();
    });
    generated.value = generator_.generateArray(function() {
      return generator_.generateUint8();
    });
    return generated;
  };

  LevelDBDatabase_IteratorSeekToFirst_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.valid = mutator_.mutateBool(this.valid);
    }
    if (mutator_.chooseMutateField()) {
      this.status = mutator_.mutateEnum(this.status, 0, 5);
    }
    if (mutator_.chooseMutateField()) {
      this.key = mutator_.mutateArray(this.key, function(val) {
        return mutator_.mutateUint8(val);
      });
    }
    if (mutator_.chooseMutateField()) {
      this.value = mutator_.mutateArray(this.value, function(val) {
        return mutator_.mutateUint8(val);
      });
    }
    return this;
  };
  LevelDBDatabase_IteratorSeekToFirst_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  LevelDBDatabase_IteratorSeekToFirst_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  LevelDBDatabase_IteratorSeekToFirst_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  LevelDBDatabase_IteratorSeekToFirst_ResponseParams.validate = function(messageValidator, offset) {
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



    // validate LevelDBDatabase_IteratorSeekToFirst_ResponseParams.status
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 4, DatabaseError);
    if (err !== validator.validationError.NONE)
        return err;


    // validate LevelDBDatabase_IteratorSeekToFirst_ResponseParams.key
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 1, codec.Uint8, true, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;


    // validate LevelDBDatabase_IteratorSeekToFirst_ResponseParams.value
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 16, 1, codec.Uint8, true, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  LevelDBDatabase_IteratorSeekToFirst_ResponseParams.encodedSize = codec.kStructHeaderSize + 24;

  LevelDBDatabase_IteratorSeekToFirst_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new LevelDBDatabase_IteratorSeekToFirst_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.valid = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.status = decoder.decodeStruct(codec.Int32);
    val.key = decoder.decodeArrayPointer(codec.Uint8);
    val.value = decoder.decodeArrayPointer(codec.Uint8);
    return val;
  };

  LevelDBDatabase_IteratorSeekToFirst_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(LevelDBDatabase_IteratorSeekToFirst_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.valid & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.Int32, val.status);
    encoder.encodeArrayPointer(codec.Uint8, val.key);
    encoder.encodeArrayPointer(codec.Uint8, val.value);
  };
  function LevelDBDatabase_IteratorSeekToLast_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  LevelDBDatabase_IteratorSeekToLast_Params.prototype.initDefaults_ = function() {
    this.iterator = null;
  };
  LevelDBDatabase_IteratorSeekToLast_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  LevelDBDatabase_IteratorSeekToLast_Params.generate = function(generator_) {
    var generated = new LevelDBDatabase_IteratorSeekToLast_Params;
    generated.iterator = generator_.generateStruct(mojoBase.mojom.UnguessableToken, false);
    return generated;
  };

  LevelDBDatabase_IteratorSeekToLast_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.iterator = mutator_.mutateStruct(mojoBase.mojom.UnguessableToken, false);
    }
    return this;
  };
  LevelDBDatabase_IteratorSeekToLast_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  LevelDBDatabase_IteratorSeekToLast_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  LevelDBDatabase_IteratorSeekToLast_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  LevelDBDatabase_IteratorSeekToLast_Params.validate = function(messageValidator, offset) {
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


    // validate LevelDBDatabase_IteratorSeekToLast_Params.iterator
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, unguessable_token$.UnguessableToken, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  LevelDBDatabase_IteratorSeekToLast_Params.encodedSize = codec.kStructHeaderSize + 8;

  LevelDBDatabase_IteratorSeekToLast_Params.decode = function(decoder) {
    var packed;
    var val = new LevelDBDatabase_IteratorSeekToLast_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.iterator = decoder.decodeStructPointer(unguessable_token$.UnguessableToken);
    return val;
  };

  LevelDBDatabase_IteratorSeekToLast_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(LevelDBDatabase_IteratorSeekToLast_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(unguessable_token$.UnguessableToken, val.iterator);
  };
  function LevelDBDatabase_IteratorSeekToLast_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  LevelDBDatabase_IteratorSeekToLast_ResponseParams.prototype.initDefaults_ = function() {
    this.valid = false;
    this.status = 0;
    this.key = null;
    this.value = null;
  };
  LevelDBDatabase_IteratorSeekToLast_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  LevelDBDatabase_IteratorSeekToLast_ResponseParams.generate = function(generator_) {
    var generated = new LevelDBDatabase_IteratorSeekToLast_ResponseParams;
    generated.valid = generator_.generateBool();
    generated.status = generator_.generateEnum(0, 5);
    generated.key = generator_.generateArray(function() {
      return generator_.generateUint8();
    });
    generated.value = generator_.generateArray(function() {
      return generator_.generateUint8();
    });
    return generated;
  };

  LevelDBDatabase_IteratorSeekToLast_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.valid = mutator_.mutateBool(this.valid);
    }
    if (mutator_.chooseMutateField()) {
      this.status = mutator_.mutateEnum(this.status, 0, 5);
    }
    if (mutator_.chooseMutateField()) {
      this.key = mutator_.mutateArray(this.key, function(val) {
        return mutator_.mutateUint8(val);
      });
    }
    if (mutator_.chooseMutateField()) {
      this.value = mutator_.mutateArray(this.value, function(val) {
        return mutator_.mutateUint8(val);
      });
    }
    return this;
  };
  LevelDBDatabase_IteratorSeekToLast_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  LevelDBDatabase_IteratorSeekToLast_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  LevelDBDatabase_IteratorSeekToLast_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  LevelDBDatabase_IteratorSeekToLast_ResponseParams.validate = function(messageValidator, offset) {
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



    // validate LevelDBDatabase_IteratorSeekToLast_ResponseParams.status
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 4, DatabaseError);
    if (err !== validator.validationError.NONE)
        return err;


    // validate LevelDBDatabase_IteratorSeekToLast_ResponseParams.key
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 1, codec.Uint8, true, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;


    // validate LevelDBDatabase_IteratorSeekToLast_ResponseParams.value
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 16, 1, codec.Uint8, true, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  LevelDBDatabase_IteratorSeekToLast_ResponseParams.encodedSize = codec.kStructHeaderSize + 24;

  LevelDBDatabase_IteratorSeekToLast_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new LevelDBDatabase_IteratorSeekToLast_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.valid = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.status = decoder.decodeStruct(codec.Int32);
    val.key = decoder.decodeArrayPointer(codec.Uint8);
    val.value = decoder.decodeArrayPointer(codec.Uint8);
    return val;
  };

  LevelDBDatabase_IteratorSeekToLast_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(LevelDBDatabase_IteratorSeekToLast_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.valid & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.Int32, val.status);
    encoder.encodeArrayPointer(codec.Uint8, val.key);
    encoder.encodeArrayPointer(codec.Uint8, val.value);
  };
  function LevelDBDatabase_IteratorSeek_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  LevelDBDatabase_IteratorSeek_Params.prototype.initDefaults_ = function() {
    this.iterator = null;
    this.target = null;
  };
  LevelDBDatabase_IteratorSeek_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  LevelDBDatabase_IteratorSeek_Params.generate = function(generator_) {
    var generated = new LevelDBDatabase_IteratorSeek_Params;
    generated.iterator = generator_.generateStruct(mojoBase.mojom.UnguessableToken, false);
    generated.target = generator_.generateArray(function() {
      return generator_.generateUint8();
    });
    return generated;
  };

  LevelDBDatabase_IteratorSeek_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.iterator = mutator_.mutateStruct(mojoBase.mojom.UnguessableToken, false);
    }
    if (mutator_.chooseMutateField()) {
      this.target = mutator_.mutateArray(this.target, function(val) {
        return mutator_.mutateUint8(val);
      });
    }
    return this;
  };
  LevelDBDatabase_IteratorSeek_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  LevelDBDatabase_IteratorSeek_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  LevelDBDatabase_IteratorSeek_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  LevelDBDatabase_IteratorSeek_Params.validate = function(messageValidator, offset) {
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


    // validate LevelDBDatabase_IteratorSeek_Params.iterator
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, unguessable_token$.UnguessableToken, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate LevelDBDatabase_IteratorSeek_Params.target
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 1, codec.Uint8, false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  LevelDBDatabase_IteratorSeek_Params.encodedSize = codec.kStructHeaderSize + 16;

  LevelDBDatabase_IteratorSeek_Params.decode = function(decoder) {
    var packed;
    var val = new LevelDBDatabase_IteratorSeek_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.iterator = decoder.decodeStructPointer(unguessable_token$.UnguessableToken);
    val.target = decoder.decodeArrayPointer(codec.Uint8);
    return val;
  };

  LevelDBDatabase_IteratorSeek_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(LevelDBDatabase_IteratorSeek_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(unguessable_token$.UnguessableToken, val.iterator);
    encoder.encodeArrayPointer(codec.Uint8, val.target);
  };
  function LevelDBDatabase_IteratorSeek_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  LevelDBDatabase_IteratorSeek_ResponseParams.prototype.initDefaults_ = function() {
    this.valid = false;
    this.status = 0;
    this.key = null;
    this.value = null;
  };
  LevelDBDatabase_IteratorSeek_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  LevelDBDatabase_IteratorSeek_ResponseParams.generate = function(generator_) {
    var generated = new LevelDBDatabase_IteratorSeek_ResponseParams;
    generated.valid = generator_.generateBool();
    generated.status = generator_.generateEnum(0, 5);
    generated.key = generator_.generateArray(function() {
      return generator_.generateUint8();
    });
    generated.value = generator_.generateArray(function() {
      return generator_.generateUint8();
    });
    return generated;
  };

  LevelDBDatabase_IteratorSeek_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.valid = mutator_.mutateBool(this.valid);
    }
    if (mutator_.chooseMutateField()) {
      this.status = mutator_.mutateEnum(this.status, 0, 5);
    }
    if (mutator_.chooseMutateField()) {
      this.key = mutator_.mutateArray(this.key, function(val) {
        return mutator_.mutateUint8(val);
      });
    }
    if (mutator_.chooseMutateField()) {
      this.value = mutator_.mutateArray(this.value, function(val) {
        return mutator_.mutateUint8(val);
      });
    }
    return this;
  };
  LevelDBDatabase_IteratorSeek_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  LevelDBDatabase_IteratorSeek_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  LevelDBDatabase_IteratorSeek_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  LevelDBDatabase_IteratorSeek_ResponseParams.validate = function(messageValidator, offset) {
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



    // validate LevelDBDatabase_IteratorSeek_ResponseParams.status
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 4, DatabaseError);
    if (err !== validator.validationError.NONE)
        return err;


    // validate LevelDBDatabase_IteratorSeek_ResponseParams.key
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 1, codec.Uint8, true, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;


    // validate LevelDBDatabase_IteratorSeek_ResponseParams.value
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 16, 1, codec.Uint8, true, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  LevelDBDatabase_IteratorSeek_ResponseParams.encodedSize = codec.kStructHeaderSize + 24;

  LevelDBDatabase_IteratorSeek_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new LevelDBDatabase_IteratorSeek_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.valid = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.status = decoder.decodeStruct(codec.Int32);
    val.key = decoder.decodeArrayPointer(codec.Uint8);
    val.value = decoder.decodeArrayPointer(codec.Uint8);
    return val;
  };

  LevelDBDatabase_IteratorSeek_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(LevelDBDatabase_IteratorSeek_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.valid & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.Int32, val.status);
    encoder.encodeArrayPointer(codec.Uint8, val.key);
    encoder.encodeArrayPointer(codec.Uint8, val.value);
  };
  function LevelDBDatabase_IteratorNext_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  LevelDBDatabase_IteratorNext_Params.prototype.initDefaults_ = function() {
    this.iterator = null;
  };
  LevelDBDatabase_IteratorNext_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  LevelDBDatabase_IteratorNext_Params.generate = function(generator_) {
    var generated = new LevelDBDatabase_IteratorNext_Params;
    generated.iterator = generator_.generateStruct(mojoBase.mojom.UnguessableToken, false);
    return generated;
  };

  LevelDBDatabase_IteratorNext_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.iterator = mutator_.mutateStruct(mojoBase.mojom.UnguessableToken, false);
    }
    return this;
  };
  LevelDBDatabase_IteratorNext_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  LevelDBDatabase_IteratorNext_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  LevelDBDatabase_IteratorNext_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  LevelDBDatabase_IteratorNext_Params.validate = function(messageValidator, offset) {
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


    // validate LevelDBDatabase_IteratorNext_Params.iterator
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, unguessable_token$.UnguessableToken, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  LevelDBDatabase_IteratorNext_Params.encodedSize = codec.kStructHeaderSize + 8;

  LevelDBDatabase_IteratorNext_Params.decode = function(decoder) {
    var packed;
    var val = new LevelDBDatabase_IteratorNext_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.iterator = decoder.decodeStructPointer(unguessable_token$.UnguessableToken);
    return val;
  };

  LevelDBDatabase_IteratorNext_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(LevelDBDatabase_IteratorNext_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(unguessable_token$.UnguessableToken, val.iterator);
  };
  function LevelDBDatabase_IteratorNext_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  LevelDBDatabase_IteratorNext_ResponseParams.prototype.initDefaults_ = function() {
    this.valid = false;
    this.status = 0;
    this.key = null;
    this.value = null;
  };
  LevelDBDatabase_IteratorNext_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  LevelDBDatabase_IteratorNext_ResponseParams.generate = function(generator_) {
    var generated = new LevelDBDatabase_IteratorNext_ResponseParams;
    generated.valid = generator_.generateBool();
    generated.status = generator_.generateEnum(0, 5);
    generated.key = generator_.generateArray(function() {
      return generator_.generateUint8();
    });
    generated.value = generator_.generateArray(function() {
      return generator_.generateUint8();
    });
    return generated;
  };

  LevelDBDatabase_IteratorNext_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.valid = mutator_.mutateBool(this.valid);
    }
    if (mutator_.chooseMutateField()) {
      this.status = mutator_.mutateEnum(this.status, 0, 5);
    }
    if (mutator_.chooseMutateField()) {
      this.key = mutator_.mutateArray(this.key, function(val) {
        return mutator_.mutateUint8(val);
      });
    }
    if (mutator_.chooseMutateField()) {
      this.value = mutator_.mutateArray(this.value, function(val) {
        return mutator_.mutateUint8(val);
      });
    }
    return this;
  };
  LevelDBDatabase_IteratorNext_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  LevelDBDatabase_IteratorNext_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  LevelDBDatabase_IteratorNext_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  LevelDBDatabase_IteratorNext_ResponseParams.validate = function(messageValidator, offset) {
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



    // validate LevelDBDatabase_IteratorNext_ResponseParams.status
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 4, DatabaseError);
    if (err !== validator.validationError.NONE)
        return err;


    // validate LevelDBDatabase_IteratorNext_ResponseParams.key
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 1, codec.Uint8, true, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;


    // validate LevelDBDatabase_IteratorNext_ResponseParams.value
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 16, 1, codec.Uint8, true, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  LevelDBDatabase_IteratorNext_ResponseParams.encodedSize = codec.kStructHeaderSize + 24;

  LevelDBDatabase_IteratorNext_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new LevelDBDatabase_IteratorNext_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.valid = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.status = decoder.decodeStruct(codec.Int32);
    val.key = decoder.decodeArrayPointer(codec.Uint8);
    val.value = decoder.decodeArrayPointer(codec.Uint8);
    return val;
  };

  LevelDBDatabase_IteratorNext_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(LevelDBDatabase_IteratorNext_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.valid & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.Int32, val.status);
    encoder.encodeArrayPointer(codec.Uint8, val.key);
    encoder.encodeArrayPointer(codec.Uint8, val.value);
  };
  function LevelDBDatabase_IteratorPrev_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  LevelDBDatabase_IteratorPrev_Params.prototype.initDefaults_ = function() {
    this.iterator = null;
  };
  LevelDBDatabase_IteratorPrev_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  LevelDBDatabase_IteratorPrev_Params.generate = function(generator_) {
    var generated = new LevelDBDatabase_IteratorPrev_Params;
    generated.iterator = generator_.generateStruct(mojoBase.mojom.UnguessableToken, false);
    return generated;
  };

  LevelDBDatabase_IteratorPrev_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.iterator = mutator_.mutateStruct(mojoBase.mojom.UnguessableToken, false);
    }
    return this;
  };
  LevelDBDatabase_IteratorPrev_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  LevelDBDatabase_IteratorPrev_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  LevelDBDatabase_IteratorPrev_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  LevelDBDatabase_IteratorPrev_Params.validate = function(messageValidator, offset) {
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


    // validate LevelDBDatabase_IteratorPrev_Params.iterator
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, unguessable_token$.UnguessableToken, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  LevelDBDatabase_IteratorPrev_Params.encodedSize = codec.kStructHeaderSize + 8;

  LevelDBDatabase_IteratorPrev_Params.decode = function(decoder) {
    var packed;
    var val = new LevelDBDatabase_IteratorPrev_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.iterator = decoder.decodeStructPointer(unguessable_token$.UnguessableToken);
    return val;
  };

  LevelDBDatabase_IteratorPrev_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(LevelDBDatabase_IteratorPrev_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(unguessable_token$.UnguessableToken, val.iterator);
  };
  function LevelDBDatabase_IteratorPrev_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  LevelDBDatabase_IteratorPrev_ResponseParams.prototype.initDefaults_ = function() {
    this.valid = false;
    this.status = 0;
    this.key = null;
    this.value = null;
  };
  LevelDBDatabase_IteratorPrev_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  LevelDBDatabase_IteratorPrev_ResponseParams.generate = function(generator_) {
    var generated = new LevelDBDatabase_IteratorPrev_ResponseParams;
    generated.valid = generator_.generateBool();
    generated.status = generator_.generateEnum(0, 5);
    generated.key = generator_.generateArray(function() {
      return generator_.generateUint8();
    });
    generated.value = generator_.generateArray(function() {
      return generator_.generateUint8();
    });
    return generated;
  };

  LevelDBDatabase_IteratorPrev_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.valid = mutator_.mutateBool(this.valid);
    }
    if (mutator_.chooseMutateField()) {
      this.status = mutator_.mutateEnum(this.status, 0, 5);
    }
    if (mutator_.chooseMutateField()) {
      this.key = mutator_.mutateArray(this.key, function(val) {
        return mutator_.mutateUint8(val);
      });
    }
    if (mutator_.chooseMutateField()) {
      this.value = mutator_.mutateArray(this.value, function(val) {
        return mutator_.mutateUint8(val);
      });
    }
    return this;
  };
  LevelDBDatabase_IteratorPrev_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  LevelDBDatabase_IteratorPrev_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  LevelDBDatabase_IteratorPrev_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  LevelDBDatabase_IteratorPrev_ResponseParams.validate = function(messageValidator, offset) {
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



    // validate LevelDBDatabase_IteratorPrev_ResponseParams.status
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 4, DatabaseError);
    if (err !== validator.validationError.NONE)
        return err;


    // validate LevelDBDatabase_IteratorPrev_ResponseParams.key
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 1, codec.Uint8, true, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;


    // validate LevelDBDatabase_IteratorPrev_ResponseParams.value
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 16, 1, codec.Uint8, true, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  LevelDBDatabase_IteratorPrev_ResponseParams.encodedSize = codec.kStructHeaderSize + 24;

  LevelDBDatabase_IteratorPrev_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new LevelDBDatabase_IteratorPrev_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.valid = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.status = decoder.decodeStruct(codec.Int32);
    val.key = decoder.decodeArrayPointer(codec.Uint8);
    val.value = decoder.decodeArrayPointer(codec.Uint8);
    return val;
  };

  LevelDBDatabase_IteratorPrev_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(LevelDBDatabase_IteratorPrev_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.valid & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.Int32, val.status);
    encoder.encodeArrayPointer(codec.Uint8, val.key);
    encoder.encodeArrayPointer(codec.Uint8, val.value);
  };
  var kLevelDBService_Open_Name = 323402305;
  var kLevelDBService_OpenWithOptions_Name = 1639745257;
  var kLevelDBService_OpenInMemory_Name = 77845067;
  var kLevelDBService_Destroy_Name = 356058014;

  function LevelDBServicePtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(LevelDBService,
                                                   handleOrPtrInfo);
  }

  function LevelDBServiceAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        LevelDBService, associatedInterfacePtrInfo);
  }

  LevelDBServiceAssociatedPtr.prototype =
      Object.create(LevelDBServicePtr.prototype);
  LevelDBServiceAssociatedPtr.prototype.constructor =
      LevelDBServiceAssociatedPtr;

  function LevelDBServiceProxy(receiver) {
    this.receiver_ = receiver;
  }
  LevelDBServicePtr.prototype.open = function() {
    return LevelDBServiceProxy.prototype.open
        .apply(this.ptr.getProxy(), arguments);
  };

  LevelDBServiceProxy.prototype.open = function(directory, dbname, memoryDumpId, database) {
    var params_ = new LevelDBService_Open_Params();
    params_.directory = directory;
    params_.dbname = dbname;
    params_.memoryDumpId = memoryDumpId;
    params_.database = database;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV2Builder(
          kLevelDBService_Open_Name,
          codec.align(LevelDBService_Open_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.setPayload(LevelDBService_Open_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(LevelDBService_Open_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  LevelDBServicePtr.prototype.openWithOptions = function() {
    return LevelDBServiceProxy.prototype.openWithOptions
        .apply(this.ptr.getProxy(), arguments);
  };

  LevelDBServiceProxy.prototype.openWithOptions = function(options, directory, dbname, memoryDumpId, database) {
    var params_ = new LevelDBService_OpenWithOptions_Params();
    params_.options = options;
    params_.directory = directory;
    params_.dbname = dbname;
    params_.memoryDumpId = memoryDumpId;
    params_.database = database;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV2Builder(
          kLevelDBService_OpenWithOptions_Name,
          codec.align(LevelDBService_OpenWithOptions_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.setPayload(LevelDBService_OpenWithOptions_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(LevelDBService_OpenWithOptions_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  LevelDBServicePtr.prototype.openInMemory = function() {
    return LevelDBServiceProxy.prototype.openInMemory
        .apply(this.ptr.getProxy(), arguments);
  };

  LevelDBServiceProxy.prototype.openInMemory = function(memoryDumpId, trackingName, database) {
    var params_ = new LevelDBService_OpenInMemory_Params();
    params_.memoryDumpId = memoryDumpId;
    params_.trackingName = trackingName;
    params_.database = database;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV2Builder(
          kLevelDBService_OpenInMemory_Name,
          codec.align(LevelDBService_OpenInMemory_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.setPayload(LevelDBService_OpenInMemory_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(LevelDBService_OpenInMemory_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  LevelDBServicePtr.prototype.destroy = function() {
    return LevelDBServiceProxy.prototype.destroy
        .apply(this.ptr.getProxy(), arguments);
  };

  LevelDBServiceProxy.prototype.destroy = function(directory, dbname) {
    var params_ = new LevelDBService_Destroy_Params();
    params_.directory = directory;
    params_.dbname = dbname;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kLevelDBService_Destroy_Name,
          codec.align(LevelDBService_Destroy_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(LevelDBService_Destroy_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(LevelDBService_Destroy_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };

  function LevelDBServiceStub(delegate) {
    this.delegate_ = delegate;
  }
  LevelDBServiceStub.prototype.open = function(directory, dbname, memoryDumpId, database) {
    return this.delegate_ && this.delegate_.open && this.delegate_.open(directory, dbname, memoryDumpId, database);
  }
  LevelDBServiceStub.prototype.openWithOptions = function(options, directory, dbname, memoryDumpId, database) {
    return this.delegate_ && this.delegate_.openWithOptions && this.delegate_.openWithOptions(options, directory, dbname, memoryDumpId, database);
  }
  LevelDBServiceStub.prototype.openInMemory = function(memoryDumpId, trackingName, database) {
    return this.delegate_ && this.delegate_.openInMemory && this.delegate_.openInMemory(memoryDumpId, trackingName, database);
  }
  LevelDBServiceStub.prototype.destroy = function(directory, dbname) {
    return this.delegate_ && this.delegate_.destroy && this.delegate_.destroy(directory, dbname);
  }

  LevelDBServiceStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  LevelDBServiceStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kLevelDBService_Open_Name:
      var params = reader.decodeStruct(LevelDBService_Open_Params);
      this.open(params.directory, params.dbname, params.memoryDumpId, params.database).then(function(response) {
        var responseParams =
            new LevelDBService_Open_ResponseParams();
        responseParams.status = response.status;
        var builder = new codec.MessageV2Builder(
            kLevelDBService_Open_Name,
            codec.align(LevelDBService_Open_ResponseParams
                .encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.setPayload(LevelDBService_Open_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kLevelDBService_OpenWithOptions_Name:
      var params = reader.decodeStruct(LevelDBService_OpenWithOptions_Params);
      this.openWithOptions(params.options, params.directory, params.dbname, params.memoryDumpId, params.database).then(function(response) {
        var responseParams =
            new LevelDBService_OpenWithOptions_ResponseParams();
        responseParams.status = response.status;
        var builder = new codec.MessageV2Builder(
            kLevelDBService_OpenWithOptions_Name,
            codec.align(LevelDBService_OpenWithOptions_ResponseParams
                .encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.setPayload(LevelDBService_OpenWithOptions_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kLevelDBService_OpenInMemory_Name:
      var params = reader.decodeStruct(LevelDBService_OpenInMemory_Params);
      this.openInMemory(params.memoryDumpId, params.trackingName, params.database).then(function(response) {
        var responseParams =
            new LevelDBService_OpenInMemory_ResponseParams();
        responseParams.status = response.status;
        var builder = new codec.MessageV2Builder(
            kLevelDBService_OpenInMemory_Name,
            codec.align(LevelDBService_OpenInMemory_ResponseParams
                .encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.setPayload(LevelDBService_OpenInMemory_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kLevelDBService_Destroy_Name:
      var params = reader.decodeStruct(LevelDBService_Destroy_Params);
      this.destroy(params.directory, params.dbname).then(function(response) {
        var responseParams =
            new LevelDBService_Destroy_ResponseParams();
        responseParams.status = response.status;
        var builder = new codec.MessageV1Builder(
            kLevelDBService_Destroy_Name,
            codec.align(LevelDBService_Destroy_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(LevelDBService_Destroy_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    default:
      return false;
    }
  };

  function validateLevelDBServiceRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kLevelDBService_Open_Name:
        if (message.expectsResponse())
          paramsClass = LevelDBService_Open_Params;
      break;
      case kLevelDBService_OpenWithOptions_Name:
        if (message.expectsResponse())
          paramsClass = LevelDBService_OpenWithOptions_Params;
      break;
      case kLevelDBService_OpenInMemory_Name:
        if (message.expectsResponse())
          paramsClass = LevelDBService_OpenInMemory_Params;
      break;
      case kLevelDBService_Destroy_Name:
        if (message.expectsResponse())
          paramsClass = LevelDBService_Destroy_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateLevelDBServiceResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kLevelDBService_Open_Name:
        if (message.isResponse())
          paramsClass = LevelDBService_Open_ResponseParams;
        break;
      case kLevelDBService_OpenWithOptions_Name:
        if (message.isResponse())
          paramsClass = LevelDBService_OpenWithOptions_ResponseParams;
        break;
      case kLevelDBService_OpenInMemory_Name:
        if (message.isResponse())
          paramsClass = LevelDBService_OpenInMemory_ResponseParams;
        break;
      case kLevelDBService_Destroy_Name:
        if (message.isResponse())
          paramsClass = LevelDBService_Destroy_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var LevelDBService = {
    name: 'leveldb.mojom.LevelDBService',
    kVersion: 0,
    ptrClass: LevelDBServicePtr,
    proxyClass: LevelDBServiceProxy,
    stubClass: LevelDBServiceStub,
    validateRequest: validateLevelDBServiceRequest,
    validateResponse: validateLevelDBServiceResponse,
    mojomId: 'components/services/leveldb/public/interfaces/leveldb.mojom',
    fuzzMethods: {
      open: {
        params: LevelDBService_Open_Params,
      },
      openWithOptions: {
        params: LevelDBService_OpenWithOptions_Params,
      },
      openInMemory: {
        params: LevelDBService_OpenInMemory_Params,
      },
      destroy: {
        params: LevelDBService_Destroy_Params,
      },
    },
  };
  LevelDBServiceStub.prototype.validator = validateLevelDBServiceRequest;
  LevelDBServiceProxy.prototype.validator = validateLevelDBServiceResponse;
  var kLevelDBDatabase_Put_Name = 510452762;
  var kLevelDBDatabase_Delete_Name = 517353850;
  var kLevelDBDatabase_DeletePrefixed_Name = 1990851671;
  var kLevelDBDatabase_Write_Name = 588934051;
  var kLevelDBDatabase_Get_Name = 480525397;
  var kLevelDBDatabase_GetPrefixed_Name = 1795462018;
  var kLevelDBDatabase_CopyPrefixed_Name = 3533507;
  var kLevelDBDatabase_GetSnapshot_Name = 1937343977;
  var kLevelDBDatabase_ReleaseSnapshot_Name = 689129822;
  var kLevelDBDatabase_GetFromSnapshot_Name = 1696094320;
  var kLevelDBDatabase_NewIterator_Name = 1834955633;
  var kLevelDBDatabase_NewIteratorFromSnapshot_Name = 1901445472;
  var kLevelDBDatabase_ReleaseIterator_Name = 2020896995;
  var kLevelDBDatabase_IteratorSeekToFirst_Name = 113658225;
  var kLevelDBDatabase_IteratorSeekToLast_Name = 688193252;
  var kLevelDBDatabase_IteratorSeek_Name = 1796482655;
  var kLevelDBDatabase_IteratorNext_Name = 339133571;
  var kLevelDBDatabase_IteratorPrev_Name = 869409495;

  function LevelDBDatabasePtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(LevelDBDatabase,
                                                   handleOrPtrInfo);
  }

  function LevelDBDatabaseAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        LevelDBDatabase, associatedInterfacePtrInfo);
  }

  LevelDBDatabaseAssociatedPtr.prototype =
      Object.create(LevelDBDatabasePtr.prototype);
  LevelDBDatabaseAssociatedPtr.prototype.constructor =
      LevelDBDatabaseAssociatedPtr;

  function LevelDBDatabaseProxy(receiver) {
    this.receiver_ = receiver;
  }
  LevelDBDatabasePtr.prototype.put = function() {
    return LevelDBDatabaseProxy.prototype.put
        .apply(this.ptr.getProxy(), arguments);
  };

  LevelDBDatabaseProxy.prototype.put = function(key, value) {
    var params_ = new LevelDBDatabase_Put_Params();
    params_.key = key;
    params_.value = value;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kLevelDBDatabase_Put_Name,
          codec.align(LevelDBDatabase_Put_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(LevelDBDatabase_Put_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(LevelDBDatabase_Put_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  LevelDBDatabasePtr.prototype.delete = function() {
    return LevelDBDatabaseProxy.prototype.delete
        .apply(this.ptr.getProxy(), arguments);
  };

  LevelDBDatabaseProxy.prototype.delete = function(key) {
    var params_ = new LevelDBDatabase_Delete_Params();
    params_.key = key;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kLevelDBDatabase_Delete_Name,
          codec.align(LevelDBDatabase_Delete_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(LevelDBDatabase_Delete_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(LevelDBDatabase_Delete_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  LevelDBDatabasePtr.prototype.deletePrefixed = function() {
    return LevelDBDatabaseProxy.prototype.deletePrefixed
        .apply(this.ptr.getProxy(), arguments);
  };

  LevelDBDatabaseProxy.prototype.deletePrefixed = function(keyPrefix) {
    var params_ = new LevelDBDatabase_DeletePrefixed_Params();
    params_.keyPrefix = keyPrefix;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kLevelDBDatabase_DeletePrefixed_Name,
          codec.align(LevelDBDatabase_DeletePrefixed_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(LevelDBDatabase_DeletePrefixed_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(LevelDBDatabase_DeletePrefixed_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  LevelDBDatabasePtr.prototype.write = function() {
    return LevelDBDatabaseProxy.prototype.write
        .apply(this.ptr.getProxy(), arguments);
  };

  LevelDBDatabaseProxy.prototype.write = function(operations) {
    var params_ = new LevelDBDatabase_Write_Params();
    params_.operations = operations;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kLevelDBDatabase_Write_Name,
          codec.align(LevelDBDatabase_Write_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(LevelDBDatabase_Write_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(LevelDBDatabase_Write_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  LevelDBDatabasePtr.prototype.get = function() {
    return LevelDBDatabaseProxy.prototype.get
        .apply(this.ptr.getProxy(), arguments);
  };

  LevelDBDatabaseProxy.prototype.get = function(key) {
    var params_ = new LevelDBDatabase_Get_Params();
    params_.key = key;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kLevelDBDatabase_Get_Name,
          codec.align(LevelDBDatabase_Get_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(LevelDBDatabase_Get_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(LevelDBDatabase_Get_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  LevelDBDatabasePtr.prototype.getPrefixed = function() {
    return LevelDBDatabaseProxy.prototype.getPrefixed
        .apply(this.ptr.getProxy(), arguments);
  };

  LevelDBDatabaseProxy.prototype.getPrefixed = function(keyPrefix) {
    var params_ = new LevelDBDatabase_GetPrefixed_Params();
    params_.keyPrefix = keyPrefix;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kLevelDBDatabase_GetPrefixed_Name,
          codec.align(LevelDBDatabase_GetPrefixed_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(LevelDBDatabase_GetPrefixed_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(LevelDBDatabase_GetPrefixed_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  LevelDBDatabasePtr.prototype.copyPrefixed = function() {
    return LevelDBDatabaseProxy.prototype.copyPrefixed
        .apply(this.ptr.getProxy(), arguments);
  };

  LevelDBDatabaseProxy.prototype.copyPrefixed = function(sourceKeyPrefix, destinationKeyPrefix) {
    var params_ = new LevelDBDatabase_CopyPrefixed_Params();
    params_.sourceKeyPrefix = sourceKeyPrefix;
    params_.destinationKeyPrefix = destinationKeyPrefix;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kLevelDBDatabase_CopyPrefixed_Name,
          codec.align(LevelDBDatabase_CopyPrefixed_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(LevelDBDatabase_CopyPrefixed_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(LevelDBDatabase_CopyPrefixed_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  LevelDBDatabasePtr.prototype.getSnapshot = function() {
    return LevelDBDatabaseProxy.prototype.getSnapshot
        .apply(this.ptr.getProxy(), arguments);
  };

  LevelDBDatabaseProxy.prototype.getSnapshot = function() {
    var params_ = new LevelDBDatabase_GetSnapshot_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kLevelDBDatabase_GetSnapshot_Name,
          codec.align(LevelDBDatabase_GetSnapshot_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(LevelDBDatabase_GetSnapshot_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(LevelDBDatabase_GetSnapshot_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  LevelDBDatabasePtr.prototype.releaseSnapshot = function() {
    return LevelDBDatabaseProxy.prototype.releaseSnapshot
        .apply(this.ptr.getProxy(), arguments);
  };

  LevelDBDatabaseProxy.prototype.releaseSnapshot = function(snapshot) {
    var params_ = new LevelDBDatabase_ReleaseSnapshot_Params();
    params_.snapshot = snapshot;
    var builder = new codec.MessageV0Builder(
        kLevelDBDatabase_ReleaseSnapshot_Name,
        codec.align(LevelDBDatabase_ReleaseSnapshot_Params.encodedSize));
    builder.encodeStruct(LevelDBDatabase_ReleaseSnapshot_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  LevelDBDatabasePtr.prototype.getFromSnapshot = function() {
    return LevelDBDatabaseProxy.prototype.getFromSnapshot
        .apply(this.ptr.getProxy(), arguments);
  };

  LevelDBDatabaseProxy.prototype.getFromSnapshot = function(snapshot, key) {
    var params_ = new LevelDBDatabase_GetFromSnapshot_Params();
    params_.snapshot = snapshot;
    params_.key = key;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kLevelDBDatabase_GetFromSnapshot_Name,
          codec.align(LevelDBDatabase_GetFromSnapshot_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(LevelDBDatabase_GetFromSnapshot_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(LevelDBDatabase_GetFromSnapshot_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  LevelDBDatabasePtr.prototype.newIterator = function() {
    return LevelDBDatabaseProxy.prototype.newIterator
        .apply(this.ptr.getProxy(), arguments);
  };

  LevelDBDatabaseProxy.prototype.newIterator = function() {
    var params_ = new LevelDBDatabase_NewIterator_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kLevelDBDatabase_NewIterator_Name,
          codec.align(LevelDBDatabase_NewIterator_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(LevelDBDatabase_NewIterator_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(LevelDBDatabase_NewIterator_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  LevelDBDatabasePtr.prototype.newIteratorFromSnapshot = function() {
    return LevelDBDatabaseProxy.prototype.newIteratorFromSnapshot
        .apply(this.ptr.getProxy(), arguments);
  };

  LevelDBDatabaseProxy.prototype.newIteratorFromSnapshot = function(snapshot) {
    var params_ = new LevelDBDatabase_NewIteratorFromSnapshot_Params();
    params_.snapshot = snapshot;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kLevelDBDatabase_NewIteratorFromSnapshot_Name,
          codec.align(LevelDBDatabase_NewIteratorFromSnapshot_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(LevelDBDatabase_NewIteratorFromSnapshot_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(LevelDBDatabase_NewIteratorFromSnapshot_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  LevelDBDatabasePtr.prototype.releaseIterator = function() {
    return LevelDBDatabaseProxy.prototype.releaseIterator
        .apply(this.ptr.getProxy(), arguments);
  };

  LevelDBDatabaseProxy.prototype.releaseIterator = function(iterator) {
    var params_ = new LevelDBDatabase_ReleaseIterator_Params();
    params_.iterator = iterator;
    var builder = new codec.MessageV0Builder(
        kLevelDBDatabase_ReleaseIterator_Name,
        codec.align(LevelDBDatabase_ReleaseIterator_Params.encodedSize));
    builder.encodeStruct(LevelDBDatabase_ReleaseIterator_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  LevelDBDatabasePtr.prototype.iteratorSeekToFirst = function() {
    return LevelDBDatabaseProxy.prototype.iteratorSeekToFirst
        .apply(this.ptr.getProxy(), arguments);
  };

  LevelDBDatabaseProxy.prototype.iteratorSeekToFirst = function(iterator) {
    var params_ = new LevelDBDatabase_IteratorSeekToFirst_Params();
    params_.iterator = iterator;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kLevelDBDatabase_IteratorSeekToFirst_Name,
          codec.align(LevelDBDatabase_IteratorSeekToFirst_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(LevelDBDatabase_IteratorSeekToFirst_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(LevelDBDatabase_IteratorSeekToFirst_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  LevelDBDatabasePtr.prototype.iteratorSeekToLast = function() {
    return LevelDBDatabaseProxy.prototype.iteratorSeekToLast
        .apply(this.ptr.getProxy(), arguments);
  };

  LevelDBDatabaseProxy.prototype.iteratorSeekToLast = function(iterator) {
    var params_ = new LevelDBDatabase_IteratorSeekToLast_Params();
    params_.iterator = iterator;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kLevelDBDatabase_IteratorSeekToLast_Name,
          codec.align(LevelDBDatabase_IteratorSeekToLast_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(LevelDBDatabase_IteratorSeekToLast_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(LevelDBDatabase_IteratorSeekToLast_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  LevelDBDatabasePtr.prototype.iteratorSeek = function() {
    return LevelDBDatabaseProxy.prototype.iteratorSeek
        .apply(this.ptr.getProxy(), arguments);
  };

  LevelDBDatabaseProxy.prototype.iteratorSeek = function(iterator, target) {
    var params_ = new LevelDBDatabase_IteratorSeek_Params();
    params_.iterator = iterator;
    params_.target = target;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kLevelDBDatabase_IteratorSeek_Name,
          codec.align(LevelDBDatabase_IteratorSeek_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(LevelDBDatabase_IteratorSeek_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(LevelDBDatabase_IteratorSeek_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  LevelDBDatabasePtr.prototype.iteratorNext = function() {
    return LevelDBDatabaseProxy.prototype.iteratorNext
        .apply(this.ptr.getProxy(), arguments);
  };

  LevelDBDatabaseProxy.prototype.iteratorNext = function(iterator) {
    var params_ = new LevelDBDatabase_IteratorNext_Params();
    params_.iterator = iterator;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kLevelDBDatabase_IteratorNext_Name,
          codec.align(LevelDBDatabase_IteratorNext_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(LevelDBDatabase_IteratorNext_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(LevelDBDatabase_IteratorNext_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  LevelDBDatabasePtr.prototype.iteratorPrev = function() {
    return LevelDBDatabaseProxy.prototype.iteratorPrev
        .apply(this.ptr.getProxy(), arguments);
  };

  LevelDBDatabaseProxy.prototype.iteratorPrev = function(iterator) {
    var params_ = new LevelDBDatabase_IteratorPrev_Params();
    params_.iterator = iterator;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kLevelDBDatabase_IteratorPrev_Name,
          codec.align(LevelDBDatabase_IteratorPrev_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(LevelDBDatabase_IteratorPrev_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(LevelDBDatabase_IteratorPrev_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };

  function LevelDBDatabaseStub(delegate) {
    this.delegate_ = delegate;
  }
  LevelDBDatabaseStub.prototype.put = function(key, value) {
    return this.delegate_ && this.delegate_.put && this.delegate_.put(key, value);
  }
  LevelDBDatabaseStub.prototype.delete = function(key) {
    return this.delegate_ && this.delegate_.delete && this.delegate_.delete(key);
  }
  LevelDBDatabaseStub.prototype.deletePrefixed = function(keyPrefix) {
    return this.delegate_ && this.delegate_.deletePrefixed && this.delegate_.deletePrefixed(keyPrefix);
  }
  LevelDBDatabaseStub.prototype.write = function(operations) {
    return this.delegate_ && this.delegate_.write && this.delegate_.write(operations);
  }
  LevelDBDatabaseStub.prototype.get = function(key) {
    return this.delegate_ && this.delegate_.get && this.delegate_.get(key);
  }
  LevelDBDatabaseStub.prototype.getPrefixed = function(keyPrefix) {
    return this.delegate_ && this.delegate_.getPrefixed && this.delegate_.getPrefixed(keyPrefix);
  }
  LevelDBDatabaseStub.prototype.copyPrefixed = function(sourceKeyPrefix, destinationKeyPrefix) {
    return this.delegate_ && this.delegate_.copyPrefixed && this.delegate_.copyPrefixed(sourceKeyPrefix, destinationKeyPrefix);
  }
  LevelDBDatabaseStub.prototype.getSnapshot = function() {
    return this.delegate_ && this.delegate_.getSnapshot && this.delegate_.getSnapshot();
  }
  LevelDBDatabaseStub.prototype.releaseSnapshot = function(snapshot) {
    return this.delegate_ && this.delegate_.releaseSnapshot && this.delegate_.releaseSnapshot(snapshot);
  }
  LevelDBDatabaseStub.prototype.getFromSnapshot = function(snapshot, key) {
    return this.delegate_ && this.delegate_.getFromSnapshot && this.delegate_.getFromSnapshot(snapshot, key);
  }
  LevelDBDatabaseStub.prototype.newIterator = function() {
    return this.delegate_ && this.delegate_.newIterator && this.delegate_.newIterator();
  }
  LevelDBDatabaseStub.prototype.newIteratorFromSnapshot = function(snapshot) {
    return this.delegate_ && this.delegate_.newIteratorFromSnapshot && this.delegate_.newIteratorFromSnapshot(snapshot);
  }
  LevelDBDatabaseStub.prototype.releaseIterator = function(iterator) {
    return this.delegate_ && this.delegate_.releaseIterator && this.delegate_.releaseIterator(iterator);
  }
  LevelDBDatabaseStub.prototype.iteratorSeekToFirst = function(iterator) {
    return this.delegate_ && this.delegate_.iteratorSeekToFirst && this.delegate_.iteratorSeekToFirst(iterator);
  }
  LevelDBDatabaseStub.prototype.iteratorSeekToLast = function(iterator) {
    return this.delegate_ && this.delegate_.iteratorSeekToLast && this.delegate_.iteratorSeekToLast(iterator);
  }
  LevelDBDatabaseStub.prototype.iteratorSeek = function(iterator, target) {
    return this.delegate_ && this.delegate_.iteratorSeek && this.delegate_.iteratorSeek(iterator, target);
  }
  LevelDBDatabaseStub.prototype.iteratorNext = function(iterator) {
    return this.delegate_ && this.delegate_.iteratorNext && this.delegate_.iteratorNext(iterator);
  }
  LevelDBDatabaseStub.prototype.iteratorPrev = function(iterator) {
    return this.delegate_ && this.delegate_.iteratorPrev && this.delegate_.iteratorPrev(iterator);
  }

  LevelDBDatabaseStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kLevelDBDatabase_ReleaseSnapshot_Name:
      var params = reader.decodeStruct(LevelDBDatabase_ReleaseSnapshot_Params);
      this.releaseSnapshot(params.snapshot);
      return true;
    case kLevelDBDatabase_ReleaseIterator_Name:
      var params = reader.decodeStruct(LevelDBDatabase_ReleaseIterator_Params);
      this.releaseIterator(params.iterator);
      return true;
    default:
      return false;
    }
  };

  LevelDBDatabaseStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kLevelDBDatabase_Put_Name:
      var params = reader.decodeStruct(LevelDBDatabase_Put_Params);
      this.put(params.key, params.value).then(function(response) {
        var responseParams =
            new LevelDBDatabase_Put_ResponseParams();
        responseParams.status = response.status;
        var builder = new codec.MessageV1Builder(
            kLevelDBDatabase_Put_Name,
            codec.align(LevelDBDatabase_Put_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(LevelDBDatabase_Put_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kLevelDBDatabase_Delete_Name:
      var params = reader.decodeStruct(LevelDBDatabase_Delete_Params);
      this.delete(params.key).then(function(response) {
        var responseParams =
            new LevelDBDatabase_Delete_ResponseParams();
        responseParams.status = response.status;
        var builder = new codec.MessageV1Builder(
            kLevelDBDatabase_Delete_Name,
            codec.align(LevelDBDatabase_Delete_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(LevelDBDatabase_Delete_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kLevelDBDatabase_DeletePrefixed_Name:
      var params = reader.decodeStruct(LevelDBDatabase_DeletePrefixed_Params);
      this.deletePrefixed(params.keyPrefix).then(function(response) {
        var responseParams =
            new LevelDBDatabase_DeletePrefixed_ResponseParams();
        responseParams.status = response.status;
        var builder = new codec.MessageV1Builder(
            kLevelDBDatabase_DeletePrefixed_Name,
            codec.align(LevelDBDatabase_DeletePrefixed_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(LevelDBDatabase_DeletePrefixed_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kLevelDBDatabase_Write_Name:
      var params = reader.decodeStruct(LevelDBDatabase_Write_Params);
      this.write(params.operations).then(function(response) {
        var responseParams =
            new LevelDBDatabase_Write_ResponseParams();
        responseParams.status = response.status;
        var builder = new codec.MessageV1Builder(
            kLevelDBDatabase_Write_Name,
            codec.align(LevelDBDatabase_Write_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(LevelDBDatabase_Write_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kLevelDBDatabase_Get_Name:
      var params = reader.decodeStruct(LevelDBDatabase_Get_Params);
      this.get(params.key).then(function(response) {
        var responseParams =
            new LevelDBDatabase_Get_ResponseParams();
        responseParams.status = response.status;
        responseParams.value = response.value;
        var builder = new codec.MessageV1Builder(
            kLevelDBDatabase_Get_Name,
            codec.align(LevelDBDatabase_Get_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(LevelDBDatabase_Get_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kLevelDBDatabase_GetPrefixed_Name:
      var params = reader.decodeStruct(LevelDBDatabase_GetPrefixed_Params);
      this.getPrefixed(params.keyPrefix).then(function(response) {
        var responseParams =
            new LevelDBDatabase_GetPrefixed_ResponseParams();
        responseParams.status = response.status;
        responseParams.data = response.data;
        var builder = new codec.MessageV1Builder(
            kLevelDBDatabase_GetPrefixed_Name,
            codec.align(LevelDBDatabase_GetPrefixed_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(LevelDBDatabase_GetPrefixed_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kLevelDBDatabase_CopyPrefixed_Name:
      var params = reader.decodeStruct(LevelDBDatabase_CopyPrefixed_Params);
      this.copyPrefixed(params.sourceKeyPrefix, params.destinationKeyPrefix).then(function(response) {
        var responseParams =
            new LevelDBDatabase_CopyPrefixed_ResponseParams();
        responseParams.status = response.status;
        var builder = new codec.MessageV1Builder(
            kLevelDBDatabase_CopyPrefixed_Name,
            codec.align(LevelDBDatabase_CopyPrefixed_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(LevelDBDatabase_CopyPrefixed_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kLevelDBDatabase_GetSnapshot_Name:
      var params = reader.decodeStruct(LevelDBDatabase_GetSnapshot_Params);
      this.getSnapshot().then(function(response) {
        var responseParams =
            new LevelDBDatabase_GetSnapshot_ResponseParams();
        responseParams.snapshot = response.snapshot;
        var builder = new codec.MessageV1Builder(
            kLevelDBDatabase_GetSnapshot_Name,
            codec.align(LevelDBDatabase_GetSnapshot_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(LevelDBDatabase_GetSnapshot_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kLevelDBDatabase_GetFromSnapshot_Name:
      var params = reader.decodeStruct(LevelDBDatabase_GetFromSnapshot_Params);
      this.getFromSnapshot(params.snapshot, params.key).then(function(response) {
        var responseParams =
            new LevelDBDatabase_GetFromSnapshot_ResponseParams();
        responseParams.status = response.status;
        responseParams.value = response.value;
        var builder = new codec.MessageV1Builder(
            kLevelDBDatabase_GetFromSnapshot_Name,
            codec.align(LevelDBDatabase_GetFromSnapshot_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(LevelDBDatabase_GetFromSnapshot_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kLevelDBDatabase_NewIterator_Name:
      var params = reader.decodeStruct(LevelDBDatabase_NewIterator_Params);
      this.newIterator().then(function(response) {
        var responseParams =
            new LevelDBDatabase_NewIterator_ResponseParams();
        responseParams.iterator = response.iterator;
        var builder = new codec.MessageV1Builder(
            kLevelDBDatabase_NewIterator_Name,
            codec.align(LevelDBDatabase_NewIterator_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(LevelDBDatabase_NewIterator_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kLevelDBDatabase_NewIteratorFromSnapshot_Name:
      var params = reader.decodeStruct(LevelDBDatabase_NewIteratorFromSnapshot_Params);
      this.newIteratorFromSnapshot(params.snapshot).then(function(response) {
        var responseParams =
            new LevelDBDatabase_NewIteratorFromSnapshot_ResponseParams();
        responseParams.iterator = response.iterator;
        var builder = new codec.MessageV1Builder(
            kLevelDBDatabase_NewIteratorFromSnapshot_Name,
            codec.align(LevelDBDatabase_NewIteratorFromSnapshot_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(LevelDBDatabase_NewIteratorFromSnapshot_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kLevelDBDatabase_IteratorSeekToFirst_Name:
      var params = reader.decodeStruct(LevelDBDatabase_IteratorSeekToFirst_Params);
      this.iteratorSeekToFirst(params.iterator).then(function(response) {
        var responseParams =
            new LevelDBDatabase_IteratorSeekToFirst_ResponseParams();
        responseParams.valid = response.valid;
        responseParams.status = response.status;
        responseParams.key = response.key;
        responseParams.value = response.value;
        var builder = new codec.MessageV1Builder(
            kLevelDBDatabase_IteratorSeekToFirst_Name,
            codec.align(LevelDBDatabase_IteratorSeekToFirst_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(LevelDBDatabase_IteratorSeekToFirst_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kLevelDBDatabase_IteratorSeekToLast_Name:
      var params = reader.decodeStruct(LevelDBDatabase_IteratorSeekToLast_Params);
      this.iteratorSeekToLast(params.iterator).then(function(response) {
        var responseParams =
            new LevelDBDatabase_IteratorSeekToLast_ResponseParams();
        responseParams.valid = response.valid;
        responseParams.status = response.status;
        responseParams.key = response.key;
        responseParams.value = response.value;
        var builder = new codec.MessageV1Builder(
            kLevelDBDatabase_IteratorSeekToLast_Name,
            codec.align(LevelDBDatabase_IteratorSeekToLast_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(LevelDBDatabase_IteratorSeekToLast_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kLevelDBDatabase_IteratorSeek_Name:
      var params = reader.decodeStruct(LevelDBDatabase_IteratorSeek_Params);
      this.iteratorSeek(params.iterator, params.target).then(function(response) {
        var responseParams =
            new LevelDBDatabase_IteratorSeek_ResponseParams();
        responseParams.valid = response.valid;
        responseParams.status = response.status;
        responseParams.key = response.key;
        responseParams.value = response.value;
        var builder = new codec.MessageV1Builder(
            kLevelDBDatabase_IteratorSeek_Name,
            codec.align(LevelDBDatabase_IteratorSeek_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(LevelDBDatabase_IteratorSeek_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kLevelDBDatabase_IteratorNext_Name:
      var params = reader.decodeStruct(LevelDBDatabase_IteratorNext_Params);
      this.iteratorNext(params.iterator).then(function(response) {
        var responseParams =
            new LevelDBDatabase_IteratorNext_ResponseParams();
        responseParams.valid = response.valid;
        responseParams.status = response.status;
        responseParams.key = response.key;
        responseParams.value = response.value;
        var builder = new codec.MessageV1Builder(
            kLevelDBDatabase_IteratorNext_Name,
            codec.align(LevelDBDatabase_IteratorNext_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(LevelDBDatabase_IteratorNext_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kLevelDBDatabase_IteratorPrev_Name:
      var params = reader.decodeStruct(LevelDBDatabase_IteratorPrev_Params);
      this.iteratorPrev(params.iterator).then(function(response) {
        var responseParams =
            new LevelDBDatabase_IteratorPrev_ResponseParams();
        responseParams.valid = response.valid;
        responseParams.status = response.status;
        responseParams.key = response.key;
        responseParams.value = response.value;
        var builder = new codec.MessageV1Builder(
            kLevelDBDatabase_IteratorPrev_Name,
            codec.align(LevelDBDatabase_IteratorPrev_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(LevelDBDatabase_IteratorPrev_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    default:
      return false;
    }
  };

  function validateLevelDBDatabaseRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kLevelDBDatabase_Put_Name:
        if (message.expectsResponse())
          paramsClass = LevelDBDatabase_Put_Params;
      break;
      case kLevelDBDatabase_Delete_Name:
        if (message.expectsResponse())
          paramsClass = LevelDBDatabase_Delete_Params;
      break;
      case kLevelDBDatabase_DeletePrefixed_Name:
        if (message.expectsResponse())
          paramsClass = LevelDBDatabase_DeletePrefixed_Params;
      break;
      case kLevelDBDatabase_Write_Name:
        if (message.expectsResponse())
          paramsClass = LevelDBDatabase_Write_Params;
      break;
      case kLevelDBDatabase_Get_Name:
        if (message.expectsResponse())
          paramsClass = LevelDBDatabase_Get_Params;
      break;
      case kLevelDBDatabase_GetPrefixed_Name:
        if (message.expectsResponse())
          paramsClass = LevelDBDatabase_GetPrefixed_Params;
      break;
      case kLevelDBDatabase_CopyPrefixed_Name:
        if (message.expectsResponse())
          paramsClass = LevelDBDatabase_CopyPrefixed_Params;
      break;
      case kLevelDBDatabase_GetSnapshot_Name:
        if (message.expectsResponse())
          paramsClass = LevelDBDatabase_GetSnapshot_Params;
      break;
      case kLevelDBDatabase_ReleaseSnapshot_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = LevelDBDatabase_ReleaseSnapshot_Params;
      break;
      case kLevelDBDatabase_GetFromSnapshot_Name:
        if (message.expectsResponse())
          paramsClass = LevelDBDatabase_GetFromSnapshot_Params;
      break;
      case kLevelDBDatabase_NewIterator_Name:
        if (message.expectsResponse())
          paramsClass = LevelDBDatabase_NewIterator_Params;
      break;
      case kLevelDBDatabase_NewIteratorFromSnapshot_Name:
        if (message.expectsResponse())
          paramsClass = LevelDBDatabase_NewIteratorFromSnapshot_Params;
      break;
      case kLevelDBDatabase_ReleaseIterator_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = LevelDBDatabase_ReleaseIterator_Params;
      break;
      case kLevelDBDatabase_IteratorSeekToFirst_Name:
        if (message.expectsResponse())
          paramsClass = LevelDBDatabase_IteratorSeekToFirst_Params;
      break;
      case kLevelDBDatabase_IteratorSeekToLast_Name:
        if (message.expectsResponse())
          paramsClass = LevelDBDatabase_IteratorSeekToLast_Params;
      break;
      case kLevelDBDatabase_IteratorSeek_Name:
        if (message.expectsResponse())
          paramsClass = LevelDBDatabase_IteratorSeek_Params;
      break;
      case kLevelDBDatabase_IteratorNext_Name:
        if (message.expectsResponse())
          paramsClass = LevelDBDatabase_IteratorNext_Params;
      break;
      case kLevelDBDatabase_IteratorPrev_Name:
        if (message.expectsResponse())
          paramsClass = LevelDBDatabase_IteratorPrev_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateLevelDBDatabaseResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kLevelDBDatabase_Put_Name:
        if (message.isResponse())
          paramsClass = LevelDBDatabase_Put_ResponseParams;
        break;
      case kLevelDBDatabase_Delete_Name:
        if (message.isResponse())
          paramsClass = LevelDBDatabase_Delete_ResponseParams;
        break;
      case kLevelDBDatabase_DeletePrefixed_Name:
        if (message.isResponse())
          paramsClass = LevelDBDatabase_DeletePrefixed_ResponseParams;
        break;
      case kLevelDBDatabase_Write_Name:
        if (message.isResponse())
          paramsClass = LevelDBDatabase_Write_ResponseParams;
        break;
      case kLevelDBDatabase_Get_Name:
        if (message.isResponse())
          paramsClass = LevelDBDatabase_Get_ResponseParams;
        break;
      case kLevelDBDatabase_GetPrefixed_Name:
        if (message.isResponse())
          paramsClass = LevelDBDatabase_GetPrefixed_ResponseParams;
        break;
      case kLevelDBDatabase_CopyPrefixed_Name:
        if (message.isResponse())
          paramsClass = LevelDBDatabase_CopyPrefixed_ResponseParams;
        break;
      case kLevelDBDatabase_GetSnapshot_Name:
        if (message.isResponse())
          paramsClass = LevelDBDatabase_GetSnapshot_ResponseParams;
        break;
      case kLevelDBDatabase_GetFromSnapshot_Name:
        if (message.isResponse())
          paramsClass = LevelDBDatabase_GetFromSnapshot_ResponseParams;
        break;
      case kLevelDBDatabase_NewIterator_Name:
        if (message.isResponse())
          paramsClass = LevelDBDatabase_NewIterator_ResponseParams;
        break;
      case kLevelDBDatabase_NewIteratorFromSnapshot_Name:
        if (message.isResponse())
          paramsClass = LevelDBDatabase_NewIteratorFromSnapshot_ResponseParams;
        break;
      case kLevelDBDatabase_IteratorSeekToFirst_Name:
        if (message.isResponse())
          paramsClass = LevelDBDatabase_IteratorSeekToFirst_ResponseParams;
        break;
      case kLevelDBDatabase_IteratorSeekToLast_Name:
        if (message.isResponse())
          paramsClass = LevelDBDatabase_IteratorSeekToLast_ResponseParams;
        break;
      case kLevelDBDatabase_IteratorSeek_Name:
        if (message.isResponse())
          paramsClass = LevelDBDatabase_IteratorSeek_ResponseParams;
        break;
      case kLevelDBDatabase_IteratorNext_Name:
        if (message.isResponse())
          paramsClass = LevelDBDatabase_IteratorNext_ResponseParams;
        break;
      case kLevelDBDatabase_IteratorPrev_Name:
        if (message.isResponse())
          paramsClass = LevelDBDatabase_IteratorPrev_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var LevelDBDatabase = {
    name: 'leveldb.mojom.LevelDBDatabase',
    kVersion: 0,
    ptrClass: LevelDBDatabasePtr,
    proxyClass: LevelDBDatabaseProxy,
    stubClass: LevelDBDatabaseStub,
    validateRequest: validateLevelDBDatabaseRequest,
    validateResponse: validateLevelDBDatabaseResponse,
    mojomId: 'components/services/leveldb/public/interfaces/leveldb.mojom',
    fuzzMethods: {
      put: {
        params: LevelDBDatabase_Put_Params,
      },
      delete: {
        params: LevelDBDatabase_Delete_Params,
      },
      deletePrefixed: {
        params: LevelDBDatabase_DeletePrefixed_Params,
      },
      write: {
        params: LevelDBDatabase_Write_Params,
      },
      get: {
        params: LevelDBDatabase_Get_Params,
      },
      getPrefixed: {
        params: LevelDBDatabase_GetPrefixed_Params,
      },
      copyPrefixed: {
        params: LevelDBDatabase_CopyPrefixed_Params,
      },
      getSnapshot: {
        params: LevelDBDatabase_GetSnapshot_Params,
      },
      releaseSnapshot: {
        params: LevelDBDatabase_ReleaseSnapshot_Params,
      },
      getFromSnapshot: {
        params: LevelDBDatabase_GetFromSnapshot_Params,
      },
      newIterator: {
        params: LevelDBDatabase_NewIterator_Params,
      },
      newIteratorFromSnapshot: {
        params: LevelDBDatabase_NewIteratorFromSnapshot_Params,
      },
      releaseIterator: {
        params: LevelDBDatabase_ReleaseIterator_Params,
      },
      iteratorSeekToFirst: {
        params: LevelDBDatabase_IteratorSeekToFirst_Params,
      },
      iteratorSeekToLast: {
        params: LevelDBDatabase_IteratorSeekToLast_Params,
      },
      iteratorSeek: {
        params: LevelDBDatabase_IteratorSeek_Params,
      },
      iteratorNext: {
        params: LevelDBDatabase_IteratorNext_Params,
      },
      iteratorPrev: {
        params: LevelDBDatabase_IteratorPrev_Params,
      },
    },
  };
  LevelDBDatabaseStub.prototype.validator = validateLevelDBDatabaseRequest;
  LevelDBDatabaseProxy.prototype.validator = validateLevelDBDatabaseResponse;
  exports.DatabaseError = DatabaseError;
  exports.BatchOperationType = BatchOperationType;
  exports.SharedReadCache = SharedReadCache;
  exports.BatchedOperation = BatchedOperation;
  exports.KeyValue = KeyValue;
  exports.OpenOptions = OpenOptions;
  exports.LevelDBService = LevelDBService;
  exports.LevelDBServicePtr = LevelDBServicePtr;
  exports.LevelDBServiceAssociatedPtr = LevelDBServiceAssociatedPtr;
  exports.LevelDBDatabase = LevelDBDatabase;
  exports.LevelDBDatabasePtr = LevelDBDatabasePtr;
  exports.LevelDBDatabaseAssociatedPtr = LevelDBDatabaseAssociatedPtr;
})();