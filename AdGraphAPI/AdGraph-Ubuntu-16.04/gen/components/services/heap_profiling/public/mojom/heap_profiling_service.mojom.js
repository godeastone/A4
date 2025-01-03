// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'components/services/heap_profiling/public/mojom/heap_profiling_service.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('heapProfiling.mojom');
  var heap_profiling_client$ =
      mojo.internal.exposeNamespace('heapProfiling.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'components/services/heap_profiling/public/mojom/heap_profiling_client.mojom', 'heap_profiling_client.mojom.js');
  }
  var process_id$ =
      mojo.internal.exposeNamespace('mojoBase.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'mojo/public/mojom/base/process_id.mojom', '../../../../../mojo/public/mojom/base/process_id.mojom.js');
  }


  var ProcessType = {};
  ProcessType.OTHER = 0;
  ProcessType.BROWSER = 1;
  ProcessType.RENDERER = 2;
  ProcessType.GPU = 3;
  ProcessType.LAST = ProcessType.GPU;

  ProcessType.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
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

  function ProfilingService_AddProfilingClient_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ProfilingService_AddProfilingClient_Params.prototype.initDefaults_ = function() {
    this.pid = null;
    this.client = new heap_profiling_client$.ProfilingClientPtr();
    this.memlogPipeReceiver = null;
    this.processType = 0;
    this.params = null;
  };
  ProfilingService_AddProfilingClient_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ProfilingService_AddProfilingClient_Params.generate = function(generator_) {
    var generated = new ProfilingService_AddProfilingClient_Params;
    generated.pid = generator_.generateStruct(mojoBase.mojom.ProcessId, false);
    generated.client = generator_.generateInterface("heapProfiling.mojom.ProfilingClient", false);
    generated.memlogPipeReceiver = generator_.generateHandle(false);
    generated.processType = generator_.generateEnum(0, 3);
    generated.params = generator_.generateStruct(heapProfiling.mojom.ProfilingParams, false);
    return generated;
  };

  ProfilingService_AddProfilingClient_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.pid = mutator_.mutateStruct(mojoBase.mojom.ProcessId, false);
    }
    if (mutator_.chooseMutateField()) {
      this.client = mutator_.mutateInterface(this.client, "heapProfiling.mojom.ProfilingClient", false);
    }
    if (mutator_.chooseMutateField()) {
      this.memlogPipeReceiver = mutator_.mutateHandle(this.memlogPipeReceiver, false);
    }
    if (mutator_.chooseMutateField()) {
      this.processType = mutator_.mutateEnum(this.processType, 0, 3);
    }
    if (mutator_.chooseMutateField()) {
      this.params = mutator_.mutateStruct(heapProfiling.mojom.ProfilingParams, false);
    }
    return this;
  };
  ProfilingService_AddProfilingClient_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.client !== null) {
      Array.prototype.push.apply(handles, ["heapProfiling.mojom.ProfilingClientPtr"]);
    }
    if (this.memlogPipeReceiver !== null) {
      Array.prototype.push.apply(handles, ["None"]);
    }
    if (this.params !== null) {
      Array.prototype.push.apply(handles, this.params.getHandleDeps());
    }
    return handles;
  };

  ProfilingService_AddProfilingClient_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ProfilingService_AddProfilingClient_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.client = handles[idx++];;
    this.memlogPipeReceiver = handles[idx++];;
    idx = this.params.setHandlesInternal_(handles, idx);
    return idx;
  };

  ProfilingService_AddProfilingClient_Params.validate = function(messageValidator, offset) {
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


    // validate ProfilingService_AddProfilingClient_Params.pid
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, process_id$.ProcessId, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate ProfilingService_AddProfilingClient_Params.client
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 8, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate ProfilingService_AddProfilingClient_Params.memlogPipeReceiver
    err = messageValidator.validateHandle(offset + codec.kStructHeaderSize + 16, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate ProfilingService_AddProfilingClient_Params.processType
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 20, ProcessType);
    if (err !== validator.validationError.NONE)
        return err;


    // validate ProfilingService_AddProfilingClient_Params.params
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 24, heap_profiling_client$.ProfilingParams, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ProfilingService_AddProfilingClient_Params.encodedSize = codec.kStructHeaderSize + 32;

  ProfilingService_AddProfilingClient_Params.decode = function(decoder) {
    var packed;
    var val = new ProfilingService_AddProfilingClient_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.pid = decoder.decodeStructPointer(process_id$.ProcessId);
    val.client = decoder.decodeStruct(new codec.Interface(heap_profiling_client$.ProfilingClientPtr));
    val.memlogPipeReceiver = decoder.decodeStruct(codec.Handle);
    val.processType = decoder.decodeStruct(codec.Int32);
    val.params = decoder.decodeStructPointer(heap_profiling_client$.ProfilingParams);
    return val;
  };

  ProfilingService_AddProfilingClient_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ProfilingService_AddProfilingClient_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(process_id$.ProcessId, val.pid);
    encoder.encodeStruct(new codec.Interface(heap_profiling_client$.ProfilingClientPtr), val.client);
    encoder.encodeStruct(codec.Handle, val.memlogPipeReceiver);
    encoder.encodeStruct(codec.Int32, val.processType);
    encoder.encodeStructPointer(heap_profiling_client$.ProfilingParams, val.params);
  };
  function ProfilingService_SetKeepSmallAllocations_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ProfilingService_SetKeepSmallAllocations_Params.prototype.initDefaults_ = function() {
    this.keepSmallAllocations = false;
  };
  ProfilingService_SetKeepSmallAllocations_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ProfilingService_SetKeepSmallAllocations_Params.generate = function(generator_) {
    var generated = new ProfilingService_SetKeepSmallAllocations_Params;
    generated.keepSmallAllocations = generator_.generateBool();
    return generated;
  };

  ProfilingService_SetKeepSmallAllocations_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.keepSmallAllocations = mutator_.mutateBool(this.keepSmallAllocations);
    }
    return this;
  };
  ProfilingService_SetKeepSmallAllocations_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ProfilingService_SetKeepSmallAllocations_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ProfilingService_SetKeepSmallAllocations_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ProfilingService_SetKeepSmallAllocations_Params.validate = function(messageValidator, offset) {
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

  ProfilingService_SetKeepSmallAllocations_Params.encodedSize = codec.kStructHeaderSize + 8;

  ProfilingService_SetKeepSmallAllocations_Params.decode = function(decoder) {
    var packed;
    var val = new ProfilingService_SetKeepSmallAllocations_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.keepSmallAllocations = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  ProfilingService_SetKeepSmallAllocations_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ProfilingService_SetKeepSmallAllocations_Params.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.keepSmallAllocations & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function ProfilingService_GetProfiledPids_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ProfilingService_GetProfiledPids_Params.prototype.initDefaults_ = function() {
  };
  ProfilingService_GetProfiledPids_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ProfilingService_GetProfiledPids_Params.generate = function(generator_) {
    var generated = new ProfilingService_GetProfiledPids_Params;
    return generated;
  };

  ProfilingService_GetProfiledPids_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  ProfilingService_GetProfiledPids_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ProfilingService_GetProfiledPids_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ProfilingService_GetProfiledPids_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ProfilingService_GetProfiledPids_Params.validate = function(messageValidator, offset) {
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

  ProfilingService_GetProfiledPids_Params.encodedSize = codec.kStructHeaderSize + 0;

  ProfilingService_GetProfiledPids_Params.decode = function(decoder) {
    var packed;
    var val = new ProfilingService_GetProfiledPids_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  ProfilingService_GetProfiledPids_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ProfilingService_GetProfiledPids_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function ProfilingService_GetProfiledPids_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ProfilingService_GetProfiledPids_ResponseParams.prototype.initDefaults_ = function() {
    this.pids = null;
  };
  ProfilingService_GetProfiledPids_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ProfilingService_GetProfiledPids_ResponseParams.generate = function(generator_) {
    var generated = new ProfilingService_GetProfiledPids_ResponseParams;
    generated.pids = generator_.generateArray(function() {
      return generator_.generateStruct(mojoBase.mojom.ProcessId, false);
    });
    return generated;
  };

  ProfilingService_GetProfiledPids_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.pids = mutator_.mutateArray(this.pids, function(val) {
        return mutator_.mutateStruct(mojoBase.mojom.ProcessId, false);
      });
    }
    return this;
  };
  ProfilingService_GetProfiledPids_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ProfilingService_GetProfiledPids_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ProfilingService_GetProfiledPids_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ProfilingService_GetProfiledPids_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate ProfilingService_GetProfiledPids_ResponseParams.pids
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 8, new codec.PointerTo(process_id$.ProcessId), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ProfilingService_GetProfiledPids_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  ProfilingService_GetProfiledPids_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new ProfilingService_GetProfiledPids_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.pids = decoder.decodeArrayPointer(new codec.PointerTo(process_id$.ProcessId));
    return val;
  };

  ProfilingService_GetProfiledPids_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ProfilingService_GetProfiledPids_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(new codec.PointerTo(process_id$.ProcessId), val.pids);
  };
  var kProfilingService_AddProfilingClient_Name = 2072943956;
  var kProfilingService_SetKeepSmallAllocations_Name = 163775354;
  var kProfilingService_GetProfiledPids_Name = 2048561738;

  function ProfilingServicePtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(ProfilingService,
                                                   handleOrPtrInfo);
  }

  function ProfilingServiceAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        ProfilingService, associatedInterfacePtrInfo);
  }

  ProfilingServiceAssociatedPtr.prototype =
      Object.create(ProfilingServicePtr.prototype);
  ProfilingServiceAssociatedPtr.prototype.constructor =
      ProfilingServiceAssociatedPtr;

  function ProfilingServiceProxy(receiver) {
    this.receiver_ = receiver;
  }
  ProfilingServicePtr.prototype.addProfilingClient = function() {
    return ProfilingServiceProxy.prototype.addProfilingClient
        .apply(this.ptr.getProxy(), arguments);
  };

  ProfilingServiceProxy.prototype.addProfilingClient = function(pid, client, memlogPipeReceiver, processType, params) {
    var params_ = new ProfilingService_AddProfilingClient_Params();
    params_.pid = pid;
    params_.client = client;
    params_.memlogPipeReceiver = memlogPipeReceiver;
    params_.processType = processType;
    params_.params = params;
    var builder = new codec.MessageV0Builder(
        kProfilingService_AddProfilingClient_Name,
        codec.align(ProfilingService_AddProfilingClient_Params.encodedSize));
    builder.encodeStruct(ProfilingService_AddProfilingClient_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  ProfilingServicePtr.prototype.setKeepSmallAllocations = function() {
    return ProfilingServiceProxy.prototype.setKeepSmallAllocations
        .apply(this.ptr.getProxy(), arguments);
  };

  ProfilingServiceProxy.prototype.setKeepSmallAllocations = function(keepSmallAllocations) {
    var params_ = new ProfilingService_SetKeepSmallAllocations_Params();
    params_.keepSmallAllocations = keepSmallAllocations;
    var builder = new codec.MessageV0Builder(
        kProfilingService_SetKeepSmallAllocations_Name,
        codec.align(ProfilingService_SetKeepSmallAllocations_Params.encodedSize));
    builder.encodeStruct(ProfilingService_SetKeepSmallAllocations_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  ProfilingServicePtr.prototype.getProfiledPids = function() {
    return ProfilingServiceProxy.prototype.getProfiledPids
        .apply(this.ptr.getProxy(), arguments);
  };

  ProfilingServiceProxy.prototype.getProfiledPids = function() {
    var params_ = new ProfilingService_GetProfiledPids_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kProfilingService_GetProfiledPids_Name,
          codec.align(ProfilingService_GetProfiledPids_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(ProfilingService_GetProfiledPids_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(ProfilingService_GetProfiledPids_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };

  function ProfilingServiceStub(delegate) {
    this.delegate_ = delegate;
  }
  ProfilingServiceStub.prototype.addProfilingClient = function(pid, client, memlogPipeReceiver, processType, params) {
    return this.delegate_ && this.delegate_.addProfilingClient && this.delegate_.addProfilingClient(pid, client, memlogPipeReceiver, processType, params);
  }
  ProfilingServiceStub.prototype.setKeepSmallAllocations = function(keepSmallAllocations) {
    return this.delegate_ && this.delegate_.setKeepSmallAllocations && this.delegate_.setKeepSmallAllocations(keepSmallAllocations);
  }
  ProfilingServiceStub.prototype.getProfiledPids = function() {
    return this.delegate_ && this.delegate_.getProfiledPids && this.delegate_.getProfiledPids();
  }

  ProfilingServiceStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kProfilingService_AddProfilingClient_Name:
      var params = reader.decodeStruct(ProfilingService_AddProfilingClient_Params);
      this.addProfilingClient(params.pid, params.client, params.memlogPipeReceiver, params.processType, params.params);
      return true;
    case kProfilingService_SetKeepSmallAllocations_Name:
      var params = reader.decodeStruct(ProfilingService_SetKeepSmallAllocations_Params);
      this.setKeepSmallAllocations(params.keepSmallAllocations);
      return true;
    default:
      return false;
    }
  };

  ProfilingServiceStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kProfilingService_GetProfiledPids_Name:
      var params = reader.decodeStruct(ProfilingService_GetProfiledPids_Params);
      this.getProfiledPids().then(function(response) {
        var responseParams =
            new ProfilingService_GetProfiledPids_ResponseParams();
        responseParams.pids = response.pids;
        var builder = new codec.MessageV1Builder(
            kProfilingService_GetProfiledPids_Name,
            codec.align(ProfilingService_GetProfiledPids_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(ProfilingService_GetProfiledPids_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    default:
      return false;
    }
  };

  function validateProfilingServiceRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kProfilingService_AddProfilingClient_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = ProfilingService_AddProfilingClient_Params;
      break;
      case kProfilingService_SetKeepSmallAllocations_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = ProfilingService_SetKeepSmallAllocations_Params;
      break;
      case kProfilingService_GetProfiledPids_Name:
        if (message.expectsResponse())
          paramsClass = ProfilingService_GetProfiledPids_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateProfilingServiceResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kProfilingService_GetProfiledPids_Name:
        if (message.isResponse())
          paramsClass = ProfilingService_GetProfiledPids_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var ProfilingService = {
    name: 'heap_profiling.mojom.ProfilingService',
    kVersion: 0,
    ptrClass: ProfilingServicePtr,
    proxyClass: ProfilingServiceProxy,
    stubClass: ProfilingServiceStub,
    validateRequest: validateProfilingServiceRequest,
    validateResponse: validateProfilingServiceResponse,
    mojomId: 'components/services/heap_profiling/public/mojom/heap_profiling_service.mojom',
    fuzzMethods: {
      addProfilingClient: {
        params: ProfilingService_AddProfilingClient_Params,
      },
      setKeepSmallAllocations: {
        params: ProfilingService_SetKeepSmallAllocations_Params,
      },
      getProfiledPids: {
        params: ProfilingService_GetProfiledPids_Params,
      },
    },
  };
  ProfilingServiceStub.prototype.validator = validateProfilingServiceRequest;
  ProfilingServiceProxy.prototype.validator = validateProfilingServiceResponse;
  exports.ProcessType = ProcessType;
  exports.ProfilingService = ProfilingService;
  exports.ProfilingServicePtr = ProfilingServicePtr;
  exports.ProfilingServiceAssociatedPtr = ProfilingServiceAssociatedPtr;
})();