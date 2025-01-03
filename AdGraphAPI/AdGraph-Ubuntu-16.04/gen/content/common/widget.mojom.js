// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'content/common/widget.mojom';
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
  var input_handler$ =
      mojo.internal.exposeNamespace('content.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'content/common/input/input_handler.mojom', 'input/input_handler.mojom.js');
  }



  function Widget_SetupWidgetInputHandler_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Widget_SetupWidgetInputHandler_Params.prototype.initDefaults_ = function() {
    this.request = new bindings.InterfaceRequest();
    this.host = new input_handler$.WidgetInputHandlerHostPtr();
  };
  Widget_SetupWidgetInputHandler_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Widget_SetupWidgetInputHandler_Params.generate = function(generator_) {
    var generated = new Widget_SetupWidgetInputHandler_Params;
    generated.request = generator_.generateInterfaceRequest("content.mojom.WidgetInputHandler", false);
    generated.host = generator_.generateInterface("content.mojom.WidgetInputHandlerHost", false);
    return generated;
  };

  Widget_SetupWidgetInputHandler_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.request = mutator_.mutateInterfaceRequest(this.request, "content.mojom.WidgetInputHandler", false);
    }
    if (mutator_.chooseMutateField()) {
      this.host = mutator_.mutateInterface(this.host, "content.mojom.WidgetInputHandlerHost", false);
    }
    return this;
  };
  Widget_SetupWidgetInputHandler_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.request !== null) {
      Array.prototype.push.apply(handles, ["content.mojom.WidgetInputHandlerRequest"]);
    }
    if (this.host !== null) {
      Array.prototype.push.apply(handles, ["content.mojom.WidgetInputHandlerHostPtr"]);
    }
    return handles;
  };

  Widget_SetupWidgetInputHandler_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Widget_SetupWidgetInputHandler_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.request = handles[idx++];;
    this.host = handles[idx++];;
    return idx;
  };

  Widget_SetupWidgetInputHandler_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 24}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;


    // validate Widget_SetupWidgetInputHandler_Params.request
    err = messageValidator.validateInterfaceRequest(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate Widget_SetupWidgetInputHandler_Params.host
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 4, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Widget_SetupWidgetInputHandler_Params.encodedSize = codec.kStructHeaderSize + 16;

  Widget_SetupWidgetInputHandler_Params.decode = function(decoder) {
    var packed;
    var val = new Widget_SetupWidgetInputHandler_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.request = decoder.decodeStruct(codec.InterfaceRequest);
    val.host = decoder.decodeStruct(new codec.Interface(input_handler$.WidgetInputHandlerHostPtr));
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  Widget_SetupWidgetInputHandler_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Widget_SetupWidgetInputHandler_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.InterfaceRequest, val.request);
    encoder.encodeStruct(new codec.Interface(input_handler$.WidgetInputHandlerHostPtr), val.host);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  var kWidget_SetupWidgetInputHandler_Name = 403568742;

  function WidgetPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(Widget,
                                                   handleOrPtrInfo);
  }

  function WidgetAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        Widget, associatedInterfacePtrInfo);
  }

  WidgetAssociatedPtr.prototype =
      Object.create(WidgetPtr.prototype);
  WidgetAssociatedPtr.prototype.constructor =
      WidgetAssociatedPtr;

  function WidgetProxy(receiver) {
    this.receiver_ = receiver;
  }
  WidgetPtr.prototype.setupWidgetInputHandler = function() {
    return WidgetProxy.prototype.setupWidgetInputHandler
        .apply(this.ptr.getProxy(), arguments);
  };

  WidgetProxy.prototype.setupWidgetInputHandler = function(request, host) {
    var params_ = new Widget_SetupWidgetInputHandler_Params();
    params_.request = request;
    params_.host = host;
    var builder = new codec.MessageV0Builder(
        kWidget_SetupWidgetInputHandler_Name,
        codec.align(Widget_SetupWidgetInputHandler_Params.encodedSize));
    builder.encodeStruct(Widget_SetupWidgetInputHandler_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function WidgetStub(delegate) {
    this.delegate_ = delegate;
  }
  WidgetStub.prototype.setupWidgetInputHandler = function(request, host) {
    return this.delegate_ && this.delegate_.setupWidgetInputHandler && this.delegate_.setupWidgetInputHandler(request, host);
  }

  WidgetStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kWidget_SetupWidgetInputHandler_Name:
      var params = reader.decodeStruct(Widget_SetupWidgetInputHandler_Params);
      this.setupWidgetInputHandler(params.request, params.host);
      return true;
    default:
      return false;
    }
  };

  WidgetStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateWidgetRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kWidget_SetupWidgetInputHandler_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = Widget_SetupWidgetInputHandler_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateWidgetResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var Widget = {
    name: 'content.mojom.Widget',
    kVersion: 0,
    ptrClass: WidgetPtr,
    proxyClass: WidgetProxy,
    stubClass: WidgetStub,
    validateRequest: validateWidgetRequest,
    validateResponse: null,
    mojomId: 'content/common/widget.mojom',
    fuzzMethods: {
      setupWidgetInputHandler: {
        params: Widget_SetupWidgetInputHandler_Params,
      },
    },
  };
  WidgetStub.prototype.validator = validateWidgetRequest;
  WidgetProxy.prototype.validator = null;
  exports.Widget = Widget;
  exports.WidgetPtr = WidgetPtr;
  exports.WidgetAssociatedPtr = WidgetAssociatedPtr;
})();