// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'services/video_capture/public/mojom/virtual_device.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('videoCapture.mojom');
  var video_capture_types$ =
      mojo.internal.exposeNamespace('media.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'media/capture/mojom/video_capture_types.mojom', '../../../../media/capture/mojom/video_capture_types.mojom.js');
  }
  var producer$ =
      mojo.internal.exposeNamespace('videoCapture.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'services/video_capture/public/mojom/producer.mojom', 'producer.mojom.js');
  }
  var scoped_access_permission$ =
      mojo.internal.exposeNamespace('videoCapture.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'services/video_capture/public/mojom/scoped_access_permission.mojom', 'scoped_access_permission.mojom.js');
  }
  var geometry$ =
      mojo.internal.exposeNamespace('gfx.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'ui/gfx/geometry/mojo/geometry.mojom', '../../../../ui/gfx/geometry/mojo/geometry.mojom.js');
  }



  function SharedMemoryVirtualDevice_RequestFrameBuffer_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  SharedMemoryVirtualDevice_RequestFrameBuffer_Params.prototype.initDefaults_ = function() {
    this.dimension = null;
    this.pixelFormat = 0;
  };
  SharedMemoryVirtualDevice_RequestFrameBuffer_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  SharedMemoryVirtualDevice_RequestFrameBuffer_Params.generate = function(generator_) {
    var generated = new SharedMemoryVirtualDevice_RequestFrameBuffer_Params;
    generated.dimension = generator_.generateStruct(gfx.mojom.Size, false);
    generated.pixelFormat = generator_.generateEnum(0, 2);
    return generated;
  };

  SharedMemoryVirtualDevice_RequestFrameBuffer_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.dimension = mutator_.mutateStruct(gfx.mojom.Size, false);
    }
    if (mutator_.chooseMutateField()) {
      this.pixelFormat = mutator_.mutateEnum(this.pixelFormat, 0, 2);
    }
    return this;
  };
  SharedMemoryVirtualDevice_RequestFrameBuffer_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  SharedMemoryVirtualDevice_RequestFrameBuffer_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  SharedMemoryVirtualDevice_RequestFrameBuffer_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  SharedMemoryVirtualDevice_RequestFrameBuffer_Params.validate = function(messageValidator, offset) {
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


    // validate SharedMemoryVirtualDevice_RequestFrameBuffer_Params.dimension
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, geometry$.Size, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate SharedMemoryVirtualDevice_RequestFrameBuffer_Params.pixelFormat
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 8, video_capture_types$.VideoCapturePixelFormat);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  SharedMemoryVirtualDevice_RequestFrameBuffer_Params.encodedSize = codec.kStructHeaderSize + 16;

  SharedMemoryVirtualDevice_RequestFrameBuffer_Params.decode = function(decoder) {
    var packed;
    var val = new SharedMemoryVirtualDevice_RequestFrameBuffer_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.dimension = decoder.decodeStructPointer(geometry$.Size);
    val.pixelFormat = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  SharedMemoryVirtualDevice_RequestFrameBuffer_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(SharedMemoryVirtualDevice_RequestFrameBuffer_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(geometry$.Size, val.dimension);
    encoder.encodeStruct(codec.Int32, val.pixelFormat);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function SharedMemoryVirtualDevice_RequestFrameBuffer_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  SharedMemoryVirtualDevice_RequestFrameBuffer_ResponseParams.prototype.initDefaults_ = function() {
    this.bufferId = 0;
  };
  SharedMemoryVirtualDevice_RequestFrameBuffer_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  SharedMemoryVirtualDevice_RequestFrameBuffer_ResponseParams.generate = function(generator_) {
    var generated = new SharedMemoryVirtualDevice_RequestFrameBuffer_ResponseParams;
    generated.bufferId = generator_.generateInt32();
    return generated;
  };

  SharedMemoryVirtualDevice_RequestFrameBuffer_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.bufferId = mutator_.mutateInt32(this.bufferId);
    }
    return this;
  };
  SharedMemoryVirtualDevice_RequestFrameBuffer_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  SharedMemoryVirtualDevice_RequestFrameBuffer_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  SharedMemoryVirtualDevice_RequestFrameBuffer_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  SharedMemoryVirtualDevice_RequestFrameBuffer_ResponseParams.validate = function(messageValidator, offset) {
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

  SharedMemoryVirtualDevice_RequestFrameBuffer_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  SharedMemoryVirtualDevice_RequestFrameBuffer_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new SharedMemoryVirtualDevice_RequestFrameBuffer_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.bufferId = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  SharedMemoryVirtualDevice_RequestFrameBuffer_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(SharedMemoryVirtualDevice_RequestFrameBuffer_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.bufferId);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function SharedMemoryVirtualDevice_OnFrameReadyInBuffer_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  SharedMemoryVirtualDevice_OnFrameReadyInBuffer_Params.prototype.initDefaults_ = function() {
    this.bufferId = 0;
    this.frameInfo = null;
  };
  SharedMemoryVirtualDevice_OnFrameReadyInBuffer_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  SharedMemoryVirtualDevice_OnFrameReadyInBuffer_Params.generate = function(generator_) {
    var generated = new SharedMemoryVirtualDevice_OnFrameReadyInBuffer_Params;
    generated.bufferId = generator_.generateInt32();
    generated.frameInfo = generator_.generateStruct(media.mojom.VideoFrameInfo, false);
    return generated;
  };

  SharedMemoryVirtualDevice_OnFrameReadyInBuffer_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.bufferId = mutator_.mutateInt32(this.bufferId);
    }
    if (mutator_.chooseMutateField()) {
      this.frameInfo = mutator_.mutateStruct(media.mojom.VideoFrameInfo, false);
    }
    return this;
  };
  SharedMemoryVirtualDevice_OnFrameReadyInBuffer_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  SharedMemoryVirtualDevice_OnFrameReadyInBuffer_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  SharedMemoryVirtualDevice_OnFrameReadyInBuffer_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  SharedMemoryVirtualDevice_OnFrameReadyInBuffer_Params.validate = function(messageValidator, offset) {
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



    // validate SharedMemoryVirtualDevice_OnFrameReadyInBuffer_Params.frameInfo
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, video_capture_types$.VideoFrameInfo, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  SharedMemoryVirtualDevice_OnFrameReadyInBuffer_Params.encodedSize = codec.kStructHeaderSize + 16;

  SharedMemoryVirtualDevice_OnFrameReadyInBuffer_Params.decode = function(decoder) {
    var packed;
    var val = new SharedMemoryVirtualDevice_OnFrameReadyInBuffer_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.bufferId = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.frameInfo = decoder.decodeStructPointer(video_capture_types$.VideoFrameInfo);
    return val;
  };

  SharedMemoryVirtualDevice_OnFrameReadyInBuffer_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(SharedMemoryVirtualDevice_OnFrameReadyInBuffer_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.bufferId);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(video_capture_types$.VideoFrameInfo, val.frameInfo);
  };
  function TextureVirtualDevice_OnNewMailboxHolderBufferHandle_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  TextureVirtualDevice_OnNewMailboxHolderBufferHandle_Params.prototype.initDefaults_ = function() {
    this.bufferId = 0;
    this.mailboxHandles = null;
  };
  TextureVirtualDevice_OnNewMailboxHolderBufferHandle_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  TextureVirtualDevice_OnNewMailboxHolderBufferHandle_Params.generate = function(generator_) {
    var generated = new TextureVirtualDevice_OnNewMailboxHolderBufferHandle_Params;
    generated.bufferId = generator_.generateInt32();
    generated.mailboxHandles = generator_.generateStruct(media.mojom.MailboxBufferHandleSet, false);
    return generated;
  };

  TextureVirtualDevice_OnNewMailboxHolderBufferHandle_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.bufferId = mutator_.mutateInt32(this.bufferId);
    }
    if (mutator_.chooseMutateField()) {
      this.mailboxHandles = mutator_.mutateStruct(media.mojom.MailboxBufferHandleSet, false);
    }
    return this;
  };
  TextureVirtualDevice_OnNewMailboxHolderBufferHandle_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  TextureVirtualDevice_OnNewMailboxHolderBufferHandle_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  TextureVirtualDevice_OnNewMailboxHolderBufferHandle_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  TextureVirtualDevice_OnNewMailboxHolderBufferHandle_Params.validate = function(messageValidator, offset) {
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



    // validate TextureVirtualDevice_OnNewMailboxHolderBufferHandle_Params.mailboxHandles
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, video_capture_types$.MailboxBufferHandleSet, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  TextureVirtualDevice_OnNewMailboxHolderBufferHandle_Params.encodedSize = codec.kStructHeaderSize + 16;

  TextureVirtualDevice_OnNewMailboxHolderBufferHandle_Params.decode = function(decoder) {
    var packed;
    var val = new TextureVirtualDevice_OnNewMailboxHolderBufferHandle_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.bufferId = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.mailboxHandles = decoder.decodeStructPointer(video_capture_types$.MailboxBufferHandleSet);
    return val;
  };

  TextureVirtualDevice_OnNewMailboxHolderBufferHandle_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(TextureVirtualDevice_OnNewMailboxHolderBufferHandle_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.bufferId);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(video_capture_types$.MailboxBufferHandleSet, val.mailboxHandles);
  };
  function TextureVirtualDevice_OnFrameReadyInBuffer_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  TextureVirtualDevice_OnFrameReadyInBuffer_Params.prototype.initDefaults_ = function() {
    this.bufferId = 0;
    this.accessPermission = new scoped_access_permission$.ScopedAccessPermissionPtr();
    this.frameInfo = null;
  };
  TextureVirtualDevice_OnFrameReadyInBuffer_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  TextureVirtualDevice_OnFrameReadyInBuffer_Params.generate = function(generator_) {
    var generated = new TextureVirtualDevice_OnFrameReadyInBuffer_Params;
    generated.bufferId = generator_.generateInt32();
    generated.accessPermission = generator_.generateInterface("videoCapture.mojom.ScopedAccessPermission", false);
    generated.frameInfo = generator_.generateStruct(media.mojom.VideoFrameInfo, false);
    return generated;
  };

  TextureVirtualDevice_OnFrameReadyInBuffer_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.bufferId = mutator_.mutateInt32(this.bufferId);
    }
    if (mutator_.chooseMutateField()) {
      this.accessPermission = mutator_.mutateInterface(this.accessPermission, "videoCapture.mojom.ScopedAccessPermission", false);
    }
    if (mutator_.chooseMutateField()) {
      this.frameInfo = mutator_.mutateStruct(media.mojom.VideoFrameInfo, false);
    }
    return this;
  };
  TextureVirtualDevice_OnFrameReadyInBuffer_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.accessPermission !== null) {
      Array.prototype.push.apply(handles, ["videoCapture.mojom.ScopedAccessPermissionPtr"]);
    }
    return handles;
  };

  TextureVirtualDevice_OnFrameReadyInBuffer_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  TextureVirtualDevice_OnFrameReadyInBuffer_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.accessPermission = handles[idx++];;
    return idx;
  };

  TextureVirtualDevice_OnFrameReadyInBuffer_Params.validate = function(messageValidator, offset) {
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



    // validate TextureVirtualDevice_OnFrameReadyInBuffer_Params.accessPermission
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 4, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate TextureVirtualDevice_OnFrameReadyInBuffer_Params.frameInfo
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, video_capture_types$.VideoFrameInfo, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  TextureVirtualDevice_OnFrameReadyInBuffer_Params.encodedSize = codec.kStructHeaderSize + 24;

  TextureVirtualDevice_OnFrameReadyInBuffer_Params.decode = function(decoder) {
    var packed;
    var val = new TextureVirtualDevice_OnFrameReadyInBuffer_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.bufferId = decoder.decodeStruct(codec.Int32);
    val.accessPermission = decoder.decodeStruct(new codec.Interface(scoped_access_permission$.ScopedAccessPermissionPtr));
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.frameInfo = decoder.decodeStructPointer(video_capture_types$.VideoFrameInfo);
    return val;
  };

  TextureVirtualDevice_OnFrameReadyInBuffer_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(TextureVirtualDevice_OnFrameReadyInBuffer_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.bufferId);
    encoder.encodeStruct(new codec.Interface(scoped_access_permission$.ScopedAccessPermissionPtr), val.accessPermission);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(video_capture_types$.VideoFrameInfo, val.frameInfo);
  };
  function TextureVirtualDevice_OnBufferRetired_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  TextureVirtualDevice_OnBufferRetired_Params.prototype.initDefaults_ = function() {
    this.bufferId = 0;
  };
  TextureVirtualDevice_OnBufferRetired_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  TextureVirtualDevice_OnBufferRetired_Params.generate = function(generator_) {
    var generated = new TextureVirtualDevice_OnBufferRetired_Params;
    generated.bufferId = generator_.generateInt32();
    return generated;
  };

  TextureVirtualDevice_OnBufferRetired_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.bufferId = mutator_.mutateInt32(this.bufferId);
    }
    return this;
  };
  TextureVirtualDevice_OnBufferRetired_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  TextureVirtualDevice_OnBufferRetired_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  TextureVirtualDevice_OnBufferRetired_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  TextureVirtualDevice_OnBufferRetired_Params.validate = function(messageValidator, offset) {
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

  TextureVirtualDevice_OnBufferRetired_Params.encodedSize = codec.kStructHeaderSize + 8;

  TextureVirtualDevice_OnBufferRetired_Params.decode = function(decoder) {
    var packed;
    var val = new TextureVirtualDevice_OnBufferRetired_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.bufferId = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  TextureVirtualDevice_OnBufferRetired_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(TextureVirtualDevice_OnBufferRetired_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.bufferId);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  var kSharedMemoryVirtualDevice_RequestFrameBuffer_Name = 1389501555;
  var kSharedMemoryVirtualDevice_OnFrameReadyInBuffer_Name = 1274422974;

  function SharedMemoryVirtualDevicePtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(SharedMemoryVirtualDevice,
                                                   handleOrPtrInfo);
  }

  function SharedMemoryVirtualDeviceAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        SharedMemoryVirtualDevice, associatedInterfacePtrInfo);
  }

  SharedMemoryVirtualDeviceAssociatedPtr.prototype =
      Object.create(SharedMemoryVirtualDevicePtr.prototype);
  SharedMemoryVirtualDeviceAssociatedPtr.prototype.constructor =
      SharedMemoryVirtualDeviceAssociatedPtr;

  function SharedMemoryVirtualDeviceProxy(receiver) {
    this.receiver_ = receiver;
  }
  SharedMemoryVirtualDevicePtr.prototype.requestFrameBuffer = function() {
    return SharedMemoryVirtualDeviceProxy.prototype.requestFrameBuffer
        .apply(this.ptr.getProxy(), arguments);
  };

  SharedMemoryVirtualDeviceProxy.prototype.requestFrameBuffer = function(dimension, pixelFormat) {
    var params_ = new SharedMemoryVirtualDevice_RequestFrameBuffer_Params();
    params_.dimension = dimension;
    params_.pixelFormat = pixelFormat;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kSharedMemoryVirtualDevice_RequestFrameBuffer_Name,
          codec.align(SharedMemoryVirtualDevice_RequestFrameBuffer_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(SharedMemoryVirtualDevice_RequestFrameBuffer_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(SharedMemoryVirtualDevice_RequestFrameBuffer_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  SharedMemoryVirtualDevicePtr.prototype.onFrameReadyInBuffer = function() {
    return SharedMemoryVirtualDeviceProxy.prototype.onFrameReadyInBuffer
        .apply(this.ptr.getProxy(), arguments);
  };

  SharedMemoryVirtualDeviceProxy.prototype.onFrameReadyInBuffer = function(bufferId, frameInfo) {
    var params_ = new SharedMemoryVirtualDevice_OnFrameReadyInBuffer_Params();
    params_.bufferId = bufferId;
    params_.frameInfo = frameInfo;
    var builder = new codec.MessageV0Builder(
        kSharedMemoryVirtualDevice_OnFrameReadyInBuffer_Name,
        codec.align(SharedMemoryVirtualDevice_OnFrameReadyInBuffer_Params.encodedSize));
    builder.encodeStruct(SharedMemoryVirtualDevice_OnFrameReadyInBuffer_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function SharedMemoryVirtualDeviceStub(delegate) {
    this.delegate_ = delegate;
  }
  SharedMemoryVirtualDeviceStub.prototype.requestFrameBuffer = function(dimension, pixelFormat) {
    return this.delegate_ && this.delegate_.requestFrameBuffer && this.delegate_.requestFrameBuffer(dimension, pixelFormat);
  }
  SharedMemoryVirtualDeviceStub.prototype.onFrameReadyInBuffer = function(bufferId, frameInfo) {
    return this.delegate_ && this.delegate_.onFrameReadyInBuffer && this.delegate_.onFrameReadyInBuffer(bufferId, frameInfo);
  }

  SharedMemoryVirtualDeviceStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kSharedMemoryVirtualDevice_OnFrameReadyInBuffer_Name:
      var params = reader.decodeStruct(SharedMemoryVirtualDevice_OnFrameReadyInBuffer_Params);
      this.onFrameReadyInBuffer(params.bufferId, params.frameInfo);
      return true;
    default:
      return false;
    }
  };

  SharedMemoryVirtualDeviceStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kSharedMemoryVirtualDevice_RequestFrameBuffer_Name:
      var params = reader.decodeStruct(SharedMemoryVirtualDevice_RequestFrameBuffer_Params);
      this.requestFrameBuffer(params.dimension, params.pixelFormat).then(function(response) {
        var responseParams =
            new SharedMemoryVirtualDevice_RequestFrameBuffer_ResponseParams();
        responseParams.bufferId = response.bufferId;
        var builder = new codec.MessageV1Builder(
            kSharedMemoryVirtualDevice_RequestFrameBuffer_Name,
            codec.align(SharedMemoryVirtualDevice_RequestFrameBuffer_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(SharedMemoryVirtualDevice_RequestFrameBuffer_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    default:
      return false;
    }
  };

  function validateSharedMemoryVirtualDeviceRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kSharedMemoryVirtualDevice_RequestFrameBuffer_Name:
        if (message.expectsResponse())
          paramsClass = SharedMemoryVirtualDevice_RequestFrameBuffer_Params;
      break;
      case kSharedMemoryVirtualDevice_OnFrameReadyInBuffer_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = SharedMemoryVirtualDevice_OnFrameReadyInBuffer_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateSharedMemoryVirtualDeviceResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kSharedMemoryVirtualDevice_RequestFrameBuffer_Name:
        if (message.isResponse())
          paramsClass = SharedMemoryVirtualDevice_RequestFrameBuffer_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var SharedMemoryVirtualDevice = {
    name: 'video_capture.mojom.SharedMemoryVirtualDevice',
    kVersion: 0,
    ptrClass: SharedMemoryVirtualDevicePtr,
    proxyClass: SharedMemoryVirtualDeviceProxy,
    stubClass: SharedMemoryVirtualDeviceStub,
    validateRequest: validateSharedMemoryVirtualDeviceRequest,
    validateResponse: validateSharedMemoryVirtualDeviceResponse,
    mojomId: 'services/video_capture/public/mojom/virtual_device.mojom',
    fuzzMethods: {
      requestFrameBuffer: {
        params: SharedMemoryVirtualDevice_RequestFrameBuffer_Params,
      },
      onFrameReadyInBuffer: {
        params: SharedMemoryVirtualDevice_OnFrameReadyInBuffer_Params,
      },
    },
  };
  SharedMemoryVirtualDeviceStub.prototype.validator = validateSharedMemoryVirtualDeviceRequest;
  SharedMemoryVirtualDeviceProxy.prototype.validator = validateSharedMemoryVirtualDeviceResponse;
  var kTextureVirtualDevice_OnNewMailboxHolderBufferHandle_Name = 1443704500;
  var kTextureVirtualDevice_OnFrameReadyInBuffer_Name = 1647331652;
  var kTextureVirtualDevice_OnBufferRetired_Name = 1303964669;

  function TextureVirtualDevicePtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(TextureVirtualDevice,
                                                   handleOrPtrInfo);
  }

  function TextureVirtualDeviceAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        TextureVirtualDevice, associatedInterfacePtrInfo);
  }

  TextureVirtualDeviceAssociatedPtr.prototype =
      Object.create(TextureVirtualDevicePtr.prototype);
  TextureVirtualDeviceAssociatedPtr.prototype.constructor =
      TextureVirtualDeviceAssociatedPtr;

  function TextureVirtualDeviceProxy(receiver) {
    this.receiver_ = receiver;
  }
  TextureVirtualDevicePtr.prototype.onNewMailboxHolderBufferHandle = function() {
    return TextureVirtualDeviceProxy.prototype.onNewMailboxHolderBufferHandle
        .apply(this.ptr.getProxy(), arguments);
  };

  TextureVirtualDeviceProxy.prototype.onNewMailboxHolderBufferHandle = function(bufferId, mailboxHandles) {
    var params_ = new TextureVirtualDevice_OnNewMailboxHolderBufferHandle_Params();
    params_.bufferId = bufferId;
    params_.mailboxHandles = mailboxHandles;
    var builder = new codec.MessageV0Builder(
        kTextureVirtualDevice_OnNewMailboxHolderBufferHandle_Name,
        codec.align(TextureVirtualDevice_OnNewMailboxHolderBufferHandle_Params.encodedSize));
    builder.encodeStruct(TextureVirtualDevice_OnNewMailboxHolderBufferHandle_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  TextureVirtualDevicePtr.prototype.onFrameReadyInBuffer = function() {
    return TextureVirtualDeviceProxy.prototype.onFrameReadyInBuffer
        .apply(this.ptr.getProxy(), arguments);
  };

  TextureVirtualDeviceProxy.prototype.onFrameReadyInBuffer = function(bufferId, accessPermission, frameInfo) {
    var params_ = new TextureVirtualDevice_OnFrameReadyInBuffer_Params();
    params_.bufferId = bufferId;
    params_.accessPermission = accessPermission;
    params_.frameInfo = frameInfo;
    var builder = new codec.MessageV0Builder(
        kTextureVirtualDevice_OnFrameReadyInBuffer_Name,
        codec.align(TextureVirtualDevice_OnFrameReadyInBuffer_Params.encodedSize));
    builder.encodeStruct(TextureVirtualDevice_OnFrameReadyInBuffer_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  TextureVirtualDevicePtr.prototype.onBufferRetired = function() {
    return TextureVirtualDeviceProxy.prototype.onBufferRetired
        .apply(this.ptr.getProxy(), arguments);
  };

  TextureVirtualDeviceProxy.prototype.onBufferRetired = function(bufferId) {
    var params_ = new TextureVirtualDevice_OnBufferRetired_Params();
    params_.bufferId = bufferId;
    var builder = new codec.MessageV0Builder(
        kTextureVirtualDevice_OnBufferRetired_Name,
        codec.align(TextureVirtualDevice_OnBufferRetired_Params.encodedSize));
    builder.encodeStruct(TextureVirtualDevice_OnBufferRetired_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function TextureVirtualDeviceStub(delegate) {
    this.delegate_ = delegate;
  }
  TextureVirtualDeviceStub.prototype.onNewMailboxHolderBufferHandle = function(bufferId, mailboxHandles) {
    return this.delegate_ && this.delegate_.onNewMailboxHolderBufferHandle && this.delegate_.onNewMailboxHolderBufferHandle(bufferId, mailboxHandles);
  }
  TextureVirtualDeviceStub.prototype.onFrameReadyInBuffer = function(bufferId, accessPermission, frameInfo) {
    return this.delegate_ && this.delegate_.onFrameReadyInBuffer && this.delegate_.onFrameReadyInBuffer(bufferId, accessPermission, frameInfo);
  }
  TextureVirtualDeviceStub.prototype.onBufferRetired = function(bufferId) {
    return this.delegate_ && this.delegate_.onBufferRetired && this.delegate_.onBufferRetired(bufferId);
  }

  TextureVirtualDeviceStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kTextureVirtualDevice_OnNewMailboxHolderBufferHandle_Name:
      var params = reader.decodeStruct(TextureVirtualDevice_OnNewMailboxHolderBufferHandle_Params);
      this.onNewMailboxHolderBufferHandle(params.bufferId, params.mailboxHandles);
      return true;
    case kTextureVirtualDevice_OnFrameReadyInBuffer_Name:
      var params = reader.decodeStruct(TextureVirtualDevice_OnFrameReadyInBuffer_Params);
      this.onFrameReadyInBuffer(params.bufferId, params.accessPermission, params.frameInfo);
      return true;
    case kTextureVirtualDevice_OnBufferRetired_Name:
      var params = reader.decodeStruct(TextureVirtualDevice_OnBufferRetired_Params);
      this.onBufferRetired(params.bufferId);
      return true;
    default:
      return false;
    }
  };

  TextureVirtualDeviceStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateTextureVirtualDeviceRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kTextureVirtualDevice_OnNewMailboxHolderBufferHandle_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = TextureVirtualDevice_OnNewMailboxHolderBufferHandle_Params;
      break;
      case kTextureVirtualDevice_OnFrameReadyInBuffer_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = TextureVirtualDevice_OnFrameReadyInBuffer_Params;
      break;
      case kTextureVirtualDevice_OnBufferRetired_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = TextureVirtualDevice_OnBufferRetired_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateTextureVirtualDeviceResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var TextureVirtualDevice = {
    name: 'video_capture.mojom.TextureVirtualDevice',
    kVersion: 0,
    ptrClass: TextureVirtualDevicePtr,
    proxyClass: TextureVirtualDeviceProxy,
    stubClass: TextureVirtualDeviceStub,
    validateRequest: validateTextureVirtualDeviceRequest,
    validateResponse: null,
    mojomId: 'services/video_capture/public/mojom/virtual_device.mojom',
    fuzzMethods: {
      onNewMailboxHolderBufferHandle: {
        params: TextureVirtualDevice_OnNewMailboxHolderBufferHandle_Params,
      },
      onFrameReadyInBuffer: {
        params: TextureVirtualDevice_OnFrameReadyInBuffer_Params,
      },
      onBufferRetired: {
        params: TextureVirtualDevice_OnBufferRetired_Params,
      },
    },
  };
  TextureVirtualDeviceStub.prototype.validator = validateTextureVirtualDeviceRequest;
  TextureVirtualDeviceProxy.prototype.validator = null;
  exports.SharedMemoryVirtualDevice = SharedMemoryVirtualDevice;
  exports.SharedMemoryVirtualDevicePtr = SharedMemoryVirtualDevicePtr;
  exports.SharedMemoryVirtualDeviceAssociatedPtr = SharedMemoryVirtualDeviceAssociatedPtr;
  exports.TextureVirtualDevice = TextureVirtualDevice;
  exports.TextureVirtualDevicePtr = TextureVirtualDevicePtr;
  exports.TextureVirtualDeviceAssociatedPtr = TextureVirtualDeviceAssociatedPtr;
})();