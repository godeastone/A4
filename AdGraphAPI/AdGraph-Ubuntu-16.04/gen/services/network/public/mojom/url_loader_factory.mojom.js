// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'services/network/public/mojom/url_loader_factory.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('network.mojom');
  var mutable_network_traffic_annotation_tag$ =
      mojo.internal.exposeNamespace('network.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'services/network/public/mojom/mutable_network_traffic_annotation_tag.mojom', 'mutable_network_traffic_annotation_tag.mojom.js');
  }
  var url_loader$ =
      mojo.internal.exposeNamespace('network.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'services/network/public/mojom/url_loader.mojom', 'url_loader.mojom.js');
  }


  var kURLLoadOptionNone = 0;
  var kURLLoadOptionSendSSLInfoWithResponse = 1;
  var kURLLoadOptionSniffMimeType = 2;
  var kURLLoadOptionSynchronous = 4;
  var kURLLoadOptionSendSSLInfoForCertificateError = 8;
  var kURLLoadOptionPauseOnResponseStarted = 16;

  function URLLoaderFactory_CreateLoaderAndStart_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  URLLoaderFactory_CreateLoaderAndStart_Params.prototype.initDefaults_ = function() {
    this.loader = new bindings.InterfaceRequest();
    this.routingId = 0;
    this.requestId = 0;
    this.options = 0;
    this.request = null;
    this.client = new url_loader$.URLLoaderClientPtr();
    this.trafficAnnotation = null;
  };
  URLLoaderFactory_CreateLoaderAndStart_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  URLLoaderFactory_CreateLoaderAndStart_Params.generate = function(generator_) {
    var generated = new URLLoaderFactory_CreateLoaderAndStart_Params;
    generated.loader = generator_.generateInterfaceRequest("network.mojom.URLLoader", false);
    generated.routingId = generator_.generateInt32();
    generated.requestId = generator_.generateInt32();
    generated.options = generator_.generateUint32();
    generated.request = generator_.generateStruct(network.mojom.URLRequest, false);
    generated.client = generator_.generateInterface("network.mojom.URLLoaderClient", false);
    generated.trafficAnnotation = generator_.generateStruct(network.mojom.MutableNetworkTrafficAnnotationTag, false);
    return generated;
  };

  URLLoaderFactory_CreateLoaderAndStart_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.loader = mutator_.mutateInterfaceRequest(this.loader, "network.mojom.URLLoader", false);
    }
    if (mutator_.chooseMutateField()) {
      this.routingId = mutator_.mutateInt32(this.routingId);
    }
    if (mutator_.chooseMutateField()) {
      this.requestId = mutator_.mutateInt32(this.requestId);
    }
    if (mutator_.chooseMutateField()) {
      this.options = mutator_.mutateUint32(this.options);
    }
    if (mutator_.chooseMutateField()) {
      this.request = mutator_.mutateStruct(network.mojom.URLRequest, false);
    }
    if (mutator_.chooseMutateField()) {
      this.client = mutator_.mutateInterface(this.client, "network.mojom.URLLoaderClient", false);
    }
    if (mutator_.chooseMutateField()) {
      this.trafficAnnotation = mutator_.mutateStruct(network.mojom.MutableNetworkTrafficAnnotationTag, false);
    }
    return this;
  };
  URLLoaderFactory_CreateLoaderAndStart_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.loader !== null) {
      Array.prototype.push.apply(handles, ["network.mojom.URLLoaderRequest"]);
    }
    if (this.client !== null) {
      Array.prototype.push.apply(handles, ["network.mojom.URLLoaderClientPtr"]);
    }
    return handles;
  };

  URLLoaderFactory_CreateLoaderAndStart_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  URLLoaderFactory_CreateLoaderAndStart_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.loader = handles[idx++];;
    this.client = handles[idx++];;
    return idx;
  };

  URLLoaderFactory_CreateLoaderAndStart_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 48}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;


    // validate URLLoaderFactory_CreateLoaderAndStart_Params.loader
    err = messageValidator.validateInterfaceRequest(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;





    // validate URLLoaderFactory_CreateLoaderAndStart_Params.request
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, url_loader$.URLRequest, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate URLLoaderFactory_CreateLoaderAndStart_Params.client
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 24, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate URLLoaderFactory_CreateLoaderAndStart_Params.trafficAnnotation
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 32, mutable_network_traffic_annotation_tag$.MutableNetworkTrafficAnnotationTag, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  URLLoaderFactory_CreateLoaderAndStart_Params.encodedSize = codec.kStructHeaderSize + 40;

  URLLoaderFactory_CreateLoaderAndStart_Params.decode = function(decoder) {
    var packed;
    var val = new URLLoaderFactory_CreateLoaderAndStart_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.loader = decoder.decodeStruct(codec.InterfaceRequest);
    val.routingId = decoder.decodeStruct(codec.Int32);
    val.requestId = decoder.decodeStruct(codec.Int32);
    val.options = decoder.decodeStruct(codec.Uint32);
    val.request = decoder.decodeStructPointer(url_loader$.URLRequest);
    val.client = decoder.decodeStruct(new codec.Interface(url_loader$.URLLoaderClientPtr));
    val.trafficAnnotation = decoder.decodeStructPointer(mutable_network_traffic_annotation_tag$.MutableNetworkTrafficAnnotationTag);
    return val;
  };

  URLLoaderFactory_CreateLoaderAndStart_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(URLLoaderFactory_CreateLoaderAndStart_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.InterfaceRequest, val.loader);
    encoder.encodeStruct(codec.Int32, val.routingId);
    encoder.encodeStruct(codec.Int32, val.requestId);
    encoder.encodeStruct(codec.Uint32, val.options);
    encoder.encodeStructPointer(url_loader$.URLRequest, val.request);
    encoder.encodeStruct(new codec.Interface(url_loader$.URLLoaderClientPtr), val.client);
    encoder.encodeStructPointer(mutable_network_traffic_annotation_tag$.MutableNetworkTrafficAnnotationTag, val.trafficAnnotation);
  };
  function URLLoaderFactory_Clone_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  URLLoaderFactory_Clone_Params.prototype.initDefaults_ = function() {
    this.factory = new bindings.InterfaceRequest();
  };
  URLLoaderFactory_Clone_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  URLLoaderFactory_Clone_Params.generate = function(generator_) {
    var generated = new URLLoaderFactory_Clone_Params;
    generated.factory = generator_.generateInterfaceRequest("network.mojom.URLLoaderFactory", false);
    return generated;
  };

  URLLoaderFactory_Clone_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.factory = mutator_.mutateInterfaceRequest(this.factory, "network.mojom.URLLoaderFactory", false);
    }
    return this;
  };
  URLLoaderFactory_Clone_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.factory !== null) {
      Array.prototype.push.apply(handles, ["network.mojom.URLLoaderFactoryRequest"]);
    }
    return handles;
  };

  URLLoaderFactory_Clone_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  URLLoaderFactory_Clone_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.factory = handles[idx++];;
    return idx;
  };

  URLLoaderFactory_Clone_Params.validate = function(messageValidator, offset) {
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


    // validate URLLoaderFactory_Clone_Params.factory
    err = messageValidator.validateInterfaceRequest(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  URLLoaderFactory_Clone_Params.encodedSize = codec.kStructHeaderSize + 8;

  URLLoaderFactory_Clone_Params.decode = function(decoder) {
    var packed;
    var val = new URLLoaderFactory_Clone_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.factory = decoder.decodeStruct(codec.InterfaceRequest);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  URLLoaderFactory_Clone_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(URLLoaderFactory_Clone_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.InterfaceRequest, val.factory);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  var kURLLoaderFactory_CreateLoaderAndStart_Name = 275877664;
  var kURLLoaderFactory_Clone_Name = 1699091098;

  function URLLoaderFactoryPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(URLLoaderFactory,
                                                   handleOrPtrInfo);
  }

  function URLLoaderFactoryAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        URLLoaderFactory, associatedInterfacePtrInfo);
  }

  URLLoaderFactoryAssociatedPtr.prototype =
      Object.create(URLLoaderFactoryPtr.prototype);
  URLLoaderFactoryAssociatedPtr.prototype.constructor =
      URLLoaderFactoryAssociatedPtr;

  function URLLoaderFactoryProxy(receiver) {
    this.receiver_ = receiver;
  }
  URLLoaderFactoryPtr.prototype.createLoaderAndStart = function() {
    return URLLoaderFactoryProxy.prototype.createLoaderAndStart
        .apply(this.ptr.getProxy(), arguments);
  };

  URLLoaderFactoryProxy.prototype.createLoaderAndStart = function(loader, routingId, requestId, options, request, client, trafficAnnotation) {
    var params_ = new URLLoaderFactory_CreateLoaderAndStart_Params();
    params_.loader = loader;
    params_.routingId = routingId;
    params_.requestId = requestId;
    params_.options = options;
    params_.request = request;
    params_.client = client;
    params_.trafficAnnotation = trafficAnnotation;
    var builder = new codec.MessageV0Builder(
        kURLLoaderFactory_CreateLoaderAndStart_Name,
        codec.align(URLLoaderFactory_CreateLoaderAndStart_Params.encodedSize));
    builder.encodeStruct(URLLoaderFactory_CreateLoaderAndStart_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  URLLoaderFactoryPtr.prototype.clone = function() {
    return URLLoaderFactoryProxy.prototype.clone
        .apply(this.ptr.getProxy(), arguments);
  };

  URLLoaderFactoryProxy.prototype.clone = function(factory) {
    var params_ = new URLLoaderFactory_Clone_Params();
    params_.factory = factory;
    var builder = new codec.MessageV0Builder(
        kURLLoaderFactory_Clone_Name,
        codec.align(URLLoaderFactory_Clone_Params.encodedSize));
    builder.encodeStruct(URLLoaderFactory_Clone_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function URLLoaderFactoryStub(delegate) {
    this.delegate_ = delegate;
  }
  URLLoaderFactoryStub.prototype.createLoaderAndStart = function(loader, routingId, requestId, options, request, client, trafficAnnotation) {
    return this.delegate_ && this.delegate_.createLoaderAndStart && this.delegate_.createLoaderAndStart(loader, routingId, requestId, options, request, client, trafficAnnotation);
  }
  URLLoaderFactoryStub.prototype.clone = function(factory) {
    return this.delegate_ && this.delegate_.clone && this.delegate_.clone(factory);
  }

  URLLoaderFactoryStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kURLLoaderFactory_CreateLoaderAndStart_Name:
      var params = reader.decodeStruct(URLLoaderFactory_CreateLoaderAndStart_Params);
      this.createLoaderAndStart(params.loader, params.routingId, params.requestId, params.options, params.request, params.client, params.trafficAnnotation);
      return true;
    case kURLLoaderFactory_Clone_Name:
      var params = reader.decodeStruct(URLLoaderFactory_Clone_Params);
      this.clone(params.factory);
      return true;
    default:
      return false;
    }
  };

  URLLoaderFactoryStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateURLLoaderFactoryRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kURLLoaderFactory_CreateLoaderAndStart_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = URLLoaderFactory_CreateLoaderAndStart_Params;
      break;
      case kURLLoaderFactory_Clone_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = URLLoaderFactory_Clone_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateURLLoaderFactoryResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var URLLoaderFactory = {
    name: 'network.mojom.URLLoaderFactory',
    kVersion: 0,
    ptrClass: URLLoaderFactoryPtr,
    proxyClass: URLLoaderFactoryProxy,
    stubClass: URLLoaderFactoryStub,
    validateRequest: validateURLLoaderFactoryRequest,
    validateResponse: null,
    mojomId: 'services/network/public/mojom/url_loader_factory.mojom',
    fuzzMethods: {
      createLoaderAndStart: {
        params: URLLoaderFactory_CreateLoaderAndStart_Params,
      },
      clone: {
        params: URLLoaderFactory_Clone_Params,
      },
    },
  };
  URLLoaderFactoryStub.prototype.validator = validateURLLoaderFactoryRequest;
  URLLoaderFactoryProxy.prototype.validator = null;
  exports.kURLLoadOptionNone = kURLLoadOptionNone;
  exports.kURLLoadOptionSendSSLInfoWithResponse = kURLLoadOptionSendSSLInfoWithResponse;
  exports.kURLLoadOptionSniffMimeType = kURLLoadOptionSniffMimeType;
  exports.kURLLoadOptionSynchronous = kURLLoadOptionSynchronous;
  exports.kURLLoadOptionSendSSLInfoForCertificateError = kURLLoadOptionSendSSLInfoForCertificateError;
  exports.kURLLoadOptionPauseOnResponseStarted = kURLLoadOptionPauseOnResponseStarted;
  exports.URLLoaderFactory = URLLoaderFactory;
  exports.URLLoaderFactoryPtr = URLLoaderFactoryPtr;
  exports.URLLoaderFactoryAssociatedPtr = URLLoaderFactoryAssociatedPtr;
})();