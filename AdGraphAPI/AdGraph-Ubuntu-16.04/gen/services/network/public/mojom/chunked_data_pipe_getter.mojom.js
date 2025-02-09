// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'services/network/public/mojom/chunked_data_pipe_getter.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('network.mojom');



  function ChunkedDataPipeGetter_GetSize_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ChunkedDataPipeGetter_GetSize_Params.prototype.initDefaults_ = function() {
  };
  ChunkedDataPipeGetter_GetSize_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ChunkedDataPipeGetter_GetSize_Params.generate = function(generator_) {
    var generated = new ChunkedDataPipeGetter_GetSize_Params;
    return generated;
  };

  ChunkedDataPipeGetter_GetSize_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  ChunkedDataPipeGetter_GetSize_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ChunkedDataPipeGetter_GetSize_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ChunkedDataPipeGetter_GetSize_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ChunkedDataPipeGetter_GetSize_Params.validate = function(messageValidator, offset) {
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

  ChunkedDataPipeGetter_GetSize_Params.encodedSize = codec.kStructHeaderSize + 0;

  ChunkedDataPipeGetter_GetSize_Params.decode = function(decoder) {
    var packed;
    var val = new ChunkedDataPipeGetter_GetSize_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  ChunkedDataPipeGetter_GetSize_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ChunkedDataPipeGetter_GetSize_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function ChunkedDataPipeGetter_GetSize_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ChunkedDataPipeGetter_GetSize_ResponseParams.prototype.initDefaults_ = function() {
    this.status = 0;
    this.size = 0;
  };
  ChunkedDataPipeGetter_GetSize_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ChunkedDataPipeGetter_GetSize_ResponseParams.generate = function(generator_) {
    var generated = new ChunkedDataPipeGetter_GetSize_ResponseParams;
    generated.status = generator_.generateInt32();
    generated.size = generator_.generateUint64();
    return generated;
  };

  ChunkedDataPipeGetter_GetSize_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.status = mutator_.mutateInt32(this.status);
    }
    if (mutator_.chooseMutateField()) {
      this.size = mutator_.mutateUint64(this.size);
    }
    return this;
  };
  ChunkedDataPipeGetter_GetSize_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ChunkedDataPipeGetter_GetSize_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ChunkedDataPipeGetter_GetSize_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ChunkedDataPipeGetter_GetSize_ResponseParams.validate = function(messageValidator, offset) {
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

  ChunkedDataPipeGetter_GetSize_ResponseParams.encodedSize = codec.kStructHeaderSize + 16;

  ChunkedDataPipeGetter_GetSize_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new ChunkedDataPipeGetter_GetSize_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.status = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.size = decoder.decodeStruct(codec.Uint64);
    return val;
  };

  ChunkedDataPipeGetter_GetSize_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ChunkedDataPipeGetter_GetSize_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.status);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.Uint64, val.size);
  };
  function ChunkedDataPipeGetter_StartReading_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ChunkedDataPipeGetter_StartReading_Params.prototype.initDefaults_ = function() {
    this.pipe = null;
  };
  ChunkedDataPipeGetter_StartReading_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ChunkedDataPipeGetter_StartReading_Params.generate = function(generator_) {
    var generated = new ChunkedDataPipeGetter_StartReading_Params;
    generated.pipe = generator_.generateDataPipeProducer(false);
    return generated;
  };

  ChunkedDataPipeGetter_StartReading_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.pipe = mutator_.mutateDataPipeProducer(this.pipe, false);
    }
    return this;
  };
  ChunkedDataPipeGetter_StartReading_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.pipe !== null) {
      Array.prototype.push.apply(handles, ["handle<data_pipe_producer>"]);
    }
    return handles;
  };

  ChunkedDataPipeGetter_StartReading_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ChunkedDataPipeGetter_StartReading_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.pipe = handles[idx++];;
    return idx;
  };

  ChunkedDataPipeGetter_StartReading_Params.validate = function(messageValidator, offset) {
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


    // validate ChunkedDataPipeGetter_StartReading_Params.pipe
    err = messageValidator.validateHandle(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ChunkedDataPipeGetter_StartReading_Params.encodedSize = codec.kStructHeaderSize + 8;

  ChunkedDataPipeGetter_StartReading_Params.decode = function(decoder) {
    var packed;
    var val = new ChunkedDataPipeGetter_StartReading_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.pipe = decoder.decodeStruct(codec.Handle);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  ChunkedDataPipeGetter_StartReading_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ChunkedDataPipeGetter_StartReading_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Handle, val.pipe);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  var kChunkedDataPipeGetter_GetSize_Name = 1227587407;
  var kChunkedDataPipeGetter_StartReading_Name = 1906761410;

  function ChunkedDataPipeGetterPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(ChunkedDataPipeGetter,
                                                   handleOrPtrInfo);
  }

  function ChunkedDataPipeGetterAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        ChunkedDataPipeGetter, associatedInterfacePtrInfo);
  }

  ChunkedDataPipeGetterAssociatedPtr.prototype =
      Object.create(ChunkedDataPipeGetterPtr.prototype);
  ChunkedDataPipeGetterAssociatedPtr.prototype.constructor =
      ChunkedDataPipeGetterAssociatedPtr;

  function ChunkedDataPipeGetterProxy(receiver) {
    this.receiver_ = receiver;
  }
  ChunkedDataPipeGetterPtr.prototype.getSize = function() {
    return ChunkedDataPipeGetterProxy.prototype.getSize
        .apply(this.ptr.getProxy(), arguments);
  };

  ChunkedDataPipeGetterProxy.prototype.getSize = function() {
    var params_ = new ChunkedDataPipeGetter_GetSize_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kChunkedDataPipeGetter_GetSize_Name,
          codec.align(ChunkedDataPipeGetter_GetSize_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(ChunkedDataPipeGetter_GetSize_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(ChunkedDataPipeGetter_GetSize_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  ChunkedDataPipeGetterPtr.prototype.startReading = function() {
    return ChunkedDataPipeGetterProxy.prototype.startReading
        .apply(this.ptr.getProxy(), arguments);
  };

  ChunkedDataPipeGetterProxy.prototype.startReading = function(pipe) {
    var params_ = new ChunkedDataPipeGetter_StartReading_Params();
    params_.pipe = pipe;
    var builder = new codec.MessageV0Builder(
        kChunkedDataPipeGetter_StartReading_Name,
        codec.align(ChunkedDataPipeGetter_StartReading_Params.encodedSize));
    builder.encodeStruct(ChunkedDataPipeGetter_StartReading_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function ChunkedDataPipeGetterStub(delegate) {
    this.delegate_ = delegate;
  }
  ChunkedDataPipeGetterStub.prototype.getSize = function() {
    return this.delegate_ && this.delegate_.getSize && this.delegate_.getSize();
  }
  ChunkedDataPipeGetterStub.prototype.startReading = function(pipe) {
    return this.delegate_ && this.delegate_.startReading && this.delegate_.startReading(pipe);
  }

  ChunkedDataPipeGetterStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kChunkedDataPipeGetter_StartReading_Name:
      var params = reader.decodeStruct(ChunkedDataPipeGetter_StartReading_Params);
      this.startReading(params.pipe);
      return true;
    default:
      return false;
    }
  };

  ChunkedDataPipeGetterStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kChunkedDataPipeGetter_GetSize_Name:
      var params = reader.decodeStruct(ChunkedDataPipeGetter_GetSize_Params);
      this.getSize().then(function(response) {
        var responseParams =
            new ChunkedDataPipeGetter_GetSize_ResponseParams();
        responseParams.status = response.status;
        responseParams.size = response.size;
        var builder = new codec.MessageV1Builder(
            kChunkedDataPipeGetter_GetSize_Name,
            codec.align(ChunkedDataPipeGetter_GetSize_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(ChunkedDataPipeGetter_GetSize_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    default:
      return false;
    }
  };

  function validateChunkedDataPipeGetterRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kChunkedDataPipeGetter_GetSize_Name:
        if (message.expectsResponse())
          paramsClass = ChunkedDataPipeGetter_GetSize_Params;
      break;
      case kChunkedDataPipeGetter_StartReading_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = ChunkedDataPipeGetter_StartReading_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateChunkedDataPipeGetterResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kChunkedDataPipeGetter_GetSize_Name:
        if (message.isResponse())
          paramsClass = ChunkedDataPipeGetter_GetSize_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var ChunkedDataPipeGetter = {
    name: 'network.mojom.ChunkedDataPipeGetter',
    kVersion: 0,
    ptrClass: ChunkedDataPipeGetterPtr,
    proxyClass: ChunkedDataPipeGetterProxy,
    stubClass: ChunkedDataPipeGetterStub,
    validateRequest: validateChunkedDataPipeGetterRequest,
    validateResponse: validateChunkedDataPipeGetterResponse,
    mojomId: 'services/network/public/mojom/chunked_data_pipe_getter.mojom',
    fuzzMethods: {
      getSize: {
        params: ChunkedDataPipeGetter_GetSize_Params,
      },
      startReading: {
        params: ChunkedDataPipeGetter_StartReading_Params,
      },
    },
  };
  ChunkedDataPipeGetterStub.prototype.validator = validateChunkedDataPipeGetterRequest;
  ChunkedDataPipeGetterProxy.prototype.validator = validateChunkedDataPipeGetterResponse;
  exports.ChunkedDataPipeGetter = ChunkedDataPipeGetter;
  exports.ChunkedDataPipeGetterPtr = ChunkedDataPipeGetterPtr;
  exports.ChunkedDataPipeGetterAssociatedPtr = ChunkedDataPipeGetterAssociatedPtr;
})();