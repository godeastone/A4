// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'content/common/indexed_db/indexed_db.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('indexedDb.mojom');
  var file_path$ =
      mojo.internal.exposeNamespace('mojoBase.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'mojo/public/mojom/base/file_path.mojom', '../../../mojo/public/mojom/base/file_path.mojom.js');
  }
  var string161$ =
      mojo.internal.exposeNamespace('mojoBase.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'mojo/public/mojom/base/string16.mojom', '../../../mojo/public/mojom/base/string16.mojom.js');
  }
  var string161$ =
      mojo.internal.exposeNamespace('mojoBase.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'mojo/public/mojom/base/string16.mojom', '../../../mojo/public/mojom/base/string16.mojom.js');
  }
  var time$ =
      mojo.internal.exposeNamespace('mojoBase.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'mojo/public/mojom/base/time.mojom', '../../../mojo/public/mojom/base/time.mojom.js');
  }
  var blob$ =
      mojo.internal.exposeNamespace('blink.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'third_party/blink/public/mojom/blob/blob.mojom', '../../../third_party/blink/public/mojom/blob/blob.mojom.js');
  }
  var origin$ =
      mojo.internal.exposeNamespace('url.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'url/mojom/origin.mojom', '../../../url/mojom/origin.mojom.js');
  }


  var CursorDirection = {};
  CursorDirection.Next = 0;
  CursorDirection.NextNoDuplicate = CursorDirection.Next + 1;
  CursorDirection.Prev = CursorDirection.NextNoDuplicate + 1;
  CursorDirection.PrevNoDuplicate = CursorDirection.Prev + 1;

  CursorDirection.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
      return true;
    }
    return false;
  };

  CursorDirection.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };
  var DataLoss = {};
  DataLoss.None = 0;
  DataLoss.Total = DataLoss.None + 1;

  DataLoss.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
      return true;
    }
    return false;
  };

  DataLoss.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };
  var DatalessKeyType = {};
  DatalessKeyType.Invalid = 0;
  DatalessKeyType.Null = DatalessKeyType.Invalid + 1;

  DatalessKeyType.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
      return true;
    }
    return false;
  };

  DatalessKeyType.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };
  var OperationType = {};
  OperationType.Add = 0;
  OperationType.Put = OperationType.Add + 1;
  OperationType.Delete = OperationType.Put + 1;
  OperationType.Clear = OperationType.Delete + 1;

  OperationType.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
      return true;
    }
    return false;
  };

  OperationType.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };
  var PutMode = {};
  PutMode.AddOrUpdate = 0;
  PutMode.AddOnly = PutMode.AddOrUpdate + 1;
  PutMode.CursorUpdate = PutMode.AddOnly + 1;

  PutMode.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    }
    return false;
  };

  PutMode.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };
  var TaskType = {};
  TaskType.Normal = 0;
  TaskType.Preemptive = TaskType.Normal + 1;

  TaskType.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
      return true;
    }
    return false;
  };

  TaskType.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };
  var TransactionMode = {};
  TransactionMode.ReadOnly = 0;
  TransactionMode.ReadWrite = TransactionMode.ReadOnly + 1;
  TransactionMode.VersionChange = TransactionMode.ReadWrite + 1;

  TransactionMode.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    }
    return false;
  };

  TransactionMode.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };
  var Status = {};
  Status.OK = 0;
  Status.NotFound = Status.OK + 1;
  Status.Corruption = Status.NotFound + 1;
  Status.NotSupported = Status.Corruption + 1;
  Status.InvalidArgument = Status.NotSupported + 1;
  Status.IOError = Status.InvalidArgument + 1;

  Status.isKnownEnumValue = function(value) {
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

  Status.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };

  function Key(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Key.prototype.initDefaults_ = function() {
    this.data = null;
  };
  Key.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Key.generate = function(generator_) {
    var generated = new Key;
    generated.data = generator_.generateUnion(indexedDb.mojom.KeyData, false);
    return generated;
  };

  Key.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.data = mutator_.mutateUnion(indexedDb.mojom.KeyData, false);
    }
    return this;
  };
  Key.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Key.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Key.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Key.validate = function(messageValidator, offset) {
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


    // validate Key.data
    err = messageValidator.validateUnion(offset + codec.kStructHeaderSize + 0, KeyData, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Key.encodedSize = codec.kStructHeaderSize + 16;

  Key.decode = function(decoder) {
    var packed;
    var val = new Key();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.data = decoder.decodeStruct(KeyData);
    return val;
  };

  Key.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Key.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(KeyData, val.data);
  };
  function KeyPath(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  KeyPath.prototype.initDefaults_ = function() {
    this.data = null;
  };
  KeyPath.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  KeyPath.generate = function(generator_) {
    var generated = new KeyPath;
    generated.data = generator_.generateUnion(indexedDb.mojom.KeyPathData, true);
    return generated;
  };

  KeyPath.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.data = mutator_.mutateUnion(indexedDb.mojom.KeyPathData, true);
    }
    return this;
  };
  KeyPath.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  KeyPath.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  KeyPath.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  KeyPath.validate = function(messageValidator, offset) {
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


    // validate KeyPath.data
    err = messageValidator.validateUnion(offset + codec.kStructHeaderSize + 0, KeyPathData, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  KeyPath.encodedSize = codec.kStructHeaderSize + 16;

  KeyPath.decode = function(decoder) {
    var packed;
    var val = new KeyPath();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.data = decoder.decodeStruct(KeyPathData);
    return val;
  };

  KeyPath.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(KeyPath.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(KeyPathData, val.data);
  };
  function KeyRange(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  KeyRange.prototype.initDefaults_ = function() {
    this.lower = null;
    this.upper = null;
    this.lowerOpen = false;
    this.upperOpen = false;
  };
  KeyRange.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  KeyRange.generate = function(generator_) {
    var generated = new KeyRange;
    generated.lower = generator_.generateStruct(indexedDb.mojom.Key, false);
    generated.upper = generator_.generateStruct(indexedDb.mojom.Key, false);
    generated.lowerOpen = generator_.generateBool();
    generated.upperOpen = generator_.generateBool();
    return generated;
  };

  KeyRange.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.lower = mutator_.mutateStruct(indexedDb.mojom.Key, false);
    }
    if (mutator_.chooseMutateField()) {
      this.upper = mutator_.mutateStruct(indexedDb.mojom.Key, false);
    }
    if (mutator_.chooseMutateField()) {
      this.lowerOpen = mutator_.mutateBool(this.lowerOpen);
    }
    if (mutator_.chooseMutateField()) {
      this.upperOpen = mutator_.mutateBool(this.upperOpen);
    }
    return this;
  };
  KeyRange.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  KeyRange.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  KeyRange.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  KeyRange.validate = function(messageValidator, offset) {
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


    // validate KeyRange.lower
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, Key, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate KeyRange.upper
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, Key, false);
    if (err !== validator.validationError.NONE)
        return err;



    return validator.validationError.NONE;
  };

  KeyRange.encodedSize = codec.kStructHeaderSize + 24;

  KeyRange.decode = function(decoder) {
    var packed;
    var val = new KeyRange();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.lower = decoder.decodeStructPointer(Key);
    val.upper = decoder.decodeStructPointer(Key);
    packed = decoder.readUint8();
    val.lowerOpen = (packed >> 0) & 1 ? true : false;
    val.upperOpen = (packed >> 1) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  KeyRange.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(KeyRange.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(Key, val.lower);
    encoder.encodeStructPointer(Key, val.upper);
    packed = 0;
    packed |= (val.lowerOpen & 1) << 0
    packed |= (val.upperOpen & 1) << 1
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function IndexMetadata(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  IndexMetadata.prototype.initDefaults_ = function() {
    this.id = 0;
    this.name = null;
    this.keyPath = null;
    this.unique = false;
    this.multiEntry = false;
  };
  IndexMetadata.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  IndexMetadata.generate = function(generator_) {
    var generated = new IndexMetadata;
    generated.id = generator_.generateInt64();
    generated.name = generator_.generateStruct(mojoBase.mojom.String16, false);
    generated.keyPath = generator_.generateStruct(indexedDb.mojom.KeyPath, false);
    generated.unique = generator_.generateBool();
    generated.multiEntry = generator_.generateBool();
    return generated;
  };

  IndexMetadata.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.id = mutator_.mutateInt64(this.id);
    }
    if (mutator_.chooseMutateField()) {
      this.name = mutator_.mutateStruct(mojoBase.mojom.String16, false);
    }
    if (mutator_.chooseMutateField()) {
      this.keyPath = mutator_.mutateStruct(indexedDb.mojom.KeyPath, false);
    }
    if (mutator_.chooseMutateField()) {
      this.unique = mutator_.mutateBool(this.unique);
    }
    if (mutator_.chooseMutateField()) {
      this.multiEntry = mutator_.mutateBool(this.multiEntry);
    }
    return this;
  };
  IndexMetadata.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  IndexMetadata.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  IndexMetadata.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  IndexMetadata.validate = function(messageValidator, offset) {
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



    // validate IndexMetadata.name
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, string161$.String16, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate IndexMetadata.keyPath
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, KeyPath, false);
    if (err !== validator.validationError.NONE)
        return err;



    return validator.validationError.NONE;
  };

  IndexMetadata.encodedSize = codec.kStructHeaderSize + 32;

  IndexMetadata.decode = function(decoder) {
    var packed;
    var val = new IndexMetadata();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.id = decoder.decodeStruct(codec.Int64);
    val.name = decoder.decodeStructPointer(string161$.String16);
    val.keyPath = decoder.decodeStructPointer(KeyPath);
    packed = decoder.readUint8();
    val.unique = (packed >> 0) & 1 ? true : false;
    val.multiEntry = (packed >> 1) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  IndexMetadata.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(IndexMetadata.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int64, val.id);
    encoder.encodeStructPointer(string161$.String16, val.name);
    encoder.encodeStructPointer(KeyPath, val.keyPath);
    packed = 0;
    packed |= (val.unique & 1) << 0
    packed |= (val.multiEntry & 1) << 1
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function ObjectStoreMetadata(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ObjectStoreMetadata.prototype.initDefaults_ = function() {
    this.id = 0;
    this.name = null;
    this.keyPath = null;
    this.autoIncrement = false;
    this.maxIndexId = 0;
    this.indexes = null;
  };
  ObjectStoreMetadata.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ObjectStoreMetadata.generate = function(generator_) {
    var generated = new ObjectStoreMetadata;
    generated.id = generator_.generateInt64();
    generated.name = generator_.generateStruct(mojoBase.mojom.String16, false);
    generated.keyPath = generator_.generateStruct(indexedDb.mojom.KeyPath, false);
    generated.autoIncrement = generator_.generateBool();
    generated.maxIndexId = generator_.generateInt64();
    generated.indexes = generator_.generateArray(function() {
      return generator_.generateStruct(indexedDb.mojom.IndexMetadata, false);
    });
    return generated;
  };

  ObjectStoreMetadata.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.id = mutator_.mutateInt64(this.id);
    }
    if (mutator_.chooseMutateField()) {
      this.name = mutator_.mutateStruct(mojoBase.mojom.String16, false);
    }
    if (mutator_.chooseMutateField()) {
      this.keyPath = mutator_.mutateStruct(indexedDb.mojom.KeyPath, false);
    }
    if (mutator_.chooseMutateField()) {
      this.autoIncrement = mutator_.mutateBool(this.autoIncrement);
    }
    if (mutator_.chooseMutateField()) {
      this.maxIndexId = mutator_.mutateInt64(this.maxIndexId);
    }
    if (mutator_.chooseMutateField()) {
      this.indexes = mutator_.mutateArray(this.indexes, function(val) {
        return mutator_.mutateStruct(indexedDb.mojom.IndexMetadata, false);
      });
    }
    return this;
  };
  ObjectStoreMetadata.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ObjectStoreMetadata.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ObjectStoreMetadata.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ObjectStoreMetadata.validate = function(messageValidator, offset) {
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



    // validate ObjectStoreMetadata.name
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, string161$.String16, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate ObjectStoreMetadata.keyPath
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, KeyPath, false);
    if (err !== validator.validationError.NONE)
        return err;




    // validate ObjectStoreMetadata.indexes
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 40, 8, new codec.PointerTo(IndexMetadata), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ObjectStoreMetadata.encodedSize = codec.kStructHeaderSize + 48;

  ObjectStoreMetadata.decode = function(decoder) {
    var packed;
    var val = new ObjectStoreMetadata();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.id = decoder.decodeStruct(codec.Int64);
    val.name = decoder.decodeStructPointer(string161$.String16);
    val.keyPath = decoder.decodeStructPointer(KeyPath);
    packed = decoder.readUint8();
    val.autoIncrement = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.maxIndexId = decoder.decodeStruct(codec.Int64);
    val.indexes = decoder.decodeArrayPointer(new codec.PointerTo(IndexMetadata));
    return val;
  };

  ObjectStoreMetadata.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ObjectStoreMetadata.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int64, val.id);
    encoder.encodeStructPointer(string161$.String16, val.name);
    encoder.encodeStructPointer(KeyPath, val.keyPath);
    packed = 0;
    packed |= (val.autoIncrement & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.Int64, val.maxIndexId);
    encoder.encodeArrayPointer(new codec.PointerTo(IndexMetadata), val.indexes);
  };
  function DatabaseMetadata(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  DatabaseMetadata.prototype.initDefaults_ = function() {
    this.id = 0;
    this.name = null;
    this.version = 0;
    this.maxObjectStoreId = 0;
    this.objectStores = null;
  };
  DatabaseMetadata.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  DatabaseMetadata.generate = function(generator_) {
    var generated = new DatabaseMetadata;
    generated.id = generator_.generateInt64();
    generated.name = generator_.generateStruct(mojoBase.mojom.String16, false);
    generated.version = generator_.generateInt64();
    generated.maxObjectStoreId = generator_.generateInt64();
    generated.objectStores = generator_.generateArray(function() {
      return generator_.generateStruct(indexedDb.mojom.ObjectStoreMetadata, false);
    });
    return generated;
  };

  DatabaseMetadata.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.id = mutator_.mutateInt64(this.id);
    }
    if (mutator_.chooseMutateField()) {
      this.name = mutator_.mutateStruct(mojoBase.mojom.String16, false);
    }
    if (mutator_.chooseMutateField()) {
      this.version = mutator_.mutateInt64(this.version);
    }
    if (mutator_.chooseMutateField()) {
      this.maxObjectStoreId = mutator_.mutateInt64(this.maxObjectStoreId);
    }
    if (mutator_.chooseMutateField()) {
      this.objectStores = mutator_.mutateArray(this.objectStores, function(val) {
        return mutator_.mutateStruct(indexedDb.mojom.ObjectStoreMetadata, false);
      });
    }
    return this;
  };
  DatabaseMetadata.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  DatabaseMetadata.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  DatabaseMetadata.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  DatabaseMetadata.validate = function(messageValidator, offset) {
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



    // validate DatabaseMetadata.name
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, string161$.String16, false);
    if (err !== validator.validationError.NONE)
        return err;




    // validate DatabaseMetadata.objectStores
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 32, 8, new codec.PointerTo(ObjectStoreMetadata), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  DatabaseMetadata.encodedSize = codec.kStructHeaderSize + 40;

  DatabaseMetadata.decode = function(decoder) {
    var packed;
    var val = new DatabaseMetadata();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.id = decoder.decodeStruct(codec.Int64);
    val.name = decoder.decodeStructPointer(string161$.String16);
    val.version = decoder.decodeStruct(codec.Int64);
    val.maxObjectStoreId = decoder.decodeStruct(codec.Int64);
    val.objectStores = decoder.decodeArrayPointer(new codec.PointerTo(ObjectStoreMetadata));
    return val;
  };

  DatabaseMetadata.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(DatabaseMetadata.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int64, val.id);
    encoder.encodeStructPointer(string161$.String16, val.name);
    encoder.encodeStruct(codec.Int64, val.version);
    encoder.encodeStruct(codec.Int64, val.maxObjectStoreId);
    encoder.encodeArrayPointer(new codec.PointerTo(ObjectStoreMetadata), val.objectStores);
  };
  function IndexKeys(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  IndexKeys.prototype.initDefaults_ = function() {
    this.indexId = 0;
    this.indexKeys = null;
  };
  IndexKeys.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  IndexKeys.generate = function(generator_) {
    var generated = new IndexKeys;
    generated.indexId = generator_.generateInt64();
    generated.indexKeys = generator_.generateArray(function() {
      return generator_.generateStruct(indexedDb.mojom.Key, false);
    });
    return generated;
  };

  IndexKeys.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.indexId = mutator_.mutateInt64(this.indexId);
    }
    if (mutator_.chooseMutateField()) {
      this.indexKeys = mutator_.mutateArray(this.indexKeys, function(val) {
        return mutator_.mutateStruct(indexedDb.mojom.Key, false);
      });
    }
    return this;
  };
  IndexKeys.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  IndexKeys.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  IndexKeys.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  IndexKeys.validate = function(messageValidator, offset) {
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



    // validate IndexKeys.indexKeys
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 8, new codec.PointerTo(Key), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  IndexKeys.encodedSize = codec.kStructHeaderSize + 16;

  IndexKeys.decode = function(decoder) {
    var packed;
    var val = new IndexKeys();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.indexId = decoder.decodeStruct(codec.Int64);
    val.indexKeys = decoder.decodeArrayPointer(new codec.PointerTo(Key));
    return val;
  };

  IndexKeys.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(IndexKeys.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int64, val.indexId);
    encoder.encodeArrayPointer(new codec.PointerTo(Key), val.indexKeys);
  };
  function FileInfo(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  FileInfo.prototype.initDefaults_ = function() {
    this.path = null;
    this.name = null;
    this.lastModified = null;
  };
  FileInfo.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  FileInfo.generate = function(generator_) {
    var generated = new FileInfo;
    generated.path = generator_.generateStruct(mojoBase.mojom.FilePath, false);
    generated.name = generator_.generateStruct(mojoBase.mojom.String16, false);
    generated.lastModified = generator_.generateStruct(mojoBase.mojom.Time, false);
    return generated;
  };

  FileInfo.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.path = mutator_.mutateStruct(mojoBase.mojom.FilePath, false);
    }
    if (mutator_.chooseMutateField()) {
      this.name = mutator_.mutateStruct(mojoBase.mojom.String16, false);
    }
    if (mutator_.chooseMutateField()) {
      this.lastModified = mutator_.mutateStruct(mojoBase.mojom.Time, false);
    }
    return this;
  };
  FileInfo.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  FileInfo.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  FileInfo.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  FileInfo.validate = function(messageValidator, offset) {
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


    // validate FileInfo.path
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, file_path$.FilePath, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate FileInfo.name
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, string161$.String16, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate FileInfo.lastModified
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, time$.Time, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  FileInfo.encodedSize = codec.kStructHeaderSize + 24;

  FileInfo.decode = function(decoder) {
    var packed;
    var val = new FileInfo();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.path = decoder.decodeStructPointer(file_path$.FilePath);
    val.name = decoder.decodeStructPointer(string161$.String16);
    val.lastModified = decoder.decodeStructPointer(time$.Time);
    return val;
  };

  FileInfo.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(FileInfo.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(file_path$.FilePath, val.path);
    encoder.encodeStructPointer(string161$.String16, val.name);
    encoder.encodeStructPointer(time$.Time, val.lastModified);
  };
  function BlobInfo(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  BlobInfo.prototype.initDefaults_ = function() {
    this.blob = new blob$.BlobPtr();
    this.uuid = null;
    this.mimeType = null;
    this.size = 0;
    this.file = null;
  };
  BlobInfo.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  BlobInfo.generate = function(generator_) {
    var generated = new BlobInfo;
    generated.blob = generator_.generateInterface("blink.mojom.Blob", false);
    generated.uuid = generator_.generateString(false);
    generated.mimeType = generator_.generateStruct(mojoBase.mojom.String16, false);
    generated.size = generator_.generateInt64();
    generated.file = generator_.generateStruct(indexedDb.mojom.FileInfo, true);
    return generated;
  };

  BlobInfo.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.blob = mutator_.mutateInterface(this.blob, "blink.mojom.Blob", false);
    }
    if (mutator_.chooseMutateField()) {
      this.uuid = mutator_.mutateString(this.uuid, false);
    }
    if (mutator_.chooseMutateField()) {
      this.mimeType = mutator_.mutateStruct(mojoBase.mojom.String16, false);
    }
    if (mutator_.chooseMutateField()) {
      this.size = mutator_.mutateInt64(this.size);
    }
    if (mutator_.chooseMutateField()) {
      this.file = mutator_.mutateStruct(indexedDb.mojom.FileInfo, true);
    }
    return this;
  };
  BlobInfo.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.blob !== null) {
      Array.prototype.push.apply(handles, ["blink.mojom.BlobPtr"]);
    }
    return handles;
  };

  BlobInfo.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  BlobInfo.prototype.setHandlesInternal_ = function(handles, idx) {
    this.blob = handles[idx++];;
    return idx;
  };

  BlobInfo.validate = function(messageValidator, offset) {
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


    // validate BlobInfo.blob
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 0, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate BlobInfo.uuid
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate BlobInfo.mimeType
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, string161$.String16, false);
    if (err !== validator.validationError.NONE)
        return err;



    // validate BlobInfo.file
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 32, FileInfo, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  BlobInfo.encodedSize = codec.kStructHeaderSize + 40;

  BlobInfo.decode = function(decoder) {
    var packed;
    var val = new BlobInfo();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.blob = decoder.decodeStruct(new codec.Interface(blob$.BlobPtr));
    val.uuid = decoder.decodeStruct(codec.String);
    val.mimeType = decoder.decodeStructPointer(string161$.String16);
    val.size = decoder.decodeStruct(codec.Int64);
    val.file = decoder.decodeStructPointer(FileInfo);
    return val;
  };

  BlobInfo.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(BlobInfo.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(new codec.Interface(blob$.BlobPtr), val.blob);
    encoder.encodeStruct(codec.String, val.uuid);
    encoder.encodeStructPointer(string161$.String16, val.mimeType);
    encoder.encodeStruct(codec.Int64, val.size);
    encoder.encodeStructPointer(FileInfo, val.file);
  };
  function Value(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Value.prototype.initDefaults_ = function() {
    this.bits = null;
    this.blobOrFileInfo = null;
  };
  Value.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Value.generate = function(generator_) {
    var generated = new Value;
    generated.bits = generator_.generateString(false);
    generated.blobOrFileInfo = generator_.generateArray(function() {
      return generator_.generateStruct(indexedDb.mojom.BlobInfo, false);
    });
    return generated;
  };

  Value.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.bits = mutator_.mutateString(this.bits, false);
    }
    if (mutator_.chooseMutateField()) {
      this.blobOrFileInfo = mutator_.mutateArray(this.blobOrFileInfo, function(val) {
        return mutator_.mutateStruct(indexedDb.mojom.BlobInfo, false);
      });
    }
    return this;
  };
  Value.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.blobOrFileInfo !== null) {
      Array.prototype.push.apply(handles, [].concat.apply([], this.blobOrFileInfo.map(function(val) {
        if (val) {
          return val.getHandleDeps();
        }
        return [];
      })));
    }
    return handles;
  };

  Value.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Value.prototype.setHandlesInternal_ = function(handles, idx) {
    this.blobOrFileInfo.forEach(function(val) {
      idx = val.setHandlesInternal_(handles, idx);
    });
    return idx;
  };

  Value.validate = function(messageValidator, offset) {
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


    // validate Value.bits
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate Value.blobOrFileInfo
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 8, new codec.PointerTo(BlobInfo), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Value.encodedSize = codec.kStructHeaderSize + 16;

  Value.decode = function(decoder) {
    var packed;
    var val = new Value();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.bits = decoder.decodeStruct(codec.String);
    val.blobOrFileInfo = decoder.decodeArrayPointer(new codec.PointerTo(BlobInfo));
    return val;
  };

  Value.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Value.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.bits);
    encoder.encodeArrayPointer(new codec.PointerTo(BlobInfo), val.blobOrFileInfo);
  };
  function ReturnValue(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ReturnValue.prototype.initDefaults_ = function() {
    this.value = null;
    this.primaryKey = null;
    this.keyPath = null;
  };
  ReturnValue.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ReturnValue.generate = function(generator_) {
    var generated = new ReturnValue;
    generated.value = generator_.generateStruct(indexedDb.mojom.Value, false);
    generated.primaryKey = generator_.generateStruct(indexedDb.mojom.Key, false);
    generated.keyPath = generator_.generateStruct(indexedDb.mojom.KeyPath, false);
    return generated;
  };

  ReturnValue.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.value = mutator_.mutateStruct(indexedDb.mojom.Value, false);
    }
    if (mutator_.chooseMutateField()) {
      this.primaryKey = mutator_.mutateStruct(indexedDb.mojom.Key, false);
    }
    if (mutator_.chooseMutateField()) {
      this.keyPath = mutator_.mutateStruct(indexedDb.mojom.KeyPath, false);
    }
    return this;
  };
  ReturnValue.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.value !== null) {
      Array.prototype.push.apply(handles, this.value.getHandleDeps());
    }
    return handles;
  };

  ReturnValue.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ReturnValue.prototype.setHandlesInternal_ = function(handles, idx) {
    idx = this.value.setHandlesInternal_(handles, idx);
    return idx;
  };

  ReturnValue.validate = function(messageValidator, offset) {
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


    // validate ReturnValue.value
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, Value, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate ReturnValue.primaryKey
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, Key, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate ReturnValue.keyPath
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, KeyPath, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ReturnValue.encodedSize = codec.kStructHeaderSize + 24;

  ReturnValue.decode = function(decoder) {
    var packed;
    var val = new ReturnValue();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.value = decoder.decodeStructPointer(Value);
    val.primaryKey = decoder.decodeStructPointer(Key);
    val.keyPath = decoder.decodeStructPointer(KeyPath);
    return val;
  };

  ReturnValue.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ReturnValue.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(Value, val.value);
    encoder.encodeStructPointer(Key, val.primaryKey);
    encoder.encodeStructPointer(KeyPath, val.keyPath);
  };
  function Observation(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Observation.prototype.initDefaults_ = function() {
    this.objectStoreId = 0;
    this.type = 0;
    this.keyRange = null;
    this.value = null;
  };
  Observation.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Observation.generate = function(generator_) {
    var generated = new Observation;
    generated.objectStoreId = generator_.generateInt64();
    generated.type = generator_.generateEnum(0, 3);
    generated.keyRange = generator_.generateStruct(indexedDb.mojom.KeyRange, false);
    generated.value = generator_.generateStruct(indexedDb.mojom.Value, true);
    return generated;
  };

  Observation.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.objectStoreId = mutator_.mutateInt64(this.objectStoreId);
    }
    if (mutator_.chooseMutateField()) {
      this.type = mutator_.mutateEnum(this.type, 0, 3);
    }
    if (mutator_.chooseMutateField()) {
      this.keyRange = mutator_.mutateStruct(indexedDb.mojom.KeyRange, false);
    }
    if (mutator_.chooseMutateField()) {
      this.value = mutator_.mutateStruct(indexedDb.mojom.Value, true);
    }
    return this;
  };
  Observation.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.value !== null) {
      Array.prototype.push.apply(handles, this.value.getHandleDeps());
    }
    return handles;
  };

  Observation.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Observation.prototype.setHandlesInternal_ = function(handles, idx) {
    idx = this.value.setHandlesInternal_(handles, idx);
    return idx;
  };

  Observation.validate = function(messageValidator, offset) {
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



    // validate Observation.type
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 8, OperationType);
    if (err !== validator.validationError.NONE)
        return err;


    // validate Observation.keyRange
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, KeyRange, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate Observation.value
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 24, Value, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Observation.encodedSize = codec.kStructHeaderSize + 32;

  Observation.decode = function(decoder) {
    var packed;
    var val = new Observation();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.objectStoreId = decoder.decodeStruct(codec.Int64);
    val.type = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.keyRange = decoder.decodeStructPointer(KeyRange);
    val.value = decoder.decodeStructPointer(Value);
    return val;
  };

  Observation.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Observation.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int64, val.objectStoreId);
    encoder.encodeStruct(codec.Int32, val.type);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(KeyRange, val.keyRange);
    encoder.encodeStructPointer(Value, val.value);
  };
  function ObserverTransaction(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ObserverTransaction.prototype.initDefaults_ = function() {
    this.id = 0;
    this.scope = null;
  };
  ObserverTransaction.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ObserverTransaction.generate = function(generator_) {
    var generated = new ObserverTransaction;
    generated.id = generator_.generateInt64();
    generated.scope = generator_.generateArray(function() {
      return generator_.generateInt64();
    });
    return generated;
  };

  ObserverTransaction.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.id = mutator_.mutateInt64(this.id);
    }
    if (mutator_.chooseMutateField()) {
      this.scope = mutator_.mutateArray(this.scope, function(val) {
        return mutator_.mutateInt64(val);
      });
    }
    return this;
  };
  ObserverTransaction.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ObserverTransaction.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ObserverTransaction.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ObserverTransaction.validate = function(messageValidator, offset) {
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



    // validate ObserverTransaction.scope
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 8, codec.Int64, false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ObserverTransaction.encodedSize = codec.kStructHeaderSize + 16;

  ObserverTransaction.decode = function(decoder) {
    var packed;
    var val = new ObserverTransaction();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.id = decoder.decodeStruct(codec.Int64);
    val.scope = decoder.decodeArrayPointer(codec.Int64);
    return val;
  };

  ObserverTransaction.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ObserverTransaction.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int64, val.id);
    encoder.encodeArrayPointer(codec.Int64, val.scope);
  };
  function ObserverChanges(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ObserverChanges.prototype.initDefaults_ = function() {
    this.observationIndexMap = null;
    this.transactionMap = null;
    this.observations = null;
  };
  ObserverChanges.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ObserverChanges.generate = function(generator_) {
    var generated = new ObserverChanges;
    generated.observationIndexMap = generator_.generateMap(
      function() {
        return generator_.generateInt32();
      },
      function() {
        return generator_.generateArray(function() {
          return generator_.generateInt32();
        });
      });
    generated.transactionMap = generator_.generateMap(
      function() {
        return generator_.generateInt32();
      },
      function() {
        return generator_.generateStruct(indexedDb.mojom.ObserverTransaction, false);
      });
    generated.observations = generator_.generateArray(function() {
      return generator_.generateStruct(indexedDb.mojom.Observation, false);
    });
    return generated;
  };

  ObserverChanges.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.observationIndexMap = mutator_.mutateMap(this.observationIndexMap,
        function(val) {
          return mutator_.mutateInt32(val);
        },
        function(val) {
          return mutator_.mutateArray(val, function(val) {
            return mutator_.mutateInt32(val);
          });
        });
    }
    if (mutator_.chooseMutateField()) {
      this.transactionMap = mutator_.mutateMap(this.transactionMap,
        function(val) {
          return mutator_.mutateInt32(val);
        },
        function(val) {
          return mutator_.mutateStruct(indexedDb.mojom.ObserverTransaction, false);
        });
    }
    if (mutator_.chooseMutateField()) {
      this.observations = mutator_.mutateArray(this.observations, function(val) {
        return mutator_.mutateStruct(indexedDb.mojom.Observation, false);
      });
    }
    return this;
  };
  ObserverChanges.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.observations !== null) {
      Array.prototype.push.apply(handles, [].concat.apply([], this.observations.map(function(val) {
        if (val) {
          return val.getHandleDeps();
        }
        return [];
      })));
    }
    return handles;
  };

  ObserverChanges.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ObserverChanges.prototype.setHandlesInternal_ = function(handles, idx) {
    this.observations.forEach(function(val) {
      idx = val.setHandlesInternal_(handles, idx);
    });
    return idx;
  };

  ObserverChanges.validate = function(messageValidator, offset) {
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


    // validate ObserverChanges.observationIndexMap
    err = messageValidator.validateMapPointer(offset + codec.kStructHeaderSize + 0, false, codec.Int32, new codec.ArrayOf(codec.Int32), false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate ObserverChanges.transactionMap
    err = messageValidator.validateMapPointer(offset + codec.kStructHeaderSize + 8, false, codec.Int32, new codec.PointerTo(ObserverTransaction), false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate ObserverChanges.observations
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 16, 8, new codec.PointerTo(Observation), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ObserverChanges.encodedSize = codec.kStructHeaderSize + 24;

  ObserverChanges.decode = function(decoder) {
    var packed;
    var val = new ObserverChanges();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.observationIndexMap = decoder.decodeMapPointer(codec.Int32, new codec.ArrayOf(codec.Int32));
    val.transactionMap = decoder.decodeMapPointer(codec.Int32, new codec.PointerTo(ObserverTransaction));
    val.observations = decoder.decodeArrayPointer(new codec.PointerTo(Observation));
    return val;
  };

  ObserverChanges.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ObserverChanges.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeMapPointer(codec.Int32, new codec.ArrayOf(codec.Int32), val.observationIndexMap);
    encoder.encodeMapPointer(codec.Int32, new codec.PointerTo(ObserverTransaction), val.transactionMap);
    encoder.encodeArrayPointer(new codec.PointerTo(Observation), val.observations);
  };
  function Callbacks_Error_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Callbacks_Error_Params.prototype.initDefaults_ = function() {
    this.code = 0;
    this.message = null;
  };
  Callbacks_Error_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Callbacks_Error_Params.generate = function(generator_) {
    var generated = new Callbacks_Error_Params;
    generated.code = generator_.generateInt32();
    generated.message = generator_.generateStruct(mojoBase.mojom.String16, false);
    return generated;
  };

  Callbacks_Error_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.code = mutator_.mutateInt32(this.code);
    }
    if (mutator_.chooseMutateField()) {
      this.message = mutator_.mutateStruct(mojoBase.mojom.String16, false);
    }
    return this;
  };
  Callbacks_Error_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Callbacks_Error_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Callbacks_Error_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Callbacks_Error_Params.validate = function(messageValidator, offset) {
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



    // validate Callbacks_Error_Params.message
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, string161$.String16, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Callbacks_Error_Params.encodedSize = codec.kStructHeaderSize + 16;

  Callbacks_Error_Params.decode = function(decoder) {
    var packed;
    var val = new Callbacks_Error_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.code = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.message = decoder.decodeStructPointer(string161$.String16);
    return val;
  };

  Callbacks_Error_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Callbacks_Error_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.code);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(string161$.String16, val.message);
  };
  function Callbacks_SuccessStringList_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Callbacks_SuccessStringList_Params.prototype.initDefaults_ = function() {
    this.value = null;
  };
  Callbacks_SuccessStringList_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Callbacks_SuccessStringList_Params.generate = function(generator_) {
    var generated = new Callbacks_SuccessStringList_Params;
    generated.value = generator_.generateArray(function() {
      return generator_.generateStruct(mojoBase.mojom.String16, false);
    });
    return generated;
  };

  Callbacks_SuccessStringList_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.value = mutator_.mutateArray(this.value, function(val) {
        return mutator_.mutateStruct(mojoBase.mojom.String16, false);
      });
    }
    return this;
  };
  Callbacks_SuccessStringList_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Callbacks_SuccessStringList_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Callbacks_SuccessStringList_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Callbacks_SuccessStringList_Params.validate = function(messageValidator, offset) {
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


    // validate Callbacks_SuccessStringList_Params.value
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 8, new codec.PointerTo(string161$.String16), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Callbacks_SuccessStringList_Params.encodedSize = codec.kStructHeaderSize + 8;

  Callbacks_SuccessStringList_Params.decode = function(decoder) {
    var packed;
    var val = new Callbacks_SuccessStringList_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.value = decoder.decodeArrayPointer(new codec.PointerTo(string161$.String16));
    return val;
  };

  Callbacks_SuccessStringList_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Callbacks_SuccessStringList_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(new codec.PointerTo(string161$.String16), val.value);
  };
  function Callbacks_Blocked_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Callbacks_Blocked_Params.prototype.initDefaults_ = function() {
    this.existingVersion = 0;
  };
  Callbacks_Blocked_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Callbacks_Blocked_Params.generate = function(generator_) {
    var generated = new Callbacks_Blocked_Params;
    generated.existingVersion = generator_.generateInt64();
    return generated;
  };

  Callbacks_Blocked_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.existingVersion = mutator_.mutateInt64(this.existingVersion);
    }
    return this;
  };
  Callbacks_Blocked_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Callbacks_Blocked_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Callbacks_Blocked_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Callbacks_Blocked_Params.validate = function(messageValidator, offset) {
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

  Callbacks_Blocked_Params.encodedSize = codec.kStructHeaderSize + 8;

  Callbacks_Blocked_Params.decode = function(decoder) {
    var packed;
    var val = new Callbacks_Blocked_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.existingVersion = decoder.decodeStruct(codec.Int64);
    return val;
  };

  Callbacks_Blocked_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Callbacks_Blocked_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int64, val.existingVersion);
  };
  function Callbacks_UpgradeNeeded_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Callbacks_UpgradeNeeded_Params.prototype.initDefaults_ = function() {
    this.database = new associatedBindings.AssociatedInterfacePtrInfo();
    this.oldVersion = 0;
    this.dataLoss = 0;
    this.dataLossMessage = null;
    this.dbMetadata = null;
  };
  Callbacks_UpgradeNeeded_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Callbacks_UpgradeNeeded_Params.generate = function(generator_) {
    var generated = new Callbacks_UpgradeNeeded_Params;
    generated.database = generator_.generateAssociatedInterface("indexedDb.mojom.Database", false);
    generated.oldVersion = generator_.generateInt64();
    generated.dataLoss = generator_.generateEnum(0, 1);
    generated.dataLossMessage = generator_.generateString(false);
    generated.dbMetadata = generator_.generateStruct(indexedDb.mojom.DatabaseMetadata, false);
    return generated;
  };

  Callbacks_UpgradeNeeded_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.database = mutator_.mutateAssociatedInterface(this.database, "indexedDb.mojom.Database", false);
    }
    if (mutator_.chooseMutateField()) {
      this.oldVersion = mutator_.mutateInt64(this.oldVersion);
    }
    if (mutator_.chooseMutateField()) {
      this.dataLoss = mutator_.mutateEnum(this.dataLoss, 0, 1);
    }
    if (mutator_.chooseMutateField()) {
      this.dataLossMessage = mutator_.mutateString(this.dataLossMessage, false);
    }
    if (mutator_.chooseMutateField()) {
      this.dbMetadata = mutator_.mutateStruct(indexedDb.mojom.DatabaseMetadata, false);
    }
    return this;
  };
  Callbacks_UpgradeNeeded_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.database !== null) {
      Array.prototype.push.apply(handles, ["indexedDb.mojom.DatabaseAssociatedPtr"]);
    }
    return handles;
  };

  Callbacks_UpgradeNeeded_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Callbacks_UpgradeNeeded_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.database = handles[idx++];;
    return idx;
  };

  Callbacks_UpgradeNeeded_Params.validate = function(messageValidator, offset) {
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


    // validate Callbacks_UpgradeNeeded_Params.database
    err = messageValidator.validateAssociatedInterface(offset + codec.kStructHeaderSize + 0, false);
    if (err !== validator.validationError.NONE)
        return err;



    // validate Callbacks_UpgradeNeeded_Params.dataLoss
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 16, DataLoss);
    if (err !== validator.validationError.NONE)
        return err;


    // validate Callbacks_UpgradeNeeded_Params.dataLossMessage
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 24, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate Callbacks_UpgradeNeeded_Params.dbMetadata
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 32, DatabaseMetadata, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Callbacks_UpgradeNeeded_Params.encodedSize = codec.kStructHeaderSize + 40;

  Callbacks_UpgradeNeeded_Params.decode = function(decoder) {
    var packed;
    var val = new Callbacks_UpgradeNeeded_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.database = decoder.decodeStruct(codec.AssociatedInterfacePtrInfo);
    val.oldVersion = decoder.decodeStruct(codec.Int64);
    val.dataLoss = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.dataLossMessage = decoder.decodeStruct(codec.String);
    val.dbMetadata = decoder.decodeStructPointer(DatabaseMetadata);
    return val;
  };

  Callbacks_UpgradeNeeded_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Callbacks_UpgradeNeeded_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.AssociatedInterfacePtrInfo, val.database);
    encoder.encodeStruct(codec.Int64, val.oldVersion);
    encoder.encodeStruct(codec.Int32, val.dataLoss);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.String, val.dataLossMessage);
    encoder.encodeStructPointer(DatabaseMetadata, val.dbMetadata);
  };
  function Callbacks_SuccessDatabase_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Callbacks_SuccessDatabase_Params.prototype.initDefaults_ = function() {
    this.database = new associatedBindings.AssociatedInterfacePtrInfo();
    this.metadata = null;
  };
  Callbacks_SuccessDatabase_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Callbacks_SuccessDatabase_Params.generate = function(generator_) {
    var generated = new Callbacks_SuccessDatabase_Params;
    generated.database = generator_.generateAssociatedInterface("indexedDb.mojom.Database", true);
    generated.metadata = generator_.generateStruct(indexedDb.mojom.DatabaseMetadata, false);
    return generated;
  };

  Callbacks_SuccessDatabase_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.database = mutator_.mutateAssociatedInterface(this.database, "indexedDb.mojom.Database", true);
    }
    if (mutator_.chooseMutateField()) {
      this.metadata = mutator_.mutateStruct(indexedDb.mojom.DatabaseMetadata, false);
    }
    return this;
  };
  Callbacks_SuccessDatabase_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.database !== null) {
      Array.prototype.push.apply(handles, ["indexedDb.mojom.DatabaseAssociatedPtr"]);
    }
    return handles;
  };

  Callbacks_SuccessDatabase_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Callbacks_SuccessDatabase_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.database = handles[idx++];;
    return idx;
  };

  Callbacks_SuccessDatabase_Params.validate = function(messageValidator, offset) {
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


    // validate Callbacks_SuccessDatabase_Params.database
    err = messageValidator.validateAssociatedInterface(offset + codec.kStructHeaderSize + 0, true);
    if (err !== validator.validationError.NONE)
        return err;


    // validate Callbacks_SuccessDatabase_Params.metadata
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, DatabaseMetadata, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Callbacks_SuccessDatabase_Params.encodedSize = codec.kStructHeaderSize + 16;

  Callbacks_SuccessDatabase_Params.decode = function(decoder) {
    var packed;
    var val = new Callbacks_SuccessDatabase_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.database = decoder.decodeStruct(codec.NullableAssociatedInterfacePtrInfo);
    val.metadata = decoder.decodeStructPointer(DatabaseMetadata);
    return val;
  };

  Callbacks_SuccessDatabase_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Callbacks_SuccessDatabase_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.NullableAssociatedInterfacePtrInfo, val.database);
    encoder.encodeStructPointer(DatabaseMetadata, val.metadata);
  };
  function Callbacks_SuccessCursor_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Callbacks_SuccessCursor_Params.prototype.initDefaults_ = function() {
    this.cursor = new associatedBindings.AssociatedInterfacePtrInfo();
    this.key = null;
    this.primaryKey = null;
    this.value = null;
  };
  Callbacks_SuccessCursor_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Callbacks_SuccessCursor_Params.generate = function(generator_) {
    var generated = new Callbacks_SuccessCursor_Params;
    generated.cursor = generator_.generateAssociatedInterface("indexedDb.mojom.Cursor", false);
    generated.key = generator_.generateStruct(indexedDb.mojom.Key, false);
    generated.primaryKey = generator_.generateStruct(indexedDb.mojom.Key, false);
    generated.value = generator_.generateStruct(indexedDb.mojom.Value, true);
    return generated;
  };

  Callbacks_SuccessCursor_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.cursor = mutator_.mutateAssociatedInterface(this.cursor, "indexedDb.mojom.Cursor", false);
    }
    if (mutator_.chooseMutateField()) {
      this.key = mutator_.mutateStruct(indexedDb.mojom.Key, false);
    }
    if (mutator_.chooseMutateField()) {
      this.primaryKey = mutator_.mutateStruct(indexedDb.mojom.Key, false);
    }
    if (mutator_.chooseMutateField()) {
      this.value = mutator_.mutateStruct(indexedDb.mojom.Value, true);
    }
    return this;
  };
  Callbacks_SuccessCursor_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.cursor !== null) {
      Array.prototype.push.apply(handles, ["indexedDb.mojom.CursorAssociatedPtr"]);
    }
    if (this.value !== null) {
      Array.prototype.push.apply(handles, this.value.getHandleDeps());
    }
    return handles;
  };

  Callbacks_SuccessCursor_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Callbacks_SuccessCursor_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.cursor = handles[idx++];;
    idx = this.value.setHandlesInternal_(handles, idx);
    return idx;
  };

  Callbacks_SuccessCursor_Params.validate = function(messageValidator, offset) {
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


    // validate Callbacks_SuccessCursor_Params.cursor
    err = messageValidator.validateAssociatedInterface(offset + codec.kStructHeaderSize + 0, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate Callbacks_SuccessCursor_Params.key
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, Key, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate Callbacks_SuccessCursor_Params.primaryKey
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, Key, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate Callbacks_SuccessCursor_Params.value
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 24, Value, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Callbacks_SuccessCursor_Params.encodedSize = codec.kStructHeaderSize + 32;

  Callbacks_SuccessCursor_Params.decode = function(decoder) {
    var packed;
    var val = new Callbacks_SuccessCursor_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.cursor = decoder.decodeStruct(codec.AssociatedInterfacePtrInfo);
    val.key = decoder.decodeStructPointer(Key);
    val.primaryKey = decoder.decodeStructPointer(Key);
    val.value = decoder.decodeStructPointer(Value);
    return val;
  };

  Callbacks_SuccessCursor_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Callbacks_SuccessCursor_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.AssociatedInterfacePtrInfo, val.cursor);
    encoder.encodeStructPointer(Key, val.key);
    encoder.encodeStructPointer(Key, val.primaryKey);
    encoder.encodeStructPointer(Value, val.value);
  };
  function Callbacks_SuccessValue_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Callbacks_SuccessValue_Params.prototype.initDefaults_ = function() {
    this.value = null;
  };
  Callbacks_SuccessValue_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Callbacks_SuccessValue_Params.generate = function(generator_) {
    var generated = new Callbacks_SuccessValue_Params;
    generated.value = generator_.generateStruct(indexedDb.mojom.ReturnValue, true);
    return generated;
  };

  Callbacks_SuccessValue_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.value = mutator_.mutateStruct(indexedDb.mojom.ReturnValue, true);
    }
    return this;
  };
  Callbacks_SuccessValue_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.value !== null) {
      Array.prototype.push.apply(handles, this.value.getHandleDeps());
    }
    return handles;
  };

  Callbacks_SuccessValue_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Callbacks_SuccessValue_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    idx = this.value.setHandlesInternal_(handles, idx);
    return idx;
  };

  Callbacks_SuccessValue_Params.validate = function(messageValidator, offset) {
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


    // validate Callbacks_SuccessValue_Params.value
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, ReturnValue, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Callbacks_SuccessValue_Params.encodedSize = codec.kStructHeaderSize + 8;

  Callbacks_SuccessValue_Params.decode = function(decoder) {
    var packed;
    var val = new Callbacks_SuccessValue_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.value = decoder.decodeStructPointer(ReturnValue);
    return val;
  };

  Callbacks_SuccessValue_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Callbacks_SuccessValue_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(ReturnValue, val.value);
  };
  function Callbacks_SuccessCursorContinue_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Callbacks_SuccessCursorContinue_Params.prototype.initDefaults_ = function() {
    this.key = null;
    this.primaryKey = null;
    this.value = null;
  };
  Callbacks_SuccessCursorContinue_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Callbacks_SuccessCursorContinue_Params.generate = function(generator_) {
    var generated = new Callbacks_SuccessCursorContinue_Params;
    generated.key = generator_.generateStruct(indexedDb.mojom.Key, false);
    generated.primaryKey = generator_.generateStruct(indexedDb.mojom.Key, false);
    generated.value = generator_.generateStruct(indexedDb.mojom.Value, true);
    return generated;
  };

  Callbacks_SuccessCursorContinue_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.key = mutator_.mutateStruct(indexedDb.mojom.Key, false);
    }
    if (mutator_.chooseMutateField()) {
      this.primaryKey = mutator_.mutateStruct(indexedDb.mojom.Key, false);
    }
    if (mutator_.chooseMutateField()) {
      this.value = mutator_.mutateStruct(indexedDb.mojom.Value, true);
    }
    return this;
  };
  Callbacks_SuccessCursorContinue_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.value !== null) {
      Array.prototype.push.apply(handles, this.value.getHandleDeps());
    }
    return handles;
  };

  Callbacks_SuccessCursorContinue_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Callbacks_SuccessCursorContinue_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    idx = this.value.setHandlesInternal_(handles, idx);
    return idx;
  };

  Callbacks_SuccessCursorContinue_Params.validate = function(messageValidator, offset) {
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


    // validate Callbacks_SuccessCursorContinue_Params.key
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, Key, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate Callbacks_SuccessCursorContinue_Params.primaryKey
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, Key, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate Callbacks_SuccessCursorContinue_Params.value
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, Value, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Callbacks_SuccessCursorContinue_Params.encodedSize = codec.kStructHeaderSize + 24;

  Callbacks_SuccessCursorContinue_Params.decode = function(decoder) {
    var packed;
    var val = new Callbacks_SuccessCursorContinue_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.key = decoder.decodeStructPointer(Key);
    val.primaryKey = decoder.decodeStructPointer(Key);
    val.value = decoder.decodeStructPointer(Value);
    return val;
  };

  Callbacks_SuccessCursorContinue_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Callbacks_SuccessCursorContinue_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(Key, val.key);
    encoder.encodeStructPointer(Key, val.primaryKey);
    encoder.encodeStructPointer(Value, val.value);
  };
  function Callbacks_SuccessCursorPrefetch_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Callbacks_SuccessCursorPrefetch_Params.prototype.initDefaults_ = function() {
    this.keys = null;
    this.primaryKeys = null;
    this.values = null;
  };
  Callbacks_SuccessCursorPrefetch_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Callbacks_SuccessCursorPrefetch_Params.generate = function(generator_) {
    var generated = new Callbacks_SuccessCursorPrefetch_Params;
    generated.keys = generator_.generateArray(function() {
      return generator_.generateStruct(indexedDb.mojom.Key, false);
    });
    generated.primaryKeys = generator_.generateArray(function() {
      return generator_.generateStruct(indexedDb.mojom.Key, false);
    });
    generated.values = generator_.generateArray(function() {
      return generator_.generateStruct(indexedDb.mojom.Value, false);
    });
    return generated;
  };

  Callbacks_SuccessCursorPrefetch_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.keys = mutator_.mutateArray(this.keys, function(val) {
        return mutator_.mutateStruct(indexedDb.mojom.Key, false);
      });
    }
    if (mutator_.chooseMutateField()) {
      this.primaryKeys = mutator_.mutateArray(this.primaryKeys, function(val) {
        return mutator_.mutateStruct(indexedDb.mojom.Key, false);
      });
    }
    if (mutator_.chooseMutateField()) {
      this.values = mutator_.mutateArray(this.values, function(val) {
        return mutator_.mutateStruct(indexedDb.mojom.Value, false);
      });
    }
    return this;
  };
  Callbacks_SuccessCursorPrefetch_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.values !== null) {
      Array.prototype.push.apply(handles, [].concat.apply([], this.values.map(function(val) {
        if (val) {
          return val.getHandleDeps();
        }
        return [];
      })));
    }
    return handles;
  };

  Callbacks_SuccessCursorPrefetch_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Callbacks_SuccessCursorPrefetch_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.values.forEach(function(val) {
      idx = val.setHandlesInternal_(handles, idx);
    });
    return idx;
  };

  Callbacks_SuccessCursorPrefetch_Params.validate = function(messageValidator, offset) {
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


    // validate Callbacks_SuccessCursorPrefetch_Params.keys
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 8, new codec.PointerTo(Key), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;


    // validate Callbacks_SuccessCursorPrefetch_Params.primaryKeys
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 8, new codec.PointerTo(Key), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;


    // validate Callbacks_SuccessCursorPrefetch_Params.values
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 16, 8, new codec.PointerTo(Value), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Callbacks_SuccessCursorPrefetch_Params.encodedSize = codec.kStructHeaderSize + 24;

  Callbacks_SuccessCursorPrefetch_Params.decode = function(decoder) {
    var packed;
    var val = new Callbacks_SuccessCursorPrefetch_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.keys = decoder.decodeArrayPointer(new codec.PointerTo(Key));
    val.primaryKeys = decoder.decodeArrayPointer(new codec.PointerTo(Key));
    val.values = decoder.decodeArrayPointer(new codec.PointerTo(Value));
    return val;
  };

  Callbacks_SuccessCursorPrefetch_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Callbacks_SuccessCursorPrefetch_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(new codec.PointerTo(Key), val.keys);
    encoder.encodeArrayPointer(new codec.PointerTo(Key), val.primaryKeys);
    encoder.encodeArrayPointer(new codec.PointerTo(Value), val.values);
  };
  function Callbacks_SuccessArray_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Callbacks_SuccessArray_Params.prototype.initDefaults_ = function() {
    this.values = null;
  };
  Callbacks_SuccessArray_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Callbacks_SuccessArray_Params.generate = function(generator_) {
    var generated = new Callbacks_SuccessArray_Params;
    generated.values = generator_.generateArray(function() {
      return generator_.generateStruct(indexedDb.mojom.ReturnValue, false);
    });
    return generated;
  };

  Callbacks_SuccessArray_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.values = mutator_.mutateArray(this.values, function(val) {
        return mutator_.mutateStruct(indexedDb.mojom.ReturnValue, false);
      });
    }
    return this;
  };
  Callbacks_SuccessArray_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.values !== null) {
      Array.prototype.push.apply(handles, [].concat.apply([], this.values.map(function(val) {
        if (val) {
          return val.getHandleDeps();
        }
        return [];
      })));
    }
    return handles;
  };

  Callbacks_SuccessArray_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Callbacks_SuccessArray_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.values.forEach(function(val) {
      idx = val.setHandlesInternal_(handles, idx);
    });
    return idx;
  };

  Callbacks_SuccessArray_Params.validate = function(messageValidator, offset) {
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


    // validate Callbacks_SuccessArray_Params.values
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 8, new codec.PointerTo(ReturnValue), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Callbacks_SuccessArray_Params.encodedSize = codec.kStructHeaderSize + 8;

  Callbacks_SuccessArray_Params.decode = function(decoder) {
    var packed;
    var val = new Callbacks_SuccessArray_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.values = decoder.decodeArrayPointer(new codec.PointerTo(ReturnValue));
    return val;
  };

  Callbacks_SuccessArray_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Callbacks_SuccessArray_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(new codec.PointerTo(ReturnValue), val.values);
  };
  function Callbacks_SuccessKey_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Callbacks_SuccessKey_Params.prototype.initDefaults_ = function() {
    this.key = null;
  };
  Callbacks_SuccessKey_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Callbacks_SuccessKey_Params.generate = function(generator_) {
    var generated = new Callbacks_SuccessKey_Params;
    generated.key = generator_.generateStruct(indexedDb.mojom.Key, false);
    return generated;
  };

  Callbacks_SuccessKey_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.key = mutator_.mutateStruct(indexedDb.mojom.Key, false);
    }
    return this;
  };
  Callbacks_SuccessKey_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Callbacks_SuccessKey_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Callbacks_SuccessKey_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Callbacks_SuccessKey_Params.validate = function(messageValidator, offset) {
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


    // validate Callbacks_SuccessKey_Params.key
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, Key, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Callbacks_SuccessKey_Params.encodedSize = codec.kStructHeaderSize + 8;

  Callbacks_SuccessKey_Params.decode = function(decoder) {
    var packed;
    var val = new Callbacks_SuccessKey_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.key = decoder.decodeStructPointer(Key);
    return val;
  };

  Callbacks_SuccessKey_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Callbacks_SuccessKey_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(Key, val.key);
  };
  function Callbacks_SuccessInteger_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Callbacks_SuccessInteger_Params.prototype.initDefaults_ = function() {
    this.value = 0;
  };
  Callbacks_SuccessInteger_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Callbacks_SuccessInteger_Params.generate = function(generator_) {
    var generated = new Callbacks_SuccessInteger_Params;
    generated.value = generator_.generateInt64();
    return generated;
  };

  Callbacks_SuccessInteger_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.value = mutator_.mutateInt64(this.value);
    }
    return this;
  };
  Callbacks_SuccessInteger_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Callbacks_SuccessInteger_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Callbacks_SuccessInteger_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Callbacks_SuccessInteger_Params.validate = function(messageValidator, offset) {
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

  Callbacks_SuccessInteger_Params.encodedSize = codec.kStructHeaderSize + 8;

  Callbacks_SuccessInteger_Params.decode = function(decoder) {
    var packed;
    var val = new Callbacks_SuccessInteger_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.value = decoder.decodeStruct(codec.Int64);
    return val;
  };

  Callbacks_SuccessInteger_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Callbacks_SuccessInteger_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int64, val.value);
  };
  function Callbacks_Success_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Callbacks_Success_Params.prototype.initDefaults_ = function() {
  };
  Callbacks_Success_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Callbacks_Success_Params.generate = function(generator_) {
    var generated = new Callbacks_Success_Params;
    return generated;
  };

  Callbacks_Success_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  Callbacks_Success_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Callbacks_Success_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Callbacks_Success_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Callbacks_Success_Params.validate = function(messageValidator, offset) {
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

  Callbacks_Success_Params.encodedSize = codec.kStructHeaderSize + 0;

  Callbacks_Success_Params.decode = function(decoder) {
    var packed;
    var val = new Callbacks_Success_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  Callbacks_Success_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Callbacks_Success_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function DatabaseCallbacks_ForcedClose_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  DatabaseCallbacks_ForcedClose_Params.prototype.initDefaults_ = function() {
  };
  DatabaseCallbacks_ForcedClose_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  DatabaseCallbacks_ForcedClose_Params.generate = function(generator_) {
    var generated = new DatabaseCallbacks_ForcedClose_Params;
    return generated;
  };

  DatabaseCallbacks_ForcedClose_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  DatabaseCallbacks_ForcedClose_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  DatabaseCallbacks_ForcedClose_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  DatabaseCallbacks_ForcedClose_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  DatabaseCallbacks_ForcedClose_Params.validate = function(messageValidator, offset) {
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

  DatabaseCallbacks_ForcedClose_Params.encodedSize = codec.kStructHeaderSize + 0;

  DatabaseCallbacks_ForcedClose_Params.decode = function(decoder) {
    var packed;
    var val = new DatabaseCallbacks_ForcedClose_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  DatabaseCallbacks_ForcedClose_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(DatabaseCallbacks_ForcedClose_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function DatabaseCallbacks_VersionChange_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  DatabaseCallbacks_VersionChange_Params.prototype.initDefaults_ = function() {
    this.oldVersion = 0;
    this.newVersion = 0;
  };
  DatabaseCallbacks_VersionChange_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  DatabaseCallbacks_VersionChange_Params.generate = function(generator_) {
    var generated = new DatabaseCallbacks_VersionChange_Params;
    generated.oldVersion = generator_.generateInt64();
    generated.newVersion = generator_.generateInt64();
    return generated;
  };

  DatabaseCallbacks_VersionChange_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.oldVersion = mutator_.mutateInt64(this.oldVersion);
    }
    if (mutator_.chooseMutateField()) {
      this.newVersion = mutator_.mutateInt64(this.newVersion);
    }
    return this;
  };
  DatabaseCallbacks_VersionChange_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  DatabaseCallbacks_VersionChange_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  DatabaseCallbacks_VersionChange_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  DatabaseCallbacks_VersionChange_Params.validate = function(messageValidator, offset) {
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

  DatabaseCallbacks_VersionChange_Params.encodedSize = codec.kStructHeaderSize + 16;

  DatabaseCallbacks_VersionChange_Params.decode = function(decoder) {
    var packed;
    var val = new DatabaseCallbacks_VersionChange_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.oldVersion = decoder.decodeStruct(codec.Int64);
    val.newVersion = decoder.decodeStruct(codec.Int64);
    return val;
  };

  DatabaseCallbacks_VersionChange_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(DatabaseCallbacks_VersionChange_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int64, val.oldVersion);
    encoder.encodeStruct(codec.Int64, val.newVersion);
  };
  function DatabaseCallbacks_Abort_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  DatabaseCallbacks_Abort_Params.prototype.initDefaults_ = function() {
    this.transactionId = 0;
    this.code = 0;
    this.message = null;
  };
  DatabaseCallbacks_Abort_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  DatabaseCallbacks_Abort_Params.generate = function(generator_) {
    var generated = new DatabaseCallbacks_Abort_Params;
    generated.transactionId = generator_.generateInt64();
    generated.code = generator_.generateInt32();
    generated.message = generator_.generateStruct(mojoBase.mojom.String16, false);
    return generated;
  };

  DatabaseCallbacks_Abort_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.transactionId = mutator_.mutateInt64(this.transactionId);
    }
    if (mutator_.chooseMutateField()) {
      this.code = mutator_.mutateInt32(this.code);
    }
    if (mutator_.chooseMutateField()) {
      this.message = mutator_.mutateStruct(mojoBase.mojom.String16, false);
    }
    return this;
  };
  DatabaseCallbacks_Abort_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  DatabaseCallbacks_Abort_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  DatabaseCallbacks_Abort_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  DatabaseCallbacks_Abort_Params.validate = function(messageValidator, offset) {
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




    // validate DatabaseCallbacks_Abort_Params.message
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, string161$.String16, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  DatabaseCallbacks_Abort_Params.encodedSize = codec.kStructHeaderSize + 24;

  DatabaseCallbacks_Abort_Params.decode = function(decoder) {
    var packed;
    var val = new DatabaseCallbacks_Abort_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.transactionId = decoder.decodeStruct(codec.Int64);
    val.code = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.message = decoder.decodeStructPointer(string161$.String16);
    return val;
  };

  DatabaseCallbacks_Abort_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(DatabaseCallbacks_Abort_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int64, val.transactionId);
    encoder.encodeStruct(codec.Int32, val.code);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(string161$.String16, val.message);
  };
  function DatabaseCallbacks_Complete_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  DatabaseCallbacks_Complete_Params.prototype.initDefaults_ = function() {
    this.transactionId = 0;
  };
  DatabaseCallbacks_Complete_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  DatabaseCallbacks_Complete_Params.generate = function(generator_) {
    var generated = new DatabaseCallbacks_Complete_Params;
    generated.transactionId = generator_.generateInt64();
    return generated;
  };

  DatabaseCallbacks_Complete_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.transactionId = mutator_.mutateInt64(this.transactionId);
    }
    return this;
  };
  DatabaseCallbacks_Complete_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  DatabaseCallbacks_Complete_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  DatabaseCallbacks_Complete_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  DatabaseCallbacks_Complete_Params.validate = function(messageValidator, offset) {
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

  DatabaseCallbacks_Complete_Params.encodedSize = codec.kStructHeaderSize + 8;

  DatabaseCallbacks_Complete_Params.decode = function(decoder) {
    var packed;
    var val = new DatabaseCallbacks_Complete_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.transactionId = decoder.decodeStruct(codec.Int64);
    return val;
  };

  DatabaseCallbacks_Complete_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(DatabaseCallbacks_Complete_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int64, val.transactionId);
  };
  function DatabaseCallbacks_Changes_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  DatabaseCallbacks_Changes_Params.prototype.initDefaults_ = function() {
    this.changes = null;
  };
  DatabaseCallbacks_Changes_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  DatabaseCallbacks_Changes_Params.generate = function(generator_) {
    var generated = new DatabaseCallbacks_Changes_Params;
    generated.changes = generator_.generateStruct(indexedDb.mojom.ObserverChanges, false);
    return generated;
  };

  DatabaseCallbacks_Changes_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.changes = mutator_.mutateStruct(indexedDb.mojom.ObserverChanges, false);
    }
    return this;
  };
  DatabaseCallbacks_Changes_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.changes !== null) {
      Array.prototype.push.apply(handles, this.changes.getHandleDeps());
    }
    return handles;
  };

  DatabaseCallbacks_Changes_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  DatabaseCallbacks_Changes_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    idx = this.changes.setHandlesInternal_(handles, idx);
    return idx;
  };

  DatabaseCallbacks_Changes_Params.validate = function(messageValidator, offset) {
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


    // validate DatabaseCallbacks_Changes_Params.changes
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, ObserverChanges, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  DatabaseCallbacks_Changes_Params.encodedSize = codec.kStructHeaderSize + 8;

  DatabaseCallbacks_Changes_Params.decode = function(decoder) {
    var packed;
    var val = new DatabaseCallbacks_Changes_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.changes = decoder.decodeStructPointer(ObserverChanges);
    return val;
  };

  DatabaseCallbacks_Changes_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(DatabaseCallbacks_Changes_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(ObserverChanges, val.changes);
  };
  function Cursor_Advance_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Cursor_Advance_Params.prototype.initDefaults_ = function() {
    this.count = 0;
    this.callbacks = new associatedBindings.AssociatedInterfacePtrInfo();
  };
  Cursor_Advance_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Cursor_Advance_Params.generate = function(generator_) {
    var generated = new Cursor_Advance_Params;
    generated.count = generator_.generateUint32();
    generated.callbacks = generator_.generateAssociatedInterface("indexedDb.mojom.Callbacks", false);
    return generated;
  };

  Cursor_Advance_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.count = mutator_.mutateUint32(this.count);
    }
    if (mutator_.chooseMutateField()) {
      this.callbacks = mutator_.mutateAssociatedInterface(this.callbacks, "indexedDb.mojom.Callbacks", false);
    }
    return this;
  };
  Cursor_Advance_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.callbacks !== null) {
      Array.prototype.push.apply(handles, ["indexedDb.mojom.CallbacksAssociatedPtr"]);
    }
    return handles;
  };

  Cursor_Advance_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Cursor_Advance_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.callbacks = handles[idx++];;
    return idx;
  };

  Cursor_Advance_Params.validate = function(messageValidator, offset) {
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



    // validate Cursor_Advance_Params.callbacks
    err = messageValidator.validateAssociatedInterface(offset + codec.kStructHeaderSize + 4, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Cursor_Advance_Params.encodedSize = codec.kStructHeaderSize + 16;

  Cursor_Advance_Params.decode = function(decoder) {
    var packed;
    var val = new Cursor_Advance_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.count = decoder.decodeStruct(codec.Uint32);
    val.callbacks = decoder.decodeStruct(codec.AssociatedInterfacePtrInfo);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  Cursor_Advance_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Cursor_Advance_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint32, val.count);
    encoder.encodeStruct(codec.AssociatedInterfacePtrInfo, val.callbacks);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function Cursor_Continue_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Cursor_Continue_Params.prototype.initDefaults_ = function() {
    this.key = null;
    this.primaryKey = null;
    this.callbacks = new associatedBindings.AssociatedInterfacePtrInfo();
  };
  Cursor_Continue_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Cursor_Continue_Params.generate = function(generator_) {
    var generated = new Cursor_Continue_Params;
    generated.key = generator_.generateStruct(indexedDb.mojom.Key, false);
    generated.primaryKey = generator_.generateStruct(indexedDb.mojom.Key, false);
    generated.callbacks = generator_.generateAssociatedInterface("indexedDb.mojom.Callbacks", false);
    return generated;
  };

  Cursor_Continue_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.key = mutator_.mutateStruct(indexedDb.mojom.Key, false);
    }
    if (mutator_.chooseMutateField()) {
      this.primaryKey = mutator_.mutateStruct(indexedDb.mojom.Key, false);
    }
    if (mutator_.chooseMutateField()) {
      this.callbacks = mutator_.mutateAssociatedInterface(this.callbacks, "indexedDb.mojom.Callbacks", false);
    }
    return this;
  };
  Cursor_Continue_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.callbacks !== null) {
      Array.prototype.push.apply(handles, ["indexedDb.mojom.CallbacksAssociatedPtr"]);
    }
    return handles;
  };

  Cursor_Continue_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Cursor_Continue_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.callbacks = handles[idx++];;
    return idx;
  };

  Cursor_Continue_Params.validate = function(messageValidator, offset) {
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


    // validate Cursor_Continue_Params.key
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, Key, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate Cursor_Continue_Params.primaryKey
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, Key, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate Cursor_Continue_Params.callbacks
    err = messageValidator.validateAssociatedInterface(offset + codec.kStructHeaderSize + 16, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Cursor_Continue_Params.encodedSize = codec.kStructHeaderSize + 24;

  Cursor_Continue_Params.decode = function(decoder) {
    var packed;
    var val = new Cursor_Continue_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.key = decoder.decodeStructPointer(Key);
    val.primaryKey = decoder.decodeStructPointer(Key);
    val.callbacks = decoder.decodeStruct(codec.AssociatedInterfacePtrInfo);
    return val;
  };

  Cursor_Continue_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Cursor_Continue_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(Key, val.key);
    encoder.encodeStructPointer(Key, val.primaryKey);
    encoder.encodeStruct(codec.AssociatedInterfacePtrInfo, val.callbacks);
  };
  function Cursor_Prefetch_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Cursor_Prefetch_Params.prototype.initDefaults_ = function() {
    this.count = 0;
    this.callbacks = new associatedBindings.AssociatedInterfacePtrInfo();
  };
  Cursor_Prefetch_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Cursor_Prefetch_Params.generate = function(generator_) {
    var generated = new Cursor_Prefetch_Params;
    generated.count = generator_.generateInt32();
    generated.callbacks = generator_.generateAssociatedInterface("indexedDb.mojom.Callbacks", false);
    return generated;
  };

  Cursor_Prefetch_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.count = mutator_.mutateInt32(this.count);
    }
    if (mutator_.chooseMutateField()) {
      this.callbacks = mutator_.mutateAssociatedInterface(this.callbacks, "indexedDb.mojom.Callbacks", false);
    }
    return this;
  };
  Cursor_Prefetch_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.callbacks !== null) {
      Array.prototype.push.apply(handles, ["indexedDb.mojom.CallbacksAssociatedPtr"]);
    }
    return handles;
  };

  Cursor_Prefetch_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Cursor_Prefetch_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.callbacks = handles[idx++];;
    return idx;
  };

  Cursor_Prefetch_Params.validate = function(messageValidator, offset) {
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



    // validate Cursor_Prefetch_Params.callbacks
    err = messageValidator.validateAssociatedInterface(offset + codec.kStructHeaderSize + 4, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Cursor_Prefetch_Params.encodedSize = codec.kStructHeaderSize + 16;

  Cursor_Prefetch_Params.decode = function(decoder) {
    var packed;
    var val = new Cursor_Prefetch_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.count = decoder.decodeStruct(codec.Int32);
    val.callbacks = decoder.decodeStruct(codec.AssociatedInterfacePtrInfo);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  Cursor_Prefetch_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Cursor_Prefetch_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.count);
    encoder.encodeStruct(codec.AssociatedInterfacePtrInfo, val.callbacks);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function Cursor_PrefetchReset_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Cursor_PrefetchReset_Params.prototype.initDefaults_ = function() {
    this.usedPrefetches = 0;
    this.unusedPrefetches = 0;
  };
  Cursor_PrefetchReset_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Cursor_PrefetchReset_Params.generate = function(generator_) {
    var generated = new Cursor_PrefetchReset_Params;
    generated.usedPrefetches = generator_.generateInt32();
    generated.unusedPrefetches = generator_.generateInt32();
    return generated;
  };

  Cursor_PrefetchReset_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.usedPrefetches = mutator_.mutateInt32(this.usedPrefetches);
    }
    if (mutator_.chooseMutateField()) {
      this.unusedPrefetches = mutator_.mutateInt32(this.unusedPrefetches);
    }
    return this;
  };
  Cursor_PrefetchReset_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Cursor_PrefetchReset_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Cursor_PrefetchReset_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Cursor_PrefetchReset_Params.validate = function(messageValidator, offset) {
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

  Cursor_PrefetchReset_Params.encodedSize = codec.kStructHeaderSize + 8;

  Cursor_PrefetchReset_Params.decode = function(decoder) {
    var packed;
    var val = new Cursor_PrefetchReset_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.usedPrefetches = decoder.decodeStruct(codec.Int32);
    val.unusedPrefetches = decoder.decodeStruct(codec.Int32);
    return val;
  };

  Cursor_PrefetchReset_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Cursor_PrefetchReset_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.usedPrefetches);
    encoder.encodeStruct(codec.Int32, val.unusedPrefetches);
  };
  function Database_CreateObjectStore_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Database_CreateObjectStore_Params.prototype.initDefaults_ = function() {
    this.transactionId = 0;
    this.objectStoreId = 0;
    this.name = null;
    this.keyPath = null;
    this.autoIncrement = false;
  };
  Database_CreateObjectStore_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Database_CreateObjectStore_Params.generate = function(generator_) {
    var generated = new Database_CreateObjectStore_Params;
    generated.transactionId = generator_.generateInt64();
    generated.objectStoreId = generator_.generateInt64();
    generated.name = generator_.generateStruct(mojoBase.mojom.String16, false);
    generated.keyPath = generator_.generateStruct(indexedDb.mojom.KeyPath, false);
    generated.autoIncrement = generator_.generateBool();
    return generated;
  };

  Database_CreateObjectStore_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.transactionId = mutator_.mutateInt64(this.transactionId);
    }
    if (mutator_.chooseMutateField()) {
      this.objectStoreId = mutator_.mutateInt64(this.objectStoreId);
    }
    if (mutator_.chooseMutateField()) {
      this.name = mutator_.mutateStruct(mojoBase.mojom.String16, false);
    }
    if (mutator_.chooseMutateField()) {
      this.keyPath = mutator_.mutateStruct(indexedDb.mojom.KeyPath, false);
    }
    if (mutator_.chooseMutateField()) {
      this.autoIncrement = mutator_.mutateBool(this.autoIncrement);
    }
    return this;
  };
  Database_CreateObjectStore_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Database_CreateObjectStore_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Database_CreateObjectStore_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Database_CreateObjectStore_Params.validate = function(messageValidator, offset) {
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




    // validate Database_CreateObjectStore_Params.name
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, string161$.String16, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate Database_CreateObjectStore_Params.keyPath
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 24, KeyPath, false);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  Database_CreateObjectStore_Params.encodedSize = codec.kStructHeaderSize + 40;

  Database_CreateObjectStore_Params.decode = function(decoder) {
    var packed;
    var val = new Database_CreateObjectStore_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.transactionId = decoder.decodeStruct(codec.Int64);
    val.objectStoreId = decoder.decodeStruct(codec.Int64);
    val.name = decoder.decodeStructPointer(string161$.String16);
    val.keyPath = decoder.decodeStructPointer(KeyPath);
    packed = decoder.readUint8();
    val.autoIncrement = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  Database_CreateObjectStore_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Database_CreateObjectStore_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int64, val.transactionId);
    encoder.encodeStruct(codec.Int64, val.objectStoreId);
    encoder.encodeStructPointer(string161$.String16, val.name);
    encoder.encodeStructPointer(KeyPath, val.keyPath);
    packed = 0;
    packed |= (val.autoIncrement & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function Database_DeleteObjectStore_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Database_DeleteObjectStore_Params.prototype.initDefaults_ = function() {
    this.transactionId = 0;
    this.objectStoreId = 0;
  };
  Database_DeleteObjectStore_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Database_DeleteObjectStore_Params.generate = function(generator_) {
    var generated = new Database_DeleteObjectStore_Params;
    generated.transactionId = generator_.generateInt64();
    generated.objectStoreId = generator_.generateInt64();
    return generated;
  };

  Database_DeleteObjectStore_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.transactionId = mutator_.mutateInt64(this.transactionId);
    }
    if (mutator_.chooseMutateField()) {
      this.objectStoreId = mutator_.mutateInt64(this.objectStoreId);
    }
    return this;
  };
  Database_DeleteObjectStore_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Database_DeleteObjectStore_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Database_DeleteObjectStore_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Database_DeleteObjectStore_Params.validate = function(messageValidator, offset) {
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

  Database_DeleteObjectStore_Params.encodedSize = codec.kStructHeaderSize + 16;

  Database_DeleteObjectStore_Params.decode = function(decoder) {
    var packed;
    var val = new Database_DeleteObjectStore_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.transactionId = decoder.decodeStruct(codec.Int64);
    val.objectStoreId = decoder.decodeStruct(codec.Int64);
    return val;
  };

  Database_DeleteObjectStore_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Database_DeleteObjectStore_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int64, val.transactionId);
    encoder.encodeStruct(codec.Int64, val.objectStoreId);
  };
  function Database_RenameObjectStore_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Database_RenameObjectStore_Params.prototype.initDefaults_ = function() {
    this.transactionId = 0;
    this.objectStoreId = 0;
    this.newName = null;
  };
  Database_RenameObjectStore_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Database_RenameObjectStore_Params.generate = function(generator_) {
    var generated = new Database_RenameObjectStore_Params;
    generated.transactionId = generator_.generateInt64();
    generated.objectStoreId = generator_.generateInt64();
    generated.newName = generator_.generateStruct(mojoBase.mojom.String16, false);
    return generated;
  };

  Database_RenameObjectStore_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.transactionId = mutator_.mutateInt64(this.transactionId);
    }
    if (mutator_.chooseMutateField()) {
      this.objectStoreId = mutator_.mutateInt64(this.objectStoreId);
    }
    if (mutator_.chooseMutateField()) {
      this.newName = mutator_.mutateStruct(mojoBase.mojom.String16, false);
    }
    return this;
  };
  Database_RenameObjectStore_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Database_RenameObjectStore_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Database_RenameObjectStore_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Database_RenameObjectStore_Params.validate = function(messageValidator, offset) {
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




    // validate Database_RenameObjectStore_Params.newName
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, string161$.String16, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Database_RenameObjectStore_Params.encodedSize = codec.kStructHeaderSize + 24;

  Database_RenameObjectStore_Params.decode = function(decoder) {
    var packed;
    var val = new Database_RenameObjectStore_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.transactionId = decoder.decodeStruct(codec.Int64);
    val.objectStoreId = decoder.decodeStruct(codec.Int64);
    val.newName = decoder.decodeStructPointer(string161$.String16);
    return val;
  };

  Database_RenameObjectStore_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Database_RenameObjectStore_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int64, val.transactionId);
    encoder.encodeStruct(codec.Int64, val.objectStoreId);
    encoder.encodeStructPointer(string161$.String16, val.newName);
  };
  function Database_CreateTransaction_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Database_CreateTransaction_Params.prototype.initDefaults_ = function() {
    this.transactionId = 0;
    this.objectStoreIds = null;
    this.mode = 0;
  };
  Database_CreateTransaction_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Database_CreateTransaction_Params.generate = function(generator_) {
    var generated = new Database_CreateTransaction_Params;
    generated.transactionId = generator_.generateInt64();
    generated.objectStoreIds = generator_.generateArray(function() {
      return generator_.generateInt64();
    });
    generated.mode = generator_.generateEnum(0, 2);
    return generated;
  };

  Database_CreateTransaction_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.transactionId = mutator_.mutateInt64(this.transactionId);
    }
    if (mutator_.chooseMutateField()) {
      this.objectStoreIds = mutator_.mutateArray(this.objectStoreIds, function(val) {
        return mutator_.mutateInt64(val);
      });
    }
    if (mutator_.chooseMutateField()) {
      this.mode = mutator_.mutateEnum(this.mode, 0, 2);
    }
    return this;
  };
  Database_CreateTransaction_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Database_CreateTransaction_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Database_CreateTransaction_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Database_CreateTransaction_Params.validate = function(messageValidator, offset) {
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



    // validate Database_CreateTransaction_Params.objectStoreIds
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 8, codec.Int64, false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;


    // validate Database_CreateTransaction_Params.mode
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 16, TransactionMode);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Database_CreateTransaction_Params.encodedSize = codec.kStructHeaderSize + 24;

  Database_CreateTransaction_Params.decode = function(decoder) {
    var packed;
    var val = new Database_CreateTransaction_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.transactionId = decoder.decodeStruct(codec.Int64);
    val.objectStoreIds = decoder.decodeArrayPointer(codec.Int64);
    val.mode = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  Database_CreateTransaction_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Database_CreateTransaction_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int64, val.transactionId);
    encoder.encodeArrayPointer(codec.Int64, val.objectStoreIds);
    encoder.encodeStruct(codec.Int32, val.mode);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function Database_Close_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Database_Close_Params.prototype.initDefaults_ = function() {
  };
  Database_Close_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Database_Close_Params.generate = function(generator_) {
    var generated = new Database_Close_Params;
    return generated;
  };

  Database_Close_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  Database_Close_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Database_Close_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Database_Close_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Database_Close_Params.validate = function(messageValidator, offset) {
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

  Database_Close_Params.encodedSize = codec.kStructHeaderSize + 0;

  Database_Close_Params.decode = function(decoder) {
    var packed;
    var val = new Database_Close_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  Database_Close_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Database_Close_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function Database_VersionChangeIgnored_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Database_VersionChangeIgnored_Params.prototype.initDefaults_ = function() {
  };
  Database_VersionChangeIgnored_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Database_VersionChangeIgnored_Params.generate = function(generator_) {
    var generated = new Database_VersionChangeIgnored_Params;
    return generated;
  };

  Database_VersionChangeIgnored_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  Database_VersionChangeIgnored_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Database_VersionChangeIgnored_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Database_VersionChangeIgnored_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Database_VersionChangeIgnored_Params.validate = function(messageValidator, offset) {
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

  Database_VersionChangeIgnored_Params.encodedSize = codec.kStructHeaderSize + 0;

  Database_VersionChangeIgnored_Params.decode = function(decoder) {
    var packed;
    var val = new Database_VersionChangeIgnored_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  Database_VersionChangeIgnored_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Database_VersionChangeIgnored_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function Database_AddObserver_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Database_AddObserver_Params.prototype.initDefaults_ = function() {
    this.transactionId = 0;
    this.observerId = 0;
    this.includeTransaction = false;
    this.noRecords = false;
    this.values = false;
    this.operationTypes = 0;
  };
  Database_AddObserver_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Database_AddObserver_Params.generate = function(generator_) {
    var generated = new Database_AddObserver_Params;
    generated.transactionId = generator_.generateInt64();
    generated.observerId = generator_.generateInt32();
    generated.includeTransaction = generator_.generateBool();
    generated.noRecords = generator_.generateBool();
    generated.values = generator_.generateBool();
    generated.operationTypes = generator_.generateUint16();
    return generated;
  };

  Database_AddObserver_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.transactionId = mutator_.mutateInt64(this.transactionId);
    }
    if (mutator_.chooseMutateField()) {
      this.observerId = mutator_.mutateInt32(this.observerId);
    }
    if (mutator_.chooseMutateField()) {
      this.includeTransaction = mutator_.mutateBool(this.includeTransaction);
    }
    if (mutator_.chooseMutateField()) {
      this.noRecords = mutator_.mutateBool(this.noRecords);
    }
    if (mutator_.chooseMutateField()) {
      this.values = mutator_.mutateBool(this.values);
    }
    if (mutator_.chooseMutateField()) {
      this.operationTypes = mutator_.mutateUint16(this.operationTypes);
    }
    return this;
  };
  Database_AddObserver_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Database_AddObserver_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Database_AddObserver_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Database_AddObserver_Params.validate = function(messageValidator, offset) {
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

  Database_AddObserver_Params.encodedSize = codec.kStructHeaderSize + 16;

  Database_AddObserver_Params.decode = function(decoder) {
    var packed;
    var val = new Database_AddObserver_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.transactionId = decoder.decodeStruct(codec.Int64);
    val.observerId = decoder.decodeStruct(codec.Int32);
    packed = decoder.readUint8();
    val.includeTransaction = (packed >> 0) & 1 ? true : false;
    val.noRecords = (packed >> 1) & 1 ? true : false;
    val.values = (packed >> 2) & 1 ? true : false;
    decoder.skip(1);
    val.operationTypes = decoder.decodeStruct(codec.Uint16);
    return val;
  };

  Database_AddObserver_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Database_AddObserver_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int64, val.transactionId);
    encoder.encodeStruct(codec.Int32, val.observerId);
    packed = 0;
    packed |= (val.includeTransaction & 1) << 0
    packed |= (val.noRecords & 1) << 1
    packed |= (val.values & 1) << 2
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.encodeStruct(codec.Uint16, val.operationTypes);
  };
  function Database_RemoveObservers_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Database_RemoveObservers_Params.prototype.initDefaults_ = function() {
    this.observers = null;
  };
  Database_RemoveObservers_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Database_RemoveObservers_Params.generate = function(generator_) {
    var generated = new Database_RemoveObservers_Params;
    generated.observers = generator_.generateArray(function() {
      return generator_.generateInt32();
    });
    return generated;
  };

  Database_RemoveObservers_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.observers = mutator_.mutateArray(this.observers, function(val) {
        return mutator_.mutateInt32(val);
      });
    }
    return this;
  };
  Database_RemoveObservers_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Database_RemoveObservers_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Database_RemoveObservers_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Database_RemoveObservers_Params.validate = function(messageValidator, offset) {
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


    // validate Database_RemoveObservers_Params.observers
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 4, codec.Int32, false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Database_RemoveObservers_Params.encodedSize = codec.kStructHeaderSize + 8;

  Database_RemoveObservers_Params.decode = function(decoder) {
    var packed;
    var val = new Database_RemoveObservers_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.observers = decoder.decodeArrayPointer(codec.Int32);
    return val;
  };

  Database_RemoveObservers_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Database_RemoveObservers_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(codec.Int32, val.observers);
  };
  function Database_Get_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Database_Get_Params.prototype.initDefaults_ = function() {
    this.transactionId = 0;
    this.objectStoreId = 0;
    this.indexId = 0;
    this.keyRange = null;
    this.keyOnly = false;
    this.callbacks = new associatedBindings.AssociatedInterfacePtrInfo();
  };
  Database_Get_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Database_Get_Params.generate = function(generator_) {
    var generated = new Database_Get_Params;
    generated.transactionId = generator_.generateInt64();
    generated.objectStoreId = generator_.generateInt64();
    generated.indexId = generator_.generateInt64();
    generated.keyRange = generator_.generateStruct(indexedDb.mojom.KeyRange, false);
    generated.keyOnly = generator_.generateBool();
    generated.callbacks = generator_.generateAssociatedInterface("indexedDb.mojom.Callbacks", false);
    return generated;
  };

  Database_Get_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.transactionId = mutator_.mutateInt64(this.transactionId);
    }
    if (mutator_.chooseMutateField()) {
      this.objectStoreId = mutator_.mutateInt64(this.objectStoreId);
    }
    if (mutator_.chooseMutateField()) {
      this.indexId = mutator_.mutateInt64(this.indexId);
    }
    if (mutator_.chooseMutateField()) {
      this.keyRange = mutator_.mutateStruct(indexedDb.mojom.KeyRange, false);
    }
    if (mutator_.chooseMutateField()) {
      this.keyOnly = mutator_.mutateBool(this.keyOnly);
    }
    if (mutator_.chooseMutateField()) {
      this.callbacks = mutator_.mutateAssociatedInterface(this.callbacks, "indexedDb.mojom.Callbacks", false);
    }
    return this;
  };
  Database_Get_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.callbacks !== null) {
      Array.prototype.push.apply(handles, ["indexedDb.mojom.CallbacksAssociatedPtr"]);
    }
    return handles;
  };

  Database_Get_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Database_Get_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.callbacks = handles[idx++];;
    return idx;
  };

  Database_Get_Params.validate = function(messageValidator, offset) {
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





    // validate Database_Get_Params.keyRange
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 24, KeyRange, false);
    if (err !== validator.validationError.NONE)
        return err;



    // validate Database_Get_Params.callbacks
    err = messageValidator.validateAssociatedInterface(offset + codec.kStructHeaderSize + 36, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Database_Get_Params.encodedSize = codec.kStructHeaderSize + 48;

  Database_Get_Params.decode = function(decoder) {
    var packed;
    var val = new Database_Get_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.transactionId = decoder.decodeStruct(codec.Int64);
    val.objectStoreId = decoder.decodeStruct(codec.Int64);
    val.indexId = decoder.decodeStruct(codec.Int64);
    val.keyRange = decoder.decodeStructPointer(KeyRange);
    packed = decoder.readUint8();
    val.keyOnly = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.callbacks = decoder.decodeStruct(codec.AssociatedInterfacePtrInfo);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  Database_Get_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Database_Get_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int64, val.transactionId);
    encoder.encodeStruct(codec.Int64, val.objectStoreId);
    encoder.encodeStruct(codec.Int64, val.indexId);
    encoder.encodeStructPointer(KeyRange, val.keyRange);
    packed = 0;
    packed |= (val.keyOnly & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.AssociatedInterfacePtrInfo, val.callbacks);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function Database_GetAll_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Database_GetAll_Params.prototype.initDefaults_ = function() {
    this.transactionId = 0;
    this.objectStoreId = 0;
    this.indexId = 0;
    this.keyRange = null;
    this.keyOnly = false;
    this.maxCount = 0;
    this.callbacks = new associatedBindings.AssociatedInterfacePtrInfo();
  };
  Database_GetAll_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Database_GetAll_Params.generate = function(generator_) {
    var generated = new Database_GetAll_Params;
    generated.transactionId = generator_.generateInt64();
    generated.objectStoreId = generator_.generateInt64();
    generated.indexId = generator_.generateInt64();
    generated.keyRange = generator_.generateStruct(indexedDb.mojom.KeyRange, false);
    generated.keyOnly = generator_.generateBool();
    generated.maxCount = generator_.generateInt64();
    generated.callbacks = generator_.generateAssociatedInterface("indexedDb.mojom.Callbacks", false);
    return generated;
  };

  Database_GetAll_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.transactionId = mutator_.mutateInt64(this.transactionId);
    }
    if (mutator_.chooseMutateField()) {
      this.objectStoreId = mutator_.mutateInt64(this.objectStoreId);
    }
    if (mutator_.chooseMutateField()) {
      this.indexId = mutator_.mutateInt64(this.indexId);
    }
    if (mutator_.chooseMutateField()) {
      this.keyRange = mutator_.mutateStruct(indexedDb.mojom.KeyRange, false);
    }
    if (mutator_.chooseMutateField()) {
      this.keyOnly = mutator_.mutateBool(this.keyOnly);
    }
    if (mutator_.chooseMutateField()) {
      this.maxCount = mutator_.mutateInt64(this.maxCount);
    }
    if (mutator_.chooseMutateField()) {
      this.callbacks = mutator_.mutateAssociatedInterface(this.callbacks, "indexedDb.mojom.Callbacks", false);
    }
    return this;
  };
  Database_GetAll_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.callbacks !== null) {
      Array.prototype.push.apply(handles, ["indexedDb.mojom.CallbacksAssociatedPtr"]);
    }
    return handles;
  };

  Database_GetAll_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Database_GetAll_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.callbacks = handles[idx++];;
    return idx;
  };

  Database_GetAll_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 64}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;





    // validate Database_GetAll_Params.keyRange
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 24, KeyRange, false);
    if (err !== validator.validationError.NONE)
        return err;




    // validate Database_GetAll_Params.callbacks
    err = messageValidator.validateAssociatedInterface(offset + codec.kStructHeaderSize + 48, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Database_GetAll_Params.encodedSize = codec.kStructHeaderSize + 56;

  Database_GetAll_Params.decode = function(decoder) {
    var packed;
    var val = new Database_GetAll_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.transactionId = decoder.decodeStruct(codec.Int64);
    val.objectStoreId = decoder.decodeStruct(codec.Int64);
    val.indexId = decoder.decodeStruct(codec.Int64);
    val.keyRange = decoder.decodeStructPointer(KeyRange);
    packed = decoder.readUint8();
    val.keyOnly = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.maxCount = decoder.decodeStruct(codec.Int64);
    val.callbacks = decoder.decodeStruct(codec.AssociatedInterfacePtrInfo);
    return val;
  };

  Database_GetAll_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Database_GetAll_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int64, val.transactionId);
    encoder.encodeStruct(codec.Int64, val.objectStoreId);
    encoder.encodeStruct(codec.Int64, val.indexId);
    encoder.encodeStructPointer(KeyRange, val.keyRange);
    packed = 0;
    packed |= (val.keyOnly & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.Int64, val.maxCount);
    encoder.encodeStruct(codec.AssociatedInterfacePtrInfo, val.callbacks);
  };
  function Database_Put_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Database_Put_Params.prototype.initDefaults_ = function() {
    this.transactionId = 0;
    this.objectStoreId = 0;
    this.value = null;
    this.key = null;
    this.mode = 0;
    this.indexKeys = null;
    this.callbacks = new associatedBindings.AssociatedInterfacePtrInfo();
  };
  Database_Put_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Database_Put_Params.generate = function(generator_) {
    var generated = new Database_Put_Params;
    generated.transactionId = generator_.generateInt64();
    generated.objectStoreId = generator_.generateInt64();
    generated.value = generator_.generateStruct(indexedDb.mojom.Value, false);
    generated.key = generator_.generateStruct(indexedDb.mojom.Key, false);
    generated.mode = generator_.generateEnum(0, 2);
    generated.indexKeys = generator_.generateArray(function() {
      return generator_.generateStruct(indexedDb.mojom.IndexKeys, false);
    });
    generated.callbacks = generator_.generateAssociatedInterface("indexedDb.mojom.Callbacks", false);
    return generated;
  };

  Database_Put_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.transactionId = mutator_.mutateInt64(this.transactionId);
    }
    if (mutator_.chooseMutateField()) {
      this.objectStoreId = mutator_.mutateInt64(this.objectStoreId);
    }
    if (mutator_.chooseMutateField()) {
      this.value = mutator_.mutateStruct(indexedDb.mojom.Value, false);
    }
    if (mutator_.chooseMutateField()) {
      this.key = mutator_.mutateStruct(indexedDb.mojom.Key, false);
    }
    if (mutator_.chooseMutateField()) {
      this.mode = mutator_.mutateEnum(this.mode, 0, 2);
    }
    if (mutator_.chooseMutateField()) {
      this.indexKeys = mutator_.mutateArray(this.indexKeys, function(val) {
        return mutator_.mutateStruct(indexedDb.mojom.IndexKeys, false);
      });
    }
    if (mutator_.chooseMutateField()) {
      this.callbacks = mutator_.mutateAssociatedInterface(this.callbacks, "indexedDb.mojom.Callbacks", false);
    }
    return this;
  };
  Database_Put_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.value !== null) {
      Array.prototype.push.apply(handles, this.value.getHandleDeps());
    }
    if (this.callbacks !== null) {
      Array.prototype.push.apply(handles, ["indexedDb.mojom.CallbacksAssociatedPtr"]);
    }
    return handles;
  };

  Database_Put_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Database_Put_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    idx = this.value.setHandlesInternal_(handles, idx);
    this.callbacks = handles[idx++];;
    return idx;
  };

  Database_Put_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 64}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;




    // validate Database_Put_Params.value
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, Value, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate Database_Put_Params.key
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 24, Key, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate Database_Put_Params.mode
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 32, PutMode);
    if (err !== validator.validationError.NONE)
        return err;


    // validate Database_Put_Params.indexKeys
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 40, 8, new codec.PointerTo(IndexKeys), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;


    // validate Database_Put_Params.callbacks
    err = messageValidator.validateAssociatedInterface(offset + codec.kStructHeaderSize + 48, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Database_Put_Params.encodedSize = codec.kStructHeaderSize + 56;

  Database_Put_Params.decode = function(decoder) {
    var packed;
    var val = new Database_Put_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.transactionId = decoder.decodeStruct(codec.Int64);
    val.objectStoreId = decoder.decodeStruct(codec.Int64);
    val.value = decoder.decodeStructPointer(Value);
    val.key = decoder.decodeStructPointer(Key);
    val.mode = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.indexKeys = decoder.decodeArrayPointer(new codec.PointerTo(IndexKeys));
    val.callbacks = decoder.decodeStruct(codec.AssociatedInterfacePtrInfo);
    return val;
  };

  Database_Put_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Database_Put_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int64, val.transactionId);
    encoder.encodeStruct(codec.Int64, val.objectStoreId);
    encoder.encodeStructPointer(Value, val.value);
    encoder.encodeStructPointer(Key, val.key);
    encoder.encodeStruct(codec.Int32, val.mode);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeArrayPointer(new codec.PointerTo(IndexKeys), val.indexKeys);
    encoder.encodeStruct(codec.AssociatedInterfacePtrInfo, val.callbacks);
  };
  function Database_SetIndexKeys_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Database_SetIndexKeys_Params.prototype.initDefaults_ = function() {
    this.transactionId = 0;
    this.objectStoreId = 0;
    this.primaryKey = null;
    this.indexKeys = null;
  };
  Database_SetIndexKeys_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Database_SetIndexKeys_Params.generate = function(generator_) {
    var generated = new Database_SetIndexKeys_Params;
    generated.transactionId = generator_.generateInt64();
    generated.objectStoreId = generator_.generateInt64();
    generated.primaryKey = generator_.generateStruct(indexedDb.mojom.Key, false);
    generated.indexKeys = generator_.generateArray(function() {
      return generator_.generateStruct(indexedDb.mojom.IndexKeys, false);
    });
    return generated;
  };

  Database_SetIndexKeys_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.transactionId = mutator_.mutateInt64(this.transactionId);
    }
    if (mutator_.chooseMutateField()) {
      this.objectStoreId = mutator_.mutateInt64(this.objectStoreId);
    }
    if (mutator_.chooseMutateField()) {
      this.primaryKey = mutator_.mutateStruct(indexedDb.mojom.Key, false);
    }
    if (mutator_.chooseMutateField()) {
      this.indexKeys = mutator_.mutateArray(this.indexKeys, function(val) {
        return mutator_.mutateStruct(indexedDb.mojom.IndexKeys, false);
      });
    }
    return this;
  };
  Database_SetIndexKeys_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Database_SetIndexKeys_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Database_SetIndexKeys_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Database_SetIndexKeys_Params.validate = function(messageValidator, offset) {
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




    // validate Database_SetIndexKeys_Params.primaryKey
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, Key, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate Database_SetIndexKeys_Params.indexKeys
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 24, 8, new codec.PointerTo(IndexKeys), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Database_SetIndexKeys_Params.encodedSize = codec.kStructHeaderSize + 32;

  Database_SetIndexKeys_Params.decode = function(decoder) {
    var packed;
    var val = new Database_SetIndexKeys_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.transactionId = decoder.decodeStruct(codec.Int64);
    val.objectStoreId = decoder.decodeStruct(codec.Int64);
    val.primaryKey = decoder.decodeStructPointer(Key);
    val.indexKeys = decoder.decodeArrayPointer(new codec.PointerTo(IndexKeys));
    return val;
  };

  Database_SetIndexKeys_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Database_SetIndexKeys_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int64, val.transactionId);
    encoder.encodeStruct(codec.Int64, val.objectStoreId);
    encoder.encodeStructPointer(Key, val.primaryKey);
    encoder.encodeArrayPointer(new codec.PointerTo(IndexKeys), val.indexKeys);
  };
  function Database_SetIndexesReady_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Database_SetIndexesReady_Params.prototype.initDefaults_ = function() {
    this.transactionId = 0;
    this.objectStoreId = 0;
    this.indexIds = null;
  };
  Database_SetIndexesReady_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Database_SetIndexesReady_Params.generate = function(generator_) {
    var generated = new Database_SetIndexesReady_Params;
    generated.transactionId = generator_.generateInt64();
    generated.objectStoreId = generator_.generateInt64();
    generated.indexIds = generator_.generateArray(function() {
      return generator_.generateInt64();
    });
    return generated;
  };

  Database_SetIndexesReady_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.transactionId = mutator_.mutateInt64(this.transactionId);
    }
    if (mutator_.chooseMutateField()) {
      this.objectStoreId = mutator_.mutateInt64(this.objectStoreId);
    }
    if (mutator_.chooseMutateField()) {
      this.indexIds = mutator_.mutateArray(this.indexIds, function(val) {
        return mutator_.mutateInt64(val);
      });
    }
    return this;
  };
  Database_SetIndexesReady_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Database_SetIndexesReady_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Database_SetIndexesReady_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Database_SetIndexesReady_Params.validate = function(messageValidator, offset) {
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




    // validate Database_SetIndexesReady_Params.indexIds
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 16, 8, codec.Int64, false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Database_SetIndexesReady_Params.encodedSize = codec.kStructHeaderSize + 24;

  Database_SetIndexesReady_Params.decode = function(decoder) {
    var packed;
    var val = new Database_SetIndexesReady_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.transactionId = decoder.decodeStruct(codec.Int64);
    val.objectStoreId = decoder.decodeStruct(codec.Int64);
    val.indexIds = decoder.decodeArrayPointer(codec.Int64);
    return val;
  };

  Database_SetIndexesReady_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Database_SetIndexesReady_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int64, val.transactionId);
    encoder.encodeStruct(codec.Int64, val.objectStoreId);
    encoder.encodeArrayPointer(codec.Int64, val.indexIds);
  };
  function Database_OpenCursor_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Database_OpenCursor_Params.prototype.initDefaults_ = function() {
    this.transactionId = 0;
    this.objectStoreId = 0;
    this.indexId = 0;
    this.keyRange = null;
    this.direction = 0;
    this.keyOnly = false;
    this.taskType = 0;
    this.callbacks = new associatedBindings.AssociatedInterfacePtrInfo();
  };
  Database_OpenCursor_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Database_OpenCursor_Params.generate = function(generator_) {
    var generated = new Database_OpenCursor_Params;
    generated.transactionId = generator_.generateInt64();
    generated.objectStoreId = generator_.generateInt64();
    generated.indexId = generator_.generateInt64();
    generated.keyRange = generator_.generateStruct(indexedDb.mojom.KeyRange, false);
    generated.direction = generator_.generateEnum(0, 3);
    generated.keyOnly = generator_.generateBool();
    generated.taskType = generator_.generateEnum(0, 1);
    generated.callbacks = generator_.generateAssociatedInterface("indexedDb.mojom.Callbacks", false);
    return generated;
  };

  Database_OpenCursor_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.transactionId = mutator_.mutateInt64(this.transactionId);
    }
    if (mutator_.chooseMutateField()) {
      this.objectStoreId = mutator_.mutateInt64(this.objectStoreId);
    }
    if (mutator_.chooseMutateField()) {
      this.indexId = mutator_.mutateInt64(this.indexId);
    }
    if (mutator_.chooseMutateField()) {
      this.keyRange = mutator_.mutateStruct(indexedDb.mojom.KeyRange, false);
    }
    if (mutator_.chooseMutateField()) {
      this.direction = mutator_.mutateEnum(this.direction, 0, 3);
    }
    if (mutator_.chooseMutateField()) {
      this.keyOnly = mutator_.mutateBool(this.keyOnly);
    }
    if (mutator_.chooseMutateField()) {
      this.taskType = mutator_.mutateEnum(this.taskType, 0, 1);
    }
    if (mutator_.chooseMutateField()) {
      this.callbacks = mutator_.mutateAssociatedInterface(this.callbacks, "indexedDb.mojom.Callbacks", false);
    }
    return this;
  };
  Database_OpenCursor_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.callbacks !== null) {
      Array.prototype.push.apply(handles, ["indexedDb.mojom.CallbacksAssociatedPtr"]);
    }
    return handles;
  };

  Database_OpenCursor_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Database_OpenCursor_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.callbacks = handles[idx++];;
    return idx;
  };

  Database_OpenCursor_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 64}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;





    // validate Database_OpenCursor_Params.keyRange
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 24, KeyRange, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate Database_OpenCursor_Params.direction
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 32, CursorDirection);
    if (err !== validator.validationError.NONE)
        return err;



    // validate Database_OpenCursor_Params.taskType
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 40, TaskType);
    if (err !== validator.validationError.NONE)
        return err;


    // validate Database_OpenCursor_Params.callbacks
    err = messageValidator.validateAssociatedInterface(offset + codec.kStructHeaderSize + 44, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Database_OpenCursor_Params.encodedSize = codec.kStructHeaderSize + 56;

  Database_OpenCursor_Params.decode = function(decoder) {
    var packed;
    var val = new Database_OpenCursor_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.transactionId = decoder.decodeStruct(codec.Int64);
    val.objectStoreId = decoder.decodeStruct(codec.Int64);
    val.indexId = decoder.decodeStruct(codec.Int64);
    val.keyRange = decoder.decodeStructPointer(KeyRange);
    val.direction = decoder.decodeStruct(codec.Int32);
    packed = decoder.readUint8();
    val.keyOnly = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.taskType = decoder.decodeStruct(codec.Int32);
    val.callbacks = decoder.decodeStruct(codec.AssociatedInterfacePtrInfo);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  Database_OpenCursor_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Database_OpenCursor_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int64, val.transactionId);
    encoder.encodeStruct(codec.Int64, val.objectStoreId);
    encoder.encodeStruct(codec.Int64, val.indexId);
    encoder.encodeStructPointer(KeyRange, val.keyRange);
    encoder.encodeStruct(codec.Int32, val.direction);
    packed = 0;
    packed |= (val.keyOnly & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.Int32, val.taskType);
    encoder.encodeStruct(codec.AssociatedInterfacePtrInfo, val.callbacks);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function Database_Count_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Database_Count_Params.prototype.initDefaults_ = function() {
    this.transactionId = 0;
    this.objectStoreId = 0;
    this.indexId = 0;
    this.keyRange = null;
    this.callbacks = new associatedBindings.AssociatedInterfacePtrInfo();
  };
  Database_Count_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Database_Count_Params.generate = function(generator_) {
    var generated = new Database_Count_Params;
    generated.transactionId = generator_.generateInt64();
    generated.objectStoreId = generator_.generateInt64();
    generated.indexId = generator_.generateInt64();
    generated.keyRange = generator_.generateStruct(indexedDb.mojom.KeyRange, false);
    generated.callbacks = generator_.generateAssociatedInterface("indexedDb.mojom.Callbacks", false);
    return generated;
  };

  Database_Count_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.transactionId = mutator_.mutateInt64(this.transactionId);
    }
    if (mutator_.chooseMutateField()) {
      this.objectStoreId = mutator_.mutateInt64(this.objectStoreId);
    }
    if (mutator_.chooseMutateField()) {
      this.indexId = mutator_.mutateInt64(this.indexId);
    }
    if (mutator_.chooseMutateField()) {
      this.keyRange = mutator_.mutateStruct(indexedDb.mojom.KeyRange, false);
    }
    if (mutator_.chooseMutateField()) {
      this.callbacks = mutator_.mutateAssociatedInterface(this.callbacks, "indexedDb.mojom.Callbacks", false);
    }
    return this;
  };
  Database_Count_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.callbacks !== null) {
      Array.prototype.push.apply(handles, ["indexedDb.mojom.CallbacksAssociatedPtr"]);
    }
    return handles;
  };

  Database_Count_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Database_Count_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.callbacks = handles[idx++];;
    return idx;
  };

  Database_Count_Params.validate = function(messageValidator, offset) {
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





    // validate Database_Count_Params.keyRange
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 24, KeyRange, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate Database_Count_Params.callbacks
    err = messageValidator.validateAssociatedInterface(offset + codec.kStructHeaderSize + 32, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Database_Count_Params.encodedSize = codec.kStructHeaderSize + 40;

  Database_Count_Params.decode = function(decoder) {
    var packed;
    var val = new Database_Count_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.transactionId = decoder.decodeStruct(codec.Int64);
    val.objectStoreId = decoder.decodeStruct(codec.Int64);
    val.indexId = decoder.decodeStruct(codec.Int64);
    val.keyRange = decoder.decodeStructPointer(KeyRange);
    val.callbacks = decoder.decodeStruct(codec.AssociatedInterfacePtrInfo);
    return val;
  };

  Database_Count_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Database_Count_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int64, val.transactionId);
    encoder.encodeStruct(codec.Int64, val.objectStoreId);
    encoder.encodeStruct(codec.Int64, val.indexId);
    encoder.encodeStructPointer(KeyRange, val.keyRange);
    encoder.encodeStruct(codec.AssociatedInterfacePtrInfo, val.callbacks);
  };
  function Database_DeleteRange_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Database_DeleteRange_Params.prototype.initDefaults_ = function() {
    this.transactionId = 0;
    this.objectStoreId = 0;
    this.keyRange = null;
    this.callbacks = new associatedBindings.AssociatedInterfacePtrInfo();
  };
  Database_DeleteRange_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Database_DeleteRange_Params.generate = function(generator_) {
    var generated = new Database_DeleteRange_Params;
    generated.transactionId = generator_.generateInt64();
    generated.objectStoreId = generator_.generateInt64();
    generated.keyRange = generator_.generateStruct(indexedDb.mojom.KeyRange, false);
    generated.callbacks = generator_.generateAssociatedInterface("indexedDb.mojom.Callbacks", false);
    return generated;
  };

  Database_DeleteRange_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.transactionId = mutator_.mutateInt64(this.transactionId);
    }
    if (mutator_.chooseMutateField()) {
      this.objectStoreId = mutator_.mutateInt64(this.objectStoreId);
    }
    if (mutator_.chooseMutateField()) {
      this.keyRange = mutator_.mutateStruct(indexedDb.mojom.KeyRange, false);
    }
    if (mutator_.chooseMutateField()) {
      this.callbacks = mutator_.mutateAssociatedInterface(this.callbacks, "indexedDb.mojom.Callbacks", false);
    }
    return this;
  };
  Database_DeleteRange_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.callbacks !== null) {
      Array.prototype.push.apply(handles, ["indexedDb.mojom.CallbacksAssociatedPtr"]);
    }
    return handles;
  };

  Database_DeleteRange_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Database_DeleteRange_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.callbacks = handles[idx++];;
    return idx;
  };

  Database_DeleteRange_Params.validate = function(messageValidator, offset) {
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




    // validate Database_DeleteRange_Params.keyRange
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, KeyRange, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate Database_DeleteRange_Params.callbacks
    err = messageValidator.validateAssociatedInterface(offset + codec.kStructHeaderSize + 24, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Database_DeleteRange_Params.encodedSize = codec.kStructHeaderSize + 32;

  Database_DeleteRange_Params.decode = function(decoder) {
    var packed;
    var val = new Database_DeleteRange_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.transactionId = decoder.decodeStruct(codec.Int64);
    val.objectStoreId = decoder.decodeStruct(codec.Int64);
    val.keyRange = decoder.decodeStructPointer(KeyRange);
    val.callbacks = decoder.decodeStruct(codec.AssociatedInterfacePtrInfo);
    return val;
  };

  Database_DeleteRange_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Database_DeleteRange_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int64, val.transactionId);
    encoder.encodeStruct(codec.Int64, val.objectStoreId);
    encoder.encodeStructPointer(KeyRange, val.keyRange);
    encoder.encodeStruct(codec.AssociatedInterfacePtrInfo, val.callbacks);
  };
  function Database_Clear_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Database_Clear_Params.prototype.initDefaults_ = function() {
    this.transactionId = 0;
    this.objectStoreId = 0;
    this.callbacks = new associatedBindings.AssociatedInterfacePtrInfo();
  };
  Database_Clear_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Database_Clear_Params.generate = function(generator_) {
    var generated = new Database_Clear_Params;
    generated.transactionId = generator_.generateInt64();
    generated.objectStoreId = generator_.generateInt64();
    generated.callbacks = generator_.generateAssociatedInterface("indexedDb.mojom.Callbacks", false);
    return generated;
  };

  Database_Clear_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.transactionId = mutator_.mutateInt64(this.transactionId);
    }
    if (mutator_.chooseMutateField()) {
      this.objectStoreId = mutator_.mutateInt64(this.objectStoreId);
    }
    if (mutator_.chooseMutateField()) {
      this.callbacks = mutator_.mutateAssociatedInterface(this.callbacks, "indexedDb.mojom.Callbacks", false);
    }
    return this;
  };
  Database_Clear_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.callbacks !== null) {
      Array.prototype.push.apply(handles, ["indexedDb.mojom.CallbacksAssociatedPtr"]);
    }
    return handles;
  };

  Database_Clear_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Database_Clear_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.callbacks = handles[idx++];;
    return idx;
  };

  Database_Clear_Params.validate = function(messageValidator, offset) {
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




    // validate Database_Clear_Params.callbacks
    err = messageValidator.validateAssociatedInterface(offset + codec.kStructHeaderSize + 16, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Database_Clear_Params.encodedSize = codec.kStructHeaderSize + 24;

  Database_Clear_Params.decode = function(decoder) {
    var packed;
    var val = new Database_Clear_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.transactionId = decoder.decodeStruct(codec.Int64);
    val.objectStoreId = decoder.decodeStruct(codec.Int64);
    val.callbacks = decoder.decodeStruct(codec.AssociatedInterfacePtrInfo);
    return val;
  };

  Database_Clear_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Database_Clear_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int64, val.transactionId);
    encoder.encodeStruct(codec.Int64, val.objectStoreId);
    encoder.encodeStruct(codec.AssociatedInterfacePtrInfo, val.callbacks);
  };
  function Database_CreateIndex_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Database_CreateIndex_Params.prototype.initDefaults_ = function() {
    this.transactionId = 0;
    this.objectStoreId = 0;
    this.indexId = 0;
    this.name = null;
    this.keyPath = null;
    this.unique = false;
    this.multiEntry = false;
  };
  Database_CreateIndex_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Database_CreateIndex_Params.generate = function(generator_) {
    var generated = new Database_CreateIndex_Params;
    generated.transactionId = generator_.generateInt64();
    generated.objectStoreId = generator_.generateInt64();
    generated.indexId = generator_.generateInt64();
    generated.name = generator_.generateStruct(mojoBase.mojom.String16, false);
    generated.keyPath = generator_.generateStruct(indexedDb.mojom.KeyPath, false);
    generated.unique = generator_.generateBool();
    generated.multiEntry = generator_.generateBool();
    return generated;
  };

  Database_CreateIndex_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.transactionId = mutator_.mutateInt64(this.transactionId);
    }
    if (mutator_.chooseMutateField()) {
      this.objectStoreId = mutator_.mutateInt64(this.objectStoreId);
    }
    if (mutator_.chooseMutateField()) {
      this.indexId = mutator_.mutateInt64(this.indexId);
    }
    if (mutator_.chooseMutateField()) {
      this.name = mutator_.mutateStruct(mojoBase.mojom.String16, false);
    }
    if (mutator_.chooseMutateField()) {
      this.keyPath = mutator_.mutateStruct(indexedDb.mojom.KeyPath, false);
    }
    if (mutator_.chooseMutateField()) {
      this.unique = mutator_.mutateBool(this.unique);
    }
    if (mutator_.chooseMutateField()) {
      this.multiEntry = mutator_.mutateBool(this.multiEntry);
    }
    return this;
  };
  Database_CreateIndex_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Database_CreateIndex_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Database_CreateIndex_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Database_CreateIndex_Params.validate = function(messageValidator, offset) {
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





    // validate Database_CreateIndex_Params.name
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 24, string161$.String16, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate Database_CreateIndex_Params.keyPath
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 32, KeyPath, false);
    if (err !== validator.validationError.NONE)
        return err;



    return validator.validationError.NONE;
  };

  Database_CreateIndex_Params.encodedSize = codec.kStructHeaderSize + 48;

  Database_CreateIndex_Params.decode = function(decoder) {
    var packed;
    var val = new Database_CreateIndex_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.transactionId = decoder.decodeStruct(codec.Int64);
    val.objectStoreId = decoder.decodeStruct(codec.Int64);
    val.indexId = decoder.decodeStruct(codec.Int64);
    val.name = decoder.decodeStructPointer(string161$.String16);
    val.keyPath = decoder.decodeStructPointer(KeyPath);
    packed = decoder.readUint8();
    val.unique = (packed >> 0) & 1 ? true : false;
    val.multiEntry = (packed >> 1) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  Database_CreateIndex_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Database_CreateIndex_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int64, val.transactionId);
    encoder.encodeStruct(codec.Int64, val.objectStoreId);
    encoder.encodeStruct(codec.Int64, val.indexId);
    encoder.encodeStructPointer(string161$.String16, val.name);
    encoder.encodeStructPointer(KeyPath, val.keyPath);
    packed = 0;
    packed |= (val.unique & 1) << 0
    packed |= (val.multiEntry & 1) << 1
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function Database_DeleteIndex_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Database_DeleteIndex_Params.prototype.initDefaults_ = function() {
    this.transactionId = 0;
    this.objectStoreId = 0;
    this.indexId = 0;
  };
  Database_DeleteIndex_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Database_DeleteIndex_Params.generate = function(generator_) {
    var generated = new Database_DeleteIndex_Params;
    generated.transactionId = generator_.generateInt64();
    generated.objectStoreId = generator_.generateInt64();
    generated.indexId = generator_.generateInt64();
    return generated;
  };

  Database_DeleteIndex_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.transactionId = mutator_.mutateInt64(this.transactionId);
    }
    if (mutator_.chooseMutateField()) {
      this.objectStoreId = mutator_.mutateInt64(this.objectStoreId);
    }
    if (mutator_.chooseMutateField()) {
      this.indexId = mutator_.mutateInt64(this.indexId);
    }
    return this;
  };
  Database_DeleteIndex_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Database_DeleteIndex_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Database_DeleteIndex_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Database_DeleteIndex_Params.validate = function(messageValidator, offset) {
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




    return validator.validationError.NONE;
  };

  Database_DeleteIndex_Params.encodedSize = codec.kStructHeaderSize + 24;

  Database_DeleteIndex_Params.decode = function(decoder) {
    var packed;
    var val = new Database_DeleteIndex_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.transactionId = decoder.decodeStruct(codec.Int64);
    val.objectStoreId = decoder.decodeStruct(codec.Int64);
    val.indexId = decoder.decodeStruct(codec.Int64);
    return val;
  };

  Database_DeleteIndex_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Database_DeleteIndex_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int64, val.transactionId);
    encoder.encodeStruct(codec.Int64, val.objectStoreId);
    encoder.encodeStruct(codec.Int64, val.indexId);
  };
  function Database_RenameIndex_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Database_RenameIndex_Params.prototype.initDefaults_ = function() {
    this.transactionId = 0;
    this.objectStoreId = 0;
    this.indexId = 0;
    this.newName = null;
  };
  Database_RenameIndex_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Database_RenameIndex_Params.generate = function(generator_) {
    var generated = new Database_RenameIndex_Params;
    generated.transactionId = generator_.generateInt64();
    generated.objectStoreId = generator_.generateInt64();
    generated.indexId = generator_.generateInt64();
    generated.newName = generator_.generateStruct(mojoBase.mojom.String16, false);
    return generated;
  };

  Database_RenameIndex_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.transactionId = mutator_.mutateInt64(this.transactionId);
    }
    if (mutator_.chooseMutateField()) {
      this.objectStoreId = mutator_.mutateInt64(this.objectStoreId);
    }
    if (mutator_.chooseMutateField()) {
      this.indexId = mutator_.mutateInt64(this.indexId);
    }
    if (mutator_.chooseMutateField()) {
      this.newName = mutator_.mutateStruct(mojoBase.mojom.String16, false);
    }
    return this;
  };
  Database_RenameIndex_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Database_RenameIndex_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Database_RenameIndex_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Database_RenameIndex_Params.validate = function(messageValidator, offset) {
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





    // validate Database_RenameIndex_Params.newName
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 24, string161$.String16, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Database_RenameIndex_Params.encodedSize = codec.kStructHeaderSize + 32;

  Database_RenameIndex_Params.decode = function(decoder) {
    var packed;
    var val = new Database_RenameIndex_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.transactionId = decoder.decodeStruct(codec.Int64);
    val.objectStoreId = decoder.decodeStruct(codec.Int64);
    val.indexId = decoder.decodeStruct(codec.Int64);
    val.newName = decoder.decodeStructPointer(string161$.String16);
    return val;
  };

  Database_RenameIndex_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Database_RenameIndex_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int64, val.transactionId);
    encoder.encodeStruct(codec.Int64, val.objectStoreId);
    encoder.encodeStruct(codec.Int64, val.indexId);
    encoder.encodeStructPointer(string161$.String16, val.newName);
  };
  function Database_Abort_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Database_Abort_Params.prototype.initDefaults_ = function() {
    this.transactionId = 0;
  };
  Database_Abort_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Database_Abort_Params.generate = function(generator_) {
    var generated = new Database_Abort_Params;
    generated.transactionId = generator_.generateInt64();
    return generated;
  };

  Database_Abort_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.transactionId = mutator_.mutateInt64(this.transactionId);
    }
    return this;
  };
  Database_Abort_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Database_Abort_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Database_Abort_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Database_Abort_Params.validate = function(messageValidator, offset) {
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

  Database_Abort_Params.encodedSize = codec.kStructHeaderSize + 8;

  Database_Abort_Params.decode = function(decoder) {
    var packed;
    var val = new Database_Abort_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.transactionId = decoder.decodeStruct(codec.Int64);
    return val;
  };

  Database_Abort_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Database_Abort_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int64, val.transactionId);
  };
  function Database_Commit_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Database_Commit_Params.prototype.initDefaults_ = function() {
    this.transactionId = 0;
  };
  Database_Commit_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Database_Commit_Params.generate = function(generator_) {
    var generated = new Database_Commit_Params;
    generated.transactionId = generator_.generateInt64();
    return generated;
  };

  Database_Commit_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.transactionId = mutator_.mutateInt64(this.transactionId);
    }
    return this;
  };
  Database_Commit_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Database_Commit_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Database_Commit_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Database_Commit_Params.validate = function(messageValidator, offset) {
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

  Database_Commit_Params.encodedSize = codec.kStructHeaderSize + 8;

  Database_Commit_Params.decode = function(decoder) {
    var packed;
    var val = new Database_Commit_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.transactionId = decoder.decodeStruct(codec.Int64);
    return val;
  };

  Database_Commit_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Database_Commit_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int64, val.transactionId);
  };
  function Factory_GetDatabaseNames_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Factory_GetDatabaseNames_Params.prototype.initDefaults_ = function() {
    this.callbacks = new associatedBindings.AssociatedInterfacePtrInfo();
    this.origin = null;
  };
  Factory_GetDatabaseNames_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Factory_GetDatabaseNames_Params.generate = function(generator_) {
    var generated = new Factory_GetDatabaseNames_Params;
    generated.callbacks = generator_.generateAssociatedInterface("indexedDb.mojom.Callbacks", false);
    generated.origin = generator_.generateStruct(url.mojom.Origin, false);
    return generated;
  };

  Factory_GetDatabaseNames_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.callbacks = mutator_.mutateAssociatedInterface(this.callbacks, "indexedDb.mojom.Callbacks", false);
    }
    if (mutator_.chooseMutateField()) {
      this.origin = mutator_.mutateStruct(url.mojom.Origin, false);
    }
    return this;
  };
  Factory_GetDatabaseNames_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.callbacks !== null) {
      Array.prototype.push.apply(handles, ["indexedDb.mojom.CallbacksAssociatedPtr"]);
    }
    return handles;
  };

  Factory_GetDatabaseNames_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Factory_GetDatabaseNames_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.callbacks = handles[idx++];;
    return idx;
  };

  Factory_GetDatabaseNames_Params.validate = function(messageValidator, offset) {
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


    // validate Factory_GetDatabaseNames_Params.callbacks
    err = messageValidator.validateAssociatedInterface(offset + codec.kStructHeaderSize + 0, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate Factory_GetDatabaseNames_Params.origin
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, origin$.Origin, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Factory_GetDatabaseNames_Params.encodedSize = codec.kStructHeaderSize + 16;

  Factory_GetDatabaseNames_Params.decode = function(decoder) {
    var packed;
    var val = new Factory_GetDatabaseNames_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.callbacks = decoder.decodeStruct(codec.AssociatedInterfacePtrInfo);
    val.origin = decoder.decodeStructPointer(origin$.Origin);
    return val;
  };

  Factory_GetDatabaseNames_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Factory_GetDatabaseNames_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.AssociatedInterfacePtrInfo, val.callbacks);
    encoder.encodeStructPointer(origin$.Origin, val.origin);
  };
  function Factory_Open_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Factory_Open_Params.prototype.initDefaults_ = function() {
    this.callbacks = new associatedBindings.AssociatedInterfacePtrInfo();
    this.databaseCallbacks = new associatedBindings.AssociatedInterfacePtrInfo();
    this.origin = null;
    this.name = null;
    this.version = 0;
    this.transactionId = 0;
  };
  Factory_Open_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Factory_Open_Params.generate = function(generator_) {
    var generated = new Factory_Open_Params;
    generated.callbacks = generator_.generateAssociatedInterface("indexedDb.mojom.Callbacks", false);
    generated.databaseCallbacks = generator_.generateAssociatedInterface("indexedDb.mojom.DatabaseCallbacks", false);
    generated.origin = generator_.generateStruct(url.mojom.Origin, false);
    generated.name = generator_.generateStruct(mojoBase.mojom.String16, false);
    generated.version = generator_.generateInt64();
    generated.transactionId = generator_.generateInt64();
    return generated;
  };

  Factory_Open_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.callbacks = mutator_.mutateAssociatedInterface(this.callbacks, "indexedDb.mojom.Callbacks", false);
    }
    if (mutator_.chooseMutateField()) {
      this.databaseCallbacks = mutator_.mutateAssociatedInterface(this.databaseCallbacks, "indexedDb.mojom.DatabaseCallbacks", false);
    }
    if (mutator_.chooseMutateField()) {
      this.origin = mutator_.mutateStruct(url.mojom.Origin, false);
    }
    if (mutator_.chooseMutateField()) {
      this.name = mutator_.mutateStruct(mojoBase.mojom.String16, false);
    }
    if (mutator_.chooseMutateField()) {
      this.version = mutator_.mutateInt64(this.version);
    }
    if (mutator_.chooseMutateField()) {
      this.transactionId = mutator_.mutateInt64(this.transactionId);
    }
    return this;
  };
  Factory_Open_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.callbacks !== null) {
      Array.prototype.push.apply(handles, ["indexedDb.mojom.CallbacksAssociatedPtr"]);
    }
    if (this.databaseCallbacks !== null) {
      Array.prototype.push.apply(handles, ["indexedDb.mojom.DatabaseCallbacksAssociatedPtr"]);
    }
    return handles;
  };

  Factory_Open_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Factory_Open_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.callbacks = handles[idx++];;
    this.databaseCallbacks = handles[idx++];;
    return idx;
  };

  Factory_Open_Params.validate = function(messageValidator, offset) {
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


    // validate Factory_Open_Params.callbacks
    err = messageValidator.validateAssociatedInterface(offset + codec.kStructHeaderSize + 0, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate Factory_Open_Params.databaseCallbacks
    err = messageValidator.validateAssociatedInterface(offset + codec.kStructHeaderSize + 8, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate Factory_Open_Params.origin
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, origin$.Origin, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate Factory_Open_Params.name
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 24, string161$.String16, false);
    if (err !== validator.validationError.NONE)
        return err;



    return validator.validationError.NONE;
  };

  Factory_Open_Params.encodedSize = codec.kStructHeaderSize + 48;

  Factory_Open_Params.decode = function(decoder) {
    var packed;
    var val = new Factory_Open_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.callbacks = decoder.decodeStruct(codec.AssociatedInterfacePtrInfo);
    val.databaseCallbacks = decoder.decodeStruct(codec.AssociatedInterfacePtrInfo);
    val.origin = decoder.decodeStructPointer(origin$.Origin);
    val.name = decoder.decodeStructPointer(string161$.String16);
    val.version = decoder.decodeStruct(codec.Int64);
    val.transactionId = decoder.decodeStruct(codec.Int64);
    return val;
  };

  Factory_Open_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Factory_Open_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.AssociatedInterfacePtrInfo, val.callbacks);
    encoder.encodeStruct(codec.AssociatedInterfacePtrInfo, val.databaseCallbacks);
    encoder.encodeStructPointer(origin$.Origin, val.origin);
    encoder.encodeStructPointer(string161$.String16, val.name);
    encoder.encodeStruct(codec.Int64, val.version);
    encoder.encodeStruct(codec.Int64, val.transactionId);
  };
  function Factory_DeleteDatabase_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Factory_DeleteDatabase_Params.prototype.initDefaults_ = function() {
    this.callbacks = new associatedBindings.AssociatedInterfacePtrInfo();
    this.origin = null;
    this.name = null;
    this.forceClose = false;
  };
  Factory_DeleteDatabase_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Factory_DeleteDatabase_Params.generate = function(generator_) {
    var generated = new Factory_DeleteDatabase_Params;
    generated.callbacks = generator_.generateAssociatedInterface("indexedDb.mojom.Callbacks", false);
    generated.origin = generator_.generateStruct(url.mojom.Origin, false);
    generated.name = generator_.generateStruct(mojoBase.mojom.String16, false);
    generated.forceClose = generator_.generateBool();
    return generated;
  };

  Factory_DeleteDatabase_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.callbacks = mutator_.mutateAssociatedInterface(this.callbacks, "indexedDb.mojom.Callbacks", false);
    }
    if (mutator_.chooseMutateField()) {
      this.origin = mutator_.mutateStruct(url.mojom.Origin, false);
    }
    if (mutator_.chooseMutateField()) {
      this.name = mutator_.mutateStruct(mojoBase.mojom.String16, false);
    }
    if (mutator_.chooseMutateField()) {
      this.forceClose = mutator_.mutateBool(this.forceClose);
    }
    return this;
  };
  Factory_DeleteDatabase_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.callbacks !== null) {
      Array.prototype.push.apply(handles, ["indexedDb.mojom.CallbacksAssociatedPtr"]);
    }
    return handles;
  };

  Factory_DeleteDatabase_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Factory_DeleteDatabase_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.callbacks = handles[idx++];;
    return idx;
  };

  Factory_DeleteDatabase_Params.validate = function(messageValidator, offset) {
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


    // validate Factory_DeleteDatabase_Params.callbacks
    err = messageValidator.validateAssociatedInterface(offset + codec.kStructHeaderSize + 0, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate Factory_DeleteDatabase_Params.origin
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, origin$.Origin, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate Factory_DeleteDatabase_Params.name
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, string161$.String16, false);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  Factory_DeleteDatabase_Params.encodedSize = codec.kStructHeaderSize + 32;

  Factory_DeleteDatabase_Params.decode = function(decoder) {
    var packed;
    var val = new Factory_DeleteDatabase_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.callbacks = decoder.decodeStruct(codec.AssociatedInterfacePtrInfo);
    val.origin = decoder.decodeStructPointer(origin$.Origin);
    val.name = decoder.decodeStructPointer(string161$.String16);
    packed = decoder.readUint8();
    val.forceClose = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  Factory_DeleteDatabase_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Factory_DeleteDatabase_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.AssociatedInterfacePtrInfo, val.callbacks);
    encoder.encodeStructPointer(origin$.Origin, val.origin);
    encoder.encodeStructPointer(string161$.String16, val.name);
    packed = 0;
    packed |= (val.forceClose & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function Factory_AbortTransactionsAndCompactDatabase_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Factory_AbortTransactionsAndCompactDatabase_Params.prototype.initDefaults_ = function() {
    this.origin = null;
  };
  Factory_AbortTransactionsAndCompactDatabase_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Factory_AbortTransactionsAndCompactDatabase_Params.generate = function(generator_) {
    var generated = new Factory_AbortTransactionsAndCompactDatabase_Params;
    generated.origin = generator_.generateStruct(url.mojom.Origin, false);
    return generated;
  };

  Factory_AbortTransactionsAndCompactDatabase_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.origin = mutator_.mutateStruct(url.mojom.Origin, false);
    }
    return this;
  };
  Factory_AbortTransactionsAndCompactDatabase_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Factory_AbortTransactionsAndCompactDatabase_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Factory_AbortTransactionsAndCompactDatabase_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Factory_AbortTransactionsAndCompactDatabase_Params.validate = function(messageValidator, offset) {
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


    // validate Factory_AbortTransactionsAndCompactDatabase_Params.origin
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, origin$.Origin, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Factory_AbortTransactionsAndCompactDatabase_Params.encodedSize = codec.kStructHeaderSize + 8;

  Factory_AbortTransactionsAndCompactDatabase_Params.decode = function(decoder) {
    var packed;
    var val = new Factory_AbortTransactionsAndCompactDatabase_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.origin = decoder.decodeStructPointer(origin$.Origin);
    return val;
  };

  Factory_AbortTransactionsAndCompactDatabase_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Factory_AbortTransactionsAndCompactDatabase_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(origin$.Origin, val.origin);
  };
  function Factory_AbortTransactionsAndCompactDatabase_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Factory_AbortTransactionsAndCompactDatabase_ResponseParams.prototype.initDefaults_ = function() {
    this.status = 0;
  };
  Factory_AbortTransactionsAndCompactDatabase_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Factory_AbortTransactionsAndCompactDatabase_ResponseParams.generate = function(generator_) {
    var generated = new Factory_AbortTransactionsAndCompactDatabase_ResponseParams;
    generated.status = generator_.generateEnum(0, 5);
    return generated;
  };

  Factory_AbortTransactionsAndCompactDatabase_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.status = mutator_.mutateEnum(this.status, 0, 5);
    }
    return this;
  };
  Factory_AbortTransactionsAndCompactDatabase_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Factory_AbortTransactionsAndCompactDatabase_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Factory_AbortTransactionsAndCompactDatabase_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Factory_AbortTransactionsAndCompactDatabase_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate Factory_AbortTransactionsAndCompactDatabase_ResponseParams.status
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, Status);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Factory_AbortTransactionsAndCompactDatabase_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  Factory_AbortTransactionsAndCompactDatabase_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new Factory_AbortTransactionsAndCompactDatabase_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.status = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  Factory_AbortTransactionsAndCompactDatabase_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Factory_AbortTransactionsAndCompactDatabase_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.status);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function Factory_AbortTransactionsForDatabase_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Factory_AbortTransactionsForDatabase_Params.prototype.initDefaults_ = function() {
    this.origin = null;
  };
  Factory_AbortTransactionsForDatabase_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Factory_AbortTransactionsForDatabase_Params.generate = function(generator_) {
    var generated = new Factory_AbortTransactionsForDatabase_Params;
    generated.origin = generator_.generateStruct(url.mojom.Origin, false);
    return generated;
  };

  Factory_AbortTransactionsForDatabase_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.origin = mutator_.mutateStruct(url.mojom.Origin, false);
    }
    return this;
  };
  Factory_AbortTransactionsForDatabase_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Factory_AbortTransactionsForDatabase_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Factory_AbortTransactionsForDatabase_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Factory_AbortTransactionsForDatabase_Params.validate = function(messageValidator, offset) {
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


    // validate Factory_AbortTransactionsForDatabase_Params.origin
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, origin$.Origin, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Factory_AbortTransactionsForDatabase_Params.encodedSize = codec.kStructHeaderSize + 8;

  Factory_AbortTransactionsForDatabase_Params.decode = function(decoder) {
    var packed;
    var val = new Factory_AbortTransactionsForDatabase_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.origin = decoder.decodeStructPointer(origin$.Origin);
    return val;
  };

  Factory_AbortTransactionsForDatabase_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Factory_AbortTransactionsForDatabase_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(origin$.Origin, val.origin);
  };
  function Factory_AbortTransactionsForDatabase_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Factory_AbortTransactionsForDatabase_ResponseParams.prototype.initDefaults_ = function() {
    this.status = 0;
  };
  Factory_AbortTransactionsForDatabase_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Factory_AbortTransactionsForDatabase_ResponseParams.generate = function(generator_) {
    var generated = new Factory_AbortTransactionsForDatabase_ResponseParams;
    generated.status = generator_.generateEnum(0, 5);
    return generated;
  };

  Factory_AbortTransactionsForDatabase_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.status = mutator_.mutateEnum(this.status, 0, 5);
    }
    return this;
  };
  Factory_AbortTransactionsForDatabase_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Factory_AbortTransactionsForDatabase_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Factory_AbortTransactionsForDatabase_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Factory_AbortTransactionsForDatabase_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate Factory_AbortTransactionsForDatabase_ResponseParams.status
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, Status);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Factory_AbortTransactionsForDatabase_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  Factory_AbortTransactionsForDatabase_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new Factory_AbortTransactionsForDatabase_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.status = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  Factory_AbortTransactionsForDatabase_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Factory_AbortTransactionsForDatabase_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.status);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };

  function KeyData(value) {
    this.initDefault_();
    this.initValue_(value);
  }


  KeyData.Tags = {
    keyArray: 0,
    binary: 1,
    string: 2,
    date: 3,
    number: 4,
    other: 5,
  };

  KeyData.prototype.initDefault_ = function() {
    this.$data = null;
    this.$tag = undefined;
  }

  KeyData.prototype.initValue_ = function(value) {
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
        "keyArray",
        "binary",
        "string",
        "date",
        "number",
        "other",
    ];

    if (fields.indexOf(keys[0]) < 0) {
      throw new ReferenceError(keys[0] + " is not a KeyData member.");

    }

    this[keys[0]] = value[keys[0]];
  }
  KeyData.generate = function(generator_) {
    var generated = new KeyData;
    var generators = [
      {
        field: "keyArray",

        generator: function() { return generator_.generateArray(function() {
          return generator_.generateStruct(indexedDb.mojom.Key, false);
        }); },
      },
      {
        field: "binary",

        generator: function() { return generator_.generateArray(function() {
          return generator_.generateUint8();
        }); },
      },
      {
        field: "string",

        generator: function() { return generator_.generateStruct(mojoBase.mojom.String16, false); },
      },
      {
        field: "date",

        generator: function() { return generator_.generateDouble(); },
      },
      {
        field: "number",

        generator: function() { return generator_.generateDouble(); },
      },
      {
        field: "other",

        generator: function() { return generator_.generateEnum(0, 1); },
      },
    ];

    var result = generator_.generateUnionField(generators);
    generated[result.field] = result.value;
    return generated;
  }

  KeyData.prototype.mutate = function(mutator_) {
    var mutators = [
      {
        field: "keyArray",

        mutator: function() { return mutator_.mutateArray(this.keyArray, function(val) {
          return mutator_.mutateStruct(indexedDb.mojom.Key, false);
        }); },
      },
      {
        field: "binary",

        mutator: function() { return mutator_.mutateArray(this.binary, function(val) {
          return mutator_.mutateUint8(val);
        }); },
      },
      {
        field: "string",

        mutator: function() { return mutator_.mutateStruct(mojoBase.mojom.String16, false); },
      },
      {
        field: "date",

        mutator: function() { return mutator_.mutateDouble(this.date); },
      },
      {
        field: "number",

        mutator: function() { return mutator_.mutateDouble(this.number); },
      },
      {
        field: "other",

        mutator: function() { return mutator_.mutateEnum(this.other, 0, 1); },
      },
    ];

    var result = mutator_.mutateUnionField(this, mutators);
    generated[result.field] = result.value;
    return this;
  }
  KeyData.prototype.getHandleDeps = function() {
    return [];
  }
  KeyData.prototype.setHandles = function() {
    return [];
  }
  Object.defineProperty(KeyData.prototype, "keyArray", {
    get: function() {
      if (this.$tag != KeyData.Tags.keyArray) {
        throw new ReferenceError(
            "KeyData.keyArray is not currently set.");
      }
      return this.$data;
    },

    set: function(value) {
      this.$tag = KeyData.Tags.keyArray;
      this.$data = value;
    }
  });
  Object.defineProperty(KeyData.prototype, "binary", {
    get: function() {
      if (this.$tag != KeyData.Tags.binary) {
        throw new ReferenceError(
            "KeyData.binary is not currently set.");
      }
      return this.$data;
    },

    set: function(value) {
      this.$tag = KeyData.Tags.binary;
      this.$data = value;
    }
  });
  Object.defineProperty(KeyData.prototype, "string", {
    get: function() {
      if (this.$tag != KeyData.Tags.string) {
        throw new ReferenceError(
            "KeyData.string is not currently set.");
      }
      return this.$data;
    },

    set: function(value) {
      this.$tag = KeyData.Tags.string;
      this.$data = value;
    }
  });
  Object.defineProperty(KeyData.prototype, "date", {
    get: function() {
      if (this.$tag != KeyData.Tags.date) {
        throw new ReferenceError(
            "KeyData.date is not currently set.");
      }
      return this.$data;
    },

    set: function(value) {
      this.$tag = KeyData.Tags.date;
      this.$data = value;
    }
  });
  Object.defineProperty(KeyData.prototype, "number", {
    get: function() {
      if (this.$tag != KeyData.Tags.number) {
        throw new ReferenceError(
            "KeyData.number is not currently set.");
      }
      return this.$data;
    },

    set: function(value) {
      this.$tag = KeyData.Tags.number;
      this.$data = value;
    }
  });
  Object.defineProperty(KeyData.prototype, "other", {
    get: function() {
      if (this.$tag != KeyData.Tags.other) {
        throw new ReferenceError(
            "KeyData.other is not currently set.");
      }
      return this.$data;
    },

    set: function(value) {
      this.$tag = KeyData.Tags.other;
      this.$data = value;
    }
  });


    KeyData.encode = function(encoder, val) {
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
        case KeyData.Tags.keyArray:
          encoder.encodeArrayPointer(new codec.PointerTo(Key), val.keyArray);
          break;
        case KeyData.Tags.binary:
          encoder.encodeArrayPointer(codec.Uint8, val.binary);
          break;
        case KeyData.Tags.string:
          encoder.encodeStructPointer(string161$.String16, val.string);
          break;
        case KeyData.Tags.date:
          encoder.encodeStruct(codec.Double, val.date);
          break;
        case KeyData.Tags.number:
          encoder.encodeStruct(codec.Double, val.number);
          break;
        case KeyData.Tags.other:
          encoder.encodeStruct(codec.Int32, val.other);
          break;
      }
      encoder.align();
    };


    KeyData.decode = function(decoder) {
      var size = decoder.readUint32();
      if (size == 0) {
        decoder.readUint32();
        decoder.readUint64();
        return null;
      }

      var result = new KeyData();
      var tag = decoder.readUint32();
      switch (tag) {
        case KeyData.Tags.keyArray:
          result.keyArray = decoder.decodeArrayPointer(new codec.PointerTo(Key));
          break;
        case KeyData.Tags.binary:
          result.binary = decoder.decodeArrayPointer(codec.Uint8);
          break;
        case KeyData.Tags.string:
          result.string = decoder.decodeStructPointer(string161$.String16);
          break;
        case KeyData.Tags.date:
          result.date = decoder.decodeStruct(codec.Double);
          break;
        case KeyData.Tags.number:
          result.number = decoder.decodeStruct(codec.Double);
          break;
        case KeyData.Tags.other:
          result.other = decoder.decodeStruct(codec.Int32);
          break;
      }
      decoder.align();

      return result;
    };


    KeyData.validate = function(messageValidator, offset) {
      var size = messageValidator.decodeUnionSize(offset);
      if (size != 16) {
        return validator.validationError.INVALID_UNION_SIZE;
      }

      var tag = messageValidator.decodeUnionTag(offset);
      var data_offset = offset + 8;
      var err;
      switch (tag) {
        case KeyData.Tags.keyArray:
          

    // validate KeyData.keyArray
    err = messageValidator.validateArrayPointer(data_offset, 8, new codec.PointerTo(Key), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;
          break;
        case KeyData.Tags.binary:
          

    // validate KeyData.binary
    err = messageValidator.validateArrayPointer(data_offset, 1, codec.Uint8, false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;
          break;
        case KeyData.Tags.string:
          

    // validate KeyData.string
    err = messageValidator.validateStructPointer(data_offset, string161$.String16, false);
    if (err !== validator.validationError.NONE)
        return err;
          break;
        case KeyData.Tags.date:
          

          break;
        case KeyData.Tags.number:
          

          break;
        case KeyData.Tags.other:
          

    // validate KeyData.other
    err = messageValidator.validateEnum(data_offset, DatalessKeyType);
    if (err !== validator.validationError.NONE)
        return err;
          break;
      }

      return validator.validationError.NONE;
    };

  KeyData.encodedSize = 16;

  function KeyPathData(value) {
    this.initDefault_();
    this.initValue_(value);
  }


  KeyPathData.Tags = {
    string: 0,
    stringArray: 1,
  };

  KeyPathData.prototype.initDefault_ = function() {
    this.$data = null;
    this.$tag = undefined;
  }

  KeyPathData.prototype.initValue_ = function(value) {
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
        "string",
        "stringArray",
    ];

    if (fields.indexOf(keys[0]) < 0) {
      throw new ReferenceError(keys[0] + " is not a KeyPathData member.");

    }

    this[keys[0]] = value[keys[0]];
  }
  KeyPathData.generate = function(generator_) {
    var generated = new KeyPathData;
    var generators = [
      {
        field: "string",

        generator: function() { return generator_.generateStruct(mojoBase.mojom.String16, false); },
      },
      {
        field: "stringArray",

        generator: function() { return generator_.generateArray(function() {
          return generator_.generateStruct(mojoBase.mojom.String16, false);
        }); },
      },
    ];

    var result = generator_.generateUnionField(generators);
    generated[result.field] = result.value;
    return generated;
  }

  KeyPathData.prototype.mutate = function(mutator_) {
    var mutators = [
      {
        field: "string",

        mutator: function() { return mutator_.mutateStruct(mojoBase.mojom.String16, false); },
      },
      {
        field: "stringArray",

        mutator: function() { return mutator_.mutateArray(this.stringArray, function(val) {
          return mutator_.mutateStruct(mojoBase.mojom.String16, false);
        }); },
      },
    ];

    var result = mutator_.mutateUnionField(this, mutators);
    generated[result.field] = result.value;
    return this;
  }
  KeyPathData.prototype.getHandleDeps = function() {
    return [];
  }
  KeyPathData.prototype.setHandles = function() {
    return [];
  }
  Object.defineProperty(KeyPathData.prototype, "string", {
    get: function() {
      if (this.$tag != KeyPathData.Tags.string) {
        throw new ReferenceError(
            "KeyPathData.string is not currently set.");
      }
      return this.$data;
    },

    set: function(value) {
      this.$tag = KeyPathData.Tags.string;
      this.$data = value;
    }
  });
  Object.defineProperty(KeyPathData.prototype, "stringArray", {
    get: function() {
      if (this.$tag != KeyPathData.Tags.stringArray) {
        throw new ReferenceError(
            "KeyPathData.stringArray is not currently set.");
      }
      return this.$data;
    },

    set: function(value) {
      this.$tag = KeyPathData.Tags.stringArray;
      this.$data = value;
    }
  });


    KeyPathData.encode = function(encoder, val) {
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
        case KeyPathData.Tags.string:
          encoder.encodeStructPointer(string161$.String16, val.string);
          break;
        case KeyPathData.Tags.stringArray:
          encoder.encodeArrayPointer(new codec.PointerTo(string161$.String16), val.stringArray);
          break;
      }
      encoder.align();
    };


    KeyPathData.decode = function(decoder) {
      var size = decoder.readUint32();
      if (size == 0) {
        decoder.readUint32();
        decoder.readUint64();
        return null;
      }

      var result = new KeyPathData();
      var tag = decoder.readUint32();
      switch (tag) {
        case KeyPathData.Tags.string:
          result.string = decoder.decodeStructPointer(string161$.String16);
          break;
        case KeyPathData.Tags.stringArray:
          result.stringArray = decoder.decodeArrayPointer(new codec.PointerTo(string161$.String16));
          break;
      }
      decoder.align();

      return result;
    };


    KeyPathData.validate = function(messageValidator, offset) {
      var size = messageValidator.decodeUnionSize(offset);
      if (size != 16) {
        return validator.validationError.INVALID_UNION_SIZE;
      }

      var tag = messageValidator.decodeUnionTag(offset);
      var data_offset = offset + 8;
      var err;
      switch (tag) {
        case KeyPathData.Tags.string:
          

    // validate KeyPathData.string
    err = messageValidator.validateStructPointer(data_offset, string161$.String16, false);
    if (err !== validator.validationError.NONE)
        return err;
          break;
        case KeyPathData.Tags.stringArray:
          

    // validate KeyPathData.stringArray
    err = messageValidator.validateArrayPointer(data_offset, 8, new codec.PointerTo(string161$.String16), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;
          break;
      }

      return validator.validationError.NONE;
    };

  KeyPathData.encodedSize = 16;
  var kCallbacks_Error_Name = 1704267775;
  var kCallbacks_SuccessStringList_Name = 1296219251;
  var kCallbacks_Blocked_Name = 1069116382;
  var kCallbacks_UpgradeNeeded_Name = 834385793;
  var kCallbacks_SuccessDatabase_Name = 2058414174;
  var kCallbacks_SuccessCursor_Name = 2080992435;
  var kCallbacks_SuccessValue_Name = 1543064769;
  var kCallbacks_SuccessCursorContinue_Name = 1266989822;
  var kCallbacks_SuccessCursorPrefetch_Name = 1247349540;
  var kCallbacks_SuccessArray_Name = 1677473174;
  var kCallbacks_SuccessKey_Name = 1610818786;
  var kCallbacks_SuccessInteger_Name = 1044651033;
  var kCallbacks_Success_Name = 2040871186;

  function CallbacksPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(Callbacks,
                                                   handleOrPtrInfo);
  }

  function CallbacksAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        Callbacks, associatedInterfacePtrInfo);
  }

  CallbacksAssociatedPtr.prototype =
      Object.create(CallbacksPtr.prototype);
  CallbacksAssociatedPtr.prototype.constructor =
      CallbacksAssociatedPtr;

  function CallbacksProxy(receiver) {
    this.receiver_ = receiver;
  }
  CallbacksPtr.prototype.error = function() {
    return CallbacksProxy.prototype.error
        .apply(this.ptr.getProxy(), arguments);
  };

  CallbacksProxy.prototype.error = function(code, message) {
    var params_ = new Callbacks_Error_Params();
    params_.code = code;
    params_.message = message;
    var builder = new codec.MessageV0Builder(
        kCallbacks_Error_Name,
        codec.align(Callbacks_Error_Params.encodedSize));
    builder.encodeStruct(Callbacks_Error_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  CallbacksPtr.prototype.successStringList = function() {
    return CallbacksProxy.prototype.successStringList
        .apply(this.ptr.getProxy(), arguments);
  };

  CallbacksProxy.prototype.successStringList = function(value) {
    var params_ = new Callbacks_SuccessStringList_Params();
    params_.value = value;
    var builder = new codec.MessageV0Builder(
        kCallbacks_SuccessStringList_Name,
        codec.align(Callbacks_SuccessStringList_Params.encodedSize));
    builder.encodeStruct(Callbacks_SuccessStringList_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  CallbacksPtr.prototype.blocked = function() {
    return CallbacksProxy.prototype.blocked
        .apply(this.ptr.getProxy(), arguments);
  };

  CallbacksProxy.prototype.blocked = function(existingVersion) {
    var params_ = new Callbacks_Blocked_Params();
    params_.existingVersion = existingVersion;
    var builder = new codec.MessageV0Builder(
        kCallbacks_Blocked_Name,
        codec.align(Callbacks_Blocked_Params.encodedSize));
    builder.encodeStruct(Callbacks_Blocked_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  CallbacksPtr.prototype.upgradeNeeded = function() {
    return CallbacksProxy.prototype.upgradeNeeded
        .apply(this.ptr.getProxy(), arguments);
  };

  CallbacksProxy.prototype.upgradeNeeded = function(database, oldVersion, dataLoss, dataLossMessage, dbMetadata) {
    var params_ = new Callbacks_UpgradeNeeded_Params();
    params_.database = database;
    params_.oldVersion = oldVersion;
    params_.dataLoss = dataLoss;
    params_.dataLossMessage = dataLossMessage;
    params_.dbMetadata = dbMetadata;
    var builder = new codec.MessageV2Builder(
        kCallbacks_UpgradeNeeded_Name,
        codec.align(Callbacks_UpgradeNeeded_Params.encodedSize));
    builder.setPayload(Callbacks_UpgradeNeeded_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  CallbacksPtr.prototype.successDatabase = function() {
    return CallbacksProxy.prototype.successDatabase
        .apply(this.ptr.getProxy(), arguments);
  };

  CallbacksProxy.prototype.successDatabase = function(database, metadata) {
    var params_ = new Callbacks_SuccessDatabase_Params();
    params_.database = database;
    params_.metadata = metadata;
    var builder = new codec.MessageV2Builder(
        kCallbacks_SuccessDatabase_Name,
        codec.align(Callbacks_SuccessDatabase_Params.encodedSize));
    builder.setPayload(Callbacks_SuccessDatabase_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  CallbacksPtr.prototype.successCursor = function() {
    return CallbacksProxy.prototype.successCursor
        .apply(this.ptr.getProxy(), arguments);
  };

  CallbacksProxy.prototype.successCursor = function(cursor, key, primaryKey, value) {
    var params_ = new Callbacks_SuccessCursor_Params();
    params_.cursor = cursor;
    params_.key = key;
    params_.primaryKey = primaryKey;
    params_.value = value;
    var builder = new codec.MessageV2Builder(
        kCallbacks_SuccessCursor_Name,
        codec.align(Callbacks_SuccessCursor_Params.encodedSize));
    builder.setPayload(Callbacks_SuccessCursor_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  CallbacksPtr.prototype.successValue = function() {
    return CallbacksProxy.prototype.successValue
        .apply(this.ptr.getProxy(), arguments);
  };

  CallbacksProxy.prototype.successValue = function(value) {
    var params_ = new Callbacks_SuccessValue_Params();
    params_.value = value;
    var builder = new codec.MessageV0Builder(
        kCallbacks_SuccessValue_Name,
        codec.align(Callbacks_SuccessValue_Params.encodedSize));
    builder.encodeStruct(Callbacks_SuccessValue_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  CallbacksPtr.prototype.successCursorContinue = function() {
    return CallbacksProxy.prototype.successCursorContinue
        .apply(this.ptr.getProxy(), arguments);
  };

  CallbacksProxy.prototype.successCursorContinue = function(key, primaryKey, value) {
    var params_ = new Callbacks_SuccessCursorContinue_Params();
    params_.key = key;
    params_.primaryKey = primaryKey;
    params_.value = value;
    var builder = new codec.MessageV0Builder(
        kCallbacks_SuccessCursorContinue_Name,
        codec.align(Callbacks_SuccessCursorContinue_Params.encodedSize));
    builder.encodeStruct(Callbacks_SuccessCursorContinue_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  CallbacksPtr.prototype.successCursorPrefetch = function() {
    return CallbacksProxy.prototype.successCursorPrefetch
        .apply(this.ptr.getProxy(), arguments);
  };

  CallbacksProxy.prototype.successCursorPrefetch = function(keys, primaryKeys, values) {
    var params_ = new Callbacks_SuccessCursorPrefetch_Params();
    params_.keys = keys;
    params_.primaryKeys = primaryKeys;
    params_.values = values;
    var builder = new codec.MessageV0Builder(
        kCallbacks_SuccessCursorPrefetch_Name,
        codec.align(Callbacks_SuccessCursorPrefetch_Params.encodedSize));
    builder.encodeStruct(Callbacks_SuccessCursorPrefetch_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  CallbacksPtr.prototype.successArray = function() {
    return CallbacksProxy.prototype.successArray
        .apply(this.ptr.getProxy(), arguments);
  };

  CallbacksProxy.prototype.successArray = function(values) {
    var params_ = new Callbacks_SuccessArray_Params();
    params_.values = values;
    var builder = new codec.MessageV0Builder(
        kCallbacks_SuccessArray_Name,
        codec.align(Callbacks_SuccessArray_Params.encodedSize));
    builder.encodeStruct(Callbacks_SuccessArray_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  CallbacksPtr.prototype.successKey = function() {
    return CallbacksProxy.prototype.successKey
        .apply(this.ptr.getProxy(), arguments);
  };

  CallbacksProxy.prototype.successKey = function(key) {
    var params_ = new Callbacks_SuccessKey_Params();
    params_.key = key;
    var builder = new codec.MessageV0Builder(
        kCallbacks_SuccessKey_Name,
        codec.align(Callbacks_SuccessKey_Params.encodedSize));
    builder.encodeStruct(Callbacks_SuccessKey_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  CallbacksPtr.prototype.successInteger = function() {
    return CallbacksProxy.prototype.successInteger
        .apply(this.ptr.getProxy(), arguments);
  };

  CallbacksProxy.prototype.successInteger = function(value) {
    var params_ = new Callbacks_SuccessInteger_Params();
    params_.value = value;
    var builder = new codec.MessageV0Builder(
        kCallbacks_SuccessInteger_Name,
        codec.align(Callbacks_SuccessInteger_Params.encodedSize));
    builder.encodeStruct(Callbacks_SuccessInteger_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  CallbacksPtr.prototype.success = function() {
    return CallbacksProxy.prototype.success
        .apply(this.ptr.getProxy(), arguments);
  };

  CallbacksProxy.prototype.success = function() {
    var params_ = new Callbacks_Success_Params();
    var builder = new codec.MessageV0Builder(
        kCallbacks_Success_Name,
        codec.align(Callbacks_Success_Params.encodedSize));
    builder.encodeStruct(Callbacks_Success_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function CallbacksStub(delegate) {
    this.delegate_ = delegate;
  }
  CallbacksStub.prototype.error = function(code, message) {
    return this.delegate_ && this.delegate_.error && this.delegate_.error(code, message);
  }
  CallbacksStub.prototype.successStringList = function(value) {
    return this.delegate_ && this.delegate_.successStringList && this.delegate_.successStringList(value);
  }
  CallbacksStub.prototype.blocked = function(existingVersion) {
    return this.delegate_ && this.delegate_.blocked && this.delegate_.blocked(existingVersion);
  }
  CallbacksStub.prototype.upgradeNeeded = function(database, oldVersion, dataLoss, dataLossMessage, dbMetadata) {
    return this.delegate_ && this.delegate_.upgradeNeeded && this.delegate_.upgradeNeeded(database, oldVersion, dataLoss, dataLossMessage, dbMetadata);
  }
  CallbacksStub.prototype.successDatabase = function(database, metadata) {
    return this.delegate_ && this.delegate_.successDatabase && this.delegate_.successDatabase(database, metadata);
  }
  CallbacksStub.prototype.successCursor = function(cursor, key, primaryKey, value) {
    return this.delegate_ && this.delegate_.successCursor && this.delegate_.successCursor(cursor, key, primaryKey, value);
  }
  CallbacksStub.prototype.successValue = function(value) {
    return this.delegate_ && this.delegate_.successValue && this.delegate_.successValue(value);
  }
  CallbacksStub.prototype.successCursorContinue = function(key, primaryKey, value) {
    return this.delegate_ && this.delegate_.successCursorContinue && this.delegate_.successCursorContinue(key, primaryKey, value);
  }
  CallbacksStub.prototype.successCursorPrefetch = function(keys, primaryKeys, values) {
    return this.delegate_ && this.delegate_.successCursorPrefetch && this.delegate_.successCursorPrefetch(keys, primaryKeys, values);
  }
  CallbacksStub.prototype.successArray = function(values) {
    return this.delegate_ && this.delegate_.successArray && this.delegate_.successArray(values);
  }
  CallbacksStub.prototype.successKey = function(key) {
    return this.delegate_ && this.delegate_.successKey && this.delegate_.successKey(key);
  }
  CallbacksStub.prototype.successInteger = function(value) {
    return this.delegate_ && this.delegate_.successInteger && this.delegate_.successInteger(value);
  }
  CallbacksStub.prototype.success = function() {
    return this.delegate_ && this.delegate_.success && this.delegate_.success();
  }

  CallbacksStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kCallbacks_Error_Name:
      var params = reader.decodeStruct(Callbacks_Error_Params);
      this.error(params.code, params.message);
      return true;
    case kCallbacks_SuccessStringList_Name:
      var params = reader.decodeStruct(Callbacks_SuccessStringList_Params);
      this.successStringList(params.value);
      return true;
    case kCallbacks_Blocked_Name:
      var params = reader.decodeStruct(Callbacks_Blocked_Params);
      this.blocked(params.existingVersion);
      return true;
    case kCallbacks_UpgradeNeeded_Name:
      var params = reader.decodeStruct(Callbacks_UpgradeNeeded_Params);
      this.upgradeNeeded(params.database, params.oldVersion, params.dataLoss, params.dataLossMessage, params.dbMetadata);
      return true;
    case kCallbacks_SuccessDatabase_Name:
      var params = reader.decodeStruct(Callbacks_SuccessDatabase_Params);
      this.successDatabase(params.database, params.metadata);
      return true;
    case kCallbacks_SuccessCursor_Name:
      var params = reader.decodeStruct(Callbacks_SuccessCursor_Params);
      this.successCursor(params.cursor, params.key, params.primaryKey, params.value);
      return true;
    case kCallbacks_SuccessValue_Name:
      var params = reader.decodeStruct(Callbacks_SuccessValue_Params);
      this.successValue(params.value);
      return true;
    case kCallbacks_SuccessCursorContinue_Name:
      var params = reader.decodeStruct(Callbacks_SuccessCursorContinue_Params);
      this.successCursorContinue(params.key, params.primaryKey, params.value);
      return true;
    case kCallbacks_SuccessCursorPrefetch_Name:
      var params = reader.decodeStruct(Callbacks_SuccessCursorPrefetch_Params);
      this.successCursorPrefetch(params.keys, params.primaryKeys, params.values);
      return true;
    case kCallbacks_SuccessArray_Name:
      var params = reader.decodeStruct(Callbacks_SuccessArray_Params);
      this.successArray(params.values);
      return true;
    case kCallbacks_SuccessKey_Name:
      var params = reader.decodeStruct(Callbacks_SuccessKey_Params);
      this.successKey(params.key);
      return true;
    case kCallbacks_SuccessInteger_Name:
      var params = reader.decodeStruct(Callbacks_SuccessInteger_Params);
      this.successInteger(params.value);
      return true;
    case kCallbacks_Success_Name:
      var params = reader.decodeStruct(Callbacks_Success_Params);
      this.success();
      return true;
    default:
      return false;
    }
  };

  CallbacksStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateCallbacksRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kCallbacks_Error_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = Callbacks_Error_Params;
      break;
      case kCallbacks_SuccessStringList_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = Callbacks_SuccessStringList_Params;
      break;
      case kCallbacks_Blocked_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = Callbacks_Blocked_Params;
      break;
      case kCallbacks_UpgradeNeeded_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = Callbacks_UpgradeNeeded_Params;
      break;
      case kCallbacks_SuccessDatabase_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = Callbacks_SuccessDatabase_Params;
      break;
      case kCallbacks_SuccessCursor_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = Callbacks_SuccessCursor_Params;
      break;
      case kCallbacks_SuccessValue_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = Callbacks_SuccessValue_Params;
      break;
      case kCallbacks_SuccessCursorContinue_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = Callbacks_SuccessCursorContinue_Params;
      break;
      case kCallbacks_SuccessCursorPrefetch_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = Callbacks_SuccessCursorPrefetch_Params;
      break;
      case kCallbacks_SuccessArray_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = Callbacks_SuccessArray_Params;
      break;
      case kCallbacks_SuccessKey_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = Callbacks_SuccessKey_Params;
      break;
      case kCallbacks_SuccessInteger_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = Callbacks_SuccessInteger_Params;
      break;
      case kCallbacks_Success_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = Callbacks_Success_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateCallbacksResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var Callbacks = {
    name: 'indexed_db.mojom.Callbacks',
    kVersion: 0,
    ptrClass: CallbacksPtr,
    proxyClass: CallbacksProxy,
    stubClass: CallbacksStub,
    validateRequest: validateCallbacksRequest,
    validateResponse: null,
    mojomId: 'content/common/indexed_db/indexed_db.mojom',
    fuzzMethods: {
      error: {
        params: Callbacks_Error_Params,
      },
      successStringList: {
        params: Callbacks_SuccessStringList_Params,
      },
      blocked: {
        params: Callbacks_Blocked_Params,
      },
      upgradeNeeded: {
        params: Callbacks_UpgradeNeeded_Params,
      },
      successDatabase: {
        params: Callbacks_SuccessDatabase_Params,
      },
      successCursor: {
        params: Callbacks_SuccessCursor_Params,
      },
      successValue: {
        params: Callbacks_SuccessValue_Params,
      },
      successCursorContinue: {
        params: Callbacks_SuccessCursorContinue_Params,
      },
      successCursorPrefetch: {
        params: Callbacks_SuccessCursorPrefetch_Params,
      },
      successArray: {
        params: Callbacks_SuccessArray_Params,
      },
      successKey: {
        params: Callbacks_SuccessKey_Params,
      },
      successInteger: {
        params: Callbacks_SuccessInteger_Params,
      },
      success: {
        params: Callbacks_Success_Params,
      },
    },
  };
  CallbacksStub.prototype.validator = validateCallbacksRequest;
  CallbacksProxy.prototype.validator = null;
  var kDatabaseCallbacks_ForcedClose_Name = 1015979021;
  var kDatabaseCallbacks_VersionChange_Name = 1565007038;
  var kDatabaseCallbacks_Abort_Name = 643297420;
  var kDatabaseCallbacks_Complete_Name = 1499073358;
  var kDatabaseCallbacks_Changes_Name = 221327923;

  function DatabaseCallbacksPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(DatabaseCallbacks,
                                                   handleOrPtrInfo);
  }

  function DatabaseCallbacksAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        DatabaseCallbacks, associatedInterfacePtrInfo);
  }

  DatabaseCallbacksAssociatedPtr.prototype =
      Object.create(DatabaseCallbacksPtr.prototype);
  DatabaseCallbacksAssociatedPtr.prototype.constructor =
      DatabaseCallbacksAssociatedPtr;

  function DatabaseCallbacksProxy(receiver) {
    this.receiver_ = receiver;
  }
  DatabaseCallbacksPtr.prototype.forcedClose = function() {
    return DatabaseCallbacksProxy.prototype.forcedClose
        .apply(this.ptr.getProxy(), arguments);
  };

  DatabaseCallbacksProxy.prototype.forcedClose = function() {
    var params_ = new DatabaseCallbacks_ForcedClose_Params();
    var builder = new codec.MessageV0Builder(
        kDatabaseCallbacks_ForcedClose_Name,
        codec.align(DatabaseCallbacks_ForcedClose_Params.encodedSize));
    builder.encodeStruct(DatabaseCallbacks_ForcedClose_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  DatabaseCallbacksPtr.prototype.versionChange = function() {
    return DatabaseCallbacksProxy.prototype.versionChange
        .apply(this.ptr.getProxy(), arguments);
  };

  DatabaseCallbacksProxy.prototype.versionChange = function(oldVersion, newVersion) {
    var params_ = new DatabaseCallbacks_VersionChange_Params();
    params_.oldVersion = oldVersion;
    params_.newVersion = newVersion;
    var builder = new codec.MessageV0Builder(
        kDatabaseCallbacks_VersionChange_Name,
        codec.align(DatabaseCallbacks_VersionChange_Params.encodedSize));
    builder.encodeStruct(DatabaseCallbacks_VersionChange_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  DatabaseCallbacksPtr.prototype.abort = function() {
    return DatabaseCallbacksProxy.prototype.abort
        .apply(this.ptr.getProxy(), arguments);
  };

  DatabaseCallbacksProxy.prototype.abort = function(transactionId, code, message) {
    var params_ = new DatabaseCallbacks_Abort_Params();
    params_.transactionId = transactionId;
    params_.code = code;
    params_.message = message;
    var builder = new codec.MessageV0Builder(
        kDatabaseCallbacks_Abort_Name,
        codec.align(DatabaseCallbacks_Abort_Params.encodedSize));
    builder.encodeStruct(DatabaseCallbacks_Abort_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  DatabaseCallbacksPtr.prototype.complete = function() {
    return DatabaseCallbacksProxy.prototype.complete
        .apply(this.ptr.getProxy(), arguments);
  };

  DatabaseCallbacksProxy.prototype.complete = function(transactionId) {
    var params_ = new DatabaseCallbacks_Complete_Params();
    params_.transactionId = transactionId;
    var builder = new codec.MessageV0Builder(
        kDatabaseCallbacks_Complete_Name,
        codec.align(DatabaseCallbacks_Complete_Params.encodedSize));
    builder.encodeStruct(DatabaseCallbacks_Complete_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  DatabaseCallbacksPtr.prototype.changes = function() {
    return DatabaseCallbacksProxy.prototype.changes
        .apply(this.ptr.getProxy(), arguments);
  };

  DatabaseCallbacksProxy.prototype.changes = function(changes) {
    var params_ = new DatabaseCallbacks_Changes_Params();
    params_.changes = changes;
    var builder = new codec.MessageV0Builder(
        kDatabaseCallbacks_Changes_Name,
        codec.align(DatabaseCallbacks_Changes_Params.encodedSize));
    builder.encodeStruct(DatabaseCallbacks_Changes_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function DatabaseCallbacksStub(delegate) {
    this.delegate_ = delegate;
  }
  DatabaseCallbacksStub.prototype.forcedClose = function() {
    return this.delegate_ && this.delegate_.forcedClose && this.delegate_.forcedClose();
  }
  DatabaseCallbacksStub.prototype.versionChange = function(oldVersion, newVersion) {
    return this.delegate_ && this.delegate_.versionChange && this.delegate_.versionChange(oldVersion, newVersion);
  }
  DatabaseCallbacksStub.prototype.abort = function(transactionId, code, message) {
    return this.delegate_ && this.delegate_.abort && this.delegate_.abort(transactionId, code, message);
  }
  DatabaseCallbacksStub.prototype.complete = function(transactionId) {
    return this.delegate_ && this.delegate_.complete && this.delegate_.complete(transactionId);
  }
  DatabaseCallbacksStub.prototype.changes = function(changes) {
    return this.delegate_ && this.delegate_.changes && this.delegate_.changes(changes);
  }

  DatabaseCallbacksStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kDatabaseCallbacks_ForcedClose_Name:
      var params = reader.decodeStruct(DatabaseCallbacks_ForcedClose_Params);
      this.forcedClose();
      return true;
    case kDatabaseCallbacks_VersionChange_Name:
      var params = reader.decodeStruct(DatabaseCallbacks_VersionChange_Params);
      this.versionChange(params.oldVersion, params.newVersion);
      return true;
    case kDatabaseCallbacks_Abort_Name:
      var params = reader.decodeStruct(DatabaseCallbacks_Abort_Params);
      this.abort(params.transactionId, params.code, params.message);
      return true;
    case kDatabaseCallbacks_Complete_Name:
      var params = reader.decodeStruct(DatabaseCallbacks_Complete_Params);
      this.complete(params.transactionId);
      return true;
    case kDatabaseCallbacks_Changes_Name:
      var params = reader.decodeStruct(DatabaseCallbacks_Changes_Params);
      this.changes(params.changes);
      return true;
    default:
      return false;
    }
  };

  DatabaseCallbacksStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateDatabaseCallbacksRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kDatabaseCallbacks_ForcedClose_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = DatabaseCallbacks_ForcedClose_Params;
      break;
      case kDatabaseCallbacks_VersionChange_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = DatabaseCallbacks_VersionChange_Params;
      break;
      case kDatabaseCallbacks_Abort_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = DatabaseCallbacks_Abort_Params;
      break;
      case kDatabaseCallbacks_Complete_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = DatabaseCallbacks_Complete_Params;
      break;
      case kDatabaseCallbacks_Changes_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = DatabaseCallbacks_Changes_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateDatabaseCallbacksResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var DatabaseCallbacks = {
    name: 'indexed_db.mojom.DatabaseCallbacks',
    kVersion: 0,
    ptrClass: DatabaseCallbacksPtr,
    proxyClass: DatabaseCallbacksProxy,
    stubClass: DatabaseCallbacksStub,
    validateRequest: validateDatabaseCallbacksRequest,
    validateResponse: null,
    mojomId: 'content/common/indexed_db/indexed_db.mojom',
    fuzzMethods: {
      forcedClose: {
        params: DatabaseCallbacks_ForcedClose_Params,
      },
      versionChange: {
        params: DatabaseCallbacks_VersionChange_Params,
      },
      abort: {
        params: DatabaseCallbacks_Abort_Params,
      },
      complete: {
        params: DatabaseCallbacks_Complete_Params,
      },
      changes: {
        params: DatabaseCallbacks_Changes_Params,
      },
    },
  };
  DatabaseCallbacksStub.prototype.validator = validateDatabaseCallbacksRequest;
  DatabaseCallbacksProxy.prototype.validator = null;
  var kCursor_Advance_Name = 294740863;
  var kCursor_Continue_Name = 146092808;
  var kCursor_Prefetch_Name = 70046031;
  var kCursor_PrefetchReset_Name = 1598061037;

  function CursorPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(Cursor,
                                                   handleOrPtrInfo);
  }

  function CursorAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        Cursor, associatedInterfacePtrInfo);
  }

  CursorAssociatedPtr.prototype =
      Object.create(CursorPtr.prototype);
  CursorAssociatedPtr.prototype.constructor =
      CursorAssociatedPtr;

  function CursorProxy(receiver) {
    this.receiver_ = receiver;
  }
  CursorPtr.prototype.advance = function() {
    return CursorProxy.prototype.advance
        .apply(this.ptr.getProxy(), arguments);
  };

  CursorProxy.prototype.advance = function(count, callbacks) {
    var params_ = new Cursor_Advance_Params();
    params_.count = count;
    params_.callbacks = callbacks;
    var builder = new codec.MessageV2Builder(
        kCursor_Advance_Name,
        codec.align(Cursor_Advance_Params.encodedSize));
    builder.setPayload(Cursor_Advance_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  CursorPtr.prototype.continue = function() {
    return CursorProxy.prototype.continue
        .apply(this.ptr.getProxy(), arguments);
  };

  CursorProxy.prototype.continue = function(key, primaryKey, callbacks) {
    var params_ = new Cursor_Continue_Params();
    params_.key = key;
    params_.primaryKey = primaryKey;
    params_.callbacks = callbacks;
    var builder = new codec.MessageV2Builder(
        kCursor_Continue_Name,
        codec.align(Cursor_Continue_Params.encodedSize));
    builder.setPayload(Cursor_Continue_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  CursorPtr.prototype.prefetch = function() {
    return CursorProxy.prototype.prefetch
        .apply(this.ptr.getProxy(), arguments);
  };

  CursorProxy.prototype.prefetch = function(count, callbacks) {
    var params_ = new Cursor_Prefetch_Params();
    params_.count = count;
    params_.callbacks = callbacks;
    var builder = new codec.MessageV2Builder(
        kCursor_Prefetch_Name,
        codec.align(Cursor_Prefetch_Params.encodedSize));
    builder.setPayload(Cursor_Prefetch_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  CursorPtr.prototype.prefetchReset = function() {
    return CursorProxy.prototype.prefetchReset
        .apply(this.ptr.getProxy(), arguments);
  };

  CursorProxy.prototype.prefetchReset = function(usedPrefetches, unusedPrefetches) {
    var params_ = new Cursor_PrefetchReset_Params();
    params_.usedPrefetches = usedPrefetches;
    params_.unusedPrefetches = unusedPrefetches;
    var builder = new codec.MessageV0Builder(
        kCursor_PrefetchReset_Name,
        codec.align(Cursor_PrefetchReset_Params.encodedSize));
    builder.encodeStruct(Cursor_PrefetchReset_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function CursorStub(delegate) {
    this.delegate_ = delegate;
  }
  CursorStub.prototype.advance = function(count, callbacks) {
    return this.delegate_ && this.delegate_.advance && this.delegate_.advance(count, callbacks);
  }
  CursorStub.prototype.continue = function(key, primaryKey, callbacks) {
    return this.delegate_ && this.delegate_.continue && this.delegate_.continue(key, primaryKey, callbacks);
  }
  CursorStub.prototype.prefetch = function(count, callbacks) {
    return this.delegate_ && this.delegate_.prefetch && this.delegate_.prefetch(count, callbacks);
  }
  CursorStub.prototype.prefetchReset = function(usedPrefetches, unusedPrefetches) {
    return this.delegate_ && this.delegate_.prefetchReset && this.delegate_.prefetchReset(usedPrefetches, unusedPrefetches);
  }

  CursorStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kCursor_Advance_Name:
      var params = reader.decodeStruct(Cursor_Advance_Params);
      this.advance(params.count, params.callbacks);
      return true;
    case kCursor_Continue_Name:
      var params = reader.decodeStruct(Cursor_Continue_Params);
      this.continue(params.key, params.primaryKey, params.callbacks);
      return true;
    case kCursor_Prefetch_Name:
      var params = reader.decodeStruct(Cursor_Prefetch_Params);
      this.prefetch(params.count, params.callbacks);
      return true;
    case kCursor_PrefetchReset_Name:
      var params = reader.decodeStruct(Cursor_PrefetchReset_Params);
      this.prefetchReset(params.usedPrefetches, params.unusedPrefetches);
      return true;
    default:
      return false;
    }
  };

  CursorStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateCursorRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kCursor_Advance_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = Cursor_Advance_Params;
      break;
      case kCursor_Continue_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = Cursor_Continue_Params;
      break;
      case kCursor_Prefetch_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = Cursor_Prefetch_Params;
      break;
      case kCursor_PrefetchReset_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = Cursor_PrefetchReset_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateCursorResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var Cursor = {
    name: 'indexed_db.mojom.Cursor',
    kVersion: 0,
    ptrClass: CursorPtr,
    proxyClass: CursorProxy,
    stubClass: CursorStub,
    validateRequest: validateCursorRequest,
    validateResponse: null,
    mojomId: 'content/common/indexed_db/indexed_db.mojom',
    fuzzMethods: {
      advance: {
        params: Cursor_Advance_Params,
      },
      continue: {
        params: Cursor_Continue_Params,
      },
      prefetch: {
        params: Cursor_Prefetch_Params,
      },
      prefetchReset: {
        params: Cursor_PrefetchReset_Params,
      },
    },
  };
  CursorStub.prototype.validator = validateCursorRequest;
  CursorProxy.prototype.validator = null;
  var kDatabase_CreateObjectStore_Name = 1680176745;
  var kDatabase_DeleteObjectStore_Name = 271351708;
  var kDatabase_RenameObjectStore_Name = 1299723774;
  var kDatabase_CreateTransaction_Name = 355009780;
  var kDatabase_Close_Name = 1927144712;
  var kDatabase_VersionChangeIgnored_Name = 1887832005;
  var kDatabase_AddObserver_Name = 1212594476;
  var kDatabase_RemoveObservers_Name = 1751687905;
  var kDatabase_Get_Name = 1830349647;
  var kDatabase_GetAll_Name = 1375430761;
  var kDatabase_Put_Name = 14027217;
  var kDatabase_SetIndexKeys_Name = 1738260849;
  var kDatabase_SetIndexesReady_Name = 518362868;
  var kDatabase_OpenCursor_Name = 1469196604;
  var kDatabase_Count_Name = 1635308413;
  var kDatabase_DeleteRange_Name = 1138531216;
  var kDatabase_Clear_Name = 1404381027;
  var kDatabase_CreateIndex_Name = 799727366;
  var kDatabase_DeleteIndex_Name = 26574815;
  var kDatabase_RenameIndex_Name = 1324130065;
  var kDatabase_Abort_Name = 416346440;
  var kDatabase_Commit_Name = 1237642780;

  function DatabasePtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(Database,
                                                   handleOrPtrInfo);
  }

  function DatabaseAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        Database, associatedInterfacePtrInfo);
  }

  DatabaseAssociatedPtr.prototype =
      Object.create(DatabasePtr.prototype);
  DatabaseAssociatedPtr.prototype.constructor =
      DatabaseAssociatedPtr;

  function DatabaseProxy(receiver) {
    this.receiver_ = receiver;
  }
  DatabasePtr.prototype.createObjectStore = function() {
    return DatabaseProxy.prototype.createObjectStore
        .apply(this.ptr.getProxy(), arguments);
  };

  DatabaseProxy.prototype.createObjectStore = function(transactionId, objectStoreId, name, keyPath, autoIncrement) {
    var params_ = new Database_CreateObjectStore_Params();
    params_.transactionId = transactionId;
    params_.objectStoreId = objectStoreId;
    params_.name = name;
    params_.keyPath = keyPath;
    params_.autoIncrement = autoIncrement;
    var builder = new codec.MessageV0Builder(
        kDatabase_CreateObjectStore_Name,
        codec.align(Database_CreateObjectStore_Params.encodedSize));
    builder.encodeStruct(Database_CreateObjectStore_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  DatabasePtr.prototype.deleteObjectStore = function() {
    return DatabaseProxy.prototype.deleteObjectStore
        .apply(this.ptr.getProxy(), arguments);
  };

  DatabaseProxy.prototype.deleteObjectStore = function(transactionId, objectStoreId) {
    var params_ = new Database_DeleteObjectStore_Params();
    params_.transactionId = transactionId;
    params_.objectStoreId = objectStoreId;
    var builder = new codec.MessageV0Builder(
        kDatabase_DeleteObjectStore_Name,
        codec.align(Database_DeleteObjectStore_Params.encodedSize));
    builder.encodeStruct(Database_DeleteObjectStore_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  DatabasePtr.prototype.renameObjectStore = function() {
    return DatabaseProxy.prototype.renameObjectStore
        .apply(this.ptr.getProxy(), arguments);
  };

  DatabaseProxy.prototype.renameObjectStore = function(transactionId, objectStoreId, newName) {
    var params_ = new Database_RenameObjectStore_Params();
    params_.transactionId = transactionId;
    params_.objectStoreId = objectStoreId;
    params_.newName = newName;
    var builder = new codec.MessageV0Builder(
        kDatabase_RenameObjectStore_Name,
        codec.align(Database_RenameObjectStore_Params.encodedSize));
    builder.encodeStruct(Database_RenameObjectStore_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  DatabasePtr.prototype.createTransaction = function() {
    return DatabaseProxy.prototype.createTransaction
        .apply(this.ptr.getProxy(), arguments);
  };

  DatabaseProxy.prototype.createTransaction = function(transactionId, objectStoreIds, mode) {
    var params_ = new Database_CreateTransaction_Params();
    params_.transactionId = transactionId;
    params_.objectStoreIds = objectStoreIds;
    params_.mode = mode;
    var builder = new codec.MessageV0Builder(
        kDatabase_CreateTransaction_Name,
        codec.align(Database_CreateTransaction_Params.encodedSize));
    builder.encodeStruct(Database_CreateTransaction_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  DatabasePtr.prototype.close = function() {
    return DatabaseProxy.prototype.close
        .apply(this.ptr.getProxy(), arguments);
  };

  DatabaseProxy.prototype.close = function() {
    var params_ = new Database_Close_Params();
    var builder = new codec.MessageV0Builder(
        kDatabase_Close_Name,
        codec.align(Database_Close_Params.encodedSize));
    builder.encodeStruct(Database_Close_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  DatabasePtr.prototype.versionChangeIgnored = function() {
    return DatabaseProxy.prototype.versionChangeIgnored
        .apply(this.ptr.getProxy(), arguments);
  };

  DatabaseProxy.prototype.versionChangeIgnored = function() {
    var params_ = new Database_VersionChangeIgnored_Params();
    var builder = new codec.MessageV0Builder(
        kDatabase_VersionChangeIgnored_Name,
        codec.align(Database_VersionChangeIgnored_Params.encodedSize));
    builder.encodeStruct(Database_VersionChangeIgnored_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  DatabasePtr.prototype.addObserver = function() {
    return DatabaseProxy.prototype.addObserver
        .apply(this.ptr.getProxy(), arguments);
  };

  DatabaseProxy.prototype.addObserver = function(transactionId, observerId, includeTransaction, noRecords, values, operationTypes) {
    var params_ = new Database_AddObserver_Params();
    params_.transactionId = transactionId;
    params_.observerId = observerId;
    params_.includeTransaction = includeTransaction;
    params_.noRecords = noRecords;
    params_.values = values;
    params_.operationTypes = operationTypes;
    var builder = new codec.MessageV0Builder(
        kDatabase_AddObserver_Name,
        codec.align(Database_AddObserver_Params.encodedSize));
    builder.encodeStruct(Database_AddObserver_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  DatabasePtr.prototype.removeObservers = function() {
    return DatabaseProxy.prototype.removeObservers
        .apply(this.ptr.getProxy(), arguments);
  };

  DatabaseProxy.prototype.removeObservers = function(observers) {
    var params_ = new Database_RemoveObservers_Params();
    params_.observers = observers;
    var builder = new codec.MessageV0Builder(
        kDatabase_RemoveObservers_Name,
        codec.align(Database_RemoveObservers_Params.encodedSize));
    builder.encodeStruct(Database_RemoveObservers_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  DatabasePtr.prototype.get = function() {
    return DatabaseProxy.prototype.get
        .apply(this.ptr.getProxy(), arguments);
  };

  DatabaseProxy.prototype.get = function(transactionId, objectStoreId, indexId, keyRange, keyOnly, callbacks) {
    var params_ = new Database_Get_Params();
    params_.transactionId = transactionId;
    params_.objectStoreId = objectStoreId;
    params_.indexId = indexId;
    params_.keyRange = keyRange;
    params_.keyOnly = keyOnly;
    params_.callbacks = callbacks;
    var builder = new codec.MessageV2Builder(
        kDatabase_Get_Name,
        codec.align(Database_Get_Params.encodedSize));
    builder.setPayload(Database_Get_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  DatabasePtr.prototype.getAll = function() {
    return DatabaseProxy.prototype.getAll
        .apply(this.ptr.getProxy(), arguments);
  };

  DatabaseProxy.prototype.getAll = function(transactionId, objectStoreId, indexId, keyRange, keyOnly, maxCount, callbacks) {
    var params_ = new Database_GetAll_Params();
    params_.transactionId = transactionId;
    params_.objectStoreId = objectStoreId;
    params_.indexId = indexId;
    params_.keyRange = keyRange;
    params_.keyOnly = keyOnly;
    params_.maxCount = maxCount;
    params_.callbacks = callbacks;
    var builder = new codec.MessageV2Builder(
        kDatabase_GetAll_Name,
        codec.align(Database_GetAll_Params.encodedSize));
    builder.setPayload(Database_GetAll_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  DatabasePtr.prototype.put = function() {
    return DatabaseProxy.prototype.put
        .apply(this.ptr.getProxy(), arguments);
  };

  DatabaseProxy.prototype.put = function(transactionId, objectStoreId, value, key, mode, indexKeys, callbacks) {
    var params_ = new Database_Put_Params();
    params_.transactionId = transactionId;
    params_.objectStoreId = objectStoreId;
    params_.value = value;
    params_.key = key;
    params_.mode = mode;
    params_.indexKeys = indexKeys;
    params_.callbacks = callbacks;
    var builder = new codec.MessageV2Builder(
        kDatabase_Put_Name,
        codec.align(Database_Put_Params.encodedSize));
    builder.setPayload(Database_Put_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  DatabasePtr.prototype.setIndexKeys = function() {
    return DatabaseProxy.prototype.setIndexKeys
        .apply(this.ptr.getProxy(), arguments);
  };

  DatabaseProxy.prototype.setIndexKeys = function(transactionId, objectStoreId, primaryKey, indexKeys) {
    var params_ = new Database_SetIndexKeys_Params();
    params_.transactionId = transactionId;
    params_.objectStoreId = objectStoreId;
    params_.primaryKey = primaryKey;
    params_.indexKeys = indexKeys;
    var builder = new codec.MessageV0Builder(
        kDatabase_SetIndexKeys_Name,
        codec.align(Database_SetIndexKeys_Params.encodedSize));
    builder.encodeStruct(Database_SetIndexKeys_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  DatabasePtr.prototype.setIndexesReady = function() {
    return DatabaseProxy.prototype.setIndexesReady
        .apply(this.ptr.getProxy(), arguments);
  };

  DatabaseProxy.prototype.setIndexesReady = function(transactionId, objectStoreId, indexIds) {
    var params_ = new Database_SetIndexesReady_Params();
    params_.transactionId = transactionId;
    params_.objectStoreId = objectStoreId;
    params_.indexIds = indexIds;
    var builder = new codec.MessageV0Builder(
        kDatabase_SetIndexesReady_Name,
        codec.align(Database_SetIndexesReady_Params.encodedSize));
    builder.encodeStruct(Database_SetIndexesReady_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  DatabasePtr.prototype.openCursor = function() {
    return DatabaseProxy.prototype.openCursor
        .apply(this.ptr.getProxy(), arguments);
  };

  DatabaseProxy.prototype.openCursor = function(transactionId, objectStoreId, indexId, keyRange, direction, keyOnly, taskType, callbacks) {
    var params_ = new Database_OpenCursor_Params();
    params_.transactionId = transactionId;
    params_.objectStoreId = objectStoreId;
    params_.indexId = indexId;
    params_.keyRange = keyRange;
    params_.direction = direction;
    params_.keyOnly = keyOnly;
    params_.taskType = taskType;
    params_.callbacks = callbacks;
    var builder = new codec.MessageV2Builder(
        kDatabase_OpenCursor_Name,
        codec.align(Database_OpenCursor_Params.encodedSize));
    builder.setPayload(Database_OpenCursor_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  DatabasePtr.prototype.count = function() {
    return DatabaseProxy.prototype.count
        .apply(this.ptr.getProxy(), arguments);
  };

  DatabaseProxy.prototype.count = function(transactionId, objectStoreId, indexId, keyRange, callbacks) {
    var params_ = new Database_Count_Params();
    params_.transactionId = transactionId;
    params_.objectStoreId = objectStoreId;
    params_.indexId = indexId;
    params_.keyRange = keyRange;
    params_.callbacks = callbacks;
    var builder = new codec.MessageV2Builder(
        kDatabase_Count_Name,
        codec.align(Database_Count_Params.encodedSize));
    builder.setPayload(Database_Count_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  DatabasePtr.prototype.deleteRange = function() {
    return DatabaseProxy.prototype.deleteRange
        .apply(this.ptr.getProxy(), arguments);
  };

  DatabaseProxy.prototype.deleteRange = function(transactionId, objectStoreId, keyRange, callbacks) {
    var params_ = new Database_DeleteRange_Params();
    params_.transactionId = transactionId;
    params_.objectStoreId = objectStoreId;
    params_.keyRange = keyRange;
    params_.callbacks = callbacks;
    var builder = new codec.MessageV2Builder(
        kDatabase_DeleteRange_Name,
        codec.align(Database_DeleteRange_Params.encodedSize));
    builder.setPayload(Database_DeleteRange_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  DatabasePtr.prototype.clear = function() {
    return DatabaseProxy.prototype.clear
        .apply(this.ptr.getProxy(), arguments);
  };

  DatabaseProxy.prototype.clear = function(transactionId, objectStoreId, callbacks) {
    var params_ = new Database_Clear_Params();
    params_.transactionId = transactionId;
    params_.objectStoreId = objectStoreId;
    params_.callbacks = callbacks;
    var builder = new codec.MessageV2Builder(
        kDatabase_Clear_Name,
        codec.align(Database_Clear_Params.encodedSize));
    builder.setPayload(Database_Clear_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  DatabasePtr.prototype.createIndex = function() {
    return DatabaseProxy.prototype.createIndex
        .apply(this.ptr.getProxy(), arguments);
  };

  DatabaseProxy.prototype.createIndex = function(transactionId, objectStoreId, indexId, name, keyPath, unique, multiEntry) {
    var params_ = new Database_CreateIndex_Params();
    params_.transactionId = transactionId;
    params_.objectStoreId = objectStoreId;
    params_.indexId = indexId;
    params_.name = name;
    params_.keyPath = keyPath;
    params_.unique = unique;
    params_.multiEntry = multiEntry;
    var builder = new codec.MessageV0Builder(
        kDatabase_CreateIndex_Name,
        codec.align(Database_CreateIndex_Params.encodedSize));
    builder.encodeStruct(Database_CreateIndex_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  DatabasePtr.prototype.deleteIndex = function() {
    return DatabaseProxy.prototype.deleteIndex
        .apply(this.ptr.getProxy(), arguments);
  };

  DatabaseProxy.prototype.deleteIndex = function(transactionId, objectStoreId, indexId) {
    var params_ = new Database_DeleteIndex_Params();
    params_.transactionId = transactionId;
    params_.objectStoreId = objectStoreId;
    params_.indexId = indexId;
    var builder = new codec.MessageV0Builder(
        kDatabase_DeleteIndex_Name,
        codec.align(Database_DeleteIndex_Params.encodedSize));
    builder.encodeStruct(Database_DeleteIndex_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  DatabasePtr.prototype.renameIndex = function() {
    return DatabaseProxy.prototype.renameIndex
        .apply(this.ptr.getProxy(), arguments);
  };

  DatabaseProxy.prototype.renameIndex = function(transactionId, objectStoreId, indexId, newName) {
    var params_ = new Database_RenameIndex_Params();
    params_.transactionId = transactionId;
    params_.objectStoreId = objectStoreId;
    params_.indexId = indexId;
    params_.newName = newName;
    var builder = new codec.MessageV0Builder(
        kDatabase_RenameIndex_Name,
        codec.align(Database_RenameIndex_Params.encodedSize));
    builder.encodeStruct(Database_RenameIndex_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  DatabasePtr.prototype.abort = function() {
    return DatabaseProxy.prototype.abort
        .apply(this.ptr.getProxy(), arguments);
  };

  DatabaseProxy.prototype.abort = function(transactionId) {
    var params_ = new Database_Abort_Params();
    params_.transactionId = transactionId;
    var builder = new codec.MessageV0Builder(
        kDatabase_Abort_Name,
        codec.align(Database_Abort_Params.encodedSize));
    builder.encodeStruct(Database_Abort_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  DatabasePtr.prototype.commit = function() {
    return DatabaseProxy.prototype.commit
        .apply(this.ptr.getProxy(), arguments);
  };

  DatabaseProxy.prototype.commit = function(transactionId) {
    var params_ = new Database_Commit_Params();
    params_.transactionId = transactionId;
    var builder = new codec.MessageV0Builder(
        kDatabase_Commit_Name,
        codec.align(Database_Commit_Params.encodedSize));
    builder.encodeStruct(Database_Commit_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function DatabaseStub(delegate) {
    this.delegate_ = delegate;
  }
  DatabaseStub.prototype.createObjectStore = function(transactionId, objectStoreId, name, keyPath, autoIncrement) {
    return this.delegate_ && this.delegate_.createObjectStore && this.delegate_.createObjectStore(transactionId, objectStoreId, name, keyPath, autoIncrement);
  }
  DatabaseStub.prototype.deleteObjectStore = function(transactionId, objectStoreId) {
    return this.delegate_ && this.delegate_.deleteObjectStore && this.delegate_.deleteObjectStore(transactionId, objectStoreId);
  }
  DatabaseStub.prototype.renameObjectStore = function(transactionId, objectStoreId, newName) {
    return this.delegate_ && this.delegate_.renameObjectStore && this.delegate_.renameObjectStore(transactionId, objectStoreId, newName);
  }
  DatabaseStub.prototype.createTransaction = function(transactionId, objectStoreIds, mode) {
    return this.delegate_ && this.delegate_.createTransaction && this.delegate_.createTransaction(transactionId, objectStoreIds, mode);
  }
  DatabaseStub.prototype.close = function() {
    return this.delegate_ && this.delegate_.close && this.delegate_.close();
  }
  DatabaseStub.prototype.versionChangeIgnored = function() {
    return this.delegate_ && this.delegate_.versionChangeIgnored && this.delegate_.versionChangeIgnored();
  }
  DatabaseStub.prototype.addObserver = function(transactionId, observerId, includeTransaction, noRecords, values, operationTypes) {
    return this.delegate_ && this.delegate_.addObserver && this.delegate_.addObserver(transactionId, observerId, includeTransaction, noRecords, values, operationTypes);
  }
  DatabaseStub.prototype.removeObservers = function(observers) {
    return this.delegate_ && this.delegate_.removeObservers && this.delegate_.removeObservers(observers);
  }
  DatabaseStub.prototype.get = function(transactionId, objectStoreId, indexId, keyRange, keyOnly, callbacks) {
    return this.delegate_ && this.delegate_.get && this.delegate_.get(transactionId, objectStoreId, indexId, keyRange, keyOnly, callbacks);
  }
  DatabaseStub.prototype.getAll = function(transactionId, objectStoreId, indexId, keyRange, keyOnly, maxCount, callbacks) {
    return this.delegate_ && this.delegate_.getAll && this.delegate_.getAll(transactionId, objectStoreId, indexId, keyRange, keyOnly, maxCount, callbacks);
  }
  DatabaseStub.prototype.put = function(transactionId, objectStoreId, value, key, mode, indexKeys, callbacks) {
    return this.delegate_ && this.delegate_.put && this.delegate_.put(transactionId, objectStoreId, value, key, mode, indexKeys, callbacks);
  }
  DatabaseStub.prototype.setIndexKeys = function(transactionId, objectStoreId, primaryKey, indexKeys) {
    return this.delegate_ && this.delegate_.setIndexKeys && this.delegate_.setIndexKeys(transactionId, objectStoreId, primaryKey, indexKeys);
  }
  DatabaseStub.prototype.setIndexesReady = function(transactionId, objectStoreId, indexIds) {
    return this.delegate_ && this.delegate_.setIndexesReady && this.delegate_.setIndexesReady(transactionId, objectStoreId, indexIds);
  }
  DatabaseStub.prototype.openCursor = function(transactionId, objectStoreId, indexId, keyRange, direction, keyOnly, taskType, callbacks) {
    return this.delegate_ && this.delegate_.openCursor && this.delegate_.openCursor(transactionId, objectStoreId, indexId, keyRange, direction, keyOnly, taskType, callbacks);
  }
  DatabaseStub.prototype.count = function(transactionId, objectStoreId, indexId, keyRange, callbacks) {
    return this.delegate_ && this.delegate_.count && this.delegate_.count(transactionId, objectStoreId, indexId, keyRange, callbacks);
  }
  DatabaseStub.prototype.deleteRange = function(transactionId, objectStoreId, keyRange, callbacks) {
    return this.delegate_ && this.delegate_.deleteRange && this.delegate_.deleteRange(transactionId, objectStoreId, keyRange, callbacks);
  }
  DatabaseStub.prototype.clear = function(transactionId, objectStoreId, callbacks) {
    return this.delegate_ && this.delegate_.clear && this.delegate_.clear(transactionId, objectStoreId, callbacks);
  }
  DatabaseStub.prototype.createIndex = function(transactionId, objectStoreId, indexId, name, keyPath, unique, multiEntry) {
    return this.delegate_ && this.delegate_.createIndex && this.delegate_.createIndex(transactionId, objectStoreId, indexId, name, keyPath, unique, multiEntry);
  }
  DatabaseStub.prototype.deleteIndex = function(transactionId, objectStoreId, indexId) {
    return this.delegate_ && this.delegate_.deleteIndex && this.delegate_.deleteIndex(transactionId, objectStoreId, indexId);
  }
  DatabaseStub.prototype.renameIndex = function(transactionId, objectStoreId, indexId, newName) {
    return this.delegate_ && this.delegate_.renameIndex && this.delegate_.renameIndex(transactionId, objectStoreId, indexId, newName);
  }
  DatabaseStub.prototype.abort = function(transactionId) {
    return this.delegate_ && this.delegate_.abort && this.delegate_.abort(transactionId);
  }
  DatabaseStub.prototype.commit = function(transactionId) {
    return this.delegate_ && this.delegate_.commit && this.delegate_.commit(transactionId);
  }

  DatabaseStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kDatabase_CreateObjectStore_Name:
      var params = reader.decodeStruct(Database_CreateObjectStore_Params);
      this.createObjectStore(params.transactionId, params.objectStoreId, params.name, params.keyPath, params.autoIncrement);
      return true;
    case kDatabase_DeleteObjectStore_Name:
      var params = reader.decodeStruct(Database_DeleteObjectStore_Params);
      this.deleteObjectStore(params.transactionId, params.objectStoreId);
      return true;
    case kDatabase_RenameObjectStore_Name:
      var params = reader.decodeStruct(Database_RenameObjectStore_Params);
      this.renameObjectStore(params.transactionId, params.objectStoreId, params.newName);
      return true;
    case kDatabase_CreateTransaction_Name:
      var params = reader.decodeStruct(Database_CreateTransaction_Params);
      this.createTransaction(params.transactionId, params.objectStoreIds, params.mode);
      return true;
    case kDatabase_Close_Name:
      var params = reader.decodeStruct(Database_Close_Params);
      this.close();
      return true;
    case kDatabase_VersionChangeIgnored_Name:
      var params = reader.decodeStruct(Database_VersionChangeIgnored_Params);
      this.versionChangeIgnored();
      return true;
    case kDatabase_AddObserver_Name:
      var params = reader.decodeStruct(Database_AddObserver_Params);
      this.addObserver(params.transactionId, params.observerId, params.includeTransaction, params.noRecords, params.values, params.operationTypes);
      return true;
    case kDatabase_RemoveObservers_Name:
      var params = reader.decodeStruct(Database_RemoveObservers_Params);
      this.removeObservers(params.observers);
      return true;
    case kDatabase_Get_Name:
      var params = reader.decodeStruct(Database_Get_Params);
      this.get(params.transactionId, params.objectStoreId, params.indexId, params.keyRange, params.keyOnly, params.callbacks);
      return true;
    case kDatabase_GetAll_Name:
      var params = reader.decodeStruct(Database_GetAll_Params);
      this.getAll(params.transactionId, params.objectStoreId, params.indexId, params.keyRange, params.keyOnly, params.maxCount, params.callbacks);
      return true;
    case kDatabase_Put_Name:
      var params = reader.decodeStruct(Database_Put_Params);
      this.put(params.transactionId, params.objectStoreId, params.value, params.key, params.mode, params.indexKeys, params.callbacks);
      return true;
    case kDatabase_SetIndexKeys_Name:
      var params = reader.decodeStruct(Database_SetIndexKeys_Params);
      this.setIndexKeys(params.transactionId, params.objectStoreId, params.primaryKey, params.indexKeys);
      return true;
    case kDatabase_SetIndexesReady_Name:
      var params = reader.decodeStruct(Database_SetIndexesReady_Params);
      this.setIndexesReady(params.transactionId, params.objectStoreId, params.indexIds);
      return true;
    case kDatabase_OpenCursor_Name:
      var params = reader.decodeStruct(Database_OpenCursor_Params);
      this.openCursor(params.transactionId, params.objectStoreId, params.indexId, params.keyRange, params.direction, params.keyOnly, params.taskType, params.callbacks);
      return true;
    case kDatabase_Count_Name:
      var params = reader.decodeStruct(Database_Count_Params);
      this.count(params.transactionId, params.objectStoreId, params.indexId, params.keyRange, params.callbacks);
      return true;
    case kDatabase_DeleteRange_Name:
      var params = reader.decodeStruct(Database_DeleteRange_Params);
      this.deleteRange(params.transactionId, params.objectStoreId, params.keyRange, params.callbacks);
      return true;
    case kDatabase_Clear_Name:
      var params = reader.decodeStruct(Database_Clear_Params);
      this.clear(params.transactionId, params.objectStoreId, params.callbacks);
      return true;
    case kDatabase_CreateIndex_Name:
      var params = reader.decodeStruct(Database_CreateIndex_Params);
      this.createIndex(params.transactionId, params.objectStoreId, params.indexId, params.name, params.keyPath, params.unique, params.multiEntry);
      return true;
    case kDatabase_DeleteIndex_Name:
      var params = reader.decodeStruct(Database_DeleteIndex_Params);
      this.deleteIndex(params.transactionId, params.objectStoreId, params.indexId);
      return true;
    case kDatabase_RenameIndex_Name:
      var params = reader.decodeStruct(Database_RenameIndex_Params);
      this.renameIndex(params.transactionId, params.objectStoreId, params.indexId, params.newName);
      return true;
    case kDatabase_Abort_Name:
      var params = reader.decodeStruct(Database_Abort_Params);
      this.abort(params.transactionId);
      return true;
    case kDatabase_Commit_Name:
      var params = reader.decodeStruct(Database_Commit_Params);
      this.commit(params.transactionId);
      return true;
    default:
      return false;
    }
  };

  DatabaseStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateDatabaseRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kDatabase_CreateObjectStore_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = Database_CreateObjectStore_Params;
      break;
      case kDatabase_DeleteObjectStore_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = Database_DeleteObjectStore_Params;
      break;
      case kDatabase_RenameObjectStore_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = Database_RenameObjectStore_Params;
      break;
      case kDatabase_CreateTransaction_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = Database_CreateTransaction_Params;
      break;
      case kDatabase_Close_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = Database_Close_Params;
      break;
      case kDatabase_VersionChangeIgnored_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = Database_VersionChangeIgnored_Params;
      break;
      case kDatabase_AddObserver_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = Database_AddObserver_Params;
      break;
      case kDatabase_RemoveObservers_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = Database_RemoveObservers_Params;
      break;
      case kDatabase_Get_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = Database_Get_Params;
      break;
      case kDatabase_GetAll_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = Database_GetAll_Params;
      break;
      case kDatabase_Put_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = Database_Put_Params;
      break;
      case kDatabase_SetIndexKeys_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = Database_SetIndexKeys_Params;
      break;
      case kDatabase_SetIndexesReady_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = Database_SetIndexesReady_Params;
      break;
      case kDatabase_OpenCursor_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = Database_OpenCursor_Params;
      break;
      case kDatabase_Count_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = Database_Count_Params;
      break;
      case kDatabase_DeleteRange_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = Database_DeleteRange_Params;
      break;
      case kDatabase_Clear_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = Database_Clear_Params;
      break;
      case kDatabase_CreateIndex_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = Database_CreateIndex_Params;
      break;
      case kDatabase_DeleteIndex_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = Database_DeleteIndex_Params;
      break;
      case kDatabase_RenameIndex_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = Database_RenameIndex_Params;
      break;
      case kDatabase_Abort_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = Database_Abort_Params;
      break;
      case kDatabase_Commit_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = Database_Commit_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateDatabaseResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var Database = {
    name: 'indexed_db.mojom.Database',
    kVersion: 0,
    ptrClass: DatabasePtr,
    proxyClass: DatabaseProxy,
    stubClass: DatabaseStub,
    validateRequest: validateDatabaseRequest,
    validateResponse: null,
    mojomId: 'content/common/indexed_db/indexed_db.mojom',
    fuzzMethods: {
      createObjectStore: {
        params: Database_CreateObjectStore_Params,
      },
      deleteObjectStore: {
        params: Database_DeleteObjectStore_Params,
      },
      renameObjectStore: {
        params: Database_RenameObjectStore_Params,
      },
      createTransaction: {
        params: Database_CreateTransaction_Params,
      },
      close: {
        params: Database_Close_Params,
      },
      versionChangeIgnored: {
        params: Database_VersionChangeIgnored_Params,
      },
      addObserver: {
        params: Database_AddObserver_Params,
      },
      removeObservers: {
        params: Database_RemoveObservers_Params,
      },
      get: {
        params: Database_Get_Params,
      },
      getAll: {
        params: Database_GetAll_Params,
      },
      put: {
        params: Database_Put_Params,
      },
      setIndexKeys: {
        params: Database_SetIndexKeys_Params,
      },
      setIndexesReady: {
        params: Database_SetIndexesReady_Params,
      },
      openCursor: {
        params: Database_OpenCursor_Params,
      },
      count: {
        params: Database_Count_Params,
      },
      deleteRange: {
        params: Database_DeleteRange_Params,
      },
      clear: {
        params: Database_Clear_Params,
      },
      createIndex: {
        params: Database_CreateIndex_Params,
      },
      deleteIndex: {
        params: Database_DeleteIndex_Params,
      },
      renameIndex: {
        params: Database_RenameIndex_Params,
      },
      abort: {
        params: Database_Abort_Params,
      },
      commit: {
        params: Database_Commit_Params,
      },
    },
  };
  DatabaseStub.prototype.validator = validateDatabaseRequest;
  DatabaseProxy.prototype.validator = null;
  var kFactory_GetDatabaseNames_Name = 1778805985;
  var kFactory_Open_Name = 199874022;
  var kFactory_DeleteDatabase_Name = 470458337;
  var kFactory_AbortTransactionsAndCompactDatabase_Name = 557936831;
  var kFactory_AbortTransactionsForDatabase_Name = 897499022;

  function FactoryPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(Factory,
                                                   handleOrPtrInfo);
  }

  function FactoryAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        Factory, associatedInterfacePtrInfo);
  }

  FactoryAssociatedPtr.prototype =
      Object.create(FactoryPtr.prototype);
  FactoryAssociatedPtr.prototype.constructor =
      FactoryAssociatedPtr;

  function FactoryProxy(receiver) {
    this.receiver_ = receiver;
  }
  FactoryPtr.prototype.getDatabaseNames = function() {
    return FactoryProxy.prototype.getDatabaseNames
        .apply(this.ptr.getProxy(), arguments);
  };

  FactoryProxy.prototype.getDatabaseNames = function(callbacks, origin) {
    var params_ = new Factory_GetDatabaseNames_Params();
    params_.callbacks = callbacks;
    params_.origin = origin;
    var builder = new codec.MessageV2Builder(
        kFactory_GetDatabaseNames_Name,
        codec.align(Factory_GetDatabaseNames_Params.encodedSize));
    builder.setPayload(Factory_GetDatabaseNames_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  FactoryPtr.prototype.open = function() {
    return FactoryProxy.prototype.open
        .apply(this.ptr.getProxy(), arguments);
  };

  FactoryProxy.prototype.open = function(callbacks, databaseCallbacks, origin, name, version, transactionId) {
    var params_ = new Factory_Open_Params();
    params_.callbacks = callbacks;
    params_.databaseCallbacks = databaseCallbacks;
    params_.origin = origin;
    params_.name = name;
    params_.version = version;
    params_.transactionId = transactionId;
    var builder = new codec.MessageV2Builder(
        kFactory_Open_Name,
        codec.align(Factory_Open_Params.encodedSize));
    builder.setPayload(Factory_Open_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  FactoryPtr.prototype.deleteDatabase = function() {
    return FactoryProxy.prototype.deleteDatabase
        .apply(this.ptr.getProxy(), arguments);
  };

  FactoryProxy.prototype.deleteDatabase = function(callbacks, origin, name, forceClose) {
    var params_ = new Factory_DeleteDatabase_Params();
    params_.callbacks = callbacks;
    params_.origin = origin;
    params_.name = name;
    params_.forceClose = forceClose;
    var builder = new codec.MessageV2Builder(
        kFactory_DeleteDatabase_Name,
        codec.align(Factory_DeleteDatabase_Params.encodedSize));
    builder.setPayload(Factory_DeleteDatabase_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  FactoryPtr.prototype.abortTransactionsAndCompactDatabase = function() {
    return FactoryProxy.prototype.abortTransactionsAndCompactDatabase
        .apply(this.ptr.getProxy(), arguments);
  };

  FactoryProxy.prototype.abortTransactionsAndCompactDatabase = function(origin) {
    var params_ = new Factory_AbortTransactionsAndCompactDatabase_Params();
    params_.origin = origin;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kFactory_AbortTransactionsAndCompactDatabase_Name,
          codec.align(Factory_AbortTransactionsAndCompactDatabase_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(Factory_AbortTransactionsAndCompactDatabase_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(Factory_AbortTransactionsAndCompactDatabase_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  FactoryPtr.prototype.abortTransactionsForDatabase = function() {
    return FactoryProxy.prototype.abortTransactionsForDatabase
        .apply(this.ptr.getProxy(), arguments);
  };

  FactoryProxy.prototype.abortTransactionsForDatabase = function(origin) {
    var params_ = new Factory_AbortTransactionsForDatabase_Params();
    params_.origin = origin;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kFactory_AbortTransactionsForDatabase_Name,
          codec.align(Factory_AbortTransactionsForDatabase_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(Factory_AbortTransactionsForDatabase_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(Factory_AbortTransactionsForDatabase_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };

  function FactoryStub(delegate) {
    this.delegate_ = delegate;
  }
  FactoryStub.prototype.getDatabaseNames = function(callbacks, origin) {
    return this.delegate_ && this.delegate_.getDatabaseNames && this.delegate_.getDatabaseNames(callbacks, origin);
  }
  FactoryStub.prototype.open = function(callbacks, databaseCallbacks, origin, name, version, transactionId) {
    return this.delegate_ && this.delegate_.open && this.delegate_.open(callbacks, databaseCallbacks, origin, name, version, transactionId);
  }
  FactoryStub.prototype.deleteDatabase = function(callbacks, origin, name, forceClose) {
    return this.delegate_ && this.delegate_.deleteDatabase && this.delegate_.deleteDatabase(callbacks, origin, name, forceClose);
  }
  FactoryStub.prototype.abortTransactionsAndCompactDatabase = function(origin) {
    return this.delegate_ && this.delegate_.abortTransactionsAndCompactDatabase && this.delegate_.abortTransactionsAndCompactDatabase(origin);
  }
  FactoryStub.prototype.abortTransactionsForDatabase = function(origin) {
    return this.delegate_ && this.delegate_.abortTransactionsForDatabase && this.delegate_.abortTransactionsForDatabase(origin);
  }

  FactoryStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kFactory_GetDatabaseNames_Name:
      var params = reader.decodeStruct(Factory_GetDatabaseNames_Params);
      this.getDatabaseNames(params.callbacks, params.origin);
      return true;
    case kFactory_Open_Name:
      var params = reader.decodeStruct(Factory_Open_Params);
      this.open(params.callbacks, params.databaseCallbacks, params.origin, params.name, params.version, params.transactionId);
      return true;
    case kFactory_DeleteDatabase_Name:
      var params = reader.decodeStruct(Factory_DeleteDatabase_Params);
      this.deleteDatabase(params.callbacks, params.origin, params.name, params.forceClose);
      return true;
    default:
      return false;
    }
  };

  FactoryStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kFactory_AbortTransactionsAndCompactDatabase_Name:
      var params = reader.decodeStruct(Factory_AbortTransactionsAndCompactDatabase_Params);
      this.abortTransactionsAndCompactDatabase(params.origin).then(function(response) {
        var responseParams =
            new Factory_AbortTransactionsAndCompactDatabase_ResponseParams();
        responseParams.status = response.status;
        var builder = new codec.MessageV1Builder(
            kFactory_AbortTransactionsAndCompactDatabase_Name,
            codec.align(Factory_AbortTransactionsAndCompactDatabase_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(Factory_AbortTransactionsAndCompactDatabase_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kFactory_AbortTransactionsForDatabase_Name:
      var params = reader.decodeStruct(Factory_AbortTransactionsForDatabase_Params);
      this.abortTransactionsForDatabase(params.origin).then(function(response) {
        var responseParams =
            new Factory_AbortTransactionsForDatabase_ResponseParams();
        responseParams.status = response.status;
        var builder = new codec.MessageV1Builder(
            kFactory_AbortTransactionsForDatabase_Name,
            codec.align(Factory_AbortTransactionsForDatabase_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(Factory_AbortTransactionsForDatabase_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    default:
      return false;
    }
  };

  function validateFactoryRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kFactory_GetDatabaseNames_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = Factory_GetDatabaseNames_Params;
      break;
      case kFactory_Open_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = Factory_Open_Params;
      break;
      case kFactory_DeleteDatabase_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = Factory_DeleteDatabase_Params;
      break;
      case kFactory_AbortTransactionsAndCompactDatabase_Name:
        if (message.expectsResponse())
          paramsClass = Factory_AbortTransactionsAndCompactDatabase_Params;
      break;
      case kFactory_AbortTransactionsForDatabase_Name:
        if (message.expectsResponse())
          paramsClass = Factory_AbortTransactionsForDatabase_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateFactoryResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kFactory_AbortTransactionsAndCompactDatabase_Name:
        if (message.isResponse())
          paramsClass = Factory_AbortTransactionsAndCompactDatabase_ResponseParams;
        break;
      case kFactory_AbortTransactionsForDatabase_Name:
        if (message.isResponse())
          paramsClass = Factory_AbortTransactionsForDatabase_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var Factory = {
    name: 'indexed_db.mojom.Factory',
    kVersion: 0,
    ptrClass: FactoryPtr,
    proxyClass: FactoryProxy,
    stubClass: FactoryStub,
    validateRequest: validateFactoryRequest,
    validateResponse: validateFactoryResponse,
    mojomId: 'content/common/indexed_db/indexed_db.mojom',
    fuzzMethods: {
      getDatabaseNames: {
        params: Factory_GetDatabaseNames_Params,
      },
      open: {
        params: Factory_Open_Params,
      },
      deleteDatabase: {
        params: Factory_DeleteDatabase_Params,
      },
      abortTransactionsAndCompactDatabase: {
        params: Factory_AbortTransactionsAndCompactDatabase_Params,
      },
      abortTransactionsForDatabase: {
        params: Factory_AbortTransactionsForDatabase_Params,
      },
    },
  };
  FactoryStub.prototype.validator = validateFactoryRequest;
  FactoryProxy.prototype.validator = validateFactoryResponse;
  exports.CursorDirection = CursorDirection;
  exports.DataLoss = DataLoss;
  exports.DatalessKeyType = DatalessKeyType;
  exports.OperationType = OperationType;
  exports.PutMode = PutMode;
  exports.TaskType = TaskType;
  exports.TransactionMode = TransactionMode;
  exports.Status = Status;
  exports.Key = Key;
  exports.KeyPath = KeyPath;
  exports.KeyRange = KeyRange;
  exports.IndexMetadata = IndexMetadata;
  exports.ObjectStoreMetadata = ObjectStoreMetadata;
  exports.DatabaseMetadata = DatabaseMetadata;
  exports.IndexKeys = IndexKeys;
  exports.FileInfo = FileInfo;
  exports.BlobInfo = BlobInfo;
  exports.Value = Value;
  exports.ReturnValue = ReturnValue;
  exports.Observation = Observation;
  exports.ObserverTransaction = ObserverTransaction;
  exports.ObserverChanges = ObserverChanges;
  exports.KeyData = KeyData;
  exports.KeyPathData = KeyPathData;
  exports.Callbacks = Callbacks;
  exports.CallbacksPtr = CallbacksPtr;
  exports.CallbacksAssociatedPtr = CallbacksAssociatedPtr;
  exports.DatabaseCallbacks = DatabaseCallbacks;
  exports.DatabaseCallbacksPtr = DatabaseCallbacksPtr;
  exports.DatabaseCallbacksAssociatedPtr = DatabaseCallbacksAssociatedPtr;
  exports.Cursor = Cursor;
  exports.CursorPtr = CursorPtr;
  exports.CursorAssociatedPtr = CursorAssociatedPtr;
  exports.Database = Database;
  exports.DatabasePtr = DatabasePtr;
  exports.DatabaseAssociatedPtr = DatabaseAssociatedPtr;
  exports.Factory = Factory;
  exports.FactoryPtr = FactoryPtr;
  exports.FactoryAssociatedPtr = FactoryAssociatedPtr;
})();