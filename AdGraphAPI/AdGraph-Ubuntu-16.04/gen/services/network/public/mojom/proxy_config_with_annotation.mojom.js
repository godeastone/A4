// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'services/network/public/mojom/proxy_config_with_annotation.mojom';
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
  var proxy_config$ =
      mojo.internal.exposeNamespace('network.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'services/network/public/mojom/proxy_config.mojom', 'proxy_config.mojom.js');
  }



  function ProxyConfigWithAnnotation(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ProxyConfigWithAnnotation.prototype.initDefaults_ = function() {
    this.value = null;
    this.trafficAnnotation = null;
  };
  ProxyConfigWithAnnotation.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ProxyConfigWithAnnotation.generate = function(generator_) {
    var generated = new ProxyConfigWithAnnotation;
    generated.value = generator_.generateStruct(network.mojom.ProxyConfig, false);
    generated.trafficAnnotation = generator_.generateStruct(network.mojom.MutableNetworkTrafficAnnotationTag, false);
    return generated;
  };

  ProxyConfigWithAnnotation.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.value = mutator_.mutateStruct(network.mojom.ProxyConfig, false);
    }
    if (mutator_.chooseMutateField()) {
      this.trafficAnnotation = mutator_.mutateStruct(network.mojom.MutableNetworkTrafficAnnotationTag, false);
    }
    return this;
  };
  ProxyConfigWithAnnotation.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ProxyConfigWithAnnotation.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ProxyConfigWithAnnotation.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ProxyConfigWithAnnotation.validate = function(messageValidator, offset) {
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


    // validate ProxyConfigWithAnnotation.value
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, proxy_config$.ProxyConfig, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate ProxyConfigWithAnnotation.trafficAnnotation
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, mutable_network_traffic_annotation_tag$.MutableNetworkTrafficAnnotationTag, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ProxyConfigWithAnnotation.encodedSize = codec.kStructHeaderSize + 16;

  ProxyConfigWithAnnotation.decode = function(decoder) {
    var packed;
    var val = new ProxyConfigWithAnnotation();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.value = decoder.decodeStructPointer(proxy_config$.ProxyConfig);
    val.trafficAnnotation = decoder.decodeStructPointer(mutable_network_traffic_annotation_tag$.MutableNetworkTrafficAnnotationTag);
    return val;
  };

  ProxyConfigWithAnnotation.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ProxyConfigWithAnnotation.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(proxy_config$.ProxyConfig, val.value);
    encoder.encodeStructPointer(mutable_network_traffic_annotation_tag$.MutableNetworkTrafficAnnotationTag, val.trafficAnnotation);
  };
  function ProxyConfigClient_OnProxyConfigUpdated_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ProxyConfigClient_OnProxyConfigUpdated_Params.prototype.initDefaults_ = function() {
    this.proxyConfig = null;
  };
  ProxyConfigClient_OnProxyConfigUpdated_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ProxyConfigClient_OnProxyConfigUpdated_Params.generate = function(generator_) {
    var generated = new ProxyConfigClient_OnProxyConfigUpdated_Params;
    generated.proxyConfig = generator_.generateStruct(network.mojom.ProxyConfigWithAnnotation, false);
    return generated;
  };

  ProxyConfigClient_OnProxyConfigUpdated_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.proxyConfig = mutator_.mutateStruct(network.mojom.ProxyConfigWithAnnotation, false);
    }
    return this;
  };
  ProxyConfigClient_OnProxyConfigUpdated_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ProxyConfigClient_OnProxyConfigUpdated_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ProxyConfigClient_OnProxyConfigUpdated_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ProxyConfigClient_OnProxyConfigUpdated_Params.validate = function(messageValidator, offset) {
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


    // validate ProxyConfigClient_OnProxyConfigUpdated_Params.proxyConfig
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, ProxyConfigWithAnnotation, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ProxyConfigClient_OnProxyConfigUpdated_Params.encodedSize = codec.kStructHeaderSize + 8;

  ProxyConfigClient_OnProxyConfigUpdated_Params.decode = function(decoder) {
    var packed;
    var val = new ProxyConfigClient_OnProxyConfigUpdated_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.proxyConfig = decoder.decodeStructPointer(ProxyConfigWithAnnotation);
    return val;
  };

  ProxyConfigClient_OnProxyConfigUpdated_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ProxyConfigClient_OnProxyConfigUpdated_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(ProxyConfigWithAnnotation, val.proxyConfig);
  };
  function ProxyConfigPollerClient_OnLazyProxyConfigPoll_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ProxyConfigPollerClient_OnLazyProxyConfigPoll_Params.prototype.initDefaults_ = function() {
  };
  ProxyConfigPollerClient_OnLazyProxyConfigPoll_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ProxyConfigPollerClient_OnLazyProxyConfigPoll_Params.generate = function(generator_) {
    var generated = new ProxyConfigPollerClient_OnLazyProxyConfigPoll_Params;
    return generated;
  };

  ProxyConfigPollerClient_OnLazyProxyConfigPoll_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  ProxyConfigPollerClient_OnLazyProxyConfigPoll_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ProxyConfigPollerClient_OnLazyProxyConfigPoll_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ProxyConfigPollerClient_OnLazyProxyConfigPoll_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ProxyConfigPollerClient_OnLazyProxyConfigPoll_Params.validate = function(messageValidator, offset) {
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

  ProxyConfigPollerClient_OnLazyProxyConfigPoll_Params.encodedSize = codec.kStructHeaderSize + 0;

  ProxyConfigPollerClient_OnLazyProxyConfigPoll_Params.decode = function(decoder) {
    var packed;
    var val = new ProxyConfigPollerClient_OnLazyProxyConfigPoll_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  ProxyConfigPollerClient_OnLazyProxyConfigPoll_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ProxyConfigPollerClient_OnLazyProxyConfigPoll_Params.encodedSize);
    encoder.writeUint32(0);
  };
  var kProxyConfigClient_OnProxyConfigUpdated_Name = 1367817540;

  function ProxyConfigClientPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(ProxyConfigClient,
                                                   handleOrPtrInfo);
  }

  function ProxyConfigClientAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        ProxyConfigClient, associatedInterfacePtrInfo);
  }

  ProxyConfigClientAssociatedPtr.prototype =
      Object.create(ProxyConfigClientPtr.prototype);
  ProxyConfigClientAssociatedPtr.prototype.constructor =
      ProxyConfigClientAssociatedPtr;

  function ProxyConfigClientProxy(receiver) {
    this.receiver_ = receiver;
  }
  ProxyConfigClientPtr.prototype.onProxyConfigUpdated = function() {
    return ProxyConfigClientProxy.prototype.onProxyConfigUpdated
        .apply(this.ptr.getProxy(), arguments);
  };

  ProxyConfigClientProxy.prototype.onProxyConfigUpdated = function(proxyConfig) {
    var params_ = new ProxyConfigClient_OnProxyConfigUpdated_Params();
    params_.proxyConfig = proxyConfig;
    var builder = new codec.MessageV0Builder(
        kProxyConfigClient_OnProxyConfigUpdated_Name,
        codec.align(ProxyConfigClient_OnProxyConfigUpdated_Params.encodedSize));
    builder.encodeStruct(ProxyConfigClient_OnProxyConfigUpdated_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function ProxyConfigClientStub(delegate) {
    this.delegate_ = delegate;
  }
  ProxyConfigClientStub.prototype.onProxyConfigUpdated = function(proxyConfig) {
    return this.delegate_ && this.delegate_.onProxyConfigUpdated && this.delegate_.onProxyConfigUpdated(proxyConfig);
  }

  ProxyConfigClientStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kProxyConfigClient_OnProxyConfigUpdated_Name:
      var params = reader.decodeStruct(ProxyConfigClient_OnProxyConfigUpdated_Params);
      this.onProxyConfigUpdated(params.proxyConfig);
      return true;
    default:
      return false;
    }
  };

  ProxyConfigClientStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateProxyConfigClientRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kProxyConfigClient_OnProxyConfigUpdated_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = ProxyConfigClient_OnProxyConfigUpdated_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateProxyConfigClientResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var ProxyConfigClient = {
    name: 'network.mojom.ProxyConfigClient',
    kVersion: 0,
    ptrClass: ProxyConfigClientPtr,
    proxyClass: ProxyConfigClientProxy,
    stubClass: ProxyConfigClientStub,
    validateRequest: validateProxyConfigClientRequest,
    validateResponse: null,
    mojomId: 'services/network/public/mojom/proxy_config_with_annotation.mojom',
    fuzzMethods: {
      onProxyConfigUpdated: {
        params: ProxyConfigClient_OnProxyConfigUpdated_Params,
      },
    },
  };
  ProxyConfigClientStub.prototype.validator = validateProxyConfigClientRequest;
  ProxyConfigClientProxy.prototype.validator = null;
  var kProxyConfigPollerClient_OnLazyProxyConfigPoll_Name = 878322621;

  function ProxyConfigPollerClientPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(ProxyConfigPollerClient,
                                                   handleOrPtrInfo);
  }

  function ProxyConfigPollerClientAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        ProxyConfigPollerClient, associatedInterfacePtrInfo);
  }

  ProxyConfigPollerClientAssociatedPtr.prototype =
      Object.create(ProxyConfigPollerClientPtr.prototype);
  ProxyConfigPollerClientAssociatedPtr.prototype.constructor =
      ProxyConfigPollerClientAssociatedPtr;

  function ProxyConfigPollerClientProxy(receiver) {
    this.receiver_ = receiver;
  }
  ProxyConfigPollerClientPtr.prototype.onLazyProxyConfigPoll = function() {
    return ProxyConfigPollerClientProxy.prototype.onLazyProxyConfigPoll
        .apply(this.ptr.getProxy(), arguments);
  };

  ProxyConfigPollerClientProxy.prototype.onLazyProxyConfigPoll = function() {
    var params_ = new ProxyConfigPollerClient_OnLazyProxyConfigPoll_Params();
    var builder = new codec.MessageV0Builder(
        kProxyConfigPollerClient_OnLazyProxyConfigPoll_Name,
        codec.align(ProxyConfigPollerClient_OnLazyProxyConfigPoll_Params.encodedSize));
    builder.encodeStruct(ProxyConfigPollerClient_OnLazyProxyConfigPoll_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function ProxyConfigPollerClientStub(delegate) {
    this.delegate_ = delegate;
  }
  ProxyConfigPollerClientStub.prototype.onLazyProxyConfigPoll = function() {
    return this.delegate_ && this.delegate_.onLazyProxyConfigPoll && this.delegate_.onLazyProxyConfigPoll();
  }

  ProxyConfigPollerClientStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kProxyConfigPollerClient_OnLazyProxyConfigPoll_Name:
      var params = reader.decodeStruct(ProxyConfigPollerClient_OnLazyProxyConfigPoll_Params);
      this.onLazyProxyConfigPoll();
      return true;
    default:
      return false;
    }
  };

  ProxyConfigPollerClientStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateProxyConfigPollerClientRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kProxyConfigPollerClient_OnLazyProxyConfigPoll_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = ProxyConfigPollerClient_OnLazyProxyConfigPoll_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateProxyConfigPollerClientResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var ProxyConfigPollerClient = {
    name: 'network.mojom.ProxyConfigPollerClient',
    kVersion: 0,
    ptrClass: ProxyConfigPollerClientPtr,
    proxyClass: ProxyConfigPollerClientProxy,
    stubClass: ProxyConfigPollerClientStub,
    validateRequest: validateProxyConfigPollerClientRequest,
    validateResponse: null,
    mojomId: 'services/network/public/mojom/proxy_config_with_annotation.mojom',
    fuzzMethods: {
      onLazyProxyConfigPoll: {
        params: ProxyConfigPollerClient_OnLazyProxyConfigPoll_Params,
      },
    },
  };
  ProxyConfigPollerClientStub.prototype.validator = validateProxyConfigPollerClientRequest;
  ProxyConfigPollerClientProxy.prototype.validator = null;
  exports.ProxyConfigWithAnnotation = ProxyConfigWithAnnotation;
  exports.ProxyConfigClient = ProxyConfigClient;
  exports.ProxyConfigClientPtr = ProxyConfigClientPtr;
  exports.ProxyConfigClientAssociatedPtr = ProxyConfigClientAssociatedPtr;
  exports.ProxyConfigPollerClient = ProxyConfigPollerClient;
  exports.ProxyConfigPollerClientPtr = ProxyConfigPollerClientPtr;
  exports.ProxyConfigPollerClientAssociatedPtr = ProxyConfigPollerClientAssociatedPtr;
})();