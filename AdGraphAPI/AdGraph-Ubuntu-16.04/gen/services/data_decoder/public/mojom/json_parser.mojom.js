// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'services/data_decoder/public/mojom/json_parser.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('dataDecoder.mojom');
  var values$ =
      mojo.internal.exposeNamespace('mojoBase.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'mojo/public/mojom/base/values.mojom', '../../../../mojo/public/mojom/base/values.mojom.js');
  }



  function JsonParser_Parse_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  JsonParser_Parse_Params.prototype.initDefaults_ = function() {
    this.json = null;
  };
  JsonParser_Parse_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  JsonParser_Parse_Params.generate = function(generator_) {
    var generated = new JsonParser_Parse_Params;
    generated.json = generator_.generateString(false);
    return generated;
  };

  JsonParser_Parse_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.json = mutator_.mutateString(this.json, false);
    }
    return this;
  };
  JsonParser_Parse_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  JsonParser_Parse_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  JsonParser_Parse_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  JsonParser_Parse_Params.validate = function(messageValidator, offset) {
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


    // validate JsonParser_Parse_Params.json
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  JsonParser_Parse_Params.encodedSize = codec.kStructHeaderSize + 8;

  JsonParser_Parse_Params.decode = function(decoder) {
    var packed;
    var val = new JsonParser_Parse_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.json = decoder.decodeStruct(codec.String);
    return val;
  };

  JsonParser_Parse_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(JsonParser_Parse_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.json);
  };
  function JsonParser_Parse_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  JsonParser_Parse_ResponseParams.prototype.initDefaults_ = function() {
    this.result = null;
    this.error = null;
  };
  JsonParser_Parse_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  JsonParser_Parse_ResponseParams.generate = function(generator_) {
    var generated = new JsonParser_Parse_ResponseParams;
    generated.result = generator_.generateUnion(mojoBase.mojom.Value, true);
    generated.error = generator_.generateString(true);
    return generated;
  };

  JsonParser_Parse_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.result = mutator_.mutateUnion(mojoBase.mojom.Value, true);
    }
    if (mutator_.chooseMutateField()) {
      this.error = mutator_.mutateString(this.error, true);
    }
    return this;
  };
  JsonParser_Parse_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  JsonParser_Parse_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  JsonParser_Parse_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  JsonParser_Parse_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate JsonParser_Parse_ResponseParams.result
    err = messageValidator.validateUnion(offset + codec.kStructHeaderSize + 0, values$.Value, true);
    if (err !== validator.validationError.NONE)
        return err;


    // validate JsonParser_Parse_ResponseParams.error
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 16, true)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  JsonParser_Parse_ResponseParams.encodedSize = codec.kStructHeaderSize + 24;

  JsonParser_Parse_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new JsonParser_Parse_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.result = decoder.decodeStruct(values$.Value);
    val.error = decoder.decodeStruct(codec.NullableString);
    return val;
  };

  JsonParser_Parse_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(JsonParser_Parse_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(values$.Value, val.result);
    encoder.encodeStruct(codec.NullableString, val.error);
  };
  var kJsonParser_Parse_Name = 1922389778;

  function JsonParserPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(JsonParser,
                                                   handleOrPtrInfo);
  }

  function JsonParserAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        JsonParser, associatedInterfacePtrInfo);
  }

  JsonParserAssociatedPtr.prototype =
      Object.create(JsonParserPtr.prototype);
  JsonParserAssociatedPtr.prototype.constructor =
      JsonParserAssociatedPtr;

  function JsonParserProxy(receiver) {
    this.receiver_ = receiver;
  }
  JsonParserPtr.prototype.parse = function() {
    return JsonParserProxy.prototype.parse
        .apply(this.ptr.getProxy(), arguments);
  };

  JsonParserProxy.prototype.parse = function(json) {
    var params_ = new JsonParser_Parse_Params();
    params_.json = json;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kJsonParser_Parse_Name,
          codec.align(JsonParser_Parse_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(JsonParser_Parse_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(JsonParser_Parse_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };

  function JsonParserStub(delegate) {
    this.delegate_ = delegate;
  }
  JsonParserStub.prototype.parse = function(json) {
    return this.delegate_ && this.delegate_.parse && this.delegate_.parse(json);
  }

  JsonParserStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  JsonParserStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kJsonParser_Parse_Name:
      var params = reader.decodeStruct(JsonParser_Parse_Params);
      this.parse(params.json).then(function(response) {
        var responseParams =
            new JsonParser_Parse_ResponseParams();
        responseParams.result = response.result;
        responseParams.error = response.error;
        var builder = new codec.MessageV1Builder(
            kJsonParser_Parse_Name,
            codec.align(JsonParser_Parse_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(JsonParser_Parse_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    default:
      return false;
    }
  };

  function validateJsonParserRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kJsonParser_Parse_Name:
        if (message.expectsResponse())
          paramsClass = JsonParser_Parse_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateJsonParserResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kJsonParser_Parse_Name:
        if (message.isResponse())
          paramsClass = JsonParser_Parse_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var JsonParser = {
    name: 'data_decoder.mojom.JsonParser',
    kVersion: 0,
    ptrClass: JsonParserPtr,
    proxyClass: JsonParserProxy,
    stubClass: JsonParserStub,
    validateRequest: validateJsonParserRequest,
    validateResponse: validateJsonParserResponse,
    mojomId: 'services/data_decoder/public/mojom/json_parser.mojom',
    fuzzMethods: {
      parse: {
        params: JsonParser_Parse_Params,
      },
    },
  };
  JsonParserStub.prototype.validator = validateJsonParserRequest;
  JsonParserProxy.prototype.validator = validateJsonParserResponse;
  exports.JsonParser = JsonParser;
  exports.JsonParserPtr = JsonParserPtr;
  exports.JsonParserAssociatedPtr = JsonParserAssociatedPtr;
})();