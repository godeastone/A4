// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'services/device/public/mojom/geolocation_control.mojom';
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



  function GeolocationControl_UserDidOptIntoLocationServices_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  GeolocationControl_UserDidOptIntoLocationServices_Params.prototype.initDefaults_ = function() {
  };
  GeolocationControl_UserDidOptIntoLocationServices_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  GeolocationControl_UserDidOptIntoLocationServices_Params.generate = function(generator_) {
    var generated = new GeolocationControl_UserDidOptIntoLocationServices_Params;
    return generated;
  };

  GeolocationControl_UserDidOptIntoLocationServices_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  GeolocationControl_UserDidOptIntoLocationServices_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  GeolocationControl_UserDidOptIntoLocationServices_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  GeolocationControl_UserDidOptIntoLocationServices_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  GeolocationControl_UserDidOptIntoLocationServices_Params.validate = function(messageValidator, offset) {
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

  GeolocationControl_UserDidOptIntoLocationServices_Params.encodedSize = codec.kStructHeaderSize + 0;

  GeolocationControl_UserDidOptIntoLocationServices_Params.decode = function(decoder) {
    var packed;
    var val = new GeolocationControl_UserDidOptIntoLocationServices_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  GeolocationControl_UserDidOptIntoLocationServices_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(GeolocationControl_UserDidOptIntoLocationServices_Params.encodedSize);
    encoder.writeUint32(0);
  };
  var kGeolocationControl_UserDidOptIntoLocationServices_Name = 1653643069;

  function GeolocationControlPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(GeolocationControl,
                                                   handleOrPtrInfo);
  }

  function GeolocationControlAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        GeolocationControl, associatedInterfacePtrInfo);
  }

  GeolocationControlAssociatedPtr.prototype =
      Object.create(GeolocationControlPtr.prototype);
  GeolocationControlAssociatedPtr.prototype.constructor =
      GeolocationControlAssociatedPtr;

  function GeolocationControlProxy(receiver) {
    this.receiver_ = receiver;
  }
  GeolocationControlPtr.prototype.userDidOptIntoLocationServices = function() {
    return GeolocationControlProxy.prototype.userDidOptIntoLocationServices
        .apply(this.ptr.getProxy(), arguments);
  };

  GeolocationControlProxy.prototype.userDidOptIntoLocationServices = function() {
    var params_ = new GeolocationControl_UserDidOptIntoLocationServices_Params();
    var builder = new codec.MessageV0Builder(
        kGeolocationControl_UserDidOptIntoLocationServices_Name,
        codec.align(GeolocationControl_UserDidOptIntoLocationServices_Params.encodedSize));
    builder.encodeStruct(GeolocationControl_UserDidOptIntoLocationServices_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function GeolocationControlStub(delegate) {
    this.delegate_ = delegate;
  }
  GeolocationControlStub.prototype.userDidOptIntoLocationServices = function() {
    return this.delegate_ && this.delegate_.userDidOptIntoLocationServices && this.delegate_.userDidOptIntoLocationServices();
  }

  GeolocationControlStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kGeolocationControl_UserDidOptIntoLocationServices_Name:
      var params = reader.decodeStruct(GeolocationControl_UserDidOptIntoLocationServices_Params);
      this.userDidOptIntoLocationServices();
      return true;
    default:
      return false;
    }
  };

  GeolocationControlStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateGeolocationControlRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kGeolocationControl_UserDidOptIntoLocationServices_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = GeolocationControl_UserDidOptIntoLocationServices_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateGeolocationControlResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var GeolocationControl = {
    name: 'device.mojom.GeolocationControl',
    kVersion: 0,
    ptrClass: GeolocationControlPtr,
    proxyClass: GeolocationControlProxy,
    stubClass: GeolocationControlStub,
    validateRequest: validateGeolocationControlRequest,
    validateResponse: null,
    mojomId: 'services/device/public/mojom/geolocation_control.mojom',
    fuzzMethods: {
      userDidOptIntoLocationServices: {
        params: GeolocationControl_UserDidOptIntoLocationServices_Params,
      },
    },
  };
  GeolocationControlStub.prototype.validator = validateGeolocationControlRequest;
  GeolocationControlProxy.prototype.validator = null;
  exports.GeolocationControl = GeolocationControl;
  exports.GeolocationControlPtr = GeolocationControlPtr;
  exports.GeolocationControlAssociatedPtr = GeolocationControlAssociatedPtr;
})();