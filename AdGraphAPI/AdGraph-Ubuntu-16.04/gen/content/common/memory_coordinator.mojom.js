// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'content/common/memory_coordinator.mojom';
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
  var child_memory_coordinator$ =
      mojo.internal.exposeNamespace('content.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'content/common/child_memory_coordinator.mojom', 'child_memory_coordinator.mojom.js');
  }



  function MemoryCoordinatorHandle_AddChild_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  MemoryCoordinatorHandle_AddChild_Params.prototype.initDefaults_ = function() {
    this.child = new child_memory_coordinator$.ChildMemoryCoordinatorPtr();
  };
  MemoryCoordinatorHandle_AddChild_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  MemoryCoordinatorHandle_AddChild_Params.generate = function(generator_) {
    var generated = new MemoryCoordinatorHandle_AddChild_Params;
    generated.child = generator_.generateInterface("content.mojom.ChildMemoryCoordinator", false);
    return generated;
  };

  MemoryCoordinatorHandle_AddChild_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.child = mutator_.mutateInterface(this.child, "content.mojom.ChildMemoryCoordinator", false);
    }
    return this;
  };
  MemoryCoordinatorHandle_AddChild_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.child !== null) {
      Array.prototype.push.apply(handles, ["content.mojom.ChildMemoryCoordinatorPtr"]);
    }
    return handles;
  };

  MemoryCoordinatorHandle_AddChild_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  MemoryCoordinatorHandle_AddChild_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.child = handles[idx++];;
    return idx;
  };

  MemoryCoordinatorHandle_AddChild_Params.validate = function(messageValidator, offset) {
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


    // validate MemoryCoordinatorHandle_AddChild_Params.child
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 0, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  MemoryCoordinatorHandle_AddChild_Params.encodedSize = codec.kStructHeaderSize + 8;

  MemoryCoordinatorHandle_AddChild_Params.decode = function(decoder) {
    var packed;
    var val = new MemoryCoordinatorHandle_AddChild_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.child = decoder.decodeStruct(new codec.Interface(child_memory_coordinator$.ChildMemoryCoordinatorPtr));
    return val;
  };

  MemoryCoordinatorHandle_AddChild_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(MemoryCoordinatorHandle_AddChild_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(new codec.Interface(child_memory_coordinator$.ChildMemoryCoordinatorPtr), val.child);
  };
  var kMemoryCoordinatorHandle_AddChild_Name = 827910652;

  function MemoryCoordinatorHandlePtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(MemoryCoordinatorHandle,
                                                   handleOrPtrInfo);
  }

  function MemoryCoordinatorHandleAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        MemoryCoordinatorHandle, associatedInterfacePtrInfo);
  }

  MemoryCoordinatorHandleAssociatedPtr.prototype =
      Object.create(MemoryCoordinatorHandlePtr.prototype);
  MemoryCoordinatorHandleAssociatedPtr.prototype.constructor =
      MemoryCoordinatorHandleAssociatedPtr;

  function MemoryCoordinatorHandleProxy(receiver) {
    this.receiver_ = receiver;
  }
  MemoryCoordinatorHandlePtr.prototype.addChild = function() {
    return MemoryCoordinatorHandleProxy.prototype.addChild
        .apply(this.ptr.getProxy(), arguments);
  };

  MemoryCoordinatorHandleProxy.prototype.addChild = function(child) {
    var params_ = new MemoryCoordinatorHandle_AddChild_Params();
    params_.child = child;
    var builder = new codec.MessageV0Builder(
        kMemoryCoordinatorHandle_AddChild_Name,
        codec.align(MemoryCoordinatorHandle_AddChild_Params.encodedSize));
    builder.encodeStruct(MemoryCoordinatorHandle_AddChild_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function MemoryCoordinatorHandleStub(delegate) {
    this.delegate_ = delegate;
  }
  MemoryCoordinatorHandleStub.prototype.addChild = function(child) {
    return this.delegate_ && this.delegate_.addChild && this.delegate_.addChild(child);
  }

  MemoryCoordinatorHandleStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kMemoryCoordinatorHandle_AddChild_Name:
      var params = reader.decodeStruct(MemoryCoordinatorHandle_AddChild_Params);
      this.addChild(params.child);
      return true;
    default:
      return false;
    }
  };

  MemoryCoordinatorHandleStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateMemoryCoordinatorHandleRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kMemoryCoordinatorHandle_AddChild_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = MemoryCoordinatorHandle_AddChild_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateMemoryCoordinatorHandleResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var MemoryCoordinatorHandle = {
    name: 'content.mojom.MemoryCoordinatorHandle',
    kVersion: 0,
    ptrClass: MemoryCoordinatorHandlePtr,
    proxyClass: MemoryCoordinatorHandleProxy,
    stubClass: MemoryCoordinatorHandleStub,
    validateRequest: validateMemoryCoordinatorHandleRequest,
    validateResponse: null,
    mojomId: 'content/common/memory_coordinator.mojom',
    fuzzMethods: {
      addChild: {
        params: MemoryCoordinatorHandle_AddChild_Params,
      },
    },
  };
  MemoryCoordinatorHandleStub.prototype.validator = validateMemoryCoordinatorHandleRequest;
  MemoryCoordinatorHandleProxy.prototype.validator = null;
  exports.MemoryCoordinatorHandle = MemoryCoordinatorHandle;
  exports.MemoryCoordinatorHandlePtr = MemoryCoordinatorHandlePtr;
  exports.MemoryCoordinatorHandleAssociatedPtr = MemoryCoordinatorHandleAssociatedPtr;
})();