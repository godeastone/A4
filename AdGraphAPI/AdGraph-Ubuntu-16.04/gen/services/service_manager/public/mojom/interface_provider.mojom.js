// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'services/service_manager/public/mojom/interface_provider.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('serviceManager.mojom');



  function InterfaceProvider_GetInterface_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  InterfaceProvider_GetInterface_Params.prototype.initDefaults_ = function() {
    this.interfaceName = null;
    this.pipe = null;
  };
  InterfaceProvider_GetInterface_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  InterfaceProvider_GetInterface_Params.generate = function(generator_) {
    var generated = new InterfaceProvider_GetInterface_Params;
    generated.interfaceName = generator_.generateString(false);
    generated.pipe = generator_.generateMessagePipe(false);
    return generated;
  };

  InterfaceProvider_GetInterface_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.interfaceName = mutator_.mutateString(this.interfaceName, false);
    }
    if (mutator_.chooseMutateField()) {
      this.pipe = mutator_.mutateMessagePipe(this.pipe, false);
    }
    return this;
  };
  InterfaceProvider_GetInterface_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.pipe !== null) {
      Array.prototype.push.apply(handles, ["handle<message_pipe>"]);
    }
    return handles;
  };

  InterfaceProvider_GetInterface_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  InterfaceProvider_GetInterface_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.pipe = handles[idx++];;
    return idx;
  };

  InterfaceProvider_GetInterface_Params.validate = function(messageValidator, offset) {
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


    // validate InterfaceProvider_GetInterface_Params.interfaceName
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate InterfaceProvider_GetInterface_Params.pipe
    err = messageValidator.validateHandle(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  InterfaceProvider_GetInterface_Params.encodedSize = codec.kStructHeaderSize + 16;

  InterfaceProvider_GetInterface_Params.decode = function(decoder) {
    var packed;
    var val = new InterfaceProvider_GetInterface_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.interfaceName = decoder.decodeStruct(codec.String);
    val.pipe = decoder.decodeStruct(codec.Handle);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  InterfaceProvider_GetInterface_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(InterfaceProvider_GetInterface_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.interfaceName);
    encoder.encodeStruct(codec.Handle, val.pipe);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  var kInterfaceProvider_GetInterface_Name = 1185574649;

  function InterfaceProviderPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(InterfaceProvider,
                                                   handleOrPtrInfo);
  }

  function InterfaceProviderAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        InterfaceProvider, associatedInterfacePtrInfo);
  }

  InterfaceProviderAssociatedPtr.prototype =
      Object.create(InterfaceProviderPtr.prototype);
  InterfaceProviderAssociatedPtr.prototype.constructor =
      InterfaceProviderAssociatedPtr;

  function InterfaceProviderProxy(receiver) {
    this.receiver_ = receiver;
  }
  InterfaceProviderPtr.prototype.getInterface = function() {
    return InterfaceProviderProxy.prototype.getInterface
        .apply(this.ptr.getProxy(), arguments);
  };

  InterfaceProviderProxy.prototype.getInterface = function(interfaceName, pipe) {
    var params_ = new InterfaceProvider_GetInterface_Params();
    params_.interfaceName = interfaceName;
    params_.pipe = pipe;
    var builder = new codec.MessageV0Builder(
        kInterfaceProvider_GetInterface_Name,
        codec.align(InterfaceProvider_GetInterface_Params.encodedSize));
    builder.encodeStruct(InterfaceProvider_GetInterface_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function InterfaceProviderStub(delegate) {
    this.delegate_ = delegate;
  }
  InterfaceProviderStub.prototype.getInterface = function(interfaceName, pipe) {
    return this.delegate_ && this.delegate_.getInterface && this.delegate_.getInterface(interfaceName, pipe);
  }

  InterfaceProviderStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kInterfaceProvider_GetInterface_Name:
      var params = reader.decodeStruct(InterfaceProvider_GetInterface_Params);
      this.getInterface(params.interfaceName, params.pipe);
      return true;
    default:
      return false;
    }
  };

  InterfaceProviderStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateInterfaceProviderRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kInterfaceProvider_GetInterface_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = InterfaceProvider_GetInterface_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateInterfaceProviderResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var InterfaceProvider = {
    name: 'service_manager.mojom.InterfaceProvider',
    kVersion: 0,
    ptrClass: InterfaceProviderPtr,
    proxyClass: InterfaceProviderProxy,
    stubClass: InterfaceProviderStub,
    validateRequest: validateInterfaceProviderRequest,
    validateResponse: null,
    mojomId: 'services/service_manager/public/mojom/interface_provider.mojom',
    fuzzMethods: {
      getInterface: {
        params: InterfaceProvider_GetInterface_Params,
      },
    },
  };
  InterfaceProviderStub.prototype.validator = validateInterfaceProviderRequest;
  InterfaceProviderProxy.prototype.validator = null;
  exports.InterfaceProvider = InterfaceProvider;
  exports.InterfaceProviderPtr = InterfaceProviderPtr;
  exports.InterfaceProviderAssociatedPtr = InterfaceProviderAssociatedPtr;
})();