// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'content/common/shared_worker/shared_worker_host.mojom';
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
  var web_feature$ =
      mojo.internal.exposeNamespace('blink.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'third_party/blink/public/platform/web_feature.mojom', '../../../third_party/blink/public/platform/web_feature.mojom.js');
  }



  function SharedWorkerHost_OnConnected_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  SharedWorkerHost_OnConnected_Params.prototype.initDefaults_ = function() {
    this.connectionId = 0;
  };
  SharedWorkerHost_OnConnected_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  SharedWorkerHost_OnConnected_Params.generate = function(generator_) {
    var generated = new SharedWorkerHost_OnConnected_Params;
    generated.connectionId = generator_.generateInt32();
    return generated;
  };

  SharedWorkerHost_OnConnected_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.connectionId = mutator_.mutateInt32(this.connectionId);
    }
    return this;
  };
  SharedWorkerHost_OnConnected_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  SharedWorkerHost_OnConnected_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  SharedWorkerHost_OnConnected_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  SharedWorkerHost_OnConnected_Params.validate = function(messageValidator, offset) {
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

  SharedWorkerHost_OnConnected_Params.encodedSize = codec.kStructHeaderSize + 8;

  SharedWorkerHost_OnConnected_Params.decode = function(decoder) {
    var packed;
    var val = new SharedWorkerHost_OnConnected_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.connectionId = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  SharedWorkerHost_OnConnected_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(SharedWorkerHost_OnConnected_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.connectionId);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function SharedWorkerHost_OnContextClosed_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  SharedWorkerHost_OnContextClosed_Params.prototype.initDefaults_ = function() {
  };
  SharedWorkerHost_OnContextClosed_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  SharedWorkerHost_OnContextClosed_Params.generate = function(generator_) {
    var generated = new SharedWorkerHost_OnContextClosed_Params;
    return generated;
  };

  SharedWorkerHost_OnContextClosed_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  SharedWorkerHost_OnContextClosed_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  SharedWorkerHost_OnContextClosed_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  SharedWorkerHost_OnContextClosed_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  SharedWorkerHost_OnContextClosed_Params.validate = function(messageValidator, offset) {
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

  SharedWorkerHost_OnContextClosed_Params.encodedSize = codec.kStructHeaderSize + 0;

  SharedWorkerHost_OnContextClosed_Params.decode = function(decoder) {
    var packed;
    var val = new SharedWorkerHost_OnContextClosed_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  SharedWorkerHost_OnContextClosed_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(SharedWorkerHost_OnContextClosed_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function SharedWorkerHost_OnReadyForInspection_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  SharedWorkerHost_OnReadyForInspection_Params.prototype.initDefaults_ = function() {
  };
  SharedWorkerHost_OnReadyForInspection_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  SharedWorkerHost_OnReadyForInspection_Params.generate = function(generator_) {
    var generated = new SharedWorkerHost_OnReadyForInspection_Params;
    return generated;
  };

  SharedWorkerHost_OnReadyForInspection_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  SharedWorkerHost_OnReadyForInspection_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  SharedWorkerHost_OnReadyForInspection_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  SharedWorkerHost_OnReadyForInspection_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  SharedWorkerHost_OnReadyForInspection_Params.validate = function(messageValidator, offset) {
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

  SharedWorkerHost_OnReadyForInspection_Params.encodedSize = codec.kStructHeaderSize + 0;

  SharedWorkerHost_OnReadyForInspection_Params.decode = function(decoder) {
    var packed;
    var val = new SharedWorkerHost_OnReadyForInspection_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  SharedWorkerHost_OnReadyForInspection_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(SharedWorkerHost_OnReadyForInspection_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function SharedWorkerHost_OnScriptLoaded_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  SharedWorkerHost_OnScriptLoaded_Params.prototype.initDefaults_ = function() {
  };
  SharedWorkerHost_OnScriptLoaded_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  SharedWorkerHost_OnScriptLoaded_Params.generate = function(generator_) {
    var generated = new SharedWorkerHost_OnScriptLoaded_Params;
    return generated;
  };

  SharedWorkerHost_OnScriptLoaded_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  SharedWorkerHost_OnScriptLoaded_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  SharedWorkerHost_OnScriptLoaded_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  SharedWorkerHost_OnScriptLoaded_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  SharedWorkerHost_OnScriptLoaded_Params.validate = function(messageValidator, offset) {
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

  SharedWorkerHost_OnScriptLoaded_Params.encodedSize = codec.kStructHeaderSize + 0;

  SharedWorkerHost_OnScriptLoaded_Params.decode = function(decoder) {
    var packed;
    var val = new SharedWorkerHost_OnScriptLoaded_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  SharedWorkerHost_OnScriptLoaded_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(SharedWorkerHost_OnScriptLoaded_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function SharedWorkerHost_OnScriptLoadFailed_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  SharedWorkerHost_OnScriptLoadFailed_Params.prototype.initDefaults_ = function() {
  };
  SharedWorkerHost_OnScriptLoadFailed_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  SharedWorkerHost_OnScriptLoadFailed_Params.generate = function(generator_) {
    var generated = new SharedWorkerHost_OnScriptLoadFailed_Params;
    return generated;
  };

  SharedWorkerHost_OnScriptLoadFailed_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  SharedWorkerHost_OnScriptLoadFailed_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  SharedWorkerHost_OnScriptLoadFailed_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  SharedWorkerHost_OnScriptLoadFailed_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  SharedWorkerHost_OnScriptLoadFailed_Params.validate = function(messageValidator, offset) {
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

  SharedWorkerHost_OnScriptLoadFailed_Params.encodedSize = codec.kStructHeaderSize + 0;

  SharedWorkerHost_OnScriptLoadFailed_Params.decode = function(decoder) {
    var packed;
    var val = new SharedWorkerHost_OnScriptLoadFailed_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  SharedWorkerHost_OnScriptLoadFailed_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(SharedWorkerHost_OnScriptLoadFailed_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function SharedWorkerHost_OnFeatureUsed_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  SharedWorkerHost_OnFeatureUsed_Params.prototype.initDefaults_ = function() {
    this.feature = 0;
  };
  SharedWorkerHost_OnFeatureUsed_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  SharedWorkerHost_OnFeatureUsed_Params.generate = function(generator_) {
    var generated = new SharedWorkerHost_OnFeatureUsed_Params;
    generated.feature = generator_.generateEnum(0, 2465);
    return generated;
  };

  SharedWorkerHost_OnFeatureUsed_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.feature = mutator_.mutateEnum(this.feature, 0, 2465);
    }
    return this;
  };
  SharedWorkerHost_OnFeatureUsed_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  SharedWorkerHost_OnFeatureUsed_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  SharedWorkerHost_OnFeatureUsed_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  SharedWorkerHost_OnFeatureUsed_Params.validate = function(messageValidator, offset) {
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


    // validate SharedWorkerHost_OnFeatureUsed_Params.feature
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, web_feature$.WebFeature);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  SharedWorkerHost_OnFeatureUsed_Params.encodedSize = codec.kStructHeaderSize + 8;

  SharedWorkerHost_OnFeatureUsed_Params.decode = function(decoder) {
    var packed;
    var val = new SharedWorkerHost_OnFeatureUsed_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.feature = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  SharedWorkerHost_OnFeatureUsed_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(SharedWorkerHost_OnFeatureUsed_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.feature);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  var kSharedWorkerHost_OnConnected_Name = 1622259979;
  var kSharedWorkerHost_OnContextClosed_Name = 1049070397;
  var kSharedWorkerHost_OnReadyForInspection_Name = 1981641178;
  var kSharedWorkerHost_OnScriptLoaded_Name = 374388852;
  var kSharedWorkerHost_OnScriptLoadFailed_Name = 2061519889;
  var kSharedWorkerHost_OnFeatureUsed_Name = 1702568745;

  function SharedWorkerHostPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(SharedWorkerHost,
                                                   handleOrPtrInfo);
  }

  function SharedWorkerHostAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        SharedWorkerHost, associatedInterfacePtrInfo);
  }

  SharedWorkerHostAssociatedPtr.prototype =
      Object.create(SharedWorkerHostPtr.prototype);
  SharedWorkerHostAssociatedPtr.prototype.constructor =
      SharedWorkerHostAssociatedPtr;

  function SharedWorkerHostProxy(receiver) {
    this.receiver_ = receiver;
  }
  SharedWorkerHostPtr.prototype.onConnected = function() {
    return SharedWorkerHostProxy.prototype.onConnected
        .apply(this.ptr.getProxy(), arguments);
  };

  SharedWorkerHostProxy.prototype.onConnected = function(connectionId) {
    var params_ = new SharedWorkerHost_OnConnected_Params();
    params_.connectionId = connectionId;
    var builder = new codec.MessageV0Builder(
        kSharedWorkerHost_OnConnected_Name,
        codec.align(SharedWorkerHost_OnConnected_Params.encodedSize));
    builder.encodeStruct(SharedWorkerHost_OnConnected_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  SharedWorkerHostPtr.prototype.onContextClosed = function() {
    return SharedWorkerHostProxy.prototype.onContextClosed
        .apply(this.ptr.getProxy(), arguments);
  };

  SharedWorkerHostProxy.prototype.onContextClosed = function() {
    var params_ = new SharedWorkerHost_OnContextClosed_Params();
    var builder = new codec.MessageV0Builder(
        kSharedWorkerHost_OnContextClosed_Name,
        codec.align(SharedWorkerHost_OnContextClosed_Params.encodedSize));
    builder.encodeStruct(SharedWorkerHost_OnContextClosed_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  SharedWorkerHostPtr.prototype.onReadyForInspection = function() {
    return SharedWorkerHostProxy.prototype.onReadyForInspection
        .apply(this.ptr.getProxy(), arguments);
  };

  SharedWorkerHostProxy.prototype.onReadyForInspection = function() {
    var params_ = new SharedWorkerHost_OnReadyForInspection_Params();
    var builder = new codec.MessageV0Builder(
        kSharedWorkerHost_OnReadyForInspection_Name,
        codec.align(SharedWorkerHost_OnReadyForInspection_Params.encodedSize));
    builder.encodeStruct(SharedWorkerHost_OnReadyForInspection_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  SharedWorkerHostPtr.prototype.onScriptLoaded = function() {
    return SharedWorkerHostProxy.prototype.onScriptLoaded
        .apply(this.ptr.getProxy(), arguments);
  };

  SharedWorkerHostProxy.prototype.onScriptLoaded = function() {
    var params_ = new SharedWorkerHost_OnScriptLoaded_Params();
    var builder = new codec.MessageV0Builder(
        kSharedWorkerHost_OnScriptLoaded_Name,
        codec.align(SharedWorkerHost_OnScriptLoaded_Params.encodedSize));
    builder.encodeStruct(SharedWorkerHost_OnScriptLoaded_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  SharedWorkerHostPtr.prototype.onScriptLoadFailed = function() {
    return SharedWorkerHostProxy.prototype.onScriptLoadFailed
        .apply(this.ptr.getProxy(), arguments);
  };

  SharedWorkerHostProxy.prototype.onScriptLoadFailed = function() {
    var params_ = new SharedWorkerHost_OnScriptLoadFailed_Params();
    var builder = new codec.MessageV0Builder(
        kSharedWorkerHost_OnScriptLoadFailed_Name,
        codec.align(SharedWorkerHost_OnScriptLoadFailed_Params.encodedSize));
    builder.encodeStruct(SharedWorkerHost_OnScriptLoadFailed_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  SharedWorkerHostPtr.prototype.onFeatureUsed = function() {
    return SharedWorkerHostProxy.prototype.onFeatureUsed
        .apply(this.ptr.getProxy(), arguments);
  };

  SharedWorkerHostProxy.prototype.onFeatureUsed = function(feature) {
    var params_ = new SharedWorkerHost_OnFeatureUsed_Params();
    params_.feature = feature;
    var builder = new codec.MessageV0Builder(
        kSharedWorkerHost_OnFeatureUsed_Name,
        codec.align(SharedWorkerHost_OnFeatureUsed_Params.encodedSize));
    builder.encodeStruct(SharedWorkerHost_OnFeatureUsed_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function SharedWorkerHostStub(delegate) {
    this.delegate_ = delegate;
  }
  SharedWorkerHostStub.prototype.onConnected = function(connectionId) {
    return this.delegate_ && this.delegate_.onConnected && this.delegate_.onConnected(connectionId);
  }
  SharedWorkerHostStub.prototype.onContextClosed = function() {
    return this.delegate_ && this.delegate_.onContextClosed && this.delegate_.onContextClosed();
  }
  SharedWorkerHostStub.prototype.onReadyForInspection = function() {
    return this.delegate_ && this.delegate_.onReadyForInspection && this.delegate_.onReadyForInspection();
  }
  SharedWorkerHostStub.prototype.onScriptLoaded = function() {
    return this.delegate_ && this.delegate_.onScriptLoaded && this.delegate_.onScriptLoaded();
  }
  SharedWorkerHostStub.prototype.onScriptLoadFailed = function() {
    return this.delegate_ && this.delegate_.onScriptLoadFailed && this.delegate_.onScriptLoadFailed();
  }
  SharedWorkerHostStub.prototype.onFeatureUsed = function(feature) {
    return this.delegate_ && this.delegate_.onFeatureUsed && this.delegate_.onFeatureUsed(feature);
  }

  SharedWorkerHostStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kSharedWorkerHost_OnConnected_Name:
      var params = reader.decodeStruct(SharedWorkerHost_OnConnected_Params);
      this.onConnected(params.connectionId);
      return true;
    case kSharedWorkerHost_OnContextClosed_Name:
      var params = reader.decodeStruct(SharedWorkerHost_OnContextClosed_Params);
      this.onContextClosed();
      return true;
    case kSharedWorkerHost_OnReadyForInspection_Name:
      var params = reader.decodeStruct(SharedWorkerHost_OnReadyForInspection_Params);
      this.onReadyForInspection();
      return true;
    case kSharedWorkerHost_OnScriptLoaded_Name:
      var params = reader.decodeStruct(SharedWorkerHost_OnScriptLoaded_Params);
      this.onScriptLoaded();
      return true;
    case kSharedWorkerHost_OnScriptLoadFailed_Name:
      var params = reader.decodeStruct(SharedWorkerHost_OnScriptLoadFailed_Params);
      this.onScriptLoadFailed();
      return true;
    case kSharedWorkerHost_OnFeatureUsed_Name:
      var params = reader.decodeStruct(SharedWorkerHost_OnFeatureUsed_Params);
      this.onFeatureUsed(params.feature);
      return true;
    default:
      return false;
    }
  };

  SharedWorkerHostStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateSharedWorkerHostRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kSharedWorkerHost_OnConnected_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = SharedWorkerHost_OnConnected_Params;
      break;
      case kSharedWorkerHost_OnContextClosed_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = SharedWorkerHost_OnContextClosed_Params;
      break;
      case kSharedWorkerHost_OnReadyForInspection_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = SharedWorkerHost_OnReadyForInspection_Params;
      break;
      case kSharedWorkerHost_OnScriptLoaded_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = SharedWorkerHost_OnScriptLoaded_Params;
      break;
      case kSharedWorkerHost_OnScriptLoadFailed_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = SharedWorkerHost_OnScriptLoadFailed_Params;
      break;
      case kSharedWorkerHost_OnFeatureUsed_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = SharedWorkerHost_OnFeatureUsed_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateSharedWorkerHostResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var SharedWorkerHost = {
    name: 'content.mojom.SharedWorkerHost',
    kVersion: 0,
    ptrClass: SharedWorkerHostPtr,
    proxyClass: SharedWorkerHostProxy,
    stubClass: SharedWorkerHostStub,
    validateRequest: validateSharedWorkerHostRequest,
    validateResponse: null,
    mojomId: 'content/common/shared_worker/shared_worker_host.mojom',
    fuzzMethods: {
      onConnected: {
        params: SharedWorkerHost_OnConnected_Params,
      },
      onContextClosed: {
        params: SharedWorkerHost_OnContextClosed_Params,
      },
      onReadyForInspection: {
        params: SharedWorkerHost_OnReadyForInspection_Params,
      },
      onScriptLoaded: {
        params: SharedWorkerHost_OnScriptLoaded_Params,
      },
      onScriptLoadFailed: {
        params: SharedWorkerHost_OnScriptLoadFailed_Params,
      },
      onFeatureUsed: {
        params: SharedWorkerHost_OnFeatureUsed_Params,
      },
    },
  };
  SharedWorkerHostStub.prototype.validator = validateSharedWorkerHostRequest;
  SharedWorkerHostProxy.prototype.validator = null;
  exports.SharedWorkerHost = SharedWorkerHost;
  exports.SharedWorkerHostPtr = SharedWorkerHostPtr;
  exports.SharedWorkerHostAssociatedPtr = SharedWorkerHostAssociatedPtr;
})();