// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'services/resource_coordinator/public/mojom/coordination_unit_introspector.mojom';
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
  var coordination_unit$ =
      mojo.internal.exposeNamespace('resourceCoordinator.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'services/resource_coordinator/public/mojom/coordination_unit.mojom', 'coordination_unit.mojom.js');
  }
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



  function PageInfo(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PageInfo.prototype.initDefaults_ = function() {
    this.ukmSourceId = 0;
    this.isVisible = false;
    this.timeSinceLastNavigation = null;
    this.timeSinceLastVisibilityChange = null;
  };
  PageInfo.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PageInfo.generate = function(generator_) {
    var generated = new PageInfo;
    generated.ukmSourceId = generator_.generateInt64();
    generated.isVisible = generator_.generateBool();
    generated.timeSinceLastNavigation = generator_.generateStruct(mojoBase.mojom.TimeDelta, false);
    generated.timeSinceLastVisibilityChange = generator_.generateStruct(mojoBase.mojom.TimeDelta, false);
    return generated;
  };

  PageInfo.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.ukmSourceId = mutator_.mutateInt64(this.ukmSourceId);
    }
    if (mutator_.chooseMutateField()) {
      this.isVisible = mutator_.mutateBool(this.isVisible);
    }
    if (mutator_.chooseMutateField()) {
      this.timeSinceLastNavigation = mutator_.mutateStruct(mojoBase.mojom.TimeDelta, false);
    }
    if (mutator_.chooseMutateField()) {
      this.timeSinceLastVisibilityChange = mutator_.mutateStruct(mojoBase.mojom.TimeDelta, false);
    }
    return this;
  };
  PageInfo.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PageInfo.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PageInfo.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PageInfo.validate = function(messageValidator, offset) {
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




    // validate PageInfo.timeSinceLastNavigation
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, time$.TimeDelta, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate PageInfo.timeSinceLastVisibilityChange
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 24, time$.TimeDelta, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PageInfo.encodedSize = codec.kStructHeaderSize + 32;

  PageInfo.decode = function(decoder) {
    var packed;
    var val = new PageInfo();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.ukmSourceId = decoder.decodeStruct(codec.Int64);
    packed = decoder.readUint8();
    val.isVisible = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.timeSinceLastNavigation = decoder.decodeStructPointer(time$.TimeDelta);
    val.timeSinceLastVisibilityChange = decoder.decodeStructPointer(time$.TimeDelta);
    return val;
  };

  PageInfo.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PageInfo.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int64, val.ukmSourceId);
    packed = 0;
    packed |= (val.isVisible & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(time$.TimeDelta, val.timeSinceLastNavigation);
    encoder.encodeStructPointer(time$.TimeDelta, val.timeSinceLastVisibilityChange);
  };
  function ProcessInfo(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ProcessInfo.prototype.initDefaults_ = function() {
    this.pid = null;
    this.pageInfos = null;
    this.launchTime = null;
  };
  ProcessInfo.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ProcessInfo.generate = function(generator_) {
    var generated = new ProcessInfo;
    generated.pid = generator_.generateStruct(mojoBase.mojom.ProcessId, false);
    generated.pageInfos = generator_.generateArray(function() {
      return generator_.generateStruct(resourceCoordinator.mojom.PageInfo, false);
    });
    generated.launchTime = generator_.generateStruct(mojoBase.mojom.Time, true);
    return generated;
  };

  ProcessInfo.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.pid = mutator_.mutateStruct(mojoBase.mojom.ProcessId, false);
    }
    if (mutator_.chooseMutateField()) {
      this.pageInfos = mutator_.mutateArray(this.pageInfos, function(val) {
        return mutator_.mutateStruct(resourceCoordinator.mojom.PageInfo, false);
      });
    }
    if (mutator_.chooseMutateField()) {
      this.launchTime = mutator_.mutateStruct(mojoBase.mojom.Time, true);
    }
    return this;
  };
  ProcessInfo.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ProcessInfo.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ProcessInfo.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ProcessInfo.validate = function(messageValidator, offset) {
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


    // validate ProcessInfo.pid
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, process_id$.ProcessId, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate ProcessInfo.pageInfos
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 8, new codec.PointerTo(PageInfo), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;


    // validate ProcessInfo.launchTime
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, time$.Time, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ProcessInfo.encodedSize = codec.kStructHeaderSize + 24;

  ProcessInfo.decode = function(decoder) {
    var packed;
    var val = new ProcessInfo();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.pid = decoder.decodeStructPointer(process_id$.ProcessId);
    val.pageInfos = decoder.decodeArrayPointer(new codec.PointerTo(PageInfo));
    val.launchTime = decoder.decodeStructPointer(time$.Time);
    return val;
  };

  ProcessInfo.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ProcessInfo.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(process_id$.ProcessId, val.pid);
    encoder.encodeArrayPointer(new codec.PointerTo(PageInfo), val.pageInfos);
    encoder.encodeStructPointer(time$.Time, val.launchTime);
  };
  function CoordinationUnitIntrospector_GetProcessToURLMap_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  CoordinationUnitIntrospector_GetProcessToURLMap_Params.prototype.initDefaults_ = function() {
  };
  CoordinationUnitIntrospector_GetProcessToURLMap_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  CoordinationUnitIntrospector_GetProcessToURLMap_Params.generate = function(generator_) {
    var generated = new CoordinationUnitIntrospector_GetProcessToURLMap_Params;
    return generated;
  };

  CoordinationUnitIntrospector_GetProcessToURLMap_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  CoordinationUnitIntrospector_GetProcessToURLMap_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  CoordinationUnitIntrospector_GetProcessToURLMap_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  CoordinationUnitIntrospector_GetProcessToURLMap_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  CoordinationUnitIntrospector_GetProcessToURLMap_Params.validate = function(messageValidator, offset) {
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

  CoordinationUnitIntrospector_GetProcessToURLMap_Params.encodedSize = codec.kStructHeaderSize + 0;

  CoordinationUnitIntrospector_GetProcessToURLMap_Params.decode = function(decoder) {
    var packed;
    var val = new CoordinationUnitIntrospector_GetProcessToURLMap_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  CoordinationUnitIntrospector_GetProcessToURLMap_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(CoordinationUnitIntrospector_GetProcessToURLMap_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function CoordinationUnitIntrospector_GetProcessToURLMap_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  CoordinationUnitIntrospector_GetProcessToURLMap_ResponseParams.prototype.initDefaults_ = function() {
    this.processInfos = null;
  };
  CoordinationUnitIntrospector_GetProcessToURLMap_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  CoordinationUnitIntrospector_GetProcessToURLMap_ResponseParams.generate = function(generator_) {
    var generated = new CoordinationUnitIntrospector_GetProcessToURLMap_ResponseParams;
    generated.processInfos = generator_.generateArray(function() {
      return generator_.generateStruct(resourceCoordinator.mojom.ProcessInfo, false);
    });
    return generated;
  };

  CoordinationUnitIntrospector_GetProcessToURLMap_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.processInfos = mutator_.mutateArray(this.processInfos, function(val) {
        return mutator_.mutateStruct(resourceCoordinator.mojom.ProcessInfo, false);
      });
    }
    return this;
  };
  CoordinationUnitIntrospector_GetProcessToURLMap_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  CoordinationUnitIntrospector_GetProcessToURLMap_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  CoordinationUnitIntrospector_GetProcessToURLMap_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  CoordinationUnitIntrospector_GetProcessToURLMap_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate CoordinationUnitIntrospector_GetProcessToURLMap_ResponseParams.processInfos
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 8, new codec.PointerTo(ProcessInfo), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  CoordinationUnitIntrospector_GetProcessToURLMap_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  CoordinationUnitIntrospector_GetProcessToURLMap_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new CoordinationUnitIntrospector_GetProcessToURLMap_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.processInfos = decoder.decodeArrayPointer(new codec.PointerTo(ProcessInfo));
    return val;
  };

  CoordinationUnitIntrospector_GetProcessToURLMap_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(CoordinationUnitIntrospector_GetProcessToURLMap_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(new codec.PointerTo(ProcessInfo), val.processInfos);
  };
  var kCoordinationUnitIntrospector_GetProcessToURLMap_Name = 164106346;

  function CoordinationUnitIntrospectorPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(CoordinationUnitIntrospector,
                                                   handleOrPtrInfo);
  }

  function CoordinationUnitIntrospectorAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        CoordinationUnitIntrospector, associatedInterfacePtrInfo);
  }

  CoordinationUnitIntrospectorAssociatedPtr.prototype =
      Object.create(CoordinationUnitIntrospectorPtr.prototype);
  CoordinationUnitIntrospectorAssociatedPtr.prototype.constructor =
      CoordinationUnitIntrospectorAssociatedPtr;

  function CoordinationUnitIntrospectorProxy(receiver) {
    this.receiver_ = receiver;
  }
  CoordinationUnitIntrospectorPtr.prototype.getProcessToURLMap = function() {
    return CoordinationUnitIntrospectorProxy.prototype.getProcessToURLMap
        .apply(this.ptr.getProxy(), arguments);
  };

  CoordinationUnitIntrospectorProxy.prototype.getProcessToURLMap = function() {
    var params_ = new CoordinationUnitIntrospector_GetProcessToURLMap_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kCoordinationUnitIntrospector_GetProcessToURLMap_Name,
          codec.align(CoordinationUnitIntrospector_GetProcessToURLMap_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(CoordinationUnitIntrospector_GetProcessToURLMap_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(CoordinationUnitIntrospector_GetProcessToURLMap_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };

  function CoordinationUnitIntrospectorStub(delegate) {
    this.delegate_ = delegate;
  }
  CoordinationUnitIntrospectorStub.prototype.getProcessToURLMap = function() {
    return this.delegate_ && this.delegate_.getProcessToURLMap && this.delegate_.getProcessToURLMap();
  }

  CoordinationUnitIntrospectorStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  CoordinationUnitIntrospectorStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kCoordinationUnitIntrospector_GetProcessToURLMap_Name:
      var params = reader.decodeStruct(CoordinationUnitIntrospector_GetProcessToURLMap_Params);
      this.getProcessToURLMap().then(function(response) {
        var responseParams =
            new CoordinationUnitIntrospector_GetProcessToURLMap_ResponseParams();
        responseParams.processInfos = response.processInfos;
        var builder = new codec.MessageV1Builder(
            kCoordinationUnitIntrospector_GetProcessToURLMap_Name,
            codec.align(CoordinationUnitIntrospector_GetProcessToURLMap_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(CoordinationUnitIntrospector_GetProcessToURLMap_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    default:
      return false;
    }
  };

  function validateCoordinationUnitIntrospectorRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kCoordinationUnitIntrospector_GetProcessToURLMap_Name:
        if (message.expectsResponse())
          paramsClass = CoordinationUnitIntrospector_GetProcessToURLMap_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateCoordinationUnitIntrospectorResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kCoordinationUnitIntrospector_GetProcessToURLMap_Name:
        if (message.isResponse())
          paramsClass = CoordinationUnitIntrospector_GetProcessToURLMap_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var CoordinationUnitIntrospector = {
    name: 'resource_coordinator.mojom.CoordinationUnitIntrospector',
    kVersion: 0,
    ptrClass: CoordinationUnitIntrospectorPtr,
    proxyClass: CoordinationUnitIntrospectorProxy,
    stubClass: CoordinationUnitIntrospectorStub,
    validateRequest: validateCoordinationUnitIntrospectorRequest,
    validateResponse: validateCoordinationUnitIntrospectorResponse,
    mojomId: 'services/resource_coordinator/public/mojom/coordination_unit_introspector.mojom',
    fuzzMethods: {
      getProcessToURLMap: {
        params: CoordinationUnitIntrospector_GetProcessToURLMap_Params,
      },
    },
  };
  CoordinationUnitIntrospectorStub.prototype.validator = validateCoordinationUnitIntrospectorRequest;
  CoordinationUnitIntrospectorProxy.prototype.validator = validateCoordinationUnitIntrospectorResponse;
  exports.PageInfo = PageInfo;
  exports.ProcessInfo = ProcessInfo;
  exports.CoordinationUnitIntrospector = CoordinationUnitIntrospector;
  exports.CoordinationUnitIntrospectorPtr = CoordinationUnitIntrospectorPtr;
  exports.CoordinationUnitIntrospectorAssociatedPtr = CoordinationUnitIntrospectorAssociatedPtr;
})();