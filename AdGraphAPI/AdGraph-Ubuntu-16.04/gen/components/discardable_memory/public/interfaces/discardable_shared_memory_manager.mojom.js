// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'components/discardable_memory/public/interfaces/discardable_shared_memory_manager.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('discardableMemory.mojom');
  var shared_memory$ =
      mojo.internal.exposeNamespace('mojoBase.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'mojo/public/mojom/base/shared_memory.mojom', '../../../../mojo/public/mojom/base/shared_memory.mojom.js');
  }



  function DiscardableSharedMemoryManager_AllocateLockedDiscardableSharedMemory_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  DiscardableSharedMemoryManager_AllocateLockedDiscardableSharedMemory_Params.prototype.initDefaults_ = function() {
    this.size = 0;
    this.id = 0;
  };
  DiscardableSharedMemoryManager_AllocateLockedDiscardableSharedMemory_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  DiscardableSharedMemoryManager_AllocateLockedDiscardableSharedMemory_Params.generate = function(generator_) {
    var generated = new DiscardableSharedMemoryManager_AllocateLockedDiscardableSharedMemory_Params;
    generated.size = generator_.generateUint32();
    generated.id = generator_.generateInt32();
    return generated;
  };

  DiscardableSharedMemoryManager_AllocateLockedDiscardableSharedMemory_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.size = mutator_.mutateUint32(this.size);
    }
    if (mutator_.chooseMutateField()) {
      this.id = mutator_.mutateInt32(this.id);
    }
    return this;
  };
  DiscardableSharedMemoryManager_AllocateLockedDiscardableSharedMemory_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  DiscardableSharedMemoryManager_AllocateLockedDiscardableSharedMemory_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  DiscardableSharedMemoryManager_AllocateLockedDiscardableSharedMemory_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  DiscardableSharedMemoryManager_AllocateLockedDiscardableSharedMemory_Params.validate = function(messageValidator, offset) {
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

  DiscardableSharedMemoryManager_AllocateLockedDiscardableSharedMemory_Params.encodedSize = codec.kStructHeaderSize + 8;

  DiscardableSharedMemoryManager_AllocateLockedDiscardableSharedMemory_Params.decode = function(decoder) {
    var packed;
    var val = new DiscardableSharedMemoryManager_AllocateLockedDiscardableSharedMemory_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.size = decoder.decodeStruct(codec.Uint32);
    val.id = decoder.decodeStruct(codec.Int32);
    return val;
  };

  DiscardableSharedMemoryManager_AllocateLockedDiscardableSharedMemory_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(DiscardableSharedMemoryManager_AllocateLockedDiscardableSharedMemory_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint32, val.size);
    encoder.encodeStruct(codec.Int32, val.id);
  };
  function DiscardableSharedMemoryManager_AllocateLockedDiscardableSharedMemory_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  DiscardableSharedMemoryManager_AllocateLockedDiscardableSharedMemory_ResponseParams.prototype.initDefaults_ = function() {
    this.region = null;
  };
  DiscardableSharedMemoryManager_AllocateLockedDiscardableSharedMemory_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  DiscardableSharedMemoryManager_AllocateLockedDiscardableSharedMemory_ResponseParams.generate = function(generator_) {
    var generated = new DiscardableSharedMemoryManager_AllocateLockedDiscardableSharedMemory_ResponseParams;
    generated.region = generator_.generateStruct(mojoBase.mojom.UnsafeSharedMemoryRegion, false);
    return generated;
  };

  DiscardableSharedMemoryManager_AllocateLockedDiscardableSharedMemory_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.region = mutator_.mutateStruct(mojoBase.mojom.UnsafeSharedMemoryRegion, false);
    }
    return this;
  };
  DiscardableSharedMemoryManager_AllocateLockedDiscardableSharedMemory_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.region !== null) {
      Array.prototype.push.apply(handles, this.region.getHandleDeps());
    }
    return handles;
  };

  DiscardableSharedMemoryManager_AllocateLockedDiscardableSharedMemory_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  DiscardableSharedMemoryManager_AllocateLockedDiscardableSharedMemory_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    idx = this.region.setHandlesInternal_(handles, idx);
    return idx;
  };

  DiscardableSharedMemoryManager_AllocateLockedDiscardableSharedMemory_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate DiscardableSharedMemoryManager_AllocateLockedDiscardableSharedMemory_ResponseParams.region
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, shared_memory$.UnsafeSharedMemoryRegion, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  DiscardableSharedMemoryManager_AllocateLockedDiscardableSharedMemory_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  DiscardableSharedMemoryManager_AllocateLockedDiscardableSharedMemory_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new DiscardableSharedMemoryManager_AllocateLockedDiscardableSharedMemory_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.region = decoder.decodeStructPointer(shared_memory$.UnsafeSharedMemoryRegion);
    return val;
  };

  DiscardableSharedMemoryManager_AllocateLockedDiscardableSharedMemory_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(DiscardableSharedMemoryManager_AllocateLockedDiscardableSharedMemory_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(shared_memory$.UnsafeSharedMemoryRegion, val.region);
  };
  function DiscardableSharedMemoryManager_DeletedDiscardableSharedMemory_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  DiscardableSharedMemoryManager_DeletedDiscardableSharedMemory_Params.prototype.initDefaults_ = function() {
    this.id = 0;
  };
  DiscardableSharedMemoryManager_DeletedDiscardableSharedMemory_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  DiscardableSharedMemoryManager_DeletedDiscardableSharedMemory_Params.generate = function(generator_) {
    var generated = new DiscardableSharedMemoryManager_DeletedDiscardableSharedMemory_Params;
    generated.id = generator_.generateInt32();
    return generated;
  };

  DiscardableSharedMemoryManager_DeletedDiscardableSharedMemory_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.id = mutator_.mutateInt32(this.id);
    }
    return this;
  };
  DiscardableSharedMemoryManager_DeletedDiscardableSharedMemory_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  DiscardableSharedMemoryManager_DeletedDiscardableSharedMemory_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  DiscardableSharedMemoryManager_DeletedDiscardableSharedMemory_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  DiscardableSharedMemoryManager_DeletedDiscardableSharedMemory_Params.validate = function(messageValidator, offset) {
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

  DiscardableSharedMemoryManager_DeletedDiscardableSharedMemory_Params.encodedSize = codec.kStructHeaderSize + 8;

  DiscardableSharedMemoryManager_DeletedDiscardableSharedMemory_Params.decode = function(decoder) {
    var packed;
    var val = new DiscardableSharedMemoryManager_DeletedDiscardableSharedMemory_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.id = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  DiscardableSharedMemoryManager_DeletedDiscardableSharedMemory_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(DiscardableSharedMemoryManager_DeletedDiscardableSharedMemory_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.id);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  var kDiscardableSharedMemoryManager_AllocateLockedDiscardableSharedMemory_Name = 1442282644;
  var kDiscardableSharedMemoryManager_DeletedDiscardableSharedMemory_Name = 1121171860;

  function DiscardableSharedMemoryManagerPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(DiscardableSharedMemoryManager,
                                                   handleOrPtrInfo);
  }

  function DiscardableSharedMemoryManagerAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        DiscardableSharedMemoryManager, associatedInterfacePtrInfo);
  }

  DiscardableSharedMemoryManagerAssociatedPtr.prototype =
      Object.create(DiscardableSharedMemoryManagerPtr.prototype);
  DiscardableSharedMemoryManagerAssociatedPtr.prototype.constructor =
      DiscardableSharedMemoryManagerAssociatedPtr;

  function DiscardableSharedMemoryManagerProxy(receiver) {
    this.receiver_ = receiver;
  }
  DiscardableSharedMemoryManagerPtr.prototype.allocateLockedDiscardableSharedMemory = function() {
    return DiscardableSharedMemoryManagerProxy.prototype.allocateLockedDiscardableSharedMemory
        .apply(this.ptr.getProxy(), arguments);
  };

  DiscardableSharedMemoryManagerProxy.prototype.allocateLockedDiscardableSharedMemory = function(size, id) {
    var params_ = new DiscardableSharedMemoryManager_AllocateLockedDiscardableSharedMemory_Params();
    params_.size = size;
    params_.id = id;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kDiscardableSharedMemoryManager_AllocateLockedDiscardableSharedMemory_Name,
          codec.align(DiscardableSharedMemoryManager_AllocateLockedDiscardableSharedMemory_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(DiscardableSharedMemoryManager_AllocateLockedDiscardableSharedMemory_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(DiscardableSharedMemoryManager_AllocateLockedDiscardableSharedMemory_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  DiscardableSharedMemoryManagerPtr.prototype.deletedDiscardableSharedMemory = function() {
    return DiscardableSharedMemoryManagerProxy.prototype.deletedDiscardableSharedMemory
        .apply(this.ptr.getProxy(), arguments);
  };

  DiscardableSharedMemoryManagerProxy.prototype.deletedDiscardableSharedMemory = function(id) {
    var params_ = new DiscardableSharedMemoryManager_DeletedDiscardableSharedMemory_Params();
    params_.id = id;
    var builder = new codec.MessageV0Builder(
        kDiscardableSharedMemoryManager_DeletedDiscardableSharedMemory_Name,
        codec.align(DiscardableSharedMemoryManager_DeletedDiscardableSharedMemory_Params.encodedSize));
    builder.encodeStruct(DiscardableSharedMemoryManager_DeletedDiscardableSharedMemory_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function DiscardableSharedMemoryManagerStub(delegate) {
    this.delegate_ = delegate;
  }
  DiscardableSharedMemoryManagerStub.prototype.allocateLockedDiscardableSharedMemory = function(size, id) {
    return this.delegate_ && this.delegate_.allocateLockedDiscardableSharedMemory && this.delegate_.allocateLockedDiscardableSharedMemory(size, id);
  }
  DiscardableSharedMemoryManagerStub.prototype.deletedDiscardableSharedMemory = function(id) {
    return this.delegate_ && this.delegate_.deletedDiscardableSharedMemory && this.delegate_.deletedDiscardableSharedMemory(id);
  }

  DiscardableSharedMemoryManagerStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kDiscardableSharedMemoryManager_DeletedDiscardableSharedMemory_Name:
      var params = reader.decodeStruct(DiscardableSharedMemoryManager_DeletedDiscardableSharedMemory_Params);
      this.deletedDiscardableSharedMemory(params.id);
      return true;
    default:
      return false;
    }
  };

  DiscardableSharedMemoryManagerStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kDiscardableSharedMemoryManager_AllocateLockedDiscardableSharedMemory_Name:
      var params = reader.decodeStruct(DiscardableSharedMemoryManager_AllocateLockedDiscardableSharedMemory_Params);
      this.allocateLockedDiscardableSharedMemory(params.size, params.id).then(function(response) {
        var responseParams =
            new DiscardableSharedMemoryManager_AllocateLockedDiscardableSharedMemory_ResponseParams();
        responseParams.region = response.region;
        var builder = new codec.MessageV1Builder(
            kDiscardableSharedMemoryManager_AllocateLockedDiscardableSharedMemory_Name,
            codec.align(DiscardableSharedMemoryManager_AllocateLockedDiscardableSharedMemory_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(DiscardableSharedMemoryManager_AllocateLockedDiscardableSharedMemory_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    default:
      return false;
    }
  };

  function validateDiscardableSharedMemoryManagerRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kDiscardableSharedMemoryManager_AllocateLockedDiscardableSharedMemory_Name:
        if (message.expectsResponse())
          paramsClass = DiscardableSharedMemoryManager_AllocateLockedDiscardableSharedMemory_Params;
      break;
      case kDiscardableSharedMemoryManager_DeletedDiscardableSharedMemory_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = DiscardableSharedMemoryManager_DeletedDiscardableSharedMemory_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateDiscardableSharedMemoryManagerResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kDiscardableSharedMemoryManager_AllocateLockedDiscardableSharedMemory_Name:
        if (message.isResponse())
          paramsClass = DiscardableSharedMemoryManager_AllocateLockedDiscardableSharedMemory_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var DiscardableSharedMemoryManager = {
    name: 'discardable_memory.mojom.DiscardableSharedMemoryManager',
    kVersion: 0,
    ptrClass: DiscardableSharedMemoryManagerPtr,
    proxyClass: DiscardableSharedMemoryManagerProxy,
    stubClass: DiscardableSharedMemoryManagerStub,
    validateRequest: validateDiscardableSharedMemoryManagerRequest,
    validateResponse: validateDiscardableSharedMemoryManagerResponse,
    mojomId: 'components/discardable_memory/public/interfaces/discardable_shared_memory_manager.mojom',
    fuzzMethods: {
      allocateLockedDiscardableSharedMemory: {
        params: DiscardableSharedMemoryManager_AllocateLockedDiscardableSharedMemory_Params,
      },
      deletedDiscardableSharedMemory: {
        params: DiscardableSharedMemoryManager_DeletedDiscardableSharedMemory_Params,
      },
    },
  };
  DiscardableSharedMemoryManagerStub.prototype.validator = validateDiscardableSharedMemoryManagerRequest;
  DiscardableSharedMemoryManagerProxy.prototype.validator = validateDiscardableSharedMemoryManagerResponse;
  exports.DiscardableSharedMemoryManager = DiscardableSharedMemoryManager;
  exports.DiscardableSharedMemoryManagerPtr = DiscardableSharedMemoryManagerPtr;
  exports.DiscardableSharedMemoryManagerAssociatedPtr = DiscardableSharedMemoryManagerAssociatedPtr;
})();