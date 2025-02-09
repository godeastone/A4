// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'extensions/common/mojo/app_window.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('extensions.mojom');



  function AppWindow_SetVisuallyDeemphasized_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  AppWindow_SetVisuallyDeemphasized_Params.prototype.initDefaults_ = function() {
    this.deemphasized = false;
  };
  AppWindow_SetVisuallyDeemphasized_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  AppWindow_SetVisuallyDeemphasized_Params.generate = function(generator_) {
    var generated = new AppWindow_SetVisuallyDeemphasized_Params;
    generated.deemphasized = generator_.generateBool();
    return generated;
  };

  AppWindow_SetVisuallyDeemphasized_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.deemphasized = mutator_.mutateBool(this.deemphasized);
    }
    return this;
  };
  AppWindow_SetVisuallyDeemphasized_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  AppWindow_SetVisuallyDeemphasized_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  AppWindow_SetVisuallyDeemphasized_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  AppWindow_SetVisuallyDeemphasized_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 16}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  AppWindow_SetVisuallyDeemphasized_Params.encodedSize = codec.kStructHeaderSize + 8;

  AppWindow_SetVisuallyDeemphasized_Params.decode = function(decoder) {
    var packed;
    var val = new AppWindow_SetVisuallyDeemphasized_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.deemphasized = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  AppWindow_SetVisuallyDeemphasized_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(AppWindow_SetVisuallyDeemphasized_Params.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.deemphasized & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  var kAppWindow_SetVisuallyDeemphasized_Name = 1067874922;

  function AppWindowPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(AppWindow,
                                                   handleOrPtrInfo);
  }

  function AppWindowAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        AppWindow, associatedInterfacePtrInfo);
  }

  AppWindowAssociatedPtr.prototype =
      Object.create(AppWindowPtr.prototype);
  AppWindowAssociatedPtr.prototype.constructor =
      AppWindowAssociatedPtr;

  function AppWindowProxy(receiver) {
    this.receiver_ = receiver;
  }
  AppWindowPtr.prototype.setVisuallyDeemphasized = function() {
    return AppWindowProxy.prototype.setVisuallyDeemphasized
        .apply(this.ptr.getProxy(), arguments);
  };

  AppWindowProxy.prototype.setVisuallyDeemphasized = function(deemphasized) {
    var params_ = new AppWindow_SetVisuallyDeemphasized_Params();
    params_.deemphasized = deemphasized;
    var builder = new codec.MessageV0Builder(
        kAppWindow_SetVisuallyDeemphasized_Name,
        codec.align(AppWindow_SetVisuallyDeemphasized_Params.encodedSize));
    builder.encodeStruct(AppWindow_SetVisuallyDeemphasized_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function AppWindowStub(delegate) {
    this.delegate_ = delegate;
  }
  AppWindowStub.prototype.setVisuallyDeemphasized = function(deemphasized) {
    return this.delegate_ && this.delegate_.setVisuallyDeemphasized && this.delegate_.setVisuallyDeemphasized(deemphasized);
  }

  AppWindowStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kAppWindow_SetVisuallyDeemphasized_Name:
      var params = reader.decodeStruct(AppWindow_SetVisuallyDeemphasized_Params);
      this.setVisuallyDeemphasized(params.deemphasized);
      return true;
    default:
      return false;
    }
  };

  AppWindowStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateAppWindowRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kAppWindow_SetVisuallyDeemphasized_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = AppWindow_SetVisuallyDeemphasized_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateAppWindowResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var AppWindow = {
    name: 'extensions.mojom.AppWindow',
    kVersion: 0,
    ptrClass: AppWindowPtr,
    proxyClass: AppWindowProxy,
    stubClass: AppWindowStub,
    validateRequest: validateAppWindowRequest,
    validateResponse: null,
    mojomId: 'extensions/common/mojo/app_window.mojom',
    fuzzMethods: {
      setVisuallyDeemphasized: {
        params: AppWindow_SetVisuallyDeemphasized_Params,
      },
    },
  };
  AppWindowStub.prototype.validator = validateAppWindowRequest;
  AppWindowProxy.prototype.validator = null;
  exports.AppWindow = AppWindow;
  exports.AppWindowPtr = AppWindowPtr;
  exports.AppWindowAssociatedPtr = AppWindowAssociatedPtr;
})();