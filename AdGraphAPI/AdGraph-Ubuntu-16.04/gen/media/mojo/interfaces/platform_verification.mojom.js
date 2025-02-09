// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'media/mojo/interfaces/platform_verification.mojom';
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



  function PlatformVerification_ChallengePlatform_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PlatformVerification_ChallengePlatform_Params.prototype.initDefaults_ = function() {
    this.serviceId = null;
    this.challenge = null;
  };
  PlatformVerification_ChallengePlatform_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PlatformVerification_ChallengePlatform_Params.generate = function(generator_) {
    var generated = new PlatformVerification_ChallengePlatform_Params;
    generated.serviceId = generator_.generateString(false);
    generated.challenge = generator_.generateString(false);
    return generated;
  };

  PlatformVerification_ChallengePlatform_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.serviceId = mutator_.mutateString(this.serviceId, false);
    }
    if (mutator_.chooseMutateField()) {
      this.challenge = mutator_.mutateString(this.challenge, false);
    }
    return this;
  };
  PlatformVerification_ChallengePlatform_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PlatformVerification_ChallengePlatform_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PlatformVerification_ChallengePlatform_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PlatformVerification_ChallengePlatform_Params.validate = function(messageValidator, offset) {
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


    // validate PlatformVerification_ChallengePlatform_Params.serviceId
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate PlatformVerification_ChallengePlatform_Params.challenge
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PlatformVerification_ChallengePlatform_Params.encodedSize = codec.kStructHeaderSize + 16;

  PlatformVerification_ChallengePlatform_Params.decode = function(decoder) {
    var packed;
    var val = new PlatformVerification_ChallengePlatform_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.serviceId = decoder.decodeStruct(codec.String);
    val.challenge = decoder.decodeStruct(codec.String);
    return val;
  };

  PlatformVerification_ChallengePlatform_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PlatformVerification_ChallengePlatform_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.serviceId);
    encoder.encodeStruct(codec.String, val.challenge);
  };
  function PlatformVerification_ChallengePlatform_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PlatformVerification_ChallengePlatform_ResponseParams.prototype.initDefaults_ = function() {
    this.success = false;
    this.signedData = null;
    this.signedDataSignature = null;
    this.platformKeyCertificate = null;
  };
  PlatformVerification_ChallengePlatform_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PlatformVerification_ChallengePlatform_ResponseParams.generate = function(generator_) {
    var generated = new PlatformVerification_ChallengePlatform_ResponseParams;
    generated.success = generator_.generateBool();
    generated.signedData = generator_.generateString(false);
    generated.signedDataSignature = generator_.generateString(false);
    generated.platformKeyCertificate = generator_.generateString(false);
    return generated;
  };

  PlatformVerification_ChallengePlatform_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.success = mutator_.mutateBool(this.success);
    }
    if (mutator_.chooseMutateField()) {
      this.signedData = mutator_.mutateString(this.signedData, false);
    }
    if (mutator_.chooseMutateField()) {
      this.signedDataSignature = mutator_.mutateString(this.signedDataSignature, false);
    }
    if (mutator_.chooseMutateField()) {
      this.platformKeyCertificate = mutator_.mutateString(this.platformKeyCertificate, false);
    }
    return this;
  };
  PlatformVerification_ChallengePlatform_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PlatformVerification_ChallengePlatform_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PlatformVerification_ChallengePlatform_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PlatformVerification_ChallengePlatform_ResponseParams.validate = function(messageValidator, offset) {
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



    // validate PlatformVerification_ChallengePlatform_ResponseParams.signedData
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate PlatformVerification_ChallengePlatform_ResponseParams.signedDataSignature
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 16, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate PlatformVerification_ChallengePlatform_ResponseParams.platformKeyCertificate
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 24, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PlatformVerification_ChallengePlatform_ResponseParams.encodedSize = codec.kStructHeaderSize + 32;

  PlatformVerification_ChallengePlatform_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new PlatformVerification_ChallengePlatform_ResponseParams();
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
    val.signedData = decoder.decodeStruct(codec.String);
    val.signedDataSignature = decoder.decodeStruct(codec.String);
    val.platformKeyCertificate = decoder.decodeStruct(codec.String);
    return val;
  };

  PlatformVerification_ChallengePlatform_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PlatformVerification_ChallengePlatform_ResponseParams.encodedSize);
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
    encoder.encodeStruct(codec.String, val.signedData);
    encoder.encodeStruct(codec.String, val.signedDataSignature);
    encoder.encodeStruct(codec.String, val.platformKeyCertificate);
  };
  function PlatformVerification_GetStorageId_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PlatformVerification_GetStorageId_Params.prototype.initDefaults_ = function() {
    this.version = 0;
  };
  PlatformVerification_GetStorageId_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PlatformVerification_GetStorageId_Params.generate = function(generator_) {
    var generated = new PlatformVerification_GetStorageId_Params;
    generated.version = generator_.generateUint32();
    return generated;
  };

  PlatformVerification_GetStorageId_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.version = mutator_.mutateUint32(this.version);
    }
    return this;
  };
  PlatformVerification_GetStorageId_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PlatformVerification_GetStorageId_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PlatformVerification_GetStorageId_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PlatformVerification_GetStorageId_Params.validate = function(messageValidator, offset) {
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

  PlatformVerification_GetStorageId_Params.encodedSize = codec.kStructHeaderSize + 8;

  PlatformVerification_GetStorageId_Params.decode = function(decoder) {
    var packed;
    var val = new PlatformVerification_GetStorageId_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.version = decoder.decodeStruct(codec.Uint32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  PlatformVerification_GetStorageId_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PlatformVerification_GetStorageId_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint32, val.version);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function PlatformVerification_GetStorageId_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PlatformVerification_GetStorageId_ResponseParams.prototype.initDefaults_ = function() {
    this.version = 0;
    this.storageId = null;
  };
  PlatformVerification_GetStorageId_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PlatformVerification_GetStorageId_ResponseParams.generate = function(generator_) {
    var generated = new PlatformVerification_GetStorageId_ResponseParams;
    generated.version = generator_.generateUint32();
    generated.storageId = generator_.generateArray(function() {
      return generator_.generateUint8();
    });
    return generated;
  };

  PlatformVerification_GetStorageId_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.version = mutator_.mutateUint32(this.version);
    }
    if (mutator_.chooseMutateField()) {
      this.storageId = mutator_.mutateArray(this.storageId, function(val) {
        return mutator_.mutateUint8(val);
      });
    }
    return this;
  };
  PlatformVerification_GetStorageId_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PlatformVerification_GetStorageId_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PlatformVerification_GetStorageId_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PlatformVerification_GetStorageId_ResponseParams.validate = function(messageValidator, offset) {
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



    // validate PlatformVerification_GetStorageId_ResponseParams.storageId
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 1, codec.Uint8, false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PlatformVerification_GetStorageId_ResponseParams.encodedSize = codec.kStructHeaderSize + 16;

  PlatformVerification_GetStorageId_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new PlatformVerification_GetStorageId_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.version = decoder.decodeStruct(codec.Uint32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.storageId = decoder.decodeArrayPointer(codec.Uint8);
    return val;
  };

  PlatformVerification_GetStorageId_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PlatformVerification_GetStorageId_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint32, val.version);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeArrayPointer(codec.Uint8, val.storageId);
  };
  var kPlatformVerification_ChallengePlatform_Name = 1483957358;
  var kPlatformVerification_GetStorageId_Name = 1419785852;

  function PlatformVerificationPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(PlatformVerification,
                                                   handleOrPtrInfo);
  }

  function PlatformVerificationAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        PlatformVerification, associatedInterfacePtrInfo);
  }

  PlatformVerificationAssociatedPtr.prototype =
      Object.create(PlatformVerificationPtr.prototype);
  PlatformVerificationAssociatedPtr.prototype.constructor =
      PlatformVerificationAssociatedPtr;

  function PlatformVerificationProxy(receiver) {
    this.receiver_ = receiver;
  }
  PlatformVerificationPtr.prototype.challengePlatform = function() {
    return PlatformVerificationProxy.prototype.challengePlatform
        .apply(this.ptr.getProxy(), arguments);
  };

  PlatformVerificationProxy.prototype.challengePlatform = function(serviceId, challenge) {
    var params_ = new PlatformVerification_ChallengePlatform_Params();
    params_.serviceId = serviceId;
    params_.challenge = challenge;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kPlatformVerification_ChallengePlatform_Name,
          codec.align(PlatformVerification_ChallengePlatform_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(PlatformVerification_ChallengePlatform_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(PlatformVerification_ChallengePlatform_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  PlatformVerificationPtr.prototype.getStorageId = function() {
    return PlatformVerificationProxy.prototype.getStorageId
        .apply(this.ptr.getProxy(), arguments);
  };

  PlatformVerificationProxy.prototype.getStorageId = function(version) {
    var params_ = new PlatformVerification_GetStorageId_Params();
    params_.version = version;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kPlatformVerification_GetStorageId_Name,
          codec.align(PlatformVerification_GetStorageId_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(PlatformVerification_GetStorageId_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(PlatformVerification_GetStorageId_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };

  function PlatformVerificationStub(delegate) {
    this.delegate_ = delegate;
  }
  PlatformVerificationStub.prototype.challengePlatform = function(serviceId, challenge) {
    return this.delegate_ && this.delegate_.challengePlatform && this.delegate_.challengePlatform(serviceId, challenge);
  }
  PlatformVerificationStub.prototype.getStorageId = function(version) {
    return this.delegate_ && this.delegate_.getStorageId && this.delegate_.getStorageId(version);
  }

  PlatformVerificationStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  PlatformVerificationStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kPlatformVerification_ChallengePlatform_Name:
      var params = reader.decodeStruct(PlatformVerification_ChallengePlatform_Params);
      this.challengePlatform(params.serviceId, params.challenge).then(function(response) {
        var responseParams =
            new PlatformVerification_ChallengePlatform_ResponseParams();
        responseParams.success = response.success;
        responseParams.signedData = response.signedData;
        responseParams.signedDataSignature = response.signedDataSignature;
        responseParams.platformKeyCertificate = response.platformKeyCertificate;
        var builder = new codec.MessageV1Builder(
            kPlatformVerification_ChallengePlatform_Name,
            codec.align(PlatformVerification_ChallengePlatform_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(PlatformVerification_ChallengePlatform_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kPlatformVerification_GetStorageId_Name:
      var params = reader.decodeStruct(PlatformVerification_GetStorageId_Params);
      this.getStorageId(params.version).then(function(response) {
        var responseParams =
            new PlatformVerification_GetStorageId_ResponseParams();
        responseParams.version = response.version;
        responseParams.storageId = response.storageId;
        var builder = new codec.MessageV1Builder(
            kPlatformVerification_GetStorageId_Name,
            codec.align(PlatformVerification_GetStorageId_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(PlatformVerification_GetStorageId_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    default:
      return false;
    }
  };

  function validatePlatformVerificationRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kPlatformVerification_ChallengePlatform_Name:
        if (message.expectsResponse())
          paramsClass = PlatformVerification_ChallengePlatform_Params;
      break;
      case kPlatformVerification_GetStorageId_Name:
        if (message.expectsResponse())
          paramsClass = PlatformVerification_GetStorageId_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validatePlatformVerificationResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kPlatformVerification_ChallengePlatform_Name:
        if (message.isResponse())
          paramsClass = PlatformVerification_ChallengePlatform_ResponseParams;
        break;
      case kPlatformVerification_GetStorageId_Name:
        if (message.isResponse())
          paramsClass = PlatformVerification_GetStorageId_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var PlatformVerification = {
    name: 'media.mojom.PlatformVerification',
    kVersion: 0,
    ptrClass: PlatformVerificationPtr,
    proxyClass: PlatformVerificationProxy,
    stubClass: PlatformVerificationStub,
    validateRequest: validatePlatformVerificationRequest,
    validateResponse: validatePlatformVerificationResponse,
    mojomId: 'media/mojo/interfaces/platform_verification.mojom',
    fuzzMethods: {
      challengePlatform: {
        params: PlatformVerification_ChallengePlatform_Params,
      },
      getStorageId: {
        params: PlatformVerification_GetStorageId_Params,
      },
    },
  };
  PlatformVerificationStub.prototype.validator = validatePlatformVerificationRequest;
  PlatformVerificationProxy.prototype.validator = validatePlatformVerificationResponse;
  exports.PlatformVerification = PlatformVerification;
  exports.PlatformVerificationPtr = PlatformVerificationPtr;
  exports.PlatformVerificationAssociatedPtr = PlatformVerificationAssociatedPtr;
})();