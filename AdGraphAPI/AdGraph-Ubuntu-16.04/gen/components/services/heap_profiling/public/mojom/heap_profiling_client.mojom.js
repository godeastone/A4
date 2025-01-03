// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'components/services/heap_profiling/public/mojom/heap_profiling_client.mojom';
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


  var StackMode = {};
  StackMode.NATIVE_WITH_THREAD_NAMES = 0;
  StackMode.NATIVE_WITHOUT_THREAD_NAMES = StackMode.NATIVE_WITH_THREAD_NAMES + 1;
  StackMode.PSEUDO = StackMode.NATIVE_WITHOUT_THREAD_NAMES + 1;
  StackMode.MIXED = StackMode.PSEUDO + 1;

  StackMode.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
      return true;
    }
    return false;
  };

  StackMode.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };

  function ProfilingParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ProfilingParams.prototype.initDefaults_ = function() {
    this.senderPipe = null;
    this.stackMode = 0;
    this.samplingRate = 0;
  };
  ProfilingParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ProfilingParams.generate = function(generator_) {
    var generated = new ProfilingParams;
    generated.senderPipe = generator_.generateHandle(false);
    generated.stackMode = generator_.generateEnum(0, 3);
    generated.samplingRate = generator_.generateUint32();
    return generated;
  };

  ProfilingParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.senderPipe = mutator_.mutateHandle(this.senderPipe, false);
    }
    if (mutator_.chooseMutateField()) {
      this.stackMode = mutator_.mutateEnum(this.stackMode, 0, 3);
    }
    if (mutator_.chooseMutateField()) {
      this.samplingRate = mutator_.mutateUint32(this.samplingRate);
    }
    return this;
  };
  ProfilingParams.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.senderPipe !== null) {
      Array.prototype.push.apply(handles, ["None"]);
    }
    return handles;
  };

  ProfilingParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ProfilingParams.prototype.setHandlesInternal_ = function(handles, idx) {
    this.senderPipe = handles[idx++];;
    return idx;
  };

  ProfilingParams.validate = function(messageValidator, offset) {
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


    // validate ProfilingParams.senderPipe
    err = messageValidator.validateHandle(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate ProfilingParams.stackMode
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 4, StackMode);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  ProfilingParams.encodedSize = codec.kStructHeaderSize + 16;

  ProfilingParams.decode = function(decoder) {
    var packed;
    var val = new ProfilingParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.senderPipe = decoder.decodeStruct(codec.Handle);
    val.stackMode = decoder.decodeStruct(codec.Int32);
    val.samplingRate = decoder.decodeStruct(codec.Uint32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  ProfilingParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ProfilingParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Handle, val.senderPipe);
    encoder.encodeStruct(codec.Int32, val.stackMode);
    encoder.encodeStruct(codec.Uint32, val.samplingRate);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function ProfilingClient_StartProfiling_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ProfilingClient_StartProfiling_Params.prototype.initDefaults_ = function() {
    this.params = null;
  };
  ProfilingClient_StartProfiling_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ProfilingClient_StartProfiling_Params.generate = function(generator_) {
    var generated = new ProfilingClient_StartProfiling_Params;
    generated.params = generator_.generateStruct(heapProfiling.mojom.ProfilingParams, false);
    return generated;
  };

  ProfilingClient_StartProfiling_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.params = mutator_.mutateStruct(heapProfiling.mojom.ProfilingParams, false);
    }
    return this;
  };
  ProfilingClient_StartProfiling_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.params !== null) {
      Array.prototype.push.apply(handles, this.params.getHandleDeps());
    }
    return handles;
  };

  ProfilingClient_StartProfiling_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ProfilingClient_StartProfiling_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    idx = this.params.setHandlesInternal_(handles, idx);
    return idx;
  };

  ProfilingClient_StartProfiling_Params.validate = function(messageValidator, offset) {
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


    // validate ProfilingClient_StartProfiling_Params.params
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, ProfilingParams, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ProfilingClient_StartProfiling_Params.encodedSize = codec.kStructHeaderSize + 8;

  ProfilingClient_StartProfiling_Params.decode = function(decoder) {
    var packed;
    var val = new ProfilingClient_StartProfiling_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.params = decoder.decodeStructPointer(ProfilingParams);
    return val;
  };

  ProfilingClient_StartProfiling_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ProfilingClient_StartProfiling_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(ProfilingParams, val.params);
  };
  function ProfilingClient_FlushMemlogPipe_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ProfilingClient_FlushMemlogPipe_Params.prototype.initDefaults_ = function() {
    this.barrierId = 0;
  };
  ProfilingClient_FlushMemlogPipe_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ProfilingClient_FlushMemlogPipe_Params.generate = function(generator_) {
    var generated = new ProfilingClient_FlushMemlogPipe_Params;
    generated.barrierId = generator_.generateUint32();
    return generated;
  };

  ProfilingClient_FlushMemlogPipe_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.barrierId = mutator_.mutateUint32(this.barrierId);
    }
    return this;
  };
  ProfilingClient_FlushMemlogPipe_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ProfilingClient_FlushMemlogPipe_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ProfilingClient_FlushMemlogPipe_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ProfilingClient_FlushMemlogPipe_Params.validate = function(messageValidator, offset) {
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

  ProfilingClient_FlushMemlogPipe_Params.encodedSize = codec.kStructHeaderSize + 8;

  ProfilingClient_FlushMemlogPipe_Params.decode = function(decoder) {
    var packed;
    var val = new ProfilingClient_FlushMemlogPipe_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.barrierId = decoder.decodeStruct(codec.Uint32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  ProfilingClient_FlushMemlogPipe_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ProfilingClient_FlushMemlogPipe_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint32, val.barrierId);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  var kProfilingClient_StartProfiling_Name = 1284440924;
  var kProfilingClient_FlushMemlogPipe_Name = 452641232;

  function ProfilingClientPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(ProfilingClient,
                                                   handleOrPtrInfo);
  }

  function ProfilingClientAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        ProfilingClient, associatedInterfacePtrInfo);
  }

  ProfilingClientAssociatedPtr.prototype =
      Object.create(ProfilingClientPtr.prototype);
  ProfilingClientAssociatedPtr.prototype.constructor =
      ProfilingClientAssociatedPtr;

  function ProfilingClientProxy(receiver) {
    this.receiver_ = receiver;
  }
  ProfilingClientPtr.prototype.startProfiling = function() {
    return ProfilingClientProxy.prototype.startProfiling
        .apply(this.ptr.getProxy(), arguments);
  };

  ProfilingClientProxy.prototype.startProfiling = function(params) {
    var params_ = new ProfilingClient_StartProfiling_Params();
    params_.params = params;
    var builder = new codec.MessageV0Builder(
        kProfilingClient_StartProfiling_Name,
        codec.align(ProfilingClient_StartProfiling_Params.encodedSize));
    builder.encodeStruct(ProfilingClient_StartProfiling_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  ProfilingClientPtr.prototype.flushMemlogPipe = function() {
    return ProfilingClientProxy.prototype.flushMemlogPipe
        .apply(this.ptr.getProxy(), arguments);
  };

  ProfilingClientProxy.prototype.flushMemlogPipe = function(barrierId) {
    var params_ = new ProfilingClient_FlushMemlogPipe_Params();
    params_.barrierId = barrierId;
    var builder = new codec.MessageV0Builder(
        kProfilingClient_FlushMemlogPipe_Name,
        codec.align(ProfilingClient_FlushMemlogPipe_Params.encodedSize));
    builder.encodeStruct(ProfilingClient_FlushMemlogPipe_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function ProfilingClientStub(delegate) {
    this.delegate_ = delegate;
  }
  ProfilingClientStub.prototype.startProfiling = function(params) {
    return this.delegate_ && this.delegate_.startProfiling && this.delegate_.startProfiling(params);
  }
  ProfilingClientStub.prototype.flushMemlogPipe = function(barrierId) {
    return this.delegate_ && this.delegate_.flushMemlogPipe && this.delegate_.flushMemlogPipe(barrierId);
  }

  ProfilingClientStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kProfilingClient_StartProfiling_Name:
      var params = reader.decodeStruct(ProfilingClient_StartProfiling_Params);
      this.startProfiling(params.params);
      return true;
    case kProfilingClient_FlushMemlogPipe_Name:
      var params = reader.decodeStruct(ProfilingClient_FlushMemlogPipe_Params);
      this.flushMemlogPipe(params.barrierId);
      return true;
    default:
      return false;
    }
  };

  ProfilingClientStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateProfilingClientRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kProfilingClient_StartProfiling_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = ProfilingClient_StartProfiling_Params;
      break;
      case kProfilingClient_FlushMemlogPipe_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = ProfilingClient_FlushMemlogPipe_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateProfilingClientResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var ProfilingClient = {
    name: 'heap_profiling.mojom.ProfilingClient',
    kVersion: 0,
    ptrClass: ProfilingClientPtr,
    proxyClass: ProfilingClientProxy,
    stubClass: ProfilingClientStub,
    validateRequest: validateProfilingClientRequest,
    validateResponse: null,
    mojomId: 'components/services/heap_profiling/public/mojom/heap_profiling_client.mojom',
    fuzzMethods: {
      startProfiling: {
        params: ProfilingClient_StartProfiling_Params,
      },
      flushMemlogPipe: {
        params: ProfilingClient_FlushMemlogPipe_Params,
      },
    },
  };
  ProfilingClientStub.prototype.validator = validateProfilingClientRequest;
  ProfilingClientProxy.prototype.validator = null;
  exports.StackMode = StackMode;
  exports.ProfilingParams = ProfilingParams;
  exports.ProfilingClient = ProfilingClient;
  exports.ProfilingClientPtr = ProfilingClientPtr;
  exports.ProfilingClientAssociatedPtr = ProfilingClientAssociatedPtr;
})();