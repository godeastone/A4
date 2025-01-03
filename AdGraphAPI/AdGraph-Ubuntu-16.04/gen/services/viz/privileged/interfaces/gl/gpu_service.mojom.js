// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'services/viz/privileged/interfaces/gl/gpu_service.mojom';
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
  var protected_buffer_manager$ =
      mojo.internal.exposeNamespace('arc.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'components/arc/common/protected_buffer_manager.mojom', '../../../../../components/arc/common/protected_buffer_manager.mojom.js');
  }
  var video_decode_accelerator$ =
      mojo.internal.exposeNamespace('arc.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'components/arc/common/video_decode_accelerator.mojom', '../../../../../components/arc/common/video_decode_accelerator.mojom.js');
  }
  var video_encode_accelerator$ =
      mojo.internal.exposeNamespace('arc.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'components/arc/common/video_encode_accelerator.mojom', '../../../../../components/arc/common/video_encode_accelerator.mojom.js');
  }
  var video_protected_buffer_allocator$ =
      mojo.internal.exposeNamespace('arc.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'components/arc/common/video_protected_buffer_allocator.mojom', '../../../../../components/arc/common/video_protected_buffer_allocator.mojom.js');
  }
  var gpu_info$ =
      mojo.internal.exposeNamespace('gpu.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'gpu/ipc/common/gpu_info.mojom', '../../../../../gpu/ipc/common/gpu_info.mojom.js');
  }
  var memory_stats$ =
      mojo.internal.exposeNamespace('gpu.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'gpu/ipc/common/memory_stats.mojom', '../../../../../gpu/ipc/common/memory_stats.mojom.js');
  }
  var surface_handle$ =
      mojo.internal.exposeNamespace('gpu.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'gpu/ipc/common/surface_handle.mojom', '../../../../../gpu/ipc/common/surface_handle.mojom.js');
  }
  var sync_token$ =
      mojo.internal.exposeNamespace('gpu.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'gpu/ipc/common/sync_token.mojom', '../../../../../gpu/ipc/common/sync_token.mojom.js');
  }
  var jpeg_decode_accelerator$ =
      mojo.internal.exposeNamespace('media.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'media/mojo/interfaces/jpeg_decode_accelerator.mojom', '../../../../../media/mojo/interfaces/jpeg_decode_accelerator.mojom.js');
  }
  var jpeg_encode_accelerator$ =
      mojo.internal.exposeNamespace('media.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'media/mojo/interfaces/jpeg_encode_accelerator.mojom', '../../../../../media/mojo/interfaces/jpeg_encode_accelerator.mojom.js');
  }
  var video_encode_accelerator1$ =
      mojo.internal.exposeNamespace('media.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'media/mojo/interfaces/video_encode_accelerator.mojom', '../../../../../media/mojo/interfaces/video_encode_accelerator.mojom.js');
  }
  var geometry$ =
      mojo.internal.exposeNamespace('gfx.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'ui/gfx/geometry/mojo/geometry.mojom', '../../../../../ui/gfx/geometry/mojo/geometry.mojom.js');
  }
  var buffer_types$ =
      mojo.internal.exposeNamespace('gfx.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'ui/gfx/mojo/buffer_types.mojom', '../../../../../ui/gfx/mojo/buffer_types.mojom.js');
  }



  function GpuService_EstablishGpuChannel_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  GpuService_EstablishGpuChannel_Params.prototype.initDefaults_ = function() {
    this.clientId = 0;
    this.isGpuHost = false;
    this.clientTracingId = 0;
  };
  GpuService_EstablishGpuChannel_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  GpuService_EstablishGpuChannel_Params.generate = function(generator_) {
    var generated = new GpuService_EstablishGpuChannel_Params;
    generated.clientId = generator_.generateInt32();
    generated.clientTracingId = generator_.generateUint64();
    generated.isGpuHost = generator_.generateBool();
    return generated;
  };

  GpuService_EstablishGpuChannel_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.clientId = mutator_.mutateInt32(this.clientId);
    }
    if (mutator_.chooseMutateField()) {
      this.clientTracingId = mutator_.mutateUint64(this.clientTracingId);
    }
    if (mutator_.chooseMutateField()) {
      this.isGpuHost = mutator_.mutateBool(this.isGpuHost);
    }
    return this;
  };
  GpuService_EstablishGpuChannel_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  GpuService_EstablishGpuChannel_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  GpuService_EstablishGpuChannel_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  GpuService_EstablishGpuChannel_Params.validate = function(messageValidator, offset) {
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




    return validator.validationError.NONE;
  };

  GpuService_EstablishGpuChannel_Params.encodedSize = codec.kStructHeaderSize + 16;

  GpuService_EstablishGpuChannel_Params.decode = function(decoder) {
    var packed;
    var val = new GpuService_EstablishGpuChannel_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.clientId = decoder.decodeStruct(codec.Int32);
    packed = decoder.readUint8();
    val.isGpuHost = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.clientTracingId = decoder.decodeStruct(codec.Uint64);
    return val;
  };

  GpuService_EstablishGpuChannel_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(GpuService_EstablishGpuChannel_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.clientId);
    packed = 0;
    packed |= (val.isGpuHost & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.Uint64, val.clientTracingId);
  };
  function GpuService_EstablishGpuChannel_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  GpuService_EstablishGpuChannel_ResponseParams.prototype.initDefaults_ = function() {
    this.channelHandle = null;
  };
  GpuService_EstablishGpuChannel_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  GpuService_EstablishGpuChannel_ResponseParams.generate = function(generator_) {
    var generated = new GpuService_EstablishGpuChannel_ResponseParams;
    generated.channelHandle = generator_.generateMessagePipe(true);
    return generated;
  };

  GpuService_EstablishGpuChannel_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.channelHandle = mutator_.mutateMessagePipe(this.channelHandle, true);
    }
    return this;
  };
  GpuService_EstablishGpuChannel_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.channelHandle !== null) {
      Array.prototype.push.apply(handles, ["handle<message_pipe>"]);
    }
    return handles;
  };

  GpuService_EstablishGpuChannel_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  GpuService_EstablishGpuChannel_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    this.channelHandle = handles[idx++];;
    return idx;
  };

  GpuService_EstablishGpuChannel_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate GpuService_EstablishGpuChannel_ResponseParams.channelHandle
    err = messageValidator.validateHandle(offset + codec.kStructHeaderSize + 0, true)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  GpuService_EstablishGpuChannel_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  GpuService_EstablishGpuChannel_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new GpuService_EstablishGpuChannel_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.channelHandle = decoder.decodeStruct(codec.NullableHandle);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  GpuService_EstablishGpuChannel_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(GpuService_EstablishGpuChannel_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.NullableHandle, val.channelHandle);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function GpuService_CloseChannel_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  GpuService_CloseChannel_Params.prototype.initDefaults_ = function() {
    this.clientId = 0;
  };
  GpuService_CloseChannel_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  GpuService_CloseChannel_Params.generate = function(generator_) {
    var generated = new GpuService_CloseChannel_Params;
    generated.clientId = generator_.generateInt32();
    return generated;
  };

  GpuService_CloseChannel_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.clientId = mutator_.mutateInt32(this.clientId);
    }
    return this;
  };
  GpuService_CloseChannel_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  GpuService_CloseChannel_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  GpuService_CloseChannel_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  GpuService_CloseChannel_Params.validate = function(messageValidator, offset) {
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

  GpuService_CloseChannel_Params.encodedSize = codec.kStructHeaderSize + 8;

  GpuService_CloseChannel_Params.decode = function(decoder) {
    var packed;
    var val = new GpuService_CloseChannel_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.clientId = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  GpuService_CloseChannel_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(GpuService_CloseChannel_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.clientId);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function GpuService_CreateJpegDecodeAccelerator_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  GpuService_CreateJpegDecodeAccelerator_Params.prototype.initDefaults_ = function() {
    this.jda = new bindings.InterfaceRequest();
  };
  GpuService_CreateJpegDecodeAccelerator_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  GpuService_CreateJpegDecodeAccelerator_Params.generate = function(generator_) {
    var generated = new GpuService_CreateJpegDecodeAccelerator_Params;
    generated.jda = generator_.generateInterfaceRequest("media.mojom.JpegDecodeAccelerator", false);
    return generated;
  };

  GpuService_CreateJpegDecodeAccelerator_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.jda = mutator_.mutateInterfaceRequest(this.jda, "media.mojom.JpegDecodeAccelerator", false);
    }
    return this;
  };
  GpuService_CreateJpegDecodeAccelerator_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.jda !== null) {
      Array.prototype.push.apply(handles, ["media.mojom.JpegDecodeAcceleratorRequest"]);
    }
    return handles;
  };

  GpuService_CreateJpegDecodeAccelerator_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  GpuService_CreateJpegDecodeAccelerator_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.jda = handles[idx++];;
    return idx;
  };

  GpuService_CreateJpegDecodeAccelerator_Params.validate = function(messageValidator, offset) {
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


    // validate GpuService_CreateJpegDecodeAccelerator_Params.jda
    err = messageValidator.validateInterfaceRequest(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  GpuService_CreateJpegDecodeAccelerator_Params.encodedSize = codec.kStructHeaderSize + 8;

  GpuService_CreateJpegDecodeAccelerator_Params.decode = function(decoder) {
    var packed;
    var val = new GpuService_CreateJpegDecodeAccelerator_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.jda = decoder.decodeStruct(codec.InterfaceRequest);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  GpuService_CreateJpegDecodeAccelerator_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(GpuService_CreateJpegDecodeAccelerator_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.InterfaceRequest, val.jda);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function GpuService_CreateJpegEncodeAccelerator_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  GpuService_CreateJpegEncodeAccelerator_Params.prototype.initDefaults_ = function() {
    this.jea = new bindings.InterfaceRequest();
  };
  GpuService_CreateJpegEncodeAccelerator_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  GpuService_CreateJpegEncodeAccelerator_Params.generate = function(generator_) {
    var generated = new GpuService_CreateJpegEncodeAccelerator_Params;
    generated.jea = generator_.generateInterfaceRequest("media.mojom.JpegEncodeAccelerator", false);
    return generated;
  };

  GpuService_CreateJpegEncodeAccelerator_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.jea = mutator_.mutateInterfaceRequest(this.jea, "media.mojom.JpegEncodeAccelerator", false);
    }
    return this;
  };
  GpuService_CreateJpegEncodeAccelerator_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.jea !== null) {
      Array.prototype.push.apply(handles, ["media.mojom.JpegEncodeAcceleratorRequest"]);
    }
    return handles;
  };

  GpuService_CreateJpegEncodeAccelerator_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  GpuService_CreateJpegEncodeAccelerator_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.jea = handles[idx++];;
    return idx;
  };

  GpuService_CreateJpegEncodeAccelerator_Params.validate = function(messageValidator, offset) {
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


    // validate GpuService_CreateJpegEncodeAccelerator_Params.jea
    err = messageValidator.validateInterfaceRequest(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  GpuService_CreateJpegEncodeAccelerator_Params.encodedSize = codec.kStructHeaderSize + 8;

  GpuService_CreateJpegEncodeAccelerator_Params.decode = function(decoder) {
    var packed;
    var val = new GpuService_CreateJpegEncodeAccelerator_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.jea = decoder.decodeStruct(codec.InterfaceRequest);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  GpuService_CreateJpegEncodeAccelerator_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(GpuService_CreateJpegEncodeAccelerator_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.InterfaceRequest, val.jea);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function GpuService_CreateVideoEncodeAcceleratorProvider_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  GpuService_CreateVideoEncodeAcceleratorProvider_Params.prototype.initDefaults_ = function() {
    this.veaProvider = new bindings.InterfaceRequest();
  };
  GpuService_CreateVideoEncodeAcceleratorProvider_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  GpuService_CreateVideoEncodeAcceleratorProvider_Params.generate = function(generator_) {
    var generated = new GpuService_CreateVideoEncodeAcceleratorProvider_Params;
    generated.veaProvider = generator_.generateInterfaceRequest("media.mojom.VideoEncodeAcceleratorProvider", false);
    return generated;
  };

  GpuService_CreateVideoEncodeAcceleratorProvider_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.veaProvider = mutator_.mutateInterfaceRequest(this.veaProvider, "media.mojom.VideoEncodeAcceleratorProvider", false);
    }
    return this;
  };
  GpuService_CreateVideoEncodeAcceleratorProvider_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.veaProvider !== null) {
      Array.prototype.push.apply(handles, ["media.mojom.VideoEncodeAcceleratorProviderRequest"]);
    }
    return handles;
  };

  GpuService_CreateVideoEncodeAcceleratorProvider_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  GpuService_CreateVideoEncodeAcceleratorProvider_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.veaProvider = handles[idx++];;
    return idx;
  };

  GpuService_CreateVideoEncodeAcceleratorProvider_Params.validate = function(messageValidator, offset) {
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


    // validate GpuService_CreateVideoEncodeAcceleratorProvider_Params.veaProvider
    err = messageValidator.validateInterfaceRequest(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  GpuService_CreateVideoEncodeAcceleratorProvider_Params.encodedSize = codec.kStructHeaderSize + 8;

  GpuService_CreateVideoEncodeAcceleratorProvider_Params.decode = function(decoder) {
    var packed;
    var val = new GpuService_CreateVideoEncodeAcceleratorProvider_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.veaProvider = decoder.decodeStruct(codec.InterfaceRequest);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  GpuService_CreateVideoEncodeAcceleratorProvider_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(GpuService_CreateVideoEncodeAcceleratorProvider_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.InterfaceRequest, val.veaProvider);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function GpuService_CreateGpuMemoryBuffer_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  GpuService_CreateGpuMemoryBuffer_Params.prototype.initDefaults_ = function() {
    this.id = null;
    this.size = null;
    this.format = 0;
    this.usage = 0;
    this.clientId = 0;
    this.surfaceHandle = null;
  };
  GpuService_CreateGpuMemoryBuffer_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  GpuService_CreateGpuMemoryBuffer_Params.generate = function(generator_) {
    var generated = new GpuService_CreateGpuMemoryBuffer_Params;
    generated.id = generator_.generateStruct(gfx.mojom.GpuMemoryBufferId, false);
    generated.size = generator_.generateStruct(gfx.mojom.Size, false);
    generated.format = generator_.generateEnum(0, 19);
    generated.usage = generator_.generateEnum(0, 7);
    generated.clientId = generator_.generateInt32();
    generated.surfaceHandle = generator_.generateStruct(gpu.mojom.SurfaceHandle, false);
    return generated;
  };

  GpuService_CreateGpuMemoryBuffer_Params.prototype.mutate = function(mutator_) {
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
    if (mutator_.chooseMutateField()) {
      this.clientId = mutator_.mutateInt32(this.clientId);
    }
    if (mutator_.chooseMutateField()) {
      this.surfaceHandle = mutator_.mutateStruct(gpu.mojom.SurfaceHandle, false);
    }
    return this;
  };
  GpuService_CreateGpuMemoryBuffer_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  GpuService_CreateGpuMemoryBuffer_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  GpuService_CreateGpuMemoryBuffer_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  GpuService_CreateGpuMemoryBuffer_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 48}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;


    // validate GpuService_CreateGpuMemoryBuffer_Params.id
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, buffer_types$.GpuMemoryBufferId, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate GpuService_CreateGpuMemoryBuffer_Params.size
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, geometry$.Size, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate GpuService_CreateGpuMemoryBuffer_Params.format
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 16, buffer_types$.BufferFormat);
    if (err !== validator.validationError.NONE)
        return err;


    // validate GpuService_CreateGpuMemoryBuffer_Params.usage
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 20, buffer_types$.BufferUsage);
    if (err !== validator.validationError.NONE)
        return err;



    // validate GpuService_CreateGpuMemoryBuffer_Params.surfaceHandle
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 32, surface_handle$.SurfaceHandle, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  GpuService_CreateGpuMemoryBuffer_Params.encodedSize = codec.kStructHeaderSize + 40;

  GpuService_CreateGpuMemoryBuffer_Params.decode = function(decoder) {
    var packed;
    var val = new GpuService_CreateGpuMemoryBuffer_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.id = decoder.decodeStructPointer(buffer_types$.GpuMemoryBufferId);
    val.size = decoder.decodeStructPointer(geometry$.Size);
    val.format = decoder.decodeStruct(codec.Int32);
    val.usage = decoder.decodeStruct(codec.Int32);
    val.clientId = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.surfaceHandle = decoder.decodeStructPointer(surface_handle$.SurfaceHandle);
    return val;
  };

  GpuService_CreateGpuMemoryBuffer_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(GpuService_CreateGpuMemoryBuffer_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(buffer_types$.GpuMemoryBufferId, val.id);
    encoder.encodeStructPointer(geometry$.Size, val.size);
    encoder.encodeStruct(codec.Int32, val.format);
    encoder.encodeStruct(codec.Int32, val.usage);
    encoder.encodeStruct(codec.Int32, val.clientId);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(surface_handle$.SurfaceHandle, val.surfaceHandle);
  };
  function GpuService_CreateGpuMemoryBuffer_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  GpuService_CreateGpuMemoryBuffer_ResponseParams.prototype.initDefaults_ = function() {
    this.bufferHandle = null;
  };
  GpuService_CreateGpuMemoryBuffer_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  GpuService_CreateGpuMemoryBuffer_ResponseParams.generate = function(generator_) {
    var generated = new GpuService_CreateGpuMemoryBuffer_ResponseParams;
    generated.bufferHandle = generator_.generateStruct(gfx.mojom.GpuMemoryBufferHandle, false);
    return generated;
  };

  GpuService_CreateGpuMemoryBuffer_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.bufferHandle = mutator_.mutateStruct(gfx.mojom.GpuMemoryBufferHandle, false);
    }
    return this;
  };
  GpuService_CreateGpuMemoryBuffer_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.bufferHandle !== null) {
      Array.prototype.push.apply(handles, this.bufferHandle.getHandleDeps());
    }
    return handles;
  };

  GpuService_CreateGpuMemoryBuffer_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  GpuService_CreateGpuMemoryBuffer_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    idx = this.bufferHandle.setHandlesInternal_(handles, idx);
    return idx;
  };

  GpuService_CreateGpuMemoryBuffer_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate GpuService_CreateGpuMemoryBuffer_ResponseParams.bufferHandle
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, buffer_types$.GpuMemoryBufferHandle, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  GpuService_CreateGpuMemoryBuffer_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  GpuService_CreateGpuMemoryBuffer_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new GpuService_CreateGpuMemoryBuffer_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.bufferHandle = decoder.decodeStructPointer(buffer_types$.GpuMemoryBufferHandle);
    return val;
  };

  GpuService_CreateGpuMemoryBuffer_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(GpuService_CreateGpuMemoryBuffer_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(buffer_types$.GpuMemoryBufferHandle, val.bufferHandle);
  };
  function GpuService_DestroyGpuMemoryBuffer_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  GpuService_DestroyGpuMemoryBuffer_Params.prototype.initDefaults_ = function() {
    this.id = null;
    this.clientId = 0;
    this.syncToken = null;
  };
  GpuService_DestroyGpuMemoryBuffer_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  GpuService_DestroyGpuMemoryBuffer_Params.generate = function(generator_) {
    var generated = new GpuService_DestroyGpuMemoryBuffer_Params;
    generated.id = generator_.generateStruct(gfx.mojom.GpuMemoryBufferId, false);
    generated.clientId = generator_.generateInt32();
    generated.syncToken = generator_.generateStruct(gpu.mojom.SyncToken, false);
    return generated;
  };

  GpuService_DestroyGpuMemoryBuffer_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.id = mutator_.mutateStruct(gfx.mojom.GpuMemoryBufferId, false);
    }
    if (mutator_.chooseMutateField()) {
      this.clientId = mutator_.mutateInt32(this.clientId);
    }
    if (mutator_.chooseMutateField()) {
      this.syncToken = mutator_.mutateStruct(gpu.mojom.SyncToken, false);
    }
    return this;
  };
  GpuService_DestroyGpuMemoryBuffer_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  GpuService_DestroyGpuMemoryBuffer_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  GpuService_DestroyGpuMemoryBuffer_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  GpuService_DestroyGpuMemoryBuffer_Params.validate = function(messageValidator, offset) {
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


    // validate GpuService_DestroyGpuMemoryBuffer_Params.id
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, buffer_types$.GpuMemoryBufferId, false);
    if (err !== validator.validationError.NONE)
        return err;



    // validate GpuService_DestroyGpuMemoryBuffer_Params.syncToken
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, sync_token$.SyncToken, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  GpuService_DestroyGpuMemoryBuffer_Params.encodedSize = codec.kStructHeaderSize + 24;

  GpuService_DestroyGpuMemoryBuffer_Params.decode = function(decoder) {
    var packed;
    var val = new GpuService_DestroyGpuMemoryBuffer_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.id = decoder.decodeStructPointer(buffer_types$.GpuMemoryBufferId);
    val.clientId = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.syncToken = decoder.decodeStructPointer(sync_token$.SyncToken);
    return val;
  };

  GpuService_DestroyGpuMemoryBuffer_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(GpuService_DestroyGpuMemoryBuffer_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(buffer_types$.GpuMemoryBufferId, val.id);
    encoder.encodeStruct(codec.Int32, val.clientId);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(sync_token$.SyncToken, val.syncToken);
  };
  function GpuService_GetVideoMemoryUsageStats_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  GpuService_GetVideoMemoryUsageStats_Params.prototype.initDefaults_ = function() {
  };
  GpuService_GetVideoMemoryUsageStats_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  GpuService_GetVideoMemoryUsageStats_Params.generate = function(generator_) {
    var generated = new GpuService_GetVideoMemoryUsageStats_Params;
    return generated;
  };

  GpuService_GetVideoMemoryUsageStats_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  GpuService_GetVideoMemoryUsageStats_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  GpuService_GetVideoMemoryUsageStats_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  GpuService_GetVideoMemoryUsageStats_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  GpuService_GetVideoMemoryUsageStats_Params.validate = function(messageValidator, offset) {
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

  GpuService_GetVideoMemoryUsageStats_Params.encodedSize = codec.kStructHeaderSize + 0;

  GpuService_GetVideoMemoryUsageStats_Params.decode = function(decoder) {
    var packed;
    var val = new GpuService_GetVideoMemoryUsageStats_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  GpuService_GetVideoMemoryUsageStats_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(GpuService_GetVideoMemoryUsageStats_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function GpuService_GetVideoMemoryUsageStats_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  GpuService_GetVideoMemoryUsageStats_ResponseParams.prototype.initDefaults_ = function() {
    this.stats = null;
  };
  GpuService_GetVideoMemoryUsageStats_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  GpuService_GetVideoMemoryUsageStats_ResponseParams.generate = function(generator_) {
    var generated = new GpuService_GetVideoMemoryUsageStats_ResponseParams;
    generated.stats = generator_.generateStruct(gpu.mojom.VideoMemoryUsageStats, false);
    return generated;
  };

  GpuService_GetVideoMemoryUsageStats_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.stats = mutator_.mutateStruct(gpu.mojom.VideoMemoryUsageStats, false);
    }
    return this;
  };
  GpuService_GetVideoMemoryUsageStats_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  GpuService_GetVideoMemoryUsageStats_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  GpuService_GetVideoMemoryUsageStats_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  GpuService_GetVideoMemoryUsageStats_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate GpuService_GetVideoMemoryUsageStats_ResponseParams.stats
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, memory_stats$.VideoMemoryUsageStats, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  GpuService_GetVideoMemoryUsageStats_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  GpuService_GetVideoMemoryUsageStats_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new GpuService_GetVideoMemoryUsageStats_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.stats = decoder.decodeStructPointer(memory_stats$.VideoMemoryUsageStats);
    return val;
  };

  GpuService_GetVideoMemoryUsageStats_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(GpuService_GetVideoMemoryUsageStats_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(memory_stats$.VideoMemoryUsageStats, val.stats);
  };
  function GpuService_RequestCompleteGpuInfo_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  GpuService_RequestCompleteGpuInfo_Params.prototype.initDefaults_ = function() {
  };
  GpuService_RequestCompleteGpuInfo_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  GpuService_RequestCompleteGpuInfo_Params.generate = function(generator_) {
    var generated = new GpuService_RequestCompleteGpuInfo_Params;
    return generated;
  };

  GpuService_RequestCompleteGpuInfo_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  GpuService_RequestCompleteGpuInfo_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  GpuService_RequestCompleteGpuInfo_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  GpuService_RequestCompleteGpuInfo_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  GpuService_RequestCompleteGpuInfo_Params.validate = function(messageValidator, offset) {
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

  GpuService_RequestCompleteGpuInfo_Params.encodedSize = codec.kStructHeaderSize + 0;

  GpuService_RequestCompleteGpuInfo_Params.decode = function(decoder) {
    var packed;
    var val = new GpuService_RequestCompleteGpuInfo_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  GpuService_RequestCompleteGpuInfo_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(GpuService_RequestCompleteGpuInfo_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function GpuService_RequestCompleteGpuInfo_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  GpuService_RequestCompleteGpuInfo_ResponseParams.prototype.initDefaults_ = function() {
    this.gpuInfo = null;
  };
  GpuService_RequestCompleteGpuInfo_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  GpuService_RequestCompleteGpuInfo_ResponseParams.generate = function(generator_) {
    var generated = new GpuService_RequestCompleteGpuInfo_ResponseParams;
    generated.gpuInfo = generator_.generateStruct(gpu.mojom.GpuInfo, false);
    return generated;
  };

  GpuService_RequestCompleteGpuInfo_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.gpuInfo = mutator_.mutateStruct(gpu.mojom.GpuInfo, false);
    }
    return this;
  };
  GpuService_RequestCompleteGpuInfo_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  GpuService_RequestCompleteGpuInfo_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  GpuService_RequestCompleteGpuInfo_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  GpuService_RequestCompleteGpuInfo_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate GpuService_RequestCompleteGpuInfo_ResponseParams.gpuInfo
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, gpu_info$.GpuInfo, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  GpuService_RequestCompleteGpuInfo_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  GpuService_RequestCompleteGpuInfo_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new GpuService_RequestCompleteGpuInfo_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.gpuInfo = decoder.decodeStructPointer(gpu_info$.GpuInfo);
    return val;
  };

  GpuService_RequestCompleteGpuInfo_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(GpuService_RequestCompleteGpuInfo_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(gpu_info$.GpuInfo, val.gpuInfo);
  };
  function GpuService_GetGpuSupportedRuntimeVersion_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  GpuService_GetGpuSupportedRuntimeVersion_Params.prototype.initDefaults_ = function() {
  };
  GpuService_GetGpuSupportedRuntimeVersion_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  GpuService_GetGpuSupportedRuntimeVersion_Params.generate = function(generator_) {
    var generated = new GpuService_GetGpuSupportedRuntimeVersion_Params;
    return generated;
  };

  GpuService_GetGpuSupportedRuntimeVersion_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  GpuService_GetGpuSupportedRuntimeVersion_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  GpuService_GetGpuSupportedRuntimeVersion_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  GpuService_GetGpuSupportedRuntimeVersion_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  GpuService_GetGpuSupportedRuntimeVersion_Params.validate = function(messageValidator, offset) {
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

  GpuService_GetGpuSupportedRuntimeVersion_Params.encodedSize = codec.kStructHeaderSize + 0;

  GpuService_GetGpuSupportedRuntimeVersion_Params.decode = function(decoder) {
    var packed;
    var val = new GpuService_GetGpuSupportedRuntimeVersion_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  GpuService_GetGpuSupportedRuntimeVersion_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(GpuService_GetGpuSupportedRuntimeVersion_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function GpuService_GetGpuSupportedRuntimeVersion_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  GpuService_GetGpuSupportedRuntimeVersion_ResponseParams.prototype.initDefaults_ = function() {
    this.gpuInfo = null;
  };
  GpuService_GetGpuSupportedRuntimeVersion_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  GpuService_GetGpuSupportedRuntimeVersion_ResponseParams.generate = function(generator_) {
    var generated = new GpuService_GetGpuSupportedRuntimeVersion_ResponseParams;
    generated.gpuInfo = generator_.generateStruct(gpu.mojom.GpuInfo, false);
    return generated;
  };

  GpuService_GetGpuSupportedRuntimeVersion_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.gpuInfo = mutator_.mutateStruct(gpu.mojom.GpuInfo, false);
    }
    return this;
  };
  GpuService_GetGpuSupportedRuntimeVersion_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  GpuService_GetGpuSupportedRuntimeVersion_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  GpuService_GetGpuSupportedRuntimeVersion_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  GpuService_GetGpuSupportedRuntimeVersion_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate GpuService_GetGpuSupportedRuntimeVersion_ResponseParams.gpuInfo
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, gpu_info$.GpuInfo, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  GpuService_GetGpuSupportedRuntimeVersion_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  GpuService_GetGpuSupportedRuntimeVersion_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new GpuService_GetGpuSupportedRuntimeVersion_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.gpuInfo = decoder.decodeStructPointer(gpu_info$.GpuInfo);
    return val;
  };

  GpuService_GetGpuSupportedRuntimeVersion_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(GpuService_GetGpuSupportedRuntimeVersion_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(gpu_info$.GpuInfo, val.gpuInfo);
  };
  function GpuService_RequestHDRStatus_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  GpuService_RequestHDRStatus_Params.prototype.initDefaults_ = function() {
  };
  GpuService_RequestHDRStatus_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  GpuService_RequestHDRStatus_Params.generate = function(generator_) {
    var generated = new GpuService_RequestHDRStatus_Params;
    return generated;
  };

  GpuService_RequestHDRStatus_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  GpuService_RequestHDRStatus_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  GpuService_RequestHDRStatus_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  GpuService_RequestHDRStatus_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  GpuService_RequestHDRStatus_Params.validate = function(messageValidator, offset) {
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

  GpuService_RequestHDRStatus_Params.encodedSize = codec.kStructHeaderSize + 0;

  GpuService_RequestHDRStatus_Params.decode = function(decoder) {
    var packed;
    var val = new GpuService_RequestHDRStatus_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  GpuService_RequestHDRStatus_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(GpuService_RequestHDRStatus_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function GpuService_RequestHDRStatus_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  GpuService_RequestHDRStatus_ResponseParams.prototype.initDefaults_ = function() {
    this.hdrEnabled = false;
  };
  GpuService_RequestHDRStatus_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  GpuService_RequestHDRStatus_ResponseParams.generate = function(generator_) {
    var generated = new GpuService_RequestHDRStatus_ResponseParams;
    generated.hdrEnabled = generator_.generateBool();
    return generated;
  };

  GpuService_RequestHDRStatus_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.hdrEnabled = mutator_.mutateBool(this.hdrEnabled);
    }
    return this;
  };
  GpuService_RequestHDRStatus_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  GpuService_RequestHDRStatus_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  GpuService_RequestHDRStatus_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  GpuService_RequestHDRStatus_ResponseParams.validate = function(messageValidator, offset) {
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

  GpuService_RequestHDRStatus_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  GpuService_RequestHDRStatus_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new GpuService_RequestHDRStatus_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.hdrEnabled = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  GpuService_RequestHDRStatus_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(GpuService_RequestHDRStatus_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.hdrEnabled & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function GpuService_LoadedShader_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  GpuService_LoadedShader_Params.prototype.initDefaults_ = function() {
    this.key = null;
    this.data = null;
  };
  GpuService_LoadedShader_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  GpuService_LoadedShader_Params.generate = function(generator_) {
    var generated = new GpuService_LoadedShader_Params;
    generated.key = generator_.generateString(false);
    generated.data = generator_.generateString(false);
    return generated;
  };

  GpuService_LoadedShader_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.key = mutator_.mutateString(this.key, false);
    }
    if (mutator_.chooseMutateField()) {
      this.data = mutator_.mutateString(this.data, false);
    }
    return this;
  };
  GpuService_LoadedShader_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  GpuService_LoadedShader_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  GpuService_LoadedShader_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  GpuService_LoadedShader_Params.validate = function(messageValidator, offset) {
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


    // validate GpuService_LoadedShader_Params.key
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate GpuService_LoadedShader_Params.data
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  GpuService_LoadedShader_Params.encodedSize = codec.kStructHeaderSize + 16;

  GpuService_LoadedShader_Params.decode = function(decoder) {
    var packed;
    var val = new GpuService_LoadedShader_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.key = decoder.decodeStruct(codec.String);
    val.data = decoder.decodeStruct(codec.String);
    return val;
  };

  GpuService_LoadedShader_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(GpuService_LoadedShader_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.key);
    encoder.encodeStruct(codec.String, val.data);
  };
  function GpuService_DestroyingVideoSurface_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  GpuService_DestroyingVideoSurface_Params.prototype.initDefaults_ = function() {
    this.surfaceId = 0;
  };
  GpuService_DestroyingVideoSurface_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  GpuService_DestroyingVideoSurface_Params.generate = function(generator_) {
    var generated = new GpuService_DestroyingVideoSurface_Params;
    generated.surfaceId = generator_.generateInt32();
    return generated;
  };

  GpuService_DestroyingVideoSurface_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.surfaceId = mutator_.mutateInt32(this.surfaceId);
    }
    return this;
  };
  GpuService_DestroyingVideoSurface_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  GpuService_DestroyingVideoSurface_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  GpuService_DestroyingVideoSurface_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  GpuService_DestroyingVideoSurface_Params.validate = function(messageValidator, offset) {
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

  GpuService_DestroyingVideoSurface_Params.encodedSize = codec.kStructHeaderSize + 8;

  GpuService_DestroyingVideoSurface_Params.decode = function(decoder) {
    var packed;
    var val = new GpuService_DestroyingVideoSurface_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.surfaceId = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  GpuService_DestroyingVideoSurface_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(GpuService_DestroyingVideoSurface_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.surfaceId);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function GpuService_DestroyingVideoSurface_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  GpuService_DestroyingVideoSurface_ResponseParams.prototype.initDefaults_ = function() {
  };
  GpuService_DestroyingVideoSurface_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  GpuService_DestroyingVideoSurface_ResponseParams.generate = function(generator_) {
    var generated = new GpuService_DestroyingVideoSurface_ResponseParams;
    return generated;
  };

  GpuService_DestroyingVideoSurface_ResponseParams.prototype.mutate = function(mutator_) {
    return this;
  };
  GpuService_DestroyingVideoSurface_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  GpuService_DestroyingVideoSurface_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  GpuService_DestroyingVideoSurface_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  GpuService_DestroyingVideoSurface_ResponseParams.validate = function(messageValidator, offset) {
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

  GpuService_DestroyingVideoSurface_ResponseParams.encodedSize = codec.kStructHeaderSize + 0;

  GpuService_DestroyingVideoSurface_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new GpuService_DestroyingVideoSurface_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  GpuService_DestroyingVideoSurface_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(GpuService_DestroyingVideoSurface_ResponseParams.encodedSize);
    encoder.writeUint32(0);
  };
  function GpuService_WakeUpGpu_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  GpuService_WakeUpGpu_Params.prototype.initDefaults_ = function() {
  };
  GpuService_WakeUpGpu_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  GpuService_WakeUpGpu_Params.generate = function(generator_) {
    var generated = new GpuService_WakeUpGpu_Params;
    return generated;
  };

  GpuService_WakeUpGpu_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  GpuService_WakeUpGpu_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  GpuService_WakeUpGpu_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  GpuService_WakeUpGpu_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  GpuService_WakeUpGpu_Params.validate = function(messageValidator, offset) {
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

  GpuService_WakeUpGpu_Params.encodedSize = codec.kStructHeaderSize + 0;

  GpuService_WakeUpGpu_Params.decode = function(decoder) {
    var packed;
    var val = new GpuService_WakeUpGpu_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  GpuService_WakeUpGpu_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(GpuService_WakeUpGpu_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function GpuService_GpuSwitched_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  GpuService_GpuSwitched_Params.prototype.initDefaults_ = function() {
  };
  GpuService_GpuSwitched_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  GpuService_GpuSwitched_Params.generate = function(generator_) {
    var generated = new GpuService_GpuSwitched_Params;
    return generated;
  };

  GpuService_GpuSwitched_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  GpuService_GpuSwitched_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  GpuService_GpuSwitched_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  GpuService_GpuSwitched_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  GpuService_GpuSwitched_Params.validate = function(messageValidator, offset) {
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

  GpuService_GpuSwitched_Params.encodedSize = codec.kStructHeaderSize + 0;

  GpuService_GpuSwitched_Params.decode = function(decoder) {
    var packed;
    var val = new GpuService_GpuSwitched_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  GpuService_GpuSwitched_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(GpuService_GpuSwitched_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function GpuService_DestroyAllChannels_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  GpuService_DestroyAllChannels_Params.prototype.initDefaults_ = function() {
  };
  GpuService_DestroyAllChannels_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  GpuService_DestroyAllChannels_Params.generate = function(generator_) {
    var generated = new GpuService_DestroyAllChannels_Params;
    return generated;
  };

  GpuService_DestroyAllChannels_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  GpuService_DestroyAllChannels_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  GpuService_DestroyAllChannels_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  GpuService_DestroyAllChannels_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  GpuService_DestroyAllChannels_Params.validate = function(messageValidator, offset) {
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

  GpuService_DestroyAllChannels_Params.encodedSize = codec.kStructHeaderSize + 0;

  GpuService_DestroyAllChannels_Params.decode = function(decoder) {
    var packed;
    var val = new GpuService_DestroyAllChannels_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  GpuService_DestroyAllChannels_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(GpuService_DestroyAllChannels_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function GpuService_OnBackgroundCleanup_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  GpuService_OnBackgroundCleanup_Params.prototype.initDefaults_ = function() {
  };
  GpuService_OnBackgroundCleanup_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  GpuService_OnBackgroundCleanup_Params.generate = function(generator_) {
    var generated = new GpuService_OnBackgroundCleanup_Params;
    return generated;
  };

  GpuService_OnBackgroundCleanup_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  GpuService_OnBackgroundCleanup_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  GpuService_OnBackgroundCleanup_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  GpuService_OnBackgroundCleanup_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  GpuService_OnBackgroundCleanup_Params.validate = function(messageValidator, offset) {
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

  GpuService_OnBackgroundCleanup_Params.encodedSize = codec.kStructHeaderSize + 0;

  GpuService_OnBackgroundCleanup_Params.decode = function(decoder) {
    var packed;
    var val = new GpuService_OnBackgroundCleanup_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  GpuService_OnBackgroundCleanup_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(GpuService_OnBackgroundCleanup_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function GpuService_OnBackgrounded_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  GpuService_OnBackgrounded_Params.prototype.initDefaults_ = function() {
  };
  GpuService_OnBackgrounded_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  GpuService_OnBackgrounded_Params.generate = function(generator_) {
    var generated = new GpuService_OnBackgrounded_Params;
    return generated;
  };

  GpuService_OnBackgrounded_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  GpuService_OnBackgrounded_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  GpuService_OnBackgrounded_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  GpuService_OnBackgrounded_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  GpuService_OnBackgrounded_Params.validate = function(messageValidator, offset) {
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

  GpuService_OnBackgrounded_Params.encodedSize = codec.kStructHeaderSize + 0;

  GpuService_OnBackgrounded_Params.decode = function(decoder) {
    var packed;
    var val = new GpuService_OnBackgrounded_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  GpuService_OnBackgrounded_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(GpuService_OnBackgrounded_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function GpuService_OnForegrounded_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  GpuService_OnForegrounded_Params.prototype.initDefaults_ = function() {
  };
  GpuService_OnForegrounded_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  GpuService_OnForegrounded_Params.generate = function(generator_) {
    var generated = new GpuService_OnForegrounded_Params;
    return generated;
  };

  GpuService_OnForegrounded_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  GpuService_OnForegrounded_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  GpuService_OnForegrounded_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  GpuService_OnForegrounded_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  GpuService_OnForegrounded_Params.validate = function(messageValidator, offset) {
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

  GpuService_OnForegrounded_Params.encodedSize = codec.kStructHeaderSize + 0;

  GpuService_OnForegrounded_Params.decode = function(decoder) {
    var packed;
    var val = new GpuService_OnForegrounded_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  GpuService_OnForegrounded_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(GpuService_OnForegrounded_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function GpuService_Crash_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  GpuService_Crash_Params.prototype.initDefaults_ = function() {
  };
  GpuService_Crash_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  GpuService_Crash_Params.generate = function(generator_) {
    var generated = new GpuService_Crash_Params;
    return generated;
  };

  GpuService_Crash_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  GpuService_Crash_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  GpuService_Crash_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  GpuService_Crash_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  GpuService_Crash_Params.validate = function(messageValidator, offset) {
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

  GpuService_Crash_Params.encodedSize = codec.kStructHeaderSize + 0;

  GpuService_Crash_Params.decode = function(decoder) {
    var packed;
    var val = new GpuService_Crash_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  GpuService_Crash_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(GpuService_Crash_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function GpuService_Hang_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  GpuService_Hang_Params.prototype.initDefaults_ = function() {
  };
  GpuService_Hang_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  GpuService_Hang_Params.generate = function(generator_) {
    var generated = new GpuService_Hang_Params;
    return generated;
  };

  GpuService_Hang_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  GpuService_Hang_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  GpuService_Hang_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  GpuService_Hang_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  GpuService_Hang_Params.validate = function(messageValidator, offset) {
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

  GpuService_Hang_Params.encodedSize = codec.kStructHeaderSize + 0;

  GpuService_Hang_Params.decode = function(decoder) {
    var packed;
    var val = new GpuService_Hang_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  GpuService_Hang_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(GpuService_Hang_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function GpuService_ThrowJavaException_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  GpuService_ThrowJavaException_Params.prototype.initDefaults_ = function() {
  };
  GpuService_ThrowJavaException_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  GpuService_ThrowJavaException_Params.generate = function(generator_) {
    var generated = new GpuService_ThrowJavaException_Params;
    return generated;
  };

  GpuService_ThrowJavaException_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  GpuService_ThrowJavaException_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  GpuService_ThrowJavaException_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  GpuService_ThrowJavaException_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  GpuService_ThrowJavaException_Params.validate = function(messageValidator, offset) {
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

  GpuService_ThrowJavaException_Params.encodedSize = codec.kStructHeaderSize + 0;

  GpuService_ThrowJavaException_Params.decode = function(decoder) {
    var packed;
    var val = new GpuService_ThrowJavaException_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  GpuService_ThrowJavaException_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(GpuService_ThrowJavaException_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function GpuService_Stop_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  GpuService_Stop_Params.prototype.initDefaults_ = function() {
  };
  GpuService_Stop_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  GpuService_Stop_Params.generate = function(generator_) {
    var generated = new GpuService_Stop_Params;
    return generated;
  };

  GpuService_Stop_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  GpuService_Stop_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  GpuService_Stop_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  GpuService_Stop_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  GpuService_Stop_Params.validate = function(messageValidator, offset) {
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

  GpuService_Stop_Params.encodedSize = codec.kStructHeaderSize + 0;

  GpuService_Stop_Params.decode = function(decoder) {
    var packed;
    var val = new GpuService_Stop_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  GpuService_Stop_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(GpuService_Stop_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function GpuService_Stop_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  GpuService_Stop_ResponseParams.prototype.initDefaults_ = function() {
  };
  GpuService_Stop_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  GpuService_Stop_ResponseParams.generate = function(generator_) {
    var generated = new GpuService_Stop_ResponseParams;
    return generated;
  };

  GpuService_Stop_ResponseParams.prototype.mutate = function(mutator_) {
    return this;
  };
  GpuService_Stop_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  GpuService_Stop_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  GpuService_Stop_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  GpuService_Stop_ResponseParams.validate = function(messageValidator, offset) {
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

  GpuService_Stop_ResponseParams.encodedSize = codec.kStructHeaderSize + 0;

  GpuService_Stop_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new GpuService_Stop_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  GpuService_Stop_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(GpuService_Stop_ResponseParams.encodedSize);
    encoder.writeUint32(0);
  };
  var kGpuService_EstablishGpuChannel_Name = 2051857121;
  var kGpuService_CloseChannel_Name = 2061244542;
  var kGpuService_CreateJpegDecodeAccelerator_Name = 865170673;
  var kGpuService_CreateJpegEncodeAccelerator_Name = 130236699;
  var kGpuService_CreateVideoEncodeAcceleratorProvider_Name = 940732144;
  var kGpuService_CreateGpuMemoryBuffer_Name = 1264841524;
  var kGpuService_DestroyGpuMemoryBuffer_Name = 344792680;
  var kGpuService_GetVideoMemoryUsageStats_Name = 1462905674;
  var kGpuService_RequestCompleteGpuInfo_Name = 855175645;
  var kGpuService_GetGpuSupportedRuntimeVersion_Name = 1696297665;
  var kGpuService_RequestHDRStatus_Name = 290290387;
  var kGpuService_LoadedShader_Name = 1045022890;
  var kGpuService_DestroyingVideoSurface_Name = 2097800633;
  var kGpuService_WakeUpGpu_Name = 374609234;
  var kGpuService_GpuSwitched_Name = 1179331894;
  var kGpuService_DestroyAllChannels_Name = 97513086;
  var kGpuService_OnBackgroundCleanup_Name = 253447893;
  var kGpuService_OnBackgrounded_Name = 2077220214;
  var kGpuService_OnForegrounded_Name = 346495784;
  var kGpuService_Crash_Name = 1850768895;
  var kGpuService_Hang_Name = 1636008310;
  var kGpuService_ThrowJavaException_Name = 395888106;
  var kGpuService_Stop_Name = 213553540;

  function GpuServicePtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(GpuService,
                                                   handleOrPtrInfo);
  }

  function GpuServiceAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        GpuService, associatedInterfacePtrInfo);
  }

  GpuServiceAssociatedPtr.prototype =
      Object.create(GpuServicePtr.prototype);
  GpuServiceAssociatedPtr.prototype.constructor =
      GpuServiceAssociatedPtr;

  function GpuServiceProxy(receiver) {
    this.receiver_ = receiver;
  }
  GpuServicePtr.prototype.establishGpuChannel = function() {
    return GpuServiceProxy.prototype.establishGpuChannel
        .apply(this.ptr.getProxy(), arguments);
  };

  GpuServiceProxy.prototype.establishGpuChannel = function(clientId, clientTracingId, isGpuHost) {
    var params_ = new GpuService_EstablishGpuChannel_Params();
    params_.clientId = clientId;
    params_.clientTracingId = clientTracingId;
    params_.isGpuHost = isGpuHost;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kGpuService_EstablishGpuChannel_Name,
          codec.align(GpuService_EstablishGpuChannel_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(GpuService_EstablishGpuChannel_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(GpuService_EstablishGpuChannel_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  GpuServicePtr.prototype.closeChannel = function() {
    return GpuServiceProxy.prototype.closeChannel
        .apply(this.ptr.getProxy(), arguments);
  };

  GpuServiceProxy.prototype.closeChannel = function(clientId) {
    var params_ = new GpuService_CloseChannel_Params();
    params_.clientId = clientId;
    var builder = new codec.MessageV0Builder(
        kGpuService_CloseChannel_Name,
        codec.align(GpuService_CloseChannel_Params.encodedSize));
    builder.encodeStruct(GpuService_CloseChannel_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  GpuServicePtr.prototype.createJpegDecodeAccelerator = function() {
    return GpuServiceProxy.prototype.createJpegDecodeAccelerator
        .apply(this.ptr.getProxy(), arguments);
  };

  GpuServiceProxy.prototype.createJpegDecodeAccelerator = function(jda) {
    var params_ = new GpuService_CreateJpegDecodeAccelerator_Params();
    params_.jda = jda;
    var builder = new codec.MessageV0Builder(
        kGpuService_CreateJpegDecodeAccelerator_Name,
        codec.align(GpuService_CreateJpegDecodeAccelerator_Params.encodedSize));
    builder.encodeStruct(GpuService_CreateJpegDecodeAccelerator_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  GpuServicePtr.prototype.createJpegEncodeAccelerator = function() {
    return GpuServiceProxy.prototype.createJpegEncodeAccelerator
        .apply(this.ptr.getProxy(), arguments);
  };

  GpuServiceProxy.prototype.createJpegEncodeAccelerator = function(jea) {
    var params_ = new GpuService_CreateJpegEncodeAccelerator_Params();
    params_.jea = jea;
    var builder = new codec.MessageV0Builder(
        kGpuService_CreateJpegEncodeAccelerator_Name,
        codec.align(GpuService_CreateJpegEncodeAccelerator_Params.encodedSize));
    builder.encodeStruct(GpuService_CreateJpegEncodeAccelerator_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  GpuServicePtr.prototype.createVideoEncodeAcceleratorProvider = function() {
    return GpuServiceProxy.prototype.createVideoEncodeAcceleratorProvider
        .apply(this.ptr.getProxy(), arguments);
  };

  GpuServiceProxy.prototype.createVideoEncodeAcceleratorProvider = function(veaProvider) {
    var params_ = new GpuService_CreateVideoEncodeAcceleratorProvider_Params();
    params_.veaProvider = veaProvider;
    var builder = new codec.MessageV0Builder(
        kGpuService_CreateVideoEncodeAcceleratorProvider_Name,
        codec.align(GpuService_CreateVideoEncodeAcceleratorProvider_Params.encodedSize));
    builder.encodeStruct(GpuService_CreateVideoEncodeAcceleratorProvider_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  GpuServicePtr.prototype.createGpuMemoryBuffer = function() {
    return GpuServiceProxy.prototype.createGpuMemoryBuffer
        .apply(this.ptr.getProxy(), arguments);
  };

  GpuServiceProxy.prototype.createGpuMemoryBuffer = function(id, size, format, usage, clientId, surfaceHandle) {
    var params_ = new GpuService_CreateGpuMemoryBuffer_Params();
    params_.id = id;
    params_.size = size;
    params_.format = format;
    params_.usage = usage;
    params_.clientId = clientId;
    params_.surfaceHandle = surfaceHandle;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kGpuService_CreateGpuMemoryBuffer_Name,
          codec.align(GpuService_CreateGpuMemoryBuffer_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(GpuService_CreateGpuMemoryBuffer_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(GpuService_CreateGpuMemoryBuffer_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  GpuServicePtr.prototype.destroyGpuMemoryBuffer = function() {
    return GpuServiceProxy.prototype.destroyGpuMemoryBuffer
        .apply(this.ptr.getProxy(), arguments);
  };

  GpuServiceProxy.prototype.destroyGpuMemoryBuffer = function(id, clientId, syncToken) {
    var params_ = new GpuService_DestroyGpuMemoryBuffer_Params();
    params_.id = id;
    params_.clientId = clientId;
    params_.syncToken = syncToken;
    var builder = new codec.MessageV0Builder(
        kGpuService_DestroyGpuMemoryBuffer_Name,
        codec.align(GpuService_DestroyGpuMemoryBuffer_Params.encodedSize));
    builder.encodeStruct(GpuService_DestroyGpuMemoryBuffer_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  GpuServicePtr.prototype.getVideoMemoryUsageStats = function() {
    return GpuServiceProxy.prototype.getVideoMemoryUsageStats
        .apply(this.ptr.getProxy(), arguments);
  };

  GpuServiceProxy.prototype.getVideoMemoryUsageStats = function() {
    var params_ = new GpuService_GetVideoMemoryUsageStats_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kGpuService_GetVideoMemoryUsageStats_Name,
          codec.align(GpuService_GetVideoMemoryUsageStats_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(GpuService_GetVideoMemoryUsageStats_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(GpuService_GetVideoMemoryUsageStats_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  GpuServicePtr.prototype.requestCompleteGpuInfo = function() {
    return GpuServiceProxy.prototype.requestCompleteGpuInfo
        .apply(this.ptr.getProxy(), arguments);
  };

  GpuServiceProxy.prototype.requestCompleteGpuInfo = function() {
    var params_ = new GpuService_RequestCompleteGpuInfo_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kGpuService_RequestCompleteGpuInfo_Name,
          codec.align(GpuService_RequestCompleteGpuInfo_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(GpuService_RequestCompleteGpuInfo_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(GpuService_RequestCompleteGpuInfo_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  GpuServicePtr.prototype.getGpuSupportedRuntimeVersion = function() {
    return GpuServiceProxy.prototype.getGpuSupportedRuntimeVersion
        .apply(this.ptr.getProxy(), arguments);
  };

  GpuServiceProxy.prototype.getGpuSupportedRuntimeVersion = function() {
    var params_ = new GpuService_GetGpuSupportedRuntimeVersion_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kGpuService_GetGpuSupportedRuntimeVersion_Name,
          codec.align(GpuService_GetGpuSupportedRuntimeVersion_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(GpuService_GetGpuSupportedRuntimeVersion_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(GpuService_GetGpuSupportedRuntimeVersion_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  GpuServicePtr.prototype.requestHDRStatus = function() {
    return GpuServiceProxy.prototype.requestHDRStatus
        .apply(this.ptr.getProxy(), arguments);
  };

  GpuServiceProxy.prototype.requestHDRStatus = function() {
    var params_ = new GpuService_RequestHDRStatus_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kGpuService_RequestHDRStatus_Name,
          codec.align(GpuService_RequestHDRStatus_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(GpuService_RequestHDRStatus_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(GpuService_RequestHDRStatus_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  GpuServicePtr.prototype.loadedShader = function() {
    return GpuServiceProxy.prototype.loadedShader
        .apply(this.ptr.getProxy(), arguments);
  };

  GpuServiceProxy.prototype.loadedShader = function(key, data) {
    var params_ = new GpuService_LoadedShader_Params();
    params_.key = key;
    params_.data = data;
    var builder = new codec.MessageV0Builder(
        kGpuService_LoadedShader_Name,
        codec.align(GpuService_LoadedShader_Params.encodedSize));
    builder.encodeStruct(GpuService_LoadedShader_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  GpuServicePtr.prototype.destroyingVideoSurface = function() {
    return GpuServiceProxy.prototype.destroyingVideoSurface
        .apply(this.ptr.getProxy(), arguments);
  };

  GpuServiceProxy.prototype.destroyingVideoSurface = function(surfaceId) {
    var params_ = new GpuService_DestroyingVideoSurface_Params();
    params_.surfaceId = surfaceId;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kGpuService_DestroyingVideoSurface_Name,
          codec.align(GpuService_DestroyingVideoSurface_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(GpuService_DestroyingVideoSurface_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(GpuService_DestroyingVideoSurface_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  GpuServicePtr.prototype.wakeUpGpu = function() {
    return GpuServiceProxy.prototype.wakeUpGpu
        .apply(this.ptr.getProxy(), arguments);
  };

  GpuServiceProxy.prototype.wakeUpGpu = function() {
    var params_ = new GpuService_WakeUpGpu_Params();
    var builder = new codec.MessageV0Builder(
        kGpuService_WakeUpGpu_Name,
        codec.align(GpuService_WakeUpGpu_Params.encodedSize));
    builder.encodeStruct(GpuService_WakeUpGpu_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  GpuServicePtr.prototype.gpuSwitched = function() {
    return GpuServiceProxy.prototype.gpuSwitched
        .apply(this.ptr.getProxy(), arguments);
  };

  GpuServiceProxy.prototype.gpuSwitched = function() {
    var params_ = new GpuService_GpuSwitched_Params();
    var builder = new codec.MessageV0Builder(
        kGpuService_GpuSwitched_Name,
        codec.align(GpuService_GpuSwitched_Params.encodedSize));
    builder.encodeStruct(GpuService_GpuSwitched_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  GpuServicePtr.prototype.destroyAllChannels = function() {
    return GpuServiceProxy.prototype.destroyAllChannels
        .apply(this.ptr.getProxy(), arguments);
  };

  GpuServiceProxy.prototype.destroyAllChannels = function() {
    var params_ = new GpuService_DestroyAllChannels_Params();
    var builder = new codec.MessageV0Builder(
        kGpuService_DestroyAllChannels_Name,
        codec.align(GpuService_DestroyAllChannels_Params.encodedSize));
    builder.encodeStruct(GpuService_DestroyAllChannels_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  GpuServicePtr.prototype.onBackgroundCleanup = function() {
    return GpuServiceProxy.prototype.onBackgroundCleanup
        .apply(this.ptr.getProxy(), arguments);
  };

  GpuServiceProxy.prototype.onBackgroundCleanup = function() {
    var params_ = new GpuService_OnBackgroundCleanup_Params();
    var builder = new codec.MessageV0Builder(
        kGpuService_OnBackgroundCleanup_Name,
        codec.align(GpuService_OnBackgroundCleanup_Params.encodedSize));
    builder.encodeStruct(GpuService_OnBackgroundCleanup_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  GpuServicePtr.prototype.onBackgrounded = function() {
    return GpuServiceProxy.prototype.onBackgrounded
        .apply(this.ptr.getProxy(), arguments);
  };

  GpuServiceProxy.prototype.onBackgrounded = function() {
    var params_ = new GpuService_OnBackgrounded_Params();
    var builder = new codec.MessageV0Builder(
        kGpuService_OnBackgrounded_Name,
        codec.align(GpuService_OnBackgrounded_Params.encodedSize));
    builder.encodeStruct(GpuService_OnBackgrounded_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  GpuServicePtr.prototype.onForegrounded = function() {
    return GpuServiceProxy.prototype.onForegrounded
        .apply(this.ptr.getProxy(), arguments);
  };

  GpuServiceProxy.prototype.onForegrounded = function() {
    var params_ = new GpuService_OnForegrounded_Params();
    var builder = new codec.MessageV0Builder(
        kGpuService_OnForegrounded_Name,
        codec.align(GpuService_OnForegrounded_Params.encodedSize));
    builder.encodeStruct(GpuService_OnForegrounded_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  GpuServicePtr.prototype.crash = function() {
    return GpuServiceProxy.prototype.crash
        .apply(this.ptr.getProxy(), arguments);
  };

  GpuServiceProxy.prototype.crash = function() {
    var params_ = new GpuService_Crash_Params();
    var builder = new codec.MessageV0Builder(
        kGpuService_Crash_Name,
        codec.align(GpuService_Crash_Params.encodedSize));
    builder.encodeStruct(GpuService_Crash_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  GpuServicePtr.prototype.hang = function() {
    return GpuServiceProxy.prototype.hang
        .apply(this.ptr.getProxy(), arguments);
  };

  GpuServiceProxy.prototype.hang = function() {
    var params_ = new GpuService_Hang_Params();
    var builder = new codec.MessageV0Builder(
        kGpuService_Hang_Name,
        codec.align(GpuService_Hang_Params.encodedSize));
    builder.encodeStruct(GpuService_Hang_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  GpuServicePtr.prototype.throwJavaException = function() {
    return GpuServiceProxy.prototype.throwJavaException
        .apply(this.ptr.getProxy(), arguments);
  };

  GpuServiceProxy.prototype.throwJavaException = function() {
    var params_ = new GpuService_ThrowJavaException_Params();
    var builder = new codec.MessageV0Builder(
        kGpuService_ThrowJavaException_Name,
        codec.align(GpuService_ThrowJavaException_Params.encodedSize));
    builder.encodeStruct(GpuService_ThrowJavaException_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  GpuServicePtr.prototype.stop = function() {
    return GpuServiceProxy.prototype.stop
        .apply(this.ptr.getProxy(), arguments);
  };

  GpuServiceProxy.prototype.stop = function() {
    var params_ = new GpuService_Stop_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kGpuService_Stop_Name,
          codec.align(GpuService_Stop_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(GpuService_Stop_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(GpuService_Stop_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };

  function GpuServiceStub(delegate) {
    this.delegate_ = delegate;
  }
  GpuServiceStub.prototype.establishGpuChannel = function(clientId, clientTracingId, isGpuHost) {
    return this.delegate_ && this.delegate_.establishGpuChannel && this.delegate_.establishGpuChannel(clientId, clientTracingId, isGpuHost);
  }
  GpuServiceStub.prototype.closeChannel = function(clientId) {
    return this.delegate_ && this.delegate_.closeChannel && this.delegate_.closeChannel(clientId);
  }
  GpuServiceStub.prototype.createJpegDecodeAccelerator = function(jda) {
    return this.delegate_ && this.delegate_.createJpegDecodeAccelerator && this.delegate_.createJpegDecodeAccelerator(jda);
  }
  GpuServiceStub.prototype.createJpegEncodeAccelerator = function(jea) {
    return this.delegate_ && this.delegate_.createJpegEncodeAccelerator && this.delegate_.createJpegEncodeAccelerator(jea);
  }
  GpuServiceStub.prototype.createVideoEncodeAcceleratorProvider = function(veaProvider) {
    return this.delegate_ && this.delegate_.createVideoEncodeAcceleratorProvider && this.delegate_.createVideoEncodeAcceleratorProvider(veaProvider);
  }
  GpuServiceStub.prototype.createGpuMemoryBuffer = function(id, size, format, usage, clientId, surfaceHandle) {
    return this.delegate_ && this.delegate_.createGpuMemoryBuffer && this.delegate_.createGpuMemoryBuffer(id, size, format, usage, clientId, surfaceHandle);
  }
  GpuServiceStub.prototype.destroyGpuMemoryBuffer = function(id, clientId, syncToken) {
    return this.delegate_ && this.delegate_.destroyGpuMemoryBuffer && this.delegate_.destroyGpuMemoryBuffer(id, clientId, syncToken);
  }
  GpuServiceStub.prototype.getVideoMemoryUsageStats = function() {
    return this.delegate_ && this.delegate_.getVideoMemoryUsageStats && this.delegate_.getVideoMemoryUsageStats();
  }
  GpuServiceStub.prototype.requestCompleteGpuInfo = function() {
    return this.delegate_ && this.delegate_.requestCompleteGpuInfo && this.delegate_.requestCompleteGpuInfo();
  }
  GpuServiceStub.prototype.getGpuSupportedRuntimeVersion = function() {
    return this.delegate_ && this.delegate_.getGpuSupportedRuntimeVersion && this.delegate_.getGpuSupportedRuntimeVersion();
  }
  GpuServiceStub.prototype.requestHDRStatus = function() {
    return this.delegate_ && this.delegate_.requestHDRStatus && this.delegate_.requestHDRStatus();
  }
  GpuServiceStub.prototype.loadedShader = function(key, data) {
    return this.delegate_ && this.delegate_.loadedShader && this.delegate_.loadedShader(key, data);
  }
  GpuServiceStub.prototype.destroyingVideoSurface = function(surfaceId) {
    return this.delegate_ && this.delegate_.destroyingVideoSurface && this.delegate_.destroyingVideoSurface(surfaceId);
  }
  GpuServiceStub.prototype.wakeUpGpu = function() {
    return this.delegate_ && this.delegate_.wakeUpGpu && this.delegate_.wakeUpGpu();
  }
  GpuServiceStub.prototype.gpuSwitched = function() {
    return this.delegate_ && this.delegate_.gpuSwitched && this.delegate_.gpuSwitched();
  }
  GpuServiceStub.prototype.destroyAllChannels = function() {
    return this.delegate_ && this.delegate_.destroyAllChannels && this.delegate_.destroyAllChannels();
  }
  GpuServiceStub.prototype.onBackgroundCleanup = function() {
    return this.delegate_ && this.delegate_.onBackgroundCleanup && this.delegate_.onBackgroundCleanup();
  }
  GpuServiceStub.prototype.onBackgrounded = function() {
    return this.delegate_ && this.delegate_.onBackgrounded && this.delegate_.onBackgrounded();
  }
  GpuServiceStub.prototype.onForegrounded = function() {
    return this.delegate_ && this.delegate_.onForegrounded && this.delegate_.onForegrounded();
  }
  GpuServiceStub.prototype.crash = function() {
    return this.delegate_ && this.delegate_.crash && this.delegate_.crash();
  }
  GpuServiceStub.prototype.hang = function() {
    return this.delegate_ && this.delegate_.hang && this.delegate_.hang();
  }
  GpuServiceStub.prototype.throwJavaException = function() {
    return this.delegate_ && this.delegate_.throwJavaException && this.delegate_.throwJavaException();
  }
  GpuServiceStub.prototype.stop = function() {
    return this.delegate_ && this.delegate_.stop && this.delegate_.stop();
  }

  GpuServiceStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kGpuService_CloseChannel_Name:
      var params = reader.decodeStruct(GpuService_CloseChannel_Params);
      this.closeChannel(params.clientId);
      return true;
    case kGpuService_CreateJpegDecodeAccelerator_Name:
      var params = reader.decodeStruct(GpuService_CreateJpegDecodeAccelerator_Params);
      this.createJpegDecodeAccelerator(params.jda);
      return true;
    case kGpuService_CreateJpegEncodeAccelerator_Name:
      var params = reader.decodeStruct(GpuService_CreateJpegEncodeAccelerator_Params);
      this.createJpegEncodeAccelerator(params.jea);
      return true;
    case kGpuService_CreateVideoEncodeAcceleratorProvider_Name:
      var params = reader.decodeStruct(GpuService_CreateVideoEncodeAcceleratorProvider_Params);
      this.createVideoEncodeAcceleratorProvider(params.veaProvider);
      return true;
    case kGpuService_DestroyGpuMemoryBuffer_Name:
      var params = reader.decodeStruct(GpuService_DestroyGpuMemoryBuffer_Params);
      this.destroyGpuMemoryBuffer(params.id, params.clientId, params.syncToken);
      return true;
    case kGpuService_LoadedShader_Name:
      var params = reader.decodeStruct(GpuService_LoadedShader_Params);
      this.loadedShader(params.key, params.data);
      return true;
    case kGpuService_WakeUpGpu_Name:
      var params = reader.decodeStruct(GpuService_WakeUpGpu_Params);
      this.wakeUpGpu();
      return true;
    case kGpuService_GpuSwitched_Name:
      var params = reader.decodeStruct(GpuService_GpuSwitched_Params);
      this.gpuSwitched();
      return true;
    case kGpuService_DestroyAllChannels_Name:
      var params = reader.decodeStruct(GpuService_DestroyAllChannels_Params);
      this.destroyAllChannels();
      return true;
    case kGpuService_OnBackgroundCleanup_Name:
      var params = reader.decodeStruct(GpuService_OnBackgroundCleanup_Params);
      this.onBackgroundCleanup();
      return true;
    case kGpuService_OnBackgrounded_Name:
      var params = reader.decodeStruct(GpuService_OnBackgrounded_Params);
      this.onBackgrounded();
      return true;
    case kGpuService_OnForegrounded_Name:
      var params = reader.decodeStruct(GpuService_OnForegrounded_Params);
      this.onForegrounded();
      return true;
    case kGpuService_Crash_Name:
      var params = reader.decodeStruct(GpuService_Crash_Params);
      this.crash();
      return true;
    case kGpuService_Hang_Name:
      var params = reader.decodeStruct(GpuService_Hang_Params);
      this.hang();
      return true;
    case kGpuService_ThrowJavaException_Name:
      var params = reader.decodeStruct(GpuService_ThrowJavaException_Params);
      this.throwJavaException();
      return true;
    default:
      return false;
    }
  };

  GpuServiceStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kGpuService_EstablishGpuChannel_Name:
      var params = reader.decodeStruct(GpuService_EstablishGpuChannel_Params);
      this.establishGpuChannel(params.clientId, params.clientTracingId, params.isGpuHost).then(function(response) {
        var responseParams =
            new GpuService_EstablishGpuChannel_ResponseParams();
        responseParams.channelHandle = response.channelHandle;
        var builder = new codec.MessageV1Builder(
            kGpuService_EstablishGpuChannel_Name,
            codec.align(GpuService_EstablishGpuChannel_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(GpuService_EstablishGpuChannel_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kGpuService_CreateGpuMemoryBuffer_Name:
      var params = reader.decodeStruct(GpuService_CreateGpuMemoryBuffer_Params);
      this.createGpuMemoryBuffer(params.id, params.size, params.format, params.usage, params.clientId, params.surfaceHandle).then(function(response) {
        var responseParams =
            new GpuService_CreateGpuMemoryBuffer_ResponseParams();
        responseParams.bufferHandle = response.bufferHandle;
        var builder = new codec.MessageV1Builder(
            kGpuService_CreateGpuMemoryBuffer_Name,
            codec.align(GpuService_CreateGpuMemoryBuffer_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(GpuService_CreateGpuMemoryBuffer_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kGpuService_GetVideoMemoryUsageStats_Name:
      var params = reader.decodeStruct(GpuService_GetVideoMemoryUsageStats_Params);
      this.getVideoMemoryUsageStats().then(function(response) {
        var responseParams =
            new GpuService_GetVideoMemoryUsageStats_ResponseParams();
        responseParams.stats = response.stats;
        var builder = new codec.MessageV1Builder(
            kGpuService_GetVideoMemoryUsageStats_Name,
            codec.align(GpuService_GetVideoMemoryUsageStats_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(GpuService_GetVideoMemoryUsageStats_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kGpuService_RequestCompleteGpuInfo_Name:
      var params = reader.decodeStruct(GpuService_RequestCompleteGpuInfo_Params);
      this.requestCompleteGpuInfo().then(function(response) {
        var responseParams =
            new GpuService_RequestCompleteGpuInfo_ResponseParams();
        responseParams.gpuInfo = response.gpuInfo;
        var builder = new codec.MessageV1Builder(
            kGpuService_RequestCompleteGpuInfo_Name,
            codec.align(GpuService_RequestCompleteGpuInfo_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(GpuService_RequestCompleteGpuInfo_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kGpuService_GetGpuSupportedRuntimeVersion_Name:
      var params = reader.decodeStruct(GpuService_GetGpuSupportedRuntimeVersion_Params);
      this.getGpuSupportedRuntimeVersion().then(function(response) {
        var responseParams =
            new GpuService_GetGpuSupportedRuntimeVersion_ResponseParams();
        responseParams.gpuInfo = response.gpuInfo;
        var builder = new codec.MessageV1Builder(
            kGpuService_GetGpuSupportedRuntimeVersion_Name,
            codec.align(GpuService_GetGpuSupportedRuntimeVersion_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(GpuService_GetGpuSupportedRuntimeVersion_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kGpuService_RequestHDRStatus_Name:
      var params = reader.decodeStruct(GpuService_RequestHDRStatus_Params);
      this.requestHDRStatus().then(function(response) {
        var responseParams =
            new GpuService_RequestHDRStatus_ResponseParams();
        responseParams.hdrEnabled = response.hdrEnabled;
        var builder = new codec.MessageV1Builder(
            kGpuService_RequestHDRStatus_Name,
            codec.align(GpuService_RequestHDRStatus_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(GpuService_RequestHDRStatus_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kGpuService_DestroyingVideoSurface_Name:
      var params = reader.decodeStruct(GpuService_DestroyingVideoSurface_Params);
      this.destroyingVideoSurface(params.surfaceId).then(function(response) {
        var responseParams =
            new GpuService_DestroyingVideoSurface_ResponseParams();
        var builder = new codec.MessageV1Builder(
            kGpuService_DestroyingVideoSurface_Name,
            codec.align(GpuService_DestroyingVideoSurface_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(GpuService_DestroyingVideoSurface_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kGpuService_Stop_Name:
      var params = reader.decodeStruct(GpuService_Stop_Params);
      this.stop().then(function(response) {
        var responseParams =
            new GpuService_Stop_ResponseParams();
        var builder = new codec.MessageV1Builder(
            kGpuService_Stop_Name,
            codec.align(GpuService_Stop_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(GpuService_Stop_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    default:
      return false;
    }
  };

  function validateGpuServiceRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kGpuService_EstablishGpuChannel_Name:
        if (message.expectsResponse())
          paramsClass = GpuService_EstablishGpuChannel_Params;
      break;
      case kGpuService_CloseChannel_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = GpuService_CloseChannel_Params;
      break;
      case kGpuService_CreateJpegDecodeAccelerator_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = GpuService_CreateJpegDecodeAccelerator_Params;
      break;
      case kGpuService_CreateJpegEncodeAccelerator_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = GpuService_CreateJpegEncodeAccelerator_Params;
      break;
      case kGpuService_CreateVideoEncodeAcceleratorProvider_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = GpuService_CreateVideoEncodeAcceleratorProvider_Params;
      break;
      case kGpuService_CreateGpuMemoryBuffer_Name:
        if (message.expectsResponse())
          paramsClass = GpuService_CreateGpuMemoryBuffer_Params;
      break;
      case kGpuService_DestroyGpuMemoryBuffer_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = GpuService_DestroyGpuMemoryBuffer_Params;
      break;
      case kGpuService_GetVideoMemoryUsageStats_Name:
        if (message.expectsResponse())
          paramsClass = GpuService_GetVideoMemoryUsageStats_Params;
      break;
      case kGpuService_RequestCompleteGpuInfo_Name:
        if (message.expectsResponse())
          paramsClass = GpuService_RequestCompleteGpuInfo_Params;
      break;
      case kGpuService_GetGpuSupportedRuntimeVersion_Name:
        if (message.expectsResponse())
          paramsClass = GpuService_GetGpuSupportedRuntimeVersion_Params;
      break;
      case kGpuService_RequestHDRStatus_Name:
        if (message.expectsResponse())
          paramsClass = GpuService_RequestHDRStatus_Params;
      break;
      case kGpuService_LoadedShader_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = GpuService_LoadedShader_Params;
      break;
      case kGpuService_DestroyingVideoSurface_Name:
        if (message.expectsResponse())
          paramsClass = GpuService_DestroyingVideoSurface_Params;
      break;
      case kGpuService_WakeUpGpu_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = GpuService_WakeUpGpu_Params;
      break;
      case kGpuService_GpuSwitched_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = GpuService_GpuSwitched_Params;
      break;
      case kGpuService_DestroyAllChannels_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = GpuService_DestroyAllChannels_Params;
      break;
      case kGpuService_OnBackgroundCleanup_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = GpuService_OnBackgroundCleanup_Params;
      break;
      case kGpuService_OnBackgrounded_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = GpuService_OnBackgrounded_Params;
      break;
      case kGpuService_OnForegrounded_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = GpuService_OnForegrounded_Params;
      break;
      case kGpuService_Crash_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = GpuService_Crash_Params;
      break;
      case kGpuService_Hang_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = GpuService_Hang_Params;
      break;
      case kGpuService_ThrowJavaException_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = GpuService_ThrowJavaException_Params;
      break;
      case kGpuService_Stop_Name:
        if (message.expectsResponse())
          paramsClass = GpuService_Stop_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateGpuServiceResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kGpuService_EstablishGpuChannel_Name:
        if (message.isResponse())
          paramsClass = GpuService_EstablishGpuChannel_ResponseParams;
        break;
      case kGpuService_CreateGpuMemoryBuffer_Name:
        if (message.isResponse())
          paramsClass = GpuService_CreateGpuMemoryBuffer_ResponseParams;
        break;
      case kGpuService_GetVideoMemoryUsageStats_Name:
        if (message.isResponse())
          paramsClass = GpuService_GetVideoMemoryUsageStats_ResponseParams;
        break;
      case kGpuService_RequestCompleteGpuInfo_Name:
        if (message.isResponse())
          paramsClass = GpuService_RequestCompleteGpuInfo_ResponseParams;
        break;
      case kGpuService_GetGpuSupportedRuntimeVersion_Name:
        if (message.isResponse())
          paramsClass = GpuService_GetGpuSupportedRuntimeVersion_ResponseParams;
        break;
      case kGpuService_RequestHDRStatus_Name:
        if (message.isResponse())
          paramsClass = GpuService_RequestHDRStatus_ResponseParams;
        break;
      case kGpuService_DestroyingVideoSurface_Name:
        if (message.isResponse())
          paramsClass = GpuService_DestroyingVideoSurface_ResponseParams;
        break;
      case kGpuService_Stop_Name:
        if (message.isResponse())
          paramsClass = GpuService_Stop_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var GpuService = {
    name: 'viz.mojom.GpuService',
    kVersion: 0,
    ptrClass: GpuServicePtr,
    proxyClass: GpuServiceProxy,
    stubClass: GpuServiceStub,
    validateRequest: validateGpuServiceRequest,
    validateResponse: validateGpuServiceResponse,
    mojomId: 'services/viz/privileged/interfaces/gl/gpu_service.mojom',
    fuzzMethods: {
      establishGpuChannel: {
        params: GpuService_EstablishGpuChannel_Params,
      },
      closeChannel: {
        params: GpuService_CloseChannel_Params,
      },
      createJpegDecodeAccelerator: {
        params: GpuService_CreateJpegDecodeAccelerator_Params,
      },
      createJpegEncodeAccelerator: {
        params: GpuService_CreateJpegEncodeAccelerator_Params,
      },
      createVideoEncodeAcceleratorProvider: {
        params: GpuService_CreateVideoEncodeAcceleratorProvider_Params,
      },
      createGpuMemoryBuffer: {
        params: GpuService_CreateGpuMemoryBuffer_Params,
      },
      destroyGpuMemoryBuffer: {
        params: GpuService_DestroyGpuMemoryBuffer_Params,
      },
      getVideoMemoryUsageStats: {
        params: GpuService_GetVideoMemoryUsageStats_Params,
      },
      requestCompleteGpuInfo: {
        params: GpuService_RequestCompleteGpuInfo_Params,
      },
      getGpuSupportedRuntimeVersion: {
        params: GpuService_GetGpuSupportedRuntimeVersion_Params,
      },
      requestHDRStatus: {
        params: GpuService_RequestHDRStatus_Params,
      },
      loadedShader: {
        params: GpuService_LoadedShader_Params,
      },
      destroyingVideoSurface: {
        params: GpuService_DestroyingVideoSurface_Params,
      },
      wakeUpGpu: {
        params: GpuService_WakeUpGpu_Params,
      },
      gpuSwitched: {
        params: GpuService_GpuSwitched_Params,
      },
      destroyAllChannels: {
        params: GpuService_DestroyAllChannels_Params,
      },
      onBackgroundCleanup: {
        params: GpuService_OnBackgroundCleanup_Params,
      },
      onBackgrounded: {
        params: GpuService_OnBackgrounded_Params,
      },
      onForegrounded: {
        params: GpuService_OnForegrounded_Params,
      },
      crash: {
        params: GpuService_Crash_Params,
      },
      hang: {
        params: GpuService_Hang_Params,
      },
      throwJavaException: {
        params: GpuService_ThrowJavaException_Params,
      },
      stop: {
        params: GpuService_Stop_Params,
      },
    },
  };
  GpuServiceStub.prototype.validator = validateGpuServiceRequest;
  GpuServiceProxy.prototype.validator = validateGpuServiceResponse;
  exports.GpuService = GpuService;
  exports.GpuServicePtr = GpuServicePtr;
  exports.GpuServiceAssociatedPtr = GpuServiceAssociatedPtr;
})();