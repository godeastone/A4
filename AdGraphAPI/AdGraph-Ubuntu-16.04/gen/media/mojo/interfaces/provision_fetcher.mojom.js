// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'media/mojo/interfaces/provision_fetcher.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('media.mojom');



  function ProvisionFetcher_Retrieve_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ProvisionFetcher_Retrieve_Params.prototype.initDefaults_ = function() {
    this.defaultUrl = null;
    this.requestData = null;
  };
  ProvisionFetcher_Retrieve_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ProvisionFetcher_Retrieve_Params.generate = function(generator_) {
    var generated = new ProvisionFetcher_Retrieve_Params;
    generated.defaultUrl = generator_.generateString(false);
    generated.requestData = generator_.generateString(false);
    return generated;
  };

  ProvisionFetcher_Retrieve_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.defaultUrl = mutator_.mutateString(this.defaultUrl, false);
    }
    if (mutator_.chooseMutateField()) {
      this.requestData = mutator_.mutateString(this.requestData, false);
    }
    return this;
  };
  ProvisionFetcher_Retrieve_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ProvisionFetcher_Retrieve_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ProvisionFetcher_Retrieve_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ProvisionFetcher_Retrieve_Params.validate = function(messageValidator, offset) {
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


    // validate ProvisionFetcher_Retrieve_Params.defaultUrl
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate ProvisionFetcher_Retrieve_Params.requestData
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ProvisionFetcher_Retrieve_Params.encodedSize = codec.kStructHeaderSize + 16;

  ProvisionFetcher_Retrieve_Params.decode = function(decoder) {
    var packed;
    var val = new ProvisionFetcher_Retrieve_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.defaultUrl = decoder.decodeStruct(codec.String);
    val.requestData = decoder.decodeStruct(codec.String);
    return val;
  };

  ProvisionFetcher_Retrieve_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ProvisionFetcher_Retrieve_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.defaultUrl);
    encoder.encodeStruct(codec.String, val.requestData);
  };
  function ProvisionFetcher_Retrieve_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ProvisionFetcher_Retrieve_ResponseParams.prototype.initDefaults_ = function() {
    this.result = false;
    this.response = null;
  };
  ProvisionFetcher_Retrieve_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ProvisionFetcher_Retrieve_ResponseParams.generate = function(generator_) {
    var generated = new ProvisionFetcher_Retrieve_ResponseParams;
    generated.result = generator_.generateBool();
    generated.response = generator_.generateString(false);
    return generated;
  };

  ProvisionFetcher_Retrieve_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.result = mutator_.mutateBool(this.result);
    }
    if (mutator_.chooseMutateField()) {
      this.response = mutator_.mutateString(this.response, false);
    }
    return this;
  };
  ProvisionFetcher_Retrieve_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ProvisionFetcher_Retrieve_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ProvisionFetcher_Retrieve_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ProvisionFetcher_Retrieve_ResponseParams.validate = function(messageValidator, offset) {
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



    // validate ProvisionFetcher_Retrieve_ResponseParams.response
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ProvisionFetcher_Retrieve_ResponseParams.encodedSize = codec.kStructHeaderSize + 16;

  ProvisionFetcher_Retrieve_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new ProvisionFetcher_Retrieve_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.result = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.response = decoder.decodeStruct(codec.String);
    return val;
  };

  ProvisionFetcher_Retrieve_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ProvisionFetcher_Retrieve_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.result & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.String, val.response);
  };
  var kProvisionFetcher_Retrieve_Name = 954095072;

  function ProvisionFetcherPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(ProvisionFetcher,
                                                   handleOrPtrInfo);
  }

  function ProvisionFetcherAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        ProvisionFetcher, associatedInterfacePtrInfo);
  }

  ProvisionFetcherAssociatedPtr.prototype =
      Object.create(ProvisionFetcherPtr.prototype);
  ProvisionFetcherAssociatedPtr.prototype.constructor =
      ProvisionFetcherAssociatedPtr;

  function ProvisionFetcherProxy(receiver) {
    this.receiver_ = receiver;
  }
  ProvisionFetcherPtr.prototype.retrieve = function() {
    return ProvisionFetcherProxy.prototype.retrieve
        .apply(this.ptr.getProxy(), arguments);
  };

  ProvisionFetcherProxy.prototype.retrieve = function(defaultUrl, requestData) {
    var params_ = new ProvisionFetcher_Retrieve_Params();
    params_.defaultUrl = defaultUrl;
    params_.requestData = requestData;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kProvisionFetcher_Retrieve_Name,
          codec.align(ProvisionFetcher_Retrieve_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(ProvisionFetcher_Retrieve_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(ProvisionFetcher_Retrieve_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };

  function ProvisionFetcherStub(delegate) {
    this.delegate_ = delegate;
  }
  ProvisionFetcherStub.prototype.retrieve = function(defaultUrl, requestData) {
    return this.delegate_ && this.delegate_.retrieve && this.delegate_.retrieve(defaultUrl, requestData);
  }

  ProvisionFetcherStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  ProvisionFetcherStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kProvisionFetcher_Retrieve_Name:
      var params = reader.decodeStruct(ProvisionFetcher_Retrieve_Params);
      this.retrieve(params.defaultUrl, params.requestData).then(function(response) {
        var responseParams =
            new ProvisionFetcher_Retrieve_ResponseParams();
        responseParams.result = response.result;
        responseParams.response = response.response;
        var builder = new codec.MessageV1Builder(
            kProvisionFetcher_Retrieve_Name,
            codec.align(ProvisionFetcher_Retrieve_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(ProvisionFetcher_Retrieve_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    default:
      return false;
    }
  };

  function validateProvisionFetcherRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kProvisionFetcher_Retrieve_Name:
        if (message.expectsResponse())
          paramsClass = ProvisionFetcher_Retrieve_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateProvisionFetcherResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kProvisionFetcher_Retrieve_Name:
        if (message.isResponse())
          paramsClass = ProvisionFetcher_Retrieve_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var ProvisionFetcher = {
    name: 'media.mojom.ProvisionFetcher',
    kVersion: 0,
    ptrClass: ProvisionFetcherPtr,
    proxyClass: ProvisionFetcherProxy,
    stubClass: ProvisionFetcherStub,
    validateRequest: validateProvisionFetcherRequest,
    validateResponse: validateProvisionFetcherResponse,
    mojomId: 'media/mojo/interfaces/provision_fetcher.mojom',
    fuzzMethods: {
      retrieve: {
        params: ProvisionFetcher_Retrieve_Params,
      },
    },
  };
  ProvisionFetcherStub.prototype.validator = validateProvisionFetcherRequest;
  ProvisionFetcherProxy.prototype.validator = validateProvisionFetcherResponse;
  exports.ProvisionFetcher = ProvisionFetcher;
  exports.ProvisionFetcherPtr = ProvisionFetcherPtr;
  exports.ProvisionFetcherAssociatedPtr = ProvisionFetcherAssociatedPtr;
})();