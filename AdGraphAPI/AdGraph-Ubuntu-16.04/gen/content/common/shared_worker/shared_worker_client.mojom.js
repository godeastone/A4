// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'content/common/shared_worker/shared_worker_client.mojom';
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
  var shared_worker_creation_context_type$ =
      mojo.internal.exposeNamespace('blink.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'third_party/blink/public/mojom/shared_worker/shared_worker_creation_context_type.mojom', '../../../third_party/blink/public/mojom/shared_worker/shared_worker_creation_context_type.mojom.js');
  }
  var web_feature$ =
      mojo.internal.exposeNamespace('blink.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'third_party/blink/public/platform/web_feature.mojom', '../../../third_party/blink/public/platform/web_feature.mojom.js');
  }



  function SharedWorkerClient_OnCreated_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  SharedWorkerClient_OnCreated_Params.prototype.initDefaults_ = function() {
    this.creationContextType = 0;
  };
  SharedWorkerClient_OnCreated_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  SharedWorkerClient_OnCreated_Params.generate = function(generator_) {
    var generated = new SharedWorkerClient_OnCreated_Params;
    generated.creationContextType = generator_.generateEnum(0, 1);
    return generated;
  };

  SharedWorkerClient_OnCreated_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.creationContextType = mutator_.mutateEnum(this.creationContextType, 0, 1);
    }
    return this;
  };
  SharedWorkerClient_OnCreated_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  SharedWorkerClient_OnCreated_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  SharedWorkerClient_OnCreated_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  SharedWorkerClient_OnCreated_Params.validate = function(messageValidator, offset) {
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


    // validate SharedWorkerClient_OnCreated_Params.creationContextType
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, shared_worker_creation_context_type$.SharedWorkerCreationContextType);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  SharedWorkerClient_OnCreated_Params.encodedSize = codec.kStructHeaderSize + 8;

  SharedWorkerClient_OnCreated_Params.decode = function(decoder) {
    var packed;
    var val = new SharedWorkerClient_OnCreated_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.creationContextType = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  SharedWorkerClient_OnCreated_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(SharedWorkerClient_OnCreated_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.creationContextType);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function SharedWorkerClient_OnConnected_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  SharedWorkerClient_OnConnected_Params.prototype.initDefaults_ = function() {
    this.featuresUsed = null;
  };
  SharedWorkerClient_OnConnected_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  SharedWorkerClient_OnConnected_Params.generate = function(generator_) {
    var generated = new SharedWorkerClient_OnConnected_Params;
    generated.featuresUsed = generator_.generateArray(function() {
      return generator_.generateEnum(0, 2465);
    });
    return generated;
  };

  SharedWorkerClient_OnConnected_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.featuresUsed = mutator_.mutateArray(this.featuresUsed, function(val) {
        return mutator_.mutateEnum(val, 0, 2465);
      });
    }
    return this;
  };
  SharedWorkerClient_OnConnected_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  SharedWorkerClient_OnConnected_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  SharedWorkerClient_OnConnected_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  SharedWorkerClient_OnConnected_Params.validate = function(messageValidator, offset) {
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


    // validate SharedWorkerClient_OnConnected_Params.featuresUsed
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 4, new codec.Enum(web_feature$.WebFeature), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  SharedWorkerClient_OnConnected_Params.encodedSize = codec.kStructHeaderSize + 8;

  SharedWorkerClient_OnConnected_Params.decode = function(decoder) {
    var packed;
    var val = new SharedWorkerClient_OnConnected_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.featuresUsed = decoder.decodeArrayPointer(new codec.Enum(web_feature$.WebFeature));
    return val;
  };

  SharedWorkerClient_OnConnected_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(SharedWorkerClient_OnConnected_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(new codec.Enum(web_feature$.WebFeature), val.featuresUsed);
  };
  function SharedWorkerClient_OnScriptLoadFailed_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  SharedWorkerClient_OnScriptLoadFailed_Params.prototype.initDefaults_ = function() {
  };
  SharedWorkerClient_OnScriptLoadFailed_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  SharedWorkerClient_OnScriptLoadFailed_Params.generate = function(generator_) {
    var generated = new SharedWorkerClient_OnScriptLoadFailed_Params;
    return generated;
  };

  SharedWorkerClient_OnScriptLoadFailed_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  SharedWorkerClient_OnScriptLoadFailed_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  SharedWorkerClient_OnScriptLoadFailed_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  SharedWorkerClient_OnScriptLoadFailed_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  SharedWorkerClient_OnScriptLoadFailed_Params.validate = function(messageValidator, offset) {
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

  SharedWorkerClient_OnScriptLoadFailed_Params.encodedSize = codec.kStructHeaderSize + 0;

  SharedWorkerClient_OnScriptLoadFailed_Params.decode = function(decoder) {
    var packed;
    var val = new SharedWorkerClient_OnScriptLoadFailed_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  SharedWorkerClient_OnScriptLoadFailed_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(SharedWorkerClient_OnScriptLoadFailed_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function SharedWorkerClient_OnFeatureUsed_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  SharedWorkerClient_OnFeatureUsed_Params.prototype.initDefaults_ = function() {
    this.feature = 0;
  };
  SharedWorkerClient_OnFeatureUsed_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  SharedWorkerClient_OnFeatureUsed_Params.generate = function(generator_) {
    var generated = new SharedWorkerClient_OnFeatureUsed_Params;
    generated.feature = generator_.generateEnum(0, 2465);
    return generated;
  };

  SharedWorkerClient_OnFeatureUsed_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.feature = mutator_.mutateEnum(this.feature, 0, 2465);
    }
    return this;
  };
  SharedWorkerClient_OnFeatureUsed_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  SharedWorkerClient_OnFeatureUsed_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  SharedWorkerClient_OnFeatureUsed_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  SharedWorkerClient_OnFeatureUsed_Params.validate = function(messageValidator, offset) {
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


    // validate SharedWorkerClient_OnFeatureUsed_Params.feature
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, web_feature$.WebFeature);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  SharedWorkerClient_OnFeatureUsed_Params.encodedSize = codec.kStructHeaderSize + 8;

  SharedWorkerClient_OnFeatureUsed_Params.decode = function(decoder) {
    var packed;
    var val = new SharedWorkerClient_OnFeatureUsed_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.feature = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  SharedWorkerClient_OnFeatureUsed_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(SharedWorkerClient_OnFeatureUsed_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.feature);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  var kSharedWorkerClient_OnCreated_Name = 1687928138;
  var kSharedWorkerClient_OnConnected_Name = 628583920;
  var kSharedWorkerClient_OnScriptLoadFailed_Name = 1974710772;
  var kSharedWorkerClient_OnFeatureUsed_Name = 1499103182;

  function SharedWorkerClientPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(SharedWorkerClient,
                                                   handleOrPtrInfo);
  }

  function SharedWorkerClientAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        SharedWorkerClient, associatedInterfacePtrInfo);
  }

  SharedWorkerClientAssociatedPtr.prototype =
      Object.create(SharedWorkerClientPtr.prototype);
  SharedWorkerClientAssociatedPtr.prototype.constructor =
      SharedWorkerClientAssociatedPtr;

  function SharedWorkerClientProxy(receiver) {
    this.receiver_ = receiver;
  }
  SharedWorkerClientPtr.prototype.onCreated = function() {
    return SharedWorkerClientProxy.prototype.onCreated
        .apply(this.ptr.getProxy(), arguments);
  };

  SharedWorkerClientProxy.prototype.onCreated = function(creationContextType) {
    var params_ = new SharedWorkerClient_OnCreated_Params();
    params_.creationContextType = creationContextType;
    var builder = new codec.MessageV0Builder(
        kSharedWorkerClient_OnCreated_Name,
        codec.align(SharedWorkerClient_OnCreated_Params.encodedSize));
    builder.encodeStruct(SharedWorkerClient_OnCreated_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  SharedWorkerClientPtr.prototype.onConnected = function() {
    return SharedWorkerClientProxy.prototype.onConnected
        .apply(this.ptr.getProxy(), arguments);
  };

  SharedWorkerClientProxy.prototype.onConnected = function(featuresUsed) {
    var params_ = new SharedWorkerClient_OnConnected_Params();
    params_.featuresUsed = featuresUsed;
    var builder = new codec.MessageV0Builder(
        kSharedWorkerClient_OnConnected_Name,
        codec.align(SharedWorkerClient_OnConnected_Params.encodedSize));
    builder.encodeStruct(SharedWorkerClient_OnConnected_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  SharedWorkerClientPtr.prototype.onScriptLoadFailed = function() {
    return SharedWorkerClientProxy.prototype.onScriptLoadFailed
        .apply(this.ptr.getProxy(), arguments);
  };

  SharedWorkerClientProxy.prototype.onScriptLoadFailed = function() {
    var params_ = new SharedWorkerClient_OnScriptLoadFailed_Params();
    var builder = new codec.MessageV0Builder(
        kSharedWorkerClient_OnScriptLoadFailed_Name,
        codec.align(SharedWorkerClient_OnScriptLoadFailed_Params.encodedSize));
    builder.encodeStruct(SharedWorkerClient_OnScriptLoadFailed_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  SharedWorkerClientPtr.prototype.onFeatureUsed = function() {
    return SharedWorkerClientProxy.prototype.onFeatureUsed
        .apply(this.ptr.getProxy(), arguments);
  };

  SharedWorkerClientProxy.prototype.onFeatureUsed = function(feature) {
    var params_ = new SharedWorkerClient_OnFeatureUsed_Params();
    params_.feature = feature;
    var builder = new codec.MessageV0Builder(
        kSharedWorkerClient_OnFeatureUsed_Name,
        codec.align(SharedWorkerClient_OnFeatureUsed_Params.encodedSize));
    builder.encodeStruct(SharedWorkerClient_OnFeatureUsed_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function SharedWorkerClientStub(delegate) {
    this.delegate_ = delegate;
  }
  SharedWorkerClientStub.prototype.onCreated = function(creationContextType) {
    return this.delegate_ && this.delegate_.onCreated && this.delegate_.onCreated(creationContextType);
  }
  SharedWorkerClientStub.prototype.onConnected = function(featuresUsed) {
    return this.delegate_ && this.delegate_.onConnected && this.delegate_.onConnected(featuresUsed);
  }
  SharedWorkerClientStub.prototype.onScriptLoadFailed = function() {
    return this.delegate_ && this.delegate_.onScriptLoadFailed && this.delegate_.onScriptLoadFailed();
  }
  SharedWorkerClientStub.prototype.onFeatureUsed = function(feature) {
    return this.delegate_ && this.delegate_.onFeatureUsed && this.delegate_.onFeatureUsed(feature);
  }

  SharedWorkerClientStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kSharedWorkerClient_OnCreated_Name:
      var params = reader.decodeStruct(SharedWorkerClient_OnCreated_Params);
      this.onCreated(params.creationContextType);
      return true;
    case kSharedWorkerClient_OnConnected_Name:
      var params = reader.decodeStruct(SharedWorkerClient_OnConnected_Params);
      this.onConnected(params.featuresUsed);
      return true;
    case kSharedWorkerClient_OnScriptLoadFailed_Name:
      var params = reader.decodeStruct(SharedWorkerClient_OnScriptLoadFailed_Params);
      this.onScriptLoadFailed();
      return true;
    case kSharedWorkerClient_OnFeatureUsed_Name:
      var params = reader.decodeStruct(SharedWorkerClient_OnFeatureUsed_Params);
      this.onFeatureUsed(params.feature);
      return true;
    default:
      return false;
    }
  };

  SharedWorkerClientStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateSharedWorkerClientRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kSharedWorkerClient_OnCreated_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = SharedWorkerClient_OnCreated_Params;
      break;
      case kSharedWorkerClient_OnConnected_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = SharedWorkerClient_OnConnected_Params;
      break;
      case kSharedWorkerClient_OnScriptLoadFailed_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = SharedWorkerClient_OnScriptLoadFailed_Params;
      break;
      case kSharedWorkerClient_OnFeatureUsed_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = SharedWorkerClient_OnFeatureUsed_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateSharedWorkerClientResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var SharedWorkerClient = {
    name: 'content.mojom.SharedWorkerClient',
    kVersion: 0,
    ptrClass: SharedWorkerClientPtr,
    proxyClass: SharedWorkerClientProxy,
    stubClass: SharedWorkerClientStub,
    validateRequest: validateSharedWorkerClientRequest,
    validateResponse: null,
    mojomId: 'content/common/shared_worker/shared_worker_client.mojom',
    fuzzMethods: {
      onCreated: {
        params: SharedWorkerClient_OnCreated_Params,
      },
      onConnected: {
        params: SharedWorkerClient_OnConnected_Params,
      },
      onScriptLoadFailed: {
        params: SharedWorkerClient_OnScriptLoadFailed_Params,
      },
      onFeatureUsed: {
        params: SharedWorkerClient_OnFeatureUsed_Params,
      },
    },
  };
  SharedWorkerClientStub.prototype.validator = validateSharedWorkerClientRequest;
  SharedWorkerClientProxy.prototype.validator = null;
  exports.SharedWorkerClient = SharedWorkerClient;
  exports.SharedWorkerClientPtr = SharedWorkerClientPtr;
  exports.SharedWorkerClientAssociatedPtr = SharedWorkerClientAssociatedPtr;
})();