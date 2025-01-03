// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'services/video_capture/public/mojom/producer.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('videoCapture.mojom');



  function Producer_OnNewBufferHandle_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Producer_OnNewBufferHandle_Params.prototype.initDefaults_ = function() {
    this.bufferId = 0;
    this.bufferHandle = null;
  };
  Producer_OnNewBufferHandle_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Producer_OnNewBufferHandle_Params.generate = function(generator_) {
    var generated = new Producer_OnNewBufferHandle_Params;
    generated.bufferId = generator_.generateInt32();
    generated.bufferHandle = generator_.generateSharedBuffer(false);
    return generated;
  };

  Producer_OnNewBufferHandle_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.bufferId = mutator_.mutateInt32(this.bufferId);
    }
    if (mutator_.chooseMutateField()) {
      this.bufferHandle = mutator_.mutateSharedBuffer(this.bufferHandle, false);
    }
    return this;
  };
  Producer_OnNewBufferHandle_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.bufferHandle !== null) {
      Array.prototype.push.apply(handles, ["handle<shared_buffer>"]);
    }
    return handles;
  };

  Producer_OnNewBufferHandle_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Producer_OnNewBufferHandle_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.bufferHandle = handles[idx++];;
    return idx;
  };

  Producer_OnNewBufferHandle_Params.validate = function(messageValidator, offset) {
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



    // validate Producer_OnNewBufferHandle_Params.bufferHandle
    err = messageValidator.validateHandle(offset + codec.kStructHeaderSize + 4, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Producer_OnNewBufferHandle_Params.encodedSize = codec.kStructHeaderSize + 8;

  Producer_OnNewBufferHandle_Params.decode = function(decoder) {
    var packed;
    var val = new Producer_OnNewBufferHandle_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.bufferId = decoder.decodeStruct(codec.Int32);
    val.bufferHandle = decoder.decodeStruct(codec.Handle);
    return val;
  };

  Producer_OnNewBufferHandle_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Producer_OnNewBufferHandle_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.bufferId);
    encoder.encodeStruct(codec.Handle, val.bufferHandle);
  };
  function Producer_OnNewBufferHandle_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Producer_OnNewBufferHandle_ResponseParams.prototype.initDefaults_ = function() {
  };
  Producer_OnNewBufferHandle_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Producer_OnNewBufferHandle_ResponseParams.generate = function(generator_) {
    var generated = new Producer_OnNewBufferHandle_ResponseParams;
    return generated;
  };

  Producer_OnNewBufferHandle_ResponseParams.prototype.mutate = function(mutator_) {
    return this;
  };
  Producer_OnNewBufferHandle_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Producer_OnNewBufferHandle_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Producer_OnNewBufferHandle_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Producer_OnNewBufferHandle_ResponseParams.validate = function(messageValidator, offset) {
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

  Producer_OnNewBufferHandle_ResponseParams.encodedSize = codec.kStructHeaderSize + 0;

  Producer_OnNewBufferHandle_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new Producer_OnNewBufferHandle_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  Producer_OnNewBufferHandle_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Producer_OnNewBufferHandle_ResponseParams.encodedSize);
    encoder.writeUint32(0);
  };
  function Producer_OnBufferRetired_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Producer_OnBufferRetired_Params.prototype.initDefaults_ = function() {
    this.bufferId = 0;
  };
  Producer_OnBufferRetired_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Producer_OnBufferRetired_Params.generate = function(generator_) {
    var generated = new Producer_OnBufferRetired_Params;
    generated.bufferId = generator_.generateInt32();
    return generated;
  };

  Producer_OnBufferRetired_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.bufferId = mutator_.mutateInt32(this.bufferId);
    }
    return this;
  };
  Producer_OnBufferRetired_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Producer_OnBufferRetired_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Producer_OnBufferRetired_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Producer_OnBufferRetired_Params.validate = function(messageValidator, offset) {
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

  Producer_OnBufferRetired_Params.encodedSize = codec.kStructHeaderSize + 8;

  Producer_OnBufferRetired_Params.decode = function(decoder) {
    var packed;
    var val = new Producer_OnBufferRetired_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.bufferId = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  Producer_OnBufferRetired_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Producer_OnBufferRetired_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.bufferId);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  var kProducer_OnNewBufferHandle_Name = 1801450093;
  var kProducer_OnBufferRetired_Name = 964529519;

  function ProducerPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(Producer,
                                                   handleOrPtrInfo);
  }

  function ProducerAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        Producer, associatedInterfacePtrInfo);
  }

  ProducerAssociatedPtr.prototype =
      Object.create(ProducerPtr.prototype);
  ProducerAssociatedPtr.prototype.constructor =
      ProducerAssociatedPtr;

  function ProducerProxy(receiver) {
    this.receiver_ = receiver;
  }
  ProducerPtr.prototype.onNewBufferHandle = function() {
    return ProducerProxy.prototype.onNewBufferHandle
        .apply(this.ptr.getProxy(), arguments);
  };

  ProducerProxy.prototype.onNewBufferHandle = function(bufferId, bufferHandle) {
    var params_ = new Producer_OnNewBufferHandle_Params();
    params_.bufferId = bufferId;
    params_.bufferHandle = bufferHandle;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kProducer_OnNewBufferHandle_Name,
          codec.align(Producer_OnNewBufferHandle_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(Producer_OnNewBufferHandle_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(Producer_OnNewBufferHandle_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  ProducerPtr.prototype.onBufferRetired = function() {
    return ProducerProxy.prototype.onBufferRetired
        .apply(this.ptr.getProxy(), arguments);
  };

  ProducerProxy.prototype.onBufferRetired = function(bufferId) {
    var params_ = new Producer_OnBufferRetired_Params();
    params_.bufferId = bufferId;
    var builder = new codec.MessageV0Builder(
        kProducer_OnBufferRetired_Name,
        codec.align(Producer_OnBufferRetired_Params.encodedSize));
    builder.encodeStruct(Producer_OnBufferRetired_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function ProducerStub(delegate) {
    this.delegate_ = delegate;
  }
  ProducerStub.prototype.onNewBufferHandle = function(bufferId, bufferHandle) {
    return this.delegate_ && this.delegate_.onNewBufferHandle && this.delegate_.onNewBufferHandle(bufferId, bufferHandle);
  }
  ProducerStub.prototype.onBufferRetired = function(bufferId) {
    return this.delegate_ && this.delegate_.onBufferRetired && this.delegate_.onBufferRetired(bufferId);
  }

  ProducerStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kProducer_OnBufferRetired_Name:
      var params = reader.decodeStruct(Producer_OnBufferRetired_Params);
      this.onBufferRetired(params.bufferId);
      return true;
    default:
      return false;
    }
  };

  ProducerStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kProducer_OnNewBufferHandle_Name:
      var params = reader.decodeStruct(Producer_OnNewBufferHandle_Params);
      this.onNewBufferHandle(params.bufferId, params.bufferHandle).then(function(response) {
        var responseParams =
            new Producer_OnNewBufferHandle_ResponseParams();
        var builder = new codec.MessageV1Builder(
            kProducer_OnNewBufferHandle_Name,
            codec.align(Producer_OnNewBufferHandle_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(Producer_OnNewBufferHandle_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    default:
      return false;
    }
  };

  function validateProducerRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kProducer_OnNewBufferHandle_Name:
        if (message.expectsResponse())
          paramsClass = Producer_OnNewBufferHandle_Params;
      break;
      case kProducer_OnBufferRetired_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = Producer_OnBufferRetired_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateProducerResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kProducer_OnNewBufferHandle_Name:
        if (message.isResponse())
          paramsClass = Producer_OnNewBufferHandle_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var Producer = {
    name: 'video_capture.mojom.Producer',
    kVersion: 0,
    ptrClass: ProducerPtr,
    proxyClass: ProducerProxy,
    stubClass: ProducerStub,
    validateRequest: validateProducerRequest,
    validateResponse: validateProducerResponse,
    mojomId: 'services/video_capture/public/mojom/producer.mojom',
    fuzzMethods: {
      onNewBufferHandle: {
        params: Producer_OnNewBufferHandle_Params,
      },
      onBufferRetired: {
        params: Producer_OnBufferRetired_Params,
      },
    },
  };
  ProducerStub.prototype.validator = validateProducerRequest;
  ProducerProxy.prototype.validator = validateProducerResponse;
  exports.Producer = Producer;
  exports.ProducerPtr = ProducerPtr;
  exports.ProducerAssociatedPtr = ProducerAssociatedPtr;
})();