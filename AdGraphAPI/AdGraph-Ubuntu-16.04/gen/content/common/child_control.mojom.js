// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'content/common/child_control.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('content.mojom');



  function ChildControl_ProcessShutdown_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ChildControl_ProcessShutdown_Params.prototype.initDefaults_ = function() {
  };
  ChildControl_ProcessShutdown_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ChildControl_ProcessShutdown_Params.generate = function(generator_) {
    var generated = new ChildControl_ProcessShutdown_Params;
    return generated;
  };

  ChildControl_ProcessShutdown_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  ChildControl_ProcessShutdown_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ChildControl_ProcessShutdown_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ChildControl_ProcessShutdown_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ChildControl_ProcessShutdown_Params.validate = function(messageValidator, offset) {
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

  ChildControl_ProcessShutdown_Params.encodedSize = codec.kStructHeaderSize + 0;

  ChildControl_ProcessShutdown_Params.decode = function(decoder) {
    var packed;
    var val = new ChildControl_ProcessShutdown_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  ChildControl_ProcessShutdown_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ChildControl_ProcessShutdown_Params.encodedSize);
    encoder.writeUint32(0);
  };
  var kChildControl_ProcessShutdown_Name = 1648548545;

  function ChildControlPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(ChildControl,
                                                   handleOrPtrInfo);
  }

  function ChildControlAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        ChildControl, associatedInterfacePtrInfo);
  }

  ChildControlAssociatedPtr.prototype =
      Object.create(ChildControlPtr.prototype);
  ChildControlAssociatedPtr.prototype.constructor =
      ChildControlAssociatedPtr;

  function ChildControlProxy(receiver) {
    this.receiver_ = receiver;
  }
  ChildControlPtr.prototype.processShutdown = function() {
    return ChildControlProxy.prototype.processShutdown
        .apply(this.ptr.getProxy(), arguments);
  };

  ChildControlProxy.prototype.processShutdown = function() {
    var params_ = new ChildControl_ProcessShutdown_Params();
    var builder = new codec.MessageV0Builder(
        kChildControl_ProcessShutdown_Name,
        codec.align(ChildControl_ProcessShutdown_Params.encodedSize));
    builder.encodeStruct(ChildControl_ProcessShutdown_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function ChildControlStub(delegate) {
    this.delegate_ = delegate;
  }
  ChildControlStub.prototype.processShutdown = function() {
    return this.delegate_ && this.delegate_.processShutdown && this.delegate_.processShutdown();
  }

  ChildControlStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kChildControl_ProcessShutdown_Name:
      var params = reader.decodeStruct(ChildControl_ProcessShutdown_Params);
      this.processShutdown();
      return true;
    default:
      return false;
    }
  };

  ChildControlStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateChildControlRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kChildControl_ProcessShutdown_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = ChildControl_ProcessShutdown_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateChildControlResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var ChildControl = {
    name: 'content.mojom.ChildControl',
    kVersion: 0,
    ptrClass: ChildControlPtr,
    proxyClass: ChildControlProxy,
    stubClass: ChildControlStub,
    validateRequest: validateChildControlRequest,
    validateResponse: null,
    mojomId: 'content/common/child_control.mojom',
    fuzzMethods: {
      processShutdown: {
        params: ChildControl_ProcessShutdown_Params,
      },
    },
  };
  ChildControlStub.prototype.validator = validateChildControlRequest;
  ChildControlProxy.prototype.validator = null;
  exports.ChildControl = ChildControl;
  exports.ChildControlPtr = ChildControlPtr;
  exports.ChildControlAssociatedPtr = ChildControlAssociatedPtr;
})();