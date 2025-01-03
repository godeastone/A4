// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'services/device/public/mojom/wake_lock_provider.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('device.mojom');
  var wake_lock_context$ =
      mojo.internal.exposeNamespace('device.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'services/device/public/mojom/wake_lock_context.mojom', 'wake_lock_context.mojom.js');
  }
  var wake_lock$ =
      mojo.internal.exposeNamespace('device.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'services/device/public/mojom/wake_lock.mojom', 'wake_lock.mojom.js');
  }



  function WakeLockProvider_GetWakeLockContextForID_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WakeLockProvider_GetWakeLockContextForID_Params.prototype.initDefaults_ = function() {
    this.contextId = 0;
    this.context = new bindings.InterfaceRequest();
  };
  WakeLockProvider_GetWakeLockContextForID_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WakeLockProvider_GetWakeLockContextForID_Params.generate = function(generator_) {
    var generated = new WakeLockProvider_GetWakeLockContextForID_Params;
    generated.contextId = generator_.generateInt32();
    generated.context = generator_.generateInterfaceRequest("device.mojom.WakeLockContext", false);
    return generated;
  };

  WakeLockProvider_GetWakeLockContextForID_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.contextId = mutator_.mutateInt32(this.contextId);
    }
    if (mutator_.chooseMutateField()) {
      this.context = mutator_.mutateInterfaceRequest(this.context, "device.mojom.WakeLockContext", false);
    }
    return this;
  };
  WakeLockProvider_GetWakeLockContextForID_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.context !== null) {
      Array.prototype.push.apply(handles, ["device.mojom.WakeLockContextRequest"]);
    }
    return handles;
  };

  WakeLockProvider_GetWakeLockContextForID_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WakeLockProvider_GetWakeLockContextForID_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.context = handles[idx++];;
    return idx;
  };

  WakeLockProvider_GetWakeLockContextForID_Params.validate = function(messageValidator, offset) {
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



    // validate WakeLockProvider_GetWakeLockContextForID_Params.context
    err = messageValidator.validateInterfaceRequest(offset + codec.kStructHeaderSize + 4, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  WakeLockProvider_GetWakeLockContextForID_Params.encodedSize = codec.kStructHeaderSize + 8;

  WakeLockProvider_GetWakeLockContextForID_Params.decode = function(decoder) {
    var packed;
    var val = new WakeLockProvider_GetWakeLockContextForID_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.contextId = decoder.decodeStruct(codec.Int32);
    val.context = decoder.decodeStruct(codec.InterfaceRequest);
    return val;
  };

  WakeLockProvider_GetWakeLockContextForID_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WakeLockProvider_GetWakeLockContextForID_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.contextId);
    encoder.encodeStruct(codec.InterfaceRequest, val.context);
  };
  function WakeLockProvider_GetWakeLockWithoutContext_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WakeLockProvider_GetWakeLockWithoutContext_Params.prototype.initDefaults_ = function() {
    this.type = 0;
    this.reason = 0;
    this.description = null;
    this.wakeLock = new bindings.InterfaceRequest();
  };
  WakeLockProvider_GetWakeLockWithoutContext_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WakeLockProvider_GetWakeLockWithoutContext_Params.generate = function(generator_) {
    var generated = new WakeLockProvider_GetWakeLockWithoutContext_Params;
    generated.type = generator_.generateEnum(0, 2);
    generated.reason = generator_.generateEnum(0, 2);
    generated.description = generator_.generateString(false);
    generated.wakeLock = generator_.generateInterfaceRequest("device.mojom.WakeLock", false);
    return generated;
  };

  WakeLockProvider_GetWakeLockWithoutContext_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.type = mutator_.mutateEnum(this.type, 0, 2);
    }
    if (mutator_.chooseMutateField()) {
      this.reason = mutator_.mutateEnum(this.reason, 0, 2);
    }
    if (mutator_.chooseMutateField()) {
      this.description = mutator_.mutateString(this.description, false);
    }
    if (mutator_.chooseMutateField()) {
      this.wakeLock = mutator_.mutateInterfaceRequest(this.wakeLock, "device.mojom.WakeLock", false);
    }
    return this;
  };
  WakeLockProvider_GetWakeLockWithoutContext_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.wakeLock !== null) {
      Array.prototype.push.apply(handles, ["device.mojom.WakeLockRequest"]);
    }
    return handles;
  };

  WakeLockProvider_GetWakeLockWithoutContext_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WakeLockProvider_GetWakeLockWithoutContext_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.wakeLock = handles[idx++];;
    return idx;
  };

  WakeLockProvider_GetWakeLockWithoutContext_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 32}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;


    // validate WakeLockProvider_GetWakeLockWithoutContext_Params.type
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, wake_lock$.WakeLockType);
    if (err !== validator.validationError.NONE)
        return err;


    // validate WakeLockProvider_GetWakeLockWithoutContext_Params.reason
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 4, wake_lock$.WakeLockReason);
    if (err !== validator.validationError.NONE)
        return err;


    // validate WakeLockProvider_GetWakeLockWithoutContext_Params.description
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate WakeLockProvider_GetWakeLockWithoutContext_Params.wakeLock
    err = messageValidator.validateInterfaceRequest(offset + codec.kStructHeaderSize + 16, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  WakeLockProvider_GetWakeLockWithoutContext_Params.encodedSize = codec.kStructHeaderSize + 24;

  WakeLockProvider_GetWakeLockWithoutContext_Params.decode = function(decoder) {
    var packed;
    var val = new WakeLockProvider_GetWakeLockWithoutContext_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.type = decoder.decodeStruct(codec.Int32);
    val.reason = decoder.decodeStruct(codec.Int32);
    val.description = decoder.decodeStruct(codec.String);
    val.wakeLock = decoder.decodeStruct(codec.InterfaceRequest);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  WakeLockProvider_GetWakeLockWithoutContext_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WakeLockProvider_GetWakeLockWithoutContext_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.type);
    encoder.encodeStruct(codec.Int32, val.reason);
    encoder.encodeStruct(codec.String, val.description);
    encoder.encodeStruct(codec.InterfaceRequest, val.wakeLock);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  var kWakeLockProvider_GetWakeLockContextForID_Name = 626366045;
  var kWakeLockProvider_GetWakeLockWithoutContext_Name = 138186657;

  function WakeLockProviderPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(WakeLockProvider,
                                                   handleOrPtrInfo);
  }

  function WakeLockProviderAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        WakeLockProvider, associatedInterfacePtrInfo);
  }

  WakeLockProviderAssociatedPtr.prototype =
      Object.create(WakeLockProviderPtr.prototype);
  WakeLockProviderAssociatedPtr.prototype.constructor =
      WakeLockProviderAssociatedPtr;

  function WakeLockProviderProxy(receiver) {
    this.receiver_ = receiver;
  }
  WakeLockProviderPtr.prototype.getWakeLockContextForID = function() {
    return WakeLockProviderProxy.prototype.getWakeLockContextForID
        .apply(this.ptr.getProxy(), arguments);
  };

  WakeLockProviderProxy.prototype.getWakeLockContextForID = function(contextId, context) {
    var params_ = new WakeLockProvider_GetWakeLockContextForID_Params();
    params_.contextId = contextId;
    params_.context = context;
    var builder = new codec.MessageV0Builder(
        kWakeLockProvider_GetWakeLockContextForID_Name,
        codec.align(WakeLockProvider_GetWakeLockContextForID_Params.encodedSize));
    builder.encodeStruct(WakeLockProvider_GetWakeLockContextForID_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  WakeLockProviderPtr.prototype.getWakeLockWithoutContext = function() {
    return WakeLockProviderProxy.prototype.getWakeLockWithoutContext
        .apply(this.ptr.getProxy(), arguments);
  };

  WakeLockProviderProxy.prototype.getWakeLockWithoutContext = function(type, reason, description, wakeLock) {
    var params_ = new WakeLockProvider_GetWakeLockWithoutContext_Params();
    params_.type = type;
    params_.reason = reason;
    params_.description = description;
    params_.wakeLock = wakeLock;
    var builder = new codec.MessageV0Builder(
        kWakeLockProvider_GetWakeLockWithoutContext_Name,
        codec.align(WakeLockProvider_GetWakeLockWithoutContext_Params.encodedSize));
    builder.encodeStruct(WakeLockProvider_GetWakeLockWithoutContext_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function WakeLockProviderStub(delegate) {
    this.delegate_ = delegate;
  }
  WakeLockProviderStub.prototype.getWakeLockContextForID = function(contextId, context) {
    return this.delegate_ && this.delegate_.getWakeLockContextForID && this.delegate_.getWakeLockContextForID(contextId, context);
  }
  WakeLockProviderStub.prototype.getWakeLockWithoutContext = function(type, reason, description, wakeLock) {
    return this.delegate_ && this.delegate_.getWakeLockWithoutContext && this.delegate_.getWakeLockWithoutContext(type, reason, description, wakeLock);
  }

  WakeLockProviderStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kWakeLockProvider_GetWakeLockContextForID_Name:
      var params = reader.decodeStruct(WakeLockProvider_GetWakeLockContextForID_Params);
      this.getWakeLockContextForID(params.contextId, params.context);
      return true;
    case kWakeLockProvider_GetWakeLockWithoutContext_Name:
      var params = reader.decodeStruct(WakeLockProvider_GetWakeLockWithoutContext_Params);
      this.getWakeLockWithoutContext(params.type, params.reason, params.description, params.wakeLock);
      return true;
    default:
      return false;
    }
  };

  WakeLockProviderStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateWakeLockProviderRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kWakeLockProvider_GetWakeLockContextForID_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WakeLockProvider_GetWakeLockContextForID_Params;
      break;
      case kWakeLockProvider_GetWakeLockWithoutContext_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WakeLockProvider_GetWakeLockWithoutContext_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateWakeLockProviderResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var WakeLockProvider = {
    name: 'device.mojom.WakeLockProvider',
    kVersion: 0,
    ptrClass: WakeLockProviderPtr,
    proxyClass: WakeLockProviderProxy,
    stubClass: WakeLockProviderStub,
    validateRequest: validateWakeLockProviderRequest,
    validateResponse: null,
    mojomId: 'services/device/public/mojom/wake_lock_provider.mojom',
    fuzzMethods: {
      getWakeLockContextForID: {
        params: WakeLockProvider_GetWakeLockContextForID_Params,
      },
      getWakeLockWithoutContext: {
        params: WakeLockProvider_GetWakeLockWithoutContext_Params,
      },
    },
  };
  WakeLockProviderStub.prototype.validator = validateWakeLockProviderRequest;
  WakeLockProviderProxy.prototype.validator = null;
  exports.WakeLockProvider = WakeLockProvider;
  exports.WakeLockProviderPtr = WakeLockProviderPtr;
  exports.WakeLockProviderAssociatedPtr = WakeLockProviderAssociatedPtr;
})();