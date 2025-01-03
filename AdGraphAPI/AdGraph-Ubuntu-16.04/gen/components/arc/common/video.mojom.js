// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'components/arc/common/video.mojom';
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
  var video_decode_accelerator$ =
      mojo.internal.exposeNamespace('arc.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'components/arc/common/video_decode_accelerator.mojom', 'video_decode_accelerator.mojom.js');
  }
  var video_encode_accelerator$ =
      mojo.internal.exposeNamespace('arc.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'components/arc/common/video_encode_accelerator.mojom', 'video_encode_accelerator.mojom.js');
  }
  var video_protected_buffer_allocator$ =
      mojo.internal.exposeNamespace('arc.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'components/arc/common/video_protected_buffer_allocator.mojom', 'video_protected_buffer_allocator.mojom.js');
  }



  function VideoHost_OnBootstrapVideoAcceleratorFactory_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  VideoHost_OnBootstrapVideoAcceleratorFactory_Params.prototype.initDefaults_ = function() {
  };
  VideoHost_OnBootstrapVideoAcceleratorFactory_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  VideoHost_OnBootstrapVideoAcceleratorFactory_Params.generate = function(generator_) {
    var generated = new VideoHost_OnBootstrapVideoAcceleratorFactory_Params;
    return generated;
  };

  VideoHost_OnBootstrapVideoAcceleratorFactory_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  VideoHost_OnBootstrapVideoAcceleratorFactory_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  VideoHost_OnBootstrapVideoAcceleratorFactory_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  VideoHost_OnBootstrapVideoAcceleratorFactory_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  VideoHost_OnBootstrapVideoAcceleratorFactory_Params.validate = function(messageValidator, offset) {
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

  VideoHost_OnBootstrapVideoAcceleratorFactory_Params.encodedSize = codec.kStructHeaderSize + 0;

  VideoHost_OnBootstrapVideoAcceleratorFactory_Params.decode = function(decoder) {
    var packed;
    var val = new VideoHost_OnBootstrapVideoAcceleratorFactory_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  VideoHost_OnBootstrapVideoAcceleratorFactory_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(VideoHost_OnBootstrapVideoAcceleratorFactory_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function VideoHost_OnBootstrapVideoAcceleratorFactory_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  VideoHost_OnBootstrapVideoAcceleratorFactory_ResponseParams.prototype.initDefaults_ = function() {
    this.channelHandle = null;
    this.token = null;
  };
  VideoHost_OnBootstrapVideoAcceleratorFactory_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  VideoHost_OnBootstrapVideoAcceleratorFactory_ResponseParams.generate = function(generator_) {
    var generated = new VideoHost_OnBootstrapVideoAcceleratorFactory_ResponseParams;
    generated.channelHandle = generator_.generateHandle(false);
    generated.token = generator_.generateString(false);
    return generated;
  };

  VideoHost_OnBootstrapVideoAcceleratorFactory_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.channelHandle = mutator_.mutateHandle(this.channelHandle, false);
    }
    if (mutator_.chooseMutateField()) {
      this.token = mutator_.mutateString(this.token, false);
    }
    return this;
  };
  VideoHost_OnBootstrapVideoAcceleratorFactory_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.channelHandle !== null) {
      Array.prototype.push.apply(handles, ["None"]);
    }
    return handles;
  };

  VideoHost_OnBootstrapVideoAcceleratorFactory_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  VideoHost_OnBootstrapVideoAcceleratorFactory_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    this.channelHandle = handles[idx++];;
    return idx;
  };

  VideoHost_OnBootstrapVideoAcceleratorFactory_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate VideoHost_OnBootstrapVideoAcceleratorFactory_ResponseParams.channelHandle
    err = messageValidator.validateHandle(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate VideoHost_OnBootstrapVideoAcceleratorFactory_ResponseParams.token
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  VideoHost_OnBootstrapVideoAcceleratorFactory_ResponseParams.encodedSize = codec.kStructHeaderSize + 16;

  VideoHost_OnBootstrapVideoAcceleratorFactory_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new VideoHost_OnBootstrapVideoAcceleratorFactory_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.channelHandle = decoder.decodeStruct(codec.Handle);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.token = decoder.decodeStruct(codec.String);
    return val;
  };

  VideoHost_OnBootstrapVideoAcceleratorFactory_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(VideoHost_OnBootstrapVideoAcceleratorFactory_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Handle, val.channelHandle);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.String, val.token);
  };
  function VideoInstance_InitDeprecated_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  VideoInstance_InitDeprecated_Params.prototype.initDefaults_ = function() {
    this.hostPtr = new VideoHostPtr();
  };
  VideoInstance_InitDeprecated_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  VideoInstance_InitDeprecated_Params.generate = function(generator_) {
    var generated = new VideoInstance_InitDeprecated_Params;
    generated.hostPtr = generator_.generateInterface("arc.mojom.VideoHost", false);
    return generated;
  };

  VideoInstance_InitDeprecated_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.hostPtr = mutator_.mutateInterface(this.hostPtr, "arc.mojom.VideoHost", false);
    }
    return this;
  };
  VideoInstance_InitDeprecated_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.hostPtr !== null) {
      Array.prototype.push.apply(handles, ["arc.mojom.VideoHostPtr"]);
    }
    return handles;
  };

  VideoInstance_InitDeprecated_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  VideoInstance_InitDeprecated_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.hostPtr = handles[idx++];;
    return idx;
  };

  VideoInstance_InitDeprecated_Params.validate = function(messageValidator, offset) {
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


    // validate VideoInstance_InitDeprecated_Params.hostPtr
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 0, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  VideoInstance_InitDeprecated_Params.encodedSize = codec.kStructHeaderSize + 8;

  VideoInstance_InitDeprecated_Params.decode = function(decoder) {
    var packed;
    var val = new VideoInstance_InitDeprecated_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.hostPtr = decoder.decodeStruct(new codec.Interface(VideoHostPtr));
    return val;
  };

  VideoInstance_InitDeprecated_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(VideoInstance_InitDeprecated_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(new codec.Interface(VideoHostPtr), val.hostPtr);
  };
  function VideoInstance_Init_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  VideoInstance_Init_Params.prototype.initDefaults_ = function() {
    this.hostPtr = new VideoHostPtr();
  };
  VideoInstance_Init_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  VideoInstance_Init_Params.generate = function(generator_) {
    var generated = new VideoInstance_Init_Params;
    generated.hostPtr = generator_.generateInterface("arc.mojom.VideoHost", false);
    return generated;
  };

  VideoInstance_Init_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.hostPtr = mutator_.mutateInterface(this.hostPtr, "arc.mojom.VideoHost", false);
    }
    return this;
  };
  VideoInstance_Init_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.hostPtr !== null) {
      Array.prototype.push.apply(handles, ["arc.mojom.VideoHostPtr"]);
    }
    return handles;
  };

  VideoInstance_Init_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  VideoInstance_Init_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.hostPtr = handles[idx++];;
    return idx;
  };

  VideoInstance_Init_Params.validate = function(messageValidator, offset) {
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


    // validate VideoInstance_Init_Params.hostPtr
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 0, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  VideoInstance_Init_Params.encodedSize = codec.kStructHeaderSize + 8;

  VideoInstance_Init_Params.decode = function(decoder) {
    var packed;
    var val = new VideoInstance_Init_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.hostPtr = decoder.decodeStruct(new codec.Interface(VideoHostPtr));
    return val;
  };

  VideoInstance_Init_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(VideoInstance_Init_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(new codec.Interface(VideoHostPtr), val.hostPtr);
  };
  function VideoInstance_Init_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  VideoInstance_Init_ResponseParams.prototype.initDefaults_ = function() {
  };
  VideoInstance_Init_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  VideoInstance_Init_ResponseParams.generate = function(generator_) {
    var generated = new VideoInstance_Init_ResponseParams;
    return generated;
  };

  VideoInstance_Init_ResponseParams.prototype.mutate = function(mutator_) {
    return this;
  };
  VideoInstance_Init_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  VideoInstance_Init_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  VideoInstance_Init_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  VideoInstance_Init_ResponseParams.validate = function(messageValidator, offset) {
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

  VideoInstance_Init_ResponseParams.encodedSize = codec.kStructHeaderSize + 0;

  VideoInstance_Init_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new VideoInstance_Init_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  VideoInstance_Init_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(VideoInstance_Init_ResponseParams.encodedSize);
    encoder.writeUint32(0);
  };
  function VideoAcceleratorFactory_CreateEncodeAccelerator_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  VideoAcceleratorFactory_CreateEncodeAccelerator_Params.prototype.initDefaults_ = function() {
    this.videoEncoder = new bindings.InterfaceRequest();
  };
  VideoAcceleratorFactory_CreateEncodeAccelerator_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  VideoAcceleratorFactory_CreateEncodeAccelerator_Params.generate = function(generator_) {
    var generated = new VideoAcceleratorFactory_CreateEncodeAccelerator_Params;
    generated.videoEncoder = generator_.generateInterfaceRequest("arc.mojom.VideoEncodeAccelerator", false);
    return generated;
  };

  VideoAcceleratorFactory_CreateEncodeAccelerator_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.videoEncoder = mutator_.mutateInterfaceRequest(this.videoEncoder, "arc.mojom.VideoEncodeAccelerator", false);
    }
    return this;
  };
  VideoAcceleratorFactory_CreateEncodeAccelerator_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.videoEncoder !== null) {
      Array.prototype.push.apply(handles, ["arc.mojom.VideoEncodeAcceleratorRequest"]);
    }
    return handles;
  };

  VideoAcceleratorFactory_CreateEncodeAccelerator_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  VideoAcceleratorFactory_CreateEncodeAccelerator_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.videoEncoder = handles[idx++];;
    return idx;
  };

  VideoAcceleratorFactory_CreateEncodeAccelerator_Params.validate = function(messageValidator, offset) {
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


    // validate VideoAcceleratorFactory_CreateEncodeAccelerator_Params.videoEncoder
    err = messageValidator.validateInterfaceRequest(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  VideoAcceleratorFactory_CreateEncodeAccelerator_Params.encodedSize = codec.kStructHeaderSize + 8;

  VideoAcceleratorFactory_CreateEncodeAccelerator_Params.decode = function(decoder) {
    var packed;
    var val = new VideoAcceleratorFactory_CreateEncodeAccelerator_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.videoEncoder = decoder.decodeStruct(codec.InterfaceRequest);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  VideoAcceleratorFactory_CreateEncodeAccelerator_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(VideoAcceleratorFactory_CreateEncodeAccelerator_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.InterfaceRequest, val.videoEncoder);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function VideoAcceleratorFactory_CreateDecodeAccelerator_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  VideoAcceleratorFactory_CreateDecodeAccelerator_Params.prototype.initDefaults_ = function() {
    this.videoDecoder = new bindings.InterfaceRequest();
  };
  VideoAcceleratorFactory_CreateDecodeAccelerator_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  VideoAcceleratorFactory_CreateDecodeAccelerator_Params.generate = function(generator_) {
    var generated = new VideoAcceleratorFactory_CreateDecodeAccelerator_Params;
    generated.videoDecoder = generator_.generateInterfaceRequest("arc.mojom.VideoDecodeAccelerator", false);
    return generated;
  };

  VideoAcceleratorFactory_CreateDecodeAccelerator_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.videoDecoder = mutator_.mutateInterfaceRequest(this.videoDecoder, "arc.mojom.VideoDecodeAccelerator", false);
    }
    return this;
  };
  VideoAcceleratorFactory_CreateDecodeAccelerator_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.videoDecoder !== null) {
      Array.prototype.push.apply(handles, ["arc.mojom.VideoDecodeAcceleratorRequest"]);
    }
    return handles;
  };

  VideoAcceleratorFactory_CreateDecodeAccelerator_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  VideoAcceleratorFactory_CreateDecodeAccelerator_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.videoDecoder = handles[idx++];;
    return idx;
  };

  VideoAcceleratorFactory_CreateDecodeAccelerator_Params.validate = function(messageValidator, offset) {
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


    // validate VideoAcceleratorFactory_CreateDecodeAccelerator_Params.videoDecoder
    err = messageValidator.validateInterfaceRequest(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  VideoAcceleratorFactory_CreateDecodeAccelerator_Params.encodedSize = codec.kStructHeaderSize + 8;

  VideoAcceleratorFactory_CreateDecodeAccelerator_Params.decode = function(decoder) {
    var packed;
    var val = new VideoAcceleratorFactory_CreateDecodeAccelerator_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.videoDecoder = decoder.decodeStruct(codec.InterfaceRequest);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  VideoAcceleratorFactory_CreateDecodeAccelerator_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(VideoAcceleratorFactory_CreateDecodeAccelerator_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.InterfaceRequest, val.videoDecoder);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function VideoAcceleratorFactory_CreateProtectedBufferAllocator_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  VideoAcceleratorFactory_CreateProtectedBufferAllocator_Params.prototype.initDefaults_ = function() {
    this.videoProtectedBufferAllocator = new bindings.InterfaceRequest();
  };
  VideoAcceleratorFactory_CreateProtectedBufferAllocator_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  VideoAcceleratorFactory_CreateProtectedBufferAllocator_Params.generate = function(generator_) {
    var generated = new VideoAcceleratorFactory_CreateProtectedBufferAllocator_Params;
    generated.videoProtectedBufferAllocator = generator_.generateInterfaceRequest("arc.mojom.VideoProtectedBufferAllocator", false);
    return generated;
  };

  VideoAcceleratorFactory_CreateProtectedBufferAllocator_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.videoProtectedBufferAllocator = mutator_.mutateInterfaceRequest(this.videoProtectedBufferAllocator, "arc.mojom.VideoProtectedBufferAllocator", false);
    }
    return this;
  };
  VideoAcceleratorFactory_CreateProtectedBufferAllocator_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.videoProtectedBufferAllocator !== null) {
      Array.prototype.push.apply(handles, ["arc.mojom.VideoProtectedBufferAllocatorRequest"]);
    }
    return handles;
  };

  VideoAcceleratorFactory_CreateProtectedBufferAllocator_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  VideoAcceleratorFactory_CreateProtectedBufferAllocator_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.videoProtectedBufferAllocator = handles[idx++];;
    return idx;
  };

  VideoAcceleratorFactory_CreateProtectedBufferAllocator_Params.validate = function(messageValidator, offset) {
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


    // validate VideoAcceleratorFactory_CreateProtectedBufferAllocator_Params.videoProtectedBufferAllocator
    err = messageValidator.validateInterfaceRequest(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  VideoAcceleratorFactory_CreateProtectedBufferAllocator_Params.encodedSize = codec.kStructHeaderSize + 8;

  VideoAcceleratorFactory_CreateProtectedBufferAllocator_Params.decode = function(decoder) {
    var packed;
    var val = new VideoAcceleratorFactory_CreateProtectedBufferAllocator_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.videoProtectedBufferAllocator = decoder.decodeStruct(codec.InterfaceRequest);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  VideoAcceleratorFactory_CreateProtectedBufferAllocator_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(VideoAcceleratorFactory_CreateProtectedBufferAllocator_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.InterfaceRequest, val.videoProtectedBufferAllocator);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  var kVideoHost_OnBootstrapVideoAcceleratorFactory_Name = 981211895;

  function VideoHostPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(VideoHost,
                                                   handleOrPtrInfo);
  }

  function VideoHostAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        VideoHost, associatedInterfacePtrInfo);
  }

  VideoHostAssociatedPtr.prototype =
      Object.create(VideoHostPtr.prototype);
  VideoHostAssociatedPtr.prototype.constructor =
      VideoHostAssociatedPtr;

  function VideoHostProxy(receiver) {
    this.receiver_ = receiver;
  }
  VideoHostPtr.prototype.onBootstrapVideoAcceleratorFactory = function() {
    return VideoHostProxy.prototype.onBootstrapVideoAcceleratorFactory
        .apply(this.ptr.getProxy(), arguments);
  };

  VideoHostProxy.prototype.onBootstrapVideoAcceleratorFactory = function() {
    var params_ = new VideoHost_OnBootstrapVideoAcceleratorFactory_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kVideoHost_OnBootstrapVideoAcceleratorFactory_Name,
          codec.align(VideoHost_OnBootstrapVideoAcceleratorFactory_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(VideoHost_OnBootstrapVideoAcceleratorFactory_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(VideoHost_OnBootstrapVideoAcceleratorFactory_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };

  function VideoHostStub(delegate) {
    this.delegate_ = delegate;
  }
  VideoHostStub.prototype.onBootstrapVideoAcceleratorFactory = function() {
    return this.delegate_ && this.delegate_.onBootstrapVideoAcceleratorFactory && this.delegate_.onBootstrapVideoAcceleratorFactory();
  }

  VideoHostStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  VideoHostStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kVideoHost_OnBootstrapVideoAcceleratorFactory_Name:
      var params = reader.decodeStruct(VideoHost_OnBootstrapVideoAcceleratorFactory_Params);
      this.onBootstrapVideoAcceleratorFactory().then(function(response) {
        var responseParams =
            new VideoHost_OnBootstrapVideoAcceleratorFactory_ResponseParams();
        responseParams.channelHandle = response.channelHandle;
        responseParams.token = response.token;
        var builder = new codec.MessageV1Builder(
            kVideoHost_OnBootstrapVideoAcceleratorFactory_Name,
            codec.align(VideoHost_OnBootstrapVideoAcceleratorFactory_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(VideoHost_OnBootstrapVideoAcceleratorFactory_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    default:
      return false;
    }
  };

  function validateVideoHostRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kVideoHost_OnBootstrapVideoAcceleratorFactory_Name:
        if (message.expectsResponse())
          paramsClass = VideoHost_OnBootstrapVideoAcceleratorFactory_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateVideoHostResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kVideoHost_OnBootstrapVideoAcceleratorFactory_Name:
        if (message.isResponse())
          paramsClass = VideoHost_OnBootstrapVideoAcceleratorFactory_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var VideoHost = {
    name: 'arc.mojom.VideoHost',
    kVersion: 4,
    ptrClass: VideoHostPtr,
    proxyClass: VideoHostProxy,
    stubClass: VideoHostStub,
    validateRequest: validateVideoHostRequest,
    validateResponse: validateVideoHostResponse,
    mojomId: 'components/arc/common/video.mojom',
    fuzzMethods: {
      onBootstrapVideoAcceleratorFactory: {
        params: VideoHost_OnBootstrapVideoAcceleratorFactory_Params,
      },
    },
  };
  VideoHostStub.prototype.validator = validateVideoHostRequest;
  VideoHostProxy.prototype.validator = validateVideoHostResponse;
  var kVideoInstance_InitDeprecated_Name = 284057960;
  var kVideoInstance_Init_Name = 1487752150;

  function VideoInstancePtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(VideoInstance,
                                                   handleOrPtrInfo);
  }

  function VideoInstanceAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        VideoInstance, associatedInterfacePtrInfo);
  }

  VideoInstanceAssociatedPtr.prototype =
      Object.create(VideoInstancePtr.prototype);
  VideoInstanceAssociatedPtr.prototype.constructor =
      VideoInstanceAssociatedPtr;

  function VideoInstanceProxy(receiver) {
    this.receiver_ = receiver;
  }
  VideoInstancePtr.prototype.initDeprecated = function() {
    return VideoInstanceProxy.prototype.initDeprecated
        .apply(this.ptr.getProxy(), arguments);
  };

  VideoInstanceProxy.prototype.initDeprecated = function(hostPtr) {
    var params_ = new VideoInstance_InitDeprecated_Params();
    params_.hostPtr = hostPtr;
    var builder = new codec.MessageV0Builder(
        kVideoInstance_InitDeprecated_Name,
        codec.align(VideoInstance_InitDeprecated_Params.encodedSize));
    builder.encodeStruct(VideoInstance_InitDeprecated_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  VideoInstancePtr.prototype.init = function() {
    return VideoInstanceProxy.prototype.init
        .apply(this.ptr.getProxy(), arguments);
  };

  VideoInstanceProxy.prototype.init = function(hostPtr) {
    var params_ = new VideoInstance_Init_Params();
    params_.hostPtr = hostPtr;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kVideoInstance_Init_Name,
          codec.align(VideoInstance_Init_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(VideoInstance_Init_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(VideoInstance_Init_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };

  function VideoInstanceStub(delegate) {
    this.delegate_ = delegate;
  }
  VideoInstanceStub.prototype.initDeprecated = function(hostPtr) {
    return this.delegate_ && this.delegate_.initDeprecated && this.delegate_.initDeprecated(hostPtr);
  }
  VideoInstanceStub.prototype.init = function(hostPtr) {
    return this.delegate_ && this.delegate_.init && this.delegate_.init(hostPtr);
  }

  VideoInstanceStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kVideoInstance_InitDeprecated_Name:
      var params = reader.decodeStruct(VideoInstance_InitDeprecated_Params);
      this.initDeprecated(params.hostPtr);
      return true;
    default:
      return false;
    }
  };

  VideoInstanceStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kVideoInstance_Init_Name:
      var params = reader.decodeStruct(VideoInstance_Init_Params);
      this.init(params.hostPtr).then(function(response) {
        var responseParams =
            new VideoInstance_Init_ResponseParams();
        var builder = new codec.MessageV1Builder(
            kVideoInstance_Init_Name,
            codec.align(VideoInstance_Init_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(VideoInstance_Init_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    default:
      return false;
    }
  };

  function validateVideoInstanceRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kVideoInstance_InitDeprecated_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = VideoInstance_InitDeprecated_Params;
      break;
      case kVideoInstance_Init_Name:
        if (message.expectsResponse())
          paramsClass = VideoInstance_Init_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateVideoInstanceResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kVideoInstance_Init_Name:
        if (message.isResponse())
          paramsClass = VideoInstance_Init_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var VideoInstance = {
    name: 'arc.mojom.VideoInstance',
    kVersion: 5,
    ptrClass: VideoInstancePtr,
    proxyClass: VideoInstanceProxy,
    stubClass: VideoInstanceStub,
    validateRequest: validateVideoInstanceRequest,
    validateResponse: validateVideoInstanceResponse,
    mojomId: 'components/arc/common/video.mojom',
    fuzzMethods: {
      initDeprecated: {
        params: VideoInstance_InitDeprecated_Params,
      },
      init: {
        params: VideoInstance_Init_Params,
      },
    },
  };
  VideoInstanceStub.prototype.validator = validateVideoInstanceRequest;
  VideoInstanceProxy.prototype.validator = validateVideoInstanceResponse;
  var kVideoAcceleratorFactory_CreateEncodeAccelerator_Name = 986841847;
  var kVideoAcceleratorFactory_CreateDecodeAccelerator_Name = 1701484851;
  var kVideoAcceleratorFactory_CreateProtectedBufferAllocator_Name = 1948826328;

  function VideoAcceleratorFactoryPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(VideoAcceleratorFactory,
                                                   handleOrPtrInfo);
  }

  function VideoAcceleratorFactoryAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        VideoAcceleratorFactory, associatedInterfacePtrInfo);
  }

  VideoAcceleratorFactoryAssociatedPtr.prototype =
      Object.create(VideoAcceleratorFactoryPtr.prototype);
  VideoAcceleratorFactoryAssociatedPtr.prototype.constructor =
      VideoAcceleratorFactoryAssociatedPtr;

  function VideoAcceleratorFactoryProxy(receiver) {
    this.receiver_ = receiver;
  }
  VideoAcceleratorFactoryPtr.prototype.createEncodeAccelerator = function() {
    return VideoAcceleratorFactoryProxy.prototype.createEncodeAccelerator
        .apply(this.ptr.getProxy(), arguments);
  };

  VideoAcceleratorFactoryProxy.prototype.createEncodeAccelerator = function(videoEncoder) {
    var params_ = new VideoAcceleratorFactory_CreateEncodeAccelerator_Params();
    params_.videoEncoder = videoEncoder;
    var builder = new codec.MessageV0Builder(
        kVideoAcceleratorFactory_CreateEncodeAccelerator_Name,
        codec.align(VideoAcceleratorFactory_CreateEncodeAccelerator_Params.encodedSize));
    builder.encodeStruct(VideoAcceleratorFactory_CreateEncodeAccelerator_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  VideoAcceleratorFactoryPtr.prototype.createDecodeAccelerator = function() {
    return VideoAcceleratorFactoryProxy.prototype.createDecodeAccelerator
        .apply(this.ptr.getProxy(), arguments);
  };

  VideoAcceleratorFactoryProxy.prototype.createDecodeAccelerator = function(videoDecoder) {
    var params_ = new VideoAcceleratorFactory_CreateDecodeAccelerator_Params();
    params_.videoDecoder = videoDecoder;
    var builder = new codec.MessageV0Builder(
        kVideoAcceleratorFactory_CreateDecodeAccelerator_Name,
        codec.align(VideoAcceleratorFactory_CreateDecodeAccelerator_Params.encodedSize));
    builder.encodeStruct(VideoAcceleratorFactory_CreateDecodeAccelerator_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  VideoAcceleratorFactoryPtr.prototype.createProtectedBufferAllocator = function() {
    return VideoAcceleratorFactoryProxy.prototype.createProtectedBufferAllocator
        .apply(this.ptr.getProxy(), arguments);
  };

  VideoAcceleratorFactoryProxy.prototype.createProtectedBufferAllocator = function(videoProtectedBufferAllocator) {
    var params_ = new VideoAcceleratorFactory_CreateProtectedBufferAllocator_Params();
    params_.videoProtectedBufferAllocator = videoProtectedBufferAllocator;
    var builder = new codec.MessageV0Builder(
        kVideoAcceleratorFactory_CreateProtectedBufferAllocator_Name,
        codec.align(VideoAcceleratorFactory_CreateProtectedBufferAllocator_Params.encodedSize));
    builder.encodeStruct(VideoAcceleratorFactory_CreateProtectedBufferAllocator_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function VideoAcceleratorFactoryStub(delegate) {
    this.delegate_ = delegate;
  }
  VideoAcceleratorFactoryStub.prototype.createEncodeAccelerator = function(videoEncoder) {
    return this.delegate_ && this.delegate_.createEncodeAccelerator && this.delegate_.createEncodeAccelerator(videoEncoder);
  }
  VideoAcceleratorFactoryStub.prototype.createDecodeAccelerator = function(videoDecoder) {
    return this.delegate_ && this.delegate_.createDecodeAccelerator && this.delegate_.createDecodeAccelerator(videoDecoder);
  }
  VideoAcceleratorFactoryStub.prototype.createProtectedBufferAllocator = function(videoProtectedBufferAllocator) {
    return this.delegate_ && this.delegate_.createProtectedBufferAllocator && this.delegate_.createProtectedBufferAllocator(videoProtectedBufferAllocator);
  }

  VideoAcceleratorFactoryStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kVideoAcceleratorFactory_CreateEncodeAccelerator_Name:
      var params = reader.decodeStruct(VideoAcceleratorFactory_CreateEncodeAccelerator_Params);
      this.createEncodeAccelerator(params.videoEncoder);
      return true;
    case kVideoAcceleratorFactory_CreateDecodeAccelerator_Name:
      var params = reader.decodeStruct(VideoAcceleratorFactory_CreateDecodeAccelerator_Params);
      this.createDecodeAccelerator(params.videoDecoder);
      return true;
    case kVideoAcceleratorFactory_CreateProtectedBufferAllocator_Name:
      var params = reader.decodeStruct(VideoAcceleratorFactory_CreateProtectedBufferAllocator_Params);
      this.createProtectedBufferAllocator(params.videoProtectedBufferAllocator);
      return true;
    default:
      return false;
    }
  };

  VideoAcceleratorFactoryStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateVideoAcceleratorFactoryRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kVideoAcceleratorFactory_CreateEncodeAccelerator_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = VideoAcceleratorFactory_CreateEncodeAccelerator_Params;
      break;
      case kVideoAcceleratorFactory_CreateDecodeAccelerator_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = VideoAcceleratorFactory_CreateDecodeAccelerator_Params;
      break;
      case kVideoAcceleratorFactory_CreateProtectedBufferAllocator_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = VideoAcceleratorFactory_CreateProtectedBufferAllocator_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateVideoAcceleratorFactoryResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var VideoAcceleratorFactory = {
    name: 'arc.mojom.VideoAcceleratorFactory',
    kVersion: 6,
    ptrClass: VideoAcceleratorFactoryPtr,
    proxyClass: VideoAcceleratorFactoryProxy,
    stubClass: VideoAcceleratorFactoryStub,
    validateRequest: validateVideoAcceleratorFactoryRequest,
    validateResponse: null,
    mojomId: 'components/arc/common/video.mojom',
    fuzzMethods: {
      createEncodeAccelerator: {
        params: VideoAcceleratorFactory_CreateEncodeAccelerator_Params,
      },
      createDecodeAccelerator: {
        params: VideoAcceleratorFactory_CreateDecodeAccelerator_Params,
      },
      createProtectedBufferAllocator: {
        params: VideoAcceleratorFactory_CreateProtectedBufferAllocator_Params,
      },
    },
  };
  VideoAcceleratorFactoryStub.prototype.validator = validateVideoAcceleratorFactoryRequest;
  VideoAcceleratorFactoryProxy.prototype.validator = null;
  exports.VideoHost = VideoHost;
  exports.VideoHostPtr = VideoHostPtr;
  exports.VideoHostAssociatedPtr = VideoHostAssociatedPtr;
  exports.VideoInstance = VideoInstance;
  exports.VideoInstancePtr = VideoInstancePtr;
  exports.VideoInstanceAssociatedPtr = VideoInstanceAssociatedPtr;
  exports.VideoAcceleratorFactory = VideoAcceleratorFactory;
  exports.VideoAcceleratorFactoryPtr = VideoAcceleratorFactoryPtr;
  exports.VideoAcceleratorFactoryAssociatedPtr = VideoAcceleratorFactoryAssociatedPtr;
})();