// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'components/dom_distiller/content/common/distiller_page_notifier_service.mojom';
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



  function DistillerPageNotifierService_NotifyIsDistillerPage_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  DistillerPageNotifierService_NotifyIsDistillerPage_Params.prototype.initDefaults_ = function() {
  };
  DistillerPageNotifierService_NotifyIsDistillerPage_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  DistillerPageNotifierService_NotifyIsDistillerPage_Params.generate = function(generator_) {
    var generated = new DistillerPageNotifierService_NotifyIsDistillerPage_Params;
    return generated;
  };

  DistillerPageNotifierService_NotifyIsDistillerPage_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  DistillerPageNotifierService_NotifyIsDistillerPage_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  DistillerPageNotifierService_NotifyIsDistillerPage_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  DistillerPageNotifierService_NotifyIsDistillerPage_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  DistillerPageNotifierService_NotifyIsDistillerPage_Params.validate = function(messageValidator, offset) {
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

  DistillerPageNotifierService_NotifyIsDistillerPage_Params.encodedSize = codec.kStructHeaderSize + 0;

  DistillerPageNotifierService_NotifyIsDistillerPage_Params.decode = function(decoder) {
    var packed;
    var val = new DistillerPageNotifierService_NotifyIsDistillerPage_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  DistillerPageNotifierService_NotifyIsDistillerPage_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(DistillerPageNotifierService_NotifyIsDistillerPage_Params.encodedSize);
    encoder.writeUint32(0);
  };
  var kDistillerPageNotifierService_NotifyIsDistillerPage_Name = 1325306364;

  function DistillerPageNotifierServicePtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(DistillerPageNotifierService,
                                                   handleOrPtrInfo);
  }

  function DistillerPageNotifierServiceAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        DistillerPageNotifierService, associatedInterfacePtrInfo);
  }

  DistillerPageNotifierServiceAssociatedPtr.prototype =
      Object.create(DistillerPageNotifierServicePtr.prototype);
  DistillerPageNotifierServiceAssociatedPtr.prototype.constructor =
      DistillerPageNotifierServiceAssociatedPtr;

  function DistillerPageNotifierServiceProxy(receiver) {
    this.receiver_ = receiver;
  }
  DistillerPageNotifierServicePtr.prototype.notifyIsDistillerPage = function() {
    return DistillerPageNotifierServiceProxy.prototype.notifyIsDistillerPage
        .apply(this.ptr.getProxy(), arguments);
  };

  DistillerPageNotifierServiceProxy.prototype.notifyIsDistillerPage = function() {
    var params_ = new DistillerPageNotifierService_NotifyIsDistillerPage_Params();
    var builder = new codec.MessageV0Builder(
        kDistillerPageNotifierService_NotifyIsDistillerPage_Name,
        codec.align(DistillerPageNotifierService_NotifyIsDistillerPage_Params.encodedSize));
    builder.encodeStruct(DistillerPageNotifierService_NotifyIsDistillerPage_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function DistillerPageNotifierServiceStub(delegate) {
    this.delegate_ = delegate;
  }
  DistillerPageNotifierServiceStub.prototype.notifyIsDistillerPage = function() {
    return this.delegate_ && this.delegate_.notifyIsDistillerPage && this.delegate_.notifyIsDistillerPage();
  }

  DistillerPageNotifierServiceStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kDistillerPageNotifierService_NotifyIsDistillerPage_Name:
      var params = reader.decodeStruct(DistillerPageNotifierService_NotifyIsDistillerPage_Params);
      this.notifyIsDistillerPage();
      return true;
    default:
      return false;
    }
  };

  DistillerPageNotifierServiceStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateDistillerPageNotifierServiceRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kDistillerPageNotifierService_NotifyIsDistillerPage_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = DistillerPageNotifierService_NotifyIsDistillerPage_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateDistillerPageNotifierServiceResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var DistillerPageNotifierService = {
    name: 'dom_distiller.mojom.DistillerPageNotifierService',
    kVersion: 0,
    ptrClass: DistillerPageNotifierServicePtr,
    proxyClass: DistillerPageNotifierServiceProxy,
    stubClass: DistillerPageNotifierServiceStub,
    validateRequest: validateDistillerPageNotifierServiceRequest,
    validateResponse: null,
    mojomId: 'components/dom_distiller/content/common/distiller_page_notifier_service.mojom',
    fuzzMethods: {
      notifyIsDistillerPage: {
        params: DistillerPageNotifierService_NotifyIsDistillerPage_Params,
      },
    },
  };
  DistillerPageNotifierServiceStub.prototype.validator = validateDistillerPageNotifierServiceRequest;
  DistillerPageNotifierServiceProxy.prototype.validator = null;
  exports.DistillerPageNotifierService = DistillerPageNotifierService;
  exports.DistillerPageNotifierServicePtr = DistillerPageNotifierServicePtr;
  exports.DistillerPageNotifierServiceAssociatedPtr = DistillerPageNotifierServiceAssociatedPtr;
})();