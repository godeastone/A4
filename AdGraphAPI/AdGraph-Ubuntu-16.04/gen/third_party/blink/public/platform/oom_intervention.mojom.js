// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'third_party/blink/public/platform/oom_intervention.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('blink.mojom');
  var shared_memory$ =
      mojo.internal.exposeNamespace('mojoBase.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'mojo/public/mojom/base/shared_memory.mojom', '../../../../mojo/public/mojom/base/shared_memory.mojom.js');
  }



  function OomInterventionHost_OnHighMemoryUsage_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  OomInterventionHost_OnHighMemoryUsage_Params.prototype.initDefaults_ = function() {
    this.interventionTriggered = false;
  };
  OomInterventionHost_OnHighMemoryUsage_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  OomInterventionHost_OnHighMemoryUsage_Params.generate = function(generator_) {
    var generated = new OomInterventionHost_OnHighMemoryUsage_Params;
    generated.interventionTriggered = generator_.generateBool();
    return generated;
  };

  OomInterventionHost_OnHighMemoryUsage_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.interventionTriggered = mutator_.mutateBool(this.interventionTriggered);
    }
    return this;
  };
  OomInterventionHost_OnHighMemoryUsage_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  OomInterventionHost_OnHighMemoryUsage_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  OomInterventionHost_OnHighMemoryUsage_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  OomInterventionHost_OnHighMemoryUsage_Params.validate = function(messageValidator, offset) {
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

  OomInterventionHost_OnHighMemoryUsage_Params.encodedSize = codec.kStructHeaderSize + 8;

  OomInterventionHost_OnHighMemoryUsage_Params.decode = function(decoder) {
    var packed;
    var val = new OomInterventionHost_OnHighMemoryUsage_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.interventionTriggered = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  OomInterventionHost_OnHighMemoryUsage_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(OomInterventionHost_OnHighMemoryUsage_Params.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.interventionTriggered & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function OomIntervention_StartDetection_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  OomIntervention_StartDetection_Params.prototype.initDefaults_ = function() {
    this.host = new OomInterventionHostPtr();
    this.sharedMetricsBuffer = null;
    this.memoryWorkloadThreshold = 0;
    this.triggerIntervention = false;
  };
  OomIntervention_StartDetection_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  OomIntervention_StartDetection_Params.generate = function(generator_) {
    var generated = new OomIntervention_StartDetection_Params;
    generated.host = generator_.generateInterface("blink.mojom.OomInterventionHost", false);
    generated.sharedMetricsBuffer = generator_.generateStruct(mojoBase.mojom.UnsafeSharedMemoryRegion, false);
    generated.memoryWorkloadThreshold = generator_.generateUint64();
    generated.triggerIntervention = generator_.generateBool();
    return generated;
  };

  OomIntervention_StartDetection_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.host = mutator_.mutateInterface(this.host, "blink.mojom.OomInterventionHost", false);
    }
    if (mutator_.chooseMutateField()) {
      this.sharedMetricsBuffer = mutator_.mutateStruct(mojoBase.mojom.UnsafeSharedMemoryRegion, false);
    }
    if (mutator_.chooseMutateField()) {
      this.memoryWorkloadThreshold = mutator_.mutateUint64(this.memoryWorkloadThreshold);
    }
    if (mutator_.chooseMutateField()) {
      this.triggerIntervention = mutator_.mutateBool(this.triggerIntervention);
    }
    return this;
  };
  OomIntervention_StartDetection_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.host !== null) {
      Array.prototype.push.apply(handles, ["blink.mojom.OomInterventionHostPtr"]);
    }
    if (this.sharedMetricsBuffer !== null) {
      Array.prototype.push.apply(handles, this.sharedMetricsBuffer.getHandleDeps());
    }
    return handles;
  };

  OomIntervention_StartDetection_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  OomIntervention_StartDetection_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.host = handles[idx++];;
    idx = this.sharedMetricsBuffer.setHandlesInternal_(handles, idx);
    return idx;
  };

  OomIntervention_StartDetection_Params.validate = function(messageValidator, offset) {
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


    // validate OomIntervention_StartDetection_Params.host
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 0, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate OomIntervention_StartDetection_Params.sharedMetricsBuffer
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, shared_memory$.UnsafeSharedMemoryRegion, false);
    if (err !== validator.validationError.NONE)
        return err;



    return validator.validationError.NONE;
  };

  OomIntervention_StartDetection_Params.encodedSize = codec.kStructHeaderSize + 32;

  OomIntervention_StartDetection_Params.decode = function(decoder) {
    var packed;
    var val = new OomIntervention_StartDetection_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.host = decoder.decodeStruct(new codec.Interface(OomInterventionHostPtr));
    val.sharedMetricsBuffer = decoder.decodeStructPointer(shared_memory$.UnsafeSharedMemoryRegion);
    val.memoryWorkloadThreshold = decoder.decodeStruct(codec.Uint64);
    packed = decoder.readUint8();
    val.triggerIntervention = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  OomIntervention_StartDetection_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(OomIntervention_StartDetection_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(new codec.Interface(OomInterventionHostPtr), val.host);
    encoder.encodeStructPointer(shared_memory$.UnsafeSharedMemoryRegion, val.sharedMetricsBuffer);
    encoder.encodeStruct(codec.Uint64, val.memoryWorkloadThreshold);
    packed = 0;
    packed |= (val.triggerIntervention & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  var kOomInterventionHost_OnHighMemoryUsage_Name = 804447640;

  function OomInterventionHostPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(OomInterventionHost,
                                                   handleOrPtrInfo);
  }

  function OomInterventionHostAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        OomInterventionHost, associatedInterfacePtrInfo);
  }

  OomInterventionHostAssociatedPtr.prototype =
      Object.create(OomInterventionHostPtr.prototype);
  OomInterventionHostAssociatedPtr.prototype.constructor =
      OomInterventionHostAssociatedPtr;

  function OomInterventionHostProxy(receiver) {
    this.receiver_ = receiver;
  }
  OomInterventionHostPtr.prototype.onHighMemoryUsage = function() {
    return OomInterventionHostProxy.prototype.onHighMemoryUsage
        .apply(this.ptr.getProxy(), arguments);
  };

  OomInterventionHostProxy.prototype.onHighMemoryUsage = function(interventionTriggered) {
    var params_ = new OomInterventionHost_OnHighMemoryUsage_Params();
    params_.interventionTriggered = interventionTriggered;
    var builder = new codec.MessageV0Builder(
        kOomInterventionHost_OnHighMemoryUsage_Name,
        codec.align(OomInterventionHost_OnHighMemoryUsage_Params.encodedSize));
    builder.encodeStruct(OomInterventionHost_OnHighMemoryUsage_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function OomInterventionHostStub(delegate) {
    this.delegate_ = delegate;
  }
  OomInterventionHostStub.prototype.onHighMemoryUsage = function(interventionTriggered) {
    return this.delegate_ && this.delegate_.onHighMemoryUsage && this.delegate_.onHighMemoryUsage(interventionTriggered);
  }

  OomInterventionHostStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kOomInterventionHost_OnHighMemoryUsage_Name:
      var params = reader.decodeStruct(OomInterventionHost_OnHighMemoryUsage_Params);
      this.onHighMemoryUsage(params.interventionTriggered);
      return true;
    default:
      return false;
    }
  };

  OomInterventionHostStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateOomInterventionHostRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kOomInterventionHost_OnHighMemoryUsage_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = OomInterventionHost_OnHighMemoryUsage_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateOomInterventionHostResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var OomInterventionHost = {
    name: 'blink.mojom.OomInterventionHost',
    kVersion: 0,
    ptrClass: OomInterventionHostPtr,
    proxyClass: OomInterventionHostProxy,
    stubClass: OomInterventionHostStub,
    validateRequest: validateOomInterventionHostRequest,
    validateResponse: null,
    mojomId: 'third_party/blink/public/platform/oom_intervention.mojom',
    fuzzMethods: {
      onHighMemoryUsage: {
        params: OomInterventionHost_OnHighMemoryUsage_Params,
      },
    },
  };
  OomInterventionHostStub.prototype.validator = validateOomInterventionHostRequest;
  OomInterventionHostProxy.prototype.validator = null;
  var kOomIntervention_StartDetection_Name = 1734349864;

  function OomInterventionPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(OomIntervention,
                                                   handleOrPtrInfo);
  }

  function OomInterventionAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        OomIntervention, associatedInterfacePtrInfo);
  }

  OomInterventionAssociatedPtr.prototype =
      Object.create(OomInterventionPtr.prototype);
  OomInterventionAssociatedPtr.prototype.constructor =
      OomInterventionAssociatedPtr;

  function OomInterventionProxy(receiver) {
    this.receiver_ = receiver;
  }
  OomInterventionPtr.prototype.startDetection = function() {
    return OomInterventionProxy.prototype.startDetection
        .apply(this.ptr.getProxy(), arguments);
  };

  OomInterventionProxy.prototype.startDetection = function(host, sharedMetricsBuffer, memoryWorkloadThreshold, triggerIntervention) {
    var params_ = new OomIntervention_StartDetection_Params();
    params_.host = host;
    params_.sharedMetricsBuffer = sharedMetricsBuffer;
    params_.memoryWorkloadThreshold = memoryWorkloadThreshold;
    params_.triggerIntervention = triggerIntervention;
    var builder = new codec.MessageV0Builder(
        kOomIntervention_StartDetection_Name,
        codec.align(OomIntervention_StartDetection_Params.encodedSize));
    builder.encodeStruct(OomIntervention_StartDetection_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function OomInterventionStub(delegate) {
    this.delegate_ = delegate;
  }
  OomInterventionStub.prototype.startDetection = function(host, sharedMetricsBuffer, memoryWorkloadThreshold, triggerIntervention) {
    return this.delegate_ && this.delegate_.startDetection && this.delegate_.startDetection(host, sharedMetricsBuffer, memoryWorkloadThreshold, triggerIntervention);
  }

  OomInterventionStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kOomIntervention_StartDetection_Name:
      var params = reader.decodeStruct(OomIntervention_StartDetection_Params);
      this.startDetection(params.host, params.sharedMetricsBuffer, params.memoryWorkloadThreshold, params.triggerIntervention);
      return true;
    default:
      return false;
    }
  };

  OomInterventionStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateOomInterventionRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kOomIntervention_StartDetection_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = OomIntervention_StartDetection_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateOomInterventionResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var OomIntervention = {
    name: 'blink.mojom.OomIntervention',
    kVersion: 0,
    ptrClass: OomInterventionPtr,
    proxyClass: OomInterventionProxy,
    stubClass: OomInterventionStub,
    validateRequest: validateOomInterventionRequest,
    validateResponse: null,
    mojomId: 'third_party/blink/public/platform/oom_intervention.mojom',
    fuzzMethods: {
      startDetection: {
        params: OomIntervention_StartDetection_Params,
      },
    },
  };
  OomInterventionStub.prototype.validator = validateOomInterventionRequest;
  OomInterventionProxy.prototype.validator = null;
  exports.OomInterventionHost = OomInterventionHost;
  exports.OomInterventionHostPtr = OomInterventionHostPtr;
  exports.OomInterventionHostAssociatedPtr = OomInterventionHostAssociatedPtr;
  exports.OomIntervention = OomIntervention;
  exports.OomInterventionPtr = OomInterventionPtr;
  exports.OomInterventionAssociatedPtr = OomInterventionAssociatedPtr;
})();