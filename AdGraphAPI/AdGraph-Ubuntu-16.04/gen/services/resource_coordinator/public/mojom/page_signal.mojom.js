// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'services/resource_coordinator/public/mojom/page_signal.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('resourceCoordinator.mojom');
  var coordination_unit$ =
      mojo.internal.exposeNamespace('resourceCoordinator.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'services/resource_coordinator/public/mojom/coordination_unit.mojom', 'coordination_unit.mojom.js');
  }
  var lifecycle$ =
      mojo.internal.exposeNamespace('resourceCoordinator.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'services/resource_coordinator/public/mojom/lifecycle.mojom', 'lifecycle.mojom.js');
  }
  var time$ =
      mojo.internal.exposeNamespace('mojoBase.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'mojo/public/mojom/base/time.mojom', '../../../../mojo/public/mojom/base/time.mojom.js');
  }



  function PageSignalReceiver_NotifyPageAlmostIdle_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PageSignalReceiver_NotifyPageAlmostIdle_Params.prototype.initDefaults_ = function() {
    this.cuId = null;
  };
  PageSignalReceiver_NotifyPageAlmostIdle_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PageSignalReceiver_NotifyPageAlmostIdle_Params.generate = function(generator_) {
    var generated = new PageSignalReceiver_NotifyPageAlmostIdle_Params;
    generated.cuId = generator_.generateStruct(resourceCoordinator.mojom.CoordinationUnitID, false);
    return generated;
  };

  PageSignalReceiver_NotifyPageAlmostIdle_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.cuId = mutator_.mutateStruct(resourceCoordinator.mojom.CoordinationUnitID, false);
    }
    return this;
  };
  PageSignalReceiver_NotifyPageAlmostIdle_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PageSignalReceiver_NotifyPageAlmostIdle_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PageSignalReceiver_NotifyPageAlmostIdle_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PageSignalReceiver_NotifyPageAlmostIdle_Params.validate = function(messageValidator, offset) {
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


    // validate PageSignalReceiver_NotifyPageAlmostIdle_Params.cuId
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, coordination_unit$.CoordinationUnitID, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PageSignalReceiver_NotifyPageAlmostIdle_Params.encodedSize = codec.kStructHeaderSize + 8;

  PageSignalReceiver_NotifyPageAlmostIdle_Params.decode = function(decoder) {
    var packed;
    var val = new PageSignalReceiver_NotifyPageAlmostIdle_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.cuId = decoder.decodeStructPointer(coordination_unit$.CoordinationUnitID);
    return val;
  };

  PageSignalReceiver_NotifyPageAlmostIdle_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PageSignalReceiver_NotifyPageAlmostIdle_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(coordination_unit$.CoordinationUnitID, val.cuId);
  };
  function PageSignalReceiver_SetExpectedTaskQueueingDuration_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PageSignalReceiver_SetExpectedTaskQueueingDuration_Params.prototype.initDefaults_ = function() {
    this.cuId = null;
    this.duration = null;
  };
  PageSignalReceiver_SetExpectedTaskQueueingDuration_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PageSignalReceiver_SetExpectedTaskQueueingDuration_Params.generate = function(generator_) {
    var generated = new PageSignalReceiver_SetExpectedTaskQueueingDuration_Params;
    generated.cuId = generator_.generateStruct(resourceCoordinator.mojom.CoordinationUnitID, false);
    generated.duration = generator_.generateStruct(mojoBase.mojom.TimeDelta, false);
    return generated;
  };

  PageSignalReceiver_SetExpectedTaskQueueingDuration_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.cuId = mutator_.mutateStruct(resourceCoordinator.mojom.CoordinationUnitID, false);
    }
    if (mutator_.chooseMutateField()) {
      this.duration = mutator_.mutateStruct(mojoBase.mojom.TimeDelta, false);
    }
    return this;
  };
  PageSignalReceiver_SetExpectedTaskQueueingDuration_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PageSignalReceiver_SetExpectedTaskQueueingDuration_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PageSignalReceiver_SetExpectedTaskQueueingDuration_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PageSignalReceiver_SetExpectedTaskQueueingDuration_Params.validate = function(messageValidator, offset) {
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


    // validate PageSignalReceiver_SetExpectedTaskQueueingDuration_Params.cuId
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, coordination_unit$.CoordinationUnitID, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate PageSignalReceiver_SetExpectedTaskQueueingDuration_Params.duration
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, time$.TimeDelta, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PageSignalReceiver_SetExpectedTaskQueueingDuration_Params.encodedSize = codec.kStructHeaderSize + 16;

  PageSignalReceiver_SetExpectedTaskQueueingDuration_Params.decode = function(decoder) {
    var packed;
    var val = new PageSignalReceiver_SetExpectedTaskQueueingDuration_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.cuId = decoder.decodeStructPointer(coordination_unit$.CoordinationUnitID);
    val.duration = decoder.decodeStructPointer(time$.TimeDelta);
    return val;
  };

  PageSignalReceiver_SetExpectedTaskQueueingDuration_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PageSignalReceiver_SetExpectedTaskQueueingDuration_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(coordination_unit$.CoordinationUnitID, val.cuId);
    encoder.encodeStructPointer(time$.TimeDelta, val.duration);
  };
  function PageSignalReceiver_SetLifecycleState_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PageSignalReceiver_SetLifecycleState_Params.prototype.initDefaults_ = function() {
    this.cuId = null;
    this.state = 0;
  };
  PageSignalReceiver_SetLifecycleState_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PageSignalReceiver_SetLifecycleState_Params.generate = function(generator_) {
    var generated = new PageSignalReceiver_SetLifecycleState_Params;
    generated.cuId = generator_.generateStruct(resourceCoordinator.mojom.CoordinationUnitID, false);
    generated.state = generator_.generateEnum(0, 2);
    return generated;
  };

  PageSignalReceiver_SetLifecycleState_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.cuId = mutator_.mutateStruct(resourceCoordinator.mojom.CoordinationUnitID, false);
    }
    if (mutator_.chooseMutateField()) {
      this.state = mutator_.mutateEnum(this.state, 0, 2);
    }
    return this;
  };
  PageSignalReceiver_SetLifecycleState_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PageSignalReceiver_SetLifecycleState_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PageSignalReceiver_SetLifecycleState_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PageSignalReceiver_SetLifecycleState_Params.validate = function(messageValidator, offset) {
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


    // validate PageSignalReceiver_SetLifecycleState_Params.cuId
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, coordination_unit$.CoordinationUnitID, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate PageSignalReceiver_SetLifecycleState_Params.state
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 8, lifecycle$.LifecycleState);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PageSignalReceiver_SetLifecycleState_Params.encodedSize = codec.kStructHeaderSize + 16;

  PageSignalReceiver_SetLifecycleState_Params.decode = function(decoder) {
    var packed;
    var val = new PageSignalReceiver_SetLifecycleState_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.cuId = decoder.decodeStructPointer(coordination_unit$.CoordinationUnitID);
    val.state = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  PageSignalReceiver_SetLifecycleState_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PageSignalReceiver_SetLifecycleState_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(coordination_unit$.CoordinationUnitID, val.cuId);
    encoder.encodeStruct(codec.Int32, val.state);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function PageSignalGenerator_AddReceiver_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PageSignalGenerator_AddReceiver_Params.prototype.initDefaults_ = function() {
    this.receiver = new PageSignalReceiverPtr();
  };
  PageSignalGenerator_AddReceiver_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PageSignalGenerator_AddReceiver_Params.generate = function(generator_) {
    var generated = new PageSignalGenerator_AddReceiver_Params;
    generated.receiver = generator_.generateInterface("resourceCoordinator.mojom.PageSignalReceiver", false);
    return generated;
  };

  PageSignalGenerator_AddReceiver_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.receiver = mutator_.mutateInterface(this.receiver, "resourceCoordinator.mojom.PageSignalReceiver", false);
    }
    return this;
  };
  PageSignalGenerator_AddReceiver_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.receiver !== null) {
      Array.prototype.push.apply(handles, ["resourceCoordinator.mojom.PageSignalReceiverPtr"]);
    }
    return handles;
  };

  PageSignalGenerator_AddReceiver_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PageSignalGenerator_AddReceiver_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.receiver = handles[idx++];;
    return idx;
  };

  PageSignalGenerator_AddReceiver_Params.validate = function(messageValidator, offset) {
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


    // validate PageSignalGenerator_AddReceiver_Params.receiver
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 0, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PageSignalGenerator_AddReceiver_Params.encodedSize = codec.kStructHeaderSize + 8;

  PageSignalGenerator_AddReceiver_Params.decode = function(decoder) {
    var packed;
    var val = new PageSignalGenerator_AddReceiver_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.receiver = decoder.decodeStruct(new codec.Interface(PageSignalReceiverPtr));
    return val;
  };

  PageSignalGenerator_AddReceiver_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PageSignalGenerator_AddReceiver_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(new codec.Interface(PageSignalReceiverPtr), val.receiver);
  };
  var kPageSignalReceiver_NotifyPageAlmostIdle_Name = 1805278766;
  var kPageSignalReceiver_SetExpectedTaskQueueingDuration_Name = 898496757;
  var kPageSignalReceiver_SetLifecycleState_Name = 2096912351;

  function PageSignalReceiverPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(PageSignalReceiver,
                                                   handleOrPtrInfo);
  }

  function PageSignalReceiverAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        PageSignalReceiver, associatedInterfacePtrInfo);
  }

  PageSignalReceiverAssociatedPtr.prototype =
      Object.create(PageSignalReceiverPtr.prototype);
  PageSignalReceiverAssociatedPtr.prototype.constructor =
      PageSignalReceiverAssociatedPtr;

  function PageSignalReceiverProxy(receiver) {
    this.receiver_ = receiver;
  }
  PageSignalReceiverPtr.prototype.notifyPageAlmostIdle = function() {
    return PageSignalReceiverProxy.prototype.notifyPageAlmostIdle
        .apply(this.ptr.getProxy(), arguments);
  };

  PageSignalReceiverProxy.prototype.notifyPageAlmostIdle = function(cuId) {
    var params_ = new PageSignalReceiver_NotifyPageAlmostIdle_Params();
    params_.cuId = cuId;
    var builder = new codec.MessageV0Builder(
        kPageSignalReceiver_NotifyPageAlmostIdle_Name,
        codec.align(PageSignalReceiver_NotifyPageAlmostIdle_Params.encodedSize));
    builder.encodeStruct(PageSignalReceiver_NotifyPageAlmostIdle_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  PageSignalReceiverPtr.prototype.setExpectedTaskQueueingDuration = function() {
    return PageSignalReceiverProxy.prototype.setExpectedTaskQueueingDuration
        .apply(this.ptr.getProxy(), arguments);
  };

  PageSignalReceiverProxy.prototype.setExpectedTaskQueueingDuration = function(cuId, duration) {
    var params_ = new PageSignalReceiver_SetExpectedTaskQueueingDuration_Params();
    params_.cuId = cuId;
    params_.duration = duration;
    var builder = new codec.MessageV0Builder(
        kPageSignalReceiver_SetExpectedTaskQueueingDuration_Name,
        codec.align(PageSignalReceiver_SetExpectedTaskQueueingDuration_Params.encodedSize));
    builder.encodeStruct(PageSignalReceiver_SetExpectedTaskQueueingDuration_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  PageSignalReceiverPtr.prototype.setLifecycleState = function() {
    return PageSignalReceiverProxy.prototype.setLifecycleState
        .apply(this.ptr.getProxy(), arguments);
  };

  PageSignalReceiverProxy.prototype.setLifecycleState = function(cuId, state) {
    var params_ = new PageSignalReceiver_SetLifecycleState_Params();
    params_.cuId = cuId;
    params_.state = state;
    var builder = new codec.MessageV0Builder(
        kPageSignalReceiver_SetLifecycleState_Name,
        codec.align(PageSignalReceiver_SetLifecycleState_Params.encodedSize));
    builder.encodeStruct(PageSignalReceiver_SetLifecycleState_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function PageSignalReceiverStub(delegate) {
    this.delegate_ = delegate;
  }
  PageSignalReceiverStub.prototype.notifyPageAlmostIdle = function(cuId) {
    return this.delegate_ && this.delegate_.notifyPageAlmostIdle && this.delegate_.notifyPageAlmostIdle(cuId);
  }
  PageSignalReceiverStub.prototype.setExpectedTaskQueueingDuration = function(cuId, duration) {
    return this.delegate_ && this.delegate_.setExpectedTaskQueueingDuration && this.delegate_.setExpectedTaskQueueingDuration(cuId, duration);
  }
  PageSignalReceiverStub.prototype.setLifecycleState = function(cuId, state) {
    return this.delegate_ && this.delegate_.setLifecycleState && this.delegate_.setLifecycleState(cuId, state);
  }

  PageSignalReceiverStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kPageSignalReceiver_NotifyPageAlmostIdle_Name:
      var params = reader.decodeStruct(PageSignalReceiver_NotifyPageAlmostIdle_Params);
      this.notifyPageAlmostIdle(params.cuId);
      return true;
    case kPageSignalReceiver_SetExpectedTaskQueueingDuration_Name:
      var params = reader.decodeStruct(PageSignalReceiver_SetExpectedTaskQueueingDuration_Params);
      this.setExpectedTaskQueueingDuration(params.cuId, params.duration);
      return true;
    case kPageSignalReceiver_SetLifecycleState_Name:
      var params = reader.decodeStruct(PageSignalReceiver_SetLifecycleState_Params);
      this.setLifecycleState(params.cuId, params.state);
      return true;
    default:
      return false;
    }
  };

  PageSignalReceiverStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validatePageSignalReceiverRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kPageSignalReceiver_NotifyPageAlmostIdle_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = PageSignalReceiver_NotifyPageAlmostIdle_Params;
      break;
      case kPageSignalReceiver_SetExpectedTaskQueueingDuration_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = PageSignalReceiver_SetExpectedTaskQueueingDuration_Params;
      break;
      case kPageSignalReceiver_SetLifecycleState_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = PageSignalReceiver_SetLifecycleState_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validatePageSignalReceiverResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var PageSignalReceiver = {
    name: 'resource_coordinator.mojom.PageSignalReceiver',
    kVersion: 0,
    ptrClass: PageSignalReceiverPtr,
    proxyClass: PageSignalReceiverProxy,
    stubClass: PageSignalReceiverStub,
    validateRequest: validatePageSignalReceiverRequest,
    validateResponse: null,
    mojomId: 'services/resource_coordinator/public/mojom/page_signal.mojom',
    fuzzMethods: {
      notifyPageAlmostIdle: {
        params: PageSignalReceiver_NotifyPageAlmostIdle_Params,
      },
      setExpectedTaskQueueingDuration: {
        params: PageSignalReceiver_SetExpectedTaskQueueingDuration_Params,
      },
      setLifecycleState: {
        params: PageSignalReceiver_SetLifecycleState_Params,
      },
    },
  };
  PageSignalReceiverStub.prototype.validator = validatePageSignalReceiverRequest;
  PageSignalReceiverProxy.prototype.validator = null;
  var kPageSignalGenerator_AddReceiver_Name = 914315178;

  function PageSignalGeneratorPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(PageSignalGenerator,
                                                   handleOrPtrInfo);
  }

  function PageSignalGeneratorAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        PageSignalGenerator, associatedInterfacePtrInfo);
  }

  PageSignalGeneratorAssociatedPtr.prototype =
      Object.create(PageSignalGeneratorPtr.prototype);
  PageSignalGeneratorAssociatedPtr.prototype.constructor =
      PageSignalGeneratorAssociatedPtr;

  function PageSignalGeneratorProxy(receiver) {
    this.receiver_ = receiver;
  }
  PageSignalGeneratorPtr.prototype.addReceiver = function() {
    return PageSignalGeneratorProxy.prototype.addReceiver
        .apply(this.ptr.getProxy(), arguments);
  };

  PageSignalGeneratorProxy.prototype.addReceiver = function(receiver) {
    var params_ = new PageSignalGenerator_AddReceiver_Params();
    params_.receiver = receiver;
    var builder = new codec.MessageV0Builder(
        kPageSignalGenerator_AddReceiver_Name,
        codec.align(PageSignalGenerator_AddReceiver_Params.encodedSize));
    builder.encodeStruct(PageSignalGenerator_AddReceiver_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function PageSignalGeneratorStub(delegate) {
    this.delegate_ = delegate;
  }
  PageSignalGeneratorStub.prototype.addReceiver = function(receiver) {
    return this.delegate_ && this.delegate_.addReceiver && this.delegate_.addReceiver(receiver);
  }

  PageSignalGeneratorStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kPageSignalGenerator_AddReceiver_Name:
      var params = reader.decodeStruct(PageSignalGenerator_AddReceiver_Params);
      this.addReceiver(params.receiver);
      return true;
    default:
      return false;
    }
  };

  PageSignalGeneratorStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validatePageSignalGeneratorRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kPageSignalGenerator_AddReceiver_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = PageSignalGenerator_AddReceiver_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validatePageSignalGeneratorResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var PageSignalGenerator = {
    name: 'resource_coordinator.mojom.PageSignalGenerator',
    kVersion: 0,
    ptrClass: PageSignalGeneratorPtr,
    proxyClass: PageSignalGeneratorProxy,
    stubClass: PageSignalGeneratorStub,
    validateRequest: validatePageSignalGeneratorRequest,
    validateResponse: null,
    mojomId: 'services/resource_coordinator/public/mojom/page_signal.mojom',
    fuzzMethods: {
      addReceiver: {
        params: PageSignalGenerator_AddReceiver_Params,
      },
    },
  };
  PageSignalGeneratorStub.prototype.validator = validatePageSignalGeneratorRequest;
  PageSignalGeneratorProxy.prototype.validator = null;
  exports.PageSignalReceiver = PageSignalReceiver;
  exports.PageSignalReceiverPtr = PageSignalReceiverPtr;
  exports.PageSignalReceiverAssociatedPtr = PageSignalReceiverAssociatedPtr;
  exports.PageSignalGenerator = PageSignalGenerator;
  exports.PageSignalGeneratorPtr = PageSignalGeneratorPtr;
  exports.PageSignalGeneratorAssociatedPtr = PageSignalGeneratorAssociatedPtr;
})();