// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'components/dom_distiller/content/common/distiller_javascript_service.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('domDistiller.mojom');



  function DistillerJavaScriptService_HandleDistillerOpenSettingsCall_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  DistillerJavaScriptService_HandleDistillerOpenSettingsCall_Params.prototype.initDefaults_ = function() {
  };
  DistillerJavaScriptService_HandleDistillerOpenSettingsCall_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  DistillerJavaScriptService_HandleDistillerOpenSettingsCall_Params.generate = function(generator_) {
    var generated = new DistillerJavaScriptService_HandleDistillerOpenSettingsCall_Params;
    return generated;
  };

  DistillerJavaScriptService_HandleDistillerOpenSettingsCall_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  DistillerJavaScriptService_HandleDistillerOpenSettingsCall_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  DistillerJavaScriptService_HandleDistillerOpenSettingsCall_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  DistillerJavaScriptService_HandleDistillerOpenSettingsCall_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  DistillerJavaScriptService_HandleDistillerOpenSettingsCall_Params.validate = function(messageValidator, offset) {
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

  DistillerJavaScriptService_HandleDistillerOpenSettingsCall_Params.encodedSize = codec.kStructHeaderSize + 0;

  DistillerJavaScriptService_HandleDistillerOpenSettingsCall_Params.decode = function(decoder) {
    var packed;
    var val = new DistillerJavaScriptService_HandleDistillerOpenSettingsCall_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  DistillerJavaScriptService_HandleDistillerOpenSettingsCall_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(DistillerJavaScriptService_HandleDistillerOpenSettingsCall_Params.encodedSize);
    encoder.writeUint32(0);
  };
  var kDistillerJavaScriptService_HandleDistillerOpenSettingsCall_Name = 16687804;

  function DistillerJavaScriptServicePtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(DistillerJavaScriptService,
                                                   handleOrPtrInfo);
  }

  function DistillerJavaScriptServiceAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        DistillerJavaScriptService, associatedInterfacePtrInfo);
  }

  DistillerJavaScriptServiceAssociatedPtr.prototype =
      Object.create(DistillerJavaScriptServicePtr.prototype);
  DistillerJavaScriptServiceAssociatedPtr.prototype.constructor =
      DistillerJavaScriptServiceAssociatedPtr;

  function DistillerJavaScriptServiceProxy(receiver) {
    this.receiver_ = receiver;
  }
  DistillerJavaScriptServicePtr.prototype.handleDistillerOpenSettingsCall = function() {
    return DistillerJavaScriptServiceProxy.prototype.handleDistillerOpenSettingsCall
        .apply(this.ptr.getProxy(), arguments);
  };

  DistillerJavaScriptServiceProxy.prototype.handleDistillerOpenSettingsCall = function() {
    var params_ = new DistillerJavaScriptService_HandleDistillerOpenSettingsCall_Params();
    var builder = new codec.MessageV0Builder(
        kDistillerJavaScriptService_HandleDistillerOpenSettingsCall_Name,
        codec.align(DistillerJavaScriptService_HandleDistillerOpenSettingsCall_Params.encodedSize));
    builder.encodeStruct(DistillerJavaScriptService_HandleDistillerOpenSettingsCall_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function DistillerJavaScriptServiceStub(delegate) {
    this.delegate_ = delegate;
  }
  DistillerJavaScriptServiceStub.prototype.handleDistillerOpenSettingsCall = function() {
    return this.delegate_ && this.delegate_.handleDistillerOpenSettingsCall && this.delegate_.handleDistillerOpenSettingsCall();
  }

  DistillerJavaScriptServiceStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kDistillerJavaScriptService_HandleDistillerOpenSettingsCall_Name:
      var params = reader.decodeStruct(DistillerJavaScriptService_HandleDistillerOpenSettingsCall_Params);
      this.handleDistillerOpenSettingsCall();
      return true;
    default:
      return false;
    }
  };

  DistillerJavaScriptServiceStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateDistillerJavaScriptServiceRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kDistillerJavaScriptService_HandleDistillerOpenSettingsCall_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = DistillerJavaScriptService_HandleDistillerOpenSettingsCall_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateDistillerJavaScriptServiceResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var DistillerJavaScriptService = {
    name: 'dom_distiller.mojom.DistillerJavaScriptService',
    kVersion: 0,
    ptrClass: DistillerJavaScriptServicePtr,
    proxyClass: DistillerJavaScriptServiceProxy,
    stubClass: DistillerJavaScriptServiceStub,
    validateRequest: validateDistillerJavaScriptServiceRequest,
    validateResponse: null,
    mojomId: 'components/dom_distiller/content/common/distiller_javascript_service.mojom',
    fuzzMethods: {
      handleDistillerOpenSettingsCall: {
        params: DistillerJavaScriptService_HandleDistillerOpenSettingsCall_Params,
      },
    },
  };
  DistillerJavaScriptServiceStub.prototype.validator = validateDistillerJavaScriptServiceRequest;
  DistillerJavaScriptServiceProxy.prototype.validator = null;
  exports.DistillerJavaScriptService = DistillerJavaScriptService;
  exports.DistillerJavaScriptServicePtr = DistillerJavaScriptServicePtr;
  exports.DistillerJavaScriptServiceAssociatedPtr = DistillerJavaScriptServiceAssociatedPtr;
})();