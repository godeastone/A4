// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'services/device/public/mojom/geolocation_config.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('device.mojom');



  function GeolocationConfig_IsHighAccuracyLocationBeingCaptured_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  GeolocationConfig_IsHighAccuracyLocationBeingCaptured_Params.prototype.initDefaults_ = function() {
  };
  GeolocationConfig_IsHighAccuracyLocationBeingCaptured_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  GeolocationConfig_IsHighAccuracyLocationBeingCaptured_Params.generate = function(generator_) {
    var generated = new GeolocationConfig_IsHighAccuracyLocationBeingCaptured_Params;
    return generated;
  };

  GeolocationConfig_IsHighAccuracyLocationBeingCaptured_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  GeolocationConfig_IsHighAccuracyLocationBeingCaptured_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  GeolocationConfig_IsHighAccuracyLocationBeingCaptured_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  GeolocationConfig_IsHighAccuracyLocationBeingCaptured_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  GeolocationConfig_IsHighAccuracyLocationBeingCaptured_Params.validate = function(messageValidator, offset) {
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

  GeolocationConfig_IsHighAccuracyLocationBeingCaptured_Params.encodedSize = codec.kStructHeaderSize + 0;

  GeolocationConfig_IsHighAccuracyLocationBeingCaptured_Params.decode = function(decoder) {
    var packed;
    var val = new GeolocationConfig_IsHighAccuracyLocationBeingCaptured_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  GeolocationConfig_IsHighAccuracyLocationBeingCaptured_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(GeolocationConfig_IsHighAccuracyLocationBeingCaptured_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function GeolocationConfig_IsHighAccuracyLocationBeingCaptured_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  GeolocationConfig_IsHighAccuracyLocationBeingCaptured_ResponseParams.prototype.initDefaults_ = function() {
    this.highAccuracy = false;
  };
  GeolocationConfig_IsHighAccuracyLocationBeingCaptured_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  GeolocationConfig_IsHighAccuracyLocationBeingCaptured_ResponseParams.generate = function(generator_) {
    var generated = new GeolocationConfig_IsHighAccuracyLocationBeingCaptured_ResponseParams;
    generated.highAccuracy = generator_.generateBool();
    return generated;
  };

  GeolocationConfig_IsHighAccuracyLocationBeingCaptured_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.highAccuracy = mutator_.mutateBool(this.highAccuracy);
    }
    return this;
  };
  GeolocationConfig_IsHighAccuracyLocationBeingCaptured_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  GeolocationConfig_IsHighAccuracyLocationBeingCaptured_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  GeolocationConfig_IsHighAccuracyLocationBeingCaptured_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  GeolocationConfig_IsHighAccuracyLocationBeingCaptured_ResponseParams.validate = function(messageValidator, offset) {
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

  GeolocationConfig_IsHighAccuracyLocationBeingCaptured_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  GeolocationConfig_IsHighAccuracyLocationBeingCaptured_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new GeolocationConfig_IsHighAccuracyLocationBeingCaptured_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.highAccuracy = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  GeolocationConfig_IsHighAccuracyLocationBeingCaptured_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(GeolocationConfig_IsHighAccuracyLocationBeingCaptured_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.highAccuracy & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  var kGeolocationConfig_IsHighAccuracyLocationBeingCaptured_Name = 228121161;

  function GeolocationConfigPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(GeolocationConfig,
                                                   handleOrPtrInfo);
  }

  function GeolocationConfigAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        GeolocationConfig, associatedInterfacePtrInfo);
  }

  GeolocationConfigAssociatedPtr.prototype =
      Object.create(GeolocationConfigPtr.prototype);
  GeolocationConfigAssociatedPtr.prototype.constructor =
      GeolocationConfigAssociatedPtr;

  function GeolocationConfigProxy(receiver) {
    this.receiver_ = receiver;
  }
  GeolocationConfigPtr.prototype.isHighAccuracyLocationBeingCaptured = function() {
    return GeolocationConfigProxy.prototype.isHighAccuracyLocationBeingCaptured
        .apply(this.ptr.getProxy(), arguments);
  };

  GeolocationConfigProxy.prototype.isHighAccuracyLocationBeingCaptured = function() {
    var params_ = new GeolocationConfig_IsHighAccuracyLocationBeingCaptured_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kGeolocationConfig_IsHighAccuracyLocationBeingCaptured_Name,
          codec.align(GeolocationConfig_IsHighAccuracyLocationBeingCaptured_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(GeolocationConfig_IsHighAccuracyLocationBeingCaptured_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(GeolocationConfig_IsHighAccuracyLocationBeingCaptured_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };

  function GeolocationConfigStub(delegate) {
    this.delegate_ = delegate;
  }
  GeolocationConfigStub.prototype.isHighAccuracyLocationBeingCaptured = function() {
    return this.delegate_ && this.delegate_.isHighAccuracyLocationBeingCaptured && this.delegate_.isHighAccuracyLocationBeingCaptured();
  }

  GeolocationConfigStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  GeolocationConfigStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kGeolocationConfig_IsHighAccuracyLocationBeingCaptured_Name:
      var params = reader.decodeStruct(GeolocationConfig_IsHighAccuracyLocationBeingCaptured_Params);
      this.isHighAccuracyLocationBeingCaptured().then(function(response) {
        var responseParams =
            new GeolocationConfig_IsHighAccuracyLocationBeingCaptured_ResponseParams();
        responseParams.highAccuracy = response.highAccuracy;
        var builder = new codec.MessageV1Builder(
            kGeolocationConfig_IsHighAccuracyLocationBeingCaptured_Name,
            codec.align(GeolocationConfig_IsHighAccuracyLocationBeingCaptured_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(GeolocationConfig_IsHighAccuracyLocationBeingCaptured_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    default:
      return false;
    }
  };

  function validateGeolocationConfigRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kGeolocationConfig_IsHighAccuracyLocationBeingCaptured_Name:
        if (message.expectsResponse())
          paramsClass = GeolocationConfig_IsHighAccuracyLocationBeingCaptured_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateGeolocationConfigResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kGeolocationConfig_IsHighAccuracyLocationBeingCaptured_Name:
        if (message.isResponse())
          paramsClass = GeolocationConfig_IsHighAccuracyLocationBeingCaptured_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var GeolocationConfig = {
    name: 'device.mojom.GeolocationConfig',
    kVersion: 0,
    ptrClass: GeolocationConfigPtr,
    proxyClass: GeolocationConfigProxy,
    stubClass: GeolocationConfigStub,
    validateRequest: validateGeolocationConfigRequest,
    validateResponse: validateGeolocationConfigResponse,
    mojomId: 'services/device/public/mojom/geolocation_config.mojom',
    fuzzMethods: {
      isHighAccuracyLocationBeingCaptured: {
        params: GeolocationConfig_IsHighAccuracyLocationBeingCaptured_Params,
      },
    },
  };
  GeolocationConfigStub.prototype.validator = validateGeolocationConfigRequest;
  GeolocationConfigProxy.prototype.validator = validateGeolocationConfigResponse;
  exports.GeolocationConfig = GeolocationConfig;
  exports.GeolocationConfigPtr = GeolocationConfigPtr;
  exports.GeolocationConfigAssociatedPtr = GeolocationConfigAssociatedPtr;
})();