// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'third_party/blink/public/platform/modules/keyboard_lock/keyboard_lock.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('blink.mojom');


  var KeyboardLockRequestResult = {};
  KeyboardLockRequestResult.kSuccess = 0;
  KeyboardLockRequestResult.kFrameDetachedError = 1;
  KeyboardLockRequestResult.kNoValidKeyCodesError = 2;
  KeyboardLockRequestResult.kChildFrameError = 3;
  KeyboardLockRequestResult.kRequestFailedError = 4;

  KeyboardLockRequestResult.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
      return true;
    }
    return false;
  };

  KeyboardLockRequestResult.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };
  var GetKeyboardLayoutMapStatus = {};
  GetKeyboardLayoutMapStatus.kSuccess = 0;
  GetKeyboardLayoutMapStatus.kFail = 1;

  GetKeyboardLayoutMapStatus.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
      return true;
    }
    return false;
  };

  GetKeyboardLayoutMapStatus.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };

  function GetKeyboardLayoutMapResult(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  GetKeyboardLayoutMapResult.prototype.initDefaults_ = function() {
    this.status = 0;
    this.layoutMap = null;
  };
  GetKeyboardLayoutMapResult.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  GetKeyboardLayoutMapResult.generate = function(generator_) {
    var generated = new GetKeyboardLayoutMapResult;
    generated.status = generator_.generateEnum(0, 1);
    generated.layoutMap = generator_.generateMap(
      function() {
        return generator_.generateString(false);
      },
      function() {
        return generator_.generateString(false);
      });
    return generated;
  };

  GetKeyboardLayoutMapResult.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.status = mutator_.mutateEnum(this.status, 0, 1);
    }
    if (mutator_.chooseMutateField()) {
      this.layoutMap = mutator_.mutateMap(this.layoutMap,
        function(val) {
          return mutator_.mutateString(val, false);
        },
        function(val) {
          return mutator_.mutateString(val, false);
        });
    }
    return this;
  };
  GetKeyboardLayoutMapResult.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  GetKeyboardLayoutMapResult.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  GetKeyboardLayoutMapResult.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  GetKeyboardLayoutMapResult.validate = function(messageValidator, offset) {
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


    // validate GetKeyboardLayoutMapResult.status
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, GetKeyboardLayoutMapStatus);
    if (err !== validator.validationError.NONE)
        return err;


    // validate GetKeyboardLayoutMapResult.layoutMap
    err = messageValidator.validateMapPointer(offset + codec.kStructHeaderSize + 8, false, codec.String, codec.String, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  GetKeyboardLayoutMapResult.encodedSize = codec.kStructHeaderSize + 16;

  GetKeyboardLayoutMapResult.decode = function(decoder) {
    var packed;
    var val = new GetKeyboardLayoutMapResult();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.status = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.layoutMap = decoder.decodeMapPointer(codec.String, codec.String);
    return val;
  };

  GetKeyboardLayoutMapResult.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(GetKeyboardLayoutMapResult.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.status);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeMapPointer(codec.String, codec.String, val.layoutMap);
  };
  function KeyboardLockService_RequestKeyboardLock_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  KeyboardLockService_RequestKeyboardLock_Params.prototype.initDefaults_ = function() {
    this.keyCodes = null;
  };
  KeyboardLockService_RequestKeyboardLock_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  KeyboardLockService_RequestKeyboardLock_Params.generate = function(generator_) {
    var generated = new KeyboardLockService_RequestKeyboardLock_Params;
    generated.keyCodes = generator_.generateArray(function() {
      return generator_.generateString(false);
    });
    return generated;
  };

  KeyboardLockService_RequestKeyboardLock_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.keyCodes = mutator_.mutateArray(this.keyCodes, function(val) {
        return mutator_.mutateString(val, false);
      });
    }
    return this;
  };
  KeyboardLockService_RequestKeyboardLock_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  KeyboardLockService_RequestKeyboardLock_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  KeyboardLockService_RequestKeyboardLock_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  KeyboardLockService_RequestKeyboardLock_Params.validate = function(messageValidator, offset) {
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


    // validate KeyboardLockService_RequestKeyboardLock_Params.keyCodes
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 8, codec.String, false, [0, 0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  KeyboardLockService_RequestKeyboardLock_Params.encodedSize = codec.kStructHeaderSize + 8;

  KeyboardLockService_RequestKeyboardLock_Params.decode = function(decoder) {
    var packed;
    var val = new KeyboardLockService_RequestKeyboardLock_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.keyCodes = decoder.decodeArrayPointer(codec.String);
    return val;
  };

  KeyboardLockService_RequestKeyboardLock_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(KeyboardLockService_RequestKeyboardLock_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(codec.String, val.keyCodes);
  };
  function KeyboardLockService_RequestKeyboardLock_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  KeyboardLockService_RequestKeyboardLock_ResponseParams.prototype.initDefaults_ = function() {
    this.result = 0;
  };
  KeyboardLockService_RequestKeyboardLock_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  KeyboardLockService_RequestKeyboardLock_ResponseParams.generate = function(generator_) {
    var generated = new KeyboardLockService_RequestKeyboardLock_ResponseParams;
    generated.result = generator_.generateEnum(0, 4);
    return generated;
  };

  KeyboardLockService_RequestKeyboardLock_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.result = mutator_.mutateEnum(this.result, 0, 4);
    }
    return this;
  };
  KeyboardLockService_RequestKeyboardLock_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  KeyboardLockService_RequestKeyboardLock_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  KeyboardLockService_RequestKeyboardLock_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  KeyboardLockService_RequestKeyboardLock_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate KeyboardLockService_RequestKeyboardLock_ResponseParams.result
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, KeyboardLockRequestResult);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  KeyboardLockService_RequestKeyboardLock_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  KeyboardLockService_RequestKeyboardLock_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new KeyboardLockService_RequestKeyboardLock_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.result = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  KeyboardLockService_RequestKeyboardLock_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(KeyboardLockService_RequestKeyboardLock_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.result);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function KeyboardLockService_CancelKeyboardLock_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  KeyboardLockService_CancelKeyboardLock_Params.prototype.initDefaults_ = function() {
  };
  KeyboardLockService_CancelKeyboardLock_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  KeyboardLockService_CancelKeyboardLock_Params.generate = function(generator_) {
    var generated = new KeyboardLockService_CancelKeyboardLock_Params;
    return generated;
  };

  KeyboardLockService_CancelKeyboardLock_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  KeyboardLockService_CancelKeyboardLock_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  KeyboardLockService_CancelKeyboardLock_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  KeyboardLockService_CancelKeyboardLock_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  KeyboardLockService_CancelKeyboardLock_Params.validate = function(messageValidator, offset) {
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

  KeyboardLockService_CancelKeyboardLock_Params.encodedSize = codec.kStructHeaderSize + 0;

  KeyboardLockService_CancelKeyboardLock_Params.decode = function(decoder) {
    var packed;
    var val = new KeyboardLockService_CancelKeyboardLock_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  KeyboardLockService_CancelKeyboardLock_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(KeyboardLockService_CancelKeyboardLock_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function KeyboardLockService_GetKeyboardLayoutMap_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  KeyboardLockService_GetKeyboardLayoutMap_Params.prototype.initDefaults_ = function() {
  };
  KeyboardLockService_GetKeyboardLayoutMap_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  KeyboardLockService_GetKeyboardLayoutMap_Params.generate = function(generator_) {
    var generated = new KeyboardLockService_GetKeyboardLayoutMap_Params;
    return generated;
  };

  KeyboardLockService_GetKeyboardLayoutMap_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  KeyboardLockService_GetKeyboardLayoutMap_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  KeyboardLockService_GetKeyboardLayoutMap_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  KeyboardLockService_GetKeyboardLayoutMap_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  KeyboardLockService_GetKeyboardLayoutMap_Params.validate = function(messageValidator, offset) {
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

  KeyboardLockService_GetKeyboardLayoutMap_Params.encodedSize = codec.kStructHeaderSize + 0;

  KeyboardLockService_GetKeyboardLayoutMap_Params.decode = function(decoder) {
    var packed;
    var val = new KeyboardLockService_GetKeyboardLayoutMap_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  KeyboardLockService_GetKeyboardLayoutMap_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(KeyboardLockService_GetKeyboardLayoutMap_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function KeyboardLockService_GetKeyboardLayoutMap_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  KeyboardLockService_GetKeyboardLayoutMap_ResponseParams.prototype.initDefaults_ = function() {
    this.result = null;
  };
  KeyboardLockService_GetKeyboardLayoutMap_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  KeyboardLockService_GetKeyboardLayoutMap_ResponseParams.generate = function(generator_) {
    var generated = new KeyboardLockService_GetKeyboardLayoutMap_ResponseParams;
    generated.result = generator_.generateStruct(blink.mojom.GetKeyboardLayoutMapResult, false);
    return generated;
  };

  KeyboardLockService_GetKeyboardLayoutMap_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.result = mutator_.mutateStruct(blink.mojom.GetKeyboardLayoutMapResult, false);
    }
    return this;
  };
  KeyboardLockService_GetKeyboardLayoutMap_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  KeyboardLockService_GetKeyboardLayoutMap_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  KeyboardLockService_GetKeyboardLayoutMap_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  KeyboardLockService_GetKeyboardLayoutMap_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate KeyboardLockService_GetKeyboardLayoutMap_ResponseParams.result
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, GetKeyboardLayoutMapResult, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  KeyboardLockService_GetKeyboardLayoutMap_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  KeyboardLockService_GetKeyboardLayoutMap_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new KeyboardLockService_GetKeyboardLayoutMap_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.result = decoder.decodeStructPointer(GetKeyboardLayoutMapResult);
    return val;
  };

  KeyboardLockService_GetKeyboardLayoutMap_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(KeyboardLockService_GetKeyboardLayoutMap_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(GetKeyboardLayoutMapResult, val.result);
  };
  var kKeyboardLockService_RequestKeyboardLock_Name = 1672902232;
  var kKeyboardLockService_CancelKeyboardLock_Name = 1940366004;
  var kKeyboardLockService_GetKeyboardLayoutMap_Name = 413929977;

  function KeyboardLockServicePtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(KeyboardLockService,
                                                   handleOrPtrInfo);
  }

  function KeyboardLockServiceAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        KeyboardLockService, associatedInterfacePtrInfo);
  }

  KeyboardLockServiceAssociatedPtr.prototype =
      Object.create(KeyboardLockServicePtr.prototype);
  KeyboardLockServiceAssociatedPtr.prototype.constructor =
      KeyboardLockServiceAssociatedPtr;

  function KeyboardLockServiceProxy(receiver) {
    this.receiver_ = receiver;
  }
  KeyboardLockServicePtr.prototype.requestKeyboardLock = function() {
    return KeyboardLockServiceProxy.prototype.requestKeyboardLock
        .apply(this.ptr.getProxy(), arguments);
  };

  KeyboardLockServiceProxy.prototype.requestKeyboardLock = function(keyCodes) {
    var params_ = new KeyboardLockService_RequestKeyboardLock_Params();
    params_.keyCodes = keyCodes;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kKeyboardLockService_RequestKeyboardLock_Name,
          codec.align(KeyboardLockService_RequestKeyboardLock_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(KeyboardLockService_RequestKeyboardLock_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(KeyboardLockService_RequestKeyboardLock_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  KeyboardLockServicePtr.prototype.cancelKeyboardLock = function() {
    return KeyboardLockServiceProxy.prototype.cancelKeyboardLock
        .apply(this.ptr.getProxy(), arguments);
  };

  KeyboardLockServiceProxy.prototype.cancelKeyboardLock = function() {
    var params_ = new KeyboardLockService_CancelKeyboardLock_Params();
    var builder = new codec.MessageV0Builder(
        kKeyboardLockService_CancelKeyboardLock_Name,
        codec.align(KeyboardLockService_CancelKeyboardLock_Params.encodedSize));
    builder.encodeStruct(KeyboardLockService_CancelKeyboardLock_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  KeyboardLockServicePtr.prototype.getKeyboardLayoutMap = function() {
    return KeyboardLockServiceProxy.prototype.getKeyboardLayoutMap
        .apply(this.ptr.getProxy(), arguments);
  };

  KeyboardLockServiceProxy.prototype.getKeyboardLayoutMap = function() {
    var params_ = new KeyboardLockService_GetKeyboardLayoutMap_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kKeyboardLockService_GetKeyboardLayoutMap_Name,
          codec.align(KeyboardLockService_GetKeyboardLayoutMap_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(KeyboardLockService_GetKeyboardLayoutMap_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(KeyboardLockService_GetKeyboardLayoutMap_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };

  function KeyboardLockServiceStub(delegate) {
    this.delegate_ = delegate;
  }
  KeyboardLockServiceStub.prototype.requestKeyboardLock = function(keyCodes) {
    return this.delegate_ && this.delegate_.requestKeyboardLock && this.delegate_.requestKeyboardLock(keyCodes);
  }
  KeyboardLockServiceStub.prototype.cancelKeyboardLock = function() {
    return this.delegate_ && this.delegate_.cancelKeyboardLock && this.delegate_.cancelKeyboardLock();
  }
  KeyboardLockServiceStub.prototype.getKeyboardLayoutMap = function() {
    return this.delegate_ && this.delegate_.getKeyboardLayoutMap && this.delegate_.getKeyboardLayoutMap();
  }

  KeyboardLockServiceStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kKeyboardLockService_CancelKeyboardLock_Name:
      var params = reader.decodeStruct(KeyboardLockService_CancelKeyboardLock_Params);
      this.cancelKeyboardLock();
      return true;
    default:
      return false;
    }
  };

  KeyboardLockServiceStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kKeyboardLockService_RequestKeyboardLock_Name:
      var params = reader.decodeStruct(KeyboardLockService_RequestKeyboardLock_Params);
      this.requestKeyboardLock(params.keyCodes).then(function(response) {
        var responseParams =
            new KeyboardLockService_RequestKeyboardLock_ResponseParams();
        responseParams.result = response.result;
        var builder = new codec.MessageV1Builder(
            kKeyboardLockService_RequestKeyboardLock_Name,
            codec.align(KeyboardLockService_RequestKeyboardLock_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(KeyboardLockService_RequestKeyboardLock_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kKeyboardLockService_GetKeyboardLayoutMap_Name:
      var params = reader.decodeStruct(KeyboardLockService_GetKeyboardLayoutMap_Params);
      this.getKeyboardLayoutMap().then(function(response) {
        var responseParams =
            new KeyboardLockService_GetKeyboardLayoutMap_ResponseParams();
        responseParams.result = response.result;
        var builder = new codec.MessageV1Builder(
            kKeyboardLockService_GetKeyboardLayoutMap_Name,
            codec.align(KeyboardLockService_GetKeyboardLayoutMap_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(KeyboardLockService_GetKeyboardLayoutMap_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    default:
      return false;
    }
  };

  function validateKeyboardLockServiceRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kKeyboardLockService_RequestKeyboardLock_Name:
        if (message.expectsResponse())
          paramsClass = KeyboardLockService_RequestKeyboardLock_Params;
      break;
      case kKeyboardLockService_CancelKeyboardLock_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = KeyboardLockService_CancelKeyboardLock_Params;
      break;
      case kKeyboardLockService_GetKeyboardLayoutMap_Name:
        if (message.expectsResponse())
          paramsClass = KeyboardLockService_GetKeyboardLayoutMap_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateKeyboardLockServiceResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kKeyboardLockService_RequestKeyboardLock_Name:
        if (message.isResponse())
          paramsClass = KeyboardLockService_RequestKeyboardLock_ResponseParams;
        break;
      case kKeyboardLockService_GetKeyboardLayoutMap_Name:
        if (message.isResponse())
          paramsClass = KeyboardLockService_GetKeyboardLayoutMap_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var KeyboardLockService = {
    name: 'blink.mojom.KeyboardLockService',
    kVersion: 0,
    ptrClass: KeyboardLockServicePtr,
    proxyClass: KeyboardLockServiceProxy,
    stubClass: KeyboardLockServiceStub,
    validateRequest: validateKeyboardLockServiceRequest,
    validateResponse: validateKeyboardLockServiceResponse,
    mojomId: 'third_party/blink/public/platform/modules/keyboard_lock/keyboard_lock.mojom',
    fuzzMethods: {
      requestKeyboardLock: {
        params: KeyboardLockService_RequestKeyboardLock_Params,
      },
      cancelKeyboardLock: {
        params: KeyboardLockService_CancelKeyboardLock_Params,
      },
      getKeyboardLayoutMap: {
        params: KeyboardLockService_GetKeyboardLayoutMap_Params,
      },
    },
  };
  KeyboardLockServiceStub.prototype.validator = validateKeyboardLockServiceRequest;
  KeyboardLockServiceProxy.prototype.validator = validateKeyboardLockServiceResponse;
  exports.KeyboardLockRequestResult = KeyboardLockRequestResult;
  exports.GetKeyboardLayoutMapStatus = GetKeyboardLayoutMapStatus;
  exports.GetKeyboardLayoutMapResult = GetKeyboardLayoutMapResult;
  exports.KeyboardLockService = KeyboardLockService;
  exports.KeyboardLockServicePtr = KeyboardLockServicePtr;
  exports.KeyboardLockServiceAssociatedPtr = KeyboardLockServiceAssociatedPtr;
})();