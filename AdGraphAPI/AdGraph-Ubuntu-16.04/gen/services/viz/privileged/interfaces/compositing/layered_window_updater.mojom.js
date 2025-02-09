// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'services/viz/privileged/interfaces/compositing/layered_window_updater.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('viz.mojom');
  var geometry$ =
      mojo.internal.exposeNamespace('gfx.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'ui/gfx/geometry/mojo/geometry.mojom', '../../../../../ui/gfx/geometry/mojo/geometry.mojom.js');
  }



  function LayeredWindowUpdater_OnAllocatedSharedMemory_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  LayeredWindowUpdater_OnAllocatedSharedMemory_Params.prototype.initDefaults_ = function() {
    this.pixelSize = null;
    this.scopedBufferHandle = null;
  };
  LayeredWindowUpdater_OnAllocatedSharedMemory_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  LayeredWindowUpdater_OnAllocatedSharedMemory_Params.generate = function(generator_) {
    var generated = new LayeredWindowUpdater_OnAllocatedSharedMemory_Params;
    generated.pixelSize = generator_.generateStruct(gfx.mojom.Size, false);
    generated.scopedBufferHandle = generator_.generateSharedBuffer(false);
    return generated;
  };

  LayeredWindowUpdater_OnAllocatedSharedMemory_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.pixelSize = mutator_.mutateStruct(gfx.mojom.Size, false);
    }
    if (mutator_.chooseMutateField()) {
      this.scopedBufferHandle = mutator_.mutateSharedBuffer(this.scopedBufferHandle, false);
    }
    return this;
  };
  LayeredWindowUpdater_OnAllocatedSharedMemory_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.scopedBufferHandle !== null) {
      Array.prototype.push.apply(handles, ["handle<shared_buffer>"]);
    }
    return handles;
  };

  LayeredWindowUpdater_OnAllocatedSharedMemory_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  LayeredWindowUpdater_OnAllocatedSharedMemory_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.scopedBufferHandle = handles[idx++];;
    return idx;
  };

  LayeredWindowUpdater_OnAllocatedSharedMemory_Params.validate = function(messageValidator, offset) {
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


    // validate LayeredWindowUpdater_OnAllocatedSharedMemory_Params.pixelSize
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, geometry$.Size, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate LayeredWindowUpdater_OnAllocatedSharedMemory_Params.scopedBufferHandle
    err = messageValidator.validateHandle(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  LayeredWindowUpdater_OnAllocatedSharedMemory_Params.encodedSize = codec.kStructHeaderSize + 16;

  LayeredWindowUpdater_OnAllocatedSharedMemory_Params.decode = function(decoder) {
    var packed;
    var val = new LayeredWindowUpdater_OnAllocatedSharedMemory_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.pixelSize = decoder.decodeStructPointer(geometry$.Size);
    val.scopedBufferHandle = decoder.decodeStruct(codec.Handle);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  LayeredWindowUpdater_OnAllocatedSharedMemory_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(LayeredWindowUpdater_OnAllocatedSharedMemory_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(geometry$.Size, val.pixelSize);
    encoder.encodeStruct(codec.Handle, val.scopedBufferHandle);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function LayeredWindowUpdater_Draw_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  LayeredWindowUpdater_Draw_Params.prototype.initDefaults_ = function() {
  };
  LayeredWindowUpdater_Draw_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  LayeredWindowUpdater_Draw_Params.generate = function(generator_) {
    var generated = new LayeredWindowUpdater_Draw_Params;
    return generated;
  };

  LayeredWindowUpdater_Draw_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  LayeredWindowUpdater_Draw_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  LayeredWindowUpdater_Draw_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  LayeredWindowUpdater_Draw_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  LayeredWindowUpdater_Draw_Params.validate = function(messageValidator, offset) {
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

  LayeredWindowUpdater_Draw_Params.encodedSize = codec.kStructHeaderSize + 0;

  LayeredWindowUpdater_Draw_Params.decode = function(decoder) {
    var packed;
    var val = new LayeredWindowUpdater_Draw_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  LayeredWindowUpdater_Draw_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(LayeredWindowUpdater_Draw_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function LayeredWindowUpdater_Draw_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  LayeredWindowUpdater_Draw_ResponseParams.prototype.initDefaults_ = function() {
  };
  LayeredWindowUpdater_Draw_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  LayeredWindowUpdater_Draw_ResponseParams.generate = function(generator_) {
    var generated = new LayeredWindowUpdater_Draw_ResponseParams;
    return generated;
  };

  LayeredWindowUpdater_Draw_ResponseParams.prototype.mutate = function(mutator_) {
    return this;
  };
  LayeredWindowUpdater_Draw_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  LayeredWindowUpdater_Draw_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  LayeredWindowUpdater_Draw_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  LayeredWindowUpdater_Draw_ResponseParams.validate = function(messageValidator, offset) {
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

  LayeredWindowUpdater_Draw_ResponseParams.encodedSize = codec.kStructHeaderSize + 0;

  LayeredWindowUpdater_Draw_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new LayeredWindowUpdater_Draw_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  LayeredWindowUpdater_Draw_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(LayeredWindowUpdater_Draw_ResponseParams.encodedSize);
    encoder.writeUint32(0);
  };
  var kLayeredWindowUpdater_OnAllocatedSharedMemory_Name = 1964789128;
  var kLayeredWindowUpdater_Draw_Name = 198322980;

  function LayeredWindowUpdaterPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(LayeredWindowUpdater,
                                                   handleOrPtrInfo);
  }

  function LayeredWindowUpdaterAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        LayeredWindowUpdater, associatedInterfacePtrInfo);
  }

  LayeredWindowUpdaterAssociatedPtr.prototype =
      Object.create(LayeredWindowUpdaterPtr.prototype);
  LayeredWindowUpdaterAssociatedPtr.prototype.constructor =
      LayeredWindowUpdaterAssociatedPtr;

  function LayeredWindowUpdaterProxy(receiver) {
    this.receiver_ = receiver;
  }
  LayeredWindowUpdaterPtr.prototype.onAllocatedSharedMemory = function() {
    return LayeredWindowUpdaterProxy.prototype.onAllocatedSharedMemory
        .apply(this.ptr.getProxy(), arguments);
  };

  LayeredWindowUpdaterProxy.prototype.onAllocatedSharedMemory = function(pixelSize, scopedBufferHandle) {
    var params_ = new LayeredWindowUpdater_OnAllocatedSharedMemory_Params();
    params_.pixelSize = pixelSize;
    params_.scopedBufferHandle = scopedBufferHandle;
    var builder = new codec.MessageV0Builder(
        kLayeredWindowUpdater_OnAllocatedSharedMemory_Name,
        codec.align(LayeredWindowUpdater_OnAllocatedSharedMemory_Params.encodedSize));
    builder.encodeStruct(LayeredWindowUpdater_OnAllocatedSharedMemory_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  LayeredWindowUpdaterPtr.prototype.draw = function() {
    return LayeredWindowUpdaterProxy.prototype.draw
        .apply(this.ptr.getProxy(), arguments);
  };

  LayeredWindowUpdaterProxy.prototype.draw = function() {
    var params_ = new LayeredWindowUpdater_Draw_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kLayeredWindowUpdater_Draw_Name,
          codec.align(LayeredWindowUpdater_Draw_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(LayeredWindowUpdater_Draw_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(LayeredWindowUpdater_Draw_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };

  function LayeredWindowUpdaterStub(delegate) {
    this.delegate_ = delegate;
  }
  LayeredWindowUpdaterStub.prototype.onAllocatedSharedMemory = function(pixelSize, scopedBufferHandle) {
    return this.delegate_ && this.delegate_.onAllocatedSharedMemory && this.delegate_.onAllocatedSharedMemory(pixelSize, scopedBufferHandle);
  }
  LayeredWindowUpdaterStub.prototype.draw = function() {
    return this.delegate_ && this.delegate_.draw && this.delegate_.draw();
  }

  LayeredWindowUpdaterStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kLayeredWindowUpdater_OnAllocatedSharedMemory_Name:
      var params = reader.decodeStruct(LayeredWindowUpdater_OnAllocatedSharedMemory_Params);
      this.onAllocatedSharedMemory(params.pixelSize, params.scopedBufferHandle);
      return true;
    default:
      return false;
    }
  };

  LayeredWindowUpdaterStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kLayeredWindowUpdater_Draw_Name:
      var params = reader.decodeStruct(LayeredWindowUpdater_Draw_Params);
      this.draw().then(function(response) {
        var responseParams =
            new LayeredWindowUpdater_Draw_ResponseParams();
        var builder = new codec.MessageV1Builder(
            kLayeredWindowUpdater_Draw_Name,
            codec.align(LayeredWindowUpdater_Draw_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(LayeredWindowUpdater_Draw_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    default:
      return false;
    }
  };

  function validateLayeredWindowUpdaterRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kLayeredWindowUpdater_OnAllocatedSharedMemory_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = LayeredWindowUpdater_OnAllocatedSharedMemory_Params;
      break;
      case kLayeredWindowUpdater_Draw_Name:
        if (message.expectsResponse())
          paramsClass = LayeredWindowUpdater_Draw_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateLayeredWindowUpdaterResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kLayeredWindowUpdater_Draw_Name:
        if (message.isResponse())
          paramsClass = LayeredWindowUpdater_Draw_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var LayeredWindowUpdater = {
    name: 'viz.mojom.LayeredWindowUpdater',
    kVersion: 0,
    ptrClass: LayeredWindowUpdaterPtr,
    proxyClass: LayeredWindowUpdaterProxy,
    stubClass: LayeredWindowUpdaterStub,
    validateRequest: validateLayeredWindowUpdaterRequest,
    validateResponse: validateLayeredWindowUpdaterResponse,
    mojomId: 'services/viz/privileged/interfaces/compositing/layered_window_updater.mojom',
    fuzzMethods: {
      onAllocatedSharedMemory: {
        params: LayeredWindowUpdater_OnAllocatedSharedMemory_Params,
      },
      draw: {
        params: LayeredWindowUpdater_Draw_Params,
      },
    },
  };
  LayeredWindowUpdaterStub.prototype.validator = validateLayeredWindowUpdaterRequest;
  LayeredWindowUpdaterProxy.prototype.validator = validateLayeredWindowUpdaterResponse;
  exports.LayeredWindowUpdater = LayeredWindowUpdater;
  exports.LayeredWindowUpdaterPtr = LayeredWindowUpdaterPtr;
  exports.LayeredWindowUpdaterAssociatedPtr = LayeredWindowUpdaterAssociatedPtr;
})();