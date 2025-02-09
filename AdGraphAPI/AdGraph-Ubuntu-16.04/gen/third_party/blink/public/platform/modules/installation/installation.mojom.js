// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'third_party/blink/public/platform/modules/installation/installation.mojom';
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



  function InstallationService_OnInstall_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  InstallationService_OnInstall_Params.prototype.initDefaults_ = function() {
  };
  InstallationService_OnInstall_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  InstallationService_OnInstall_Params.generate = function(generator_) {
    var generated = new InstallationService_OnInstall_Params;
    return generated;
  };

  InstallationService_OnInstall_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  InstallationService_OnInstall_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  InstallationService_OnInstall_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  InstallationService_OnInstall_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  InstallationService_OnInstall_Params.validate = function(messageValidator, offset) {
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

  InstallationService_OnInstall_Params.encodedSize = codec.kStructHeaderSize + 0;

  InstallationService_OnInstall_Params.decode = function(decoder) {
    var packed;
    var val = new InstallationService_OnInstall_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  InstallationService_OnInstall_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(InstallationService_OnInstall_Params.encodedSize);
    encoder.writeUint32(0);
  };
  var kInstallationService_OnInstall_Name = 554270057;

  function InstallationServicePtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(InstallationService,
                                                   handleOrPtrInfo);
  }

  function InstallationServiceAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        InstallationService, associatedInterfacePtrInfo);
  }

  InstallationServiceAssociatedPtr.prototype =
      Object.create(InstallationServicePtr.prototype);
  InstallationServiceAssociatedPtr.prototype.constructor =
      InstallationServiceAssociatedPtr;

  function InstallationServiceProxy(receiver) {
    this.receiver_ = receiver;
  }
  InstallationServicePtr.prototype.onInstall = function() {
    return InstallationServiceProxy.prototype.onInstall
        .apply(this.ptr.getProxy(), arguments);
  };

  InstallationServiceProxy.prototype.onInstall = function() {
    var params_ = new InstallationService_OnInstall_Params();
    var builder = new codec.MessageV0Builder(
        kInstallationService_OnInstall_Name,
        codec.align(InstallationService_OnInstall_Params.encodedSize));
    builder.encodeStruct(InstallationService_OnInstall_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function InstallationServiceStub(delegate) {
    this.delegate_ = delegate;
  }
  InstallationServiceStub.prototype.onInstall = function() {
    return this.delegate_ && this.delegate_.onInstall && this.delegate_.onInstall();
  }

  InstallationServiceStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kInstallationService_OnInstall_Name:
      var params = reader.decodeStruct(InstallationService_OnInstall_Params);
      this.onInstall();
      return true;
    default:
      return false;
    }
  };

  InstallationServiceStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateInstallationServiceRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kInstallationService_OnInstall_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = InstallationService_OnInstall_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateInstallationServiceResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var InstallationService = {
    name: 'blink.mojom.InstallationService',
    kVersion: 0,
    ptrClass: InstallationServicePtr,
    proxyClass: InstallationServiceProxy,
    stubClass: InstallationServiceStub,
    validateRequest: validateInstallationServiceRequest,
    validateResponse: null,
    mojomId: 'third_party/blink/public/platform/modules/installation/installation.mojom',
    fuzzMethods: {
      onInstall: {
        params: InstallationService_OnInstall_Params,
      },
    },
  };
  InstallationServiceStub.prototype.validator = validateInstallationServiceRequest;
  InstallationServiceProxy.prototype.validator = null;
  exports.InstallationService = InstallationService;
  exports.InstallationServicePtr = InstallationServicePtr;
  exports.InstallationServiceAssociatedPtr = InstallationServiceAssociatedPtr;
})();