// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'third_party/blink/public/mojom/service_worker/service_worker_stream_handle.mojom';
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



  function ServiceWorkerStreamHandle(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ServiceWorkerStreamHandle.prototype.initDefaults_ = function() {
    this.stream = null;
    this.callbackRequest = new bindings.InterfaceRequest();
  };
  ServiceWorkerStreamHandle.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ServiceWorkerStreamHandle.generate = function(generator_) {
    var generated = new ServiceWorkerStreamHandle;
    generated.stream = generator_.generateDataPipeConsumer(false);
    generated.callbackRequest = generator_.generateInterfaceRequest("blink.mojom.ServiceWorkerStreamCallback", false);
    return generated;
  };

  ServiceWorkerStreamHandle.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.stream = mutator_.mutateDataPipeConsumer(this.stream, false);
    }
    if (mutator_.chooseMutateField()) {
      this.callbackRequest = mutator_.mutateInterfaceRequest(this.callbackRequest, "blink.mojom.ServiceWorkerStreamCallback", false);
    }
    return this;
  };
  ServiceWorkerStreamHandle.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.stream !== null) {
      Array.prototype.push.apply(handles, ["handle<data_pipe_consumer>"]);
    }
    if (this.callbackRequest !== null) {
      Array.prototype.push.apply(handles, ["blink.mojom.ServiceWorkerStreamCallbackRequest"]);
    }
    return handles;
  };

  ServiceWorkerStreamHandle.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ServiceWorkerStreamHandle.prototype.setHandlesInternal_ = function(handles, idx) {
    this.stream = handles[idx++];;
    this.callbackRequest = handles[idx++];;
    return idx;
  };

  ServiceWorkerStreamHandle.validate = function(messageValidator, offset) {
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


    // validate ServiceWorkerStreamHandle.stream
    err = messageValidator.validateHandle(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate ServiceWorkerStreamHandle.callbackRequest
    err = messageValidator.validateInterfaceRequest(offset + codec.kStructHeaderSize + 4, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ServiceWorkerStreamHandle.encodedSize = codec.kStructHeaderSize + 8;

  ServiceWorkerStreamHandle.decode = function(decoder) {
    var packed;
    var val = new ServiceWorkerStreamHandle();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.stream = decoder.decodeStruct(codec.Handle);
    val.callbackRequest = decoder.decodeStruct(codec.InterfaceRequest);
    return val;
  };

  ServiceWorkerStreamHandle.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ServiceWorkerStreamHandle.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Handle, val.stream);
    encoder.encodeStruct(codec.InterfaceRequest, val.callbackRequest);
  };
  function ServiceWorkerStreamCallback_OnCompleted_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ServiceWorkerStreamCallback_OnCompleted_Params.prototype.initDefaults_ = function() {
  };
  ServiceWorkerStreamCallback_OnCompleted_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ServiceWorkerStreamCallback_OnCompleted_Params.generate = function(generator_) {
    var generated = new ServiceWorkerStreamCallback_OnCompleted_Params;
    return generated;
  };

  ServiceWorkerStreamCallback_OnCompleted_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  ServiceWorkerStreamCallback_OnCompleted_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ServiceWorkerStreamCallback_OnCompleted_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ServiceWorkerStreamCallback_OnCompleted_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ServiceWorkerStreamCallback_OnCompleted_Params.validate = function(messageValidator, offset) {
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

  ServiceWorkerStreamCallback_OnCompleted_Params.encodedSize = codec.kStructHeaderSize + 0;

  ServiceWorkerStreamCallback_OnCompleted_Params.decode = function(decoder) {
    var packed;
    var val = new ServiceWorkerStreamCallback_OnCompleted_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  ServiceWorkerStreamCallback_OnCompleted_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ServiceWorkerStreamCallback_OnCompleted_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function ServiceWorkerStreamCallback_OnAborted_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ServiceWorkerStreamCallback_OnAborted_Params.prototype.initDefaults_ = function() {
  };
  ServiceWorkerStreamCallback_OnAborted_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ServiceWorkerStreamCallback_OnAborted_Params.generate = function(generator_) {
    var generated = new ServiceWorkerStreamCallback_OnAborted_Params;
    return generated;
  };

  ServiceWorkerStreamCallback_OnAborted_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  ServiceWorkerStreamCallback_OnAborted_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ServiceWorkerStreamCallback_OnAborted_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ServiceWorkerStreamCallback_OnAborted_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ServiceWorkerStreamCallback_OnAborted_Params.validate = function(messageValidator, offset) {
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

  ServiceWorkerStreamCallback_OnAborted_Params.encodedSize = codec.kStructHeaderSize + 0;

  ServiceWorkerStreamCallback_OnAborted_Params.decode = function(decoder) {
    var packed;
    var val = new ServiceWorkerStreamCallback_OnAborted_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  ServiceWorkerStreamCallback_OnAborted_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ServiceWorkerStreamCallback_OnAborted_Params.encodedSize);
    encoder.writeUint32(0);
  };
  var kServiceWorkerStreamCallback_OnCompleted_Name = 369360367;
  var kServiceWorkerStreamCallback_OnAborted_Name = 1197262715;

  function ServiceWorkerStreamCallbackPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(ServiceWorkerStreamCallback,
                                                   handleOrPtrInfo);
  }

  function ServiceWorkerStreamCallbackAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        ServiceWorkerStreamCallback, associatedInterfacePtrInfo);
  }

  ServiceWorkerStreamCallbackAssociatedPtr.prototype =
      Object.create(ServiceWorkerStreamCallbackPtr.prototype);
  ServiceWorkerStreamCallbackAssociatedPtr.prototype.constructor =
      ServiceWorkerStreamCallbackAssociatedPtr;

  function ServiceWorkerStreamCallbackProxy(receiver) {
    this.receiver_ = receiver;
  }
  ServiceWorkerStreamCallbackPtr.prototype.onCompleted = function() {
    return ServiceWorkerStreamCallbackProxy.prototype.onCompleted
        .apply(this.ptr.getProxy(), arguments);
  };

  ServiceWorkerStreamCallbackProxy.prototype.onCompleted = function() {
    var params_ = new ServiceWorkerStreamCallback_OnCompleted_Params();
    var builder = new codec.MessageV0Builder(
        kServiceWorkerStreamCallback_OnCompleted_Name,
        codec.align(ServiceWorkerStreamCallback_OnCompleted_Params.encodedSize));
    builder.encodeStruct(ServiceWorkerStreamCallback_OnCompleted_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  ServiceWorkerStreamCallbackPtr.prototype.onAborted = function() {
    return ServiceWorkerStreamCallbackProxy.prototype.onAborted
        .apply(this.ptr.getProxy(), arguments);
  };

  ServiceWorkerStreamCallbackProxy.prototype.onAborted = function() {
    var params_ = new ServiceWorkerStreamCallback_OnAborted_Params();
    var builder = new codec.MessageV0Builder(
        kServiceWorkerStreamCallback_OnAborted_Name,
        codec.align(ServiceWorkerStreamCallback_OnAborted_Params.encodedSize));
    builder.encodeStruct(ServiceWorkerStreamCallback_OnAborted_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function ServiceWorkerStreamCallbackStub(delegate) {
    this.delegate_ = delegate;
  }
  ServiceWorkerStreamCallbackStub.prototype.onCompleted = function() {
    return this.delegate_ && this.delegate_.onCompleted && this.delegate_.onCompleted();
  }
  ServiceWorkerStreamCallbackStub.prototype.onAborted = function() {
    return this.delegate_ && this.delegate_.onAborted && this.delegate_.onAborted();
  }

  ServiceWorkerStreamCallbackStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kServiceWorkerStreamCallback_OnCompleted_Name:
      var params = reader.decodeStruct(ServiceWorkerStreamCallback_OnCompleted_Params);
      this.onCompleted();
      return true;
    case kServiceWorkerStreamCallback_OnAborted_Name:
      var params = reader.decodeStruct(ServiceWorkerStreamCallback_OnAborted_Params);
      this.onAborted();
      return true;
    default:
      return false;
    }
  };

  ServiceWorkerStreamCallbackStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateServiceWorkerStreamCallbackRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kServiceWorkerStreamCallback_OnCompleted_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = ServiceWorkerStreamCallback_OnCompleted_Params;
      break;
      case kServiceWorkerStreamCallback_OnAborted_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = ServiceWorkerStreamCallback_OnAborted_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateServiceWorkerStreamCallbackResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var ServiceWorkerStreamCallback = {
    name: 'blink.mojom.ServiceWorkerStreamCallback',
    kVersion: 0,
    ptrClass: ServiceWorkerStreamCallbackPtr,
    proxyClass: ServiceWorkerStreamCallbackProxy,
    stubClass: ServiceWorkerStreamCallbackStub,
    validateRequest: validateServiceWorkerStreamCallbackRequest,
    validateResponse: null,
    mojomId: 'third_party/blink/public/mojom/service_worker/service_worker_stream_handle.mojom',
    fuzzMethods: {
      onCompleted: {
        params: ServiceWorkerStreamCallback_OnCompleted_Params,
      },
      onAborted: {
        params: ServiceWorkerStreamCallback_OnAborted_Params,
      },
    },
  };
  ServiceWorkerStreamCallbackStub.prototype.validator = validateServiceWorkerStreamCallbackRequest;
  ServiceWorkerStreamCallbackProxy.prototype.validator = null;
  exports.ServiceWorkerStreamHandle = ServiceWorkerStreamHandle;
  exports.ServiceWorkerStreamCallback = ServiceWorkerStreamCallback;
  exports.ServiceWorkerStreamCallbackPtr = ServiceWorkerStreamCallbackPtr;
  exports.ServiceWorkerStreamCallbackAssociatedPtr = ServiceWorkerStreamCallbackAssociatedPtr;
})();