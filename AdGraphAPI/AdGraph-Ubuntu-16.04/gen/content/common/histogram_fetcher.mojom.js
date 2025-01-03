// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'content/common/histogram_fetcher.mojom';
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



  function ChildHistogramFetcherFactory_CreateFetcher_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ChildHistogramFetcherFactory_CreateFetcher_Params.prototype.initDefaults_ = function() {
    this.shmHandle = null;
    this.childHistogramFetcher = new bindings.InterfaceRequest();
  };
  ChildHistogramFetcherFactory_CreateFetcher_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ChildHistogramFetcherFactory_CreateFetcher_Params.generate = function(generator_) {
    var generated = new ChildHistogramFetcherFactory_CreateFetcher_Params;
    generated.shmHandle = generator_.generateSharedBuffer(true);
    generated.childHistogramFetcher = generator_.generateInterfaceRequest("content.mojom.ChildHistogramFetcher", false);
    return generated;
  };

  ChildHistogramFetcherFactory_CreateFetcher_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.shmHandle = mutator_.mutateSharedBuffer(this.shmHandle, true);
    }
    if (mutator_.chooseMutateField()) {
      this.childHistogramFetcher = mutator_.mutateInterfaceRequest(this.childHistogramFetcher, "content.mojom.ChildHistogramFetcher", false);
    }
    return this;
  };
  ChildHistogramFetcherFactory_CreateFetcher_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.shmHandle !== null) {
      Array.prototype.push.apply(handles, ["handle<shared_buffer>"]);
    }
    if (this.childHistogramFetcher !== null) {
      Array.prototype.push.apply(handles, ["content.mojom.ChildHistogramFetcherRequest"]);
    }
    return handles;
  };

  ChildHistogramFetcherFactory_CreateFetcher_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ChildHistogramFetcherFactory_CreateFetcher_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.shmHandle = handles[idx++];;
    this.childHistogramFetcher = handles[idx++];;
    return idx;
  };

  ChildHistogramFetcherFactory_CreateFetcher_Params.validate = function(messageValidator, offset) {
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


    // validate ChildHistogramFetcherFactory_CreateFetcher_Params.shmHandle
    err = messageValidator.validateHandle(offset + codec.kStructHeaderSize + 0, true)
    if (err !== validator.validationError.NONE)
        return err;


    // validate ChildHistogramFetcherFactory_CreateFetcher_Params.childHistogramFetcher
    err = messageValidator.validateInterfaceRequest(offset + codec.kStructHeaderSize + 4, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ChildHistogramFetcherFactory_CreateFetcher_Params.encodedSize = codec.kStructHeaderSize + 8;

  ChildHistogramFetcherFactory_CreateFetcher_Params.decode = function(decoder) {
    var packed;
    var val = new ChildHistogramFetcherFactory_CreateFetcher_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.shmHandle = decoder.decodeStruct(codec.NullableHandle);
    val.childHistogramFetcher = decoder.decodeStruct(codec.InterfaceRequest);
    return val;
  };

  ChildHistogramFetcherFactory_CreateFetcher_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ChildHistogramFetcherFactory_CreateFetcher_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.NullableHandle, val.shmHandle);
    encoder.encodeStruct(codec.InterfaceRequest, val.childHistogramFetcher);
  };
  function ChildHistogramFetcher_GetChildNonPersistentHistogramData_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ChildHistogramFetcher_GetChildNonPersistentHistogramData_Params.prototype.initDefaults_ = function() {
  };
  ChildHistogramFetcher_GetChildNonPersistentHistogramData_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ChildHistogramFetcher_GetChildNonPersistentHistogramData_Params.generate = function(generator_) {
    var generated = new ChildHistogramFetcher_GetChildNonPersistentHistogramData_Params;
    return generated;
  };

  ChildHistogramFetcher_GetChildNonPersistentHistogramData_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  ChildHistogramFetcher_GetChildNonPersistentHistogramData_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ChildHistogramFetcher_GetChildNonPersistentHistogramData_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ChildHistogramFetcher_GetChildNonPersistentHistogramData_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ChildHistogramFetcher_GetChildNonPersistentHistogramData_Params.validate = function(messageValidator, offset) {
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

  ChildHistogramFetcher_GetChildNonPersistentHistogramData_Params.encodedSize = codec.kStructHeaderSize + 0;

  ChildHistogramFetcher_GetChildNonPersistentHistogramData_Params.decode = function(decoder) {
    var packed;
    var val = new ChildHistogramFetcher_GetChildNonPersistentHistogramData_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  ChildHistogramFetcher_GetChildNonPersistentHistogramData_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ChildHistogramFetcher_GetChildNonPersistentHistogramData_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function ChildHistogramFetcher_GetChildNonPersistentHistogramData_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ChildHistogramFetcher_GetChildNonPersistentHistogramData_ResponseParams.prototype.initDefaults_ = function() {
    this.deltas = null;
  };
  ChildHistogramFetcher_GetChildNonPersistentHistogramData_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ChildHistogramFetcher_GetChildNonPersistentHistogramData_ResponseParams.generate = function(generator_) {
    var generated = new ChildHistogramFetcher_GetChildNonPersistentHistogramData_ResponseParams;
    generated.deltas = generator_.generateArray(function() {
      return generator_.generateString(false);
    });
    return generated;
  };

  ChildHistogramFetcher_GetChildNonPersistentHistogramData_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.deltas = mutator_.mutateArray(this.deltas, function(val) {
        return mutator_.mutateString(val, false);
      });
    }
    return this;
  };
  ChildHistogramFetcher_GetChildNonPersistentHistogramData_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ChildHistogramFetcher_GetChildNonPersistentHistogramData_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ChildHistogramFetcher_GetChildNonPersistentHistogramData_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ChildHistogramFetcher_GetChildNonPersistentHistogramData_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate ChildHistogramFetcher_GetChildNonPersistentHistogramData_ResponseParams.deltas
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 8, codec.String, false, [0, 0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ChildHistogramFetcher_GetChildNonPersistentHistogramData_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  ChildHistogramFetcher_GetChildNonPersistentHistogramData_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new ChildHistogramFetcher_GetChildNonPersistentHistogramData_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.deltas = decoder.decodeArrayPointer(codec.String);
    return val;
  };

  ChildHistogramFetcher_GetChildNonPersistentHistogramData_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ChildHistogramFetcher_GetChildNonPersistentHistogramData_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(codec.String, val.deltas);
  };
  var kChildHistogramFetcherFactory_CreateFetcher_Name = 1087753295;

  function ChildHistogramFetcherFactoryPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(ChildHistogramFetcherFactory,
                                                   handleOrPtrInfo);
  }

  function ChildHistogramFetcherFactoryAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        ChildHistogramFetcherFactory, associatedInterfacePtrInfo);
  }

  ChildHistogramFetcherFactoryAssociatedPtr.prototype =
      Object.create(ChildHistogramFetcherFactoryPtr.prototype);
  ChildHistogramFetcherFactoryAssociatedPtr.prototype.constructor =
      ChildHistogramFetcherFactoryAssociatedPtr;

  function ChildHistogramFetcherFactoryProxy(receiver) {
    this.receiver_ = receiver;
  }
  ChildHistogramFetcherFactoryPtr.prototype.createFetcher = function() {
    return ChildHistogramFetcherFactoryProxy.prototype.createFetcher
        .apply(this.ptr.getProxy(), arguments);
  };

  ChildHistogramFetcherFactoryProxy.prototype.createFetcher = function(shmHandle, childHistogramFetcher) {
    var params_ = new ChildHistogramFetcherFactory_CreateFetcher_Params();
    params_.shmHandle = shmHandle;
    params_.childHistogramFetcher = childHistogramFetcher;
    var builder = new codec.MessageV0Builder(
        kChildHistogramFetcherFactory_CreateFetcher_Name,
        codec.align(ChildHistogramFetcherFactory_CreateFetcher_Params.encodedSize));
    builder.encodeStruct(ChildHistogramFetcherFactory_CreateFetcher_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function ChildHistogramFetcherFactoryStub(delegate) {
    this.delegate_ = delegate;
  }
  ChildHistogramFetcherFactoryStub.prototype.createFetcher = function(shmHandle, childHistogramFetcher) {
    return this.delegate_ && this.delegate_.createFetcher && this.delegate_.createFetcher(shmHandle, childHistogramFetcher);
  }

  ChildHistogramFetcherFactoryStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kChildHistogramFetcherFactory_CreateFetcher_Name:
      var params = reader.decodeStruct(ChildHistogramFetcherFactory_CreateFetcher_Params);
      this.createFetcher(params.shmHandle, params.childHistogramFetcher);
      return true;
    default:
      return false;
    }
  };

  ChildHistogramFetcherFactoryStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateChildHistogramFetcherFactoryRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kChildHistogramFetcherFactory_CreateFetcher_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = ChildHistogramFetcherFactory_CreateFetcher_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateChildHistogramFetcherFactoryResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var ChildHistogramFetcherFactory = {
    name: 'content.mojom.ChildHistogramFetcherFactory',
    kVersion: 0,
    ptrClass: ChildHistogramFetcherFactoryPtr,
    proxyClass: ChildHistogramFetcherFactoryProxy,
    stubClass: ChildHistogramFetcherFactoryStub,
    validateRequest: validateChildHistogramFetcherFactoryRequest,
    validateResponse: null,
    mojomId: 'content/common/histogram_fetcher.mojom',
    fuzzMethods: {
      createFetcher: {
        params: ChildHistogramFetcherFactory_CreateFetcher_Params,
      },
    },
  };
  ChildHistogramFetcherFactoryStub.prototype.validator = validateChildHistogramFetcherFactoryRequest;
  ChildHistogramFetcherFactoryProxy.prototype.validator = null;
  var kChildHistogramFetcher_GetChildNonPersistentHistogramData_Name = 880218584;

  function ChildHistogramFetcherPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(ChildHistogramFetcher,
                                                   handleOrPtrInfo);
  }

  function ChildHistogramFetcherAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        ChildHistogramFetcher, associatedInterfacePtrInfo);
  }

  ChildHistogramFetcherAssociatedPtr.prototype =
      Object.create(ChildHistogramFetcherPtr.prototype);
  ChildHistogramFetcherAssociatedPtr.prototype.constructor =
      ChildHistogramFetcherAssociatedPtr;

  function ChildHistogramFetcherProxy(receiver) {
    this.receiver_ = receiver;
  }
  ChildHistogramFetcherPtr.prototype.getChildNonPersistentHistogramData = function() {
    return ChildHistogramFetcherProxy.prototype.getChildNonPersistentHistogramData
        .apply(this.ptr.getProxy(), arguments);
  };

  ChildHistogramFetcherProxy.prototype.getChildNonPersistentHistogramData = function() {
    var params_ = new ChildHistogramFetcher_GetChildNonPersistentHistogramData_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kChildHistogramFetcher_GetChildNonPersistentHistogramData_Name,
          codec.align(ChildHistogramFetcher_GetChildNonPersistentHistogramData_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(ChildHistogramFetcher_GetChildNonPersistentHistogramData_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(ChildHistogramFetcher_GetChildNonPersistentHistogramData_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };

  function ChildHistogramFetcherStub(delegate) {
    this.delegate_ = delegate;
  }
  ChildHistogramFetcherStub.prototype.getChildNonPersistentHistogramData = function() {
    return this.delegate_ && this.delegate_.getChildNonPersistentHistogramData && this.delegate_.getChildNonPersistentHistogramData();
  }

  ChildHistogramFetcherStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  ChildHistogramFetcherStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kChildHistogramFetcher_GetChildNonPersistentHistogramData_Name:
      var params = reader.decodeStruct(ChildHistogramFetcher_GetChildNonPersistentHistogramData_Params);
      this.getChildNonPersistentHistogramData().then(function(response) {
        var responseParams =
            new ChildHistogramFetcher_GetChildNonPersistentHistogramData_ResponseParams();
        responseParams.deltas = response.deltas;
        var builder = new codec.MessageV1Builder(
            kChildHistogramFetcher_GetChildNonPersistentHistogramData_Name,
            codec.align(ChildHistogramFetcher_GetChildNonPersistentHistogramData_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(ChildHistogramFetcher_GetChildNonPersistentHistogramData_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    default:
      return false;
    }
  };

  function validateChildHistogramFetcherRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kChildHistogramFetcher_GetChildNonPersistentHistogramData_Name:
        if (message.expectsResponse())
          paramsClass = ChildHistogramFetcher_GetChildNonPersistentHistogramData_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateChildHistogramFetcherResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kChildHistogramFetcher_GetChildNonPersistentHistogramData_Name:
        if (message.isResponse())
          paramsClass = ChildHistogramFetcher_GetChildNonPersistentHistogramData_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var ChildHistogramFetcher = {
    name: 'content.mojom.ChildHistogramFetcher',
    kVersion: 0,
    ptrClass: ChildHistogramFetcherPtr,
    proxyClass: ChildHistogramFetcherProxy,
    stubClass: ChildHistogramFetcherStub,
    validateRequest: validateChildHistogramFetcherRequest,
    validateResponse: validateChildHistogramFetcherResponse,
    mojomId: 'content/common/histogram_fetcher.mojom',
    fuzzMethods: {
      getChildNonPersistentHistogramData: {
        params: ChildHistogramFetcher_GetChildNonPersistentHistogramData_Params,
      },
    },
  };
  ChildHistogramFetcherStub.prototype.validator = validateChildHistogramFetcherRequest;
  ChildHistogramFetcherProxy.prototype.validator = validateChildHistogramFetcherResponse;
  exports.ChildHistogramFetcherFactory = ChildHistogramFetcherFactory;
  exports.ChildHistogramFetcherFactoryPtr = ChildHistogramFetcherFactoryPtr;
  exports.ChildHistogramFetcherFactoryAssociatedPtr = ChildHistogramFetcherFactoryAssociatedPtr;
  exports.ChildHistogramFetcher = ChildHistogramFetcher;
  exports.ChildHistogramFetcherPtr = ChildHistogramFetcherPtr;
  exports.ChildHistogramFetcherAssociatedPtr = ChildHistogramFetcherAssociatedPtr;
})();