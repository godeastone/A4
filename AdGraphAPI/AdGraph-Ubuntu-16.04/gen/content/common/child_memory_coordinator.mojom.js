// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'content/common/child_memory_coordinator.mojom';
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


  var MemoryState = {};
  MemoryState.UNKNOWN = -1;
  MemoryState.NORMAL = 0;
  MemoryState.THROTTLED = 1;
  MemoryState.SUSPENDED = 2;

  MemoryState.isKnownEnumValue = function(value) {
    switch (value) {
    case -1:
    case 0:
    case 1:
    case 2:
      return true;
    }
    return false;
  };

  MemoryState.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };

  function ChildMemoryCoordinator_OnStateChange_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ChildMemoryCoordinator_OnStateChange_Params.prototype.initDefaults_ = function() {
    this.state = 0;
  };
  ChildMemoryCoordinator_OnStateChange_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ChildMemoryCoordinator_OnStateChange_Params.generate = function(generator_) {
    var generated = new ChildMemoryCoordinator_OnStateChange_Params;
    generated.state = generator_.generateEnum(0, 2);
    return generated;
  };

  ChildMemoryCoordinator_OnStateChange_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.state = mutator_.mutateEnum(this.state, 0, 2);
    }
    return this;
  };
  ChildMemoryCoordinator_OnStateChange_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ChildMemoryCoordinator_OnStateChange_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ChildMemoryCoordinator_OnStateChange_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ChildMemoryCoordinator_OnStateChange_Params.validate = function(messageValidator, offset) {
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


    // validate ChildMemoryCoordinator_OnStateChange_Params.state
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, MemoryState);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ChildMemoryCoordinator_OnStateChange_Params.encodedSize = codec.kStructHeaderSize + 8;

  ChildMemoryCoordinator_OnStateChange_Params.decode = function(decoder) {
    var packed;
    var val = new ChildMemoryCoordinator_OnStateChange_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.state = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  ChildMemoryCoordinator_OnStateChange_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ChildMemoryCoordinator_OnStateChange_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.state);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function ChildMemoryCoordinator_PurgeMemory_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ChildMemoryCoordinator_PurgeMemory_Params.prototype.initDefaults_ = function() {
  };
  ChildMemoryCoordinator_PurgeMemory_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ChildMemoryCoordinator_PurgeMemory_Params.generate = function(generator_) {
    var generated = new ChildMemoryCoordinator_PurgeMemory_Params;
    return generated;
  };

  ChildMemoryCoordinator_PurgeMemory_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  ChildMemoryCoordinator_PurgeMemory_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ChildMemoryCoordinator_PurgeMemory_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ChildMemoryCoordinator_PurgeMemory_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ChildMemoryCoordinator_PurgeMemory_Params.validate = function(messageValidator, offset) {
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

  ChildMemoryCoordinator_PurgeMemory_Params.encodedSize = codec.kStructHeaderSize + 0;

  ChildMemoryCoordinator_PurgeMemory_Params.decode = function(decoder) {
    var packed;
    var val = new ChildMemoryCoordinator_PurgeMemory_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  ChildMemoryCoordinator_PurgeMemory_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ChildMemoryCoordinator_PurgeMemory_Params.encodedSize);
    encoder.writeUint32(0);
  };
  var kChildMemoryCoordinator_OnStateChange_Name = 789742714;
  var kChildMemoryCoordinator_PurgeMemory_Name = 931291760;

  function ChildMemoryCoordinatorPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(ChildMemoryCoordinator,
                                                   handleOrPtrInfo);
  }

  function ChildMemoryCoordinatorAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        ChildMemoryCoordinator, associatedInterfacePtrInfo);
  }

  ChildMemoryCoordinatorAssociatedPtr.prototype =
      Object.create(ChildMemoryCoordinatorPtr.prototype);
  ChildMemoryCoordinatorAssociatedPtr.prototype.constructor =
      ChildMemoryCoordinatorAssociatedPtr;

  function ChildMemoryCoordinatorProxy(receiver) {
    this.receiver_ = receiver;
  }
  ChildMemoryCoordinatorPtr.prototype.onStateChange = function() {
    return ChildMemoryCoordinatorProxy.prototype.onStateChange
        .apply(this.ptr.getProxy(), arguments);
  };

  ChildMemoryCoordinatorProxy.prototype.onStateChange = function(state) {
    var params_ = new ChildMemoryCoordinator_OnStateChange_Params();
    params_.state = state;
    var builder = new codec.MessageV0Builder(
        kChildMemoryCoordinator_OnStateChange_Name,
        codec.align(ChildMemoryCoordinator_OnStateChange_Params.encodedSize));
    builder.encodeStruct(ChildMemoryCoordinator_OnStateChange_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  ChildMemoryCoordinatorPtr.prototype.purgeMemory = function() {
    return ChildMemoryCoordinatorProxy.prototype.purgeMemory
        .apply(this.ptr.getProxy(), arguments);
  };

  ChildMemoryCoordinatorProxy.prototype.purgeMemory = function() {
    var params_ = new ChildMemoryCoordinator_PurgeMemory_Params();
    var builder = new codec.MessageV0Builder(
        kChildMemoryCoordinator_PurgeMemory_Name,
        codec.align(ChildMemoryCoordinator_PurgeMemory_Params.encodedSize));
    builder.encodeStruct(ChildMemoryCoordinator_PurgeMemory_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function ChildMemoryCoordinatorStub(delegate) {
    this.delegate_ = delegate;
  }
  ChildMemoryCoordinatorStub.prototype.onStateChange = function(state) {
    return this.delegate_ && this.delegate_.onStateChange && this.delegate_.onStateChange(state);
  }
  ChildMemoryCoordinatorStub.prototype.purgeMemory = function() {
    return this.delegate_ && this.delegate_.purgeMemory && this.delegate_.purgeMemory();
  }

  ChildMemoryCoordinatorStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kChildMemoryCoordinator_OnStateChange_Name:
      var params = reader.decodeStruct(ChildMemoryCoordinator_OnStateChange_Params);
      this.onStateChange(params.state);
      return true;
    case kChildMemoryCoordinator_PurgeMemory_Name:
      var params = reader.decodeStruct(ChildMemoryCoordinator_PurgeMemory_Params);
      this.purgeMemory();
      return true;
    default:
      return false;
    }
  };

  ChildMemoryCoordinatorStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateChildMemoryCoordinatorRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kChildMemoryCoordinator_OnStateChange_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = ChildMemoryCoordinator_OnStateChange_Params;
      break;
      case kChildMemoryCoordinator_PurgeMemory_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = ChildMemoryCoordinator_PurgeMemory_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateChildMemoryCoordinatorResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var ChildMemoryCoordinator = {
    name: 'content.mojom.ChildMemoryCoordinator',
    kVersion: 0,
    ptrClass: ChildMemoryCoordinatorPtr,
    proxyClass: ChildMemoryCoordinatorProxy,
    stubClass: ChildMemoryCoordinatorStub,
    validateRequest: validateChildMemoryCoordinatorRequest,
    validateResponse: null,
    mojomId: 'content/common/child_memory_coordinator.mojom',
    fuzzMethods: {
      onStateChange: {
        params: ChildMemoryCoordinator_OnStateChange_Params,
      },
      purgeMemory: {
        params: ChildMemoryCoordinator_PurgeMemory_Params,
      },
    },
  };
  ChildMemoryCoordinatorStub.prototype.validator = validateChildMemoryCoordinatorRequest;
  ChildMemoryCoordinatorProxy.prototype.validator = null;
  exports.MemoryState = MemoryState;
  exports.ChildMemoryCoordinator = ChildMemoryCoordinator;
  exports.ChildMemoryCoordinatorPtr = ChildMemoryCoordinatorPtr;
  exports.ChildMemoryCoordinatorAssociatedPtr = ChildMemoryCoordinatorAssociatedPtr;
})();