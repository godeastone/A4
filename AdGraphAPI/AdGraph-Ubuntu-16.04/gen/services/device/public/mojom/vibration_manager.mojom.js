// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'services/device/public/mojom/vibration_manager.mojom';
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



  function VibrationManager_Vibrate_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  VibrationManager_Vibrate_Params.prototype.initDefaults_ = function() {
    this.milliseconds = 0;
  };
  VibrationManager_Vibrate_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  VibrationManager_Vibrate_Params.generate = function(generator_) {
    var generated = new VibrationManager_Vibrate_Params;
    generated.milliseconds = generator_.generateInt64();
    return generated;
  };

  VibrationManager_Vibrate_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.milliseconds = mutator_.mutateInt64(this.milliseconds);
    }
    return this;
  };
  VibrationManager_Vibrate_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  VibrationManager_Vibrate_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  VibrationManager_Vibrate_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  VibrationManager_Vibrate_Params.validate = function(messageValidator, offset) {
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

  VibrationManager_Vibrate_Params.encodedSize = codec.kStructHeaderSize + 8;

  VibrationManager_Vibrate_Params.decode = function(decoder) {
    var packed;
    var val = new VibrationManager_Vibrate_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.milliseconds = decoder.decodeStruct(codec.Int64);
    return val;
  };

  VibrationManager_Vibrate_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(VibrationManager_Vibrate_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int64, val.milliseconds);
  };
  function VibrationManager_Vibrate_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  VibrationManager_Vibrate_ResponseParams.prototype.initDefaults_ = function() {
  };
  VibrationManager_Vibrate_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  VibrationManager_Vibrate_ResponseParams.generate = function(generator_) {
    var generated = new VibrationManager_Vibrate_ResponseParams;
    return generated;
  };

  VibrationManager_Vibrate_ResponseParams.prototype.mutate = function(mutator_) {
    return this;
  };
  VibrationManager_Vibrate_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  VibrationManager_Vibrate_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  VibrationManager_Vibrate_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  VibrationManager_Vibrate_ResponseParams.validate = function(messageValidator, offset) {
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

  VibrationManager_Vibrate_ResponseParams.encodedSize = codec.kStructHeaderSize + 0;

  VibrationManager_Vibrate_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new VibrationManager_Vibrate_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  VibrationManager_Vibrate_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(VibrationManager_Vibrate_ResponseParams.encodedSize);
    encoder.writeUint32(0);
  };
  function VibrationManager_Cancel_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  VibrationManager_Cancel_Params.prototype.initDefaults_ = function() {
  };
  VibrationManager_Cancel_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  VibrationManager_Cancel_Params.generate = function(generator_) {
    var generated = new VibrationManager_Cancel_Params;
    return generated;
  };

  VibrationManager_Cancel_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  VibrationManager_Cancel_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  VibrationManager_Cancel_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  VibrationManager_Cancel_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  VibrationManager_Cancel_Params.validate = function(messageValidator, offset) {
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

  VibrationManager_Cancel_Params.encodedSize = codec.kStructHeaderSize + 0;

  VibrationManager_Cancel_Params.decode = function(decoder) {
    var packed;
    var val = new VibrationManager_Cancel_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  VibrationManager_Cancel_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(VibrationManager_Cancel_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function VibrationManager_Cancel_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  VibrationManager_Cancel_ResponseParams.prototype.initDefaults_ = function() {
  };
  VibrationManager_Cancel_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  VibrationManager_Cancel_ResponseParams.generate = function(generator_) {
    var generated = new VibrationManager_Cancel_ResponseParams;
    return generated;
  };

  VibrationManager_Cancel_ResponseParams.prototype.mutate = function(mutator_) {
    return this;
  };
  VibrationManager_Cancel_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  VibrationManager_Cancel_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  VibrationManager_Cancel_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  VibrationManager_Cancel_ResponseParams.validate = function(messageValidator, offset) {
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

  VibrationManager_Cancel_ResponseParams.encodedSize = codec.kStructHeaderSize + 0;

  VibrationManager_Cancel_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new VibrationManager_Cancel_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  VibrationManager_Cancel_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(VibrationManager_Cancel_ResponseParams.encodedSize);
    encoder.writeUint32(0);
  };
  var kVibrationManager_Vibrate_Name = 564033132;
  var kVibrationManager_Cancel_Name = 1570976087;

  function VibrationManagerPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(VibrationManager,
                                                   handleOrPtrInfo);
  }

  function VibrationManagerAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        VibrationManager, associatedInterfacePtrInfo);
  }

  VibrationManagerAssociatedPtr.prototype =
      Object.create(VibrationManagerPtr.prototype);
  VibrationManagerAssociatedPtr.prototype.constructor =
      VibrationManagerAssociatedPtr;

  function VibrationManagerProxy(receiver) {
    this.receiver_ = receiver;
  }
  VibrationManagerPtr.prototype.vibrate = function() {
    return VibrationManagerProxy.prototype.vibrate
        .apply(this.ptr.getProxy(), arguments);
  };

  VibrationManagerProxy.prototype.vibrate = function(milliseconds) {
    var params_ = new VibrationManager_Vibrate_Params();
    params_.milliseconds = milliseconds;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kVibrationManager_Vibrate_Name,
          codec.align(VibrationManager_Vibrate_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(VibrationManager_Vibrate_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(VibrationManager_Vibrate_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  VibrationManagerPtr.prototype.cancel = function() {
    return VibrationManagerProxy.prototype.cancel
        .apply(this.ptr.getProxy(), arguments);
  };

  VibrationManagerProxy.prototype.cancel = function() {
    var params_ = new VibrationManager_Cancel_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kVibrationManager_Cancel_Name,
          codec.align(VibrationManager_Cancel_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(VibrationManager_Cancel_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(VibrationManager_Cancel_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };

  function VibrationManagerStub(delegate) {
    this.delegate_ = delegate;
  }
  VibrationManagerStub.prototype.vibrate = function(milliseconds) {
    return this.delegate_ && this.delegate_.vibrate && this.delegate_.vibrate(milliseconds);
  }
  VibrationManagerStub.prototype.cancel = function() {
    return this.delegate_ && this.delegate_.cancel && this.delegate_.cancel();
  }

  VibrationManagerStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  VibrationManagerStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kVibrationManager_Vibrate_Name:
      var params = reader.decodeStruct(VibrationManager_Vibrate_Params);
      this.vibrate(params.milliseconds).then(function(response) {
        var responseParams =
            new VibrationManager_Vibrate_ResponseParams();
        var builder = new codec.MessageV1Builder(
            kVibrationManager_Vibrate_Name,
            codec.align(VibrationManager_Vibrate_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(VibrationManager_Vibrate_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kVibrationManager_Cancel_Name:
      var params = reader.decodeStruct(VibrationManager_Cancel_Params);
      this.cancel().then(function(response) {
        var responseParams =
            new VibrationManager_Cancel_ResponseParams();
        var builder = new codec.MessageV1Builder(
            kVibrationManager_Cancel_Name,
            codec.align(VibrationManager_Cancel_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(VibrationManager_Cancel_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    default:
      return false;
    }
  };

  function validateVibrationManagerRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kVibrationManager_Vibrate_Name:
        if (message.expectsResponse())
          paramsClass = VibrationManager_Vibrate_Params;
      break;
      case kVibrationManager_Cancel_Name:
        if (message.expectsResponse())
          paramsClass = VibrationManager_Cancel_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateVibrationManagerResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kVibrationManager_Vibrate_Name:
        if (message.isResponse())
          paramsClass = VibrationManager_Vibrate_ResponseParams;
        break;
      case kVibrationManager_Cancel_Name:
        if (message.isResponse())
          paramsClass = VibrationManager_Cancel_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var VibrationManager = {
    name: 'device.mojom.VibrationManager',
    kVersion: 0,
    ptrClass: VibrationManagerPtr,
    proxyClass: VibrationManagerProxy,
    stubClass: VibrationManagerStub,
    validateRequest: validateVibrationManagerRequest,
    validateResponse: validateVibrationManagerResponse,
    mojomId: 'services/device/public/mojom/vibration_manager.mojom',
    fuzzMethods: {
      vibrate: {
        params: VibrationManager_Vibrate_Params,
      },
      cancel: {
        params: VibrationManager_Cancel_Params,
      },
    },
  };
  VibrationManagerStub.prototype.validator = validateVibrationManagerRequest;
  VibrationManagerProxy.prototype.validator = validateVibrationManagerResponse;
  exports.VibrationManager = VibrationManager;
  exports.VibrationManagerPtr = VibrationManagerPtr;
  exports.VibrationManagerAssociatedPtr = VibrationManagerAssociatedPtr;
})();