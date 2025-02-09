// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'content/public/common/fullscreen_video_element.mojom';
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



  function FullscreenVideoElementHandler_RequestFullscreenVideoElement_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  FullscreenVideoElementHandler_RequestFullscreenVideoElement_Params.prototype.initDefaults_ = function() {
  };
  FullscreenVideoElementHandler_RequestFullscreenVideoElement_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  FullscreenVideoElementHandler_RequestFullscreenVideoElement_Params.generate = function(generator_) {
    var generated = new FullscreenVideoElementHandler_RequestFullscreenVideoElement_Params;
    return generated;
  };

  FullscreenVideoElementHandler_RequestFullscreenVideoElement_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  FullscreenVideoElementHandler_RequestFullscreenVideoElement_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  FullscreenVideoElementHandler_RequestFullscreenVideoElement_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  FullscreenVideoElementHandler_RequestFullscreenVideoElement_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  FullscreenVideoElementHandler_RequestFullscreenVideoElement_Params.validate = function(messageValidator, offset) {
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

  FullscreenVideoElementHandler_RequestFullscreenVideoElement_Params.encodedSize = codec.kStructHeaderSize + 0;

  FullscreenVideoElementHandler_RequestFullscreenVideoElement_Params.decode = function(decoder) {
    var packed;
    var val = new FullscreenVideoElementHandler_RequestFullscreenVideoElement_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  FullscreenVideoElementHandler_RequestFullscreenVideoElement_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(FullscreenVideoElementHandler_RequestFullscreenVideoElement_Params.encodedSize);
    encoder.writeUint32(0);
  };
  var kFullscreenVideoElementHandler_RequestFullscreenVideoElement_Name = 1148376073;

  function FullscreenVideoElementHandlerPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(FullscreenVideoElementHandler,
                                                   handleOrPtrInfo);
  }

  function FullscreenVideoElementHandlerAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        FullscreenVideoElementHandler, associatedInterfacePtrInfo);
  }

  FullscreenVideoElementHandlerAssociatedPtr.prototype =
      Object.create(FullscreenVideoElementHandlerPtr.prototype);
  FullscreenVideoElementHandlerAssociatedPtr.prototype.constructor =
      FullscreenVideoElementHandlerAssociatedPtr;

  function FullscreenVideoElementHandlerProxy(receiver) {
    this.receiver_ = receiver;
  }
  FullscreenVideoElementHandlerPtr.prototype.requestFullscreenVideoElement = function() {
    return FullscreenVideoElementHandlerProxy.prototype.requestFullscreenVideoElement
        .apply(this.ptr.getProxy(), arguments);
  };

  FullscreenVideoElementHandlerProxy.prototype.requestFullscreenVideoElement = function() {
    var params_ = new FullscreenVideoElementHandler_RequestFullscreenVideoElement_Params();
    var builder = new codec.MessageV0Builder(
        kFullscreenVideoElementHandler_RequestFullscreenVideoElement_Name,
        codec.align(FullscreenVideoElementHandler_RequestFullscreenVideoElement_Params.encodedSize));
    builder.encodeStruct(FullscreenVideoElementHandler_RequestFullscreenVideoElement_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function FullscreenVideoElementHandlerStub(delegate) {
    this.delegate_ = delegate;
  }
  FullscreenVideoElementHandlerStub.prototype.requestFullscreenVideoElement = function() {
    return this.delegate_ && this.delegate_.requestFullscreenVideoElement && this.delegate_.requestFullscreenVideoElement();
  }

  FullscreenVideoElementHandlerStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kFullscreenVideoElementHandler_RequestFullscreenVideoElement_Name:
      var params = reader.decodeStruct(FullscreenVideoElementHandler_RequestFullscreenVideoElement_Params);
      this.requestFullscreenVideoElement();
      return true;
    default:
      return false;
    }
  };

  FullscreenVideoElementHandlerStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateFullscreenVideoElementHandlerRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kFullscreenVideoElementHandler_RequestFullscreenVideoElement_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = FullscreenVideoElementHandler_RequestFullscreenVideoElement_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateFullscreenVideoElementHandlerResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var FullscreenVideoElementHandler = {
    name: 'content.mojom.FullscreenVideoElementHandler',
    kVersion: 0,
    ptrClass: FullscreenVideoElementHandlerPtr,
    proxyClass: FullscreenVideoElementHandlerProxy,
    stubClass: FullscreenVideoElementHandlerStub,
    validateRequest: validateFullscreenVideoElementHandlerRequest,
    validateResponse: null,
    mojomId: 'content/public/common/fullscreen_video_element.mojom',
    fuzzMethods: {
      requestFullscreenVideoElement: {
        params: FullscreenVideoElementHandler_RequestFullscreenVideoElement_Params,
      },
    },
  };
  FullscreenVideoElementHandlerStub.prototype.validator = validateFullscreenVideoElementHandlerRequest;
  FullscreenVideoElementHandlerProxy.prototype.validator = null;
  exports.FullscreenVideoElementHandler = FullscreenVideoElementHandler;
  exports.FullscreenVideoElementHandlerPtr = FullscreenVideoElementHandlerPtr;
  exports.FullscreenVideoElementHandlerAssociatedPtr = FullscreenVideoElementHandlerAssociatedPtr;
})();