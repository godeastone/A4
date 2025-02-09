// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'services/device/public/mojom/wake_lock_context.mojom';
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
  var wake_lock$ =
      mojo.internal.exposeNamespace('device.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'services/device/public/mojom/wake_lock.mojom', 'wake_lock.mojom.js');
  }



  function WakeLockContext_GetWakeLock_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WakeLockContext_GetWakeLock_Params.prototype.initDefaults_ = function() {
    this.type = 0;
    this.reason = 0;
    this.description = null;
    this.wakeLock = new bindings.InterfaceRequest();
  };
  WakeLockContext_GetWakeLock_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WakeLockContext_GetWakeLock_Params.generate = function(generator_) {
    var generated = new WakeLockContext_GetWakeLock_Params;
    generated.type = generator_.generateEnum(0, 2);
    generated.reason = generator_.generateEnum(0, 2);
    generated.description = generator_.generateString(false);
    generated.wakeLock = generator_.generateInterfaceRequest("device.mojom.WakeLock", false);
    return generated;
  };

  WakeLockContext_GetWakeLock_Params.prototype.mutate = function(mutator_) {
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
  WakeLockContext_GetWakeLock_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.wakeLock !== null) {
      Array.prototype.push.apply(handles, ["device.mojom.WakeLockRequest"]);
    }
    return handles;
  };

  WakeLockContext_GetWakeLock_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WakeLockContext_GetWakeLock_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.wakeLock = handles[idx++];;
    return idx;
  };

  WakeLockContext_GetWakeLock_Params.validate = function(messageValidator, offset) {
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


    // validate WakeLockContext_GetWakeLock_Params.type
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, wake_lock$.WakeLockType);
    if (err !== validator.validationError.NONE)
        return err;


    // validate WakeLockContext_GetWakeLock_Params.reason
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 4, wake_lock$.WakeLockReason);
    if (err !== validator.validationError.NONE)
        return err;


    // validate WakeLockContext_GetWakeLock_Params.description
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate WakeLockContext_GetWakeLock_Params.wakeLock
    err = messageValidator.validateInterfaceRequest(offset + codec.kStructHeaderSize + 16, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  WakeLockContext_GetWakeLock_Params.encodedSize = codec.kStructHeaderSize + 24;

  WakeLockContext_GetWakeLock_Params.decode = function(decoder) {
    var packed;
    var val = new WakeLockContext_GetWakeLock_Params();
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

  WakeLockContext_GetWakeLock_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WakeLockContext_GetWakeLock_Params.encodedSize);
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
  var kWakeLockContext_GetWakeLock_Name = 80221158;

  function WakeLockContextPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(WakeLockContext,
                                                   handleOrPtrInfo);
  }

  function WakeLockContextAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        WakeLockContext, associatedInterfacePtrInfo);
  }

  WakeLockContextAssociatedPtr.prototype =
      Object.create(WakeLockContextPtr.prototype);
  WakeLockContextAssociatedPtr.prototype.constructor =
      WakeLockContextAssociatedPtr;

  function WakeLockContextProxy(receiver) {
    this.receiver_ = receiver;
  }
  WakeLockContextPtr.prototype.getWakeLock = function() {
    return WakeLockContextProxy.prototype.getWakeLock
        .apply(this.ptr.getProxy(), arguments);
  };

  WakeLockContextProxy.prototype.getWakeLock = function(type, reason, description, wakeLock) {
    var params_ = new WakeLockContext_GetWakeLock_Params();
    params_.type = type;
    params_.reason = reason;
    params_.description = description;
    params_.wakeLock = wakeLock;
    var builder = new codec.MessageV0Builder(
        kWakeLockContext_GetWakeLock_Name,
        codec.align(WakeLockContext_GetWakeLock_Params.encodedSize));
    builder.encodeStruct(WakeLockContext_GetWakeLock_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function WakeLockContextStub(delegate) {
    this.delegate_ = delegate;
  }
  WakeLockContextStub.prototype.getWakeLock = function(type, reason, description, wakeLock) {
    return this.delegate_ && this.delegate_.getWakeLock && this.delegate_.getWakeLock(type, reason, description, wakeLock);
  }

  WakeLockContextStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kWakeLockContext_GetWakeLock_Name:
      var params = reader.decodeStruct(WakeLockContext_GetWakeLock_Params);
      this.getWakeLock(params.type, params.reason, params.description, params.wakeLock);
      return true;
    default:
      return false;
    }
  };

  WakeLockContextStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateWakeLockContextRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kWakeLockContext_GetWakeLock_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WakeLockContext_GetWakeLock_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateWakeLockContextResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var WakeLockContext = {
    name: 'device.mojom.WakeLockContext',
    kVersion: 0,
    ptrClass: WakeLockContextPtr,
    proxyClass: WakeLockContextProxy,
    stubClass: WakeLockContextStub,
    validateRequest: validateWakeLockContextRequest,
    validateResponse: null,
    mojomId: 'services/device/public/mojom/wake_lock_context.mojom',
    fuzzMethods: {
      getWakeLock: {
        params: WakeLockContext_GetWakeLock_Params,
      },
    },
  };
  WakeLockContextStub.prototype.validator = validateWakeLockContextRequest;
  WakeLockContextProxy.prototype.validator = null;
  exports.WakeLockContext = WakeLockContext;
  exports.WakeLockContextPtr = WakeLockContextPtr;
  exports.WakeLockContextAssociatedPtr = WakeLockContextAssociatedPtr;
})();