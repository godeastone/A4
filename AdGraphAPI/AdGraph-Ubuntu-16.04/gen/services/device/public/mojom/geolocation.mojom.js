// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'services/device/public/mojom/geolocation.mojom';
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
  var geoposition$ =
      mojo.internal.exposeNamespace('device.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'services/device/public/mojom/geoposition.mojom', 'geoposition.mojom.js');
  }



  function Geolocation_SetHighAccuracy_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Geolocation_SetHighAccuracy_Params.prototype.initDefaults_ = function() {
    this.highAccuracy = false;
  };
  Geolocation_SetHighAccuracy_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Geolocation_SetHighAccuracy_Params.generate = function(generator_) {
    var generated = new Geolocation_SetHighAccuracy_Params;
    generated.highAccuracy = generator_.generateBool();
    return generated;
  };

  Geolocation_SetHighAccuracy_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.highAccuracy = mutator_.mutateBool(this.highAccuracy);
    }
    return this;
  };
  Geolocation_SetHighAccuracy_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Geolocation_SetHighAccuracy_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Geolocation_SetHighAccuracy_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Geolocation_SetHighAccuracy_Params.validate = function(messageValidator, offset) {
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

  Geolocation_SetHighAccuracy_Params.encodedSize = codec.kStructHeaderSize + 8;

  Geolocation_SetHighAccuracy_Params.decode = function(decoder) {
    var packed;
    var val = new Geolocation_SetHighAccuracy_Params();
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

  Geolocation_SetHighAccuracy_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Geolocation_SetHighAccuracy_Params.encodedSize);
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
  function Geolocation_QueryNextPosition_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Geolocation_QueryNextPosition_Params.prototype.initDefaults_ = function() {
  };
  Geolocation_QueryNextPosition_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Geolocation_QueryNextPosition_Params.generate = function(generator_) {
    var generated = new Geolocation_QueryNextPosition_Params;
    return generated;
  };

  Geolocation_QueryNextPosition_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  Geolocation_QueryNextPosition_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Geolocation_QueryNextPosition_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Geolocation_QueryNextPosition_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Geolocation_QueryNextPosition_Params.validate = function(messageValidator, offset) {
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

  Geolocation_QueryNextPosition_Params.encodedSize = codec.kStructHeaderSize + 0;

  Geolocation_QueryNextPosition_Params.decode = function(decoder) {
    var packed;
    var val = new Geolocation_QueryNextPosition_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  Geolocation_QueryNextPosition_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Geolocation_QueryNextPosition_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function Geolocation_QueryNextPosition_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Geolocation_QueryNextPosition_ResponseParams.prototype.initDefaults_ = function() {
    this.geoposition = null;
  };
  Geolocation_QueryNextPosition_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Geolocation_QueryNextPosition_ResponseParams.generate = function(generator_) {
    var generated = new Geolocation_QueryNextPosition_ResponseParams;
    generated.geoposition = generator_.generateStruct(device.mojom.Geoposition, false);
    return generated;
  };

  Geolocation_QueryNextPosition_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.geoposition = mutator_.mutateStruct(device.mojom.Geoposition, false);
    }
    return this;
  };
  Geolocation_QueryNextPosition_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Geolocation_QueryNextPosition_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Geolocation_QueryNextPosition_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Geolocation_QueryNextPosition_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate Geolocation_QueryNextPosition_ResponseParams.geoposition
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, geoposition$.Geoposition, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Geolocation_QueryNextPosition_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  Geolocation_QueryNextPosition_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new Geolocation_QueryNextPosition_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.geoposition = decoder.decodeStructPointer(geoposition$.Geoposition);
    return val;
  };

  Geolocation_QueryNextPosition_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Geolocation_QueryNextPosition_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(geoposition$.Geoposition, val.geoposition);
  };
  var kGeolocation_SetHighAccuracy_Name = 354510794;
  var kGeolocation_QueryNextPosition_Name = 1737137071;

  function GeolocationPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(Geolocation,
                                                   handleOrPtrInfo);
  }

  function GeolocationAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        Geolocation, associatedInterfacePtrInfo);
  }

  GeolocationAssociatedPtr.prototype =
      Object.create(GeolocationPtr.prototype);
  GeolocationAssociatedPtr.prototype.constructor =
      GeolocationAssociatedPtr;

  function GeolocationProxy(receiver) {
    this.receiver_ = receiver;
  }
  GeolocationPtr.prototype.setHighAccuracy = function() {
    return GeolocationProxy.prototype.setHighAccuracy
        .apply(this.ptr.getProxy(), arguments);
  };

  GeolocationProxy.prototype.setHighAccuracy = function(highAccuracy) {
    var params_ = new Geolocation_SetHighAccuracy_Params();
    params_.highAccuracy = highAccuracy;
    var builder = new codec.MessageV0Builder(
        kGeolocation_SetHighAccuracy_Name,
        codec.align(Geolocation_SetHighAccuracy_Params.encodedSize));
    builder.encodeStruct(Geolocation_SetHighAccuracy_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  GeolocationPtr.prototype.queryNextPosition = function() {
    return GeolocationProxy.prototype.queryNextPosition
        .apply(this.ptr.getProxy(), arguments);
  };

  GeolocationProxy.prototype.queryNextPosition = function() {
    var params_ = new Geolocation_QueryNextPosition_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kGeolocation_QueryNextPosition_Name,
          codec.align(Geolocation_QueryNextPosition_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(Geolocation_QueryNextPosition_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(Geolocation_QueryNextPosition_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };

  function GeolocationStub(delegate) {
    this.delegate_ = delegate;
  }
  GeolocationStub.prototype.setHighAccuracy = function(highAccuracy) {
    return this.delegate_ && this.delegate_.setHighAccuracy && this.delegate_.setHighAccuracy(highAccuracy);
  }
  GeolocationStub.prototype.queryNextPosition = function() {
    return this.delegate_ && this.delegate_.queryNextPosition && this.delegate_.queryNextPosition();
  }

  GeolocationStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kGeolocation_SetHighAccuracy_Name:
      var params = reader.decodeStruct(Geolocation_SetHighAccuracy_Params);
      this.setHighAccuracy(params.highAccuracy);
      return true;
    default:
      return false;
    }
  };

  GeolocationStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kGeolocation_QueryNextPosition_Name:
      var params = reader.decodeStruct(Geolocation_QueryNextPosition_Params);
      this.queryNextPosition().then(function(response) {
        var responseParams =
            new Geolocation_QueryNextPosition_ResponseParams();
        responseParams.geoposition = response.geoposition;
        var builder = new codec.MessageV1Builder(
            kGeolocation_QueryNextPosition_Name,
            codec.align(Geolocation_QueryNextPosition_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(Geolocation_QueryNextPosition_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    default:
      return false;
    }
  };

  function validateGeolocationRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kGeolocation_SetHighAccuracy_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = Geolocation_SetHighAccuracy_Params;
      break;
      case kGeolocation_QueryNextPosition_Name:
        if (message.expectsResponse())
          paramsClass = Geolocation_QueryNextPosition_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateGeolocationResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kGeolocation_QueryNextPosition_Name:
        if (message.isResponse())
          paramsClass = Geolocation_QueryNextPosition_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var Geolocation = {
    name: 'device.mojom.Geolocation',
    kVersion: 0,
    ptrClass: GeolocationPtr,
    proxyClass: GeolocationProxy,
    stubClass: GeolocationStub,
    validateRequest: validateGeolocationRequest,
    validateResponse: validateGeolocationResponse,
    mojomId: 'services/device/public/mojom/geolocation.mojom',
    fuzzMethods: {
      setHighAccuracy: {
        params: Geolocation_SetHighAccuracy_Params,
      },
      queryNextPosition: {
        params: Geolocation_QueryNextPosition_Params,
      },
    },
  };
  GeolocationStub.prototype.validator = validateGeolocationRequest;
  GeolocationProxy.prototype.validator = validateGeolocationResponse;
  exports.Geolocation = Geolocation;
  exports.GeolocationPtr = GeolocationPtr;
  exports.GeolocationAssociatedPtr = GeolocationAssociatedPtr;
})();