// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'services/ui/public/interfaces/user_activity_monitor.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('ui.mojom');



  function UserActivityObserver_OnUserActivity_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  UserActivityObserver_OnUserActivity_Params.prototype.initDefaults_ = function() {
  };
  UserActivityObserver_OnUserActivity_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  UserActivityObserver_OnUserActivity_Params.generate = function(generator_) {
    var generated = new UserActivityObserver_OnUserActivity_Params;
    return generated;
  };

  UserActivityObserver_OnUserActivity_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  UserActivityObserver_OnUserActivity_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  UserActivityObserver_OnUserActivity_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  UserActivityObserver_OnUserActivity_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  UserActivityObserver_OnUserActivity_Params.validate = function(messageValidator, offset) {
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

  UserActivityObserver_OnUserActivity_Params.encodedSize = codec.kStructHeaderSize + 0;

  UserActivityObserver_OnUserActivity_Params.decode = function(decoder) {
    var packed;
    var val = new UserActivityObserver_OnUserActivity_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  UserActivityObserver_OnUserActivity_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(UserActivityObserver_OnUserActivity_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function UserIdleObserver_OnUserIdleStateChanged_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  UserIdleObserver_OnUserIdleStateChanged_Params.prototype.initDefaults_ = function() {
    this.newState = 0;
  };
  UserIdleObserver_OnUserIdleStateChanged_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  UserIdleObserver_OnUserIdleStateChanged_Params.generate = function(generator_) {
    var generated = new UserIdleObserver_OnUserIdleStateChanged_Params;
    generated.newState = generator_.generateEnum(0, 1);
    return generated;
  };

  UserIdleObserver_OnUserIdleStateChanged_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.newState = mutator_.mutateEnum(this.newState, 0, 1);
    }
    return this;
  };
  UserIdleObserver_OnUserIdleStateChanged_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  UserIdleObserver_OnUserIdleStateChanged_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  UserIdleObserver_OnUserIdleStateChanged_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  UserIdleObserver_OnUserIdleStateChanged_Params.validate = function(messageValidator, offset) {
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


    // validate UserIdleObserver_OnUserIdleStateChanged_Params.newState
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, UserIdleObserver.IdleState);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  UserIdleObserver_OnUserIdleStateChanged_Params.encodedSize = codec.kStructHeaderSize + 8;

  UserIdleObserver_OnUserIdleStateChanged_Params.decode = function(decoder) {
    var packed;
    var val = new UserIdleObserver_OnUserIdleStateChanged_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.newState = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  UserIdleObserver_OnUserIdleStateChanged_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(UserIdleObserver_OnUserIdleStateChanged_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.newState);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function UserActivityMonitor_AddUserActivityObserver_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  UserActivityMonitor_AddUserActivityObserver_Params.prototype.initDefaults_ = function() {
    this.delayBetweenNotifySecs = 0;
    this.observer = new UserActivityObserverPtr();
  };
  UserActivityMonitor_AddUserActivityObserver_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  UserActivityMonitor_AddUserActivityObserver_Params.generate = function(generator_) {
    var generated = new UserActivityMonitor_AddUserActivityObserver_Params;
    generated.delayBetweenNotifySecs = generator_.generateUint32();
    generated.observer = generator_.generateInterface("ui.mojom.UserActivityObserver", false);
    return generated;
  };

  UserActivityMonitor_AddUserActivityObserver_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.delayBetweenNotifySecs = mutator_.mutateUint32(this.delayBetweenNotifySecs);
    }
    if (mutator_.chooseMutateField()) {
      this.observer = mutator_.mutateInterface(this.observer, "ui.mojom.UserActivityObserver", false);
    }
    return this;
  };
  UserActivityMonitor_AddUserActivityObserver_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.observer !== null) {
      Array.prototype.push.apply(handles, ["ui.mojom.UserActivityObserverPtr"]);
    }
    return handles;
  };

  UserActivityMonitor_AddUserActivityObserver_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  UserActivityMonitor_AddUserActivityObserver_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.observer = handles[idx++];;
    return idx;
  };

  UserActivityMonitor_AddUserActivityObserver_Params.validate = function(messageValidator, offset) {
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



    // validate UserActivityMonitor_AddUserActivityObserver_Params.observer
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 4, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  UserActivityMonitor_AddUserActivityObserver_Params.encodedSize = codec.kStructHeaderSize + 16;

  UserActivityMonitor_AddUserActivityObserver_Params.decode = function(decoder) {
    var packed;
    var val = new UserActivityMonitor_AddUserActivityObserver_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.delayBetweenNotifySecs = decoder.decodeStruct(codec.Uint32);
    val.observer = decoder.decodeStruct(new codec.Interface(UserActivityObserverPtr));
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  UserActivityMonitor_AddUserActivityObserver_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(UserActivityMonitor_AddUserActivityObserver_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint32, val.delayBetweenNotifySecs);
    encoder.encodeStruct(new codec.Interface(UserActivityObserverPtr), val.observer);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function UserActivityMonitor_AddUserIdleObserver_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  UserActivityMonitor_AddUserIdleObserver_Params.prototype.initDefaults_ = function() {
    this.idleTimeInMinutes = 0;
    this.observer = new UserIdleObserverPtr();
  };
  UserActivityMonitor_AddUserIdleObserver_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  UserActivityMonitor_AddUserIdleObserver_Params.generate = function(generator_) {
    var generated = new UserActivityMonitor_AddUserIdleObserver_Params;
    generated.idleTimeInMinutes = generator_.generateUint32();
    generated.observer = generator_.generateInterface("ui.mojom.UserIdleObserver", false);
    return generated;
  };

  UserActivityMonitor_AddUserIdleObserver_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.idleTimeInMinutes = mutator_.mutateUint32(this.idleTimeInMinutes);
    }
    if (mutator_.chooseMutateField()) {
      this.observer = mutator_.mutateInterface(this.observer, "ui.mojom.UserIdleObserver", false);
    }
    return this;
  };
  UserActivityMonitor_AddUserIdleObserver_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.observer !== null) {
      Array.prototype.push.apply(handles, ["ui.mojom.UserIdleObserverPtr"]);
    }
    return handles;
  };

  UserActivityMonitor_AddUserIdleObserver_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  UserActivityMonitor_AddUserIdleObserver_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.observer = handles[idx++];;
    return idx;
  };

  UserActivityMonitor_AddUserIdleObserver_Params.validate = function(messageValidator, offset) {
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



    // validate UserActivityMonitor_AddUserIdleObserver_Params.observer
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 4, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  UserActivityMonitor_AddUserIdleObserver_Params.encodedSize = codec.kStructHeaderSize + 16;

  UserActivityMonitor_AddUserIdleObserver_Params.decode = function(decoder) {
    var packed;
    var val = new UserActivityMonitor_AddUserIdleObserver_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.idleTimeInMinutes = decoder.decodeStruct(codec.Uint32);
    val.observer = decoder.decodeStruct(new codec.Interface(UserIdleObserverPtr));
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  UserActivityMonitor_AddUserIdleObserver_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(UserActivityMonitor_AddUserIdleObserver_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint32, val.idleTimeInMinutes);
    encoder.encodeStruct(new codec.Interface(UserIdleObserverPtr), val.observer);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  var kUserActivityObserver_OnUserActivity_Name = 689634773;

  function UserActivityObserverPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(UserActivityObserver,
                                                   handleOrPtrInfo);
  }

  function UserActivityObserverAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        UserActivityObserver, associatedInterfacePtrInfo);
  }

  UserActivityObserverAssociatedPtr.prototype =
      Object.create(UserActivityObserverPtr.prototype);
  UserActivityObserverAssociatedPtr.prototype.constructor =
      UserActivityObserverAssociatedPtr;

  function UserActivityObserverProxy(receiver) {
    this.receiver_ = receiver;
  }
  UserActivityObserverPtr.prototype.onUserActivity = function() {
    return UserActivityObserverProxy.prototype.onUserActivity
        .apply(this.ptr.getProxy(), arguments);
  };

  UserActivityObserverProxy.prototype.onUserActivity = function() {
    var params_ = new UserActivityObserver_OnUserActivity_Params();
    var builder = new codec.MessageV0Builder(
        kUserActivityObserver_OnUserActivity_Name,
        codec.align(UserActivityObserver_OnUserActivity_Params.encodedSize));
    builder.encodeStruct(UserActivityObserver_OnUserActivity_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function UserActivityObserverStub(delegate) {
    this.delegate_ = delegate;
  }
  UserActivityObserverStub.prototype.onUserActivity = function() {
    return this.delegate_ && this.delegate_.onUserActivity && this.delegate_.onUserActivity();
  }

  UserActivityObserverStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kUserActivityObserver_OnUserActivity_Name:
      var params = reader.decodeStruct(UserActivityObserver_OnUserActivity_Params);
      this.onUserActivity();
      return true;
    default:
      return false;
    }
  };

  UserActivityObserverStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateUserActivityObserverRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kUserActivityObserver_OnUserActivity_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = UserActivityObserver_OnUserActivity_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateUserActivityObserverResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var UserActivityObserver = {
    name: 'ui.mojom.UserActivityObserver',
    kVersion: 0,
    ptrClass: UserActivityObserverPtr,
    proxyClass: UserActivityObserverProxy,
    stubClass: UserActivityObserverStub,
    validateRequest: validateUserActivityObserverRequest,
    validateResponse: null,
    mojomId: 'services/ui/public/interfaces/user_activity_monitor.mojom',
    fuzzMethods: {
      onUserActivity: {
        params: UserActivityObserver_OnUserActivity_Params,
      },
    },
  };
  UserActivityObserverStub.prototype.validator = validateUserActivityObserverRequest;
  UserActivityObserverProxy.prototype.validator = null;
  var kUserIdleObserver_OnUserIdleStateChanged_Name = 733113051;

  function UserIdleObserverPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(UserIdleObserver,
                                                   handleOrPtrInfo);
  }

  function UserIdleObserverAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        UserIdleObserver, associatedInterfacePtrInfo);
  }

  UserIdleObserverAssociatedPtr.prototype =
      Object.create(UserIdleObserverPtr.prototype);
  UserIdleObserverAssociatedPtr.prototype.constructor =
      UserIdleObserverAssociatedPtr;

  function UserIdleObserverProxy(receiver) {
    this.receiver_ = receiver;
  }
  UserIdleObserverPtr.prototype.onUserIdleStateChanged = function() {
    return UserIdleObserverProxy.prototype.onUserIdleStateChanged
        .apply(this.ptr.getProxy(), arguments);
  };

  UserIdleObserverProxy.prototype.onUserIdleStateChanged = function(newState) {
    var params_ = new UserIdleObserver_OnUserIdleStateChanged_Params();
    params_.newState = newState;
    var builder = new codec.MessageV0Builder(
        kUserIdleObserver_OnUserIdleStateChanged_Name,
        codec.align(UserIdleObserver_OnUserIdleStateChanged_Params.encodedSize));
    builder.encodeStruct(UserIdleObserver_OnUserIdleStateChanged_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function UserIdleObserverStub(delegate) {
    this.delegate_ = delegate;
  }
  UserIdleObserverStub.prototype.onUserIdleStateChanged = function(newState) {
    return this.delegate_ && this.delegate_.onUserIdleStateChanged && this.delegate_.onUserIdleStateChanged(newState);
  }

  UserIdleObserverStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kUserIdleObserver_OnUserIdleStateChanged_Name:
      var params = reader.decodeStruct(UserIdleObserver_OnUserIdleStateChanged_Params);
      this.onUserIdleStateChanged(params.newState);
      return true;
    default:
      return false;
    }
  };

  UserIdleObserverStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateUserIdleObserverRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kUserIdleObserver_OnUserIdleStateChanged_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = UserIdleObserver_OnUserIdleStateChanged_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateUserIdleObserverResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var UserIdleObserver = {
    name: 'ui.mojom.UserIdleObserver',
    kVersion: 0,
    ptrClass: UserIdleObserverPtr,
    proxyClass: UserIdleObserverProxy,
    stubClass: UserIdleObserverStub,
    validateRequest: validateUserIdleObserverRequest,
    validateResponse: null,
    mojomId: 'services/ui/public/interfaces/user_activity_monitor.mojom',
    fuzzMethods: {
      onUserIdleStateChanged: {
        params: UserIdleObserver_OnUserIdleStateChanged_Params,
      },
    },
  };
  UserIdleObserver.IdleState = {};
  UserIdleObserver.IdleState.ACTIVE = 0;
  UserIdleObserver.IdleState.IDLE = UserIdleObserver.IdleState.ACTIVE + 1;

  UserIdleObserver.IdleState.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
      return true;
    }
    return false;
  };

  UserIdleObserver.IdleState.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };
  UserIdleObserverStub.prototype.validator = validateUserIdleObserverRequest;
  UserIdleObserverProxy.prototype.validator = null;
  var kUserActivityMonitor_AddUserActivityObserver_Name = 2054135144;
  var kUserActivityMonitor_AddUserIdleObserver_Name = 85097039;

  function UserActivityMonitorPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(UserActivityMonitor,
                                                   handleOrPtrInfo);
  }

  function UserActivityMonitorAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        UserActivityMonitor, associatedInterfacePtrInfo);
  }

  UserActivityMonitorAssociatedPtr.prototype =
      Object.create(UserActivityMonitorPtr.prototype);
  UserActivityMonitorAssociatedPtr.prototype.constructor =
      UserActivityMonitorAssociatedPtr;

  function UserActivityMonitorProxy(receiver) {
    this.receiver_ = receiver;
  }
  UserActivityMonitorPtr.prototype.addUserActivityObserver = function() {
    return UserActivityMonitorProxy.prototype.addUserActivityObserver
        .apply(this.ptr.getProxy(), arguments);
  };

  UserActivityMonitorProxy.prototype.addUserActivityObserver = function(delayBetweenNotifySecs, observer) {
    var params_ = new UserActivityMonitor_AddUserActivityObserver_Params();
    params_.delayBetweenNotifySecs = delayBetweenNotifySecs;
    params_.observer = observer;
    var builder = new codec.MessageV0Builder(
        kUserActivityMonitor_AddUserActivityObserver_Name,
        codec.align(UserActivityMonitor_AddUserActivityObserver_Params.encodedSize));
    builder.encodeStruct(UserActivityMonitor_AddUserActivityObserver_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  UserActivityMonitorPtr.prototype.addUserIdleObserver = function() {
    return UserActivityMonitorProxy.prototype.addUserIdleObserver
        .apply(this.ptr.getProxy(), arguments);
  };

  UserActivityMonitorProxy.prototype.addUserIdleObserver = function(idleTimeInMinutes, observer) {
    var params_ = new UserActivityMonitor_AddUserIdleObserver_Params();
    params_.idleTimeInMinutes = idleTimeInMinutes;
    params_.observer = observer;
    var builder = new codec.MessageV0Builder(
        kUserActivityMonitor_AddUserIdleObserver_Name,
        codec.align(UserActivityMonitor_AddUserIdleObserver_Params.encodedSize));
    builder.encodeStruct(UserActivityMonitor_AddUserIdleObserver_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function UserActivityMonitorStub(delegate) {
    this.delegate_ = delegate;
  }
  UserActivityMonitorStub.prototype.addUserActivityObserver = function(delayBetweenNotifySecs, observer) {
    return this.delegate_ && this.delegate_.addUserActivityObserver && this.delegate_.addUserActivityObserver(delayBetweenNotifySecs, observer);
  }
  UserActivityMonitorStub.prototype.addUserIdleObserver = function(idleTimeInMinutes, observer) {
    return this.delegate_ && this.delegate_.addUserIdleObserver && this.delegate_.addUserIdleObserver(idleTimeInMinutes, observer);
  }

  UserActivityMonitorStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kUserActivityMonitor_AddUserActivityObserver_Name:
      var params = reader.decodeStruct(UserActivityMonitor_AddUserActivityObserver_Params);
      this.addUserActivityObserver(params.delayBetweenNotifySecs, params.observer);
      return true;
    case kUserActivityMonitor_AddUserIdleObserver_Name:
      var params = reader.decodeStruct(UserActivityMonitor_AddUserIdleObserver_Params);
      this.addUserIdleObserver(params.idleTimeInMinutes, params.observer);
      return true;
    default:
      return false;
    }
  };

  UserActivityMonitorStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateUserActivityMonitorRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kUserActivityMonitor_AddUserActivityObserver_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = UserActivityMonitor_AddUserActivityObserver_Params;
      break;
      case kUserActivityMonitor_AddUserIdleObserver_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = UserActivityMonitor_AddUserIdleObserver_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateUserActivityMonitorResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var UserActivityMonitor = {
    name: 'ui.mojom.UserActivityMonitor',
    kVersion: 0,
    ptrClass: UserActivityMonitorPtr,
    proxyClass: UserActivityMonitorProxy,
    stubClass: UserActivityMonitorStub,
    validateRequest: validateUserActivityMonitorRequest,
    validateResponse: null,
    mojomId: 'services/ui/public/interfaces/user_activity_monitor.mojom',
    fuzzMethods: {
      addUserActivityObserver: {
        params: UserActivityMonitor_AddUserActivityObserver_Params,
      },
      addUserIdleObserver: {
        params: UserActivityMonitor_AddUserIdleObserver_Params,
      },
    },
  };
  UserActivityMonitorStub.prototype.validator = validateUserActivityMonitorRequest;
  UserActivityMonitorProxy.prototype.validator = null;
  exports.UserActivityObserver = UserActivityObserver;
  exports.UserActivityObserverPtr = UserActivityObserverPtr;
  exports.UserActivityObserverAssociatedPtr = UserActivityObserverAssociatedPtr;
  exports.UserIdleObserver = UserIdleObserver;
  exports.UserIdleObserverPtr = UserIdleObserverPtr;
  exports.UserIdleObserverAssociatedPtr = UserIdleObserverAssociatedPtr;
  exports.UserActivityMonitor = UserActivityMonitor;
  exports.UserActivityMonitorPtr = UserActivityMonitorPtr;
  exports.UserActivityMonitorAssociatedPtr = UserActivityMonitorAssociatedPtr;
})();