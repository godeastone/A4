// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'components/arc/common/video_protected_buffer_allocator.mojom';
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
  var video_common$ =
      mojo.internal.exposeNamespace('arc.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'components/arc/common/video_common.mojom', 'video_common.mojom.js');
  }



  function VideoProtectedBufferAllocator_AllocateProtectedSharedMemory_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  VideoProtectedBufferAllocator_AllocateProtectedSharedMemory_Params.prototype.initDefaults_ = function() {
    this.handleFd = null;
    this.size = 0;
  };
  VideoProtectedBufferAllocator_AllocateProtectedSharedMemory_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  VideoProtectedBufferAllocator_AllocateProtectedSharedMemory_Params.generate = function(generator_) {
    var generated = new VideoProtectedBufferAllocator_AllocateProtectedSharedMemory_Params;
    generated.handleFd = generator_.generateHandle(false);
    generated.size = generator_.generateUint64();
    return generated;
  };

  VideoProtectedBufferAllocator_AllocateProtectedSharedMemory_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.handleFd = mutator_.mutateHandle(this.handleFd, false);
    }
    if (mutator_.chooseMutateField()) {
      this.size = mutator_.mutateUint64(this.size);
    }
    return this;
  };
  VideoProtectedBufferAllocator_AllocateProtectedSharedMemory_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.handleFd !== null) {
      Array.prototype.push.apply(handles, ["None"]);
    }
    return handles;
  };

  VideoProtectedBufferAllocator_AllocateProtectedSharedMemory_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  VideoProtectedBufferAllocator_AllocateProtectedSharedMemory_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.handleFd = handles[idx++];;
    return idx;
  };

  VideoProtectedBufferAllocator_AllocateProtectedSharedMemory_Params.validate = function(messageValidator, offset) {
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


    // validate VideoProtectedBufferAllocator_AllocateProtectedSharedMemory_Params.handleFd
    err = messageValidator.validateHandle(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  VideoProtectedBufferAllocator_AllocateProtectedSharedMemory_Params.encodedSize = codec.kStructHeaderSize + 16;

  VideoProtectedBufferAllocator_AllocateProtectedSharedMemory_Params.decode = function(decoder) {
    var packed;
    var val = new VideoProtectedBufferAllocator_AllocateProtectedSharedMemory_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.handleFd = decoder.decodeStruct(codec.Handle);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.size = decoder.decodeStruct(codec.Uint64);
    return val;
  };

  VideoProtectedBufferAllocator_AllocateProtectedSharedMemory_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(VideoProtectedBufferAllocator_AllocateProtectedSharedMemory_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Handle, val.handleFd);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.Uint64, val.size);
  };
  function VideoProtectedBufferAllocator_AllocateProtectedSharedMemory_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  VideoProtectedBufferAllocator_AllocateProtectedSharedMemory_ResponseParams.prototype.initDefaults_ = function() {
    this.result = false;
  };
  VideoProtectedBufferAllocator_AllocateProtectedSharedMemory_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  VideoProtectedBufferAllocator_AllocateProtectedSharedMemory_ResponseParams.generate = function(generator_) {
    var generated = new VideoProtectedBufferAllocator_AllocateProtectedSharedMemory_ResponseParams;
    generated.result = generator_.generateBool();
    return generated;
  };

  VideoProtectedBufferAllocator_AllocateProtectedSharedMemory_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.result = mutator_.mutateBool(this.result);
    }
    return this;
  };
  VideoProtectedBufferAllocator_AllocateProtectedSharedMemory_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  VideoProtectedBufferAllocator_AllocateProtectedSharedMemory_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  VideoProtectedBufferAllocator_AllocateProtectedSharedMemory_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  VideoProtectedBufferAllocator_AllocateProtectedSharedMemory_ResponseParams.validate = function(messageValidator, offset) {
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

  VideoProtectedBufferAllocator_AllocateProtectedSharedMemory_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  VideoProtectedBufferAllocator_AllocateProtectedSharedMemory_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new VideoProtectedBufferAllocator_AllocateProtectedSharedMemory_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.result = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  VideoProtectedBufferAllocator_AllocateProtectedSharedMemory_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(VideoProtectedBufferAllocator_AllocateProtectedSharedMemory_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.result & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function VideoProtectedBufferAllocator_AllocateProtectedNativePixmap_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  VideoProtectedBufferAllocator_AllocateProtectedNativePixmap_Params.prototype.initDefaults_ = function() {
    this.handleFd = null;
    this.pixelFormat = 0;
    this.pictureSize = null;
  };
  VideoProtectedBufferAllocator_AllocateProtectedNativePixmap_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  VideoProtectedBufferAllocator_AllocateProtectedNativePixmap_Params.generate = function(generator_) {
    var generated = new VideoProtectedBufferAllocator_AllocateProtectedNativePixmap_Params;
    generated.handleFd = generator_.generateHandle(false);
    generated.pixelFormat = generator_.generateEnum(0, 842094169);
    generated.pictureSize = generator_.generateStruct(arc.mojom.Size, false);
    return generated;
  };

  VideoProtectedBufferAllocator_AllocateProtectedNativePixmap_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.handleFd = mutator_.mutateHandle(this.handleFd, false);
    }
    if (mutator_.chooseMutateField()) {
      this.pixelFormat = mutator_.mutateEnum(this.pixelFormat, 0, 842094169);
    }
    if (mutator_.chooseMutateField()) {
      this.pictureSize = mutator_.mutateStruct(arc.mojom.Size, false);
    }
    return this;
  };
  VideoProtectedBufferAllocator_AllocateProtectedNativePixmap_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.handleFd !== null) {
      Array.prototype.push.apply(handles, ["None"]);
    }
    return handles;
  };

  VideoProtectedBufferAllocator_AllocateProtectedNativePixmap_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  VideoProtectedBufferAllocator_AllocateProtectedNativePixmap_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.handleFd = handles[idx++];;
    return idx;
  };

  VideoProtectedBufferAllocator_AllocateProtectedNativePixmap_Params.validate = function(messageValidator, offset) {
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


    // validate VideoProtectedBufferAllocator_AllocateProtectedNativePixmap_Params.handleFd
    err = messageValidator.validateHandle(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate VideoProtectedBufferAllocator_AllocateProtectedNativePixmap_Params.pixelFormat
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 4, video_common$.HalPixelFormat);
    if (err !== validator.validationError.NONE)
        return err;


    // validate VideoProtectedBufferAllocator_AllocateProtectedNativePixmap_Params.pictureSize
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, video_common$.Size, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  VideoProtectedBufferAllocator_AllocateProtectedNativePixmap_Params.encodedSize = codec.kStructHeaderSize + 16;

  VideoProtectedBufferAllocator_AllocateProtectedNativePixmap_Params.decode = function(decoder) {
    var packed;
    var val = new VideoProtectedBufferAllocator_AllocateProtectedNativePixmap_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.handleFd = decoder.decodeStruct(codec.Handle);
    val.pixelFormat = decoder.decodeStruct(codec.Int32);
    val.pictureSize = decoder.decodeStructPointer(video_common$.Size);
    return val;
  };

  VideoProtectedBufferAllocator_AllocateProtectedNativePixmap_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(VideoProtectedBufferAllocator_AllocateProtectedNativePixmap_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Handle, val.handleFd);
    encoder.encodeStruct(codec.Int32, val.pixelFormat);
    encoder.encodeStructPointer(video_common$.Size, val.pictureSize);
  };
  function VideoProtectedBufferAllocator_AllocateProtectedNativePixmap_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  VideoProtectedBufferAllocator_AllocateProtectedNativePixmap_ResponseParams.prototype.initDefaults_ = function() {
    this.result = false;
  };
  VideoProtectedBufferAllocator_AllocateProtectedNativePixmap_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  VideoProtectedBufferAllocator_AllocateProtectedNativePixmap_ResponseParams.generate = function(generator_) {
    var generated = new VideoProtectedBufferAllocator_AllocateProtectedNativePixmap_ResponseParams;
    generated.result = generator_.generateBool();
    return generated;
  };

  VideoProtectedBufferAllocator_AllocateProtectedNativePixmap_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.result = mutator_.mutateBool(this.result);
    }
    return this;
  };
  VideoProtectedBufferAllocator_AllocateProtectedNativePixmap_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  VideoProtectedBufferAllocator_AllocateProtectedNativePixmap_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  VideoProtectedBufferAllocator_AllocateProtectedNativePixmap_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  VideoProtectedBufferAllocator_AllocateProtectedNativePixmap_ResponseParams.validate = function(messageValidator, offset) {
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

  VideoProtectedBufferAllocator_AllocateProtectedNativePixmap_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  VideoProtectedBufferAllocator_AllocateProtectedNativePixmap_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new VideoProtectedBufferAllocator_AllocateProtectedNativePixmap_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.result = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  VideoProtectedBufferAllocator_AllocateProtectedNativePixmap_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(VideoProtectedBufferAllocator_AllocateProtectedNativePixmap_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.result & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function VideoProtectedBufferAllocator_ReleaseProtectedBuffer_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  VideoProtectedBufferAllocator_ReleaseProtectedBuffer_Params.prototype.initDefaults_ = function() {
    this.handleFd = null;
  };
  VideoProtectedBufferAllocator_ReleaseProtectedBuffer_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  VideoProtectedBufferAllocator_ReleaseProtectedBuffer_Params.generate = function(generator_) {
    var generated = new VideoProtectedBufferAllocator_ReleaseProtectedBuffer_Params;
    generated.handleFd = generator_.generateHandle(false);
    return generated;
  };

  VideoProtectedBufferAllocator_ReleaseProtectedBuffer_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.handleFd = mutator_.mutateHandle(this.handleFd, false);
    }
    return this;
  };
  VideoProtectedBufferAllocator_ReleaseProtectedBuffer_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.handleFd !== null) {
      Array.prototype.push.apply(handles, ["None"]);
    }
    return handles;
  };

  VideoProtectedBufferAllocator_ReleaseProtectedBuffer_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  VideoProtectedBufferAllocator_ReleaseProtectedBuffer_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.handleFd = handles[idx++];;
    return idx;
  };

  VideoProtectedBufferAllocator_ReleaseProtectedBuffer_Params.validate = function(messageValidator, offset) {
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


    // validate VideoProtectedBufferAllocator_ReleaseProtectedBuffer_Params.handleFd
    err = messageValidator.validateHandle(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  VideoProtectedBufferAllocator_ReleaseProtectedBuffer_Params.encodedSize = codec.kStructHeaderSize + 8;

  VideoProtectedBufferAllocator_ReleaseProtectedBuffer_Params.decode = function(decoder) {
    var packed;
    var val = new VideoProtectedBufferAllocator_ReleaseProtectedBuffer_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.handleFd = decoder.decodeStruct(codec.Handle);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  VideoProtectedBufferAllocator_ReleaseProtectedBuffer_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(VideoProtectedBufferAllocator_ReleaseProtectedBuffer_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Handle, val.handleFd);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  var kVideoProtectedBufferAllocator_AllocateProtectedSharedMemory_Name = 2093457920;
  var kVideoProtectedBufferAllocator_AllocateProtectedNativePixmap_Name = 1073679355;
  var kVideoProtectedBufferAllocator_ReleaseProtectedBuffer_Name = 1892124961;

  function VideoProtectedBufferAllocatorPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(VideoProtectedBufferAllocator,
                                                   handleOrPtrInfo);
  }

  function VideoProtectedBufferAllocatorAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        VideoProtectedBufferAllocator, associatedInterfacePtrInfo);
  }

  VideoProtectedBufferAllocatorAssociatedPtr.prototype =
      Object.create(VideoProtectedBufferAllocatorPtr.prototype);
  VideoProtectedBufferAllocatorAssociatedPtr.prototype.constructor =
      VideoProtectedBufferAllocatorAssociatedPtr;

  function VideoProtectedBufferAllocatorProxy(receiver) {
    this.receiver_ = receiver;
  }
  VideoProtectedBufferAllocatorPtr.prototype.allocateProtectedSharedMemory = function() {
    return VideoProtectedBufferAllocatorProxy.prototype.allocateProtectedSharedMemory
        .apply(this.ptr.getProxy(), arguments);
  };

  VideoProtectedBufferAllocatorProxy.prototype.allocateProtectedSharedMemory = function(handleFd, size) {
    var params_ = new VideoProtectedBufferAllocator_AllocateProtectedSharedMemory_Params();
    params_.handleFd = handleFd;
    params_.size = size;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kVideoProtectedBufferAllocator_AllocateProtectedSharedMemory_Name,
          codec.align(VideoProtectedBufferAllocator_AllocateProtectedSharedMemory_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(VideoProtectedBufferAllocator_AllocateProtectedSharedMemory_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(VideoProtectedBufferAllocator_AllocateProtectedSharedMemory_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  VideoProtectedBufferAllocatorPtr.prototype.allocateProtectedNativePixmap = function() {
    return VideoProtectedBufferAllocatorProxy.prototype.allocateProtectedNativePixmap
        .apply(this.ptr.getProxy(), arguments);
  };

  VideoProtectedBufferAllocatorProxy.prototype.allocateProtectedNativePixmap = function(handleFd, pixelFormat, pictureSize) {
    var params_ = new VideoProtectedBufferAllocator_AllocateProtectedNativePixmap_Params();
    params_.handleFd = handleFd;
    params_.pixelFormat = pixelFormat;
    params_.pictureSize = pictureSize;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kVideoProtectedBufferAllocator_AllocateProtectedNativePixmap_Name,
          codec.align(VideoProtectedBufferAllocator_AllocateProtectedNativePixmap_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(VideoProtectedBufferAllocator_AllocateProtectedNativePixmap_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(VideoProtectedBufferAllocator_AllocateProtectedNativePixmap_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  VideoProtectedBufferAllocatorPtr.prototype.releaseProtectedBuffer = function() {
    return VideoProtectedBufferAllocatorProxy.prototype.releaseProtectedBuffer
        .apply(this.ptr.getProxy(), arguments);
  };

  VideoProtectedBufferAllocatorProxy.prototype.releaseProtectedBuffer = function(handleFd) {
    var params_ = new VideoProtectedBufferAllocator_ReleaseProtectedBuffer_Params();
    params_.handleFd = handleFd;
    var builder = new codec.MessageV0Builder(
        kVideoProtectedBufferAllocator_ReleaseProtectedBuffer_Name,
        codec.align(VideoProtectedBufferAllocator_ReleaseProtectedBuffer_Params.encodedSize));
    builder.encodeStruct(VideoProtectedBufferAllocator_ReleaseProtectedBuffer_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function VideoProtectedBufferAllocatorStub(delegate) {
    this.delegate_ = delegate;
  }
  VideoProtectedBufferAllocatorStub.prototype.allocateProtectedSharedMemory = function(handleFd, size) {
    return this.delegate_ && this.delegate_.allocateProtectedSharedMemory && this.delegate_.allocateProtectedSharedMemory(handleFd, size);
  }
  VideoProtectedBufferAllocatorStub.prototype.allocateProtectedNativePixmap = function(handleFd, pixelFormat, pictureSize) {
    return this.delegate_ && this.delegate_.allocateProtectedNativePixmap && this.delegate_.allocateProtectedNativePixmap(handleFd, pixelFormat, pictureSize);
  }
  VideoProtectedBufferAllocatorStub.prototype.releaseProtectedBuffer = function(handleFd) {
    return this.delegate_ && this.delegate_.releaseProtectedBuffer && this.delegate_.releaseProtectedBuffer(handleFd);
  }

  VideoProtectedBufferAllocatorStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kVideoProtectedBufferAllocator_ReleaseProtectedBuffer_Name:
      var params = reader.decodeStruct(VideoProtectedBufferAllocator_ReleaseProtectedBuffer_Params);
      this.releaseProtectedBuffer(params.handleFd);
      return true;
    default:
      return false;
    }
  };

  VideoProtectedBufferAllocatorStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kVideoProtectedBufferAllocator_AllocateProtectedSharedMemory_Name:
      var params = reader.decodeStruct(VideoProtectedBufferAllocator_AllocateProtectedSharedMemory_Params);
      this.allocateProtectedSharedMemory(params.handleFd, params.size).then(function(response) {
        var responseParams =
            new VideoProtectedBufferAllocator_AllocateProtectedSharedMemory_ResponseParams();
        responseParams.result = response.result;
        var builder = new codec.MessageV1Builder(
            kVideoProtectedBufferAllocator_AllocateProtectedSharedMemory_Name,
            codec.align(VideoProtectedBufferAllocator_AllocateProtectedSharedMemory_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(VideoProtectedBufferAllocator_AllocateProtectedSharedMemory_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kVideoProtectedBufferAllocator_AllocateProtectedNativePixmap_Name:
      var params = reader.decodeStruct(VideoProtectedBufferAllocator_AllocateProtectedNativePixmap_Params);
      this.allocateProtectedNativePixmap(params.handleFd, params.pixelFormat, params.pictureSize).then(function(response) {
        var responseParams =
            new VideoProtectedBufferAllocator_AllocateProtectedNativePixmap_ResponseParams();
        responseParams.result = response.result;
        var builder = new codec.MessageV1Builder(
            kVideoProtectedBufferAllocator_AllocateProtectedNativePixmap_Name,
            codec.align(VideoProtectedBufferAllocator_AllocateProtectedNativePixmap_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(VideoProtectedBufferAllocator_AllocateProtectedNativePixmap_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    default:
      return false;
    }
  };

  function validateVideoProtectedBufferAllocatorRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kVideoProtectedBufferAllocator_AllocateProtectedSharedMemory_Name:
        if (message.expectsResponse())
          paramsClass = VideoProtectedBufferAllocator_AllocateProtectedSharedMemory_Params;
      break;
      case kVideoProtectedBufferAllocator_AllocateProtectedNativePixmap_Name:
        if (message.expectsResponse())
          paramsClass = VideoProtectedBufferAllocator_AllocateProtectedNativePixmap_Params;
      break;
      case kVideoProtectedBufferAllocator_ReleaseProtectedBuffer_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = VideoProtectedBufferAllocator_ReleaseProtectedBuffer_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateVideoProtectedBufferAllocatorResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kVideoProtectedBufferAllocator_AllocateProtectedSharedMemory_Name:
        if (message.isResponse())
          paramsClass = VideoProtectedBufferAllocator_AllocateProtectedSharedMemory_ResponseParams;
        break;
      case kVideoProtectedBufferAllocator_AllocateProtectedNativePixmap_Name:
        if (message.isResponse())
          paramsClass = VideoProtectedBufferAllocator_AllocateProtectedNativePixmap_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var VideoProtectedBufferAllocator = {
    name: 'arc.mojom.VideoProtectedBufferAllocator',
    kVersion: 0,
    ptrClass: VideoProtectedBufferAllocatorPtr,
    proxyClass: VideoProtectedBufferAllocatorProxy,
    stubClass: VideoProtectedBufferAllocatorStub,
    validateRequest: validateVideoProtectedBufferAllocatorRequest,
    validateResponse: validateVideoProtectedBufferAllocatorResponse,
    mojomId: 'components/arc/common/video_protected_buffer_allocator.mojom',
    fuzzMethods: {
      allocateProtectedSharedMemory: {
        params: VideoProtectedBufferAllocator_AllocateProtectedSharedMemory_Params,
      },
      allocateProtectedNativePixmap: {
        params: VideoProtectedBufferAllocator_AllocateProtectedNativePixmap_Params,
      },
      releaseProtectedBuffer: {
        params: VideoProtectedBufferAllocator_ReleaseProtectedBuffer_Params,
      },
    },
  };
  VideoProtectedBufferAllocatorStub.prototype.validator = validateVideoProtectedBufferAllocatorRequest;
  VideoProtectedBufferAllocatorProxy.prototype.validator = validateVideoProtectedBufferAllocatorResponse;
  exports.VideoProtectedBufferAllocator = VideoProtectedBufferAllocator;
  exports.VideoProtectedBufferAllocatorPtr = VideoProtectedBufferAllocatorPtr;
  exports.VideoProtectedBufferAllocatorAssociatedPtr = VideoProtectedBufferAllocatorAssociatedPtr;
})();