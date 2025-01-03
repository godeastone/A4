// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'services/ui/public/interfaces/window_server_test.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('ui.mojom');
  var event$ =
      mojo.internal.exposeNamespace('ui.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'ui/events/mojo/event.mojom', '../../../../ui/events/mojo/event.mojom.js');
  }



  function WindowServerTest_EnsureClientHasDrawnWindow_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WindowServerTest_EnsureClientHasDrawnWindow_Params.prototype.initDefaults_ = function() {
    this.clientName = null;
  };
  WindowServerTest_EnsureClientHasDrawnWindow_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WindowServerTest_EnsureClientHasDrawnWindow_Params.generate = function(generator_) {
    var generated = new WindowServerTest_EnsureClientHasDrawnWindow_Params;
    generated.clientName = generator_.generateString(false);
    return generated;
  };

  WindowServerTest_EnsureClientHasDrawnWindow_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.clientName = mutator_.mutateString(this.clientName, false);
    }
    return this;
  };
  WindowServerTest_EnsureClientHasDrawnWindow_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WindowServerTest_EnsureClientHasDrawnWindow_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WindowServerTest_EnsureClientHasDrawnWindow_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WindowServerTest_EnsureClientHasDrawnWindow_Params.validate = function(messageValidator, offset) {
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


    // validate WindowServerTest_EnsureClientHasDrawnWindow_Params.clientName
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  WindowServerTest_EnsureClientHasDrawnWindow_Params.encodedSize = codec.kStructHeaderSize + 8;

  WindowServerTest_EnsureClientHasDrawnWindow_Params.decode = function(decoder) {
    var packed;
    var val = new WindowServerTest_EnsureClientHasDrawnWindow_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.clientName = decoder.decodeStruct(codec.String);
    return val;
  };

  WindowServerTest_EnsureClientHasDrawnWindow_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WindowServerTest_EnsureClientHasDrawnWindow_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.clientName);
  };
  function WindowServerTest_EnsureClientHasDrawnWindow_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WindowServerTest_EnsureClientHasDrawnWindow_ResponseParams.prototype.initDefaults_ = function() {
    this.success = false;
  };
  WindowServerTest_EnsureClientHasDrawnWindow_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WindowServerTest_EnsureClientHasDrawnWindow_ResponseParams.generate = function(generator_) {
    var generated = new WindowServerTest_EnsureClientHasDrawnWindow_ResponseParams;
    generated.success = generator_.generateBool();
    return generated;
  };

  WindowServerTest_EnsureClientHasDrawnWindow_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.success = mutator_.mutateBool(this.success);
    }
    return this;
  };
  WindowServerTest_EnsureClientHasDrawnWindow_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WindowServerTest_EnsureClientHasDrawnWindow_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WindowServerTest_EnsureClientHasDrawnWindow_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WindowServerTest_EnsureClientHasDrawnWindow_ResponseParams.validate = function(messageValidator, offset) {
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

  WindowServerTest_EnsureClientHasDrawnWindow_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  WindowServerTest_EnsureClientHasDrawnWindow_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new WindowServerTest_EnsureClientHasDrawnWindow_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.success = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  WindowServerTest_EnsureClientHasDrawnWindow_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WindowServerTest_EnsureClientHasDrawnWindow_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.success & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  var kWindowServerTest_EnsureClientHasDrawnWindow_Name = 225348360;

  function WindowServerTestPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(WindowServerTest,
                                                   handleOrPtrInfo);
  }

  function WindowServerTestAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        WindowServerTest, associatedInterfacePtrInfo);
  }

  WindowServerTestAssociatedPtr.prototype =
      Object.create(WindowServerTestPtr.prototype);
  WindowServerTestAssociatedPtr.prototype.constructor =
      WindowServerTestAssociatedPtr;

  function WindowServerTestProxy(receiver) {
    this.receiver_ = receiver;
  }
  WindowServerTestPtr.prototype.ensureClientHasDrawnWindow = function() {
    return WindowServerTestProxy.prototype.ensureClientHasDrawnWindow
        .apply(this.ptr.getProxy(), arguments);
  };

  WindowServerTestProxy.prototype.ensureClientHasDrawnWindow = function(clientName) {
    var params_ = new WindowServerTest_EnsureClientHasDrawnWindow_Params();
    params_.clientName = clientName;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kWindowServerTest_EnsureClientHasDrawnWindow_Name,
          codec.align(WindowServerTest_EnsureClientHasDrawnWindow_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(WindowServerTest_EnsureClientHasDrawnWindow_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(WindowServerTest_EnsureClientHasDrawnWindow_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };

  function WindowServerTestStub(delegate) {
    this.delegate_ = delegate;
  }
  WindowServerTestStub.prototype.ensureClientHasDrawnWindow = function(clientName) {
    return this.delegate_ && this.delegate_.ensureClientHasDrawnWindow && this.delegate_.ensureClientHasDrawnWindow(clientName);
  }

  WindowServerTestStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  WindowServerTestStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kWindowServerTest_EnsureClientHasDrawnWindow_Name:
      var params = reader.decodeStruct(WindowServerTest_EnsureClientHasDrawnWindow_Params);
      this.ensureClientHasDrawnWindow(params.clientName).then(function(response) {
        var responseParams =
            new WindowServerTest_EnsureClientHasDrawnWindow_ResponseParams();
        responseParams.success = response.success;
        var builder = new codec.MessageV1Builder(
            kWindowServerTest_EnsureClientHasDrawnWindow_Name,
            codec.align(WindowServerTest_EnsureClientHasDrawnWindow_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(WindowServerTest_EnsureClientHasDrawnWindow_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    default:
      return false;
    }
  };

  function validateWindowServerTestRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kWindowServerTest_EnsureClientHasDrawnWindow_Name:
        if (message.expectsResponse())
          paramsClass = WindowServerTest_EnsureClientHasDrawnWindow_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateWindowServerTestResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kWindowServerTest_EnsureClientHasDrawnWindow_Name:
        if (message.isResponse())
          paramsClass = WindowServerTest_EnsureClientHasDrawnWindow_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var WindowServerTest = {
    name: 'ui.mojom.WindowServerTest',
    kVersion: 0,
    ptrClass: WindowServerTestPtr,
    proxyClass: WindowServerTestProxy,
    stubClass: WindowServerTestStub,
    validateRequest: validateWindowServerTestRequest,
    validateResponse: validateWindowServerTestResponse,
    mojomId: 'services/ui/public/interfaces/window_server_test.mojom',
    fuzzMethods: {
      ensureClientHasDrawnWindow: {
        params: WindowServerTest_EnsureClientHasDrawnWindow_Params,
      },
    },
  };
  WindowServerTestStub.prototype.validator = validateWindowServerTestRequest;
  WindowServerTestProxy.prototype.validator = validateWindowServerTestResponse;
  exports.WindowServerTest = WindowServerTest;
  exports.WindowServerTestPtr = WindowServerTestPtr;
  exports.WindowServerTestAssociatedPtr = WindowServerTestAssociatedPtr;
})();