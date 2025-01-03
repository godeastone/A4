// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'services/ui/public/interfaces/gpu.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('ui.mojom');
  var gpu_feature_info$ =
      mojo.internal.exposeNamespace('gpu.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'gpu/ipc/common/gpu_feature_info.mojom', '../../../../gpu/ipc/common/gpu_feature_info.mojom.js');
  }
  var gpu_info$ =
      mojo.internal.exposeNamespace('gpu.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'gpu/ipc/common/gpu_info.mojom', '../../../../gpu/ipc/common/gpu_info.mojom.js');
  }
  var sync_token$ =
      mojo.internal.exposeNamespace('gpu.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'gpu/ipc/common/sync_token.mojom', '../../../../gpu/ipc/common/sync_token.mojom.js');
  }
  var jpeg_decode_accelerator$ =
      mojo.internal.exposeNamespace('media.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'media/mojo/interfaces/jpeg_decode_accelerator.mojom', '../../../../media/mojo/interfaces/jpeg_decode_accelerator.mojom.js');
  }
  var video_encode_accelerator$ =
      mojo.internal.exposeNamespace('media.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'media/mojo/interfaces/video_encode_accelerator.mojom', '../../../../media/mojo/interfaces/video_encode_accelerator.mojom.js');
  }
  var geometry$ =
      mojo.internal.exposeNamespace('gfx.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'ui/gfx/geometry/mojo/geometry.mojom', '../../../../ui/gfx/geometry/mojo/geometry.mojom.js');
  }
  var buffer_types$ =
      mojo.internal.exposeNamespace('gfx.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'ui/gfx/mojo/buffer_types.mojom', '../../../../ui/gfx/mojo/buffer_types.mojom.js');
  }



  function Gpu_EstablishGpuChannel_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Gpu_EstablishGpuChannel_Params.prototype.initDefaults_ = function() {
  };
  Gpu_EstablishGpuChannel_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Gpu_EstablishGpuChannel_Params.generate = function(generator_) {
    var generated = new Gpu_EstablishGpuChannel_Params;
    return generated;
  };

  Gpu_EstablishGpuChannel_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  Gpu_EstablishGpuChannel_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Gpu_EstablishGpuChannel_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Gpu_EstablishGpuChannel_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Gpu_EstablishGpuChannel_Params.validate = function(messageValidator, offset) {
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

  Gpu_EstablishGpuChannel_Params.encodedSize = codec.kStructHeaderSize + 0;

  Gpu_EstablishGpuChannel_Params.decode = function(decoder) {
    var packed;
    var val = new Gpu_EstablishGpuChannel_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  Gpu_EstablishGpuChannel_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Gpu_EstablishGpuChannel_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function Gpu_EstablishGpuChannel_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Gpu_EstablishGpuChannel_ResponseParams.prototype.initDefaults_ = function() {
    this.clientId = 0;
    this.channelHandle = null;
    this.gpuInfo = null;
    this.gpuFeatureInfo = null;
  };
  Gpu_EstablishGpuChannel_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Gpu_EstablishGpuChannel_ResponseParams.generate = function(generator_) {
    var generated = new Gpu_EstablishGpuChannel_ResponseParams;
    generated.clientId = generator_.generateInt32();
    generated.channelHandle = generator_.generateMessagePipe(true);
    generated.gpuInfo = generator_.generateStruct(gpu.mojom.GpuInfo, false);
    generated.gpuFeatureInfo = generator_.generateStruct(gpu.mojom.GpuFeatureInfo, false);
    return generated;
  };

  Gpu_EstablishGpuChannel_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.clientId = mutator_.mutateInt32(this.clientId);
    }
    if (mutator_.chooseMutateField()) {
      this.channelHandle = mutator_.mutateMessagePipe(this.channelHandle, true);
    }
    if (mutator_.chooseMutateField()) {
      this.gpuInfo = mutator_.mutateStruct(gpu.mojom.GpuInfo, false);
    }
    if (mutator_.chooseMutateField()) {
      this.gpuFeatureInfo = mutator_.mutateStruct(gpu.mojom.GpuFeatureInfo, false);
    }
    return this;
  };
  Gpu_EstablishGpuChannel_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.channelHandle !== null) {
      Array.prototype.push.apply(handles, ["handle<message_pipe>"]);
    }
    return handles;
  };

  Gpu_EstablishGpuChannel_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Gpu_EstablishGpuChannel_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    this.channelHandle = handles[idx++];;
    return idx;
  };

  Gpu_EstablishGpuChannel_ResponseParams.validate = function(messageValidator, offset) {
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



    // validate Gpu_EstablishGpuChannel_ResponseParams.channelHandle
    err = messageValidator.validateHandle(offset + codec.kStructHeaderSize + 4, true)
    if (err !== validator.validationError.NONE)
        return err;


    // validate Gpu_EstablishGpuChannel_ResponseParams.gpuInfo
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, gpu_info$.GpuInfo, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate Gpu_EstablishGpuChannel_ResponseParams.gpuFeatureInfo
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, gpu_feature_info$.GpuFeatureInfo, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Gpu_EstablishGpuChannel_ResponseParams.encodedSize = codec.kStructHeaderSize + 24;

  Gpu_EstablishGpuChannel_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new Gpu_EstablishGpuChannel_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.clientId = decoder.decodeStruct(codec.Int32);
    val.channelHandle = decoder.decodeStruct(codec.NullableHandle);
    val.gpuInfo = decoder.decodeStructPointer(gpu_info$.GpuInfo);
    val.gpuFeatureInfo = decoder.decodeStructPointer(gpu_feature_info$.GpuFeatureInfo);
    return val;
  };

  Gpu_EstablishGpuChannel_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Gpu_EstablishGpuChannel_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.clientId);
    encoder.encodeStruct(codec.NullableHandle, val.channelHandle);
    encoder.encodeStructPointer(gpu_info$.GpuInfo, val.gpuInfo);
    encoder.encodeStructPointer(gpu_feature_info$.GpuFeatureInfo, val.gpuFeatureInfo);
  };
  function Gpu_CreateJpegDecodeAccelerator_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Gpu_CreateJpegDecodeAccelerator_Params.prototype.initDefaults_ = function() {
    this.jda = new bindings.InterfaceRequest();
  };
  Gpu_CreateJpegDecodeAccelerator_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Gpu_CreateJpegDecodeAccelerator_Params.generate = function(generator_) {
    var generated = new Gpu_CreateJpegDecodeAccelerator_Params;
    generated.jda = generator_.generateInterfaceRequest("media.mojom.JpegDecodeAccelerator", false);
    return generated;
  };

  Gpu_CreateJpegDecodeAccelerator_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.jda = mutator_.mutateInterfaceRequest(this.jda, "media.mojom.JpegDecodeAccelerator", false);
    }
    return this;
  };
  Gpu_CreateJpegDecodeAccelerator_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.jda !== null) {
      Array.prototype.push.apply(handles, ["media.mojom.JpegDecodeAcceleratorRequest"]);
    }
    return handles;
  };

  Gpu_CreateJpegDecodeAccelerator_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Gpu_CreateJpegDecodeAccelerator_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.jda = handles[idx++];;
    return idx;
  };

  Gpu_CreateJpegDecodeAccelerator_Params.validate = function(messageValidator, offset) {
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


    // validate Gpu_CreateJpegDecodeAccelerator_Params.jda
    err = messageValidator.validateInterfaceRequest(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Gpu_CreateJpegDecodeAccelerator_Params.encodedSize = codec.kStructHeaderSize + 8;

  Gpu_CreateJpegDecodeAccelerator_Params.decode = function(decoder) {
    var packed;
    var val = new Gpu_CreateJpegDecodeAccelerator_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.jda = decoder.decodeStruct(codec.InterfaceRequest);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  Gpu_CreateJpegDecodeAccelerator_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Gpu_CreateJpegDecodeAccelerator_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.InterfaceRequest, val.jda);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function Gpu_CreateVideoEncodeAcceleratorProvider_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Gpu_CreateVideoEncodeAcceleratorProvider_Params.prototype.initDefaults_ = function() {
    this.veaProvider = new bindings.InterfaceRequest();
  };
  Gpu_CreateVideoEncodeAcceleratorProvider_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Gpu_CreateVideoEncodeAcceleratorProvider_Params.generate = function(generator_) {
    var generated = new Gpu_CreateVideoEncodeAcceleratorProvider_Params;
    generated.veaProvider = generator_.generateInterfaceRequest("media.mojom.VideoEncodeAcceleratorProvider", false);
    return generated;
  };

  Gpu_CreateVideoEncodeAcceleratorProvider_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.veaProvider = mutator_.mutateInterfaceRequest(this.veaProvider, "media.mojom.VideoEncodeAcceleratorProvider", false);
    }
    return this;
  };
  Gpu_CreateVideoEncodeAcceleratorProvider_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.veaProvider !== null) {
      Array.prototype.push.apply(handles, ["media.mojom.VideoEncodeAcceleratorProviderRequest"]);
    }
    return handles;
  };

  Gpu_CreateVideoEncodeAcceleratorProvider_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Gpu_CreateVideoEncodeAcceleratorProvider_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.veaProvider = handles[idx++];;
    return idx;
  };

  Gpu_CreateVideoEncodeAcceleratorProvider_Params.validate = function(messageValidator, offset) {
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


    // validate Gpu_CreateVideoEncodeAcceleratorProvider_Params.veaProvider
    err = messageValidator.validateInterfaceRequest(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Gpu_CreateVideoEncodeAcceleratorProvider_Params.encodedSize = codec.kStructHeaderSize + 8;

  Gpu_CreateVideoEncodeAcceleratorProvider_Params.decode = function(decoder) {
    var packed;
    var val = new Gpu_CreateVideoEncodeAcceleratorProvider_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.veaProvider = decoder.decodeStruct(codec.InterfaceRequest);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  Gpu_CreateVideoEncodeAcceleratorProvider_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Gpu_CreateVideoEncodeAcceleratorProvider_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.InterfaceRequest, val.veaProvider);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function Gpu_CreateGpuMemoryBuffer_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Gpu_CreateGpuMemoryBuffer_Params.prototype.initDefaults_ = function() {
    this.id = null;
    this.size = null;
    this.format = 0;
    this.usage = 0;
  };
  Gpu_CreateGpuMemoryBuffer_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Gpu_CreateGpuMemoryBuffer_Params.generate = function(generator_) {
    var generated = new Gpu_CreateGpuMemoryBuffer_Params;
    generated.id = generator_.generateStruct(gfx.mojom.GpuMemoryBufferId, false);
    generated.size = generator_.generateStruct(gfx.mojom.Size, false);
    generated.format = generator_.generateEnum(0, 19);
    generated.usage = generator_.generateEnum(0, 7);
    return generated;
  };

  Gpu_CreateGpuMemoryBuffer_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.id = mutator_.mutateStruct(gfx.mojom.GpuMemoryBufferId, false);
    }
    if (mutator_.chooseMutateField()) {
      this.size = mutator_.mutateStruct(gfx.mojom.Size, false);
    }
    if (mutator_.chooseMutateField()) {
      this.format = mutator_.mutateEnum(this.format, 0, 19);
    }
    if (mutator_.chooseMutateField()) {
      this.usage = mutator_.mutateEnum(this.usage, 0, 7);
    }
    return this;
  };
  Gpu_CreateGpuMemoryBuffer_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Gpu_CreateGpuMemoryBuffer_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Gpu_CreateGpuMemoryBuffer_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Gpu_CreateGpuMemoryBuffer_Params.validate = function(messageValidator, offset) {
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


    // validate Gpu_CreateGpuMemoryBuffer_Params.id
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, buffer_types$.GpuMemoryBufferId, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate Gpu_CreateGpuMemoryBuffer_Params.size
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, geometry$.Size, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate Gpu_CreateGpuMemoryBuffer_Params.format
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 16, buffer_types$.BufferFormat);
    if (err !== validator.validationError.NONE)
        return err;


    // validate Gpu_CreateGpuMemoryBuffer_Params.usage
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 20, buffer_types$.BufferUsage);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Gpu_CreateGpuMemoryBuffer_Params.encodedSize = codec.kStructHeaderSize + 24;

  Gpu_CreateGpuMemoryBuffer_Params.decode = function(decoder) {
    var packed;
    var val = new Gpu_CreateGpuMemoryBuffer_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.id = decoder.decodeStructPointer(buffer_types$.GpuMemoryBufferId);
    val.size = decoder.decodeStructPointer(geometry$.Size);
    val.format = decoder.decodeStruct(codec.Int32);
    val.usage = decoder.decodeStruct(codec.Int32);
    return val;
  };

  Gpu_CreateGpuMemoryBuffer_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Gpu_CreateGpuMemoryBuffer_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(buffer_types$.GpuMemoryBufferId, val.id);
    encoder.encodeStructPointer(geometry$.Size, val.size);
    encoder.encodeStruct(codec.Int32, val.format);
    encoder.encodeStruct(codec.Int32, val.usage);
  };
  function Gpu_CreateGpuMemoryBuffer_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Gpu_CreateGpuMemoryBuffer_ResponseParams.prototype.initDefaults_ = function() {
    this.bufferHandle = null;
  };
  Gpu_CreateGpuMemoryBuffer_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Gpu_CreateGpuMemoryBuffer_ResponseParams.generate = function(generator_) {
    var generated = new Gpu_CreateGpuMemoryBuffer_ResponseParams;
    generated.bufferHandle = generator_.generateStruct(gfx.mojom.GpuMemoryBufferHandle, false);
    return generated;
  };

  Gpu_CreateGpuMemoryBuffer_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.bufferHandle = mutator_.mutateStruct(gfx.mojom.GpuMemoryBufferHandle, false);
    }
    return this;
  };
  Gpu_CreateGpuMemoryBuffer_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.bufferHandle !== null) {
      Array.prototype.push.apply(handles, this.bufferHandle.getHandleDeps());
    }
    return handles;
  };

  Gpu_CreateGpuMemoryBuffer_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Gpu_CreateGpuMemoryBuffer_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    idx = this.bufferHandle.setHandlesInternal_(handles, idx);
    return idx;
  };

  Gpu_CreateGpuMemoryBuffer_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate Gpu_CreateGpuMemoryBuffer_ResponseParams.bufferHandle
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, buffer_types$.GpuMemoryBufferHandle, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Gpu_CreateGpuMemoryBuffer_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  Gpu_CreateGpuMemoryBuffer_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new Gpu_CreateGpuMemoryBuffer_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.bufferHandle = decoder.decodeStructPointer(buffer_types$.GpuMemoryBufferHandle);
    return val;
  };

  Gpu_CreateGpuMemoryBuffer_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Gpu_CreateGpuMemoryBuffer_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(buffer_types$.GpuMemoryBufferHandle, val.bufferHandle);
  };
  function Gpu_DestroyGpuMemoryBuffer_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Gpu_DestroyGpuMemoryBuffer_Params.prototype.initDefaults_ = function() {
    this.id = null;
    this.syncToken = null;
  };
  Gpu_DestroyGpuMemoryBuffer_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Gpu_DestroyGpuMemoryBuffer_Params.generate = function(generator_) {
    var generated = new Gpu_DestroyGpuMemoryBuffer_Params;
    generated.id = generator_.generateStruct(gfx.mojom.GpuMemoryBufferId, false);
    generated.syncToken = generator_.generateStruct(gpu.mojom.SyncToken, false);
    return generated;
  };

  Gpu_DestroyGpuMemoryBuffer_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.id = mutator_.mutateStruct(gfx.mojom.GpuMemoryBufferId, false);
    }
    if (mutator_.chooseMutateField()) {
      this.syncToken = mutator_.mutateStruct(gpu.mojom.SyncToken, false);
    }
    return this;
  };
  Gpu_DestroyGpuMemoryBuffer_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Gpu_DestroyGpuMemoryBuffer_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Gpu_DestroyGpuMemoryBuffer_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Gpu_DestroyGpuMemoryBuffer_Params.validate = function(messageValidator, offset) {
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


    // validate Gpu_DestroyGpuMemoryBuffer_Params.id
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, buffer_types$.GpuMemoryBufferId, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate Gpu_DestroyGpuMemoryBuffer_Params.syncToken
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, sync_token$.SyncToken, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Gpu_DestroyGpuMemoryBuffer_Params.encodedSize = codec.kStructHeaderSize + 16;

  Gpu_DestroyGpuMemoryBuffer_Params.decode = function(decoder) {
    var packed;
    var val = new Gpu_DestroyGpuMemoryBuffer_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.id = decoder.decodeStructPointer(buffer_types$.GpuMemoryBufferId);
    val.syncToken = decoder.decodeStructPointer(sync_token$.SyncToken);
    return val;
  };

  Gpu_DestroyGpuMemoryBuffer_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Gpu_DestroyGpuMemoryBuffer_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(buffer_types$.GpuMemoryBufferId, val.id);
    encoder.encodeStructPointer(sync_token$.SyncToken, val.syncToken);
  };
  var kGpu_EstablishGpuChannel_Name = 2121004993;
  var kGpu_CreateJpegDecodeAccelerator_Name = 1995357702;
  var kGpu_CreateVideoEncodeAcceleratorProvider_Name = 126544520;
  var kGpu_CreateGpuMemoryBuffer_Name = 745264821;
  var kGpu_DestroyGpuMemoryBuffer_Name = 537416398;

  function GpuPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(Gpu,
                                                   handleOrPtrInfo);
  }

  function GpuAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        Gpu, associatedInterfacePtrInfo);
  }

  GpuAssociatedPtr.prototype =
      Object.create(GpuPtr.prototype);
  GpuAssociatedPtr.prototype.constructor =
      GpuAssociatedPtr;

  function GpuProxy(receiver) {
    this.receiver_ = receiver;
  }
  GpuPtr.prototype.establishGpuChannel = function() {
    return GpuProxy.prototype.establishGpuChannel
        .apply(this.ptr.getProxy(), arguments);
  };

  GpuProxy.prototype.establishGpuChannel = function() {
    var params_ = new Gpu_EstablishGpuChannel_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kGpu_EstablishGpuChannel_Name,
          codec.align(Gpu_EstablishGpuChannel_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(Gpu_EstablishGpuChannel_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(Gpu_EstablishGpuChannel_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  GpuPtr.prototype.createJpegDecodeAccelerator = function() {
    return GpuProxy.prototype.createJpegDecodeAccelerator
        .apply(this.ptr.getProxy(), arguments);
  };

  GpuProxy.prototype.createJpegDecodeAccelerator = function(jda) {
    var params_ = new Gpu_CreateJpegDecodeAccelerator_Params();
    params_.jda = jda;
    var builder = new codec.MessageV0Builder(
        kGpu_CreateJpegDecodeAccelerator_Name,
        codec.align(Gpu_CreateJpegDecodeAccelerator_Params.encodedSize));
    builder.encodeStruct(Gpu_CreateJpegDecodeAccelerator_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  GpuPtr.prototype.createVideoEncodeAcceleratorProvider = function() {
    return GpuProxy.prototype.createVideoEncodeAcceleratorProvider
        .apply(this.ptr.getProxy(), arguments);
  };

  GpuProxy.prototype.createVideoEncodeAcceleratorProvider = function(veaProvider) {
    var params_ = new Gpu_CreateVideoEncodeAcceleratorProvider_Params();
    params_.veaProvider = veaProvider;
    var builder = new codec.MessageV0Builder(
        kGpu_CreateVideoEncodeAcceleratorProvider_Name,
        codec.align(Gpu_CreateVideoEncodeAcceleratorProvider_Params.encodedSize));
    builder.encodeStruct(Gpu_CreateVideoEncodeAcceleratorProvider_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  GpuPtr.prototype.createGpuMemoryBuffer = function() {
    return GpuProxy.prototype.createGpuMemoryBuffer
        .apply(this.ptr.getProxy(), arguments);
  };

  GpuProxy.prototype.createGpuMemoryBuffer = function(id, size, format, usage) {
    var params_ = new Gpu_CreateGpuMemoryBuffer_Params();
    params_.id = id;
    params_.size = size;
    params_.format = format;
    params_.usage = usage;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kGpu_CreateGpuMemoryBuffer_Name,
          codec.align(Gpu_CreateGpuMemoryBuffer_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(Gpu_CreateGpuMemoryBuffer_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(Gpu_CreateGpuMemoryBuffer_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  GpuPtr.prototype.destroyGpuMemoryBuffer = function() {
    return GpuProxy.prototype.destroyGpuMemoryBuffer
        .apply(this.ptr.getProxy(), arguments);
  };

  GpuProxy.prototype.destroyGpuMemoryBuffer = function(id, syncToken) {
    var params_ = new Gpu_DestroyGpuMemoryBuffer_Params();
    params_.id = id;
    params_.syncToken = syncToken;
    var builder = new codec.MessageV0Builder(
        kGpu_DestroyGpuMemoryBuffer_Name,
        codec.align(Gpu_DestroyGpuMemoryBuffer_Params.encodedSize));
    builder.encodeStruct(Gpu_DestroyGpuMemoryBuffer_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function GpuStub(delegate) {
    this.delegate_ = delegate;
  }
  GpuStub.prototype.establishGpuChannel = function() {
    return this.delegate_ && this.delegate_.establishGpuChannel && this.delegate_.establishGpuChannel();
  }
  GpuStub.prototype.createJpegDecodeAccelerator = function(jda) {
    return this.delegate_ && this.delegate_.createJpegDecodeAccelerator && this.delegate_.createJpegDecodeAccelerator(jda);
  }
  GpuStub.prototype.createVideoEncodeAcceleratorProvider = function(veaProvider) {
    return this.delegate_ && this.delegate_.createVideoEncodeAcceleratorProvider && this.delegate_.createVideoEncodeAcceleratorProvider(veaProvider);
  }
  GpuStub.prototype.createGpuMemoryBuffer = function(id, size, format, usage) {
    return this.delegate_ && this.delegate_.createGpuMemoryBuffer && this.delegate_.createGpuMemoryBuffer(id, size, format, usage);
  }
  GpuStub.prototype.destroyGpuMemoryBuffer = function(id, syncToken) {
    return this.delegate_ && this.delegate_.destroyGpuMemoryBuffer && this.delegate_.destroyGpuMemoryBuffer(id, syncToken);
  }

  GpuStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kGpu_CreateJpegDecodeAccelerator_Name:
      var params = reader.decodeStruct(Gpu_CreateJpegDecodeAccelerator_Params);
      this.createJpegDecodeAccelerator(params.jda);
      return true;
    case kGpu_CreateVideoEncodeAcceleratorProvider_Name:
      var params = reader.decodeStruct(Gpu_CreateVideoEncodeAcceleratorProvider_Params);
      this.createVideoEncodeAcceleratorProvider(params.veaProvider);
      return true;
    case kGpu_DestroyGpuMemoryBuffer_Name:
      var params = reader.decodeStruct(Gpu_DestroyGpuMemoryBuffer_Params);
      this.destroyGpuMemoryBuffer(params.id, params.syncToken);
      return true;
    default:
      return false;
    }
  };

  GpuStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kGpu_EstablishGpuChannel_Name:
      var params = reader.decodeStruct(Gpu_EstablishGpuChannel_Params);
      this.establishGpuChannel().then(function(response) {
        var responseParams =
            new Gpu_EstablishGpuChannel_ResponseParams();
        responseParams.clientId = response.clientId;
        responseParams.channelHandle = response.channelHandle;
        responseParams.gpuInfo = response.gpuInfo;
        responseParams.gpuFeatureInfo = response.gpuFeatureInfo;
        var builder = new codec.MessageV1Builder(
            kGpu_EstablishGpuChannel_Name,
            codec.align(Gpu_EstablishGpuChannel_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(Gpu_EstablishGpuChannel_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kGpu_CreateGpuMemoryBuffer_Name:
      var params = reader.decodeStruct(Gpu_CreateGpuMemoryBuffer_Params);
      this.createGpuMemoryBuffer(params.id, params.size, params.format, params.usage).then(function(response) {
        var responseParams =
            new Gpu_CreateGpuMemoryBuffer_ResponseParams();
        responseParams.bufferHandle = response.bufferHandle;
        var builder = new codec.MessageV1Builder(
            kGpu_CreateGpuMemoryBuffer_Name,
            codec.align(Gpu_CreateGpuMemoryBuffer_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(Gpu_CreateGpuMemoryBuffer_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    default:
      return false;
    }
  };

  function validateGpuRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kGpu_EstablishGpuChannel_Name:
        if (message.expectsResponse())
          paramsClass = Gpu_EstablishGpuChannel_Params;
      break;
      case kGpu_CreateJpegDecodeAccelerator_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = Gpu_CreateJpegDecodeAccelerator_Params;
      break;
      case kGpu_CreateVideoEncodeAcceleratorProvider_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = Gpu_CreateVideoEncodeAcceleratorProvider_Params;
      break;
      case kGpu_CreateGpuMemoryBuffer_Name:
        if (message.expectsResponse())
          paramsClass = Gpu_CreateGpuMemoryBuffer_Params;
      break;
      case kGpu_DestroyGpuMemoryBuffer_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = Gpu_DestroyGpuMemoryBuffer_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateGpuResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kGpu_EstablishGpuChannel_Name:
        if (message.isResponse())
          paramsClass = Gpu_EstablishGpuChannel_ResponseParams;
        break;
      case kGpu_CreateGpuMemoryBuffer_Name:
        if (message.isResponse())
          paramsClass = Gpu_CreateGpuMemoryBuffer_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var Gpu = {
    name: 'ui.mojom.Gpu',
    kVersion: 0,
    ptrClass: GpuPtr,
    proxyClass: GpuProxy,
    stubClass: GpuStub,
    validateRequest: validateGpuRequest,
    validateResponse: validateGpuResponse,
    mojomId: 'services/ui/public/interfaces/gpu.mojom',
    fuzzMethods: {
      establishGpuChannel: {
        params: Gpu_EstablishGpuChannel_Params,
      },
      createJpegDecodeAccelerator: {
        params: Gpu_CreateJpegDecodeAccelerator_Params,
      },
      createVideoEncodeAcceleratorProvider: {
        params: Gpu_CreateVideoEncodeAcceleratorProvider_Params,
      },
      createGpuMemoryBuffer: {
        params: Gpu_CreateGpuMemoryBuffer_Params,
      },
      destroyGpuMemoryBuffer: {
        params: Gpu_DestroyGpuMemoryBuffer_Params,
      },
    },
  };
  GpuStub.prototype.validator = validateGpuRequest;
  GpuProxy.prototype.validator = validateGpuResponse;
  exports.Gpu = Gpu;
  exports.GpuPtr = GpuPtr;
  exports.GpuAssociatedPtr = GpuAssociatedPtr;
})();