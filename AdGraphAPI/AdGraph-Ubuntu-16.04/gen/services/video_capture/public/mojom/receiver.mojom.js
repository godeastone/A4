// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'services/video_capture/public/mojom/receiver.mojom';
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
  var scoped_access_permission$ =
      mojo.internal.exposeNamespace('videoCapture.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'services/video_capture/public/mojom/scoped_access_permission.mojom', 'scoped_access_permission.mojom.js');
  }



  function Receiver_OnNewBuffer_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Receiver_OnNewBuffer_Params.prototype.initDefaults_ = function() {
    this.bufferId = 0;
    this.bufferHandle = null;
  };
  Receiver_OnNewBuffer_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Receiver_OnNewBuffer_Params.generate = function(generator_) {
    var generated = new Receiver_OnNewBuffer_Params;
    generated.bufferId = generator_.generateInt32();
    generated.bufferHandle = generator_.generateUnion(media.mojom.VideoBufferHandle, false);
    return generated;
  };

  Receiver_OnNewBuffer_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.bufferId = mutator_.mutateInt32(this.bufferId);
    }
    if (mutator_.chooseMutateField()) {
      this.bufferHandle = mutator_.mutateUnion(media.mojom.VideoBufferHandle, false);
    }
    return this;
  };
  Receiver_OnNewBuffer_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.bufferHandle !== null) {
      Array.prototype.push.apply(handles, this.bufferHandle.getHandleDeps());
    }
    return handles;
  };

  Receiver_OnNewBuffer_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Receiver_OnNewBuffer_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    idx = this.bufferHandle.setHandlesInternal_(handles, idx);
    return idx;
  };

  Receiver_OnNewBuffer_Params.validate = function(messageValidator, offset) {
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



    // validate Receiver_OnNewBuffer_Params.bufferHandle
    err = messageValidator.validateUnion(offset + codec.kStructHeaderSize + 8, video_capture_types$.VideoBufferHandle, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Receiver_OnNewBuffer_Params.encodedSize = codec.kStructHeaderSize + 24;

  Receiver_OnNewBuffer_Params.decode = function(decoder) {
    var packed;
    var val = new Receiver_OnNewBuffer_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.bufferId = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.bufferHandle = decoder.decodeStruct(video_capture_types$.VideoBufferHandle);
    return val;
  };

  Receiver_OnNewBuffer_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Receiver_OnNewBuffer_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.bufferId);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(video_capture_types$.VideoBufferHandle, val.bufferHandle);
  };
  function Receiver_OnFrameReadyInBuffer_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Receiver_OnFrameReadyInBuffer_Params.prototype.initDefaults_ = function() {
    this.bufferId = 0;
    this.frameFeedbackId = 0;
    this.accessPermission = new scoped_access_permission$.ScopedAccessPermissionPtr();
    this.frameInfo = null;
  };
  Receiver_OnFrameReadyInBuffer_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Receiver_OnFrameReadyInBuffer_Params.generate = function(generator_) {
    var generated = new Receiver_OnFrameReadyInBuffer_Params;
    generated.bufferId = generator_.generateInt32();
    generated.frameFeedbackId = generator_.generateInt32();
    generated.accessPermission = generator_.generateInterface("videoCapture.mojom.ScopedAccessPermission", false);
    generated.frameInfo = generator_.generateStruct(media.mojom.VideoFrameInfo, false);
    return generated;
  };

  Receiver_OnFrameReadyInBuffer_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.bufferId = mutator_.mutateInt32(this.bufferId);
    }
    if (mutator_.chooseMutateField()) {
      this.frameFeedbackId = mutator_.mutateInt32(this.frameFeedbackId);
    }
    if (mutator_.chooseMutateField()) {
      this.accessPermission = mutator_.mutateInterface(this.accessPermission, "videoCapture.mojom.ScopedAccessPermission", false);
    }
    if (mutator_.chooseMutateField()) {
      this.frameInfo = mutator_.mutateStruct(media.mojom.VideoFrameInfo, false);
    }
    return this;
  };
  Receiver_OnFrameReadyInBuffer_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.accessPermission !== null) {
      Array.prototype.push.apply(handles, ["videoCapture.mojom.ScopedAccessPermissionPtr"]);
    }
    return handles;
  };

  Receiver_OnFrameReadyInBuffer_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Receiver_OnFrameReadyInBuffer_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.accessPermission = handles[idx++];;
    return idx;
  };

  Receiver_OnFrameReadyInBuffer_Params.validate = function(messageValidator, offset) {
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




    // validate Receiver_OnFrameReadyInBuffer_Params.accessPermission
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 8, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate Receiver_OnFrameReadyInBuffer_Params.frameInfo
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, video_capture_types$.VideoFrameInfo, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Receiver_OnFrameReadyInBuffer_Params.encodedSize = codec.kStructHeaderSize + 24;

  Receiver_OnFrameReadyInBuffer_Params.decode = function(decoder) {
    var packed;
    var val = new Receiver_OnFrameReadyInBuffer_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.bufferId = decoder.decodeStruct(codec.Int32);
    val.frameFeedbackId = decoder.decodeStruct(codec.Int32);
    val.accessPermission = decoder.decodeStruct(new codec.Interface(scoped_access_permission$.ScopedAccessPermissionPtr));
    val.frameInfo = decoder.decodeStructPointer(video_capture_types$.VideoFrameInfo);
    return val;
  };

  Receiver_OnFrameReadyInBuffer_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Receiver_OnFrameReadyInBuffer_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.bufferId);
    encoder.encodeStruct(codec.Int32, val.frameFeedbackId);
    encoder.encodeStruct(new codec.Interface(scoped_access_permission$.ScopedAccessPermissionPtr), val.accessPermission);
    encoder.encodeStructPointer(video_capture_types$.VideoFrameInfo, val.frameInfo);
  };
  function Receiver_OnBufferRetired_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Receiver_OnBufferRetired_Params.prototype.initDefaults_ = function() {
    this.bufferId = 0;
  };
  Receiver_OnBufferRetired_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Receiver_OnBufferRetired_Params.generate = function(generator_) {
    var generated = new Receiver_OnBufferRetired_Params;
    generated.bufferId = generator_.generateInt32();
    return generated;
  };

  Receiver_OnBufferRetired_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.bufferId = mutator_.mutateInt32(this.bufferId);
    }
    return this;
  };
  Receiver_OnBufferRetired_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Receiver_OnBufferRetired_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Receiver_OnBufferRetired_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Receiver_OnBufferRetired_Params.validate = function(messageValidator, offset) {
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

  Receiver_OnBufferRetired_Params.encodedSize = codec.kStructHeaderSize + 8;

  Receiver_OnBufferRetired_Params.decode = function(decoder) {
    var packed;
    var val = new Receiver_OnBufferRetired_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.bufferId = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  Receiver_OnBufferRetired_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Receiver_OnBufferRetired_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.bufferId);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function Receiver_OnError_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Receiver_OnError_Params.prototype.initDefaults_ = function() {
  };
  Receiver_OnError_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Receiver_OnError_Params.generate = function(generator_) {
    var generated = new Receiver_OnError_Params;
    return generated;
  };

  Receiver_OnError_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  Receiver_OnError_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Receiver_OnError_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Receiver_OnError_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Receiver_OnError_Params.validate = function(messageValidator, offset) {
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

  Receiver_OnError_Params.encodedSize = codec.kStructHeaderSize + 0;

  Receiver_OnError_Params.decode = function(decoder) {
    var packed;
    var val = new Receiver_OnError_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  Receiver_OnError_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Receiver_OnError_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function Receiver_OnLog_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Receiver_OnLog_Params.prototype.initDefaults_ = function() {
    this.message = null;
  };
  Receiver_OnLog_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Receiver_OnLog_Params.generate = function(generator_) {
    var generated = new Receiver_OnLog_Params;
    generated.message = generator_.generateString(false);
    return generated;
  };

  Receiver_OnLog_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.message = mutator_.mutateString(this.message, false);
    }
    return this;
  };
  Receiver_OnLog_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Receiver_OnLog_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Receiver_OnLog_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Receiver_OnLog_Params.validate = function(messageValidator, offset) {
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


    // validate Receiver_OnLog_Params.message
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Receiver_OnLog_Params.encodedSize = codec.kStructHeaderSize + 8;

  Receiver_OnLog_Params.decode = function(decoder) {
    var packed;
    var val = new Receiver_OnLog_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.message = decoder.decodeStruct(codec.String);
    return val;
  };

  Receiver_OnLog_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Receiver_OnLog_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.message);
  };
  function Receiver_OnStarted_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Receiver_OnStarted_Params.prototype.initDefaults_ = function() {
  };
  Receiver_OnStarted_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Receiver_OnStarted_Params.generate = function(generator_) {
    var generated = new Receiver_OnStarted_Params;
    return generated;
  };

  Receiver_OnStarted_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  Receiver_OnStarted_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Receiver_OnStarted_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Receiver_OnStarted_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Receiver_OnStarted_Params.validate = function(messageValidator, offset) {
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

  Receiver_OnStarted_Params.encodedSize = codec.kStructHeaderSize + 0;

  Receiver_OnStarted_Params.decode = function(decoder) {
    var packed;
    var val = new Receiver_OnStarted_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  Receiver_OnStarted_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Receiver_OnStarted_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function Receiver_OnStartedUsingGpuDecode_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Receiver_OnStartedUsingGpuDecode_Params.prototype.initDefaults_ = function() {
  };
  Receiver_OnStartedUsingGpuDecode_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Receiver_OnStartedUsingGpuDecode_Params.generate = function(generator_) {
    var generated = new Receiver_OnStartedUsingGpuDecode_Params;
    return generated;
  };

  Receiver_OnStartedUsingGpuDecode_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  Receiver_OnStartedUsingGpuDecode_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Receiver_OnStartedUsingGpuDecode_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Receiver_OnStartedUsingGpuDecode_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Receiver_OnStartedUsingGpuDecode_Params.validate = function(messageValidator, offset) {
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

  Receiver_OnStartedUsingGpuDecode_Params.encodedSize = codec.kStructHeaderSize + 0;

  Receiver_OnStartedUsingGpuDecode_Params.decode = function(decoder) {
    var packed;
    var val = new Receiver_OnStartedUsingGpuDecode_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  Receiver_OnStartedUsingGpuDecode_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Receiver_OnStartedUsingGpuDecode_Params.encodedSize);
    encoder.writeUint32(0);
  };
  var kReceiver_OnNewBuffer_Name = 1845677971;
  var kReceiver_OnFrameReadyInBuffer_Name = 242183228;
  var kReceiver_OnBufferRetired_Name = 1215530509;
  var kReceiver_OnError_Name = 1421881275;
  var kReceiver_OnLog_Name = 678713302;
  var kReceiver_OnStarted_Name = 211451137;
  var kReceiver_OnStartedUsingGpuDecode_Name = 1550276271;

  function ReceiverPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(Receiver,
                                                   handleOrPtrInfo);
  }

  function ReceiverAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        Receiver, associatedInterfacePtrInfo);
  }

  ReceiverAssociatedPtr.prototype =
      Object.create(ReceiverPtr.prototype);
  ReceiverAssociatedPtr.prototype.constructor =
      ReceiverAssociatedPtr;

  function ReceiverProxy(receiver) {
    this.receiver_ = receiver;
  }
  ReceiverPtr.prototype.onNewBuffer = function() {
    return ReceiverProxy.prototype.onNewBuffer
        .apply(this.ptr.getProxy(), arguments);
  };

  ReceiverProxy.prototype.onNewBuffer = function(bufferId, bufferHandle) {
    var params_ = new Receiver_OnNewBuffer_Params();
    params_.bufferId = bufferId;
    params_.bufferHandle = bufferHandle;
    var builder = new codec.MessageV0Builder(
        kReceiver_OnNewBuffer_Name,
        codec.align(Receiver_OnNewBuffer_Params.encodedSize));
    builder.encodeStruct(Receiver_OnNewBuffer_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  ReceiverPtr.prototype.onFrameReadyInBuffer = function() {
    return ReceiverProxy.prototype.onFrameReadyInBuffer
        .apply(this.ptr.getProxy(), arguments);
  };

  ReceiverProxy.prototype.onFrameReadyInBuffer = function(bufferId, frameFeedbackId, accessPermission, frameInfo) {
    var params_ = new Receiver_OnFrameReadyInBuffer_Params();
    params_.bufferId = bufferId;
    params_.frameFeedbackId = frameFeedbackId;
    params_.accessPermission = accessPermission;
    params_.frameInfo = frameInfo;
    var builder = new codec.MessageV0Builder(
        kReceiver_OnFrameReadyInBuffer_Name,
        codec.align(Receiver_OnFrameReadyInBuffer_Params.encodedSize));
    builder.encodeStruct(Receiver_OnFrameReadyInBuffer_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  ReceiverPtr.prototype.onBufferRetired = function() {
    return ReceiverProxy.prototype.onBufferRetired
        .apply(this.ptr.getProxy(), arguments);
  };

  ReceiverProxy.prototype.onBufferRetired = function(bufferId) {
    var params_ = new Receiver_OnBufferRetired_Params();
    params_.bufferId = bufferId;
    var builder = new codec.MessageV0Builder(
        kReceiver_OnBufferRetired_Name,
        codec.align(Receiver_OnBufferRetired_Params.encodedSize));
    builder.encodeStruct(Receiver_OnBufferRetired_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  ReceiverPtr.prototype.onError = function() {
    return ReceiverProxy.prototype.onError
        .apply(this.ptr.getProxy(), arguments);
  };

  ReceiverProxy.prototype.onError = function() {
    var params_ = new Receiver_OnError_Params();
    var builder = new codec.MessageV0Builder(
        kReceiver_OnError_Name,
        codec.align(Receiver_OnError_Params.encodedSize));
    builder.encodeStruct(Receiver_OnError_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  ReceiverPtr.prototype.onLog = function() {
    return ReceiverProxy.prototype.onLog
        .apply(this.ptr.getProxy(), arguments);
  };

  ReceiverProxy.prototype.onLog = function(message) {
    var params_ = new Receiver_OnLog_Params();
    params_.message = message;
    var builder = new codec.MessageV0Builder(
        kReceiver_OnLog_Name,
        codec.align(Receiver_OnLog_Params.encodedSize));
    builder.encodeStruct(Receiver_OnLog_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  ReceiverPtr.prototype.onStarted = function() {
    return ReceiverProxy.prototype.onStarted
        .apply(this.ptr.getProxy(), arguments);
  };

  ReceiverProxy.prototype.onStarted = function() {
    var params_ = new Receiver_OnStarted_Params();
    var builder = new codec.MessageV0Builder(
        kReceiver_OnStarted_Name,
        codec.align(Receiver_OnStarted_Params.encodedSize));
    builder.encodeStruct(Receiver_OnStarted_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  ReceiverPtr.prototype.onStartedUsingGpuDecode = function() {
    return ReceiverProxy.prototype.onStartedUsingGpuDecode
        .apply(this.ptr.getProxy(), arguments);
  };

  ReceiverProxy.prototype.onStartedUsingGpuDecode = function() {
    var params_ = new Receiver_OnStartedUsingGpuDecode_Params();
    var builder = new codec.MessageV0Builder(
        kReceiver_OnStartedUsingGpuDecode_Name,
        codec.align(Receiver_OnStartedUsingGpuDecode_Params.encodedSize));
    builder.encodeStruct(Receiver_OnStartedUsingGpuDecode_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function ReceiverStub(delegate) {
    this.delegate_ = delegate;
  }
  ReceiverStub.prototype.onNewBuffer = function(bufferId, bufferHandle) {
    return this.delegate_ && this.delegate_.onNewBuffer && this.delegate_.onNewBuffer(bufferId, bufferHandle);
  }
  ReceiverStub.prototype.onFrameReadyInBuffer = function(bufferId, frameFeedbackId, accessPermission, frameInfo) {
    return this.delegate_ && this.delegate_.onFrameReadyInBuffer && this.delegate_.onFrameReadyInBuffer(bufferId, frameFeedbackId, accessPermission, frameInfo);
  }
  ReceiverStub.prototype.onBufferRetired = function(bufferId) {
    return this.delegate_ && this.delegate_.onBufferRetired && this.delegate_.onBufferRetired(bufferId);
  }
  ReceiverStub.prototype.onError = function() {
    return this.delegate_ && this.delegate_.onError && this.delegate_.onError();
  }
  ReceiverStub.prototype.onLog = function(message) {
    return this.delegate_ && this.delegate_.onLog && this.delegate_.onLog(message);
  }
  ReceiverStub.prototype.onStarted = function() {
    return this.delegate_ && this.delegate_.onStarted && this.delegate_.onStarted();
  }
  ReceiverStub.prototype.onStartedUsingGpuDecode = function() {
    return this.delegate_ && this.delegate_.onStartedUsingGpuDecode && this.delegate_.onStartedUsingGpuDecode();
  }

  ReceiverStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kReceiver_OnNewBuffer_Name:
      var params = reader.decodeStruct(Receiver_OnNewBuffer_Params);
      this.onNewBuffer(params.bufferId, params.bufferHandle);
      return true;
    case kReceiver_OnFrameReadyInBuffer_Name:
      var params = reader.decodeStruct(Receiver_OnFrameReadyInBuffer_Params);
      this.onFrameReadyInBuffer(params.bufferId, params.frameFeedbackId, params.accessPermission, params.frameInfo);
      return true;
    case kReceiver_OnBufferRetired_Name:
      var params = reader.decodeStruct(Receiver_OnBufferRetired_Params);
      this.onBufferRetired(params.bufferId);
      return true;
    case kReceiver_OnError_Name:
      var params = reader.decodeStruct(Receiver_OnError_Params);
      this.onError();
      return true;
    case kReceiver_OnLog_Name:
      var params = reader.decodeStruct(Receiver_OnLog_Params);
      this.onLog(params.message);
      return true;
    case kReceiver_OnStarted_Name:
      var params = reader.decodeStruct(Receiver_OnStarted_Params);
      this.onStarted();
      return true;
    case kReceiver_OnStartedUsingGpuDecode_Name:
      var params = reader.decodeStruct(Receiver_OnStartedUsingGpuDecode_Params);
      this.onStartedUsingGpuDecode();
      return true;
    default:
      return false;
    }
  };

  ReceiverStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateReceiverRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kReceiver_OnNewBuffer_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = Receiver_OnNewBuffer_Params;
      break;
      case kReceiver_OnFrameReadyInBuffer_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = Receiver_OnFrameReadyInBuffer_Params;
      break;
      case kReceiver_OnBufferRetired_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = Receiver_OnBufferRetired_Params;
      break;
      case kReceiver_OnError_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = Receiver_OnError_Params;
      break;
      case kReceiver_OnLog_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = Receiver_OnLog_Params;
      break;
      case kReceiver_OnStarted_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = Receiver_OnStarted_Params;
      break;
      case kReceiver_OnStartedUsingGpuDecode_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = Receiver_OnStartedUsingGpuDecode_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateReceiverResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var Receiver = {
    name: 'video_capture.mojom.Receiver',
    kVersion: 0,
    ptrClass: ReceiverPtr,
    proxyClass: ReceiverProxy,
    stubClass: ReceiverStub,
    validateRequest: validateReceiverRequest,
    validateResponse: null,
    mojomId: 'services/video_capture/public/mojom/receiver.mojom',
    fuzzMethods: {
      onNewBuffer: {
        params: Receiver_OnNewBuffer_Params,
      },
      onFrameReadyInBuffer: {
        params: Receiver_OnFrameReadyInBuffer_Params,
      },
      onBufferRetired: {
        params: Receiver_OnBufferRetired_Params,
      },
      onError: {
        params: Receiver_OnError_Params,
      },
      onLog: {
        params: Receiver_OnLog_Params,
      },
      onStarted: {
        params: Receiver_OnStarted_Params,
      },
      onStartedUsingGpuDecode: {
        params: Receiver_OnStartedUsingGpuDecode_Params,
      },
    },
  };
  ReceiverStub.prototype.validator = validateReceiverRequest;
  ReceiverProxy.prototype.validator = null;
  exports.Receiver = Receiver;
  exports.ReceiverPtr = ReceiverPtr;
  exports.ReceiverAssociatedPtr = ReceiverAssociatedPtr;
})();