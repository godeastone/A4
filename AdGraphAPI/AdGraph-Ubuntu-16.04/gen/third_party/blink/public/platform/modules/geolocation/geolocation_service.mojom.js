// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'third_party/blink/public/platform/modules/geolocation/geolocation_service.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('blink.mojom');
  var geolocation$ =
      mojo.internal.exposeNamespace('device.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'services/device/public/mojom/geolocation.mojom', '../../../../../../services/device/public/mojom/geolocation.mojom.js');
  }



  function GeolocationService_CreateGeolocation_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  GeolocationService_CreateGeolocation_Params.prototype.initDefaults_ = function() {
    this.request = new bindings.InterfaceRequest();
    this.userGesture = false;
  };
  GeolocationService_CreateGeolocation_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  GeolocationService_CreateGeolocation_Params.generate = function(generator_) {
    var generated = new GeolocationService_CreateGeolocation_Params;
    generated.request = generator_.generateInterfaceRequest("device.mojom.Geolocation", false);
    generated.userGesture = generator_.generateBool();
    return generated;
  };

  GeolocationService_CreateGeolocation_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.request = mutator_.mutateInterfaceRequest(this.request, "device.mojom.Geolocation", false);
    }
    if (mutator_.chooseMutateField()) {
      this.userGesture = mutator_.mutateBool(this.userGesture);
    }
    return this;
  };
  GeolocationService_CreateGeolocation_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.request !== null) {
      Array.prototype.push.apply(handles, ["device.mojom.GeolocationRequest"]);
    }
    return handles;
  };

  GeolocationService_CreateGeolocation_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  GeolocationService_CreateGeolocation_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.request = handles[idx++];;
    return idx;
  };

  GeolocationService_CreateGeolocation_Params.validate = function(messageValidator, offset) {
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


    // validate GeolocationService_CreateGeolocation_Params.request
    err = messageValidator.validateInterfaceRequest(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  GeolocationService_CreateGeolocation_Params.encodedSize = codec.kStructHeaderSize + 8;

  GeolocationService_CreateGeolocation_Params.decode = function(decoder) {
    var packed;
    var val = new GeolocationService_CreateGeolocation_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.request = decoder.decodeStruct(codec.InterfaceRequest);
    packed = decoder.readUint8();
    val.userGesture = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  GeolocationService_CreateGeolocation_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(GeolocationService_CreateGeolocation_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.InterfaceRequest, val.request);
    packed = 0;
    packed |= (val.userGesture & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  var kGeolocationService_CreateGeolocation_Name = 1330620059;

  function GeolocationServicePtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(GeolocationService,
                                                   handleOrPtrInfo);
  }

  function GeolocationServiceAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        GeolocationService, associatedInterfacePtrInfo);
  }

  GeolocationServiceAssociatedPtr.prototype =
      Object.create(GeolocationServicePtr.prototype);
  GeolocationServiceAssociatedPtr.prototype.constructor =
      GeolocationServiceAssociatedPtr;

  function GeolocationServiceProxy(receiver) {
    this.receiver_ = receiver;
  }
  GeolocationServicePtr.prototype.createGeolocation = function() {
    return GeolocationServiceProxy.prototype.createGeolocation
        .apply(this.ptr.getProxy(), arguments);
  };

  GeolocationServiceProxy.prototype.createGeolocation = function(request, userGesture) {
    var params_ = new GeolocationService_CreateGeolocation_Params();
    params_.request = request;
    params_.userGesture = userGesture;
    var builder = new codec.MessageV0Builder(
        kGeolocationService_CreateGeolocation_Name,
        codec.align(GeolocationService_CreateGeolocation_Params.encodedSize));
    builder.encodeStruct(GeolocationService_CreateGeolocation_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function GeolocationServiceStub(delegate) {
    this.delegate_ = delegate;
  }
  GeolocationServiceStub.prototype.createGeolocation = function(request, userGesture) {
    return this.delegate_ && this.delegate_.createGeolocation && this.delegate_.createGeolocation(request, userGesture);
  }

  GeolocationServiceStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kGeolocationService_CreateGeolocation_Name:
      var params = reader.decodeStruct(GeolocationService_CreateGeolocation_Params);
      this.createGeolocation(params.request, params.userGesture);
      return true;
    default:
      return false;
    }
  };

  GeolocationServiceStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateGeolocationServiceRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kGeolocationService_CreateGeolocation_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = GeolocationService_CreateGeolocation_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateGeolocationServiceResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var GeolocationService = {
    name: 'blink.mojom.GeolocationService',
    kVersion: 0,
    ptrClass: GeolocationServicePtr,
    proxyClass: GeolocationServiceProxy,
    stubClass: GeolocationServiceStub,
    validateRequest: validateGeolocationServiceRequest,
    validateResponse: null,
    mojomId: 'third_party/blink/public/platform/modules/geolocation/geolocation_service.mojom',
    fuzzMethods: {
      createGeolocation: {
        params: GeolocationService_CreateGeolocation_Params,
      },
    },
  };
  GeolocationServiceStub.prototype.validator = validateGeolocationServiceRequest;
  GeolocationServiceProxy.prototype.validator = null;
  exports.GeolocationService = GeolocationService;
  exports.GeolocationServicePtr = GeolocationServicePtr;
  exports.GeolocationServiceAssociatedPtr = GeolocationServiceAssociatedPtr;
})();