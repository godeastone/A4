// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'chrome/common/network_diagnostics.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('chrome.mojom');
  var url$ =
      mojo.internal.exposeNamespace('url.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'url/mojom/url.mojom', '../../url/mojom/url.mojom.js');
  }



  function NetworkDiagnostics_RunNetworkDiagnostics_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  NetworkDiagnostics_RunNetworkDiagnostics_Params.prototype.initDefaults_ = function() {
    this.failedUrl = null;
  };
  NetworkDiagnostics_RunNetworkDiagnostics_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  NetworkDiagnostics_RunNetworkDiagnostics_Params.generate = function(generator_) {
    var generated = new NetworkDiagnostics_RunNetworkDiagnostics_Params;
    generated.failedUrl = generator_.generateStruct(url.mojom.Url, false);
    return generated;
  };

  NetworkDiagnostics_RunNetworkDiagnostics_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.failedUrl = mutator_.mutateStruct(url.mojom.Url, false);
    }
    return this;
  };
  NetworkDiagnostics_RunNetworkDiagnostics_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  NetworkDiagnostics_RunNetworkDiagnostics_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  NetworkDiagnostics_RunNetworkDiagnostics_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  NetworkDiagnostics_RunNetworkDiagnostics_Params.validate = function(messageValidator, offset) {
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


    // validate NetworkDiagnostics_RunNetworkDiagnostics_Params.failedUrl
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, url$.Url, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  NetworkDiagnostics_RunNetworkDiagnostics_Params.encodedSize = codec.kStructHeaderSize + 8;

  NetworkDiagnostics_RunNetworkDiagnostics_Params.decode = function(decoder) {
    var packed;
    var val = new NetworkDiagnostics_RunNetworkDiagnostics_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.failedUrl = decoder.decodeStructPointer(url$.Url);
    return val;
  };

  NetworkDiagnostics_RunNetworkDiagnostics_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(NetworkDiagnostics_RunNetworkDiagnostics_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(url$.Url, val.failedUrl);
  };
  function NetworkDiagnosticsClient_SetCanShowNetworkDiagnosticsDialog_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  NetworkDiagnosticsClient_SetCanShowNetworkDiagnosticsDialog_Params.prototype.initDefaults_ = function() {
    this.canShow = false;
  };
  NetworkDiagnosticsClient_SetCanShowNetworkDiagnosticsDialog_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  NetworkDiagnosticsClient_SetCanShowNetworkDiagnosticsDialog_Params.generate = function(generator_) {
    var generated = new NetworkDiagnosticsClient_SetCanShowNetworkDiagnosticsDialog_Params;
    generated.canShow = generator_.generateBool();
    return generated;
  };

  NetworkDiagnosticsClient_SetCanShowNetworkDiagnosticsDialog_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.canShow = mutator_.mutateBool(this.canShow);
    }
    return this;
  };
  NetworkDiagnosticsClient_SetCanShowNetworkDiagnosticsDialog_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  NetworkDiagnosticsClient_SetCanShowNetworkDiagnosticsDialog_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  NetworkDiagnosticsClient_SetCanShowNetworkDiagnosticsDialog_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  NetworkDiagnosticsClient_SetCanShowNetworkDiagnosticsDialog_Params.validate = function(messageValidator, offset) {
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

  NetworkDiagnosticsClient_SetCanShowNetworkDiagnosticsDialog_Params.encodedSize = codec.kStructHeaderSize + 8;

  NetworkDiagnosticsClient_SetCanShowNetworkDiagnosticsDialog_Params.decode = function(decoder) {
    var packed;
    var val = new NetworkDiagnosticsClient_SetCanShowNetworkDiagnosticsDialog_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.canShow = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  NetworkDiagnosticsClient_SetCanShowNetworkDiagnosticsDialog_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(NetworkDiagnosticsClient_SetCanShowNetworkDiagnosticsDialog_Params.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.canShow & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function NetworkDiagnosticsClient_DNSProbeStatus_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  NetworkDiagnosticsClient_DNSProbeStatus_Params.prototype.initDefaults_ = function() {
    this.status = 0;
  };
  NetworkDiagnosticsClient_DNSProbeStatus_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  NetworkDiagnosticsClient_DNSProbeStatus_Params.generate = function(generator_) {
    var generated = new NetworkDiagnosticsClient_DNSProbeStatus_Params;
    generated.status = generator_.generateInt32();
    return generated;
  };

  NetworkDiagnosticsClient_DNSProbeStatus_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.status = mutator_.mutateInt32(this.status);
    }
    return this;
  };
  NetworkDiagnosticsClient_DNSProbeStatus_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  NetworkDiagnosticsClient_DNSProbeStatus_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  NetworkDiagnosticsClient_DNSProbeStatus_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  NetworkDiagnosticsClient_DNSProbeStatus_Params.validate = function(messageValidator, offset) {
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

  NetworkDiagnosticsClient_DNSProbeStatus_Params.encodedSize = codec.kStructHeaderSize + 8;

  NetworkDiagnosticsClient_DNSProbeStatus_Params.decode = function(decoder) {
    var packed;
    var val = new NetworkDiagnosticsClient_DNSProbeStatus_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.status = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  NetworkDiagnosticsClient_DNSProbeStatus_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(NetworkDiagnosticsClient_DNSProbeStatus_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.status);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  var kNetworkDiagnostics_RunNetworkDiagnostics_Name = 748952164;

  function NetworkDiagnosticsPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(NetworkDiagnostics,
                                                   handleOrPtrInfo);
  }

  function NetworkDiagnosticsAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        NetworkDiagnostics, associatedInterfacePtrInfo);
  }

  NetworkDiagnosticsAssociatedPtr.prototype =
      Object.create(NetworkDiagnosticsPtr.prototype);
  NetworkDiagnosticsAssociatedPtr.prototype.constructor =
      NetworkDiagnosticsAssociatedPtr;

  function NetworkDiagnosticsProxy(receiver) {
    this.receiver_ = receiver;
  }
  NetworkDiagnosticsPtr.prototype.runNetworkDiagnostics = function() {
    return NetworkDiagnosticsProxy.prototype.runNetworkDiagnostics
        .apply(this.ptr.getProxy(), arguments);
  };

  NetworkDiagnosticsProxy.prototype.runNetworkDiagnostics = function(failedUrl) {
    var params_ = new NetworkDiagnostics_RunNetworkDiagnostics_Params();
    params_.failedUrl = failedUrl;
    var builder = new codec.MessageV0Builder(
        kNetworkDiagnostics_RunNetworkDiagnostics_Name,
        codec.align(NetworkDiagnostics_RunNetworkDiagnostics_Params.encodedSize));
    builder.encodeStruct(NetworkDiagnostics_RunNetworkDiagnostics_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function NetworkDiagnosticsStub(delegate) {
    this.delegate_ = delegate;
  }
  NetworkDiagnosticsStub.prototype.runNetworkDiagnostics = function(failedUrl) {
    return this.delegate_ && this.delegate_.runNetworkDiagnostics && this.delegate_.runNetworkDiagnostics(failedUrl);
  }

  NetworkDiagnosticsStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kNetworkDiagnostics_RunNetworkDiagnostics_Name:
      var params = reader.decodeStruct(NetworkDiagnostics_RunNetworkDiagnostics_Params);
      this.runNetworkDiagnostics(params.failedUrl);
      return true;
    default:
      return false;
    }
  };

  NetworkDiagnosticsStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateNetworkDiagnosticsRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kNetworkDiagnostics_RunNetworkDiagnostics_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = NetworkDiagnostics_RunNetworkDiagnostics_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateNetworkDiagnosticsResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var NetworkDiagnostics = {
    name: 'chrome.mojom.NetworkDiagnostics',
    kVersion: 0,
    ptrClass: NetworkDiagnosticsPtr,
    proxyClass: NetworkDiagnosticsProxy,
    stubClass: NetworkDiagnosticsStub,
    validateRequest: validateNetworkDiagnosticsRequest,
    validateResponse: null,
    mojomId: 'chrome/common/network_diagnostics.mojom',
    fuzzMethods: {
      runNetworkDiagnostics: {
        params: NetworkDiagnostics_RunNetworkDiagnostics_Params,
      },
    },
  };
  NetworkDiagnosticsStub.prototype.validator = validateNetworkDiagnosticsRequest;
  NetworkDiagnosticsProxy.prototype.validator = null;
  var kNetworkDiagnosticsClient_SetCanShowNetworkDiagnosticsDialog_Name = 553221617;
  var kNetworkDiagnosticsClient_DNSProbeStatus_Name = 1578859240;

  function NetworkDiagnosticsClientPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(NetworkDiagnosticsClient,
                                                   handleOrPtrInfo);
  }

  function NetworkDiagnosticsClientAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        NetworkDiagnosticsClient, associatedInterfacePtrInfo);
  }

  NetworkDiagnosticsClientAssociatedPtr.prototype =
      Object.create(NetworkDiagnosticsClientPtr.prototype);
  NetworkDiagnosticsClientAssociatedPtr.prototype.constructor =
      NetworkDiagnosticsClientAssociatedPtr;

  function NetworkDiagnosticsClientProxy(receiver) {
    this.receiver_ = receiver;
  }
  NetworkDiagnosticsClientPtr.prototype.setCanShowNetworkDiagnosticsDialog = function() {
    return NetworkDiagnosticsClientProxy.prototype.setCanShowNetworkDiagnosticsDialog
        .apply(this.ptr.getProxy(), arguments);
  };

  NetworkDiagnosticsClientProxy.prototype.setCanShowNetworkDiagnosticsDialog = function(canShow) {
    var params_ = new NetworkDiagnosticsClient_SetCanShowNetworkDiagnosticsDialog_Params();
    params_.canShow = canShow;
    var builder = new codec.MessageV0Builder(
        kNetworkDiagnosticsClient_SetCanShowNetworkDiagnosticsDialog_Name,
        codec.align(NetworkDiagnosticsClient_SetCanShowNetworkDiagnosticsDialog_Params.encodedSize));
    builder.encodeStruct(NetworkDiagnosticsClient_SetCanShowNetworkDiagnosticsDialog_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  NetworkDiagnosticsClientPtr.prototype.dNSProbeStatus = function() {
    return NetworkDiagnosticsClientProxy.prototype.dNSProbeStatus
        .apply(this.ptr.getProxy(), arguments);
  };

  NetworkDiagnosticsClientProxy.prototype.dNSProbeStatus = function(status) {
    var params_ = new NetworkDiagnosticsClient_DNSProbeStatus_Params();
    params_.status = status;
    var builder = new codec.MessageV0Builder(
        kNetworkDiagnosticsClient_DNSProbeStatus_Name,
        codec.align(NetworkDiagnosticsClient_DNSProbeStatus_Params.encodedSize));
    builder.encodeStruct(NetworkDiagnosticsClient_DNSProbeStatus_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function NetworkDiagnosticsClientStub(delegate) {
    this.delegate_ = delegate;
  }
  NetworkDiagnosticsClientStub.prototype.setCanShowNetworkDiagnosticsDialog = function(canShow) {
    return this.delegate_ && this.delegate_.setCanShowNetworkDiagnosticsDialog && this.delegate_.setCanShowNetworkDiagnosticsDialog(canShow);
  }
  NetworkDiagnosticsClientStub.prototype.dNSProbeStatus = function(status) {
    return this.delegate_ && this.delegate_.dNSProbeStatus && this.delegate_.dNSProbeStatus(status);
  }

  NetworkDiagnosticsClientStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kNetworkDiagnosticsClient_SetCanShowNetworkDiagnosticsDialog_Name:
      var params = reader.decodeStruct(NetworkDiagnosticsClient_SetCanShowNetworkDiagnosticsDialog_Params);
      this.setCanShowNetworkDiagnosticsDialog(params.canShow);
      return true;
    case kNetworkDiagnosticsClient_DNSProbeStatus_Name:
      var params = reader.decodeStruct(NetworkDiagnosticsClient_DNSProbeStatus_Params);
      this.dNSProbeStatus(params.status);
      return true;
    default:
      return false;
    }
  };

  NetworkDiagnosticsClientStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateNetworkDiagnosticsClientRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kNetworkDiagnosticsClient_SetCanShowNetworkDiagnosticsDialog_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = NetworkDiagnosticsClient_SetCanShowNetworkDiagnosticsDialog_Params;
      break;
      case kNetworkDiagnosticsClient_DNSProbeStatus_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = NetworkDiagnosticsClient_DNSProbeStatus_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateNetworkDiagnosticsClientResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var NetworkDiagnosticsClient = {
    name: 'chrome.mojom.NetworkDiagnosticsClient',
    kVersion: 0,
    ptrClass: NetworkDiagnosticsClientPtr,
    proxyClass: NetworkDiagnosticsClientProxy,
    stubClass: NetworkDiagnosticsClientStub,
    validateRequest: validateNetworkDiagnosticsClientRequest,
    validateResponse: null,
    mojomId: 'chrome/common/network_diagnostics.mojom',
    fuzzMethods: {
      setCanShowNetworkDiagnosticsDialog: {
        params: NetworkDiagnosticsClient_SetCanShowNetworkDiagnosticsDialog_Params,
      },
      dNSProbeStatus: {
        params: NetworkDiagnosticsClient_DNSProbeStatus_Params,
      },
    },
  };
  NetworkDiagnosticsClientStub.prototype.validator = validateNetworkDiagnosticsClientRequest;
  NetworkDiagnosticsClientProxy.prototype.validator = null;
  exports.NetworkDiagnostics = NetworkDiagnostics;
  exports.NetworkDiagnosticsPtr = NetworkDiagnosticsPtr;
  exports.NetworkDiagnosticsAssociatedPtr = NetworkDiagnosticsAssociatedPtr;
  exports.NetworkDiagnosticsClient = NetworkDiagnosticsClient;
  exports.NetworkDiagnosticsClientPtr = NetworkDiagnosticsClientPtr;
  exports.NetworkDiagnosticsClientAssociatedPtr = NetworkDiagnosticsClientAssociatedPtr;
})();