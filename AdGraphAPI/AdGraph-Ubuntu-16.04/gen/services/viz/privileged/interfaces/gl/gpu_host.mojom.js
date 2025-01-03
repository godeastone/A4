// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'services/viz/privileged/interfaces/gl/gpu_host.mojom';
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
  var gpu_feature_info$ =
      mojo.internal.exposeNamespace('gpu.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'gpu/ipc/common/gpu_feature_info.mojom', '../../../../../gpu/ipc/common/gpu_feature_info.mojom.js');
  }
  var gpu_info$ =
      mojo.internal.exposeNamespace('gpu.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'gpu/ipc/common/gpu_info.mojom', '../../../../../gpu/ipc/common/gpu_info.mojom.js');
  }
  var surface_handle$ =
      mojo.internal.exposeNamespace('gpu.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'gpu/ipc/common/surface_handle.mojom', '../../../../../gpu/ipc/common/surface_handle.mojom.js');
  }
  var context_lost_reason$ =
      mojo.internal.exposeNamespace('viz.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'services/viz/privileged/interfaces/gl/context_lost_reason.mojom', 'context_lost_reason.mojom.js');
  }
  var url$ =
      mojo.internal.exposeNamespace('url.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'url/mojom/url.mojom', '../../../../../url/mojom/url.mojom.js');
  }



  function GpuHost_DidInitialize_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  GpuHost_DidInitialize_Params.prototype.initDefaults_ = function() {
    this.gpuInfo = null;
    this.gpuFeatureInfo = null;
    this.gpuInfoForHardwareGpu = null;
    this.gpuFeatureInfoForHardwareGpu = null;
  };
  GpuHost_DidInitialize_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  GpuHost_DidInitialize_Params.generate = function(generator_) {
    var generated = new GpuHost_DidInitialize_Params;
    generated.gpuInfo = generator_.generateStruct(gpu.mojom.GpuInfo, false);
    generated.gpuFeatureInfo = generator_.generateStruct(gpu.mojom.GpuFeatureInfo, false);
    generated.gpuInfoForHardwareGpu = generator_.generateStruct(gpu.mojom.GpuInfo, true);
    generated.gpuFeatureInfoForHardwareGpu = generator_.generateStruct(gpu.mojom.GpuFeatureInfo, true);
    return generated;
  };

  GpuHost_DidInitialize_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.gpuInfo = mutator_.mutateStruct(gpu.mojom.GpuInfo, false);
    }
    if (mutator_.chooseMutateField()) {
      this.gpuFeatureInfo = mutator_.mutateStruct(gpu.mojom.GpuFeatureInfo, false);
    }
    if (mutator_.chooseMutateField()) {
      this.gpuInfoForHardwareGpu = mutator_.mutateStruct(gpu.mojom.GpuInfo, true);
    }
    if (mutator_.chooseMutateField()) {
      this.gpuFeatureInfoForHardwareGpu = mutator_.mutateStruct(gpu.mojom.GpuFeatureInfo, true);
    }
    return this;
  };
  GpuHost_DidInitialize_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  GpuHost_DidInitialize_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  GpuHost_DidInitialize_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  GpuHost_DidInitialize_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 40}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;


    // validate GpuHost_DidInitialize_Params.gpuInfo
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, gpu_info$.GpuInfo, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate GpuHost_DidInitialize_Params.gpuFeatureInfo
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, gpu_feature_info$.GpuFeatureInfo, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate GpuHost_DidInitialize_Params.gpuInfoForHardwareGpu
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, gpu_info$.GpuInfo, true);
    if (err !== validator.validationError.NONE)
        return err;


    // validate GpuHost_DidInitialize_Params.gpuFeatureInfoForHardwareGpu
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 24, gpu_feature_info$.GpuFeatureInfo, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  GpuHost_DidInitialize_Params.encodedSize = codec.kStructHeaderSize + 32;

  GpuHost_DidInitialize_Params.decode = function(decoder) {
    var packed;
    var val = new GpuHost_DidInitialize_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.gpuInfo = decoder.decodeStructPointer(gpu_info$.GpuInfo);
    val.gpuFeatureInfo = decoder.decodeStructPointer(gpu_feature_info$.GpuFeatureInfo);
    val.gpuInfoForHardwareGpu = decoder.decodeStructPointer(gpu_info$.GpuInfo);
    val.gpuFeatureInfoForHardwareGpu = decoder.decodeStructPointer(gpu_feature_info$.GpuFeatureInfo);
    return val;
  };

  GpuHost_DidInitialize_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(GpuHost_DidInitialize_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(gpu_info$.GpuInfo, val.gpuInfo);
    encoder.encodeStructPointer(gpu_feature_info$.GpuFeatureInfo, val.gpuFeatureInfo);
    encoder.encodeStructPointer(gpu_info$.GpuInfo, val.gpuInfoForHardwareGpu);
    encoder.encodeStructPointer(gpu_feature_info$.GpuFeatureInfo, val.gpuFeatureInfoForHardwareGpu);
  };
  function GpuHost_DidFailInitialize_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  GpuHost_DidFailInitialize_Params.prototype.initDefaults_ = function() {
  };
  GpuHost_DidFailInitialize_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  GpuHost_DidFailInitialize_Params.generate = function(generator_) {
    var generated = new GpuHost_DidFailInitialize_Params;
    return generated;
  };

  GpuHost_DidFailInitialize_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  GpuHost_DidFailInitialize_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  GpuHost_DidFailInitialize_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  GpuHost_DidFailInitialize_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  GpuHost_DidFailInitialize_Params.validate = function(messageValidator, offset) {
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

  GpuHost_DidFailInitialize_Params.encodedSize = codec.kStructHeaderSize + 0;

  GpuHost_DidFailInitialize_Params.decode = function(decoder) {
    var packed;
    var val = new GpuHost_DidFailInitialize_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  GpuHost_DidFailInitialize_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(GpuHost_DidFailInitialize_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function GpuHost_DidCreateContextSuccessfully_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  GpuHost_DidCreateContextSuccessfully_Params.prototype.initDefaults_ = function() {
  };
  GpuHost_DidCreateContextSuccessfully_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  GpuHost_DidCreateContextSuccessfully_Params.generate = function(generator_) {
    var generated = new GpuHost_DidCreateContextSuccessfully_Params;
    return generated;
  };

  GpuHost_DidCreateContextSuccessfully_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  GpuHost_DidCreateContextSuccessfully_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  GpuHost_DidCreateContextSuccessfully_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  GpuHost_DidCreateContextSuccessfully_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  GpuHost_DidCreateContextSuccessfully_Params.validate = function(messageValidator, offset) {
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

  GpuHost_DidCreateContextSuccessfully_Params.encodedSize = codec.kStructHeaderSize + 0;

  GpuHost_DidCreateContextSuccessfully_Params.decode = function(decoder) {
    var packed;
    var val = new GpuHost_DidCreateContextSuccessfully_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  GpuHost_DidCreateContextSuccessfully_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(GpuHost_DidCreateContextSuccessfully_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function GpuHost_DidCreateOffscreenContext_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  GpuHost_DidCreateOffscreenContext_Params.prototype.initDefaults_ = function() {
    this.url = null;
  };
  GpuHost_DidCreateOffscreenContext_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  GpuHost_DidCreateOffscreenContext_Params.generate = function(generator_) {
    var generated = new GpuHost_DidCreateOffscreenContext_Params;
    generated.url = generator_.generateStruct(url.mojom.Url, false);
    return generated;
  };

  GpuHost_DidCreateOffscreenContext_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.url = mutator_.mutateStruct(url.mojom.Url, false);
    }
    return this;
  };
  GpuHost_DidCreateOffscreenContext_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  GpuHost_DidCreateOffscreenContext_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  GpuHost_DidCreateOffscreenContext_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  GpuHost_DidCreateOffscreenContext_Params.validate = function(messageValidator, offset) {
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


    // validate GpuHost_DidCreateOffscreenContext_Params.url
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, url$.Url, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  GpuHost_DidCreateOffscreenContext_Params.encodedSize = codec.kStructHeaderSize + 8;

  GpuHost_DidCreateOffscreenContext_Params.decode = function(decoder) {
    var packed;
    var val = new GpuHost_DidCreateOffscreenContext_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.url = decoder.decodeStructPointer(url$.Url);
    return val;
  };

  GpuHost_DidCreateOffscreenContext_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(GpuHost_DidCreateOffscreenContext_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(url$.Url, val.url);
  };
  function GpuHost_DidDestroyOffscreenContext_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  GpuHost_DidDestroyOffscreenContext_Params.prototype.initDefaults_ = function() {
    this.url = null;
  };
  GpuHost_DidDestroyOffscreenContext_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  GpuHost_DidDestroyOffscreenContext_Params.generate = function(generator_) {
    var generated = new GpuHost_DidDestroyOffscreenContext_Params;
    generated.url = generator_.generateStruct(url.mojom.Url, false);
    return generated;
  };

  GpuHost_DidDestroyOffscreenContext_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.url = mutator_.mutateStruct(url.mojom.Url, false);
    }
    return this;
  };
  GpuHost_DidDestroyOffscreenContext_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  GpuHost_DidDestroyOffscreenContext_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  GpuHost_DidDestroyOffscreenContext_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  GpuHost_DidDestroyOffscreenContext_Params.validate = function(messageValidator, offset) {
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


    // validate GpuHost_DidDestroyOffscreenContext_Params.url
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, url$.Url, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  GpuHost_DidDestroyOffscreenContext_Params.encodedSize = codec.kStructHeaderSize + 8;

  GpuHost_DidDestroyOffscreenContext_Params.decode = function(decoder) {
    var packed;
    var val = new GpuHost_DidDestroyOffscreenContext_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.url = decoder.decodeStructPointer(url$.Url);
    return val;
  };

  GpuHost_DidDestroyOffscreenContext_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(GpuHost_DidDestroyOffscreenContext_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(url$.Url, val.url);
  };
  function GpuHost_DidDestroyChannel_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  GpuHost_DidDestroyChannel_Params.prototype.initDefaults_ = function() {
    this.clientId = 0;
  };
  GpuHost_DidDestroyChannel_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  GpuHost_DidDestroyChannel_Params.generate = function(generator_) {
    var generated = new GpuHost_DidDestroyChannel_Params;
    generated.clientId = generator_.generateInt32();
    return generated;
  };

  GpuHost_DidDestroyChannel_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.clientId = mutator_.mutateInt32(this.clientId);
    }
    return this;
  };
  GpuHost_DidDestroyChannel_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  GpuHost_DidDestroyChannel_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  GpuHost_DidDestroyChannel_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  GpuHost_DidDestroyChannel_Params.validate = function(messageValidator, offset) {
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

  GpuHost_DidDestroyChannel_Params.encodedSize = codec.kStructHeaderSize + 8;

  GpuHost_DidDestroyChannel_Params.decode = function(decoder) {
    var packed;
    var val = new GpuHost_DidDestroyChannel_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.clientId = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  GpuHost_DidDestroyChannel_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(GpuHost_DidDestroyChannel_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.clientId);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function GpuHost_DidLoseContext_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  GpuHost_DidLoseContext_Params.prototype.initDefaults_ = function() {
    this.offscreen = false;
    this.reason = 0;
    this.activeUrl = null;
  };
  GpuHost_DidLoseContext_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  GpuHost_DidLoseContext_Params.generate = function(generator_) {
    var generated = new GpuHost_DidLoseContext_Params;
    generated.offscreen = generator_.generateBool();
    generated.reason = generator_.generateEnum(0, 6);
    generated.activeUrl = generator_.generateStruct(url.mojom.Url, false);
    return generated;
  };

  GpuHost_DidLoseContext_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.offscreen = mutator_.mutateBool(this.offscreen);
    }
    if (mutator_.chooseMutateField()) {
      this.reason = mutator_.mutateEnum(this.reason, 0, 6);
    }
    if (mutator_.chooseMutateField()) {
      this.activeUrl = mutator_.mutateStruct(url.mojom.Url, false);
    }
    return this;
  };
  GpuHost_DidLoseContext_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  GpuHost_DidLoseContext_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  GpuHost_DidLoseContext_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  GpuHost_DidLoseContext_Params.validate = function(messageValidator, offset) {
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



    // validate GpuHost_DidLoseContext_Params.reason
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 4, context_lost_reason$.ContextLostReason);
    if (err !== validator.validationError.NONE)
        return err;


    // validate GpuHost_DidLoseContext_Params.activeUrl
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, url$.Url, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  GpuHost_DidLoseContext_Params.encodedSize = codec.kStructHeaderSize + 16;

  GpuHost_DidLoseContext_Params.decode = function(decoder) {
    var packed;
    var val = new GpuHost_DidLoseContext_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.offscreen = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.reason = decoder.decodeStruct(codec.Int32);
    val.activeUrl = decoder.decodeStructPointer(url$.Url);
    return val;
  };

  GpuHost_DidLoseContext_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(GpuHost_DidLoseContext_Params.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.offscreen & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.Int32, val.reason);
    encoder.encodeStructPointer(url$.Url, val.activeUrl);
  };
  function GpuHost_SetChildSurface_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  GpuHost_SetChildSurface_Params.prototype.initDefaults_ = function() {
    this.parent = null;
    this.child = null;
  };
  GpuHost_SetChildSurface_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  GpuHost_SetChildSurface_Params.generate = function(generator_) {
    var generated = new GpuHost_SetChildSurface_Params;
    generated.parent = generator_.generateStruct(gpu.mojom.SurfaceHandle, false);
    generated.child = generator_.generateStruct(gpu.mojom.SurfaceHandle, false);
    return generated;
  };

  GpuHost_SetChildSurface_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.parent = mutator_.mutateStruct(gpu.mojom.SurfaceHandle, false);
    }
    if (mutator_.chooseMutateField()) {
      this.child = mutator_.mutateStruct(gpu.mojom.SurfaceHandle, false);
    }
    return this;
  };
  GpuHost_SetChildSurface_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  GpuHost_SetChildSurface_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  GpuHost_SetChildSurface_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  GpuHost_SetChildSurface_Params.validate = function(messageValidator, offset) {
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


    // validate GpuHost_SetChildSurface_Params.parent
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, surface_handle$.SurfaceHandle, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate GpuHost_SetChildSurface_Params.child
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, surface_handle$.SurfaceHandle, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  GpuHost_SetChildSurface_Params.encodedSize = codec.kStructHeaderSize + 16;

  GpuHost_SetChildSurface_Params.decode = function(decoder) {
    var packed;
    var val = new GpuHost_SetChildSurface_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.parent = decoder.decodeStructPointer(surface_handle$.SurfaceHandle);
    val.child = decoder.decodeStructPointer(surface_handle$.SurfaceHandle);
    return val;
  };

  GpuHost_SetChildSurface_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(GpuHost_SetChildSurface_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(surface_handle$.SurfaceHandle, val.parent);
    encoder.encodeStructPointer(surface_handle$.SurfaceHandle, val.child);
  };
  function GpuHost_StoreShaderToDisk_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  GpuHost_StoreShaderToDisk_Params.prototype.initDefaults_ = function() {
    this.clientId = 0;
    this.key = null;
    this.shader = null;
  };
  GpuHost_StoreShaderToDisk_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  GpuHost_StoreShaderToDisk_Params.generate = function(generator_) {
    var generated = new GpuHost_StoreShaderToDisk_Params;
    generated.clientId = generator_.generateInt32();
    generated.key = generator_.generateString(false);
    generated.shader = generator_.generateString(false);
    return generated;
  };

  GpuHost_StoreShaderToDisk_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.clientId = mutator_.mutateInt32(this.clientId);
    }
    if (mutator_.chooseMutateField()) {
      this.key = mutator_.mutateString(this.key, false);
    }
    if (mutator_.chooseMutateField()) {
      this.shader = mutator_.mutateString(this.shader, false);
    }
    return this;
  };
  GpuHost_StoreShaderToDisk_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  GpuHost_StoreShaderToDisk_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  GpuHost_StoreShaderToDisk_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  GpuHost_StoreShaderToDisk_Params.validate = function(messageValidator, offset) {
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



    // validate GpuHost_StoreShaderToDisk_Params.key
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate GpuHost_StoreShaderToDisk_Params.shader
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 16, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  GpuHost_StoreShaderToDisk_Params.encodedSize = codec.kStructHeaderSize + 24;

  GpuHost_StoreShaderToDisk_Params.decode = function(decoder) {
    var packed;
    var val = new GpuHost_StoreShaderToDisk_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.clientId = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.key = decoder.decodeStruct(codec.String);
    val.shader = decoder.decodeStruct(codec.String);
    return val;
  };

  GpuHost_StoreShaderToDisk_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(GpuHost_StoreShaderToDisk_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.clientId);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.String, val.key);
    encoder.encodeStruct(codec.String, val.shader);
  };
  function GpuHost_RecordLogMessage_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  GpuHost_RecordLogMessage_Params.prototype.initDefaults_ = function() {
    this.severity = 0;
    this.header = null;
    this.message = null;
  };
  GpuHost_RecordLogMessage_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  GpuHost_RecordLogMessage_Params.generate = function(generator_) {
    var generated = new GpuHost_RecordLogMessage_Params;
    generated.severity = generator_.generateInt32();
    generated.header = generator_.generateString(false);
    generated.message = generator_.generateString(false);
    return generated;
  };

  GpuHost_RecordLogMessage_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.severity = mutator_.mutateInt32(this.severity);
    }
    if (mutator_.chooseMutateField()) {
      this.header = mutator_.mutateString(this.header, false);
    }
    if (mutator_.chooseMutateField()) {
      this.message = mutator_.mutateString(this.message, false);
    }
    return this;
  };
  GpuHost_RecordLogMessage_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  GpuHost_RecordLogMessage_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  GpuHost_RecordLogMessage_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  GpuHost_RecordLogMessage_Params.validate = function(messageValidator, offset) {
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



    // validate GpuHost_RecordLogMessage_Params.header
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate GpuHost_RecordLogMessage_Params.message
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 16, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  GpuHost_RecordLogMessage_Params.encodedSize = codec.kStructHeaderSize + 24;

  GpuHost_RecordLogMessage_Params.decode = function(decoder) {
    var packed;
    var val = new GpuHost_RecordLogMessage_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.severity = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.header = decoder.decodeStruct(codec.String);
    val.message = decoder.decodeStruct(codec.String);
    return val;
  };

  GpuHost_RecordLogMessage_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(GpuHost_RecordLogMessage_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.severity);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.String, val.header);
    encoder.encodeStruct(codec.String, val.message);
  };
  var kGpuHost_DidInitialize_Name = 1442662274;
  var kGpuHost_DidFailInitialize_Name = 659135548;
  var kGpuHost_DidCreateContextSuccessfully_Name = 304174932;
  var kGpuHost_DidCreateOffscreenContext_Name = 2053134371;
  var kGpuHost_DidDestroyOffscreenContext_Name = 348654728;
  var kGpuHost_DidDestroyChannel_Name = 2133583369;
  var kGpuHost_DidLoseContext_Name = 1794310194;
  var kGpuHost_SetChildSurface_Name = 574900669;
  var kGpuHost_StoreShaderToDisk_Name = 1700505320;
  var kGpuHost_RecordLogMessage_Name = 1797861638;

  function GpuHostPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(GpuHost,
                                                   handleOrPtrInfo);
  }

  function GpuHostAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        GpuHost, associatedInterfacePtrInfo);
  }

  GpuHostAssociatedPtr.prototype =
      Object.create(GpuHostPtr.prototype);
  GpuHostAssociatedPtr.prototype.constructor =
      GpuHostAssociatedPtr;

  function GpuHostProxy(receiver) {
    this.receiver_ = receiver;
  }
  GpuHostPtr.prototype.didInitialize = function() {
    return GpuHostProxy.prototype.didInitialize
        .apply(this.ptr.getProxy(), arguments);
  };

  GpuHostProxy.prototype.didInitialize = function(gpuInfo, gpuFeatureInfo, gpuInfoForHardwareGpu, gpuFeatureInfoForHardwareGpu) {
    var params_ = new GpuHost_DidInitialize_Params();
    params_.gpuInfo = gpuInfo;
    params_.gpuFeatureInfo = gpuFeatureInfo;
    params_.gpuInfoForHardwareGpu = gpuInfoForHardwareGpu;
    params_.gpuFeatureInfoForHardwareGpu = gpuFeatureInfoForHardwareGpu;
    var builder = new codec.MessageV0Builder(
        kGpuHost_DidInitialize_Name,
        codec.align(GpuHost_DidInitialize_Params.encodedSize));
    builder.encodeStruct(GpuHost_DidInitialize_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  GpuHostPtr.prototype.didFailInitialize = function() {
    return GpuHostProxy.prototype.didFailInitialize
        .apply(this.ptr.getProxy(), arguments);
  };

  GpuHostProxy.prototype.didFailInitialize = function() {
    var params_ = new GpuHost_DidFailInitialize_Params();
    var builder = new codec.MessageV0Builder(
        kGpuHost_DidFailInitialize_Name,
        codec.align(GpuHost_DidFailInitialize_Params.encodedSize));
    builder.encodeStruct(GpuHost_DidFailInitialize_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  GpuHostPtr.prototype.didCreateContextSuccessfully = function() {
    return GpuHostProxy.prototype.didCreateContextSuccessfully
        .apply(this.ptr.getProxy(), arguments);
  };

  GpuHostProxy.prototype.didCreateContextSuccessfully = function() {
    var params_ = new GpuHost_DidCreateContextSuccessfully_Params();
    var builder = new codec.MessageV0Builder(
        kGpuHost_DidCreateContextSuccessfully_Name,
        codec.align(GpuHost_DidCreateContextSuccessfully_Params.encodedSize));
    builder.encodeStruct(GpuHost_DidCreateContextSuccessfully_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  GpuHostPtr.prototype.didCreateOffscreenContext = function() {
    return GpuHostProxy.prototype.didCreateOffscreenContext
        .apply(this.ptr.getProxy(), arguments);
  };

  GpuHostProxy.prototype.didCreateOffscreenContext = function(url) {
    var params_ = new GpuHost_DidCreateOffscreenContext_Params();
    params_.url = url;
    var builder = new codec.MessageV0Builder(
        kGpuHost_DidCreateOffscreenContext_Name,
        codec.align(GpuHost_DidCreateOffscreenContext_Params.encodedSize));
    builder.encodeStruct(GpuHost_DidCreateOffscreenContext_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  GpuHostPtr.prototype.didDestroyOffscreenContext = function() {
    return GpuHostProxy.prototype.didDestroyOffscreenContext
        .apply(this.ptr.getProxy(), arguments);
  };

  GpuHostProxy.prototype.didDestroyOffscreenContext = function(url) {
    var params_ = new GpuHost_DidDestroyOffscreenContext_Params();
    params_.url = url;
    var builder = new codec.MessageV0Builder(
        kGpuHost_DidDestroyOffscreenContext_Name,
        codec.align(GpuHost_DidDestroyOffscreenContext_Params.encodedSize));
    builder.encodeStruct(GpuHost_DidDestroyOffscreenContext_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  GpuHostPtr.prototype.didDestroyChannel = function() {
    return GpuHostProxy.prototype.didDestroyChannel
        .apply(this.ptr.getProxy(), arguments);
  };

  GpuHostProxy.prototype.didDestroyChannel = function(clientId) {
    var params_ = new GpuHost_DidDestroyChannel_Params();
    params_.clientId = clientId;
    var builder = new codec.MessageV0Builder(
        kGpuHost_DidDestroyChannel_Name,
        codec.align(GpuHost_DidDestroyChannel_Params.encodedSize));
    builder.encodeStruct(GpuHost_DidDestroyChannel_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  GpuHostPtr.prototype.didLoseContext = function() {
    return GpuHostProxy.prototype.didLoseContext
        .apply(this.ptr.getProxy(), arguments);
  };

  GpuHostProxy.prototype.didLoseContext = function(offscreen, reason, activeUrl) {
    var params_ = new GpuHost_DidLoseContext_Params();
    params_.offscreen = offscreen;
    params_.reason = reason;
    params_.activeUrl = activeUrl;
    var builder = new codec.MessageV0Builder(
        kGpuHost_DidLoseContext_Name,
        codec.align(GpuHost_DidLoseContext_Params.encodedSize));
    builder.encodeStruct(GpuHost_DidLoseContext_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  GpuHostPtr.prototype.setChildSurface = function() {
    return GpuHostProxy.prototype.setChildSurface
        .apply(this.ptr.getProxy(), arguments);
  };

  GpuHostProxy.prototype.setChildSurface = function(parent, child) {
    var params_ = new GpuHost_SetChildSurface_Params();
    params_.parent = parent;
    params_.child = child;
    var builder = new codec.MessageV0Builder(
        kGpuHost_SetChildSurface_Name,
        codec.align(GpuHost_SetChildSurface_Params.encodedSize));
    builder.encodeStruct(GpuHost_SetChildSurface_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  GpuHostPtr.prototype.storeShaderToDisk = function() {
    return GpuHostProxy.prototype.storeShaderToDisk
        .apply(this.ptr.getProxy(), arguments);
  };

  GpuHostProxy.prototype.storeShaderToDisk = function(clientId, key, shader) {
    var params_ = new GpuHost_StoreShaderToDisk_Params();
    params_.clientId = clientId;
    params_.key = key;
    params_.shader = shader;
    var builder = new codec.MessageV0Builder(
        kGpuHost_StoreShaderToDisk_Name,
        codec.align(GpuHost_StoreShaderToDisk_Params.encodedSize));
    builder.encodeStruct(GpuHost_StoreShaderToDisk_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  GpuHostPtr.prototype.recordLogMessage = function() {
    return GpuHostProxy.prototype.recordLogMessage
        .apply(this.ptr.getProxy(), arguments);
  };

  GpuHostProxy.prototype.recordLogMessage = function(severity, header, message) {
    var params_ = new GpuHost_RecordLogMessage_Params();
    params_.severity = severity;
    params_.header = header;
    params_.message = message;
    var builder = new codec.MessageV0Builder(
        kGpuHost_RecordLogMessage_Name,
        codec.align(GpuHost_RecordLogMessage_Params.encodedSize));
    builder.encodeStruct(GpuHost_RecordLogMessage_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function GpuHostStub(delegate) {
    this.delegate_ = delegate;
  }
  GpuHostStub.prototype.didInitialize = function(gpuInfo, gpuFeatureInfo, gpuInfoForHardwareGpu, gpuFeatureInfoForHardwareGpu) {
    return this.delegate_ && this.delegate_.didInitialize && this.delegate_.didInitialize(gpuInfo, gpuFeatureInfo, gpuInfoForHardwareGpu, gpuFeatureInfoForHardwareGpu);
  }
  GpuHostStub.prototype.didFailInitialize = function() {
    return this.delegate_ && this.delegate_.didFailInitialize && this.delegate_.didFailInitialize();
  }
  GpuHostStub.prototype.didCreateContextSuccessfully = function() {
    return this.delegate_ && this.delegate_.didCreateContextSuccessfully && this.delegate_.didCreateContextSuccessfully();
  }
  GpuHostStub.prototype.didCreateOffscreenContext = function(url) {
    return this.delegate_ && this.delegate_.didCreateOffscreenContext && this.delegate_.didCreateOffscreenContext(url);
  }
  GpuHostStub.prototype.didDestroyOffscreenContext = function(url) {
    return this.delegate_ && this.delegate_.didDestroyOffscreenContext && this.delegate_.didDestroyOffscreenContext(url);
  }
  GpuHostStub.prototype.didDestroyChannel = function(clientId) {
    return this.delegate_ && this.delegate_.didDestroyChannel && this.delegate_.didDestroyChannel(clientId);
  }
  GpuHostStub.prototype.didLoseContext = function(offscreen, reason, activeUrl) {
    return this.delegate_ && this.delegate_.didLoseContext && this.delegate_.didLoseContext(offscreen, reason, activeUrl);
  }
  GpuHostStub.prototype.setChildSurface = function(parent, child) {
    return this.delegate_ && this.delegate_.setChildSurface && this.delegate_.setChildSurface(parent, child);
  }
  GpuHostStub.prototype.storeShaderToDisk = function(clientId, key, shader) {
    return this.delegate_ && this.delegate_.storeShaderToDisk && this.delegate_.storeShaderToDisk(clientId, key, shader);
  }
  GpuHostStub.prototype.recordLogMessage = function(severity, header, message) {
    return this.delegate_ && this.delegate_.recordLogMessage && this.delegate_.recordLogMessage(severity, header, message);
  }

  GpuHostStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kGpuHost_DidInitialize_Name:
      var params = reader.decodeStruct(GpuHost_DidInitialize_Params);
      this.didInitialize(params.gpuInfo, params.gpuFeatureInfo, params.gpuInfoForHardwareGpu, params.gpuFeatureInfoForHardwareGpu);
      return true;
    case kGpuHost_DidFailInitialize_Name:
      var params = reader.decodeStruct(GpuHost_DidFailInitialize_Params);
      this.didFailInitialize();
      return true;
    case kGpuHost_DidCreateContextSuccessfully_Name:
      var params = reader.decodeStruct(GpuHost_DidCreateContextSuccessfully_Params);
      this.didCreateContextSuccessfully();
      return true;
    case kGpuHost_DidCreateOffscreenContext_Name:
      var params = reader.decodeStruct(GpuHost_DidCreateOffscreenContext_Params);
      this.didCreateOffscreenContext(params.url);
      return true;
    case kGpuHost_DidDestroyOffscreenContext_Name:
      var params = reader.decodeStruct(GpuHost_DidDestroyOffscreenContext_Params);
      this.didDestroyOffscreenContext(params.url);
      return true;
    case kGpuHost_DidDestroyChannel_Name:
      var params = reader.decodeStruct(GpuHost_DidDestroyChannel_Params);
      this.didDestroyChannel(params.clientId);
      return true;
    case kGpuHost_DidLoseContext_Name:
      var params = reader.decodeStruct(GpuHost_DidLoseContext_Params);
      this.didLoseContext(params.offscreen, params.reason, params.activeUrl);
      return true;
    case kGpuHost_SetChildSurface_Name:
      var params = reader.decodeStruct(GpuHost_SetChildSurface_Params);
      this.setChildSurface(params.parent, params.child);
      return true;
    case kGpuHost_StoreShaderToDisk_Name:
      var params = reader.decodeStruct(GpuHost_StoreShaderToDisk_Params);
      this.storeShaderToDisk(params.clientId, params.key, params.shader);
      return true;
    case kGpuHost_RecordLogMessage_Name:
      var params = reader.decodeStruct(GpuHost_RecordLogMessage_Params);
      this.recordLogMessage(params.severity, params.header, params.message);
      return true;
    default:
      return false;
    }
  };

  GpuHostStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateGpuHostRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kGpuHost_DidInitialize_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = GpuHost_DidInitialize_Params;
      break;
      case kGpuHost_DidFailInitialize_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = GpuHost_DidFailInitialize_Params;
      break;
      case kGpuHost_DidCreateContextSuccessfully_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = GpuHost_DidCreateContextSuccessfully_Params;
      break;
      case kGpuHost_DidCreateOffscreenContext_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = GpuHost_DidCreateOffscreenContext_Params;
      break;
      case kGpuHost_DidDestroyOffscreenContext_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = GpuHost_DidDestroyOffscreenContext_Params;
      break;
      case kGpuHost_DidDestroyChannel_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = GpuHost_DidDestroyChannel_Params;
      break;
      case kGpuHost_DidLoseContext_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = GpuHost_DidLoseContext_Params;
      break;
      case kGpuHost_SetChildSurface_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = GpuHost_SetChildSurface_Params;
      break;
      case kGpuHost_StoreShaderToDisk_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = GpuHost_StoreShaderToDisk_Params;
      break;
      case kGpuHost_RecordLogMessage_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = GpuHost_RecordLogMessage_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateGpuHostResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var GpuHost = {
    name: 'viz.mojom.GpuHost',
    kVersion: 0,
    ptrClass: GpuHostPtr,
    proxyClass: GpuHostProxy,
    stubClass: GpuHostStub,
    validateRequest: validateGpuHostRequest,
    validateResponse: null,
    mojomId: 'services/viz/privileged/interfaces/gl/gpu_host.mojom',
    fuzzMethods: {
      didInitialize: {
        params: GpuHost_DidInitialize_Params,
      },
      didFailInitialize: {
        params: GpuHost_DidFailInitialize_Params,
      },
      didCreateContextSuccessfully: {
        params: GpuHost_DidCreateContextSuccessfully_Params,
      },
      didCreateOffscreenContext: {
        params: GpuHost_DidCreateOffscreenContext_Params,
      },
      didDestroyOffscreenContext: {
        params: GpuHost_DidDestroyOffscreenContext_Params,
      },
      didDestroyChannel: {
        params: GpuHost_DidDestroyChannel_Params,
      },
      didLoseContext: {
        params: GpuHost_DidLoseContext_Params,
      },
      setChildSurface: {
        params: GpuHost_SetChildSurface_Params,
      },
      storeShaderToDisk: {
        params: GpuHost_StoreShaderToDisk_Params,
      },
      recordLogMessage: {
        params: GpuHost_RecordLogMessage_Params,
      },
    },
  };
  GpuHostStub.prototype.validator = validateGpuHostRequest;
  GpuHostProxy.prototype.validator = null;
  exports.GpuHost = GpuHost;
  exports.GpuHostPtr = GpuHostPtr;
  exports.GpuHostAssociatedPtr = GpuHostAssociatedPtr;
})();