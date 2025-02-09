// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'chrome/browser/ui/webui/reset_password/reset_password.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('mojom');



  function ResetPasswordHandler_HandlePasswordReset_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ResetPasswordHandler_HandlePasswordReset_Params.prototype.initDefaults_ = function() {
  };
  ResetPasswordHandler_HandlePasswordReset_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ResetPasswordHandler_HandlePasswordReset_Params.generate = function(generator_) {
    var generated = new ResetPasswordHandler_HandlePasswordReset_Params;
    return generated;
  };

  ResetPasswordHandler_HandlePasswordReset_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  ResetPasswordHandler_HandlePasswordReset_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ResetPasswordHandler_HandlePasswordReset_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ResetPasswordHandler_HandlePasswordReset_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ResetPasswordHandler_HandlePasswordReset_Params.validate = function(messageValidator, offset) {
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

  ResetPasswordHandler_HandlePasswordReset_Params.encodedSize = codec.kStructHeaderSize + 0;

  ResetPasswordHandler_HandlePasswordReset_Params.decode = function(decoder) {
    var packed;
    var val = new ResetPasswordHandler_HandlePasswordReset_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  ResetPasswordHandler_HandlePasswordReset_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ResetPasswordHandler_HandlePasswordReset_Params.encodedSize);
    encoder.writeUint32(0);
  };
  var kResetPasswordHandler_HandlePasswordReset_Name = 1358331151;

  function ResetPasswordHandlerPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(ResetPasswordHandler,
                                                   handleOrPtrInfo);
  }

  function ResetPasswordHandlerAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        ResetPasswordHandler, associatedInterfacePtrInfo);
  }

  ResetPasswordHandlerAssociatedPtr.prototype =
      Object.create(ResetPasswordHandlerPtr.prototype);
  ResetPasswordHandlerAssociatedPtr.prototype.constructor =
      ResetPasswordHandlerAssociatedPtr;

  function ResetPasswordHandlerProxy(receiver) {
    this.receiver_ = receiver;
  }
  ResetPasswordHandlerPtr.prototype.handlePasswordReset = function() {
    return ResetPasswordHandlerProxy.prototype.handlePasswordReset
        .apply(this.ptr.getProxy(), arguments);
  };

  ResetPasswordHandlerProxy.prototype.handlePasswordReset = function() {
    var params_ = new ResetPasswordHandler_HandlePasswordReset_Params();
    var builder = new codec.MessageV0Builder(
        kResetPasswordHandler_HandlePasswordReset_Name,
        codec.align(ResetPasswordHandler_HandlePasswordReset_Params.encodedSize));
    builder.encodeStruct(ResetPasswordHandler_HandlePasswordReset_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function ResetPasswordHandlerStub(delegate) {
    this.delegate_ = delegate;
  }
  ResetPasswordHandlerStub.prototype.handlePasswordReset = function() {
    return this.delegate_ && this.delegate_.handlePasswordReset && this.delegate_.handlePasswordReset();
  }

  ResetPasswordHandlerStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kResetPasswordHandler_HandlePasswordReset_Name:
      var params = reader.decodeStruct(ResetPasswordHandler_HandlePasswordReset_Params);
      this.handlePasswordReset();
      return true;
    default:
      return false;
    }
  };

  ResetPasswordHandlerStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateResetPasswordHandlerRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kResetPasswordHandler_HandlePasswordReset_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = ResetPasswordHandler_HandlePasswordReset_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateResetPasswordHandlerResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var ResetPasswordHandler = {
    name: 'mojom.ResetPasswordHandler',
    kVersion: 0,
    ptrClass: ResetPasswordHandlerPtr,
    proxyClass: ResetPasswordHandlerProxy,
    stubClass: ResetPasswordHandlerStub,
    validateRequest: validateResetPasswordHandlerRequest,
    validateResponse: null,
    mojomId: 'chrome/browser/ui/webui/reset_password/reset_password.mojom',
    fuzzMethods: {
      handlePasswordReset: {
        params: ResetPasswordHandler_HandlePasswordReset_Params,
      },
    },
  };
  ResetPasswordHandlerStub.prototype.validator = validateResetPasswordHandlerRequest;
  ResetPasswordHandlerProxy.prototype.validator = null;
  exports.ResetPasswordHandler = ResetPasswordHandler;
  exports.ResetPasswordHandlerPtr = ResetPasswordHandlerPtr;
  exports.ResetPasswordHandlerAssociatedPtr = ResetPasswordHandlerAssociatedPtr;
})();