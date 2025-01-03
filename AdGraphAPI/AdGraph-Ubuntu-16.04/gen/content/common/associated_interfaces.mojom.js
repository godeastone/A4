// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'content/common/associated_interfaces.mojom';
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



  function AssociatedInterfaceProvider_GetAssociatedInterface_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  AssociatedInterfaceProvider_GetAssociatedInterface_Params.prototype.initDefaults_ = function() {
    this.name = null;
    this.request = new associatedBindings.AssociatedInterfaceRequest();
  };
  AssociatedInterfaceProvider_GetAssociatedInterface_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  AssociatedInterfaceProvider_GetAssociatedInterface_Params.generate = function(generator_) {
    var generated = new AssociatedInterfaceProvider_GetAssociatedInterface_Params;
    generated.name = generator_.generateString(false);
    generated.request = generator_.generateAssociatedInterfaceRequest("content.mojom.AssociatedInterface", false);
    return generated;
  };

  AssociatedInterfaceProvider_GetAssociatedInterface_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.name = mutator_.mutateString(this.name, false);
    }
    if (mutator_.chooseMutateField()) {
      this.request = mutator_.mutateAssociatedInterfaceRequest(this.request, "content.mojom.AssociatedInterface", false);
    }
    return this;
  };
  AssociatedInterfaceProvider_GetAssociatedInterface_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.request !== null) {
      Array.prototype.push.apply(handles, ["content.mojom.AssociatedInterfaceAssociatedRequest"]);
    }
    return handles;
  };

  AssociatedInterfaceProvider_GetAssociatedInterface_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  AssociatedInterfaceProvider_GetAssociatedInterface_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.request = handles[idx++];;
    return idx;
  };

  AssociatedInterfaceProvider_GetAssociatedInterface_Params.validate = function(messageValidator, offset) {
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


    // validate AssociatedInterfaceProvider_GetAssociatedInterface_Params.name
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate AssociatedInterfaceProvider_GetAssociatedInterface_Params.request
    err = messageValidator.validateAssociatedInterfaceRequest(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  AssociatedInterfaceProvider_GetAssociatedInterface_Params.encodedSize = codec.kStructHeaderSize + 16;

  AssociatedInterfaceProvider_GetAssociatedInterface_Params.decode = function(decoder) {
    var packed;
    var val = new AssociatedInterfaceProvider_GetAssociatedInterface_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.name = decoder.decodeStruct(codec.String);
    val.request = decoder.decodeStruct(codec.AssociatedInterfaceRequest);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  AssociatedInterfaceProvider_GetAssociatedInterface_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(AssociatedInterfaceProvider_GetAssociatedInterface_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.name);
    encoder.encodeStruct(codec.AssociatedInterfaceRequest, val.request);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function RouteProvider_GetRoute_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  RouteProvider_GetRoute_Params.prototype.initDefaults_ = function() {
    this.routingId = 0;
    this.request = new associatedBindings.AssociatedInterfaceRequest();
  };
  RouteProvider_GetRoute_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  RouteProvider_GetRoute_Params.generate = function(generator_) {
    var generated = new RouteProvider_GetRoute_Params;
    generated.routingId = generator_.generateInt32();
    generated.request = generator_.generateAssociatedInterfaceRequest("content.mojom.AssociatedInterfaceProvider", false);
    return generated;
  };

  RouteProvider_GetRoute_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.routingId = mutator_.mutateInt32(this.routingId);
    }
    if (mutator_.chooseMutateField()) {
      this.request = mutator_.mutateAssociatedInterfaceRequest(this.request, "content.mojom.AssociatedInterfaceProvider", false);
    }
    return this;
  };
  RouteProvider_GetRoute_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.request !== null) {
      Array.prototype.push.apply(handles, ["content.mojom.AssociatedInterfaceProviderAssociatedRequest"]);
    }
    return handles;
  };

  RouteProvider_GetRoute_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  RouteProvider_GetRoute_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.request = handles[idx++];;
    return idx;
  };

  RouteProvider_GetRoute_Params.validate = function(messageValidator, offset) {
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



    // validate RouteProvider_GetRoute_Params.request
    err = messageValidator.validateAssociatedInterfaceRequest(offset + codec.kStructHeaderSize + 4, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  RouteProvider_GetRoute_Params.encodedSize = codec.kStructHeaderSize + 8;

  RouteProvider_GetRoute_Params.decode = function(decoder) {
    var packed;
    var val = new RouteProvider_GetRoute_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.routingId = decoder.decodeStruct(codec.Int32);
    val.request = decoder.decodeStruct(codec.AssociatedInterfaceRequest);
    return val;
  };

  RouteProvider_GetRoute_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(RouteProvider_GetRoute_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.routingId);
    encoder.encodeStruct(codec.AssociatedInterfaceRequest, val.request);
  };

  function AssociatedInterfacePtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(AssociatedInterface,
                                                   handleOrPtrInfo);
  }

  function AssociatedInterfaceAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        AssociatedInterface, associatedInterfacePtrInfo);
  }

  AssociatedInterfaceAssociatedPtr.prototype =
      Object.create(AssociatedInterfacePtr.prototype);
  AssociatedInterfaceAssociatedPtr.prototype.constructor =
      AssociatedInterfaceAssociatedPtr;

  function AssociatedInterfaceProxy(receiver) {
    this.receiver_ = receiver;
  }

  function AssociatedInterfaceStub(delegate) {
    this.delegate_ = delegate;
  }

  AssociatedInterfaceStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  AssociatedInterfaceStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateAssociatedInterfaceRequest(messageValidator) {
    return validator.validationError.NONE;
  }

  function validateAssociatedInterfaceResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var AssociatedInterface = {
    name: 'content.mojom.AssociatedInterface',
    kVersion: 0,
    ptrClass: AssociatedInterfacePtr,
    proxyClass: AssociatedInterfaceProxy,
    stubClass: AssociatedInterfaceStub,
    validateRequest: validateAssociatedInterfaceRequest,
    validateResponse: null,
    mojomId: 'content/common/associated_interfaces.mojom',
    fuzzMethods: {
    },
  };
  AssociatedInterfaceStub.prototype.validator = validateAssociatedInterfaceRequest;
  AssociatedInterfaceProxy.prototype.validator = null;
  var kAssociatedInterfaceProvider_GetAssociatedInterface_Name = 579618442;

  function AssociatedInterfaceProviderPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(AssociatedInterfaceProvider,
                                                   handleOrPtrInfo);
  }

  function AssociatedInterfaceProviderAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        AssociatedInterfaceProvider, associatedInterfacePtrInfo);
  }

  AssociatedInterfaceProviderAssociatedPtr.prototype =
      Object.create(AssociatedInterfaceProviderPtr.prototype);
  AssociatedInterfaceProviderAssociatedPtr.prototype.constructor =
      AssociatedInterfaceProviderAssociatedPtr;

  function AssociatedInterfaceProviderProxy(receiver) {
    this.receiver_ = receiver;
  }
  AssociatedInterfaceProviderPtr.prototype.getAssociatedInterface = function() {
    return AssociatedInterfaceProviderProxy.prototype.getAssociatedInterface
        .apply(this.ptr.getProxy(), arguments);
  };

  AssociatedInterfaceProviderProxy.prototype.getAssociatedInterface = function(name, request) {
    var params_ = new AssociatedInterfaceProvider_GetAssociatedInterface_Params();
    params_.name = name;
    params_.request = request;
    var builder = new codec.MessageV2Builder(
        kAssociatedInterfaceProvider_GetAssociatedInterface_Name,
        codec.align(AssociatedInterfaceProvider_GetAssociatedInterface_Params.encodedSize));
    builder.setPayload(AssociatedInterfaceProvider_GetAssociatedInterface_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function AssociatedInterfaceProviderStub(delegate) {
    this.delegate_ = delegate;
  }
  AssociatedInterfaceProviderStub.prototype.getAssociatedInterface = function(name, request) {
    return this.delegate_ && this.delegate_.getAssociatedInterface && this.delegate_.getAssociatedInterface(name, request);
  }

  AssociatedInterfaceProviderStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kAssociatedInterfaceProvider_GetAssociatedInterface_Name:
      var params = reader.decodeStruct(AssociatedInterfaceProvider_GetAssociatedInterface_Params);
      this.getAssociatedInterface(params.name, params.request);
      return true;
    default:
      return false;
    }
  };

  AssociatedInterfaceProviderStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateAssociatedInterfaceProviderRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kAssociatedInterfaceProvider_GetAssociatedInterface_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = AssociatedInterfaceProvider_GetAssociatedInterface_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateAssociatedInterfaceProviderResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var AssociatedInterfaceProvider = {
    name: 'content.mojom.AssociatedInterfaceProvider',
    kVersion: 0,
    ptrClass: AssociatedInterfaceProviderPtr,
    proxyClass: AssociatedInterfaceProviderProxy,
    stubClass: AssociatedInterfaceProviderStub,
    validateRequest: validateAssociatedInterfaceProviderRequest,
    validateResponse: null,
    mojomId: 'content/common/associated_interfaces.mojom',
    fuzzMethods: {
      getAssociatedInterface: {
        params: AssociatedInterfaceProvider_GetAssociatedInterface_Params,
      },
    },
  };
  AssociatedInterfaceProviderStub.prototype.validator = validateAssociatedInterfaceProviderRequest;
  AssociatedInterfaceProviderProxy.prototype.validator = null;
  var kRouteProvider_GetRoute_Name = 1764642656;

  function RouteProviderPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(RouteProvider,
                                                   handleOrPtrInfo);
  }

  function RouteProviderAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        RouteProvider, associatedInterfacePtrInfo);
  }

  RouteProviderAssociatedPtr.prototype =
      Object.create(RouteProviderPtr.prototype);
  RouteProviderAssociatedPtr.prototype.constructor =
      RouteProviderAssociatedPtr;

  function RouteProviderProxy(receiver) {
    this.receiver_ = receiver;
  }
  RouteProviderPtr.prototype.getRoute = function() {
    return RouteProviderProxy.prototype.getRoute
        .apply(this.ptr.getProxy(), arguments);
  };

  RouteProviderProxy.prototype.getRoute = function(routingId, request) {
    var params_ = new RouteProvider_GetRoute_Params();
    params_.routingId = routingId;
    params_.request = request;
    var builder = new codec.MessageV2Builder(
        kRouteProvider_GetRoute_Name,
        codec.align(RouteProvider_GetRoute_Params.encodedSize));
    builder.setPayload(RouteProvider_GetRoute_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function RouteProviderStub(delegate) {
    this.delegate_ = delegate;
  }
  RouteProviderStub.prototype.getRoute = function(routingId, request) {
    return this.delegate_ && this.delegate_.getRoute && this.delegate_.getRoute(routingId, request);
  }

  RouteProviderStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kRouteProvider_GetRoute_Name:
      var params = reader.decodeStruct(RouteProvider_GetRoute_Params);
      this.getRoute(params.routingId, params.request);
      return true;
    default:
      return false;
    }
  };

  RouteProviderStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateRouteProviderRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kRouteProvider_GetRoute_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = RouteProvider_GetRoute_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateRouteProviderResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var RouteProvider = {
    name: 'content.mojom.RouteProvider',
    kVersion: 0,
    ptrClass: RouteProviderPtr,
    proxyClass: RouteProviderProxy,
    stubClass: RouteProviderStub,
    validateRequest: validateRouteProviderRequest,
    validateResponse: null,
    mojomId: 'content/common/associated_interfaces.mojom',
    fuzzMethods: {
      getRoute: {
        params: RouteProvider_GetRoute_Params,
      },
    },
  };
  RouteProviderStub.prototype.validator = validateRouteProviderRequest;
  RouteProviderProxy.prototype.validator = null;
  exports.AssociatedInterface = AssociatedInterface;
  exports.AssociatedInterfacePtr = AssociatedInterfacePtr;
  exports.AssociatedInterfaceAssociatedPtr = AssociatedInterfaceAssociatedPtr;
  exports.AssociatedInterfaceProvider = AssociatedInterfaceProvider;
  exports.AssociatedInterfaceProviderPtr = AssociatedInterfaceProviderPtr;
  exports.AssociatedInterfaceProviderAssociatedPtr = AssociatedInterfaceProviderAssociatedPtr;
  exports.RouteProvider = RouteProvider;
  exports.RouteProviderPtr = RouteProviderPtr;
  exports.RouteProviderAssociatedPtr = RouteProviderAssociatedPtr;
})();