// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'services/service_manager/public/mojom/service_control.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('serviceManager.mojom');



  function ServiceControl_RequestQuit_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ServiceControl_RequestQuit_Params.prototype.initDefaults_ = function() {
  };
  ServiceControl_RequestQuit_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ServiceControl_RequestQuit_Params.generate = function(generator_) {
    var generated = new ServiceControl_RequestQuit_Params;
    return generated;
  };

  ServiceControl_RequestQuit_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  ServiceControl_RequestQuit_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ServiceControl_RequestQuit_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ServiceControl_RequestQuit_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ServiceControl_RequestQuit_Params.validate = function(messageValidator, offset) {
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

  ServiceControl_RequestQuit_Params.encodedSize = codec.kStructHeaderSize + 0;

  ServiceControl_RequestQuit_Params.decode = function(decoder) {
    var packed;
    var val = new ServiceControl_RequestQuit_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  ServiceControl_RequestQuit_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ServiceControl_RequestQuit_Params.encodedSize);
    encoder.writeUint32(0);
  };
  var kServiceControl_RequestQuit_Name = 1610543692;

  function ServiceControlPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(ServiceControl,
                                                   handleOrPtrInfo);
  }

  function ServiceControlAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        ServiceControl, associatedInterfacePtrInfo);
  }

  ServiceControlAssociatedPtr.prototype =
      Object.create(ServiceControlPtr.prototype);
  ServiceControlAssociatedPtr.prototype.constructor =
      ServiceControlAssociatedPtr;

  function ServiceControlProxy(receiver) {
    this.receiver_ = receiver;
  }
  ServiceControlPtr.prototype.requestQuit = function() {
    return ServiceControlProxy.prototype.requestQuit
        .apply(this.ptr.getProxy(), arguments);
  };

  ServiceControlProxy.prototype.requestQuit = function() {
    var params_ = new ServiceControl_RequestQuit_Params();
    var builder = new codec.MessageV0Builder(
        kServiceControl_RequestQuit_Name,
        codec.align(ServiceControl_RequestQuit_Params.encodedSize));
    builder.encodeStruct(ServiceControl_RequestQuit_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function ServiceControlStub(delegate) {
    this.delegate_ = delegate;
  }
  ServiceControlStub.prototype.requestQuit = function() {
    return this.delegate_ && this.delegate_.requestQuit && this.delegate_.requestQuit();
  }

  ServiceControlStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kServiceControl_RequestQuit_Name:
      var params = reader.decodeStruct(ServiceControl_RequestQuit_Params);
      this.requestQuit();
      return true;
    default:
      return false;
    }
  };

  ServiceControlStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateServiceControlRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kServiceControl_RequestQuit_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = ServiceControl_RequestQuit_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateServiceControlResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var ServiceControl = {
    name: 'service_manager.mojom.ServiceControl',
    kVersion: 0,
    ptrClass: ServiceControlPtr,
    proxyClass: ServiceControlProxy,
    stubClass: ServiceControlStub,
    validateRequest: validateServiceControlRequest,
    validateResponse: null,
    mojomId: 'services/service_manager/public/mojom/service_control.mojom',
    fuzzMethods: {
      requestQuit: {
        params: ServiceControl_RequestQuit_Params,
      },
    },
  };
  ServiceControlStub.prototype.validator = validateServiceControlRequest;
  ServiceControlProxy.prototype.validator = null;
  exports.ServiceControl = ServiceControl;
  exports.ServiceControlPtr = ServiceControlPtr;
  exports.ServiceControlAssociatedPtr = ServiceControlAssociatedPtr;
})();