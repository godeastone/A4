// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'services/resource_coordinator/public/mojom/coordination_unit.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('resourceCoordinator.mojom');
  var process_id$ =
      mojo.internal.exposeNamespace('mojoBase.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'mojo/public/mojom/base/process_id.mojom', '../../../../mojo/public/mojom/base/process_id.mojom.js');
  }
  var time$ =
      mojo.internal.exposeNamespace('mojoBase.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'mojo/public/mojom/base/time.mojom', '../../../../mojo/public/mojom/base/time.mojom.js');
  }
  var lifecycle$ =
      mojo.internal.exposeNamespace('resourceCoordinator.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'services/resource_coordinator/public/mojom/lifecycle.mojom', 'lifecycle.mojom.js');
  }
  var signals$ =
      mojo.internal.exposeNamespace('resourceCoordinator.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'services/resource_coordinator/public/mojom/signals.mojom', 'signals.mojom.js');
  }


  var CoordinationUnitType = {};
  CoordinationUnitType.kFrame = 0;
  CoordinationUnitType.kPage = CoordinationUnitType.kFrame + 1;
  CoordinationUnitType.kProcess = CoordinationUnitType.kPage + 1;
  CoordinationUnitType.kSystem = CoordinationUnitType.kProcess + 1;

  CoordinationUnitType.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
      return true;
    }
    return false;
  };

  CoordinationUnitType.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };

  function CoordinationUnitID(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  CoordinationUnitID.prototype.initDefaults_ = function() {
    this.type = 0;
    this.id = 0;
  };
  CoordinationUnitID.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  CoordinationUnitID.generate = function(generator_) {
    var generated = new CoordinationUnitID;
    generated.type = generator_.generateEnum(0, 3);
    generated.id = generator_.generateInt64();
    return generated;
  };

  CoordinationUnitID.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.type = mutator_.mutateEnum(this.type, 0, 3);
    }
    if (mutator_.chooseMutateField()) {
      this.id = mutator_.mutateInt64(this.id);
    }
    return this;
  };
  CoordinationUnitID.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  CoordinationUnitID.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  CoordinationUnitID.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  CoordinationUnitID.validate = function(messageValidator, offset) {
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


    // validate CoordinationUnitID.type
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, CoordinationUnitType);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  CoordinationUnitID.encodedSize = codec.kStructHeaderSize + 16;

  CoordinationUnitID.decode = function(decoder) {
    var packed;
    var val = new CoordinationUnitID();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.type = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.id = decoder.decodeStruct(codec.Int64);
    return val;
  };

  CoordinationUnitID.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(CoordinationUnitID.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.type);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.Int64, val.id);
  };
  function ProcessResourceMeasurement(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ProcessResourceMeasurement.prototype.initDefaults_ = function() {
    this.pid = null;
    this.cpuUsage = null;
    this.privateFootprintKb = 0;
  };
  ProcessResourceMeasurement.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ProcessResourceMeasurement.generate = function(generator_) {
    var generated = new ProcessResourceMeasurement;
    generated.pid = generator_.generateStruct(mojoBase.mojom.ProcessId, false);
    generated.cpuUsage = generator_.generateStruct(mojoBase.mojom.TimeDelta, false);
    generated.privateFootprintKb = generator_.generateUint32();
    return generated;
  };

  ProcessResourceMeasurement.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.pid = mutator_.mutateStruct(mojoBase.mojom.ProcessId, false);
    }
    if (mutator_.chooseMutateField()) {
      this.cpuUsage = mutator_.mutateStruct(mojoBase.mojom.TimeDelta, false);
    }
    if (mutator_.chooseMutateField()) {
      this.privateFootprintKb = mutator_.mutateUint32(this.privateFootprintKb);
    }
    return this;
  };
  ProcessResourceMeasurement.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ProcessResourceMeasurement.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ProcessResourceMeasurement.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ProcessResourceMeasurement.validate = function(messageValidator, offset) {
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


    // validate ProcessResourceMeasurement.pid
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, process_id$.ProcessId, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate ProcessResourceMeasurement.cpuUsage
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, time$.TimeDelta, false);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  ProcessResourceMeasurement.encodedSize = codec.kStructHeaderSize + 24;

  ProcessResourceMeasurement.decode = function(decoder) {
    var packed;
    var val = new ProcessResourceMeasurement();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.pid = decoder.decodeStructPointer(process_id$.ProcessId);
    val.cpuUsage = decoder.decodeStructPointer(time$.TimeDelta);
    val.privateFootprintKb = decoder.decodeStruct(codec.Uint32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  ProcessResourceMeasurement.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ProcessResourceMeasurement.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(process_id$.ProcessId, val.pid);
    encoder.encodeStructPointer(time$.TimeDelta, val.cpuUsage);
    encoder.encodeStruct(codec.Uint32, val.privateFootprintKb);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function ProcessResourceMeasurementBatch(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ProcessResourceMeasurementBatch.prototype.initDefaults_ = function() {
    this.batchStartedTime = null;
    this.batchEndedTime = null;
    this.measurements = null;
  };
  ProcessResourceMeasurementBatch.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ProcessResourceMeasurementBatch.generate = function(generator_) {
    var generated = new ProcessResourceMeasurementBatch;
    generated.batchStartedTime = generator_.generateStruct(mojoBase.mojom.TimeTicks, false);
    generated.batchEndedTime = generator_.generateStruct(mojoBase.mojom.TimeTicks, false);
    generated.measurements = generator_.generateArray(function() {
      return generator_.generateStruct(resourceCoordinator.mojom.ProcessResourceMeasurement, false);
    });
    return generated;
  };

  ProcessResourceMeasurementBatch.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.batchStartedTime = mutator_.mutateStruct(mojoBase.mojom.TimeTicks, false);
    }
    if (mutator_.chooseMutateField()) {
      this.batchEndedTime = mutator_.mutateStruct(mojoBase.mojom.TimeTicks, false);
    }
    if (mutator_.chooseMutateField()) {
      this.measurements = mutator_.mutateArray(this.measurements, function(val) {
        return mutator_.mutateStruct(resourceCoordinator.mojom.ProcessResourceMeasurement, false);
      });
    }
    return this;
  };
  ProcessResourceMeasurementBatch.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ProcessResourceMeasurementBatch.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ProcessResourceMeasurementBatch.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ProcessResourceMeasurementBatch.validate = function(messageValidator, offset) {
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


    // validate ProcessResourceMeasurementBatch.batchStartedTime
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, time$.TimeTicks, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate ProcessResourceMeasurementBatch.batchEndedTime
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, time$.TimeTicks, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate ProcessResourceMeasurementBatch.measurements
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 16, 8, new codec.PointerTo(ProcessResourceMeasurement), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ProcessResourceMeasurementBatch.encodedSize = codec.kStructHeaderSize + 24;

  ProcessResourceMeasurementBatch.decode = function(decoder) {
    var packed;
    var val = new ProcessResourceMeasurementBatch();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.batchStartedTime = decoder.decodeStructPointer(time$.TimeTicks);
    val.batchEndedTime = decoder.decodeStructPointer(time$.TimeTicks);
    val.measurements = decoder.decodeArrayPointer(new codec.PointerTo(ProcessResourceMeasurement));
    return val;
  };

  ProcessResourceMeasurementBatch.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ProcessResourceMeasurementBatch.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(time$.TimeTicks, val.batchStartedTime);
    encoder.encodeStructPointer(time$.TimeTicks, val.batchEndedTime);
    encoder.encodeArrayPointer(new codec.PointerTo(ProcessResourceMeasurement), val.measurements);
  };
  function FrameCoordinationUnit_GetID_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  FrameCoordinationUnit_GetID_Params.prototype.initDefaults_ = function() {
  };
  FrameCoordinationUnit_GetID_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  FrameCoordinationUnit_GetID_Params.generate = function(generator_) {
    var generated = new FrameCoordinationUnit_GetID_Params;
    return generated;
  };

  FrameCoordinationUnit_GetID_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  FrameCoordinationUnit_GetID_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  FrameCoordinationUnit_GetID_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  FrameCoordinationUnit_GetID_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  FrameCoordinationUnit_GetID_Params.validate = function(messageValidator, offset) {
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

  FrameCoordinationUnit_GetID_Params.encodedSize = codec.kStructHeaderSize + 0;

  FrameCoordinationUnit_GetID_Params.decode = function(decoder) {
    var packed;
    var val = new FrameCoordinationUnit_GetID_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  FrameCoordinationUnit_GetID_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(FrameCoordinationUnit_GetID_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function FrameCoordinationUnit_GetID_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  FrameCoordinationUnit_GetID_ResponseParams.prototype.initDefaults_ = function() {
    this.id = null;
  };
  FrameCoordinationUnit_GetID_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  FrameCoordinationUnit_GetID_ResponseParams.generate = function(generator_) {
    var generated = new FrameCoordinationUnit_GetID_ResponseParams;
    generated.id = generator_.generateStruct(resourceCoordinator.mojom.CoordinationUnitID, false);
    return generated;
  };

  FrameCoordinationUnit_GetID_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.id = mutator_.mutateStruct(resourceCoordinator.mojom.CoordinationUnitID, false);
    }
    return this;
  };
  FrameCoordinationUnit_GetID_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  FrameCoordinationUnit_GetID_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  FrameCoordinationUnit_GetID_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  FrameCoordinationUnit_GetID_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate FrameCoordinationUnit_GetID_ResponseParams.id
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, CoordinationUnitID, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  FrameCoordinationUnit_GetID_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  FrameCoordinationUnit_GetID_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new FrameCoordinationUnit_GetID_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.id = decoder.decodeStructPointer(CoordinationUnitID);
    return val;
  };

  FrameCoordinationUnit_GetID_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(FrameCoordinationUnit_GetID_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(CoordinationUnitID, val.id);
  };
  function FrameCoordinationUnit_AddBinding_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  FrameCoordinationUnit_AddBinding_Params.prototype.initDefaults_ = function() {
    this.request = new bindings.InterfaceRequest();
  };
  FrameCoordinationUnit_AddBinding_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  FrameCoordinationUnit_AddBinding_Params.generate = function(generator_) {
    var generated = new FrameCoordinationUnit_AddBinding_Params;
    generated.request = generator_.generateInterfaceRequest("resourceCoordinator.mojom.FrameCoordinationUnit", false);
    return generated;
  };

  FrameCoordinationUnit_AddBinding_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.request = mutator_.mutateInterfaceRequest(this.request, "resourceCoordinator.mojom.FrameCoordinationUnit", false);
    }
    return this;
  };
  FrameCoordinationUnit_AddBinding_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.request !== null) {
      Array.prototype.push.apply(handles, ["resourceCoordinator.mojom.FrameCoordinationUnitRequest"]);
    }
    return handles;
  };

  FrameCoordinationUnit_AddBinding_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  FrameCoordinationUnit_AddBinding_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.request = handles[idx++];;
    return idx;
  };

  FrameCoordinationUnit_AddBinding_Params.validate = function(messageValidator, offset) {
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


    // validate FrameCoordinationUnit_AddBinding_Params.request
    err = messageValidator.validateInterfaceRequest(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  FrameCoordinationUnit_AddBinding_Params.encodedSize = codec.kStructHeaderSize + 8;

  FrameCoordinationUnit_AddBinding_Params.decode = function(decoder) {
    var packed;
    var val = new FrameCoordinationUnit_AddBinding_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.request = decoder.decodeStruct(codec.InterfaceRequest);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  FrameCoordinationUnit_AddBinding_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(FrameCoordinationUnit_AddBinding_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.InterfaceRequest, val.request);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function FrameCoordinationUnit_AddChildFrame_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  FrameCoordinationUnit_AddChildFrame_Params.prototype.initDefaults_ = function() {
    this.cuId = null;
  };
  FrameCoordinationUnit_AddChildFrame_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  FrameCoordinationUnit_AddChildFrame_Params.generate = function(generator_) {
    var generated = new FrameCoordinationUnit_AddChildFrame_Params;
    generated.cuId = generator_.generateStruct(resourceCoordinator.mojom.CoordinationUnitID, false);
    return generated;
  };

  FrameCoordinationUnit_AddChildFrame_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.cuId = mutator_.mutateStruct(resourceCoordinator.mojom.CoordinationUnitID, false);
    }
    return this;
  };
  FrameCoordinationUnit_AddChildFrame_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  FrameCoordinationUnit_AddChildFrame_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  FrameCoordinationUnit_AddChildFrame_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  FrameCoordinationUnit_AddChildFrame_Params.validate = function(messageValidator, offset) {
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


    // validate FrameCoordinationUnit_AddChildFrame_Params.cuId
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, CoordinationUnitID, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  FrameCoordinationUnit_AddChildFrame_Params.encodedSize = codec.kStructHeaderSize + 8;

  FrameCoordinationUnit_AddChildFrame_Params.decode = function(decoder) {
    var packed;
    var val = new FrameCoordinationUnit_AddChildFrame_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.cuId = decoder.decodeStructPointer(CoordinationUnitID);
    return val;
  };

  FrameCoordinationUnit_AddChildFrame_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(FrameCoordinationUnit_AddChildFrame_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(CoordinationUnitID, val.cuId);
  };
  function FrameCoordinationUnit_RemoveChildFrame_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  FrameCoordinationUnit_RemoveChildFrame_Params.prototype.initDefaults_ = function() {
    this.cuId = null;
  };
  FrameCoordinationUnit_RemoveChildFrame_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  FrameCoordinationUnit_RemoveChildFrame_Params.generate = function(generator_) {
    var generated = new FrameCoordinationUnit_RemoveChildFrame_Params;
    generated.cuId = generator_.generateStruct(resourceCoordinator.mojom.CoordinationUnitID, false);
    return generated;
  };

  FrameCoordinationUnit_RemoveChildFrame_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.cuId = mutator_.mutateStruct(resourceCoordinator.mojom.CoordinationUnitID, false);
    }
    return this;
  };
  FrameCoordinationUnit_RemoveChildFrame_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  FrameCoordinationUnit_RemoveChildFrame_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  FrameCoordinationUnit_RemoveChildFrame_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  FrameCoordinationUnit_RemoveChildFrame_Params.validate = function(messageValidator, offset) {
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


    // validate FrameCoordinationUnit_RemoveChildFrame_Params.cuId
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, CoordinationUnitID, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  FrameCoordinationUnit_RemoveChildFrame_Params.encodedSize = codec.kStructHeaderSize + 8;

  FrameCoordinationUnit_RemoveChildFrame_Params.decode = function(decoder) {
    var packed;
    var val = new FrameCoordinationUnit_RemoveChildFrame_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.cuId = decoder.decodeStructPointer(CoordinationUnitID);
    return val;
  };

  FrameCoordinationUnit_RemoveChildFrame_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(FrameCoordinationUnit_RemoveChildFrame_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(CoordinationUnitID, val.cuId);
  };
  function FrameCoordinationUnit_SetAudibility_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  FrameCoordinationUnit_SetAudibility_Params.prototype.initDefaults_ = function() {
    this.audible = false;
  };
  FrameCoordinationUnit_SetAudibility_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  FrameCoordinationUnit_SetAudibility_Params.generate = function(generator_) {
    var generated = new FrameCoordinationUnit_SetAudibility_Params;
    generated.audible = generator_.generateBool();
    return generated;
  };

  FrameCoordinationUnit_SetAudibility_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.audible = mutator_.mutateBool(this.audible);
    }
    return this;
  };
  FrameCoordinationUnit_SetAudibility_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  FrameCoordinationUnit_SetAudibility_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  FrameCoordinationUnit_SetAudibility_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  FrameCoordinationUnit_SetAudibility_Params.validate = function(messageValidator, offset) {
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

  FrameCoordinationUnit_SetAudibility_Params.encodedSize = codec.kStructHeaderSize + 8;

  FrameCoordinationUnit_SetAudibility_Params.decode = function(decoder) {
    var packed;
    var val = new FrameCoordinationUnit_SetAudibility_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.audible = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  FrameCoordinationUnit_SetAudibility_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(FrameCoordinationUnit_SetAudibility_Params.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.audible & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function FrameCoordinationUnit_SetNetworkAlmostIdle_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  FrameCoordinationUnit_SetNetworkAlmostIdle_Params.prototype.initDefaults_ = function() {
    this.idle = false;
  };
  FrameCoordinationUnit_SetNetworkAlmostIdle_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  FrameCoordinationUnit_SetNetworkAlmostIdle_Params.generate = function(generator_) {
    var generated = new FrameCoordinationUnit_SetNetworkAlmostIdle_Params;
    generated.idle = generator_.generateBool();
    return generated;
  };

  FrameCoordinationUnit_SetNetworkAlmostIdle_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.idle = mutator_.mutateBool(this.idle);
    }
    return this;
  };
  FrameCoordinationUnit_SetNetworkAlmostIdle_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  FrameCoordinationUnit_SetNetworkAlmostIdle_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  FrameCoordinationUnit_SetNetworkAlmostIdle_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  FrameCoordinationUnit_SetNetworkAlmostIdle_Params.validate = function(messageValidator, offset) {
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

  FrameCoordinationUnit_SetNetworkAlmostIdle_Params.encodedSize = codec.kStructHeaderSize + 8;

  FrameCoordinationUnit_SetNetworkAlmostIdle_Params.decode = function(decoder) {
    var packed;
    var val = new FrameCoordinationUnit_SetNetworkAlmostIdle_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.idle = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  FrameCoordinationUnit_SetNetworkAlmostIdle_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(FrameCoordinationUnit_SetNetworkAlmostIdle_Params.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.idle & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function FrameCoordinationUnit_SetLifecycleState_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  FrameCoordinationUnit_SetLifecycleState_Params.prototype.initDefaults_ = function() {
    this.state = 0;
  };
  FrameCoordinationUnit_SetLifecycleState_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  FrameCoordinationUnit_SetLifecycleState_Params.generate = function(generator_) {
    var generated = new FrameCoordinationUnit_SetLifecycleState_Params;
    generated.state = generator_.generateEnum(0, 2);
    return generated;
  };

  FrameCoordinationUnit_SetLifecycleState_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.state = mutator_.mutateEnum(this.state, 0, 2);
    }
    return this;
  };
  FrameCoordinationUnit_SetLifecycleState_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  FrameCoordinationUnit_SetLifecycleState_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  FrameCoordinationUnit_SetLifecycleState_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  FrameCoordinationUnit_SetLifecycleState_Params.validate = function(messageValidator, offset) {
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


    // validate FrameCoordinationUnit_SetLifecycleState_Params.state
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, lifecycle$.LifecycleState);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  FrameCoordinationUnit_SetLifecycleState_Params.encodedSize = codec.kStructHeaderSize + 8;

  FrameCoordinationUnit_SetLifecycleState_Params.decode = function(decoder) {
    var packed;
    var val = new FrameCoordinationUnit_SetLifecycleState_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.state = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  FrameCoordinationUnit_SetLifecycleState_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(FrameCoordinationUnit_SetLifecycleState_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.state);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function FrameCoordinationUnit_OnAlertFired_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  FrameCoordinationUnit_OnAlertFired_Params.prototype.initDefaults_ = function() {
  };
  FrameCoordinationUnit_OnAlertFired_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  FrameCoordinationUnit_OnAlertFired_Params.generate = function(generator_) {
    var generated = new FrameCoordinationUnit_OnAlertFired_Params;
    return generated;
  };

  FrameCoordinationUnit_OnAlertFired_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  FrameCoordinationUnit_OnAlertFired_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  FrameCoordinationUnit_OnAlertFired_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  FrameCoordinationUnit_OnAlertFired_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  FrameCoordinationUnit_OnAlertFired_Params.validate = function(messageValidator, offset) {
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

  FrameCoordinationUnit_OnAlertFired_Params.encodedSize = codec.kStructHeaderSize + 0;

  FrameCoordinationUnit_OnAlertFired_Params.decode = function(decoder) {
    var packed;
    var val = new FrameCoordinationUnit_OnAlertFired_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  FrameCoordinationUnit_OnAlertFired_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(FrameCoordinationUnit_OnAlertFired_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function FrameCoordinationUnit_OnNonPersistentNotificationCreated_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  FrameCoordinationUnit_OnNonPersistentNotificationCreated_Params.prototype.initDefaults_ = function() {
  };
  FrameCoordinationUnit_OnNonPersistentNotificationCreated_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  FrameCoordinationUnit_OnNonPersistentNotificationCreated_Params.generate = function(generator_) {
    var generated = new FrameCoordinationUnit_OnNonPersistentNotificationCreated_Params;
    return generated;
  };

  FrameCoordinationUnit_OnNonPersistentNotificationCreated_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  FrameCoordinationUnit_OnNonPersistentNotificationCreated_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  FrameCoordinationUnit_OnNonPersistentNotificationCreated_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  FrameCoordinationUnit_OnNonPersistentNotificationCreated_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  FrameCoordinationUnit_OnNonPersistentNotificationCreated_Params.validate = function(messageValidator, offset) {
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

  FrameCoordinationUnit_OnNonPersistentNotificationCreated_Params.encodedSize = codec.kStructHeaderSize + 0;

  FrameCoordinationUnit_OnNonPersistentNotificationCreated_Params.decode = function(decoder) {
    var packed;
    var val = new FrameCoordinationUnit_OnNonPersistentNotificationCreated_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  FrameCoordinationUnit_OnNonPersistentNotificationCreated_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(FrameCoordinationUnit_OnNonPersistentNotificationCreated_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function PageCoordinationUnit_GetID_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PageCoordinationUnit_GetID_Params.prototype.initDefaults_ = function() {
  };
  PageCoordinationUnit_GetID_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PageCoordinationUnit_GetID_Params.generate = function(generator_) {
    var generated = new PageCoordinationUnit_GetID_Params;
    return generated;
  };

  PageCoordinationUnit_GetID_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  PageCoordinationUnit_GetID_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PageCoordinationUnit_GetID_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PageCoordinationUnit_GetID_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PageCoordinationUnit_GetID_Params.validate = function(messageValidator, offset) {
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

  PageCoordinationUnit_GetID_Params.encodedSize = codec.kStructHeaderSize + 0;

  PageCoordinationUnit_GetID_Params.decode = function(decoder) {
    var packed;
    var val = new PageCoordinationUnit_GetID_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  PageCoordinationUnit_GetID_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PageCoordinationUnit_GetID_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function PageCoordinationUnit_GetID_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PageCoordinationUnit_GetID_ResponseParams.prototype.initDefaults_ = function() {
    this.id = null;
  };
  PageCoordinationUnit_GetID_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PageCoordinationUnit_GetID_ResponseParams.generate = function(generator_) {
    var generated = new PageCoordinationUnit_GetID_ResponseParams;
    generated.id = generator_.generateStruct(resourceCoordinator.mojom.CoordinationUnitID, false);
    return generated;
  };

  PageCoordinationUnit_GetID_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.id = mutator_.mutateStruct(resourceCoordinator.mojom.CoordinationUnitID, false);
    }
    return this;
  };
  PageCoordinationUnit_GetID_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PageCoordinationUnit_GetID_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PageCoordinationUnit_GetID_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PageCoordinationUnit_GetID_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate PageCoordinationUnit_GetID_ResponseParams.id
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, CoordinationUnitID, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PageCoordinationUnit_GetID_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  PageCoordinationUnit_GetID_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new PageCoordinationUnit_GetID_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.id = decoder.decodeStructPointer(CoordinationUnitID);
    return val;
  };

  PageCoordinationUnit_GetID_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PageCoordinationUnit_GetID_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(CoordinationUnitID, val.id);
  };
  function PageCoordinationUnit_AddBinding_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PageCoordinationUnit_AddBinding_Params.prototype.initDefaults_ = function() {
    this.request = new bindings.InterfaceRequest();
  };
  PageCoordinationUnit_AddBinding_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PageCoordinationUnit_AddBinding_Params.generate = function(generator_) {
    var generated = new PageCoordinationUnit_AddBinding_Params;
    generated.request = generator_.generateInterfaceRequest("resourceCoordinator.mojom.PageCoordinationUnit", false);
    return generated;
  };

  PageCoordinationUnit_AddBinding_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.request = mutator_.mutateInterfaceRequest(this.request, "resourceCoordinator.mojom.PageCoordinationUnit", false);
    }
    return this;
  };
  PageCoordinationUnit_AddBinding_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.request !== null) {
      Array.prototype.push.apply(handles, ["resourceCoordinator.mojom.PageCoordinationUnitRequest"]);
    }
    return handles;
  };

  PageCoordinationUnit_AddBinding_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PageCoordinationUnit_AddBinding_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.request = handles[idx++];;
    return idx;
  };

  PageCoordinationUnit_AddBinding_Params.validate = function(messageValidator, offset) {
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


    // validate PageCoordinationUnit_AddBinding_Params.request
    err = messageValidator.validateInterfaceRequest(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PageCoordinationUnit_AddBinding_Params.encodedSize = codec.kStructHeaderSize + 8;

  PageCoordinationUnit_AddBinding_Params.decode = function(decoder) {
    var packed;
    var val = new PageCoordinationUnit_AddBinding_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.request = decoder.decodeStruct(codec.InterfaceRequest);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  PageCoordinationUnit_AddBinding_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PageCoordinationUnit_AddBinding_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.InterfaceRequest, val.request);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function PageCoordinationUnit_AddFrame_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PageCoordinationUnit_AddFrame_Params.prototype.initDefaults_ = function() {
    this.cuId = null;
  };
  PageCoordinationUnit_AddFrame_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PageCoordinationUnit_AddFrame_Params.generate = function(generator_) {
    var generated = new PageCoordinationUnit_AddFrame_Params;
    generated.cuId = generator_.generateStruct(resourceCoordinator.mojom.CoordinationUnitID, false);
    return generated;
  };

  PageCoordinationUnit_AddFrame_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.cuId = mutator_.mutateStruct(resourceCoordinator.mojom.CoordinationUnitID, false);
    }
    return this;
  };
  PageCoordinationUnit_AddFrame_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PageCoordinationUnit_AddFrame_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PageCoordinationUnit_AddFrame_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PageCoordinationUnit_AddFrame_Params.validate = function(messageValidator, offset) {
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


    // validate PageCoordinationUnit_AddFrame_Params.cuId
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, CoordinationUnitID, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PageCoordinationUnit_AddFrame_Params.encodedSize = codec.kStructHeaderSize + 8;

  PageCoordinationUnit_AddFrame_Params.decode = function(decoder) {
    var packed;
    var val = new PageCoordinationUnit_AddFrame_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.cuId = decoder.decodeStructPointer(CoordinationUnitID);
    return val;
  };

  PageCoordinationUnit_AddFrame_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PageCoordinationUnit_AddFrame_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(CoordinationUnitID, val.cuId);
  };
  function PageCoordinationUnit_RemoveFrame_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PageCoordinationUnit_RemoveFrame_Params.prototype.initDefaults_ = function() {
    this.cuId = null;
  };
  PageCoordinationUnit_RemoveFrame_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PageCoordinationUnit_RemoveFrame_Params.generate = function(generator_) {
    var generated = new PageCoordinationUnit_RemoveFrame_Params;
    generated.cuId = generator_.generateStruct(resourceCoordinator.mojom.CoordinationUnitID, false);
    return generated;
  };

  PageCoordinationUnit_RemoveFrame_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.cuId = mutator_.mutateStruct(resourceCoordinator.mojom.CoordinationUnitID, false);
    }
    return this;
  };
  PageCoordinationUnit_RemoveFrame_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PageCoordinationUnit_RemoveFrame_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PageCoordinationUnit_RemoveFrame_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PageCoordinationUnit_RemoveFrame_Params.validate = function(messageValidator, offset) {
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


    // validate PageCoordinationUnit_RemoveFrame_Params.cuId
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, CoordinationUnitID, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PageCoordinationUnit_RemoveFrame_Params.encodedSize = codec.kStructHeaderSize + 8;

  PageCoordinationUnit_RemoveFrame_Params.decode = function(decoder) {
    var packed;
    var val = new PageCoordinationUnit_RemoveFrame_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.cuId = decoder.decodeStructPointer(CoordinationUnitID);
    return val;
  };

  PageCoordinationUnit_RemoveFrame_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PageCoordinationUnit_RemoveFrame_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(CoordinationUnitID, val.cuId);
  };
  function PageCoordinationUnit_SetIsLoading_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PageCoordinationUnit_SetIsLoading_Params.prototype.initDefaults_ = function() {
    this.isLoading = false;
  };
  PageCoordinationUnit_SetIsLoading_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PageCoordinationUnit_SetIsLoading_Params.generate = function(generator_) {
    var generated = new PageCoordinationUnit_SetIsLoading_Params;
    generated.isLoading = generator_.generateBool();
    return generated;
  };

  PageCoordinationUnit_SetIsLoading_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.isLoading = mutator_.mutateBool(this.isLoading);
    }
    return this;
  };
  PageCoordinationUnit_SetIsLoading_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PageCoordinationUnit_SetIsLoading_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PageCoordinationUnit_SetIsLoading_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PageCoordinationUnit_SetIsLoading_Params.validate = function(messageValidator, offset) {
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

  PageCoordinationUnit_SetIsLoading_Params.encodedSize = codec.kStructHeaderSize + 8;

  PageCoordinationUnit_SetIsLoading_Params.decode = function(decoder) {
    var packed;
    var val = new PageCoordinationUnit_SetIsLoading_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.isLoading = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  PageCoordinationUnit_SetIsLoading_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PageCoordinationUnit_SetIsLoading_Params.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.isLoading & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function PageCoordinationUnit_SetVisibility_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PageCoordinationUnit_SetVisibility_Params.prototype.initDefaults_ = function() {
    this.visible = false;
  };
  PageCoordinationUnit_SetVisibility_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PageCoordinationUnit_SetVisibility_Params.generate = function(generator_) {
    var generated = new PageCoordinationUnit_SetVisibility_Params;
    generated.visible = generator_.generateBool();
    return generated;
  };

  PageCoordinationUnit_SetVisibility_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.visible = mutator_.mutateBool(this.visible);
    }
    return this;
  };
  PageCoordinationUnit_SetVisibility_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PageCoordinationUnit_SetVisibility_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PageCoordinationUnit_SetVisibility_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PageCoordinationUnit_SetVisibility_Params.validate = function(messageValidator, offset) {
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

  PageCoordinationUnit_SetVisibility_Params.encodedSize = codec.kStructHeaderSize + 8;

  PageCoordinationUnit_SetVisibility_Params.decode = function(decoder) {
    var packed;
    var val = new PageCoordinationUnit_SetVisibility_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.visible = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  PageCoordinationUnit_SetVisibility_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PageCoordinationUnit_SetVisibility_Params.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.visible & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function PageCoordinationUnit_SetUKMSourceId_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PageCoordinationUnit_SetUKMSourceId_Params.prototype.initDefaults_ = function() {
    this.ukmSourceId = 0;
  };
  PageCoordinationUnit_SetUKMSourceId_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PageCoordinationUnit_SetUKMSourceId_Params.generate = function(generator_) {
    var generated = new PageCoordinationUnit_SetUKMSourceId_Params;
    generated.ukmSourceId = generator_.generateInt64();
    return generated;
  };

  PageCoordinationUnit_SetUKMSourceId_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.ukmSourceId = mutator_.mutateInt64(this.ukmSourceId);
    }
    return this;
  };
  PageCoordinationUnit_SetUKMSourceId_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PageCoordinationUnit_SetUKMSourceId_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PageCoordinationUnit_SetUKMSourceId_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PageCoordinationUnit_SetUKMSourceId_Params.validate = function(messageValidator, offset) {
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

  PageCoordinationUnit_SetUKMSourceId_Params.encodedSize = codec.kStructHeaderSize + 8;

  PageCoordinationUnit_SetUKMSourceId_Params.decode = function(decoder) {
    var packed;
    var val = new PageCoordinationUnit_SetUKMSourceId_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.ukmSourceId = decoder.decodeStruct(codec.Int64);
    return val;
  };

  PageCoordinationUnit_SetUKMSourceId_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PageCoordinationUnit_SetUKMSourceId_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int64, val.ukmSourceId);
  };
  function PageCoordinationUnit_OnFaviconUpdated_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PageCoordinationUnit_OnFaviconUpdated_Params.prototype.initDefaults_ = function() {
  };
  PageCoordinationUnit_OnFaviconUpdated_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PageCoordinationUnit_OnFaviconUpdated_Params.generate = function(generator_) {
    var generated = new PageCoordinationUnit_OnFaviconUpdated_Params;
    return generated;
  };

  PageCoordinationUnit_OnFaviconUpdated_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  PageCoordinationUnit_OnFaviconUpdated_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PageCoordinationUnit_OnFaviconUpdated_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PageCoordinationUnit_OnFaviconUpdated_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PageCoordinationUnit_OnFaviconUpdated_Params.validate = function(messageValidator, offset) {
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

  PageCoordinationUnit_OnFaviconUpdated_Params.encodedSize = codec.kStructHeaderSize + 0;

  PageCoordinationUnit_OnFaviconUpdated_Params.decode = function(decoder) {
    var packed;
    var val = new PageCoordinationUnit_OnFaviconUpdated_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  PageCoordinationUnit_OnFaviconUpdated_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PageCoordinationUnit_OnFaviconUpdated_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function PageCoordinationUnit_OnTitleUpdated_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PageCoordinationUnit_OnTitleUpdated_Params.prototype.initDefaults_ = function() {
  };
  PageCoordinationUnit_OnTitleUpdated_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PageCoordinationUnit_OnTitleUpdated_Params.generate = function(generator_) {
    var generated = new PageCoordinationUnit_OnTitleUpdated_Params;
    return generated;
  };

  PageCoordinationUnit_OnTitleUpdated_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  PageCoordinationUnit_OnTitleUpdated_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PageCoordinationUnit_OnTitleUpdated_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PageCoordinationUnit_OnTitleUpdated_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PageCoordinationUnit_OnTitleUpdated_Params.validate = function(messageValidator, offset) {
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

  PageCoordinationUnit_OnTitleUpdated_Params.encodedSize = codec.kStructHeaderSize + 0;

  PageCoordinationUnit_OnTitleUpdated_Params.decode = function(decoder) {
    var packed;
    var val = new PageCoordinationUnit_OnTitleUpdated_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  PageCoordinationUnit_OnTitleUpdated_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PageCoordinationUnit_OnTitleUpdated_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function PageCoordinationUnit_OnMainFrameNavigationCommitted_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PageCoordinationUnit_OnMainFrameNavigationCommitted_Params.prototype.initDefaults_ = function() {
  };
  PageCoordinationUnit_OnMainFrameNavigationCommitted_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PageCoordinationUnit_OnMainFrameNavigationCommitted_Params.generate = function(generator_) {
    var generated = new PageCoordinationUnit_OnMainFrameNavigationCommitted_Params;
    return generated;
  };

  PageCoordinationUnit_OnMainFrameNavigationCommitted_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  PageCoordinationUnit_OnMainFrameNavigationCommitted_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PageCoordinationUnit_OnMainFrameNavigationCommitted_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PageCoordinationUnit_OnMainFrameNavigationCommitted_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PageCoordinationUnit_OnMainFrameNavigationCommitted_Params.validate = function(messageValidator, offset) {
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

  PageCoordinationUnit_OnMainFrameNavigationCommitted_Params.encodedSize = codec.kStructHeaderSize + 0;

  PageCoordinationUnit_OnMainFrameNavigationCommitted_Params.decode = function(decoder) {
    var packed;
    var val = new PageCoordinationUnit_OnMainFrameNavigationCommitted_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  PageCoordinationUnit_OnMainFrameNavigationCommitted_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PageCoordinationUnit_OnMainFrameNavigationCommitted_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function ProcessCoordinationUnit_GetID_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ProcessCoordinationUnit_GetID_Params.prototype.initDefaults_ = function() {
  };
  ProcessCoordinationUnit_GetID_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ProcessCoordinationUnit_GetID_Params.generate = function(generator_) {
    var generated = new ProcessCoordinationUnit_GetID_Params;
    return generated;
  };

  ProcessCoordinationUnit_GetID_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  ProcessCoordinationUnit_GetID_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ProcessCoordinationUnit_GetID_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ProcessCoordinationUnit_GetID_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ProcessCoordinationUnit_GetID_Params.validate = function(messageValidator, offset) {
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

  ProcessCoordinationUnit_GetID_Params.encodedSize = codec.kStructHeaderSize + 0;

  ProcessCoordinationUnit_GetID_Params.decode = function(decoder) {
    var packed;
    var val = new ProcessCoordinationUnit_GetID_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  ProcessCoordinationUnit_GetID_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ProcessCoordinationUnit_GetID_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function ProcessCoordinationUnit_GetID_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ProcessCoordinationUnit_GetID_ResponseParams.prototype.initDefaults_ = function() {
    this.id = null;
  };
  ProcessCoordinationUnit_GetID_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ProcessCoordinationUnit_GetID_ResponseParams.generate = function(generator_) {
    var generated = new ProcessCoordinationUnit_GetID_ResponseParams;
    generated.id = generator_.generateStruct(resourceCoordinator.mojom.CoordinationUnitID, false);
    return generated;
  };

  ProcessCoordinationUnit_GetID_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.id = mutator_.mutateStruct(resourceCoordinator.mojom.CoordinationUnitID, false);
    }
    return this;
  };
  ProcessCoordinationUnit_GetID_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ProcessCoordinationUnit_GetID_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ProcessCoordinationUnit_GetID_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ProcessCoordinationUnit_GetID_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate ProcessCoordinationUnit_GetID_ResponseParams.id
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, CoordinationUnitID, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ProcessCoordinationUnit_GetID_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  ProcessCoordinationUnit_GetID_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new ProcessCoordinationUnit_GetID_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.id = decoder.decodeStructPointer(CoordinationUnitID);
    return val;
  };

  ProcessCoordinationUnit_GetID_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ProcessCoordinationUnit_GetID_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(CoordinationUnitID, val.id);
  };
  function ProcessCoordinationUnit_AddBinding_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ProcessCoordinationUnit_AddBinding_Params.prototype.initDefaults_ = function() {
    this.request = new bindings.InterfaceRequest();
  };
  ProcessCoordinationUnit_AddBinding_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ProcessCoordinationUnit_AddBinding_Params.generate = function(generator_) {
    var generated = new ProcessCoordinationUnit_AddBinding_Params;
    generated.request = generator_.generateInterfaceRequest("resourceCoordinator.mojom.ProcessCoordinationUnit", false);
    return generated;
  };

  ProcessCoordinationUnit_AddBinding_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.request = mutator_.mutateInterfaceRequest(this.request, "resourceCoordinator.mojom.ProcessCoordinationUnit", false);
    }
    return this;
  };
  ProcessCoordinationUnit_AddBinding_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.request !== null) {
      Array.prototype.push.apply(handles, ["resourceCoordinator.mojom.ProcessCoordinationUnitRequest"]);
    }
    return handles;
  };

  ProcessCoordinationUnit_AddBinding_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ProcessCoordinationUnit_AddBinding_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.request = handles[idx++];;
    return idx;
  };

  ProcessCoordinationUnit_AddBinding_Params.validate = function(messageValidator, offset) {
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


    // validate ProcessCoordinationUnit_AddBinding_Params.request
    err = messageValidator.validateInterfaceRequest(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ProcessCoordinationUnit_AddBinding_Params.encodedSize = codec.kStructHeaderSize + 8;

  ProcessCoordinationUnit_AddBinding_Params.decode = function(decoder) {
    var packed;
    var val = new ProcessCoordinationUnit_AddBinding_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.request = decoder.decodeStruct(codec.InterfaceRequest);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  ProcessCoordinationUnit_AddBinding_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ProcessCoordinationUnit_AddBinding_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.InterfaceRequest, val.request);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function ProcessCoordinationUnit_AddFrame_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ProcessCoordinationUnit_AddFrame_Params.prototype.initDefaults_ = function() {
    this.cuId = null;
  };
  ProcessCoordinationUnit_AddFrame_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ProcessCoordinationUnit_AddFrame_Params.generate = function(generator_) {
    var generated = new ProcessCoordinationUnit_AddFrame_Params;
    generated.cuId = generator_.generateStruct(resourceCoordinator.mojom.CoordinationUnitID, false);
    return generated;
  };

  ProcessCoordinationUnit_AddFrame_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.cuId = mutator_.mutateStruct(resourceCoordinator.mojom.CoordinationUnitID, false);
    }
    return this;
  };
  ProcessCoordinationUnit_AddFrame_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ProcessCoordinationUnit_AddFrame_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ProcessCoordinationUnit_AddFrame_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ProcessCoordinationUnit_AddFrame_Params.validate = function(messageValidator, offset) {
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


    // validate ProcessCoordinationUnit_AddFrame_Params.cuId
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, CoordinationUnitID, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ProcessCoordinationUnit_AddFrame_Params.encodedSize = codec.kStructHeaderSize + 8;

  ProcessCoordinationUnit_AddFrame_Params.decode = function(decoder) {
    var packed;
    var val = new ProcessCoordinationUnit_AddFrame_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.cuId = decoder.decodeStructPointer(CoordinationUnitID);
    return val;
  };

  ProcessCoordinationUnit_AddFrame_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ProcessCoordinationUnit_AddFrame_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(CoordinationUnitID, val.cuId);
  };
  function ProcessCoordinationUnit_RemoveFrame_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ProcessCoordinationUnit_RemoveFrame_Params.prototype.initDefaults_ = function() {
    this.cuId = null;
  };
  ProcessCoordinationUnit_RemoveFrame_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ProcessCoordinationUnit_RemoveFrame_Params.generate = function(generator_) {
    var generated = new ProcessCoordinationUnit_RemoveFrame_Params;
    generated.cuId = generator_.generateStruct(resourceCoordinator.mojom.CoordinationUnitID, false);
    return generated;
  };

  ProcessCoordinationUnit_RemoveFrame_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.cuId = mutator_.mutateStruct(resourceCoordinator.mojom.CoordinationUnitID, false);
    }
    return this;
  };
  ProcessCoordinationUnit_RemoveFrame_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ProcessCoordinationUnit_RemoveFrame_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ProcessCoordinationUnit_RemoveFrame_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ProcessCoordinationUnit_RemoveFrame_Params.validate = function(messageValidator, offset) {
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


    // validate ProcessCoordinationUnit_RemoveFrame_Params.cuId
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, CoordinationUnitID, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ProcessCoordinationUnit_RemoveFrame_Params.encodedSize = codec.kStructHeaderSize + 8;

  ProcessCoordinationUnit_RemoveFrame_Params.decode = function(decoder) {
    var packed;
    var val = new ProcessCoordinationUnit_RemoveFrame_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.cuId = decoder.decodeStructPointer(CoordinationUnitID);
    return val;
  };

  ProcessCoordinationUnit_RemoveFrame_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ProcessCoordinationUnit_RemoveFrame_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(CoordinationUnitID, val.cuId);
  };
  function ProcessCoordinationUnit_SetCPUUsage_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ProcessCoordinationUnit_SetCPUUsage_Params.prototype.initDefaults_ = function() {
    this.cpuUsage = 0;
  };
  ProcessCoordinationUnit_SetCPUUsage_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ProcessCoordinationUnit_SetCPUUsage_Params.generate = function(generator_) {
    var generated = new ProcessCoordinationUnit_SetCPUUsage_Params;
    generated.cpuUsage = generator_.generateDouble();
    return generated;
  };

  ProcessCoordinationUnit_SetCPUUsage_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.cpuUsage = mutator_.mutateDouble(this.cpuUsage);
    }
    return this;
  };
  ProcessCoordinationUnit_SetCPUUsage_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ProcessCoordinationUnit_SetCPUUsage_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ProcessCoordinationUnit_SetCPUUsage_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ProcessCoordinationUnit_SetCPUUsage_Params.validate = function(messageValidator, offset) {
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

  ProcessCoordinationUnit_SetCPUUsage_Params.encodedSize = codec.kStructHeaderSize + 8;

  ProcessCoordinationUnit_SetCPUUsage_Params.decode = function(decoder) {
    var packed;
    var val = new ProcessCoordinationUnit_SetCPUUsage_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.cpuUsage = decoder.decodeStruct(codec.Double);
    return val;
  };

  ProcessCoordinationUnit_SetCPUUsage_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ProcessCoordinationUnit_SetCPUUsage_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Double, val.cpuUsage);
  };
  function ProcessCoordinationUnit_SetExpectedTaskQueueingDuration_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ProcessCoordinationUnit_SetExpectedTaskQueueingDuration_Params.prototype.initDefaults_ = function() {
    this.duration = null;
  };
  ProcessCoordinationUnit_SetExpectedTaskQueueingDuration_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ProcessCoordinationUnit_SetExpectedTaskQueueingDuration_Params.generate = function(generator_) {
    var generated = new ProcessCoordinationUnit_SetExpectedTaskQueueingDuration_Params;
    generated.duration = generator_.generateStruct(mojoBase.mojom.TimeDelta, false);
    return generated;
  };

  ProcessCoordinationUnit_SetExpectedTaskQueueingDuration_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.duration = mutator_.mutateStruct(mojoBase.mojom.TimeDelta, false);
    }
    return this;
  };
  ProcessCoordinationUnit_SetExpectedTaskQueueingDuration_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ProcessCoordinationUnit_SetExpectedTaskQueueingDuration_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ProcessCoordinationUnit_SetExpectedTaskQueueingDuration_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ProcessCoordinationUnit_SetExpectedTaskQueueingDuration_Params.validate = function(messageValidator, offset) {
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


    // validate ProcessCoordinationUnit_SetExpectedTaskQueueingDuration_Params.duration
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, time$.TimeDelta, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ProcessCoordinationUnit_SetExpectedTaskQueueingDuration_Params.encodedSize = codec.kStructHeaderSize + 8;

  ProcessCoordinationUnit_SetExpectedTaskQueueingDuration_Params.decode = function(decoder) {
    var packed;
    var val = new ProcessCoordinationUnit_SetExpectedTaskQueueingDuration_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.duration = decoder.decodeStructPointer(time$.TimeDelta);
    return val;
  };

  ProcessCoordinationUnit_SetExpectedTaskQueueingDuration_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ProcessCoordinationUnit_SetExpectedTaskQueueingDuration_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(time$.TimeDelta, val.duration);
  };
  function ProcessCoordinationUnit_SetLaunchTime_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ProcessCoordinationUnit_SetLaunchTime_Params.prototype.initDefaults_ = function() {
    this.launchTime = null;
  };
  ProcessCoordinationUnit_SetLaunchTime_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ProcessCoordinationUnit_SetLaunchTime_Params.generate = function(generator_) {
    var generated = new ProcessCoordinationUnit_SetLaunchTime_Params;
    generated.launchTime = generator_.generateStruct(mojoBase.mojom.Time, false);
    return generated;
  };

  ProcessCoordinationUnit_SetLaunchTime_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.launchTime = mutator_.mutateStruct(mojoBase.mojom.Time, false);
    }
    return this;
  };
  ProcessCoordinationUnit_SetLaunchTime_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ProcessCoordinationUnit_SetLaunchTime_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ProcessCoordinationUnit_SetLaunchTime_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ProcessCoordinationUnit_SetLaunchTime_Params.validate = function(messageValidator, offset) {
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


    // validate ProcessCoordinationUnit_SetLaunchTime_Params.launchTime
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, time$.Time, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ProcessCoordinationUnit_SetLaunchTime_Params.encodedSize = codec.kStructHeaderSize + 8;

  ProcessCoordinationUnit_SetLaunchTime_Params.decode = function(decoder) {
    var packed;
    var val = new ProcessCoordinationUnit_SetLaunchTime_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.launchTime = decoder.decodeStructPointer(time$.Time);
    return val;
  };

  ProcessCoordinationUnit_SetLaunchTime_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ProcessCoordinationUnit_SetLaunchTime_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(time$.Time, val.launchTime);
  };
  function ProcessCoordinationUnit_SetMainThreadTaskLoadIsLow_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ProcessCoordinationUnit_SetMainThreadTaskLoadIsLow_Params.prototype.initDefaults_ = function() {
    this.mainThreadTaskLoadIsLow = false;
  };
  ProcessCoordinationUnit_SetMainThreadTaskLoadIsLow_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ProcessCoordinationUnit_SetMainThreadTaskLoadIsLow_Params.generate = function(generator_) {
    var generated = new ProcessCoordinationUnit_SetMainThreadTaskLoadIsLow_Params;
    generated.mainThreadTaskLoadIsLow = generator_.generateBool();
    return generated;
  };

  ProcessCoordinationUnit_SetMainThreadTaskLoadIsLow_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.mainThreadTaskLoadIsLow = mutator_.mutateBool(this.mainThreadTaskLoadIsLow);
    }
    return this;
  };
  ProcessCoordinationUnit_SetMainThreadTaskLoadIsLow_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ProcessCoordinationUnit_SetMainThreadTaskLoadIsLow_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ProcessCoordinationUnit_SetMainThreadTaskLoadIsLow_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ProcessCoordinationUnit_SetMainThreadTaskLoadIsLow_Params.validate = function(messageValidator, offset) {
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

  ProcessCoordinationUnit_SetMainThreadTaskLoadIsLow_Params.encodedSize = codec.kStructHeaderSize + 8;

  ProcessCoordinationUnit_SetMainThreadTaskLoadIsLow_Params.decode = function(decoder) {
    var packed;
    var val = new ProcessCoordinationUnit_SetMainThreadTaskLoadIsLow_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.mainThreadTaskLoadIsLow = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  ProcessCoordinationUnit_SetMainThreadTaskLoadIsLow_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ProcessCoordinationUnit_SetMainThreadTaskLoadIsLow_Params.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.mainThreadTaskLoadIsLow & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function ProcessCoordinationUnit_SetPID_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ProcessCoordinationUnit_SetPID_Params.prototype.initDefaults_ = function() {
    this.pid = 0;
  };
  ProcessCoordinationUnit_SetPID_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ProcessCoordinationUnit_SetPID_Params.generate = function(generator_) {
    var generated = new ProcessCoordinationUnit_SetPID_Params;
    generated.pid = generator_.generateInt64();
    return generated;
  };

  ProcessCoordinationUnit_SetPID_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.pid = mutator_.mutateInt64(this.pid);
    }
    return this;
  };
  ProcessCoordinationUnit_SetPID_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ProcessCoordinationUnit_SetPID_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ProcessCoordinationUnit_SetPID_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ProcessCoordinationUnit_SetPID_Params.validate = function(messageValidator, offset) {
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

  ProcessCoordinationUnit_SetPID_Params.encodedSize = codec.kStructHeaderSize + 8;

  ProcessCoordinationUnit_SetPID_Params.decode = function(decoder) {
    var packed;
    var val = new ProcessCoordinationUnit_SetPID_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.pid = decoder.decodeStruct(codec.Int64);
    return val;
  };

  ProcessCoordinationUnit_SetPID_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ProcessCoordinationUnit_SetPID_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int64, val.pid);
  };
  function SystemCoordinationUnit_GetID_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  SystemCoordinationUnit_GetID_Params.prototype.initDefaults_ = function() {
  };
  SystemCoordinationUnit_GetID_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  SystemCoordinationUnit_GetID_Params.generate = function(generator_) {
    var generated = new SystemCoordinationUnit_GetID_Params;
    return generated;
  };

  SystemCoordinationUnit_GetID_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  SystemCoordinationUnit_GetID_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  SystemCoordinationUnit_GetID_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  SystemCoordinationUnit_GetID_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  SystemCoordinationUnit_GetID_Params.validate = function(messageValidator, offset) {
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

  SystemCoordinationUnit_GetID_Params.encodedSize = codec.kStructHeaderSize + 0;

  SystemCoordinationUnit_GetID_Params.decode = function(decoder) {
    var packed;
    var val = new SystemCoordinationUnit_GetID_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  SystemCoordinationUnit_GetID_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(SystemCoordinationUnit_GetID_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function SystemCoordinationUnit_GetID_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  SystemCoordinationUnit_GetID_ResponseParams.prototype.initDefaults_ = function() {
    this.id = null;
  };
  SystemCoordinationUnit_GetID_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  SystemCoordinationUnit_GetID_ResponseParams.generate = function(generator_) {
    var generated = new SystemCoordinationUnit_GetID_ResponseParams;
    generated.id = generator_.generateStruct(resourceCoordinator.mojom.CoordinationUnitID, false);
    return generated;
  };

  SystemCoordinationUnit_GetID_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.id = mutator_.mutateStruct(resourceCoordinator.mojom.CoordinationUnitID, false);
    }
    return this;
  };
  SystemCoordinationUnit_GetID_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  SystemCoordinationUnit_GetID_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  SystemCoordinationUnit_GetID_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  SystemCoordinationUnit_GetID_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate SystemCoordinationUnit_GetID_ResponseParams.id
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, CoordinationUnitID, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  SystemCoordinationUnit_GetID_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  SystemCoordinationUnit_GetID_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new SystemCoordinationUnit_GetID_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.id = decoder.decodeStructPointer(CoordinationUnitID);
    return val;
  };

  SystemCoordinationUnit_GetID_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(SystemCoordinationUnit_GetID_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(CoordinationUnitID, val.id);
  };
  function SystemCoordinationUnit_AddBinding_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  SystemCoordinationUnit_AddBinding_Params.prototype.initDefaults_ = function() {
    this.request = new bindings.InterfaceRequest();
  };
  SystemCoordinationUnit_AddBinding_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  SystemCoordinationUnit_AddBinding_Params.generate = function(generator_) {
    var generated = new SystemCoordinationUnit_AddBinding_Params;
    generated.request = generator_.generateInterfaceRequest("resourceCoordinator.mojom.SystemCoordinationUnit", false);
    return generated;
  };

  SystemCoordinationUnit_AddBinding_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.request = mutator_.mutateInterfaceRequest(this.request, "resourceCoordinator.mojom.SystemCoordinationUnit", false);
    }
    return this;
  };
  SystemCoordinationUnit_AddBinding_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.request !== null) {
      Array.prototype.push.apply(handles, ["resourceCoordinator.mojom.SystemCoordinationUnitRequest"]);
    }
    return handles;
  };

  SystemCoordinationUnit_AddBinding_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  SystemCoordinationUnit_AddBinding_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.request = handles[idx++];;
    return idx;
  };

  SystemCoordinationUnit_AddBinding_Params.validate = function(messageValidator, offset) {
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


    // validate SystemCoordinationUnit_AddBinding_Params.request
    err = messageValidator.validateInterfaceRequest(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  SystemCoordinationUnit_AddBinding_Params.encodedSize = codec.kStructHeaderSize + 8;

  SystemCoordinationUnit_AddBinding_Params.decode = function(decoder) {
    var packed;
    var val = new SystemCoordinationUnit_AddBinding_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.request = decoder.decodeStruct(codec.InterfaceRequest);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  SystemCoordinationUnit_AddBinding_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(SystemCoordinationUnit_AddBinding_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.InterfaceRequest, val.request);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function SystemCoordinationUnit_OnProcessCPUUsageReady_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  SystemCoordinationUnit_OnProcessCPUUsageReady_Params.prototype.initDefaults_ = function() {
  };
  SystemCoordinationUnit_OnProcessCPUUsageReady_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  SystemCoordinationUnit_OnProcessCPUUsageReady_Params.generate = function(generator_) {
    var generated = new SystemCoordinationUnit_OnProcessCPUUsageReady_Params;
    return generated;
  };

  SystemCoordinationUnit_OnProcessCPUUsageReady_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  SystemCoordinationUnit_OnProcessCPUUsageReady_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  SystemCoordinationUnit_OnProcessCPUUsageReady_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  SystemCoordinationUnit_OnProcessCPUUsageReady_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  SystemCoordinationUnit_OnProcessCPUUsageReady_Params.validate = function(messageValidator, offset) {
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

  SystemCoordinationUnit_OnProcessCPUUsageReady_Params.encodedSize = codec.kStructHeaderSize + 0;

  SystemCoordinationUnit_OnProcessCPUUsageReady_Params.decode = function(decoder) {
    var packed;
    var val = new SystemCoordinationUnit_OnProcessCPUUsageReady_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  SystemCoordinationUnit_OnProcessCPUUsageReady_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(SystemCoordinationUnit_OnProcessCPUUsageReady_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function SystemCoordinationUnit_DistributeMeasurementBatch_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  SystemCoordinationUnit_DistributeMeasurementBatch_Params.prototype.initDefaults_ = function() {
    this.measurementBatch = null;
  };
  SystemCoordinationUnit_DistributeMeasurementBatch_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  SystemCoordinationUnit_DistributeMeasurementBatch_Params.generate = function(generator_) {
    var generated = new SystemCoordinationUnit_DistributeMeasurementBatch_Params;
    generated.measurementBatch = generator_.generateStruct(resourceCoordinator.mojom.ProcessResourceMeasurementBatch, false);
    return generated;
  };

  SystemCoordinationUnit_DistributeMeasurementBatch_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.measurementBatch = mutator_.mutateStruct(resourceCoordinator.mojom.ProcessResourceMeasurementBatch, false);
    }
    return this;
  };
  SystemCoordinationUnit_DistributeMeasurementBatch_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  SystemCoordinationUnit_DistributeMeasurementBatch_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  SystemCoordinationUnit_DistributeMeasurementBatch_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  SystemCoordinationUnit_DistributeMeasurementBatch_Params.validate = function(messageValidator, offset) {
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


    // validate SystemCoordinationUnit_DistributeMeasurementBatch_Params.measurementBatch
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, ProcessResourceMeasurementBatch, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  SystemCoordinationUnit_DistributeMeasurementBatch_Params.encodedSize = codec.kStructHeaderSize + 8;

  SystemCoordinationUnit_DistributeMeasurementBatch_Params.decode = function(decoder) {
    var packed;
    var val = new SystemCoordinationUnit_DistributeMeasurementBatch_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.measurementBatch = decoder.decodeStructPointer(ProcessResourceMeasurementBatch);
    return val;
  };

  SystemCoordinationUnit_DistributeMeasurementBatch_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(SystemCoordinationUnit_DistributeMeasurementBatch_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(ProcessResourceMeasurementBatch, val.measurementBatch);
  };
  var kFrameCoordinationUnit_GetID_Name = 1005412637;
  var kFrameCoordinationUnit_AddBinding_Name = 311578233;
  var kFrameCoordinationUnit_AddChildFrame_Name = 1565813046;
  var kFrameCoordinationUnit_RemoveChildFrame_Name = 185132182;
  var kFrameCoordinationUnit_SetAudibility_Name = 1938834439;
  var kFrameCoordinationUnit_SetNetworkAlmostIdle_Name = 1124385538;
  var kFrameCoordinationUnit_SetLifecycleState_Name = 1422730930;
  var kFrameCoordinationUnit_OnAlertFired_Name = 1696380374;
  var kFrameCoordinationUnit_OnNonPersistentNotificationCreated_Name = 560172682;

  function FrameCoordinationUnitPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(FrameCoordinationUnit,
                                                   handleOrPtrInfo);
  }

  function FrameCoordinationUnitAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        FrameCoordinationUnit, associatedInterfacePtrInfo);
  }

  FrameCoordinationUnitAssociatedPtr.prototype =
      Object.create(FrameCoordinationUnitPtr.prototype);
  FrameCoordinationUnitAssociatedPtr.prototype.constructor =
      FrameCoordinationUnitAssociatedPtr;

  function FrameCoordinationUnitProxy(receiver) {
    this.receiver_ = receiver;
  }
  FrameCoordinationUnitPtr.prototype.getID = function() {
    return FrameCoordinationUnitProxy.prototype.getID
        .apply(this.ptr.getProxy(), arguments);
  };

  FrameCoordinationUnitProxy.prototype.getID = function() {
    var params_ = new FrameCoordinationUnit_GetID_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kFrameCoordinationUnit_GetID_Name,
          codec.align(FrameCoordinationUnit_GetID_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(FrameCoordinationUnit_GetID_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(FrameCoordinationUnit_GetID_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  FrameCoordinationUnitPtr.prototype.addBinding = function() {
    return FrameCoordinationUnitProxy.prototype.addBinding
        .apply(this.ptr.getProxy(), arguments);
  };

  FrameCoordinationUnitProxy.prototype.addBinding = function(request) {
    var params_ = new FrameCoordinationUnit_AddBinding_Params();
    params_.request = request;
    var builder = new codec.MessageV0Builder(
        kFrameCoordinationUnit_AddBinding_Name,
        codec.align(FrameCoordinationUnit_AddBinding_Params.encodedSize));
    builder.encodeStruct(FrameCoordinationUnit_AddBinding_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  FrameCoordinationUnitPtr.prototype.addChildFrame = function() {
    return FrameCoordinationUnitProxy.prototype.addChildFrame
        .apply(this.ptr.getProxy(), arguments);
  };

  FrameCoordinationUnitProxy.prototype.addChildFrame = function(cuId) {
    var params_ = new FrameCoordinationUnit_AddChildFrame_Params();
    params_.cuId = cuId;
    var builder = new codec.MessageV0Builder(
        kFrameCoordinationUnit_AddChildFrame_Name,
        codec.align(FrameCoordinationUnit_AddChildFrame_Params.encodedSize));
    builder.encodeStruct(FrameCoordinationUnit_AddChildFrame_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  FrameCoordinationUnitPtr.prototype.removeChildFrame = function() {
    return FrameCoordinationUnitProxy.prototype.removeChildFrame
        .apply(this.ptr.getProxy(), arguments);
  };

  FrameCoordinationUnitProxy.prototype.removeChildFrame = function(cuId) {
    var params_ = new FrameCoordinationUnit_RemoveChildFrame_Params();
    params_.cuId = cuId;
    var builder = new codec.MessageV0Builder(
        kFrameCoordinationUnit_RemoveChildFrame_Name,
        codec.align(FrameCoordinationUnit_RemoveChildFrame_Params.encodedSize));
    builder.encodeStruct(FrameCoordinationUnit_RemoveChildFrame_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  FrameCoordinationUnitPtr.prototype.setAudibility = function() {
    return FrameCoordinationUnitProxy.prototype.setAudibility
        .apply(this.ptr.getProxy(), arguments);
  };

  FrameCoordinationUnitProxy.prototype.setAudibility = function(audible) {
    var params_ = new FrameCoordinationUnit_SetAudibility_Params();
    params_.audible = audible;
    var builder = new codec.MessageV0Builder(
        kFrameCoordinationUnit_SetAudibility_Name,
        codec.align(FrameCoordinationUnit_SetAudibility_Params.encodedSize));
    builder.encodeStruct(FrameCoordinationUnit_SetAudibility_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  FrameCoordinationUnitPtr.prototype.setNetworkAlmostIdle = function() {
    return FrameCoordinationUnitProxy.prototype.setNetworkAlmostIdle
        .apply(this.ptr.getProxy(), arguments);
  };

  FrameCoordinationUnitProxy.prototype.setNetworkAlmostIdle = function(idle) {
    var params_ = new FrameCoordinationUnit_SetNetworkAlmostIdle_Params();
    params_.idle = idle;
    var builder = new codec.MessageV0Builder(
        kFrameCoordinationUnit_SetNetworkAlmostIdle_Name,
        codec.align(FrameCoordinationUnit_SetNetworkAlmostIdle_Params.encodedSize));
    builder.encodeStruct(FrameCoordinationUnit_SetNetworkAlmostIdle_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  FrameCoordinationUnitPtr.prototype.setLifecycleState = function() {
    return FrameCoordinationUnitProxy.prototype.setLifecycleState
        .apply(this.ptr.getProxy(), arguments);
  };

  FrameCoordinationUnitProxy.prototype.setLifecycleState = function(state) {
    var params_ = new FrameCoordinationUnit_SetLifecycleState_Params();
    params_.state = state;
    var builder = new codec.MessageV0Builder(
        kFrameCoordinationUnit_SetLifecycleState_Name,
        codec.align(FrameCoordinationUnit_SetLifecycleState_Params.encodedSize));
    builder.encodeStruct(FrameCoordinationUnit_SetLifecycleState_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  FrameCoordinationUnitPtr.prototype.onAlertFired = function() {
    return FrameCoordinationUnitProxy.prototype.onAlertFired
        .apply(this.ptr.getProxy(), arguments);
  };

  FrameCoordinationUnitProxy.prototype.onAlertFired = function() {
    var params_ = new FrameCoordinationUnit_OnAlertFired_Params();
    var builder = new codec.MessageV0Builder(
        kFrameCoordinationUnit_OnAlertFired_Name,
        codec.align(FrameCoordinationUnit_OnAlertFired_Params.encodedSize));
    builder.encodeStruct(FrameCoordinationUnit_OnAlertFired_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  FrameCoordinationUnitPtr.prototype.onNonPersistentNotificationCreated = function() {
    return FrameCoordinationUnitProxy.prototype.onNonPersistentNotificationCreated
        .apply(this.ptr.getProxy(), arguments);
  };

  FrameCoordinationUnitProxy.prototype.onNonPersistentNotificationCreated = function() {
    var params_ = new FrameCoordinationUnit_OnNonPersistentNotificationCreated_Params();
    var builder = new codec.MessageV0Builder(
        kFrameCoordinationUnit_OnNonPersistentNotificationCreated_Name,
        codec.align(FrameCoordinationUnit_OnNonPersistentNotificationCreated_Params.encodedSize));
    builder.encodeStruct(FrameCoordinationUnit_OnNonPersistentNotificationCreated_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function FrameCoordinationUnitStub(delegate) {
    this.delegate_ = delegate;
  }
  FrameCoordinationUnitStub.prototype.getID = function() {
    return this.delegate_ && this.delegate_.getID && this.delegate_.getID();
  }
  FrameCoordinationUnitStub.prototype.addBinding = function(request) {
    return this.delegate_ && this.delegate_.addBinding && this.delegate_.addBinding(request);
  }
  FrameCoordinationUnitStub.prototype.addChildFrame = function(cuId) {
    return this.delegate_ && this.delegate_.addChildFrame && this.delegate_.addChildFrame(cuId);
  }
  FrameCoordinationUnitStub.prototype.removeChildFrame = function(cuId) {
    return this.delegate_ && this.delegate_.removeChildFrame && this.delegate_.removeChildFrame(cuId);
  }
  FrameCoordinationUnitStub.prototype.setAudibility = function(audible) {
    return this.delegate_ && this.delegate_.setAudibility && this.delegate_.setAudibility(audible);
  }
  FrameCoordinationUnitStub.prototype.setNetworkAlmostIdle = function(idle) {
    return this.delegate_ && this.delegate_.setNetworkAlmostIdle && this.delegate_.setNetworkAlmostIdle(idle);
  }
  FrameCoordinationUnitStub.prototype.setLifecycleState = function(state) {
    return this.delegate_ && this.delegate_.setLifecycleState && this.delegate_.setLifecycleState(state);
  }
  FrameCoordinationUnitStub.prototype.onAlertFired = function() {
    return this.delegate_ && this.delegate_.onAlertFired && this.delegate_.onAlertFired();
  }
  FrameCoordinationUnitStub.prototype.onNonPersistentNotificationCreated = function() {
    return this.delegate_ && this.delegate_.onNonPersistentNotificationCreated && this.delegate_.onNonPersistentNotificationCreated();
  }

  FrameCoordinationUnitStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kFrameCoordinationUnit_AddBinding_Name:
      var params = reader.decodeStruct(FrameCoordinationUnit_AddBinding_Params);
      this.addBinding(params.request);
      return true;
    case kFrameCoordinationUnit_AddChildFrame_Name:
      var params = reader.decodeStruct(FrameCoordinationUnit_AddChildFrame_Params);
      this.addChildFrame(params.cuId);
      return true;
    case kFrameCoordinationUnit_RemoveChildFrame_Name:
      var params = reader.decodeStruct(FrameCoordinationUnit_RemoveChildFrame_Params);
      this.removeChildFrame(params.cuId);
      return true;
    case kFrameCoordinationUnit_SetAudibility_Name:
      var params = reader.decodeStruct(FrameCoordinationUnit_SetAudibility_Params);
      this.setAudibility(params.audible);
      return true;
    case kFrameCoordinationUnit_SetNetworkAlmostIdle_Name:
      var params = reader.decodeStruct(FrameCoordinationUnit_SetNetworkAlmostIdle_Params);
      this.setNetworkAlmostIdle(params.idle);
      return true;
    case kFrameCoordinationUnit_SetLifecycleState_Name:
      var params = reader.decodeStruct(FrameCoordinationUnit_SetLifecycleState_Params);
      this.setLifecycleState(params.state);
      return true;
    case kFrameCoordinationUnit_OnAlertFired_Name:
      var params = reader.decodeStruct(FrameCoordinationUnit_OnAlertFired_Params);
      this.onAlertFired();
      return true;
    case kFrameCoordinationUnit_OnNonPersistentNotificationCreated_Name:
      var params = reader.decodeStruct(FrameCoordinationUnit_OnNonPersistentNotificationCreated_Params);
      this.onNonPersistentNotificationCreated();
      return true;
    default:
      return false;
    }
  };

  FrameCoordinationUnitStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kFrameCoordinationUnit_GetID_Name:
      var params = reader.decodeStruct(FrameCoordinationUnit_GetID_Params);
      this.getID().then(function(response) {
        var responseParams =
            new FrameCoordinationUnit_GetID_ResponseParams();
        responseParams.id = response.id;
        var builder = new codec.MessageV1Builder(
            kFrameCoordinationUnit_GetID_Name,
            codec.align(FrameCoordinationUnit_GetID_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(FrameCoordinationUnit_GetID_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    default:
      return false;
    }
  };

  function validateFrameCoordinationUnitRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kFrameCoordinationUnit_GetID_Name:
        if (message.expectsResponse())
          paramsClass = FrameCoordinationUnit_GetID_Params;
      break;
      case kFrameCoordinationUnit_AddBinding_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = FrameCoordinationUnit_AddBinding_Params;
      break;
      case kFrameCoordinationUnit_AddChildFrame_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = FrameCoordinationUnit_AddChildFrame_Params;
      break;
      case kFrameCoordinationUnit_RemoveChildFrame_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = FrameCoordinationUnit_RemoveChildFrame_Params;
      break;
      case kFrameCoordinationUnit_SetAudibility_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = FrameCoordinationUnit_SetAudibility_Params;
      break;
      case kFrameCoordinationUnit_SetNetworkAlmostIdle_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = FrameCoordinationUnit_SetNetworkAlmostIdle_Params;
      break;
      case kFrameCoordinationUnit_SetLifecycleState_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = FrameCoordinationUnit_SetLifecycleState_Params;
      break;
      case kFrameCoordinationUnit_OnAlertFired_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = FrameCoordinationUnit_OnAlertFired_Params;
      break;
      case kFrameCoordinationUnit_OnNonPersistentNotificationCreated_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = FrameCoordinationUnit_OnNonPersistentNotificationCreated_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateFrameCoordinationUnitResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kFrameCoordinationUnit_GetID_Name:
        if (message.isResponse())
          paramsClass = FrameCoordinationUnit_GetID_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var FrameCoordinationUnit = {
    name: 'resource_coordinator.mojom.FrameCoordinationUnit',
    kVersion: 0,
    ptrClass: FrameCoordinationUnitPtr,
    proxyClass: FrameCoordinationUnitProxy,
    stubClass: FrameCoordinationUnitStub,
    validateRequest: validateFrameCoordinationUnitRequest,
    validateResponse: validateFrameCoordinationUnitResponse,
    mojomId: 'services/resource_coordinator/public/mojom/coordination_unit.mojom',
    fuzzMethods: {
      getID: {
        params: FrameCoordinationUnit_GetID_Params,
      },
      addBinding: {
        params: FrameCoordinationUnit_AddBinding_Params,
      },
      addChildFrame: {
        params: FrameCoordinationUnit_AddChildFrame_Params,
      },
      removeChildFrame: {
        params: FrameCoordinationUnit_RemoveChildFrame_Params,
      },
      setAudibility: {
        params: FrameCoordinationUnit_SetAudibility_Params,
      },
      setNetworkAlmostIdle: {
        params: FrameCoordinationUnit_SetNetworkAlmostIdle_Params,
      },
      setLifecycleState: {
        params: FrameCoordinationUnit_SetLifecycleState_Params,
      },
      onAlertFired: {
        params: FrameCoordinationUnit_OnAlertFired_Params,
      },
      onNonPersistentNotificationCreated: {
        params: FrameCoordinationUnit_OnNonPersistentNotificationCreated_Params,
      },
    },
  };
  FrameCoordinationUnitStub.prototype.validator = validateFrameCoordinationUnitRequest;
  FrameCoordinationUnitProxy.prototype.validator = validateFrameCoordinationUnitResponse;
  var kPageCoordinationUnit_GetID_Name = 355677280;
  var kPageCoordinationUnit_AddBinding_Name = 296016099;
  var kPageCoordinationUnit_AddFrame_Name = 1683228358;
  var kPageCoordinationUnit_RemoveFrame_Name = 1107043064;
  var kPageCoordinationUnit_SetIsLoading_Name = 1319590595;
  var kPageCoordinationUnit_SetVisibility_Name = 1464991824;
  var kPageCoordinationUnit_SetUKMSourceId_Name = 1131606186;
  var kPageCoordinationUnit_OnFaviconUpdated_Name = 1621742523;
  var kPageCoordinationUnit_OnTitleUpdated_Name = 1387997604;
  var kPageCoordinationUnit_OnMainFrameNavigationCommitted_Name = 1007081071;

  function PageCoordinationUnitPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(PageCoordinationUnit,
                                                   handleOrPtrInfo);
  }

  function PageCoordinationUnitAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        PageCoordinationUnit, associatedInterfacePtrInfo);
  }

  PageCoordinationUnitAssociatedPtr.prototype =
      Object.create(PageCoordinationUnitPtr.prototype);
  PageCoordinationUnitAssociatedPtr.prototype.constructor =
      PageCoordinationUnitAssociatedPtr;

  function PageCoordinationUnitProxy(receiver) {
    this.receiver_ = receiver;
  }
  PageCoordinationUnitPtr.prototype.getID = function() {
    return PageCoordinationUnitProxy.prototype.getID
        .apply(this.ptr.getProxy(), arguments);
  };

  PageCoordinationUnitProxy.prototype.getID = function() {
    var params_ = new PageCoordinationUnit_GetID_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kPageCoordinationUnit_GetID_Name,
          codec.align(PageCoordinationUnit_GetID_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(PageCoordinationUnit_GetID_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(PageCoordinationUnit_GetID_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  PageCoordinationUnitPtr.prototype.addBinding = function() {
    return PageCoordinationUnitProxy.prototype.addBinding
        .apply(this.ptr.getProxy(), arguments);
  };

  PageCoordinationUnitProxy.prototype.addBinding = function(request) {
    var params_ = new PageCoordinationUnit_AddBinding_Params();
    params_.request = request;
    var builder = new codec.MessageV0Builder(
        kPageCoordinationUnit_AddBinding_Name,
        codec.align(PageCoordinationUnit_AddBinding_Params.encodedSize));
    builder.encodeStruct(PageCoordinationUnit_AddBinding_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  PageCoordinationUnitPtr.prototype.addFrame = function() {
    return PageCoordinationUnitProxy.prototype.addFrame
        .apply(this.ptr.getProxy(), arguments);
  };

  PageCoordinationUnitProxy.prototype.addFrame = function(cuId) {
    var params_ = new PageCoordinationUnit_AddFrame_Params();
    params_.cuId = cuId;
    var builder = new codec.MessageV0Builder(
        kPageCoordinationUnit_AddFrame_Name,
        codec.align(PageCoordinationUnit_AddFrame_Params.encodedSize));
    builder.encodeStruct(PageCoordinationUnit_AddFrame_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  PageCoordinationUnitPtr.prototype.removeFrame = function() {
    return PageCoordinationUnitProxy.prototype.removeFrame
        .apply(this.ptr.getProxy(), arguments);
  };

  PageCoordinationUnitProxy.prototype.removeFrame = function(cuId) {
    var params_ = new PageCoordinationUnit_RemoveFrame_Params();
    params_.cuId = cuId;
    var builder = new codec.MessageV0Builder(
        kPageCoordinationUnit_RemoveFrame_Name,
        codec.align(PageCoordinationUnit_RemoveFrame_Params.encodedSize));
    builder.encodeStruct(PageCoordinationUnit_RemoveFrame_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  PageCoordinationUnitPtr.prototype.setIsLoading = function() {
    return PageCoordinationUnitProxy.prototype.setIsLoading
        .apply(this.ptr.getProxy(), arguments);
  };

  PageCoordinationUnitProxy.prototype.setIsLoading = function(isLoading) {
    var params_ = new PageCoordinationUnit_SetIsLoading_Params();
    params_.isLoading = isLoading;
    var builder = new codec.MessageV0Builder(
        kPageCoordinationUnit_SetIsLoading_Name,
        codec.align(PageCoordinationUnit_SetIsLoading_Params.encodedSize));
    builder.encodeStruct(PageCoordinationUnit_SetIsLoading_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  PageCoordinationUnitPtr.prototype.setVisibility = function() {
    return PageCoordinationUnitProxy.prototype.setVisibility
        .apply(this.ptr.getProxy(), arguments);
  };

  PageCoordinationUnitProxy.prototype.setVisibility = function(visible) {
    var params_ = new PageCoordinationUnit_SetVisibility_Params();
    params_.visible = visible;
    var builder = new codec.MessageV0Builder(
        kPageCoordinationUnit_SetVisibility_Name,
        codec.align(PageCoordinationUnit_SetVisibility_Params.encodedSize));
    builder.encodeStruct(PageCoordinationUnit_SetVisibility_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  PageCoordinationUnitPtr.prototype.setUKMSourceId = function() {
    return PageCoordinationUnitProxy.prototype.setUKMSourceId
        .apply(this.ptr.getProxy(), arguments);
  };

  PageCoordinationUnitProxy.prototype.setUKMSourceId = function(ukmSourceId) {
    var params_ = new PageCoordinationUnit_SetUKMSourceId_Params();
    params_.ukmSourceId = ukmSourceId;
    var builder = new codec.MessageV0Builder(
        kPageCoordinationUnit_SetUKMSourceId_Name,
        codec.align(PageCoordinationUnit_SetUKMSourceId_Params.encodedSize));
    builder.encodeStruct(PageCoordinationUnit_SetUKMSourceId_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  PageCoordinationUnitPtr.prototype.onFaviconUpdated = function() {
    return PageCoordinationUnitProxy.prototype.onFaviconUpdated
        .apply(this.ptr.getProxy(), arguments);
  };

  PageCoordinationUnitProxy.prototype.onFaviconUpdated = function() {
    var params_ = new PageCoordinationUnit_OnFaviconUpdated_Params();
    var builder = new codec.MessageV0Builder(
        kPageCoordinationUnit_OnFaviconUpdated_Name,
        codec.align(PageCoordinationUnit_OnFaviconUpdated_Params.encodedSize));
    builder.encodeStruct(PageCoordinationUnit_OnFaviconUpdated_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  PageCoordinationUnitPtr.prototype.onTitleUpdated = function() {
    return PageCoordinationUnitProxy.prototype.onTitleUpdated
        .apply(this.ptr.getProxy(), arguments);
  };

  PageCoordinationUnitProxy.prototype.onTitleUpdated = function() {
    var params_ = new PageCoordinationUnit_OnTitleUpdated_Params();
    var builder = new codec.MessageV0Builder(
        kPageCoordinationUnit_OnTitleUpdated_Name,
        codec.align(PageCoordinationUnit_OnTitleUpdated_Params.encodedSize));
    builder.encodeStruct(PageCoordinationUnit_OnTitleUpdated_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  PageCoordinationUnitPtr.prototype.onMainFrameNavigationCommitted = function() {
    return PageCoordinationUnitProxy.prototype.onMainFrameNavigationCommitted
        .apply(this.ptr.getProxy(), arguments);
  };

  PageCoordinationUnitProxy.prototype.onMainFrameNavigationCommitted = function() {
    var params_ = new PageCoordinationUnit_OnMainFrameNavigationCommitted_Params();
    var builder = new codec.MessageV0Builder(
        kPageCoordinationUnit_OnMainFrameNavigationCommitted_Name,
        codec.align(PageCoordinationUnit_OnMainFrameNavigationCommitted_Params.encodedSize));
    builder.encodeStruct(PageCoordinationUnit_OnMainFrameNavigationCommitted_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function PageCoordinationUnitStub(delegate) {
    this.delegate_ = delegate;
  }
  PageCoordinationUnitStub.prototype.getID = function() {
    return this.delegate_ && this.delegate_.getID && this.delegate_.getID();
  }
  PageCoordinationUnitStub.prototype.addBinding = function(request) {
    return this.delegate_ && this.delegate_.addBinding && this.delegate_.addBinding(request);
  }
  PageCoordinationUnitStub.prototype.addFrame = function(cuId) {
    return this.delegate_ && this.delegate_.addFrame && this.delegate_.addFrame(cuId);
  }
  PageCoordinationUnitStub.prototype.removeFrame = function(cuId) {
    return this.delegate_ && this.delegate_.removeFrame && this.delegate_.removeFrame(cuId);
  }
  PageCoordinationUnitStub.prototype.setIsLoading = function(isLoading) {
    return this.delegate_ && this.delegate_.setIsLoading && this.delegate_.setIsLoading(isLoading);
  }
  PageCoordinationUnitStub.prototype.setVisibility = function(visible) {
    return this.delegate_ && this.delegate_.setVisibility && this.delegate_.setVisibility(visible);
  }
  PageCoordinationUnitStub.prototype.setUKMSourceId = function(ukmSourceId) {
    return this.delegate_ && this.delegate_.setUKMSourceId && this.delegate_.setUKMSourceId(ukmSourceId);
  }
  PageCoordinationUnitStub.prototype.onFaviconUpdated = function() {
    return this.delegate_ && this.delegate_.onFaviconUpdated && this.delegate_.onFaviconUpdated();
  }
  PageCoordinationUnitStub.prototype.onTitleUpdated = function() {
    return this.delegate_ && this.delegate_.onTitleUpdated && this.delegate_.onTitleUpdated();
  }
  PageCoordinationUnitStub.prototype.onMainFrameNavigationCommitted = function() {
    return this.delegate_ && this.delegate_.onMainFrameNavigationCommitted && this.delegate_.onMainFrameNavigationCommitted();
  }

  PageCoordinationUnitStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kPageCoordinationUnit_AddBinding_Name:
      var params = reader.decodeStruct(PageCoordinationUnit_AddBinding_Params);
      this.addBinding(params.request);
      return true;
    case kPageCoordinationUnit_AddFrame_Name:
      var params = reader.decodeStruct(PageCoordinationUnit_AddFrame_Params);
      this.addFrame(params.cuId);
      return true;
    case kPageCoordinationUnit_RemoveFrame_Name:
      var params = reader.decodeStruct(PageCoordinationUnit_RemoveFrame_Params);
      this.removeFrame(params.cuId);
      return true;
    case kPageCoordinationUnit_SetIsLoading_Name:
      var params = reader.decodeStruct(PageCoordinationUnit_SetIsLoading_Params);
      this.setIsLoading(params.isLoading);
      return true;
    case kPageCoordinationUnit_SetVisibility_Name:
      var params = reader.decodeStruct(PageCoordinationUnit_SetVisibility_Params);
      this.setVisibility(params.visible);
      return true;
    case kPageCoordinationUnit_SetUKMSourceId_Name:
      var params = reader.decodeStruct(PageCoordinationUnit_SetUKMSourceId_Params);
      this.setUKMSourceId(params.ukmSourceId);
      return true;
    case kPageCoordinationUnit_OnFaviconUpdated_Name:
      var params = reader.decodeStruct(PageCoordinationUnit_OnFaviconUpdated_Params);
      this.onFaviconUpdated();
      return true;
    case kPageCoordinationUnit_OnTitleUpdated_Name:
      var params = reader.decodeStruct(PageCoordinationUnit_OnTitleUpdated_Params);
      this.onTitleUpdated();
      return true;
    case kPageCoordinationUnit_OnMainFrameNavigationCommitted_Name:
      var params = reader.decodeStruct(PageCoordinationUnit_OnMainFrameNavigationCommitted_Params);
      this.onMainFrameNavigationCommitted();
      return true;
    default:
      return false;
    }
  };

  PageCoordinationUnitStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kPageCoordinationUnit_GetID_Name:
      var params = reader.decodeStruct(PageCoordinationUnit_GetID_Params);
      this.getID().then(function(response) {
        var responseParams =
            new PageCoordinationUnit_GetID_ResponseParams();
        responseParams.id = response.id;
        var builder = new codec.MessageV1Builder(
            kPageCoordinationUnit_GetID_Name,
            codec.align(PageCoordinationUnit_GetID_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(PageCoordinationUnit_GetID_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    default:
      return false;
    }
  };

  function validatePageCoordinationUnitRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kPageCoordinationUnit_GetID_Name:
        if (message.expectsResponse())
          paramsClass = PageCoordinationUnit_GetID_Params;
      break;
      case kPageCoordinationUnit_AddBinding_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = PageCoordinationUnit_AddBinding_Params;
      break;
      case kPageCoordinationUnit_AddFrame_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = PageCoordinationUnit_AddFrame_Params;
      break;
      case kPageCoordinationUnit_RemoveFrame_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = PageCoordinationUnit_RemoveFrame_Params;
      break;
      case kPageCoordinationUnit_SetIsLoading_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = PageCoordinationUnit_SetIsLoading_Params;
      break;
      case kPageCoordinationUnit_SetVisibility_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = PageCoordinationUnit_SetVisibility_Params;
      break;
      case kPageCoordinationUnit_SetUKMSourceId_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = PageCoordinationUnit_SetUKMSourceId_Params;
      break;
      case kPageCoordinationUnit_OnFaviconUpdated_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = PageCoordinationUnit_OnFaviconUpdated_Params;
      break;
      case kPageCoordinationUnit_OnTitleUpdated_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = PageCoordinationUnit_OnTitleUpdated_Params;
      break;
      case kPageCoordinationUnit_OnMainFrameNavigationCommitted_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = PageCoordinationUnit_OnMainFrameNavigationCommitted_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validatePageCoordinationUnitResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kPageCoordinationUnit_GetID_Name:
        if (message.isResponse())
          paramsClass = PageCoordinationUnit_GetID_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var PageCoordinationUnit = {
    name: 'resource_coordinator.mojom.PageCoordinationUnit',
    kVersion: 0,
    ptrClass: PageCoordinationUnitPtr,
    proxyClass: PageCoordinationUnitProxy,
    stubClass: PageCoordinationUnitStub,
    validateRequest: validatePageCoordinationUnitRequest,
    validateResponse: validatePageCoordinationUnitResponse,
    mojomId: 'services/resource_coordinator/public/mojom/coordination_unit.mojom',
    fuzzMethods: {
      getID: {
        params: PageCoordinationUnit_GetID_Params,
      },
      addBinding: {
        params: PageCoordinationUnit_AddBinding_Params,
      },
      addFrame: {
        params: PageCoordinationUnit_AddFrame_Params,
      },
      removeFrame: {
        params: PageCoordinationUnit_RemoveFrame_Params,
      },
      setIsLoading: {
        params: PageCoordinationUnit_SetIsLoading_Params,
      },
      setVisibility: {
        params: PageCoordinationUnit_SetVisibility_Params,
      },
      setUKMSourceId: {
        params: PageCoordinationUnit_SetUKMSourceId_Params,
      },
      onFaviconUpdated: {
        params: PageCoordinationUnit_OnFaviconUpdated_Params,
      },
      onTitleUpdated: {
        params: PageCoordinationUnit_OnTitleUpdated_Params,
      },
      onMainFrameNavigationCommitted: {
        params: PageCoordinationUnit_OnMainFrameNavigationCommitted_Params,
      },
    },
  };
  PageCoordinationUnitStub.prototype.validator = validatePageCoordinationUnitRequest;
  PageCoordinationUnitProxy.prototype.validator = validatePageCoordinationUnitResponse;
  var kProcessCoordinationUnit_GetID_Name = 1901414827;
  var kProcessCoordinationUnit_AddBinding_Name = 726227113;
  var kProcessCoordinationUnit_AddFrame_Name = 1672230825;
  var kProcessCoordinationUnit_RemoveFrame_Name = 1043777556;
  var kProcessCoordinationUnit_SetCPUUsage_Name = 770240560;
  var kProcessCoordinationUnit_SetExpectedTaskQueueingDuration_Name = 1926069265;
  var kProcessCoordinationUnit_SetLaunchTime_Name = 544791133;
  var kProcessCoordinationUnit_SetMainThreadTaskLoadIsLow_Name = 883201896;
  var kProcessCoordinationUnit_SetPID_Name = 1393431947;

  function ProcessCoordinationUnitPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(ProcessCoordinationUnit,
                                                   handleOrPtrInfo);
  }

  function ProcessCoordinationUnitAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        ProcessCoordinationUnit, associatedInterfacePtrInfo);
  }

  ProcessCoordinationUnitAssociatedPtr.prototype =
      Object.create(ProcessCoordinationUnitPtr.prototype);
  ProcessCoordinationUnitAssociatedPtr.prototype.constructor =
      ProcessCoordinationUnitAssociatedPtr;

  function ProcessCoordinationUnitProxy(receiver) {
    this.receiver_ = receiver;
  }
  ProcessCoordinationUnitPtr.prototype.getID = function() {
    return ProcessCoordinationUnitProxy.prototype.getID
        .apply(this.ptr.getProxy(), arguments);
  };

  ProcessCoordinationUnitProxy.prototype.getID = function() {
    var params_ = new ProcessCoordinationUnit_GetID_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kProcessCoordinationUnit_GetID_Name,
          codec.align(ProcessCoordinationUnit_GetID_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(ProcessCoordinationUnit_GetID_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(ProcessCoordinationUnit_GetID_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  ProcessCoordinationUnitPtr.prototype.addBinding = function() {
    return ProcessCoordinationUnitProxy.prototype.addBinding
        .apply(this.ptr.getProxy(), arguments);
  };

  ProcessCoordinationUnitProxy.prototype.addBinding = function(request) {
    var params_ = new ProcessCoordinationUnit_AddBinding_Params();
    params_.request = request;
    var builder = new codec.MessageV0Builder(
        kProcessCoordinationUnit_AddBinding_Name,
        codec.align(ProcessCoordinationUnit_AddBinding_Params.encodedSize));
    builder.encodeStruct(ProcessCoordinationUnit_AddBinding_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  ProcessCoordinationUnitPtr.prototype.addFrame = function() {
    return ProcessCoordinationUnitProxy.prototype.addFrame
        .apply(this.ptr.getProxy(), arguments);
  };

  ProcessCoordinationUnitProxy.prototype.addFrame = function(cuId) {
    var params_ = new ProcessCoordinationUnit_AddFrame_Params();
    params_.cuId = cuId;
    var builder = new codec.MessageV0Builder(
        kProcessCoordinationUnit_AddFrame_Name,
        codec.align(ProcessCoordinationUnit_AddFrame_Params.encodedSize));
    builder.encodeStruct(ProcessCoordinationUnit_AddFrame_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  ProcessCoordinationUnitPtr.prototype.removeFrame = function() {
    return ProcessCoordinationUnitProxy.prototype.removeFrame
        .apply(this.ptr.getProxy(), arguments);
  };

  ProcessCoordinationUnitProxy.prototype.removeFrame = function(cuId) {
    var params_ = new ProcessCoordinationUnit_RemoveFrame_Params();
    params_.cuId = cuId;
    var builder = new codec.MessageV0Builder(
        kProcessCoordinationUnit_RemoveFrame_Name,
        codec.align(ProcessCoordinationUnit_RemoveFrame_Params.encodedSize));
    builder.encodeStruct(ProcessCoordinationUnit_RemoveFrame_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  ProcessCoordinationUnitPtr.prototype.setCPUUsage = function() {
    return ProcessCoordinationUnitProxy.prototype.setCPUUsage
        .apply(this.ptr.getProxy(), arguments);
  };

  ProcessCoordinationUnitProxy.prototype.setCPUUsage = function(cpuUsage) {
    var params_ = new ProcessCoordinationUnit_SetCPUUsage_Params();
    params_.cpuUsage = cpuUsage;
    var builder = new codec.MessageV0Builder(
        kProcessCoordinationUnit_SetCPUUsage_Name,
        codec.align(ProcessCoordinationUnit_SetCPUUsage_Params.encodedSize));
    builder.encodeStruct(ProcessCoordinationUnit_SetCPUUsage_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  ProcessCoordinationUnitPtr.prototype.setExpectedTaskQueueingDuration = function() {
    return ProcessCoordinationUnitProxy.prototype.setExpectedTaskQueueingDuration
        .apply(this.ptr.getProxy(), arguments);
  };

  ProcessCoordinationUnitProxy.prototype.setExpectedTaskQueueingDuration = function(duration) {
    var params_ = new ProcessCoordinationUnit_SetExpectedTaskQueueingDuration_Params();
    params_.duration = duration;
    var builder = new codec.MessageV0Builder(
        kProcessCoordinationUnit_SetExpectedTaskQueueingDuration_Name,
        codec.align(ProcessCoordinationUnit_SetExpectedTaskQueueingDuration_Params.encodedSize));
    builder.encodeStruct(ProcessCoordinationUnit_SetExpectedTaskQueueingDuration_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  ProcessCoordinationUnitPtr.prototype.setLaunchTime = function() {
    return ProcessCoordinationUnitProxy.prototype.setLaunchTime
        .apply(this.ptr.getProxy(), arguments);
  };

  ProcessCoordinationUnitProxy.prototype.setLaunchTime = function(launchTime) {
    var params_ = new ProcessCoordinationUnit_SetLaunchTime_Params();
    params_.launchTime = launchTime;
    var builder = new codec.MessageV0Builder(
        kProcessCoordinationUnit_SetLaunchTime_Name,
        codec.align(ProcessCoordinationUnit_SetLaunchTime_Params.encodedSize));
    builder.encodeStruct(ProcessCoordinationUnit_SetLaunchTime_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  ProcessCoordinationUnitPtr.prototype.setMainThreadTaskLoadIsLow = function() {
    return ProcessCoordinationUnitProxy.prototype.setMainThreadTaskLoadIsLow
        .apply(this.ptr.getProxy(), arguments);
  };

  ProcessCoordinationUnitProxy.prototype.setMainThreadTaskLoadIsLow = function(mainThreadTaskLoadIsLow) {
    var params_ = new ProcessCoordinationUnit_SetMainThreadTaskLoadIsLow_Params();
    params_.mainThreadTaskLoadIsLow = mainThreadTaskLoadIsLow;
    var builder = new codec.MessageV0Builder(
        kProcessCoordinationUnit_SetMainThreadTaskLoadIsLow_Name,
        codec.align(ProcessCoordinationUnit_SetMainThreadTaskLoadIsLow_Params.encodedSize));
    builder.encodeStruct(ProcessCoordinationUnit_SetMainThreadTaskLoadIsLow_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  ProcessCoordinationUnitPtr.prototype.setPID = function() {
    return ProcessCoordinationUnitProxy.prototype.setPID
        .apply(this.ptr.getProxy(), arguments);
  };

  ProcessCoordinationUnitProxy.prototype.setPID = function(pid) {
    var params_ = new ProcessCoordinationUnit_SetPID_Params();
    params_.pid = pid;
    var builder = new codec.MessageV0Builder(
        kProcessCoordinationUnit_SetPID_Name,
        codec.align(ProcessCoordinationUnit_SetPID_Params.encodedSize));
    builder.encodeStruct(ProcessCoordinationUnit_SetPID_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function ProcessCoordinationUnitStub(delegate) {
    this.delegate_ = delegate;
  }
  ProcessCoordinationUnitStub.prototype.getID = function() {
    return this.delegate_ && this.delegate_.getID && this.delegate_.getID();
  }
  ProcessCoordinationUnitStub.prototype.addBinding = function(request) {
    return this.delegate_ && this.delegate_.addBinding && this.delegate_.addBinding(request);
  }
  ProcessCoordinationUnitStub.prototype.addFrame = function(cuId) {
    return this.delegate_ && this.delegate_.addFrame && this.delegate_.addFrame(cuId);
  }
  ProcessCoordinationUnitStub.prototype.removeFrame = function(cuId) {
    return this.delegate_ && this.delegate_.removeFrame && this.delegate_.removeFrame(cuId);
  }
  ProcessCoordinationUnitStub.prototype.setCPUUsage = function(cpuUsage) {
    return this.delegate_ && this.delegate_.setCPUUsage && this.delegate_.setCPUUsage(cpuUsage);
  }
  ProcessCoordinationUnitStub.prototype.setExpectedTaskQueueingDuration = function(duration) {
    return this.delegate_ && this.delegate_.setExpectedTaskQueueingDuration && this.delegate_.setExpectedTaskQueueingDuration(duration);
  }
  ProcessCoordinationUnitStub.prototype.setLaunchTime = function(launchTime) {
    return this.delegate_ && this.delegate_.setLaunchTime && this.delegate_.setLaunchTime(launchTime);
  }
  ProcessCoordinationUnitStub.prototype.setMainThreadTaskLoadIsLow = function(mainThreadTaskLoadIsLow) {
    return this.delegate_ && this.delegate_.setMainThreadTaskLoadIsLow && this.delegate_.setMainThreadTaskLoadIsLow(mainThreadTaskLoadIsLow);
  }
  ProcessCoordinationUnitStub.prototype.setPID = function(pid) {
    return this.delegate_ && this.delegate_.setPID && this.delegate_.setPID(pid);
  }

  ProcessCoordinationUnitStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kProcessCoordinationUnit_AddBinding_Name:
      var params = reader.decodeStruct(ProcessCoordinationUnit_AddBinding_Params);
      this.addBinding(params.request);
      return true;
    case kProcessCoordinationUnit_AddFrame_Name:
      var params = reader.decodeStruct(ProcessCoordinationUnit_AddFrame_Params);
      this.addFrame(params.cuId);
      return true;
    case kProcessCoordinationUnit_RemoveFrame_Name:
      var params = reader.decodeStruct(ProcessCoordinationUnit_RemoveFrame_Params);
      this.removeFrame(params.cuId);
      return true;
    case kProcessCoordinationUnit_SetCPUUsage_Name:
      var params = reader.decodeStruct(ProcessCoordinationUnit_SetCPUUsage_Params);
      this.setCPUUsage(params.cpuUsage);
      return true;
    case kProcessCoordinationUnit_SetExpectedTaskQueueingDuration_Name:
      var params = reader.decodeStruct(ProcessCoordinationUnit_SetExpectedTaskQueueingDuration_Params);
      this.setExpectedTaskQueueingDuration(params.duration);
      return true;
    case kProcessCoordinationUnit_SetLaunchTime_Name:
      var params = reader.decodeStruct(ProcessCoordinationUnit_SetLaunchTime_Params);
      this.setLaunchTime(params.launchTime);
      return true;
    case kProcessCoordinationUnit_SetMainThreadTaskLoadIsLow_Name:
      var params = reader.decodeStruct(ProcessCoordinationUnit_SetMainThreadTaskLoadIsLow_Params);
      this.setMainThreadTaskLoadIsLow(params.mainThreadTaskLoadIsLow);
      return true;
    case kProcessCoordinationUnit_SetPID_Name:
      var params = reader.decodeStruct(ProcessCoordinationUnit_SetPID_Params);
      this.setPID(params.pid);
      return true;
    default:
      return false;
    }
  };

  ProcessCoordinationUnitStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kProcessCoordinationUnit_GetID_Name:
      var params = reader.decodeStruct(ProcessCoordinationUnit_GetID_Params);
      this.getID().then(function(response) {
        var responseParams =
            new ProcessCoordinationUnit_GetID_ResponseParams();
        responseParams.id = response.id;
        var builder = new codec.MessageV1Builder(
            kProcessCoordinationUnit_GetID_Name,
            codec.align(ProcessCoordinationUnit_GetID_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(ProcessCoordinationUnit_GetID_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    default:
      return false;
    }
  };

  function validateProcessCoordinationUnitRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kProcessCoordinationUnit_GetID_Name:
        if (message.expectsResponse())
          paramsClass = ProcessCoordinationUnit_GetID_Params;
      break;
      case kProcessCoordinationUnit_AddBinding_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = ProcessCoordinationUnit_AddBinding_Params;
      break;
      case kProcessCoordinationUnit_AddFrame_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = ProcessCoordinationUnit_AddFrame_Params;
      break;
      case kProcessCoordinationUnit_RemoveFrame_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = ProcessCoordinationUnit_RemoveFrame_Params;
      break;
      case kProcessCoordinationUnit_SetCPUUsage_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = ProcessCoordinationUnit_SetCPUUsage_Params;
      break;
      case kProcessCoordinationUnit_SetExpectedTaskQueueingDuration_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = ProcessCoordinationUnit_SetExpectedTaskQueueingDuration_Params;
      break;
      case kProcessCoordinationUnit_SetLaunchTime_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = ProcessCoordinationUnit_SetLaunchTime_Params;
      break;
      case kProcessCoordinationUnit_SetMainThreadTaskLoadIsLow_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = ProcessCoordinationUnit_SetMainThreadTaskLoadIsLow_Params;
      break;
      case kProcessCoordinationUnit_SetPID_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = ProcessCoordinationUnit_SetPID_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateProcessCoordinationUnitResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kProcessCoordinationUnit_GetID_Name:
        if (message.isResponse())
          paramsClass = ProcessCoordinationUnit_GetID_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var ProcessCoordinationUnit = {
    name: 'resource_coordinator.mojom.ProcessCoordinationUnit',
    kVersion: 0,
    ptrClass: ProcessCoordinationUnitPtr,
    proxyClass: ProcessCoordinationUnitProxy,
    stubClass: ProcessCoordinationUnitStub,
    validateRequest: validateProcessCoordinationUnitRequest,
    validateResponse: validateProcessCoordinationUnitResponse,
    mojomId: 'services/resource_coordinator/public/mojom/coordination_unit.mojom',
    fuzzMethods: {
      getID: {
        params: ProcessCoordinationUnit_GetID_Params,
      },
      addBinding: {
        params: ProcessCoordinationUnit_AddBinding_Params,
      },
      addFrame: {
        params: ProcessCoordinationUnit_AddFrame_Params,
      },
      removeFrame: {
        params: ProcessCoordinationUnit_RemoveFrame_Params,
      },
      setCPUUsage: {
        params: ProcessCoordinationUnit_SetCPUUsage_Params,
      },
      setExpectedTaskQueueingDuration: {
        params: ProcessCoordinationUnit_SetExpectedTaskQueueingDuration_Params,
      },
      setLaunchTime: {
        params: ProcessCoordinationUnit_SetLaunchTime_Params,
      },
      setMainThreadTaskLoadIsLow: {
        params: ProcessCoordinationUnit_SetMainThreadTaskLoadIsLow_Params,
      },
      setPID: {
        params: ProcessCoordinationUnit_SetPID_Params,
      },
    },
  };
  ProcessCoordinationUnitStub.prototype.validator = validateProcessCoordinationUnitRequest;
  ProcessCoordinationUnitProxy.prototype.validator = validateProcessCoordinationUnitResponse;
  var kSystemCoordinationUnit_GetID_Name = 2006247798;
  var kSystemCoordinationUnit_AddBinding_Name = 1725516096;
  var kSystemCoordinationUnit_OnProcessCPUUsageReady_Name = 1503374405;
  var kSystemCoordinationUnit_DistributeMeasurementBatch_Name = 567044770;

  function SystemCoordinationUnitPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(SystemCoordinationUnit,
                                                   handleOrPtrInfo);
  }

  function SystemCoordinationUnitAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        SystemCoordinationUnit, associatedInterfacePtrInfo);
  }

  SystemCoordinationUnitAssociatedPtr.prototype =
      Object.create(SystemCoordinationUnitPtr.prototype);
  SystemCoordinationUnitAssociatedPtr.prototype.constructor =
      SystemCoordinationUnitAssociatedPtr;

  function SystemCoordinationUnitProxy(receiver) {
    this.receiver_ = receiver;
  }
  SystemCoordinationUnitPtr.prototype.getID = function() {
    return SystemCoordinationUnitProxy.prototype.getID
        .apply(this.ptr.getProxy(), arguments);
  };

  SystemCoordinationUnitProxy.prototype.getID = function() {
    var params_ = new SystemCoordinationUnit_GetID_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kSystemCoordinationUnit_GetID_Name,
          codec.align(SystemCoordinationUnit_GetID_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(SystemCoordinationUnit_GetID_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(SystemCoordinationUnit_GetID_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  SystemCoordinationUnitPtr.prototype.addBinding = function() {
    return SystemCoordinationUnitProxy.prototype.addBinding
        .apply(this.ptr.getProxy(), arguments);
  };

  SystemCoordinationUnitProxy.prototype.addBinding = function(request) {
    var params_ = new SystemCoordinationUnit_AddBinding_Params();
    params_.request = request;
    var builder = new codec.MessageV0Builder(
        kSystemCoordinationUnit_AddBinding_Name,
        codec.align(SystemCoordinationUnit_AddBinding_Params.encodedSize));
    builder.encodeStruct(SystemCoordinationUnit_AddBinding_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  SystemCoordinationUnitPtr.prototype.onProcessCPUUsageReady = function() {
    return SystemCoordinationUnitProxy.prototype.onProcessCPUUsageReady
        .apply(this.ptr.getProxy(), arguments);
  };

  SystemCoordinationUnitProxy.prototype.onProcessCPUUsageReady = function() {
    var params_ = new SystemCoordinationUnit_OnProcessCPUUsageReady_Params();
    var builder = new codec.MessageV0Builder(
        kSystemCoordinationUnit_OnProcessCPUUsageReady_Name,
        codec.align(SystemCoordinationUnit_OnProcessCPUUsageReady_Params.encodedSize));
    builder.encodeStruct(SystemCoordinationUnit_OnProcessCPUUsageReady_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  SystemCoordinationUnitPtr.prototype.distributeMeasurementBatch = function() {
    return SystemCoordinationUnitProxy.prototype.distributeMeasurementBatch
        .apply(this.ptr.getProxy(), arguments);
  };

  SystemCoordinationUnitProxy.prototype.distributeMeasurementBatch = function(measurementBatch) {
    var params_ = new SystemCoordinationUnit_DistributeMeasurementBatch_Params();
    params_.measurementBatch = measurementBatch;
    var builder = new codec.MessageV0Builder(
        kSystemCoordinationUnit_DistributeMeasurementBatch_Name,
        codec.align(SystemCoordinationUnit_DistributeMeasurementBatch_Params.encodedSize));
    builder.encodeStruct(SystemCoordinationUnit_DistributeMeasurementBatch_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function SystemCoordinationUnitStub(delegate) {
    this.delegate_ = delegate;
  }
  SystemCoordinationUnitStub.prototype.getID = function() {
    return this.delegate_ && this.delegate_.getID && this.delegate_.getID();
  }
  SystemCoordinationUnitStub.prototype.addBinding = function(request) {
    return this.delegate_ && this.delegate_.addBinding && this.delegate_.addBinding(request);
  }
  SystemCoordinationUnitStub.prototype.onProcessCPUUsageReady = function() {
    return this.delegate_ && this.delegate_.onProcessCPUUsageReady && this.delegate_.onProcessCPUUsageReady();
  }
  SystemCoordinationUnitStub.prototype.distributeMeasurementBatch = function(measurementBatch) {
    return this.delegate_ && this.delegate_.distributeMeasurementBatch && this.delegate_.distributeMeasurementBatch(measurementBatch);
  }

  SystemCoordinationUnitStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kSystemCoordinationUnit_AddBinding_Name:
      var params = reader.decodeStruct(SystemCoordinationUnit_AddBinding_Params);
      this.addBinding(params.request);
      return true;
    case kSystemCoordinationUnit_OnProcessCPUUsageReady_Name:
      var params = reader.decodeStruct(SystemCoordinationUnit_OnProcessCPUUsageReady_Params);
      this.onProcessCPUUsageReady();
      return true;
    case kSystemCoordinationUnit_DistributeMeasurementBatch_Name:
      var params = reader.decodeStruct(SystemCoordinationUnit_DistributeMeasurementBatch_Params);
      this.distributeMeasurementBatch(params.measurementBatch);
      return true;
    default:
      return false;
    }
  };

  SystemCoordinationUnitStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kSystemCoordinationUnit_GetID_Name:
      var params = reader.decodeStruct(SystemCoordinationUnit_GetID_Params);
      this.getID().then(function(response) {
        var responseParams =
            new SystemCoordinationUnit_GetID_ResponseParams();
        responseParams.id = response.id;
        var builder = new codec.MessageV1Builder(
            kSystemCoordinationUnit_GetID_Name,
            codec.align(SystemCoordinationUnit_GetID_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(SystemCoordinationUnit_GetID_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    default:
      return false;
    }
  };

  function validateSystemCoordinationUnitRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kSystemCoordinationUnit_GetID_Name:
        if (message.expectsResponse())
          paramsClass = SystemCoordinationUnit_GetID_Params;
      break;
      case kSystemCoordinationUnit_AddBinding_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = SystemCoordinationUnit_AddBinding_Params;
      break;
      case kSystemCoordinationUnit_OnProcessCPUUsageReady_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = SystemCoordinationUnit_OnProcessCPUUsageReady_Params;
      break;
      case kSystemCoordinationUnit_DistributeMeasurementBatch_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = SystemCoordinationUnit_DistributeMeasurementBatch_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateSystemCoordinationUnitResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kSystemCoordinationUnit_GetID_Name:
        if (message.isResponse())
          paramsClass = SystemCoordinationUnit_GetID_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var SystemCoordinationUnit = {
    name: 'resource_coordinator.mojom.SystemCoordinationUnit',
    kVersion: 0,
    ptrClass: SystemCoordinationUnitPtr,
    proxyClass: SystemCoordinationUnitProxy,
    stubClass: SystemCoordinationUnitStub,
    validateRequest: validateSystemCoordinationUnitRequest,
    validateResponse: validateSystemCoordinationUnitResponse,
    mojomId: 'services/resource_coordinator/public/mojom/coordination_unit.mojom',
    fuzzMethods: {
      getID: {
        params: SystemCoordinationUnit_GetID_Params,
      },
      addBinding: {
        params: SystemCoordinationUnit_AddBinding_Params,
      },
      onProcessCPUUsageReady: {
        params: SystemCoordinationUnit_OnProcessCPUUsageReady_Params,
      },
      distributeMeasurementBatch: {
        params: SystemCoordinationUnit_DistributeMeasurementBatch_Params,
      },
    },
  };
  SystemCoordinationUnitStub.prototype.validator = validateSystemCoordinationUnitRequest;
  SystemCoordinationUnitProxy.prototype.validator = validateSystemCoordinationUnitResponse;
  exports.CoordinationUnitType = CoordinationUnitType;
  exports.CoordinationUnitID = CoordinationUnitID;
  exports.ProcessResourceMeasurement = ProcessResourceMeasurement;
  exports.ProcessResourceMeasurementBatch = ProcessResourceMeasurementBatch;
  exports.FrameCoordinationUnit = FrameCoordinationUnit;
  exports.FrameCoordinationUnitPtr = FrameCoordinationUnitPtr;
  exports.FrameCoordinationUnitAssociatedPtr = FrameCoordinationUnitAssociatedPtr;
  exports.PageCoordinationUnit = PageCoordinationUnit;
  exports.PageCoordinationUnitPtr = PageCoordinationUnitPtr;
  exports.PageCoordinationUnitAssociatedPtr = PageCoordinationUnitAssociatedPtr;
  exports.ProcessCoordinationUnit = ProcessCoordinationUnit;
  exports.ProcessCoordinationUnitPtr = ProcessCoordinationUnitPtr;
  exports.ProcessCoordinationUnitAssociatedPtr = ProcessCoordinationUnitAssociatedPtr;
  exports.SystemCoordinationUnit = SystemCoordinationUnit;
  exports.SystemCoordinationUnitPtr = SystemCoordinationUnitPtr;
  exports.SystemCoordinationUnitAssociatedPtr = SystemCoordinationUnitAssociatedPtr;
})();