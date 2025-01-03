// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'services/ui/public/interfaces/display/output_protection.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('display.mojom');



  function OutputProtection_QueryContentProtectionStatus_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  OutputProtection_QueryContentProtectionStatus_Params.prototype.initDefaults_ = function() {
    this.displayId = 0;
  };
  OutputProtection_QueryContentProtectionStatus_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  OutputProtection_QueryContentProtectionStatus_Params.generate = function(generator_) {
    var generated = new OutputProtection_QueryContentProtectionStatus_Params;
    generated.displayId = generator_.generateInt64();
    return generated;
  };

  OutputProtection_QueryContentProtectionStatus_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.displayId = mutator_.mutateInt64(this.displayId);
    }
    return this;
  };
  OutputProtection_QueryContentProtectionStatus_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  OutputProtection_QueryContentProtectionStatus_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  OutputProtection_QueryContentProtectionStatus_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  OutputProtection_QueryContentProtectionStatus_Params.validate = function(messageValidator, offset) {
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

  OutputProtection_QueryContentProtectionStatus_Params.encodedSize = codec.kStructHeaderSize + 8;

  OutputProtection_QueryContentProtectionStatus_Params.decode = function(decoder) {
    var packed;
    var val = new OutputProtection_QueryContentProtectionStatus_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.displayId = decoder.decodeStruct(codec.Int64);
    return val;
  };

  OutputProtection_QueryContentProtectionStatus_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(OutputProtection_QueryContentProtectionStatus_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int64, val.displayId);
  };
  function OutputProtection_QueryContentProtectionStatus_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  OutputProtection_QueryContentProtectionStatus_ResponseParams.prototype.initDefaults_ = function() {
    this.success = false;
    this.linkMask = 0;
    this.protectionMask = 0;
  };
  OutputProtection_QueryContentProtectionStatus_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  OutputProtection_QueryContentProtectionStatus_ResponseParams.generate = function(generator_) {
    var generated = new OutputProtection_QueryContentProtectionStatus_ResponseParams;
    generated.success = generator_.generateBool();
    generated.linkMask = generator_.generateUint32();
    generated.protectionMask = generator_.generateUint32();
    return generated;
  };

  OutputProtection_QueryContentProtectionStatus_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.success = mutator_.mutateBool(this.success);
    }
    if (mutator_.chooseMutateField()) {
      this.linkMask = mutator_.mutateUint32(this.linkMask);
    }
    if (mutator_.chooseMutateField()) {
      this.protectionMask = mutator_.mutateUint32(this.protectionMask);
    }
    return this;
  };
  OutputProtection_QueryContentProtectionStatus_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  OutputProtection_QueryContentProtectionStatus_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  OutputProtection_QueryContentProtectionStatus_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  OutputProtection_QueryContentProtectionStatus_ResponseParams.validate = function(messageValidator, offset) {
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

  OutputProtection_QueryContentProtectionStatus_ResponseParams.encodedSize = codec.kStructHeaderSize + 16;

  OutputProtection_QueryContentProtectionStatus_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new OutputProtection_QueryContentProtectionStatus_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.success = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.linkMask = decoder.decodeStruct(codec.Uint32);
    val.protectionMask = decoder.decodeStruct(codec.Uint32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  OutputProtection_QueryContentProtectionStatus_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(OutputProtection_QueryContentProtectionStatus_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.success & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.Uint32, val.linkMask);
    encoder.encodeStruct(codec.Uint32, val.protectionMask);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function OutputProtection_SetContentProtection_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  OutputProtection_SetContentProtection_Params.prototype.initDefaults_ = function() {
    this.displayId = 0;
    this.desiredMethodMask = 0;
  };
  OutputProtection_SetContentProtection_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  OutputProtection_SetContentProtection_Params.generate = function(generator_) {
    var generated = new OutputProtection_SetContentProtection_Params;
    generated.displayId = generator_.generateInt64();
    generated.desiredMethodMask = generator_.generateUint32();
    return generated;
  };

  OutputProtection_SetContentProtection_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.displayId = mutator_.mutateInt64(this.displayId);
    }
    if (mutator_.chooseMutateField()) {
      this.desiredMethodMask = mutator_.mutateUint32(this.desiredMethodMask);
    }
    return this;
  };
  OutputProtection_SetContentProtection_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  OutputProtection_SetContentProtection_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  OutputProtection_SetContentProtection_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  OutputProtection_SetContentProtection_Params.validate = function(messageValidator, offset) {
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

  OutputProtection_SetContentProtection_Params.encodedSize = codec.kStructHeaderSize + 16;

  OutputProtection_SetContentProtection_Params.decode = function(decoder) {
    var packed;
    var val = new OutputProtection_SetContentProtection_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.displayId = decoder.decodeStruct(codec.Int64);
    val.desiredMethodMask = decoder.decodeStruct(codec.Uint32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  OutputProtection_SetContentProtection_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(OutputProtection_SetContentProtection_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int64, val.displayId);
    encoder.encodeStruct(codec.Uint32, val.desiredMethodMask);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function OutputProtection_SetContentProtection_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  OutputProtection_SetContentProtection_ResponseParams.prototype.initDefaults_ = function() {
    this.success = false;
  };
  OutputProtection_SetContentProtection_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  OutputProtection_SetContentProtection_ResponseParams.generate = function(generator_) {
    var generated = new OutputProtection_SetContentProtection_ResponseParams;
    generated.success = generator_.generateBool();
    return generated;
  };

  OutputProtection_SetContentProtection_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.success = mutator_.mutateBool(this.success);
    }
    return this;
  };
  OutputProtection_SetContentProtection_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  OutputProtection_SetContentProtection_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  OutputProtection_SetContentProtection_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  OutputProtection_SetContentProtection_ResponseParams.validate = function(messageValidator, offset) {
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

  OutputProtection_SetContentProtection_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  OutputProtection_SetContentProtection_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new OutputProtection_SetContentProtection_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.success = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  OutputProtection_SetContentProtection_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(OutputProtection_SetContentProtection_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.success & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  var kOutputProtection_QueryContentProtectionStatus_Name = 1055117832;
  var kOutputProtection_SetContentProtection_Name = 749122395;

  function OutputProtectionPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(OutputProtection,
                                                   handleOrPtrInfo);
  }

  function OutputProtectionAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        OutputProtection, associatedInterfacePtrInfo);
  }

  OutputProtectionAssociatedPtr.prototype =
      Object.create(OutputProtectionPtr.prototype);
  OutputProtectionAssociatedPtr.prototype.constructor =
      OutputProtectionAssociatedPtr;

  function OutputProtectionProxy(receiver) {
    this.receiver_ = receiver;
  }
  OutputProtectionPtr.prototype.queryContentProtectionStatus = function() {
    return OutputProtectionProxy.prototype.queryContentProtectionStatus
        .apply(this.ptr.getProxy(), arguments);
  };

  OutputProtectionProxy.prototype.queryContentProtectionStatus = function(displayId) {
    var params_ = new OutputProtection_QueryContentProtectionStatus_Params();
    params_.displayId = displayId;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kOutputProtection_QueryContentProtectionStatus_Name,
          codec.align(OutputProtection_QueryContentProtectionStatus_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(OutputProtection_QueryContentProtectionStatus_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(OutputProtection_QueryContentProtectionStatus_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  OutputProtectionPtr.prototype.setContentProtection = function() {
    return OutputProtectionProxy.prototype.setContentProtection
        .apply(this.ptr.getProxy(), arguments);
  };

  OutputProtectionProxy.prototype.setContentProtection = function(displayId, desiredMethodMask) {
    var params_ = new OutputProtection_SetContentProtection_Params();
    params_.displayId = displayId;
    params_.desiredMethodMask = desiredMethodMask;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kOutputProtection_SetContentProtection_Name,
          codec.align(OutputProtection_SetContentProtection_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(OutputProtection_SetContentProtection_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(OutputProtection_SetContentProtection_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };

  function OutputProtectionStub(delegate) {
    this.delegate_ = delegate;
  }
  OutputProtectionStub.prototype.queryContentProtectionStatus = function(displayId) {
    return this.delegate_ && this.delegate_.queryContentProtectionStatus && this.delegate_.queryContentProtectionStatus(displayId);
  }
  OutputProtectionStub.prototype.setContentProtection = function(displayId, desiredMethodMask) {
    return this.delegate_ && this.delegate_.setContentProtection && this.delegate_.setContentProtection(displayId, desiredMethodMask);
  }

  OutputProtectionStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  OutputProtectionStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kOutputProtection_QueryContentProtectionStatus_Name:
      var params = reader.decodeStruct(OutputProtection_QueryContentProtectionStatus_Params);
      this.queryContentProtectionStatus(params.displayId).then(function(response) {
        var responseParams =
            new OutputProtection_QueryContentProtectionStatus_ResponseParams();
        responseParams.success = response.success;
        responseParams.linkMask = response.linkMask;
        responseParams.protectionMask = response.protectionMask;
        var builder = new codec.MessageV1Builder(
            kOutputProtection_QueryContentProtectionStatus_Name,
            codec.align(OutputProtection_QueryContentProtectionStatus_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(OutputProtection_QueryContentProtectionStatus_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kOutputProtection_SetContentProtection_Name:
      var params = reader.decodeStruct(OutputProtection_SetContentProtection_Params);
      this.setContentProtection(params.displayId, params.desiredMethodMask).then(function(response) {
        var responseParams =
            new OutputProtection_SetContentProtection_ResponseParams();
        responseParams.success = response.success;
        var builder = new codec.MessageV1Builder(
            kOutputProtection_SetContentProtection_Name,
            codec.align(OutputProtection_SetContentProtection_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(OutputProtection_SetContentProtection_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    default:
      return false;
    }
  };

  function validateOutputProtectionRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kOutputProtection_QueryContentProtectionStatus_Name:
        if (message.expectsResponse())
          paramsClass = OutputProtection_QueryContentProtectionStatus_Params;
      break;
      case kOutputProtection_SetContentProtection_Name:
        if (message.expectsResponse())
          paramsClass = OutputProtection_SetContentProtection_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateOutputProtectionResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kOutputProtection_QueryContentProtectionStatus_Name:
        if (message.isResponse())
          paramsClass = OutputProtection_QueryContentProtectionStatus_ResponseParams;
        break;
      case kOutputProtection_SetContentProtection_Name:
        if (message.isResponse())
          paramsClass = OutputProtection_SetContentProtection_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var OutputProtection = {
    name: 'display.mojom.OutputProtection',
    kVersion: 0,
    ptrClass: OutputProtectionPtr,
    proxyClass: OutputProtectionProxy,
    stubClass: OutputProtectionStub,
    validateRequest: validateOutputProtectionRequest,
    validateResponse: validateOutputProtectionResponse,
    mojomId: 'services/ui/public/interfaces/display/output_protection.mojom',
    fuzzMethods: {
      queryContentProtectionStatus: {
        params: OutputProtection_QueryContentProtectionStatus_Params,
      },
      setContentProtection: {
        params: OutputProtection_SetContentProtection_Params,
      },
    },
  };
  OutputProtectionStub.prototype.validator = validateOutputProtectionRequest;
  OutputProtectionProxy.prototype.validator = validateOutputProtectionResponse;
  exports.OutputProtection = OutputProtection;
  exports.OutputProtectionPtr = OutputProtectionPtr;
  exports.OutputProtectionAssociatedPtr = OutputProtectionAssociatedPtr;
})();