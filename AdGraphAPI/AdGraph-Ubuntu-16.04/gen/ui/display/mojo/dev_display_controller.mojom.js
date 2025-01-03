// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'ui/display/mojo/dev_display_controller.mojom';
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



  function DevDisplayController_ToggleAddRemoveDisplay_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  DevDisplayController_ToggleAddRemoveDisplay_Params.prototype.initDefaults_ = function() {
  };
  DevDisplayController_ToggleAddRemoveDisplay_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  DevDisplayController_ToggleAddRemoveDisplay_Params.generate = function(generator_) {
    var generated = new DevDisplayController_ToggleAddRemoveDisplay_Params;
    return generated;
  };

  DevDisplayController_ToggleAddRemoveDisplay_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  DevDisplayController_ToggleAddRemoveDisplay_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  DevDisplayController_ToggleAddRemoveDisplay_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  DevDisplayController_ToggleAddRemoveDisplay_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  DevDisplayController_ToggleAddRemoveDisplay_Params.validate = function(messageValidator, offset) {
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

  DevDisplayController_ToggleAddRemoveDisplay_Params.encodedSize = codec.kStructHeaderSize + 0;

  DevDisplayController_ToggleAddRemoveDisplay_Params.decode = function(decoder) {
    var packed;
    var val = new DevDisplayController_ToggleAddRemoveDisplay_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  DevDisplayController_ToggleAddRemoveDisplay_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(DevDisplayController_ToggleAddRemoveDisplay_Params.encodedSize);
    encoder.writeUint32(0);
  };
  var kDevDisplayController_ToggleAddRemoveDisplay_Name = 1388992157;

  function DevDisplayControllerPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(DevDisplayController,
                                                   handleOrPtrInfo);
  }

  function DevDisplayControllerAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        DevDisplayController, associatedInterfacePtrInfo);
  }

  DevDisplayControllerAssociatedPtr.prototype =
      Object.create(DevDisplayControllerPtr.prototype);
  DevDisplayControllerAssociatedPtr.prototype.constructor =
      DevDisplayControllerAssociatedPtr;

  function DevDisplayControllerProxy(receiver) {
    this.receiver_ = receiver;
  }
  DevDisplayControllerPtr.prototype.toggleAddRemoveDisplay = function() {
    return DevDisplayControllerProxy.prototype.toggleAddRemoveDisplay
        .apply(this.ptr.getProxy(), arguments);
  };

  DevDisplayControllerProxy.prototype.toggleAddRemoveDisplay = function() {
    var params_ = new DevDisplayController_ToggleAddRemoveDisplay_Params();
    var builder = new codec.MessageV0Builder(
        kDevDisplayController_ToggleAddRemoveDisplay_Name,
        codec.align(DevDisplayController_ToggleAddRemoveDisplay_Params.encodedSize));
    builder.encodeStruct(DevDisplayController_ToggleAddRemoveDisplay_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function DevDisplayControllerStub(delegate) {
    this.delegate_ = delegate;
  }
  DevDisplayControllerStub.prototype.toggleAddRemoveDisplay = function() {
    return this.delegate_ && this.delegate_.toggleAddRemoveDisplay && this.delegate_.toggleAddRemoveDisplay();
  }

  DevDisplayControllerStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kDevDisplayController_ToggleAddRemoveDisplay_Name:
      var params = reader.decodeStruct(DevDisplayController_ToggleAddRemoveDisplay_Params);
      this.toggleAddRemoveDisplay();
      return true;
    default:
      return false;
    }
  };

  DevDisplayControllerStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateDevDisplayControllerRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kDevDisplayController_ToggleAddRemoveDisplay_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = DevDisplayController_ToggleAddRemoveDisplay_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateDevDisplayControllerResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var DevDisplayController = {
    name: 'display.mojom.DevDisplayController',
    kVersion: 0,
    ptrClass: DevDisplayControllerPtr,
    proxyClass: DevDisplayControllerProxy,
    stubClass: DevDisplayControllerStub,
    validateRequest: validateDevDisplayControllerRequest,
    validateResponse: null,
    mojomId: 'ui/display/mojo/dev_display_controller.mojom',
    fuzzMethods: {
      toggleAddRemoveDisplay: {
        params: DevDisplayController_ToggleAddRemoveDisplay_Params,
      },
    },
  };
  DevDisplayControllerStub.prototype.validator = validateDevDisplayControllerRequest;
  DevDisplayControllerProxy.prototype.validator = null;
  exports.DevDisplayController = DevDisplayController;
  exports.DevDisplayControllerPtr = DevDisplayControllerPtr;
  exports.DevDisplayControllerAssociatedPtr = DevDisplayControllerAssociatedPtr;
})();