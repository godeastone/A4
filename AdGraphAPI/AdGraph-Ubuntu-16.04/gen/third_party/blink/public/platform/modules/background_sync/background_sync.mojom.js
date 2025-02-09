// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'third_party/blink/public/platform/modules/background_sync/background_sync.mojom';
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


  var BackgroundSyncNetworkState = {};
  BackgroundSyncNetworkState.ANY = 0;
  BackgroundSyncNetworkState.AVOID_CELLULAR = BackgroundSyncNetworkState.ANY + 1;
  BackgroundSyncNetworkState.ONLINE = BackgroundSyncNetworkState.AVOID_CELLULAR + 1;
  BackgroundSyncNetworkState.MAX = BackgroundSyncNetworkState.ONLINE;

  BackgroundSyncNetworkState.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    }
    return false;
  };

  BackgroundSyncNetworkState.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };
  var BackgroundSyncError = {};
  BackgroundSyncError.NONE = 0;
  BackgroundSyncError.STORAGE = BackgroundSyncError.NONE + 1;
  BackgroundSyncError.NOT_FOUND = BackgroundSyncError.STORAGE + 1;
  BackgroundSyncError.NO_SERVICE_WORKER = BackgroundSyncError.NOT_FOUND + 1;
  BackgroundSyncError.NOT_ALLOWED = BackgroundSyncError.NO_SERVICE_WORKER + 1;
  BackgroundSyncError.PERMISSION_DENIED = BackgroundSyncError.NOT_ALLOWED + 1;
  BackgroundSyncError.MAX = BackgroundSyncError.PERMISSION_DENIED;

  BackgroundSyncError.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
      return true;
    }
    return false;
  };

  BackgroundSyncError.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };
  var BackgroundSyncState = {};
  BackgroundSyncState.PENDING = 0;
  BackgroundSyncState.FIRING = BackgroundSyncState.PENDING + 1;
  BackgroundSyncState.REREGISTERED_WHILE_FIRING = BackgroundSyncState.FIRING + 1;

  BackgroundSyncState.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    }
    return false;
  };

  BackgroundSyncState.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };
  var BackgroundSyncEventLastChance = {};
  BackgroundSyncEventLastChance.IS_NOT_LAST_CHANCE = 0;
  BackgroundSyncEventLastChance.IS_LAST_CHANCE = BackgroundSyncEventLastChance.IS_NOT_LAST_CHANCE + 1;

  BackgroundSyncEventLastChance.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
      return true;
    }
    return false;
  };

  BackgroundSyncEventLastChance.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };

  function SyncRegistration(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  SyncRegistration.prototype.initDefaults_ = function() {
    this.id = -1;
    this.tag = "";
    this.networkState = BackgroundSyncNetworkState.ONLINE;
  };
  SyncRegistration.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  SyncRegistration.generate = function(generator_) {
    var generated = new SyncRegistration;
    generated.id = generator_.generateInt64();
    generated.tag = generator_.generateString(false);
    generated.networkState = generator_.generateEnum(0, 2);
    return generated;
  };

  SyncRegistration.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.id = mutator_.mutateInt64(this.id);
    }
    if (mutator_.chooseMutateField()) {
      this.tag = mutator_.mutateString(this.tag, false);
    }
    if (mutator_.chooseMutateField()) {
      this.networkState = mutator_.mutateEnum(this.networkState, 0, 2);
    }
    return this;
  };
  SyncRegistration.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  SyncRegistration.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  SyncRegistration.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  SyncRegistration.validate = function(messageValidator, offset) {
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



    // validate SyncRegistration.tag
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate SyncRegistration.networkState
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 16, BackgroundSyncNetworkState);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  SyncRegistration.encodedSize = codec.kStructHeaderSize + 24;

  SyncRegistration.decode = function(decoder) {
    var packed;
    var val = new SyncRegistration();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.id = decoder.decodeStruct(codec.Int64);
    val.tag = decoder.decodeStruct(codec.String);
    val.networkState = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  SyncRegistration.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(SyncRegistration.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int64, val.id);
    encoder.encodeStruct(codec.String, val.tag);
    encoder.encodeStruct(codec.Int32, val.networkState);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function BackgroundSyncService_Register_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  BackgroundSyncService_Register_Params.prototype.initDefaults_ = function() {
    this.options = null;
    this.serviceWorkerRegistrationId = 0;
  };
  BackgroundSyncService_Register_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  BackgroundSyncService_Register_Params.generate = function(generator_) {
    var generated = new BackgroundSyncService_Register_Params;
    generated.options = generator_.generateStruct(blink.mojom.SyncRegistration, false);
    generated.serviceWorkerRegistrationId = generator_.generateInt64();
    return generated;
  };

  BackgroundSyncService_Register_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.options = mutator_.mutateStruct(blink.mojom.SyncRegistration, false);
    }
    if (mutator_.chooseMutateField()) {
      this.serviceWorkerRegistrationId = mutator_.mutateInt64(this.serviceWorkerRegistrationId);
    }
    return this;
  };
  BackgroundSyncService_Register_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  BackgroundSyncService_Register_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  BackgroundSyncService_Register_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  BackgroundSyncService_Register_Params.validate = function(messageValidator, offset) {
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


    // validate BackgroundSyncService_Register_Params.options
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, SyncRegistration, false);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  BackgroundSyncService_Register_Params.encodedSize = codec.kStructHeaderSize + 16;

  BackgroundSyncService_Register_Params.decode = function(decoder) {
    var packed;
    var val = new BackgroundSyncService_Register_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.options = decoder.decodeStructPointer(SyncRegistration);
    val.serviceWorkerRegistrationId = decoder.decodeStruct(codec.Int64);
    return val;
  };

  BackgroundSyncService_Register_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(BackgroundSyncService_Register_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(SyncRegistration, val.options);
    encoder.encodeStruct(codec.Int64, val.serviceWorkerRegistrationId);
  };
  function BackgroundSyncService_Register_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  BackgroundSyncService_Register_ResponseParams.prototype.initDefaults_ = function() {
    this.err = 0;
    this.options = null;
  };
  BackgroundSyncService_Register_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  BackgroundSyncService_Register_ResponseParams.generate = function(generator_) {
    var generated = new BackgroundSyncService_Register_ResponseParams;
    generated.err = generator_.generateEnum(0, 5);
    generated.options = generator_.generateStruct(blink.mojom.SyncRegistration, false);
    return generated;
  };

  BackgroundSyncService_Register_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.err = mutator_.mutateEnum(this.err, 0, 5);
    }
    if (mutator_.chooseMutateField()) {
      this.options = mutator_.mutateStruct(blink.mojom.SyncRegistration, false);
    }
    return this;
  };
  BackgroundSyncService_Register_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  BackgroundSyncService_Register_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  BackgroundSyncService_Register_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  BackgroundSyncService_Register_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate BackgroundSyncService_Register_ResponseParams.err
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, BackgroundSyncError);
    if (err !== validator.validationError.NONE)
        return err;


    // validate BackgroundSyncService_Register_ResponseParams.options
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, SyncRegistration, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  BackgroundSyncService_Register_ResponseParams.encodedSize = codec.kStructHeaderSize + 16;

  BackgroundSyncService_Register_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new BackgroundSyncService_Register_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.err = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.options = decoder.decodeStructPointer(SyncRegistration);
    return val;
  };

  BackgroundSyncService_Register_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(BackgroundSyncService_Register_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.err);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(SyncRegistration, val.options);
  };
  function BackgroundSyncService_GetRegistrations_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  BackgroundSyncService_GetRegistrations_Params.prototype.initDefaults_ = function() {
    this.serviceWorkerRegistrationId = 0;
  };
  BackgroundSyncService_GetRegistrations_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  BackgroundSyncService_GetRegistrations_Params.generate = function(generator_) {
    var generated = new BackgroundSyncService_GetRegistrations_Params;
    generated.serviceWorkerRegistrationId = generator_.generateInt64();
    return generated;
  };

  BackgroundSyncService_GetRegistrations_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.serviceWorkerRegistrationId = mutator_.mutateInt64(this.serviceWorkerRegistrationId);
    }
    return this;
  };
  BackgroundSyncService_GetRegistrations_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  BackgroundSyncService_GetRegistrations_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  BackgroundSyncService_GetRegistrations_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  BackgroundSyncService_GetRegistrations_Params.validate = function(messageValidator, offset) {
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

  BackgroundSyncService_GetRegistrations_Params.encodedSize = codec.kStructHeaderSize + 8;

  BackgroundSyncService_GetRegistrations_Params.decode = function(decoder) {
    var packed;
    var val = new BackgroundSyncService_GetRegistrations_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.serviceWorkerRegistrationId = decoder.decodeStruct(codec.Int64);
    return val;
  };

  BackgroundSyncService_GetRegistrations_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(BackgroundSyncService_GetRegistrations_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int64, val.serviceWorkerRegistrationId);
  };
  function BackgroundSyncService_GetRegistrations_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  BackgroundSyncService_GetRegistrations_ResponseParams.prototype.initDefaults_ = function() {
    this.err = 0;
    this.registrations = null;
  };
  BackgroundSyncService_GetRegistrations_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  BackgroundSyncService_GetRegistrations_ResponseParams.generate = function(generator_) {
    var generated = new BackgroundSyncService_GetRegistrations_ResponseParams;
    generated.err = generator_.generateEnum(0, 5);
    generated.registrations = generator_.generateArray(function() {
      return generator_.generateStruct(blink.mojom.SyncRegistration, false);
    });
    return generated;
  };

  BackgroundSyncService_GetRegistrations_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.err = mutator_.mutateEnum(this.err, 0, 5);
    }
    if (mutator_.chooseMutateField()) {
      this.registrations = mutator_.mutateArray(this.registrations, function(val) {
        return mutator_.mutateStruct(blink.mojom.SyncRegistration, false);
      });
    }
    return this;
  };
  BackgroundSyncService_GetRegistrations_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  BackgroundSyncService_GetRegistrations_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  BackgroundSyncService_GetRegistrations_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  BackgroundSyncService_GetRegistrations_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate BackgroundSyncService_GetRegistrations_ResponseParams.err
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, BackgroundSyncError);
    if (err !== validator.validationError.NONE)
        return err;


    // validate BackgroundSyncService_GetRegistrations_ResponseParams.registrations
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 8, new codec.PointerTo(SyncRegistration), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  BackgroundSyncService_GetRegistrations_ResponseParams.encodedSize = codec.kStructHeaderSize + 16;

  BackgroundSyncService_GetRegistrations_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new BackgroundSyncService_GetRegistrations_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.err = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.registrations = decoder.decodeArrayPointer(new codec.PointerTo(SyncRegistration));
    return val;
  };

  BackgroundSyncService_GetRegistrations_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(BackgroundSyncService_GetRegistrations_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.err);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeArrayPointer(new codec.PointerTo(SyncRegistration), val.registrations);
  };
  var kBackgroundSyncService_Register_Name = 829710607;
  var kBackgroundSyncService_GetRegistrations_Name = 229258178;

  function BackgroundSyncServicePtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(BackgroundSyncService,
                                                   handleOrPtrInfo);
  }

  function BackgroundSyncServiceAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        BackgroundSyncService, associatedInterfacePtrInfo);
  }

  BackgroundSyncServiceAssociatedPtr.prototype =
      Object.create(BackgroundSyncServicePtr.prototype);
  BackgroundSyncServiceAssociatedPtr.prototype.constructor =
      BackgroundSyncServiceAssociatedPtr;

  function BackgroundSyncServiceProxy(receiver) {
    this.receiver_ = receiver;
  }
  BackgroundSyncServicePtr.prototype.register = function() {
    return BackgroundSyncServiceProxy.prototype.register
        .apply(this.ptr.getProxy(), arguments);
  };

  BackgroundSyncServiceProxy.prototype.register = function(options, serviceWorkerRegistrationId) {
    var params_ = new BackgroundSyncService_Register_Params();
    params_.options = options;
    params_.serviceWorkerRegistrationId = serviceWorkerRegistrationId;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kBackgroundSyncService_Register_Name,
          codec.align(BackgroundSyncService_Register_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(BackgroundSyncService_Register_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(BackgroundSyncService_Register_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  BackgroundSyncServicePtr.prototype.getRegistrations = function() {
    return BackgroundSyncServiceProxy.prototype.getRegistrations
        .apply(this.ptr.getProxy(), arguments);
  };

  BackgroundSyncServiceProxy.prototype.getRegistrations = function(serviceWorkerRegistrationId) {
    var params_ = new BackgroundSyncService_GetRegistrations_Params();
    params_.serviceWorkerRegistrationId = serviceWorkerRegistrationId;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kBackgroundSyncService_GetRegistrations_Name,
          codec.align(BackgroundSyncService_GetRegistrations_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(BackgroundSyncService_GetRegistrations_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(BackgroundSyncService_GetRegistrations_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };

  function BackgroundSyncServiceStub(delegate) {
    this.delegate_ = delegate;
  }
  BackgroundSyncServiceStub.prototype.register = function(options, serviceWorkerRegistrationId) {
    return this.delegate_ && this.delegate_.register && this.delegate_.register(options, serviceWorkerRegistrationId);
  }
  BackgroundSyncServiceStub.prototype.getRegistrations = function(serviceWorkerRegistrationId) {
    return this.delegate_ && this.delegate_.getRegistrations && this.delegate_.getRegistrations(serviceWorkerRegistrationId);
  }

  BackgroundSyncServiceStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  BackgroundSyncServiceStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kBackgroundSyncService_Register_Name:
      var params = reader.decodeStruct(BackgroundSyncService_Register_Params);
      this.register(params.options, params.serviceWorkerRegistrationId).then(function(response) {
        var responseParams =
            new BackgroundSyncService_Register_ResponseParams();
        responseParams.err = response.err;
        responseParams.options = response.options;
        var builder = new codec.MessageV1Builder(
            kBackgroundSyncService_Register_Name,
            codec.align(BackgroundSyncService_Register_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(BackgroundSyncService_Register_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kBackgroundSyncService_GetRegistrations_Name:
      var params = reader.decodeStruct(BackgroundSyncService_GetRegistrations_Params);
      this.getRegistrations(params.serviceWorkerRegistrationId).then(function(response) {
        var responseParams =
            new BackgroundSyncService_GetRegistrations_ResponseParams();
        responseParams.err = response.err;
        responseParams.registrations = response.registrations;
        var builder = new codec.MessageV1Builder(
            kBackgroundSyncService_GetRegistrations_Name,
            codec.align(BackgroundSyncService_GetRegistrations_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(BackgroundSyncService_GetRegistrations_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    default:
      return false;
    }
  };

  function validateBackgroundSyncServiceRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kBackgroundSyncService_Register_Name:
        if (message.expectsResponse())
          paramsClass = BackgroundSyncService_Register_Params;
      break;
      case kBackgroundSyncService_GetRegistrations_Name:
        if (message.expectsResponse())
          paramsClass = BackgroundSyncService_GetRegistrations_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateBackgroundSyncServiceResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kBackgroundSyncService_Register_Name:
        if (message.isResponse())
          paramsClass = BackgroundSyncService_Register_ResponseParams;
        break;
      case kBackgroundSyncService_GetRegistrations_Name:
        if (message.isResponse())
          paramsClass = BackgroundSyncService_GetRegistrations_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var BackgroundSyncService = {
    name: 'blink.mojom.BackgroundSyncService',
    kVersion: 0,
    ptrClass: BackgroundSyncServicePtr,
    proxyClass: BackgroundSyncServiceProxy,
    stubClass: BackgroundSyncServiceStub,
    validateRequest: validateBackgroundSyncServiceRequest,
    validateResponse: validateBackgroundSyncServiceResponse,
    mojomId: 'third_party/blink/public/platform/modules/background_sync/background_sync.mojom',
    fuzzMethods: {
      register: {
        params: BackgroundSyncService_Register_Params,
      },
      getRegistrations: {
        params: BackgroundSyncService_GetRegistrations_Params,
      },
    },
  };
  BackgroundSyncServiceStub.prototype.validator = validateBackgroundSyncServiceRequest;
  BackgroundSyncServiceProxy.prototype.validator = validateBackgroundSyncServiceResponse;
  exports.BackgroundSyncNetworkState = BackgroundSyncNetworkState;
  exports.BackgroundSyncError = BackgroundSyncError;
  exports.BackgroundSyncState = BackgroundSyncState;
  exports.BackgroundSyncEventLastChance = BackgroundSyncEventLastChance;
  exports.SyncRegistration = SyncRegistration;
  exports.BackgroundSyncService = BackgroundSyncService;
  exports.BackgroundSyncServicePtr = BackgroundSyncServicePtr;
  exports.BackgroundSyncServiceAssociatedPtr = BackgroundSyncServiceAssociatedPtr;
})();