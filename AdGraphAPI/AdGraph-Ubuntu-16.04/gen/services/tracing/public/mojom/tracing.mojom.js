// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'services/tracing/public/mojom/tracing.mojom';
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
  var time$ =
      mojo.internal.exposeNamespace('mojoBase.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'mojo/public/mojom/base/time.mojom', '../../../../mojo/public/mojom/base/time.mojom.js');
  }
  var values$ =
      mojo.internal.exposeNamespace('mojoBase.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'mojo/public/mojom/base/values.mojom', '../../../../mojo/public/mojom/base/values.mojom.js');
  }


  var TraceDataType = {};
  TraceDataType.ARRAY = 0;
  TraceDataType.OBJECT = TraceDataType.ARRAY + 1;
  TraceDataType.STRING = TraceDataType.OBJECT + 1;

  TraceDataType.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    }
    return false;
  };

  TraceDataType.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };

  function AgentRegistry_RegisterAgent_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  AgentRegistry_RegisterAgent_Params.prototype.initDefaults_ = function() {
    this.agent = new AgentPtr();
    this.label = null;
    this.type = 0;
    this.supportsExplicitClockSync = false;
  };
  AgentRegistry_RegisterAgent_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  AgentRegistry_RegisterAgent_Params.generate = function(generator_) {
    var generated = new AgentRegistry_RegisterAgent_Params;
    generated.agent = generator_.generateInterface("tracing.mojom.Agent", false);
    generated.label = generator_.generateString(false);
    generated.type = generator_.generateEnum(0, 2);
    generated.supportsExplicitClockSync = generator_.generateBool();
    return generated;
  };

  AgentRegistry_RegisterAgent_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.agent = mutator_.mutateInterface(this.agent, "tracing.mojom.Agent", false);
    }
    if (mutator_.chooseMutateField()) {
      this.label = mutator_.mutateString(this.label, false);
    }
    if (mutator_.chooseMutateField()) {
      this.type = mutator_.mutateEnum(this.type, 0, 2);
    }
    if (mutator_.chooseMutateField()) {
      this.supportsExplicitClockSync = mutator_.mutateBool(this.supportsExplicitClockSync);
    }
    return this;
  };
  AgentRegistry_RegisterAgent_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.agent !== null) {
      Array.prototype.push.apply(handles, ["tracing.mojom.AgentPtr"]);
    }
    return handles;
  };

  AgentRegistry_RegisterAgent_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  AgentRegistry_RegisterAgent_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.agent = handles[idx++];;
    return idx;
  };

  AgentRegistry_RegisterAgent_Params.validate = function(messageValidator, offset) {
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


    // validate AgentRegistry_RegisterAgent_Params.agent
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 0, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate AgentRegistry_RegisterAgent_Params.label
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate AgentRegistry_RegisterAgent_Params.type
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 16, TraceDataType);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  AgentRegistry_RegisterAgent_Params.encodedSize = codec.kStructHeaderSize + 24;

  AgentRegistry_RegisterAgent_Params.decode = function(decoder) {
    var packed;
    var val = new AgentRegistry_RegisterAgent_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.agent = decoder.decodeStruct(new codec.Interface(AgentPtr));
    val.label = decoder.decodeStruct(codec.String);
    val.type = decoder.decodeStruct(codec.Int32);
    packed = decoder.readUint8();
    val.supportsExplicitClockSync = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  AgentRegistry_RegisterAgent_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(AgentRegistry_RegisterAgent_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(new codec.Interface(AgentPtr), val.agent);
    encoder.encodeStruct(codec.String, val.label);
    encoder.encodeStruct(codec.Int32, val.type);
    packed = 0;
    packed |= (val.supportsExplicitClockSync & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function Agent_StartTracing_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Agent_StartTracing_Params.prototype.initDefaults_ = function() {
    this.config = null;
    this.coordinatorTime = null;
  };
  Agent_StartTracing_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Agent_StartTracing_Params.generate = function(generator_) {
    var generated = new Agent_StartTracing_Params;
    generated.config = generator_.generateString(false);
    generated.coordinatorTime = generator_.generateStruct(mojoBase.mojom.TimeTicks, false);
    return generated;
  };

  Agent_StartTracing_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.config = mutator_.mutateString(this.config, false);
    }
    if (mutator_.chooseMutateField()) {
      this.coordinatorTime = mutator_.mutateStruct(mojoBase.mojom.TimeTicks, false);
    }
    return this;
  };
  Agent_StartTracing_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Agent_StartTracing_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Agent_StartTracing_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Agent_StartTracing_Params.validate = function(messageValidator, offset) {
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


    // validate Agent_StartTracing_Params.config
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate Agent_StartTracing_Params.coordinatorTime
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, time$.TimeTicks, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Agent_StartTracing_Params.encodedSize = codec.kStructHeaderSize + 16;

  Agent_StartTracing_Params.decode = function(decoder) {
    var packed;
    var val = new Agent_StartTracing_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.config = decoder.decodeStruct(codec.String);
    val.coordinatorTime = decoder.decodeStructPointer(time$.TimeTicks);
    return val;
  };

  Agent_StartTracing_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Agent_StartTracing_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.config);
    encoder.encodeStructPointer(time$.TimeTicks, val.coordinatorTime);
  };
  function Agent_StartTracing_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Agent_StartTracing_ResponseParams.prototype.initDefaults_ = function() {
    this.success = false;
  };
  Agent_StartTracing_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Agent_StartTracing_ResponseParams.generate = function(generator_) {
    var generated = new Agent_StartTracing_ResponseParams;
    generated.success = generator_.generateBool();
    return generated;
  };

  Agent_StartTracing_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.success = mutator_.mutateBool(this.success);
    }
    return this;
  };
  Agent_StartTracing_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Agent_StartTracing_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Agent_StartTracing_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Agent_StartTracing_ResponseParams.validate = function(messageValidator, offset) {
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

  Agent_StartTracing_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  Agent_StartTracing_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new Agent_StartTracing_ResponseParams();
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

  Agent_StartTracing_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Agent_StartTracing_ResponseParams.encodedSize);
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
  function Agent_StopAndFlush_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Agent_StopAndFlush_Params.prototype.initDefaults_ = function() {
    this.recorder = new RecorderPtr();
  };
  Agent_StopAndFlush_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Agent_StopAndFlush_Params.generate = function(generator_) {
    var generated = new Agent_StopAndFlush_Params;
    generated.recorder = generator_.generateInterface("tracing.mojom.Recorder", false);
    return generated;
  };

  Agent_StopAndFlush_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.recorder = mutator_.mutateInterface(this.recorder, "tracing.mojom.Recorder", false);
    }
    return this;
  };
  Agent_StopAndFlush_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.recorder !== null) {
      Array.prototype.push.apply(handles, ["tracing.mojom.RecorderPtr"]);
    }
    return handles;
  };

  Agent_StopAndFlush_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Agent_StopAndFlush_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.recorder = handles[idx++];;
    return idx;
  };

  Agent_StopAndFlush_Params.validate = function(messageValidator, offset) {
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


    // validate Agent_StopAndFlush_Params.recorder
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 0, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Agent_StopAndFlush_Params.encodedSize = codec.kStructHeaderSize + 8;

  Agent_StopAndFlush_Params.decode = function(decoder) {
    var packed;
    var val = new Agent_StopAndFlush_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.recorder = decoder.decodeStruct(new codec.Interface(RecorderPtr));
    return val;
  };

  Agent_StopAndFlush_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Agent_StopAndFlush_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(new codec.Interface(RecorderPtr), val.recorder);
  };
  function Agent_RequestClockSyncMarker_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Agent_RequestClockSyncMarker_Params.prototype.initDefaults_ = function() {
    this.syncId = null;
  };
  Agent_RequestClockSyncMarker_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Agent_RequestClockSyncMarker_Params.generate = function(generator_) {
    var generated = new Agent_RequestClockSyncMarker_Params;
    generated.syncId = generator_.generateString(false);
    return generated;
  };

  Agent_RequestClockSyncMarker_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.syncId = mutator_.mutateString(this.syncId, false);
    }
    return this;
  };
  Agent_RequestClockSyncMarker_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Agent_RequestClockSyncMarker_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Agent_RequestClockSyncMarker_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Agent_RequestClockSyncMarker_Params.validate = function(messageValidator, offset) {
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


    // validate Agent_RequestClockSyncMarker_Params.syncId
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Agent_RequestClockSyncMarker_Params.encodedSize = codec.kStructHeaderSize + 8;

  Agent_RequestClockSyncMarker_Params.decode = function(decoder) {
    var packed;
    var val = new Agent_RequestClockSyncMarker_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.syncId = decoder.decodeStruct(codec.String);
    return val;
  };

  Agent_RequestClockSyncMarker_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Agent_RequestClockSyncMarker_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.syncId);
  };
  function Agent_RequestClockSyncMarker_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Agent_RequestClockSyncMarker_ResponseParams.prototype.initDefaults_ = function() {
    this.issueTs = null;
    this.issueEndTs = null;
  };
  Agent_RequestClockSyncMarker_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Agent_RequestClockSyncMarker_ResponseParams.generate = function(generator_) {
    var generated = new Agent_RequestClockSyncMarker_ResponseParams;
    generated.issueTs = generator_.generateStruct(mojoBase.mojom.TimeTicks, false);
    generated.issueEndTs = generator_.generateStruct(mojoBase.mojom.TimeTicks, false);
    return generated;
  };

  Agent_RequestClockSyncMarker_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.issueTs = mutator_.mutateStruct(mojoBase.mojom.TimeTicks, false);
    }
    if (mutator_.chooseMutateField()) {
      this.issueEndTs = mutator_.mutateStruct(mojoBase.mojom.TimeTicks, false);
    }
    return this;
  };
  Agent_RequestClockSyncMarker_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Agent_RequestClockSyncMarker_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Agent_RequestClockSyncMarker_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Agent_RequestClockSyncMarker_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate Agent_RequestClockSyncMarker_ResponseParams.issueTs
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, time$.TimeTicks, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate Agent_RequestClockSyncMarker_ResponseParams.issueEndTs
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, time$.TimeTicks, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Agent_RequestClockSyncMarker_ResponseParams.encodedSize = codec.kStructHeaderSize + 16;

  Agent_RequestClockSyncMarker_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new Agent_RequestClockSyncMarker_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.issueTs = decoder.decodeStructPointer(time$.TimeTicks);
    val.issueEndTs = decoder.decodeStructPointer(time$.TimeTicks);
    return val;
  };

  Agent_RequestClockSyncMarker_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Agent_RequestClockSyncMarker_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(time$.TimeTicks, val.issueTs);
    encoder.encodeStructPointer(time$.TimeTicks, val.issueEndTs);
  };
  function Agent_RequestBufferStatus_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Agent_RequestBufferStatus_Params.prototype.initDefaults_ = function() {
  };
  Agent_RequestBufferStatus_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Agent_RequestBufferStatus_Params.generate = function(generator_) {
    var generated = new Agent_RequestBufferStatus_Params;
    return generated;
  };

  Agent_RequestBufferStatus_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  Agent_RequestBufferStatus_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Agent_RequestBufferStatus_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Agent_RequestBufferStatus_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Agent_RequestBufferStatus_Params.validate = function(messageValidator, offset) {
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

  Agent_RequestBufferStatus_Params.encodedSize = codec.kStructHeaderSize + 0;

  Agent_RequestBufferStatus_Params.decode = function(decoder) {
    var packed;
    var val = new Agent_RequestBufferStatus_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  Agent_RequestBufferStatus_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Agent_RequestBufferStatus_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function Agent_RequestBufferStatus_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Agent_RequestBufferStatus_ResponseParams.prototype.initDefaults_ = function() {
    this.capacity = 0;
    this.count = 0;
  };
  Agent_RequestBufferStatus_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Agent_RequestBufferStatus_ResponseParams.generate = function(generator_) {
    var generated = new Agent_RequestBufferStatus_ResponseParams;
    generated.capacity = generator_.generateUint32();
    generated.count = generator_.generateUint32();
    return generated;
  };

  Agent_RequestBufferStatus_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.capacity = mutator_.mutateUint32(this.capacity);
    }
    if (mutator_.chooseMutateField()) {
      this.count = mutator_.mutateUint32(this.count);
    }
    return this;
  };
  Agent_RequestBufferStatus_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Agent_RequestBufferStatus_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Agent_RequestBufferStatus_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Agent_RequestBufferStatus_ResponseParams.validate = function(messageValidator, offset) {
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

  Agent_RequestBufferStatus_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  Agent_RequestBufferStatus_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new Agent_RequestBufferStatus_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.capacity = decoder.decodeStruct(codec.Uint32);
    val.count = decoder.decodeStruct(codec.Uint32);
    return val;
  };

  Agent_RequestBufferStatus_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Agent_RequestBufferStatus_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint32, val.capacity);
    encoder.encodeStruct(codec.Uint32, val.count);
  };
  function Agent_GetCategories_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Agent_GetCategories_Params.prototype.initDefaults_ = function() {
  };
  Agent_GetCategories_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Agent_GetCategories_Params.generate = function(generator_) {
    var generated = new Agent_GetCategories_Params;
    return generated;
  };

  Agent_GetCategories_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  Agent_GetCategories_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Agent_GetCategories_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Agent_GetCategories_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Agent_GetCategories_Params.validate = function(messageValidator, offset) {
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

  Agent_GetCategories_Params.encodedSize = codec.kStructHeaderSize + 0;

  Agent_GetCategories_Params.decode = function(decoder) {
    var packed;
    var val = new Agent_GetCategories_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  Agent_GetCategories_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Agent_GetCategories_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function Agent_GetCategories_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Agent_GetCategories_ResponseParams.prototype.initDefaults_ = function() {
    this.categories = null;
  };
  Agent_GetCategories_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Agent_GetCategories_ResponseParams.generate = function(generator_) {
    var generated = new Agent_GetCategories_ResponseParams;
    generated.categories = generator_.generateString(false);
    return generated;
  };

  Agent_GetCategories_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.categories = mutator_.mutateString(this.categories, false);
    }
    return this;
  };
  Agent_GetCategories_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Agent_GetCategories_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Agent_GetCategories_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Agent_GetCategories_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate Agent_GetCategories_ResponseParams.categories
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Agent_GetCategories_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  Agent_GetCategories_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new Agent_GetCategories_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.categories = decoder.decodeStruct(codec.String);
    return val;
  };

  Agent_GetCategories_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Agent_GetCategories_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.categories);
  };
  function Recorder_AddChunk_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Recorder_AddChunk_Params.prototype.initDefaults_ = function() {
    this.chunk = null;
  };
  Recorder_AddChunk_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Recorder_AddChunk_Params.generate = function(generator_) {
    var generated = new Recorder_AddChunk_Params;
    generated.chunk = generator_.generateString(false);
    return generated;
  };

  Recorder_AddChunk_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.chunk = mutator_.mutateString(this.chunk, false);
    }
    return this;
  };
  Recorder_AddChunk_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Recorder_AddChunk_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Recorder_AddChunk_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Recorder_AddChunk_Params.validate = function(messageValidator, offset) {
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


    // validate Recorder_AddChunk_Params.chunk
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Recorder_AddChunk_Params.encodedSize = codec.kStructHeaderSize + 8;

  Recorder_AddChunk_Params.decode = function(decoder) {
    var packed;
    var val = new Recorder_AddChunk_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.chunk = decoder.decodeStruct(codec.String);
    return val;
  };

  Recorder_AddChunk_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Recorder_AddChunk_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.chunk);
  };
  function Recorder_AddMetadata_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Recorder_AddMetadata_Params.prototype.initDefaults_ = function() {
    this.metadata = null;
  };
  Recorder_AddMetadata_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Recorder_AddMetadata_Params.generate = function(generator_) {
    var generated = new Recorder_AddMetadata_Params;
    generated.metadata = generator_.generateStruct(mojoBase.mojom.DictionaryValue, false);
    return generated;
  };

  Recorder_AddMetadata_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.metadata = mutator_.mutateStruct(mojoBase.mojom.DictionaryValue, false);
    }
    return this;
  };
  Recorder_AddMetadata_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Recorder_AddMetadata_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Recorder_AddMetadata_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Recorder_AddMetadata_Params.validate = function(messageValidator, offset) {
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


    // validate Recorder_AddMetadata_Params.metadata
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, values$.DictionaryValue, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Recorder_AddMetadata_Params.encodedSize = codec.kStructHeaderSize + 8;

  Recorder_AddMetadata_Params.decode = function(decoder) {
    var packed;
    var val = new Recorder_AddMetadata_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.metadata = decoder.decodeStructPointer(values$.DictionaryValue);
    return val;
  };

  Recorder_AddMetadata_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Recorder_AddMetadata_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(values$.DictionaryValue, val.metadata);
  };
  function Coordinator_StartTracing_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Coordinator_StartTracing_Params.prototype.initDefaults_ = function() {
    this.config = null;
  };
  Coordinator_StartTracing_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Coordinator_StartTracing_Params.generate = function(generator_) {
    var generated = new Coordinator_StartTracing_Params;
    generated.config = generator_.generateString(false);
    return generated;
  };

  Coordinator_StartTracing_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.config = mutator_.mutateString(this.config, false);
    }
    return this;
  };
  Coordinator_StartTracing_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Coordinator_StartTracing_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Coordinator_StartTracing_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Coordinator_StartTracing_Params.validate = function(messageValidator, offset) {
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


    // validate Coordinator_StartTracing_Params.config
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Coordinator_StartTracing_Params.encodedSize = codec.kStructHeaderSize + 8;

  Coordinator_StartTracing_Params.decode = function(decoder) {
    var packed;
    var val = new Coordinator_StartTracing_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.config = decoder.decodeStruct(codec.String);
    return val;
  };

  Coordinator_StartTracing_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Coordinator_StartTracing_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.config);
  };
  function Coordinator_StartTracing_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Coordinator_StartTracing_ResponseParams.prototype.initDefaults_ = function() {
    this.success = false;
  };
  Coordinator_StartTracing_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Coordinator_StartTracing_ResponseParams.generate = function(generator_) {
    var generated = new Coordinator_StartTracing_ResponseParams;
    generated.success = generator_.generateBool();
    return generated;
  };

  Coordinator_StartTracing_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.success = mutator_.mutateBool(this.success);
    }
    return this;
  };
  Coordinator_StartTracing_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Coordinator_StartTracing_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Coordinator_StartTracing_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Coordinator_StartTracing_ResponseParams.validate = function(messageValidator, offset) {
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

  Coordinator_StartTracing_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  Coordinator_StartTracing_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new Coordinator_StartTracing_ResponseParams();
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

  Coordinator_StartTracing_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Coordinator_StartTracing_ResponseParams.encodedSize);
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
  function Coordinator_StopAndFlush_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Coordinator_StopAndFlush_Params.prototype.initDefaults_ = function() {
    this.stream = null;
  };
  Coordinator_StopAndFlush_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Coordinator_StopAndFlush_Params.generate = function(generator_) {
    var generated = new Coordinator_StopAndFlush_Params;
    generated.stream = generator_.generateDataPipeProducer(false);
    return generated;
  };

  Coordinator_StopAndFlush_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.stream = mutator_.mutateDataPipeProducer(this.stream, false);
    }
    return this;
  };
  Coordinator_StopAndFlush_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.stream !== null) {
      Array.prototype.push.apply(handles, ["handle<data_pipe_producer>"]);
    }
    return handles;
  };

  Coordinator_StopAndFlush_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Coordinator_StopAndFlush_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.stream = handles[idx++];;
    return idx;
  };

  Coordinator_StopAndFlush_Params.validate = function(messageValidator, offset) {
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


    // validate Coordinator_StopAndFlush_Params.stream
    err = messageValidator.validateHandle(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Coordinator_StopAndFlush_Params.encodedSize = codec.kStructHeaderSize + 8;

  Coordinator_StopAndFlush_Params.decode = function(decoder) {
    var packed;
    var val = new Coordinator_StopAndFlush_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.stream = decoder.decodeStruct(codec.Handle);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  Coordinator_StopAndFlush_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Coordinator_StopAndFlush_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Handle, val.stream);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function Coordinator_StopAndFlush_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Coordinator_StopAndFlush_ResponseParams.prototype.initDefaults_ = function() {
    this.metadata = null;
  };
  Coordinator_StopAndFlush_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Coordinator_StopAndFlush_ResponseParams.generate = function(generator_) {
    var generated = new Coordinator_StopAndFlush_ResponseParams;
    generated.metadata = generator_.generateStruct(mojoBase.mojom.DictionaryValue, false);
    return generated;
  };

  Coordinator_StopAndFlush_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.metadata = mutator_.mutateStruct(mojoBase.mojom.DictionaryValue, false);
    }
    return this;
  };
  Coordinator_StopAndFlush_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Coordinator_StopAndFlush_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Coordinator_StopAndFlush_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Coordinator_StopAndFlush_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate Coordinator_StopAndFlush_ResponseParams.metadata
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, values$.DictionaryValue, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Coordinator_StopAndFlush_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  Coordinator_StopAndFlush_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new Coordinator_StopAndFlush_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.metadata = decoder.decodeStructPointer(values$.DictionaryValue);
    return val;
  };

  Coordinator_StopAndFlush_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Coordinator_StopAndFlush_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(values$.DictionaryValue, val.metadata);
  };
  function Coordinator_StopAndFlushAgent_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Coordinator_StopAndFlushAgent_Params.prototype.initDefaults_ = function() {
    this.stream = null;
    this.agentLabel = null;
  };
  Coordinator_StopAndFlushAgent_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Coordinator_StopAndFlushAgent_Params.generate = function(generator_) {
    var generated = new Coordinator_StopAndFlushAgent_Params;
    generated.stream = generator_.generateDataPipeProducer(false);
    generated.agentLabel = generator_.generateString(false);
    return generated;
  };

  Coordinator_StopAndFlushAgent_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.stream = mutator_.mutateDataPipeProducer(this.stream, false);
    }
    if (mutator_.chooseMutateField()) {
      this.agentLabel = mutator_.mutateString(this.agentLabel, false);
    }
    return this;
  };
  Coordinator_StopAndFlushAgent_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.stream !== null) {
      Array.prototype.push.apply(handles, ["handle<data_pipe_producer>"]);
    }
    return handles;
  };

  Coordinator_StopAndFlushAgent_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Coordinator_StopAndFlushAgent_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.stream = handles[idx++];;
    return idx;
  };

  Coordinator_StopAndFlushAgent_Params.validate = function(messageValidator, offset) {
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


    // validate Coordinator_StopAndFlushAgent_Params.stream
    err = messageValidator.validateHandle(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate Coordinator_StopAndFlushAgent_Params.agentLabel
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Coordinator_StopAndFlushAgent_Params.encodedSize = codec.kStructHeaderSize + 16;

  Coordinator_StopAndFlushAgent_Params.decode = function(decoder) {
    var packed;
    var val = new Coordinator_StopAndFlushAgent_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.stream = decoder.decodeStruct(codec.Handle);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.agentLabel = decoder.decodeStruct(codec.String);
    return val;
  };

  Coordinator_StopAndFlushAgent_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Coordinator_StopAndFlushAgent_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Handle, val.stream);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.String, val.agentLabel);
  };
  function Coordinator_StopAndFlushAgent_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Coordinator_StopAndFlushAgent_ResponseParams.prototype.initDefaults_ = function() {
    this.metadata = null;
  };
  Coordinator_StopAndFlushAgent_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Coordinator_StopAndFlushAgent_ResponseParams.generate = function(generator_) {
    var generated = new Coordinator_StopAndFlushAgent_ResponseParams;
    generated.metadata = generator_.generateStruct(mojoBase.mojom.DictionaryValue, false);
    return generated;
  };

  Coordinator_StopAndFlushAgent_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.metadata = mutator_.mutateStruct(mojoBase.mojom.DictionaryValue, false);
    }
    return this;
  };
  Coordinator_StopAndFlushAgent_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Coordinator_StopAndFlushAgent_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Coordinator_StopAndFlushAgent_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Coordinator_StopAndFlushAgent_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate Coordinator_StopAndFlushAgent_ResponseParams.metadata
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, values$.DictionaryValue, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Coordinator_StopAndFlushAgent_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  Coordinator_StopAndFlushAgent_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new Coordinator_StopAndFlushAgent_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.metadata = decoder.decodeStructPointer(values$.DictionaryValue);
    return val;
  };

  Coordinator_StopAndFlushAgent_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Coordinator_StopAndFlushAgent_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(values$.DictionaryValue, val.metadata);
  };
  function Coordinator_IsTracing_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Coordinator_IsTracing_Params.prototype.initDefaults_ = function() {
  };
  Coordinator_IsTracing_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Coordinator_IsTracing_Params.generate = function(generator_) {
    var generated = new Coordinator_IsTracing_Params;
    return generated;
  };

  Coordinator_IsTracing_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  Coordinator_IsTracing_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Coordinator_IsTracing_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Coordinator_IsTracing_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Coordinator_IsTracing_Params.validate = function(messageValidator, offset) {
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

  Coordinator_IsTracing_Params.encodedSize = codec.kStructHeaderSize + 0;

  Coordinator_IsTracing_Params.decode = function(decoder) {
    var packed;
    var val = new Coordinator_IsTracing_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  Coordinator_IsTracing_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Coordinator_IsTracing_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function Coordinator_IsTracing_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Coordinator_IsTracing_ResponseParams.prototype.initDefaults_ = function() {
    this.isTracing = false;
  };
  Coordinator_IsTracing_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Coordinator_IsTracing_ResponseParams.generate = function(generator_) {
    var generated = new Coordinator_IsTracing_ResponseParams;
    generated.isTracing = generator_.generateBool();
    return generated;
  };

  Coordinator_IsTracing_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.isTracing = mutator_.mutateBool(this.isTracing);
    }
    return this;
  };
  Coordinator_IsTracing_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Coordinator_IsTracing_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Coordinator_IsTracing_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Coordinator_IsTracing_ResponseParams.validate = function(messageValidator, offset) {
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

  Coordinator_IsTracing_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  Coordinator_IsTracing_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new Coordinator_IsTracing_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.isTracing = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  Coordinator_IsTracing_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Coordinator_IsTracing_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.isTracing & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function Coordinator_RequestBufferUsage_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Coordinator_RequestBufferUsage_Params.prototype.initDefaults_ = function() {
  };
  Coordinator_RequestBufferUsage_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Coordinator_RequestBufferUsage_Params.generate = function(generator_) {
    var generated = new Coordinator_RequestBufferUsage_Params;
    return generated;
  };

  Coordinator_RequestBufferUsage_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  Coordinator_RequestBufferUsage_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Coordinator_RequestBufferUsage_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Coordinator_RequestBufferUsage_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Coordinator_RequestBufferUsage_Params.validate = function(messageValidator, offset) {
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

  Coordinator_RequestBufferUsage_Params.encodedSize = codec.kStructHeaderSize + 0;

  Coordinator_RequestBufferUsage_Params.decode = function(decoder) {
    var packed;
    var val = new Coordinator_RequestBufferUsage_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  Coordinator_RequestBufferUsage_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Coordinator_RequestBufferUsage_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function Coordinator_RequestBufferUsage_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Coordinator_RequestBufferUsage_ResponseParams.prototype.initDefaults_ = function() {
    this.success = false;
    this.percentFull = 0;
    this.approximateCount = 0;
  };
  Coordinator_RequestBufferUsage_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Coordinator_RequestBufferUsage_ResponseParams.generate = function(generator_) {
    var generated = new Coordinator_RequestBufferUsage_ResponseParams;
    generated.success = generator_.generateBool();
    generated.percentFull = generator_.generateFloat();
    generated.approximateCount = generator_.generateUint32();
    return generated;
  };

  Coordinator_RequestBufferUsage_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.success = mutator_.mutateBool(this.success);
    }
    if (mutator_.chooseMutateField()) {
      this.percentFull = mutator_.mutateFloat(this.percentFull);
    }
    if (mutator_.chooseMutateField()) {
      this.approximateCount = mutator_.mutateUint32(this.approximateCount);
    }
    return this;
  };
  Coordinator_RequestBufferUsage_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Coordinator_RequestBufferUsage_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Coordinator_RequestBufferUsage_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Coordinator_RequestBufferUsage_ResponseParams.validate = function(messageValidator, offset) {
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

  Coordinator_RequestBufferUsage_ResponseParams.encodedSize = codec.kStructHeaderSize + 16;

  Coordinator_RequestBufferUsage_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new Coordinator_RequestBufferUsage_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.success = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.percentFull = decoder.decodeStruct(codec.Float);
    val.approximateCount = decoder.decodeStruct(codec.Uint32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  Coordinator_RequestBufferUsage_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Coordinator_RequestBufferUsage_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.success & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.Float, val.percentFull);
    encoder.encodeStruct(codec.Uint32, val.approximateCount);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function Coordinator_GetCategories_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Coordinator_GetCategories_Params.prototype.initDefaults_ = function() {
  };
  Coordinator_GetCategories_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Coordinator_GetCategories_Params.generate = function(generator_) {
    var generated = new Coordinator_GetCategories_Params;
    return generated;
  };

  Coordinator_GetCategories_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  Coordinator_GetCategories_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Coordinator_GetCategories_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Coordinator_GetCategories_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Coordinator_GetCategories_Params.validate = function(messageValidator, offset) {
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

  Coordinator_GetCategories_Params.encodedSize = codec.kStructHeaderSize + 0;

  Coordinator_GetCategories_Params.decode = function(decoder) {
    var packed;
    var val = new Coordinator_GetCategories_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  Coordinator_GetCategories_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Coordinator_GetCategories_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function Coordinator_GetCategories_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Coordinator_GetCategories_ResponseParams.prototype.initDefaults_ = function() {
    this.success = false;
    this.categories = null;
  };
  Coordinator_GetCategories_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Coordinator_GetCategories_ResponseParams.generate = function(generator_) {
    var generated = new Coordinator_GetCategories_ResponseParams;
    generated.success = generator_.generateBool();
    generated.categories = generator_.generateString(false);
    return generated;
  };

  Coordinator_GetCategories_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.success = mutator_.mutateBool(this.success);
    }
    if (mutator_.chooseMutateField()) {
      this.categories = mutator_.mutateString(this.categories, false);
    }
    return this;
  };
  Coordinator_GetCategories_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Coordinator_GetCategories_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Coordinator_GetCategories_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Coordinator_GetCategories_ResponseParams.validate = function(messageValidator, offset) {
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



    // validate Coordinator_GetCategories_ResponseParams.categories
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Coordinator_GetCategories_ResponseParams.encodedSize = codec.kStructHeaderSize + 16;

  Coordinator_GetCategories_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new Coordinator_GetCategories_ResponseParams();
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
    val.categories = decoder.decodeStruct(codec.String);
    return val;
  };

  Coordinator_GetCategories_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Coordinator_GetCategories_ResponseParams.encodedSize);
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
    encoder.encodeStruct(codec.String, val.categories);
  };
  var kAgentRegistry_RegisterAgent_Name = 27340847;

  function AgentRegistryPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(AgentRegistry,
                                                   handleOrPtrInfo);
  }

  function AgentRegistryAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        AgentRegistry, associatedInterfacePtrInfo);
  }

  AgentRegistryAssociatedPtr.prototype =
      Object.create(AgentRegistryPtr.prototype);
  AgentRegistryAssociatedPtr.prototype.constructor =
      AgentRegistryAssociatedPtr;

  function AgentRegistryProxy(receiver) {
    this.receiver_ = receiver;
  }
  AgentRegistryPtr.prototype.registerAgent = function() {
    return AgentRegistryProxy.prototype.registerAgent
        .apply(this.ptr.getProxy(), arguments);
  };

  AgentRegistryProxy.prototype.registerAgent = function(agent, label, type, supportsExplicitClockSync) {
    var params_ = new AgentRegistry_RegisterAgent_Params();
    params_.agent = agent;
    params_.label = label;
    params_.type = type;
    params_.supportsExplicitClockSync = supportsExplicitClockSync;
    var builder = new codec.MessageV0Builder(
        kAgentRegistry_RegisterAgent_Name,
        codec.align(AgentRegistry_RegisterAgent_Params.encodedSize));
    builder.encodeStruct(AgentRegistry_RegisterAgent_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function AgentRegistryStub(delegate) {
    this.delegate_ = delegate;
  }
  AgentRegistryStub.prototype.registerAgent = function(agent, label, type, supportsExplicitClockSync) {
    return this.delegate_ && this.delegate_.registerAgent && this.delegate_.registerAgent(agent, label, type, supportsExplicitClockSync);
  }

  AgentRegistryStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kAgentRegistry_RegisterAgent_Name:
      var params = reader.decodeStruct(AgentRegistry_RegisterAgent_Params);
      this.registerAgent(params.agent, params.label, params.type, params.supportsExplicitClockSync);
      return true;
    default:
      return false;
    }
  };

  AgentRegistryStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateAgentRegistryRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kAgentRegistry_RegisterAgent_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = AgentRegistry_RegisterAgent_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateAgentRegistryResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var AgentRegistry = {
    name: 'tracing.mojom.AgentRegistry',
    kVersion: 0,
    ptrClass: AgentRegistryPtr,
    proxyClass: AgentRegistryProxy,
    stubClass: AgentRegistryStub,
    validateRequest: validateAgentRegistryRequest,
    validateResponse: null,
    mojomId: 'services/tracing/public/mojom/tracing.mojom',
    fuzzMethods: {
      registerAgent: {
        params: AgentRegistry_RegisterAgent_Params,
      },
    },
  };
  AgentRegistryStub.prototype.validator = validateAgentRegistryRequest;
  AgentRegistryProxy.prototype.validator = null;
  var kAgent_StartTracing_Name = 1898398812;
  var kAgent_StopAndFlush_Name = 52677470;
  var kAgent_RequestClockSyncMarker_Name = 449366164;
  var kAgent_RequestBufferStatus_Name = 979562997;
  var kAgent_GetCategories_Name = 1969089178;

  function AgentPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(Agent,
                                                   handleOrPtrInfo);
  }

  function AgentAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        Agent, associatedInterfacePtrInfo);
  }

  AgentAssociatedPtr.prototype =
      Object.create(AgentPtr.prototype);
  AgentAssociatedPtr.prototype.constructor =
      AgentAssociatedPtr;

  function AgentProxy(receiver) {
    this.receiver_ = receiver;
  }
  AgentPtr.prototype.startTracing = function() {
    return AgentProxy.prototype.startTracing
        .apply(this.ptr.getProxy(), arguments);
  };

  AgentProxy.prototype.startTracing = function(config, coordinatorTime) {
    var params_ = new Agent_StartTracing_Params();
    params_.config = config;
    params_.coordinatorTime = coordinatorTime;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kAgent_StartTracing_Name,
          codec.align(Agent_StartTracing_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(Agent_StartTracing_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(Agent_StartTracing_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  AgentPtr.prototype.stopAndFlush = function() {
    return AgentProxy.prototype.stopAndFlush
        .apply(this.ptr.getProxy(), arguments);
  };

  AgentProxy.prototype.stopAndFlush = function(recorder) {
    var params_ = new Agent_StopAndFlush_Params();
    params_.recorder = recorder;
    var builder = new codec.MessageV0Builder(
        kAgent_StopAndFlush_Name,
        codec.align(Agent_StopAndFlush_Params.encodedSize));
    builder.encodeStruct(Agent_StopAndFlush_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  AgentPtr.prototype.requestClockSyncMarker = function() {
    return AgentProxy.prototype.requestClockSyncMarker
        .apply(this.ptr.getProxy(), arguments);
  };

  AgentProxy.prototype.requestClockSyncMarker = function(syncId) {
    var params_ = new Agent_RequestClockSyncMarker_Params();
    params_.syncId = syncId;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kAgent_RequestClockSyncMarker_Name,
          codec.align(Agent_RequestClockSyncMarker_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(Agent_RequestClockSyncMarker_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(Agent_RequestClockSyncMarker_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  AgentPtr.prototype.requestBufferStatus = function() {
    return AgentProxy.prototype.requestBufferStatus
        .apply(this.ptr.getProxy(), arguments);
  };

  AgentProxy.prototype.requestBufferStatus = function() {
    var params_ = new Agent_RequestBufferStatus_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kAgent_RequestBufferStatus_Name,
          codec.align(Agent_RequestBufferStatus_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(Agent_RequestBufferStatus_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(Agent_RequestBufferStatus_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  AgentPtr.prototype.getCategories = function() {
    return AgentProxy.prototype.getCategories
        .apply(this.ptr.getProxy(), arguments);
  };

  AgentProxy.prototype.getCategories = function() {
    var params_ = new Agent_GetCategories_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kAgent_GetCategories_Name,
          codec.align(Agent_GetCategories_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(Agent_GetCategories_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(Agent_GetCategories_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };

  function AgentStub(delegate) {
    this.delegate_ = delegate;
  }
  AgentStub.prototype.startTracing = function(config, coordinatorTime) {
    return this.delegate_ && this.delegate_.startTracing && this.delegate_.startTracing(config, coordinatorTime);
  }
  AgentStub.prototype.stopAndFlush = function(recorder) {
    return this.delegate_ && this.delegate_.stopAndFlush && this.delegate_.stopAndFlush(recorder);
  }
  AgentStub.prototype.requestClockSyncMarker = function(syncId) {
    return this.delegate_ && this.delegate_.requestClockSyncMarker && this.delegate_.requestClockSyncMarker(syncId);
  }
  AgentStub.prototype.requestBufferStatus = function() {
    return this.delegate_ && this.delegate_.requestBufferStatus && this.delegate_.requestBufferStatus();
  }
  AgentStub.prototype.getCategories = function() {
    return this.delegate_ && this.delegate_.getCategories && this.delegate_.getCategories();
  }

  AgentStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kAgent_StopAndFlush_Name:
      var params = reader.decodeStruct(Agent_StopAndFlush_Params);
      this.stopAndFlush(params.recorder);
      return true;
    default:
      return false;
    }
  };

  AgentStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kAgent_StartTracing_Name:
      var params = reader.decodeStruct(Agent_StartTracing_Params);
      this.startTracing(params.config, params.coordinatorTime).then(function(response) {
        var responseParams =
            new Agent_StartTracing_ResponseParams();
        responseParams.success = response.success;
        var builder = new codec.MessageV1Builder(
            kAgent_StartTracing_Name,
            codec.align(Agent_StartTracing_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(Agent_StartTracing_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kAgent_RequestClockSyncMarker_Name:
      var params = reader.decodeStruct(Agent_RequestClockSyncMarker_Params);
      this.requestClockSyncMarker(params.syncId).then(function(response) {
        var responseParams =
            new Agent_RequestClockSyncMarker_ResponseParams();
        responseParams.issueTs = response.issueTs;
        responseParams.issueEndTs = response.issueEndTs;
        var builder = new codec.MessageV1Builder(
            kAgent_RequestClockSyncMarker_Name,
            codec.align(Agent_RequestClockSyncMarker_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(Agent_RequestClockSyncMarker_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kAgent_RequestBufferStatus_Name:
      var params = reader.decodeStruct(Agent_RequestBufferStatus_Params);
      this.requestBufferStatus().then(function(response) {
        var responseParams =
            new Agent_RequestBufferStatus_ResponseParams();
        responseParams.capacity = response.capacity;
        responseParams.count = response.count;
        var builder = new codec.MessageV1Builder(
            kAgent_RequestBufferStatus_Name,
            codec.align(Agent_RequestBufferStatus_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(Agent_RequestBufferStatus_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kAgent_GetCategories_Name:
      var params = reader.decodeStruct(Agent_GetCategories_Params);
      this.getCategories().then(function(response) {
        var responseParams =
            new Agent_GetCategories_ResponseParams();
        responseParams.categories = response.categories;
        var builder = new codec.MessageV1Builder(
            kAgent_GetCategories_Name,
            codec.align(Agent_GetCategories_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(Agent_GetCategories_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    default:
      return false;
    }
  };

  function validateAgentRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kAgent_StartTracing_Name:
        if (message.expectsResponse())
          paramsClass = Agent_StartTracing_Params;
      break;
      case kAgent_StopAndFlush_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = Agent_StopAndFlush_Params;
      break;
      case kAgent_RequestClockSyncMarker_Name:
        if (message.expectsResponse())
          paramsClass = Agent_RequestClockSyncMarker_Params;
      break;
      case kAgent_RequestBufferStatus_Name:
        if (message.expectsResponse())
          paramsClass = Agent_RequestBufferStatus_Params;
      break;
      case kAgent_GetCategories_Name:
        if (message.expectsResponse())
          paramsClass = Agent_GetCategories_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateAgentResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kAgent_StartTracing_Name:
        if (message.isResponse())
          paramsClass = Agent_StartTracing_ResponseParams;
        break;
      case kAgent_RequestClockSyncMarker_Name:
        if (message.isResponse())
          paramsClass = Agent_RequestClockSyncMarker_ResponseParams;
        break;
      case kAgent_RequestBufferStatus_Name:
        if (message.isResponse())
          paramsClass = Agent_RequestBufferStatus_ResponseParams;
        break;
      case kAgent_GetCategories_Name:
        if (message.isResponse())
          paramsClass = Agent_GetCategories_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var Agent = {
    name: 'tracing.mojom.Agent',
    kVersion: 0,
    ptrClass: AgentPtr,
    proxyClass: AgentProxy,
    stubClass: AgentStub,
    validateRequest: validateAgentRequest,
    validateResponse: validateAgentResponse,
    mojomId: 'services/tracing/public/mojom/tracing.mojom',
    fuzzMethods: {
      startTracing: {
        params: Agent_StartTracing_Params,
      },
      stopAndFlush: {
        params: Agent_StopAndFlush_Params,
      },
      requestClockSyncMarker: {
        params: Agent_RequestClockSyncMarker_Params,
      },
      requestBufferStatus: {
        params: Agent_RequestBufferStatus_Params,
      },
      getCategories: {
        params: Agent_GetCategories_Params,
      },
    },
  };
  AgentStub.prototype.validator = validateAgentRequest;
  AgentProxy.prototype.validator = validateAgentResponse;
  var kRecorder_AddChunk_Name = 1217833258;
  var kRecorder_AddMetadata_Name = 2051774681;

  function RecorderPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(Recorder,
                                                   handleOrPtrInfo);
  }

  function RecorderAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        Recorder, associatedInterfacePtrInfo);
  }

  RecorderAssociatedPtr.prototype =
      Object.create(RecorderPtr.prototype);
  RecorderAssociatedPtr.prototype.constructor =
      RecorderAssociatedPtr;

  function RecorderProxy(receiver) {
    this.receiver_ = receiver;
  }
  RecorderPtr.prototype.addChunk = function() {
    return RecorderProxy.prototype.addChunk
        .apply(this.ptr.getProxy(), arguments);
  };

  RecorderProxy.prototype.addChunk = function(chunk) {
    var params_ = new Recorder_AddChunk_Params();
    params_.chunk = chunk;
    var builder = new codec.MessageV0Builder(
        kRecorder_AddChunk_Name,
        codec.align(Recorder_AddChunk_Params.encodedSize));
    builder.encodeStruct(Recorder_AddChunk_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  RecorderPtr.prototype.addMetadata = function() {
    return RecorderProxy.prototype.addMetadata
        .apply(this.ptr.getProxy(), arguments);
  };

  RecorderProxy.prototype.addMetadata = function(metadata) {
    var params_ = new Recorder_AddMetadata_Params();
    params_.metadata = metadata;
    var builder = new codec.MessageV0Builder(
        kRecorder_AddMetadata_Name,
        codec.align(Recorder_AddMetadata_Params.encodedSize));
    builder.encodeStruct(Recorder_AddMetadata_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function RecorderStub(delegate) {
    this.delegate_ = delegate;
  }
  RecorderStub.prototype.addChunk = function(chunk) {
    return this.delegate_ && this.delegate_.addChunk && this.delegate_.addChunk(chunk);
  }
  RecorderStub.prototype.addMetadata = function(metadata) {
    return this.delegate_ && this.delegate_.addMetadata && this.delegate_.addMetadata(metadata);
  }

  RecorderStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kRecorder_AddChunk_Name:
      var params = reader.decodeStruct(Recorder_AddChunk_Params);
      this.addChunk(params.chunk);
      return true;
    case kRecorder_AddMetadata_Name:
      var params = reader.decodeStruct(Recorder_AddMetadata_Params);
      this.addMetadata(params.metadata);
      return true;
    default:
      return false;
    }
  };

  RecorderStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateRecorderRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kRecorder_AddChunk_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = Recorder_AddChunk_Params;
      break;
      case kRecorder_AddMetadata_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = Recorder_AddMetadata_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateRecorderResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var Recorder = {
    name: 'tracing.mojom.Recorder',
    kVersion: 0,
    ptrClass: RecorderPtr,
    proxyClass: RecorderProxy,
    stubClass: RecorderStub,
    validateRequest: validateRecorderRequest,
    validateResponse: null,
    mojomId: 'services/tracing/public/mojom/tracing.mojom',
    fuzzMethods: {
      addChunk: {
        params: Recorder_AddChunk_Params,
      },
      addMetadata: {
        params: Recorder_AddMetadata_Params,
      },
    },
  };
  RecorderStub.prototype.validator = validateRecorderRequest;
  RecorderProxy.prototype.validator = null;
  var kCoordinator_StartTracing_Name = 1421760957;
  var kCoordinator_StopAndFlush_Name = 174269745;
  var kCoordinator_StopAndFlushAgent_Name = 2015672563;
  var kCoordinator_IsTracing_Name = 1146331625;
  var kCoordinator_RequestBufferUsage_Name = 1702669038;
  var kCoordinator_GetCategories_Name = 312588085;

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
  CoordinatorPtr.prototype.startTracing = function() {
    return CoordinatorProxy.prototype.startTracing
        .apply(this.ptr.getProxy(), arguments);
  };

  CoordinatorProxy.prototype.startTracing = function(config) {
    var params_ = new Coordinator_StartTracing_Params();
    params_.config = config;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kCoordinator_StartTracing_Name,
          codec.align(Coordinator_StartTracing_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(Coordinator_StartTracing_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(Coordinator_StartTracing_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  CoordinatorPtr.prototype.stopAndFlush = function() {
    return CoordinatorProxy.prototype.stopAndFlush
        .apply(this.ptr.getProxy(), arguments);
  };

  CoordinatorProxy.prototype.stopAndFlush = function(stream) {
    var params_ = new Coordinator_StopAndFlush_Params();
    params_.stream = stream;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kCoordinator_StopAndFlush_Name,
          codec.align(Coordinator_StopAndFlush_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(Coordinator_StopAndFlush_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(Coordinator_StopAndFlush_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  CoordinatorPtr.prototype.stopAndFlushAgent = function() {
    return CoordinatorProxy.prototype.stopAndFlushAgent
        .apply(this.ptr.getProxy(), arguments);
  };

  CoordinatorProxy.prototype.stopAndFlushAgent = function(stream, agentLabel) {
    var params_ = new Coordinator_StopAndFlushAgent_Params();
    params_.stream = stream;
    params_.agentLabel = agentLabel;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kCoordinator_StopAndFlushAgent_Name,
          codec.align(Coordinator_StopAndFlushAgent_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(Coordinator_StopAndFlushAgent_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(Coordinator_StopAndFlushAgent_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  CoordinatorPtr.prototype.isTracing = function() {
    return CoordinatorProxy.prototype.isTracing
        .apply(this.ptr.getProxy(), arguments);
  };

  CoordinatorProxy.prototype.isTracing = function() {
    var params_ = new Coordinator_IsTracing_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kCoordinator_IsTracing_Name,
          codec.align(Coordinator_IsTracing_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(Coordinator_IsTracing_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(Coordinator_IsTracing_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  CoordinatorPtr.prototype.requestBufferUsage = function() {
    return CoordinatorProxy.prototype.requestBufferUsage
        .apply(this.ptr.getProxy(), arguments);
  };

  CoordinatorProxy.prototype.requestBufferUsage = function() {
    var params_ = new Coordinator_RequestBufferUsage_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kCoordinator_RequestBufferUsage_Name,
          codec.align(Coordinator_RequestBufferUsage_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(Coordinator_RequestBufferUsage_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(Coordinator_RequestBufferUsage_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  CoordinatorPtr.prototype.getCategories = function() {
    return CoordinatorProxy.prototype.getCategories
        .apply(this.ptr.getProxy(), arguments);
  };

  CoordinatorProxy.prototype.getCategories = function() {
    var params_ = new Coordinator_GetCategories_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kCoordinator_GetCategories_Name,
          codec.align(Coordinator_GetCategories_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(Coordinator_GetCategories_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(Coordinator_GetCategories_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };

  function CoordinatorStub(delegate) {
    this.delegate_ = delegate;
  }
  CoordinatorStub.prototype.startTracing = function(config) {
    return this.delegate_ && this.delegate_.startTracing && this.delegate_.startTracing(config);
  }
  CoordinatorStub.prototype.stopAndFlush = function(stream) {
    return this.delegate_ && this.delegate_.stopAndFlush && this.delegate_.stopAndFlush(stream);
  }
  CoordinatorStub.prototype.stopAndFlushAgent = function(stream, agentLabel) {
    return this.delegate_ && this.delegate_.stopAndFlushAgent && this.delegate_.stopAndFlushAgent(stream, agentLabel);
  }
  CoordinatorStub.prototype.isTracing = function() {
    return this.delegate_ && this.delegate_.isTracing && this.delegate_.isTracing();
  }
  CoordinatorStub.prototype.requestBufferUsage = function() {
    return this.delegate_ && this.delegate_.requestBufferUsage && this.delegate_.requestBufferUsage();
  }
  CoordinatorStub.prototype.getCategories = function() {
    return this.delegate_ && this.delegate_.getCategories && this.delegate_.getCategories();
  }

  CoordinatorStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  CoordinatorStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kCoordinator_StartTracing_Name:
      var params = reader.decodeStruct(Coordinator_StartTracing_Params);
      this.startTracing(params.config).then(function(response) {
        var responseParams =
            new Coordinator_StartTracing_ResponseParams();
        responseParams.success = response.success;
        var builder = new codec.MessageV1Builder(
            kCoordinator_StartTracing_Name,
            codec.align(Coordinator_StartTracing_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(Coordinator_StartTracing_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kCoordinator_StopAndFlush_Name:
      var params = reader.decodeStruct(Coordinator_StopAndFlush_Params);
      this.stopAndFlush(params.stream).then(function(response) {
        var responseParams =
            new Coordinator_StopAndFlush_ResponseParams();
        responseParams.metadata = response.metadata;
        var builder = new codec.MessageV1Builder(
            kCoordinator_StopAndFlush_Name,
            codec.align(Coordinator_StopAndFlush_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(Coordinator_StopAndFlush_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kCoordinator_StopAndFlushAgent_Name:
      var params = reader.decodeStruct(Coordinator_StopAndFlushAgent_Params);
      this.stopAndFlushAgent(params.stream, params.agentLabel).then(function(response) {
        var responseParams =
            new Coordinator_StopAndFlushAgent_ResponseParams();
        responseParams.metadata = response.metadata;
        var builder = new codec.MessageV1Builder(
            kCoordinator_StopAndFlushAgent_Name,
            codec.align(Coordinator_StopAndFlushAgent_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(Coordinator_StopAndFlushAgent_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kCoordinator_IsTracing_Name:
      var params = reader.decodeStruct(Coordinator_IsTracing_Params);
      this.isTracing().then(function(response) {
        var responseParams =
            new Coordinator_IsTracing_ResponseParams();
        responseParams.isTracing = response.isTracing;
        var builder = new codec.MessageV1Builder(
            kCoordinator_IsTracing_Name,
            codec.align(Coordinator_IsTracing_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(Coordinator_IsTracing_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kCoordinator_RequestBufferUsage_Name:
      var params = reader.decodeStruct(Coordinator_RequestBufferUsage_Params);
      this.requestBufferUsage().then(function(response) {
        var responseParams =
            new Coordinator_RequestBufferUsage_ResponseParams();
        responseParams.success = response.success;
        responseParams.percentFull = response.percentFull;
        responseParams.approximateCount = response.approximateCount;
        var builder = new codec.MessageV1Builder(
            kCoordinator_RequestBufferUsage_Name,
            codec.align(Coordinator_RequestBufferUsage_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(Coordinator_RequestBufferUsage_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kCoordinator_GetCategories_Name:
      var params = reader.decodeStruct(Coordinator_GetCategories_Params);
      this.getCategories().then(function(response) {
        var responseParams =
            new Coordinator_GetCategories_ResponseParams();
        responseParams.success = response.success;
        responseParams.categories = response.categories;
        var builder = new codec.MessageV1Builder(
            kCoordinator_GetCategories_Name,
            codec.align(Coordinator_GetCategories_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(Coordinator_GetCategories_ResponseParams,
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
      case kCoordinator_StartTracing_Name:
        if (message.expectsResponse())
          paramsClass = Coordinator_StartTracing_Params;
      break;
      case kCoordinator_StopAndFlush_Name:
        if (message.expectsResponse())
          paramsClass = Coordinator_StopAndFlush_Params;
      break;
      case kCoordinator_StopAndFlushAgent_Name:
        if (message.expectsResponse())
          paramsClass = Coordinator_StopAndFlushAgent_Params;
      break;
      case kCoordinator_IsTracing_Name:
        if (message.expectsResponse())
          paramsClass = Coordinator_IsTracing_Params;
      break;
      case kCoordinator_RequestBufferUsage_Name:
        if (message.expectsResponse())
          paramsClass = Coordinator_RequestBufferUsage_Params;
      break;
      case kCoordinator_GetCategories_Name:
        if (message.expectsResponse())
          paramsClass = Coordinator_GetCategories_Params;
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
      case kCoordinator_StartTracing_Name:
        if (message.isResponse())
          paramsClass = Coordinator_StartTracing_ResponseParams;
        break;
      case kCoordinator_StopAndFlush_Name:
        if (message.isResponse())
          paramsClass = Coordinator_StopAndFlush_ResponseParams;
        break;
      case kCoordinator_StopAndFlushAgent_Name:
        if (message.isResponse())
          paramsClass = Coordinator_StopAndFlushAgent_ResponseParams;
        break;
      case kCoordinator_IsTracing_Name:
        if (message.isResponse())
          paramsClass = Coordinator_IsTracing_ResponseParams;
        break;
      case kCoordinator_RequestBufferUsage_Name:
        if (message.isResponse())
          paramsClass = Coordinator_RequestBufferUsage_ResponseParams;
        break;
      case kCoordinator_GetCategories_Name:
        if (message.isResponse())
          paramsClass = Coordinator_GetCategories_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var Coordinator = {
    name: 'tracing.mojom.Coordinator',
    kVersion: 0,
    ptrClass: CoordinatorPtr,
    proxyClass: CoordinatorProxy,
    stubClass: CoordinatorStub,
    validateRequest: validateCoordinatorRequest,
    validateResponse: validateCoordinatorResponse,
    mojomId: 'services/tracing/public/mojom/tracing.mojom',
    fuzzMethods: {
      startTracing: {
        params: Coordinator_StartTracing_Params,
      },
      stopAndFlush: {
        params: Coordinator_StopAndFlush_Params,
      },
      stopAndFlushAgent: {
        params: Coordinator_StopAndFlushAgent_Params,
      },
      isTracing: {
        params: Coordinator_IsTracing_Params,
      },
      requestBufferUsage: {
        params: Coordinator_RequestBufferUsage_Params,
      },
      getCategories: {
        params: Coordinator_GetCategories_Params,
      },
    },
  };
  CoordinatorStub.prototype.validator = validateCoordinatorRequest;
  CoordinatorProxy.prototype.validator = validateCoordinatorResponse;
  exports.TraceDataType = TraceDataType;
  exports.AgentRegistry = AgentRegistry;
  exports.AgentRegistryPtr = AgentRegistryPtr;
  exports.AgentRegistryAssociatedPtr = AgentRegistryAssociatedPtr;
  exports.Agent = Agent;
  exports.AgentPtr = AgentPtr;
  exports.AgentAssociatedPtr = AgentAssociatedPtr;
  exports.Recorder = Recorder;
  exports.RecorderPtr = RecorderPtr;
  exports.RecorderAssociatedPtr = RecorderAssociatedPtr;
  exports.Coordinator = Coordinator;
  exports.CoordinatorPtr = CoordinatorPtr;
  exports.CoordinatorAssociatedPtr = CoordinatorAssociatedPtr;
})();