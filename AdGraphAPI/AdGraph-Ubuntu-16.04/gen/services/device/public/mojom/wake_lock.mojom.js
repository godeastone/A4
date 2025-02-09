// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'services/device/public/mojom/wake_lock.mojom';
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


  var WakeLockType = {};
  WakeLockType.kPreventAppSuspension = 0;
  WakeLockType.kPreventDisplaySleep = 1;
  WakeLockType.kPreventDisplaySleepAllowDimming = 2;

  WakeLockType.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    }
    return false;
  };

  WakeLockType.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };
  var WakeLockReason = {};
  WakeLockReason.kAudioPlayback = 0;
  WakeLockReason.kVideoPlayback = 1;
  WakeLockReason.kOther = 2;

  WakeLockReason.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    }
    return false;
  };

  WakeLockReason.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };

  function WakeLock_RequestWakeLock_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WakeLock_RequestWakeLock_Params.prototype.initDefaults_ = function() {
  };
  WakeLock_RequestWakeLock_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WakeLock_RequestWakeLock_Params.generate = function(generator_) {
    var generated = new WakeLock_RequestWakeLock_Params;
    return generated;
  };

  WakeLock_RequestWakeLock_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  WakeLock_RequestWakeLock_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WakeLock_RequestWakeLock_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WakeLock_RequestWakeLock_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WakeLock_RequestWakeLock_Params.validate = function(messageValidator, offset) {
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

  WakeLock_RequestWakeLock_Params.encodedSize = codec.kStructHeaderSize + 0;

  WakeLock_RequestWakeLock_Params.decode = function(decoder) {
    var packed;
    var val = new WakeLock_RequestWakeLock_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  WakeLock_RequestWakeLock_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WakeLock_RequestWakeLock_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function WakeLock_CancelWakeLock_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WakeLock_CancelWakeLock_Params.prototype.initDefaults_ = function() {
  };
  WakeLock_CancelWakeLock_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WakeLock_CancelWakeLock_Params.generate = function(generator_) {
    var generated = new WakeLock_CancelWakeLock_Params;
    return generated;
  };

  WakeLock_CancelWakeLock_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  WakeLock_CancelWakeLock_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WakeLock_CancelWakeLock_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WakeLock_CancelWakeLock_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WakeLock_CancelWakeLock_Params.validate = function(messageValidator, offset) {
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

  WakeLock_CancelWakeLock_Params.encodedSize = codec.kStructHeaderSize + 0;

  WakeLock_CancelWakeLock_Params.decode = function(decoder) {
    var packed;
    var val = new WakeLock_CancelWakeLock_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  WakeLock_CancelWakeLock_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WakeLock_CancelWakeLock_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function WakeLock_AddClient_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WakeLock_AddClient_Params.prototype.initDefaults_ = function() {
    this.wakeLock = new bindings.InterfaceRequest();
  };
  WakeLock_AddClient_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WakeLock_AddClient_Params.generate = function(generator_) {
    var generated = new WakeLock_AddClient_Params;
    generated.wakeLock = generator_.generateInterfaceRequest("device.mojom.WakeLock", false);
    return generated;
  };

  WakeLock_AddClient_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.wakeLock = mutator_.mutateInterfaceRequest(this.wakeLock, "device.mojom.WakeLock", false);
    }
    return this;
  };
  WakeLock_AddClient_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.wakeLock !== null) {
      Array.prototype.push.apply(handles, ["device.mojom.WakeLockRequest"]);
    }
    return handles;
  };

  WakeLock_AddClient_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WakeLock_AddClient_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.wakeLock = handles[idx++];;
    return idx;
  };

  WakeLock_AddClient_Params.validate = function(messageValidator, offset) {
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


    // validate WakeLock_AddClient_Params.wakeLock
    err = messageValidator.validateInterfaceRequest(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  WakeLock_AddClient_Params.encodedSize = codec.kStructHeaderSize + 8;

  WakeLock_AddClient_Params.decode = function(decoder) {
    var packed;
    var val = new WakeLock_AddClient_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.wakeLock = decoder.decodeStruct(codec.InterfaceRequest);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  WakeLock_AddClient_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WakeLock_AddClient_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.InterfaceRequest, val.wakeLock);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function WakeLock_ChangeType_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WakeLock_ChangeType_Params.prototype.initDefaults_ = function() {
    this.type = 0;
  };
  WakeLock_ChangeType_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WakeLock_ChangeType_Params.generate = function(generator_) {
    var generated = new WakeLock_ChangeType_Params;
    generated.type = generator_.generateEnum(0, 2);
    return generated;
  };

  WakeLock_ChangeType_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.type = mutator_.mutateEnum(this.type, 0, 2);
    }
    return this;
  };
  WakeLock_ChangeType_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WakeLock_ChangeType_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WakeLock_ChangeType_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WakeLock_ChangeType_Params.validate = function(messageValidator, offset) {
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


    // validate WakeLock_ChangeType_Params.type
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, WakeLockType);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  WakeLock_ChangeType_Params.encodedSize = codec.kStructHeaderSize + 8;

  WakeLock_ChangeType_Params.decode = function(decoder) {
    var packed;
    var val = new WakeLock_ChangeType_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.type = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  WakeLock_ChangeType_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WakeLock_ChangeType_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.type);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function WakeLock_ChangeType_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WakeLock_ChangeType_ResponseParams.prototype.initDefaults_ = function() {
    this.result = false;
  };
  WakeLock_ChangeType_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WakeLock_ChangeType_ResponseParams.generate = function(generator_) {
    var generated = new WakeLock_ChangeType_ResponseParams;
    generated.result = generator_.generateBool();
    return generated;
  };

  WakeLock_ChangeType_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.result = mutator_.mutateBool(this.result);
    }
    return this;
  };
  WakeLock_ChangeType_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WakeLock_ChangeType_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WakeLock_ChangeType_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WakeLock_ChangeType_ResponseParams.validate = function(messageValidator, offset) {
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

  WakeLock_ChangeType_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  WakeLock_ChangeType_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new WakeLock_ChangeType_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.result = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  WakeLock_ChangeType_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WakeLock_ChangeType_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.result & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function WakeLock_HasWakeLockForTests_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WakeLock_HasWakeLockForTests_Params.prototype.initDefaults_ = function() {
  };
  WakeLock_HasWakeLockForTests_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WakeLock_HasWakeLockForTests_Params.generate = function(generator_) {
    var generated = new WakeLock_HasWakeLockForTests_Params;
    return generated;
  };

  WakeLock_HasWakeLockForTests_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  WakeLock_HasWakeLockForTests_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WakeLock_HasWakeLockForTests_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WakeLock_HasWakeLockForTests_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WakeLock_HasWakeLockForTests_Params.validate = function(messageValidator, offset) {
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

  WakeLock_HasWakeLockForTests_Params.encodedSize = codec.kStructHeaderSize + 0;

  WakeLock_HasWakeLockForTests_Params.decode = function(decoder) {
    var packed;
    var val = new WakeLock_HasWakeLockForTests_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  WakeLock_HasWakeLockForTests_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WakeLock_HasWakeLockForTests_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function WakeLock_HasWakeLockForTests_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WakeLock_HasWakeLockForTests_ResponseParams.prototype.initDefaults_ = function() {
    this.result = false;
  };
  WakeLock_HasWakeLockForTests_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WakeLock_HasWakeLockForTests_ResponseParams.generate = function(generator_) {
    var generated = new WakeLock_HasWakeLockForTests_ResponseParams;
    generated.result = generator_.generateBool();
    return generated;
  };

  WakeLock_HasWakeLockForTests_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.result = mutator_.mutateBool(this.result);
    }
    return this;
  };
  WakeLock_HasWakeLockForTests_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WakeLock_HasWakeLockForTests_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WakeLock_HasWakeLockForTests_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WakeLock_HasWakeLockForTests_ResponseParams.validate = function(messageValidator, offset) {
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

  WakeLock_HasWakeLockForTests_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  WakeLock_HasWakeLockForTests_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new WakeLock_HasWakeLockForTests_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.result = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  WakeLock_HasWakeLockForTests_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WakeLock_HasWakeLockForTests_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.result & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  var kWakeLock_RequestWakeLock_Name = 2044804429;
  var kWakeLock_CancelWakeLock_Name = 546717726;
  var kWakeLock_AddClient_Name = 559213251;
  var kWakeLock_ChangeType_Name = 1215390489;
  var kWakeLock_HasWakeLockForTests_Name = 2022667482;

  function WakeLockPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(WakeLock,
                                                   handleOrPtrInfo);
  }

  function WakeLockAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        WakeLock, associatedInterfacePtrInfo);
  }

  WakeLockAssociatedPtr.prototype =
      Object.create(WakeLockPtr.prototype);
  WakeLockAssociatedPtr.prototype.constructor =
      WakeLockAssociatedPtr;

  function WakeLockProxy(receiver) {
    this.receiver_ = receiver;
  }
  WakeLockPtr.prototype.requestWakeLock = function() {
    return WakeLockProxy.prototype.requestWakeLock
        .apply(this.ptr.getProxy(), arguments);
  };

  WakeLockProxy.prototype.requestWakeLock = function() {
    var params_ = new WakeLock_RequestWakeLock_Params();
    var builder = new codec.MessageV0Builder(
        kWakeLock_RequestWakeLock_Name,
        codec.align(WakeLock_RequestWakeLock_Params.encodedSize));
    builder.encodeStruct(WakeLock_RequestWakeLock_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  WakeLockPtr.prototype.cancelWakeLock = function() {
    return WakeLockProxy.prototype.cancelWakeLock
        .apply(this.ptr.getProxy(), arguments);
  };

  WakeLockProxy.prototype.cancelWakeLock = function() {
    var params_ = new WakeLock_CancelWakeLock_Params();
    var builder = new codec.MessageV0Builder(
        kWakeLock_CancelWakeLock_Name,
        codec.align(WakeLock_CancelWakeLock_Params.encodedSize));
    builder.encodeStruct(WakeLock_CancelWakeLock_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  WakeLockPtr.prototype.addClient = function() {
    return WakeLockProxy.prototype.addClient
        .apply(this.ptr.getProxy(), arguments);
  };

  WakeLockProxy.prototype.addClient = function(wakeLock) {
    var params_ = new WakeLock_AddClient_Params();
    params_.wakeLock = wakeLock;
    var builder = new codec.MessageV0Builder(
        kWakeLock_AddClient_Name,
        codec.align(WakeLock_AddClient_Params.encodedSize));
    builder.encodeStruct(WakeLock_AddClient_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  WakeLockPtr.prototype.changeType = function() {
    return WakeLockProxy.prototype.changeType
        .apply(this.ptr.getProxy(), arguments);
  };

  WakeLockProxy.prototype.changeType = function(type) {
    var params_ = new WakeLock_ChangeType_Params();
    params_.type = type;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kWakeLock_ChangeType_Name,
          codec.align(WakeLock_ChangeType_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(WakeLock_ChangeType_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(WakeLock_ChangeType_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  WakeLockPtr.prototype.hasWakeLockForTests = function() {
    return WakeLockProxy.prototype.hasWakeLockForTests
        .apply(this.ptr.getProxy(), arguments);
  };

  WakeLockProxy.prototype.hasWakeLockForTests = function() {
    var params_ = new WakeLock_HasWakeLockForTests_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kWakeLock_HasWakeLockForTests_Name,
          codec.align(WakeLock_HasWakeLockForTests_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(WakeLock_HasWakeLockForTests_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(WakeLock_HasWakeLockForTests_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };

  function WakeLockStub(delegate) {
    this.delegate_ = delegate;
  }
  WakeLockStub.prototype.requestWakeLock = function() {
    return this.delegate_ && this.delegate_.requestWakeLock && this.delegate_.requestWakeLock();
  }
  WakeLockStub.prototype.cancelWakeLock = function() {
    return this.delegate_ && this.delegate_.cancelWakeLock && this.delegate_.cancelWakeLock();
  }
  WakeLockStub.prototype.addClient = function(wakeLock) {
    return this.delegate_ && this.delegate_.addClient && this.delegate_.addClient(wakeLock);
  }
  WakeLockStub.prototype.changeType = function(type) {
    return this.delegate_ && this.delegate_.changeType && this.delegate_.changeType(type);
  }
  WakeLockStub.prototype.hasWakeLockForTests = function() {
    return this.delegate_ && this.delegate_.hasWakeLockForTests && this.delegate_.hasWakeLockForTests();
  }

  WakeLockStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kWakeLock_RequestWakeLock_Name:
      var params = reader.decodeStruct(WakeLock_RequestWakeLock_Params);
      this.requestWakeLock();
      return true;
    case kWakeLock_CancelWakeLock_Name:
      var params = reader.decodeStruct(WakeLock_CancelWakeLock_Params);
      this.cancelWakeLock();
      return true;
    case kWakeLock_AddClient_Name:
      var params = reader.decodeStruct(WakeLock_AddClient_Params);
      this.addClient(params.wakeLock);
      return true;
    default:
      return false;
    }
  };

  WakeLockStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kWakeLock_ChangeType_Name:
      var params = reader.decodeStruct(WakeLock_ChangeType_Params);
      this.changeType(params.type).then(function(response) {
        var responseParams =
            new WakeLock_ChangeType_ResponseParams();
        responseParams.result = response.result;
        var builder = new codec.MessageV1Builder(
            kWakeLock_ChangeType_Name,
            codec.align(WakeLock_ChangeType_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(WakeLock_ChangeType_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kWakeLock_HasWakeLockForTests_Name:
      var params = reader.decodeStruct(WakeLock_HasWakeLockForTests_Params);
      this.hasWakeLockForTests().then(function(response) {
        var responseParams =
            new WakeLock_HasWakeLockForTests_ResponseParams();
        responseParams.result = response.result;
        var builder = new codec.MessageV1Builder(
            kWakeLock_HasWakeLockForTests_Name,
            codec.align(WakeLock_HasWakeLockForTests_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(WakeLock_HasWakeLockForTests_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    default:
      return false;
    }
  };

  function validateWakeLockRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kWakeLock_RequestWakeLock_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WakeLock_RequestWakeLock_Params;
      break;
      case kWakeLock_CancelWakeLock_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WakeLock_CancelWakeLock_Params;
      break;
      case kWakeLock_AddClient_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WakeLock_AddClient_Params;
      break;
      case kWakeLock_ChangeType_Name:
        if (message.expectsResponse())
          paramsClass = WakeLock_ChangeType_Params;
      break;
      case kWakeLock_HasWakeLockForTests_Name:
        if (message.expectsResponse())
          paramsClass = WakeLock_HasWakeLockForTests_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateWakeLockResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kWakeLock_ChangeType_Name:
        if (message.isResponse())
          paramsClass = WakeLock_ChangeType_ResponseParams;
        break;
      case kWakeLock_HasWakeLockForTests_Name:
        if (message.isResponse())
          paramsClass = WakeLock_HasWakeLockForTests_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var WakeLock = {
    name: 'device.mojom.WakeLock',
    kVersion: 0,
    ptrClass: WakeLockPtr,
    proxyClass: WakeLockProxy,
    stubClass: WakeLockStub,
    validateRequest: validateWakeLockRequest,
    validateResponse: validateWakeLockResponse,
    mojomId: 'services/device/public/mojom/wake_lock.mojom',
    fuzzMethods: {
      requestWakeLock: {
        params: WakeLock_RequestWakeLock_Params,
      },
      cancelWakeLock: {
        params: WakeLock_CancelWakeLock_Params,
      },
      addClient: {
        params: WakeLock_AddClient_Params,
      },
      changeType: {
        params: WakeLock_ChangeType_Params,
      },
      hasWakeLockForTests: {
        params: WakeLock_HasWakeLockForTests_Params,
      },
    },
  };
  WakeLockStub.prototype.validator = validateWakeLockRequest;
  WakeLockProxy.prototype.validator = validateWakeLockResponse;
  exports.WakeLockType = WakeLockType;
  exports.WakeLockReason = WakeLockReason;
  exports.WakeLock = WakeLock;
  exports.WakeLockPtr = WakeLockPtr;
  exports.WakeLockAssociatedPtr = WakeLockAssociatedPtr;
})();