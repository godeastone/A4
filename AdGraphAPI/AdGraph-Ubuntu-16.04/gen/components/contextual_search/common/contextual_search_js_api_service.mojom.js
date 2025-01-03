// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'components/contextual_search/common/contextual_search_js_api_service.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('contextualSearch.mojom');
  var url$ =
      mojo.internal.exposeNamespace('url.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'url/mojom/url.mojom', '../../../url/mojom/url.mojom.js');
  }



  function ContextualSearchJsApiService_ShouldEnableJsApi_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ContextualSearchJsApiService_ShouldEnableJsApi_Params.prototype.initDefaults_ = function() {
    this.url = null;
  };
  ContextualSearchJsApiService_ShouldEnableJsApi_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ContextualSearchJsApiService_ShouldEnableJsApi_Params.generate = function(generator_) {
    var generated = new ContextualSearchJsApiService_ShouldEnableJsApi_Params;
    generated.url = generator_.generateStruct(url.mojom.Url, false);
    return generated;
  };

  ContextualSearchJsApiService_ShouldEnableJsApi_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.url = mutator_.mutateStruct(url.mojom.Url, false);
    }
    return this;
  };
  ContextualSearchJsApiService_ShouldEnableJsApi_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ContextualSearchJsApiService_ShouldEnableJsApi_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ContextualSearchJsApiService_ShouldEnableJsApi_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ContextualSearchJsApiService_ShouldEnableJsApi_Params.validate = function(messageValidator, offset) {
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


    // validate ContextualSearchJsApiService_ShouldEnableJsApi_Params.url
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, url$.Url, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ContextualSearchJsApiService_ShouldEnableJsApi_Params.encodedSize = codec.kStructHeaderSize + 8;

  ContextualSearchJsApiService_ShouldEnableJsApi_Params.decode = function(decoder) {
    var packed;
    var val = new ContextualSearchJsApiService_ShouldEnableJsApi_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.url = decoder.decodeStructPointer(url$.Url);
    return val;
  };

  ContextualSearchJsApiService_ShouldEnableJsApi_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ContextualSearchJsApiService_ShouldEnableJsApi_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(url$.Url, val.url);
  };
  function ContextualSearchJsApiService_ShouldEnableJsApi_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ContextualSearchJsApiService_ShouldEnableJsApi_ResponseParams.prototype.initDefaults_ = function() {
    this.shouldEnable = false;
  };
  ContextualSearchJsApiService_ShouldEnableJsApi_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ContextualSearchJsApiService_ShouldEnableJsApi_ResponseParams.generate = function(generator_) {
    var generated = new ContextualSearchJsApiService_ShouldEnableJsApi_ResponseParams;
    generated.shouldEnable = generator_.generateBool();
    return generated;
  };

  ContextualSearchJsApiService_ShouldEnableJsApi_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.shouldEnable = mutator_.mutateBool(this.shouldEnable);
    }
    return this;
  };
  ContextualSearchJsApiService_ShouldEnableJsApi_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ContextualSearchJsApiService_ShouldEnableJsApi_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ContextualSearchJsApiService_ShouldEnableJsApi_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ContextualSearchJsApiService_ShouldEnableJsApi_ResponseParams.validate = function(messageValidator, offset) {
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

  ContextualSearchJsApiService_ShouldEnableJsApi_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  ContextualSearchJsApiService_ShouldEnableJsApi_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new ContextualSearchJsApiService_ShouldEnableJsApi_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.shouldEnable = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  ContextualSearchJsApiService_ShouldEnableJsApi_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ContextualSearchJsApiService_ShouldEnableJsApi_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.shouldEnable & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function ContextualSearchJsApiService_HandleSetCaption_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ContextualSearchJsApiService_HandleSetCaption_Params.prototype.initDefaults_ = function() {
    this.message = null;
    this.doesAnswer = false;
  };
  ContextualSearchJsApiService_HandleSetCaption_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ContextualSearchJsApiService_HandleSetCaption_Params.generate = function(generator_) {
    var generated = new ContextualSearchJsApiService_HandleSetCaption_Params;
    generated.message = generator_.generateString(false);
    generated.doesAnswer = generator_.generateBool();
    return generated;
  };

  ContextualSearchJsApiService_HandleSetCaption_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.message = mutator_.mutateString(this.message, false);
    }
    if (mutator_.chooseMutateField()) {
      this.doesAnswer = mutator_.mutateBool(this.doesAnswer);
    }
    return this;
  };
  ContextualSearchJsApiService_HandleSetCaption_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ContextualSearchJsApiService_HandleSetCaption_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ContextualSearchJsApiService_HandleSetCaption_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ContextualSearchJsApiService_HandleSetCaption_Params.validate = function(messageValidator, offset) {
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


    // validate ContextualSearchJsApiService_HandleSetCaption_Params.message
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  ContextualSearchJsApiService_HandleSetCaption_Params.encodedSize = codec.kStructHeaderSize + 16;

  ContextualSearchJsApiService_HandleSetCaption_Params.decode = function(decoder) {
    var packed;
    var val = new ContextualSearchJsApiService_HandleSetCaption_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.message = decoder.decodeStruct(codec.String);
    packed = decoder.readUint8();
    val.doesAnswer = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  ContextualSearchJsApiService_HandleSetCaption_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ContextualSearchJsApiService_HandleSetCaption_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.message);
    packed = 0;
    packed |= (val.doesAnswer & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  var kContextualSearchJsApiService_ShouldEnableJsApi_Name = 643554106;
  var kContextualSearchJsApiService_HandleSetCaption_Name = 1167490664;

  function ContextualSearchJsApiServicePtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(ContextualSearchJsApiService,
                                                   handleOrPtrInfo);
  }

  function ContextualSearchJsApiServiceAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        ContextualSearchJsApiService, associatedInterfacePtrInfo);
  }

  ContextualSearchJsApiServiceAssociatedPtr.prototype =
      Object.create(ContextualSearchJsApiServicePtr.prototype);
  ContextualSearchJsApiServiceAssociatedPtr.prototype.constructor =
      ContextualSearchJsApiServiceAssociatedPtr;

  function ContextualSearchJsApiServiceProxy(receiver) {
    this.receiver_ = receiver;
  }
  ContextualSearchJsApiServicePtr.prototype.shouldEnableJsApi = function() {
    return ContextualSearchJsApiServiceProxy.prototype.shouldEnableJsApi
        .apply(this.ptr.getProxy(), arguments);
  };

  ContextualSearchJsApiServiceProxy.prototype.shouldEnableJsApi = function(url) {
    var params_ = new ContextualSearchJsApiService_ShouldEnableJsApi_Params();
    params_.url = url;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kContextualSearchJsApiService_ShouldEnableJsApi_Name,
          codec.align(ContextualSearchJsApiService_ShouldEnableJsApi_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(ContextualSearchJsApiService_ShouldEnableJsApi_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(ContextualSearchJsApiService_ShouldEnableJsApi_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  ContextualSearchJsApiServicePtr.prototype.handleSetCaption = function() {
    return ContextualSearchJsApiServiceProxy.prototype.handleSetCaption
        .apply(this.ptr.getProxy(), arguments);
  };

  ContextualSearchJsApiServiceProxy.prototype.handleSetCaption = function(message, doesAnswer) {
    var params_ = new ContextualSearchJsApiService_HandleSetCaption_Params();
    params_.message = message;
    params_.doesAnswer = doesAnswer;
    var builder = new codec.MessageV0Builder(
        kContextualSearchJsApiService_HandleSetCaption_Name,
        codec.align(ContextualSearchJsApiService_HandleSetCaption_Params.encodedSize));
    builder.encodeStruct(ContextualSearchJsApiService_HandleSetCaption_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function ContextualSearchJsApiServiceStub(delegate) {
    this.delegate_ = delegate;
  }
  ContextualSearchJsApiServiceStub.prototype.shouldEnableJsApi = function(url) {
    return this.delegate_ && this.delegate_.shouldEnableJsApi && this.delegate_.shouldEnableJsApi(url);
  }
  ContextualSearchJsApiServiceStub.prototype.handleSetCaption = function(message, doesAnswer) {
    return this.delegate_ && this.delegate_.handleSetCaption && this.delegate_.handleSetCaption(message, doesAnswer);
  }

  ContextualSearchJsApiServiceStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kContextualSearchJsApiService_HandleSetCaption_Name:
      var params = reader.decodeStruct(ContextualSearchJsApiService_HandleSetCaption_Params);
      this.handleSetCaption(params.message, params.doesAnswer);
      return true;
    default:
      return false;
    }
  };

  ContextualSearchJsApiServiceStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kContextualSearchJsApiService_ShouldEnableJsApi_Name:
      var params = reader.decodeStruct(ContextualSearchJsApiService_ShouldEnableJsApi_Params);
      this.shouldEnableJsApi(params.url).then(function(response) {
        var responseParams =
            new ContextualSearchJsApiService_ShouldEnableJsApi_ResponseParams();
        responseParams.shouldEnable = response.shouldEnable;
        var builder = new codec.MessageV1Builder(
            kContextualSearchJsApiService_ShouldEnableJsApi_Name,
            codec.align(ContextualSearchJsApiService_ShouldEnableJsApi_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(ContextualSearchJsApiService_ShouldEnableJsApi_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    default:
      return false;
    }
  };

  function validateContextualSearchJsApiServiceRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kContextualSearchJsApiService_ShouldEnableJsApi_Name:
        if (message.expectsResponse())
          paramsClass = ContextualSearchJsApiService_ShouldEnableJsApi_Params;
      break;
      case kContextualSearchJsApiService_HandleSetCaption_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = ContextualSearchJsApiService_HandleSetCaption_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateContextualSearchJsApiServiceResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kContextualSearchJsApiService_ShouldEnableJsApi_Name:
        if (message.isResponse())
          paramsClass = ContextualSearchJsApiService_ShouldEnableJsApi_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var ContextualSearchJsApiService = {
    name: 'contextual_search.mojom.ContextualSearchJsApiService',
    kVersion: 0,
    ptrClass: ContextualSearchJsApiServicePtr,
    proxyClass: ContextualSearchJsApiServiceProxy,
    stubClass: ContextualSearchJsApiServiceStub,
    validateRequest: validateContextualSearchJsApiServiceRequest,
    validateResponse: validateContextualSearchJsApiServiceResponse,
    mojomId: 'components/contextual_search/common/contextual_search_js_api_service.mojom',
    fuzzMethods: {
      shouldEnableJsApi: {
        params: ContextualSearchJsApiService_ShouldEnableJsApi_Params,
      },
      handleSetCaption: {
        params: ContextualSearchJsApiService_HandleSetCaption_Params,
      },
    },
  };
  ContextualSearchJsApiServiceStub.prototype.validator = validateContextualSearchJsApiServiceRequest;
  ContextualSearchJsApiServiceProxy.prototype.validator = validateContextualSearchJsApiServiceResponse;
  exports.ContextualSearchJsApiService = ContextualSearchJsApiService;
  exports.ContextualSearchJsApiServicePtr = ContextualSearchJsApiServicePtr;
  exports.ContextualSearchJsApiServiceAssociatedPtr = ContextualSearchJsApiServiceAssociatedPtr;
})();