// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'content/common/leveldb_wrapper.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('content.mojom');
  var leveldb$ =
      mojo.internal.exposeNamespace('leveldb.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'components/services/leveldb/public/interfaces/leveldb.mojom', '../../components/services/leveldb/public/interfaces/leveldb.mojom.js');
  }



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
  function LevelDBObserver_KeyAdded_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  LevelDBObserver_KeyAdded_Params.prototype.initDefaults_ = function() {
    this.key = null;
    this.value = null;
    this.source = null;
  };
  LevelDBObserver_KeyAdded_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  LevelDBObserver_KeyAdded_Params.generate = function(generator_) {
    var generated = new LevelDBObserver_KeyAdded_Params;
    generated.key = generator_.generateArray(function() {
      return generator_.generateUint8();
    });
    generated.value = generator_.generateArray(function() {
      return generator_.generateUint8();
    });
    generated.source = generator_.generateString(false);
    return generated;
  };

  LevelDBObserver_KeyAdded_Params.prototype.mutate = function(mutator_) {
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
    if (mutator_.chooseMutateField()) {
      this.source = mutator_.mutateString(this.source, false);
    }
    return this;
  };
  LevelDBObserver_KeyAdded_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  LevelDBObserver_KeyAdded_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  LevelDBObserver_KeyAdded_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  LevelDBObserver_KeyAdded_Params.validate = function(messageValidator, offset) {
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


    // validate LevelDBObserver_KeyAdded_Params.key
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 1, codec.Uint8, false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;


    // validate LevelDBObserver_KeyAdded_Params.value
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 1, codec.Uint8, false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;


    // validate LevelDBObserver_KeyAdded_Params.source
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 16, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  LevelDBObserver_KeyAdded_Params.encodedSize = codec.kStructHeaderSize + 24;

  LevelDBObserver_KeyAdded_Params.decode = function(decoder) {
    var packed;
    var val = new LevelDBObserver_KeyAdded_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.key = decoder.decodeArrayPointer(codec.Uint8);
    val.value = decoder.decodeArrayPointer(codec.Uint8);
    val.source = decoder.decodeStruct(codec.String);
    return val;
  };

  LevelDBObserver_KeyAdded_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(LevelDBObserver_KeyAdded_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(codec.Uint8, val.key);
    encoder.encodeArrayPointer(codec.Uint8, val.value);
    encoder.encodeStruct(codec.String, val.source);
  };
  function LevelDBObserver_KeyChanged_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  LevelDBObserver_KeyChanged_Params.prototype.initDefaults_ = function() {
    this.key = null;
    this.newValue = null;
    this.oldValue = null;
    this.source = null;
  };
  LevelDBObserver_KeyChanged_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  LevelDBObserver_KeyChanged_Params.generate = function(generator_) {
    var generated = new LevelDBObserver_KeyChanged_Params;
    generated.key = generator_.generateArray(function() {
      return generator_.generateUint8();
    });
    generated.newValue = generator_.generateArray(function() {
      return generator_.generateUint8();
    });
    generated.oldValue = generator_.generateArray(function() {
      return generator_.generateUint8();
    });
    generated.source = generator_.generateString(false);
    return generated;
  };

  LevelDBObserver_KeyChanged_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.key = mutator_.mutateArray(this.key, function(val) {
        return mutator_.mutateUint8(val);
      });
    }
    if (mutator_.chooseMutateField()) {
      this.newValue = mutator_.mutateArray(this.newValue, function(val) {
        return mutator_.mutateUint8(val);
      });
    }
    if (mutator_.chooseMutateField()) {
      this.oldValue = mutator_.mutateArray(this.oldValue, function(val) {
        return mutator_.mutateUint8(val);
      });
    }
    if (mutator_.chooseMutateField()) {
      this.source = mutator_.mutateString(this.source, false);
    }
    return this;
  };
  LevelDBObserver_KeyChanged_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  LevelDBObserver_KeyChanged_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  LevelDBObserver_KeyChanged_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  LevelDBObserver_KeyChanged_Params.validate = function(messageValidator, offset) {
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


    // validate LevelDBObserver_KeyChanged_Params.key
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 1, codec.Uint8, false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;


    // validate LevelDBObserver_KeyChanged_Params.newValue
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 1, codec.Uint8, false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;


    // validate LevelDBObserver_KeyChanged_Params.oldValue
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 16, 1, codec.Uint8, false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;


    // validate LevelDBObserver_KeyChanged_Params.source
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 24, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  LevelDBObserver_KeyChanged_Params.encodedSize = codec.kStructHeaderSize + 32;

  LevelDBObserver_KeyChanged_Params.decode = function(decoder) {
    var packed;
    var val = new LevelDBObserver_KeyChanged_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.key = decoder.decodeArrayPointer(codec.Uint8);
    val.newValue = decoder.decodeArrayPointer(codec.Uint8);
    val.oldValue = decoder.decodeArrayPointer(codec.Uint8);
    val.source = decoder.decodeStruct(codec.String);
    return val;
  };

  LevelDBObserver_KeyChanged_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(LevelDBObserver_KeyChanged_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(codec.Uint8, val.key);
    encoder.encodeArrayPointer(codec.Uint8, val.newValue);
    encoder.encodeArrayPointer(codec.Uint8, val.oldValue);
    encoder.encodeStruct(codec.String, val.source);
  };
  function LevelDBObserver_KeyDeleted_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  LevelDBObserver_KeyDeleted_Params.prototype.initDefaults_ = function() {
    this.key = null;
    this.oldValue = null;
    this.source = null;
  };
  LevelDBObserver_KeyDeleted_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  LevelDBObserver_KeyDeleted_Params.generate = function(generator_) {
    var generated = new LevelDBObserver_KeyDeleted_Params;
    generated.key = generator_.generateArray(function() {
      return generator_.generateUint8();
    });
    generated.oldValue = generator_.generateArray(function() {
      return generator_.generateUint8();
    });
    generated.source = generator_.generateString(false);
    return generated;
  };

  LevelDBObserver_KeyDeleted_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.key = mutator_.mutateArray(this.key, function(val) {
        return mutator_.mutateUint8(val);
      });
    }
    if (mutator_.chooseMutateField()) {
      this.oldValue = mutator_.mutateArray(this.oldValue, function(val) {
        return mutator_.mutateUint8(val);
      });
    }
    if (mutator_.chooseMutateField()) {
      this.source = mutator_.mutateString(this.source, false);
    }
    return this;
  };
  LevelDBObserver_KeyDeleted_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  LevelDBObserver_KeyDeleted_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  LevelDBObserver_KeyDeleted_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  LevelDBObserver_KeyDeleted_Params.validate = function(messageValidator, offset) {
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


    // validate LevelDBObserver_KeyDeleted_Params.key
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 1, codec.Uint8, false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;


    // validate LevelDBObserver_KeyDeleted_Params.oldValue
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 1, codec.Uint8, false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;


    // validate LevelDBObserver_KeyDeleted_Params.source
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 16, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  LevelDBObserver_KeyDeleted_Params.encodedSize = codec.kStructHeaderSize + 24;

  LevelDBObserver_KeyDeleted_Params.decode = function(decoder) {
    var packed;
    var val = new LevelDBObserver_KeyDeleted_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.key = decoder.decodeArrayPointer(codec.Uint8);
    val.oldValue = decoder.decodeArrayPointer(codec.Uint8);
    val.source = decoder.decodeStruct(codec.String);
    return val;
  };

  LevelDBObserver_KeyDeleted_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(LevelDBObserver_KeyDeleted_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(codec.Uint8, val.key);
    encoder.encodeArrayPointer(codec.Uint8, val.oldValue);
    encoder.encodeStruct(codec.String, val.source);
  };
  function LevelDBObserver_AllDeleted_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  LevelDBObserver_AllDeleted_Params.prototype.initDefaults_ = function() {
    this.source = null;
  };
  LevelDBObserver_AllDeleted_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  LevelDBObserver_AllDeleted_Params.generate = function(generator_) {
    var generated = new LevelDBObserver_AllDeleted_Params;
    generated.source = generator_.generateString(false);
    return generated;
  };

  LevelDBObserver_AllDeleted_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.source = mutator_.mutateString(this.source, false);
    }
    return this;
  };
  LevelDBObserver_AllDeleted_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  LevelDBObserver_AllDeleted_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  LevelDBObserver_AllDeleted_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  LevelDBObserver_AllDeleted_Params.validate = function(messageValidator, offset) {
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


    // validate LevelDBObserver_AllDeleted_Params.source
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  LevelDBObserver_AllDeleted_Params.encodedSize = codec.kStructHeaderSize + 8;

  LevelDBObserver_AllDeleted_Params.decode = function(decoder) {
    var packed;
    var val = new LevelDBObserver_AllDeleted_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.source = decoder.decodeStruct(codec.String);
    return val;
  };

  LevelDBObserver_AllDeleted_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(LevelDBObserver_AllDeleted_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.source);
  };
  function LevelDBObserver_ShouldSendOldValueOnMutations_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  LevelDBObserver_ShouldSendOldValueOnMutations_Params.prototype.initDefaults_ = function() {
    this.value = false;
  };
  LevelDBObserver_ShouldSendOldValueOnMutations_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  LevelDBObserver_ShouldSendOldValueOnMutations_Params.generate = function(generator_) {
    var generated = new LevelDBObserver_ShouldSendOldValueOnMutations_Params;
    generated.value = generator_.generateBool();
    return generated;
  };

  LevelDBObserver_ShouldSendOldValueOnMutations_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.value = mutator_.mutateBool(this.value);
    }
    return this;
  };
  LevelDBObserver_ShouldSendOldValueOnMutations_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  LevelDBObserver_ShouldSendOldValueOnMutations_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  LevelDBObserver_ShouldSendOldValueOnMutations_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  LevelDBObserver_ShouldSendOldValueOnMutations_Params.validate = function(messageValidator, offset) {
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

  LevelDBObserver_ShouldSendOldValueOnMutations_Params.encodedSize = codec.kStructHeaderSize + 8;

  LevelDBObserver_ShouldSendOldValueOnMutations_Params.decode = function(decoder) {
    var packed;
    var val = new LevelDBObserver_ShouldSendOldValueOnMutations_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.value = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  LevelDBObserver_ShouldSendOldValueOnMutations_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(LevelDBObserver_ShouldSendOldValueOnMutations_Params.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.value & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function LevelDBWrapperGetAllCallback_Complete_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  LevelDBWrapperGetAllCallback_Complete_Params.prototype.initDefaults_ = function() {
    this.success = false;
  };
  LevelDBWrapperGetAllCallback_Complete_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  LevelDBWrapperGetAllCallback_Complete_Params.generate = function(generator_) {
    var generated = new LevelDBWrapperGetAllCallback_Complete_Params;
    generated.success = generator_.generateBool();
    return generated;
  };

  LevelDBWrapperGetAllCallback_Complete_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.success = mutator_.mutateBool(this.success);
    }
    return this;
  };
  LevelDBWrapperGetAllCallback_Complete_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  LevelDBWrapperGetAllCallback_Complete_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  LevelDBWrapperGetAllCallback_Complete_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  LevelDBWrapperGetAllCallback_Complete_Params.validate = function(messageValidator, offset) {
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

  LevelDBWrapperGetAllCallback_Complete_Params.encodedSize = codec.kStructHeaderSize + 8;

  LevelDBWrapperGetAllCallback_Complete_Params.decode = function(decoder) {
    var packed;
    var val = new LevelDBWrapperGetAllCallback_Complete_Params();
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

  LevelDBWrapperGetAllCallback_Complete_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(LevelDBWrapperGetAllCallback_Complete_Params.encodedSize);
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
  function LevelDBWrapper_AddObserver_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  LevelDBWrapper_AddObserver_Params.prototype.initDefaults_ = function() {
    this.observer = new associatedBindings.AssociatedInterfacePtrInfo();
  };
  LevelDBWrapper_AddObserver_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  LevelDBWrapper_AddObserver_Params.generate = function(generator_) {
    var generated = new LevelDBWrapper_AddObserver_Params;
    generated.observer = generator_.generateAssociatedInterface("content.mojom.LevelDBObserver", false);
    return generated;
  };

  LevelDBWrapper_AddObserver_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.observer = mutator_.mutateAssociatedInterface(this.observer, "content.mojom.LevelDBObserver", false);
    }
    return this;
  };
  LevelDBWrapper_AddObserver_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.observer !== null) {
      Array.prototype.push.apply(handles, ["content.mojom.LevelDBObserverAssociatedPtr"]);
    }
    return handles;
  };

  LevelDBWrapper_AddObserver_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  LevelDBWrapper_AddObserver_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.observer = handles[idx++];;
    return idx;
  };

  LevelDBWrapper_AddObserver_Params.validate = function(messageValidator, offset) {
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


    // validate LevelDBWrapper_AddObserver_Params.observer
    err = messageValidator.validateAssociatedInterface(offset + codec.kStructHeaderSize + 0, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  LevelDBWrapper_AddObserver_Params.encodedSize = codec.kStructHeaderSize + 8;

  LevelDBWrapper_AddObserver_Params.decode = function(decoder) {
    var packed;
    var val = new LevelDBWrapper_AddObserver_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.observer = decoder.decodeStruct(codec.AssociatedInterfacePtrInfo);
    return val;
  };

  LevelDBWrapper_AddObserver_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(LevelDBWrapper_AddObserver_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.AssociatedInterfacePtrInfo, val.observer);
  };
  function LevelDBWrapper_Put_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  LevelDBWrapper_Put_Params.prototype.initDefaults_ = function() {
    this.key = null;
    this.value = null;
    this.clientOldValue = null;
    this.source = null;
  };
  LevelDBWrapper_Put_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  LevelDBWrapper_Put_Params.generate = function(generator_) {
    var generated = new LevelDBWrapper_Put_Params;
    generated.key = generator_.generateArray(function() {
      return generator_.generateUint8();
    });
    generated.value = generator_.generateArray(function() {
      return generator_.generateUint8();
    });
    generated.clientOldValue = generator_.generateArray(function() {
      return generator_.generateUint8();
    });
    generated.source = generator_.generateString(false);
    return generated;
  };

  LevelDBWrapper_Put_Params.prototype.mutate = function(mutator_) {
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
    if (mutator_.chooseMutateField()) {
      this.clientOldValue = mutator_.mutateArray(this.clientOldValue, function(val) {
        return mutator_.mutateUint8(val);
      });
    }
    if (mutator_.chooseMutateField()) {
      this.source = mutator_.mutateString(this.source, false);
    }
    return this;
  };
  LevelDBWrapper_Put_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  LevelDBWrapper_Put_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  LevelDBWrapper_Put_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  LevelDBWrapper_Put_Params.validate = function(messageValidator, offset) {
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


    // validate LevelDBWrapper_Put_Params.key
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 1, codec.Uint8, false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;


    // validate LevelDBWrapper_Put_Params.value
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 1, codec.Uint8, false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;


    // validate LevelDBWrapper_Put_Params.clientOldValue
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 16, 1, codec.Uint8, true, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;


    // validate LevelDBWrapper_Put_Params.source
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 24, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  LevelDBWrapper_Put_Params.encodedSize = codec.kStructHeaderSize + 32;

  LevelDBWrapper_Put_Params.decode = function(decoder) {
    var packed;
    var val = new LevelDBWrapper_Put_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.key = decoder.decodeArrayPointer(codec.Uint8);
    val.value = decoder.decodeArrayPointer(codec.Uint8);
    val.clientOldValue = decoder.decodeArrayPointer(codec.Uint8);
    val.source = decoder.decodeStruct(codec.String);
    return val;
  };

  LevelDBWrapper_Put_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(LevelDBWrapper_Put_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(codec.Uint8, val.key);
    encoder.encodeArrayPointer(codec.Uint8, val.value);
    encoder.encodeArrayPointer(codec.Uint8, val.clientOldValue);
    encoder.encodeStruct(codec.String, val.source);
  };
  function LevelDBWrapper_Put_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  LevelDBWrapper_Put_ResponseParams.prototype.initDefaults_ = function() {
    this.success = false;
  };
  LevelDBWrapper_Put_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  LevelDBWrapper_Put_ResponseParams.generate = function(generator_) {
    var generated = new LevelDBWrapper_Put_ResponseParams;
    generated.success = generator_.generateBool();
    return generated;
  };

  LevelDBWrapper_Put_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.success = mutator_.mutateBool(this.success);
    }
    return this;
  };
  LevelDBWrapper_Put_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  LevelDBWrapper_Put_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  LevelDBWrapper_Put_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  LevelDBWrapper_Put_ResponseParams.validate = function(messageValidator, offset) {
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

  LevelDBWrapper_Put_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  LevelDBWrapper_Put_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new LevelDBWrapper_Put_ResponseParams();
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

  LevelDBWrapper_Put_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(LevelDBWrapper_Put_ResponseParams.encodedSize);
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
  function LevelDBWrapper_Delete_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  LevelDBWrapper_Delete_Params.prototype.initDefaults_ = function() {
    this.key = null;
    this.clientOldValue = null;
    this.source = null;
  };
  LevelDBWrapper_Delete_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  LevelDBWrapper_Delete_Params.generate = function(generator_) {
    var generated = new LevelDBWrapper_Delete_Params;
    generated.key = generator_.generateArray(function() {
      return generator_.generateUint8();
    });
    generated.clientOldValue = generator_.generateArray(function() {
      return generator_.generateUint8();
    });
    generated.source = generator_.generateString(false);
    return generated;
  };

  LevelDBWrapper_Delete_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.key = mutator_.mutateArray(this.key, function(val) {
        return mutator_.mutateUint8(val);
      });
    }
    if (mutator_.chooseMutateField()) {
      this.clientOldValue = mutator_.mutateArray(this.clientOldValue, function(val) {
        return mutator_.mutateUint8(val);
      });
    }
    if (mutator_.chooseMutateField()) {
      this.source = mutator_.mutateString(this.source, false);
    }
    return this;
  };
  LevelDBWrapper_Delete_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  LevelDBWrapper_Delete_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  LevelDBWrapper_Delete_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  LevelDBWrapper_Delete_Params.validate = function(messageValidator, offset) {
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


    // validate LevelDBWrapper_Delete_Params.key
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 1, codec.Uint8, false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;


    // validate LevelDBWrapper_Delete_Params.clientOldValue
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 1, codec.Uint8, true, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;


    // validate LevelDBWrapper_Delete_Params.source
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 16, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  LevelDBWrapper_Delete_Params.encodedSize = codec.kStructHeaderSize + 24;

  LevelDBWrapper_Delete_Params.decode = function(decoder) {
    var packed;
    var val = new LevelDBWrapper_Delete_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.key = decoder.decodeArrayPointer(codec.Uint8);
    val.clientOldValue = decoder.decodeArrayPointer(codec.Uint8);
    val.source = decoder.decodeStruct(codec.String);
    return val;
  };

  LevelDBWrapper_Delete_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(LevelDBWrapper_Delete_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(codec.Uint8, val.key);
    encoder.encodeArrayPointer(codec.Uint8, val.clientOldValue);
    encoder.encodeStruct(codec.String, val.source);
  };
  function LevelDBWrapper_Delete_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  LevelDBWrapper_Delete_ResponseParams.prototype.initDefaults_ = function() {
    this.success = false;
  };
  LevelDBWrapper_Delete_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  LevelDBWrapper_Delete_ResponseParams.generate = function(generator_) {
    var generated = new LevelDBWrapper_Delete_ResponseParams;
    generated.success = generator_.generateBool();
    return generated;
  };

  LevelDBWrapper_Delete_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.success = mutator_.mutateBool(this.success);
    }
    return this;
  };
  LevelDBWrapper_Delete_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  LevelDBWrapper_Delete_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  LevelDBWrapper_Delete_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  LevelDBWrapper_Delete_ResponseParams.validate = function(messageValidator, offset) {
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

  LevelDBWrapper_Delete_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  LevelDBWrapper_Delete_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new LevelDBWrapper_Delete_ResponseParams();
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

  LevelDBWrapper_Delete_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(LevelDBWrapper_Delete_ResponseParams.encodedSize);
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
  function LevelDBWrapper_DeleteAll_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  LevelDBWrapper_DeleteAll_Params.prototype.initDefaults_ = function() {
    this.source = null;
  };
  LevelDBWrapper_DeleteAll_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  LevelDBWrapper_DeleteAll_Params.generate = function(generator_) {
    var generated = new LevelDBWrapper_DeleteAll_Params;
    generated.source = generator_.generateString(false);
    return generated;
  };

  LevelDBWrapper_DeleteAll_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.source = mutator_.mutateString(this.source, false);
    }
    return this;
  };
  LevelDBWrapper_DeleteAll_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  LevelDBWrapper_DeleteAll_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  LevelDBWrapper_DeleteAll_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  LevelDBWrapper_DeleteAll_Params.validate = function(messageValidator, offset) {
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


    // validate LevelDBWrapper_DeleteAll_Params.source
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  LevelDBWrapper_DeleteAll_Params.encodedSize = codec.kStructHeaderSize + 8;

  LevelDBWrapper_DeleteAll_Params.decode = function(decoder) {
    var packed;
    var val = new LevelDBWrapper_DeleteAll_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.source = decoder.decodeStruct(codec.String);
    return val;
  };

  LevelDBWrapper_DeleteAll_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(LevelDBWrapper_DeleteAll_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.source);
  };
  function LevelDBWrapper_DeleteAll_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  LevelDBWrapper_DeleteAll_ResponseParams.prototype.initDefaults_ = function() {
    this.success = false;
  };
  LevelDBWrapper_DeleteAll_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  LevelDBWrapper_DeleteAll_ResponseParams.generate = function(generator_) {
    var generated = new LevelDBWrapper_DeleteAll_ResponseParams;
    generated.success = generator_.generateBool();
    return generated;
  };

  LevelDBWrapper_DeleteAll_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.success = mutator_.mutateBool(this.success);
    }
    return this;
  };
  LevelDBWrapper_DeleteAll_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  LevelDBWrapper_DeleteAll_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  LevelDBWrapper_DeleteAll_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  LevelDBWrapper_DeleteAll_ResponseParams.validate = function(messageValidator, offset) {
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

  LevelDBWrapper_DeleteAll_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  LevelDBWrapper_DeleteAll_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new LevelDBWrapper_DeleteAll_ResponseParams();
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

  LevelDBWrapper_DeleteAll_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(LevelDBWrapper_DeleteAll_ResponseParams.encodedSize);
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
  function LevelDBWrapper_Get_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  LevelDBWrapper_Get_Params.prototype.initDefaults_ = function() {
    this.key = null;
  };
  LevelDBWrapper_Get_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  LevelDBWrapper_Get_Params.generate = function(generator_) {
    var generated = new LevelDBWrapper_Get_Params;
    generated.key = generator_.generateArray(function() {
      return generator_.generateUint8();
    });
    return generated;
  };

  LevelDBWrapper_Get_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.key = mutator_.mutateArray(this.key, function(val) {
        return mutator_.mutateUint8(val);
      });
    }
    return this;
  };
  LevelDBWrapper_Get_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  LevelDBWrapper_Get_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  LevelDBWrapper_Get_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  LevelDBWrapper_Get_Params.validate = function(messageValidator, offset) {
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


    // validate LevelDBWrapper_Get_Params.key
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 1, codec.Uint8, false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  LevelDBWrapper_Get_Params.encodedSize = codec.kStructHeaderSize + 8;

  LevelDBWrapper_Get_Params.decode = function(decoder) {
    var packed;
    var val = new LevelDBWrapper_Get_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.key = decoder.decodeArrayPointer(codec.Uint8);
    return val;
  };

  LevelDBWrapper_Get_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(LevelDBWrapper_Get_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(codec.Uint8, val.key);
  };
  function LevelDBWrapper_Get_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  LevelDBWrapper_Get_ResponseParams.prototype.initDefaults_ = function() {
    this.success = false;
    this.value = null;
  };
  LevelDBWrapper_Get_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  LevelDBWrapper_Get_ResponseParams.generate = function(generator_) {
    var generated = new LevelDBWrapper_Get_ResponseParams;
    generated.success = generator_.generateBool();
    generated.value = generator_.generateArray(function() {
      return generator_.generateUint8();
    });
    return generated;
  };

  LevelDBWrapper_Get_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.success = mutator_.mutateBool(this.success);
    }
    if (mutator_.chooseMutateField()) {
      this.value = mutator_.mutateArray(this.value, function(val) {
        return mutator_.mutateUint8(val);
      });
    }
    return this;
  };
  LevelDBWrapper_Get_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  LevelDBWrapper_Get_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  LevelDBWrapper_Get_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  LevelDBWrapper_Get_ResponseParams.validate = function(messageValidator, offset) {
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



    // validate LevelDBWrapper_Get_ResponseParams.value
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 1, codec.Uint8, false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  LevelDBWrapper_Get_ResponseParams.encodedSize = codec.kStructHeaderSize + 16;

  LevelDBWrapper_Get_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new LevelDBWrapper_Get_ResponseParams();
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
    val.value = decoder.decodeArrayPointer(codec.Uint8);
    return val;
  };

  LevelDBWrapper_Get_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(LevelDBWrapper_Get_ResponseParams.encodedSize);
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
    encoder.encodeArrayPointer(codec.Uint8, val.value);
  };
  function LevelDBWrapper_GetAll_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  LevelDBWrapper_GetAll_Params.prototype.initDefaults_ = function() {
    this.completeCallback = new associatedBindings.AssociatedInterfacePtrInfo();
  };
  LevelDBWrapper_GetAll_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  LevelDBWrapper_GetAll_Params.generate = function(generator_) {
    var generated = new LevelDBWrapper_GetAll_Params;
    generated.completeCallback = generator_.generateAssociatedInterface("content.mojom.LevelDBWrapperGetAllCallback", false);
    return generated;
  };

  LevelDBWrapper_GetAll_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.completeCallback = mutator_.mutateAssociatedInterface(this.completeCallback, "content.mojom.LevelDBWrapperGetAllCallback", false);
    }
    return this;
  };
  LevelDBWrapper_GetAll_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.completeCallback !== null) {
      Array.prototype.push.apply(handles, ["content.mojom.LevelDBWrapperGetAllCallbackAssociatedPtr"]);
    }
    return handles;
  };

  LevelDBWrapper_GetAll_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  LevelDBWrapper_GetAll_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.completeCallback = handles[idx++];;
    return idx;
  };

  LevelDBWrapper_GetAll_Params.validate = function(messageValidator, offset) {
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


    // validate LevelDBWrapper_GetAll_Params.completeCallback
    err = messageValidator.validateAssociatedInterface(offset + codec.kStructHeaderSize + 0, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  LevelDBWrapper_GetAll_Params.encodedSize = codec.kStructHeaderSize + 8;

  LevelDBWrapper_GetAll_Params.decode = function(decoder) {
    var packed;
    var val = new LevelDBWrapper_GetAll_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.completeCallback = decoder.decodeStruct(codec.AssociatedInterfacePtrInfo);
    return val;
  };

  LevelDBWrapper_GetAll_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(LevelDBWrapper_GetAll_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.AssociatedInterfacePtrInfo, val.completeCallback);
  };
  function LevelDBWrapper_GetAll_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  LevelDBWrapper_GetAll_ResponseParams.prototype.initDefaults_ = function() {
    this.status = 0;
    this.data = null;
  };
  LevelDBWrapper_GetAll_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  LevelDBWrapper_GetAll_ResponseParams.generate = function(generator_) {
    var generated = new LevelDBWrapper_GetAll_ResponseParams;
    generated.status = generator_.generateEnum(0, 5);
    generated.data = generator_.generateArray(function() {
      return generator_.generateStruct(content.mojom.KeyValue, false);
    });
    return generated;
  };

  LevelDBWrapper_GetAll_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.status = mutator_.mutateEnum(this.status, 0, 5);
    }
    if (mutator_.chooseMutateField()) {
      this.data = mutator_.mutateArray(this.data, function(val) {
        return mutator_.mutateStruct(content.mojom.KeyValue, false);
      });
    }
    return this;
  };
  LevelDBWrapper_GetAll_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  LevelDBWrapper_GetAll_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  LevelDBWrapper_GetAll_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  LevelDBWrapper_GetAll_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate LevelDBWrapper_GetAll_ResponseParams.status
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, leveldb$.DatabaseError);
    if (err !== validator.validationError.NONE)
        return err;


    // validate LevelDBWrapper_GetAll_ResponseParams.data
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 8, new codec.PointerTo(KeyValue), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  LevelDBWrapper_GetAll_ResponseParams.encodedSize = codec.kStructHeaderSize + 16;

  LevelDBWrapper_GetAll_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new LevelDBWrapper_GetAll_ResponseParams();
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

  LevelDBWrapper_GetAll_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(LevelDBWrapper_GetAll_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.status);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeArrayPointer(new codec.PointerTo(KeyValue), val.data);
  };
  var kLevelDBObserver_KeyAdded_Name = 711500370;
  var kLevelDBObserver_KeyChanged_Name = 1516579929;
  var kLevelDBObserver_KeyDeleted_Name = 330695549;
  var kLevelDBObserver_AllDeleted_Name = 680692123;
  var kLevelDBObserver_ShouldSendOldValueOnMutations_Name = 1122177602;

  function LevelDBObserverPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(LevelDBObserver,
                                                   handleOrPtrInfo);
  }

  function LevelDBObserverAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        LevelDBObserver, associatedInterfacePtrInfo);
  }

  LevelDBObserverAssociatedPtr.prototype =
      Object.create(LevelDBObserverPtr.prototype);
  LevelDBObserverAssociatedPtr.prototype.constructor =
      LevelDBObserverAssociatedPtr;

  function LevelDBObserverProxy(receiver) {
    this.receiver_ = receiver;
  }
  LevelDBObserverPtr.prototype.keyAdded = function() {
    return LevelDBObserverProxy.prototype.keyAdded
        .apply(this.ptr.getProxy(), arguments);
  };

  LevelDBObserverProxy.prototype.keyAdded = function(key, value, source) {
    var params_ = new LevelDBObserver_KeyAdded_Params();
    params_.key = key;
    params_.value = value;
    params_.source = source;
    var builder = new codec.MessageV0Builder(
        kLevelDBObserver_KeyAdded_Name,
        codec.align(LevelDBObserver_KeyAdded_Params.encodedSize));
    builder.encodeStruct(LevelDBObserver_KeyAdded_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  LevelDBObserverPtr.prototype.keyChanged = function() {
    return LevelDBObserverProxy.prototype.keyChanged
        .apply(this.ptr.getProxy(), arguments);
  };

  LevelDBObserverProxy.prototype.keyChanged = function(key, newValue, oldValue, source) {
    var params_ = new LevelDBObserver_KeyChanged_Params();
    params_.key = key;
    params_.newValue = newValue;
    params_.oldValue = oldValue;
    params_.source = source;
    var builder = new codec.MessageV0Builder(
        kLevelDBObserver_KeyChanged_Name,
        codec.align(LevelDBObserver_KeyChanged_Params.encodedSize));
    builder.encodeStruct(LevelDBObserver_KeyChanged_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  LevelDBObserverPtr.prototype.keyDeleted = function() {
    return LevelDBObserverProxy.prototype.keyDeleted
        .apply(this.ptr.getProxy(), arguments);
  };

  LevelDBObserverProxy.prototype.keyDeleted = function(key, oldValue, source) {
    var params_ = new LevelDBObserver_KeyDeleted_Params();
    params_.key = key;
    params_.oldValue = oldValue;
    params_.source = source;
    var builder = new codec.MessageV0Builder(
        kLevelDBObserver_KeyDeleted_Name,
        codec.align(LevelDBObserver_KeyDeleted_Params.encodedSize));
    builder.encodeStruct(LevelDBObserver_KeyDeleted_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  LevelDBObserverPtr.prototype.allDeleted = function() {
    return LevelDBObserverProxy.prototype.allDeleted
        .apply(this.ptr.getProxy(), arguments);
  };

  LevelDBObserverProxy.prototype.allDeleted = function(source) {
    var params_ = new LevelDBObserver_AllDeleted_Params();
    params_.source = source;
    var builder = new codec.MessageV0Builder(
        kLevelDBObserver_AllDeleted_Name,
        codec.align(LevelDBObserver_AllDeleted_Params.encodedSize));
    builder.encodeStruct(LevelDBObserver_AllDeleted_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  LevelDBObserverPtr.prototype.shouldSendOldValueOnMutations = function() {
    return LevelDBObserverProxy.prototype.shouldSendOldValueOnMutations
        .apply(this.ptr.getProxy(), arguments);
  };

  LevelDBObserverProxy.prototype.shouldSendOldValueOnMutations = function(value) {
    var params_ = new LevelDBObserver_ShouldSendOldValueOnMutations_Params();
    params_.value = value;
    var builder = new codec.MessageV0Builder(
        kLevelDBObserver_ShouldSendOldValueOnMutations_Name,
        codec.align(LevelDBObserver_ShouldSendOldValueOnMutations_Params.encodedSize));
    builder.encodeStruct(LevelDBObserver_ShouldSendOldValueOnMutations_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function LevelDBObserverStub(delegate) {
    this.delegate_ = delegate;
  }
  LevelDBObserverStub.prototype.keyAdded = function(key, value, source) {
    return this.delegate_ && this.delegate_.keyAdded && this.delegate_.keyAdded(key, value, source);
  }
  LevelDBObserverStub.prototype.keyChanged = function(key, newValue, oldValue, source) {
    return this.delegate_ && this.delegate_.keyChanged && this.delegate_.keyChanged(key, newValue, oldValue, source);
  }
  LevelDBObserverStub.prototype.keyDeleted = function(key, oldValue, source) {
    return this.delegate_ && this.delegate_.keyDeleted && this.delegate_.keyDeleted(key, oldValue, source);
  }
  LevelDBObserverStub.prototype.allDeleted = function(source) {
    return this.delegate_ && this.delegate_.allDeleted && this.delegate_.allDeleted(source);
  }
  LevelDBObserverStub.prototype.shouldSendOldValueOnMutations = function(value) {
    return this.delegate_ && this.delegate_.shouldSendOldValueOnMutations && this.delegate_.shouldSendOldValueOnMutations(value);
  }

  LevelDBObserverStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kLevelDBObserver_KeyAdded_Name:
      var params = reader.decodeStruct(LevelDBObserver_KeyAdded_Params);
      this.keyAdded(params.key, params.value, params.source);
      return true;
    case kLevelDBObserver_KeyChanged_Name:
      var params = reader.decodeStruct(LevelDBObserver_KeyChanged_Params);
      this.keyChanged(params.key, params.newValue, params.oldValue, params.source);
      return true;
    case kLevelDBObserver_KeyDeleted_Name:
      var params = reader.decodeStruct(LevelDBObserver_KeyDeleted_Params);
      this.keyDeleted(params.key, params.oldValue, params.source);
      return true;
    case kLevelDBObserver_AllDeleted_Name:
      var params = reader.decodeStruct(LevelDBObserver_AllDeleted_Params);
      this.allDeleted(params.source);
      return true;
    case kLevelDBObserver_ShouldSendOldValueOnMutations_Name:
      var params = reader.decodeStruct(LevelDBObserver_ShouldSendOldValueOnMutations_Params);
      this.shouldSendOldValueOnMutations(params.value);
      return true;
    default:
      return false;
    }
  };

  LevelDBObserverStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateLevelDBObserverRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kLevelDBObserver_KeyAdded_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = LevelDBObserver_KeyAdded_Params;
      break;
      case kLevelDBObserver_KeyChanged_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = LevelDBObserver_KeyChanged_Params;
      break;
      case kLevelDBObserver_KeyDeleted_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = LevelDBObserver_KeyDeleted_Params;
      break;
      case kLevelDBObserver_AllDeleted_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = LevelDBObserver_AllDeleted_Params;
      break;
      case kLevelDBObserver_ShouldSendOldValueOnMutations_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = LevelDBObserver_ShouldSendOldValueOnMutations_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateLevelDBObserverResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var LevelDBObserver = {
    name: 'content.mojom.LevelDBObserver',
    kVersion: 0,
    ptrClass: LevelDBObserverPtr,
    proxyClass: LevelDBObserverProxy,
    stubClass: LevelDBObserverStub,
    validateRequest: validateLevelDBObserverRequest,
    validateResponse: null,
    mojomId: 'content/common/leveldb_wrapper.mojom',
    fuzzMethods: {
      keyAdded: {
        params: LevelDBObserver_KeyAdded_Params,
      },
      keyChanged: {
        params: LevelDBObserver_KeyChanged_Params,
      },
      keyDeleted: {
        params: LevelDBObserver_KeyDeleted_Params,
      },
      allDeleted: {
        params: LevelDBObserver_AllDeleted_Params,
      },
      shouldSendOldValueOnMutations: {
        params: LevelDBObserver_ShouldSendOldValueOnMutations_Params,
      },
    },
  };
  LevelDBObserverStub.prototype.validator = validateLevelDBObserverRequest;
  LevelDBObserverProxy.prototype.validator = null;
  var kLevelDBWrapperGetAllCallback_Complete_Name = 1383444463;

  function LevelDBWrapperGetAllCallbackPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(LevelDBWrapperGetAllCallback,
                                                   handleOrPtrInfo);
  }

  function LevelDBWrapperGetAllCallbackAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        LevelDBWrapperGetAllCallback, associatedInterfacePtrInfo);
  }

  LevelDBWrapperGetAllCallbackAssociatedPtr.prototype =
      Object.create(LevelDBWrapperGetAllCallbackPtr.prototype);
  LevelDBWrapperGetAllCallbackAssociatedPtr.prototype.constructor =
      LevelDBWrapperGetAllCallbackAssociatedPtr;

  function LevelDBWrapperGetAllCallbackProxy(receiver) {
    this.receiver_ = receiver;
  }
  LevelDBWrapperGetAllCallbackPtr.prototype.complete = function() {
    return LevelDBWrapperGetAllCallbackProxy.prototype.complete
        .apply(this.ptr.getProxy(), arguments);
  };

  LevelDBWrapperGetAllCallbackProxy.prototype.complete = function(success) {
    var params_ = new LevelDBWrapperGetAllCallback_Complete_Params();
    params_.success = success;
    var builder = new codec.MessageV0Builder(
        kLevelDBWrapperGetAllCallback_Complete_Name,
        codec.align(LevelDBWrapperGetAllCallback_Complete_Params.encodedSize));
    builder.encodeStruct(LevelDBWrapperGetAllCallback_Complete_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function LevelDBWrapperGetAllCallbackStub(delegate) {
    this.delegate_ = delegate;
  }
  LevelDBWrapperGetAllCallbackStub.prototype.complete = function(success) {
    return this.delegate_ && this.delegate_.complete && this.delegate_.complete(success);
  }

  LevelDBWrapperGetAllCallbackStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kLevelDBWrapperGetAllCallback_Complete_Name:
      var params = reader.decodeStruct(LevelDBWrapperGetAllCallback_Complete_Params);
      this.complete(params.success);
      return true;
    default:
      return false;
    }
  };

  LevelDBWrapperGetAllCallbackStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateLevelDBWrapperGetAllCallbackRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kLevelDBWrapperGetAllCallback_Complete_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = LevelDBWrapperGetAllCallback_Complete_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateLevelDBWrapperGetAllCallbackResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var LevelDBWrapperGetAllCallback = {
    name: 'content.mojom.LevelDBWrapperGetAllCallback',
    kVersion: 0,
    ptrClass: LevelDBWrapperGetAllCallbackPtr,
    proxyClass: LevelDBWrapperGetAllCallbackProxy,
    stubClass: LevelDBWrapperGetAllCallbackStub,
    validateRequest: validateLevelDBWrapperGetAllCallbackRequest,
    validateResponse: null,
    mojomId: 'content/common/leveldb_wrapper.mojom',
    fuzzMethods: {
      complete: {
        params: LevelDBWrapperGetAllCallback_Complete_Params,
      },
    },
  };
  LevelDBWrapperGetAllCallbackStub.prototype.validator = validateLevelDBWrapperGetAllCallbackRequest;
  LevelDBWrapperGetAllCallbackProxy.prototype.validator = null;
  var kLevelDBWrapper_AddObserver_Name = 379942705;
  var kLevelDBWrapper_Put_Name = 481043627;
  var kLevelDBWrapper_Delete_Name = 1157319483;
  var kLevelDBWrapper_DeleteAll_Name = 327470485;
  var kLevelDBWrapper_Get_Name = 1337199723;
  var kLevelDBWrapper_GetAll_Name = 1313693382;

  function LevelDBWrapperPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(LevelDBWrapper,
                                                   handleOrPtrInfo);
  }

  function LevelDBWrapperAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        LevelDBWrapper, associatedInterfacePtrInfo);
  }

  LevelDBWrapperAssociatedPtr.prototype =
      Object.create(LevelDBWrapperPtr.prototype);
  LevelDBWrapperAssociatedPtr.prototype.constructor =
      LevelDBWrapperAssociatedPtr;

  function LevelDBWrapperProxy(receiver) {
    this.receiver_ = receiver;
  }
  LevelDBWrapperPtr.prototype.addObserver = function() {
    return LevelDBWrapperProxy.prototype.addObserver
        .apply(this.ptr.getProxy(), arguments);
  };

  LevelDBWrapperProxy.prototype.addObserver = function(observer) {
    var params_ = new LevelDBWrapper_AddObserver_Params();
    params_.observer = observer;
    var builder = new codec.MessageV2Builder(
        kLevelDBWrapper_AddObserver_Name,
        codec.align(LevelDBWrapper_AddObserver_Params.encodedSize));
    builder.setPayload(LevelDBWrapper_AddObserver_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  LevelDBWrapperPtr.prototype.put = function() {
    return LevelDBWrapperProxy.prototype.put
        .apply(this.ptr.getProxy(), arguments);
  };

  LevelDBWrapperProxy.prototype.put = function(key, value, clientOldValue, source) {
    var params_ = new LevelDBWrapper_Put_Params();
    params_.key = key;
    params_.value = value;
    params_.clientOldValue = clientOldValue;
    params_.source = source;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kLevelDBWrapper_Put_Name,
          codec.align(LevelDBWrapper_Put_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(LevelDBWrapper_Put_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(LevelDBWrapper_Put_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  LevelDBWrapperPtr.prototype.delete = function() {
    return LevelDBWrapperProxy.prototype.delete
        .apply(this.ptr.getProxy(), arguments);
  };

  LevelDBWrapperProxy.prototype.delete = function(key, clientOldValue, source) {
    var params_ = new LevelDBWrapper_Delete_Params();
    params_.key = key;
    params_.clientOldValue = clientOldValue;
    params_.source = source;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kLevelDBWrapper_Delete_Name,
          codec.align(LevelDBWrapper_Delete_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(LevelDBWrapper_Delete_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(LevelDBWrapper_Delete_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  LevelDBWrapperPtr.prototype.deleteAll = function() {
    return LevelDBWrapperProxy.prototype.deleteAll
        .apply(this.ptr.getProxy(), arguments);
  };

  LevelDBWrapperProxy.prototype.deleteAll = function(source) {
    var params_ = new LevelDBWrapper_DeleteAll_Params();
    params_.source = source;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kLevelDBWrapper_DeleteAll_Name,
          codec.align(LevelDBWrapper_DeleteAll_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(LevelDBWrapper_DeleteAll_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(LevelDBWrapper_DeleteAll_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  LevelDBWrapperPtr.prototype.get = function() {
    return LevelDBWrapperProxy.prototype.get
        .apply(this.ptr.getProxy(), arguments);
  };

  LevelDBWrapperProxy.prototype.get = function(key) {
    var params_ = new LevelDBWrapper_Get_Params();
    params_.key = key;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kLevelDBWrapper_Get_Name,
          codec.align(LevelDBWrapper_Get_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(LevelDBWrapper_Get_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(LevelDBWrapper_Get_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  LevelDBWrapperPtr.prototype.getAll = function() {
    return LevelDBWrapperProxy.prototype.getAll
        .apply(this.ptr.getProxy(), arguments);
  };

  LevelDBWrapperProxy.prototype.getAll = function(completeCallback) {
    var params_ = new LevelDBWrapper_GetAll_Params();
    params_.completeCallback = completeCallback;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV2Builder(
          kLevelDBWrapper_GetAll_Name,
          codec.align(LevelDBWrapper_GetAll_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.setPayload(LevelDBWrapper_GetAll_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(LevelDBWrapper_GetAll_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };

  function LevelDBWrapperStub(delegate) {
    this.delegate_ = delegate;
  }
  LevelDBWrapperStub.prototype.addObserver = function(observer) {
    return this.delegate_ && this.delegate_.addObserver && this.delegate_.addObserver(observer);
  }
  LevelDBWrapperStub.prototype.put = function(key, value, clientOldValue, source) {
    return this.delegate_ && this.delegate_.put && this.delegate_.put(key, value, clientOldValue, source);
  }
  LevelDBWrapperStub.prototype.delete = function(key, clientOldValue, source) {
    return this.delegate_ && this.delegate_.delete && this.delegate_.delete(key, clientOldValue, source);
  }
  LevelDBWrapperStub.prototype.deleteAll = function(source) {
    return this.delegate_ && this.delegate_.deleteAll && this.delegate_.deleteAll(source);
  }
  LevelDBWrapperStub.prototype.get = function(key) {
    return this.delegate_ && this.delegate_.get && this.delegate_.get(key);
  }
  LevelDBWrapperStub.prototype.getAll = function(completeCallback) {
    return this.delegate_ && this.delegate_.getAll && this.delegate_.getAll(completeCallback);
  }

  LevelDBWrapperStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kLevelDBWrapper_AddObserver_Name:
      var params = reader.decodeStruct(LevelDBWrapper_AddObserver_Params);
      this.addObserver(params.observer);
      return true;
    default:
      return false;
    }
  };

  LevelDBWrapperStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kLevelDBWrapper_Put_Name:
      var params = reader.decodeStruct(LevelDBWrapper_Put_Params);
      this.put(params.key, params.value, params.clientOldValue, params.source).then(function(response) {
        var responseParams =
            new LevelDBWrapper_Put_ResponseParams();
        responseParams.success = response.success;
        var builder = new codec.MessageV1Builder(
            kLevelDBWrapper_Put_Name,
            codec.align(LevelDBWrapper_Put_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(LevelDBWrapper_Put_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kLevelDBWrapper_Delete_Name:
      var params = reader.decodeStruct(LevelDBWrapper_Delete_Params);
      this.delete(params.key, params.clientOldValue, params.source).then(function(response) {
        var responseParams =
            new LevelDBWrapper_Delete_ResponseParams();
        responseParams.success = response.success;
        var builder = new codec.MessageV1Builder(
            kLevelDBWrapper_Delete_Name,
            codec.align(LevelDBWrapper_Delete_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(LevelDBWrapper_Delete_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kLevelDBWrapper_DeleteAll_Name:
      var params = reader.decodeStruct(LevelDBWrapper_DeleteAll_Params);
      this.deleteAll(params.source).then(function(response) {
        var responseParams =
            new LevelDBWrapper_DeleteAll_ResponseParams();
        responseParams.success = response.success;
        var builder = new codec.MessageV1Builder(
            kLevelDBWrapper_DeleteAll_Name,
            codec.align(LevelDBWrapper_DeleteAll_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(LevelDBWrapper_DeleteAll_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kLevelDBWrapper_Get_Name:
      var params = reader.decodeStruct(LevelDBWrapper_Get_Params);
      this.get(params.key).then(function(response) {
        var responseParams =
            new LevelDBWrapper_Get_ResponseParams();
        responseParams.success = response.success;
        responseParams.value = response.value;
        var builder = new codec.MessageV1Builder(
            kLevelDBWrapper_Get_Name,
            codec.align(LevelDBWrapper_Get_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(LevelDBWrapper_Get_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kLevelDBWrapper_GetAll_Name:
      var params = reader.decodeStruct(LevelDBWrapper_GetAll_Params);
      this.getAll(params.completeCallback).then(function(response) {
        var responseParams =
            new LevelDBWrapper_GetAll_ResponseParams();
        responseParams.status = response.status;
        responseParams.data = response.data;
        var builder = new codec.MessageV2Builder(
            kLevelDBWrapper_GetAll_Name,
            codec.align(LevelDBWrapper_GetAll_ResponseParams
                .encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.setPayload(LevelDBWrapper_GetAll_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    default:
      return false;
    }
  };

  function validateLevelDBWrapperRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kLevelDBWrapper_AddObserver_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = LevelDBWrapper_AddObserver_Params;
      break;
      case kLevelDBWrapper_Put_Name:
        if (message.expectsResponse())
          paramsClass = LevelDBWrapper_Put_Params;
      break;
      case kLevelDBWrapper_Delete_Name:
        if (message.expectsResponse())
          paramsClass = LevelDBWrapper_Delete_Params;
      break;
      case kLevelDBWrapper_DeleteAll_Name:
        if (message.expectsResponse())
          paramsClass = LevelDBWrapper_DeleteAll_Params;
      break;
      case kLevelDBWrapper_Get_Name:
        if (message.expectsResponse())
          paramsClass = LevelDBWrapper_Get_Params;
      break;
      case kLevelDBWrapper_GetAll_Name:
        if (message.expectsResponse())
          paramsClass = LevelDBWrapper_GetAll_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateLevelDBWrapperResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kLevelDBWrapper_Put_Name:
        if (message.isResponse())
          paramsClass = LevelDBWrapper_Put_ResponseParams;
        break;
      case kLevelDBWrapper_Delete_Name:
        if (message.isResponse())
          paramsClass = LevelDBWrapper_Delete_ResponseParams;
        break;
      case kLevelDBWrapper_DeleteAll_Name:
        if (message.isResponse())
          paramsClass = LevelDBWrapper_DeleteAll_ResponseParams;
        break;
      case kLevelDBWrapper_Get_Name:
        if (message.isResponse())
          paramsClass = LevelDBWrapper_Get_ResponseParams;
        break;
      case kLevelDBWrapper_GetAll_Name:
        if (message.isResponse())
          paramsClass = LevelDBWrapper_GetAll_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var LevelDBWrapper = {
    name: 'content.mojom.LevelDBWrapper',
    kVersion: 0,
    ptrClass: LevelDBWrapperPtr,
    proxyClass: LevelDBWrapperProxy,
    stubClass: LevelDBWrapperStub,
    validateRequest: validateLevelDBWrapperRequest,
    validateResponse: validateLevelDBWrapperResponse,
    mojomId: 'content/common/leveldb_wrapper.mojom',
    fuzzMethods: {
      addObserver: {
        params: LevelDBWrapper_AddObserver_Params,
      },
      put: {
        params: LevelDBWrapper_Put_Params,
      },
      delete: {
        params: LevelDBWrapper_Delete_Params,
      },
      deleteAll: {
        params: LevelDBWrapper_DeleteAll_Params,
      },
      get: {
        params: LevelDBWrapper_Get_Params,
      },
      getAll: {
        params: LevelDBWrapper_GetAll_Params,
      },
    },
  };
  LevelDBWrapperStub.prototype.validator = validateLevelDBWrapperRequest;
  LevelDBWrapperProxy.prototype.validator = validateLevelDBWrapperResponse;
  exports.KeyValue = KeyValue;
  exports.LevelDBObserver = LevelDBObserver;
  exports.LevelDBObserverPtr = LevelDBObserverPtr;
  exports.LevelDBObserverAssociatedPtr = LevelDBObserverAssociatedPtr;
  exports.LevelDBWrapperGetAllCallback = LevelDBWrapperGetAllCallback;
  exports.LevelDBWrapperGetAllCallbackPtr = LevelDBWrapperGetAllCallbackPtr;
  exports.LevelDBWrapperGetAllCallbackAssociatedPtr = LevelDBWrapperGetAllCallbackAssociatedPtr;
  exports.LevelDBWrapper = LevelDBWrapper;
  exports.LevelDBWrapperPtr = LevelDBWrapperPtr;
  exports.LevelDBWrapperAssociatedPtr = LevelDBWrapperAssociatedPtr;
})();