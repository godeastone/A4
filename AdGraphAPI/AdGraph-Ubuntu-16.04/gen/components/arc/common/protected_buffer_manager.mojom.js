// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'components/arc/common/protected_buffer_manager.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('arc.mojom');



  function ProtectedBufferManager_GetProtectedSharedMemoryFromHandle_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ProtectedBufferManager_GetProtectedSharedMemoryFromHandle_Params.prototype.initDefaults_ = function() {
    this.dummyHandle = null;
  };
  ProtectedBufferManager_GetProtectedSharedMemoryFromHandle_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ProtectedBufferManager_GetProtectedSharedMemoryFromHandle_Params.generate = function(generator_) {
    var generated = new ProtectedBufferManager_GetProtectedSharedMemoryFromHandle_Params;
    generated.dummyHandle = generator_.generateHandle(false);
    return generated;
  };

  ProtectedBufferManager_GetProtectedSharedMemoryFromHandle_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.dummyHandle = mutator_.mutateHandle(this.dummyHandle, false);
    }
    return this;
  };
  ProtectedBufferManager_GetProtectedSharedMemoryFromHandle_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.dummyHandle !== null) {
      Array.prototype.push.apply(handles, ["None"]);
    }
    return handles;
  };

  ProtectedBufferManager_GetProtectedSharedMemoryFromHandle_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ProtectedBufferManager_GetProtectedSharedMemoryFromHandle_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.dummyHandle = handles[idx++];;
    return idx;
  };

  ProtectedBufferManager_GetProtectedSharedMemoryFromHandle_Params.validate = function(messageValidator, offset) {
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


    // validate ProtectedBufferManager_GetProtectedSharedMemoryFromHandle_Params.dummyHandle
    err = messageValidator.validateHandle(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ProtectedBufferManager_GetProtectedSharedMemoryFromHandle_Params.encodedSize = codec.kStructHeaderSize + 8;

  ProtectedBufferManager_GetProtectedSharedMemoryFromHandle_Params.decode = function(decoder) {
    var packed;
    var val = new ProtectedBufferManager_GetProtectedSharedMemoryFromHandle_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.dummyHandle = decoder.decodeStruct(codec.Handle);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  ProtectedBufferManager_GetProtectedSharedMemoryFromHandle_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ProtectedBufferManager_GetProtectedSharedMemoryFromHandle_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Handle, val.dummyHandle);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function ProtectedBufferManager_GetProtectedSharedMemoryFromHandle_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ProtectedBufferManager_GetProtectedSharedMemoryFromHandle_ResponseParams.prototype.initDefaults_ = function() {
    this.sharedMemoryHandle = null;
  };
  ProtectedBufferManager_GetProtectedSharedMemoryFromHandle_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ProtectedBufferManager_GetProtectedSharedMemoryFromHandle_ResponseParams.generate = function(generator_) {
    var generated = new ProtectedBufferManager_GetProtectedSharedMemoryFromHandle_ResponseParams;
    generated.sharedMemoryHandle = generator_.generateHandle(false);
    return generated;
  };

  ProtectedBufferManager_GetProtectedSharedMemoryFromHandle_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.sharedMemoryHandle = mutator_.mutateHandle(this.sharedMemoryHandle, false);
    }
    return this;
  };
  ProtectedBufferManager_GetProtectedSharedMemoryFromHandle_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.sharedMemoryHandle !== null) {
      Array.prototype.push.apply(handles, ["None"]);
    }
    return handles;
  };

  ProtectedBufferManager_GetProtectedSharedMemoryFromHandle_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ProtectedBufferManager_GetProtectedSharedMemoryFromHandle_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    this.sharedMemoryHandle = handles[idx++];;
    return idx;
  };

  ProtectedBufferManager_GetProtectedSharedMemoryFromHandle_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate ProtectedBufferManager_GetProtectedSharedMemoryFromHandle_ResponseParams.sharedMemoryHandle
    err = messageValidator.validateHandle(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ProtectedBufferManager_GetProtectedSharedMemoryFromHandle_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  ProtectedBufferManager_GetProtectedSharedMemoryFromHandle_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new ProtectedBufferManager_GetProtectedSharedMemoryFromHandle_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.sharedMemoryHandle = decoder.decodeStruct(codec.Handle);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  ProtectedBufferManager_GetProtectedSharedMemoryFromHandle_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ProtectedBufferManager_GetProtectedSharedMemoryFromHandle_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Handle, val.sharedMemoryHandle);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  var kProtectedBufferManager_GetProtectedSharedMemoryFromHandle_Name = 745299217;

  function ProtectedBufferManagerPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(ProtectedBufferManager,
                                                   handleOrPtrInfo);
  }

  function ProtectedBufferManagerAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        ProtectedBufferManager, associatedInterfacePtrInfo);
  }

  ProtectedBufferManagerAssociatedPtr.prototype =
      Object.create(ProtectedBufferManagerPtr.prototype);
  ProtectedBufferManagerAssociatedPtr.prototype.constructor =
      ProtectedBufferManagerAssociatedPtr;

  function ProtectedBufferManagerProxy(receiver) {
    this.receiver_ = receiver;
  }
  ProtectedBufferManagerPtr.prototype.getProtectedSharedMemoryFromHandle = function() {
    return ProtectedBufferManagerProxy.prototype.getProtectedSharedMemoryFromHandle
        .apply(this.ptr.getProxy(), arguments);
  };

  ProtectedBufferManagerProxy.prototype.getProtectedSharedMemoryFromHandle = function(dummyHandle) {
    var params_ = new ProtectedBufferManager_GetProtectedSharedMemoryFromHandle_Params();
    params_.dummyHandle = dummyHandle;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kProtectedBufferManager_GetProtectedSharedMemoryFromHandle_Name,
          codec.align(ProtectedBufferManager_GetProtectedSharedMemoryFromHandle_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(ProtectedBufferManager_GetProtectedSharedMemoryFromHandle_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(ProtectedBufferManager_GetProtectedSharedMemoryFromHandle_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };

  function ProtectedBufferManagerStub(delegate) {
    this.delegate_ = delegate;
  }
  ProtectedBufferManagerStub.prototype.getProtectedSharedMemoryFromHandle = function(dummyHandle) {
    return this.delegate_ && this.delegate_.getProtectedSharedMemoryFromHandle && this.delegate_.getProtectedSharedMemoryFromHandle(dummyHandle);
  }

  ProtectedBufferManagerStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  ProtectedBufferManagerStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kProtectedBufferManager_GetProtectedSharedMemoryFromHandle_Name:
      var params = reader.decodeStruct(ProtectedBufferManager_GetProtectedSharedMemoryFromHandle_Params);
      this.getProtectedSharedMemoryFromHandle(params.dummyHandle).then(function(response) {
        var responseParams =
            new ProtectedBufferManager_GetProtectedSharedMemoryFromHandle_ResponseParams();
        responseParams.sharedMemoryHandle = response.sharedMemoryHandle;
        var builder = new codec.MessageV1Builder(
            kProtectedBufferManager_GetProtectedSharedMemoryFromHandle_Name,
            codec.align(ProtectedBufferManager_GetProtectedSharedMemoryFromHandle_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(ProtectedBufferManager_GetProtectedSharedMemoryFromHandle_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    default:
      return false;
    }
  };

  function validateProtectedBufferManagerRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kProtectedBufferManager_GetProtectedSharedMemoryFromHandle_Name:
        if (message.expectsResponse())
          paramsClass = ProtectedBufferManager_GetProtectedSharedMemoryFromHandle_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateProtectedBufferManagerResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kProtectedBufferManager_GetProtectedSharedMemoryFromHandle_Name:
        if (message.isResponse())
          paramsClass = ProtectedBufferManager_GetProtectedSharedMemoryFromHandle_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var ProtectedBufferManager = {
    name: 'arc.mojom.ProtectedBufferManager',
    kVersion: 0,
    ptrClass: ProtectedBufferManagerPtr,
    proxyClass: ProtectedBufferManagerProxy,
    stubClass: ProtectedBufferManagerStub,
    validateRequest: validateProtectedBufferManagerRequest,
    validateResponse: validateProtectedBufferManagerResponse,
    mojomId: 'components/arc/common/protected_buffer_manager.mojom',
    fuzzMethods: {
      getProtectedSharedMemoryFromHandle: {
        params: ProtectedBufferManager_GetProtectedSharedMemoryFromHandle_Params,
      },
    },
  };
  ProtectedBufferManagerStub.prototype.validator = validateProtectedBufferManagerRequest;
  ProtectedBufferManagerProxy.prototype.validator = validateProtectedBufferManagerResponse;
  exports.ProtectedBufferManager = ProtectedBufferManager;
  exports.ProtectedBufferManagerPtr = ProtectedBufferManagerPtr;
  exports.ProtectedBufferManagerAssociatedPtr = ProtectedBufferManagerAssociatedPtr;
})();