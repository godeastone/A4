// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'services/device/public/mojom/screen_orientation.mojom';
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
  var screen_orientation_lock_types$ =
      mojo.internal.exposeNamespace('device.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'services/device/public/mojom/screen_orientation_lock_types.mojom', 'screen_orientation_lock_types.mojom.js');
  }



  function ScreenOrientation_LockOrientation_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ScreenOrientation_LockOrientation_Params.prototype.initDefaults_ = function() {
    this.orientation = 0;
  };
  ScreenOrientation_LockOrientation_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ScreenOrientation_LockOrientation_Params.generate = function(generator_) {
    var generated = new ScreenOrientation_LockOrientation_Params;
    generated.orientation = generator_.generateEnum(0, 8);
    return generated;
  };

  ScreenOrientation_LockOrientation_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.orientation = mutator_.mutateEnum(this.orientation, 0, 8);
    }
    return this;
  };
  ScreenOrientation_LockOrientation_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ScreenOrientation_LockOrientation_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ScreenOrientation_LockOrientation_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ScreenOrientation_LockOrientation_Params.validate = function(messageValidator, offset) {
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


    // validate ScreenOrientation_LockOrientation_Params.orientation
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, screen_orientation_lock_types$.ScreenOrientationLockType);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ScreenOrientation_LockOrientation_Params.encodedSize = codec.kStructHeaderSize + 8;

  ScreenOrientation_LockOrientation_Params.decode = function(decoder) {
    var packed;
    var val = new ScreenOrientation_LockOrientation_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.orientation = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  ScreenOrientation_LockOrientation_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ScreenOrientation_LockOrientation_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.orientation);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function ScreenOrientation_LockOrientation_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ScreenOrientation_LockOrientation_ResponseParams.prototype.initDefaults_ = function() {
    this.result = 0;
  };
  ScreenOrientation_LockOrientation_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ScreenOrientation_LockOrientation_ResponseParams.generate = function(generator_) {
    var generated = new ScreenOrientation_LockOrientation_ResponseParams;
    generated.result = generator_.generateEnum(0, 3);
    return generated;
  };

  ScreenOrientation_LockOrientation_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.result = mutator_.mutateEnum(this.result, 0, 3);
    }
    return this;
  };
  ScreenOrientation_LockOrientation_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ScreenOrientation_LockOrientation_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ScreenOrientation_LockOrientation_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ScreenOrientation_LockOrientation_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate ScreenOrientation_LockOrientation_ResponseParams.result
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, screen_orientation_lock_types$.ScreenOrientationLockResult);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ScreenOrientation_LockOrientation_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  ScreenOrientation_LockOrientation_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new ScreenOrientation_LockOrientation_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.result = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  ScreenOrientation_LockOrientation_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ScreenOrientation_LockOrientation_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.result);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function ScreenOrientation_UnlockOrientation_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ScreenOrientation_UnlockOrientation_Params.prototype.initDefaults_ = function() {
  };
  ScreenOrientation_UnlockOrientation_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ScreenOrientation_UnlockOrientation_Params.generate = function(generator_) {
    var generated = new ScreenOrientation_UnlockOrientation_Params;
    return generated;
  };

  ScreenOrientation_UnlockOrientation_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  ScreenOrientation_UnlockOrientation_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ScreenOrientation_UnlockOrientation_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ScreenOrientation_UnlockOrientation_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ScreenOrientation_UnlockOrientation_Params.validate = function(messageValidator, offset) {
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

  ScreenOrientation_UnlockOrientation_Params.encodedSize = codec.kStructHeaderSize + 0;

  ScreenOrientation_UnlockOrientation_Params.decode = function(decoder) {
    var packed;
    var val = new ScreenOrientation_UnlockOrientation_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  ScreenOrientation_UnlockOrientation_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ScreenOrientation_UnlockOrientation_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function ScreenOrientationListener_Start_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ScreenOrientationListener_Start_Params.prototype.initDefaults_ = function() {
  };
  ScreenOrientationListener_Start_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ScreenOrientationListener_Start_Params.generate = function(generator_) {
    var generated = new ScreenOrientationListener_Start_Params;
    return generated;
  };

  ScreenOrientationListener_Start_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  ScreenOrientationListener_Start_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ScreenOrientationListener_Start_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ScreenOrientationListener_Start_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ScreenOrientationListener_Start_Params.validate = function(messageValidator, offset) {
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

  ScreenOrientationListener_Start_Params.encodedSize = codec.kStructHeaderSize + 0;

  ScreenOrientationListener_Start_Params.decode = function(decoder) {
    var packed;
    var val = new ScreenOrientationListener_Start_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  ScreenOrientationListener_Start_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ScreenOrientationListener_Start_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function ScreenOrientationListener_Stop_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ScreenOrientationListener_Stop_Params.prototype.initDefaults_ = function() {
  };
  ScreenOrientationListener_Stop_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ScreenOrientationListener_Stop_Params.generate = function(generator_) {
    var generated = new ScreenOrientationListener_Stop_Params;
    return generated;
  };

  ScreenOrientationListener_Stop_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  ScreenOrientationListener_Stop_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ScreenOrientationListener_Stop_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ScreenOrientationListener_Stop_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ScreenOrientationListener_Stop_Params.validate = function(messageValidator, offset) {
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

  ScreenOrientationListener_Stop_Params.encodedSize = codec.kStructHeaderSize + 0;

  ScreenOrientationListener_Stop_Params.decode = function(decoder) {
    var packed;
    var val = new ScreenOrientationListener_Stop_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  ScreenOrientationListener_Stop_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ScreenOrientationListener_Stop_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function ScreenOrientationListener_IsAutoRotateEnabledByUser_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ScreenOrientationListener_IsAutoRotateEnabledByUser_Params.prototype.initDefaults_ = function() {
  };
  ScreenOrientationListener_IsAutoRotateEnabledByUser_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ScreenOrientationListener_IsAutoRotateEnabledByUser_Params.generate = function(generator_) {
    var generated = new ScreenOrientationListener_IsAutoRotateEnabledByUser_Params;
    return generated;
  };

  ScreenOrientationListener_IsAutoRotateEnabledByUser_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  ScreenOrientationListener_IsAutoRotateEnabledByUser_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ScreenOrientationListener_IsAutoRotateEnabledByUser_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ScreenOrientationListener_IsAutoRotateEnabledByUser_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ScreenOrientationListener_IsAutoRotateEnabledByUser_Params.validate = function(messageValidator, offset) {
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

  ScreenOrientationListener_IsAutoRotateEnabledByUser_Params.encodedSize = codec.kStructHeaderSize + 0;

  ScreenOrientationListener_IsAutoRotateEnabledByUser_Params.decode = function(decoder) {
    var packed;
    var val = new ScreenOrientationListener_IsAutoRotateEnabledByUser_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  ScreenOrientationListener_IsAutoRotateEnabledByUser_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ScreenOrientationListener_IsAutoRotateEnabledByUser_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function ScreenOrientationListener_IsAutoRotateEnabledByUser_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ScreenOrientationListener_IsAutoRotateEnabledByUser_ResponseParams.prototype.initDefaults_ = function() {
    this.enabled = false;
  };
  ScreenOrientationListener_IsAutoRotateEnabledByUser_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ScreenOrientationListener_IsAutoRotateEnabledByUser_ResponseParams.generate = function(generator_) {
    var generated = new ScreenOrientationListener_IsAutoRotateEnabledByUser_ResponseParams;
    generated.enabled = generator_.generateBool();
    return generated;
  };

  ScreenOrientationListener_IsAutoRotateEnabledByUser_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.enabled = mutator_.mutateBool(this.enabled);
    }
    return this;
  };
  ScreenOrientationListener_IsAutoRotateEnabledByUser_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ScreenOrientationListener_IsAutoRotateEnabledByUser_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ScreenOrientationListener_IsAutoRotateEnabledByUser_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ScreenOrientationListener_IsAutoRotateEnabledByUser_ResponseParams.validate = function(messageValidator, offset) {
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

  ScreenOrientationListener_IsAutoRotateEnabledByUser_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  ScreenOrientationListener_IsAutoRotateEnabledByUser_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new ScreenOrientationListener_IsAutoRotateEnabledByUser_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.enabled = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  ScreenOrientationListener_IsAutoRotateEnabledByUser_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ScreenOrientationListener_IsAutoRotateEnabledByUser_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.enabled & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  var kScreenOrientation_LockOrientation_Name = 1653519595;
  var kScreenOrientation_UnlockOrientation_Name = 2046759444;

  function ScreenOrientationPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(ScreenOrientation,
                                                   handleOrPtrInfo);
  }

  function ScreenOrientationAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        ScreenOrientation, associatedInterfacePtrInfo);
  }

  ScreenOrientationAssociatedPtr.prototype =
      Object.create(ScreenOrientationPtr.prototype);
  ScreenOrientationAssociatedPtr.prototype.constructor =
      ScreenOrientationAssociatedPtr;

  function ScreenOrientationProxy(receiver) {
    this.receiver_ = receiver;
  }
  ScreenOrientationPtr.prototype.lockOrientation = function() {
    return ScreenOrientationProxy.prototype.lockOrientation
        .apply(this.ptr.getProxy(), arguments);
  };

  ScreenOrientationProxy.prototype.lockOrientation = function(orientation) {
    var params_ = new ScreenOrientation_LockOrientation_Params();
    params_.orientation = orientation;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kScreenOrientation_LockOrientation_Name,
          codec.align(ScreenOrientation_LockOrientation_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(ScreenOrientation_LockOrientation_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(ScreenOrientation_LockOrientation_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  ScreenOrientationPtr.prototype.unlockOrientation = function() {
    return ScreenOrientationProxy.prototype.unlockOrientation
        .apply(this.ptr.getProxy(), arguments);
  };

  ScreenOrientationProxy.prototype.unlockOrientation = function() {
    var params_ = new ScreenOrientation_UnlockOrientation_Params();
    var builder = new codec.MessageV0Builder(
        kScreenOrientation_UnlockOrientation_Name,
        codec.align(ScreenOrientation_UnlockOrientation_Params.encodedSize));
    builder.encodeStruct(ScreenOrientation_UnlockOrientation_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function ScreenOrientationStub(delegate) {
    this.delegate_ = delegate;
  }
  ScreenOrientationStub.prototype.lockOrientation = function(orientation) {
    return this.delegate_ && this.delegate_.lockOrientation && this.delegate_.lockOrientation(orientation);
  }
  ScreenOrientationStub.prototype.unlockOrientation = function() {
    return this.delegate_ && this.delegate_.unlockOrientation && this.delegate_.unlockOrientation();
  }

  ScreenOrientationStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kScreenOrientation_UnlockOrientation_Name:
      var params = reader.decodeStruct(ScreenOrientation_UnlockOrientation_Params);
      this.unlockOrientation();
      return true;
    default:
      return false;
    }
  };

  ScreenOrientationStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kScreenOrientation_LockOrientation_Name:
      var params = reader.decodeStruct(ScreenOrientation_LockOrientation_Params);
      this.lockOrientation(params.orientation).then(function(response) {
        var responseParams =
            new ScreenOrientation_LockOrientation_ResponseParams();
        responseParams.result = response.result;
        var builder = new codec.MessageV1Builder(
            kScreenOrientation_LockOrientation_Name,
            codec.align(ScreenOrientation_LockOrientation_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(ScreenOrientation_LockOrientation_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    default:
      return false;
    }
  };

  function validateScreenOrientationRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kScreenOrientation_LockOrientation_Name:
        if (message.expectsResponse())
          paramsClass = ScreenOrientation_LockOrientation_Params;
      break;
      case kScreenOrientation_UnlockOrientation_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = ScreenOrientation_UnlockOrientation_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateScreenOrientationResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kScreenOrientation_LockOrientation_Name:
        if (message.isResponse())
          paramsClass = ScreenOrientation_LockOrientation_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var ScreenOrientation = {
    name: 'device.mojom.ScreenOrientation',
    kVersion: 0,
    ptrClass: ScreenOrientationPtr,
    proxyClass: ScreenOrientationProxy,
    stubClass: ScreenOrientationStub,
    validateRequest: validateScreenOrientationRequest,
    validateResponse: validateScreenOrientationResponse,
    mojomId: 'services/device/public/mojom/screen_orientation.mojom',
    fuzzMethods: {
      lockOrientation: {
        params: ScreenOrientation_LockOrientation_Params,
      },
      unlockOrientation: {
        params: ScreenOrientation_UnlockOrientation_Params,
      },
    },
  };
  ScreenOrientationStub.prototype.validator = validateScreenOrientationRequest;
  ScreenOrientationProxy.prototype.validator = validateScreenOrientationResponse;
  var kScreenOrientationListener_Start_Name = 729177633;
  var kScreenOrientationListener_Stop_Name = 382096098;
  var kScreenOrientationListener_IsAutoRotateEnabledByUser_Name = 1098328191;

  function ScreenOrientationListenerPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(ScreenOrientationListener,
                                                   handleOrPtrInfo);
  }

  function ScreenOrientationListenerAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        ScreenOrientationListener, associatedInterfacePtrInfo);
  }

  ScreenOrientationListenerAssociatedPtr.prototype =
      Object.create(ScreenOrientationListenerPtr.prototype);
  ScreenOrientationListenerAssociatedPtr.prototype.constructor =
      ScreenOrientationListenerAssociatedPtr;

  function ScreenOrientationListenerProxy(receiver) {
    this.receiver_ = receiver;
  }
  ScreenOrientationListenerPtr.prototype.start = function() {
    return ScreenOrientationListenerProxy.prototype.start
        .apply(this.ptr.getProxy(), arguments);
  };

  ScreenOrientationListenerProxy.prototype.start = function() {
    var params_ = new ScreenOrientationListener_Start_Params();
    var builder = new codec.MessageV0Builder(
        kScreenOrientationListener_Start_Name,
        codec.align(ScreenOrientationListener_Start_Params.encodedSize));
    builder.encodeStruct(ScreenOrientationListener_Start_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  ScreenOrientationListenerPtr.prototype.stop = function() {
    return ScreenOrientationListenerProxy.prototype.stop
        .apply(this.ptr.getProxy(), arguments);
  };

  ScreenOrientationListenerProxy.prototype.stop = function() {
    var params_ = new ScreenOrientationListener_Stop_Params();
    var builder = new codec.MessageV0Builder(
        kScreenOrientationListener_Stop_Name,
        codec.align(ScreenOrientationListener_Stop_Params.encodedSize));
    builder.encodeStruct(ScreenOrientationListener_Stop_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  ScreenOrientationListenerPtr.prototype.isAutoRotateEnabledByUser = function() {
    return ScreenOrientationListenerProxy.prototype.isAutoRotateEnabledByUser
        .apply(this.ptr.getProxy(), arguments);
  };

  ScreenOrientationListenerProxy.prototype.isAutoRotateEnabledByUser = function() {
    var params_ = new ScreenOrientationListener_IsAutoRotateEnabledByUser_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kScreenOrientationListener_IsAutoRotateEnabledByUser_Name,
          codec.align(ScreenOrientationListener_IsAutoRotateEnabledByUser_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(ScreenOrientationListener_IsAutoRotateEnabledByUser_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(ScreenOrientationListener_IsAutoRotateEnabledByUser_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };

  function ScreenOrientationListenerStub(delegate) {
    this.delegate_ = delegate;
  }
  ScreenOrientationListenerStub.prototype.start = function() {
    return this.delegate_ && this.delegate_.start && this.delegate_.start();
  }
  ScreenOrientationListenerStub.prototype.stop = function() {
    return this.delegate_ && this.delegate_.stop && this.delegate_.stop();
  }
  ScreenOrientationListenerStub.prototype.isAutoRotateEnabledByUser = function() {
    return this.delegate_ && this.delegate_.isAutoRotateEnabledByUser && this.delegate_.isAutoRotateEnabledByUser();
  }

  ScreenOrientationListenerStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kScreenOrientationListener_Start_Name:
      var params = reader.decodeStruct(ScreenOrientationListener_Start_Params);
      this.start();
      return true;
    case kScreenOrientationListener_Stop_Name:
      var params = reader.decodeStruct(ScreenOrientationListener_Stop_Params);
      this.stop();
      return true;
    default:
      return false;
    }
  };

  ScreenOrientationListenerStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kScreenOrientationListener_IsAutoRotateEnabledByUser_Name:
      var params = reader.decodeStruct(ScreenOrientationListener_IsAutoRotateEnabledByUser_Params);
      this.isAutoRotateEnabledByUser().then(function(response) {
        var responseParams =
            new ScreenOrientationListener_IsAutoRotateEnabledByUser_ResponseParams();
        responseParams.enabled = response.enabled;
        var builder = new codec.MessageV1Builder(
            kScreenOrientationListener_IsAutoRotateEnabledByUser_Name,
            codec.align(ScreenOrientationListener_IsAutoRotateEnabledByUser_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(ScreenOrientationListener_IsAutoRotateEnabledByUser_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    default:
      return false;
    }
  };

  function validateScreenOrientationListenerRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kScreenOrientationListener_Start_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = ScreenOrientationListener_Start_Params;
      break;
      case kScreenOrientationListener_Stop_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = ScreenOrientationListener_Stop_Params;
      break;
      case kScreenOrientationListener_IsAutoRotateEnabledByUser_Name:
        if (message.expectsResponse())
          paramsClass = ScreenOrientationListener_IsAutoRotateEnabledByUser_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateScreenOrientationListenerResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kScreenOrientationListener_IsAutoRotateEnabledByUser_Name:
        if (message.isResponse())
          paramsClass = ScreenOrientationListener_IsAutoRotateEnabledByUser_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var ScreenOrientationListener = {
    name: 'device.mojom.ScreenOrientationListener',
    kVersion: 0,
    ptrClass: ScreenOrientationListenerPtr,
    proxyClass: ScreenOrientationListenerProxy,
    stubClass: ScreenOrientationListenerStub,
    validateRequest: validateScreenOrientationListenerRequest,
    validateResponse: validateScreenOrientationListenerResponse,
    mojomId: 'services/device/public/mojom/screen_orientation.mojom',
    fuzzMethods: {
      start: {
        params: ScreenOrientationListener_Start_Params,
      },
      stop: {
        params: ScreenOrientationListener_Stop_Params,
      },
      isAutoRotateEnabledByUser: {
        params: ScreenOrientationListener_IsAutoRotateEnabledByUser_Params,
      },
    },
  };
  ScreenOrientationListenerStub.prototype.validator = validateScreenOrientationListenerRequest;
  ScreenOrientationListenerProxy.prototype.validator = validateScreenOrientationListenerResponse;
  exports.ScreenOrientation = ScreenOrientation;
  exports.ScreenOrientationPtr = ScreenOrientationPtr;
  exports.ScreenOrientationAssociatedPtr = ScreenOrientationAssociatedPtr;
  exports.ScreenOrientationListener = ScreenOrientationListener;
  exports.ScreenOrientationListenerPtr = ScreenOrientationListenerPtr;
  exports.ScreenOrientationListenerAssociatedPtr = ScreenOrientationListenerAssociatedPtr;
})();